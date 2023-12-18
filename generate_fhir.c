#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>
#include "cJSON.h"
#include "arena.h"
#include "string_builder.h"
#include "generate_fhir.h"
#include "string_list.h"

Arena *scratch1;
Arena *scratch2;

StringList *structs;
StringList *typeDefs;

ArenaTemp
GetScratch(Arena **conflict)
{
	ArenaTemp result;
	if(conflict == &scratch1) {
		result.arena = scratch2;
		result.pos = scratch2->pos;
	} else {
		result.arena = scratch1;
		result.pos = scratch1->pos;
	}

	return result;
}

bool 
IsStruct(char *name)
{
	return StringList_Includes(structs, name);
}

void
ReleaseScratch(ArenaTemp temp) 
{
	TempEnd(temp);
}

void
WriteFileContents(char *file_name, char* contents, u64 length)
{
	FILE *f = fopen(file_name, "w");
	fwrite(contents, length, 1, f);
	fclose(f);
}

char*
ReadEntireFile(char *file_name)
{
	FILE *f = fopen(file_name, "r");
	fseek(f,  0, SEEK_END);
	long length = ftell(f);
	void *result = malloc(length);
	fseek(f, 0, SEEK_SET);

	fread(result, length, 1, f);
	fclose(f);
	return result;
}

char *
ReferenceToTypeName(Arena *arena, char *ref)
{
	char *start = strrchr(ref, '/');

	char* buff;
	if(start) {
		// NOTE(alex): get rid of '/' character
		start ++;

		int substring_length = strlen(start);
		buff = ArenaPushZero(arena, substring_length + 1);
		strcpy(buff, start);
	} else {
		int substring_length = strlen(ref);
		buff = ArenaPushZero(arena, substring_length + 1);
		strcpy(buff, ref);
	}
	return buff;
}

int
AppendComment(StringBuilder *builder, char *key, char *value) {
	if(!key) {
		return 0;
	}

	return StringBuilder_Append(builder, "/* %s: %s */\n", key, value);
}

int
AppendImports(StringBuilder *builder)
{
	int length = 0;
	length += StringBuilder_Append(builder, "#include <stdbool.h>\n");

	return length;
}

int
AppendHardcodedTypedefs(StringBuilder *builder)
{
	int length = 0;
	length += StringBuilder_Append(builder, "typedef double number;\n");
	length += StringBuilder_Append(builder, "typedef char* xhtml;\n");
	//TODO(alex): remove
	length += StringBuilder_Append(builder, "typedef int ResourceList;\n");

	return length;
}

void
ParseProperty(Arena *arena, cJSON *property, FhirProperty *out)
{
	cJSON *items;
	cJSON *ref;
	cJSON *type;
	cJSON *enum_;
	cJSON *const_;
	out->cardinality = FhirPropertyCardinality_Single;
	if(items = cJSON_GetObjectItem(property, "items")){
		cJSON *ref = cJSON_GetObjectItem(items, "$ref");
		if(ref && ref->type & cJSON_String) {
			out->type = AllocateAndCopyString(arena, ref->valuestring);
		}

		if(type = cJSON_GetObjectItem(property, "type")) {
			if(strcmp(type->valuestring, "array") == 0) {
				out->cardinality = FhirPropertyCardinality_Array;
			}
		}

		if(enum_ = cJSON_GetObjectItem(items, "enum")) {
			// TODO(alex): see if you can get a filtered list somehow
			out->type = AllocateAndCopyString(arena, "string");
		}

	} else if (type = cJSON_GetObjectItem(property, "type")) {
		if(type && type->type & cJSON_String) {
			out->type = AllocateAndCopyString(arena, type->valuestring);
		}
	} else if(ref = cJSON_GetObjectItem(property, "$ref")) {
		if(ref && ref->type & cJSON_String) {
			out->type = AllocateAndCopyString(arena, ref->valuestring);
		}
	} else if(enum_ = cJSON_GetObjectItem(property, "enum")) {
		// TODO(alex): see if you can get a filtered list somehow
		out->type = AllocateAndCopyString(arena, "string");
	} else if(const_ = cJSON_GetObjectItem(property, "const")) {
		// TODO(alex): see if you can get a filtered list somehow
		out->type = AllocateAndCopyString(arena, "string");
	}

	cJSON *description = cJSON_GetObjectItem(property, "description");
	if(description && description->type & cJSON_String){
		out->description = AllocateAndCopyString(arena, description->valuestring);
	}

	cJSON *pattern = cJSON_GetObjectItem(property, "pattern");
	if(pattern && pattern->type & cJSON_String){
		out->pattern = AllocateAndCopyString(arena, pattern->valuestring);
	}
}

