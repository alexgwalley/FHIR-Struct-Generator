#include <windows.h>
#include <cstdio>

#include "src/code/base/base_inc.h"
#include "src/code/os/os_inc.h"
#include "src/fhir_structure.h"
#include "src/resource.h"
#include "src/fhir_class.h"
#include "src/arena_struct_exporter.h"
#include "fhir_class_definitions.h"
#include "src/metadata.h"
#include "src/cJSON.h"
#include "src/yyjson.h"

#include "src/profiler.cc"
#include "src/code/base/base_inc.c"
#include "src/code/os/os_inc.c"
#include "src/fhir_structure.cc"
#include "src/resource.cc"
#include "src/fhir_class.cc"
#include "src/metadata.cc"
#include "fhir_class_metadata.h"
#include "src/manual_deserialization.cc"
#include "src/cJSON.c"
#include "src/arena_struct_exporter.cc"



#include "os/core/os_entry_point.c"

void*
ReadEntireFile(Arena *arena, String8 file_name)
{
	TimeFunction;
	FILE *f = fopen((const char*)file_name.str, "r");
	fseek(f,  0, SEEK_END);
	long length = ftell(f);
	void *result = ArenaPush(arena, length);
	fseek(f, 0, SEEK_SET);

	fread(result, length, 1, f);
	fclose(f);
	return result;
}

JsonItem
ParseJson(String8 json_str)
{
	TimeFunction;
	cJSON *json = cJSON_Parse((char*)json_str.str);
	return JsonItemFromcJSON(json);
}

void*
Deserialize_File(Arena *arena, String8 file_name, ResourceType *out_type)
{
	TimeFunction;
	HashTable_Init(arena);

	char* json_str = (char*)ReadEntireFile(arena, file_name);
#if 1
	yyjson_doc *doc = yyjson_read(json_str, strlen(json_str), 0);
	yyjson_val *root = yyjson_doc_get_root(doc);
	JsonItem json = JsonItemFromYYJSON(root);
#else
	JsonItem json = ParseJson(Str8C(json_str));
#endif
	JsonItem res_type_json = JsonItem_GetObjectItem(arena, json, Str8Lit("resourceType"));

	ResourceType type = ResourceTypeFromString8(JsonItem_GetStringValue(res_type_json));
	U64 class_size = class_metadata[(int)type].size;
	void* result = ArenaPush(arena, class_size);
	U64 written = Resource_Deserialize(arena, type, json, result, class_size);
	if (out_type)
		*out_type = type;
	yyjson_doc_free(doc);
	return result;
}

function void
EntryPoint(CmdLine *cmdln)
{
	BeginProfile();

	OS_InitReceipt os_init = OS_Init();
	printf("Loading fhir structures...\n");
	Arena *arena = ArenaAlloc(Gigabytes(3));

#if 0
	if (cmdln->inputs.node_count == 0)
	{
		printf("Could not find any directory name\n");
		return;
	}
#endif

	String8 dir_name = Str8Lit("bundles\\");
	printf("Deserializing all in %.*s\n", (int)dir_name.size, dir_name.str);
	OS_FileInfoList list = OS_FileInfoListFromPath(arena, dir_name);

	int count = 0;
	for (OS_FileInfoNode *node = list.first; node; node = node->next)
	{
		if (node->v.attributes.flags & OS_FileFlag_Directory)
			continue;

		if (FindSubstr8(node->v.name, Str8Lit(".json"), 0, 0) == node->v.name.size)
		{
			continue;
		}

		String8 file_name = PushStr8F(arena, "%S%S", 
		                              dir_name, 
										node->v.name);
		ResourceType type = ResourceType::Unknown;

		count++;
		void* resource = Deserialize_File(arena, file_name, &type);

#if 0
		if (type == ResourceType::Bundle)
		{
			fhir_r4::Bundle* bundle = (fhir_r4::Bundle*)resource;
			if (bundle->entry_count > 0)
			{
				for (int i = 0; i < bundle->entry_count; i++)
				{
					String8 resource_type = String8FromResourceType((ResourceType)bundle->entry[i].resource->resourceType);
					printf("Entry resource type: %.*s\n", resource_type.size, resource_type.str);
				}
			}
			break;
		}
#endif

	}

	printf("Deserialized %d bundles\n", count);
	//String8 serialized = Resource_Serialize(arena, res_type, bundle, 0);

	//printf("%.*s\n", serialized.size, serialized.str);

	EndAndPrintProfile();
	GlobalProfiler.EndTSC = ReadCPUTimer();
	u64 CPUFreq = EstimateCPUTimerFreq();
	u64 TotalCPUElapsed = GlobalProfiler.EndTSC - GlobalProfiler.StartTSC;
	if (count > 0)
	{
		TotalCPUElapsed /= count;
	}
    
	if(CPUFreq)
	{
		printf("\nTime per bundle: %0.4fms (CPU freq %llu)\n", 1000.0 * (f64)TotalCPUElapsed / (f64)CPUFreq, CPUFreq);
	}
	return;
}