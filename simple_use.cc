#include <windows.h>
#include <cstdio>

#include "base/base_inc.h"
#include "os/os_inc.h"
#include "src/cJSON.h"
#include "fhir_class_definitions.h"

#include "base/base_inc.c"
#include "os/os_inc.c"
#include "src/cJSON.c"

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

	struct {
		U64 size;
		char *str;
	} test;
	printf("%zx\n", sizeof(test));

#if 0
	ResourceType resourceType; // 0
	{
		U8 *str;
		U64 size;
	} id; // 8
	Meta *meta; // 18
	fhir_uri implicitRules; // 20
	fhir_code language; // 30
#endif
	printf("U64 size: %d\n", sizeof(U64));
	printf("U8* size: %d\n", sizeof(U8*));
	printf("alignof(String8): %d\n", alignof(String8));
	printf("sizeof(String8): %d\n", sizeof(String8));
	printf("Resource size: %d\n", sizeof(Resource));
	printf("Resource.resoerceType: %d\n", offsetof(Resource, resourceType));
	printf("Resource.id: %d\n", offsetof(Resource, id));
	printf("Resource.meta: %d\n", offsetof(Resource, meta));
	printf("Resource.implicitRules: %d\n", offsetof(Resource, implicitRules));
	printf("Resource.language: %d\n", offsetof(Resource, language));
}