#include <string.h>
#include <stdarg.h>
#include <unordered_map>

#include "manual_deserialization.h"
#include "hash_table.cc"
#include "gperf_hash_tables/gperf-inc.cc"
#include "resources-gperf.cc"

using namespace fhir_deserialize;

inline int
IsUnion(ClassMemberMetadata *meta)
{
	return meta->types[1].type != ValueType::Unknown;
}

typedef struct ClassMemberPtrAndUnionType ClassMemberPtrAndUnionType;
struct ClassMemberPtrAndUnionType
{
	ClassMemberMetadata *mem;
	ValueTypeAndName union_type;
	int mem_index;
};

String8 str_type[] = {
    Str8Lit("base64Binary"),
    Str8Lit("canonical"),
    Str8Lit("code"),
    Str8Lit("id"),
    Str8Lit("markdown"),
    Str8Lit("oid"),
    Str8Lit("string"),
    Str8Lit("xhtml"),
    Str8Lit("uri"),
    Str8Lit("url"),
    Str8Lit("uuid"),
    Str8Lit("boolean"),
    Str8Lit("positiveInt"),
    Str8Lit("unsignedInt"),
    Str8Lit("decimal"),
    Str8Lit("date"), 
    Str8Lit("dateTime"),
    Str8Lit("time"), 
    Str8Lit("instant")
};



String8 illegal_member_names[] = {
	Str8Lit("class"),
	Str8Lit("operator"),
	Str8Lit("template"),
	Str8Lit("for"),
	Str8Lit("while"),
	Str8Lit("function"),
	Str8Lit("global"),
	Str8Lit("short")
};


String8 illegal_member_names_replacement[] = {
	Str8Lit("class_"),
	Str8Lit("operator_"),
	Str8Lit("template_"),
	Str8Lit("for_"),
	Str8Lit("while_"),
	Str8Lit("function_"),
	Str8Lit("global_"),
	Str8Lit("short_")
};

void*
Resource_Deserialize(Arena *arena, ResourceType type, cJSON *json);

void*
Resource_Deserialize_Impl_SIMDJSON(Arena *arena, 
                                   DeserializationOptions options,
                                   ResourceType type,
                                   simdjson::ondemand::object simdjson_object,
                                   ResourceType *out_type,
                                   U64 *size);

static ResourceType
ResourceTypeFromString8(String8 str)
{
#if 1 // Fastest
	const ResourceNameTypePair *pair = Perfect_Hash::in_word_set((char*)str.str, str.size);
	return (ResourceType)pair->type;
    
#elif 0
	std::string std_string;
	std_string.assign((char*)str.str, str.size);
	return (ResourceType)g_resource_type_map[std_string];
#else // Slowest
	String8 value;
	TimeBlock("Fetching resource personal")
	{
		value = HashTable_Get(&g_resource_type_hash_table, str);
	}
	ResourceType type;
	memcpy(&type, &value.str, sizeof(ResourceType));
	return type;
#endif
}

String8
String8FromResourceType(ResourceType type)
{
	return resource_type_pairs[(int)type].str;
}

//TODO(agw): this is a repeat function
//TODO(agw): we could store both names, not sure if worth it?
String8
GetClassNameFromUnionName(Arena* arena, String8 union_name, String8 member_name)
{
	String8 str = PushStr8Copy(arena, union_name);
	String8 result = Str8Skip(str, member_name.size);
	result.str[0] = CharToUpper(result.str[0]);
	return result;
}

// NOTE (agw): Memory Pointers and access ========================================================
typedef struct ValuesList
{
	ValueTypeAndName value_type;
    
	// NOTE(agw): is_array, value will be ptr to the array of values
	// NOTE(agw): else, value will be value, could be String8 could be ResourceType... 
	boolean is_array;
	String8 union_value_name;
    
	U64 value_count;
	U64 value_size;
    
	void *value;
} ValuesList;

int
NumTypesFull(ClassMemberMetadata *meta)
{
	int index = 0;
	while (meta->types[index].type != ValueType::Unknown &&
           index < ArrayCount(meta->types))
	{
		index++;
	}
	return index;
}

