/* C++ code produced by gperf version 3.0.1 */
/* Command-line: gperf.exe -t --output-file=src/generated/gperf_hash_tables/Timing_Repeat-Member-Lookup.cc -CGD ./src/generated/gperf_class_files/Timing_Repeat.gperf  */
/* Computed positions: -k'1' */

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

#line 8 "./src/generated/gperf_class_files/Timing_Repeat.gperf"
struct fhir_deserialize::MemberNameAndOffset;
enum
  {
    TOTAL_KEYWORDS = 24,
    MIN_WORD_LENGTH = 2,
    MAX_WORD_LENGTH = 15,
    MIN_HASH_VALUE = 2,
    MAX_HASH_VALUE = 45
  };

/* maximum key range = 44, duplicates = 0 */

class Timing_Repeat_Gperf
{
private:
  static inline unsigned int hash (const char *str, unsigned int len);
public:
  static const struct fhir_deserialize::MemberNameAndOffset *Timing_Repeat_MemberLookup (const char *str, unsigned int len);
};

inline unsigned int
Timing_Repeat_Gperf::hash (register const char *str, register unsigned int len)
{
  static const unsigned char asso_values[] =
    {
      46, 46, 46, 46, 46, 46, 46, 46, 46, 46,
      46, 46, 46, 46, 46, 46, 46, 46, 46, 46,
      46, 46, 46, 46, 46, 46, 46, 46, 46, 46,
      46, 46, 46, 46, 46, 46, 46, 46, 46, 46,
      46, 46, 46, 46, 46, 46, 46, 46, 46, 46,
      46, 46, 46, 46, 46, 46, 46, 46, 46, 46,
      46, 46, 46, 46, 46, 46, 46, 46, 46, 46,
      46, 46, 46, 46, 46, 46, 46, 46, 46, 46,
      46, 46, 46, 46, 46, 46, 46, 46, 46, 46,
      46, 46, 46, 46, 46, 46, 46, 46, 10,  0,
       5, 30, 25, 46, 46,  0, 46, 46, 46, 46,
      46,  5,  0, 46,  0, 46, 20, 46, 46, 15,
      46, 46, 46, 46, 46, 46, 46, 46, 46, 46,
      46, 46, 46, 46, 46, 46, 46, 46, 46, 46,
      46, 46, 46, 46, 46, 46, 46, 46, 46, 46,
      46, 46, 46, 46, 46, 46, 46, 46, 46, 46,
      46, 46, 46, 46, 46, 46, 46, 46, 46, 46,
      46, 46, 46, 46, 46, 46, 46, 46, 46, 46,
      46, 46, 46, 46, 46, 46, 46, 46, 46, 46,
      46, 46, 46, 46, 46, 46, 46, 46, 46, 46,
      46, 46, 46, 46, 46, 46, 46, 46, 46, 46,
      46, 46, 46, 46, 46, 46, 46, 46, 46, 46,
      46, 46, 46, 46, 46, 46, 46, 46, 46, 46,
      46, 46, 46, 46, 46, 46, 46, 46, 46, 46,
      46, 46, 46, 46, 46, 46, 46, 46, 46, 46,
      46, 46, 46, 46, 46, 46
    };
  return len + asso_values[(unsigned char)str[0]];
}

