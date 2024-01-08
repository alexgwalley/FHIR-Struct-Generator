/* C++ code produced by gperf version 3.0.1 */
/* Command-line: gperf.exe -t --output-file=src/generated/gperf_hash_tables/TerminologyCapabilities-Member-Lookup.cc -CGD ./src/generated/gperf_class_files/TerminologyCapabilities.gperf  */
/* Computed positions: -k'1,3,6' */

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

#line 8 "./src/generated/gperf_class_files/TerminologyCapabilities.gperf"
struct fhir_deserialize::MemberNameAndOffset;
enum
  {
    TOTAL_KEYWORDS = 40,
    MIN_WORD_LENGTH = 2,
    MAX_WORD_LENGTH = 23,
    MIN_HASH_VALUE = 2,
    MAX_HASH_VALUE = 61
  };

/* maximum key range = 60, duplicates = 0 */

class TerminologyCapabilities_Gperf
{
private:
  static inline unsigned int hash (const char *str, unsigned int len);
public:
  static const struct fhir_deserialize::MemberNameAndOffset *TerminologyCapabilities_MemberLookup (const char *str, unsigned int len);
};

inline unsigned int
TerminologyCapabilities_Gperf::hash (register const char *str, register unsigned int len)
{
  static const unsigned char asso_values[] =
    {
      62, 62, 62, 62, 62, 62, 62, 62, 62, 62,
      62, 62, 62, 62, 62, 62, 62, 62, 62, 62,
      62, 62, 62, 62, 62, 62, 62, 62, 62, 62,
      62, 62, 62, 62, 62, 62, 62, 62, 62, 62,
      62, 62, 62, 62, 62, 62, 62, 62, 62, 62,
      62, 62, 62, 62, 62, 62, 62, 62, 62, 62,
      62, 62, 62, 62, 62, 62, 62, 62, 62, 62,
      62, 62, 62, 62, 62, 62, 62, 62, 62, 62,
      62, 62, 62, 62, 62, 62, 62, 62, 62, 62,
      62, 62, 62, 62, 62, 62, 62,  0, 25,  0,
      15,  5,  0, 62, 62,  0, 25, 40, 15, 10,
       5,  0,  0, 62,  0, 25, 15,  5, 20, 62,
      25, 30, 62, 62, 62, 62, 62, 62, 62, 62,
      62, 62, 62, 62, 62, 62, 62, 62, 62, 62,
      62, 62, 62, 62, 62, 62, 62, 62, 62, 62,
      62, 62, 62, 62, 62, 62, 62, 62, 62, 62,
      62, 62, 62, 62, 62, 62, 62, 62, 62, 62,
      62, 62, 62, 62, 62, 62, 62, 62, 62, 62,
      62, 62, 62, 62, 62, 62, 62, 62, 62, 62,
      62, 62, 62, 62, 62, 62, 62, 62, 62, 62,
      62, 62, 62, 62, 62, 62, 62, 62, 62, 62,
      62, 62, 62, 62, 62, 62, 62, 62, 62, 62,
      62, 62, 62, 62, 62, 62, 62, 62, 62, 62,
      62, 62, 62, 62, 62, 62, 62, 62, 62, 62,
      62, 62, 62, 62, 62, 62, 62, 62, 62, 62,
      62, 62, 62, 62, 62, 62
    };
  register int hval = len;

  switch (hval)
    {
      default:
        hval += asso_values[(unsigned char)str[5]];
      /*FALLTHROUGH*/
      case 5:
      case 4:
      case 3:
        hval += asso_values[(unsigned char)str[2]];
      /*FALLTHROUGH*/
      case 2:
      case 1:
        hval += asso_values[(unsigned char)str[0]];
        break;
    }
  return hval;
}

