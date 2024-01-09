/* C++ code produced by gperf version 3.0.1 */
/* Command-line: gperf.exe -t --output-file=src/generated/gperf_hash_tables/InsurancePlan-Member-Lookup.cc -CGD ./src/generated/gperf_class_files/InsurancePlan.gperf  */
/* Computed positions: -k'1-2' */

#if !((' ' == 32) && ('!' == 33) && ('"' == 34) && ('#' == 35) \
      && ('%' == 37) && ('&' == 38) && ('\'' == 39) && ('(' == 40) \
      && (')' == 41) && ('*' == 42) && ('+' == 43) && (',' == 44) \
      && ('-' == 45) && ('.' == 46) && ('/' == 47) && ('0' == 48) \
      && ('1' == 49) && ('2' == 50) && ('3' == 51) && ('4' == 52) \
      && ('5' == 53) && ('6' == 54) && ('7' == 55) && ('8' == 56) \
      && ('9' == 57) && (':' == 58) && (';' == 59) && ('<' == 60) \
      && ('=' == 61) && ('>' == 62) && ('?' == 63) && ('A' == 65) \
      && ('B' == 66) && ('C' == 67) && ('D' == 68) && ('E' == 69) \
      && ('F' == 70) && ('G' == 71) && ('H' == 72) && ('I' == 73) \
      && ('J' == 74) && ('K' == 75) && ('L' == 76) && ('M' == 77) \
      && ('N' == 78) && ('O' == 79) && ('P' == 80) && ('Q' == 81) \
      && ('R' == 82) && ('S' == 83) && ('T' == 84) && ('U' == 85) \
      && ('V' == 86) && ('W' == 87) && ('X' == 88) && ('Y' == 89) \
      && ('Z' == 90) && ('[' == 91) && ('\\' == 92) && (']' == 93) \
      && ('^' == 94) && ('_' == 95) && ('a' == 97) && ('b' == 98) \
      && ('c' == 99) && ('d' == 100) && ('e' == 101) && ('f' == 102) \
      && ('g' == 103) && ('h' == 104) && ('i' == 105) && ('j' == 106) \
      && ('k' == 107) && ('l' == 108) && ('m' == 109) && ('n' == 110) \
      && ('o' == 111) && ('p' == 112) && ('q' == 113) && ('r' == 114) \
      && ('s' == 115) && ('t' == 116) && ('u' == 117) && ('v' == 118) \
      && ('w' == 119) && ('x' == 120) && ('y' == 121) && ('z' == 122) \
      && ('{' == 123) && ('|' == 124) && ('}' == 125) && ('~' == 126))
/* The character set is not based on ISO-646.  */
#error "gperf generated tables don't work with this execution character set. Please report a bug to <bug-gnu-gperf@gnu.org>."
#endif

#line 8 "./src/generated/gperf_class_files/InsurancePlan.gperf"
struct fhir_deserialize::MemberNameAndOffset;
enum
  {
    TOTAL_KEYWORDS = 35,
    MIN_WORD_LENGTH = 2,
    MAX_WORD_LENGTH = 23,
    MIN_HASH_VALUE = 2,
    MAX_HASH_VALUE = 55
  };

/* maximum key range = 54, duplicates = 0 */

class InsurancePlan_Gperf
{
private:
  static inline unsigned int hash (const char *str, unsigned int len);
public:
  static const struct fhir_deserialize::MemberNameAndOffset *InsurancePlan_MemberLookup (const char *str, unsigned int len);
};

inline unsigned int
InsurancePlan_Gperf::hash (register const char *str, register unsigned int len)
{
  static const unsigned char asso_values[] =
    {
      56, 56, 56, 56, 56, 56, 56, 56, 56, 56,
      56, 56, 56, 56, 56, 56, 56, 56, 56, 56,
      56, 56, 56, 56, 56, 56, 56, 56, 56, 56,
      56, 56, 56, 56, 56, 56, 56, 56, 56, 56,
      56, 56, 56, 56, 56, 56, 56, 56, 56, 56,
      56, 56, 56, 56, 56, 56, 56, 56, 56, 56,
      56, 56, 56, 56, 56, 56, 56, 56, 56, 56,
      56, 56, 56, 56, 56, 56, 56, 56, 56, 56,
      56, 56, 56, 56, 56, 56, 56, 56, 56, 56,
      56, 56, 56, 56, 56, 56, 56, 30, 56, 10,
       0,  0, 56, 56, 56,  0, 56, 56,  5, 25,
       0,  0,  0, 56, 15,  5,  0, 56, 56,  5,
      40, 35, 56, 56, 56, 56, 56, 56, 56, 56,
      56, 56, 56, 56, 56, 56, 56, 56, 56, 56,
      56, 56, 56, 56, 56, 56, 56, 56, 56, 56,
      56, 56, 56, 56, 56, 56, 56, 56, 56, 56,
      56, 56, 56, 56, 56, 56, 56, 56, 56, 56,
      56, 56, 56, 56, 56, 56, 56, 56, 56, 56,
      56, 56, 56, 56, 56, 56, 56, 56, 56, 56,
      56, 56, 56, 56, 56, 56, 56, 56, 56, 56,
      56, 56, 56, 56, 56, 56, 56, 56, 56, 56,
      56, 56, 56, 56, 56, 56, 56, 56, 56, 56,
      56, 56, 56, 56, 56, 56, 56, 56, 56, 56,
      56, 56, 56, 56, 56, 56, 56, 56, 56, 56,
      56, 56, 56, 56, 56, 56, 56, 56, 56, 56,
      56, 56, 56, 56, 56, 56
    };
  return len + asso_values[(unsigned char)str[1]] + asso_values[(unsigned char)str[0]];
}

