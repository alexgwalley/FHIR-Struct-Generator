/* C++ code produced by gperf version 3.0.1 */
/* Command-line: gperf.exe -t --output-file=src/gperf_hash_tables/ElementDefinition_Example-Member-Lookup.cc -CGD ./gperf_class_files/ElementDefinition_Example.gperf  */
/* Computed positions: -k'6,8' */

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

#line 8 "./gperf_class_files/ElementDefinition_Example.gperf"
struct fhir_deserialize::MemberNameAndOffset;
enum
  {
    TOTAL_KEYWORDS = 55,
    MIN_WORD_LENGTH = 2,
    MAX_WORD_LENGTH = 24,
    MIN_HASH_VALUE = 2,
    MAX_HASH_VALUE = 81
  };

/* maximum key range = 80, duplicates = 0 */

class ElementDefinition_Example_Gperf
{
private:
  static inline unsigned int hash (const char *str, unsigned int len);
public:
  static const struct fhir_deserialize::MemberNameAndOffset *ElementDefinition_Example_MemberLookup (const char *str, unsigned int len);
};

inline unsigned int
ElementDefinition_Example_Gperf::hash (register const char *str, register unsigned int len)
{
  static const unsigned char asso_values[] =
    {
      82, 82, 82, 82, 82, 82, 82, 82, 82, 82,
      82, 82, 82, 82, 82, 82, 82, 82, 82, 82,
      82, 82, 82, 82, 82, 82, 82, 82, 82, 82,
      82, 82, 82, 82, 82, 82, 82, 82, 82, 82,
      82, 82, 82, 82, 82, 82, 82, 82, 82, 82,
      82, 82, 82, 82, 82, 82, 82, 82, 82, 82,
      82, 82, 82, 82, 82, 20, 20,  0,  5, 25,
      82, 82,  0,  5, 82, 82, 82, 40, 82,  0,
       5,  5,  0, 15,  0, 15, 82, 82, 82, 82,
      82, 82, 82, 82, 82, 82, 82, 30, 82, 40,
       0,  5, 10,  0, 82, 20, 82, 82, 35, 50,
       0, 20, 25, 82, 20, 10,  5, 50, 82, 82,
      82, 82, 82, 82, 82, 82, 82, 82, 82, 82,
      82, 82, 82, 82, 82, 82, 82, 82, 82, 82,
      82, 82, 82, 82, 82, 82, 82, 82, 82, 82,
      82, 82, 82, 82, 82, 82, 82, 82, 82, 82,
      82, 82, 82, 82, 82, 82, 82, 82, 82, 82,
      82, 82, 82, 82, 82, 82, 82, 82, 82, 82,
      82, 82, 82, 82, 82, 82, 82, 82, 82, 82,
      82, 82, 82, 82, 82, 82, 82, 82, 82, 82,
      82, 82, 82, 82, 82, 82, 82, 82, 82, 82,
      82, 82, 82, 82, 82, 82, 82, 82, 82, 82,
      82, 82, 82, 82, 82, 82, 82, 82, 82, 82,
      82, 82, 82, 82, 82, 82, 82, 82, 82, 82,
      82, 82, 82, 82, 82, 82, 82, 82, 82, 82,
      82, 82, 82, 82, 82, 82
    };
  register int hval = len;

  switch (hval)
    {
      default:
        hval += asso_values[(unsigned char)str[7]];
      /*FALLTHROUGH*/
      case 7:
      case 6:
        hval += asso_values[(unsigned char)str[5]];
      /*FALLTHROUGH*/
      case 5:
      case 4:
      case 3:
      case 2:
        break;
    }
  return hval;
}

