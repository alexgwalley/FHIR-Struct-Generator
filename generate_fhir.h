#include "types.h"
#include "string_list.h"

typedef enum FhirPropertyCardinality {
	FhirPropertyCardinality_Unknown,
	FhirPropertyCardinality_Single,
	FhirPropertyCardinality_Array
} FhirPropertyCardinality;

typedef struct FhirProperty {
	char *key; // member name
	char *description;
	char *pattern;
	char *type; // struct name
	FhirPropertyCardinality cardinality;
} FhirProperty;

typedef enum FhirResourceType {
	FhirResourceType_Unknown,
	FhirResourceType_Struct,
	FhirResourceType_Union,
	FhirResourceType_String,
	FhirResourceType_Number,
	FhirResourceType_Boolean,
} FhirResourceType;

typedef enum FhirResourceDataType {
	FhirResourceDataType_Properties,
	FhirResourceDataType_OneOf,
} FhirResourceDataType;

typedef struct FhirResource {
	char *name;
	char *pattern;
	char *description;
	char *type_str;
	FhirResourceType type;

	FhirResourceDataType data_type;
	union {
		struct {
			int count;
			FhirProperty *properties;
		} props;
		StringList oneOf;
	} data;
} FhirResource;
