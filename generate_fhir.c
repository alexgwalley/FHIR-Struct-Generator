#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "cJSON.h"
#include "arena.h"
#include "generate_fhir.h"


Arena *scratch1;
Arena *scratch2;

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

void
ReleaseScratch(ArenaTemp temp) 
{
	TempEnd(temp);
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
AllocateAndCopyString(Arena *arena, char* str)
{
	int len = strlen(str);
	char* allocated = (char *)ArenaPush(arena, len + 1);
	strcpy(allocated, str);
	allocated[len] = '\0';
	return allocated;
}

void
PrintFhirResource(FhirResource *resource)
{
	printf("\"%s\"\n", resource->name);
	printf("\tpattern: %s\n", resource->type_str);
	printf("\tdescription: %s\n", resource->type_str);
	printf("\ttype: %s\n", resource->type_str);

	printf("\tproperties count: %d\n", resource->properties_count);
	for(int i = 0; i < resource->properties_count; i++) {
		FhirProperty prop = resource->properties[i];
		printf("\tproperty key: \"%s\": %s, card: %d\n", prop.key, prop.type, prop.cardinality);
	}
}

void
ParseProperty(Arena *arena, cJSON *property, FhirProperty *out)
{
	cJSON *items;
	cJSON *ref;
	cJSON *type;
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

	} else if (type = cJSON_GetObjectItem(property, "type")) {
		if(type && type->type & cJSON_String) {
			out->type = AllocateAndCopyString(arena, type->valuestring);
		}
	} else if(ref = cJSON_GetObjectItem(property, "$ref")) {
		if(ref && ref->type & cJSON_String) {
			out->type = AllocateAndCopyString(arena, ref->valuestring);
		}
	}

	cJSON *description = cJSON_GetObjectItem(property, "description");
	if(description && description->type & cJSON_String){
		out->description = AllocateAndCopyString(arena, description->valuestring);
	}
}

void
ParseDefinition(Arena *arena, cJSON *definition, FhirResource *resource)
{
	resource->name = definition->string;

	cJSON *type = cJSON_GetObjectItem(definition, "type");
	if(type && type->type & cJSON_String){
		resource->type_str = AllocateAndCopyString(arena, type->valuestring);
		char *type_str_copy = resource->type_str;

		if(strcmp(type_str_copy, "string") == 0) {
			resource->type = FhirResourceType_String;
		}

		if(strcmp(type_str_copy, "number") == 0) {
			resource->type = FhirResourceType_Number;
		}
	}

	cJSON *description = cJSON_GetObjectItem(definition, "description");
	if(description && description->type & cJSON_String){
		resource->description = AllocateAndCopyString(arena, description->valuestring);
	}

	cJSON *properties = cJSON_GetObjectItem(definition, "properties");
	if(properties) {
		resource->type = FhirResourceType_Struct;
		int unfiltered_count = cJSON_GetArraySize(properties);
		int filtered_count = 0;

		for(int i = 0; i < unfiltered_count; i++) {
			cJSON *property = cJSON_GetArrayItem(properties, i);
			if(property->string[0] == '_') continue;

			filtered_count ++;
		}

		resource->properties_count = filtered_count;
		resource->properties = PushArrayZero(arena, FhirProperty, resource->properties_count);
		int prop_count = 0;
		for(int i = 0; i < unfiltered_count; i ++) {
			cJSON *property = cJSON_GetArrayItem(properties, i);
			if(property->string[0] == '_') continue;


			FhirProperty *fhir_prop = &resource->properties[prop_count];
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

char *
GenerateStructDefinition(Arena *arena, FhirResource *res)
{
	char* buff = ArenaPushZero(arena, 1024*100);

	int length = 0;

	length += sprintf(buff + length, "typedef struct %s {\n", res->name);
	for(int i = 0; i < res->properties_count; i++) {
		FhirProperty prop = res->properties[i];
		if(!prop.type) continue;

		if(prop.description) {
			length += sprintf(buff + length, "//description: %s\n", prop.description);
		}

		char *clean_type = ReferenceToTypeName(arena, prop.type);
		if(prop.cardinality == FhirPropertyCardinality_Array) {
			length += sprintf(buff + length, "\tint %s_count;\n", prop.key);
			length += sprintf(buff + length, "\t%s* %s;\n", clean_type, prop.key);
		} else {
			length += sprintf(buff + length, "\t%s %s;\n", clean_type, prop.key);
		}
	}
	length += sprintf(buff + length, "} %s;\n", res->name);
	return buff;
}

char *
GenerateTypedefDefinition(Arena *arena, FhirResource *res)
{
	char* buff = ArenaPushZero(arena, 1024*3);

	int length = 0;
	if(res->type == FhirResourceType_String) {
		length += sprintf(buff + length, "typedef char* %s; \n", res->name);
	} else if(res->type == FhirResourceType_Number) {
		length += sprintf(buff + length, "typedef double %s; \n", res->name);
	}

	return buff;
}

char *
GenerateFile(Arena *arena, FhirResource *resources, int resource_count)
{
	char* contents = (char*)ArenaPushZero(arena, 1*1024*1024);

	int length = 0;
#if 0
	for(int i = 0; i < resource_count; i++) {
		FhirResource res = resources[i];
		length += sprintf(contents + length, "typedef struct %s %s;\n", res.name, res.name);
	}
#endif

	for(int i = 0; i < resource_count; i++) {
		FhirResource res = resources[i];
		ArenaTemp scratch = GetScratch(&arena);

		if(res.description) {
			length += sprintf(contents + length, "//description: %s\n", res.description);
		}

		if(res.type == FhirResourceType_Struct) {
			char* struct_def = GenerateStructDefinition(scratch.arena, &res);
			length += sprintf(contents + length, "%s\n", struct_def);
		} else if (res.type != FhirResourceType_Unknown){
			char* typedef_def = GenerateTypedefDefinition(scratch.arena, &res);
			length += sprintf(contents + length, "%s\n", typedef_def);
		}

		TempEnd(scratch);
	}

	return contents;
}

void
WriteFileContents(char *file_name, char* contents)
{
	FILE *f = fopen(file_name, "w");
	fwrite(contents, strlen(contents), 1, f);
	fclose(f);
}

int main() {
	GenerateScratchArenas(&scratch1, &scratch2, 32*1024*1024);

	void *json_string = ReadEntireFile("./fhir.schema.json");
	cJSON *json = cJSON_Parse(json_string);
	int size = cJSON_GetArraySize(json);

	Arena *arena = ArenaAlloc(32*1024*1024);

	printf("Array size: %d", size);
	FhirResource *resources;
	int num_resources = 0;
	for(int i = 0; i < size; i++) {
		cJSON *child = cJSON_GetArrayItem(json, i);
		printf("%s\n", child->string);
		if(strcmp(child->string, "definitions") == 0) {
			resources = ParseDefinitions(arena, child, &num_resources);
		}
	}

	printf("Num Resources: %d\n", num_resources);
	char *contents = GenerateFile(arena, resources, num_resources);

	WriteFileContents("fhir_structs_gen.h", contents);

	return 0;
}
