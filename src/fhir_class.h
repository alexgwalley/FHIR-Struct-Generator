#ifndef FHIR_CLASS_H
#define FHIR_CLASS_H

// NOTE(agw): The point of Class Definition and Class member
// is to ease in the process of exporting the generated classes,
// devoid of any FHIR weirdness where a string type is a class

enum class DefinitionType {
	Class,
	Class_Reference,
	Primative
};

enum class ValueType {
	Unknown,
	Base64Binary,
	Canonical,
	Code,
	Id,
	Markdown,
	Oid,
	String,
	Uri,
	Url,
	Uuid,
	Boolean,
	PositiveInt,
	UnsignedInt,
	Decimal,
	Date,
	DateTime,
	Time,
	Instant,
	Class_Reference
};

typedef struct StringValueTypePair StringValueTypePair;
struct StringValueTypePair {
	String8 str;
	ValueType type;
};

StringValueTypePair str_type_pairs[] = {
	{Str8Lit("base64Binary"), ValueType::Base64Binary},
	{Str8Lit("canonical"), ValueType::Canonical},
	{Str8Lit("code"), ValueType::Code},
	{Str8Lit("id"), ValueType::Id},
	{Str8Lit("markdown"), ValueType::Markdown},
	{Str8Lit("oid"), ValueType::Oid},
	{Str8Lit("string"), ValueType::String},
	{Str8Lit("uri"), ValueType::Uri},
	{Str8Lit("url"), ValueType::Url},
	{Str8Lit("uuid"), ValueType::Uuid},
	{Str8Lit("boolean"), ValueType::Boolean},
	{Str8Lit("positiveInt"), ValueType::PositiveInt},
	{Str8Lit("unsignedInt"), ValueType::UnsignedInt},
	{Str8Lit("decimal"), ValueType::Decimal},
	{Str8Lit("date"), ValueType::Date},
	{Str8Lit("dateTime"), ValueType::DateTime},
	{Str8Lit("time"), ValueType::Time },
	{Str8Lit("instant"), ValueType::Instant},
	{Str8Lit("http://hl7.org/fhirpath/System.String"), ValueType::String },
	{Str8Lit("http://hl7.org/fhirpath/System.Boolean"), ValueType::Boolean },
	{Str8Lit("http://hl7.org/fhirpath/System.Integer"), ValueType::UnsignedInt },
	{Str8Lit("http://hl7.org/fhirpath/System.Decimal"), ValueType::Decimal },
	{Str8Lit("http://hl7.org/fhirpath/System.Date"), ValueType::Date },
	{Str8Lit("http://hl7.org/fhirpath/System.DateTime"), ValueType::DateTime },
	{Str8Lit("http://hl7.org/fhirpath/System.Time"), ValueType::Time },
};

StringValueTypePair str_type_pairs_export[] = {
	{Str8Lit("fhir_base64Binary"), ValueType::Base64Binary},
	{Str8Lit("fhir_canonical"), ValueType::Canonical},
	{Str8Lit("fhir_code"), ValueType::Code},
	{Str8Lit("fhir_id"), ValueType::Id},
	{Str8Lit("fhir_markdown"), ValueType::Markdown},
	{Str8Lit("fhir_oid"), ValueType::Oid},
	{Str8Lit("fhir_string"), ValueType::String},
	{Str8Lit("fhir_uri"), ValueType::Uri},
	{Str8Lit("fhir_url"), ValueType::Url},
	{Str8Lit("fhir_uuid"), ValueType::Uuid},
	{Str8Lit("fhir_boolean"), ValueType::Boolean},
	{Str8Lit("fhir_positiveInt"), ValueType::PositiveInt},
	{Str8Lit("fhir_unsignedInt"), ValueType::UnsignedInt},
	{Str8Lit("fhir_decimal"), ValueType::Decimal},
	{Str8Lit("fhir_date"), ValueType::Date},
	{Str8Lit("fhir_dateTime"), ValueType::DateTime},
	{Str8Lit("fhir_time"), ValueType::Time },
	{Str8Lit("fhir_instant"), ValueType::Instant},
};

struct ValueTypes {
	U64 num_types;
	ValueType *types;
	// will fill with class_reference name
	String8 *type_name;
};

struct ClassMember
{
	String8 name;
	Cardinality cardinality;
	ValueTypes types;
};

typedef struct ClassMemberNode ClassMemberNode;
struct ClassMemberNode
{
	ClassMemberNode *next;
	ClassMember mem;
};

struct ClassMemberList 
{
	ClassMemberNode *first;
	ClassMemberNode *last;
	U64 count;
};

typedef struct ClassDefinition ClassDefinition;
struct ClassDefinition
{
	String8 name;
	String8List inherits;
	ClassMemberList members;
};

typedef struct ClassDefinitionNode ClassDefinitionNode;
struct ClassDefinitionNode
{
	ClassDefinitionNode *next;
	ClassDefinition def;
};

typedef struct ClassDefinitionList ClassDefinitionList;
struct ClassDefinitionList
{
	ClassDefinitionNode *first;
	ClassDefinitionNode *last;
	U64 count;
};


void
CDListPush(Arena *arena, ClassDefinitionList *list, ClassDefinition def);
ClassDefinitionList
GetClassDefinitionsFromResource(Arena *arena, Resource *res);
ClassDefinitionList CDListMerge(ClassDefinitionList a, ClassDefinitionList b);

String8 ClassNameFromResourceName(Arena *arena, String8 res_name);
StringValueTypePair* 
ValueTypesGetByType(Arena *arena, ValueTypes types, ValueType type);
#endif