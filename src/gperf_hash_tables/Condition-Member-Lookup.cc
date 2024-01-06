/* C++ code produced by gperf version 3.0.1 */
/* Command-line: gperf.exe -t --output-file=src/gperf_hash_tables/Condition-Member-Lookup.cc -CGD ./gperf_class_files/Condition.gperf  */
/* Computed positions: -k'1,6,10' */

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

#line 8 "./gperf_class_files/Condition.gperf"
struct fhir_deserialize::MemberNameAndOffset;
enum
  {
    TOTAL_KEYWORDS = 43,
    MIN_WORD_LENGTH = 2,
    MAX_WORD_LENGTH = 23,
    MIN_HASH_VALUE = 4,
    MAX_HASH_VALUE = 86
  };

/* maximum key range = 83, duplicates = 0 */

class Condition_Gperf
{
private:
  static inline unsigned int hash (const char *str, unsigned int len);
public:
  static const struct fhir_deserialize::MemberNameAndOffset *Condition_MemberLookup (const char *str, unsigned int len);
};

inline unsigned int
Condition_Gperf::hash (register const char *str, register unsigned int len)
{
  static const unsigned char asso_values[] =
    {
      87, 87, 87, 87, 87, 87, 87, 87, 87, 87,
      87, 87, 87, 87, 87, 87, 87, 87, 87, 87,
      87, 87, 87, 87, 87, 87, 87, 87, 87, 87,
      87, 87, 87, 87, 87, 87, 87, 87, 87, 87,
      87, 87, 87, 87, 87, 87, 87, 87, 87, 87,
      87, 87, 87, 87, 87, 87, 87, 87, 87, 87,
      87, 87, 87, 87, 87, 10, 87, 87,  0, 87,
      87, 87, 87, 87, 87, 87, 87, 87, 87, 87,
       5, 87, 15, 10, 15, 87, 87, 87, 87, 87,
      87, 87, 87, 87, 87,  0, 87,  0, 20,  0,
       0,  5, 87, 87, 87, 20, 87, 87,  5, 35,
       5, 35, 87, 87,  0,  0, 30,  0,  0, 87,
       0,  5, 87, 87, 87, 87, 87, 87, 87, 87,
      87, 87, 87, 87, 87, 87, 87, 87, 87, 87,
      87, 87, 87, 87, 87, 87, 87, 87, 87, 87,
      87, 87, 87, 87, 87, 87, 87, 87, 87, 87,
      87, 87, 87, 87, 87, 87, 87, 87, 87, 87,
      87, 87, 87, 87, 87, 87, 87, 87, 87, 87,
      87, 87, 87, 87, 87, 87, 87, 87, 87, 87,
      87, 87, 87, 87, 87, 87, 87, 87, 87, 87,
      87, 87, 87, 87, 87, 87, 87, 87, 87, 87,
      87, 87, 87, 87, 87, 87, 87, 87, 87, 87,
      87, 87, 87, 87, 87, 87, 87, 87, 87, 87,
      87, 87, 87, 87, 87, 87, 87, 87, 87, 87,
      87, 87, 87, 87, 87, 87, 87, 87, 87, 87,
      87, 87, 87, 87, 87, 87
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
        hval += asso_values[(unsigned char)str[5]];
      /*FALLTHROUGH*/
      case 5:
      case 4:
      case 3:
      case 2:
      case 1:
        hval += asso_values[(unsigned char)str[0]];
        break;
    }
  return hval;
}