static const struct fhir_deserialize::MemberNameAndOffset word_array_ElementDefinition_Example[] =
  {
#line 11 "./gperf_class_files/ElementDefinition_Example.gperf"
    {"id", 0x8, 1, -1},
#line 14 "./gperf_class_files/ElementDefinition_Example.gperf"
    {"label", 0x28, 4, -1},
#line 26 "./gperf_class_files/ElementDefinition_Example.gperf"
    {"valueOid", 0x40, 6, 11},
#line 18 "./gperf_class_files/ElementDefinition_Example.gperf"
    {"valueCode", 0x40, 6, 3},
#line 49 "./gperf_class_files/ElementDefinition_Example.gperf"
    {"valueRange", 0x40, 6, 34},
#line 39 "./gperf_class_files/ElementDefinition_Example.gperf"
    {"valueCoding", 0x40, 6, 24},
#line 22 "./gperf_class_files/ElementDefinition_Example.gperf"
    {"valueId", 0x40, 6, 7},
#line 17 "./gperf_class_files/ElementDefinition_Example.gperf"
    {"valueCanonical", 0x40, 6, 2},
#line 50 "./gperf_class_files/ElementDefinition_Example.gperf"
    {"valueRatio", 0x40, 6, 35},
#line 56 "./gperf_class_files/ElementDefinition_Example.gperf"
    {"valueContributor", 0x40, 6, 41},
#line 40 "./gperf_class_files/ElementDefinition_Example.gperf"
    {"valueContactPoint", 0x40, 6, 25},
#line 55 "./gperf_class_files/ElementDefinition_Example.gperf"
    {"valueContactDetail", 0x40, 6, 40},
#line 19 "./gperf_class_files/ElementDefinition_Example.gperf"
    {"valueDate", 0x40, 6, 4},
#line 38 "./gperf_class_files/ElementDefinition_Example.gperf"
    {"valueCodeableConcept", 0x40, 6, 23},
#line 24 "./gperf_class_files/ElementDefinition_Example.gperf"
    {"valueInteger", 0x40, 6, 9},
#line 20 "./gperf_class_files/ElementDefinition_Example.gperf"
    {"valueDateTime", 0x40, 6, 5},
#line 51 "./gperf_class_files/ElementDefinition_Example.gperf"
    {"valueReference", 0x40, 6, 36},
#line 45 "./gperf_class_files/ElementDefinition_Example.gperf"
    {"valueIdentifier", 0x40, 6, 30},
#line 63 "./gperf_class_files/ElementDefinition_Example.gperf"
    {"valueDosage", 0x40, 6, 48},
#line 23 "./gperf_class_files/ElementDefinition_Example.gperf"
    {"valueInstant", 0x40, 6, 8},
#line 42 "./gperf_class_files/ElementDefinition_Example.gperf"
    {"valueDistance", 0x40, 6, 27},
#line 53 "./gperf_class_files/ElementDefinition_Example.gperf"
    {"valueSignature", 0x40, 6, 38},
#line 57 "./gperf_class_files/ElementDefinition_Example.gperf"
    {"valueDataRequirement", 0x40, 6, 42},
#line 27 "./gperf_class_files/ElementDefinition_Example.gperf"
    {"valuePositiveInt", 0x40, 6, 12},
#line 34 "./gperf_class_files/ElementDefinition_Example.gperf"
    {"valueAddress", 0x40, 6, 19},
#line 35 "./gperf_class_files/ElementDefinition_Example.gperf"
    {"valueAge", 0x40, 6, 20},
#line 36 "./gperf_class_files/ElementDefinition_Example.gperf"
    {"valueAnnotation", 0x40, 6, 21},
#line 47 "./gperf_class_files/ElementDefinition_Example.gperf"
    {"valuePeriod", 0x40, 6, 32},
#line 10 "./gperf_class_files/ElementDefinition_Example.gperf"
    {"resourceType", 0x0, 0, -1},
#line 43 "./gperf_class_files/ElementDefinition_Example.gperf"
    {"valueDuration", 0x40, 6, 28},
#line 13 "./gperf_class_files/ElementDefinition_Example.gperf"
    {"extension", 0x20, 3, -1},
#line 37 "./gperf_class_files/ElementDefinition_Example.gperf"
    {"valueAttachment", 0x40, 6, 22},
#line 30 "./gperf_class_files/ElementDefinition_Example.gperf"
    {"valueUnsignedInt", 0x40, 6, 15},
#line 61 "./gperf_class_files/ElementDefinition_Example.gperf"
    {"valueTriggerDefinition", 0x40, 6, 46},
#line 31 "./gperf_class_files/ElementDefinition_Example.gperf"
    {"valueUri", 0x40, 6, 16},
#line 33 "./gperf_class_files/ElementDefinition_Example.gperf"
    {"valueUuid", 0x40, 6, 18},
#line 12 "./gperf_class_files/ElementDefinition_Example.gperf"
    {"extension_count", 0x18, 2, -1},
#line 28 "./gperf_class_files/ElementDefinition_Example.gperf"
    {"valueString", 0x40, 6, 13},
#line 15 "./gperf_class_files/ElementDefinition_Example.gperf"
    {"valueBase64Binary", 0x40, 6, 0},
#line 48 "./gperf_class_files/ElementDefinition_Example.gperf"
    {"valueQuantity", 0x40, 6, 33},
#line 59 "./gperf_class_files/ElementDefinition_Example.gperf"
    {"valueParameterDefinition", 0x40, 6, 44},
#line 46 "./gperf_class_files/ElementDefinition_Example.gperf"
    {"valueMoney", 0x40, 6, 31},
#line 16 "./gperf_class_files/ElementDefinition_Example.gperf"
    {"valueBoolean", 0x40, 6, 1},
#line 64 "./gperf_class_files/ElementDefinition_Example.gperf"
    {"valueMeta", 0x40, 6, 49},
#line 60 "./gperf_class_files/ElementDefinition_Example.gperf"
    {"valueRelatedArtifact", 0x40, 6, 45},
#line 21 "./gperf_class_files/ElementDefinition_Example.gperf"
    {"valueDecimal", 0x40, 6, 6},
#line 32 "./gperf_class_files/ElementDefinition_Example.gperf"
    {"valueUrl", 0x40, 6, 17},
#line 29 "./gperf_class_files/ElementDefinition_Example.gperf"
    {"valueTime", 0x40, 6, 14},
#line 41 "./gperf_class_files/ElementDefinition_Example.gperf"
    {"valueCount", 0x40, 6, 26},
#line 54 "./gperf_class_files/ElementDefinition_Example.gperf"
    {"valueTiming", 0x40, 6, 39},
#line 62 "./gperf_class_files/ElementDefinition_Example.gperf"
    {"valueUsageContext", 0x40, 6, 47},
#line 44 "./gperf_class_files/ElementDefinition_Example.gperf"
    {"valueHumanName", 0x40, 6, 29},
#line 58 "./gperf_class_files/ElementDefinition_Example.gperf"
    {"valueExpression", 0x40, 6, 43},
#line 25 "./gperf_class_files/ElementDefinition_Example.gperf"
    {"valueMarkdown", 0x40, 6, 10},
#line 52 "./gperf_class_files/ElementDefinition_Example.gperf"
    {"valueSampledData", 0x40, 6, 37}
  };

