/* C++ code produced by gperf version 3.0.1 */
/* Command-line: gperf.exe -t --output-file=src/generated/gperf_hash_tables/ElementDefinition-Member-Lookup.cc -CGD ./src/generated/gperf_class_files/ElementDefinition.gperf  */
/* Computed positions: -k'2,6,9,14,$' */

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

#line 8 "./src/generated/gperf_class_files/ElementDefinition.gperf"
struct fhir_deserialize::MemberNameAndOffset;
enum
  {
    TOTAL_KEYWORDS = 212,
    MIN_WORD_LENGTH = 2,
    MAX_WORD_LENGTH = 31,
    MIN_HASH_VALUE = 19,
    MAX_HASH_VALUE = 562
  };

/* maximum key range = 544, duplicates = 0 */

class ElementDefinition_Gperf
{
private:
  static inline unsigned int hash (const char *str, unsigned int len);
public:
  static const struct fhir_deserialize::MemberNameAndOffset *ElementDefinition_MemberLookup (const char *str, unsigned int len);
};

inline unsigned int
ElementDefinition_Gperf::hash (register const char *str, register unsigned int len)
{
  static const unsigned short asso_values[] =
    {
      563, 563, 563, 563, 563, 563, 563, 563, 563, 563,
      563, 563, 563, 563, 563, 563, 563, 563, 563, 563,
      563, 563, 563, 563, 563, 563, 563, 563, 563, 563,
      563, 563, 563, 563, 563, 563, 563, 563, 563, 563,
      563, 563, 563, 563, 563, 563, 563, 563, 563, 563,
      563, 563, 563, 563, 563, 563, 563, 563, 563, 563,
      563, 563, 563, 563, 563,  95,   5, 120, 175, 240,
       40, 563,  35, 205,  30, 563, 563,  90,   0,   0,
      130,  25,  95,  55,  35, 255, 105, 563, 563, 563,
      563, 563, 563, 563, 563,   0, 563,  15,  10, 145,
      100,   0,  85, 140, 215,   5,   0, 563,   0,   5,
       15,  70,  35,   5,  20,  55,   0,  70,  90,   5,
      175, 170,   5, 563, 563, 563, 563, 563, 563, 563,
      563, 563, 563, 563, 563, 563, 563, 563, 563, 563,
      563, 563, 563, 563, 563, 563, 563, 563, 563, 563,
      563, 563, 563, 563, 563, 563, 563, 563, 563, 563,
      563, 563, 563, 563, 563, 563, 563, 563, 563, 563,
      563, 563, 563, 563, 563, 563, 563, 563, 563, 563,
      563, 563, 563, 563, 563, 563, 563, 563, 563, 563,
      563, 563, 563, 563, 563, 563, 563, 563, 563, 563,
      563, 563, 563, 563, 563, 563, 563, 563, 563, 563,
      563, 563, 563, 563, 563, 563, 563, 563, 563, 563,
      563, 563, 563, 563, 563, 563, 563, 563, 563, 563,
      563, 563, 563, 563, 563, 563, 563, 563, 563, 563,
      563, 563, 563, 563, 563, 563, 563, 563, 563, 563,
      563, 563, 563, 563, 563, 563, 563
    };
  register int hval = len;

  switch (hval)
    {
      default:
        hval += asso_values[(unsigned char)str[13]+1];
      /*FALLTHROUGH*/
      case 13:
      case 12:
      case 11:
      case 10:
      case 9:
        hval += asso_values[(unsigned char)str[8]+1];
      /*FALLTHROUGH*/
      case 8:
      case 7:
      case 6:
        hval += asso_values[(unsigned char)str[5]];
      /*FALLTHROUGH*/
      case 5:
      case 4:
      case 3:
      case 2:
        hval += asso_values[(unsigned char)str[1]];
        break;
    }
  return hval + asso_values[(unsigned char)str[len - 1]];
}

