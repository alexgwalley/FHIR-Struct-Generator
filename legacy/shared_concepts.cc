#include "shared_concepts.h"
#include "class_definition.h"
#include "fhir_structure_definition.h"
#include <string>
#include <vector>
#include <optional>
#include <map>
#include <set>

using namespace std;

set<string> primative_paths = {
	/*
	STRING_CONSTANT_URL,
	BOOLEAN_CONSTANT_URL,
	DECIMAL_CONSTANT_URL,
	INTEGER_CONSTANT_URL,
	TIME_CONSTANT_URL,
	DATETIME_CONSTANT_URL,
	DATE_CONSTANT_URL,
	*/
	"base64Binary",
	"boolean",
	"canonical",
	"code",
	"date",
	"dateTime",
	"decimal",
	"id",
	"instant",
	"integer",
	"markdown",
	"oid",
	"positiveInt",
	"string",
	"time",
	"unsignedInt",
	"uri",
	"url",
	"uuid"
};

map <string, string> fhir_primatives_map = {
	{ "base64Binary", "fhir_base64Binary" },
	{ "boolean", "fhir_boolean" },
	{ "canonical", "fhir_canonical" },
	{ "code", "fhir_code" },
	{ "date", "fhir_date" },
	{ "dateTime", "fhir_dateTime" },
	{ "decimal", "fhir_decimal" },
	{ "id", "fhir_id" },
	{ "instant", "fhir_instant" },
	{ "integer", "fhir_integer" },
	{ "markdown", "fhir_markdown" },
	{ "oid", "fhir_oid" },
	{ "positiveInt", "fhir_positiveInt" },
	{ "string", "fhir_string" },
	{ "time", "fhir_time" },
	{ "unsignedInt", "fhir_unsignedInt" },
	{ "uri", "fhir_uri" },
	{ "url", "fhir_url" },
	{ "uuid", "fhir_uuid" }
};


vector<size_t>
Path_GetDotPositions(string path)
{
	vector<size_t> dot_positions;
	size_t pos = path.find('.');

	while (pos != string::npos) {
		dot_positions.push_back(pos);
		pos = path.find('.', pos + 1);
	}
	return dot_positions;
}

string
Path_GetFinalPart (string path)
{
	if (path.size() == 0) return "ERROR";

	vector<size_t> dot_positions = Path_GetDotPositions(path);

	if (dot_positions.size() == 0) {
		return path;
	}

	int delim_index = path.find(".");
	size_t final_dot = dot_positions[dot_positions.size()-1];
	string final_part = path.substr(final_dot + 1);

	return final_part;
}

optional <string>
Path_GoUpOne(string path)
{
	if (path.size() == 0) return nullopt; 

	vector<size_t> dot_positions = Path_GetDotPositions(path);
	if (dot_positions.size() == 0) return nullopt;
	int dot_index = dot_positions.size()-1;
	return path.substr(0, dot_positions[dot_index]);
}

optional<reference_wrapper<ClassDefinition>>
Path_GetClassDefinition(string path, map<string, ClassDefinition>& definitions)
{
	if (path.size() == 0)
		return nullopt;

	vector<size_t> dot_positions = Path_GetDotPositions(path);

	int dot_index = dot_positions.size()-1;
	string potential_class_name = path;
	while (definitions.find(potential_class_name) == definitions.end()) {
		if (dot_index == -1) return nullopt;

		string str = path.substr(0, dot_positions[dot_index]);
		potential_class_name = str;
		dot_index--;
	}

	return optional<reference_wrapper<ClassDefinition>>(definitions[potential_class_name]);
}