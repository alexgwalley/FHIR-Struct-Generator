/* C++ code produced by gperf version 3.0.1 */
/* Command-line: gperf.exe -t --output-file=src/generated/gperf_hash_tables/AuditEvent-Member-Lookup.cc -CGD ./src/generated/gperf_class_files/AuditEvent.gperf  */
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

#line 8 "./src/generated/gperf_class_files/AuditEvent.gperf"
struct fhir_deserialize::MemberNameAndOffset;
enum
  {
    TOTAL_KEYWORDS = 27,
    MIN_WORD_LENGTH = 2,
    MAX_WORD_LENGTH = 23,
    MIN_HASH_VALUE = 4,
    MAX_HASH_VALUE = 37
  };

/* maximum key range = 34, duplicates = 0 */

class AuditEvent_Gperf
{
private:
  static inline unsigned int hash (const char *str, unsigned int len);
public:
  static const struct fhir_deserialize::MemberNameAndOffset *AuditEvent_MemberLookup (const char *str, unsigned int len);
};

inline unsigned int
AuditEvent_Gperf::hash (register const char *str, register unsigned int len)
{
  static const unsigned char asso_values[] =
    {
      38, 38, 38, 38, 38, 38, 38, 38, 38, 38,
      38, 38, 38, 38, 38, 38, 38, 38, 38, 38,
      38, 38, 38, 38, 38, 38, 38, 38, 38, 38,
      38, 38, 38, 38, 38, 38, 38, 38, 38, 38,
      38, 38, 38, 38, 38, 38, 38, 38, 38, 38,
      38, 38, 38, 38, 38, 38, 38, 38, 38, 38,
      38, 38, 38, 38, 38, 38, 38, 38, 38, 38,
      38, 38, 38, 38, 38, 38, 38, 38, 38, 38,
      38, 38, 38, 38, 38, 38, 38, 38, 38, 38,
      38, 38, 38, 38, 38, 38, 38, 10, 38,  5,
      15,  0, 38, 15, 38, 20, 38, 38,  0,  0,
      20,  5,  0, 38, 15,  0, 20,  0, 38, 38,
       0,  5, 38, 38, 38, 38, 38, 38, 38, 38,
      38, 38, 38, 38, 38, 38, 38, 38, 38, 38,
      38, 38, 38, 38, 38, 38, 38, 38, 38, 38,
      38, 38, 38, 38, 38, 38, 38, 38, 38, 38,
      38, 38, 38, 38, 38, 38, 38, 38, 38, 38,
      38, 38, 38, 38, 38, 38, 38, 38, 38, 38,
      38, 38, 38, 38, 38, 38, 38, 38, 38, 38,
      38, 38, 38, 38, 38, 38, 38, 38, 38, 38,
      38, 38, 38, 38, 38, 38, 38, 38, 38, 38,
      38, 38, 38, 38, 38, 38, 38, 38, 38, 38,
      38, 38, 38, 38, 38, 38, 38, 38, 38, 38,
      38, 38, 38, 38, 38, 38, 38, 38, 38, 38,
      38, 38, 38, 38, 38, 38, 38, 38, 38, 38,
      38, 38, 38, 38, 38, 38
    };
  return len + asso_values[(unsigned char)str[1]] + asso_values[(unsigned char)str[0]];
}

