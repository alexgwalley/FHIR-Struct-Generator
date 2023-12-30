#include <windows.h>
#include <cstdio>

#include "code/base/base_inc.h"
#include "code/os/os_inc.h"
#include "fhir_structure.h"
#include "resource.h"
#include "fhir_class.h"
#include "arena_struct_exporter.h"
#include "metadata.h"
#include "cJSON.h"

#include "code/base/base_inc.c"
#include "code/os/os_inc.c"
#include "fhir_structure.cc"
#include "resource.cc"
#include "fhir_class.cc"
#include "metadata.cc"
#include "manual_deserialization.cc"
#include "cJSON.c"
#include "arena_struct_exporter.cc"

#include "os/core/os_entry_point.c"

void*
ReadEntireFile(Arena *arena, String8 file_name)
{
	FILE *f = fopen((const char*)file_name.str, "r");
	fseek(f,  0, SEEK_END);
	long length = ftell(f);
	void *result = malloc(length);
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
			return PushStr8F(arena, "typedef boolean %.*s;\n",
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
			ClassDefinition *def = GetClassDefinitionFromList(all, node->string);
			OutputClassDefinitionImpl(arena, all, def, completed, f);
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

	fflush(f);
	fclose(f);
	ScratchEnd(scratch);
}


void
OutputClassMetadata(Arena *arena, String8 file_name, ClassDefinitionList *list)
{
	Temp scratch = ScratchBegin(&arena, 1);
	FILE *f = nullptr;
	fopen_s(&f, (char*)file_name.str, "w");
	Assert(f);

	String8List result_list = { 0 };
	Str8ListPushF(scratch.arena, &result_list, "ClassMetadata class_metadata[] =\n");
	Str8ListPushF(scratch.arena, &result_list, "{\n");

	for (ClassDefinitionNode *node = list->first;
		node;
		node = node->next)
	{
		ClassMetadata *meta = ClassMetadataFromClassDefinition(scratch.arena, &node->def);
		String8 str = SerializeClassMetadata(scratch.arena, meta);
		Str8ListPush(scratch.arena, &result_list, str);
	}


	Str8ListPushF(scratch.arena, &result_list, "};");
	String8 result = Str8ListJoin(scratch.arena, result_list, 0);
	fwrite(result.str, result.size, 1, f);

	fflush(f);
	fclose(f);
	ScratchEnd(scratch);
}

void
OutputClassDefinitionDeserialization(Arena *arena,
                                     String8 header_file_name,
                                     String8 cc_file_name,
                                     ClassDefinitionList *list)
{

#if 0
	Temp scratch = ScratchBegin(&arena, 1);
	FILE *f;
	fopen_s(&f, (char*)cc_file_name.str, "w");
	Assert(f);

	DeserializationOptions opts = { 0 };
	opts.flags = (int)DeserializationFlag::USE_STRING8 |
				 (int)DeserializationFlag::USE_CJSON;
	
	String8 type_from_string_table = DeserializationResourceTypeFromString8Table(scratch.arena, opts, list);
	fwrite(type_from_string_table.str, type_from_string_table.size, 1, f);

	String8 type_from_string = DeserializationResourceTypeFromString8(scratch.arena, opts);
	fwrite(type_from_string.str, type_from_string.size, 1, f);

	FILE *header_file;
	fopen_s(&header_file, (char*)header_file_name.str, "w");
	Assert(header_file);

	String8 define_header = Str8Lit("#ifndef FHIR_DESERIALIZATION_H\n"
	                                "#define FHIR_DESERIALIZATION_H\n");
	fwrite(define_header.str, define_header.size, 1, header_file);

	ClassDefinitionNode *node = list->first;
	for (int i = 0; i < list->count; i++)
	{
		String8 des = DeserializationCodeFrom(scratch.arena, opts, &node->def, list);
		fwrite(des.str, des.size, 1, f);
		String8 header = DeserializationCodeHeaderFrom(scratch.arena, opts, &node->def);
		fwrite(header.str, header.size, 1, header_file);
		node = node->next;
	}


	String8 end_header = Str8Lit("#endif");
	fwrite(end_header.str, end_header.size, 1, header_file);

	fflush(f);
	fclose(f);
	fflush(header_file);
	fclose(header_file);

	ScratchEnd(scratch);
#endif
}


void
OutputClassDefinitionSerialization(Arena *arena,
                                     String8 header_file_name,
                                     String8 cc_file_name,
                                     ClassDefinitionList *list)
{
#if 0
	Temp scratch = ScratchBegin(&arena, 1);
	FILE *f;
	fopen_s(&f, (char*)cc_file_name.str, "w");
	Assert(f);

	DeserializationOptions opts = { 0 };
	opts.flags = (int)DeserializationFlag::USE_STRING8 |
				 (int)DeserializationFlag::USE_CJSON;
	
	FILE *header_file;
	fopen_s(&header_file, (char*)header_file_name.str, "w");
	Assert(header_file);

	String8 define_header = Str8Lit("#ifndef FHIR_SERIALIZATION_H\n"
	                                "#define FHIR_SERIALIZATION_H\n");
	fwrite(define_header.str, define_header.size, 1, header_file);

	ClassDefinitionNode *node = list->first;
	for (int i = 0; i < list->count; i++)
	{
		String8 des = SerializationCodeFrom(scratch.arena, opts, &node->def, list);
		fwrite(des.str, des.size, 1, f);
		String8 header = SerializationCodeHeaderFrom(scratch.arena, opts, &node->def);
		fwrite(header.str, header.size, 1, header_file);
		node = node->next;
	}


	String8 end_header = Str8Lit("#endif");
	fwrite(end_header.str, end_header.size, 1, header_file);

	fflush(f);
	fclose(f);
	fflush(header_file);
	fclose(header_file);

	ScratchEnd(scratch);
#endif
}

function void
EntryPoint(CmdLine *cmdln)
{

	OS_InitReceipt os_init = OS_Init();
	// Deserialize fhir files
	printf("Loading fhir structures...\n");

	Arena *arena = ArenaAlloc(Gigabytes(3));
	StructureDefinitionList list = { 0 };
	GetStructureDefinitionsForFile(arena, &list, Str8Lit("fhir/profiles-resources.json"));
#if 1
	GetStructureDefinitionsForFile(arena, &list, Str8Lit("fhir/profiles-types.json"));
	GetStructureDefinitionsForFile(arena, &list, Str8Lit("fhir/profiles-others.json"));
#endif

	printf("Converting to resources...\n");
	// Map to resources
	StructureDefinitionNode *ptr = list.first;
	ResourceList *resource_list = PushArray(arena, ResourceList, 1);
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

	OutputClassDefinitions(arena,
	                       Str8Lit("fhir_class_definitions.h"),
	                       &class_defs);

	OutputClassMetadata(arena,
						Str8Lit("fhir_class_metadata.h"),
						&class_defs);
	OutputClassDefinitionDeserialization(arena, 
	                                     Str8Lit("fhir_class_deserialization.h"),
	                                     Str8Lit("fhir_class_deserialization.cc"),
	                                     &class_defs);
	OutputClassDefinitionSerialization(arena, 
	                                     Str8Lit("fhir_class_serialization.h"),
	                                     Str8Lit("fhir_class_serialization.cc"),
	                                     &class_defs);

	// NOTE(alex): should have two options, one using c++ stdlib
	// another to use arenas/Ryan's system :)
}