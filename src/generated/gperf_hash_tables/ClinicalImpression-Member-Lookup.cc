/* C++ code produced by gperf version 3.0.1 */
/* Command-line: gperf.exe -t --output-file=src/generated/gperf_hash_tables/ClinicalImpression-Member-Lookup.cc -CGD ./src/generated/gperf_class_files/ClinicalImpression.gperf  */
/* Computed positions: -k'1,3,10' */

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

#line 8 "./src/generated/gperf_class_files/ClinicalImpression.gperf"
struct fhir_deserialize::MemberNameAndOffset;
enum
  {
    TOTAL_KEYWORDS = 42,
    MIN_WORD_LENGTH = 2,
    MAX_WORD_LENGTH = 30,
    MIN_HASH_VALUE = 2,
    MAX_HASH_VALUE = 128
  };

/* maximum key range = 127, duplicates = 0 */

class ClinicalImpression_Gperf
{
private:
  static inline unsigned int hash (const char *str, unsigned int len);
public:
  static const struct fhir_deserialize::MemberNameAndOffset *ClinicalImpression_MemberLookup (const char *str, unsigned int len);
};

inline unsigned int
ClinicalImpression_Gperf::hash (register const char *str, register unsigned int len)
{
  static const unsigned char asso_values[] =
    {
      129, 129, 129, 129, 129, 129, 129, 129, 129, 129,
      129, 129, 129, 129, 129, 129, 129, 129, 129, 129,
      129, 129, 129, 129, 129, 129, 129, 129, 129, 129,
      129, 129, 129, 129, 129, 129, 129, 129, 129, 129,
      129, 129, 129, 129, 129, 129, 129, 129, 129, 129,
      129, 129, 129, 129, 129, 129, 129, 129, 129, 129,
      129, 129, 129, 129, 129, 129, 129,  50,   0, 129,
      129, 129, 129, 129, 129, 129, 129, 129, 129, 129,
        0, 129,  45, 129, 129, 129, 129, 129, 129, 129,
      129, 129, 129, 129, 129,   0, 129,  10,  20,   0,
       30,  20,   0,  50, 129,   0, 129, 129,  20,  35,
       10,   0,   0, 129,   0,   0,  10,  20,  30, 129,
       40,   0, 129, 129, 129, 129, 129, 129, 129, 129,
      129, 129, 129, 129, 129, 129, 129, 129, 129, 129,
      129, 129, 129, 129, 129, 129, 129, 129, 129, 129,
      129, 129, 129, 129, 129, 129, 129, 129, 129, 129,
      129, 129, 129, 129, 129, 129, 129, 129, 129, 129,
      129, 129, 129, 129, 129, 129, 129, 129, 129, 129,
      129, 129, 129, 129, 129, 129, 129, 129, 129, 129,
      129, 129, 129, 129, 129, 129, 129, 129, 129, 129,
      129, 129, 129, 129, 129, 129, 129, 129, 129, 129,
      129, 129, 129, 129, 129, 129, 129, 129, 129, 129,
      129, 129, 129, 129, 129, 129, 129, 129, 129, 129,
      129, 129, 129, 129, 129, 129, 129, 129, 129, 129,
      129, 129, 129, 129, 129, 129, 129, 129, 129, 129,
      129, 129, 129, 129, 129, 129
    };
  register int hval = len;

  switch (hval)
    {
      default:
        hval += asso_values[(unsigned char)str[9]];
      /*FALLTHROUGH*/
      case 9:
      case 8:
      case 7:
      case 6:
      case 5:
      case 4:
      case 3:
        hval += asso_values[(unsigned char)str[2]];
      /*FALLTHROUGH*/
      case 2:
      case 1:
        hval += asso_values[(unsigned char)str[0]];
        break;
    }
  return hval;
}

