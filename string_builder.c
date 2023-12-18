#include "string_builder.h"
#include <stdio.h>
#include <stdarg.h>


StringBuilder
_StringBuilder_Create(Arena *arena, u64 starting_capacity)
{
	StringBuilder builder = {0};
	builder.arena = arena;
	builder.capacity = starting_capacity;
	builder.string = PushArrayZero(arena, char, starting_capacity);

	return builder;
}


int
StringBuilder_Append(StringBuilder *builder, char* format, ...) {

	int count;
	va_list args;
	va_start(args, format);

	u64 space_left = builder->capacity - builder->pos;
	int len = vsnprintf(builder->string + builder->pos, space_left, format, args);

	builder->pos += len;
	if(len == space_left) {
		printf("Ran out of space in string builder\n");
		exit(-1);
	}

	va_end(args);

	return len;
}


u64 
StringBuilder_GetLength(StringBuilder *builder) {
	return builder->pos;
}
