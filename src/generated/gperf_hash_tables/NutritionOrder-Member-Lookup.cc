/* C++ code produced by gperf version 3.0.1 */
/* Command-line: gperf.exe -t --output-file=src/generated/gperf_hash_tables/NutritionOrder-Member-Lookup.cc -CGD ./src/generated/gperf_class_files/NutritionOrder.gperf  */
/* Computed positions: -k'1,$' */

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

#line 8 "./src/generated/gperf_class_files/NutritionOrder.gperf"
struct fhir_deserialize::MemberNameAndOffset;
enum
  {
    TOTAL_KEYWORDS = 38,
    MIN_WORD_LENGTH = 2,
    MAX_WORD_LENGTH = 28,
    MIN_HASH_VALUE = 4,
    MAX_HASH_VALUE = 57
  };

/* maximum key range = 54, duplicates = 0 */

class NutritionOrder_Gperf
{
private:
  static inline unsigned int hash (const char *str, unsigned int len);
public:
  static const struct fhir_deserialize::MemberNameAndOffset *NutritionOrder_MemberLookup (const char *str, unsigned int len);
};

inline unsigned int
NutritionOrder_Gperf::hash (register const char *str, register unsigned int len)
{
  static const unsigned char asso_values[] =
    {
      58, 58, 58, 58, 58, 58, 58, 58, 58, 58,
      58, 58, 58, 58, 58, 58, 58, 58, 58, 58,
      58, 58, 58, 58, 58, 58, 58, 58, 58, 58,
      58, 58, 58, 58, 58, 58, 58, 58, 58, 58,
      58, 58, 58, 58, 58, 58, 58, 58, 58, 58,
      58, 58, 58, 58, 58, 58, 58, 58, 58, 58,
      58, 58, 58, 58, 58, 58, 58, 58, 58, 58,
      58, 58, 58, 58, 58, 58, 58, 58, 58, 58,
      58, 58, 58, 58, 58, 58, 58, 58, 58, 58,
      58, 58, 58, 58, 58, 58, 58,  5, 58, 40,
       0,  5, 15, 58, 58,  5, 58, 58, 20, 30,
       5,  0,  5, 58, 20,  0,  0, 58, 58, 58,
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
      58, 58, 58, 58, 58, 58, 58, 58, 58, 58,
      58, 58, 58, 58, 58, 58
    };
  return len + asso_values[(unsigned char)str[len - 1]] + asso_values[(unsigned char)str[0]];
}

