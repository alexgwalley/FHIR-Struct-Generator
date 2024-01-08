/* C++ code produced by gperf version 3.0.1 */
/* Command-line: gperf.exe -t --output-file=src/generated/gperf_hash_tables/ExplanationOfBenefit-Member-Lookup.cc -CGD ./src/generated/gperf_class_files/ExplanationOfBenefit.gperf  */
/* Computed positions: -k'1,4,11' */

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

#line 8 "./src/generated/gperf_class_files/ExplanationOfBenefit.gperf"
struct fhir_deserialize::MemberNameAndOffset;
enum
  {
    TOTAL_KEYWORDS = 70,
    MIN_WORD_LENGTH = 2,
    MAX_WORD_LENGTH = 23,
    MIN_HASH_VALUE = 2,
    MAX_HASH_VALUE = 156
  };

/* maximum key range = 155, duplicates = 0 */

class ExplanationOfBenefit_Gperf
{
private:
  static inline unsigned int hash (const char *str, unsigned int len);
public:
  static const struct fhir_deserialize::MemberNameAndOffset *ExplanationOfBenefit_MemberLookup (const char *str, unsigned int len);
};

inline unsigned int
ExplanationOfBenefit_Gperf::hash (register const char *str, register unsigned int len)
{
  static const unsigned char asso_values[] =
    {
      157, 157, 157, 157, 157, 157, 157, 157, 157, 157,
      157, 157, 157, 157, 157, 157, 157, 157, 157, 157,
      157, 157, 157, 157, 157, 157, 157, 157, 157, 157,
      157, 157, 157, 157, 157, 157, 157, 157, 157, 157,
      157, 157, 157, 157, 157, 157, 157, 157, 157, 157,
      157, 157, 157, 157, 157, 157, 157, 157, 157, 157,
      157, 157, 157, 157, 157,  25, 157, 157, 157, 157,
      157, 157, 157,  55, 157, 157, 157, 157, 157, 157,
       20, 157, 157, 157,  10, 157, 157, 157, 157, 157,
      157, 157, 157, 157, 157,   0, 157,   5,  50,   0,
       55,   0,  50,   0, 157,   0, 157, 157,  20,  35,
       75,  45,  15, 157,  15,   0,  25,  40,  10, 157,
      157, 157, 157, 157, 157, 157, 157, 157, 157, 157,
      157, 157, 157, 157, 157, 157, 157, 157, 157, 157,
      157, 157, 157, 157, 157, 157, 157, 157, 157, 157,
      157, 157, 157, 157, 157, 157, 157, 157, 157, 157,
      157, 157, 157, 157, 157, 157, 157, 157, 157, 157,
      157, 157, 157, 157, 157, 157, 157, 157, 157, 157,
      157, 157, 157, 157, 157, 157, 157, 157, 157, 157,
      157, 157, 157, 157, 157, 157, 157, 157, 157, 157,
      157, 157, 157, 157, 157, 157, 157, 157, 157, 157,
      157, 157, 157, 157, 157, 157, 157, 157, 157, 157,
      157, 157, 157, 157, 157, 157, 157, 157, 157, 157,
      157, 157, 157, 157, 157, 157, 157, 157, 157, 157,
      157, 157, 157, 157, 157, 157, 157, 157, 157, 157,
      157, 157, 157, 157, 157, 157
    };
  register int hval = len;

  switch (hval)
    {
      default:
        hval += asso_values[(unsigned char)str[10]];
      /*FALLTHROUGH*/
      case 10:
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

static const struct fhir_deserialize::MemberNameAndOffset word_array_ExplanationOfBenefit[] =
  {
#line 11 "./src/generated/gperf_class_files/ExplanationOfBenefit.gperf"
    {"id", 0x8, 1, -1},
#line 44 "./src/generated/gperf_class_files/ExplanationOfBenefit.gperf"
    {"claim", 0x140, 34, -1},
#line 31 "./src/generated/gperf_class_files/ExplanationOfBenefit.gperf"
    {"enterer", 0xd8, 21, -1},
#line 53 "./src/generated/gperf_class_files/ExplanationOfBenefit.gperf"
    {"careTeam", 0x198, 43, -1},
#line 19 "./src/generated/gperf_class_files/ExplanationOfBenefit.gperf"
    {"extension", 0x60, 9, -1},
#line 30 "./src/generated/gperf_class_files/ExplanationOfBenefit.gperf"
    {"created", 0xc8, 20, -1},
#line 63 "./src/generated/gperf_class_files/ExplanationOfBenefit.gperf"
    {"accident", 0x1e8, 53, -1},
#line 18 "./src/generated/gperf_class_files/ExplanationOfBenefit.gperf"
    {"extension_count", 0x58, 8, -1},
#line 26 "./src/generated/gperf_class_files/ExplanationOfBenefit.gperf"
    {"subType", 0xa0, 16, -1},
#line 41 "./src/generated/gperf_class_files/ExplanationOfBenefit.gperf"
    {"payee", 0x128, 31, -1},
#line 28 "./src/generated/gperf_class_files/ExplanationOfBenefit.gperf"
    {"patient", 0xb8, 18, -1},
#line 42 "./src/generated/gperf_class_files/ExplanationOfBenefit.gperf"
    {"referral", 0x130, 32, -1},
#line 59 "./src/generated/gperf_class_files/ExplanationOfBenefit.gperf"
    {"procedure", 0x1c8, 49, -1},
#line 60 "./src/generated/gperf_class_files/ExplanationOfBenefit.gperf"
    {"precedence", 0x1d0, 50, -1},
#line 76 "./src/generated/gperf_class_files/ExplanationOfBenefit.gperf"
    {"processNote", 0x250, 66, -1},
#line 38 "./src/generated/gperf_class_files/ExplanationOfBenefit.gperf"
    {"related", 0x110, 28, -1},
#line 14 "./src/generated/gperf_class_files/ExplanationOfBenefit.gperf"
    {"language", 0x30, 4, -1},
#line 25 "./src/generated/gperf_class_files/ExplanationOfBenefit.gperf"
    {"type", 0x98, 15, -1},
#line 58 "./src/generated/gperf_class_files/ExplanationOfBenefit.gperf"
    {"procedure_count", 0x1c0, 48, -1},
#line 24 "./src/generated/gperf_class_files/ExplanationOfBenefit.gperf"
    {"status", 0x88, 14, -1},
#line 75 "./src/generated/gperf_class_files/ExplanationOfBenefit.gperf"
    {"processNote_count", 0x248, 65, -1},
#line 33 "./src/generated/gperf_class_files/ExplanationOfBenefit.gperf"
    {"provider", 0xe8, 23, -1},
#line 17 "./src/generated/gperf_class_files/ExplanationOfBenefit.gperf"
    {"contained", 0x50, 7, -1},
#line 71 "./src/generated/gperf_class_files/ExplanationOfBenefit.gperf"
    {"total", 0x228, 61, -1},
#line 65 "./src/generated/gperf_class_files/ExplanationOfBenefit.gperf"
    {"item", 0x1f8, 55, -1},
#line 16 "./src/generated/gperf_class_files/ExplanationOfBenefit.gperf"
    {"contained_count", 0x48, 6, -1},
#line 27 "./src/generated/gperf_class_files/ExplanationOfBenefit.gperf"
    {"use", 0xa8, 17, -1},
#line 12 "./src/generated/gperf_class_files/ExplanationOfBenefit.gperf"
    {"meta", 0x18, 2, -1},
#line 64 "./src/generated/gperf_class_files/ExplanationOfBenefit.gperf"
    {"item_count", 0x1f0, 54, -1},
#line 32 "./src/generated/gperf_class_files/ExplanationOfBenefit.gperf"
    {"insurer", 0xe0, 22, -1},
#line 62 "./src/generated/gperf_class_files/ExplanationOfBenefit.gperf"
    {"insurance", 0x1e0, 52, -1},
#line 49 "./src/generated/gperf_class_files/ExplanationOfBenefit.gperf"
    {"preAuthRef", 0x178, 39, -1},
#line 46 "./src/generated/gperf_class_files/ExplanationOfBenefit.gperf"
    {"outcome", 0x150, 36, -1},
#line 13 "./src/generated/gperf_class_files/ExplanationOfBenefit.gperf"
    {"implicitRules", 0x20, 3, -1},
#line 15 "./src/generated/gperf_class_files/ExplanationOfBenefit.gperf"
    {"text", 0x40, 5, -1},
#line 61 "./src/generated/gperf_class_files/ExplanationOfBenefit.gperf"
    {"insurance_count", 0x1d8, 51, -1},
#line 48 "./src/generated/gperf_class_files/ExplanationOfBenefit.gperf"
    {"preAuthRef_count", 0x170, 38, -1},
#line 72 "./src/generated/gperf_class_files/ExplanationOfBenefit.gperf"
    {"payment", 0x230, 62, -1},
#line 43 "./src/generated/gperf_class_files/ExplanationOfBenefit.gperf"
    {"facility", 0x138, 33, -1},
#line 52 "./src/generated/gperf_class_files/ExplanationOfBenefit.gperf"
    {"careTeam_count", 0x190, 42, -1},
#line 77 "./src/generated/gperf_class_files/ExplanationOfBenefit.gperf"
    {"benefitPeriod", 0x258, 67, -1},
#line 57 "./src/generated/gperf_class_files/ExplanationOfBenefit.gperf"
    {"diagnosis", 0x1b8, 47, -1},
#line 40 "./src/generated/gperf_class_files/ExplanationOfBenefit.gperf"
    {"originalPrescription", 0x120, 30, -1},
#line 70 "./src/generated/gperf_class_files/ExplanationOfBenefit.gperf"
    {"total_count", 0x220, 60, -1},
#line 67 "./src/generated/gperf_class_files/ExplanationOfBenefit.gperf"
    {"addItem", 0x208, 57, -1},
#line 34 "./src/generated/gperf_class_files/ExplanationOfBenefit.gperf"
    {"priority", 0xf0, 24, -1},
#line 79 "./src/generated/gperf_class_files/ExplanationOfBenefit.gperf"
    {"benefitBalance", 0x268, 69, -1},
#line 56 "./src/generated/gperf_class_files/ExplanationOfBenefit.gperf"
    {"diagnosis_count", 0x1b0, 46, -1},
#line 39 "./src/generated/gperf_class_files/ExplanationOfBenefit.gperf"
    {"prescription", 0x118, 29, -1},
#line 37 "./src/generated/gperf_class_files/ExplanationOfBenefit.gperf"
    {"related_count", 0x108, 27, -1},
#line 78 "./src/generated/gperf_class_files/ExplanationOfBenefit.gperf"
    {"benefitBalance_count", 0x260, 68, -1},
#line 51 "./src/generated/gperf_class_files/ExplanationOfBenefit.gperf"
    {"preAuthRefPeriod", 0x188, 41, -1},
#line 21 "./src/generated/gperf_class_files/ExplanationOfBenefit.gperf"
    {"modifierExtension", 0x70, 11, -1},
#line 50 "./src/generated/gperf_class_files/ExplanationOfBenefit.gperf"
    {"preAuthRefPeriod_count", 0x180, 40, -1},
#line 20 "./src/generated/gperf_class_files/ExplanationOfBenefit.gperf"
    {"modifierExtension_count", 0x68, 10, -1},
#line 55 "./src/generated/gperf_class_files/ExplanationOfBenefit.gperf"
    {"supportingInfo", 0x1a8, 45, -1},
#line 23 "./src/generated/gperf_class_files/ExplanationOfBenefit.gperf"
    {"identifier", 0x80, 13, -1},
#line 10 "./src/generated/gperf_class_files/ExplanationOfBenefit.gperf"
    {"resourceType", 0x0, 0, -1},
#line 45 "./src/generated/gperf_class_files/ExplanationOfBenefit.gperf"
    {"claimResponse", 0x148, 35, -1},
#line 74 "./src/generated/gperf_class_files/ExplanationOfBenefit.gperf"
    {"form", 0x240, 64, -1},
#line 54 "./src/generated/gperf_class_files/ExplanationOfBenefit.gperf"
    {"supportingInfo_count", 0x1a0, 44, -1},
#line 22 "./src/generated/gperf_class_files/ExplanationOfBenefit.gperf"
    {"identifier_count", 0x78, 12, -1},
#line 73 "./src/generated/gperf_class_files/ExplanationOfBenefit.gperf"
    {"formCode", 0x238, 63, -1},
#line 29 "./src/generated/gperf_class_files/ExplanationOfBenefit.gperf"
    {"billablePeriod", 0xc0, 19, -1},
#line 69 "./src/generated/gperf_class_files/ExplanationOfBenefit.gperf"
    {"adjudication", 0x218, 59, -1},
#line 68 "./src/generated/gperf_class_files/ExplanationOfBenefit.gperf"
    {"adjudication_count", 0x210, 58, -1},
#line 66 "./src/generated/gperf_class_files/ExplanationOfBenefit.gperf"
    {"addItem_count", 0x200, 56, -1},
#line 36 "./src/generated/gperf_class_files/ExplanationOfBenefit.gperf"
    {"fundsReserve", 0x100, 26, -1},
#line 35 "./src/generated/gperf_class_files/ExplanationOfBenefit.gperf"
    {"fundsReserveRequested", 0xf8, 25, -1},
#line 47 "./src/generated/gperf_class_files/ExplanationOfBenefit.gperf"
    {"disposition", 0x160, 37, -1}
  };

static const signed char lookup[] =
  {
    -1, -1,  0, -1, -1,  1, -1,  2,  3,  4, -1, -1,  5,  6,
    -1,  7, -1,  8, -1, -1,  9, -1, 10, 11, 12, 13, 14, 15,
    16, 17, 18, 19, 20, 21, 22, 23, -1, -1, -1, 24, 25, -1,
    -1, 26, 27, 28, -1, 29, -1, 30, 31, -1, 32, 33, 34, 35,
    36, 37, 38, 39, -1, -1, -1, 40, 41, 42, 43, 44, 45, 46,
    47, -1, 48, 49, -1, 50, 51, 52, -1, -1, -1, -1, 53, 54,
    55, 56, -1, 57, 58, 59, 60, 61, -1, 62, -1, -1, -1, -1,
    -1, 63, -1, -1, 64, -1, -1, -1, -1, -1, 65, -1, -1, -1,
    -1, 66, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, 67, -1, -1, -1, -1, -1, -1, -1, -1, 68, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, 69
  };

const struct fhir_deserialize::MemberNameAndOffset *
ExplanationOfBenefit_Gperf::ExplanationOfBenefit_MemberLookup (register const char *str, register unsigned int len)
{
  if (len <= MAX_WORD_LENGTH && len >= MIN_WORD_LENGTH)
    {
      register int key = hash (str, len);

      if (key <= MAX_HASH_VALUE && key >= 0)
        {
          register int index = lookup[key];

          if (index >= 0)
            {
              register const char *s = word_array_ExplanationOfBenefit[index].name;

              if (*str == *s && !strncmp (str + 1, s + 1, len - 1) && s[len] == '\0')
                return &word_array_ExplanationOfBenefit[index];
            }
        }
    }
  return 0;
}