static const struct fhir_deserialize::MemberNameAndOffset word_array_InsurancePlan[] =
  {
#line 11 "./src/generated/gperf_class_files/InsurancePlan.gperf"
    {"id", 0x8, 1, -1, {(U8*)"id", 2}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 15 "./src/generated/gperf_class_files/InsurancePlan.gperf"
    {"text", 0x40, 5, -1, {(U8*)"text", 4}, fhir_deserialize::ResourceType::Narrative, 0, fhir_deserialize::ResourceType::Unknown},
#line 30 "./src/generated/gperf_class_files/InsurancePlan.gperf"
    {"period", 0xc8, 20, -1, {(U8*)"period", 6}, fhir_deserialize::ResourceType::Period, 0, fhir_deserialize::ResourceType::Unknown},
#line 40 "./src/generated/gperf_class_files/InsurancePlan.gperf"
    {"network", 0x118, 30, -1, {(U8*)"network", 7}, fhir_deserialize::ResourceType::Reference, 0, fhir_deserialize::ResourceType::Unknown},
#line 38 "./src/generated/gperf_class_files/InsurancePlan.gperf"
    {"endpoint", 0x108, 28, -1, {(U8*)"endpoint", 8}, fhir_deserialize::ResourceType::Reference, 0, fhir_deserialize::ResourceType::Unknown},
#line 44 "./src/generated/gperf_class_files/InsurancePlan.gperf"
    {"plan", 0x138, 34, -1, {(U8*)"plan", 4}, fhir_deserialize::ResourceType::InsurancePlan_Plan, 0, fhir_deserialize::ResourceType::Unknown},
#line 23 "./src/generated/gperf_class_files/InsurancePlan.gperf"
    {"identifier", 0x80, 13, -1, {(U8*)"identifier", 10}, fhir_deserialize::ResourceType::Identifier, 0, fhir_deserialize::ResourceType::Unknown},
#line 24 "./src/generated/gperf_class_files/InsurancePlan.gperf"
    {"status", 0x88, 14, -1, {(U8*)"status", 6}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 31 "./src/generated/gperf_class_files/InsurancePlan.gperf"
    {"ownedBy", 0xd0, 21, -1, {(U8*)"ownedBy", 7}, fhir_deserialize::ResourceType::Reference, 0, fhir_deserialize::ResourceType::Unknown},
#line 39 "./src/generated/gperf_class_files/InsurancePlan.gperf"
    {"network_count", 0x110, 29, -1, {(U8*)"network_count", 13}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 37 "./src/generated/gperf_class_files/InsurancePlan.gperf"
    {"endpoint_count", 0x100, 27, -1, {(U8*)"endpoint_count", 14}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 43 "./src/generated/gperf_class_files/InsurancePlan.gperf"
    {"plan_count", 0x130, 33, -1, {(U8*)"plan_count", 10}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 22 "./src/generated/gperf_class_files/InsurancePlan.gperf"
    {"identifier_count", 0x78, 12, -1, {(U8*)"identifier_count", 16}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 36 "./src/generated/gperf_class_files/InsurancePlan.gperf"
    {"contact", 0xf8, 26, -1, {(U8*)"contact", 7}, fhir_deserialize::ResourceType::InsurancePlan_Contact, 0, fhir_deserialize::ResourceType::Unknown},
#line 42 "./src/generated/gperf_class_files/InsurancePlan.gperf"
    {"coverage", 0x128, 32, -1, {(U8*)"coverage", 8}, fhir_deserialize::ResourceType::InsurancePlan_Coverage, 0, fhir_deserialize::ResourceType::Unknown},
#line 17 "./src/generated/gperf_class_files/InsurancePlan.gperf"
    {"contained", 0x50, 7, -1, {(U8*)"contained", 9}, fhir_deserialize::ResourceType::Resource, 0, fhir_deserialize::ResourceType::Unknown},
#line 34 "./src/generated/gperf_class_files/InsurancePlan.gperf"
    {"coverageArea", 0xe8, 24, -1, {(U8*)"coverageArea", 12}, fhir_deserialize::ResourceType::Reference, 0, fhir_deserialize::ResourceType::Unknown},
#line 35 "./src/generated/gperf_class_files/InsurancePlan.gperf"
    {"contact_count", 0xf0, 25, -1, {(U8*)"contact_count", 13}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 41 "./src/generated/gperf_class_files/InsurancePlan.gperf"
    {"coverage_count", 0x120, 31, -1, {(U8*)"coverage_count", 14}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 16 "./src/generated/gperf_class_files/InsurancePlan.gperf"
    {"contained_count", 0x48, 6, -1, {(U8*)"contained_count", 15}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 10 "./src/generated/gperf_class_files/InsurancePlan.gperf"
    {"resourceType", 0x0, 0, -1, {(U8*)"resourceType", 12}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 33 "./src/generated/gperf_class_files/InsurancePlan.gperf"
    {"coverageArea_count", 0xe0, 23, -1, {(U8*)"coverageArea_count", 18}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 12 "./src/generated/gperf_class_files/InsurancePlan.gperf"
    {"meta", 0x18, 2, -1, {(U8*)"meta", 4}, fhir_deserialize::ResourceType::Meta, 0, fhir_deserialize::ResourceType::Unknown},
#line 27 "./src/generated/gperf_class_files/InsurancePlan.gperf"
    {"name", 0xa8, 17, -1, {(U8*)"name", 4}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 13 "./src/generated/gperf_class_files/InsurancePlan.gperf"
    {"implicitRules", 0x20, 3, -1, {(U8*)"implicitRules", 13}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 26 "./src/generated/gperf_class_files/InsurancePlan.gperf"
    {"type", 0xa0, 16, -1, {(U8*)"type", 4}, fhir_deserialize::ResourceType::CodeableConcept, 0, fhir_deserialize::ResourceType::Unknown},
#line 29 "./src/generated/gperf_class_files/InsurancePlan.gperf"
    {"alias", 0xc0, 19, -1, {(U8*)"alias", 5}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 21 "./src/generated/gperf_class_files/InsurancePlan.gperf"
    {"modifierExtension", 0x70, 11, -1, {(U8*)"modifierExtension", 17}, fhir_deserialize::ResourceType::Extension, 0, fhir_deserialize::ResourceType::Unknown},
#line 14 "./src/generated/gperf_class_files/InsurancePlan.gperf"
    {"language", 0x30, 4, -1, {(U8*)"language", 8}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 32 "./src/generated/gperf_class_files/InsurancePlan.gperf"
    {"administeredBy", 0xd8, 22, -1, {(U8*)"administeredBy", 14}, fhir_deserialize::ResourceType::Reference, 0, fhir_deserialize::ResourceType::Unknown},
#line 25 "./src/generated/gperf_class_files/InsurancePlan.gperf"
    {"type_count", 0x98, 15, -1, {(U8*)"type_count", 10}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 28 "./src/generated/gperf_class_files/InsurancePlan.gperf"
    {"alias_count", 0xb8, 18, -1, {(U8*)"alias_count", 11}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 20 "./src/generated/gperf_class_files/InsurancePlan.gperf"
    {"modifierExtension_count", 0x68, 10, -1, {(U8*)"modifierExtension_count", 23}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 19 "./src/generated/gperf_class_files/InsurancePlan.gperf"
    {"extension", 0x60, 9, -1, {(U8*)"extension", 9}, fhir_deserialize::ResourceType::Extension, 0, fhir_deserialize::ResourceType::Unknown},
#line 18 "./src/generated/gperf_class_files/InsurancePlan.gperf"
    {"extension_count", 0x58, 8, -1, {(U8*)"extension_count", 15}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown}
  };

static const signed char lookup[] =
  {
    -1, -1,  0, -1,  1, -1,  2,  3,  4,  5,  6,  7,  8,  9,
    10, 11, 12, 13, 14, 15, -1, -1, 16, 17, 18, 19, -1, 20,
    21, 22, -1, -1, -1, -1, 23, -1, -1, -1, 24, 25, 26, -1,
    27, 28, 29, 30, 31, -1, 32, 33, -1, -1, -1, -1, -1, 34
  };

const struct fhir_deserialize::MemberNameAndOffset *
InsurancePlan_Gperf::InsurancePlan_MemberLookup (register const char *str, register unsigned int len)
{
  if (len <= MAX_WORD_LENGTH && len >= MIN_WORD_LENGTH)
    {
      register int key = hash (str, len);

      if (key <= MAX_HASH_VALUE && key >= 0)
        {
          register int index = lookup[key];

          if (index >= 0)
            {
              register const char *s = word_array_InsurancePlan[index].name;

              if (*str == *s && !strncmp (str + 1, s + 1, len - 1) && s[len] == '\0')
                return &word_array_InsurancePlan[index];
            }
        }
    }
  return 0;
}
