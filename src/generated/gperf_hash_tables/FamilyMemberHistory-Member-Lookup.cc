/* C++ code produced by gperf version 3.0.1 */
/* Command-line: gperf.exe -t --output-file=src/generated/gperf_hash_tables/FamilyMemberHistory-Member-Lookup.cc -CGD ./src/generated/gperf_class_files/FamilyMemberHistory.gperf  */
/* Computed positions: -k'1-2,5,13' */

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

#line 8 "./src/generated/gperf_class_files/FamilyMemberHistory.gperf"
struct fhir_deserialize::MemberNameAndOffset;
enum
  {
    TOTAL_KEYWORDS = 45,
    MIN_WORD_LENGTH = 2,
    MAX_WORD_LENGTH = 27,
    MIN_HASH_VALUE = 4,
    MAX_HASH_VALUE = 103
  };

/* maximum key range = 100, duplicates = 0 */

class FamilyMemberHistory_Gperf
{
private:
  static inline unsigned int hash (const char *str, unsigned int len);
public:
  static const struct fhir_deserialize::MemberNameAndOffset *FamilyMemberHistory_MemberLookup (const char *str, unsigned int len);
};

inline unsigned int
FamilyMemberHistory_Gperf::hash (register const char *str, register unsigned int len)
{
  static const unsigned char asso_values[] =
    {
      104, 104, 104, 104, 104, 104, 104, 104, 104, 104,
      104, 104, 104, 104, 104, 104, 104, 104, 104, 104,
      104, 104, 104, 104, 104, 104, 104, 104, 104, 104,
      104, 104, 104, 104, 104, 104, 104, 104, 104, 104,
      104, 104, 104, 104, 104, 104, 104, 104, 104, 104,
      104, 104, 104, 104, 104, 104, 104, 104, 104, 104,
      104, 104, 104, 104, 104,  20, 104,  20,   0, 104,
      104, 104, 104, 104, 104, 104, 104, 104, 104, 104,
       10, 104, 104,   5, 104,  30, 104, 104, 104, 104,
      104, 104, 104, 104, 104,   0, 104,   5,   0,  15,
        5,   0,   0,  10, 104,  10, 104, 104,  15,  40,
        0,   0,   0, 104,  20,  30,  15,  10, 104, 104,
       40, 104, 104, 104, 104, 104, 104, 104, 104, 104,
      104, 104, 104, 104, 104, 104, 104, 104, 104, 104,
      104, 104, 104, 104, 104, 104, 104, 104, 104, 104,
      104, 104, 104, 104, 104, 104, 104, 104, 104, 104,
      104, 104, 104, 104, 104, 104, 104, 104, 104, 104,
      104, 104, 104, 104, 104, 104, 104, 104, 104, 104,
      104, 104, 104, 104, 104, 104, 104, 104, 104, 104,
      104, 104, 104, 104, 104, 104, 104, 104, 104, 104,
      104, 104, 104, 104, 104, 104, 104, 104, 104, 104,
      104, 104, 104, 104, 104, 104, 104, 104, 104, 104,
      104, 104, 104, 104, 104, 104, 104, 104, 104, 104,
      104, 104, 104, 104, 104, 104, 104, 104, 104, 104,
      104, 104, 104, 104, 104, 104, 104, 104, 104, 104,
      104, 104, 104, 104, 104, 104
    };
  register int hval = len;

  switch (hval)
    {
      default:
        hval += asso_values[(unsigned char)str[12]];
      /*FALLTHROUGH*/
      case 12:
      case 11:
      case 10:
      case 9:
      case 8:
      case 7:
      case 6:
      case 5:
        hval += asso_values[(unsigned char)str[4]];
      /*FALLTHROUGH*/
      case 4:
      case 3:
      case 2:
        hval += asso_values[(unsigned char)str[1]];
      /*FALLTHROUGH*/
      case 1:
        hval += asso_values[(unsigned char)str[0]];
        break;
    }
  return hval;
}