U64
ValuesListValueSize(ValueTypeAndName type, boolean is_array)
{
	return value_type_to_size[(int)type.type].size;
}

ValuesList
ValuesListFromMeta(Arena *arena, void* resource, ClassMemberMetadata *meta, U64 previous_value)
{
	ValuesList list = {};
	list.is_array = (meta->cardinality == Cardinality::ZeroToInf ||
                     meta->cardinality == Cardinality::OneToInf);
	list.value_count = 1;
	list.value_type = meta->types[0];
    
    
    
	int num_full_types = NumTypesFull(meta);
	if (num_full_types > 1) // Union
	{
		Assert(previous_value < num_full_types);
		list.union_value_name = meta->types[previous_value].name;
		list.value_type = meta->types[previous_value];
	}
    
	if (list.is_array)
	{
		list.value_count = previous_value;
	}
    
	if (list.value_type.type == ValueType::Class_Reference)
	{
		ResourceType res_type = ResourceTypeFromString8(list.value_type.name);
		ClassMetadata *class_meta = &class_metadata[(int)res_type];
		list.value_size = class_meta->size;
	}
	else
	{
		list.value_size = value_type_to_size[(int)list.value_type.type].size;
	}
    
	// NOTE(alex): when deserializing, the value _must_ be a pointer or else you lose data...
	list.value = (char*)resource + meta->offset;
    
	if (resource == NULL)
	{
		list.value = NULL;
		list.value_count = 0;
		list.value_size = 0;
	}
    
	return list;
}

enum ValuePtrType
{
	Pointer,
	StartOfValue
};
typedef struct ValuePtr
{
	ValuePtrType ptr_type;
	ValueTypeAndName type;
	String8 union_value_name;
	void *ptr;
} ValuePtr;

ValuePtr
GetValuePtr(ValuesList list, int member_index)
{
	ValuePtr mem_ptr = {};
	Assert(member_index < list.value_count);
	mem_ptr.type = list.value_type;
	mem_ptr.union_value_name = list.union_value_name;
	mem_ptr.ptr = (char*)list.value + list.value_size * member_index;
	return mem_ptr;
}

ValuePtr
GetSerializationValuePtr(ValuesList list, int member_index)
{
	ValuePtr ptr = GetValuePtr(list, member_index);
	if (list.is_array)
	{
		void* resource_array_ptr = (void*)*(size_t*)list.value;
		ptr.ptr = (char*)resource_array_ptr + list.value_size * member_index;
		ptr.ptr_type = ValuePtrType::StartOfValue;
	}
	return ptr;
}

// NOTE (agw): Error Logging ========================================================
enum class LogType
{
	Unknown,
	Information,
	Warning,
	Error
};


struct LogNode
{
	LogNode* next;
	LogType type;
	String8 log_message;
};

struct LogList 
{
	LogNode* first;
	LogNode* last;
	size_t node_count;
};

struct Log
{
	Arena *arena;
	LogList logs;
};

// NOTE(agw): have a log per thread (ThreadCtx)
static Log global_log;

void
AddError(Log *log, LogType type, char* format, ...)
{
	Temp scratch = ScratchBegin(0, 0);
	va_list args = 0;
	va_start(args, format);
	String8 log_message = PushStr8FV(scratch.arena, format, args);
	va_end(args);
    
	LogNode *node = PushStruct(scratch.arena, LogNode);
	node->type = type;
	node->log_message = log_message;
	QueuePush(log->logs.first, log->logs.last, node);
    
	ScratchEnd(scratch);
}

void
PrintLog(Log *log)
{
	for (LogNode *node = log->logs.first; node; node = node->next)
	{
		switch (node->type)
		{
			case LogType::Error:
            printf("LOG_ERROR: ");
            break;
			case LogType::Information:
            printf("LOG_INFORMATION: ");
            break;
			case LogType::Warning:
            printf("LOG_WARNING: ");
            break;
		}
		printf("%.*s\n", (int)node->log_message.size, node->log_message.str);
	}
}

// NOTE (agw): Deserialization ========================================================

