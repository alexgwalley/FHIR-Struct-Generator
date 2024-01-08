/* C++ code produced by gperf version 3.0.1 */
/* Command-line: gperf.exe -t --output-file=src/generated/gperf_hash_tables/CarePlan_Activity_Detail-Member-Lookup.cc -CGD ./src/generated/gperf_class_files/CarePlan_Activity_Detail.gperf  */
/* Computed positions: -k'1,10,$' */

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

#line 8 "./src/generated/gperf_class_files/CarePlan_Activity_Detail.gperf"
struct fhir_deserialize::MemberNameAndOffset;
enum
  {
    TOTAL_KEYWORDS = 32,
    MIN_WORD_LENGTH = 2,
    MAX_WORD_LENGTH = 27,
    MIN_HASH_VALUE = 2,
    MAX_HASH_VALUE = 50
  };

/* maximum key range = 49, duplicates = 0 */

class CarePlan_Activity_Detail_Gperf
{
private:
  static inline unsigned int hash (const char *str, unsigned int len);
public:
  static const struct fhir_deserialize::MemberNameAndOffset *CarePlan_Activity_Detail_MemberLookup (const char *str, unsigned int len);
};

inline unsigned int
CarePlan_Activity_Detail_Gperf::hash (register const char *str, register unsigned int len)
{
  static const unsigned char asso_values[] =
    {
      51, 51, 51, 51, 51, 51, 51, 51, 51, 51,
      51, 51, 51, 51, 51, 51, 51, 51, 51, 51,
      51, 51, 51, 51, 51, 51, 51, 51, 51, 51,
      51, 51, 51, 51, 51, 51, 51, 51, 51, 51,
      51, 51, 51, 51, 51, 51, 51, 51, 51, 51,
      51, 51, 51, 51, 51, 51, 51, 51, 51, 51,
      51, 51, 51, 51, 51, 51, 51, 51, 51, 51,
      51, 51, 51, 51, 51, 51, 51, 51, 51, 51,
      35, 51, 51, 30, 20, 51, 51, 51, 51, 51,
      51, 51, 51, 51, 51, 15, 51, 51, 51, 10,
       0,  0, 15,  0, 51,  0, 51,  0, 15,  0,
       0,  5, 10, 10, 10,  0,  0, 51, 51, 51,
       5, 15, 51, 51, 51, 51, 51, 51, 51, 51,
      51, 51, 51, 51, 51, 51, 51, 51, 51, 51,
      51, 51, 51, 51, 51, 51, 51, 51, 51, 51,
      51, 51, 51, 51, 51, 51, 51, 51, 51, 51,
      51, 51, 51, 51, 51, 51, 51, 51, 51, 51,
      51, 51, 51, 51, 51, 51, 51, 51, 51, 51,
      51, 51, 51, 51, 51, 51, 51, 51, 51, 51,
      51, 51, 51, 51, 51, 51, 51, 51, 51, 51,
      51, 51, 51, 51, 51, 51, 51, 51, 51, 51,
      51, 51, 51, 51, 51, 51, 51, 51, 51, 51,
      51, 51, 51, 51, 51, 51, 51, 51, 51, 51,
      51, 51, 51, 51, 51, 51, 51, 51, 51, 51,
      51, 51, 51, 51, 51, 51, 51, 51, 51, 51,
      51, 51, 51, 51, 51, 51
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
      case 2:
      case 1:
        hval += asso_values[(unsigned char)str[0]];
        break;
    }
  return hval + asso_values[(unsigned char)str[len - 1]];
}

