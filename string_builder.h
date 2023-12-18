#ifndef STRING_BUILDER_H
#define STRING_BUILDER_H
#include "types.h"
#include "arena.h"

#define StringBuilder_Create(arena, ...) _StringBuilder_Create(arena, (1024, ##__VA_ARGS__))
typedef struct StringBuilder {
	Arena *arena;
	char *string;
	u64 pos;
	u64 capacity;
} StringBuilder;

StringBuilder _StringBuilder_Create(Arena *arena, u64 starting_capacity);
int StringBuilder_Append(StringBuilder *builder, char* format, ...);
u64 StringBuilder_GetLength(StringBuilder *builder);
#endif
