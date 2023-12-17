#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "cJSON.h"
#include "arena.h"

typedef unsigned long long u64;

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

typedef enum FhirPropertyCardinality {
	FhirPropertyCardinality_Unknown,
	FhirPropertyCardinality_Single,
	FhirPropertyCardinality_Array
} FhirPropertyCardinality;

typedef struct FhirProperty {
	char *key;
	char *description;
	char *type; // struct name
	FhirPropertyCardinality cardinality;
} FhirProperty;

typedef struct FhirResource {
	char *name;
	char *pattern;
	char *description;
	char *type;
	FhirProperty *properties;
	int properties_count;
} FhirResource;

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
	printf("\tpattern: %s\n", resource->type);
	printf("\tdescription: %s\n", resource->type);
	printf("\ttype: %s\n", resource->type);

	printf("\tproperties count: %d\n", resource->properties_count);
	for(int i = 0; i < resource->properties_count; i++) {
		FhirProperty prop = resource->properties[i];
		printf("\tproperty key: \"%s\": %s\n", prop.key, prop.type);
	}
}

void
ParseProperty(Arena *arena, cJSON *property, FhirProperty *out)
{
	cJSON *items = cJSON_GetObjectItem(property, "items");
	if(items){
		cJSON *ref = cJSON_GetObjectItem(items, "$ref");
		if(ref->type & cJSON_String && ref->type & cJSON_Raw) {
			out->type = AllocateAndCopyString(arena, ref->valuestring);
		}
	} else {
		cJSON *type = cJSON_GetObjectItem(property, "type");
		if(type && type->type & cJSON_String && type->type & cJSON_Raw) {
			out->type = AllocateAndCopyString(arena, type->valuestring);
		}
	}
}

void
ParseDefinition(Arena *arena, cJSON *definition, FhirResource *resource)
{
	resource->name = definition->string;

	cJSON *type = cJSON_GetObjectItem(definition, "type");
	if(type){
		if(type->type & cJSON_String && type->type & cJSON_Raw) {
			resource->type = AllocateAndCopyString(arena, type->valuestring);
		}
	}

	cJSON *properties = cJSON_GetObjectItem(definition, "properties");
	if(properties) {
		resource->properties_count = cJSON_GetArraySize(properties);
		resource->properties = PushArrayZero(arena, FhirProperty, resource->properties_count);
		for(int i = 0; i < resource->properties_count; i ++) {
			cJSON *property = cJSON_GetArrayItem(properties, i);
			FhirProperty *fhir_prop = &resource->properties[i];
			ParseProperty(arena, property, fhir_prop);
		}
	}

	//PrintFhirResource(resource);
}

void
ParseDefinitions(Arena *arena, cJSON *definitions)
{
	int num_definitions = cJSON_GetArraySize(definitions);
	printf("Num Definitions: %d\n", num_definitions);

	 FhirResource * resources = PushArray(arena, FhirResource, num_definitions); 

	for(int i = 0; i < num_definitions; i++) {
		cJSON *definition = cJSON_GetArrayItem(definitions, i);
		ParseDefinition(arena, definition, &resources[i]);
	}
}

int main() {
	void *json_string = ReadEntireFile("./fhir.schema.json");
	cJSON *json = cJSON_Parse(json_string);
	int size = cJSON_GetArraySize(json);

	Arena *arena = ArenaAlloc(32*1024*1024);

	printf("Array size: %d", size);
	for(int i = 0; i < size; i++) {
		cJSON *child = cJSON_GetArrayItem(json, i);
		printf("%s\n", child->string);
		if(strcmp(child->string, "definitions") == 0) {
			ParseDefinitions(arena, child);
		}
	}

	return 0;
}
