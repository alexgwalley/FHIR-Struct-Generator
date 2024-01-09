/* C++ code produced by gperf version 3.0.1 */
/* Command-line: gperf.exe -t --output-file=src/generated/gperf_hash_tables/Observation-Member-Lookup.cc -CGD ./src/generated/gperf_class_files/Observation.gperf  */
/* Computed positions: -k'3,$' */

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

#line 8 "./src/generated/gperf_class_files/Observation.gperf"
struct fhir_deserialize::MemberNameAndOffset;
enum
  {
    TOTAL_KEYWORDS = 61,
    MIN_WORD_LENGTH = 2,
    MAX_WORD_LENGTH = 23,
    MIN_HASH_VALUE = 4,
    MAX_HASH_VALUE = 116
  };

/* maximum key range = 113, duplicates = 0 */

class Observation_Gperf
{
private:
  static inline unsigned int hash (const char *str, unsigned int len);
public:
  static const struct fhir_deserialize::MemberNameAndOffset *Observation_MemberLookup (const char *str, unsigned int len);
};

inline unsigned int
Observation_Gperf::hash (register const char *str, register unsigned int len)
{
  static const unsigned char asso_values[] =
    {
      117, 117, 117, 117, 117, 117, 117, 117, 117, 117,
      117, 117, 117, 117, 117, 117, 117, 117, 117, 117,
      117, 117, 117, 117, 117, 117, 117, 117, 117, 117,
      117, 117, 117, 117, 117, 117, 117, 117, 117, 117,
      117, 117, 117, 117, 117, 117, 117, 117, 117, 117,
      117, 117, 117, 117, 117, 117, 117, 117, 117, 117,
      117, 117, 117, 117, 117, 117, 117, 117, 117, 117,
      117, 117, 117, 117, 117, 117, 117, 117, 117, 117,
      117, 117, 117, 117, 117, 117, 117, 117, 117, 117,
      117, 117, 117, 117, 117, 117, 117,  60,  15,   0,
       15,   0,  51,  45, 117, 117, 117, 117, 117,  40,
       20,  40, 117,  15,  45,  56,   0,  10, 117,   0,
      117,  38, 117, 117, 117, 117, 117, 117, 117, 117,
      117, 117, 117, 117, 117, 117, 117, 117, 117, 117,
      117, 117, 117, 117, 117, 117, 117, 117, 117, 117,
      117, 117, 117, 117, 117, 117, 117, 117, 117, 117,
      117, 117, 117, 117, 117, 117, 117, 117, 117, 117,
      117, 117, 117, 117, 117, 117, 117, 117, 117, 117,
      117, 117, 117, 117, 117, 117, 117, 117, 117, 117,
      117, 117, 117, 117, 117, 117, 117, 117, 117, 117,
      117, 117, 117, 117, 117, 117, 117, 117, 117, 117,
      117, 117, 117, 117, 117, 117, 117, 117, 117, 117,
      117, 117, 117, 117, 117, 117, 117, 117, 117, 117,
      117, 117, 117, 117, 117, 117, 117, 117, 117, 117,
      117, 117, 117, 117, 117, 117, 117, 117, 117, 117,
      117, 117, 117, 117, 117, 117, 117
    };
  register int hval = len;

  switch (hval)
    {
      default:
        hval += asso_values[(unsigned char)str[2]+1];
      /*FALLTHROUGH*/
      case 2:
        break;
    }
  return hval + asso_values[(unsigned char)str[len - 1]];
}

