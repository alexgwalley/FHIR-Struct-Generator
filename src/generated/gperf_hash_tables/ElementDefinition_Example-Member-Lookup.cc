/* C++ code produced by gperf version 3.0.1 */
/* Command-line: gperf.exe -t --output-file=src/generated/gperf_hash_tables/ElementDefinition_Example-Member-Lookup.cc -CGD ./src/generated/gperf_class_files/ElementDefinition_Example.gperf  */
/* Computed positions: -k'6,8' */

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

#line 8 "./src/generated/gperf_class_files/ElementDefinition_Example.gperf"
struct fhir_deserialize::MemberNameAndOffset;
enum
  {
    TOTAL_KEYWORDS = 55,
    MIN_WORD_LENGTH = 2,
    MAX_WORD_LENGTH = 24,
    MIN_HASH_VALUE = 2,
    MAX_HASH_VALUE = 81
  };

/* maximum key range = 80, duplicates = 0 */

class ElementDefinition_Example_Gperf
{
private:
  static inline unsigned int hash (const char *str, unsigned int len);
public:
  static const struct fhir_deserialize::MemberNameAndOffset *ElementDefinition_Example_MemberLookup (const char *str, unsigned int len);
};

inline unsigned int
ElementDefinition_Example_Gperf::hash (register const char *str, register unsigned int len)
{
  static const unsigned char asso_values[] =
    {
      82, 82, 82, 82, 82, 82, 82, 82, 82, 82,
      82, 82, 82, 82, 82, 82, 82, 82, 82, 82,
      82, 82, 82, 82, 82, 82, 82, 82, 82, 82,
      82, 82, 82, 82, 82, 82, 82, 82, 82, 82,
      82, 82, 82, 82, 82, 82, 82, 82, 82, 82,
      82, 82, 82, 82, 82, 82, 82, 82, 82, 82,
      82, 82, 82, 82, 82, 20, 20,  0,  5, 25,
      82, 82,  0,  5, 82, 82, 82, 40, 82,  0,
       5,  5,  0, 15,  0, 15, 82, 82, 82, 82,
      82, 82, 82, 82, 82, 82, 82, 30, 82, 40,
       0,  5, 10,  0, 82, 20, 82, 82, 35, 50,
       0, 20, 25, 82, 20, 10,  5, 50, 82, 82,
      82, 82, 82, 82, 82, 82, 82, 82, 82, 82,
      82, 82, 82, 82, 82, 82, 82, 82, 82, 82,
      82, 82, 82, 82, 82, 82, 82, 82, 82, 82,
      82, 82, 82, 82, 82, 82, 82, 82, 82, 82,
      82, 82, 82, 82, 82, 82, 82, 82, 82, 82,
      82, 82, 82, 82, 82, 82, 82, 82, 82, 82,
      82, 82, 82, 82, 82, 82, 82, 82, 82, 82,
      82, 82, 82, 82, 82, 82, 82, 82, 82, 82,
      82, 82, 82, 82, 82, 82, 82, 82, 82, 82,
      82, 82, 82, 82, 82, 82, 82, 82, 82, 82,
      82, 82, 82, 82, 82, 82, 82, 82, 82, 82,
      82, 82, 82, 82, 82, 82, 82, 82, 82, 82,
      82, 82, 82, 82, 82, 82, 82, 82, 82, 82,
      82, 82, 82, 82, 82, 82
    };
  register int hval = len;

  switch (hval)
    {
      default:
        hval += asso_values[(unsigned char)str[7]];
      /*FALLTHROUGH*/
      case 7:
      case 6:
        hval += asso_values[(unsigned char)str[5]];
      /*FALLTHROUGH*/
      case 5:
      case 4:
      case 3:
      case 2:
        break;
    }
  return hval;
}

