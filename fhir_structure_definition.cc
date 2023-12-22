#include <vector>
#include <iostream>
#include <sstream>
#include <string>
#include "fhir_structure_definition.h"
#include "shared_concepts.h"
#include "src/cJSON.h"

using namespace std;

const string element_types[] = {"BackboneElement", "Element"};


bool
StringInElementTypes(string str) {
	for (int i = 0; i < sizeof(element_types) / sizeof(element_types[0]); i++) {
		if (str == element_types[i]) return true;
	}
	return false;
}


optional<ClassMemberDefinition>
ClassMemberDefinitionFromElementDefinition(ElementDefinition& elem) {
	string name = elem.GetFinalPartOfPath();
	vector<string> types = elem.GetTypeNames();

	Cardinality cardinality = elem.GetCardinality();
	ClassMemberDefinition result(name,
	                             elem.path,
	                             types,
	                             cardinality,
	                             elem.content_reference,
	                             elem.type);

	return result;
}

ElementDefinition::ElementDefinition(cJSON *elem) {
	// TODO(alex): this _could_ be faster by looping through and comparing...maybe
	if (!elem) return;
	cJSON *_id = cJSON_GetObjectItem(elem, "id");
	if (_id) {
		id = string(cJSON_GetStringValue(_id));
	}
	cJSON *_path = cJSON_GetObjectItem(elem, "path");
	if (_path) {
		path = string(cJSON_GetStringValue(_path));
	}

	cJSON *_def = cJSON_GetObjectItem(elem, "definition");
	if (_def) {
		definition = string(cJSON_GetStringValue(_def));
	}

	cJSON *_min = cJSON_GetObjectItem(elem, "min");
	if (_min) {
		min = cJSON_GetNumberValue(_min);
	}
	cJSON *_max = cJSON_GetObjectItem(elem, "max");
	if (_max) {
		max = string(cJSON_GetStringValue(_max));
	}

	cJSON *_content_reference = cJSON_GetObjectItem(elem, "contentReference");
	if (_content_reference) {
		content_reference = string(cJSON_GetStringValue(_content_reference));
	}

	cJSON *_type = cJSON_GetObjectItem(elem, "type");
	if (_type) {
		int num_types = cJSON_GetArraySize(_type);
		for (int i = 0; i < num_types; i++) {
			cJSON *nameless = cJSON_GetArrayItem(_type, i);
			cJSON *code = cJSON_GetObjectItem(nameless, "code");
			if (code) {
				value_types.push_back(string(cJSON_GetStringValue(code)));
			}
		}
	}

	type = GetType();
}

string
ElementDefinition::GetFinalPartOfPath () const
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

bool
ElementDefinition::IsClass() const 
{
	if (value_types.size() != 1) return false;
	return StringInElementTypes(value_types[0]);
}

vector<string>
ElementDefinition::GetTypeNames() const
{
	vector<string> result;
	for (string value : value_types) {
		if (value == STRING_CONSTANT_URL) result.push_back("string");
		else if (value == BOOLEAN_CONSTANT_URL) result.push_back("bool");
		else if (value == DECIMAL_CONSTANT_URL) result.push_back("double");
		else if (value == INTEGER_CONSTANT_URL) result.push_back("long");
		else if (value == TIME_CONSTANT_URL) result.push_back("string");
		else if (value == DATETIME_CONSTANT_URL) result.push_back("string");
		else if (value == DATE_CONSTANT_URL) result.push_back("string");
		else result.push_back(value);
	}
	return result;
}

Cardinality
ElementDefinition::GetCardinality() const
{
	if (!min || !max) return Cardinality::Unknown;
	if (min == 0.0 && max == "*")
	{
		return Cardinality::ZeroToInf;

	} else if (min == 0.0 && max == "1")
	{
		return Cardinality::ZeroToOne;
	} else if (min == 1.0 && max == "1") 
	{
		return Cardinality::OneToOne;
	}

	return Cardinality::Unknown;
}