static const struct fhir_deserialize::MemberNameAndOffset word_array_FamilyMemberHistory[] =
  {
#line 52 "./src/generated/gperf_class_files/FamilyMemberHistory.gperf"
    {"note", 0x168, 37, -1},
#line 36 "./src/generated/gperf_class_files/FamilyMemberHistory.gperf"
    {"bornDate", 0x100, 26, 1},
#line 32 "./src/generated/gperf_class_files/FamilyMemberHistory.gperf"
    {"name", 0xd8, 22, -1},
#line 51 "./src/generated/gperf_class_files/FamilyMemberHistory.gperf"
    {"note_count", 0x160, 36, -1},
#line 30 "./src/generated/gperf_class_files/FamilyMemberHistory.gperf"
    {"patient", 0xc0, 20, -1},
#line 31 "./src/generated/gperf_class_files/FamilyMemberHistory.gperf"
    {"date", 0xc8, 21, -1},
#line 37 "./src/generated/gperf_class_files/FamilyMemberHistory.gperf"
    {"bornString", 0x100, 26, 2},
#line 11 "./src/generated/gperf_class_files/FamilyMemberHistory.gperf"
    {"id", 0x8, 1, -1},
#line 15 "./src/generated/gperf_class_files/FamilyMemberHistory.gperf"
    {"text", 0x40, 5, -1},
#line 35 "./src/generated/gperf_class_files/FamilyMemberHistory.gperf"
    {"bornPeriod", 0x100, 26, 0},
#line 43 "./src/generated/gperf_class_files/FamilyMemberHistory.gperf"
    {"deceasedAge", 0x130, 31, 1},
#line 45 "./src/generated/gperf_class_files/FamilyMemberHistory.gperf"
    {"deceasedDate", 0x130, 31, 3},
#line 44 "./src/generated/gperf_class_files/FamilyMemberHistory.gperf"
    {"deceasedRange", 0x130, 31, 2},
#line 46 "./src/generated/gperf_class_files/FamilyMemberHistory.gperf"
    {"deceasedString", 0x130, 31, 4},
#line 42 "./src/generated/gperf_class_files/FamilyMemberHistory.gperf"
    {"deceasedBoolean", 0x130, 31, 0},
#line 39 "./src/generated/gperf_class_files/FamilyMemberHistory.gperf"
    {"ageRange", 0x118, 28, 1},
#line 17 "./src/generated/gperf_class_files/FamilyMemberHistory.gperf"
    {"contained", 0x50, 7, -1},
#line 48 "./src/generated/gperf_class_files/FamilyMemberHistory.gperf"
    {"reasonCode", 0x148, 33, -1},
#line 38 "./src/generated/gperf_class_files/FamilyMemberHistory.gperf"
    {"ageAge", 0x118, 28, 0},
#line 34 "./src/generated/gperf_class_files/FamilyMemberHistory.gperf"
    {"sex", 0xf0, 24, -1},
#line 54 "./src/generated/gperf_class_files/FamilyMemberHistory.gperf"
    {"condition", 0x178, 39, -1},
#line 50 "./src/generated/gperf_class_files/FamilyMemberHistory.gperf"
    {"reasonReference", 0x158, 35, -1},
#line 47 "./src/generated/gperf_class_files/FamilyMemberHistory.gperf"
    {"reasonCode_count", 0x140, 32, -1},
#line 14 "./src/generated/gperf_class_files/FamilyMemberHistory.gperf"
    {"language", 0x30, 4, -1},
#line 40 "./src/generated/gperf_class_files/FamilyMemberHistory.gperf"
    {"ageString", 0x118, 28, 2},
#line 23 "./src/generated/gperf_class_files/FamilyMemberHistory.gperf"
    {"identifier", 0x80, 13, -1},
#line 49 "./src/generated/gperf_class_files/FamilyMemberHistory.gperf"
    {"reasonReference_count", 0x150, 34, -1},
#line 10 "./src/generated/gperf_class_files/FamilyMemberHistory.gperf"
    {"resourceType", 0x0, 0, -1},
#line 12 "./src/generated/gperf_class_files/FamilyMemberHistory.gperf"
    {"meta", 0x18, 2, -1},
#line 16 "./src/generated/gperf_class_files/FamilyMemberHistory.gperf"
    {"contained_count", 0x48, 6, -1},
#line 22 "./src/generated/gperf_class_files/FamilyMemberHistory.gperf"
    {"identifier_count", 0x78, 12, -1},
#line 33 "./src/generated/gperf_class_files/FamilyMemberHistory.gperf"
    {"relationship", 0xe8, 23, -1},
#line 19 "./src/generated/gperf_class_files/FamilyMemberHistory.gperf"
    {"extension", 0x60, 9, -1},
#line 53 "./src/generated/gperf_class_files/FamilyMemberHistory.gperf"
    {"condition_count", 0x170, 38, -1},
#line 29 "./src/generated/gperf_class_files/FamilyMemberHistory.gperf"
    {"dataAbsentReason", 0xb8, 19, -1},
#line 25 "./src/generated/gperf_class_files/FamilyMemberHistory.gperf"
    {"instantiatesCanonical", 0x90, 15, -1},
#line 21 "./src/generated/gperf_class_files/FamilyMemberHistory.gperf"
    {"modifierExtension", 0x70, 11, -1},
#line 27 "./src/generated/gperf_class_files/FamilyMemberHistory.gperf"
    {"instantiatesUri", 0xa0, 17, -1},
#line 28 "./src/generated/gperf_class_files/FamilyMemberHistory.gperf"
    {"status", 0xa8, 18, -1},
#line 24 "./src/generated/gperf_class_files/FamilyMemberHistory.gperf"
    {"instantiatesCanonical_count", 0x88, 14, -1},
#line 20 "./src/generated/gperf_class_files/FamilyMemberHistory.gperf"
    {"modifierExtension_count", 0x68, 10, -1},
#line 18 "./src/generated/gperf_class_files/FamilyMemberHistory.gperf"
    {"extension_count", 0x58, 8, -1},
#line 26 "./src/generated/gperf_class_files/FamilyMemberHistory.gperf"
    {"instantiatesUri_count", 0x98, 16, -1},
#line 41 "./src/generated/gperf_class_files/FamilyMemberHistory.gperf"
    {"estimatedAge", 0x128, 29, -1},
#line 13 "./src/generated/gperf_class_files/FamilyMemberHistory.gperf"
    {"implicitRules", 0x20, 3, -1}
  };

