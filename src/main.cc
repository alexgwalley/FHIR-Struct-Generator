#include <windows.h>
#include <cstdio>

#include "core.h"
#include "arena.h"
#include "string8.h"
#include "threading.h"

#include "fhir_structure.h"
#include "resource.h"
#include "fhir_class.h"
#include "arena_struct_exporter.h"
#include "metadata.h"
#include "cJSON.h"

#include "core.c"
#include "arena.c"
#include "string8.cc"
#include "threading.c"

#include "fhir_structure.cc"
#include "resource.cc"
#include "fhir_class.cc"
#include "metadata.cc"

//#include "manual_deserialization.cc"
#include "cJSON.c"
#include "arena_struct_exporter.cc"

void*
ReadEntireFile(Arena *arena, String8 file_name)
{
	FILE *f = fopen((const char*)file_name.str, "r");
	fseek(f,  0, SEEK_END);
	long length = ftell(f);
	void *result = ArenaPush(arena, length);
	fseek(f, 0, SEEK_SET);

	fread(result, length, 1, f);
	fclose(f);
	return result;
}

void
GetStructureDefinitionsForFile(Arena *arena, StructureDefinitionList* list, String8 file_path)
{
	Temp scratch = ScratchBegin(&arena, 1);
	void *json_string = ReadEntireFile(scratch.arena, file_path);
	cJSON *json = cJSON_Parse((char*)json_string);

	cJSON *entry = cJSON_GetObjectItem(json, "entry");
	if (!entry)
	{
		printf("Could not find entry\n");
	}

	int entry_len = cJSON_GetArraySize(entry);
	for (int i = 0; i < entry_len; i++)
	{
		cJSON *item = cJSON_GetArrayItem(entry, i);
		cJSON *resource = cJSON_GetObjectItem(item, "resource");
		cJSON *resourceType = cJSON_GetObjectItem(resource, "resourceType");
		String8 type = Str8C(cJSON_GetStringValue(resourceType));
		if (!Str8Match(type, Str8Lit("StructureDefinition"), 0)) continue;

		StructureDefinition *def = StructureDefinitionFromJson(arena, resource);
		SDListPush(arena, list, def);
	}

	cJSON_free(json);
	ScratchEnd(scratch);
}

ClassDefinition*
GetClassDefinitionFromList(ClassDefinitionList *list, String8 name)
{
	ClassDefinitionNode *node = list->first;
	for (int i = 0; i < list->count; i++)
	{
		if (Str8Match(node->def.name, name, 0))
		{
			return &node->def;
		}
		node = node->next;
	}

	return nullptr;
}

ClassDefinitionList
GetAllClassDefinitions(Arena *arena, ResourceList *res_list)
{
	Temp scratch = ScratchBegin(&arena, 1);
	ClassDefinitionList result = { 0 };
	ResourceNode *ptr = res_list->first;
	for (int i = 0; i < res_list->count; i++)
	{
		ClassDefinitionList def_list = GetClassDefinitionsFromResource(arena, &ptr->resource);
		result = CDListMerge(result, def_list);
		ptr = ptr->next;
	}

	ScratchEnd(scratch);
	return result;
}


