enum class DeserializationFlag
{
	USE_STRING8 = 1 << 0,
	USE_CONSTRUCTOR = 1 << 1,
	USE_CJSON = 1 << 2,
};

typedef struct DeserializationOptions DeserializationOptions;
struct DeserializationOptions 
{
	U8 flags;
};

String8
DeserializationCodeFrom(Arena *arena, 
                        DeserializationOptions options,
                        ClassDefinition *def);
