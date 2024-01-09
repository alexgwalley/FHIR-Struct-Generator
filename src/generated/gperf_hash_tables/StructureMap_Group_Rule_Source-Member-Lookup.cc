/* C++ code produced by gperf version 3.0.1 */
/* Command-line: gperf.exe -t --output-file=src/generated/gperf_hash_tables/StructureMap_Group_Rule_Source-Member-Lookup.cc -CGD ./src/generated/gperf_class_files/StructureMap_Group_Rule_Source.gperf  */
/* Computed positions: -k'2,13,15' */

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

#line 8 "./src/generated/gperf_class_files/StructureMap_Group_Rule_Source.gperf"
struct fhir_deserialize::MemberNameAndOffset;
enum
  {
    TOTAL_KEYWORDS = 66,
    MIN_WORD_LENGTH = 2,
    MAX_WORD_LENGTH = 31,
    MIN_HASH_VALUE = 2,
    MAX_HASH_VALUE = 94
  };

/* maximum key range = 93, duplicates = 0 */

class StructureMap_Group_Rule_Source_Gperf
{
private:
  static inline unsigned int hash (const char *str, unsigned int len);
public:
  static const struct fhir_deserialize::MemberNameAndOffset *StructureMap_Group_Rule_Source_MemberLookup (const char *str, unsigned int len);
};

inline unsigned int
StructureMap_Group_Rule_Source_Gperf::hash (register const char *str, register unsigned int len)
{
  static const unsigned char asso_values[] =
    {
      95, 95, 95, 95, 95, 95, 95, 95, 95, 95,
      95, 95, 95, 95, 95, 95, 95, 95, 95, 95,
      95, 95, 95, 95, 95, 95, 95, 95, 95, 95,
      95, 95, 95, 95, 95, 95, 95, 95, 95, 95,
      95, 95, 95, 95, 95, 95, 95, 95, 95, 95,
      95, 95, 95, 95, 95, 95, 95, 95, 95, 95,
      95, 95, 95, 95, 95, 15, 40,  0, 20,  5,
      95, 95,  0, 25, 95, 95, 95, 50, 95,  0,
      35,  5, 40, 30, 20, 30, 95, 95, 95, 95,
      95, 95, 95, 95, 95, 95, 95, 40, 95, 30,
       0,  0,  5,  5,  0,  5, 95, 95, 10, 25,
       0,  0,  5, 95, 20,  0,  5, 55, 95, 95,
       5,  0, 95, 95, 95, 95, 95, 95, 95, 95,
      95, 95, 95, 95, 95, 95, 95, 95, 95, 95,
      95, 95, 95, 95, 95, 95, 95, 95, 95, 95,
      95, 95, 95, 95, 95, 95, 95, 95, 95, 95,
      95, 95, 95, 95, 95, 95, 95, 95, 95, 95,
      95, 95, 95, 95, 95, 95, 95, 95, 95, 95,
      95, 95, 95, 95, 95, 95, 95, 95, 95, 95,
      95, 95, 95, 95, 95, 95, 95, 95, 95, 95,
      95, 95, 95, 95, 95, 95, 95, 95, 95, 95,
      95, 95, 95, 95, 95, 95, 95, 95, 95, 95,
      95, 95, 95, 95, 95, 95, 95, 95, 95, 95,
      95, 95, 95, 95, 95, 95, 95, 95, 95, 95,
      95, 95, 95, 95, 95, 95, 95, 95, 95, 95,
      95, 95, 95, 95, 95, 95
    };
  register int hval = len;

  switch (hval)
    {
      default:
        hval += asso_values[(unsigned char)str[14]];
      /*FALLTHROUGH*/
      case 14:
      case 13:
        hval += asso_values[(unsigned char)str[12]];
      /*FALLTHROUGH*/
      case 12:
      case 11:
      case 10:
      case 9:
      case 8:
      case 7:
      case 6:
      case 5:
      case 4:
      case 3:
      case 2:
        hval += asso_values[(unsigned char)str[1]];
        break;
    }
  return hval;
}

