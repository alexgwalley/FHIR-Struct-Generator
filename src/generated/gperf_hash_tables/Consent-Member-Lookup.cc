/* C++ code produced by gperf version 3.0.1 */
/* Command-line: gperf.exe -t --output-file=src/generated/gperf_hash_tables/Consent-Member-Lookup.cc -CGD ./src/generated/gperf_class_files/Consent.gperf  */
/* Computed positions: -k'1-2' */

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

#line 8 "./src/generated/gperf_class_files/Consent.gperf"
struct fhir_deserialize::MemberNameAndOffset;
enum
  {
    TOTAL_KEYWORDS = 32,
    MIN_WORD_LENGTH = 2,
    MAX_WORD_LENGTH = 23,
    MIN_HASH_VALUE = 7,
    MAX_HASH_VALUE = 54
  };

/* maximum key range = 48, duplicates = 0 */

class Consent_Gperf
{
private:
  static inline unsigned int hash (const char *str, unsigned int len);
public:
  static const struct fhir_deserialize::MemberNameAndOffset *Consent_MemberLookup (const char *str, unsigned int len);
};

inline unsigned int
Consent_Gperf::hash (register const char *str, register unsigned int len)
{
  static const unsigned char asso_values[] =
    {
      55, 55, 55, 55, 55, 55, 55, 55, 55, 55,
      55, 55, 55, 55, 55, 55, 55, 55, 55, 55,
      55, 55, 55, 55, 55, 55, 55, 55, 55, 55,
      55, 55, 55, 55, 55, 55, 55, 55, 55, 55,
      55, 55, 55, 55, 55, 55, 55, 55, 55, 55,
      55, 55, 55, 55, 55, 55, 55, 55, 55, 55,
      55, 55, 55, 55, 55, 55, 55, 55, 55, 55,
      55, 55, 55, 55, 55, 55, 55, 55, 55, 55,
      55, 55, 55, 55, 55, 55, 55, 55, 55, 55,
      55, 55, 55, 55, 55, 55, 55, 15, 55, 25,
       5,  5, 55, 55, 55,  0, 55, 55,  0, 20,
      55,  0, 10, 55,  0, 20,  0, 55, 30, 55,
      25, 55, 55, 55, 55, 55, 55, 55, 55, 55,
      55, 55, 55, 55, 55, 55, 55, 55, 55, 55,
      55, 55, 55, 55, 55, 55, 55, 55, 55, 55,
      55, 55, 55, 55, 55, 55, 55, 55, 55, 55,
      55, 55, 55, 55, 55, 55, 55, 55, 55, 55,
      55, 55, 55, 55, 55, 55, 55, 55, 55, 55,
      55, 55, 55, 55, 55, 55, 55, 55, 55, 55,
      55, 55, 55, 55, 55, 55, 55, 55, 55, 55,
      55, 55, 55, 55, 55, 55, 55, 55, 55, 55,
      55, 55, 55, 55, 55, 55, 55, 55, 55, 55,
      55, 55, 55, 55, 55, 55, 55, 55, 55, 55,
      55, 55, 55, 55, 55, 55, 55, 55, 55, 55,
      55, 55, 55, 55, 55, 55, 55, 55, 55, 55,
      55, 55, 55, 55, 55, 55
    };
  return len + asso_values[(unsigned char)str[1]] + asso_values[(unsigned char)str[0]];
}

