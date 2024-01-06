/* C++ code produced by gperf version 3.0.1 */
/* Command-line: gperf.exe -t --output-file=src/gperf_hash_tables/ChargeItemDefinition-Member-Lookup.cc -CGD ./gperf_class_files/ChargeItemDefinition.gperf  */
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

#line 8 "./gperf_class_files/ChargeItemDefinition.gperf"
struct fhir_deserialize::MemberNameAndOffset;
enum
  {
    TOTAL_KEYWORDS = 45,
    MIN_WORD_LENGTH = 2,
    MAX_WORD_LENGTH = 23,
    MIN_HASH_VALUE = 2,
    MAX_HASH_VALUE = 83
  };

/* maximum key range = 82, duplicates = 0 */

class ChargeItemDefinition_Gperf
{
private:
  static inline unsigned int hash (const char *str, unsigned int len);
public:
  static const struct fhir_deserialize::MemberNameAndOffset *ChargeItemDefinition_MemberLookup (const char *str, unsigned int len);
};

inline unsigned int
ChargeItemDefinition_Gperf::hash (register const char *str, register unsigned int len)
{
  static const unsigned char asso_values[] =
    {
      84, 84, 84, 84, 84, 84, 84, 84, 84, 84,
      84, 84, 84, 84, 84, 84, 84, 84, 84, 84,
      84, 84, 84, 84, 84, 84, 84, 84, 84, 84,
      84, 84, 84, 84, 84, 84, 84, 84, 84, 84,
      84, 84, 84, 84, 84, 84, 84, 84, 84, 84,
      84, 84, 84, 84, 84, 84, 84, 84, 84, 84,
      84, 84, 84, 84, 84, 84, 84, 84, 84, 84,
      84, 84, 84, 84, 84, 84, 84, 84, 84, 84,
      84, 84, 84, 84, 84, 84, 84, 84, 84, 84,
      84, 84, 84, 84, 84, 84, 84, 45, 16, 30,
      15,  5,  0, 84, 84,  0, 15, 84, 60,  0,
      15, 35,  5, 84,  0,  0, 20, 10,  0, 84,
      40, 84, 84, 84, 84, 84, 84, 84, 84, 84,
      84, 84, 84, 84, 84, 84, 84, 84, 84, 84,
      84, 84, 84, 84, 84, 84, 84, 84, 84, 84,
      84, 84, 84, 84, 84, 84, 84, 84, 84, 84,
      84, 84, 84, 84, 84, 84, 84, 84, 84, 84,
      84, 84, 84, 84, 84, 84, 84, 84, 84, 84,
      84, 84, 84, 84, 84, 84, 84, 84, 84, 84,
      84, 84, 84, 84, 84, 84, 84, 84, 84, 84,
      84, 84, 84, 84, 84, 84, 84, 84, 84, 84,
      84, 84, 84, 84, 84, 84, 84, 84, 84, 84,
      84, 84, 84, 84, 84, 84, 84, 84, 84, 84,
      84, 84, 84, 84, 84, 84, 84, 84, 84, 84,
      84, 84, 84, 84, 84, 84, 84, 84, 84, 84,
      84, 84, 84, 84, 84, 84
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

static const struct fhir_deserialize::MemberNameAndOffset word_array_ChargeItemDefinition[] =
  {
#line 11 "./gperf_class_files/ChargeItemDefinition.gperf"
    {"id", 0x8, 1, -1},
#line 25 "./gperf_class_files/ChargeItemDefinition.gperf"
    {"version", 0x98, 15, -1},
#line 50 "./gperf_class_files/ChargeItemDefinition.gperf"
    {"instance", 0x1a8, 40, -1},
#line 30 "./gperf_class_files/ChargeItemDefinition.gperf"
    {"partOf", 0xd0, 20, -1},
#line 10 "./gperf_class_files/ChargeItemDefinition.gperf"
    {"resourceType", 0x0, 0, -1},
#line 32 "./gperf_class_files/ChargeItemDefinition.gperf"
    {"replaces", 0xe0, 22, -1},
#line 49 "./gperf_class_files/ChargeItemDefinition.gperf"
    {"instance_count", 0x1a0, 39, -1},
#line 24 "./gperf_class_files/ChargeItemDefinition.gperf"
    {"identifier", 0x90, 14, -1},
#line 29 "./gperf_class_files/ChargeItemDefinition.gperf"
    {"partOf_count", 0xc8, 19, -1},
#line 13 "./gperf_class_files/ChargeItemDefinition.gperf"
    {"implicitRules", 0x20, 3, -1},
#line 31 "./gperf_class_files/ChargeItemDefinition.gperf"
    {"replaces_count", 0xd8, 21, -1},
#line 47 "./gperf_class_files/ChargeItemDefinition.gperf"
    {"effectivePeriod", 0x190, 37, -1},
#line 23 "./gperf_class_files/ChargeItemDefinition.gperf"
    {"identifier_count", 0x88, 13, -1},
#line 34 "./gperf_class_files/ChargeItemDefinition.gperf"
    {"experimental", 0xf8, 24, -1},
#line 12 "./gperf_class_files/ChargeItemDefinition.gperf"
    {"meta", 0x18, 2, -1},
#line 41 "./gperf_class_files/ChargeItemDefinition.gperf"
    {"useContext", 0x148, 31, -1},
#line 39 "./gperf_class_files/ChargeItemDefinition.gperf"
    {"description", 0x130, 29, -1},
#line 43 "./gperf_class_files/ChargeItemDefinition.gperf"
    {"jurisdiction", 0x158, 33, -1},
#line 28 "./gperf_class_files/ChargeItemDefinition.gperf"
    {"derivedFromUri", 0xc0, 18, -1},
#line 36 "./gperf_class_files/ChargeItemDefinition.gperf"
    {"publisher", 0x110, 26, -1},
#line 40 "./gperf_class_files/ChargeItemDefinition.gperf"
    {"useContext_count", 0x140, 30, -1},
#line 21 "./gperf_class_files/ChargeItemDefinition.gperf"
    {"modifierExtension", 0x70, 11, -1},
#line 42 "./gperf_class_files/ChargeItemDefinition.gperf"
    {"jurisdiction_count", 0x150, 32, -1},
#line 19 "./gperf_class_files/ChargeItemDefinition.gperf"
    {"extension", 0x60, 9, -1},
#line 27 "./gperf_class_files/ChargeItemDefinition.gperf"
    {"derivedFromUri_count", 0xb8, 17, -1},
#line 20 "./gperf_class_files/ChargeItemDefinition.gperf"
    {"modifierExtension_count", 0x68, 10, -1},
#line 35 "./gperf_class_files/ChargeItemDefinition.gperf"
    {"date", 0x100, 25, -1},
#line 18 "./gperf_class_files/ChargeItemDefinition.gperf"
    {"extension_count", 0x58, 8, -1},
#line 44 "./gperf_class_files/ChargeItemDefinition.gperf"
    {"copyright", 0x160, 34, -1},
#line 26 "./gperf_class_files/ChargeItemDefinition.gperf"
    {"title", 0xa8, 16, -1},
#line 48 "./gperf_class_files/ChargeItemDefinition.gperf"
    {"code", 0x198, 38, -1},
#line 33 "./gperf_class_files/ChargeItemDefinition.gperf"
    {"status", 0xe8, 23, -1},
#line 38 "./gperf_class_files/ChargeItemDefinition.gperf"
    {"contact", 0x128, 28, -1},
#line 54 "./gperf_class_files/ChargeItemDefinition.gperf"
    {"propertyGroup", 0x1c8, 44, -1},
#line 17 "./gperf_class_files/ChargeItemDefinition.gperf"
    {"contained", 0x50, 7, -1},
#line 37 "./gperf_class_files/ChargeItemDefinition.gperf"
    {"contact_count", 0x120, 27, -1},
#line 53 "./gperf_class_files/ChargeItemDefinition.gperf"
    {"propertyGroup_count", 0x1c0, 43, -1},
#line 16 "./gperf_class_files/ChargeItemDefinition.gperf"
    {"contained_count", 0x48, 6, -1},
#line 45 "./gperf_class_files/ChargeItemDefinition.gperf"
    {"approvalDate", 0x170, 35, -1},
#line 52 "./gperf_class_files/ChargeItemDefinition.gperf"
    {"applicability", 0x1b8, 42, -1},
#line 15 "./gperf_class_files/ChargeItemDefinition.gperf"
    {"text", 0x40, 5, -1},
#line 51 "./gperf_class_files/ChargeItemDefinition.gperf"
    {"applicability_count", 0x1b0, 41, -1},
#line 22 "./gperf_class_files/ChargeItemDefinition.gperf"
    {"url", 0x78, 12, -1},
#line 46 "./gperf_class_files/ChargeItemDefinition.gperf"
    {"lastReviewDate", 0x180, 36, -1},
#line 14 "./gperf_class_files/ChargeItemDefinition.gperf"
    {"language", 0x30, 4, -1}
  };

static const signed char lookup[] =
  {
    -1, -1,  0, -1, -1, -1, -1,  1,  2, -1, -1,  3,  4,  5,
     6,  7, -1,  8,  9, 10, 11, 12, 13, -1, 14, 15, 16, 17,
    -1, 18, 19, 20, 21, 22, 23, 24, -1, -1, 25, 26, 27, -1,
    -1, -1, 28, 29, -1, -1, -1, 30, -1, 31, 32, 33, 34, -1,
    -1, -1, 35, 36, 37, -1, 38, 39, 40, -1, -1, -1, -1, 41,
    -1, -1, -1, 42, 43, -1, -1, -1, -1, -1, -1, -1, -1, 44
  };

const struct fhir_deserialize::MemberNameAndOffset *
ChargeItemDefinition_Gperf::ChargeItemDefinition_MemberLookup (register const char *str, register unsigned int len)
{
  if (len <= MAX_WORD_LENGTH && len >= MIN_WORD_LENGTH)
    {
      register int key = hash (str, len);

      if (key <= MAX_HASH_VALUE && key >= 0)
        {
          register int index = lookup[key];

          if (index >= 0)
            {
              register const char *s = word_array_ChargeItemDefinition[index].name;

              if (*str == *s && !strncmp (str + 1, s + 1, len - 1) && s[len] == '\0')
                return &word_array_ChargeItemDefinition[index];
            }
        }
    }
  return 0;
}
