#pragma once
#include <string>
#include <ostream>
#include <map>
#include <optional>
#include "fhir_structure_definition.h"
#include "shared_concepts.h"

using namespace std;


class ElementDefinition;
class ClassDefinition;

class ClassMemberDefinition {
public:
	string name;
	string path;
	vector<string> possible_types;
	Cardinality cardinality;
	optional<string> content_reference_path;
	DefinitionType type;

	ClassMemberDefinition(){}
	ClassMemberDefinition(string _name,
	                      string _path,
	                      vector<string> _possible_types,
	                      Cardinality _cardinality,
	                      optional <string> _content_reference_path,
	                      DefinitionType _type): 
	name(_name),
	path(_path),
	possible_types(_possible_types),
	cardinality(_cardinality),
	content_reference_path(_content_reference_path),
	type(_type)
	{}

	void OutputToStream(ostream &os, ClassDefinition& parent, map<string, ClassDefinition>& other_definitions);
	vector<string>
	GetDependencies(map<string, ClassDefinition>& definitions);
	string GetCleanName();
};

class ClassDefinition {
public:
	string path;
	map<string, ClassMemberDefinition> members;

	ClassDefinition() {}
	ClassDefinition(string _path): path(_path) {}

	void
	AddMemberIfNotPresent(ClassMemberDefinition def);
	string GetClassName() const;
	void OutputToStream(ostream &os, map<string, ClassDefinition>& other_definitions);
	void OutputForwardDeclaration(ostream &os);

	vector<string> GetDependencies(map<string, ClassDefinition>& definitions);
};
