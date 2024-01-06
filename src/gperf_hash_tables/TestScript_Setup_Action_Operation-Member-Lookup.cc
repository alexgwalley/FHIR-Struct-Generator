/* C++ code produced by gperf version 3.0.1 */
/* Command-line: gperf.exe -t --output-file=src/gperf_hash_tables/TestScript_Setup_Action_Operation-Member-Lookup.cc -CGD ./gperf_class_files/TestScript_Setup_Action_Operation.gperf  */
/* Computed positions: -k'5' */

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

#line 8 "./gperf_class_files/TestScript_Setup_Action_Operation.gperf"
struct fhir_deserialize::MemberNameAndOffset;
enum
  {
    TOTAL_KEYWORDS = 24,
    MIN_WORD_LENGTH = 2,
    MAX_WORD_LENGTH = 23,
    MIN_HASH_VALUE = 2,
    MAX_HASH_VALUE = 41
  };

/* maximum key range = 40, duplicates = 0 */

class TestScript_Setup_Action_Operation_Gperf
{
private:
  static inline unsigned int hash (const char *str, unsigned int len);
public:
  static const struct fhir_deserialize::MemberNameAndOffset *TestScript_Setup_Action_Operation_MemberLookup (const char *str, unsigned int len);
};

inline unsigned int
TestScript_Setup_Action_Operation_Gperf::hash (register const char *str, register unsigned int len)
{
  static const unsigned char asso_values[] =
    {
      42, 42, 42, 42, 42, 42, 42, 42, 42, 42,
      42, 42, 42, 42, 42, 42, 42, 42, 42, 42,
      42, 42, 42, 42, 42, 42, 42, 42, 42, 42,
      42, 42, 42, 42, 42, 42, 42, 42, 42, 42,
      42, 42, 42, 42, 42, 42, 42, 42, 42, 42,
      42, 42, 42, 42, 42, 42, 42, 42, 42, 42,
      42, 42, 42, 42, 42, 42, 42, 42, 42, 42,
      42, 42, 42, 42, 42, 42, 42, 42, 42, 42,
      42, 42, 42, 42, 42, 42, 42, 42, 42, 42,
      42, 42, 42, 42, 42, 42, 42, 42, 42, 20,
      25,  0,  0, 42, 42, 10, 42, 42,  0, 30,
       5,  0, 25, 42, 15, 42, 42, 10, 42, 42,
      42, 42, 42, 42, 42, 42, 42, 42, 42, 42,
      42, 42, 42, 42, 42, 42, 42, 42, 42, 42,
      42, 42, 42, 42, 42, 42, 42, 42, 42, 42,
      42, 42, 42, 42, 42, 42, 42, 42, 42, 42,
      42, 42, 42, 42, 42, 42, 42, 42, 42, 42,
      42, 42, 42, 42, 42, 42, 42, 42, 42, 42,
      42, 42, 42, 42, 42, 42, 42, 42, 42, 42,
      42, 42, 42, 42, 42, 42, 42, 42, 42, 42,
      42, 42, 42, 42, 42, 42, 42, 42, 42, 42,
      42, 42, 42, 42, 42, 42, 42, 42, 42, 42,
      42, 42, 42, 42, 42, 42, 42, 42, 42, 42,
      42, 42, 42, 42, 42, 42, 42, 42, 42, 42,
      42, 42, 42, 42, 42, 42, 42, 42, 42, 42,
      42, 42, 42, 42, 42, 42
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
        break;
    }
  return hval;
}