static const struct fhir_deserialize::MemberNameAndOffset word_array_TerminologyCapabilities[] =
  {
#line 11 "./src/generated/gperf_class_files/TerminologyCapabilities.gperf"
    {"id", 0x8, 1, -1},
#line 49 "./src/generated/gperf_class_files/TerminologyCapabilities.gperf"
    {"closure", 0x1b0, 39, -1},
#line 38 "./src/generated/gperf_class_files/TerminologyCapabilities.gperf"
    {"copyright", 0x140, 28, -1},
#line 31 "./src/generated/gperf_class_files/TerminologyCapabilities.gperf"
    {"contact", 0xf8, 21, -1},
#line 13 "./src/generated/gperf_class_files/TerminologyCapabilities.gperf"
    {"implicitRules", 0x20, 3, -1},
#line 17 "./src/generated/gperf_class_files/TerminologyCapabilities.gperf"
    {"contained", 0x50, 7, -1},
#line 27 "./src/generated/gperf_class_files/TerminologyCapabilities.gperf"
    {"experimental", 0xc8, 17, -1},
#line 30 "./src/generated/gperf_class_files/TerminologyCapabilities.gperf"
    {"contact_count", 0xf0, 20, -1},
#line 24 "./src/generated/gperf_class_files/TerminologyCapabilities.gperf"
    {"name", 0x98, 14, -1},
#line 16 "./src/generated/gperf_class_files/TerminologyCapabilities.gperf"
    {"contained_count", 0x48, 6, -1},
#line 22 "./src/generated/gperf_class_files/TerminologyCapabilities.gperf"
    {"url", 0x78, 12, -1},
#line 41 "./src/generated/gperf_class_files/TerminologyCapabilities.gperf"
    {"implementation", 0x168, 31, -1},
#line 34 "./src/generated/gperf_class_files/TerminologyCapabilities.gperf"
    {"useContext", 0x118, 24, -1},
#line 23 "./src/generated/gperf_class_files/TerminologyCapabilities.gperf"
    {"version", 0x88, 13, -1},
#line 14 "./src/generated/gperf_class_files/TerminologyCapabilities.gperf"
    {"language", 0x30, 4, -1},
#line 12 "./src/generated/gperf_class_files/TerminologyCapabilities.gperf"
    {"meta", 0x18, 2, -1},
#line 46 "./src/generated/gperf_class_files/TerminologyCapabilities.gperf"
    {"codeSearch", 0x190, 36, -1},
#line 33 "./src/generated/gperf_class_files/TerminologyCapabilities.gperf"
    {"useContext_count", 0x110, 23, -1},
#line 37 "./src/generated/gperf_class_files/TerminologyCapabilities.gperf"
    {"purpose", 0x130, 27, -1},
#line 40 "./src/generated/gperf_class_files/TerminologyCapabilities.gperf"
    {"software", 0x160, 30, -1},
#line 28 "./src/generated/gperf_class_files/TerminologyCapabilities.gperf"
    {"date", 0xd0, 18, -1},
#line 25 "./src/generated/gperf_class_files/TerminologyCapabilities.gperf"
    {"title", 0xa8, 15, -1},
#line 10 "./src/generated/gperf_class_files/TerminologyCapabilities.gperf"
    {"resourceType", 0x0, 0, -1},
#line 45 "./src/generated/gperf_class_files/TerminologyCapabilities.gperf"
    {"expansion", 0x188, 35, -1},
#line 42 "./src/generated/gperf_class_files/TerminologyCapabilities.gperf"
    {"lockedDate", 0x170, 32, -1},
#line 48 "./src/generated/gperf_class_files/TerminologyCapabilities.gperf"
    {"translation", 0x1a8, 38, -1},
#line 21 "./src/generated/gperf_class_files/TerminologyCapabilities.gperf"
    {"modifierExtension", 0x70, 11, -1},
#line 15 "./src/generated/gperf_class_files/TerminologyCapabilities.gperf"
    {"text", 0x40, 5, -1},
#line 47 "./src/generated/gperf_class_files/TerminologyCapabilities.gperf"
    {"validateCode", 0x1a0, 37, -1},
#line 20 "./src/generated/gperf_class_files/TerminologyCapabilities.gperf"
    {"modifierExtension_count", 0x68, 10, -1},
#line 39 "./src/generated/gperf_class_files/TerminologyCapabilities.gperf"
    {"kind", 0x150, 29, -1},
#line 32 "./src/generated/gperf_class_files/TerminologyCapabilities.gperf"
    {"description", 0x100, 22, -1},
#line 36 "./src/generated/gperf_class_files/TerminologyCapabilities.gperf"
    {"jurisdiction", 0x128, 26, -1},
#line 19 "./src/generated/gperf_class_files/TerminologyCapabilities.gperf"
    {"extension", 0x60, 9, -1},
#line 44 "./src/generated/gperf_class_files/TerminologyCapabilities.gperf"
    {"codeSystem", 0x180, 34, -1},
#line 26 "./src/generated/gperf_class_files/TerminologyCapabilities.gperf"
    {"status", 0xb8, 16, -1},
#line 35 "./src/generated/gperf_class_files/TerminologyCapabilities.gperf"
    {"jurisdiction_count", 0x120, 25, -1},
#line 29 "./src/generated/gperf_class_files/TerminologyCapabilities.gperf"
    {"publisher", 0xe0, 19, -1},
#line 18 "./src/generated/gperf_class_files/TerminologyCapabilities.gperf"
    {"extension_count", 0x58, 8, -1},
#line 43 "./src/generated/gperf_class_files/TerminologyCapabilities.gperf"
    {"codeSystem_count", 0x178, 33, -1}
  };

static const signed char lookup[] =
  {
    -1, -1,  0, -1, -1, -1, -1,  1, -1,  2, -1, -1,  3,  4,
     5, -1, -1,  6,  7,  8,  9, -1, -1, 10, 11, 12, -1, 13,
    14, 15, 16, 17, 18, 19, 20, 21, -1, 22, -1, 23, 24, 25,
    26, -1, 27, -1, -1, 28, 29, 30, -1, 31, 32, -1, 33, 34,
    35, -1, 36, 37, 38, 39
  };

const struct fhir_deserialize::MemberNameAndOffset *
TerminologyCapabilities_Gperf::TerminologyCapabilities_MemberLookup (register const char *str, register unsigned int len)
{
  if (len <= MAX_WORD_LENGTH && len >= MIN_WORD_LENGTH)
    {
      register int key = hash (str, len);

      if (key <= MAX_HASH_VALUE && key >= 0)
        {
          register int index = lookup[key];

          if (index >= 0)
            {
              register const char *s = word_array_TerminologyCapabilities[index].name;

              if (*str == *s && !strncmp (str + 1, s + 1, len - 1) && s[len] == '\0')
                return &word_array_TerminologyCapabilities[index];
            }
        }
    }
  return 0;
}
