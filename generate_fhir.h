#include "types.h"

typedef enum FhirPropertyCardinality {
	FhirPropertyCardinality_Unknown,
	FhirPropertyCardinality_Single,
	FhirPropertyCardinality_Array
} FhirPropertyCardinality;

typedef struct FhirProperty {
	char *key;
	char *description;
	char *type; // struct name
	FhirPropertyCardinality cardinality;
} FhirProperty;

typedef enum FhirResourceType {
	FhirResourceType_Unknown,
	FhirResourceType_Struct,
	FhirResourceType_String,
	FhirResourceType_Number,
} FhirResourceType;

typedef struct FhirResource {
	char *name;
	char *pattern;
	char *description;
	char *type_str;
	FhirResourceType type;
	int properties_count;
	FhirProperty *properties;
} FhirResource;
