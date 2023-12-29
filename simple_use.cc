#include <windows.h>
#include <cstdio>

#include "base/base_inc.h"
#include "os/os_inc.h"
#include "src/cJSON.h"
#include "fhir_class_definitions.h"
#include "fhir_class_deserialization.h"

#include "base/base_inc.c"
#include "os/os_inc.c"
#include "src/cJSON.c"
#include "fhir_class_deserialization.cc"

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

function void
EntryPoint(CmdLine *cmdln)
{
	OS_InitReceipt os_init = OS_Init();
	printf("Loading fhir structures...\n");
	Arena *arena = ArenaAlloc(Gigabytes(3));

	char* json_str = (char*)ReadEntireFile(arena, Str8Lit("bundles/test.json"));
	cJSON *json = cJSON_Parse(json_str);

	Bundle* bundle = Deserialize_Bundle(arena, json);
	printf("Bundle:\n");
	printf("\tid: %.*s\n", (int)bundle->id.size, bundle->id.str);
	printf("\ttype: %.*s\n", (int)bundle->type.size, bundle->type.str);

	Parameters* params = (Parameters*)bundle->entry[0].resource;
	for (int i = 0; i < params->parameter_count; i++)
	{
		Parameters_Parameter param = params->parameter[i];
		printf("name: %.*s\n", (int)param.name.size, param.name.str);
		char *vb = param.value.valueBoolean ? "true" : "false";
		printf("valueBoolean: %s\n", vb);
	}
}