static const struct fhir_deserialize::MemberNameAndOffset word_array_AuditEvent[] =
  {
#line 12 "./src/generated/gperf_class_files/AuditEvent.gperf"
    {"meta", 0x18, 2, -1, {(U8*)"meta", 4}, fhir_deserialize::ResourceType::Meta, 0, fhir_deserialize::ResourceType::Unknown},
#line 26 "./src/generated/gperf_class_files/AuditEvent.gperf"
    {"period", 0xa0, 16, -1, {(U8*)"period", 6}, fhir_deserialize::ResourceType::Period, 0, fhir_deserialize::ResourceType::Unknown},
#line 24 "./src/generated/gperf_class_files/AuditEvent.gperf"
    {"subtype", 0x88, 14, -1, {(U8*)"subtype", 7}, fhir_deserialize::ResourceType::Coding, 0, fhir_deserialize::ResourceType::Unknown},
#line 19 "./src/generated/gperf_class_files/AuditEvent.gperf"
    {"extension", 0x60, 9, -1, {(U8*)"extension", 9}, fhir_deserialize::ResourceType::Extension, 0, fhir_deserialize::ResourceType::Unknown},
#line 34 "./src/generated/gperf_class_files/AuditEvent.gperf"
    {"source", 0xf8, 24, -1, {(U8*)"source", 6}, fhir_deserialize::ResourceType::AuditEvent_Source, 0, fhir_deserialize::ResourceType::Unknown},
#line 28 "./src/generated/gperf_class_files/AuditEvent.gperf"
    {"outcome", 0xb8, 18, -1, {(U8*)"outcome", 7}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 23 "./src/generated/gperf_class_files/AuditEvent.gperf"
    {"subtype_count", 0x80, 13, -1, {(U8*)"subtype_count", 13}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 31 "./src/generated/gperf_class_files/AuditEvent.gperf"
    {"purposeOfEvent", 0xe0, 21, -1, {(U8*)"purposeOfEvent", 14}, fhir_deserialize::ResourceType::CodeableConcept, 0, fhir_deserialize::ResourceType::Unknown},
#line 18 "./src/generated/gperf_class_files/AuditEvent.gperf"
    {"extension_count", 0x58, 8, -1, {(U8*)"extension_count", 15}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 29 "./src/generated/gperf_class_files/AuditEvent.gperf"
    {"outcomeDesc", 0xc8, 19, -1, {(U8*)"outcomeDesc", 11}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 14 "./src/generated/gperf_class_files/AuditEvent.gperf"
    {"language", 0x30, 4, -1, {(U8*)"language", 8}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 17 "./src/generated/gperf_class_files/AuditEvent.gperf"
    {"contained", 0x50, 7, -1, {(U8*)"contained", 9}, fhir_deserialize::ResourceType::Resource, 0, fhir_deserialize::ResourceType::Unknown},
#line 30 "./src/generated/gperf_class_files/AuditEvent.gperf"
    {"purposeOfEvent_count", 0xd8, 20, -1, {(U8*)"purposeOfEvent_count", 20}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 25 "./src/generated/gperf_class_files/AuditEvent.gperf"
    {"action", 0x90, 15, -1, {(U8*)"action", 6}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 21 "./src/generated/gperf_class_files/AuditEvent.gperf"
    {"modifierExtension", 0x70, 11, -1, {(U8*)"modifierExtension", 17}, fhir_deserialize::ResourceType::Extension, 0, fhir_deserialize::ResourceType::Unknown},
#line 27 "./src/generated/gperf_class_files/AuditEvent.gperf"
    {"recorded", 0xa8, 17, -1, {(U8*)"recorded", 8}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 15 "./src/generated/gperf_class_files/AuditEvent.gperf"
    {"text", 0x40, 5, -1, {(U8*)"text", 4}, fhir_deserialize::ResourceType::Narrative, 0, fhir_deserialize::ResourceType::Unknown},
#line 16 "./src/generated/gperf_class_files/AuditEvent.gperf"
    {"contained_count", 0x48, 6, -1, {(U8*)"contained_count", 15}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 36 "./src/generated/gperf_class_files/AuditEvent.gperf"
    {"entity", 0x108, 26, -1, {(U8*)"entity", 6}, fhir_deserialize::ResourceType::AuditEvent_Entity, 0, fhir_deserialize::ResourceType::Unknown},
#line 10 "./src/generated/gperf_class_files/AuditEvent.gperf"
    {"resourceType", 0x0, 0, -1, {(U8*)"resourceType", 12}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 20 "./src/generated/gperf_class_files/AuditEvent.gperf"
    {"modifierExtension_count", 0x68, 10, -1, {(U8*)"modifierExtension_count", 23}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 22 "./src/generated/gperf_class_files/AuditEvent.gperf"
    {"type", 0x78, 12, -1, {(U8*)"type", 4}, fhir_deserialize::ResourceType::Coding, 0, fhir_deserialize::ResourceType::Unknown},
#line 33 "./src/generated/gperf_class_files/AuditEvent.gperf"
    {"agent", 0xf0, 23, -1, {(U8*)"agent", 5}, fhir_deserialize::ResourceType::AuditEvent_Agent, 0, fhir_deserialize::ResourceType::Unknown},
#line 35 "./src/generated/gperf_class_files/AuditEvent.gperf"
    {"entity_count", 0x100, 25, -1, {(U8*)"entity_count", 12}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 13 "./src/generated/gperf_class_files/AuditEvent.gperf"
    {"implicitRules", 0x20, 3, -1, {(U8*)"implicitRules", 13}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 32 "./src/generated/gperf_class_files/AuditEvent.gperf"
    {"agent_count", 0xe8, 22, -1, {(U8*)"agent_count", 11}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 11 "./src/generated/gperf_class_files/AuditEvent.gperf"
    {"id", 0x8, 1, -1, {(U8*)"id", 2}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown}
  };

static const signed char lookup[] =
  {
    -1, -1, -1, -1,  0, -1,  1,  2, -1,  3, -1,  4,  5,  6,
     7,  8,  9, -1, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19,
    20, 21, 22, -1, 23, 24, -1, -1, 25, 26
  };

const struct fhir_deserialize::MemberNameAndOffset *
AuditEvent_Gperf::AuditEvent_MemberLookup (register const char *str, register unsigned int len)
{
  if (len <= MAX_WORD_LENGTH && len >= MIN_WORD_LENGTH)
    {
      register int key = hash (str, len);

      if (key <= MAX_HASH_VALUE && key >= 0)
        {
          register int index = lookup[key];

          if (index >= 0)
            {
              register const char *s = word_array_AuditEvent[index].name;

              if (*str == *s && !strncmp (str + 1, s + 1, len - 1) && s[len] == '\0')
                return &word_array_AuditEvent[index];
            }
        }
    }
  return 0;
}
