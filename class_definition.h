#pragma once
#include <string>
#include <ostream>
#include <map>
#include <optional>
#include "fhir_structure_definition.h"
#include "shared_concepts.h"

using namespace std;


class FinalClassMemberDefinition {

	string name;
	string full_path;

	ValueType value_type;
	union {
		string _string;
		bool _boolean;
		double _number;
		string _class_reference;
		vector<string> _options;
	} value;

	Cardinality cardinality;

};

class ElementDefinition;
class ClassDefinition;

class IntermediateClassMemberDefinition {
public:
	string name;
	string path;
	vector<string> possible_types;
	Cardinality cardinality;
	optional<string> content_reference_path;
	DefinitionType definition_type;
	ValueType value_type;

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
	definition_type(_type)
	{}

	void OutputToStream(ostream &os, ClassDefinition& parent, map<string, ClassDefinition>& other_definitions);
	vector<string>
	GetDependencies(map<string, ClassDefinition>& definitions);
	string GetCleanName();
	void ResolveTypes(const ClassDefinition& parent,
	                  const map<string, ClassDefinition>& all_definitions);
};

class ClassDefinition {
public:
	string path;
	map<string, IntermediateClassMemberDefinition> members;

	ClassDefinition() {}
	ClassDefinition(string _path): path(_path) {}

	void
	AddMemberIfNotPresent(IntermediateClassMemberDefinition def);
	string GetClassName() const;
	void OutputToStream(ostream &os, map<string, ClassDefinition>& other_definitions);
	void OutputForwardDeclaration(ostream &os);

	vector<string> GetDependencies(map<string, ClassDefinition>& definitions);
};
