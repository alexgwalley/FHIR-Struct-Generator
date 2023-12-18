#include "string_list.h"

StringList
StringList_Create(Arena *arena)
{
	StringList list = {0};
	list.arena = arena;
	return list;
}

char *
AllocateAndCopyString(Arena *arena, char* str)
{
	int len = strlen(str);
	char* allocated = (char *)ArenaPush(arena, len + 1);
	strcpy(allocated, str);
	allocated[len] = '\0';
	return allocated;
}

void
StringList_Append(StringList *list, char* str)
{
	StringNode *node = PushArrayZero(list->arena, StringNode, 1);
	node->value = AllocateAndCopyString(list->arena, str); 

	if(list->start == NULL) {
		list->start = node;
		return;
	}

	StringNode *curr = list->start;
	while(curr->next != NULL) {
		curr = curr->next;
	}
	curr->next = node;
}

bool
StringList_Includes(StringList *list, char *str)
{
	StringNode *curr = list->start;
	while(curr != NULL) {
		if(curr->value && strcmp(str, curr->value) == 0) {
			return true;	
		}
		curr = curr->next;
	}

	return false;
}
