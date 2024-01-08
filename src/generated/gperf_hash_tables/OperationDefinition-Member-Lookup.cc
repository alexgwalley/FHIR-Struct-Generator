/* C++ code produced by gperf version 3.0.1 */
/* Command-line: gperf.exe -t --output-file=src/generated/gperf_hash_tables/OperationDefinition-Member-Lookup.cc -CGD ./src/generated/gperf_class_files/OperationDefinition.gperf  */
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

#line 8 "./src/generated/gperf_class_files/OperationDefinition.gperf"
struct fhir_deserialize::MemberNameAndOffset;
enum
  {
    TOTAL_KEYWORDS = 44,
    MIN_WORD_LENGTH = 2,
    MAX_WORD_LENGTH = 23,
    MIN_HASH_VALUE = 4,
    MAX_HASH_VALUE = 70
  };

/* maximum key range = 67, duplicates = 0 */

class OperationDefinition_Gperf
{
private:
  static inline unsigned int hash (const char *str, unsigned int len);
public:
  static const struct fhir_deserialize::MemberNameAndOffset *OperationDefinition_MemberLookup (const char *str, unsigned int len);
};

inline unsigned int
OperationDefinition_Gperf::hash (register const char *str, register unsigned int len)
{
  static const unsigned char asso_values[] =
    {
      71, 71, 71, 71, 71, 71, 71, 71, 71, 71,
      71, 71, 71, 71, 71, 71, 71, 71, 71, 71,
      71, 71, 71, 71, 71, 71, 71, 71, 71, 71,
      71, 71, 71, 71, 71, 71, 71, 71, 71, 71,
      71, 71, 71, 71, 71, 71, 71, 71, 71, 71,
      71, 71, 71, 71, 71, 71, 71, 71, 71, 71,
      71, 71, 71, 71, 71, 71, 71, 71, 71, 71,
      71, 71, 71, 71, 71, 71, 71, 71, 71, 71,
      71, 71, 71, 71, 71, 71, 71, 71, 71, 71,
      71, 71, 71, 71, 71, 71, 71, 10, 50, 20,
       0, 25, 30, 71, 71, 35, 30,  0,  5,  5,
       0, 20, 10, 71,  0,  0, 30, 10,  0, 71,
      15, 71, 71, 71, 71, 71, 71, 71, 71, 71,
      71, 71, 71, 71, 71, 71, 71, 71, 71, 71,
      71, 71, 71, 71, 71, 71, 71, 71, 71, 71,
      71, 71, 71, 71, 71, 71, 71, 71, 71, 71,
      71, 71, 71, 71, 71, 71, 71, 71, 71, 71,
      71, 71, 71, 71, 71, 71, 71, 71, 71, 71,
      71, 71, 71, 71, 71, 71, 71, 71, 71, 71,
      71, 71, 71, 71, 71, 71, 71, 71, 71, 71,
      71, 71, 71, 71, 71, 71, 71, 71, 71, 71,
      71, 71, 71, 71, 71, 71, 71, 71, 71, 71,
      71, 71, 71, 71, 71, 71, 71, 71, 71, 71,
      71, 71, 71, 71, 71, 71, 71, 71, 71, 71,
      71, 71, 71, 71, 71, 71, 71, 71, 71, 71,
      71, 71, 71, 71, 71, 71
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

static const struct fhir_deserialize::MemberNameAndOffset word_array_OperationDefinition[] =
  {
#line 27 "./src/generated/gperf_class_files/OperationDefinition.gperf"
    {"kind", 0xc8, 17, -1},
#line 45 "./src/generated/gperf_class_files/OperationDefinition.gperf"
    {"system", 0x198, 35, -1},
#line 23 "./src/generated/gperf_class_files/OperationDefinition.gperf"
    {"version", 0x88, 13, -1},
#line 44 "./src/generated/gperf_class_files/OperationDefinition.gperf"
    {"resource", 0x190, 34, -1},
#line 24 "./src/generated/gperf_class_files/OperationDefinition.gperf"
    {"name", 0x98, 14, -1},
#line 33 "./src/generated/gperf_class_files/OperationDefinition.gperf"
    {"description", 0x110, 23, -1},
#line 10 "./src/generated/gperf_class_files/OperationDefinition.gperf"
    {"resourceType", 0x0, 0, -1},
#line 14 "./src/generated/gperf_class_files/OperationDefinition.gperf"
    {"language", 0x30, 4, -1},
#line 43 "./src/generated/gperf_class_files/OperationDefinition.gperf"
    {"resource_count", 0x188, 33, -1},
#line 26 "./src/generated/gperf_class_files/OperationDefinition.gperf"
    {"status", 0xb8, 16, -1},
#line 38 "./src/generated/gperf_class_files/OperationDefinition.gperf"
    {"purpose", 0x140, 28, -1},
#line 22 "./src/generated/gperf_class_files/OperationDefinition.gperf"
    {"url", 0x78, 12, -1},
#line 51 "./src/generated/gperf_class_files/OperationDefinition.gperf"
    {"parameter", 0x1d0, 41, -1},
#line 21 "./src/generated/gperf_class_files/OperationDefinition.gperf"
    {"modifierExtension", 0x70, 11, -1},
#line 40 "./src/generated/gperf_class_files/OperationDefinition.gperf"
    {"code", 0x158, 30, -1},
#line 50 "./src/generated/gperf_class_files/OperationDefinition.gperf"
    {"parameter_count", 0x1c8, 40, -1},
#line 32 "./src/generated/gperf_class_files/OperationDefinition.gperf"
    {"contact", 0x108, 22, -1},
#line 20 "./src/generated/gperf_class_files/OperationDefinition.gperf"
    {"modifierExtension_count", 0x68, 10, -1},
#line 17 "./src/generated/gperf_class_files/OperationDefinition.gperf"
    {"contained", 0x50, 7, -1},
#line 41 "./src/generated/gperf_class_files/OperationDefinition.gperf"
    {"comment", 0x168, 31, -1},
#line 31 "./src/generated/gperf_class_files/OperationDefinition.gperf"
    {"contact_count", 0x100, 21, -1},
#line 29 "./src/generated/gperf_class_files/OperationDefinition.gperf"
    {"date", 0xe0, 19, -1},
#line 16 "./src/generated/gperf_class_files/OperationDefinition.gperf"
    {"contained_count", 0x48, 6, -1},
#line 11 "./src/generated/gperf_class_files/OperationDefinition.gperf"
    {"id", 0x8, 1, -1},
#line 12 "./src/generated/gperf_class_files/OperationDefinition.gperf"
    {"meta", 0x18, 2, -1},
#line 37 "./src/generated/gperf_class_files/OperationDefinition.gperf"
    {"jurisdiction", 0x138, 27, -1},
#line 47 "./src/generated/gperf_class_files/OperationDefinition.gperf"
    {"instance", 0x1a0, 37, -1},
#line 46 "./src/generated/gperf_class_files/OperationDefinition.gperf"
    {"type", 0x19c, 36, -1},
#line 35 "./src/generated/gperf_class_files/OperationDefinition.gperf"
    {"useContext", 0x128, 25, -1},
#line 28 "./src/generated/gperf_class_files/OperationDefinition.gperf"
    {"experimental", 0xd8, 18, -1},
#line 36 "./src/generated/gperf_class_files/OperationDefinition.gperf"
    {"jurisdiction_count", 0x130, 26, -1},
#line 15 "./src/generated/gperf_class_files/OperationDefinition.gperf"
    {"text", 0x40, 5, -1},
#line 34 "./src/generated/gperf_class_files/OperationDefinition.gperf"
    {"useContext_count", 0x120, 24, -1},
#line 39 "./src/generated/gperf_class_files/OperationDefinition.gperf"
    {"affectsState", 0x150, 29, -1},
#line 53 "./src/generated/gperf_class_files/OperationDefinition.gperf"
    {"overload", 0x1e0, 43, -1},
#line 42 "./src/generated/gperf_class_files/OperationDefinition.gperf"
    {"base", 0x178, 32, -1},
#line 48 "./src/generated/gperf_class_files/OperationDefinition.gperf"
    {"inputProfile", 0x1a8, 38, -1},
#line 13 "./src/generated/gperf_class_files/OperationDefinition.gperf"
    {"implicitRules", 0x20, 3, -1},
#line 52 "./src/generated/gperf_class_files/OperationDefinition.gperf"
    {"overload_count", 0x1d8, 42, -1},
#line 49 "./src/generated/gperf_class_files/OperationDefinition.gperf"
    {"outputProfile", 0x1b8, 39, -1},
#line 19 "./src/generated/gperf_class_files/OperationDefinition.gperf"
    {"extension", 0x60, 9, -1},
#line 25 "./src/generated/gperf_class_files/OperationDefinition.gperf"
    {"title", 0xa8, 15, -1},
#line 30 "./src/generated/gperf_class_files/OperationDefinition.gperf"
    {"publisher", 0xf0, 20, -1},
#line 18 "./src/generated/gperf_class_files/OperationDefinition.gperf"
    {"extension_count", 0x58, 8, -1}
  };

static const signed char lookup[] =
  {
    -1, -1, -1, -1,  0, -1,  1,  2,  3,  4, -1,  5,  6,  7,
     8, -1,  9, 10, 11, 12, -1, -1, 13, -1, 14, 15, -1, 16,
    17, 18, -1, -1, 19, 20, 21, 22, -1, 23, -1, 24, -1, -1,
    25, 26, 27, 28, -1, 29, 30, 31, -1, 32, 33, 34, 35, -1,
    -1, 36, 37, 38, -1, -1, -1, 39, 40, 41, -1, -1, -1, 42,
    43
  };

const struct fhir_deserialize::MemberNameAndOffset *
OperationDefinition_Gperf::OperationDefinition_MemberLookup (register const char *str, register unsigned int len)
{
  if (len <= MAX_WORD_LENGTH && len >= MIN_WORD_LENGTH)
    {
      register int key = hash (str, len);

      if (key <= MAX_HASH_VALUE && key >= 0)
        {
          register int index = lookup[key];

          if (index >= 0)
            {
              register const char *s = word_array_OperationDefinition[index].name;

              if (*str == *s && !strncmp (str + 1, s + 1, len - 1) && s[len] == '\0')
                return &word_array_OperationDefinition[index];
            }
        }
    }
  return 0;
}
