/* C++ code produced by gperf version 3.0.1 */
/* Command-line: gperf.exe -t --output-file=src/gperf_hash_tables/ChargeItem-Member-Lookup.cc -CGD ./gperf_class_files/ChargeItem.gperf  */
/* Computed positions: -k'3,$' */

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

#line 8 "./gperf_class_files/ChargeItem.gperf"
struct fhir_deserialize::MemberNameAndOffset;
enum
  {
    TOTAL_KEYWORDS = 52,
    MIN_WORD_LENGTH = 2,
    MAX_WORD_LENGTH = 27,
    MIN_HASH_VALUE = 4,
    MAX_HASH_VALUE = 91
  };

/* maximum key range = 88, duplicates = 0 */

class ChargeItem_Gperf
{
private:
  static inline unsigned int hash (const char *str, unsigned int len);
public:
  static const struct fhir_deserialize::MemberNameAndOffset *ChargeItem_MemberLookup (const char *str, unsigned int len);
};

inline unsigned int
ChargeItem_Gperf::hash (register const char *str, register unsigned int len)
{
  static const unsigned char asso_values[] =
    {
      92, 92, 92, 92, 92, 92, 92, 92, 92, 92,
      92, 92, 92, 92, 92, 92, 92, 92, 92, 92,
      92, 92, 92, 92, 92, 92, 92, 92, 92, 92,
      92, 92, 92, 92, 92, 92, 92, 92, 92, 92,
      92, 92, 92, 92, 92, 92, 92, 92, 92, 92,
      92, 92, 92, 92, 92, 92, 92, 92, 92, 92,
      92, 92, 92, 92, 92, 92, 92, 92, 92, 92,
      92, 92, 92, 92, 92, 92, 92, 92, 92, 92,
      92, 92, 92, 92, 92, 92, 92, 92, 92, 92,
      92, 92, 92, 92, 92, 92, 92, 50,  0, 40,
      20, 20, 30,  0, 92, 30, 92, 92, 20, 92,
      30, 55,  0,  0,  5, 10,  0, 92, 92, 92,
       0, 10, 92, 92, 92, 92, 92, 92, 92, 92,
      92, 92, 92, 92, 92, 92, 92, 92, 92, 92,
      92, 92, 92, 92, 92, 92, 92, 92, 92, 92,
      92, 92, 92, 92, 92, 92, 92, 92, 92, 92,
      92, 92, 92, 92, 92, 92, 92, 92, 92, 92,
      92, 92, 92, 92, 92, 92, 92, 92, 92, 92,
      92, 92, 92, 92, 92, 92, 92, 92, 92, 92,
      92, 92, 92, 92, 92, 92, 92, 92, 92, 92,
      92, 92, 92, 92, 92, 92, 92, 92, 92, 92,
      92, 92, 92, 92, 92, 92, 92, 92, 92, 92,
      92, 92, 92, 92, 92, 92, 92, 92, 92, 92,
      92, 92, 92, 92, 92, 92, 92, 92, 92, 92,
      92, 92, 92, 92, 92, 92, 92, 92, 92, 92,
      92, 92, 92, 92, 92, 92
    };
  register int hval = len;

  switch (hval)
    {
      default:
        hval += asso_values[(unsigned char)str[2]];
      /*FALLTHROUGH*/
      case 2:
        break;
    }
  return hval + asso_values[(unsigned char)str[len - 1]];
}