static const struct fhir_deserialize::MemberNameAndOffset word_array_ElementDefinition_Example[] =
  {
#line 11 "./src/generated/gperf_class_files/ElementDefinition_Example.gperf"
    {"id", 0x8, 1, -1, {(U8*)"id", 2}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 14 "./src/generated/gperf_class_files/ElementDefinition_Example.gperf"
    {"label", 0x28, 4, -1, {(U8*)"label", 5}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 26 "./src/generated/gperf_class_files/ElementDefinition_Example.gperf"
    {"valueOid", 0x40, 6, 11, {(U8*)"value", 5}, fhir_deserialize::ResourceType::Unknown, 6, fhir_deserialize::ResourceType::Unknown},
#line 18 "./src/generated/gperf_class_files/ElementDefinition_Example.gperf"
    {"valueCode", 0x40, 6, 3, {(U8*)"value", 5}, fhir_deserialize::ResourceType::Unknown, 3, fhir_deserialize::ResourceType::Unknown},
#line 49 "./src/generated/gperf_class_files/ElementDefinition_Example.gperf"
    {"valueRange", 0x40, 6, 34, {(U8*)"value", 5}, fhir_deserialize::ResourceType::Unknown, 20, fhir_deserialize::ResourceType::Range},
#line 39 "./src/generated/gperf_class_files/ElementDefinition_Example.gperf"
    {"valueCoding", 0x40, 6, 24, {(U8*)"value", 5}, fhir_deserialize::ResourceType::Unknown, 20, fhir_deserialize::ResourceType::Coding},
#line 22 "./src/generated/gperf_class_files/ElementDefinition_Example.gperf"
    {"valueId", 0x40, 6, 7, {(U8*)"value", 5}, fhir_deserialize::ResourceType::Unknown, 4, fhir_deserialize::ResourceType::Unknown},
#line 17 "./src/generated/gperf_class_files/ElementDefinition_Example.gperf"
    {"valueCanonical", 0x40, 6, 2, {(U8*)"value", 5}, fhir_deserialize::ResourceType::Unknown, 2, fhir_deserialize::ResourceType::Unknown},
#line 50 "./src/generated/gperf_class_files/ElementDefinition_Example.gperf"
    {"valueRatio", 0x40, 6, 35, {(U8*)"value", 5}, fhir_deserialize::ResourceType::Unknown, 20, fhir_deserialize::ResourceType::Ratio},
#line 56 "./src/generated/gperf_class_files/ElementDefinition_Example.gperf"
    {"valueContributor", 0x40, 6, 41, {(U8*)"value", 5}, fhir_deserialize::ResourceType::Unknown, 20, fhir_deserialize::ResourceType::Contributor},
#line 40 "./src/generated/gperf_class_files/ElementDefinition_Example.gperf"
    {"valueContactPoint", 0x40, 6, 25, {(U8*)"value", 5}, fhir_deserialize::ResourceType::Unknown, 20, fhir_deserialize::ResourceType::ContactPoint},
#line 55 "./src/generated/gperf_class_files/ElementDefinition_Example.gperf"
    {"valueContactDetail", 0x40, 6, 40, {(U8*)"value", 5}, fhir_deserialize::ResourceType::Unknown, 20, fhir_deserialize::ResourceType::ContactDetail},
#line 19 "./src/generated/gperf_class_files/ElementDefinition_Example.gperf"
    {"valueDate", 0x40, 6, 4, {(U8*)"value", 5}, fhir_deserialize::ResourceType::Unknown, 16, fhir_deserialize::ResourceType::Unknown},
#line 38 "./src/generated/gperf_class_files/ElementDefinition_Example.gperf"
    {"valueCodeableConcept", 0x40, 6, 23, {(U8*)"value", 5}, fhir_deserialize::ResourceType::Unknown, 20, fhir_deserialize::ResourceType::CodeableConcept},
#line 24 "./src/generated/gperf_class_files/ElementDefinition_Example.gperf"
    {"valueInteger", 0x40, 6, 9, {(U8*)"value", 5}, fhir_deserialize::ResourceType::Unknown, 20, fhir_deserialize::ResourceType::Integer},
#line 20 "./src/generated/gperf_class_files/ElementDefinition_Example.gperf"
    {"valueDateTime", 0x40, 6, 5, {(U8*)"value", 5}, fhir_deserialize::ResourceType::Unknown, 17, fhir_deserialize::ResourceType::Unknown},
#line 51 "./src/generated/gperf_class_files/ElementDefinition_Example.gperf"
    {"valueReference", 0x40, 6, 36, {(U8*)"value", 5}, fhir_deserialize::ResourceType::Unknown, 20, fhir_deserialize::ResourceType::Reference},
#line 45 "./src/generated/gperf_class_files/ElementDefinition_Example.gperf"
    {"valueIdentifier", 0x40, 6, 30, {(U8*)"value", 5}, fhir_deserialize::ResourceType::Unknown, 20, fhir_deserialize::ResourceType::Identifier},
#line 63 "./src/generated/gperf_class_files/ElementDefinition_Example.gperf"
    {"valueDosage", 0x40, 6, 48, {(U8*)"value", 5}, fhir_deserialize::ResourceType::Unknown, 20, fhir_deserialize::ResourceType::Dosage},
#line 23 "./src/generated/gperf_class_files/ElementDefinition_Example.gperf"
    {"valueInstant", 0x40, 6, 8, {(U8*)"value", 5}, fhir_deserialize::ResourceType::Unknown, 19, fhir_deserialize::ResourceType::Unknown},
#line 42 "./src/generated/gperf_class_files/ElementDefinition_Example.gperf"
    {"valueDistance", 0x40, 6, 27, {(U8*)"value", 5}, fhir_deserialize::ResourceType::Unknown, 20, fhir_deserialize::ResourceType::Distance},
#line 53 "./src/generated/gperf_class_files/ElementDefinition_Example.gperf"
    {"valueSignature", 0x40, 6, 38, {(U8*)"value", 5}, fhir_deserialize::ResourceType::Unknown, 20, fhir_deserialize::ResourceType::Signature},
#line 57 "./src/generated/gperf_class_files/ElementDefinition_Example.gperf"
    {"valueDataRequirement", 0x40, 6, 42, {(U8*)"value", 5}, fhir_deserialize::ResourceType::Unknown, 20, fhir_deserialize::ResourceType::DataRequirement},
#line 27 "./src/generated/gperf_class_files/ElementDefinition_Example.gperf"
    {"valuePositiveInt", 0x40, 6, 12, {(U8*)"value", 5}, fhir_deserialize::ResourceType::Unknown, 13, fhir_deserialize::ResourceType::Unknown},
#line 34 "./src/generated/gperf_class_files/ElementDefinition_Example.gperf"
    {"valueAddress", 0x40, 6, 19, {(U8*)"value", 5}, fhir_deserialize::ResourceType::Unknown, 20, fhir_deserialize::ResourceType::Address},
#line 35 "./src/generated/gperf_class_files/ElementDefinition_Example.gperf"
    {"valueAge", 0x40, 6, 20, {(U8*)"value", 5}, fhir_deserialize::ResourceType::Unknown, 20, fhir_deserialize::ResourceType::Age},
#line 36 "./src/generated/gperf_class_files/ElementDefinition_Example.gperf"
    {"valueAnnotation", 0x40, 6, 21, {(U8*)"value", 5}, fhir_deserialize::ResourceType::Unknown, 20, fhir_deserialize::ResourceType::Annotation},
#line 47 "./src/generated/gperf_class_files/ElementDefinition_Example.gperf"
    {"valuePeriod", 0x40, 6, 32, {(U8*)"value", 5}, fhir_deserialize::ResourceType::Unknown, 20, fhir_deserialize::ResourceType::Period},
#line 10 "./src/generated/gperf_class_files/ElementDefinition_Example.gperf"
    {"resourceType", 0x0, 0, -1, {(U8*)"resourceType", 12}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 43 "./src/generated/gperf_class_files/ElementDefinition_Example.gperf"
    {"valueDuration", 0x40, 6, 28, {(U8*)"value", 5}, fhir_deserialize::ResourceType::Unknown, 20, fhir_deserialize::ResourceType::Duration},
#line 13 "./src/generated/gperf_class_files/ElementDefinition_Example.gperf"
    {"extension", 0x20, 3, -1, {(U8*)"extension", 9}, fhir_deserialize::ResourceType::Extension, 0, fhir_deserialize::ResourceType::Unknown},
#line 37 "./src/generated/gperf_class_files/ElementDefinition_Example.gperf"
    {"valueAttachment", 0x40, 6, 22, {(U8*)"value", 5}, fhir_deserialize::ResourceType::Unknown, 20, fhir_deserialize::ResourceType::Attachment},
#line 30 "./src/generated/gperf_class_files/ElementDefinition_Example.gperf"
    {"valueUnsignedInt", 0x40, 6, 15, {(U8*)"value", 5}, fhir_deserialize::ResourceType::Unknown, 14, fhir_deserialize::ResourceType::Unknown},
#line 61 "./src/generated/gperf_class_files/ElementDefinition_Example.gperf"
    {"valueTriggerDefinition", 0x40, 6, 46, {(U8*)"value", 5}, fhir_deserialize::ResourceType::Unknown, 20, fhir_deserialize::ResourceType::TriggerDefinition},
#line 31 "./src/generated/gperf_class_files/ElementDefinition_Example.gperf"
    {"valueUri", 0x40, 6, 16, {(U8*)"value", 5}, fhir_deserialize::ResourceType::Unknown, 9, fhir_deserialize::ResourceType::Unknown},
#line 33 "./src/generated/gperf_class_files/ElementDefinition_Example.gperf"
    {"valueUuid", 0x40, 6, 18, {(U8*)"value", 5}, fhir_deserialize::ResourceType::Unknown, 11, fhir_deserialize::ResourceType::Unknown},
#line 12 "./src/generated/gperf_class_files/ElementDefinition_Example.gperf"
    {"extension_count", 0x18, 2, -1, {(U8*)"extension_count", 15}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 28 "./src/generated/gperf_class_files/ElementDefinition_Example.gperf"
    {"valueString", 0x40, 6, 13, {(U8*)"value", 5}, fhir_deserialize::ResourceType::Unknown, 7, fhir_deserialize::ResourceType::Unknown},
#line 15 "./src/generated/gperf_class_files/ElementDefinition_Example.gperf"
    {"valueBase64Binary", 0x40, 6, 0, {(U8*)"value", 5}, fhir_deserialize::ResourceType::Unknown, 1, fhir_deserialize::ResourceType::Unknown},
#line 48 "./src/generated/gperf_class_files/ElementDefinition_Example.gperf"
    {"valueQuantity", 0x40, 6, 33, {(U8*)"value", 5}, fhir_deserialize::ResourceType::Unknown, 20, fhir_deserialize::ResourceType::Quantity},
#line 59 "./src/generated/gperf_class_files/ElementDefinition_Example.gperf"
    {"valueParameterDefinition", 0x40, 6, 44, {(U8*)"value", 5}, fhir_deserialize::ResourceType::Unknown, 20, fhir_deserialize::ResourceType::ParameterDefinition},
#line 46 "./src/generated/gperf_class_files/ElementDefinition_Example.gperf"
    {"valueMoney", 0x40, 6, 31, {(U8*)"value", 5}, fhir_deserialize::ResourceType::Unknown, 20, fhir_deserialize::ResourceType::Money},
#line 16 "./src/generated/gperf_class_files/ElementDefinition_Example.gperf"
    {"valueBoolean", 0x40, 6, 1, {(U8*)"value", 5}, fhir_deserialize::ResourceType::Unknown, 12, fhir_deserialize::ResourceType::Unknown},
#line 64 "./src/generated/gperf_class_files/ElementDefinition_Example.gperf"
    {"valueMeta", 0x40, 6, 49, {(U8*)"value", 5}, fhir_deserialize::ResourceType::Unknown, 20, fhir_deserialize::ResourceType::Meta},
#line 60 "./src/generated/gperf_class_files/ElementDefinition_Example.gperf"
    {"valueRelatedArtifact", 0x40, 6, 45, {(U8*)"value", 5}, fhir_deserialize::ResourceType::Unknown, 20, fhir_deserialize::ResourceType::RelatedArtifact},
#line 21 "./src/generated/gperf_class_files/ElementDefinition_Example.gperf"
    {"valueDecimal", 0x40, 6, 6, {(U8*)"value", 5}, fhir_deserialize::ResourceType::Unknown, 15, fhir_deserialize::ResourceType::Unknown},
#line 32 "./src/generated/gperf_class_files/ElementDefinition_Example.gperf"
    {"valueUrl", 0x40, 6, 17, {(U8*)"value", 5}, fhir_deserialize::ResourceType::Unknown, 10, fhir_deserialize::ResourceType::Unknown},
#line 29 "./src/generated/gperf_class_files/ElementDefinition_Example.gperf"
    {"valueTime", 0x40, 6, 14, {(U8*)"value", 5}, fhir_deserialize::ResourceType::Unknown, 18, fhir_deserialize::ResourceType::Unknown},
#line 41 "./src/generated/gperf_class_files/ElementDefinition_Example.gperf"
    {"valueCount", 0x40, 6, 26, {(U8*)"value", 5}, fhir_deserialize::ResourceType::Unknown, 20, fhir_deserialize::ResourceType::Count},
#line 54 "./src/generated/gperf_class_files/ElementDefinition_Example.gperf"
    {"valueTiming", 0x40, 6, 39, {(U8*)"value", 5}, fhir_deserialize::ResourceType::Unknown, 20, fhir_deserialize::ResourceType::Timing},
#line 62 "./src/generated/gperf_class_files/ElementDefinition_Example.gperf"
    {"valueUsageContext", 0x40, 6, 47, {(U8*)"value", 5}, fhir_deserialize::ResourceType::Unknown, 20, fhir_deserialize::ResourceType::UsageContext},
#line 44 "./src/generated/gperf_class_files/ElementDefinition_Example.gperf"
    {"valueHumanName", 0x40, 6, 29, {(U8*)"value", 5}, fhir_deserialize::ResourceType::Unknown, 20, fhir_deserialize::ResourceType::HumanName},
#line 58 "./src/generated/gperf_class_files/ElementDefinition_Example.gperf"
    {"valueExpression", 0x40, 6, 43, {(U8*)"value", 5}, fhir_deserialize::ResourceType::Unknown, 20, fhir_deserialize::ResourceType::Expression},
#line 25 "./src/generated/gperf_class_files/ElementDefinition_Example.gperf"
    {"valueMarkdown", 0x40, 6, 10, {(U8*)"value", 5}, fhir_deserialize::ResourceType::Unknown, 5, fhir_deserialize::ResourceType::Unknown},
#line 52 "./src/generated/gperf_class_files/ElementDefinition_Example.gperf"
    {"valueSampledData", 0x40, 6, 37, {(U8*)"value", 5}, fhir_deserialize::ResourceType::Unknown, 20, fhir_deserialize::ResourceType::SampledData}
  };

static const signed char lookup[] =
  {
    -1, -1,  0, -1, -1,  1, -1, -1,  2,  3,  4,  5,  6, -1,
     7,  8,  9, 10, 11, 12, 13, -1, 14, 15, 16, 17, 18, 19,
    20, 21, 22, 23, 24, 25, -1, 26, 27, 28, 29, 30, 31, 32,
    33, 34, 35, 36, 37, 38, 39, 40, 41, -1, 42, -1, 43, 44,
    -1, 45, 46, 47, 48, 49, 50, -1, 51, 52, -1, -1, -1, -1,
    -1, -1, -1, 53, -1, -1, -1, -1, -1, -1, -1, 54
  };

const struct fhir_deserialize::MemberNameAndOffset *
ElementDefinition_Example_Gperf::ElementDefinition_Example_MemberLookup (register const char *str, register unsigned int len)
{
  if (len <= MAX_WORD_LENGTH && len >= MIN_WORD_LENGTH)
    {
      register int key = hash (str, len);

      if (key <= MAX_HASH_VALUE && key >= 0)
        {
          register int index = lookup[key];

          if (index >= 0)
            {
              register const char *s = word_array_ElementDefinition_Example[index].name;

              if (*str == *s && !strncmp (str + 1, s + 1, len - 1) && s[len] == '\0')
                return &word_array_ElementDefinition_Example[index];
            }
        }
    }
  return 0;
}
