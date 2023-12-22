#pragma once
#ifndef SHARED_H
#define SHARED_H
#include <string>
#include <set>
#include <vector>
#include <map>
#include <optional>
#include <functional>

using namespace std;

const string STRING_CONSTANT_URL = "http://hl7.org/fhirpath/System.String";
const string BOOLEAN_CONSTANT_URL = "http://hl7.org/fhirpath/System.Boolean";
const string DECIMAL_CONSTANT_URL = "http://hl7.org/fhirpath/System.Decimal";
const string INTEGER_CONSTANT_URL = "http://hl7.org/fhirpath/System.Integer";
const string TIME_CONSTANT_URL = "http://hl7.org/fhirpath/System.Time";
const string DATETIME_CONSTANT_URL = "http://hl7.org/fhirpath/System.DateTime";
const string DATE_CONSTANT_URL = "http://hl7.org/fhirpath/System.Date";

using namespace std;

enum Cardinality
{
	Unknown,
	ZeroToOne,
	ZeroToInf,
	OneToOne
};


enum DefinitionType {
	Class,
	Class_Reference,
	Primative
};

enum ValueType {
	ValueType_Unknown,
	String,
	Boolean,
	Number,
	Class_Reference,
	Multiple
};


extern std::set<std::string> primative_paths;
extern map<string, string> fhir_primatives_map;
extern class ClassDefinition;

optional <reference_wrapper<ClassDefinition>>
Path_GetClassDefinition(string path,
						map<string, ClassDefinition>& definitions);

vector<size_t> 
Path_GetDotPositions(string path);

optional <string> 
Path_GoUpOne(string path);
#endif