String8
TypedefFromValueType(Arena *arena, StringValueTypePair svtp, ClassDefinitionList *list)
{
	switch (svtp.type)
	{
		case ValueType::Boolean:
			return PushStr8F(arena, "typedef int %.*s;\n",
			                 svtp.str.size, svtp.str.str);
		case ValueType::PositiveInt:
		case ValueType::UnsignedInt:
			return PushStr8F(arena, "typedef unsigned long %.*s;\n",
					svtp.str.size, svtp.str.str);
		case ValueType::ArrayCount:
			return Str8Lit("");
		case ValueType::Decimal:
			return PushStr8F(arena, "typedef double %.*s;\n",
					svtp.str.size, svtp.str.str);
		case ValueType::ResourceType:
		{
			Temp scratch = ScratchBegin(&arena, 1);
			String8List result_list = { 0 };
			Str8ListPush(scratch.arena, &result_list,
			              Str8Lit("typedef enum class ResourceType {\n"));
			Str8ListPush(scratch.arena, &result_list,
			              Str8Lit("\tUnknown,\n"));
			for (ClassDefinitionNode *node = list->first;
				node;
				node = node->next)
			{
				Str8ListPushF(scratch.arena, 
				              &result_list,
				              "\t%.*s,\n", 
				              node->def.name.size,
				              node->def.name.str);
			}
			Str8ListPush(scratch.arena, &result_list,
			              Str8Lit("} ResourceType;\n"));
			String8 result = Str8ListJoin(arena, result_list, 0);
			ScratchEnd(scratch);
			return result;
		}
		default:
			return PushStr8F(arena, "typedef String8 %.*s;\n",
				svtp.str.size, svtp.str.str);
}
}

String8
OutputBaseTypes(Arena *arena, ClassDefinitionList *list)
{
	Temp scratch = ScratchBegin(&arena, 1);
	String8List result_list = { 0 };

	for (int i = 0; i < ArrayCount(str_type_pairs_export); i++)
	{
		StringValueTypePair svtp = str_type_pairs_export[i];
		String8 output_typedef = TypedefFromValueType(scratch.arena, svtp, list);
		Str8ListPush(scratch.arena, &result_list, output_typedef);
	}

	String8 result = Str8ListJoin(arena, result_list, 0);
	ScratchEnd(scratch);
	return result;
}

void
OutputClassDefinitionImpl(Arena *arena, 
                          ClassDefinitionList *all,
                          ClassDefinition *def,
                          String8List *completed,
                          FILE *f)
{
	String8Node *node = completed->first;
	for (int i = 0; i < completed->node_count; i++)
	{
		if (Str8Match(node->string, def->name, 0))
			return;
		node = node->next;
	}

	if (def->inherits.node_count > 0)
	{
		node = def->inherits.first;
		for (int i = 0; i < def->inherits.node_count; i++)
		{
			ClassDefinition *curr_def = GetClassDefinitionFromList(all, node->string);
			OutputClassDefinitionImpl(arena, all, curr_def, completed, f);
			node = node->next;
		}
	}

	Temp scratch = ScratchBegin(&arena, 1);
#if 0
	if (def->members.count > 0)
	{
		ClassMemberNode *node = def->members.first;
		for (int i = 0; i < def->members.count; i++)
		{
			StringValueTypePair *pair = ValueTypesGetByType(scratch.arena,
			                                               node->mem.types,
			                                               ValueType::Class_Reference);
			if (pair)
			{
				ClassDefinition *def = GetClassDefinitionFromList(all, pair->str);
				OutputClassDefinitionImpl(arena, all, def, completed, f);
			}
			node = node->next;
		}
	}
#endif

	String8 class_def_str = OutputClassDefinition(scratch.arena, def);
	fwrite(class_def_str.str, class_def_str.size, 1, f);
	ScratchEnd(scratch);

	Str8ListPush(arena, completed, def->name);
}

void
OutputClassDefinitions(Arena *arena, String8 file_name, ClassDefinitionList *list)
{
	Temp scratch = ScratchBegin(&arena, 1);
	FILE *f = nullptr;
	fopen_s(&f, (char*)file_name.str, "w");
	Assert(f);

	String8 _namespace = Str8Lit("namespace fhir_r4 {\n");
	fwrite(_namespace.str, _namespace.size, 1, f);

	String8 primative_types = OutputBaseTypes(arena, list);
	String8List completed = { 0 };
	fwrite(primative_types.str, primative_types.size, 1, f);

	ClassDefinitionNode *node = list->first;
	for (int i = 0; i < list->count; i++)
	{
		String8 typedef_string = PushStr8F(scratch.arena,
		                                   "class %.*s;\n",
		                                   node->def.name.size,
		                                   node->def.name.str);

		fwrite(typedef_string.str, typedef_string.size, 1, f);
		node = node->next;
	}

	node = list->first;
	for (int i = 0; i < list->count; i++)
	{
		OutputClassDefinitionImpl(scratch.arena, list, &node->def, &completed, f);
		node = node->next;
	}


	String8 close_namespace = Str8Lit("}\n");
	fwrite(close_namespace.str, close_namespace.size, 1, f);

	fflush(f);
	fclose(f);
	ScratchEnd(scratch);
}

