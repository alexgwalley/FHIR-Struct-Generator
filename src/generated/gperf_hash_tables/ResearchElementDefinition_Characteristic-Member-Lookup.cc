/* C++ code produced by gperf version 3.0.1 */
/* Command-line: gperf.exe -t --output-file=src/generated/gperf_hash_tables/ResearchElementDefinition_Characteristic-Member-Lookup.cc -CGD ./src/generated/gperf_class_files/ResearchElementDefinition_Characteristic.gperf  */
/* Computed positions: -k'11,$' */

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

#line 8 "./src/generated/gperf_class_files/ResearchElementDefinition_Characteristic.gperf"
struct fhir_deserialize::MemberNameAndOffset;
enum
  {
    TOTAL_KEYWORDS = 28,
    MIN_WORD_LENGTH = 2,
    MAX_WORD_LENGTH = 33,
    MIN_HASH_VALUE = 2,
    MAX_HASH_VALUE = 57
  };

/* maximum key range = 56, duplicates = 0 */

class ResearchElementDefinition_Characteristic_Gperf
{
private:
  static inline unsigned int hash (const char *str, unsigned int len);
public:
  static const struct fhir_deserialize::MemberNameAndOffset *ResearchElementDefinition_Characteristic_MemberLookup (const char *str, unsigned int len);
};

inline unsigned int
ResearchElementDefinition_Characteristic_Gperf::hash (register const char *str, register unsigned int len)
{
  static const unsigned char asso_values[] =
    {
      58, 58, 58, 58, 58, 58, 58, 58, 58, 58,
      58, 58, 58, 58, 58, 58, 58, 58, 58, 58,
      58, 58, 58, 58, 58, 58, 58, 58, 58, 58,
      58, 58, 58, 58, 58, 58, 58, 58, 58, 58,
      58, 58, 58, 58, 58, 58, 58, 58, 58, 58,
      58, 58, 58, 58, 58, 58, 58, 58, 58, 58,
      58, 58, 58, 58, 58, 58, 58, 10, 20, 20,
      58, 58, 58, 58, 58, 58, 58, 58, 58, 58,
      58, 58, 58, 58, 58, 58, 58, 58, 58, 58,
      58, 58, 58, 58, 58, 58, 58, 58, 58,  0,
       0, 25, 58, 10, 58, 58, 58, 58,  0, 58,
       0, 58,  0, 58, 58, 58,  0,  0, 58, 58,
       0, 58, 58, 58, 58, 58, 58, 58, 58, 58,
      58, 58, 58, 58, 58, 58, 58, 58, 58, 58,
      58, 58, 58, 58, 58, 58, 58, 58, 58, 58,
      58, 58, 58, 58, 58, 58, 58, 58, 58, 58,
      58, 58, 58, 58, 58, 58, 58, 58, 58, 58,
      58, 58, 58, 58, 58, 58, 58, 58, 58, 58,
      58, 58, 58, 58, 58, 58, 58, 58, 58, 58,
      58, 58, 58, 58, 58, 58, 58, 58, 58, 58,
      58, 58, 58, 58, 58, 58, 58, 58, 58, 58,
      58, 58, 58, 58, 58, 58, 58, 58, 58, 58,
      58, 58, 58, 58, 58, 58, 58, 58, 58, 58,
      58, 58, 58, 58, 58, 58, 58, 58, 58, 58,
      58, 58, 58, 58, 58, 58, 58, 58, 58, 58,
      58, 58, 58, 58, 58, 58
    };
  register int hval = len;

  switch (hval)
    {
      default:
        hval += asso_values[(unsigned char)str[10]];
      /*FALLTHROUGH*/
      case 10:
      case 9:
      case 8:
      case 7:
      case 6:
      case 5:
      case 4:
      case 3:
      case 2:
        break;
    }
  return hval + asso_values[(unsigned char)str[len - 1]];
}