static const signed char lookup[] =
  {
    -1, -1,  0, -1, -1,  1, -1, -1,  2,  3,  4,  5,  6, -1,
     7,  8,  9, 10, 11, 12, 13, -1, 14, 15, 16, 17, 18, 19,
    20, 21, 22, 23, 24, 25, -1, 26, 27, 28, 29, 30, 31, 32,
    33, 34, 35, 36, 37, 38, 39, 40, 41, -1, 42, -1, 43, 44,
    -1, 45, 46, 47, 48, 49, 50, -1, 51, 52, -1, -1, -1, -1,
    -1, -1, -1, 53, -1, -1, -1, -1, -1, -1, -1, 54
  };

const struct fhir_deserialize::MemberNameAndOffset *
ElementDefinition_Example_Gperf::ElementDefinition_Example_MemberLookup (register const char *str, register unsigned int len)
{
  if (len <= MAX_WORD_LENGTH && len >= MIN_WORD_LENGTH)
    {
      register int key = hash (str, len);

      if (key <= MAX_HASH_VALUE && key >= 0)
        {
          register int index = lookup[key];

          if (index >= 0)
            {
              register const char *s = word_array_ElementDefinition_Example[index].name;

              if (*str == *s && !strncmp (str + 1, s + 1, len - 1) && s[len] == '\0')
                return &word_array_ElementDefinition_Example[index];
            }
        }
    }
  return 0;
}
