#include <string.h>
#include "manual_deserialization.h"
#include "hash_table.cc"

boolean g_resource_type_hash_table_initted = false;
HashTable g_resource_type_hash_table = {};

void
HashTable_Init(Arena *arena)
{
	if (g_resource_type_hash_table_initted) return;

	g_resource_type_hash_table = HashTable_Create(arena, 4096);

	for (int i = 0; i < ArrayCount(resource_type_pairs); i++) {
		String8 data = {};
		data.str = (U8*)resource_type_pairs[i].type;
		HashTable_Add(&g_resource_type_hash_table, 
		              resource_type_pairs[i].str,  
		              data);
	}

	g_resource_type_hash_table_initted = true;
}

void*
Resource_Deserialize(Arena *arena, ResourceType type, cJSON *json);

U64
Resource_Deserialize_Impl(Arena *arena, 
                          ResourceType type,
                          JsonItem in_item,
                          void *out,
                          U64 out_size);

ResourceType
ResourceTypeFromString8(String8 str)
{
	TimeFunction;
	String8 value = HashTable_Get(&g_resource_type_hash_table, str);
	ResourceType type;
	memcpy(&type, &value.str, sizeof(ResourceType));
	return type;

#if 0
	for (int i = 0; i < ArrayCount(resource_type_pairs); i++) {
		if (Str8Match(str, resource_type_pairs[i].str, 0))
		{
			return resource_type_pairs[i].type;
		}
	}
	return ResourceType::Unknown;
#endif
}

String8
String8FromResourceType(ResourceType type)
{
	return resource_type_pairs[(int)type].str;
}


// NOTE (agw): Json Wrapper =====================================================================

JsonItem
JsonItemFromcJSON(cJSON *json)
{
	JsonItem item = {};

	if (json == NULL) return item;

	item.json = json;
	item.cardinality = JsonItemValueCardinality::Single;
	item.count = 1;
	item.type = JsonItemType::CJSON;

	if (cJSON_IsArray(json))
	{
		item.cardinality = JsonItemValueCardinality::Array;
		item.count = cJSON_GetArraySize(json);
	}

	return item;
}


JsonItem
JsonItemFromYYJSON(yyjson_val *json)
{
	TimeFunction;
	JsonItem item = {};

	if (json == NULL) return item;

	item.yyjson_value = json;
	item.cardinality = JsonItemValueCardinality::Single;
	item.count = 1;
	item.type = JsonItemType::YYJSON;

	if (yyjson_is_arr(json))
	{
		item.cardinality = JsonItemValueCardinality::Array;
		item.count = yyjson_arr_size(json);
	}

	return item;
}

boolean
JsonItem_IsObject(JsonItem item)
{
	TimeFunction;
	if (item.type == JsonItemType::CJSON)
	{
		return cJSON_IsObject(item.json);
	} else if (item.type == JsonItemType::YYJSON)
	{
		return yyjson_is_obj(item.yyjson_value);
	}

	Assert(false);
}

boolean
JsonItem_HasObjectItem(Arena *arena, JsonItem item, String8 key)
{
	TimeFunction;
	// TODO(alex): make this scratch arena
	if (item.type == JsonItemType::CJSON)
	{
		char *key_str = (char*)PushStr8Copy(arena, key).str;
		return cJSON_HasObjectItem(item.json, key_str);
	} else if (item.type == JsonItemType::YYJSON)
	{
		char *key_str = (char*)PushStr8Copy(arena, key).str;
		return !yyjson_is_null(yyjson_obj_get(item.yyjson_value, key_str));
	}

	Assert(false);
}

JsonItem
JsonItem_GetObjectItem(Arena *arena, JsonItem item, String8 key)
{
	TimeFunction;
	if (item.type == JsonItemType::CJSON)
	{
		char *key_str = (char*)PushStr8Copy(arena, key).str;
		cJSON *object_item = cJSON_GetObjectItem(item.json, key_str);
		return JsonItemFromcJSON(object_item);

	} else if (item.type == JsonItemType::YYJSON)
	{
		char *key_str = (char*)PushStr8Copy(arena, key).str;
		yyjson_val *val = yyjson_obj_get(item.yyjson_value, key_str);
		return JsonItemFromYYJSON(val);
	}

	Assert(false);
}


JsonItem
JsonItem_GetArrayItem(JsonItem item, int index)
{
	TimeFunction;
	if (item.type == JsonItemType::CJSON)
	{
		cJSON *array_item = cJSON_GetArrayItem(item.json, index);
		return JsonItemFromcJSON(array_item);

	} else if (item.type == JsonItemType::YYJSON)
	{
		return JsonItemFromYYJSON(yyjson_arr_get(item.yyjson_value, index));
	}

	Assert(false);
}