int
GetMemberMetadata(ClassMetadata *in_class_metadata,
                  ResourceType type, 
                  String8 unvalidated_key,
                  ClassMemberMetadata **mem_meta,
                  ValueTypeAndName *union_type)
{
	const MemberNameAndOffset *mem_and_offset = ClassMemberLookup(type, unvalidated_key);
    
	if (mem_and_offset == NULL)
	{
		AddError(&global_log, LogType::Error, "Could not find key \"%S\" on resource type \"%S\"",
		         unvalidated_key, String8FromResourceType(type));
		return -1;
	}
    
	ClassMemberMetadata *member_meta = &in_class_metadata[(int)type].members[mem_and_offset->member_index];
	*mem_meta = member_meta;
    
	// TODO(agw): should really preserve type[0] to be Nil...
	if (mem_and_offset->type_index > 0)
	{
		*union_type = member_meta->types[mem_and_offset->type_index];
	}
    
	return mem_and_offset->member_index;
    
#if 0
	ClassMetadata *meta = &class_metadata[(int)type];
	for (int i = 0; i < meta->members_count; i++)
	{
		if (meta->members[i].name.str[0] != key.str[0])
		{
			continue;
		}
        
		if (Str8Match(meta->members[i].name, key, 0))
		{
			*mem_meta = &meta->members[i];
			return i;
		}
        
		if (meta->members[i].type == ClassMemberType::Enum)
		{
			continue;
		}
        
		if (IsUnion(&meta->members[i]))
		{
			for (int j = 0; j < ArrayCount(meta->members[i].types); j++)
			{
				if (meta->members[i].types[j].type == ValueType::Unknown)
				{
					Assert(false);
				}
                
				if (meta->members[i].types[j].name.str[0] != key.str[0])
				{
					continue;
				}
                
				if (Str8Match(meta->members[i].types[j].name, key, 0))
				{
					*union_type = meta->members[i].types[j];
					*mem_meta = &meta->members[i];
					return i;
				}
			}
		}
	}
	Assert(false);
#endif
}

inline void*
PushResource(Arena *arena, ResourceType type)
{
	return ArenaPush(arena, class_metadata[(int)type].size);
}

typedef struct ArrayValue ArrayValue;
struct ArrayValue
{
	void *data;
	U64 size;
};


typedef struct ValueNode ValueNode;
struct ValueNode
{
	ValueNode *next;
	ArrayValue v;
};

typedef struct ValueList ValueList;
struct ValueList
{
	ValueNode *first;
	ValueNode *last;
	U64 node_count;
	U64 total_size;
};


void
ValueListPush(Arena *arena, ValueList *list, ArrayValue array_value)
{
	ValueNode *node = PushStruct(arena, ValueNode);
	node->v = array_value;
	QueuePush(list->first, list->last, node);
	list->node_count += 1;
	list->total_size += array_value.size;
}

