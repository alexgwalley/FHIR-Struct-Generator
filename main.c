#include <stdio.h>
#include "fhir_structs_gen.h"
#include "arena.h"
#include "string_builder.h"

#define Serialize(builder, type, thing, key, indent) type##_Serialize((builder), (thing), (key), (indent))

void
AppendIndent(StringBuilder *builder, int indent)
{
	for(int i = 0; i < indent; i++) {
		StringBuilder_Append(builder, "\t");
	}
}

int main() {
	Arena *arena = ArenaAlloc(32*1024*1024);

	Patient *patient = PushArrayZero(arena, Patient, 1);
	patient->language = "english";

	StringBuilder builder = StringBuilder_Create(arena, 1024*1024);
	Patient_Serialize(&builder, patient, "patient", 0);

	printf("%s\n", builder.string);

	return 0;
}
