#pragma once
#include <string>
#include <ostream>
#include <optional>
#include <vector>
#include <map>
#include "class_definition.h"
#include "src/cJSON.h"
#include "shared_concepts.h"

using namespace std;

extern class ClassDefinition;

class ElementDefinition 
{
public:
	optional<string> id;
	string path;
	optional<string> short_;
	optional<string> definition;
	optional<double> min;
	optional<string> max;
	vector<string> value_types;
	optional<string> content_reference;

	DefinitionType type;

	ElementDefinition(cJSON *elem);
	ElementDefinition() {}

	string GetFinalPartOfPath() const;
	Cardinality GetCardinality() const;
	vector<string> GetTypeNames() const;
	bool IsClass() const;

private:
	DefinitionType GetType();
};

class StructureDefinition
{
public:
	// Map of path to element 
	map<string, ElementDefinition> elements;
	string id;

	StructureDefinition(cJSON *resource);
	vector<ClassDefinition> GetClassDefinitions(map<string, ClassDefinition> definitions);

private:
	string GetSubclassTypeName(string member_type);
};