boolean
JsonItem_IsArray(JsonItem item)
{
	TimeFunction;
	if (item.type == JsonItemType::CJSON)
	{
		return cJSON_IsArray(item.json);

	} else if (item.type == JsonItemType::YYJSON)
	{
		return yyjson_is_arr(item.yyjson_value);
	}

	Assert(false);
}

String8
JsonItem_GetStringValue(JsonItem item)
{
	TimeFunction;
	if (item.type == JsonItemType::CJSON)
	{
		char* str =  cJSON_GetStringValue(item.json);
		if(!str)
			return Str8Lit("");
		return Str8C(str);
	} else if (item.type == JsonItemType::YYJSON)
	{
		char *str = (char*)yyjson_get_str(item.yyjson_value);
		if(!str)
			return Str8Lit("");
		return Str8C(str);
	}

	Assert(false);
}

double
JsonItem_GetNumberValue(JsonItem item)
{
	TimeFunction;
	if (item.type == JsonItemType::CJSON)
	{
		return cJSON_GetNumberValue(item.json);
	} else if (item.type == JsonItemType::YYJSON)
	{
		return yyjson_get_num(item.yyjson_value);
	}

	Assert(false);
}

boolean
JsonItem_IsTrue(JsonItem item)
{
	TimeFunction;
	if (item.type == JsonItemType::CJSON)
	{
		return (boolean)cJSON_IsTrue(item.json);
	} else if (item.type == JsonItemType::YYJSON)
	{
		return yyjson_is_true(item.yyjson_value);
	}

	Assert(false);
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
ValuesListFromJson(Arena *arena, JsonItem json, ClassMemberMetadata *meta)
{
	ValuesList list = {};
	list.is_array = (meta->cardinality == Cardinality::ZeroToInf ||
					meta->cardinality == Cardinality::OneToInf);
	Assert(list.is_array == JsonItem_IsArray(json));

	list.value_count = json.count;
	list.value_type = meta->types[0];
	list.union_value_name = Str8Lit("");

	int num_full_types = NumTypesFull(meta);
	if (num_full_types > 1) // Union
	{
		// NOTE(alex): I am _assuming_ this is the case...not sure
		Assert(list.is_array == false);

		boolean found_type = false;
		for (int i = 0; i < num_full_types; i++)
		{
			if (JsonItem_HasObjectItem(arena, json, meta->types[i].name))
			{
				list.union_value_name = meta->types[i].name;
				list.value_type = meta->types[i];
				found_type = true;
				break;
			}
		}
		Assert(found_type);
	}

	U64 total_size = 0;
	if (list.value_type.type == ValueType::Class_Reference)
	{
		// TODO(agw): value is array of classes...
		ResourceType res_type = ResourceTypeFromString8(list.value_type.name);
		if (res_type == ResourceType::Resource)
		{
			JsonItem resource_type = JsonItem_GetObjectItem(arena, json, Str8Lit("resourceType"));
			Assert(resource_type.count);
			res_type = ResourceTypeFromString8(JsonItem_GetStringValue(resource_type));
		}

		ClassMetadata *class_meta = &class_metadata[(int)res_type];
		total_size = class_meta->size * list.value_count;
		list.value_size = class_meta->size;
	}
	else
	{
		total_size = value_type_to_size[(int)list.value_type.type].size * list.value_count;
		list.value_size = value_type_to_size[(int)list.value_type.type].size;
	}

	list.value = ArenaPush(arena, total_size);

	return list;
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

void
WriteToMemberPtr(ValuePtr mem_ptr, void* buffer)
{
	memcpy(mem_ptr.ptr, buffer, value_type_to_size[(int)mem_ptr.type.type].size);
}

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

// NOTE (agw): Deserialization ========================================================

void
CopyValue(Arena *arena, ValuePtr mem_ptr, ValueTypeAndName value_type_and_name, JsonItem item)
{
	if (item.cardinality == JsonItemValueCardinality::None)
		return;

	switch (value_type_and_name.type)
	{
		case ValueType::Base64Binary:
		case ValueType::Canonical:
		case ValueType::Code:
		case ValueType::Id:
		case ValueType::Markdown:
		case ValueType::Oid:
		case ValueType::String:
		case ValueType::Uri:
		case ValueType::Url:
		case ValueType::Uuid:
		case ValueType::Date:
		case ValueType::DateTime:
		case ValueType::Time:
		case ValueType::Instant:
		{
			String8 string_value = PushStr8Copy(arena, JsonItem_GetStringValue(item));
			WriteToMemberPtr(mem_ptr, &string_value);
		} break;
		case ValueType::ResourceType:
		{
			String8 string_value = JsonItem_GetStringValue(item);
			ResourceType res_type = ResourceTypeFromString8(string_value);
			WriteToMemberPtr(mem_ptr, &res_type);
		} break;
		case ValueType::Boolean:
		{
			boolean is_true = JsonItem_IsTrue(item);
			WriteToMemberPtr(mem_ptr, &is_true);
		} break;
		case ValueType::UnsignedInt:
		case ValueType::PositiveInt:
		case ValueType::ArrayCount:
		{
			U64 value = (U64)JsonItem_GetNumberValue(item);
			WriteToMemberPtr(mem_ptr, &value);
		} break;
		case ValueType::Decimal:
		{
			double value = JsonItem_GetNumberValue(item);
			WriteToMemberPtr(mem_ptr, &value);
		} break;
		case ValueType::Class_Reference:
		{

			ResourceType res_type = ResourceTypeFromString8(value_type_and_name.name);
			if (res_type == ResourceType::Resource)
			{
				JsonItem res_type_json = JsonItem_GetObjectItem(arena, item, Str8Lit("resourceType"));
				Assert(res_type_json.cardinality != JsonItemValueCardinality::None);
		
				String8 res_type_name = JsonItem_GetStringValue(res_type_json);
				res_type = ResourceTypeFromString8(res_type_name);
			}
			ClassMetadata *array_item_meta = &class_metadata[(int)res_type];
			//void *sub_resource = ArenaPush(arena, array_item_meta->size);
			void *sub_resource = mem_ptr.ptr;
			U64 _size = Resource_Deserialize_Impl(arena, res_type, item, sub_resource, array_item_meta->size);
			//WriteToMemberPtr(mem_ptr, &sub_resource);
		} break;
	}
}


int
IsUnion(ClassMemberMetadata *meta)
{
	return meta->types[1].type != ValueType::Unknown;
}

void
WriteMemoryChunkToClass(ValuesList class_chunk, int member_index, ValuesList in_list)
{
	ValuePtr class_member_ptr = GetValuePtr(class_chunk, member_index);
	if (in_list.is_array)
	{
		WriteToMemberPtr(class_member_ptr, in_list.value);
		ValuePtr array_count_ptr = GetValuePtr(class_chunk, member_index-1);
		WriteToMemberPtr(array_count_ptr, &in_list.value_count);
	}
	else
	{
		WriteToMemberPtr(class_member_ptr, in_list.value);
	}
}

// TODO(agw): return any meta info, like array count or enum type
void
DeserializeMember(Arena *arena, ValuePtr ptr, JsonItem json)
{
	JsonItem item = json;
	if (ptr.union_value_name.size > 0)
	{
		item = JsonItem_GetObjectItem(arena, json, ptr.union_value_name);
	}

	CopyValue(arena, ptr, ptr.type, item);
}

void
DeserializeChunk(Arena *arena, ValuesList chunk, JsonItem json, ClassMemberMetadata *meta)
{
	if (json.cardinality == JsonItemValueCardinality::Single)
	{
		ValuePtr ptr = GetValuePtr(chunk, 0);
		DeserializeMember(arena, ptr, json);
	}
	else if(json.cardinality == JsonItemValueCardinality::Array)
	{
		for (int i = 0; i < json.count; i++)
		{
			ValuePtr ptr = GetValuePtr(chunk, i);
			JsonItem json_array_item = JsonItem_GetArrayItem(json, i);
			DeserializeMember(arena, ptr, json_array_item);
		}
	}
}

U64
Resource_Deserialize_Impl(Arena *arena, 
                          ResourceType type,
                          JsonItem in_item,
                          void *out,
                          U64 out_size)
{
	TimeFunction;
	ClassMetadata *meta = &class_metadata[(int)type];

	// TODO(alex): this may be a little hack-y...idk
	ResourceType *out_res_type = (ResourceType*)out;
	*out_res_type = type;

	for (int i = 0; i < meta->members_count; i++)
	{
		ClassMemberMetadata *mem_meta = &meta->members[i];

		JsonItem member_json = JsonItem_GetObjectItem(arena, in_item, mem_meta->name);
		if (member_json.count == 0) continue;

		ValuesList member_values = ValuesListFromJson(arena, member_json, mem_meta);
		DeserializeChunk(arena, member_values, member_json, mem_meta);

		if (member_json.count > 0 && member_values.is_array && i > 0)
		{
			ClassMemberMetadata *count_meta = &meta->members[i-1];
			Assert(sizeof(member_json.count) == count_meta->size);

			U64 *dest = (U64*)((char*)out + count_meta->offset);
			*dest = member_json.count;
		}

		if (member_values.is_array || member_values.value_type.type == ValueType::Class_Reference)
		{
			void *dest = (char*)out + mem_meta->offset;
			*(size_t*)dest = (size_t)member_values.value;
		}
		else
		{
			void *dest = (char*)out + mem_meta->offset;
			memcpy(dest, member_values.value, member_values.value_size);
		}
	}


	return out_size;
}

U64
Resource_Deserialize(Arena *arena, ResourceType type, JsonItem json, void* out, U64 out_size)
{
	HashTable_Init(arena);
	return Resource_Deserialize_Impl(arena, type, json, out, out_size);
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
	HashTable_Init(arena);
	TimeFunction;
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