static const struct fhir_deserialize::MemberNameAndOffset word_array_Observation[] =
  {
#line 31 "./src/generated/gperf_class_files/Observation.gperf"
    {"code", 0xc8, 21, -1, {(U8*)"code", 4}, fhir_deserialize::ResourceType::CodeableConcept, 0, fhir_deserialize::ResourceType::Unknown},
#line 62 "./src/generated/gperf_class_files/Observation.gperf"
    {"device", 0x180, 41, -1, {(U8*)"device", 6}, fhir_deserialize::ResourceType::Reference, 0, fhir_deserialize::ResourceType::Unknown},
#line 32 "./src/generated/gperf_class_files/Observation.gperf"
    {"subject", 0xd0, 22, -1, {(U8*)"subject", 7}, fhir_deserialize::ResourceType::Reference, 0, fhir_deserialize::ResourceType::Unknown},
#line 59 "./src/generated/gperf_class_files/Observation.gperf"
    {"bodySite", 0x168, 38, -1, {(U8*)"bodySite", 8}, fhir_deserialize::ResourceType::CodeableConcept, 0, fhir_deserialize::ResourceType::Unknown},
#line 10 "./src/generated/gperf_class_files/Observation.gperf"
    {"resourceType", 0x0, 0, -1, {(U8*)"resourceType", 12}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 24 "./src/generated/gperf_class_files/Observation.gperf"
    {"basedOn_count", 0x88, 14, -1, {(U8*)"basedOn_count", 13}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 58 "./src/generated/gperf_class_files/Observation.gperf"
    {"note", 0x160, 37, -1, {(U8*)"note", 4}, fhir_deserialize::ResourceType::Annotation, 0, fhir_deserialize::ResourceType::Unknown},
#line 65 "./src/generated/gperf_class_files/Observation.gperf"
    {"hasMember_count", 0x198, 44, -1, {(U8*)"hasMember_count", 15}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 11 "./src/generated/gperf_class_files/Observation.gperf"
    {"id", 0x8, 1, -1, {(U8*)"id", 2}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 57 "./src/generated/gperf_class_files/Observation.gperf"
    {"note_count", 0x158, 36, -1, {(U8*)"note_count", 10}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 40 "./src/generated/gperf_class_files/Observation.gperf"
    {"issued", 0x108, 28, -1, {(U8*)"issued", 6}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 20 "./src/generated/gperf_class_files/Observation.gperf"
    {"modifierExtension_count", 0x68, 10, -1, {(U8*)"modifierExtension_count", 23}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 29 "./src/generated/gperf_class_files/Observation.gperf"
    {"category_count", 0xb8, 19, -1, {(U8*)"category_count", 14}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 18 "./src/generated/gperf_class_files/Observation.gperf"
    {"extension_count", 0x58, 8, -1, {(U8*)"extension_count", 15}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 33 "./src/generated/gperf_class_files/Observation.gperf"
    {"focus_count", 0xd8, 23, -1, {(U8*)"focus_count", 11}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 25 "./src/generated/gperf_class_files/Observation.gperf"
    {"basedOn", 0x90, 15, -1, {(U8*)"basedOn", 7}, fhir_deserialize::ResourceType::Reference, 0, fhir_deserialize::ResourceType::Unknown},
#line 70 "./src/generated/gperf_class_files/Observation.gperf"
    {"component", 0x1c0, 49, -1, {(U8*)"component", 9}, fhir_deserialize::ResourceType::Observation_Component, 0, fhir_deserialize::ResourceType::Unknown},
#line 55 "./src/generated/gperf_class_files/Observation.gperf"
    {"interpretation_count", 0x148, 34, -1, {(U8*)"interpretation_count", 20}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 60 "./src/generated/gperf_class_files/Observation.gperf"
    {"method", 0x170, 39, -1, {(U8*)"method", 6}, fhir_deserialize::ResourceType::CodeableConcept, 0, fhir_deserialize::ResourceType::Unknown},
#line 69 "./src/generated/gperf_class_files/Observation.gperf"
    {"component_count", 0x1b8, 48, -1, {(U8*)"component_count", 15}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 21 "./src/generated/gperf_class_files/Observation.gperf"
    {"modifierExtension", 0x70, 11, -1, {(U8*)"modifierExtension", 17}, fhir_deserialize::ResourceType::Extension, 0, fhir_deserialize::ResourceType::Unknown},
#line 19 "./src/generated/gperf_class_files/Observation.gperf"
    {"extension", 0x60, 9, -1, {(U8*)"extension", 9}, fhir_deserialize::ResourceType::Extension, 0, fhir_deserialize::ResourceType::Unknown},
#line 15 "./src/generated/gperf_class_files/Observation.gperf"
    {"text", 0x40, 5, -1, {(U8*)"text", 4}, fhir_deserialize::ResourceType::Narrative, 0, fhir_deserialize::ResourceType::Unknown},
#line 56 "./src/generated/gperf_class_files/Observation.gperf"
    {"interpretation", 0x150, 35, -1, {(U8*)"interpretation", 14}, fhir_deserialize::ResourceType::CodeableConcept, 0, fhir_deserialize::ResourceType::Unknown},
#line 54 "./src/generated/gperf_class_files/Observation.gperf"
    {"dataAbsentReason", 0x140, 33, -1, {(U8*)"dataAbsentReason", 16}, fhir_deserialize::ResourceType::CodeableConcept, 0, fhir_deserialize::ResourceType::Unknown},
#line 14 "./src/generated/gperf_class_files/Observation.gperf"
    {"language", 0x30, 4, -1, {(U8*)"language", 8}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 51 "./src/generated/gperf_class_files/Observation.gperf"
    {"valueTime", 0x130, 32, 8, {(U8*)"value", 5}, fhir_deserialize::ResourceType::Quantity, 18, fhir_deserialize::ResourceType::Unknown},
#line 48 "./src/generated/gperf_class_files/Observation.gperf"
    {"valueRange", 0x130, 32, 5, {(U8*)"value", 5}, fhir_deserialize::ResourceType::Quantity, 20, fhir_deserialize::ResourceType::Range},
#line 52 "./src/generated/gperf_class_files/Observation.gperf"
    {"valueDateTime", 0x130, 32, 9, {(U8*)"value", 5}, fhir_deserialize::ResourceType::Quantity, 17, fhir_deserialize::ResourceType::Unknown},
#line 66 "./src/generated/gperf_class_files/Observation.gperf"
    {"hasMember", 0x1a0, 45, -1, {(U8*)"hasMember", 9}, fhir_deserialize::ResourceType::Reference, 0, fhir_deserialize::ResourceType::Unknown},
#line 16 "./src/generated/gperf_class_files/Observation.gperf"
    {"contained_count", 0x48, 6, -1, {(U8*)"contained_count", 15}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 30 "./src/generated/gperf_class_files/Observation.gperf"
    {"category", 0xc0, 20, -1, {(U8*)"category", 8}, fhir_deserialize::ResourceType::CodeableConcept, 0, fhir_deserialize::ResourceType::Unknown},
#line 64 "./src/generated/gperf_class_files/Observation.gperf"
    {"referenceRange", 0x190, 43, -1, {(U8*)"referenceRange", 14}, fhir_deserialize::ResourceType::Observation_ReferenceRange, 0, fhir_deserialize::ResourceType::Unknown},
#line 44 "./src/generated/gperf_class_files/Observation.gperf"
    {"valueCodeableConcept", 0x130, 32, 1, {(U8*)"value", 5}, fhir_deserialize::ResourceType::Quantity, 20, fhir_deserialize::ResourceType::CodeableConcept},
#line 39 "./src/generated/gperf_class_files/Observation.gperf"
    {"effectiveInstant", 0xf8, 27, 3, {(U8*)"effective", 9}, fhir_deserialize::ResourceType::Unknown, 19, fhir_deserialize::ResourceType::Unknown},
#line 36 "./src/generated/gperf_class_files/Observation.gperf"
    {"effectiveDateTime", 0xf8, 27, 0, {(U8*)"effective", 9}, fhir_deserialize::ResourceType::Unknown, 17, fhir_deserialize::ResourceType::Unknown},
#line 17 "./src/generated/gperf_class_files/Observation.gperf"
    {"contained", 0x50, 7, -1, {(U8*)"contained", 9}, fhir_deserialize::ResourceType::Resource, 0, fhir_deserialize::ResourceType::Unknown},
#line 63 "./src/generated/gperf_class_files/Observation.gperf"
    {"referenceRange_count", 0x188, 42, -1, {(U8*)"referenceRange_count", 20}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 53 "./src/generated/gperf_class_files/Observation.gperf"
    {"valuePeriod", 0x130, 32, 10, {(U8*)"value", 5}, fhir_deserialize::ResourceType::Quantity, 20, fhir_deserialize::ResourceType::Period},
#line 22 "./src/generated/gperf_class_files/Observation.gperf"
    {"identifier_count", 0x78, 12, -1, {(U8*)"identifier_count", 16}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 26 "./src/generated/gperf_class_files/Observation.gperf"
    {"partOf_count", 0x98, 16, -1, {(U8*)"partOf_count", 12}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 35 "./src/generated/gperf_class_files/Observation.gperf"
    {"encounter", 0xe8, 25, -1, {(U8*)"encounter", 9}, fhir_deserialize::ResourceType::Reference, 0, fhir_deserialize::ResourceType::Unknown},
#line 41 "./src/generated/gperf_class_files/Observation.gperf"
    {"performer_count", 0x118, 29, -1, {(U8*)"performer_count", 15}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 46 "./src/generated/gperf_class_files/Observation.gperf"
    {"valueBoolean", 0x130, 32, 3, {(U8*)"value", 5}, fhir_deserialize::ResourceType::Quantity, 12, fhir_deserialize::ResourceType::Unknown},
#line 67 "./src/generated/gperf_class_files/Observation.gperf"
    {"derivedFrom_count", 0x1a8, 46, -1, {(U8*)"derivedFrom_count", 17}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 12 "./src/generated/gperf_class_files/Observation.gperf"
    {"meta", 0x18, 2, -1, {(U8*)"meta", 4}, fhir_deserialize::ResourceType::Meta, 0, fhir_deserialize::ResourceType::Unknown},
#line 37 "./src/generated/gperf_class_files/Observation.gperf"
    {"effectivePeriod", 0xf8, 27, 1, {(U8*)"effective", 9}, fhir_deserialize::ResourceType::Unknown, 20, fhir_deserialize::ResourceType::Period},
#line 34 "./src/generated/gperf_class_files/Observation.gperf"
    {"focus", 0xe0, 24, -1, {(U8*)"focus", 5}, fhir_deserialize::ResourceType::Reference, 0, fhir_deserialize::ResourceType::Unknown},
#line 28 "./src/generated/gperf_class_files/Observation.gperf"
    {"status", 0xa8, 18, -1, {(U8*)"status", 6}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 61 "./src/generated/gperf_class_files/Observation.gperf"
    {"specimen", 0x178, 40, -1, {(U8*)"specimen", 8}, fhir_deserialize::ResourceType::Reference, 0, fhir_deserialize::ResourceType::Unknown},
#line 13 "./src/generated/gperf_class_files/Observation.gperf"
    {"implicitRules", 0x20, 3, -1, {(U8*)"implicitRules", 13}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 49 "./src/generated/gperf_class_files/Observation.gperf"
    {"valueRatio", 0x130, 32, 6, {(U8*)"value", 5}, fhir_deserialize::ResourceType::Quantity, 20, fhir_deserialize::ResourceType::Ratio},
#line 43 "./src/generated/gperf_class_files/Observation.gperf"
    {"valueQuantity", 0x130, 32, 0, {(U8*)"value", 5}, fhir_deserialize::ResourceType::Quantity, 20, fhir_deserialize::ResourceType::Quantity},
#line 45 "./src/generated/gperf_class_files/Observation.gperf"
    {"valueString", 0x130, 32, 2, {(U8*)"value", 5}, fhir_deserialize::ResourceType::Quantity, 7, fhir_deserialize::ResourceType::Unknown},
#line 47 "./src/generated/gperf_class_files/Observation.gperf"
    {"valueInteger", 0x130, 32, 4, {(U8*)"value", 5}, fhir_deserialize::ResourceType::Quantity, 20, fhir_deserialize::ResourceType::Integer},
#line 38 "./src/generated/gperf_class_files/Observation.gperf"
    {"effectiveTiming", 0xf8, 27, 2, {(U8*)"effective", 9}, fhir_deserialize::ResourceType::Unknown, 20, fhir_deserialize::ResourceType::Timing},
#line 23 "./src/generated/gperf_class_files/Observation.gperf"
    {"identifier", 0x80, 13, -1, {(U8*)"identifier", 10}, fhir_deserialize::ResourceType::Identifier, 0, fhir_deserialize::ResourceType::Unknown},
#line 68 "./src/generated/gperf_class_files/Observation.gperf"
    {"derivedFrom", 0x1b0, 47, -1, {(U8*)"derivedFrom", 11}, fhir_deserialize::ResourceType::Reference, 0, fhir_deserialize::ResourceType::Unknown},
#line 42 "./src/generated/gperf_class_files/Observation.gperf"
    {"performer", 0x120, 30, -1, {(U8*)"performer", 9}, fhir_deserialize::ResourceType::Reference, 0, fhir_deserialize::ResourceType::Unknown},
#line 27 "./src/generated/gperf_class_files/Observation.gperf"
    {"partOf", 0xa0, 17, -1, {(U8*)"partOf", 6}, fhir_deserialize::ResourceType::Reference, 0, fhir_deserialize::ResourceType::Unknown},
#line 50 "./src/generated/gperf_class_files/Observation.gperf"
    {"valueSampledData", 0x130, 32, 7, {(U8*)"value", 5}, fhir_deserialize::ResourceType::Quantity, 20, fhir_deserialize::ResourceType::SampledData}
  };

static const signed char lookup[] =
  {
    -1, -1, -1, -1,  0, -1,  1,  2,  3, -1, -1, -1,  4,  5,
     6,  7, -1,  8, -1, -1,  9, 10, -1, 11, 12, 13, 14, 15,
    -1, 16, 17, 18, -1, -1, -1, 19, -1, 20, -1, 21, -1, -1,
    22, -1, 23, -1, 24, -1, 25, 26, 27, -1, -1, 28, 29, 30,
    31, -1, -1, 32, 33, 34, 35, -1, 36, 37, 38, 39, 40, 41,
    -1, 42, 43, 44, 45, 46, 47, 48, -1, 49, -1, -1, -1, -1,
    50, -1, -1, -1, -1, -1, 51, 52, -1, -1, -1, -1, 53, 54,
    -1, -1, -1, -1, -1, -1, -1, 55, 56, 57, -1, -1, 58, -1,
    -1, 59, -1, -1, 60
  };

const struct fhir_deserialize::MemberNameAndOffset *
Observation_Gperf::Observation_MemberLookup (register const char *str, register unsigned int len)
{
  if (len <= MAX_WORD_LENGTH && len >= MIN_WORD_LENGTH)
    {
      register int key = hash (str, len);

      if (key <= MAX_HASH_VALUE && key >= 0)
        {
          register int index = lookup[key];

          if (index >= 0)
            {
              register const char *s = word_array_Observation[index].name;

              if (*str == *s && !strncmp (str + 1, s + 1, len - 1) && s[len] == '\0')
                return &word_array_Observation[index];
            }
        }
    }
  return 0;
}