static const struct fhir_deserialize::MemberNameAndOffset word_array_ResearchElementDefinition_Characteristic[] =
  {
#line 11 "./src/generated/gperf_class_files/ResearchElementDefinition_Characteristic.gperf"
    {"id", 0x8, 1, -1},
#line 13 "./src/generated/gperf_class_files/ResearchElementDefinition_Characteristic.gperf"
    {"extension", 0x20, 3, -1},
#line 21 "./src/generated/gperf_class_files/ResearchElementDefinition_Characteristic.gperf"
    {"usageContext", 0x58, 9, -1},
#line 12 "./src/generated/gperf_class_files/ResearchElementDefinition_Characteristic.gperf"
    {"extension_count", 0x18, 2, -1},
#line 15 "./src/generated/gperf_class_files/ResearchElementDefinition_Characteristic.gperf"
    {"modifierExtension", 0x30, 5, -1},
#line 20 "./src/generated/gperf_class_files/ResearchElementDefinition_Characteristic.gperf"
    {"usageContext_count", 0x50, 8, -1},
#line 26 "./src/generated/gperf_class_files/ResearchElementDefinition_Characteristic.gperf"
    {"studyEffectivePeriod", 0x88, 14, 1},
#line 27 "./src/generated/gperf_class_files/ResearchElementDefinition_Characteristic.gperf"
    {"studyEffectiveDuration", 0x88, 14, 2},
#line 14 "./src/generated/gperf_class_files/ResearchElementDefinition_Characteristic.gperf"
    {"modifierExtension_count", 0x28, 4, -1},
#line 24 "./src/generated/gperf_class_files/ResearchElementDefinition_Characteristic.gperf"
    {"studyEffectiveDescription", 0x70, 12, -1},
#line 33 "./src/generated/gperf_class_files/ResearchElementDefinition_Characteristic.gperf"
    {"participantEffectivePeriod", 0xc8, 19, 1},
#line 29 "./src/generated/gperf_class_files/ResearchElementDefinition_Characteristic.gperf"
    {"studyEffectiveTimeFromStart", 0x98, 15, -1},
#line 34 "./src/generated/gperf_class_files/ResearchElementDefinition_Characteristic.gperf"
    {"participantEffectiveDuration", 0xc8, 19, 2},
#line 17 "./src/generated/gperf_class_files/ResearchElementDefinition_Characteristic.gperf"
    {"definitionCanonical", 0x40, 7, 1},
#line 28 "./src/generated/gperf_class_files/ResearchElementDefinition_Characteristic.gperf"
    {"studyEffectiveTiming", 0x88, 14, 3},
#line 31 "./src/generated/gperf_class_files/ResearchElementDefinition_Characteristic.gperf"
    {"participantEffectiveDescription", 0xb0, 17, -1},
#line 22 "./src/generated/gperf_class_files/ResearchElementDefinition_Characteristic.gperf"
    {"exclude", 0x60, 10, -1},
#line 36 "./src/generated/gperf_class_files/ResearchElementDefinition_Characteristic.gperf"
    {"participantEffectiveTimeFromStart", 0xd8, 20, -1},
#line 16 "./src/generated/gperf_class_files/ResearchElementDefinition_Characteristic.gperf"
    {"definitionCodeableConcept", 0x40, 7, 0},
#line 35 "./src/generated/gperf_class_files/ResearchElementDefinition_Characteristic.gperf"
    {"participantEffectiveTiming", 0xc8, 19, 3},
#line 10 "./src/generated/gperf_class_files/ResearchElementDefinition_Characteristic.gperf"
    {"resourceType", 0x0, 0, -1},
#line 23 "./src/generated/gperf_class_files/ResearchElementDefinition_Characteristic.gperf"
    {"unitOfMeasure", 0x68, 11, -1},
#line 18 "./src/generated/gperf_class_files/ResearchElementDefinition_Characteristic.gperf"
    {"definitionExpression", 0x40, 7, 2},
#line 19 "./src/generated/gperf_class_files/ResearchElementDefinition_Characteristic.gperf"
    {"definitionDataRequirement", 0x40, 7, 3},
#line 25 "./src/generated/gperf_class_files/ResearchElementDefinition_Characteristic.gperf"
    {"studyEffectiveDateTime", 0x88, 14, 0},
#line 30 "./src/generated/gperf_class_files/ResearchElementDefinition_Characteristic.gperf"
    {"studyEffectiveGroupMeasure", 0xa0, 16, -1},
#line 32 "./src/generated/gperf_class_files/ResearchElementDefinition_Characteristic.gperf"
    {"participantEffectiveDateTime", 0xc8, 19, 0},
#line 37 "./src/generated/gperf_class_files/ResearchElementDefinition_Characteristic.gperf"
    {"participantEffectiveGroupMeasure", 0xe0, 21, -1}
  };

static const signed char lookup[] =
  {
    -1, -1,  0, -1, -1, -1, -1, -1, -1,  1, -1, -1,  2, -1,
    -1,  3, -1,  4,  5, -1,  6, -1,  7,  8, -1,  9, 10, 11,
    12, 13, 14, 15, 16, 17, -1, 18, 19, 20, 21, -1, 22, -1,
    -1, -1, -1, 23, -1, 24, -1, -1, -1, 25, -1, 26, -1, -1,
    -1, 27
  };

const struct fhir_deserialize::MemberNameAndOffset *
ResearchElementDefinition_Characteristic_Gperf::ResearchElementDefinition_Characteristic_MemberLookup (register const char *str, register unsigned int len)
{
  if (len <= MAX_WORD_LENGTH && len >= MIN_WORD_LENGTH)
    {
      register int key = hash (str, len);

      if (key <= MAX_HASH_VALUE && key >= 0)
        {
          register int index = lookup[key];

          if (index >= 0)
            {
              register const char *s = word_array_ResearchElementDefinition_Characteristic[index].name;

              if (*str == *s && !strncmp (str + 1, s + 1, len - 1) && s[len] == '\0')
                return &word_array_ResearchElementDefinition_Characteristic[index];
            }
        }
    }
  return 0;
}
