/* C++ code produced by gperf version 3.0.1 */
/* Command-line: gperf.exe -t --output-file=src/generated/gperf_hash_tables/MedicationKnowledge-Member-Lookup.cc -CGD ./src/generated/gperf_class_files/MedicationKnowledge.gperf  */
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

#line 8 "./src/generated/gperf_class_files/MedicationKnowledge.gperf"
struct fhir_deserialize::MemberNameAndOffset;
enum
  {
    TOTAL_KEYWORDS = 49,
    MIN_WORD_LENGTH = 2,
    MAX_WORD_LENGTH = 32,
    MIN_HASH_VALUE = 4,
    MAX_HASH_VALUE = 97
  };

/* maximum key range = 94, duplicates = 0 */

class MedicationKnowledge_Gperf
{
private:
  static inline unsigned int hash (const char *str, unsigned int len);
public:
  static const struct fhir_deserialize::MemberNameAndOffset *MedicationKnowledge_MemberLookup (const char *str, unsigned int len);
};

inline unsigned int
MedicationKnowledge_Gperf::hash (register const char *str, register unsigned int len)
{
  static const unsigned char asso_values[] =
    {
      98, 98, 98, 98, 98, 98, 98, 98, 98, 98,
      98, 98, 98, 98, 98, 98, 98, 98, 98, 98,
      98, 98, 98, 98, 98, 98, 98, 98, 98, 98,
      98, 98, 98, 98, 98, 98, 98, 98, 98, 98,
      98, 98, 98, 98, 98, 98, 98, 98, 98, 98,
      98, 98, 98, 98, 98, 98, 98, 98, 98, 98,
      98, 98, 98, 98, 98, 98, 98, 98, 98, 98,
      98, 98, 98, 98, 98, 98, 98, 98, 98, 98,
      98, 98, 98, 98, 98, 98, 98, 98, 98, 98,
      98, 98, 98, 98, 98, 98, 98,  0, 98,  0,
      10, 40, 98,  5, 98, 10, 98, 60, 20, 15,
       0,  5, 35, 98, 25,  0,  0, 35, 98, 98,
      30, 98, 98, 98, 98, 98, 98, 98, 98, 98,
      98, 98, 98, 98, 98, 98, 98, 98, 98, 98,
      98, 98, 98, 98, 98, 98, 98, 98, 98, 98,
      98, 98, 98, 98, 98, 98, 98, 98, 98, 98,
      98, 98, 98, 98, 98, 98, 98, 98, 98, 98,
      98, 98, 98, 98, 98, 98, 98, 98, 98, 98,
      98, 98, 98, 98, 98, 98, 98, 98, 98, 98,
      98, 98, 98, 98, 98, 98, 98, 98, 98, 98,
      98, 98, 98, 98, 98, 98, 98, 98, 98, 98,
      98, 98, 98, 98, 98, 98, 98, 98, 98, 98,
      98, 98, 98, 98, 98, 98, 98, 98, 98, 98,
      98, 98, 98, 98, 98, 98, 98, 98, 98, 98,
      98, 98, 98, 98, 98, 98, 98, 98, 98, 98,
      98, 98, 98, 98, 98, 98
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

static const struct fhir_deserialize::MemberNameAndOffset word_array_MedicationKnowledge[] =
  {
#line 43 "./src/generated/gperf_class_files/MedicationKnowledge.gperf"
    {"cost", 0x130, 33, -1, {(U8*)"cost", 4}, fhir_deserialize::ResourceType::MedicationKnowledge_Cost, 0, fhir_deserialize::ResourceType::Unknown},
#line 23 "./src/generated/gperf_class_files/MedicationKnowledge.gperf"
    {"status", 0x80, 13, -1, {(U8*)"status", 6}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 28 "./src/generated/gperf_class_files/MedicationKnowledge.gperf"
    {"synonym", 0xb0, 18, -1, {(U8*)"synonym", 7}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 17 "./src/generated/gperf_class_files/MedicationKnowledge.gperf"
    {"contained", 0x50, 7, -1, {(U8*)"contained", 9}, fhir_deserialize::ResourceType::Resource, 0, fhir_deserialize::ResourceType::Unknown},
#line 42 "./src/generated/gperf_class_files/MedicationKnowledge.gperf"
    {"cost_count", 0x128, 32, -1, {(U8*)"cost_count", 10}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 26 "./src/generated/gperf_class_files/MedicationKnowledge.gperf"
    {"amount", 0xa0, 16, -1, {(U8*)"amount", 6}, fhir_deserialize::ResourceType::Quantity, 0, fhir_deserialize::ResourceType::Unknown},
#line 11 "./src/generated/gperf_class_files/MedicationKnowledge.gperf"
    {"id", 0x8, 1, -1, {(U8*)"id", 2}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 27 "./src/generated/gperf_class_files/MedicationKnowledge.gperf"
    {"synonym_count", 0xa8, 17, -1, {(U8*)"synonym_count", 13}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 22 "./src/generated/gperf_class_files/MedicationKnowledge.gperf"
    {"code", 0x78, 12, -1, {(U8*)"code", 4}, fhir_deserialize::ResourceType::CodeableConcept, 0, fhir_deserialize::ResourceType::Unknown},
#line 16 "./src/generated/gperf_class_files/MedicationKnowledge.gperf"
    {"contained_count", 0x48, 6, -1, {(U8*)"contained_count", 15}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 54 "./src/generated/gperf_class_files/MedicationKnowledge.gperf"
    {"contraindication", 0x188, 44, -1, {(U8*)"contraindication", 16}, fhir_deserialize::ResourceType::Reference, 0, fhir_deserialize::ResourceType::Unknown},
#line 25 "./src/generated/gperf_class_files/MedicationKnowledge.gperf"
    {"doseForm", 0x98, 15, -1, {(U8*)"doseForm", 8}, fhir_deserialize::ResourceType::CodeableConcept, 0, fhir_deserialize::ResourceType::Unknown},
#line 12 "./src/generated/gperf_class_files/MedicationKnowledge.gperf"
    {"meta", 0x18, 2, -1, {(U8*)"meta", 4}, fhir_deserialize::ResourceType::Meta, 0, fhir_deserialize::ResourceType::Unknown},
#line 32 "./src/generated/gperf_class_files/MedicationKnowledge.gperf"
    {"associatedMedication", 0xd0, 22, -1, {(U8*)"associatedMedication", 20}, fhir_deserialize::ResourceType::Reference, 0, fhir_deserialize::ResourceType::Unknown},
#line 53 "./src/generated/gperf_class_files/MedicationKnowledge.gperf"
    {"contraindication_count", 0x180, 43, -1, {(U8*)"contraindication_count", 22}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 41 "./src/generated/gperf_class_files/MedicationKnowledge.gperf"
    {"intendedRoute", 0x120, 31, -1, {(U8*)"intendedRoute", 13}, fhir_deserialize::ResourceType::CodeableConcept, 0, fhir_deserialize::ResourceType::Unknown},
#line 36 "./src/generated/gperf_class_files/MedicationKnowledge.gperf"
    {"monograph", 0xf0, 26, -1, {(U8*)"monograph", 9}, fhir_deserialize::ResourceType::MedicationKnowledge_Monograph, 0, fhir_deserialize::ResourceType::Unknown},
#line 38 "./src/generated/gperf_class_files/MedicationKnowledge.gperf"
    {"ingredient", 0x100, 28, -1, {(U8*)"ingredient", 10}, fhir_deserialize::ResourceType::MedicationKnowledge_Ingredient, 0, fhir_deserialize::ResourceType::Unknown},
#line 31 "./src/generated/gperf_class_files/MedicationKnowledge.gperf"
    {"associatedMedication_count", 0xc8, 21, -1, {(U8*)"associatedMedication_count", 26}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 24 "./src/generated/gperf_class_files/MedicationKnowledge.gperf"
    {"manufacturer", 0x90, 14, -1, {(U8*)"manufacturer", 12}, fhir_deserialize::ResourceType::Reference, 0, fhir_deserialize::ResourceType::Unknown},
#line 14 "./src/generated/gperf_class_files/MedicationKnowledge.gperf"
    {"language", 0x30, 4, -1, {(U8*)"language", 8}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 40 "./src/generated/gperf_class_files/MedicationKnowledge.gperf"
    {"intendedRoute_count", 0x118, 30, -1, {(U8*)"intendedRoute_count", 19}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 35 "./src/generated/gperf_class_files/MedicationKnowledge.gperf"
    {"monograph_count", 0xe8, 25, -1, {(U8*)"monograph_count", 15}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 37 "./src/generated/gperf_class_files/MedicationKnowledge.gperf"
    {"ingredient_count", 0xf8, 27, -1, {(U8*)"ingredient_count", 16}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 45 "./src/generated/gperf_class_files/MedicationKnowledge.gperf"
    {"monitoringProgram", 0x140, 35, -1, {(U8*)"monitoringProgram", 17}, fhir_deserialize::ResourceType::MedicationKnowledge_MonitoringProgram, 0, fhir_deserialize::ResourceType::Unknown},
#line 15 "./src/generated/gperf_class_files/MedicationKnowledge.gperf"
    {"text", 0x40, 5, -1, {(U8*)"text", 4}, fhir_deserialize::ResourceType::Narrative, 0, fhir_deserialize::ResourceType::Unknown},
#line 10 "./src/generated/gperf_class_files/MedicationKnowledge.gperf"
    {"resourceType", 0x0, 0, -1, {(U8*)"resourceType", 12}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 44 "./src/generated/gperf_class_files/MedicationKnowledge.gperf"
    {"monitoringProgram_count", 0x138, 34, -1, {(U8*)"monitoringProgram_count", 23}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 47 "./src/generated/gperf_class_files/MedicationKnowledge.gperf"
    {"administrationGuidelines", 0x150, 37, -1, {(U8*)"administrationGuidelines", 24}, fhir_deserialize::ResourceType::MedicationKnowledge_AdministrationGuidelines, 0, fhir_deserialize::ResourceType::Unknown},
#line 56 "./src/generated/gperf_class_files/MedicationKnowledge.gperf"
    {"regulatory", 0x198, 46, -1, {(U8*)"regulatory", 10}, fhir_deserialize::ResourceType::MedicationKnowledge_Regulatory, 0, fhir_deserialize::ResourceType::Unknown},
#line 21 "./src/generated/gperf_class_files/MedicationKnowledge.gperf"
    {"modifierExtension", 0x70, 11, -1, {(U8*)"modifierExtension", 17}, fhir_deserialize::ResourceType::Extension, 0, fhir_deserialize::ResourceType::Unknown},
#line 50 "./src/generated/gperf_class_files/MedicationKnowledge.gperf"
    {"packaging", 0x168, 40, -1, {(U8*)"packaging", 9}, fhir_deserialize::ResourceType::MedicationKnowledge_Packaging, 0, fhir_deserialize::ResourceType::Unknown},
#line 46 "./src/generated/gperf_class_files/MedicationKnowledge.gperf"
    {"administrationGuidelines_count", 0x148, 36, -1, {(U8*)"administrationGuidelines_count", 30}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 55 "./src/generated/gperf_class_files/MedicationKnowledge.gperf"
    {"regulatory_count", 0x190, 45, -1, {(U8*)"regulatory_count", 16}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 49 "./src/generated/gperf_class_files/MedicationKnowledge.gperf"
    {"medicineClassification", 0x160, 39, -1, {(U8*)"medicineClassification", 22}, fhir_deserialize::ResourceType::MedicationKnowledge_MedicineClassification, 0, fhir_deserialize::ResourceType::Unknown},
#line 20 "./src/generated/gperf_class_files/MedicationKnowledge.gperf"
    {"modifierExtension_count", 0x68, 10, -1, {(U8*)"modifierExtension_count", 23}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 19 "./src/generated/gperf_class_files/MedicationKnowledge.gperf"
    {"extension", 0x60, 9, -1, {(U8*)"extension", 9}, fhir_deserialize::ResourceType::Extension, 0, fhir_deserialize::ResourceType::Unknown},
#line 34 "./src/generated/gperf_class_files/MedicationKnowledge.gperf"
    {"productType", 0xe0, 24, -1, {(U8*)"productType", 11}, fhir_deserialize::ResourceType::CodeableConcept, 0, fhir_deserialize::ResourceType::Unknown},
#line 48 "./src/generated/gperf_class_files/MedicationKnowledge.gperf"
    {"medicineClassification_count", 0x158, 38, -1, {(U8*)"medicineClassification_count", 28}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 18 "./src/generated/gperf_class_files/MedicationKnowledge.gperf"
    {"extension_count", 0x58, 8, -1, {(U8*)"extension_count", 15}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 33 "./src/generated/gperf_class_files/MedicationKnowledge.gperf"
    {"productType_count", 0xd8, 23, -1, {(U8*)"productType_count", 17}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 13 "./src/generated/gperf_class_files/MedicationKnowledge.gperf"
    {"implicitRules", 0x20, 3, -1, {(U8*)"implicitRules", 13}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 52 "./src/generated/gperf_class_files/MedicationKnowledge.gperf"
    {"drugCharacteristic", 0x178, 42, -1, {(U8*)"drugCharacteristic", 18}, fhir_deserialize::ResourceType::MedicationKnowledge_DrugCharacteristic, 0, fhir_deserialize::ResourceType::Unknown},
#line 58 "./src/generated/gperf_class_files/MedicationKnowledge.gperf"
    {"kinetics", 0x1a8, 48, -1, {(U8*)"kinetics", 8}, fhir_deserialize::ResourceType::MedicationKnowledge_Kinetics, 0, fhir_deserialize::ResourceType::Unknown},
#line 51 "./src/generated/gperf_class_files/MedicationKnowledge.gperf"
    {"drugCharacteristic_count", 0x170, 41, -1, {(U8*)"drugCharacteristic_count", 24}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 30 "./src/generated/gperf_class_files/MedicationKnowledge.gperf"
    {"relatedMedicationKnowledge", 0xc0, 20, -1, {(U8*)"relatedMedicationKnowledge", 26}, fhir_deserialize::ResourceType::MedicationKnowledge_RelatedMedicationKnowledge, 0, fhir_deserialize::ResourceType::Unknown},
#line 57 "./src/generated/gperf_class_files/MedicationKnowledge.gperf"
    {"kinetics_count", 0x1a0, 47, -1, {(U8*)"kinetics_count", 14}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 29 "./src/generated/gperf_class_files/MedicationKnowledge.gperf"
    {"relatedMedicationKnowledge_count", 0xb8, 19, -1, {(U8*)"relatedMedicationKnowledge_count", 32}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 39 "./src/generated/gperf_class_files/MedicationKnowledge.gperf"
    {"preparationInstruction", 0x108, 29, -1, {(U8*)"preparationInstruction", 22}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown}
  };

static const signed char lookup[] =
  {
    -1, -1, -1, -1,  0, -1,  1,  2, -1,  3,  4,  5,  6,  7,
     8,  9, 10, -1, 11, 12, 13, -1, 14, 15, 16, 17, 18, 19,
    20, 21, 22, 23, 24, -1, 25, -1, -1, 26, 27, 28, 29, -1,
    30, -1, 31, 32, 33, 34, 35, 36, -1, 37, -1, 38, -1, 39,
    -1, 40, 41, -1, -1, -1, -1, 42, -1, -1, -1, -1, 43, 44,
    -1, 45, -1, -1, 46, -1, -1, 47, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 48
  };

const struct fhir_deserialize::MemberNameAndOffset *
MedicationKnowledge_Gperf::MedicationKnowledge_MemberLookup (register const char *str, register unsigned int len)
{
  if (len <= MAX_WORD_LENGTH && len >= MIN_WORD_LENGTH)
    {
      register int key = hash (str, len);

      if (key <= MAX_HASH_VALUE && key >= 0)
        {
          register int index = lookup[key];

          if (index >= 0)
            {
              register const char *s = word_array_MedicationKnowledge[index].name;

              if (*str == *s && !strncmp (str + 1, s + 1, len - 1) && s[len] == '\0')
                return &word_array_MedicationKnowledge[index];
            }
        }
    }
  return 0;
}