static const struct fhir_deserialize::MemberNameAndOffset word_array_ElementDefinition[] =
  {
#line 34 "./src/generated/gperf_class_files/ElementDefinition.gperf"
    {"base", 0x100, 23, -1, {(U8*)"base", 4}, fhir_deserialize::ResourceType::ElementDefinition_Base, 0, fhir_deserialize::ResourceType::Unknown},
#line 21 "./src/generated/gperf_class_files/ElementDefinition.gperf"
    {"label", 0x70, 11, -1, {(U8*)"label", 5}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 32 "./src/generated/gperf_class_files/ElementDefinition.gperf"
    {"min", 0xe8, 21, -1, {(U8*)"min", 3}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 52 "./src/generated/gperf_class_files/ElementDefinition.gperf"
    {"defaultValueTime", 0x130, 28, 14, {(U8*)"defaultValue", 12}, fhir_deserialize::ResourceType::Unknown, 18, fhir_deserialize::ResourceType::Unknown},
#line 65 "./src/generated/gperf_class_files/ElementDefinition.gperf"
    {"defaultValueDistance", 0x130, 28, 27, {(U8*)"defaultValue", 12}, fhir_deserialize::ResourceType::Unknown, 20, fhir_deserialize::ResourceType::Distance},
#line 76 "./src/generated/gperf_class_files/ElementDefinition.gperf"
    {"defaultValueSignature", 0x130, 28, 38, {(U8*)"defaultValue", 12}, fhir_deserialize::ResourceType::Unknown, 20, fhir_deserialize::ResourceType::Signature},
#line 85 "./src/generated/gperf_class_files/ElementDefinition.gperf"
    {"defaultValueUsageContext", 0x130, 28, 47, {(U8*)"defaultValue", 12}, fhir_deserialize::ResourceType::Unknown, 20, fhir_deserialize::ResourceType::UsageContext},
#line 42 "./src/generated/gperf_class_files/ElementDefinition.gperf"
    {"defaultValueDate", 0x130, 28, 4, {(U8*)"defaultValue", 12}, fhir_deserialize::ResourceType::Unknown, 16, fhir_deserialize::ResourceType::Unknown},
#line 72 "./src/generated/gperf_class_files/ElementDefinition.gperf"
    {"defaultValueRange", 0x130, 28, 34, {(U8*)"defaultValue", 12}, fhir_deserialize::ResourceType::Unknown, 20, fhir_deserialize::ResourceType::Range},
#line 43 "./src/generated/gperf_class_files/ElementDefinition.gperf"
    {"defaultValueDateTime", 0x130, 28, 5, {(U8*)"defaultValue", 12}, fhir_deserialize::ResourceType::Unknown, 17, fhir_deserialize::ResourceType::Unknown},
#line 40 "./src/generated/gperf_class_files/ElementDefinition.gperf"
    {"defaultValueCanonical", 0x130, 28, 2, {(U8*)"defaultValue", 12}, fhir_deserialize::ResourceType::Unknown, 2, fhir_deserialize::ResourceType::Unknown},
#line 91 "./src/generated/gperf_class_files/ElementDefinition.gperf"
    {"fixedBoolean", 0x168, 32, 1, {(U8*)"fixed", 5}, fhir_deserialize::ResourceType::Unknown, 12, fhir_deserialize::ResourceType::Unknown},
#line 154 "./src/generated/gperf_class_files/ElementDefinition.gperf"
    {"patternTime", 0x180, 34, 14, {(U8*)"pattern", 7}, fhir_deserialize::ResourceType::Unknown, 18, fhir_deserialize::ResourceType::Unknown},
#line 80 "./src/generated/gperf_class_files/ElementDefinition.gperf"
    {"defaultValueDataRequirement", 0x130, 28, 42, {(U8*)"defaultValue", 12}, fhir_deserialize::ResourceType::Unknown, 20, fhir_deserialize::ResourceType::DataRequirement},
#line 198 "./src/generated/gperf_class_files/ElementDefinition.gperf"
    {"minValuePositiveInt", 0x1a8, 38, 6, {(U8*)"minValue", 8}, fhir_deserialize::ResourceType::Unknown, 13, fhir_deserialize::ResourceType::Unknown},
#line 68 "./src/generated/gperf_class_files/ElementDefinition.gperf"
    {"defaultValueIdentifier", 0x130, 28, 30, {(U8*)"defaultValue", 12}, fhir_deserialize::ResourceType::Unknown, 20, fhir_deserialize::ResourceType::Identifier},
#line 48 "./src/generated/gperf_class_files/ElementDefinition.gperf"
    {"defaultValueMarkdown", 0x130, 28, 10, {(U8*)"defaultValue", 12}, fhir_deserialize::ResourceType::Unknown, 5, fhir_deserialize::ResourceType::Unknown},
#line 144 "./src/generated/gperf_class_files/ElementDefinition.gperf"
    {"patternDate", 0x180, 34, 4, {(U8*)"pattern", 7}, fhir_deserialize::ResourceType::Unknown, 16, fhir_deserialize::ResourceType::Unknown},
#line 174 "./src/generated/gperf_class_files/ElementDefinition.gperf"
    {"patternRange", 0x180, 34, 34, {(U8*)"pattern", 7}, fhir_deserialize::ResourceType::Unknown, 20, fhir_deserialize::ResourceType::Range},
#line 75 "./src/generated/gperf_class_files/ElementDefinition.gperf"
    {"defaultValueSampledData", 0x130, 28, 37, {(U8*)"defaultValue", 12}, fhir_deserialize::ResourceType::Unknown, 20, fhir_deserialize::ResourceType::SampledData},
#line 207 "./src/generated/gperf_class_files/ElementDefinition.gperf"
    {"maxValuePositiveInt", 0x1c0, 40, 6, {(U8*)"maxValue", 8}, fhir_deserialize::ResourceType::Unknown, 13, fhir_deserialize::ResourceType::Unknown},
#line 31 "./src/generated/gperf_class_files/ElementDefinition.gperf"
    {"alias", 0xe0, 20, -1, {(U8*)"alias", 5}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 41 "./src/generated/gperf_class_files/ElementDefinition.gperf"
    {"defaultValueCode", 0x130, 28, 3, {(U8*)"defaultValue", 12}, fhir_deserialize::ResourceType::Unknown, 3, fhir_deserialize::ResourceType::Unknown},
#line 64 "./src/generated/gperf_class_files/ElementDefinition.gperf"
    {"defaultValueCount", 0x130, 28, 26, {(U8*)"defaultValue", 12}, fhir_deserialize::ResourceType::Unknown, 20, fhir_deserialize::ResourceType::Count},
#line 86 "./src/generated/gperf_class_files/ElementDefinition.gperf"
    {"defaultValueDosage", 0x130, 28, 48, {(U8*)"defaultValue", 12}, fhir_deserialize::ResourceType::Unknown, 20, fhir_deserialize::ResourceType::Dosage},
#line 27 "./src/generated/gperf_class_files/ElementDefinition.gperf"
    {"definition", 0xa8, 16, -1, {(U8*)"definition", 10}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 82 "./src/generated/gperf_class_files/ElementDefinition.gperf"
    {"defaultValueParameterDefinition", 0x130, 28, 44, {(U8*)"defaultValue", 12}, fhir_deserialize::ResourceType::Unknown, 20, fhir_deserialize::ResourceType::ParameterDefinition},
#line 50 "./src/generated/gperf_class_files/ElementDefinition.gperf"
    {"defaultValuePositiveInt", 0x130, 28, 12, {(U8*)"defaultValue", 12}, fhir_deserialize::ResourceType::Unknown, 13, fhir_deserialize::ResourceType::Unknown},
#line 63 "./src/generated/gperf_class_files/ElementDefinition.gperf"
    {"defaultValueContactPoint", 0x130, 28, 25, {(U8*)"defaultValue", 12}, fhir_deserialize::ResourceType::Unknown, 20, fhir_deserialize::ResourceType::ContactPoint},
#line 78 "./src/generated/gperf_class_files/ElementDefinition.gperf"
    {"defaultValueContactDetail", 0x130, 28, 40, {(U8*)"defaultValue", 12}, fhir_deserialize::ResourceType::Unknown, 20, fhir_deserialize::ResourceType::ContactDetail},
#line 61 "./src/generated/gperf_class_files/ElementDefinition.gperf"
    {"defaultValueCodeableConcept", 0x130, 28, 23, {(U8*)"defaultValue", 12}, fhir_deserialize::ResourceType::Unknown, 20, fhir_deserialize::ResourceType::CodeableConcept},
#line 23 "./src/generated/gperf_class_files/ElementDefinition.gperf"
    {"code", 0x88, 13, -1, {(U8*)"code", 4}, fhir_deserialize::ResourceType::Coding, 0, fhir_deserialize::ResourceType::Unknown},
#line 145 "./src/generated/gperf_class_files/ElementDefinition.gperf"
    {"patternDateTime", 0x180, 34, 5, {(U8*)"pattern", 7}, fhir_deserialize::ResourceType::Unknown, 17, fhir_deserialize::ResourceType::Unknown},
#line 177 "./src/generated/gperf_class_files/ElementDefinition.gperf"
    {"patternSampledData", 0x180, 34, 37, {(U8*)"pattern", 7}, fhir_deserialize::ResourceType::Unknown, 20, fhir_deserialize::ResourceType::SampledData},
#line 39 "./src/generated/gperf_class_files/ElementDefinition.gperf"
    {"defaultValueBoolean", 0x130, 28, 1, {(U8*)"defaultValue", 12}, fhir_deserialize::ResourceType::Unknown, 12, fhir_deserialize::ResourceType::Unknown},
#line 55 "./src/generated/gperf_class_files/ElementDefinition.gperf"
    {"defaultValueUrl", 0x130, 28, 17, {(U8*)"defaultValue", 12}, fhir_deserialize::ResourceType::Unknown, 10, fhir_deserialize::ResourceType::Unknown},
#line 143 "./src/generated/gperf_class_files/ElementDefinition.gperf"
    {"patternCode", 0x180, 34, 3, {(U8*)"pattern", 7}, fhir_deserialize::ResourceType::Unknown, 3, fhir_deserialize::ResourceType::Unknown},
#line 166 "./src/generated/gperf_class_files/ElementDefinition.gperf"
    {"patternCount", 0x180, 34, 26, {(U8*)"pattern", 7}, fhir_deserialize::ResourceType::Unknown, 20, fhir_deserialize::ResourceType::Count},
#line 188 "./src/generated/gperf_class_files/ElementDefinition.gperf"
    {"patternDosage", 0x180, 34, 48, {(U8*)"pattern", 7}, fhir_deserialize::ResourceType::Unknown, 20, fhir_deserialize::ResourceType::Dosage},
#line 57 "./src/generated/gperf_class_files/ElementDefinition.gperf"
    {"defaultValueAddress", 0x130, 28, 19, {(U8*)"defaultValue", 12}, fhir_deserialize::ResourceType::Unknown, 20, fhir_deserialize::ResourceType::Address},
#line 54 "./src/generated/gperf_class_files/ElementDefinition.gperf"
    {"defaultValueUri", 0x130, 28, 16, {(U8*)"defaultValue", 12}, fhir_deserialize::ResourceType::Unknown, 9, fhir_deserialize::ResourceType::Unknown},
#line 182 "./src/generated/gperf_class_files/ElementDefinition.gperf"
    {"patternDataRequirement", 0x180, 34, 42, {(U8*)"pattern", 7}, fhir_deserialize::ResourceType::Unknown, 20, fhir_deserialize::ResourceType::DataRequirement},
#line 79 "./src/generated/gperf_class_files/ElementDefinition.gperf"
    {"defaultValueContributor", 0x130, 28, 41, {(U8*)"defaultValue", 12}, fhir_deserialize::ResourceType::Unknown, 20, fhir_deserialize::ResourceType::Contributor},
#line 187 "./src/generated/gperf_class_files/ElementDefinition.gperf"
    {"patternUsageContext", 0x180, 34, 47, {(U8*)"pattern", 7}, fhir_deserialize::ResourceType::Unknown, 20, fhir_deserialize::ResourceType::UsageContext},
#line 28 "./src/generated/gperf_class_files/ElementDefinition.gperf"
    {"comment", 0xb8, 17, -1, {(U8*)"comment", 7}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 152 "./src/generated/gperf_class_files/ElementDefinition.gperf"
    {"patternPositiveInt", 0x180, 34, 12, {(U8*)"pattern", 7}, fhir_deserialize::ResourceType::Unknown, 13, fhir_deserialize::ResourceType::Unknown},
#line 19 "./src/generated/gperf_class_files/ElementDefinition.gperf"
    {"sliceName", 0x58, 9, -1, {(U8*)"sliceName", 9}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 163 "./src/generated/gperf_class_files/ElementDefinition.gperf"
    {"patternCodeableConcept", 0x180, 34, 23, {(U8*)"pattern", 7}, fhir_deserialize::ResourceType::Unknown, 20, fhir_deserialize::ResourceType::CodeableConcept},
#line 46 "./src/generated/gperf_class_files/ElementDefinition.gperf"
    {"defaultValueInstant", 0x130, 28, 8, {(U8*)"defaultValue", 12}, fhir_deserialize::ResourceType::Unknown, 19, fhir_deserialize::ResourceType::Unknown},
#line 157 "./src/generated/gperf_class_files/ElementDefinition.gperf"
    {"patternUrl", 0x180, 34, 17, {(U8*)"pattern", 7}, fhir_deserialize::ResourceType::Unknown, 10, fhir_deserialize::ResourceType::Unknown},
#line 30 "./src/generated/gperf_class_files/ElementDefinition.gperf"
    {"alias_count", 0xd8, 19, -1, {(U8*)"alias_count", 11}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 60 "./src/generated/gperf_class_files/ElementDefinition.gperf"
    {"defaultValueAttachment", 0x130, 28, 22, {(U8*)"defaultValue", 12}, fhir_deserialize::ResourceType::Unknown, 20, fhir_deserialize::ResourceType::Attachment},
#line 53 "./src/generated/gperf_class_files/ElementDefinition.gperf"
    {"defaultValueUnsignedInt", 0x130, 28, 15, {(U8*)"defaultValue", 12}, fhir_deserialize::ResourceType::Unknown, 14, fhir_deserialize::ResourceType::Unknown},
#line 159 "./src/generated/gperf_class_files/ElementDefinition.gperf"
    {"patternAddress", 0x180, 34, 19, {(U8*)"pattern", 7}, fhir_deserialize::ResourceType::Unknown, 20, fhir_deserialize::ResourceType::Address},
#line 156 "./src/generated/gperf_class_files/ElementDefinition.gperf"
    {"patternUri", 0x180, 34, 16, {(U8*)"pattern", 7}, fhir_deserialize::ResourceType::Unknown, 9, fhir_deserialize::ResourceType::Unknown},
#line 127 "./src/generated/gperf_class_files/ElementDefinition.gperf"
    {"fixedSampledData", 0x168, 32, 37, {(U8*)"fixed", 5}, fhir_deserialize::ResourceType::Unknown, 20, fhir_deserialize::ResourceType::SampledData},
#line 73 "./src/generated/gperf_class_files/ElementDefinition.gperf"
    {"defaultValueRatio", 0x130, 28, 35, {(U8*)"defaultValue", 12}, fhir_deserialize::ResourceType::Unknown, 20, fhir_deserialize::ResourceType::Ratio},
#line 110 "./src/generated/gperf_class_files/ElementDefinition.gperf"
    {"fixedAge", 0x168, 32, 20, {(U8*)"fixed", 5}, fhir_deserialize::ResourceType::Unknown, 20, fhir_deserialize::ResourceType::Age},
#line 84 "./src/generated/gperf_class_files/ElementDefinition.gperf"
    {"defaultValueTriggerDefinition", 0x130, 28, 46, {(U8*)"defaultValue", 12}, fhir_deserialize::ResourceType::Unknown, 20, fhir_deserialize::ResourceType::TriggerDefinition},
#line 101 "./src/generated/gperf_class_files/ElementDefinition.gperf"
    {"fixedOid", 0x168, 32, 11, {(U8*)"fixed", 5}, fhir_deserialize::ResourceType::Unknown, 6, fhir_deserialize::ResourceType::Unknown},
#line 44 "./src/generated/gperf_class_files/ElementDefinition.gperf"
    {"defaultValueDecimal", 0x130, 28, 6, {(U8*)"defaultValue", 12}, fhir_deserialize::ResourceType::Unknown, 15, fhir_deserialize::ResourceType::Unknown},
#line 74 "./src/generated/gperf_class_files/ElementDefinition.gperf"
    {"defaultValueReference", 0x130, 28, 36, {(U8*)"defaultValue", 12}, fhir_deserialize::ResourceType::Unknown, 20, fhir_deserialize::ResourceType::Reference},
#line 59 "./src/generated/gperf_class_files/ElementDefinition.gperf"
    {"defaultValueAnnotation", 0x130, 28, 21, {(U8*)"defaultValue", 12}, fhir_deserialize::ResourceType::Unknown, 20, fhir_deserialize::ResourceType::Annotation},
#line 47 "./src/generated/gperf_class_files/ElementDefinition.gperf"
    {"defaultValueInteger", 0x130, 28, 9, {(U8*)"defaultValue", 12}, fhir_deserialize::ResourceType::Unknown, 20, fhir_deserialize::ResourceType::Integer},
#line 194 "./src/generated/gperf_class_files/ElementDefinition.gperf"
    {"minValueInstant", 0x1a8, 38, 2, {(U8*)"minValue", 8}, fhir_deserialize::ResourceType::Unknown, 19, fhir_deserialize::ResourceType::Unknown},
#line 67 "./src/generated/gperf_class_files/ElementDefinition.gperf"
    {"defaultValueHumanName", 0x130, 28, 29, {(U8*)"defaultValue", 12}, fhir_deserialize::ResourceType::Unknown, 20, fhir_deserialize::ResourceType::HumanName},
#line 83 "./src/generated/gperf_class_files/ElementDefinition.gperf"
    {"defaultValueRelatedArtifact", 0x130, 28, 45, {(U8*)"defaultValue", 12}, fhir_deserialize::ResourceType::Unknown, 20, fhir_deserialize::ResourceType::RelatedArtifact},
#line 100 "./src/generated/gperf_class_files/ElementDefinition.gperf"
    {"fixedMarkdown", 0x168, 32, 10, {(U8*)"fixed", 5}, fhir_deserialize::ResourceType::Unknown, 5, fhir_deserialize::ResourceType::Unknown},
#line 45 "./src/generated/gperf_class_files/ElementDefinition.gperf"
    {"defaultValueId", 0x130, 28, 7, {(U8*)"defaultValue", 12}, fhir_deserialize::ResourceType::Unknown, 4, fhir_deserialize::ResourceType::Unknown},
#line 49 "./src/generated/gperf_class_files/ElementDefinition.gperf"
    {"defaultValueOid", 0x130, 28, 11, {(U8*)"defaultValue", 12}, fhir_deserialize::ResourceType::Unknown, 6, fhir_deserialize::ResourceType::Unknown},
#line 87 "./src/generated/gperf_class_files/ElementDefinition.gperf"
    {"defaultValueMeta", 0x130, 28, 49, {(U8*)"defaultValue", 12}, fhir_deserialize::ResourceType::Unknown, 20, fhir_deserialize::ResourceType::Meta},
#line 175 "./src/generated/gperf_class_files/ElementDefinition.gperf"
    {"patternRatio", 0x180, 34, 35, {(U8*)"pattern", 7}, fhir_deserialize::ResourceType::Unknown, 20, fhir_deserialize::ResourceType::Ratio},
#line 139 "./src/generated/gperf_class_files/ElementDefinition.gperf"
    {"fixedMeta", 0x168, 32, 49, {(U8*)"fixed", 5}, fhir_deserialize::ResourceType::Unknown, 20, fhir_deserialize::ResourceType::Meta},
#line 203 "./src/generated/gperf_class_files/ElementDefinition.gperf"
    {"maxValueInstant", 0x1c0, 40, 2, {(U8*)"maxValue", 8}, fhir_deserialize::ResourceType::Unknown, 19, fhir_deserialize::ResourceType::Unknown},
#line 104 "./src/generated/gperf_class_files/ElementDefinition.gperf"
    {"fixedTime", 0x168, 32, 14, {(U8*)"fixed", 5}, fhir_deserialize::ResourceType::Unknown, 18, fhir_deserialize::ResourceType::Unknown},
#line 66 "./src/generated/gperf_class_files/ElementDefinition.gperf"
    {"defaultValueDuration", 0x130, 28, 28, {(U8*)"defaultValue", 12}, fhir_deserialize::ResourceType::Unknown, 20, fhir_deserialize::ResourceType::Duration},
#line 162 "./src/generated/gperf_class_files/ElementDefinition.gperf"
    {"patternAttachment", 0x180, 34, 22, {(U8*)"pattern", 7}, fhir_deserialize::ResourceType::Unknown, 20, fhir_deserialize::ResourceType::Attachment},
#line 14 "./src/generated/gperf_class_files/ElementDefinition.gperf"
    {"modifierExtension_count", 0x28, 4, -1, {(U8*)"modifierExtension_count", 23}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 146 "./src/generated/gperf_class_files/ElementDefinition.gperf"
    {"patternDecimal", 0x180, 34, 6, {(U8*)"pattern", 7}, fhir_deserialize::ResourceType::Unknown, 15, fhir_deserialize::ResourceType::Unknown},
#line 178 "./src/generated/gperf_class_files/ElementDefinition.gperf"
    {"patternSignature", 0x180, 34, 38, {(U8*)"pattern", 7}, fhir_deserialize::ResourceType::Unknown, 20, fhir_deserialize::ResourceType::Signature},
#line 185 "./src/generated/gperf_class_files/ElementDefinition.gperf"
    {"patternRelatedArtifact", 0x180, 34, 45, {(U8*)"pattern", 7}, fhir_deserialize::ResourceType::Unknown, 20, fhir_deserialize::ResourceType::RelatedArtifact},
#line 220 "./src/generated/gperf_class_files/ElementDefinition.gperf"
    {"mapping_count", 0x220, 51, -1, {(U8*)"mapping_count", 13}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 147 "./src/generated/gperf_class_files/ElementDefinition.gperf"
    {"patternId", 0x180, 34, 7, {(U8*)"pattern", 7}, fhir_deserialize::ResourceType::Unknown, 4, fhir_deserialize::ResourceType::Unknown},
#line 151 "./src/generated/gperf_class_files/ElementDefinition.gperf"
    {"patternOid", 0x180, 34, 11, {(U8*)"pattern", 7}, fhir_deserialize::ResourceType::Unknown, 6, fhir_deserialize::ResourceType::Unknown},
#line 189 "./src/generated/gperf_class_files/ElementDefinition.gperf"
    {"patternMeta", 0x180, 34, 49, {(U8*)"pattern", 7}, fhir_deserialize::ResourceType::Unknown, 20, fhir_deserialize::ResourceType::Meta},
#line 15 "./src/generated/gperf_class_files/ElementDefinition.gperf"
    {"modifierExtension", 0x30, 5, -1, {(U8*)"modifierExtension", 17}, fhir_deserialize::ResourceType::Extension, 0, fhir_deserialize::ResourceType::Unknown},
#line 119 "./src/generated/gperf_class_files/ElementDefinition.gperf"
    {"fixedHumanName", 0x168, 32, 29, {(U8*)"fixed", 5}, fhir_deserialize::ResourceType::Unknown, 20, fhir_deserialize::ResourceType::HumanName},
#line 167 "./src/generated/gperf_class_files/ElementDefinition.gperf"
    {"patternDistance", 0x180, 34, 27, {(U8*)"pattern", 7}, fhir_deserialize::ResourceType::Unknown, 20, fhir_deserialize::ResourceType::Distance},
#line 169 "./src/generated/gperf_class_files/ElementDefinition.gperf"
    {"patternHumanName", 0x180, 34, 29, {(U8*)"pattern", 7}, fhir_deserialize::ResourceType::Unknown, 20, fhir_deserialize::ResourceType::HumanName},
#line 197 "./src/generated/gperf_class_files/ElementDefinition.gperf"
    {"minValueInteger", 0x1a8, 38, 5, {(U8*)"minValue", 8}, fhir_deserialize::ResourceType::Unknown, 20, fhir_deserialize::ResourceType::Integer},
#line 184 "./src/generated/gperf_class_files/ElementDefinition.gperf"
    {"patternParameterDefinition", 0x180, 34, 44, {(U8*)"pattern", 7}, fhir_deserialize::ResourceType::Unknown, 20, fhir_deserialize::ResourceType::ParameterDefinition},
#line 165 "./src/generated/gperf_class_files/ElementDefinition.gperf"
    {"patternContactPoint", 0x180, 34, 25, {(U8*)"pattern", 7}, fhir_deserialize::ResourceType::Unknown, 20, fhir_deserialize::ResourceType::ContactPoint},
#line 180 "./src/generated/gperf_class_files/ElementDefinition.gperf"
    {"patternContactDetail", 0x180, 34, 40, {(U8*)"pattern", 7}, fhir_deserialize::ResourceType::Unknown, 20, fhir_deserialize::ResourceType::ContactDetail},
#line 142 "./src/generated/gperf_class_files/ElementDefinition.gperf"
    {"patternCanonical", 0x180, 34, 2, {(U8*)"pattern", 7}, fhir_deserialize::ResourceType::Unknown, 2, fhir_deserialize::ResourceType::Unknown},
#line 24 "./src/generated/gperf_class_files/ElementDefinition.gperf"
    {"slicing", 0x90, 14, -1, {(U8*)"slicing", 7}, fhir_deserialize::ResourceType::ElementDefinition_Slicing, 0, fhir_deserialize::ResourceType::Unknown},
#line 212 "./src/generated/gperf_class_files/ElementDefinition.gperf"
    {"condition", 0x1e0, 43, -1, {(U8*)"condition", 9}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 206 "./src/generated/gperf_class_files/ElementDefinition.gperf"
    {"maxValueInteger", 0x1c0, 40, 5, {(U8*)"maxValue", 8}, fhir_deserialize::ResourceType::Unknown, 20, fhir_deserialize::ResourceType::Integer},
#line 219 "./src/generated/gperf_class_files/ElementDefinition.gperf"
    {"binding", 0x218, 50, -1, {(U8*)"binding", 7}, fhir_deserialize::ResourceType::ElementDefinition_Binding, 0, fhir_deserialize::ResourceType::Unknown},
#line 77 "./src/generated/gperf_class_files/ElementDefinition.gperf"
    {"defaultValueTiming", 0x130, 28, 39, {(U8*)"defaultValue", 12}, fhir_deserialize::ResourceType::Unknown, 20, fhir_deserialize::ResourceType::Timing},
#line 141 "./src/generated/gperf_class_files/ElementDefinition.gperf"
    {"patternBoolean", 0x180, 34, 1, {(U8*)"pattern", 7}, fhir_deserialize::ResourceType::Unknown, 12, fhir_deserialize::ResourceType::Unknown},
#line 214 "./src/generated/gperf_class_files/ElementDefinition.gperf"
    {"constraint", 0x1f0, 45, -1, {(U8*)"constraint", 10}, fhir_deserialize::ResourceType::ElementDefinition_Constraint, 0, fhir_deserialize::ResourceType::Unknown},
#line 29 "./src/generated/gperf_class_files/ElementDefinition.gperf"
    {"requirements", 0xc8, 18, -1, {(U8*)"requirements", 12}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 37 "./src/generated/gperf_class_files/ElementDefinition.gperf"
    {"type", 0x120, 26, -1, {(U8*)"type", 4}, fhir_deserialize::ResourceType::ElementDefinition_Type, 0, fhir_deserialize::ResourceType::Unknown},
#line 216 "./src/generated/gperf_class_files/ElementDefinition.gperf"
    {"isModifier", 0x1fc, 47, -1, {(U8*)"isModifier", 10}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 217 "./src/generated/gperf_class_files/ElementDefinition.gperf"
    {"isModifierReason", 0x200, 48, -1, {(U8*)"isModifierReason", 16}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 221 "./src/generated/gperf_class_files/ElementDefinition.gperf"
    {"mapping", 0x228, 52, -1, {(U8*)"mapping", 7}, fhir_deserialize::ResourceType::ElementDefinition_Mapping, 0, fhir_deserialize::ResourceType::Unknown},
#line 88 "./src/generated/gperf_class_files/ElementDefinition.gperf"
    {"meaningWhenMissing", 0x140, 29, -1, {(U8*)"meaningWhenMissing", 18}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 92 "./src/generated/gperf_class_files/ElementDefinition.gperf"
    {"fixedCanonical", 0x168, 32, 2, {(U8*)"fixed", 5}, fhir_deserialize::ResourceType::Unknown, 2, fhir_deserialize::ResourceType::Unknown},
#line 125 "./src/generated/gperf_class_files/ElementDefinition.gperf"
    {"fixedRatio", 0x168, 32, 35, {(U8*)"fixed", 5}, fhir_deserialize::ResourceType::Unknown, 20, fhir_deserialize::ResourceType::Ratio},
#line 102 "./src/generated/gperf_class_files/ElementDefinition.gperf"
    {"fixedPositiveInt", 0x168, 32, 12, {(U8*)"fixed", 5}, fhir_deserialize::ResourceType::Unknown, 13, fhir_deserialize::ResourceType::Unknown},
#line 191 "./src/generated/gperf_class_files/ElementDefinition.gperf"
    {"example", 0x198, 36, -1, {(U8*)"example", 7}, fhir_deserialize::ResourceType::ElementDefinition_Example, 0, fhir_deserialize::ResourceType::Unknown},
#line 186 "./src/generated/gperf_class_files/ElementDefinition.gperf"
    {"patternTriggerDefinition", 0x180, 34, 46, {(U8*)"pattern", 7}, fhir_deserialize::ResourceType::Unknown, 20, fhir_deserialize::ResourceType::TriggerDefinition},
#line 135 "./src/generated/gperf_class_files/ElementDefinition.gperf"
    {"fixedRelatedArtifact", 0x168, 32, 45, {(U8*)"fixed", 5}, fhir_deserialize::ResourceType::Unknown, 20, fhir_deserialize::ResourceType::RelatedArtifact},
#line 215 "./src/generated/gperf_class_files/ElementDefinition.gperf"
    {"mustSupport", 0x1f8, 46, -1, {(U8*)"mustSupport", 11}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 179 "./src/generated/gperf_class_files/ElementDefinition.gperf"
    {"patternTiming", 0x180, 34, 39, {(U8*)"pattern", 7}, fhir_deserialize::ResourceType::Unknown, 20, fhir_deserialize::ResourceType::Timing},
#line 148 "./src/generated/gperf_class_files/ElementDefinition.gperf"
    {"patternInstant", 0x180, 34, 8, {(U8*)"pattern", 7}, fhir_deserialize::ResourceType::Unknown, 19, fhir_deserialize::ResourceType::Unknown},
#line 168 "./src/generated/gperf_class_files/ElementDefinition.gperf"
    {"patternDuration", 0x180, 34, 28, {(U8*)"pattern", 7}, fhir_deserialize::ResourceType::Unknown, 20, fhir_deserialize::ResourceType::Duration},
#line 129 "./src/generated/gperf_class_files/ElementDefinition.gperf"
    {"fixedTiming", 0x168, 32, 39, {(U8*)"fixed", 5}, fhir_deserialize::ResourceType::Unknown, 20, fhir_deserialize::ResourceType::Timing},
#line 96 "./src/generated/gperf_class_files/ElementDefinition.gperf"
    {"fixedDecimal", 0x168, 32, 6, {(U8*)"fixed", 5}, fhir_deserialize::ResourceType::Unknown, 15, fhir_deserialize::ResourceType::Unknown},
#line 33 "./src/generated/gperf_class_files/ElementDefinition.gperf"
    {"max", 0xf0, 22, -1, {(U8*)"max", 3}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 149 "./src/generated/gperf_class_files/ElementDefinition.gperf"
    {"patternInteger", 0x180, 34, 9, {(U8*)"pattern", 7}, fhir_deserialize::ResourceType::Unknown, 20, fhir_deserialize::ResourceType::Integer},
#line 112 "./src/generated/gperf_class_files/ElementDefinition.gperf"
    {"fixedAttachment", 0x168, 32, 22, {(U8*)"fixed", 5}, fhir_deserialize::ResourceType::Unknown, 20, fhir_deserialize::ResourceType::Attachment},
#line 199 "./src/generated/gperf_class_files/ElementDefinition.gperf"
    {"minValueUnsignedInt", 0x1a8, 38, 7, {(U8*)"minValue", 8}, fhir_deserialize::ResourceType::Unknown, 14, fhir_deserialize::ResourceType::Unknown},
#line 111 "./src/generated/gperf_class_files/ElementDefinition.gperf"
    {"fixedAnnotation", 0x168, 32, 21, {(U8*)"fixed", 5}, fhir_deserialize::ResourceType::Unknown, 20, fhir_deserialize::ResourceType::Annotation},
#line 138 "./src/generated/gperf_class_files/ElementDefinition.gperf"
    {"fixedDosage", 0x168, 32, 48, {(U8*)"fixed", 5}, fhir_deserialize::ResourceType::Unknown, 20, fhir_deserialize::ResourceType::Dosage},
#line 11 "./src/generated/gperf_class_files/ElementDefinition.gperf"
    {"id", 0x8, 1, -1, {(U8*)"id", 2}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 62 "./src/generated/gperf_class_files/ElementDefinition.gperf"
    {"defaultValueCoding", 0x130, 28, 24, {(U8*)"defaultValue", 12}, fhir_deserialize::ResourceType::Unknown, 20, fhir_deserialize::ResourceType::Coding},
#line 116 "./src/generated/gperf_class_files/ElementDefinition.gperf"
    {"fixedCount", 0x168, 32, 26, {(U8*)"fixed", 5}, fhir_deserialize::ResourceType::Unknown, 20, fhir_deserialize::ResourceType::Count},
#line 176 "./src/generated/gperf_class_files/ElementDefinition.gperf"
    {"patternReference", 0x180, 34, 36, {(U8*)"pattern", 7}, fhir_deserialize::ResourceType::Unknown, 20, fhir_deserialize::ResourceType::Reference},
#line 161 "./src/generated/gperf_class_files/ElementDefinition.gperf"
    {"patternAnnotation", 0x180, 34, 21, {(U8*)"pattern", 7}, fhir_deserialize::ResourceType::Unknown, 20, fhir_deserialize::ResourceType::Annotation},
#line 155 "./src/generated/gperf_class_files/ElementDefinition.gperf"
    {"patternUnsignedInt", 0x180, 34, 15, {(U8*)"pattern", 7}, fhir_deserialize::ResourceType::Unknown, 14, fhir_deserialize::ResourceType::Unknown},
#line 208 "./src/generated/gperf_class_files/ElementDefinition.gperf"
    {"maxValueUnsignedInt", 0x1c0, 40, 7, {(U8*)"maxValue", 8}, fhir_deserialize::ResourceType::Unknown, 14, fhir_deserialize::ResourceType::Unknown},
#line 132 "./src/generated/gperf_class_files/ElementDefinition.gperf"
    {"fixedDataRequirement", 0x168, 32, 42, {(U8*)"fixed", 5}, fhir_deserialize::ResourceType::Unknown, 20, fhir_deserialize::ResourceType::DataRequirement},
#line 103 "./src/generated/gperf_class_files/ElementDefinition.gperf"
    {"fixedString", 0x168, 32, 13, {(U8*)"fixed", 5}, fhir_deserialize::ResourceType::Unknown, 7, fhir_deserialize::ResourceType::Unknown},
#line 170 "./src/generated/gperf_class_files/ElementDefinition.gperf"
    {"patternIdentifier", 0x180, 34, 30, {(U8*)"pattern", 7}, fhir_deserialize::ResourceType::Unknown, 20, fhir_deserialize::ResourceType::Identifier},
#line 70 "./src/generated/gperf_class_files/ElementDefinition.gperf"
    {"defaultValuePeriod", 0x130, 28, 32, {(U8*)"defaultValue", 12}, fhir_deserialize::ResourceType::Unknown, 20, fhir_deserialize::ResourceType::Period},
#line 38 "./src/generated/gperf_class_files/ElementDefinition.gperf"
    {"defaultValueBase64Binary", 0x130, 28, 0, {(U8*)"defaultValue", 12}, fhir_deserialize::ResourceType::Unknown, 1, fhir_deserialize::ResourceType::Unknown},
#line 17 "./src/generated/gperf_class_files/ElementDefinition.gperf"
    {"representation_count", 0x48, 7, -1, {(U8*)"representation_count", 20}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 56 "./src/generated/gperf_class_files/ElementDefinition.gperf"
    {"defaultValueUuid", 0x130, 28, 18, {(U8*)"defaultValue", 12}, fhir_deserialize::ResourceType::Unknown, 11, fhir_deserialize::ResourceType::Unknown},
#line 81 "./src/generated/gperf_class_files/ElementDefinition.gperf"
    {"defaultValueExpression", 0x130, 28, 43, {(U8*)"defaultValue", 12}, fhir_deserialize::ResourceType::Unknown, 20, fhir_deserialize::ResourceType::Expression},
#line 118 "./src/generated/gperf_class_files/ElementDefinition.gperf"
    {"fixedDuration", 0x168, 32, 28, {(U8*)"fixed", 5}, fhir_deserialize::ResourceType::Unknown, 20, fhir_deserialize::ResourceType::Duration},
#line 93 "./src/generated/gperf_class_files/ElementDefinition.gperf"
    {"fixedCode", 0x168, 32, 3, {(U8*)"fixed", 5}, fhir_deserialize::ResourceType::Unknown, 3, fhir_deserialize::ResourceType::Unknown},
#line 25 "./src/generated/gperf_class_files/ElementDefinition.gperf"
    {"short", 0x98, 15, -1, {(U8*)"short_", 6}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 26 "./src/generated/gperf_class_files/ElementDefinition.gperf"
    {"short_", 0x98, 15, -1, {(U8*)"short_", 6}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 109 "./src/generated/gperf_class_files/ElementDefinition.gperf"
    {"fixedAddress", 0x168, 32, 19, {(U8*)"fixed", 5}, fhir_deserialize::ResourceType::Unknown, 20, fhir_deserialize::ResourceType::Address},
#line 164 "./src/generated/gperf_class_files/ElementDefinition.gperf"
    {"patternCoding", 0x180, 34, 24, {(U8*)"pattern", 7}, fhir_deserialize::ResourceType::Unknown, 20, fhir_deserialize::ResourceType::Coding},
#line 18 "./src/generated/gperf_class_files/ElementDefinition.gperf"
    {"representation", 0x50, 8, -1, {(U8*)"representation", 14}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 211 "./src/generated/gperf_class_files/ElementDefinition.gperf"
    {"condition_count", 0x1d8, 42, -1, {(U8*)"condition_count", 15}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 128 "./src/generated/gperf_class_files/ElementDefinition.gperf"
    {"fixedSignature", 0x168, 32, 38, {(U8*)"fixed", 5}, fhir_deserialize::ResourceType::Unknown, 20, fhir_deserialize::ResourceType::Signature},
#line 69 "./src/generated/gperf_class_files/ElementDefinition.gperf"
    {"defaultValueMoney", 0x130, 28, 31, {(U8*)"defaultValue", 12}, fhir_deserialize::ResourceType::Unknown, 20, fhir_deserialize::ResourceType::Money},
#line 172 "./src/generated/gperf_class_files/ElementDefinition.gperf"
    {"patternPeriod", 0x180, 34, 32, {(U8*)"pattern", 7}, fhir_deserialize::ResourceType::Unknown, 20, fhir_deserialize::ResourceType::Period},
#line 16 "./src/generated/gperf_class_files/ElementDefinition.gperf"
    {"path", 0x38, 6, -1, {(U8*)"path", 4}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 158 "./src/generated/gperf_class_files/ElementDefinition.gperf"
    {"patternUuid", 0x180, 34, 18, {(U8*)"pattern", 7}, fhir_deserialize::ResourceType::Unknown, 11, fhir_deserialize::ResourceType::Unknown},
#line 183 "./src/generated/gperf_class_files/ElementDefinition.gperf"
    {"patternExpression", 0x180, 34, 43, {(U8*)"pattern", 7}, fhir_deserialize::ResourceType::Unknown, 20, fhir_deserialize::ResourceType::Expression},
#line 51 "./src/generated/gperf_class_files/ElementDefinition.gperf"
    {"defaultValueString", 0x130, 28, 13, {(U8*)"defaultValue", 12}, fhir_deserialize::ResourceType::Unknown, 7, fhir_deserialize::ResourceType::Unknown},
#line 134 "./src/generated/gperf_class_files/ElementDefinition.gperf"
    {"fixedParameterDefinition", 0x168, 32, 44, {(U8*)"fixed", 5}, fhir_deserialize::ResourceType::Unknown, 20, fhir_deserialize::ResourceType::ParameterDefinition},
#line 58 "./src/generated/gperf_class_files/ElementDefinition.gperf"
    {"defaultValueAge", 0x130, 28, 20, {(U8*)"defaultValue", 12}, fhir_deserialize::ResourceType::Unknown, 20, fhir_deserialize::ResourceType::Age},
#line 218 "./src/generated/gperf_class_files/ElementDefinition.gperf"
    {"isSummary", 0x210, 49, -1, {(U8*)"isSummary", 9}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 122 "./src/generated/gperf_class_files/ElementDefinition.gperf"
    {"fixedPeriod", 0x168, 32, 32, {(U8*)"fixed", 5}, fhir_deserialize::ResourceType::Unknown, 20, fhir_deserialize::ResourceType::Period},
#line 115 "./src/generated/gperf_class_files/ElementDefinition.gperf"
    {"fixedContactPoint", 0x168, 32, 25, {(U8*)"fixed", 5}, fhir_deserialize::ResourceType::Unknown, 20, fhir_deserialize::ResourceType::ContactPoint},
#line 150 "./src/generated/gperf_class_files/ElementDefinition.gperf"
    {"patternMarkdown", 0x180, 34, 10, {(U8*)"pattern", 7}, fhir_deserialize::ResourceType::Unknown, 5, fhir_deserialize::ResourceType::Unknown},
#line 171 "./src/generated/gperf_class_files/ElementDefinition.gperf"
    {"patternMoney", 0x180, 34, 31, {(U8*)"pattern", 7}, fhir_deserialize::ResourceType::Unknown, 20, fhir_deserialize::ResourceType::Money},
#line 181 "./src/generated/gperf_class_files/ElementDefinition.gperf"
    {"patternContributor", 0x180, 34, 41, {(U8*)"pattern", 7}, fhir_deserialize::ResourceType::Unknown, 20, fhir_deserialize::ResourceType::Contributor},
#line 35 "./src/generated/gperf_class_files/ElementDefinition.gperf"
    {"contentReference", 0x108, 24, -1, {(U8*)"contentReference", 16}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 192 "./src/generated/gperf_class_files/ElementDefinition.gperf"
    {"minValueDate", 0x1a8, 38, 0, {(U8*)"minValue", 8}, fhir_deserialize::ResourceType::Unknown, 16, fhir_deserialize::ResourceType::Unknown},
#line 153 "./src/generated/gperf_class_files/ElementDefinition.gperf"
    {"patternString", 0x180, 34, 13, {(U8*)"pattern", 7}, fhir_deserialize::ResourceType::Unknown, 7, fhir_deserialize::ResourceType::Unknown},
#line 210 "./src/generated/gperf_class_files/ElementDefinition.gperf"
    {"maxLength", 0x1d0, 41, -1, {(U8*)"maxLength", 9}, fhir_deserialize::ResourceType::Integer, 0, fhir_deserialize::ResourceType::Unknown},
#line 160 "./src/generated/gperf_class_files/ElementDefinition.gperf"
    {"patternAge", 0x180, 34, 20, {(U8*)"pattern", 7}, fhir_deserialize::ResourceType::Unknown, 20, fhir_deserialize::ResourceType::Age},
#line 193 "./src/generated/gperf_class_files/ElementDefinition.gperf"
    {"minValueDateTime", 0x1a8, 38, 1, {(U8*)"minValue", 8}, fhir_deserialize::ResourceType::Unknown, 17, fhir_deserialize::ResourceType::Unknown},
#line 117 "./src/generated/gperf_class_files/ElementDefinition.gperf"
    {"fixedDistance", 0x168, 32, 27, {(U8*)"fixed", 5}, fhir_deserialize::ResourceType::Unknown, 20, fhir_deserialize::ResourceType::Distance},
#line 213 "./src/generated/gperf_class_files/ElementDefinition.gperf"
    {"constraint_count", 0x1e8, 44, -1, {(U8*)"constraint_count", 16}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 201 "./src/generated/gperf_class_files/ElementDefinition.gperf"
    {"maxValueDate", 0x1c0, 40, 0, {(U8*)"maxValue", 8}, fhir_deserialize::ResourceType::Unknown, 16, fhir_deserialize::ResourceType::Unknown},
#line 107 "./src/generated/gperf_class_files/ElementDefinition.gperf"
    {"fixedUrl", 0x168, 32, 17, {(U8*)"fixed", 5}, fhir_deserialize::ResourceType::Unknown, 10, fhir_deserialize::ResourceType::Unknown},
#line 196 "./src/generated/gperf_class_files/ElementDefinition.gperf"
    {"minValueDecimal", 0x1a8, 38, 4, {(U8*)"minValue", 8}, fhir_deserialize::ResourceType::Unknown, 15, fhir_deserialize::ResourceType::Unknown},
#line 202 "./src/generated/gperf_class_files/ElementDefinition.gperf"
    {"maxValueDateTime", 0x1c0, 40, 1, {(U8*)"maxValue", 8}, fhir_deserialize::ResourceType::Unknown, 17, fhir_deserialize::ResourceType::Unknown},
#line 195 "./src/generated/gperf_class_files/ElementDefinition.gperf"
    {"minValueTime", 0x1a8, 38, 3, {(U8*)"minValue", 8}, fhir_deserialize::ResourceType::Unknown, 18, fhir_deserialize::ResourceType::Unknown},
#line 106 "./src/generated/gperf_class_files/ElementDefinition.gperf"
    {"fixedUri", 0x168, 32, 16, {(U8*)"fixed", 5}, fhir_deserialize::ResourceType::Unknown, 9, fhir_deserialize::ResourceType::Unknown},
#line 94 "./src/generated/gperf_class_files/ElementDefinition.gperf"
    {"fixedDate", 0x168, 32, 4, {(U8*)"fixed", 5}, fhir_deserialize::ResourceType::Unknown, 16, fhir_deserialize::ResourceType::Unknown},
#line 114 "./src/generated/gperf_class_files/ElementDefinition.gperf"
    {"fixedCoding", 0x168, 32, 24, {(U8*)"fixed", 5}, fhir_deserialize::ResourceType::Unknown, 20, fhir_deserialize::ResourceType::Coding},
#line 95 "./src/generated/gperf_class_files/ElementDefinition.gperf"
    {"fixedDateTime", 0x168, 32, 5, {(U8*)"fixed", 5}, fhir_deserialize::ResourceType::Unknown, 17, fhir_deserialize::ResourceType::Unknown},
#line 205 "./src/generated/gperf_class_files/ElementDefinition.gperf"
    {"maxValueDecimal", 0x1c0, 40, 4, {(U8*)"maxValue", 8}, fhir_deserialize::ResourceType::Unknown, 15, fhir_deserialize::ResourceType::Unknown},
#line 204 "./src/generated/gperf_class_files/ElementDefinition.gperf"
    {"maxValueTime", 0x1c0, 40, 3, {(U8*)"maxValue", 8}, fhir_deserialize::ResourceType::Unknown, 18, fhir_deserialize::ResourceType::Unknown},
#line 123 "./src/generated/gperf_class_files/ElementDefinition.gperf"
    {"fixedQuantity", 0x168, 32, 33, {(U8*)"fixed", 5}, fhir_deserialize::ResourceType::Unknown, 20, fhir_deserialize::ResourceType::Quantity},
#line 126 "./src/generated/gperf_class_files/ElementDefinition.gperf"
    {"fixedReference", 0x168, 32, 36, {(U8*)"fixed", 5}, fhir_deserialize::ResourceType::Unknown, 20, fhir_deserialize::ResourceType::Reference},
#line 200 "./src/generated/gperf_class_files/ElementDefinition.gperf"
    {"minValueQuantity", 0x1a8, 38, 8, {(U8*)"minValue", 8}, fhir_deserialize::ResourceType::Unknown, 20, fhir_deserialize::ResourceType::Quantity},
#line 10 "./src/generated/gperf_class_files/ElementDefinition.gperf"
    {"resourceType", 0x0, 0, -1, {(U8*)"resourceType", 12}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 190 "./src/generated/gperf_class_files/ElementDefinition.gperf"
    {"example_count", 0x190, 35, -1, {(U8*)"example_count", 13}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 71 "./src/generated/gperf_class_files/ElementDefinition.gperf"
    {"defaultValueQuantity", 0x130, 28, 33, {(U8*)"defaultValue", 12}, fhir_deserialize::ResourceType::Unknown, 20, fhir_deserialize::ResourceType::Quantity},
#line 98 "./src/generated/gperf_class_files/ElementDefinition.gperf"
    {"fixedInstant", 0x168, 32, 8, {(U8*)"fixed", 5}, fhir_deserialize::ResourceType::Unknown, 19, fhir_deserialize::ResourceType::Unknown},
#line 22 "./src/generated/gperf_class_files/ElementDefinition.gperf"
    {"code_count", 0x80, 12, -1, {(U8*)"code_count", 10}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 209 "./src/generated/gperf_class_files/ElementDefinition.gperf"
    {"maxValueQuantity", 0x1c0, 40, 8, {(U8*)"maxValue", 8}, fhir_deserialize::ResourceType::Unknown, 20, fhir_deserialize::ResourceType::Quantity},
#line 130 "./src/generated/gperf_class_files/ElementDefinition.gperf"
    {"fixedContactDetail", 0x168, 32, 40, {(U8*)"fixed", 5}, fhir_deserialize::ResourceType::Unknown, 20, fhir_deserialize::ResourceType::ContactDetail},
#line 131 "./src/generated/gperf_class_files/ElementDefinition.gperf"
    {"fixedContributor", 0x168, 32, 41, {(U8*)"fixed", 5}, fhir_deserialize::ResourceType::Unknown, 20, fhir_deserialize::ResourceType::Contributor},
#line 105 "./src/generated/gperf_class_files/ElementDefinition.gperf"
    {"fixedUnsignedInt", 0x168, 32, 15, {(U8*)"fixed", 5}, fhir_deserialize::ResourceType::Unknown, 14, fhir_deserialize::ResourceType::Unknown},
#line 97 "./src/generated/gperf_class_files/ElementDefinition.gperf"
    {"fixedId", 0x168, 32, 7, {(U8*)"fixed", 5}, fhir_deserialize::ResourceType::Unknown, 4, fhir_deserialize::ResourceType::Unknown},
#line 13 "./src/generated/gperf_class_files/ElementDefinition.gperf"
    {"extension", 0x20, 3, -1, {(U8*)"extension", 9}, fhir_deserialize::ResourceType::Extension, 0, fhir_deserialize::ResourceType::Unknown},
#line 124 "./src/generated/gperf_class_files/ElementDefinition.gperf"
    {"fixedRange", 0x168, 32, 34, {(U8*)"fixed", 5}, fhir_deserialize::ResourceType::Unknown, 20, fhir_deserialize::ResourceType::Range},
#line 99 "./src/generated/gperf_class_files/ElementDefinition.gperf"
    {"fixedInteger", 0x168, 32, 9, {(U8*)"fixed", 5}, fhir_deserialize::ResourceType::Unknown, 20, fhir_deserialize::ResourceType::Integer},
#line 89 "./src/generated/gperf_class_files/ElementDefinition.gperf"
    {"orderMeaning", 0x150, 30, -1, {(U8*)"orderMeaning", 12}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 90 "./src/generated/gperf_class_files/ElementDefinition.gperf"
    {"fixedBase64Binary", 0x168, 32, 0, {(U8*)"fixed", 5}, fhir_deserialize::ResourceType::Unknown, 1, fhir_deserialize::ResourceType::Unknown},
#line 140 "./src/generated/gperf_class_files/ElementDefinition.gperf"
    {"patternBase64Binary", 0x180, 34, 0, {(U8*)"pattern", 7}, fhir_deserialize::ResourceType::Unknown, 1, fhir_deserialize::ResourceType::Unknown},
#line 121 "./src/generated/gperf_class_files/ElementDefinition.gperf"
    {"fixedMoney", 0x168, 32, 31, {(U8*)"fixed", 5}, fhir_deserialize::ResourceType::Unknown, 20, fhir_deserialize::ResourceType::Money},
#line 133 "./src/generated/gperf_class_files/ElementDefinition.gperf"
    {"fixedExpression", 0x168, 32, 43, {(U8*)"fixed", 5}, fhir_deserialize::ResourceType::Unknown, 20, fhir_deserialize::ResourceType::Expression},
#line 108 "./src/generated/gperf_class_files/ElementDefinition.gperf"
    {"fixedUuid", 0x168, 32, 18, {(U8*)"fixed", 5}, fhir_deserialize::ResourceType::Unknown, 11, fhir_deserialize::ResourceType::Unknown},
#line 136 "./src/generated/gperf_class_files/ElementDefinition.gperf"
    {"fixedTriggerDefinition", 0x168, 32, 46, {(U8*)"fixed", 5}, fhir_deserialize::ResourceType::Unknown, 20, fhir_deserialize::ResourceType::TriggerDefinition},
#line 173 "./src/generated/gperf_class_files/ElementDefinition.gperf"
    {"patternQuantity", 0x180, 34, 33, {(U8*)"pattern", 7}, fhir_deserialize::ResourceType::Unknown, 20, fhir_deserialize::ResourceType::Quantity},
#line 12 "./src/generated/gperf_class_files/ElementDefinition.gperf"
    {"extension_count", 0x18, 2, -1, {(U8*)"extension_count", 15}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 36 "./src/generated/gperf_class_files/ElementDefinition.gperf"
    {"type_count", 0x118, 25, -1, {(U8*)"type_count", 10}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 120 "./src/generated/gperf_class_files/ElementDefinition.gperf"
    {"fixedIdentifier", 0x168, 32, 30, {(U8*)"fixed", 5}, fhir_deserialize::ResourceType::Unknown, 20, fhir_deserialize::ResourceType::Identifier},
#line 113 "./src/generated/gperf_class_files/ElementDefinition.gperf"
    {"fixedCodeableConcept", 0x168, 32, 23, {(U8*)"fixed", 5}, fhir_deserialize::ResourceType::Unknown, 20, fhir_deserialize::ResourceType::CodeableConcept},
#line 20 "./src/generated/gperf_class_files/ElementDefinition.gperf"
    {"sliceIsConstraining", 0x68, 10, -1, {(U8*)"sliceIsConstraining", 19}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 137 "./src/generated/gperf_class_files/ElementDefinition.gperf"
    {"fixedUsageContext", 0x168, 32, 47, {(U8*)"fixed", 5}, fhir_deserialize::ResourceType::Unknown, 20, fhir_deserialize::ResourceType::UsageContext}
  };

static const short lookup[] =
  {
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,   0,
      1,  -1,  -1,   2,  -1,  -1,   3,  -1,  -1,  -1,
      4,   5,  -1,  -1,   6,  -1,   7,   8,  -1,  -1,
      9,  10,  11,  -1,  -1,  -1,  12,  13,  -1,  14,
     -1,  -1,  15,  -1,  -1,  16,  17,  18,  19,  20,
     21,  22,  23,  24,  -1,  25,  26,  -1,  27,  28,
     29,  -1,  30,  -1,  31,  32,  -1,  -1,  33,  34,
     35,  36,  37,  38,  39,  40,  -1,  41,  42,  43,
     -1,  -1,  44,  45,  46,  -1,  -1,  47,  -1,  48,
     49,  50,  51,  52,  53,  54,  55,  56,  57,  58,
     -1,  -1,  -1,  59,  60,  -1,  61,  62,  -1,  63,
     64,  65,  66,  67,  68,  69,  70,  71,  -1,  72,
     73,  -1,  -1,  -1,  74,  75,  -1,  76,  77,  78,
     -1,  79,  80,  81,  82,  83,  84,  85,  -1,  86,
     87,  88,  -1,  -1,  -1,  89,  90,  -1,  -1,  91,
     92,  93,  94,  -1,  95,  96,  -1,  97,  98,  99,
    100,  -1, 101,  -1, 102, 103, 104, 105, 106, 107,
    108, 109, 110,  -1, 111, 112, 113,  -1, 114, 115,
    116, 117, 118, 119, 120, 121,  -1,  -1,  -1, 122,
    123, 124, 125, 126,  -1, 127, 128, 129, 130, 131,
    132, 133, 134, 135, 136, 137, 138, 139, 140, 141,
    142, 143, 144, 145, 146, 147,  -1,  -1,  -1, 148,
     -1,  -1, 149, 150, 151,  -1, 152, 153, 154, 155,
    156,  -1,  -1,  -1, 157,  -1, 158, 159,  -1,  -1,
    160,  -1, 161, 162,  -1,  -1, 163, 164, 165, 166,
    167, 168,  -1, 169,  -1,  -1, 170, 171, 172,  -1,
    173, 174, 175, 176, 177,  -1, 178,  -1, 179,  -1,
    180,  -1, 181, 182, 183,  -1, 184, 185, 186,  -1,
    187,  -1, 188,  -1,  -1, 189, 190,  -1, 191,  -1,
     -1, 192,  -1,  -1,  -1,  -1, 193,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1, 194,  -1,  -1,
     -1,  -1,  -1,  -1, 195, 196,  -1, 197,  -1,  -1,
     -1,  -1, 198,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1, 199,  -1, 200,  -1,  -1,  -1,  -1,  -1,
    201,  -1,  -1,  -1,  -1, 202,  -1,  -1,  -1, 203,
     -1,  -1,  -1,  -1,  -1,  -1,  -1, 204,  -1,  -1,
    205,  -1,  -1,  -1,  -1, 206,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1, 207,  -1,  -1,  -1,  -1,
    208,  -1,  -1,  -1,  -1, 209,  -1,  -1,  -1, 210,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1, 211
  };

const struct fhir_deserialize::MemberNameAndOffset *
ElementDefinition_Gperf::ElementDefinition_MemberLookup (register const char *str, register unsigned int len)
{
  if (len <= MAX_WORD_LENGTH && len >= MIN_WORD_LENGTH)
    {
      register int key = hash (str, len);

      if (key <= MAX_HASH_VALUE && key >= 0)
        {
          register int index = lookup[key];

          if (index >= 0)
            {
              register const char *s = word_array_ElementDefinition[index].name;

              if (*str == *s && !strncmp (str + 1, s + 1, len - 1) && s[len] == '\0')
                return &word_array_ElementDefinition[index];
            }
        }
    }
  return 0;
}
