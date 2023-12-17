#include <stdlib.h>
#include <stdio.h>
#include "arena.h"

Arena*
ArenaAlloc(u64 capacity)
{
	Arena *arena = (Arena*)malloc(sizeof(Arena));
	arena->capacity = capacity;
	arena->position = 0;
	arena->start = malloc(capacity);

	return arena;
}

void
ArenaRelease(Arena *arena) 
{
	free(arena->start);
	free(arena);
}

void *
ArenaPush(Arena *arena, u64 size)
{
	if(arena->position + size > arena->capacity) {
		printf("Arena ran out of memory \n");
		exit(-1);
		return NULL;	
	}

	void *result = arena->start + arena->position;
	arena->position += size;

	return result;
}

void *
ArenaPushZero(Arena *arena, u64 size)
{
	char* allocated = (char*)ArenaPush(arena, size);
	char* curr = allocated;
	for(int i = 0; i < size; i++) {
		*curr = 0;
		curr++;
	}

	return allocated;
}

void 
ArenaPop(Arena *arena, u64 size)
{
	if(arena->position < size) {
		printf("Trying to pop more than allocated off of arena \n");
		exit(-1);
	}

	arena->position -= size;
}

void 
ArenaClear(Arena *arena) {
	arena->position = 0;
}
