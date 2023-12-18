#ifndef STRING_LIST_H
#define STRING_LIST_H
#include "arena.h"
#include <stdbool.h>

struct StringNode;
struct StringNode {
	struct StringNode *next;
	char* value;
};
typedef struct StringNode StringNode;

typedef struct StringList {
	Arena *arena;
	StringNode *start;
} StringList;

StringList StringList_Create(Arena *arena);
void StringList_Append(StringList *list, char* str);
char * AllocateAndCopyString(Arena *arena, char* str);
bool StringList_Includes(StringList *list, char *str);
#endif
