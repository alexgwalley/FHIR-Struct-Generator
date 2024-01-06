/* C++ code produced by gperf version 3.0.1 */
/* Command-line: gperf.exe -t --output-file=src/gperf_hash_tables/Questionnaire-Member-Lookup.cc -CGD ./gperf_class_files/Questionnaire.gperf  */
/* Computed positions: -k'1,5' */

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

#line 8 "./gperf_class_files/Questionnaire.gperf"
struct fhir_deserialize::MemberNameAndOffset;
enum
  {
    TOTAL_KEYWORDS = 42,
    MIN_WORD_LENGTH = 2,
    MAX_WORD_LENGTH = 23,
    MIN_HASH_VALUE = 2,
    MAX_HASH_VALUE = 73
  };

/* maximum key range = 72, duplicates = 0 */

class Questionnaire_Gperf
{
private:
  static inline unsigned int hash (const char *str, unsigned int len);
public:
  static const struct fhir_deserialize::MemberNameAndOffset *Questionnaire_MemberLookup (const char *str, unsigned int len);
};

inline unsigned int
Questionnaire_Gperf::hash (register const char *str, register unsigned int len)
{
  static const unsigned char asso_values[] =
    {
      74, 74, 74, 74, 74, 74, 74, 74, 74, 74,
      74, 74, 74, 74, 74, 74, 74, 74, 74, 74,
      74, 74, 74, 74, 74, 74, 74, 74, 74, 74,
      74, 74, 74, 74, 74, 74, 74, 74, 74, 74,
      74, 74, 74, 74, 74, 74, 74, 74, 74, 74,
      74, 74, 74, 74, 74, 74, 74, 74, 74, 74,
      74, 74, 74, 74, 74, 74, 74, 74, 74, 74,
      74, 74, 74, 74, 74, 74, 74, 74, 74, 74,
      74, 74, 30, 74, 74, 74, 74, 74, 74, 74,
      74, 74, 74, 74, 74,  0, 74,  0, 74,  5,
      25, 15, 15, 74, 74,  0,  5, 74,  0, 35,
      30, 15, 40, 74,  5, 20, 20,  0, 15, 74,
      74, 74, 74, 74, 74, 74, 74, 74, 74, 74,
      74, 74, 74, 74, 74, 74, 74, 74, 74, 74,
      74, 74, 74, 74, 74, 74, 74, 74, 74, 74,
      74, 74, 74, 74, 74, 74, 74, 74, 74, 74,
      74, 74, 74, 74, 74, 74, 74, 74, 74, 74,
      74, 74, 74, 74, 74, 74, 74, 74, 74, 74,
      74, 74, 74, 74, 74, 74, 74, 74, 74, 74,
      74, 74, 74, 74, 74, 74, 74, 74, 74, 74,
      74, 74, 74, 74, 74, 74, 74, 74, 74, 74,
      74, 74, 74, 74, 74, 74, 74, 74, 74, 74,
      74, 74, 74, 74, 74, 74, 74, 74, 74, 74,
      74, 74, 74, 74, 74, 74, 74, 74, 74, 74,
      74, 74, 74, 74, 74, 74, 74, 74, 74, 74,
      74, 74, 74, 74, 74, 74
    };
  register int hval = len;

  switch (hval)
    {
      default:
        hval += asso_values[(unsigned char)str[4]];
      /*FALLTHROUGH*/
      case 4:
      case 3:
      case 2:
      case 1:
        hval += asso_values[(unsigned char)str[0]];
        break;
    }
  return hval;
}