static const struct fhir_deserialize::MemberNameAndOffset word_array_NutritionOrder[] =
  {
#line 15 "./src/generated/gperf_class_files/NutritionOrder.gperf"
    {"text", 0x40, 5, -1},
#line 30 "./src/generated/gperf_class_files/NutritionOrder.gperf"
    {"status", 0xb8, 20, -1},
#line 11 "./src/generated/gperf_class_files/NutritionOrder.gperf"
    {"id", 0x8, 1, -1},
#line 42 "./src/generated/gperf_class_files/NutritionOrder.gperf"
    {"oralDiet", 0x130, 32, -1},
#line 44 "./src/generated/gperf_class_files/NutritionOrder.gperf"
    {"supplement", 0x140, 34, -1},
#line 31 "./src/generated/gperf_class_files/NutritionOrder.gperf"
    {"intent", 0xc8, 21, -1},
#line 32 "./src/generated/gperf_class_files/NutritionOrder.gperf"
    {"patient", 0xd8, 22, -1},
#line 34 "./src/generated/gperf_class_files/NutritionOrder.gperf"
    {"dateTime", 0xe8, 24, -1},
#line 47 "./src/generated/gperf_class_files/NutritionOrder.gperf"
    {"note", 0x158, 37, -1},
#line 46 "./src/generated/gperf_class_files/NutritionOrder.gperf"
    {"note_count", 0x150, 36, -1},
#line 43 "./src/generated/gperf_class_files/NutritionOrder.gperf"
    {"supplement_count", 0x138, 33, -1},
#line 29 "./src/generated/gperf_class_files/NutritionOrder.gperf"
    {"instantiates", 0xb0, 19, -1},
#line 13 "./src/generated/gperf_class_files/NutritionOrder.gperf"
    {"implicitRules", 0x20, 3, -1},
#line 19 "./src/generated/gperf_class_files/NutritionOrder.gperf"
    {"extension", 0x60, 9, -1},
#line 18 "./src/generated/gperf_class_files/NutritionOrder.gperf"
    {"extension_count", 0x58, 8, -1},
#line 22 "./src/generated/gperf_class_files/NutritionOrder.gperf"
    {"identifier_count", 0x78, 12, -1},
#line 28 "./src/generated/gperf_class_files/NutritionOrder.gperf"
    {"instantiates_count", 0xa8, 18, -1},
#line 45 "./src/generated/gperf_class_files/NutritionOrder.gperf"
    {"enteralFormula", 0x148, 35, -1},
#line 27 "./src/generated/gperf_class_files/NutritionOrder.gperf"
    {"instantiatesUri", 0xa0, 17, -1},
#line 26 "./src/generated/gperf_class_files/NutritionOrder.gperf"
    {"instantiatesUri_count", 0x98, 16, -1},
#line 35 "./src/generated/gperf_class_files/NutritionOrder.gperf"
    {"orderer", 0xf8, 25, -1},
#line 37 "./src/generated/gperf_class_files/NutritionOrder.gperf"
    {"allergyIntolerance", 0x108, 27, -1},
#line 36 "./src/generated/gperf_class_files/NutritionOrder.gperf"
    {"allergyIntolerance_count", 0x100, 26, -1},
#line 40 "./src/generated/gperf_class_files/NutritionOrder.gperf"
    {"excludeFoodModifier_count", 0x120, 30, -1},
#line 24 "./src/generated/gperf_class_files/NutritionOrder.gperf"
    {"instantiatesCanonical_count", 0x88, 14, -1},
#line 14 "./src/generated/gperf_class_files/NutritionOrder.gperf"
    {"language", 0x30, 4, -1},
#line 33 "./src/generated/gperf_class_files/NutritionOrder.gperf"
    {"encounter", 0xe0, 23, -1},
#line 23 "./src/generated/gperf_class_files/NutritionOrder.gperf"
    {"identifier", 0x80, 13, -1},
#line 10 "./src/generated/gperf_class_files/NutritionOrder.gperf"
    {"resourceType", 0x0, 0, -1},
#line 12 "./src/generated/gperf_class_files/NutritionOrder.gperf"
    {"meta", 0x18, 2, -1},
#line 38 "./src/generated/gperf_class_files/NutritionOrder.gperf"
    {"foodPreferenceModifier_count", 0x110, 28, -1},
#line 41 "./src/generated/gperf_class_files/NutritionOrder.gperf"
    {"excludeFoodModifier", 0x128, 31, -1},
#line 25 "./src/generated/gperf_class_files/NutritionOrder.gperf"
    {"instantiatesCanonical", 0x90, 15, -1},
#line 17 "./src/generated/gperf_class_files/NutritionOrder.gperf"
    {"contained", 0x50, 7, -1},
#line 21 "./src/generated/gperf_class_files/NutritionOrder.gperf"
    {"modifierExtension", 0x70, 11, -1},
#line 20 "./src/generated/gperf_class_files/NutritionOrder.gperf"
    {"modifierExtension_count", 0x68, 10, -1},
#line 16 "./src/generated/gperf_class_files/NutritionOrder.gperf"
    {"contained_count", 0x48, 6, -1},
#line 39 "./src/generated/gperf_class_files/NutritionOrder.gperf"
    {"foodPreferenceModifier", 0x118, 29, -1}
  };

static const signed char lookup[] =
  {
    -1, -1, -1, -1,  0, -1,  1,  2,  3, -1,  4,  5,  6,  7,
     8,  9, 10, 11, 12, 13, 14, 15, -1, 16, 17, 18, 19, 20,
    21, 22, 23, -1, 24, 25, 26, 27, -1, 28, -1, 29, -1, -1,
    -1, 30, 31, -1, 32, -1, -1, 33, -1, -1, 34, 35, -1, 36,
    -1, 37
  };

const struct fhir_deserialize::MemberNameAndOffset *
NutritionOrder_Gperf::NutritionOrder_MemberLookup (register const char *str, register unsigned int len)
{
  if (len <= MAX_WORD_LENGTH && len >= MIN_WORD_LENGTH)
    {
      register int key = hash (str, len);

      if (key <= MAX_HASH_VALUE && key >= 0)
        {
          register int index = lookup[key];

          if (index >= 0)
            {
              register const char *s = word_array_NutritionOrder[index].name;

              if (*str == *s && !strncmp (str + 1, s + 1, len - 1) && s[len] == '\0')
                return &word_array_NutritionOrder[index];
            }
        }
    }
  return 0;
}
