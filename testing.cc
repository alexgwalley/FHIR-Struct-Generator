#include <iostream>
#include <stdio.h>
#include <vector>
#include <map>
#include <set>
#include <string>
#include <sstream>
#include <iostream>
#include <fstream>
#include <optional>
#include "src/cJSON.h"
#include "class_definition.h"
#include "fhir_structure_definition.h"

using namespace std;
void*
ReadEntireFile(char *file_name)
{
	FILE *f = fopen(file_name, "r");
	fseek(f,  0, SEEK_END);
	long length = ftell(f);
	void *result = malloc(length);
	fseek(f, 0, SEEK_SET);

	fread(result, length, 1, f);
	fclose(f);
	return result;
}


/*
class Element
{
public:
	string id;

	void deserialize() 
	{
		id = "test-id";
	}


	~Element()
	{
		cout << "Deconstructing element" << endl;
	}
};


class Narrative : public Element
{
public:
	// Add all of element's stuff
	string status;
	string div;

	Narrative(cJSON *narrative)
	{

	}

	~Narrative()
	{
		cout << "Deconstructing narrative" << endl;
	}
};

class Patient 
{
public:
	string language;
	unique_ptr<Narrative> text;

	Patient(cJSON *patient) {
		cJSON *narrative;
		text = make_unique<Narrative>(narrative);
	}

	~Patient()
	{
		cout << "Deconstructing patient" << endl;
	}
};

*/

// NOTE(alex): snapshot.element seems to include parent's members too
// ...could grab from Def.baseDefinition then filter unique member names out

void
AppendImports(ostream &out)
{
	out << "#include <string>" << endl;
	out << "#include <vector>" << endl;
	out << "#include <optional>" << endl;
	out << "#include <memory>" << endl;
	out << "#include <variant>" << endl;
}

vector<StructureDefinition>
GetStructureDefinitionsForFile(string file_path)
{
	void *json_string = ReadEntireFile((char*)file_path.c_str());
	cJSON *json = cJSON_Parse((char*)json_string);

	cJSON *entry = cJSON_GetObjectItem(json, "entry");
	if (!entry)
	{
		cout << "Could not find entry" << endl;
	}

	vector<StructureDefinition> result;

	int entry_len = cJSON_GetArraySize(entry);
	for (int i = 0; i < entry_len; i++)
	{
		cJSON *item = cJSON_GetArrayItem(entry, i);
		cJSON *resource = cJSON_GetObjectItem(item, "resource");
		cJSON *resourceType = cJSON_GetObjectItem(resource, "resourceType");
		string type = string(cJSON_GetStringValue(resourceType));
		if (type != "StructureDefinition") continue;
			
		result.push_back(StructureDefinition(resource));
	}

	return result;
}

void
AppendPrimatives(ostream& out) {
	for (auto elem : fhir_primatives_map) {
		// TODO(alex): need to make some mapping from
		// fhir primatives to prefixed type
		out << "typedef std::string " << elem.second << ";" << endl;
	}
}

void
OutputClass(ostream &os,
            ClassDefinition def,
            set<string>& completed,
            set<string>& in_progress,
            map<string, ClassDefinition>& definitions)
{
#if 0
	if (in_progress.find(def.path) != in_progress.end()) {
		// ERROR: Circular dependency?
		cout << "ERROR: Circular Dependency";
		cout << "Def: " << def.path << endl;
		cout << "completed:" << endl;
		for (auto str : completed) {
			cout << str << endl;
		}
		cout << "in_progress:" << endl;
		for (auto str : in_progress) {
			cout << str << endl;
		}
		abort();
	}
#endif

	bool done_before = completed.find(def.path) != completed.end();
	if (done_before) return;

	in_progress.insert(def.path);

	auto dependencies = def.GetDependencies(definitions);
	for (string dep : dependencies) {
		if (dep == def.path) continue;
		if (definitions.find(dep) == definitions.end()) {
			continue;
		}
		if (completed.find(dep) != completed.end()) {
			continue;
		}
		ClassDefinition class_def = definitions[dep];
		OutputClass(os, class_def, completed, in_progress, definitions);
	}

	def.OutputToStream(os, definitions);
	completed.insert(def.path);
	in_progress.erase(def.path);
}

int 
main()
{

	cout << "Loading Structure Definitions..." << endl;
	auto structure_definitions = GetStructureDefinitionsForFile("fhir/profiles-resources.json");
#if 1
	for (auto sd : GetStructureDefinitionsForFile("fhir/profiles-types.json")) {
		structure_definitions.push_back(sd);
	}
	for (auto sd : GetStructureDefinitionsForFile("fhir/profiles-others.json")) {
		structure_definitions.push_back(sd);
	}
#endif

	cout << "Opening output file..." << endl;
	ofstream out_file;
	out_file.open("fhir_classes.h");

	AppendImports(out_file);
	out_file << endl;
	AppendPrimatives(out_file);
	out_file << endl;

	map<string, ClassDefinition> class_definitions;

	cout << "Getting Class Definitions..." << endl;
	for (StructureDefinition sd : structure_definitions) {

		for (auto def : sd.GetClassDefinitions(class_definitions)) {
			class_definitions[def.path] = def;
		}
	}

	// TODO(alex): print it required order.
	set <string> completed;
	set <string> in_process;
	vector<string> stack_of_paths;

#if 1
	for (auto def : class_definitions) {
		def.second.OutputForwardDeclaration(out_file);
	}
#endif


	cout << "Writing to File..." << endl;
	for (auto def : class_definitions) {
		def.second.OutputToStream(out_file, class_definitions);
		//OutputClass(out_file, def.second, completed, in_process, class_definitions);
		out_file << endl;
	}


	return 0;
}