static const struct fhir_deserialize::MemberNameAndOffset word_array_Questionnaire[] =
  {
#line 11 "./gperf_class_files/Questionnaire.gperf"
    {"id", 0x8, 1, -1},
#line 22 "./gperf_class_files/Questionnaire.gperf"
    {"url", 0x78, 12, -1},
#line 51 "./gperf_class_files/Questionnaire.gperf"
    {"item", 0x1c0, 41, -1},
#line 14 "./gperf_class_files/Questionnaire.gperf"
    {"language", 0x30, 4, -1},
#line 49 "./gperf_class_files/Questionnaire.gperf"
    {"code", 0x1b0, 39, -1},
#line 50 "./gperf_class_files/Questionnaire.gperf"
    {"item_count", 0x1b8, 40, -1},
#line 37 "./gperf_class_files/Questionnaire.gperf"
    {"contact", 0x128, 27, -1},
#line 13 "./gperf_class_files/Questionnaire.gperf"
    {"implicitRules", 0x20, 3, -1},
#line 17 "./gperf_class_files/Questionnaire.gperf"
    {"contained", 0x50, 7, -1},
#line 48 "./gperf_class_files/Questionnaire.gperf"
    {"code_count", 0x1a8, 38, -1},
#line 10 "./gperf_class_files/Questionnaire.gperf"
    {"resourceType", 0x0, 0, -1},
#line 36 "./gperf_class_files/Questionnaire.gperf"
    {"contact_count", 0x120, 26, -1},
#line 44 "./gperf_class_files/Questionnaire.gperf"
    {"copyright", 0x170, 34, -1},
#line 16 "./gperf_class_files/Questionnaire.gperf"
    {"contained_count", 0x48, 6, -1},
#line 25 "./gperf_class_files/Questionnaire.gperf"
    {"version", 0x98, 15, -1},
#line 15 "./gperf_class_files/Questionnaire.gperf"
    {"text", 0x40, 5, -1},
#line 40 "./gperf_class_files/Questionnaire.gperf"
    {"useContext", 0x148, 30, -1},
#line 30 "./gperf_class_files/Questionnaire.gperf"
    {"status", 0xd8, 20, -1},
#line 45 "./gperf_class_files/Questionnaire.gperf"
    {"approvalDate", 0x180, 35, -1},
#line 34 "./gperf_class_files/Questionnaire.gperf"
    {"date", 0x100, 24, -1},
#line 24 "./gperf_class_files/Questionnaire.gperf"
    {"identifier", 0x90, 14, -1},
#line 39 "./gperf_class_files/Questionnaire.gperf"
    {"useContext_count", 0x140, 29, -1},
#line 31 "./gperf_class_files/Questionnaire.gperf"
    {"experimental", 0xe8, 21, -1},
#line 26 "./gperf_class_files/Questionnaire.gperf"
    {"name", 0xa8, 16, -1},
#line 47 "./gperf_class_files/Questionnaire.gperf"
    {"effectivePeriod", 0x1a0, 37, -1},
#line 23 "./gperf_class_files/Questionnaire.gperf"
    {"identifier_count", 0x88, 13, -1},
#line 42 "./gperf_class_files/Questionnaire.gperf"
    {"jurisdiction", 0x158, 32, -1},
#line 12 "./gperf_class_files/Questionnaire.gperf"
    {"meta", 0x18, 2, -1},
#line 27 "./gperf_class_files/Questionnaire.gperf"
    {"title", 0xb8, 17, -1},
#line 38 "./gperf_class_files/Questionnaire.gperf"
    {"description", 0x130, 28, -1},
#line 41 "./gperf_class_files/Questionnaire.gperf"
    {"jurisdiction_count", 0x150, 31, -1},
#line 46 "./gperf_class_files/Questionnaire.gperf"
    {"lastReviewDate", 0x190, 36, -1},
#line 33 "./gperf_class_files/Questionnaire.gperf"
    {"subjectType", 0xf8, 23, -1},
#line 35 "./gperf_class_files/Questionnaire.gperf"
    {"publisher", 0x110, 25, -1},
#line 29 "./gperf_class_files/Questionnaire.gperf"
    {"derivedFrom", 0xd0, 19, -1},
#line 32 "./gperf_class_files/Questionnaire.gperf"
    {"subjectType_count", 0xf0, 22, -1},
#line 19 "./gperf_class_files/Questionnaire.gperf"
    {"extension", 0x60, 9, -1},
#line 28 "./gperf_class_files/Questionnaire.gperf"
    {"derivedFrom_count", 0xc8, 18, -1},
#line 18 "./gperf_class_files/Questionnaire.gperf"
    {"extension_count", 0x58, 8, -1},
#line 43 "./gperf_class_files/Questionnaire.gperf"
    {"purpose", 0x160, 33, -1},
#line 21 "./gperf_class_files/Questionnaire.gperf"
    {"modifierExtension", 0x70, 11, -1},
#line 20 "./gperf_class_files/Questionnaire.gperf"
    {"modifierExtension_count", 0x68, 10, -1}
  };

static const signed char lookup[] =
  {
    -1, -1,  0,  1,  2, -1, -1, -1,  3,  4,  5, -1,  6,  7,
     8,  9, -1, 10, 11, 12, 13, -1, 14, -1, 15, 16, 17, 18,
    -1, 19, 20, 21, 22, -1, 23, 24, 25, 26, -1, 27, 28, 29,
    -1, 30, 31, -1, 32, -1, -1, 33, -1, 34, 35, -1, 36, -1,
    -1, 37, -1, -1, 38, -1, 39, -1, -1, -1, -1, 40, -1, -1,
    -1, -1, -1, 41
  };

const struct fhir_deserialize::MemberNameAndOffset *
Questionnaire_Gperf::Questionnaire_MemberLookup (register const char *str, register unsigned int len)
{
  if (len <= MAX_WORD_LENGTH && len >= MIN_WORD_LENGTH)
    {
      register int key = hash (str, len);

      if (key <= MAX_HASH_VALUE && key >= 0)
        {
          register int index = lookup[key];

          if (index >= 0)
            {
              register const char *s = word_array_Questionnaire[index].name;

              if (*str == *s && !strncmp (str + 1, s + 1, len - 1) && s[len] == '\0')
                return &word_array_Questionnaire[index];
            }
        }
    }
  return 0;
}