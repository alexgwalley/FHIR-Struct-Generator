/* C++ code produced by gperf version 3.0.1 */
/* Command-line: gperf.exe -t --output-file=src/gperf_hash_tables/Immunization-Member-Lookup.cc -CGD ./gperf_class_files/Immunization.gperf  */
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

#line 8 "./gperf_class_files/Immunization.gperf"
struct fhir_deserialize::MemberNameAndOffset;
enum
  {
    TOTAL_KEYWORDS = 51,
    MIN_WORD_LENGTH = 2,
    MAX_WORD_LENGTH = 24,
    MIN_HASH_VALUE = 4,
    MAX_HASH_VALUE = 70
  };

/* maximum key range = 67, duplicates = 0 */

class Immunization_Gperf
{
private:
  static inline unsigned int hash (const char *str, unsigned int len);
public:
  static const struct fhir_deserialize::MemberNameAndOffset *Immunization_MemberLookup (const char *str, unsigned int len);
};

inline unsigned int
Immunization_Gperf::hash (register const char *str, register unsigned int len)
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
      71, 71, 71, 71,  5, 71, 71, 71, 71, 71,
      71, 71, 71, 71, 71, 71, 71, 71,  0, 40,
      20, 25, 30, 71, 71, 10,  0, 71, 10,  0,
      35, 15,  0,  5, 15,  5, 20,  0, 15, 71,
      71, 35, 71, 71, 71, 71, 71, 71, 71, 71,
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
      71, 71, 71, 71, 71, 71, 71
    };
  register int hval = len;

  switch (hval)
    {
      default:
        hval += asso_values[(unsigned char)str[2]+1];
      /*FALLTHROUGH*/
      case 2:
      case 1:
        hval += asso_values[(unsigned char)str[0]];
        break;
    }
  return hval;
}

