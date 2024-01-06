/* C++ code produced by gperf version 3.0.1 */
/* Command-line: gperf.exe -t --output-file=src/gperf_hash_tables/CapabilityStatement-Member-Lookup.cc -CGD ./gperf_class_files/CapabilityStatement.gperf  */
/* Computed positions: -k'1,4' */

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

#line 8 "./gperf_class_files/CapabilityStatement.gperf"
struct fhir_deserialize::MemberNameAndOffset;
enum
  {
    TOTAL_KEYWORDS = 49,
    MIN_WORD_LENGTH = 2,
    MAX_WORD_LENGTH = 25,
    MIN_HASH_VALUE = 2,
    MAX_HASH_VALUE = 71
  };

/* maximum key range = 70, duplicates = 0 */

class CapabilityStatement_Gperf
{
private:
  static inline unsigned int hash (const char *str, unsigned int len);
public:
  static const struct fhir_deserialize::MemberNameAndOffset *CapabilityStatement_MemberLookup (const char *str, unsigned int len);
};

inline unsigned int
CapabilityStatement_Gperf::hash (register const char *str, register unsigned int len)
{
  static const unsigned char asso_values[] =
    {
      72, 72, 72, 72, 72, 72, 72, 72, 72, 72,
      72, 72, 72, 72, 72, 72, 72, 72, 72, 72,
      72, 72, 72, 72, 72, 72, 72, 72, 72, 72,
      72, 72, 72, 72, 72, 72, 72, 72, 72, 72,
      72, 72, 72, 72, 72, 72, 72, 72, 72, 72,
      72, 72, 72, 72, 72, 72, 72, 72, 72, 72,
      72, 72, 72, 72, 72, 72, 72, 15, 72, 72,
      72, 72, 72, 72, 72, 72, 72, 72, 72, 72,
      72, 72, 72, 72, 72, 72, 72, 72, 72, 72,
      72, 72, 72, 72, 72, 72, 72, 45, 72, 15,
      15, 15, 20, 30, 72,  0, 45, 45,  0, 20,
      35, 10,  0, 72, 40,  0,  0, 30, 20, 72,
      72, 25, 72, 72, 72, 72, 72, 72, 72, 72,
      72, 72, 72, 72, 72, 72, 72, 72, 72, 72,
      72, 72, 72, 72, 72, 72, 72, 72, 72, 72,
      72, 72, 72, 72, 72, 72, 72, 72, 72, 72,
      72, 72, 72, 72, 72, 72, 72, 72, 72, 72,
      72, 72, 72, 72, 72, 72, 72, 72, 72, 72,
      72, 72, 72, 72, 72, 72, 72, 72, 72, 72,
      72, 72, 72, 72, 72, 72, 72, 72, 72, 72,
      72, 72, 72, 72, 72, 72, 72, 72, 72, 72,
      72, 72, 72, 72, 72, 72, 72, 72, 72, 72,
      72, 72, 72, 72, 72, 72, 72, 72, 72, 72,
      72, 72, 72, 72, 72, 72, 72, 72, 72, 72,
      72, 72, 72, 72, 72, 72, 72, 72, 72, 72,
      72, 72, 72, 72, 72, 72
    };
  register int hval = len;

  switch (hval)
    {
      default:
        hval += asso_values[(unsigned char)str[3]];
      /*FALLTHROUGH*/
      case 3:
      case 2:
      case 1:
        hval += asso_values[(unsigned char)str[0]];
        break;
    }
  return hval;
}