void
ParseOneOf(Arena *arena, cJSON *oneOf, FhirResource *resource)
{
	StringList list = StringList_Create(arena);

	int num_children = cJSON_GetArraySize(oneOf);
	for(int i = 0; i < num_children; i++) {
		cJSON *item = cJSON_GetArrayItem(oneOf, i);
		if(item && item->child && item->child->type & cJSON_String) {
			char *ref_string = item->child->valuestring;
			char *struct_name = ReferenceToTypeName(arena, ref_string);
			StringList_Append(&list, struct_name);
		}
	}

	resource->data.oneOf = list;
}

void
ParseDefinition(Arena *arena, cJSON *definition, FhirResource *resource)
{
	resource->name = definition->string;


	cJSON *oneOf = cJSON_GetObjectItem(definition, "oneOf");
	if(oneOf && oneOf->type & cJSON_Array){
		resource->data_type = FhirResourceDataType_OneOf;
		resource->type = FhirResourceType_Union;
		ParseOneOf(arena, oneOf, resource);
	}

	cJSON *type = cJSON_GetObjectItem(definition, "type");
	if(type && type->type & cJSON_String){
		resource->type_str = AllocateAndCopyString(arena, type->valuestring);
		char *type_str_copy = resource->type_str;

		if(strcmp(type_str_copy, "string") == 0) {
			resource->type = FhirResourceType_String;
		} else if(strcmp(type_str_copy, "number") == 0) {
			resource->type = FhirResourceType_Number;
		} else if(strcmp(type_str_copy, "boolean") == 0) {
			resource->type = FhirResourceType_Boolean;
		} else {
			// TODO(alex): not sure what to put here...see "xhtml"
			resource->type = FhirResourceType_String;
		}
	}

	cJSON *description = cJSON_GetObjectItem(definition, "description");
	if(description && description->type & cJSON_String){
		resource->description = AllocateAndCopyString(arena, description->valuestring);
	}

	cJSON *pattern = cJSON_GetObjectItem(definition, "pattern");
	if(pattern && pattern->type & cJSON_String){
		resource->pattern = AllocateAndCopyString(arena, pattern->valuestring);
	}

	cJSON *properties = cJSON_GetObjectItem(definition, "properties");
	if(properties) {
		resource->data_type = FhirResourceDataType_Properties;
		resource->type = FhirResourceType_Struct;

		// TODO(alex): maybe check if any valid properties
		StringList_Append(structs, resource->name);

		int unfiltered_count = cJSON_GetArraySize(properties);
		int filtered_count = 0;

		for(int i = 0; i < unfiltered_count; i++) {
			cJSON *property = cJSON_GetArrayItem(properties, i);
			if(property->string[0] == '_') continue;

			filtered_count ++;
		}


		resource->data.props.count = filtered_count;
		resource->data.props.properties = PushArrayZero(arena, FhirProperty, filtered_count);
		int prop_count = 0;
		for(int i = 0; i < unfiltered_count; i ++) {
			cJSON *property = cJSON_GetArrayItem(properties, i);
			if(property->string[0] == '_') continue;


			FhirProperty *fhir_prop = &resource->data.props.properties[prop_count];
			fhir_prop->key = property->string;
			ParseProperty(arena, property, fhir_prop);
			prop_count++;
		}
	}

}

FhirResource *
ParseDefinitions(Arena *arena, cJSON *definitions, int* num_resources)
{
	int num_definitions = cJSON_GetArraySize(definitions);
	printf("Num Definitions: %d\n", num_definitions);

	FhirResource * resources = PushArray(arena, FhirResource, num_definitions); 
	*num_resources = num_definitions;

	for(int i = 0; i < num_definitions; i++) {
		cJSON *definition = cJSON_GetArrayItem(definitions, i);
		ParseDefinition(arena, definition, &resources[i]);
	}

	return resources;
}