DefinitionType
ElementDefinition::GetType()
{
	for (string type : value_types) {
		for (string elem_type : element_types) {
			if (type == elem_type) {
				return DefinitionType::Class;
			}
		}
	}

	for (string type : value_types) {
		if (primative_paths.find(type) != primative_paths.end()) {
			return DefinitionType::Primative;
		}
	}

	return DefinitionType::Class_Reference;
}

StructureDefinition::StructureDefinition(cJSON *resource)
{
	if (!resource) return;

	cJSON *_id = cJSON_GetObjectItem(resource, "id");
	if (_id) {
		id = string(cJSON_GetStringValue(_id));
	} else {
		cJSON *name = cJSON_GetObjectItem(resource, "name");
		if (name) {
			id = string(cJSON_GetStringValue(name));
		}
	}

	cJSON *snapshot = cJSON_GetObjectItem(resource, "snapshot");
	if (!snapshot) return;
	cJSON *element = cJSON_GetObjectItem(snapshot, "element");
	if (!element) return;
	int element_count = cJSON_GetArraySize(element);
	for (int i = 0; i < element_count; i++) {
		cJSON *elem = cJSON_GetArrayItem(element, i);
		ElementDefinition def(elem);
		elements[def.path] = def;
	}
}

void
AddMemberDefinitionToParent(map<string, ClassDefinition>& definitions, ElementDefinition elem)
{
	auto mem_def = ClassMemberDefinitionFromElementDefinition(elem);
	if (!mem_def) return;
	mem_def->type = DefinitionType::Class_Reference;

	auto this_class = Path_GetClassDefinition(elem.path, definitions);
	if (!this_class) {
		cout << "Path is not part of a path: " << elem.path << endl;
		abort();
	}

	auto up_one = Path_GoUpOne(this_class->get().path);
	if (!up_one) {
		cout << "Cannot go up one path from " << this_class->get().path << endl;
		abort();
	}

	auto parent_class = Path_GetClassDefinition(*up_one, definitions);

	if (!parent_class) {
		cout << "Path does not have parent class: " << elem.path << endl;
		abort();
	}

	// NOTE(alex): This is a little janky, but is needed so that any "BackboneElement" will get removed
	// before adding class name
	//string class_name = *elem.GetClassName(definitions);
	mem_def->possible_types.clear();
	mem_def->possible_types.push_back(elem.path);
	parent_class->get().AddMemberIfNotPresent(*mem_def);
}

vector<ClassDefinition>
StructureDefinition::GetClassDefinitions(map<string, ClassDefinition> definitions)
{

	vector<ClassDefinition> result;
	if (primative_paths.find(id) != primative_paths.end()) return result;
	ClassDefinition base;
	if (definitions.find(id) == definitions.end()) {
		base.path = id;
		definitions[id] = base;
	} else {
		cout << "Repeat class: " << id;
		return result;
		//base = definitions[id];
	}

	// Cases: 
	// 1. Is Primative: Get parent path class, add to that
	// 2. Is Class reference
	// 3. Is Class

	for (auto elem_pair : elements) {
		ElementDefinition elem = elem_pair.second;
		if (elem.path == base.path) continue;
		switch (elem.type) {
			case DefinitionType::Class: {
#if 1
				if (definitions.find(elem.path) != definitions.end()) {
					continue;
				}
#endif
				ClassDefinition class_def(elem.path);
				definitions[elem.path] = class_def;

				AddMemberDefinitionToParent(definitions, elem);
			} break;
			case DefinitionType::Class_Reference:
			case DefinitionType::Primative: {
				auto parent = Path_GetClassDefinition(elem.path, definitions);
				if (!parent) continue;

				auto mem_def = ClassMemberDefinitionFromElementDefinition(elem);
				if (!mem_def) continue;
				parent->get().AddMemberIfNotPresent(*mem_def);
			} break;
		}
	}

	for (const auto& internal_def : definitions) {
		result.push_back(internal_def.second);
	}

	return result;
}