static const signed char lookup[] =
  {
    -1, -1, -1, -1,  0, -1, -1, -1,  1,  2,  3, -1,  4, -1,
     5,  6, -1,  7, -1,  8,  9, 10, 11, 12, 13, 14, -1, -1,
    15, 16, 17, 18, -1, 19, 20, 21, 22, -1, 23, 24, 25, 26,
    27, -1, 28, 29, 30, 31, -1, 32, 33, 34, -1, -1, -1, -1,
    35, 36, -1, -1, 37, 38, 39, 40, -1, 41, 42, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 43, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, 44
  };

const struct fhir_deserialize::MemberNameAndOffset *
FamilyMemberHistory_Gperf::FamilyMemberHistory_MemberLookup (register const char *str, register unsigned int len)
{
  if (len <= MAX_WORD_LENGTH && len >= MIN_WORD_LENGTH)
    {
      register int key = hash (str, len);

      if (key <= MAX_HASH_VALUE && key >= 0)
        {
          register int index = lookup[key];

          if (index >= 0)
            {
              register const char *s = word_array_FamilyMemberHistory[index].name;

              if (*str == *s && !strncmp (str + 1, s + 1, len - 1) && s[len] == '\0')
                return &word_array_FamilyMemberHistory[index];
            }
        }
    }
  return 0;
}