bool
IsMemberNameValid(char *member_name) {
	if(strcmp(member_name, "short") == 0) {
		return false;
	}

	if(strcmp(member_name, "for") == 0) {
		return false;
	}

	if(strcmp(member_name, "case") == 0) {
		return false;
	}
	if(strcmp(member_name, "const") == 0) {
		return false;
	}

	if(StringList_Includes(typeDefs, member_name)) {
		return false;
	}

	return true;
}

int 
AppendStructMember(StringBuilder *builder, char* struct_name, char* member_name, bool is_array) {

	int length = 0;

	if(is_array) {
		length += StringBuilder_Append(builder, "\tint %s_count;\n", member_name);
	}

	if(IsStruct(struct_name)) {
		length += StringBuilder_Append(builder, "\tstruct %s *", struct_name);
	} else {
		length += StringBuilder_Append(builder, "\t%s ", struct_name);
	}

	if(IsMemberNameValid(member_name)){
		length += StringBuilder_Append(builder, "%s;\n", member_name);
	} else {
		length += StringBuilder_Append(builder, "%s_;\n", member_name);
	}

	return length;
}

void
AppendStructDefinition(Arena *arena, StringBuilder *builder, FhirResource *res)
{
#if 1
	if(res->data_type != FhirResourceDataType_Properties) return;
	//TODO(alex): why can I not include this?
	if(res->data.props.count == 0) {
		return;
	}
#endif

	StringBuilder_Append(builder, "struct %s {\n", res->name);
	for(int i = 0; i < res->data.props.count; i++) {
		FhirProperty prop = res->data.props.properties[i];
		if(!prop.type) continue;

		if(prop.description) {
			AppendComment(builder, "description", prop.description);
		}
		if(prop.pattern) {
			AppendComment(builder, "pattern", prop.pattern);
		}

		ArenaTemp scratch = GetScratch(&arena);

		char *clean_type_name = ReferenceToTypeName(scratch.arena, prop.type);
		bool is_array = prop.cardinality == FhirPropertyCardinality_Array;
		AppendStructMember(builder, clean_type_name, prop.key, is_array);

		TempEnd(scratch);
	}
	StringBuilder_Append(builder, "};\n");
	StringBuilder_Append(builder, "typedef struct %s %s;\n", res->name, res->name);
}

void
AppendUnionDefinition(Arena *arena, StringBuilder *builder, FhirResource *res)
{
	if(res->data_type != FhirResourceDataType_OneOf) {
		printf("Calling union definition incorrectly, must have data_type = OneOf\n");
		return;
	}

	StringBuilder_Append(builder, "typedef union %s {\n", res->name);
	StringNode *node = res->data.oneOf.start;

	while(node != NULL) {
		StringBuilder_Append(builder, "\tstruct %s*;\n", node->value);
		node = node->next;
	}

	StringBuilder_Append(builder, "} %s;\n", res->name);
}

void
AppendTypedefDefinition(StringBuilder *builder, FhirResource *res)
{
	if(res->type == FhirResourceType_String) {
		StringBuilder_Append(builder, "typedef char* %s; \n", res->name);
	} else if(res->type == FhirResourceType_Number) {
		StringBuilder_Append(builder, "typedef double %s; \n", res->name);
	} else if(res->type == FhirResourceType_Boolean) {
		StringBuilder_Append(builder, "typedef bool %s; \n", res->name);
	}
}

u64
GenerateFile(StringBuilder *builder, FhirResource *resources, int resource_count)
{
	AppendImports(builder);
	AppendHardcodedTypedefs(builder);

#if 1
	for(int i = 0; i < resource_count; i++) {
		FhirResource res = resources[i];

		if(res.type == FhirResourceType_Struct) {
			StringBuilder_Append(builder, "struct %s;\n", res.name, res.name);
		}
	}
#endif

	for(int i = 0; i < resource_count; i++) {
		FhirResource res = resources[i];
		ArenaTemp scratch = GetScratch(0);

		if(res.type != FhirResourceType_Struct ||
			(res.type == FhirResourceType_Struct && res.data.props.count != 0)) {
			if(res.description) {
				AppendComment(builder, "description", res.description);
			}

			if(res.pattern) {
				AppendComment(builder, "pattern", res.pattern);
			}
		}

		if(res.type == FhirResourceType_Struct) {
			AppendStructDefinition(scratch.arena, builder, &res);
		} else if(res.type == FhirResourceType_Union) {
#if 0 // TODO(alex): fix
			AppendUnionDefinition(scratch.arena, builder, &res);
#endif
		} else if (res.type != FhirResourceType_Unknown){
			AppendTypedefDefinition(builder, &res);
			StringList_Append(typeDefs, res.name);
		}

		StringBuilder_Append(builder, "\n");

		TempEnd(scratch);
	}

	return StringBuilder_GetLength(builder);
}