static const struct fhir_deserialize::MemberNameAndOffset word_array_CarePlan_Activity_Detail[] =
  {
#line 11 "./src/generated/gperf_class_files/CarePlan_Activity_Detail.gperf"
    {"id", 0x8, 1, -1},
#line 16 "./src/generated/gperf_class_files/CarePlan_Activity_Detail.gperf"
    {"kind", 0x38, 6, -1},
#line 28 "./src/generated/gperf_class_files/CarePlan_Activity_Detail.gperf"
    {"status", 0xa0, 18, -1},
#line 13 "./src/generated/gperf_class_files/CarePlan_Activity_Detail.gperf"
    {"extension", 0x20, 3, -1},
#line 26 "./src/generated/gperf_class_files/CarePlan_Activity_Detail.gperf"
    {"goal_count", 0x90, 16, -1},
#line 39 "./src/generated/gperf_class_files/CarePlan_Activity_Detail.gperf"
    {"dailyAmount", 0xf8, 28, -1},
#line 29 "./src/generated/gperf_class_files/CarePlan_Activity_Detail.gperf"
    {"statusReason", 0xb0, 19, -1},
#line 21 "./src/generated/gperf_class_files/CarePlan_Activity_Detail.gperf"
    {"code", 0x68, 11, -1},
#line 20 "./src/generated/gperf_class_files/CarePlan_Activity_Detail.gperf"
    {"instantiatesUri", 0x60, 10, -1},
#line 41 "./src/generated/gperf_class_files/CarePlan_Activity_Detail.gperf"
    {"description", 0x108, 30, -1},
#line 30 "./src/generated/gperf_class_files/CarePlan_Activity_Detail.gperf"
    {"doNotPerform", 0xb8, 20, -1},
#line 27 "./src/generated/gperf_class_files/CarePlan_Activity_Detail.gperf"
    {"goal", 0x98, 17, -1},
#line 23 "./src/generated/gperf_class_files/CarePlan_Activity_Detail.gperf"
    {"reasonCode", 0x78, 13, -1},
#line 19 "./src/generated/gperf_class_files/CarePlan_Activity_Detail.gperf"
    {"instantiatesUri_count", 0x58, 9, -1},
#line 15 "./src/generated/gperf_class_files/CarePlan_Activity_Detail.gperf"
    {"modifierExtension", 0x30, 5, -1},
#line 34 "./src/generated/gperf_class_files/CarePlan_Activity_Detail.gperf"
    {"location", 0xd0, 23, -1},
#line 25 "./src/generated/gperf_class_files/CarePlan_Activity_Detail.gperf"
    {"reasonReference", 0x88, 15, -1},
#line 22 "./src/generated/gperf_class_files/CarePlan_Activity_Detail.gperf"
    {"reasonCode_count", 0x70, 12, -1},
#line 17 "./src/generated/gperf_class_files/CarePlan_Activity_Detail.gperf"
    {"instantiatesCanonical_count", 0x48, 7, -1},
#line 14 "./src/generated/gperf_class_files/CarePlan_Activity_Detail.gperf"
    {"modifierExtension_count", 0x28, 4, -1},
#line 36 "./src/generated/gperf_class_files/CarePlan_Activity_Detail.gperf"
    {"performer", 0xe0, 25, -1},
#line 12 "./src/generated/gperf_class_files/CarePlan_Activity_Detail.gperf"
    {"extension_count", 0x18, 2, -1},
#line 24 "./src/generated/gperf_class_files/CarePlan_Activity_Detail.gperf"
    {"reasonReference_count", 0x80, 14, -1},
#line 37 "./src/generated/gperf_class_files/CarePlan_Activity_Detail.gperf"
    {"productCodeableConcept", 0xf0, 27, 0},
#line 40 "./src/generated/gperf_class_files/CarePlan_Activity_Detail.gperf"
    {"quantity", 0x100, 29, -1},
#line 31 "./src/generated/gperf_class_files/CarePlan_Activity_Detail.gperf"
    {"scheduledTiming", 0xc0, 22, 0},
#line 18 "./src/generated/gperf_class_files/CarePlan_Activity_Detail.gperf"
    {"instantiatesCanonical", 0x50, 8, -1},
#line 10 "./src/generated/gperf_class_files/CarePlan_Activity_Detail.gperf"
    {"resourceType", 0x0, 0, -1},
#line 35 "./src/generated/gperf_class_files/CarePlan_Activity_Detail.gperf"
    {"performer_count", 0xd8, 24, -1},
#line 38 "./src/generated/gperf_class_files/CarePlan_Activity_Detail.gperf"
    {"productReference", 0xf0, 27, 1},
#line 33 "./src/generated/gperf_class_files/CarePlan_Activity_Detail.gperf"
    {"scheduledString", 0xc0, 22, 2},
#line 32 "./src/generated/gperf_class_files/CarePlan_Activity_Detail.gperf"
    {"scheduledPeriod", 0xc0, 22, 1}
  };

static const signed char lookup[] =
  {
    -1, -1,  0, -1,  1, -1,  2, -1, -1,  3,  4,  5,  6, -1,
     7,  8,  9, 10, -1, 11, 12, 13, 14, 15, -1, 16, 17, 18,
    19, 20, 21, 22, 23, 24, -1, 25, 26, 27, -1, -1, 28, 29,
    -1, -1, -1, 30, -1, -1, -1, -1, 31
  };

const struct fhir_deserialize::MemberNameAndOffset *
CarePlan_Activity_Detail_Gperf::CarePlan_Activity_Detail_MemberLookup (register const char *str, register unsigned int len)
{
  if (len <= MAX_WORD_LENGTH && len >= MIN_WORD_LENGTH)
    {
      register int key = hash (str, len);

      if (key <= MAX_HASH_VALUE && key >= 0)
        {
          register int index = lookup[key];

          if (index >= 0)
            {
              register const char *s = word_array_CarePlan_Activity_Detail[index].name;

              if (*str == *s && !strncmp (str + 1, s + 1, len - 1) && s[len] == '\0')
                return &word_array_CarePlan_Activity_Detail[index];
            }
        }
    }
  return 0;
}
