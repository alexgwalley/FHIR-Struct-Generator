#include <ostream>
#include <iostream>
#include <sstream>
#include "class_definition.h"
#include "fhir_structure_definition.h"
#include "shared_concepts.h"

using namespace std;

string
DeliminatedToPascal(char delim, string str)
{
	stringstream ss;

	for (int i = 0; i < str.size(); i ++) {
		char c = str[i];
		if (c == delim) {
			i++;
			if (i < str.size()) {
				ss << "_";
				ss << (char)toupper(str[i]);
			}
		} else {
			ss << str[i];
		}
	}

	return ss.str();
}

string
CamelToSnake(string str)
{
	stringstream ss;
	int index = 0;
	for (char c : str) {
		if (isupper(c) && index != 0) {
			ss << "_";
		}
		ss << (char)tolower(c);
		index++;
	}
	return ss.str();
}

string
PascalToCamel(string pasc)
{
	if (pasc.size() > 0) {
		pasc[0] = tolower(pasc[0]);
	}
	return pasc;
}

string
PascalToSnake(string str)
{
	return CamelToSnake(PascalToCamel(str));
}


string
CamelToYelling(string str)
{
	stringstream ss;

	for (char c : str) {
		if (islower(c)) {
			ss << (char)toupper(c);
		}

		if (isupper(c)) {
			ss << "_";
			ss << (char)toupper(c);
		}
	}


	return ss.str();
}


string
SubstringToBrackets(string str) 
{
	size_t index_of_brackets = str.find("[");
	return str.substr(0, index_of_brackets);
}

void
OutputUnion(ostream &os, const ClassMemberDefinition& mem) 
{
	os << "    union " << SubstringToBrackets(mem.name) << "_union {" << endl;
	for (string type : mem.possible_types) {
		os << "        " << type << " " << PascalToSnake(type) << "," << endl;
	}
	os << "    } " << SubstringToBrackets(mem.name) << ";" << endl;
}

void
OutputEnum(ostream &os, const ClassMemberDefinition& mem) 
{
	os << "    enum " << CamelToYelling(SubstringToBrackets(mem.name)) << "_TYPE {" << endl;
	for (int i = 0; i < mem.possible_types.size(); i++) {
		string type = mem.possible_types[i];
		os << "        " << CamelToYelling(PascalToCamel(type));
		if(i < mem.possible_types.size() - 1) {
			os << ",";
		}
		os << endl;
	}
	os << "    } " << CamelToSnake(SubstringToBrackets(mem.name)) << "_type;" << endl;
}

string
VariantName(const ClassMemberDefinition& mem)
{
	return CamelToYelling(SubstringToBrackets(mem.name)) + "_Variant";
}

set<string> illegal_names = {
	"class",
	"short",
	"int",
	"time",
	"long",
	"template",
	"operator",
	"for",
	"struct"
};

string
CleanMemberName(string name)
{
	string result = CamelToSnake(SubstringToBrackets(name));
	if(primative_paths.find(result) != primative_paths.end() ||
		illegal_names.find(result) != illegal_names.end()) {
		result += "_";
	}
	return result;
}

void
OutputVariant(ostream &os, ClassDefinition& parent, const ClassMemberDefinition& mem)
{
	os << "    using " << VariantName(mem) << " = std::variant<" << endl;
	int index = 0;
	for (auto type : mem.possible_types) {
		string type_name = type;
		if (fhir_primatives_map.find(type) != fhir_primatives_map.end()) {
		 	type_name = fhir_primatives_map[type];
		}
		os << "        std::shared_ptr<" << type_name << ">";
		bool last = index == mem.possible_types.size()-1;
		if (!last) os << ",";
		os << endl;
		index++;
	}
	os << "    >;" << endl;

	// TODO(alex): this siblings check is a patch up job
	// I think there is an issue with Observation defining a "decimal value"
	string mem_name = CleanMemberName(mem.name);
	if (parent.members.find(mem_name) != parent.members.end()) {
		mem_name += "_2";
	}

	os << "    " << VariantName(mem) << " " << mem_name << ";" << endl;
}