void
AppendSerializeImports(StringBuilder *builder) {
	StringBuilder_Append(builder, "#include \"string_builder.h\"\n");
	StringBuilder_Append(builder, "#include \"fhir_structs_gen.h\"\n");
}

char *
ToLower(Arena *arena, char *str)
{
	int len = strlen(str) + 1;
	char *buff = PushArray(arena, char, len);
	strcpy(buff, str);
	for(int i = 0; i < len; i++) {
		buff[i] = tolower(buff[i]);
	}
	buff[len-1] = '\0';
	return buff;
}

char *
StructNameFromProperty(Arena *arena, FhirProperty *prop)
{
	return ReferenceToTypeName(arena, prop->type);
}

char *
StructNameFromResource(FhirResource *res)
{
	return res->name;
}

char *
MemberNameFromProperty(Arena *arena, FhirProperty *prop)
{
	char *member_name = prop->key;
	StringBuilder member_name_builder = StringBuilder_Create(arena, 1024);
	StringBuilder_Append(&member_name_builder, "%s", member_name);

	if(!IsMemberNameValid(member_name_builder.string)) {
		StringBuilder_Append(&member_name_builder, "_");
	}

	return member_name_builder.string;
}


void 
AppendStructSerializeFunctionHead(StringBuilder *builder, FhirResource *res, char *argument_name)
{
	char *func_format = "void %s_Serialize(StringBuilder *builder, %s *%s, char* key, int indent)";
	char *struct_name = StructNameFromResource(res);
	StringBuilder_Append(builder, func_format, struct_name, struct_name, argument_name);
}

void
AppendStringSerializeFunctionHead(StringBuilder *builder, FhirResource *res, char *argument_name)
{
	char *func_format = "void %s_Serialize(StringBuilder *builder, %s %s, char* key, int indent)";
	char *struct_name = StructNameFromResource(res);
	StringBuilder_Append(builder, func_format, struct_name, struct_name, argument_name);
}

void 
AppendStructSerializeFunction(StringBuilder *builder, FhirResource *res, char *argument_name)
{
	ArenaTemp scratch = GetScratch(0);


	char *null_check = "\tif(!%s) return;\n";
	StringBuilder_Append(builder, null_check, argument_name);

	char *sb_format = "\tStringBuilder_Append(builder, \"\\\"%s\\\": {\\n\");\n";
	StringBuilder_Append(builder, sb_format, argument_name);
	for(int i = 0; i < res->data.props.count; i++) {
		FhirProperty prop = res->data.props.properties[i];
		char *member_name = MemberNameFromProperty(scratch.arena, &prop);
		char *struct_name = StructNameFromProperty(scratch.arena, &prop);
		char *call_serialize = "\t%s_Serialize(builder, %s->%s, \"%s\", indent);\n";
			StringBuilder_Append(builder, call_serialize, struct_name, argument_name, member_name, member_name);

		if(i != res->data.props.count - 1) {
			char *trailing_comma = "\tStringBuilder_Append(builder, \",\\n\");\n";
			StringBuilder_Append(builder, trailing_comma);
		}
	}
	StringBuilder_Append(builder, "\tStringBuilder_Append(builder, \"}\");\n");

	ReleaseScratch(scratch);
}

void
AppendStringSerializeFunction(StringBuilder *builder, FhirResource *res, char *argument_name) 
{
	char *sb_format = "\tStringBuilder_Append(builder, \"\\\"%s\\\": \"\\n\");\n";
	StringBuilder_Append(builder, sb_format, argument_name);


	StringBuilder_Append(builder, "\tStringBuilder_Append(builder, \"\"\");\n");
}