static const struct fhir_deserialize::MemberNameAndOffset word_array_StructureMap_Group_Rule_Source[] =
  {
#line 11 "./src/generated/gperf_class_files/StructureMap_Group_Rule_Source.gperf"
    {"id", 0x8, 1, -1, {(U8*)"id", 2}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 19 "./src/generated/gperf_class_files/StructureMap_Group_Rule_Source.gperf"
    {"type", 0x60, 9, -1, {(U8*)"type", 4}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 74 "./src/generated/gperf_class_files/StructureMap_Group_Rule_Source.gperf"
    {"check", 0xc8, 16, -1, {(U8*)"check", 5}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 16 "./src/generated/gperf_class_files/StructureMap_Group_Rule_Source.gperf"
    {"context", 0x38, 6, -1, {(U8*)"context", 7}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 17 "./src/generated/gperf_class_files/StructureMap_Group_Rule_Source.gperf"
    {"min", 0x48, 7, -1, {(U8*)"min", 3}, fhir_deserialize::ResourceType::Integer, 0, fhir_deserialize::ResourceType::Unknown},
#line 73 "./src/generated/gperf_class_files/StructureMap_Group_Rule_Source.gperf"
    {"condition", 0xb8, 15, -1, {(U8*)"condition", 9}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 75 "./src/generated/gperf_class_files/StructureMap_Group_Rule_Source.gperf"
    {"logMessage", 0xd8, 17, -1, {(U8*)"logMessage", 10}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 10 "./src/generated/gperf_class_files/StructureMap_Group_Rule_Source.gperf"
    {"resourceType", 0x0, 0, -1, {(U8*)"resourceType", 12}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 71 "./src/generated/gperf_class_files/StructureMap_Group_Rule_Source.gperf"
    {"listMode", 0x98, 13, -1, {(U8*)"listMode", 8}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 13 "./src/generated/gperf_class_files/StructureMap_Group_Rule_Source.gperf"
    {"extension", 0x20, 3, -1, {(U8*)"extension", 9}, fhir_deserialize::ResourceType::Extension, 0, fhir_deserialize::ResourceType::Unknown},
#line 31 "./src/generated/gperf_class_files/StructureMap_Group_Rule_Source.gperf"
    {"defaultValueOid", 0x78, 11, 11, {(U8*)"defaultValue", 12}, fhir_deserialize::ResourceType::Unknown, 6, fhir_deserialize::ResourceType::Unknown},
#line 23 "./src/generated/gperf_class_files/StructureMap_Group_Rule_Source.gperf"
    {"defaultValueCode", 0x78, 11, 3, {(U8*)"defaultValue", 12}, fhir_deserialize::ResourceType::Unknown, 3, fhir_deserialize::ResourceType::Unknown},
#line 70 "./src/generated/gperf_class_files/StructureMap_Group_Rule_Source.gperf"
    {"element", 0x88, 12, -1, {(U8*)"element", 7}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 44 "./src/generated/gperf_class_files/StructureMap_Group_Rule_Source.gperf"
    {"defaultValueCoding", 0x78, 11, 24, {(U8*)"defaultValue", 12}, fhir_deserialize::ResourceType::Unknown, 20, fhir_deserialize::ResourceType::Coding},
#line 22 "./src/generated/gperf_class_files/StructureMap_Group_Rule_Source.gperf"
    {"defaultValueCanonical", 0x78, 11, 2, {(U8*)"defaultValue", 12}, fhir_deserialize::ResourceType::Unknown, 2, fhir_deserialize::ResourceType::Unknown},
#line 15 "./src/generated/gperf_class_files/StructureMap_Group_Rule_Source.gperf"
    {"modifierExtension", 0x30, 5, -1, {(U8*)"modifierExtension", 17}, fhir_deserialize::ResourceType::Extension, 0, fhir_deserialize::ResourceType::Unknown},
#line 61 "./src/generated/gperf_class_files/StructureMap_Group_Rule_Source.gperf"
    {"defaultValueContributor", 0x78, 11, 41, {(U8*)"defaultValue", 12}, fhir_deserialize::ResourceType::Unknown, 20, fhir_deserialize::ResourceType::Contributor},
#line 45 "./src/generated/gperf_class_files/StructureMap_Group_Rule_Source.gperf"
    {"defaultValueContactPoint", 0x78, 11, 25, {(U8*)"defaultValue", 12}, fhir_deserialize::ResourceType::Unknown, 20, fhir_deserialize::ResourceType::ContactPoint},
#line 60 "./src/generated/gperf_class_files/StructureMap_Group_Rule_Source.gperf"
    {"defaultValueContactDetail", 0x78, 11, 40, {(U8*)"defaultValue", 12}, fhir_deserialize::ResourceType::Unknown, 20, fhir_deserialize::ResourceType::ContactDetail},
#line 43 "./src/generated/gperf_class_files/StructureMap_Group_Rule_Source.gperf"
    {"defaultValueCodeableConcept", 0x78, 11, 23, {(U8*)"defaultValue", 12}, fhir_deserialize::ResourceType::Unknown, 20, fhir_deserialize::ResourceType::CodeableConcept},
#line 14 "./src/generated/gperf_class_files/StructureMap_Group_Rule_Source.gperf"
    {"modifierExtension_count", 0x28, 4, -1, {(U8*)"modifierExtension_count", 23}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 40 "./src/generated/gperf_class_files/StructureMap_Group_Rule_Source.gperf"
    {"defaultValueAge", 0x78, 11, 20, {(U8*)"defaultValue", 12}, fhir_deserialize::ResourceType::Unknown, 20, fhir_deserialize::ResourceType::Age},
#line 63 "./src/generated/gperf_class_files/StructureMap_Group_Rule_Source.gperf"
    {"defaultValueExpression", 0x78, 11, 43, {(U8*)"defaultValue", 12}, fhir_deserialize::ResourceType::Unknown, 20, fhir_deserialize::ResourceType::Expression},
#line 39 "./src/generated/gperf_class_files/StructureMap_Group_Rule_Source.gperf"
    {"defaultValueAddress", 0x78, 11, 19, {(U8*)"defaultValue", 12}, fhir_deserialize::ResourceType::Unknown, 20, fhir_deserialize::ResourceType::Address},
#line 41 "./src/generated/gperf_class_files/StructureMap_Group_Rule_Source.gperf"
    {"defaultValueAnnotation", 0x78, 11, 21, {(U8*)"defaultValue", 12}, fhir_deserialize::ResourceType::Unknown, 20, fhir_deserialize::ResourceType::Annotation},
#line 68 "./src/generated/gperf_class_files/StructureMap_Group_Rule_Source.gperf"
    {"defaultValueDosage", 0x78, 11, 48, {(U8*)"defaultValue", 12}, fhir_deserialize::ResourceType::Unknown, 20, fhir_deserialize::ResourceType::Dosage},
#line 27 "./src/generated/gperf_class_files/StructureMap_Group_Rule_Source.gperf"
    {"defaultValueId", 0x78, 11, 7, {(U8*)"defaultValue", 12}, fhir_deserialize::ResourceType::Unknown, 4, fhir_deserialize::ResourceType::Unknown},
#line 47 "./src/generated/gperf_class_files/StructureMap_Group_Rule_Source.gperf"
    {"defaultValueDistance", 0x78, 11, 27, {(U8*)"defaultValue", 12}, fhir_deserialize::ResourceType::Unknown, 20, fhir_deserialize::ResourceType::Distance},
#line 24 "./src/generated/gperf_class_files/StructureMap_Group_Rule_Source.gperf"
    {"defaultValueDate", 0x78, 11, 4, {(U8*)"defaultValue", 12}, fhir_deserialize::ResourceType::Unknown, 16, fhir_deserialize::ResourceType::Unknown},
#line 42 "./src/generated/gperf_class_files/StructureMap_Group_Rule_Source.gperf"
    {"defaultValueAttachment", 0x78, 11, 22, {(U8*)"defaultValue", 12}, fhir_deserialize::ResourceType::Unknown, 20, fhir_deserialize::ResourceType::Attachment},
#line 18 "./src/generated/gperf_class_files/StructureMap_Group_Rule_Source.gperf"
    {"max", 0x50, 8, -1, {(U8*)"max", 3}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 28 "./src/generated/gperf_class_files/StructureMap_Group_Rule_Source.gperf"
    {"defaultValueInstant", 0x78, 11, 8, {(U8*)"defaultValue", 12}, fhir_deserialize::ResourceType::Unknown, 19, fhir_deserialize::ResourceType::Unknown},
#line 25 "./src/generated/gperf_class_files/StructureMap_Group_Rule_Source.gperf"
    {"defaultValueDateTime", 0x78, 11, 5, {(U8*)"defaultValue", 12}, fhir_deserialize::ResourceType::Unknown, 17, fhir_deserialize::ResourceType::Unknown},
#line 49 "./src/generated/gperf_class_files/StructureMap_Group_Rule_Source.gperf"
    {"defaultValueHumanName", 0x78, 11, 29, {(U8*)"defaultValue", 12}, fhir_deserialize::ResourceType::Unknown, 20, fhir_deserialize::ResourceType::HumanName},
#line 50 "./src/generated/gperf_class_files/StructureMap_Group_Rule_Source.gperf"
    {"defaultValueIdentifier", 0x78, 11, 30, {(U8*)"defaultValue", 12}, fhir_deserialize::ResourceType::Unknown, 20, fhir_deserialize::ResourceType::Identifier},
#line 72 "./src/generated/gperf_class_files/StructureMap_Group_Rule_Source.gperf"
    {"variable", 0xa8, 14, -1, {(U8*)"variable", 8}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 29 "./src/generated/gperf_class_files/StructureMap_Group_Rule_Source.gperf"
    {"defaultValueInteger", 0x78, 11, 9, {(U8*)"defaultValue", 12}, fhir_deserialize::ResourceType::Unknown, 20, fhir_deserialize::ResourceType::Integer},
#line 36 "./src/generated/gperf_class_files/StructureMap_Group_Rule_Source.gperf"
    {"defaultValueUri", 0x78, 11, 16, {(U8*)"defaultValue", 12}, fhir_deserialize::ResourceType::Unknown, 9, fhir_deserialize::ResourceType::Unknown},
#line 38 "./src/generated/gperf_class_files/StructureMap_Group_Rule_Source.gperf"
    {"defaultValueUuid", 0x78, 11, 18, {(U8*)"defaultValue", 12}, fhir_deserialize::ResourceType::Unknown, 11, fhir_deserialize::ResourceType::Unknown},
#line 62 "./src/generated/gperf_class_files/StructureMap_Group_Rule_Source.gperf"
    {"defaultValueDataRequirement", 0x78, 11, 42, {(U8*)"defaultValue", 12}, fhir_deserialize::ResourceType::Unknown, 20, fhir_deserialize::ResourceType::DataRequirement},
#line 35 "./src/generated/gperf_class_files/StructureMap_Group_Rule_Source.gperf"
    {"defaultValueUnsignedInt", 0x78, 11, 15, {(U8*)"defaultValue", 12}, fhir_deserialize::ResourceType::Unknown, 14, fhir_deserialize::ResourceType::Unknown},
#line 66 "./src/generated/gperf_class_files/StructureMap_Group_Rule_Source.gperf"
    {"defaultValueTriggerDefinition", 0x78, 11, 46, {(U8*)"defaultValue", 12}, fhir_deserialize::ResourceType::Unknown, 20, fhir_deserialize::ResourceType::TriggerDefinition},
#line 37 "./src/generated/gperf_class_files/StructureMap_Group_Rule_Source.gperf"
    {"defaultValueUrl", 0x78, 11, 17, {(U8*)"defaultValue", 12}, fhir_deserialize::ResourceType::Unknown, 10, fhir_deserialize::ResourceType::Unknown},
#line 58 "./src/generated/gperf_class_files/StructureMap_Group_Rule_Source.gperf"
    {"defaultValueSignature", 0x78, 11, 38, {(U8*)"defaultValue", 12}, fhir_deserialize::ResourceType::Unknown, 20, fhir_deserialize::ResourceType::Signature},
#line 54 "./src/generated/gperf_class_files/StructureMap_Group_Rule_Source.gperf"
    {"defaultValueRange", 0x78, 11, 34, {(U8*)"defaultValue", 12}, fhir_deserialize::ResourceType::Unknown, 20, fhir_deserialize::ResourceType::Range},
#line 32 "./src/generated/gperf_class_files/StructureMap_Group_Rule_Source.gperf"
    {"defaultValuePositiveInt", 0x78, 11, 12, {(U8*)"defaultValue", 12}, fhir_deserialize::ResourceType::Unknown, 13, fhir_deserialize::ResourceType::Unknown},
#line 21 "./src/generated/gperf_class_files/StructureMap_Group_Rule_Source.gperf"
    {"defaultValueBoolean", 0x78, 11, 1, {(U8*)"defaultValue", 12}, fhir_deserialize::ResourceType::Unknown, 12, fhir_deserialize::ResourceType::Unknown},
#line 48 "./src/generated/gperf_class_files/StructureMap_Group_Rule_Source.gperf"
    {"defaultValueDuration", 0x78, 11, 28, {(U8*)"defaultValue", 12}, fhir_deserialize::ResourceType::Unknown, 20, fhir_deserialize::ResourceType::Duration},
#line 34 "./src/generated/gperf_class_files/StructureMap_Group_Rule_Source.gperf"
    {"defaultValueTime", 0x78, 11, 14, {(U8*)"defaultValue", 12}, fhir_deserialize::ResourceType::Unknown, 18, fhir_deserialize::ResourceType::Unknown},
#line 55 "./src/generated/gperf_class_files/StructureMap_Group_Rule_Source.gperf"
    {"defaultValueRatio", 0x78, 11, 35, {(U8*)"defaultValue", 12}, fhir_deserialize::ResourceType::Unknown, 20, fhir_deserialize::ResourceType::Ratio},
#line 59 "./src/generated/gperf_class_files/StructureMap_Group_Rule_Source.gperf"
    {"defaultValueTiming", 0x78, 11, 39, {(U8*)"defaultValue", 12}, fhir_deserialize::ResourceType::Unknown, 20, fhir_deserialize::ResourceType::Timing},
#line 20 "./src/generated/gperf_class_files/StructureMap_Group_Rule_Source.gperf"
    {"defaultValueBase64Binary", 0x78, 11, 0, {(U8*)"defaultValue", 12}, fhir_deserialize::ResourceType::Unknown, 1, fhir_deserialize::ResourceType::Unknown},
#line 53 "./src/generated/gperf_class_files/StructureMap_Group_Rule_Source.gperf"
    {"defaultValueQuantity", 0x78, 11, 33, {(U8*)"defaultValue", 12}, fhir_deserialize::ResourceType::Unknown, 20, fhir_deserialize::ResourceType::Quantity},
#line 56 "./src/generated/gperf_class_files/StructureMap_Group_Rule_Source.gperf"
    {"defaultValueReference", 0x78, 11, 36, {(U8*)"defaultValue", 12}, fhir_deserialize::ResourceType::Unknown, 20, fhir_deserialize::ResourceType::Reference},
#line 51 "./src/generated/gperf_class_files/StructureMap_Group_Rule_Source.gperf"
    {"defaultValueMoney", 0x78, 11, 31, {(U8*)"defaultValue", 12}, fhir_deserialize::ResourceType::Unknown, 20, fhir_deserialize::ResourceType::Money},
#line 33 "./src/generated/gperf_class_files/StructureMap_Group_Rule_Source.gperf"
    {"defaultValueString", 0x78, 11, 13, {(U8*)"defaultValue", 12}, fhir_deserialize::ResourceType::Unknown, 7, fhir_deserialize::ResourceType::Unknown},
#line 26 "./src/generated/gperf_class_files/StructureMap_Group_Rule_Source.gperf"
    {"defaultValueDecimal", 0x78, 11, 6, {(U8*)"defaultValue", 12}, fhir_deserialize::ResourceType::Unknown, 15, fhir_deserialize::ResourceType::Unknown},
#line 69 "./src/generated/gperf_class_files/StructureMap_Group_Rule_Source.gperf"
    {"defaultValueMeta", 0x78, 11, 49, {(U8*)"defaultValue", 12}, fhir_deserialize::ResourceType::Unknown, 20, fhir_deserialize::ResourceType::Meta},
#line 46 "./src/generated/gperf_class_files/StructureMap_Group_Rule_Source.gperf"
    {"defaultValueCount", 0x78, 11, 26, {(U8*)"defaultValue", 12}, fhir_deserialize::ResourceType::Unknown, 20, fhir_deserialize::ResourceType::Count},
#line 52 "./src/generated/gperf_class_files/StructureMap_Group_Rule_Source.gperf"
    {"defaultValuePeriod", 0x78, 11, 32, {(U8*)"defaultValue", 12}, fhir_deserialize::ResourceType::Unknown, 20, fhir_deserialize::ResourceType::Period},
#line 65 "./src/generated/gperf_class_files/StructureMap_Group_Rule_Source.gperf"
    {"defaultValueRelatedArtifact", 0x78, 11, 45, {(U8*)"defaultValue", 12}, fhir_deserialize::ResourceType::Unknown, 20, fhir_deserialize::ResourceType::RelatedArtifact},
#line 57 "./src/generated/gperf_class_files/StructureMap_Group_Rule_Source.gperf"
    {"defaultValueSampledData", 0x78, 11, 37, {(U8*)"defaultValue", 12}, fhir_deserialize::ResourceType::Unknown, 20, fhir_deserialize::ResourceType::SampledData},
#line 12 "./src/generated/gperf_class_files/StructureMap_Group_Rule_Source.gperf"
    {"extension_count", 0x18, 2, -1, {(U8*)"extension_count", 15}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 64 "./src/generated/gperf_class_files/StructureMap_Group_Rule_Source.gperf"
    {"defaultValueParameterDefinition", 0x78, 11, 44, {(U8*)"defaultValue", 12}, fhir_deserialize::ResourceType::Unknown, 20, fhir_deserialize::ResourceType::ParameterDefinition},
#line 30 "./src/generated/gperf_class_files/StructureMap_Group_Rule_Source.gperf"
    {"defaultValueMarkdown", 0x78, 11, 10, {(U8*)"defaultValue", 12}, fhir_deserialize::ResourceType::Unknown, 5, fhir_deserialize::ResourceType::Unknown},
#line 67 "./src/generated/gperf_class_files/StructureMap_Group_Rule_Source.gperf"
    {"defaultValueUsageContext", 0x78, 11, 47, {(U8*)"defaultValue", 12}, fhir_deserialize::ResourceType::Unknown, 20, fhir_deserialize::ResourceType::UsageContext}
  };

static const signed char lookup[] =
  {
    -1, -1,  0, -1,  1,  2, -1,  3,  4,  5,  6, -1,  7,  8,
     9, 10, 11, 12, 13, -1, -1, 14, 15, 16, 17, 18, -1, 19,
    20, -1, 21, -1, 22, -1, 23, -1, -1, 24, 25, 26, 27, 28,
    29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42,
    43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56,
    -1, 57, 58, 59, -1, -1, -1, 60, 61, -1, 62, -1, -1, -1,
    -1, -1, 63, -1, -1, -1, 64, -1, -1, -1, 65
  };

const struct fhir_deserialize::MemberNameAndOffset *
StructureMap_Group_Rule_Source_Gperf::StructureMap_Group_Rule_Source_MemberLookup (register const char *str, register unsigned int len)
{
  if (len <= MAX_WORD_LENGTH && len >= MIN_WORD_LENGTH)
    {
      register int key = hash (str, len);

      if (key <= MAX_HASH_VALUE && key >= 0)
        {
          register int index = lookup[key];

          if (index >= 0)
            {
              register const char *s = word_array_StructureMap_Group_Rule_Source[index].name;

              if (*str == *s && !strncmp (str + 1, s + 1, len - 1) && s[len] == '\0')
                return &word_array_StructureMap_Group_Rule_Source[index];
            }
        }
    }
  return 0;
}