void*
Deserialize_Array(Arena *arena,
                  DeserializationOptions options,
                  ClassMemberMetadata *mem_meta,
                  simdjson::ondemand::array array,
                  U64 *count)
{
	Assert (!IsUnion(mem_meta));
	ValueTypeAndName value_type = mem_meta->types[0];
    
	Temp temp = ScratchBegin(&arena, 1);
	ValueList list = {};
    
	// TODO(agw): don't assume size here
	//Arena *values_arena = ArenaAlloc(Gigabytes(1)); // if we do this...we are copying the data twice
    
	int field_count = 0;
	for (auto field : array)
	{
		field_count++;
		simdjson::ondemand::value value = field.value();
		switch (value.type())
		{
            
			case simdjson::ondemand::json_type::string: // copy into dest
			{
				std::string_view str_view;
				auto res = value.get(str_view);
				Assert(res == simdjson::error_code::SUCCESS);
				String8 str = PushStr8Copy(arena, Str8((U8*)str_view.data(), str_view.size()));
				String8 *str_ptr = PushStruct(arena, String8);
				*str_ptr = str;
                
				ArrayValue value;
				value.data = (void*)str_ptr;
				value.size = sizeof(str_ptr);
				ValueListPush(temp.arena, &list, value);
			} break;
			case simdjson::ondemand::json_type::number: // copy into dest
			{
				double* _double = (double*)ArenaPushNoZero(arena, sizeof(double));
				auto res = value.get(*_double);
				Assert(res == simdjson::error_code::SUCCESS);
				ArrayValue value;
				value.data = _double;
				value.size = sizeof(_double);
				ValueListPush(temp.arena, &list, value);
			} break;
			case simdjson::ondemand::json_type::boolean: 
			{
				B32* _boolean = (B32*)ArenaPushNoZero(arena, sizeof(B32));
				auto res = value.get(*(bool*)_boolean);
				// TODO(agw): this should be linked to fhir classes
				Assert(res == simdjson::error_code::SUCCESS);
				ArrayValue value;
				value.data = _boolean;
				value.size = sizeof(_boolean);
				ValueListPush(temp.arena, &list, value);
			} break;
			case simdjson::ondemand::json_type::object: // copy into dest
			{
				simdjson::ondemand::object child;
				auto res = value.get(child);
                
				ResourceType res_type = ResourceTypeFromString8(mem_meta->types[0].name);
				U64 size = 0;
				void *resource = Resource_Deserialize_Impl_SIMDJSON(arena,
				                                                    options,
																	res_type,
																	child,
																	&res_type,
																	&size);
				// TODO(agw): we don't want to have to do this copy
				ArrayValue value;
				value.data = resource;
				value.size = size;
				ValueListPush(temp.arena, &list, value);
			} break;
			case simdjson::ondemand::json_type::array: // copy into dest
			{
				// NOTE(agw): assuming we would never have this option
				AddError(&global_log, LogType::Error, "Array of arrays");
				Assert(false);
			} break;
		}
	}
	void *output_array;
	size_t size_allocated = temp.arena->pos - temp.pos;
	output_array = ArenaPushNoZero(arena, list.total_size);
	char* output_array_ptr = (char*)output_array;
    
	for (ValueNode *node = list.first; node; node = node->next)
	{
		memcpy(output_array_ptr, node->v.data, node->v.size);
		output_array_ptr += node->v.size;
	}
    
    
	ScratchEnd(temp);
    
	*count = field_count;
	return output_array;
}


