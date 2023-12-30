#if 0
struct ClassMemberMetadata
{
	String8 name;
	ValueType type;
	String8 class_reference_name;
	U64 offset;
};


typedef struct ClassMetadata ClassMetadata;
struct ClassMetadata
{
	String8 name;
	ResourceType type;
	U64 member_count;
	ClassMemberMetadata *members;
};

ClassMetadata metadata = 
{
	.name = Str8Lit("Bundle"),
	.type = ResourceType::Bundle,
	.member_count = 13,
	.members = {
		{
			.name = Str8Lit("id"),
			.type = ValueType::String,
			.offset = 4 // how do we get this?
		},
		{
			.name = Str8Lit("meta"),
			.type = ValueType::Class_Reference,
			.offset = 8
		},
	}
};
#endif
#include <string.h>

void
CopyValue(void *out, ValueType type, cJSON *item)
{
	if (!item)
		return;

	switch (type)
	{
		case ValueType::String:
			char *char_str = cJSON_GetStringValue(item);
			String8 string_value = Str8C(char_str);
			memcpy(out, &string_value, sizeof(string_value));
	}
}

void*
Resource_Deserialize(Arena *arena, ResourceType type, cJSON *json)
{
	ClassMetadata *meta = { 0 };
	U64 result_size = meta->size;
	void* result = ArenaPush(arena, result_size);
	for (int i = 0; i < meta->members_count; i++)
	{
		ClassMember mem = meta->members[i].mem;
		U16 offset = meta->members[i].offset;
		void* mem_ptr = (char*)result + offset;
		switch (mem.type)
		{

			case ClassMemberType::Single:
			{
				// TODO(alex): make sure there is a null char
				char* member_name = (char*)mem.name.str;
				cJSON *item = cJSON_GetObjectItem(json, member_name);
				CopyValue(mem_ptr, mem.value_type.single.type, item);
			} break;
			
			case ClassMemberType::Union:
			{

			} break;
		}
	}

	return result;
}