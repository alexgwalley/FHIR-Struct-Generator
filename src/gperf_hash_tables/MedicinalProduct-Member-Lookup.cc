/* C++ code produced by gperf version 3.0.1 */
/* Command-line: gperf.exe -t --output-file=src/gperf_hash_tables/MedicinalProduct-Member-Lookup.cc -CGD ./gperf_class_files/MedicinalProduct.gperf  */
/* Computed positions: -k'3' */

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

#line 8 "./gperf_class_files/MedicinalProduct.gperf"
struct fhir_deserialize::MemberNameAndOffset;
enum
  {
    TOTAL_KEYWORDS = 46,
    MIN_WORD_LENGTH = 2,
    MAX_WORD_LENGTH = 36,
    MIN_HASH_VALUE = 2,
    MAX_HASH_VALUE = 85
  };

/* maximum key range = 84, duplicates = 0 */

class MedicinalProduct_Gperf
{
private:
  static inline unsigned int hash (const char *str, unsigned int len);
public:
  static const struct fhir_deserialize::MemberNameAndOffset *MedicinalProduct_MemberLookup (const char *str, unsigned int len);
};

inline unsigned int
MedicinalProduct_Gperf::hash (register const char *str, register unsigned int len)
{
  static const unsigned char asso_values[] =
    {
      86, 86, 86, 86, 86, 86, 86, 86, 86, 86,
      86, 86, 86, 86, 86, 86, 86, 86, 86, 86,
      86, 86, 86, 86, 86, 86, 86, 86, 86, 86,
      86, 86, 86, 86, 86, 86, 86, 86, 86, 86,
      86, 86, 86, 86, 86, 86, 86, 86, 86, 86,
      86, 86, 86, 86, 86, 86, 86, 86, 86, 86,
      86, 86, 86, 86, 86, 86, 86, 86, 86, 86,
      86, 86, 86, 86, 86, 86, 86, 86, 86, 86,
      86, 86, 86, 86, 86, 86, 86, 86, 86, 86,
      86, 86, 86, 86, 86, 86, 86,  0, 86, 40,
       0, 10, 86,  0, 86, 35, 86, 86, 86, 55,
       0, 35, 20, 86, 20,  0, 35, 86, 86, 86,
       0, 86, 86, 86, 86, 86, 86, 86, 86, 86,
      86, 86, 86, 86, 86, 86, 86, 86, 86, 86,
      86, 86, 86, 86, 86, 86, 86, 86, 86, 86,
      86, 86, 86, 86, 86, 86, 86, 86, 86, 86,
      86, 86, 86, 86, 86, 86, 86, 86, 86, 86,
      86, 86, 86, 86, 86, 86, 86, 86, 86, 86,
      86, 86, 86, 86, 86, 86, 86, 86, 86, 86,
      86, 86, 86, 86, 86, 86, 86, 86, 86, 86,
      86, 86, 86, 86, 86, 86, 86, 86, 86, 86,
      86, 86, 86, 86, 86, 86, 86, 86, 86, 86,
      86, 86, 86, 86, 86, 86, 86, 86, 86, 86,
      86, 86, 86, 86, 86, 86, 86, 86, 86, 86,
      86, 86, 86, 86, 86, 86, 86, 86, 86, 86,
      86, 86, 86, 86, 86, 86
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
  return hval;
}

static const struct fhir_deserialize::MemberNameAndOffset word_array_MedicinalProduct[] =
  {
#line 11 "./gperf_class_files/MedicinalProduct.gperf"
    {"id", 0x8, 1, -1},
#line 15 "./gperf_class_files/MedicinalProduct.gperf"
    {"text", 0x40, 5, -1},
#line 45 "./gperf_class_files/MedicinalProduct.gperf"
    {"contact", 0x130, 35, -1},
#line 14 "./gperf_class_files/MedicinalProduct.gperf"
    {"language", 0x30, 4, -1},
#line 17 "./gperf_class_files/MedicinalProduct.gperf"
    {"contained", 0x50, 7, -1},
#line 43 "./gperf_class_files/MedicinalProduct.gperf"
    {"masterFile", 0x120, 33, -1},
#line 10 "./gperf_class_files/MedicinalProduct.gperf"
    {"resourceType", 0x0, 0, -1},
#line 44 "./gperf_class_files/MedicinalProduct.gperf"
    {"contact_count", 0x128, 34, -1},
#line 16 "./gperf_class_files/MedicinalProduct.gperf"
    {"contained_count", 0x48, 6, -1},
#line 42 "./gperf_class_files/MedicinalProduct.gperf"
    {"masterFile_count", 0x118, 32, -1},
#line 21 "./gperf_class_files/MedicinalProduct.gperf"
    {"modifierExtension", 0x70, 11, -1},
#line 27 "./gperf_class_files/MedicinalProduct.gperf"
    {"legalStatusOfSupply", 0xa0, 17, -1},
#line 23 "./gperf_class_files/MedicinalProduct.gperf"
    {"identifier", 0x80, 13, -1},
#line 37 "./gperf_class_files/MedicinalProduct.gperf"
    {"pharmaceuticalProduct", 0xf0, 27, -1},
#line 20 "./gperf_class_files/MedicinalProduct.gperf"
    {"modifierExtension_count", 0x68, 10, -1},
#line 24 "./gperf_class_files/MedicinalProduct.gperf"
    {"type", 0x88, 14, -1},
#line 30 "./gperf_class_files/MedicinalProduct.gperf"
    {"specialMeasures", 0xb8, 20, -1},
#line 22 "./gperf_class_files/MedicinalProduct.gperf"
    {"identifier_count", 0x78, 12, -1},
#line 36 "./gperf_class_files/MedicinalProduct.gperf"
    {"pharmaceuticalProduct_count", 0xe8, 26, -1},
#line 55 "./gperf_class_files/MedicinalProduct.gperf"
    {"specialDesignation", 0x180, 45, -1},
#line 28 "./gperf_class_files/MedicinalProduct.gperf"
    {"additionalMonitoringIndicator", 0xa8, 18, -1},
#line 53 "./gperf_class_files/MedicinalProduct.gperf"
    {"manufacturingBusinessOperation", 0x170, 43, -1},
#line 29 "./gperf_class_files/MedicinalProduct.gperf"
    {"specialMeasures_count", 0xb0, 19, -1},
#line 31 "./gperf_class_files/MedicinalProduct.gperf"
    {"paediatricUseIndicator", 0xc0, 21, -1},
#line 13 "./gperf_class_files/MedicinalProduct.gperf"
    {"implicitRules", 0x20, 3, -1},
#line 54 "./gperf_class_files/MedicinalProduct.gperf"
    {"specialDesignation_count", 0x178, 44, -1},
#line 35 "./gperf_class_files/MedicinalProduct.gperf"
    {"marketingStatus", 0xe0, 25, -1},
#line 52 "./gperf_class_files/MedicinalProduct.gperf"
    {"manufacturingBusinessOperation_count", 0x168, 42, -1},
#line 12 "./gperf_class_files/MedicinalProduct.gperf"
    {"meta", 0x18, 2, -1},
#line 34 "./gperf_class_files/MedicinalProduct.gperf"
    {"marketingStatus_count", 0xd8, 24, -1},
#line 19 "./gperf_class_files/MedicinalProduct.gperf"
    {"extension", 0x60, 9, -1},
#line 47 "./gperf_class_files/MedicinalProduct.gperf"
    {"clinicalTrial", 0x140, 37, -1},
#line 51 "./gperf_class_files/MedicinalProduct.gperf"
    {"crossReference", 0x160, 41, -1},
#line 18 "./gperf_class_files/MedicinalProduct.gperf"
    {"extension_count", 0x58, 8, -1},
#line 41 "./gperf_class_files/MedicinalProduct.gperf"
    {"attachedDocument", 0x110, 31, -1},
#line 46 "./gperf_class_files/MedicinalProduct.gperf"
    {"clinicalTrial_count", 0x138, 36, -1},
#line 50 "./gperf_class_files/MedicinalProduct.gperf"
    {"crossReference_count", 0x158, 40, -1},
#line 33 "./gperf_class_files/MedicinalProduct.gperf"
    {"productClassification", 0xd0, 23, -1},
#line 40 "./gperf_class_files/MedicinalProduct.gperf"
    {"attachedDocument_count", 0x108, 30, -1},
#line 49 "./gperf_class_files/MedicinalProduct.gperf"
    {"name", 0x150, 39, -1},
#line 25 "./gperf_class_files/MedicinalProduct.gperf"
    {"domain", 0x90, 15, -1},
#line 32 "./gperf_class_files/MedicinalProduct.gperf"
    {"productClassification_count", 0xc8, 22, -1},
#line 39 "./gperf_class_files/MedicinalProduct.gperf"
    {"packagedMedicinalProduct", 0x100, 29, -1},
#line 48 "./gperf_class_files/MedicinalProduct.gperf"
    {"name_count", 0x148, 38, -1},
#line 38 "./gperf_class_files/MedicinalProduct.gperf"
    {"packagedMedicinalProduct_count", 0xf8, 28, -1},
#line 26 "./gperf_class_files/MedicinalProduct.gperf"
    {"combinedPharmaceuticalDoseForm", 0x98, 16, -1}
  };

static const signed char lookup[] =
  {
    -1, -1,  0, -1,  1, -1, -1,  2,  3,  4,  5, -1,  6,  7,
    -1,  8,  9, 10, -1, 11, 12, 13, -1, 14, 15, 16, 17, 18,
    19, 20, 21, 22, 23, 24, 25, 26, 27, -1, -1, 28, -1, 29,
    -1, -1, 30, -1, -1, -1, 31, 32, 33, 34, -1, -1, 35, 36,
    37, 38, -1, 39, -1, 40, 41, -1, 42, 43, -1, -1, -1, -1,
    44, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, 45
  };

const struct fhir_deserialize::MemberNameAndOffset *
MedicinalProduct_Gperf::MedicinalProduct_MemberLookup (register const char *str, register unsigned int len)
{
  if (len <= MAX_WORD_LENGTH && len >= MIN_WORD_LENGTH)
    {
      register int key = hash (str, len);

      if (key <= MAX_HASH_VALUE && key >= 0)
        {
          register int index = lookup[key];

          if (index >= 0)
            {
              register const char *s = word_array_MedicinalProduct[index].name;

              if (*str == *s && !strncmp (str + 1, s + 1, len - 1) && s[len] == '\0')
                return &word_array_MedicinalProduct[index];
            }
        }
    }
  return 0;
}