String8
GperfClassName(Arena *arena, ClassDefinition *def)
{
	return PushStr8F(arena, "%S_Gperf", def->name);
}

String8
GperfFunctionLookup(Arena *arena, ClassDefinition *def)
{
	return PushStr8F(arena, "%S_MemberLookup", def->name);
}

String8
SingleClassGperf(Arena *arena, ClassDefinition *def)
{

	Temp scratch = ScratchBegin(&arena, 1);
	String8List result_list = { 0 };

	Str8ListPush(scratch.arena, &result_list, Str8Lit("%language=C++\n"));
	Str8ListPush(scratch.arena, &result_list, Str8Lit("%compare-strncmp\n"));
	Str8ListPush(scratch.arena, &result_list, Str8Lit("%readonly-tables\n"));
	String8 lookup_function_name = PushStr8F(scratch.arena, "%S", GperfFunctionLookup(arena, def));
	Str8ListPushF(scratch.arena,
	              &result_list,
	              "%%define lookup-function-name %S\n", lookup_function_name);
	Str8ListPushF(scratch.arena,
	              &result_list,
	              "%%enum\n", def->name);
	Str8ListPushF(scratch.arena,
	              &result_list,
	              "%%define word-array-name word_array_%S\n", def->name);
	Str8ListPushF(scratch.arena,
	              &result_list,
	              "%%define class-name %S\n", GperfClassName(arena, def));
	Str8ListPush(scratch.arena, &result_list, Str8Lit("struct fhir_deserialize::MemberNameAndOffset;\n"));
	Str8ListPush(scratch.arena, &result_list, Str8Lit("%%\n"));


	ClassMetadata *meta = ClassMetadataFromClassDefinition(scratch.arena, def);
	int i = 0;
	for (ClassMemberNode *node = def->members.first; node; node = node->next, i++)
	{
		ClassMember mem = node->mem;
		U16 offset = meta->members[i].offset;

		for (int illegal_index = 0; illegal_index < ArrayCount(illegal_member_names); illegal_index++)
		{
			String8 illegal_name = illegal_member_names_replacement[illegal_index];
			if (Str8Match(mem.name, illegal_name, 0))
			{
				String8 original = illegal_member_names[illegal_index];
				if (mem.type == ClassMemberType::Union)
				{
					for (int j = 0; j < mem.value_type.types.num_types; j++)
					{
	
						ValueTypeAndName tan;
						tan.type = mem.value_type.types.types[j];
						tan.name = mem.value_type.types.type_names[j];
						String8 union_name = GetUnionInternalTypeName(scratch.arena,
						                                              tan.type, tan.name,
						                                              original);
						Str8ListPushF(scratch.arena,
						              &result_list,
						              "%S, 0x%x, %d, %d\n", union_name, offset, i, j);
					}
				}
				else if (mem.type == ClassMemberType::Single)
				{
					Str8ListPushF(scratch.arena,
					              &result_list,
					              "%S, 0x%x, %d, %d\n", original, offset, i, -1);
				}
			}
		}

		if (mem.type == ClassMemberType::Union)
		{
			for (int j = 0; j < mem.value_type.types.num_types; j++)
			{

				ValueTypeAndName tan;
				tan.type = mem.value_type.types.types[j];
				tan.name = mem.value_type.types.type_names[j];
				String8 union_name = GetUnionInternalTypeName(scratch.arena,
				                                              tan.type, tan.name,
				                                              mem.name);
				Str8ListPushF(scratch.arena,
				              &result_list,
				              "%S, 0x%x, %d, %d\n", union_name, offset, i, j);
			}
		}
		else if(mem.type == ClassMemberType::Single)
		{
			Str8ListPushF(scratch.arena,
						&result_list,
						"%S, 0x%x, %d, %d\n", mem.name, offset, i, -1);
		}
	}

	String8 result = Str8ListJoin(arena, result_list, 0);
	ScratchEnd(scratch);
	return result;
}