void*
Resource_Deserialize_Impl_SIMDJSON(Arena *arena, 
                                   DeserializationOptions options,
                                   ResourceType type,
                                   simdjson::ondemand::object simdjson_object,
                                   ResourceType *out_type,
                                   U64 *size)
{
	ResourceType resource_type = type;
    
	void* out;
	
	ClassMetadata *meta = &class_metadata[(int)resource_type];
	// TODO(alex): this may be a little hack-y...idk
	if (resource_type != ResourceType::Unknown &&
		resource_type != ResourceType::Resource)
	{
		out = PushResource(arena, resource_type);
		ResourceType *out_res_type = (ResourceType*)out;
		*out_res_type = resource_type;
	}
    
	bool type_found = resource_type != ResourceType::Unknown && resource_type != ResourceType::Resource;
	int index = -1;
	for (auto field : simdjson_object)
	{
		index++;
        
		std::string_view key_view = field.unescaped_key();
		String8 key = Str8((U8*)key_view.data(), key_view.size());
        
		if (index == 0)
		{
			if (!type_found)
			{
				std::string_view resource_type_value = field.value().get_string();
				String8 res_type_str = Str8((U8*)resource_type_value.data(), resource_type_value.size());
				resource_type = ResourceTypeFromString8(res_type_str);
                
				out = PushResource(arena, resource_type);
				ResourceType *out_res_type = (ResourceType*)out;
				*out_res_type = resource_type;
                
				meta = &class_metadata[(int)resource_type];
				continue;
			}
            
			if (key.str[0] == 'r' && Str8Match(key, Str8Lit("resourceType"), 0))
				continue;
		}
        
		ClassMemberMetadata *mem_meta = NULL;
        
        
		ValueTypeAndName union_type = {}; // TODO(agw): may not need this
		int mem_index = GetMemberMetadata(options.class_metadata,
		                                  resource_type, 
		                                  key,
		                                  &mem_meta,
		                                  &union_type);
		if (mem_index == -1)
			continue;
        
        
		void *dest = (char*)out + mem_meta->offset;
		simdjson::ondemand::value value = field.value();
		switch (value.type())
		{
			case simdjson::ondemand::json_type::string: // copy into dest
			{
				std::string_view str_view;
				auto res = value.get(str_view);
				Assert(res == simdjson::error_code::SUCCESS);
				String8 str = PushStr8Copy(arena, Str8((U8*)str_view.data(), str_view.size()));
				memcpy(dest, &str, sizeof(str));
			} break;
			case simdjson::ondemand::json_type::number: // copy into dest
			{
				double _double;
				auto res = value.get(_double);
				Assert(res == simdjson::error_code::SUCCESS);
				memcpy(dest, &_double, sizeof(double));
			} break;
			case simdjson::ondemand::json_type::boolean: // copy into dest
			{
				bool _boolean;
				auto res = value.get(_boolean);
				// TODO(agw): this should be linked to fhir classes
				B32 boolean_32 = (B32)_boolean;
				Assert(res == simdjson::error_code::SUCCESS);
				memcpy(dest, &boolean_32, sizeof(boolean_32));
			} break;
			case simdjson::ondemand::json_type::object: // copy into dest
			{
				simdjson::ondemand::object child;
				auto res = value.get(child);
                
				// TODO(agw): check if it would be faster if inside an "else" clause
				ResourceType type;
				if (union_type.type == ValueType::Class_Reference)
				{
					String8 class_name = GetClassNameFromUnionName(arena, union_type.name, mem_meta->name);
					type = ResourceTypeFromString8(class_name);
				}
				else
				{
					type = ResourceTypeFromString8(mem_meta->types[0].name);
				}
                
				void *resource = Resource_Deserialize_Impl_SIMDJSON(arena, options, type, child, 0, 0);
				*(size_t*)dest = (size_t)resource;
			} break;
			case simdjson::ondemand::json_type::array: // copy into dest
			{
				simdjson::ondemand::array arr;
				auto res = value.get(arr);
				U64 count = 0;
				void *array_result = Deserialize_Array(arena, options, mem_meta, arr, &count);
				*(size_t*)dest = (size_t)array_result;
                
				ClassMemberMetadata *prev_mem = &meta->members[mem_index-1];
				void *count_dest = (char*)out + prev_mem->offset;
				// TODO(agw): need to link this 
				Assert(sizeof(count) == prev_mem->size);
				memcpy(count_dest, &count, prev_mem->size);
			} break;
		}
	}
    
	if (size)
		*size = meta->size;
    
	if (out_type)
	{
		*out_type = resource_type;
	}
	return out;
}

void*
Resource_Deserialize_SIMDJSON(Arena *arena, 
                              DeserializationOptions options,
                              ResourceType assumed_type,
                              simdjson::ondemand::object simdjson_object,
                              ResourceType *out_type)
{
	TimeFunction;
	return Resource_Deserialize_Impl_SIMDJSON(arena,
	                                          options,
	                                          assumed_type,
	                                          simdjson_object,
	                                          out_type,
	                                          0);
}

// NOTE (agw): Serialization ========================================================
String8
Resource_Serialize(Arena *arena, ResourceType type, void* resource, SerializationSettings *in_settings);

