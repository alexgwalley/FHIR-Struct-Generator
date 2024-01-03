#ifndef FHIR_CLASS_H
#define FHIR_CLASS_H

#define ENUM_SIZE 4

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
	Class_Reference,
	ResourceType,
	ArrayCount
};


typedef struct ValueTypeSizePair ValueTypeSizePair;
struct ValueTypeSizePair 
{
	ValueType type;
	U64 size;
};

ValueTypeSizePair value_type_to_size[] =
{
	{ ValueType::Unknown, 0 },
	{ ValueType::Base64Binary, sizeof(String8) },
	{ ValueType::Canonical, sizeof(String8) },
	{ ValueType::Code, sizeof(String8) },
	{ ValueType::Id, sizeof(String8) },
	{ ValueType::Markdown, sizeof(String8) },
	{ ValueType::Oid, sizeof(String8) },
	{ ValueType::String, sizeof(String8) },
	{ ValueType::Uri, sizeof(String8) },
	{ ValueType::Url, sizeof(String8) },
	{ ValueType::Uuid, sizeof(String8) },
	{ ValueType::Boolean, sizeof(B32) },
	{ ValueType::PositiveInt, sizeof(U64) },
	{ ValueType::UnsignedInt, sizeof(U64) },
	{ ValueType::Decimal, sizeof(double) },
	{ ValueType::Date, sizeof(String8) },
	{ ValueType::DateTime, sizeof(String8) },
	{ ValueType::Time, sizeof(String8) },
	{ ValueType::Instant, sizeof(String8) },
	{ ValueType::Class_Reference, sizeof(void*) },
	{ ValueType::ResourceType, ENUM_SIZE },
	{ ValueType::ArrayCount, sizeof(U64) }
};

typedef struct StringValueTypePair StringValueTypePair;
struct StringValueTypePair 
{
	String8 str;
	ValueType type;
};


String8 value_type_str[] = {
	Str8Lit("Unknown"),
	Str8Lit("Base64Binary"),
	Str8Lit("Canonical"),
	Str8Lit("Code"),
	Str8Lit("Id"),
	Str8Lit("Markdown"),
	Str8Lit("Oid"),
	Str8Lit("String"),
	Str8Lit("Uri"),
	Str8Lit("Url"),
	Str8Lit("Uuid"),
	Str8Lit("Boolean"),
	Str8Lit("PositiveInt"),
	Str8Lit("UnsignedInt"),
	Str8Lit("Decimal"),
	Str8Lit("Date"),
	Str8Lit("DateTime"),
	Str8Lit("Time"),
	Str8Lit("Instant"),
	Str8Lit("Class_Reference"),
	Str8Lit("ResourceType"),
	Str8Lit("ArrayCount")
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
	{Str8Lit("ResourceType"), ValueType::ResourceType},
	{Str8Lit("U64"), ValueType::ArrayCount}
};

struct ValueTypes {
	U64 num_types;
	ValueType *types;
	String8 *type_names;
};

struct ValueTypeAndName
{
	ValueType type;
	String8 name;
};

enum class ClassMemberType
{
	Unknown,
	Single,
	Enum,
	Union
};

String8 class_member_type_str[] = {
	Str8Lit("Unknown"),
	Str8Lit("Single"),
	Str8Lit("Enum"),
	Str8Lit("Union")
};

struct ClassMember
{
	String8 name;
	Cardinality cardinality;
	union {
		ValueTypes types;
		ValueTypeAndName single;
	} value_type;
	ClassMemberType type;
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