static const struct fhir_deserialize::MemberNameAndOffset word_array_ChargeItem[] =
  {
#line 15 "./gperf_class_files/ChargeItem.gperf"
    {"text", 0x40, 5, -1},
#line 32 "./gperf_class_files/ChargeItem.gperf"
    {"subject", 0xd0, 22, -1},
#line 58 "./gperf_class_files/ChargeItem.gperf"
    {"note_count", 0x1b0, 47, -1},
#line 48 "./gperf_class_files/ChargeItem.gperf"
    {"enterer", 0x158, 37, -1},
#line 18 "./gperf_class_files/ChargeItem.gperf"
    {"extension_count", 0x58, 8, -1},
#line 29 "./gperf_class_files/ChargeItem.gperf"
    {"partOf_count", 0xb8, 19, -1},
#line 52 "./gperf_class_files/ChargeItem.gperf"
    {"service_count", 0x180, 41, -1},
#line 38 "./gperf_class_files/ChargeItem.gperf"
    {"performer", 0x100, 27, -1},
#line 37 "./gperf_class_files/ChargeItem.gperf"
    {"performer_count", 0xf8, 26, -1},
#line 11 "./gperf_class_files/ChargeItem.gperf"
    {"id", 0x8, 1, -1},
#line 13 "./gperf_class_files/ChargeItem.gperf"
    {"implicitRules", 0x20, 3, -1},
#line 59 "./gperf_class_files/ChargeItem.gperf"
    {"note", 0x1b8, 48, -1},
#line 41 "./gperf_class_files/ChargeItem.gperf"
    {"costCenter", 0x118, 30, -1},
#line 60 "./gperf_class_files/ChargeItem.gperf"
    {"supportingInformation_count", 0x1c0, 49, -1},
#line 49 "./gperf_class_files/ChargeItem.gperf"
    {"enteredDate", 0x160, 38, -1},
#line 53 "./gperf_class_files/ChargeItem.gperf"
    {"service", 0x188, 42, -1},
#line 43 "./gperf_class_files/ChargeItem.gperf"
    {"bodysite_count", 0x128, 32, -1},
#line 23 "./gperf_class_files/ChargeItem.gperf"
    {"identifier", 0x80, 13, -1},
#line 22 "./gperf_class_files/ChargeItem.gperf"
    {"identifier_count", 0x78, 12, -1},
#line 33 "./gperf_class_files/ChargeItem.gperf"
    {"context", 0xd8, 23, -1},
#line 19 "./gperf_class_files/ChargeItem.gperf"
    {"extension", 0x60, 9, -1},
#line 30 "./gperf_class_files/ChargeItem.gperf"
    {"partOf", 0xc0, 20, -1},
#line 10 "./gperf_class_files/ChargeItem.gperf"
    {"resourceType", 0x0, 0, -1},
#line 20 "./gperf_class_files/ChargeItem.gperf"
    {"modifierExtension_count", 0x68, 10, -1},
#line 31 "./gperf_class_files/ChargeItem.gperf"
    {"code", 0xc8, 21, -1},
#line 16 "./gperf_class_files/ChargeItem.gperf"
    {"contained_count", 0x48, 6, -1},
#line 57 "./gperf_class_files/ChargeItem.gperf"
    {"account", 0x1a8, 46, -1},
#line 44 "./gperf_class_files/ChargeItem.gperf"
    {"bodysite", 0x130, 33, -1},
#line 24 "./gperf_class_files/ChargeItem.gperf"
    {"definitionUri_count", 0x88, 14, -1},
#line 61 "./gperf_class_files/ChargeItem.gperf"
    {"supportingInformation", 0x1c8, 50, -1},
#line 40 "./gperf_class_files/ChargeItem.gperf"
    {"requestingOrganization", 0x110, 29, -1},
#line 56 "./gperf_class_files/ChargeItem.gperf"
    {"account_count", 0x1a0, 45, -1},
#line 12 "./gperf_class_files/ChargeItem.gperf"
    {"meta", 0x18, 2, -1},
#line 26 "./gperf_class_files/ChargeItem.gperf"
    {"definitionCanonical_count", 0x98, 16, -1},
#line 36 "./gperf_class_files/ChargeItem.gperf"
    {"occurrenceTiming", 0xe8, 25, 2},
#line 39 "./gperf_class_files/ChargeItem.gperf"
    {"performingOrganization", 0x108, 28, -1},
#line 14 "./gperf_class_files/ChargeItem.gperf"
    {"language", 0x30, 4, -1},
#line 17 "./gperf_class_files/ChargeItem.gperf"
    {"contained", 0x50, 7, -1},
#line 50 "./gperf_class_files/ChargeItem.gperf"
    {"reason_count", 0x170, 39, -1},
#line 46 "./gperf_class_files/ChargeItem.gperf"
    {"priceOverride", 0x140, 35, -1},
#line 47 "./gperf_class_files/ChargeItem.gperf"
    {"overrideReason", 0x148, 36, -1},
#line 28 "./gperf_class_files/ChargeItem.gperf"
    {"status", 0xa8, 18, -1},
#line 21 "./gperf_class_files/ChargeItem.gperf"
    {"modifierExtension", 0x70, 11, -1},
#line 42 "./gperf_class_files/ChargeItem.gperf"
    {"quantity", 0x120, 31, -1},
#line 27 "./gperf_class_files/ChargeItem.gperf"
    {"definitionCanonical", 0xa0, 17, -1},
#line 25 "./gperf_class_files/ChargeItem.gperf"
    {"definitionUri", 0x90, 15, -1},
#line 45 "./gperf_class_files/ChargeItem.gperf"
    {"factorOverride", 0x138, 34, -1},
#line 35 "./gperf_class_files/ChargeItem.gperf"
    {"occurrencePeriod", 0xe8, 25, 1},
#line 55 "./gperf_class_files/ChargeItem.gperf"
    {"productCodeableConcept", 0x198, 44, 1},
#line 34 "./gperf_class_files/ChargeItem.gperf"
    {"occurrenceDateTime", 0xe8, 25, 0},
#line 51 "./gperf_class_files/ChargeItem.gperf"
    {"reason", 0x178, 40, -1},
#line 54 "./gperf_class_files/ChargeItem.gperf"
    {"productReference", 0x198, 44, 0}
  };

static const signed char lookup[] =
  {
    -1, -1, -1, -1,  0, -1, -1,  1, -1, -1,  2, -1,  3, -1,
    -1,  4, -1,  5,  6,  7,  8, -1,  9, 10, 11, 12, -1, 13,
    -1, -1, -1, 14, 15, -1, 16, 17, 18, 19, -1, 20, -1, 21,
    22, 23, 24, 25, -1, 26, 27, 28, -1, 29, 30, 31, 32, 33,
    34, 35, 36, 37, -1, -1, 38, 39, 40, -1, 41, 42, 43, 44,
    -1, -1, -1, 45, 46, -1, 47, 48, 49, -1, -1, -1, -1, -1,
    -1, -1, 50, -1, -1, -1, -1, 51
  };

const struct fhir_deserialize::MemberNameAndOffset *
ChargeItem_Gperf::ChargeItem_MemberLookup (register const char *str, register unsigned int len)
{
  if (len <= MAX_WORD_LENGTH && len >= MIN_WORD_LENGTH)
    {
      register int key = hash (str, len);

      if (key <= MAX_HASH_VALUE && key >= 0)
        {
          register int index = lookup[key];

          if (index >= 0)
            {
              register const char *s = word_array_ChargeItem[index].name;

              if (*str == *s && !strncmp (str + 1, s + 1, len - 1) && s[len] == '\0')
                return &word_array_ChargeItem[index];
            }
        }
    }
  return 0;
}