static const struct fhir_deserialize::MemberNameAndOffset word_array_Condition[] =
  {
#line 29 "./gperf_class_files/Condition.gperf"
    {"code", 0xb0, 19, -1},
#line 48 "./gperf_class_files/Condition.gperf"
    {"stage", 0x130, 32, -1},
#line 32 "./gperf_class_files/Condition.gperf"
    {"subject", 0xc8, 22, -1},
#line 45 "./gperf_class_files/Condition.gperf"
    {"recorder", 0x118, 29, -1},
#line 52 "./gperf_class_files/Condition.gperf"
    {"note", 0x150, 36, -1},
#line 44 "./gperf_class_files/Condition.gperf"
    {"recordedDate", 0x108, 28, -1},
#line 14 "./gperf_class_files/Condition.gperf"
    {"language", 0x30, 4, -1},
#line 19 "./gperf_class_files/Condition.gperf"
    {"extension", 0x60, 9, -1},
#line 47 "./gperf_class_files/Condition.gperf"
    {"stage_count", 0x128, 31, -1},
#line 10 "./gperf_class_files/Condition.gperf"
    {"resourceType", 0x0, 0, -1},
#line 50 "./gperf_class_files/Condition.gperf"
    {"evidence", 0x140, 34, -1},
#line 33 "./gperf_class_files/Condition.gperf"
    {"encounter", 0xd0, 23, -1},
#line 18 "./gperf_class_files/Condition.gperf"
    {"extension_count", 0x58, 8, -1},
#line 11 "./gperf_class_files/Condition.gperf"
    {"id", 0x8, 1, -1},
#line 49 "./gperf_class_files/Condition.gperf"
    {"evidence_count", 0x138, 33, -1},
#line 28 "./gperf_class_files/Condition.gperf"
    {"severity", 0xa8, 18, -1},
#line 17 "./gperf_class_files/Condition.gperf"
    {"contained", 0x50, 7, -1},
#line 13 "./gperf_class_files/Condition.gperf"
    {"implicitRules", 0x20, 3, -1},
#line 15 "./gperf_class_files/Condition.gperf"
    {"text", 0x40, 5, -1},
#line 16 "./gperf_class_files/Condition.gperf"
    {"contained_count", 0x48, 6, -1},
#line 46 "./gperf_class_files/Condition.gperf"
    {"asserter", 0x120, 30, -1},
#line 12 "./gperf_class_files/Condition.gperf"
    {"meta", 0x18, 2, -1},
#line 27 "./gperf_class_files/Condition.gperf"
    {"category", 0xa0, 17, -1},
#line 24 "./gperf_class_files/Condition.gperf"
    {"clinicalStatus", 0x88, 14, -1},
#line 51 "./gperf_class_files/Condition.gperf"
    {"note_count", 0x148, 35, -1},
#line 31 "./gperf_class_files/Condition.gperf"
    {"bodySite", 0xc0, 21, -1},
#line 26 "./gperf_class_files/Condition.gperf"
    {"category_count", 0x98, 16, -1},
#line 23 "./gperf_class_files/Condition.gperf"
    {"identifier", 0x80, 13, -1},
#line 39 "./gperf_class_files/Condition.gperf"
    {"abatementDateTime", 0xf8, 27, 0},
#line 35 "./gperf_class_files/Condition.gperf"
    {"onsetAge", 0xe0, 25, 1},
#line 30 "./gperf_class_files/Condition.gperf"
    {"bodySite_count", 0xb8, 20, -1},
#line 41 "./gperf_class_files/Condition.gperf"
    {"abatementPeriod", 0xf8, 27, 2},
#line 22 "./gperf_class_files/Condition.gperf"
    {"identifier_count", 0x78, 12, -1},
#line 40 "./gperf_class_files/Condition.gperf"
    {"abatementAge", 0xf8, 27, 1},
#line 25 "./gperf_class_files/Condition.gperf"
    {"verificationStatus", 0x90, 15, -1},
#line 43 "./gperf_class_files/Condition.gperf"
    {"abatementString", 0xf8, 27, 4},
#line 38 "./gperf_class_files/Condition.gperf"
    {"onsetString", 0xe0, 25, 4},
#line 34 "./gperf_class_files/Condition.gperf"
    {"onsetDateTime", 0xe0, 25, 0},
#line 42 "./gperf_class_files/Condition.gperf"
    {"abatementRange", 0xf8, 27, 3},
#line 37 "./gperf_class_files/Condition.gperf"
    {"onsetRange", 0xe0, 25, 3},
#line 21 "./gperf_class_files/Condition.gperf"
    {"modifierExtension", 0x70, 11, -1},
#line 20 "./gperf_class_files/Condition.gperf"
    {"modifierExtension_count", 0x68, 10, -1},
#line 36 "./gperf_class_files/Condition.gperf"
    {"onsetPeriod", 0xe0, 25, 2}
  };

static const signed char lookup[] =
  {
    -1, -1, -1, -1,  0,  1, -1,  2,  3,  4, -1, -1,  5,  6,
     7, -1,  8,  9, 10, 11, 12, -1, 13, -1, 14, -1, -1, -1,
    15, 16, -1, -1, -1, 17, 18, 19, -1, -1, 20, 21, -1, -1,
    -1, 22, 23, 24, -1, -1, 25, 26, 27, -1, 28, 29, 30, 31,
    32, 33, 34, -1, 35, 36, -1, 37, 38, 39, -1, -1, -1, -1,
    -1, -1, 40, -1, -1, -1, -1, -1, 41, -1, -1, -1, -1, -1,
    -1, -1, 42
  };

const struct fhir_deserialize::MemberNameAndOffset *
Condition_Gperf::Condition_MemberLookup (register const char *str, register unsigned int len)
{
  if (len <= MAX_WORD_LENGTH && len >= MIN_WORD_LENGTH)
    {
      register int key = hash (str, len);

      if (key <= MAX_HASH_VALUE && key >= 0)
        {
          register int index = lookup[key];

          if (index >= 0)
            {
              register const char *s = word_array_Condition[index].name;

              if (*str == *s && !strncmp (str + 1, s + 1, len - 1) && s[len] == '\0')
                return &word_array_Condition[index];
            }
        }
    }
  return 0;
}