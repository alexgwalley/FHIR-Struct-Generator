/* C++ code produced by gperf version 3.0.1 */
/* Command-line: gperf.exe -t --output-file=src/generated/gperf_hash_tables/MedicinalProduct-Member-Lookup.cc -CGD ./src/generated/gperf_class_files/MedicinalProduct.gperf  */
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

#line 8 "./src/generated/gperf_class_files/MedicinalProduct.gperf"
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
#line 11 "./src/generated/gperf_class_files/MedicinalProduct.gperf"
    {"id", 0x8, 1, -1, {(U8*)"id", 2}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 15 "./src/generated/gperf_class_files/MedicinalProduct.gperf"
    {"text", 0x40, 5, -1, {(U8*)"text", 4}, fhir_deserialize::ResourceType::Narrative, 0, fhir_deserialize::ResourceType::Unknown},
#line 45 "./src/generated/gperf_class_files/MedicinalProduct.gperf"
    {"contact", 0x130, 35, -1, {(U8*)"contact", 7}, fhir_deserialize::ResourceType::Reference, 0, fhir_deserialize::ResourceType::Unknown},
#line 14 "./src/generated/gperf_class_files/MedicinalProduct.gperf"
    {"language", 0x30, 4, -1, {(U8*)"language", 8}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 17 "./src/generated/gperf_class_files/MedicinalProduct.gperf"
    {"contained", 0x50, 7, -1, {(U8*)"contained", 9}, fhir_deserialize::ResourceType::Resource, 0, fhir_deserialize::ResourceType::Unknown},
#line 43 "./src/generated/gperf_class_files/MedicinalProduct.gperf"
    {"masterFile", 0x120, 33, -1, {(U8*)"masterFile", 10}, fhir_deserialize::ResourceType::Reference, 0, fhir_deserialize::ResourceType::Unknown},
#line 10 "./src/generated/gperf_class_files/MedicinalProduct.gperf"
    {"resourceType", 0x0, 0, -1, {(U8*)"resourceType", 12}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 44 "./src/generated/gperf_class_files/MedicinalProduct.gperf"
    {"contact_count", 0x128, 34, -1, {(U8*)"contact_count", 13}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 16 "./src/generated/gperf_class_files/MedicinalProduct.gperf"
    {"contained_count", 0x48, 6, -1, {(U8*)"contained_count", 15}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 42 "./src/generated/gperf_class_files/MedicinalProduct.gperf"
    {"masterFile_count", 0x118, 32, -1, {(U8*)"masterFile_count", 16}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 21 "./src/generated/gperf_class_files/MedicinalProduct.gperf"
    {"modifierExtension", 0x70, 11, -1, {(U8*)"modifierExtension", 17}, fhir_deserialize::ResourceType::Extension, 0, fhir_deserialize::ResourceType::Unknown},
#line 27 "./src/generated/gperf_class_files/MedicinalProduct.gperf"
    {"legalStatusOfSupply", 0xa0, 17, -1, {(U8*)"legalStatusOfSupply", 19}, fhir_deserialize::ResourceType::CodeableConcept, 0, fhir_deserialize::ResourceType::Unknown},
#line 23 "./src/generated/gperf_class_files/MedicinalProduct.gperf"
    {"identifier", 0x80, 13, -1, {(U8*)"identifier", 10}, fhir_deserialize::ResourceType::Identifier, 0, fhir_deserialize::ResourceType::Unknown},
#line 37 "./src/generated/gperf_class_files/MedicinalProduct.gperf"
    {"pharmaceuticalProduct", 0xf0, 27, -1, {(U8*)"pharmaceuticalProduct", 21}, fhir_deserialize::ResourceType::Reference, 0, fhir_deserialize::ResourceType::Unknown},
#line 20 "./src/generated/gperf_class_files/MedicinalProduct.gperf"
    {"modifierExtension_count", 0x68, 10, -1, {(U8*)"modifierExtension_count", 23}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 24 "./src/generated/gperf_class_files/MedicinalProduct.gperf"
    {"type", 0x88, 14, -1, {(U8*)"type", 4}, fhir_deserialize::ResourceType::CodeableConcept, 0, fhir_deserialize::ResourceType::Unknown},
#line 30 "./src/generated/gperf_class_files/MedicinalProduct.gperf"
    {"specialMeasures", 0xb8, 20, -1, {(U8*)"specialMeasures", 15}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 22 "./src/generated/gperf_class_files/MedicinalProduct.gperf"
    {"identifier_count", 0x78, 12, -1, {(U8*)"identifier_count", 16}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 36 "./src/generated/gperf_class_files/MedicinalProduct.gperf"
    {"pharmaceuticalProduct_count", 0xe8, 26, -1, {(U8*)"pharmaceuticalProduct_count", 27}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 55 "./src/generated/gperf_class_files/MedicinalProduct.gperf"
    {"specialDesignation", 0x180, 45, -1, {(U8*)"specialDesignation", 18}, fhir_deserialize::ResourceType::MedicinalProduct_SpecialDesignation, 0, fhir_deserialize::ResourceType::Unknown},
#line 28 "./src/generated/gperf_class_files/MedicinalProduct.gperf"
    {"additionalMonitoringIndicator", 0xa8, 18, -1, {(U8*)"additionalMonitoringIndicator", 29}, fhir_deserialize::ResourceType::CodeableConcept, 0, fhir_deserialize::ResourceType::Unknown},
#line 53 "./src/generated/gperf_class_files/MedicinalProduct.gperf"
    {"manufacturingBusinessOperation", 0x170, 43, -1, {(U8*)"manufacturingBusinessOperation", 30}, fhir_deserialize::ResourceType::MedicinalProduct_ManufacturingBusinessOperation, 0, fhir_deserialize::ResourceType::Unknown},
#line 29 "./src/generated/gperf_class_files/MedicinalProduct.gperf"
    {"specialMeasures_count", 0xb0, 19, -1, {(U8*)"specialMeasures_count", 21}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 31 "./src/generated/gperf_class_files/MedicinalProduct.gperf"
    {"paediatricUseIndicator", 0xc0, 21, -1, {(U8*)"paediatricUseIndicator", 22}, fhir_deserialize::ResourceType::CodeableConcept, 0, fhir_deserialize::ResourceType::Unknown},
#line 13 "./src/generated/gperf_class_files/MedicinalProduct.gperf"
    {"implicitRules", 0x20, 3, -1, {(U8*)"implicitRules", 13}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 54 "./src/generated/gperf_class_files/MedicinalProduct.gperf"
    {"specialDesignation_count", 0x178, 44, -1, {(U8*)"specialDesignation_count", 24}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 35 "./src/generated/gperf_class_files/MedicinalProduct.gperf"
    {"marketingStatus", 0xe0, 25, -1, {(U8*)"marketingStatus", 15}, fhir_deserialize::ResourceType::MarketingStatus, 0, fhir_deserialize::ResourceType::Unknown},
#line 52 "./src/generated/gperf_class_files/MedicinalProduct.gperf"
    {"manufacturingBusinessOperation_count", 0x168, 42, -1, {(U8*)"manufacturingBusinessOperation_count", 36}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 12 "./src/generated/gperf_class_files/MedicinalProduct.gperf"
    {"meta", 0x18, 2, -1, {(U8*)"meta", 4}, fhir_deserialize::ResourceType::Meta, 0, fhir_deserialize::ResourceType::Unknown},
#line 34 "./src/generated/gperf_class_files/MedicinalProduct.gperf"
    {"marketingStatus_count", 0xd8, 24, -1, {(U8*)"marketingStatus_count", 21}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 19 "./src/generated/gperf_class_files/MedicinalProduct.gperf"
    {"extension", 0x60, 9, -1, {(U8*)"extension", 9}, fhir_deserialize::ResourceType::Extension, 0, fhir_deserialize::ResourceType::Unknown},
#line 47 "./src/generated/gperf_class_files/MedicinalProduct.gperf"
    {"clinicalTrial", 0x140, 37, -1, {(U8*)"clinicalTrial", 13}, fhir_deserialize::ResourceType::Reference, 0, fhir_deserialize::ResourceType::Unknown},
#line 51 "./src/generated/gperf_class_files/MedicinalProduct.gperf"
    {"crossReference", 0x160, 41, -1, {(U8*)"crossReference", 14}, fhir_deserialize::ResourceType::Identifier, 0, fhir_deserialize::ResourceType::Unknown},
#line 18 "./src/generated/gperf_class_files/MedicinalProduct.gperf"
    {"extension_count", 0x58, 8, -1, {(U8*)"extension_count", 15}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 41 "./src/generated/gperf_class_files/MedicinalProduct.gperf"
    {"attachedDocument", 0x110, 31, -1, {(U8*)"attachedDocument", 16}, fhir_deserialize::ResourceType::Reference, 0, fhir_deserialize::ResourceType::Unknown},
#line 46 "./src/generated/gperf_class_files/MedicinalProduct.gperf"
    {"clinicalTrial_count", 0x138, 36, -1, {(U8*)"clinicalTrial_count", 19}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 50 "./src/generated/gperf_class_files/MedicinalProduct.gperf"
    {"crossReference_count", 0x158, 40, -1, {(U8*)"crossReference_count", 20}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 33 "./src/generated/gperf_class_files/MedicinalProduct.gperf"
    {"productClassification", 0xd0, 23, -1, {(U8*)"productClassification", 21}, fhir_deserialize::ResourceType::CodeableConcept, 0, fhir_deserialize::ResourceType::Unknown},
#line 40 "./src/generated/gperf_class_files/MedicinalProduct.gperf"
    {"attachedDocument_count", 0x108, 30, -1, {(U8*)"attachedDocument_count", 22}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 49 "./src/generated/gperf_class_files/MedicinalProduct.gperf"
    {"name", 0x150, 39, -1, {(U8*)"name", 4}, fhir_deserialize::ResourceType::MedicinalProduct_Name, 0, fhir_deserialize::ResourceType::Unknown},
#line 25 "./src/generated/gperf_class_files/MedicinalProduct.gperf"
    {"domain", 0x90, 15, -1, {(U8*)"domain", 6}, fhir_deserialize::ResourceType::Coding, 0, fhir_deserialize::ResourceType::Unknown},
#line 32 "./src/generated/gperf_class_files/MedicinalProduct.gperf"
    {"productClassification_count", 0xc8, 22, -1, {(U8*)"productClassification_count", 27}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 39 "./src/generated/gperf_class_files/MedicinalProduct.gperf"
    {"packagedMedicinalProduct", 0x100, 29, -1, {(U8*)"packagedMedicinalProduct", 24}, fhir_deserialize::ResourceType::Reference, 0, fhir_deserialize::ResourceType::Unknown},
#line 48 "./src/generated/gperf_class_files/MedicinalProduct.gperf"
    {"name_count", 0x148, 38, -1, {(U8*)"name_count", 10}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 38 "./src/generated/gperf_class_files/MedicinalProduct.gperf"
    {"packagedMedicinalProduct_count", 0xf8, 28, -1, {(U8*)"packagedMedicinalProduct_count", 30}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 26 "./src/generated/gperf_class_files/MedicinalProduct.gperf"
    {"combinedPharmaceuticalDoseForm", 0x98, 16, -1, {(U8*)"combinedPharmaceuticalDoseForm", 30}, fhir_deserialize::ResourceType::CodeableConcept, 0, fhir_deserialize::ResourceType::Unknown}
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