static const struct fhir_deserialize::MemberNameAndOffset word_array_Timing_Repeat[] =
  {
#line 11 "./src/generated/gperf_class_files/Timing_Repeat.gperf"
    {"id", 0x8, 1, -1, {(U8*)"id", 2}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 17 "./src/generated/gperf_class_files/Timing_Repeat.gperf"
    {"count", 0x38, 6, -1, {(U8*)"count", 5}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 24 "./src/generated/gperf_class_files/Timing_Repeat.gperf"
    {"period", 0x78, 13, -1, {(U8*)"period", 6}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 18 "./src/generated/gperf_class_files/Timing_Repeat.gperf"
    {"countMax", 0x40, 7, -1, {(U8*)"countMax", 8}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 25 "./src/generated/gperf_class_files/Timing_Repeat.gperf"
    {"periodMax", 0x80, 14, -1, {(U8*)"periodMax", 9}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 26 "./src/generated/gperf_class_files/Timing_Repeat.gperf"
    {"periodUnit", 0x88, 15, -1, {(U8*)"periodUnit", 10}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 33 "./src/generated/gperf_class_files/Timing_Repeat.gperf"
    {"offset", 0xc8, 22, -1, {(U8*)"offset", 6}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 10 "./src/generated/gperf_class_files/Timing_Repeat.gperf"
    {"resourceType", 0x0, 0, -1, {(U8*)"resourceType", 12}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 19 "./src/generated/gperf_class_files/Timing_Repeat.gperf"
    {"duration", 0x48, 8, -1, {(U8*)"duration", 8}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 28 "./src/generated/gperf_class_files/Timing_Repeat.gperf"
    {"dayOfWeek", 0xa0, 17, -1, {(U8*)"dayOfWeek", 9}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 20 "./src/generated/gperf_class_files/Timing_Repeat.gperf"
    {"durationMax", 0x50, 9, -1, {(U8*)"durationMax", 11}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 21 "./src/generated/gperf_class_files/Timing_Repeat.gperf"
    {"durationUnit", 0x58, 10, -1, {(U8*)"durationUnit", 12}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 32 "./src/generated/gperf_class_files/Timing_Repeat.gperf"
    {"when", 0xc0, 21, -1, {(U8*)"when", 4}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 27 "./src/generated/gperf_class_files/Timing_Repeat.gperf"
    {"dayOfWeek_count", 0x98, 16, -1, {(U8*)"dayOfWeek_count", 15}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 15 "./src/generated/gperf_class_files/Timing_Repeat.gperf"
    {"boundsRange", 0x30, 5, 1, {(U8*)"bounds", 6}, fhir_deserialize::ResourceType::Duration, 20, fhir_deserialize::ResourceType::Range},
#line 16 "./src/generated/gperf_class_files/Timing_Repeat.gperf"
    {"boundsPeriod", 0x30, 5, 2, {(U8*)"bounds", 6}, fhir_deserialize::ResourceType::Duration, 20, fhir_deserialize::ResourceType::Period},
#line 14 "./src/generated/gperf_class_files/Timing_Repeat.gperf"
    {"boundsDuration", 0x30, 5, 0, {(U8*)"bounds", 6}, fhir_deserialize::ResourceType::Duration, 20, fhir_deserialize::ResourceType::Duration},
#line 31 "./src/generated/gperf_class_files/Timing_Repeat.gperf"
    {"when_count", 0xb8, 20, -1, {(U8*)"when_count", 10}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 30 "./src/generated/gperf_class_files/Timing_Repeat.gperf"
    {"timeOfDay", 0xb0, 19, -1, {(U8*)"timeOfDay", 9}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 22 "./src/generated/gperf_class_files/Timing_Repeat.gperf"
    {"frequency", 0x68, 11, -1, {(U8*)"frequency", 9}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 29 "./src/generated/gperf_class_files/Timing_Repeat.gperf"
    {"timeOfDay_count", 0xa8, 18, -1, {(U8*)"timeOfDay_count", 15}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 23 "./src/generated/gperf_class_files/Timing_Repeat.gperf"
    {"frequencyMax", 0x70, 12, -1, {(U8*)"frequencyMax", 12}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 13 "./src/generated/gperf_class_files/Timing_Repeat.gperf"
    {"extension", 0x20, 3, -1, {(U8*)"extension", 9}, fhir_deserialize::ResourceType::Extension, 0, fhir_deserialize::ResourceType::Unknown},
#line 12 "./src/generated/gperf_class_files/Timing_Repeat.gperf"
    {"extension_count", 0x18, 2, -1, {(U8*)"extension_count", 15}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown}
  };

static const signed char lookup[] =
  {
    -1, -1,  0, -1, -1,  1,  2, -1,  3,  4,  5,  6,  7,  8,
     9, -1, 10, 11, -1, 12, 13, 14, 15, -1, 16, 17, -1, -1,
    -1, 18, -1, -1, -1, -1, 19, 20, -1, 21, -1, 22, -1, -1,
    -1, -1, -1, 23
  };

const struct fhir_deserialize::MemberNameAndOffset *
Timing_Repeat_Gperf::Timing_Repeat_MemberLookup (register const char *str, register unsigned int len)
{
  if (len <= MAX_WORD_LENGTH && len >= MIN_WORD_LENGTH)
    {
      register int key = hash (str, len);

      if (key <= MAX_HASH_VALUE && key >= 0)
        {
          register int index = lookup[key];

          if (index >= 0)
            {
              register const char *s = word_array_Timing_Repeat[index].name;

              if (*str == *s && !strncmp (str + 1, s + 1, len - 1) && s[len] == '\0')
                return &word_array_Timing_Repeat[index];
            }
        }
    }
  return 0;
}