static const struct fhir_deserialize::MemberNameAndOffset word_array_Consent[] =
  {
#line 11 "./src/generated/gperf_class_files/Consent.gperf"
    {"id", 0x8, 1, -1},
#line 15 "./src/generated/gperf_class_files/Consent.gperf"
    {"text", 0x40, 5, -1},
#line 33 "./src/generated/gperf_class_files/Consent.gperf"
    {"organization", 0xe0, 23, -1},
#line 23 "./src/generated/gperf_class_files/Consent.gperf"
    {"identifier", 0x80, 13, -1},
#line 37 "./src/generated/gperf_class_files/Consent.gperf"
    {"policy", 0x100, 27, -1},
#line 10 "./src/generated/gperf_class_files/Consent.gperf"
    {"resourceType", 0x0, 0, -1},
#line 32 "./src/generated/gperf_class_files/Consent.gperf"
    {"organization_count", 0xd8, 22, -1},
#line 41 "./src/generated/gperf_class_files/Consent.gperf"
    {"provision", 0x120, 31, -1},
#line 38 "./src/generated/gperf_class_files/Consent.gperf"
    {"policyRule", 0x108, 28, -1},
#line 22 "./src/generated/gperf_class_files/Consent.gperf"
    {"identifier_count", 0x78, 12, -1},
#line 36 "./src/generated/gperf_class_files/Consent.gperf"
    {"policy_count", 0xf8, 26, -1},
#line 14 "./src/generated/gperf_class_files/Consent.gperf"
    {"language", 0x30, 4, -1},
#line 31 "./src/generated/gperf_class_files/Consent.gperf"
    {"performer", 0xd0, 21, -1},
#line 24 "./src/generated/gperf_class_files/Consent.gperf"
    {"status", 0x88, 14, -1},
#line 29 "./src/generated/gperf_class_files/Consent.gperf"
    {"dateTime", 0xb8, 19, -1},
#line 12 "./src/generated/gperf_class_files/Consent.gperf"
    {"meta", 0x18, 2, -1},
#line 30 "./src/generated/gperf_class_files/Consent.gperf"
    {"performer_count", 0xc8, 20, -1},
#line 28 "./src/generated/gperf_class_files/Consent.gperf"
    {"patient", 0xb0, 18, -1},
#line 13 "./src/generated/gperf_class_files/Consent.gperf"
    {"implicitRules", 0x20, 3, -1},
#line 17 "./src/generated/gperf_class_files/Consent.gperf"
    {"contained", 0x50, 7, -1},
#line 35 "./src/generated/gperf_class_files/Consent.gperf"
    {"sourceReference", 0xf0, 25, 1},
#line 34 "./src/generated/gperf_class_files/Consent.gperf"
    {"sourceAttachment", 0xf0, 25, 0},
#line 21 "./src/generated/gperf_class_files/Consent.gperf"
    {"modifierExtension", 0x70, 11, -1},
#line 19 "./src/generated/gperf_class_files/Consent.gperf"
    {"extension", 0x60, 9, -1},
#line 16 "./src/generated/gperf_class_files/Consent.gperf"
    {"contained_count", 0x48, 6, -1},
#line 20 "./src/generated/gperf_class_files/Consent.gperf"
    {"modifierExtension_count", 0x68, 10, -1},
#line 18 "./src/generated/gperf_class_files/Consent.gperf"
    {"extension_count", 0x58, 8, -1},
#line 40 "./src/generated/gperf_class_files/Consent.gperf"
    {"verification", 0x118, 30, -1},
#line 27 "./src/generated/gperf_class_files/Consent.gperf"
    {"category", 0xa8, 17, -1},
#line 25 "./src/generated/gperf_class_files/Consent.gperf"
    {"scope", 0x98, 15, -1},
#line 39 "./src/generated/gperf_class_files/Consent.gperf"
    {"verification_count", 0x110, 29, -1},
#line 26 "./src/generated/gperf_class_files/Consent.gperf"
    {"category_count", 0xa0, 16, -1}
  };

static const signed char lookup[] =
  {
    -1, -1, -1, -1, -1, -1, -1,  0, -1,  1, -1, -1,  2, -1,
    -1,  3,  4,  5,  6,  7,  8,  9, 10, 11, 12, -1, 13, -1,
    14, 15, 16, -1, 17, 18, 19, 20, 21, 22, -1, 23, 24, -1,
    -1, 25, -1, 26, -1, 27, 28, -1, 29, -1, -1, 30, 31
  };

const struct fhir_deserialize::MemberNameAndOffset *
Consent_Gperf::Consent_MemberLookup (register const char *str, register unsigned int len)
{
  if (len <= MAX_WORD_LENGTH && len >= MIN_WORD_LENGTH)
    {
      register int key = hash (str, len);

      if (key <= MAX_HASH_VALUE && key >= 0)
        {
          register int index = lookup[key];

          if (index >= 0)
            {
              register const char *s = word_array_Consent[index].name;

              if (*str == *s && !strncmp (str + 1, s + 1, len - 1) && s[len] == '\0')
                return &word_array_Consent[index];
            }
        }
    }
  return 0;
}
