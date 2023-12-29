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
#include <windows.h>

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
	HOW THIS SHOULD WORK
	1. Deserialize the FHIR to StructureDefinitions [X]
	2. Collect all StructureDefinitions and Elements
		into one list of Resources
	3. Turn these resources into ClassDefinitions
	4. Print or do what you will with them
*/


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
GetStructureDefinitionsForFile(std::string file_path)
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
		std::string type = std::string(cJSON_GetStringValue(resourceType));
		if (type != "StructureDefinition") continue;
			
		result.push_back(StructureDefinition(resource));
	}

	return result;
}

void
AppendPrimatives(std::ostream& out) {
	for (auto elem : fhir_primatives_map) {
		// TODO(alex): need to make some mapping from
		// fhir primatives to prefixed type
		out << "typedef std::string " << elem.second << ";" << endl;
	}
}

int 
main()
{

	std::cout << "Loading Structure Definitions..." << std::endl;
	auto structure_definitions = GetStructureDefinitionsForFile("fhir/profiles-resources.json");
#if 1
	for (auto sd : GetStructureDefinitionsForFile("fhir/profiles-types.json")) {
		structure_definitions.push_back(sd);
	}
	for (auto sd : GetStructureDefinitionsForFile("fhir/profiles-others.json")) {
		structure_definitions.push_back(sd);
	}
#endif

	cout << "Opening output file..." << std::endl;
	std::ofstream out_file;
	out_file.open("fhir_classes.h");

	AppendImports(out_file);
	out_file << std::endl;
	AppendPrimatives(out_file);
	out_file << std::endl;

	std::map<std::string, Resource> resources;

	std::cout << "Getting Resources" << std::endl;
	for (StructureDefinition sd : structure_definitions) {
		Resource resource = sd.GetResource();
		resources[resource.name] = resource;
	}

	// TODO(alex): transform resources to classes
	for (auto resource : resources) {
		std::cout << resource.second.name << std::endl;
	}
#if 0
	out_file << "namespace R4 {" << endl;

	for (auto def : resources) {
		//def.second.OutputForwardDeclaration(out_file);
	}


	cout << "Writing to File..." << endl;
	for (auto def : resources) {
		//def.second.OutputToStream(out_file, class_definitions);
		out_file << endl;
	}

	out_file << "};" << endl;
#endif

	return 0;
}
