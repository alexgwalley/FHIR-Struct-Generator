#include <stdlib.h>

typedef unsigned long long u64;


typedef struct Arena {
	void *start;
	u64 position;
	u64 capacity;
} Arena;

Arena* ArenaAlloc(u64 capacity);
void* ArenaPush(Arena *arena, u64 size);
void* ArenaPushZero(Arena *arena, u64 size);
void ArenaRelease(Arena* arena);
void ArenaPop(Arena *arena, u64 size);
void ArenaClear(Arena *arena);

#define PushArray(arena, type, count) (type *)ArenaPush((arena), sizeof(type)*(count))
#define PushArrayZero(arena, type, count) (type *)ArenaPushZero((arena), sizeof(type)*(count))
#define PushStruct(arena, type) PushArray((arena), (type), 1)
#define PushStructZero(arena, type) PushArrayZero((arena), (type), 1)

