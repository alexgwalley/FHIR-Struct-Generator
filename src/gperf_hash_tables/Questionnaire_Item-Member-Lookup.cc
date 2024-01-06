/* C++ code produced by gperf version 3.0.1 */
/* Command-line: gperf.exe -t --output-file=src/gperf_hash_tables/Questionnaire_Item-Member-Lookup.cc -CGD ./gperf_class_files/Questionnaire_Item.gperf  */
/* Computed positions: -k'1,3' */

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

#line 8 "./gperf_class_files/Questionnaire_Item.gperf"
struct fhir_deserialize::MemberNameAndOffset;
enum
  {
    TOTAL_KEYWORDS = 27,
    MIN_WORD_LENGTH = 2,
    MAX_WORD_LENGTH = 23,
    MIN_HASH_VALUE = 2,
    MAX_HASH_VALUE = 45
  };

/* maximum key range = 44, duplicates = 0 */

class Questionnaire_Item_Gperf
{
private:
  static inline unsigned int hash (const char *str, unsigned int len);
public:
  static const struct fhir_deserialize::MemberNameAndOffset *Questionnaire_Item_MemberLookup (const char *str, unsigned int len);
};

inline unsigned int
Questionnaire_Item_Gperf::hash (register const char *str, register unsigned int len)
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
      46, 46, 46, 46, 46, 46, 46,  5, 46, 25,
      10,  0,  5, 46, 46,  0, 46, 46,  5,  5,
       0, 46,  0,  0, 10,  5,  5, 46, 46, 46,
      20, 46, 46, 46, 46, 46, 46, 46, 46, 46,
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
  register int hval = len;

  switch (hval)
    {
      default:
        hval += asso_values[(unsigned char)str[2]];
      /*FALLTHROUGH*/
      case 2:
      case 1:
        hval += asso_values[(unsigned char)str[0]];
        break;
    }
  return hval;
}

static const struct fhir_deserialize::MemberNameAndOffset word_array_Questionnaire_Item[] =
  {
#line 11 "./gperf_class_files/Questionnaire_Item.gperf"
    {"id", 0x8, 1, -1},
#line 36 "./gperf_class_files/Questionnaire_Item.gperf"
    {"item", 0x108, 26, -1},
#line 20 "./gperf_class_files/Questionnaire_Item.gperf"
    {"prefix", 0x68, 10, -1},
#line 34 "./gperf_class_files/Questionnaire_Item.gperf"
    {"initial", 0xf8, 24, -1},
#line 22 "./gperf_class_files/Questionnaire_Item.gperf"
    {"type", 0x88, 12, -1},
#line 35 "./gperf_class_files/Questionnaire_Item.gperf"
    {"item_count", 0x100, 25, -1},
#line 16 "./gperf_class_files/Questionnaire_Item.gperf"
    {"linkId", 0x38, 6, -1},
#line 33 "./gperf_class_files/Questionnaire_Item.gperf"
    {"initial_count", 0xf0, 23, -1},
#line 13 "./gperf_class_files/Questionnaire_Item.gperf"
    {"extension", 0x20, 3, -1},
#line 24 "./gperf_class_files/Questionnaire_Item.gperf"
    {"enableWhen", 0xa0, 14, -1},
#line 27 "./gperf_class_files/Questionnaire_Item.gperf"
    {"repeats", 0xbc, 17, -1},
#line 26 "./gperf_class_files/Questionnaire_Item.gperf"
    {"required", 0xb8, 16, -1},
#line 25 "./gperf_class_files/Questionnaire_Item.gperf"
    {"enableBehavior", 0xa8, 15, -1},
#line 12 "./gperf_class_files/Questionnaire_Item.gperf"
    {"extension_count", 0x18, 2, -1},
#line 23 "./gperf_class_files/Questionnaire_Item.gperf"
    {"enableWhen_count", 0x98, 13, -1},
#line 32 "./gperf_class_files/Questionnaire_Item.gperf"
    {"answerOption", 0xe8, 22, -1},
#line 28 "./gperf_class_files/Questionnaire_Item.gperf"
    {"readOnly", 0xc0, 18, -1},
#line 30 "./gperf_class_files/Questionnaire_Item.gperf"
    {"answerValueSet", 0xd0, 20, -1},
#line 17 "./gperf_class_files/Questionnaire_Item.gperf"
    {"definition", 0x48, 7, -1},
#line 10 "./gperf_class_files/Questionnaire_Item.gperf"
    {"resourceType", 0x0, 0, -1},
#line 31 "./gperf_class_files/Questionnaire_Item.gperf"
    {"answerOption_count", 0xe0, 21, -1},
#line 21 "./gperf_class_files/Questionnaire_Item.gperf"
    {"text", 0x78, 11, -1},
#line 15 "./gperf_class_files/Questionnaire_Item.gperf"
    {"modifierExtension", 0x30, 5, -1},
#line 29 "./gperf_class_files/Questionnaire_Item.gperf"
    {"maxLength", 0xc8, 19, -1},
#line 14 "./gperf_class_files/Questionnaire_Item.gperf"
    {"modifierExtension_count", 0x28, 4, -1},
#line 19 "./gperf_class_files/Questionnaire_Item.gperf"
    {"code", 0x60, 9, -1},
#line 18 "./gperf_class_files/Questionnaire_Item.gperf"
    {"code_count", 0x58, 8, -1}
  };

static const signed char lookup[] =
  {
    -1, -1,  0, -1,  1, -1,  2,  3, -1,  4,  5,  6, -1,  7,
     8,  9, -1, 10, 11, 12, 13, 14, 15, 16, 17, 18, -1, 19,
    20, 21, -1, -1, 22, -1, 23, -1, -1, -1, 24, 25, -1, -1,
    -1, -1, -1, 26
  };

const struct fhir_deserialize::MemberNameAndOffset *
Questionnaire_Item_Gperf::Questionnaire_Item_MemberLookup (register const char *str, register unsigned int len)
{
  if (len <= MAX_WORD_LENGTH && len >= MIN_WORD_LENGTH)
    {
      register int key = hash (str, len);

      if (key <= MAX_HASH_VALUE && key >= 0)
        {
          register int index = lookup[key];

          if (index >= 0)
            {
              register const char *s = word_array_Questionnaire_Item[index].name;

              if (*str == *s && !strncmp (str + 1, s + 1, len - 1) && s[len] == '\0')
                return &word_array_Questionnaire_Item[index];
            }
        }
    }
  return 0;
}