static const struct fhir_deserialize::MemberNameAndOffset word_array_ClinicalImpression[] =
  {
#line 11 "./src/generated/gperf_class_files/ClinicalImpression.gperf"
    {"id", 0x8, 1, -1, {(U8*)"id", 2}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 36 "./src/generated/gperf_class_files/ClinicalImpression.gperf"
    {"problem", 0x108, 26, -1, {(U8*)"problem", 7}, fhir_deserialize::ResourceType::Reference, 0, fhir_deserialize::ResourceType::Unknown},
#line 40 "./src/generated/gperf_class_files/ClinicalImpression.gperf"
    {"protocol", 0x128, 30, -1, {(U8*)"protocol", 8}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 10 "./src/generated/gperf_class_files/ClinicalImpression.gperf"
    {"resourceType", 0x0, 0, -1, {(U8*)"resourceType", 12}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 35 "./src/generated/gperf_class_files/ClinicalImpression.gperf"
    {"problem_count", 0x100, 25, -1, {(U8*)"problem_count", 13}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 39 "./src/generated/gperf_class_files/ClinicalImpression.gperf"
    {"protocol_count", 0x120, 29, -1, {(U8*)"protocol_count", 14}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 24 "./src/generated/gperf_class_files/ClinicalImpression.gperf"
    {"status", 0x88, 14, -1, {(U8*)"status", 6}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 43 "./src/generated/gperf_class_files/ClinicalImpression.gperf"
    {"finding", 0x148, 33, -1, {(U8*)"finding", 7}, fhir_deserialize::ResourceType::ClinicalImpression_Finding, 0, fhir_deserialize::ResourceType::Unknown},
#line 33 "./src/generated/gperf_class_files/ClinicalImpression.gperf"
    {"assessor", 0xf0, 23, -1, {(U8*)"assessor", 8}, fhir_deserialize::ResourceType::Reference, 0, fhir_deserialize::ResourceType::Unknown},
#line 17 "./src/generated/gperf_class_files/ClinicalImpression.gperf"
    {"contained", 0x50, 7, -1, {(U8*)"contained", 9}, fhir_deserialize::ResourceType::Resource, 0, fhir_deserialize::ResourceType::Unknown},
#line 25 "./src/generated/gperf_class_files/ClinicalImpression.gperf"
    {"statusReason", 0x98, 15, -1, {(U8*)"statusReason", 12}, fhir_deserialize::ResourceType::CodeableConcept, 0, fhir_deserialize::ResourceType::Unknown},
#line 42 "./src/generated/gperf_class_files/ClinicalImpression.gperf"
    {"finding_count", 0x140, 32, -1, {(U8*)"finding_count", 13}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 51 "./src/generated/gperf_class_files/ClinicalImpression.gperf"
    {"note", 0x188, 41, -1, {(U8*)"note", 4}, fhir_deserialize::ResourceType::Annotation, 0, fhir_deserialize::ResourceType::Unknown},
#line 16 "./src/generated/gperf_class_files/ClinicalImpression.gperf"
    {"contained_count", 0x48, 6, -1, {(U8*)"contained_count", 15}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 28 "./src/generated/gperf_class_files/ClinicalImpression.gperf"
    {"subject", 0xb8, 18, -1, {(U8*)"subject", 7}, fhir_deserialize::ResourceType::Reference, 0, fhir_deserialize::ResourceType::Unknown},
#line 34 "./src/generated/gperf_class_files/ClinicalImpression.gperf"
    {"previous", 0xf8, 24, -1, {(U8*)"previous", 8}, fhir_deserialize::ResourceType::Reference, 0, fhir_deserialize::ResourceType::Unknown},
#line 29 "./src/generated/gperf_class_files/ClinicalImpression.gperf"
    {"encounter", 0xc0, 19, -1, {(U8*)"encounter", 9}, fhir_deserialize::ResourceType::Reference, 0, fhir_deserialize::ResourceType::Unknown},
#line 23 "./src/generated/gperf_class_files/ClinicalImpression.gperf"
    {"identifier", 0x80, 13, -1, {(U8*)"identifier", 10}, fhir_deserialize::ResourceType::Identifier, 0, fhir_deserialize::ResourceType::Unknown},
#line 13 "./src/generated/gperf_class_files/ClinicalImpression.gperf"
    {"implicitRules", 0x20, 3, -1, {(U8*)"implicitRules", 13}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 26 "./src/generated/gperf_class_files/ClinicalImpression.gperf"
    {"code", 0xa0, 16, -1, {(U8*)"code", 4}, fhir_deserialize::ResourceType::CodeableConcept, 0, fhir_deserialize::ResourceType::Unknown},
#line 31 "./src/generated/gperf_class_files/ClinicalImpression.gperf"
    {"effectivePeriod", 0xd0, 21, 1, {(U8*)"effective", 9}, fhir_deserialize::ResourceType::Unknown, 20, fhir_deserialize::ResourceType::Period},
#line 22 "./src/generated/gperf_class_files/ClinicalImpression.gperf"
    {"identifier_count", 0x78, 12, -1, {(U8*)"identifier_count", 16}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 30 "./src/generated/gperf_class_files/ClinicalImpression.gperf"
    {"effectiveDateTime", 0xd0, 21, 0, {(U8*)"effective", 9}, fhir_deserialize::ResourceType::Unknown, 17, fhir_deserialize::ResourceType::Unknown},
#line 14 "./src/generated/gperf_class_files/ClinicalImpression.gperf"
    {"language", 0x30, 4, -1, {(U8*)"language", 8}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 19 "./src/generated/gperf_class_files/ClinicalImpression.gperf"
    {"extension", 0x60, 9, -1, {(U8*)"extension", 9}, fhir_deserialize::ResourceType::Extension, 0, fhir_deserialize::ResourceType::Unknown},
#line 50 "./src/generated/gperf_class_files/ClinicalImpression.gperf"
    {"note_count", 0x180, 40, -1, {(U8*)"note_count", 10}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 27 "./src/generated/gperf_class_files/ClinicalImpression.gperf"
    {"description", 0xa8, 17, -1, {(U8*)"description", 11}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 41 "./src/generated/gperf_class_files/ClinicalImpression.gperf"
    {"summary", 0x130, 31, -1, {(U8*)"summary", 7}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 32 "./src/generated/gperf_class_files/ClinicalImpression.gperf"
    {"date", 0xe0, 22, -1, {(U8*)"date", 4}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 18 "./src/generated/gperf_class_files/ClinicalImpression.gperf"
    {"extension_count", 0x58, 8, -1, {(U8*)"extension_count", 15}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 12 "./src/generated/gperf_class_files/ClinicalImpression.gperf"
    {"meta", 0x18, 2, -1, {(U8*)"meta", 4}, fhir_deserialize::ResourceType::Meta, 0, fhir_deserialize::ResourceType::Unknown},
#line 38 "./src/generated/gperf_class_files/ClinicalImpression.gperf"
    {"investigation", 0x118, 28, -1, {(U8*)"investigation", 13}, fhir_deserialize::ResourceType::ClinicalImpression_Investigation, 0, fhir_deserialize::ResourceType::Unknown},
#line 15 "./src/generated/gperf_class_files/ClinicalImpression.gperf"
    {"text", 0x40, 5, -1, {(U8*)"text", 4}, fhir_deserialize::ResourceType::Narrative, 0, fhir_deserialize::ResourceType::Unknown},
#line 37 "./src/generated/gperf_class_files/ClinicalImpression.gperf"
    {"investigation_count", 0x110, 27, -1, {(U8*)"investigation_count", 19}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 47 "./src/generated/gperf_class_files/ClinicalImpression.gperf"
    {"prognosisReference", 0x168, 37, -1, {(U8*)"prognosisReference", 18}, fhir_deserialize::ResourceType::Reference, 0, fhir_deserialize::ResourceType::Unknown},
#line 49 "./src/generated/gperf_class_files/ClinicalImpression.gperf"
    {"supportingInfo", 0x178, 39, -1, {(U8*)"supportingInfo", 14}, fhir_deserialize::ResourceType::Reference, 0, fhir_deserialize::ResourceType::Unknown},
#line 46 "./src/generated/gperf_class_files/ClinicalImpression.gperf"
    {"prognosisReference_count", 0x160, 36, -1, {(U8*)"prognosisReference_count", 24}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 48 "./src/generated/gperf_class_files/ClinicalImpression.gperf"
    {"supportingInfo_count", 0x170, 38, -1, {(U8*)"supportingInfo_count", 20}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 45 "./src/generated/gperf_class_files/ClinicalImpression.gperf"
    {"prognosisCodeableConcept", 0x158, 35, -1, {(U8*)"prognosisCodeableConcept", 24}, fhir_deserialize::ResourceType::CodeableConcept, 0, fhir_deserialize::ResourceType::Unknown},
#line 44 "./src/generated/gperf_class_files/ClinicalImpression.gperf"
    {"prognosisCodeableConcept_count", 0x150, 34, -1, {(U8*)"prognosisCodeableConcept_count", 30}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 21 "./src/generated/gperf_class_files/ClinicalImpression.gperf"
    {"modifierExtension", 0x70, 11, -1, {(U8*)"modifierExtension", 17}, fhir_deserialize::ResourceType::Extension, 0, fhir_deserialize::ResourceType::Unknown},
#line 20 "./src/generated/gperf_class_files/ClinicalImpression.gperf"
    {"modifierExtension_count", 0x68, 10, -1, {(U8*)"modifierExtension_count", 23}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown}
  };

static const signed char lookup[] =
  {
    -1, -1,  0, -1, -1, -1, -1,  1,  2, -1, -1, -1,  3,  4,
     5, -1,  6,  7,  8,  9, -1, -1, 10, 11, 12, 13, -1, 14,
    15, 16, 17, -1, -1, 18, 19, 20, 21, 22, 23, 24, 25, 26,
    27, -1, 28, 29, -1, -1, -1, 30, -1, -1, -1, 31, 32, -1,
    -1, -1, -1, 33, -1, -1, -1, 34, 35, -1, -1, -1, -1, 36,
    37, -1, -1, -1, 38, -1, -1, -1, -1, -1, 39, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 40, -1, -1, -1,
    -1, -1, 41
  };

const struct fhir_deserialize::MemberNameAndOffset *
ClinicalImpression_Gperf::ClinicalImpression_MemberLookup (register const char *str, register unsigned int len)
{
  if (len <= MAX_WORD_LENGTH && len >= MIN_WORD_LENGTH)
    {
      register int key = hash (str, len);

      if (key <= MAX_HASH_VALUE && key >= 0)
        {
          register int index = lookup[key];

          if (index >= 0)
            {
              register const char *s = word_array_ClinicalImpression[index].name;

              if (*str == *s && !strncmp (str + 1, s + 1, len - 1) && s[len] == '\0')
                return &word_array_ClinicalImpression[index];
            }
        }
    }
  return 0;
}
