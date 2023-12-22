#include <iostream>
#include <memory>
#include "fhir_classes.h"
using namespace std;

int main()
{
	HumanName name;
	name.given = { "Alex" };

	Patient patient;
	patient.name.push_back(make_shared<HumanName>(name));
	std::cout << patient.name[0]->given[0] << std::endl;
	return 0;
}