/* C++ code produced by gperf version 3.0.1 */
/* Command-line: gperf.exe -t --output-file=src/generated/gperf_hash_tables/Contract-Member-Lookup.cc -CGD ./src/generated/gperf_class_files/Contract.gperf  */
/* Computed positions: -k'1,4,10' */

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

#line 8 "./src/generated/gperf_class_files/Contract.gperf"
struct fhir_deserialize::MemberNameAndOffset;
enum
  {
    TOTAL_KEYWORDS = 61,
    MIN_WORD_LENGTH = 2,
    MAX_WORD_LENGTH = 24,
    MIN_HASH_VALUE = 3,
    MAX_HASH_VALUE = 102
  };

/* maximum key range = 100, duplicates = 0 */

class Contract_Gperf
{
private:
  static inline unsigned int hash (const char *str, unsigned int len);
public:
  static const struct fhir_deserialize::MemberNameAndOffset *Contract_MemberLookup (const char *str, unsigned int len);
};

inline unsigned int
Contract_Gperf::hash (register const char *str, register unsigned int len)
{
  static const unsigned char asso_values[] =
    {
      103, 103, 103, 103, 103, 103, 103, 103, 103, 103,
      103, 103, 103, 103, 103, 103, 103, 103, 103, 103,
      103, 103, 103, 103, 103, 103, 103, 103, 103, 103,
      103, 103, 103, 103, 103, 103, 103, 103, 103, 103,
      103, 103, 103, 103, 103, 103, 103, 103, 103, 103,
      103, 103, 103, 103, 103, 103, 103, 103, 103, 103,
      103, 103, 103, 103, 103, 103, 103, 103, 103, 103,
      103, 103, 103, 103, 103, 103, 103, 103, 103, 103,
      103, 103, 103, 103,  15, 103, 103, 103, 103, 103,
      103, 103, 103, 103, 103,  25, 103,   0, 103,  35,
       30,   0,  10,  40,  60,  20,  10, 103,   5,  35,
        0,   5,   5, 103,  40,  15,  10,   0,  25, 103,
        5,   0, 103, 103, 103, 103, 103, 103, 103, 103,
      103, 103, 103, 103, 103, 103, 103, 103, 103, 103,
      103, 103, 103, 103, 103, 103, 103, 103, 103, 103,
      103, 103, 103, 103, 103, 103, 103, 103, 103, 103,
      103, 103, 103, 103, 103, 103, 103, 103, 103, 103,
      103, 103, 103, 103, 103, 103, 103, 103, 103, 103,
      103, 103, 103, 103, 103, 103, 103, 103, 103, 103,
      103, 103, 103, 103, 103, 103, 103, 103, 103, 103,
      103, 103, 103, 103, 103, 103, 103, 103, 103, 103,
      103, 103, 103, 103, 103, 103, 103, 103, 103, 103,
      103, 103, 103, 103, 103, 103, 103, 103, 103, 103,
      103, 103, 103, 103, 103, 103, 103, 103, 103, 103,
      103, 103, 103, 103, 103, 103, 103, 103, 103, 103,
      103, 103, 103, 103, 103, 103
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
      case 5:
      case 4:
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

static const struct fhir_deserialize::MemberNameAndOffset word_array_Contract[] =
  {
#line 24 "./src/generated/gperf_class_files/Contract.gperf"
    {"url", 0x88, 14, -1},
#line 42 "./src/generated/gperf_class_files/Contract.gperf"
    {"name", 0x140, 32, -1},
#line 46 "./src/generated/gperf_class_files/Contract.gperf"
    {"alias", 0x178, 36, -1},
#line 19 "./src/generated/gperf_class_files/Contract.gperf"
    {"extension", 0x60, 9, -1},
#line 66 "./src/generated/gperf_class_files/Contract.gperf"
    {"legal", 0x218, 56, -1},
#line 45 "./src/generated/gperf_class_files/Contract.gperf"
    {"alias_count", 0x170, 35, -1},
#line 32 "./src/generated/gperf_class_files/Contract.gperf"
    {"applies", 0xf0, 22, -1},
#line 51 "./src/generated/gperf_class_files/Contract.gperf"
    {"type", 0x1a0, 41, -1},
#line 27 "./src/generated/gperf_class_files/Contract.gperf"
    {"legalState", 0xb8, 17, -1},
#line 65 "./src/generated/gperf_class_files/Contract.gperf"
    {"legal_count", 0x210, 55, -1},
#line 64 "./src/generated/gperf_class_files/Contract.gperf"
    {"friendly", 0x208, 54, -1},
#line 41 "./src/generated/gperf_class_files/Contract.gperf"
    {"site", 0x138, 31, -1},
#line 43 "./src/generated/gperf_class_files/Contract.gperf"
    {"title", 0x150, 33, -1},
#line 62 "./src/generated/gperf_class_files/Contract.gperf"
    {"signer", 0x1f8, 52, -1},
#line 11 "./src/generated/gperf_class_files/Contract.gperf"
    {"id", 0x8, 1, -1},
#line 15 "./src/generated/gperf_class_files/Contract.gperf"
    {"text", 0x40, 5, -1},
#line 48 "./src/generated/gperf_class_files/Contract.gperf"
    {"scope", 0x188, 38, -1},
#line 31 "./src/generated/gperf_class_files/Contract.gperf"
    {"issued", 0xe0, 21, -1},
#line 61 "./src/generated/gperf_class_files/Contract.gperf"
    {"signer_count", 0x1f0, 51, -1},
#line 70 "./src/generated/gperf_class_files/Contract.gperf"
    {"legallyBindingReference", 0x238, 60, 1},
#line 69 "./src/generated/gperf_class_files/Contract.gperf"
    {"legallyBindingAttachment", 0x238, 60, 0},
#line 26 "./src/generated/gperf_class_files/Contract.gperf"
    {"status", 0xa8, 16, -1},
#line 35 "./src/generated/gperf_class_files/Contract.gperf"
    {"subject", 0x108, 25, -1},
#line 44 "./src/generated/gperf_class_files/Contract.gperf"
    {"subtitle", 0x160, 34, -1},
#line 33 "./src/generated/gperf_class_files/Contract.gperf"
    {"expirationType", 0xf8, 23, -1},
#line 40 "./src/generated/gperf_class_files/Contract.gperf"
    {"site_count", 0x130, 30, -1},
#line 39 "./src/generated/gperf_class_files/Contract.gperf"
    {"domain", 0x128, 29, -1},
#line 53 "./src/generated/gperf_class_files/Contract.gperf"
    {"subType", 0x1b0, 43, -1},
#line 13 "./src/generated/gperf_class_files/Contract.gperf"
    {"implicitRules", 0x20, 3, -1},
#line 12 "./src/generated/gperf_class_files/Contract.gperf"
    {"meta", 0x18, 2, -1},
#line 18 "./src/generated/gperf_class_files/Contract.gperf"
    {"extension_count", 0x58, 8, -1},
#line 38 "./src/generated/gperf_class_files/Contract.gperf"
    {"domain_count", 0x120, 28, -1},
#line 34 "./src/generated/gperf_class_files/Contract.gperf"
    {"subject_count", 0x100, 24, -1},
#line 68 "./src/generated/gperf_class_files/Contract.gperf"
    {"rule", 0x228, 58, -1},
#line 25 "./src/generated/gperf_class_files/Contract.gperf"
    {"version", 0x98, 15, -1},
#line 52 "./src/generated/gperf_class_files/Contract.gperf"
    {"subType_count", 0x1a8, 42, -1},
#line 56 "./src/generated/gperf_class_files/Contract.gperf"
    {"term", 0x1c8, 46, -1},
#line 49 "./src/generated/gperf_class_files/Contract.gperf"
    {"topicCodeableConcept", 0x198, 40, 0},
#line 14 "./src/generated/gperf_class_files/Contract.gperf"
    {"language", 0x30, 4, -1},
#line 17 "./src/generated/gperf_class_files/Contract.gperf"
    {"contained", 0x50, 7, -1},
#line 29 "./src/generated/gperf_class_files/Contract.gperf"
    {"instantiatesUri", 0xc8, 19, -1},
#line 10 "./src/generated/gperf_class_files/Contract.gperf"
    {"resourceType", 0x0, 0, -1},
#line 63 "./src/generated/gperf_class_files/Contract.gperf"
    {"friendly_count", 0x200, 53, -1},
#line 67 "./src/generated/gperf_class_files/Contract.gperf"
    {"rule_count", 0x220, 57, -1},
#line 28 "./src/generated/gperf_class_files/Contract.gperf"
    {"instantiatesCanonical", 0xc0, 18, -1},
#line 55 "./src/generated/gperf_class_files/Contract.gperf"
    {"term_count", 0x1c0, 45, -1},
#line 47 "./src/generated/gperf_class_files/Contract.gperf"
    {"author", 0x180, 37, -1},
#line 37 "./src/generated/gperf_class_files/Contract.gperf"
    {"authority", 0x118, 27, -1},
#line 23 "./src/generated/gperf_class_files/Contract.gperf"
    {"identifier", 0x80, 13, -1},
#line 54 "./src/generated/gperf_class_files/Contract.gperf"
    {"contentDefinition", 0x1b8, 44, -1},
#line 58 "./src/generated/gperf_class_files/Contract.gperf"
    {"supportingInfo", 0x1d8, 48, -1},
#line 60 "./src/generated/gperf_class_files/Contract.gperf"
    {"relevantHistory", 0x1e8, 50, -1},
#line 22 "./src/generated/gperf_class_files/Contract.gperf"
    {"identifier_count", 0x78, 12, -1},
#line 21 "./src/generated/gperf_class_files/Contract.gperf"
    {"modifierExtension", 0x70, 11, -1},
#line 57 "./src/generated/gperf_class_files/Contract.gperf"
    {"supportingInfo_count", 0x1d0, 47, -1},
#line 59 "./src/generated/gperf_class_files/Contract.gperf"
    {"relevantHistory_count", 0x1e0, 49, -1},
#line 20 "./src/generated/gperf_class_files/Contract.gperf"
    {"modifierExtension_count", 0x68, 10, -1},
#line 50 "./src/generated/gperf_class_files/Contract.gperf"
    {"topicReference", 0x198, 40, 1},
#line 16 "./src/generated/gperf_class_files/Contract.gperf"
    {"contained_count", 0x48, 6, -1},
#line 36 "./src/generated/gperf_class_files/Contract.gperf"
    {"authority_count", 0x110, 26, -1},
#line 30 "./src/generated/gperf_class_files/Contract.gperf"
    {"contentDerivative", 0xd8, 20, -1}
  };

static const signed char lookup[] =
  {
    -1, -1, -1,  0,  1,  2, -1, -1, -1,  3,  4,  5,  6, -1,
     7,  8,  9, -1, 10, 11, 12, 13, 14, -1, 15, 16, 17, 18,
    19, 20, -1, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, -1,
    31, 32, 33, -1, -1, 34, 35, 36, 37, -1, -1, 38, 39, 40,
    -1, 41, -1, 42, 43, 44, -1, -1, -1, 45, 46, -1, -1, 47,
    48, -1, 49, -1, 50, 51, 52, 53, -1, -1, 54, 55, -1, 56,
    57, 58, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, 59, -1, 60
  };

const struct fhir_deserialize::MemberNameAndOffset *
Contract_Gperf::Contract_MemberLookup (register const char *str, register unsigned int len)
{
  if (len <= MAX_WORD_LENGTH && len >= MIN_WORD_LENGTH)
    {
      register int key = hash (str, len);

      if (key <= MAX_HASH_VALUE && key >= 0)
        {
          register int index = lookup[key];

          if (index >= 0)
            {
              register const char *s = word_array_Contract[index].name;

              if (*str == *s && !strncmp (str + 1, s + 1, len - 1) && s[len] == '\0')
                return &word_array_Contract[index];
            }
        }
    }
  return 0;
}