static const struct fhir_deserialize::MemberNameAndOffset word_array_Immunization[] =
  {
#line 12 "./gperf_class_files/Immunization.gperf"
    {"meta", 0x18, 2, -1},
#line 27 "./gperf_class_files/Immunization.gperf"
    {"patient", 0xa8, 17, -1},
#line 38 "./gperf_class_files/Immunization.gperf"
    {"site", 0x120, 28, -1},
#line 24 "./gperf_class_files/Immunization.gperf"
    {"status", 0x88, 14, -1},
#line 11 "./gperf_class_files/Immunization.gperf"
    {"id", 0x8, 1, -1},
#line 32 "./gperf_class_files/Immunization.gperf"
    {"primarySource", 0xe0, 22, -1},
#line 42 "./gperf_class_files/Immunization.gperf"
    {"performer", 0x140, 32, -1},
#line 60 "./gperf_class_files/Immunization.gperf"
    {"protocolApplied", 0x1d0, 50, -1},
#line 25 "./gperf_class_files/Immunization.gperf"
    {"statusReason", 0x98, 15, -1},
#line 55 "./gperf_class_files/Immunization.gperf"
    {"programEligibility", 0x1a8, 45, -1},
#line 36 "./gperf_class_files/Immunization.gperf"
    {"lotNumber", 0x100, 26, -1},
#line 41 "./gperf_class_files/Immunization.gperf"
    {"performer_count", 0x138, 31, -1},
#line 59 "./gperf_class_files/Immunization.gperf"
    {"protocolApplied_count", 0x1c8, 49, -1},
#line 58 "./gperf_class_files/Immunization.gperf"
    {"reaction", 0x1c0, 48, -1},
#line 54 "./gperf_class_files/Immunization.gperf"
    {"programEligibility_count", 0x1a0, 44, -1},
#line 46 "./gperf_class_files/Immunization.gperf"
    {"reasonCode", 0x160, 36, -1},
#line 49 "./gperf_class_files/Immunization.gperf"
    {"isSubpotent", 0x178, 39, -1},
#line 35 "./gperf_class_files/Immunization.gperf"
    {"manufacturer", 0xf8, 25, -1},
#line 13 "./gperf_class_files/Immunization.gperf"
    {"implicitRules", 0x20, 3, -1},
#line 57 "./gperf_class_files/Immunization.gperf"
    {"reaction_count", 0x1b8, 47, -1},
#line 48 "./gperf_class_files/Immunization.gperf"
    {"reasonReference", 0x170, 38, -1},
#line 45 "./gperf_class_files/Immunization.gperf"
    {"reasonCode_count", 0x158, 35, -1},
#line 33 "./gperf_class_files/Immunization.gperf"
    {"reportOrigin", 0xe8, 23, -1},
#line 14 "./gperf_class_files/Immunization.gperf"
    {"language", 0x30, 4, -1},
#line 19 "./gperf_class_files/Immunization.gperf"
    {"extension", 0x60, 9, -1},
#line 39 "./gperf_class_files/Immunization.gperf"
    {"route", 0x128, 29, -1},
#line 47 "./gperf_class_files/Immunization.gperf"
    {"reasonReference_count", 0x168, 37, -1},
#line 34 "./gperf_class_files/Immunization.gperf"
    {"location", 0xf0, 24, -1},
#line 44 "./gperf_class_files/Immunization.gperf"
    {"note", 0x150, 34, -1},
#line 18 "./gperf_class_files/Immunization.gperf"
    {"extension_count", 0x58, 8, -1},
#line 21 "./gperf_class_files/Immunization.gperf"
    {"modifierExtension", 0x70, 11, -1},
#line 31 "./gperf_class_files/Immunization.gperf"
    {"recorded", 0xd0, 21, -1},
#line 37 "./gperf_class_files/Immunization.gperf"
    {"expirationDate", 0x110, 27, -1},
#line 43 "./gperf_class_files/Immunization.gperf"
    {"note_count", 0x148, 33, -1},
#line 26 "./gperf_class_files/Immunization.gperf"
    {"vaccineCode", 0xa0, 16, -1},
#line 10 "./gperf_class_files/Immunization.gperf"
    {"resourceType", 0x0, 0, -1},
#line 20 "./gperf_class_files/Immunization.gperf"
    {"modifierExtension_count", 0x68, 10, -1},
#line 53 "./gperf_class_files/Immunization.gperf"
    {"education", 0x198, 43, -1},
#line 23 "./gperf_class_files/Immunization.gperf"
    {"identifier", 0x80, 13, -1},
#line 30 "./gperf_class_files/Immunization.gperf"
    {"occurrenceString", 0xc0, 20, 1},
#line 40 "./gperf_class_files/Immunization.gperf"
    {"doseQuantity", 0x130, 30, -1},
#line 29 "./gperf_class_files/Immunization.gperf"
    {"occurrenceDateTime", 0xc0, 20, 0},
#line 28 "./gperf_class_files/Immunization.gperf"
    {"encounter", 0xb0, 18, -1},
#line 52 "./gperf_class_files/Immunization.gperf"
    {"education_count", 0x190, 42, -1},
#line 22 "./gperf_class_files/Immunization.gperf"
    {"identifier_count", 0x78, 12, -1},
#line 56 "./gperf_class_files/Immunization.gperf"
    {"fundingSource", 0x1b0, 46, -1},
#line 15 "./gperf_class_files/Immunization.gperf"
    {"text", 0x40, 5, -1},
#line 51 "./gperf_class_files/Immunization.gperf"
    {"subpotentReason", 0x188, 41, -1},
#line 17 "./gperf_class_files/Immunization.gperf"
    {"contained", 0x50, 7, -1},
#line 50 "./gperf_class_files/Immunization.gperf"
    {"subpotentReason_count", 0x180, 40, -1},
#line 16 "./gperf_class_files/Immunization.gperf"
    {"contained_count", 0x48, 6, -1}
  };

static const signed char lookup[] =
  {
    -1, -1, -1, -1,  0, -1, -1,  1, -1,  2, -1,  3,  4,  5,
     6,  7, -1,  8,  9, 10, 11, 12, -1, 13, 14, 15, 16, 17,
    18, 19, 20, 21, 22, 23, 24, 25, 26, -1, 27, 28, 29, -1,
    30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43,
    44, -1, 45, 46, 47, -1, -1, -1, 48, -1, 49, -1, -1, -1,
    50
  };

const struct fhir_deserialize::MemberNameAndOffset *
Immunization_Gperf::Immunization_MemberLookup (register const char *str, register unsigned int len)
{
  if (len <= MAX_WORD_LENGTH && len >= MIN_WORD_LENGTH)
    {
      register int key = hash (str, len);

      if (key <= MAX_HASH_VALUE && key >= 0)
        {
          register int index = lookup[key];

          if (index >= 0)
            {
              register const char *s = word_array_Immunization[index].name;

              if (*str == *s && !strncmp (str + 1, s + 1, len - 1) && s[len] == '\0')
                return &word_array_Immunization[index];
            }
        }
    }
  return 0;
}
