#ifndef ARENA_STRUCT_EXPORTER
#define ARENA_STRUCT_EXPORTER
String8 CallToExportString(Arena *arena, char *fmt, ...);
String8 OutputClassDefinition(Arena *arena, ClassDefinition *def);
String8 String8FromValueType(Arena *arena, ValueType type, String8 class_reference_name);
String8 EnumNameFromMemberName(Arena *arena, String8 member_name);
String8 EnumMemberNameFromMemberName(Arena *arena, String8 member_name);

String8 GetClassNameFromUnionName(Arena* arena, String8 union_name);
String8 GetUnionInternalTypeName(Arena *arena, ValueType type, String8 type_name, String8 member_name);
#endif