void
ClassMemberDefinition::OutputToStream(ostream& os, ClassDefinition& parent, map<string, ClassDefinition>& other_definitions)
{

	string mem_name = CleanMemberName(name);
	optional<string> type_name;
	if (content_reference_path) {
		string actual_path = (*content_reference_path).substr(1);
		bool has_definition = other_definitions.find(actual_path) != other_definitions.end();
		if (has_definition) {
			type_name = other_definitions[actual_path].GetClassName();
		} else {
			cout << "Could not find matching content_reference_path: " << *content_reference_path << endl;
			return;
		}
	} else if (possible_types.size() == 1) {
		type_name = DeliminatedToPascal('.', possible_types[0]);
		if (fhir_primatives_map.find(*type_name) != fhir_primatives_map.end()) {
			type_name = fhir_primatives_map[*type_name];
		}
	}

	if (type_name && definition_type == DefinitionType::Class_Reference &&
		primative_paths.find(*type_name) == primative_paths.end()) {
		type_name = "std::shared_ptr<" + *type_name +">";
	}



	if (type_name) {
		switch (cardinality) {
			case Cardinality::ZeroToOne:
				os << "    std::optional<" << *type_name << "> " << mem_name << ";" << endl;
				break;
			case Cardinality::ZeroToInf:
				os << "    std::vector<" << *type_name << "> " << mem_name << ";" << endl;
				break;
			case Cardinality::OneToOne:
				os << "    " << *type_name << " " << mem_name << ";" << endl;
				break;
		}
	} else if(possible_types.size() > 0) {
		OutputVariant(os, parent, *this);
#if 0
		OutputEnum(os, *this); 
		os << endl;
		OutputUnion(os, *this);
#endif
	} else if (possible_types.size() == 0) {
		cout << "ERROR: no possible types for path:" << path << endl;
	}

}

vector<string>
ClassMemberDefinition::GetDependencies(map<string, ClassDefinition>& definitions)
{
	vector<string> result;

	if (definition_type == DefinitionType::Primative) return result;

	for (auto pt : possible_types) {
		bool found = definitions.find(pt) != definitions.end();
		if (!found) continue;
		result.push_back(pt);
	}

	return result;
}

void
OutputDeserialization(ostream &os, string json_name, ClassMemberDefinition& def)
{

	cJSON* member = cJSON_GetStringValue(json_name);
	cJSON* member = cJSON_GetNumberValue(json_name);
	cJSON* member = cJSON_GetStringValue(json_name);

	switch (def.value_type) {
		case ValueType::Class: {

		} break;
		case DefinitionType::Primative: {

		} break;
		case DefinitionType::Class_Reference: {

		} break;
	}
	
}

void
ClassDefinition::OutputToStream(ostream& os, map<string, ClassDefinition>& other_definitions)
{
#if 1
	if (members.size() == 0) {
		return;
	}
#endif 

	os << "class " << GetClassName() << " {" << endl;
	os << "public:"<< endl;

	for (auto mem : members) {
		mem.second.OutputToStream(os, *this, other_definitions);
	}

	os << endl;
	os << GetClassName() << "(cJSON *" <<  PascalToSnake(GetClassName()) << ") {" << endl;

	for (auto mem : members) {
		OutputDeserialization(os, *this, mem);
	}


	os << "}" << endl;

	os << "};" << endl;
}

void
ClassDefinition::OutputForwardDeclaration(ostream& os)
{
#if 1
	if (members.size() == 0) {
		return;
	}
#endif 

	os << "class " << GetClassName() << ";" << endl;
}

void
ClassDefinition::AddMemberIfNotPresent(ClassMemberDefinition def) {
	if (def.path == path || members.find(def.name) != members.end()) return;
	members[def.name] = def;
}

string
ClassDefinition::GetClassName() const
{
	return DeliminatedToPascal('.', path);
}

vector<string>
ClassDefinition::GetDependencies(map<string, ClassDefinition>& definitions)
{
	vector<string> result;
	for (auto mem : members) {
		vector<string> deps = mem.second.GetDependencies(definitions);
		for (auto dep : deps) result.push_back(dep);
	}

	return result;
}