void
OutputGperfFiles(Arena *arena, String8 in_dir_name, ClassDefinitionList *list)
{
	// NOTE(agw): guarantee null terminator
	String8 dir_name = PushStr8Copy(arena, in_dir_name);

	// TODO(agw): make this operating system agnostic
	DWORD attrib = GetFileAttributes((char*)dir_name.str);
	if (attrib == INVALID_FILE_ATTRIBUTES ||
		attrib & FILE_ATTRIBUTE_DIRECTORY)
	{
		CreateDirectory((char*)dir_name.str, 0);
	}

	String8 gperf_inc_file_name = PushStr8F(arena, "generated/gperf-inc.cc");

	FILE *gperf_inc_file;
	fopen_s(&gperf_inc_file, (char*)gperf_inc_file_name.str, "w");

	for (ClassDefinitionNode *node = list->first;
		node;
		node = node->next)
	{
		String8 file_name = PushStr8F(arena, "%S/%S.gperf", dir_name, node->def.name);
		String8 gperf_contents = SingleClassGperf(arena, &node->def);

		FILE *f;
		fopen_s(&f, (char*)file_name.str, "w");
		if (!f)
			Assert(false);
		fwrite(gperf_contents.str, gperf_contents.size, 1, f);
		fclose(f);

		String8 include_declaration = PushStr8F(arena,
		                                        "namespace %S_gperf {\n",
		                                        node->def.name);
		fwrite(include_declaration.str, include_declaration.size, 1, gperf_inc_file);

		include_declaration = PushStr8F(arena,
										"#include \"generated/gperf_hash_tables/%S-Member-Lookup.cc\"\n",
										node->def.name);
		fwrite(include_declaration.str, include_declaration.size, 1, gperf_inc_file);

		include_declaration = Str8Lit("};\n");
		fwrite(include_declaration.str, include_declaration.size, 1, gperf_inc_file);

		String8 gperf_call = PushStr8F(arena, 
		                               "gperf.exe -t %S  --output-file=src/generated/gperf_hash_tables/%S-Member-Lookup.cc -CGD",
		                               file_name,
		                               node->def.name);
		system((char*)gperf_call.str);
	}

	Temp scratch = ScratchBegin(&arena, 1);
	String8List result_list = { 0 };

	Str8ListPush(scratch.arena, &result_list, Str8Lit("const fhir_deserialize::MemberNameAndOffset *\n"));
	Str8ListPush(scratch.arena, &result_list, Str8Lit("ClassMemberLookup(fhir_deserialize::ResourceType type, String8 member_key)\n"));
	Str8ListPush(scratch.arena, &result_list, Str8Lit("{\n"));
	Str8ListPush(scratch.arena, &result_list, Str8Lit("\tswitch (type)"));
	Str8ListPush(scratch.arena, &result_list, Str8Lit("\t{\n"));

	
	for (ClassDefinitionNode *node = list->first;
		node;
		node = node->next)
	{

		Str8ListPushF(scratch.arena, &result_list, "\t\tcase fhir_deserialize::ResourceType::%S:\n", node->def.name);
		Str8ListPushF(scratch.arena,
		              &result_list,
		              "\t\t\treturn %S_gperf::%S_Gperf::%S_MemberLookup((char*)member_key.str, member_key.size);\n",
		              node->def.name,
		              node->def.name,
		              node->def.name);
	}

	Str8ListPush(scratch.arena, &result_list, Str8Lit("\t}\n"));
	Str8ListPush(scratch.arena, &result_list, Str8Lit("}\n"));
	String8 switch_function = Str8ListJoin(arena, result_list, 0);
	fwrite(switch_function.str, (size_t)switch_function.size, 1, gperf_inc_file);
	ScratchEnd(scratch);

	fclose(gperf_inc_file);
}