static const struct fhir_deserialize::MemberNameAndOffset word_array_CapabilityStatement[] =
  {
#line 11 "./gperf_class_files/CapabilityStatement.gperf"
    {"id", 0x8, 1, -1},
#line 15 "./gperf_class_files/CapabilityStatement.gperf"
    {"text", 0x40, 5, -1},
#line 25 "./gperf_class_files/CapabilityStatement.gperf"
    {"title", 0xa8, 15, -1},
#line 26 "./gperf_class_files/CapabilityStatement.gperf"
    {"status", 0xb8, 16, -1},
#line 37 "./gperf_class_files/CapabilityStatement.gperf"
    {"purpose", 0x130, 27, -1},
#line 44 "./gperf_class_files/CapabilityStatement.gperf"
    {"software", 0x180, 34, -1},
#line 29 "./gperf_class_files/CapabilityStatement.gperf"
    {"publisher", 0xe0, 19, -1},
#line 41 "./gperf_class_files/CapabilityStatement.gperf"
    {"instantiates", 0x168, 31, -1},
#line 13 "./gperf_class_files/CapabilityStatement.gperf"
    {"implicitRules", 0x20, 3, -1},
#line 45 "./gperf_class_files/CapabilityStatement.gperf"
    {"implementation", 0x188, 35, -1},
#line 43 "./gperf_class_files/CapabilityStatement.gperf"
    {"imports", 0x178, 33, -1},
#line 40 "./gperf_class_files/CapabilityStatement.gperf"
    {"instantiates_count", 0x160, 30, -1},
#line 52 "./gperf_class_files/CapabilityStatement.gperf"
    {"implementationGuide", 0x1c8, 42, -1},
#line 31 "./gperf_class_files/CapabilityStatement.gperf"
    {"contact", 0xf8, 21, -1},
#line 42 "./gperf_class_files/CapabilityStatement.gperf"
    {"imports_count", 0x170, 32, -1},
#line 17 "./gperf_class_files/CapabilityStatement.gperf"
    {"contained", 0x50, 7, -1},
#line 51 "./gperf_class_files/CapabilityStatement.gperf"
    {"implementationGuide_count", 0x1c0, 41, -1},
#line 50 "./gperf_class_files/CapabilityStatement.gperf"
    {"patchFormat", 0x1b8, 40, -1},
#line 23 "./gperf_class_files/CapabilityStatement.gperf"
    {"version", 0x88, 13, -1},
#line 30 "./gperf_class_files/CapabilityStatement.gperf"
    {"contact_count", 0xf0, 20, -1},
#line 56 "./gperf_class_files/CapabilityStatement.gperf"
    {"messaging", 0x1e8, 46, -1},
#line 16 "./gperf_class_files/CapabilityStatement.gperf"
    {"contained_count", 0x48, 6, -1},
#line 49 "./gperf_class_files/CapabilityStatement.gperf"
    {"patchFormat_count", 0x1b0, 39, -1},
#line 22 "./gperf_class_files/CapabilityStatement.gperf"
    {"url", 0x78, 12, -1},
#line 28 "./gperf_class_files/CapabilityStatement.gperf"
    {"date", 0xd0, 18, -1},
#line 55 "./gperf_class_files/CapabilityStatement.gperf"
    {"messaging_count", 0x1e0, 45, -1},
#line 21 "./gperf_class_files/CapabilityStatement.gperf"
    {"modifierExtension", 0x70, 11, -1},
#line 14 "./gperf_class_files/CapabilityStatement.gperf"
    {"language", 0x30, 4, -1},
#line 19 "./gperf_class_files/CapabilityStatement.gperf"
    {"extension", 0x60, 9, -1},
#line 32 "./gperf_class_files/CapabilityStatement.gperf"
    {"description", 0x100, 22, -1},
#line 27 "./gperf_class_files/CapabilityStatement.gperf"
    {"experimental", 0xc8, 17, -1},
#line 20 "./gperf_class_files/CapabilityStatement.gperf"
    {"modifierExtension_count", 0x68, 10, -1},
#line 54 "./gperf_class_files/CapabilityStatement.gperf"
    {"rest", 0x1d8, 44, -1},
#line 18 "./gperf_class_files/CapabilityStatement.gperf"
    {"extension_count", 0x58, 8, -1},
#line 48 "./gperf_class_files/CapabilityStatement.gperf"
    {"format", 0x1a8, 38, -1},
#line 38 "./gperf_class_files/CapabilityStatement.gperf"
    {"copyright", 0x140, 28, -1},
#line 53 "./gperf_class_files/CapabilityStatement.gperf"
    {"rest_count", 0x1d0, 43, -1},
#line 47 "./gperf_class_files/CapabilityStatement.gperf"
    {"format_count", 0x1a0, 37, -1},
#line 58 "./gperf_class_files/CapabilityStatement.gperf"
    {"document", 0x1f8, 48, -1},
#line 24 "./gperf_class_files/CapabilityStatement.gperf"
    {"name", 0x98, 14, -1},
#line 34 "./gperf_class_files/CapabilityStatement.gperf"
    {"useContext", 0x118, 24, -1},
#line 36 "./gperf_class_files/CapabilityStatement.gperf"
    {"jurisdiction", 0x128, 26, -1},
#line 57 "./gperf_class_files/CapabilityStatement.gperf"
    {"document_count", 0x1f0, 47, -1},
#line 33 "./gperf_class_files/CapabilityStatement.gperf"
    {"useContext_count", 0x110, 23, -1},
#line 10 "./gperf_class_files/CapabilityStatement.gperf"
    {"resourceType", 0x0, 0, -1},
#line 35 "./gperf_class_files/CapabilityStatement.gperf"
    {"jurisdiction_count", 0x120, 25, -1},
#line 39 "./gperf_class_files/CapabilityStatement.gperf"
    {"kind", 0x150, 29, -1},
#line 12 "./gperf_class_files/CapabilityStatement.gperf"
    {"meta", 0x18, 2, -1},
#line 46 "./gperf_class_files/CapabilityStatement.gperf"
    {"fhirVersion", 0x190, 36, -1}
  };

static const signed char lookup[] =
  {
    -1, -1,  0, -1,  1,  2,  3,  4,  5,  6, -1, -1,  7,  8,
     9, -1, -1, 10, 11, 12, -1, -1, 13, 14, 15, 16, 17, 18,
    19, 20, 21, -1, 22, 23, 24, 25, -1, 26, 27, 28, -1, 29,
    30, 31, 32, 33, 34, -1, -1, 35, 36, -1, 37, 38, 39, 40,
    -1, 41, -1, 42, -1, 43, 44, 45, 46, -1, -1, -1, -1, 47,
    -1, 48
  };

const struct fhir_deserialize::MemberNameAndOffset *
CapabilityStatement_Gperf::CapabilityStatement_MemberLookup (register const char *str, register unsigned int len)
{
  if (len <= MAX_WORD_LENGTH && len >= MIN_WORD_LENGTH)
    {
      register int key = hash (str, len);

      if (key <= MAX_HASH_VALUE && key >= 0)
        {
          register int index = lookup[key];

          if (index >= 0)
            {
              register const char *s = word_array_CapabilityStatement[index].name;

              if (*str == *s && !strncmp (str + 1, s + 1, len - 1) && s[len] == '\0')
                return &word_array_CapabilityStatement[index];
            }
        }
    }
  return 0;
}
