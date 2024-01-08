/* C++ code produced by gperf version 3.0.1 */
/* Command-line: gperf.exe -t --output-file=src/generated/gperf_hash_tables/CapabilityStatement_Rest_Resource-Member-Lookup.cc -CGD ./src/generated/gperf_class_files/CapabilityStatement_Rest_Resource.gperf  */
/* Computed positions: -k'5,12' */

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

#line 8 "./src/generated/gperf_class_files/CapabilityStatement_Rest_Resource.gperf"
struct fhir_deserialize::MemberNameAndOffset;
enum
  {
    TOTAL_KEYWORDS = 30,
    MIN_WORD_LENGTH = 2,
    MAX_WORD_LENGTH = 23,
    MIN_HASH_VALUE = 2,
    MAX_HASH_VALUE = 47
  };

/* maximum key range = 46, duplicates = 0 */

class CapabilityStatement_Rest_Resource_Gperf
{
private:
  static inline unsigned int hash (const char *str, unsigned int len);
public:
  static const struct fhir_deserialize::MemberNameAndOffset *CapabilityStatement_Rest_Resource_MemberLookup (const char *str, unsigned int len);
};

inline unsigned int
CapabilityStatement_Rest_Resource_Gperf::hash (register const char *str, register unsigned int len)
{
  static const unsigned char asso_values[] =
    {
      48, 48, 48, 48, 48, 48, 48, 48, 48, 48,
      48, 48, 48, 48, 48, 48, 48, 48, 48, 48,
      48, 48, 48, 48, 48, 48, 48, 48, 48, 48,
      48, 48, 48, 48, 48, 48, 48, 48, 48, 48,
      48, 48, 48, 48, 48, 48, 48, 48, 48, 48,
      48, 48, 48, 48, 48, 48, 48, 48, 48, 48,
      48, 48, 48, 48, 48, 48, 48, 23, 13, 48,
      48, 48, 25, 48, 48, 48, 48, 48, 48, 48,
      48, 48,  0, 48, 48, 30, 48, 48, 48, 48,
      48, 48, 48, 48, 48, 10, 48, 15, 48,  0,
       0,  0,  0, 48, 48,  0, 48, 48,  0,  0,
       0,  5, 48, 48, 10, 48, 30,  0, 48, 48,
      48, 48, 48, 48, 48, 48, 48, 48, 48, 48,
      48, 48, 48, 48, 48, 48, 48, 48, 48, 48,
      48, 48, 48, 48, 48, 48, 48, 48, 48, 48,
      48, 48, 48, 48, 48, 48, 48, 48, 48, 48,
      48, 48, 48, 48, 48, 48, 48, 48, 48, 48,
      48, 48, 48, 48, 48, 48, 48, 48, 48, 48,
      48, 48, 48, 48, 48, 48, 48, 48, 48, 48,
      48, 48, 48, 48, 48, 48, 48, 48, 48, 48,
      48, 48, 48, 48, 48, 48, 48, 48, 48, 48,
      48, 48, 48, 48, 48, 48, 48, 48, 48, 48,
      48, 48, 48, 48, 48, 48, 48, 48, 48, 48,
      48, 48, 48, 48, 48, 48, 48, 48, 48, 48,
      48, 48, 48, 48, 48, 48, 48, 48, 48, 48,
      48, 48, 48, 48, 48, 48
    };
  register int hval = len;

  switch (hval)
    {
      default:
        hval += asso_values[(unsigned char)str[11]];
      /*FALLTHROUGH*/
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
        break;
    }
  return hval;
}