void
OutputClassMetadata(Arena *arena, String8 file_name, ClassDefinitionList *list)
{
	Temp scratch = ScratchBegin(&arena, 1);
	FILE *f = nullptr;
	fopen_s(&f, (char*)file_name.str, "w");
	Assert(f);

	String8List result_list = { 0 };

	Str8ListPushF(scratch.arena, &result_list, "namespace fhir_deserialize {\n");
	Str8ListPushF(scratch.arena, &result_list, "ClassMetadata class_metadata[] =\n");
	Str8ListPushF(scratch.arena, &result_list, "{\n");

	ClassDefinition zeroed = { 0 };
	zeroed.name = Str8Lit("Unknown");
	ClassMetadata *meta = ClassMetadataFromClassDefinition(scratch.arena, &zeroed);
	String8 str = SerializeClassMetadata(scratch.arena, meta);
	Str8ListPushF(scratch.arena, &result_list, "%.*s,",
				str.size, str.str);

	for (ClassDefinitionNode *node = list->first;
		node;
		node = node->next)
	{
		ClassMetadata *curr_meta = ClassMetadataFromClassDefinition(scratch.arena, &node->def);
		String8 str = SerializeClassMetadata(scratch.arena, curr_meta);
		Str8ListPushF(scratch.arena, &result_list, "%.*s,",
		              str.size, str.str);
	}


	Str8ListPushF(scratch.arena, &result_list, "};");
	Str8ListPushF(scratch.arena, &result_list, "};");
	String8 result = Str8ListJoin(scratch.arena, result_list, 0);
	fwrite(result.str, result.size, 1, f);

	fflush(f);
	fclose(f);
	ScratchEnd(scratch);
}

int main()
{
	// Deserialize fhir files
	printf("Loading fhir structures...\n");

	Arena *arena = ArenaAlloc(Gigabytes(3));

	StructureDefinitionList list = { 0 };
	//TODO(agw): take directory name input
	GetStructureDefinitionsForFile(arena, &list, Str8Lit("fhir/profiles-resources.json"));
	GetStructureDefinitionsForFile(arena, &list, Str8Lit("fhir/profiles-types.json"));
	GetStructureDefinitionsForFile(arena, &list, Str8Lit("fhir/profiles-others.json"));

	printf("Converting to resources...\n");
	// Map to resources
	StructureDefinitionNode *ptr = list.first;
	ResourceList *resource_list = PushStruct(arena, ResourceList);
	Temp scratch = ScratchBegin(&arena, 1);
	for (int i = 0; i < list.count; i++)
	{
		Resource *res = ResourceFromStructureDefinition(arena, &ptr->def);
		if (res)
		{
			ResourceListPush(arena, resource_list, res);
		}
		ptr = ptr->next;
		//printf("Resource: %.*s\n", (int)res->name.size, res->name.str);
	}
	ScratchEnd(scratch);

	// Map to class definitions
	ClassDefinitionList class_defs = GetAllClassDefinitions(arena, resource_list);

	// Calculate Metadata and final form

	// Output class definitions

	scratch = ScratchBegin(&arena, 1);
	OutputClassDefinitions(scratch.arena,
	                       Str8Lit("fhir_class_definitions.h"),
	                       &class_defs);
	ScratchEnd(scratch);

	scratch = ScratchBegin(&arena, 1);
	OutputClassMetadata(arena,
						Str8Lit("fhir_class_metadata.h"),
						&class_defs);
	ScratchEnd(scratch);

	scratch = ScratchBegin(&arena, 1);
	OutputGperfFiles(arena, Str8Lit("./generated/gperf_class_files"), &class_defs);
	ScratchEnd(scratch);
}