String8
ValueString(Arena *arena, ValueTypeAndName type, ValuePtr mem_ptr)
{
	if (mem_ptr.ptr == NULL) return Str8Lit("");
	switch (type.type)
	{
		case ValueType::Base64Binary:
		case ValueType::Canonical:
		case ValueType::Code:
		case ValueType::Id:
		case ValueType::Markdown:
		case ValueType::Oid:
		case ValueType::String:
		case ValueType::Xhtml:
		case ValueType::Uri:
		case ValueType::Url:
		case ValueType::Uuid:
		case ValueType::Date:
		case ValueType::DateTime:
		case ValueType::Time:
		case ValueType::Instant:
		{
			String8* value = (String8*)mem_ptr.ptr;
			if (value->size == 0) return Str8Lit("");
			return PushStr8F(arena, "\"%S\"", *value);
		} break;
		case ValueType::ResourceType:
		{
			ResourceType res_type = *(ResourceType*)mem_ptr.ptr;
			if(res_type == ResourceType::Unknown) return Str8Lit("");
			return String8FromResourceType(res_type);
		} break;
		case ValueType::Boolean:
		{
			boolean value = *(boolean*)mem_ptr.ptr;
			return value ? Str8Lit("true") : Str8Lit("false");
		} break;
		case ValueType::UnsignedInt:
		case ValueType::PositiveInt:
		{
			U64 value = *(U64*)mem_ptr.ptr;
			return PushStr8F(arena, "%d", value);
		} break;
		case ValueType::Decimal:
		{
			double value = *(double*)mem_ptr.ptr;
			return PushStr8F(arena, "%f", value);
		} break;
		case ValueType::Class_Reference:
		{
			fhir_r4::Resource* resource;
			if (mem_ptr.ptr_type == ValuePtrType::Pointer)
			{
                resource = *(fhir_r4::Resource**)mem_ptr.ptr;
			}
			else
			{
                resource = (fhir_r4::Resource*)mem_ptr.ptr;
			}
            
			if (resource == NULL) return Str8Lit("");
			ResourceType res_type = ResourceTypeFromString8(type.name);
			if (res_type == ResourceType::Resource)
			{
				res_type = (ResourceType)resource->resourceType;
			}
            
			// TODO(alex): get settings here
			return Resource_Serialize(arena, res_type, resource, 0);
		} break;
	}
	return Str8Lit("");
}

String8
SerializeValuesList(Arena *arena, ValuesList list)
{
	if(list.value_count < 1) return Str8Lit("");
    
	if(!list.is_array)
	{
		ValuePtr ptr = GetSerializationValuePtr(list, 0);
		return ValueString(arena, list.value_type, ptr);
	}
    
	Temp scratch = ScratchBegin(&arena, 1);
	String8List result_list = { 0 };
    
	Str8ListPush(scratch.arena,
                 &result_list, 
                 Str8Lit("[\n"));
	for (int i = 0; i < list.value_count; i++)
	{
		ValuePtr ptr = GetSerializationValuePtr(list, i);
		String8 serialized = ValueString(arena, list.value_type, ptr);
		Str8ListPush(scratch.arena,
                     &result_list, 
                     serialized);
        
		if (i != list.value_count-1)
		{
			Str8ListPush(scratch.arena,
                         &result_list, 
                         Str8Lit(",\n"));
		}
	}
    
	Str8ListPush(scratch.arena,
                 &result_list, 
                 Str8Lit("]\n"));
    
	String8 result = Str8ListJoin(arena, result_list, 0);
	ScratchEnd(scratch);
	return result;
}


String8
Resource_Serialize(Arena *arena, ResourceType type, void* resource, SerializationSettings *in_settings)
{
	Temp scratch = ScratchBegin(&arena, 1);
	String8List result_list = { 0 };
	ClassMetadata *meta = &class_metadata[(int)type];
    
	Str8ListPush(scratch.arena, &result_list, Str8Lit("{\n"));
	for (int i = 0; i < meta->members_count; i++)
	{
		ClassMemberMetadata *mem_meta = &meta->members[i];
        
		if (mem_meta->type == ClassMemberType::Enum) continue;
        
		U64 previous_value = 0;
		if (i > 0)
		{
			ClassMemberMetadata *prev_meta = &meta->members[i-1];
			previous_value = *(U64*)((char*)resource + prev_meta->offset);
		}
        
		ValuesList values_list = ValuesListFromMeta(arena, resource, mem_meta, previous_value);
		if (values_list.value == NULL) continue;
		if (!values_list.is_array) previous_value = 0;
		String8 serialized = SerializeValuesList(scratch.arena, values_list);
		if (serialized.size > 0)
		{
			Str8ListPushF(scratch.arena, &result_list,
                          "\"%S\": %S",
                          mem_meta->name,
                          serialized);
		}
        
		if (i != meta->members_count-1 && serialized.size > 0)
		{
			Str8ListPush(scratch.arena, &result_list, Str8Lit(",\n"));
		}
	}
	Str8ListPush(scratch.arena, &result_list, Str8Lit("}"));
    
	String8 result = Str8ListJoin(arena, result_list, 0);
	ScratchEnd(scratch);
	return result;
    
}