static const struct fhir_deserialize::MemberNameAndOffset word_array_CapabilityStatement_Rest_Resource[] =
  {
#line 11 "./src/generated/gperf_class_files/CapabilityStatement_Rest_Resource.gperf"
    {"id", 0x8, 1, -1},
#line 16 "./src/generated/gperf_class_files/CapabilityStatement_Rest_Resource.gperf"
    {"type", 0x38, 6, -1},
#line 17 "./src/generated/gperf_class_files/CapabilityStatement_Rest_Resource.gperf"
    {"profile", 0x48, 7, -1},
#line 13 "./src/generated/gperf_class_files/CapabilityStatement_Rest_Resource.gperf"
    {"extension", 0x20, 3, -1},
#line 23 "./src/generated/gperf_class_files/CapabilityStatement_Rest_Resource.gperf"
    {"versioning", 0x88, 13, -1},
#line 37 "./src/generated/gperf_class_files/CapabilityStatement_Rest_Resource.gperf"
    {"searchParam", 0x108, 27, -1},
#line 10 "./src/generated/gperf_class_files/CapabilityStatement_Rest_Resource.gperf"
    {"resourceType", 0x0, 0, -1},
#line 33 "./src/generated/gperf_class_files/CapabilityStatement_Rest_Resource.gperf"
    {"searchInclude", 0xe8, 23, -1},
#line 27 "./src/generated/gperf_class_files/CapabilityStatement_Rest_Resource.gperf"
    {"conditionalRead", 0xa8, 17, -1},
#line 35 "./src/generated/gperf_class_files/CapabilityStatement_Rest_Resource.gperf"
    {"searchRevInclude", 0xf8, 25, -1},
#line 15 "./src/generated/gperf_class_files/CapabilityStatement_Rest_Resource.gperf"
    {"modifierExtension", 0x30, 5, -1},
#line 20 "./src/generated/gperf_class_files/CapabilityStatement_Rest_Resource.gperf"
    {"documentation", 0x68, 10, -1},
#line 32 "./src/generated/gperf_class_files/CapabilityStatement_Rest_Resource.gperf"
    {"searchInclude_count", 0xe0, 22, -1},
#line 12 "./src/generated/gperf_class_files/CapabilityStatement_Rest_Resource.gperf"
    {"extension_count", 0x18, 2, -1},
#line 22 "./src/generated/gperf_class_files/CapabilityStatement_Rest_Resource.gperf"
    {"interaction", 0x80, 12, -1},
#line 34 "./src/generated/gperf_class_files/CapabilityStatement_Rest_Resource.gperf"
    {"searchRevInclude_count", 0xf0, 24, -1},
#line 14 "./src/generated/gperf_class_files/CapabilityStatement_Rest_Resource.gperf"
    {"modifierExtension_count", 0x28, 4, -1},
#line 39 "./src/generated/gperf_class_files/CapabilityStatement_Rest_Resource.gperf"
    {"operation", 0x118, 29, -1},
#line 31 "./src/generated/gperf_class_files/CapabilityStatement_Rest_Resource.gperf"
    {"referencePolicy", 0xd8, 21, -1},
#line 19 "./src/generated/gperf_class_files/CapabilityStatement_Rest_Resource.gperf"
    {"supportedProfile", 0x60, 9, -1},
#line 36 "./src/generated/gperf_class_files/CapabilityStatement_Rest_Resource.gperf"
    {"searchParam_count", 0x100, 26, -1},
#line 29 "./src/generated/gperf_class_files/CapabilityStatement_Rest_Resource.gperf"
    {"conditionalDelete", 0xc0, 19, -1},
#line 30 "./src/generated/gperf_class_files/CapabilityStatement_Rest_Resource.gperf"
    {"referencePolicy_count", 0xd0, 20, -1},
#line 18 "./src/generated/gperf_class_files/CapabilityStatement_Rest_Resource.gperf"
    {"supportedProfile_count", 0x58, 8, -1},
#line 38 "./src/generated/gperf_class_files/CapabilityStatement_Rest_Resource.gperf"
    {"operation_count", 0x110, 28, -1},
#line 24 "./src/generated/gperf_class_files/CapabilityStatement_Rest_Resource.gperf"
    {"readHistory", 0x98, 14, -1},
#line 21 "./src/generated/gperf_class_files/CapabilityStatement_Rest_Resource.gperf"
    {"interaction_count", 0x78, 11, -1},
#line 26 "./src/generated/gperf_class_files/CapabilityStatement_Rest_Resource.gperf"
    {"conditionalCreate", 0xa0, 16, -1},
#line 25 "./src/generated/gperf_class_files/CapabilityStatement_Rest_Resource.gperf"
    {"updateCreate", 0x9c, 15, -1},
#line 28 "./src/generated/gperf_class_files/CapabilityStatement_Rest_Resource.gperf"
    {"conditionalUpdate", 0xb8, 18, -1}
  };

static const signed char lookup[] =
  {
    -1, -1,  0, -1,  1, -1, -1,  2, -1,  3,  4,  5,  6,  7,
    -1,  8,  9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20,
    -1, -1, 21, 22, 23, -1, -1, 24, 25, 26, -1, -1, 27, -1,
    28, -1, -1, -1, -1, 29
  };

const struct fhir_deserialize::MemberNameAndOffset *
CapabilityStatement_Rest_Resource_Gperf::CapabilityStatement_Rest_Resource_MemberLookup (register const char *str, register unsigned int len)
{
  if (len <= MAX_WORD_LENGTH && len >= MIN_WORD_LENGTH)
    {
      register int key = hash (str, len);

      if (key <= MAX_HASH_VALUE && key >= 0)
        {
          register int index = lookup[key];

          if (index >= 0)
            {
              register const char *s = word_array_CapabilityStatement_Rest_Resource[index].name;

              if (*str == *s && !strncmp (str + 1, s + 1, len - 1) && s[len] == '\0')
                return &word_array_CapabilityStatement_Rest_Resource[index];
            }
        }
    }
  return 0;
}