char *
ArgumentNameFromResource(Arena *arena, FhirResource *res)
{
	char *struct_name = StructNameFromResource(res);
	StringBuilder arg_name_builder = StringBuilder_Create(arena, 1024);
	StringBuilder_Append(&arg_name_builder, "%s", ToLower(arena, struct_name));

	if(!IsMemberNameValid(arg_name_builder.string)) {
		StringBuilder_Append(&arg_name_builder, "_");
	}

	return arg_name_builder.string;
}

void
AppendSerializeFunction(StringBuilder *builder, FhirResource *res)
{
	ArenaTemp temp = GetScratch(0);

	char *struct_name = res->name;
	
	char *argument_name = ArgumentNameFromResource(temp.arena, res);
	if(res->type == FhirResourceType_Struct) {
		AppendStructSerializeFunctionHead(builder, res, argument_name);
		StringBuilder_Append(builder, "{\n");
		AppendStructSerializeFunction(builder, res, argument_name);

	} else if(res->type != FhirResourceType_Unknown){
		AppendStringSerializeFunctionHead(builder, res, argument_name);
		StringBuilder_Append(builder, "{\n");
	}

	StringBuilder_Append(builder, "}\n");

	ReleaseScratch(temp);
}

void
AppendSerializeFunctionDeclaration(StringBuilder *builder, FhirResource *res)
{
	ArenaTemp temp = GetScratch(0);
	char *argument_name = ArgumentNameFromResource(temp.arena, res);
	if(res->type == FhirResourceType_Struct) {
		AppendStructSerializeFunctionHead(builder, res, argument_name);
		StringBuilder_Append(builder, ";\n");
	} else if(res->type != FhirResourceType_Unknown){
		AppendStringSerializeFunctionHead(builder, res, argument_name);
		StringBuilder_Append(builder, ";\n");
	}

	ReleaseScratch(temp);
}

void
GenerateSerializationFile(StringBuilder *builder, FhirResource *resources, int resource_count)
{
	AppendSerializeImports(builder);
	for(int i = 0; i < resource_count; i++) {
		FhirResource res = resources[i];
		if(res.data_type == FhirResourceDataType_Properties &&
			res.data.props.count == 0) {
			continue;
		}
		AppendSerializeFunctionDeclaration(builder, &res); 
		StringBuilder_Append(builder, "\n");
	}
	for(int i = 0; i < resource_count; i++) {
		FhirResource res = resources[i];
		if(res.data_type == FhirResourceDataType_Properties &&
			res.data.props.count == 0) {
			continue;
		}
		AppendSerializeFunction(builder, &res); 
		StringBuilder_Append(builder, "\n");
	}
}

int main() {
	GenerateScratchArenas(&scratch1, &scratch2, 32*1024*1024);

	void *json_string = ReadEntireFile("./fhir.schema.json");
	cJSON *json = cJSON_Parse(json_string);
	int size = cJSON_GetArraySize(json);

	Arena *arena = ArenaAlloc(32*1024*1024);

	// TODO(alex): Gross
	StringList _structs = StringList_Create(arena);
	structs = &_structs;
	StringList _typeDefs = StringList_Create(arena);
	typeDefs = &_typeDefs;

	FhirResource *resources;
	int num_resources = 0;
	for(int i = 0; i < size; i++) {
		cJSON *child = cJSON_GetArrayItem(json, i);
		if(strcmp(child->string, "definitions") == 0) {
			resources = ParseDefinitions(arena, child, &num_resources);
		}
	}

	printf("Num Resources: %d\n", num_resources);

	ArenaTemp temp = GetScratch(0);
	StringBuilder builder = StringBuilder_Create(temp.arena, 10*1024*1024);
	GenerateFile(&builder, resources, num_resources);
	WriteFileContents("fhir_structs_gen.h", builder.string, StringBuilder_GetLength(&builder));
	ReleaseScratch(temp);

	StringBuilder serialize_builder = StringBuilder_Create(temp.arena, 10*1024*1024);
	GenerateSerializationFile(&serialize_builder, resources, num_resources);
	WriteFileContents("fhir_serialize_gen.c", serialize_builder.string, StringBuilder_GetLength(&serialize_builder));
	ReleaseScratch(temp);

	return 0;
}