static const struct fhir_deserialize::MemberNameAndOffset word_array_TestScript_Setup_Action_Operation[] =
  {
#line 11 "./gperf_class_files/TestScript_Setup_Action_Operation.gperf"
    {"id", 0x8, 1, -1},
#line 33 "./gperf_class_files/TestScript_Setup_Action_Operation.gperf"
    {"url", 0x118, 23, -1},
#line 16 "./gperf_class_files/TestScript_Setup_Action_Operation.gperf"
    {"type", 0x38, 6, -1},
#line 18 "./gperf_class_files/TestScript_Setup_Action_Operation.gperf"
    {"label", 0x50, 8, -1},
#line 24 "./gperf_class_files/TestScript_Setup_Action_Operation.gperf"
    {"method", 0xa0, 14, -1},
#line 32 "./gperf_class_files/TestScript_Setup_Action_Operation.gperf"
    {"targetId", 0x108, 22, -1},
#line 29 "./gperf_class_files/TestScript_Setup_Action_Operation.gperf"
    {"requestId", 0xd8, 19, -1},
#line 30 "./gperf_class_files/TestScript_Setup_Action_Operation.gperf"
    {"responseId", 0xe8, 20, -1},
#line 21 "./gperf_class_files/TestScript_Setup_Action_Operation.gperf"
    {"contentType", 0x80, 11, -1},
#line 28 "./gperf_class_files/TestScript_Setup_Action_Operation.gperf"
    {"requestHeader", 0xd0, 18, -1},
#line 13 "./gperf_class_files/TestScript_Setup_Action_Operation.gperf"
    {"extension", 0x20, 3, -1},
#line 25 "./gperf_class_files/TestScript_Setup_Action_Operation.gperf"
    {"origin", 0xb0, 15, -1},
#line 15 "./gperf_class_files/TestScript_Setup_Action_Operation.gperf"
    {"modifierExtension", 0x30, 5, -1},
#line 17 "./gperf_class_files/TestScript_Setup_Action_Operation.gperf"
    {"resource", 0x40, 7, -1},
#line 27 "./gperf_class_files/TestScript_Setup_Action_Operation.gperf"
    {"requestHeader_count", 0xc8, 17, -1},
#line 12 "./gperf_class_files/TestScript_Setup_Action_Operation.gperf"
    {"extension_count", 0x18, 2, -1},
#line 22 "./gperf_class_files/TestScript_Setup_Action_Operation.gperf"
    {"destination", 0x90, 12, -1},
#line 10 "./gperf_class_files/TestScript_Setup_Action_Operation.gperf"
    {"resourceType", 0x0, 0, -1},
#line 14 "./gperf_class_files/TestScript_Setup_Action_Operation.gperf"
    {"modifierExtension_count", 0x28, 4, -1},
#line 19 "./gperf_class_files/TestScript_Setup_Action_Operation.gperf"
    {"description", 0x60, 9, -1},
#line 31 "./gperf_class_files/TestScript_Setup_Action_Operation.gperf"
    {"sourceId", 0xf8, 21, -1},
#line 20 "./gperf_class_files/TestScript_Setup_Action_Operation.gperf"
    {"accept", 0x70, 10, -1},
#line 26 "./gperf_class_files/TestScript_Setup_Action_Operation.gperf"
    {"params", 0xb8, 16, -1},
#line 23 "./gperf_class_files/TestScript_Setup_Action_Operation.gperf"
    {"encodeRequestUrl", 0x98, 13, -1}
  };

static const signed char lookup[] =
  {
    -1, -1,  0,  1,  2,  3,  4, -1,  5,  6,  7,  8, -1,  9,
    10, -1, 11, 12, 13, 14, 15, 16, 17, 18, -1, -1, 19, -1,
    20, -1, -1, 21, -1, -1, -1, -1, 22, -1, -1, -1, -1, 23
  };

const struct fhir_deserialize::MemberNameAndOffset *
TestScript_Setup_Action_Operation_Gperf::TestScript_Setup_Action_Operation_MemberLookup (register const char *str, register unsigned int len)
{
  if (len <= MAX_WORD_LENGTH && len >= MIN_WORD_LENGTH)
    {
      register int key = hash (str, len);

      if (key <= MAX_HASH_VALUE && key >= 0)
        {
          register int index = lookup[key];

          if (index >= 0)
            {
              register const char *s = word_array_TestScript_Setup_Action_Operation[index].name;

              if (*str == *s && !strncmp (str + 1, s + 1, len - 1) && s[len] == '\0')
                return &word_array_TestScript_Setup_Action_Operation[index];
            }
        }
    }
  return 0;
}
