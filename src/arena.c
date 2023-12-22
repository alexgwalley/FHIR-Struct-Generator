#include <stdlib.h>
#include <stdio.h>
#include "arena.h"

Arena*
ArenaAlloc(u64 capacity)
{
	Arena *arena = (Arena*)malloc(sizeof(Arena));
	arena->capacity = capacity;
	arena->pos = 0;
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
	if(arena->pos + size > arena->capacity) {
		printf("Arena ran out of memory \n");
		exit(-1);
		return NULL;	
	}

	void *result = (void*)((char*)arena->start + arena->pos);
	arena->pos += size;

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
	if(arena->pos < size) {
		printf("Trying to pop more than allocated off of arena \n");
		exit(-1);
	}

	arena->pos -= size;
}

void 
ArenaClear(Arena *arena) {
	arena->pos = 0;
}

void
ArenaPopTo(Arena *arena, u64 pos) {
	if(pos > arena->pos) {
		printf("Trying to pop to invalid pos\n");
		exit(-1);
	}

	arena->pos = pos;
}

ArenaTemp
TempBegin(Arena *arena)
{
 ArenaTemp temp = {0};
 temp.arena = arena;
 temp.pos = arena->pos;
 return temp;
}

void
TempEnd(ArenaTemp temp)
{
 ArenaPopTo(temp.arena, temp.pos);
}
void
GenerateScratchArenas(Arena **scratch1, Arena **scratch2, u64 size) 
{
	*scratch1 = ArenaAlloc(size);
	*scratch2 = ArenaAlloc(size);
}
