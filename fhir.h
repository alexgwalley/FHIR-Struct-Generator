typedef char* Code;
typedef char* System;
typedef char* Date;
typedef char* String;
typedef String Uri;

typedef struct HumanName HumanName;

typedef struct Meta {

} Meta;

typedef struct Identifier {

} Identifier;

 struct HumanName {

};

// Description:
// resourceType: Patient
typedef struct Patient {
	String id;
	Meta meta;
	Uri implicitRules;
	Identifier identifier;
	HumanName name;


} Patient;


/*
 * 1. Forward declare all resource types
 * 2. if child has key not starting with '_'
 * 3. Keep description / pattern in comment above struct definition
 * 4. each array will need count as well
 * if no "type" use "$ref"
 * number = double
 *
 * Keysof(top.properties)
 * */
