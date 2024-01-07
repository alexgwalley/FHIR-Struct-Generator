
#if 0
#include <windows.h>
#endif

#include <cstdio>
#include <iostream>

/////////////////////////
// json includes
#include "src/cJSON.h"
#include "src/third_party/simdjson.h"

#include "src/core.h"
#include "src/arena.h"
#include "src/string8.h"
#include "src/threading.h"
#include "src/manual_deserialization.h"

#include "fhir_class_definitions.h"

#include "src/profiler.cc"
#include "src/core.c"
#include "src/arena.c"
#include "src/string8.cc"
#include "src/threading.c"

#define USE_SIMDJSON
#define USE_PROFILER

#include "fhir_class_metadata.h"
#include "src/manual_deserialization_simdjson.cc"

void*
ReadEntireFile(Arena *arena, String8 file_name)
{
	FILE *f = {};
	fopen_s(&f, file_name.str, L"r");
	fseek(f,  0, SEEK_END);
	long length = ftell(f);
	void *result = ArenaPush(arena, length);
	fseek(f, 0, SEEK_SET);
    
	fread(result, length, 1, f);
	fclose(f);
	return result;
}

void*
Deserialize_File(Arena *arena, 
                 fhir_deserialize::DeserializationOptions options,
                 String8 file_name,
                 ResourceType *out_type)
{
    
	Temp scratch = ScratchBegin(&arena, 1);
    
	simdjson::ondemand::parser parser;
	std::string_view file_string_view{(char*)file_name.str};
    
	auto simd_json = simdjson::padded_string::load(file_string_view);
	simdjson::ondemand::document simd_doc = parser.iterate(simd_json);
    
	void* result = Resource_Deserialize_SIMDJSON(arena,
	                                             options,
	                                             ResourceType::Unknown,
	                                             simd_doc.get_object(),
	                                             out_type);
	ScratchEnd(scratch);
	return result;
}

struct RunOptions
{
	bool profile;
	String8 directory_name;
	String8 benchmark_name;
};

RunOptions
RunOptionsFromArgs(Arena *arena, int args_count, char** args)
{
	// -dir directory_name
	// -bn benchmark_name
	// -prof // sets profile to true
	RunOptions options = {};
	ArenaTempBlock(arena, temp)
	{
		for (int i = 1; i < args_count; i++)
		{
			String8 arg_name = Str8C(args[i]);
			if (Str8Match(arg_name, Str8Lit("-dir"), MatchFlag_CaseInsensitive))
			{
				i++;
				String8 value = Str8C(args[i]);
				options.directory_name = value;
				// TODO(agw): can add checks later...
			} 
			else if(Str8Match(arg_name, Str8Lit("-bn"), MatchFlag_CaseInsensitive))
			{
				i++;
				String8 value = Str8C(args[i]);
				options.benchmark_name = value;
				// TODO(agw): can add checks later...
			}
			else if(Str8Match(arg_name, Str8Lit("-prof"), MatchFlag_CaseInsensitive))
			{
				options.profile = true;
			}
            ˚
		}
	}
	return options;
}





int 
main(int arg_count, char** args)
{
	ThreadCtx tctx = ThreadCtxAlloc();
	tctx.is_main_thread = 1;
	SetThreadCtx(&tctx);
    
	Arena *arena = ArenaAlloc(Gigabytes(16));
    
	RunOptions run_options = RunOptionsFromArgs(arena, arg_count, args);
    
	fhir_deserialize::DeserializationOptions options = {};
	options.class_metadata = (ClassMetadata*)&fhir_deserialize::class_metadata[0];
	options.class_metadata_count = ArrayCount(fhir_deserialize::class_metadata);
	String8 dir_name = Str8Lit("./FHIR-Struct-Generator/bundles");
	if (run_options.directory_name.size != 0)
	{
		dir_name = run_options.directory_name;
	}
    
	bool should_profile = false;
	if (run_options.benchmark_name.size != 0)
	{
		should_profile = true;
	}
    
	printf("Deserializing all in %.*s\n", (int)dir_name.size, dir_name.str);
    
	Temp file_name_scratch = ScratchBegin(&arena, 1);
    
	Temp scratch = ScratchBegin(&arena, 1);
	String8 path = PushStr8F(scratch.arena, "%S\\*", dir_name);
	String16 path16 = Str16From8(scratch.arena, path);
    
    
    FileEntries entries = GetFileEntries(arena, dir_name);
	ScratchEnd(scratch);
    
	size_t total_bytes_processed = 0;
	int count = 0;
	if (should_profile)
	{
		BeginProfile();
	}
    
    for(int i = 0; i < entries.count; i++)
    {
        
        if (FindSubstr8(data_file_name_8, Str8Lit(".json"), 0, 0) == data_file_name_8.size)
        {
            continue;
        }
        
        Temp scratch = ScratchBegin(&arena, 1);
        String8 bundle_file_name = PushStr8F(scratch.arena, "%S\\%S", 
                                             dir_name, 
                                             entries.v[i].file_name);
        ResourceType type = ResourceType::Unknown;
        
        count++;
        void* resource = Deserialize_File(arena, options, bundle_file_name, &type);
        ScratchEnd(scratch);
    }
    
    printf("DONE, count: %d\n", count);
    
    
    // TODO(agw); behind some define? deserialization_options somehow?
    PrintLog(&global_log);
    
    
    if (should_profile)
    {
        EndAndPrintProfile();
        u64 CPUFreq = EstimateCPUTimerFreq();
        
        
        u64 deserialization_elapsed = 0;
        for(int i = 1; ArrayCount(GlobalProfiler.Anchors); i++)
        {
            if (GlobalProfiler.Anchors[i].Label != NULL &&
                strcmp(GlobalProfiler.Anchors[i].Label, "Resource_Deserialize_SIMDJSON") == 0)
            {
                deserialization_elapsed = GlobalProfiler.Anchors[i].TSCElapsed;
                break;
            }
        }
        
        
        printf("Deserialized %d bundles, %0.4f GB\n", count, (f64)total_bytes_processed / (1024 * 1024 * 1024));
        f64 milliseconds = 1000.0 * (f64)deserialization_elapsed / (f64)CPUFreq;
        printf("Deserialization Time: %0.4fms (%llu)\n", milliseconds, deserialization_elapsed);
        printf("Total Bytes Processed: %llu \n", total_bytes_processed);
        
        printf("\nTime per bundle: %0.4fms (CPU freq %llu)\n", milliseconds / count, CPUFreq);
        
        f64 gigabytes = (f64)total_bytes_processed / Gigabytes(1);
        f64 seconds = milliseconds / 1000.0;
        
        printf("Gigabytes: %0.4fGB \n", gigabytes);
        printf("Seconds: %0.4fs \n", seconds);
        printf("Deserialization GB/s: %0.4f(GB/s) \n", gigabytes / seconds);
        
        char buff[4096];
        sprintf(buff, "Deserialization GB/s: %0.4f(GB/s) \n", gigabytes / seconds);
        
        FILE *f = fopen("tests.txt", "a");
        fwrite(buff, strlen(buff), 1, f);
        fclose(f);
    }
    
    return 0;
}