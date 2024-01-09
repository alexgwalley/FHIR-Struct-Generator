/* C++ code produced by gperf version 3.0.1 */
/* Command-line: gperf.exe -t --output-file=src/generated/gperf_hash_tables/Parameters_Parameter-Member-Lookup.cc -CGD ./src/generated/gperf_class_files/Parameters_Parameter.gperf  */
/* Computed positions: -k'1,6,8' */

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

#line 8 "./src/generated/gperf_class_files/Parameters_Parameter.gperf"
struct fhir_deserialize::MemberNameAndOffset;
enum
  {
    TOTAL_KEYWORDS = 60,
    MIN_WORD_LENGTH = 2,
    MAX_WORD_LENGTH = 24,
    MIN_HASH_VALUE = 2,
    MAX_HASH_VALUE = 105
  };

/* maximum key range = 104, duplicates = 0 */

class Parameters_Parameter_Gperf
{
private:
  static inline unsigned int hash (const char *str, unsigned int len);
public:
  static const struct fhir_deserialize::MemberNameAndOffset *Parameters_Parameter_MemberLookup (const char *str, unsigned int len);
};

inline unsigned int
Parameters_Parameter_Gperf::hash (register const char *str, register unsigned int len)
{
  static const unsigned char asso_values[] =
    {
      106, 106, 106, 106, 106, 106, 106, 106, 106, 106,
      106, 106, 106, 106, 106, 106, 106, 106, 106, 106,
      106, 106, 106, 106, 106, 106, 106, 106, 106, 106,
      106, 106, 106, 106, 106, 106, 106, 106, 106, 106,
      106, 106, 106, 106, 106, 106, 106, 106, 106, 106,
      106, 106, 106, 106, 106, 106, 106, 106, 106, 106,
      106, 106, 106, 106, 106,  20,  25,   0,   5,  25,
      106, 106,  45,   5, 106, 106, 106,  35, 106,   0,
       10,  35,   0,  25,  15,  35, 106, 106, 106, 106,
      106, 106, 106, 106, 106, 106, 106,  10, 106,  30,
        0,   5,  20,   0, 106,   0, 106, 106,  30,   5,
        0,  35,  20, 106,  20,  10,   5,  45,   0, 106,
      106, 106, 106, 106, 106, 106, 106, 106, 106, 106,
      106, 106, 106, 106, 106, 106, 106, 106, 106, 106,
      106, 106, 106, 106, 106, 106, 106, 106, 106, 106,
      106, 106, 106, 106, 106, 106, 106, 106, 106, 106,
      106, 106, 106, 106, 106, 106, 106, 106, 106, 106,
      106, 106, 106, 106, 106, 106, 106, 106, 106, 106,
      106, 106, 106, 106, 106, 106, 106, 106, 106, 106,
      106, 106, 106, 106, 106, 106, 106, 106, 106, 106,
      106, 106, 106, 106, 106, 106, 106, 106, 106, 106,
      106, 106, 106, 106, 106, 106, 106, 106, 106, 106,
      106, 106, 106, 106, 106, 106, 106, 106, 106, 106,
      106, 106, 106, 106, 106, 106, 106, 106, 106, 106,
      106, 106, 106, 106, 106, 106, 106, 106, 106, 106,
      106, 106, 106, 106, 106, 106
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
      case 1:
        hval += asso_values[(unsigned char)str[0]];
        break;
    }
  return hval;
}

static const struct fhir_deserialize::MemberNameAndOffset word_array_Parameters_Parameter[] =
  {
#line 11 "./src/generated/gperf_class_files/Parameters_Parameter.gperf"
    {"id", 0x8, 1, -1, {(U8*)"id", 2}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 16 "./src/generated/gperf_class_files/Parameters_Parameter.gperf"
    {"name", 0x38, 6, -1, {(U8*)"name", 4}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 28 "./src/generated/gperf_class_files/Parameters_Parameter.gperf"
    {"valueOid", 0x50, 8, 11, {(U8*)"value", 5}, fhir_deserialize::ResourceType::Unknown, 6, fhir_deserialize::ResourceType::Unknown},
#line 20 "./src/generated/gperf_class_files/Parameters_Parameter.gperf"
    {"valueCode", 0x50, 8, 3, {(U8*)"value", 5}, fhir_deserialize::ResourceType::Unknown, 3, fhir_deserialize::ResourceType::Unknown},
#line 51 "./src/generated/gperf_class_files/Parameters_Parameter.gperf"
    {"valueRange", 0x50, 8, 34, {(U8*)"value", 5}, fhir_deserialize::ResourceType::Unknown, 20, fhir_deserialize::ResourceType::Range},
#line 41 "./src/generated/gperf_class_files/Parameters_Parameter.gperf"
    {"valueCoding", 0x50, 8, 24, {(U8*)"value", 5}, fhir_deserialize::ResourceType::Unknown, 20, fhir_deserialize::ResourceType::Coding},
#line 24 "./src/generated/gperf_class_files/Parameters_Parameter.gperf"
    {"valueId", 0x50, 8, 7, {(U8*)"value", 5}, fhir_deserialize::ResourceType::Unknown, 4, fhir_deserialize::ResourceType::Unknown},
#line 19 "./src/generated/gperf_class_files/Parameters_Parameter.gperf"
    {"valueCanonical", 0x50, 8, 2, {(U8*)"value", 5}, fhir_deserialize::ResourceType::Unknown, 2, fhir_deserialize::ResourceType::Unknown},
#line 52 "./src/generated/gperf_class_files/Parameters_Parameter.gperf"
    {"valueRatio", 0x50, 8, 35, {(U8*)"value", 5}, fhir_deserialize::ResourceType::Unknown, 20, fhir_deserialize::ResourceType::Ratio},
#line 58 "./src/generated/gperf_class_files/Parameters_Parameter.gperf"
    {"valueContributor", 0x50, 8, 41, {(U8*)"value", 5}, fhir_deserialize::ResourceType::Unknown, 20, fhir_deserialize::ResourceType::Contributor},
#line 42 "./src/generated/gperf_class_files/Parameters_Parameter.gperf"
    {"valueContactPoint", 0x50, 8, 25, {(U8*)"value", 5}, fhir_deserialize::ResourceType::Unknown, 20, fhir_deserialize::ResourceType::ContactPoint},
#line 57 "./src/generated/gperf_class_files/Parameters_Parameter.gperf"
    {"valueContactDetail", 0x50, 8, 40, {(U8*)"value", 5}, fhir_deserialize::ResourceType::Unknown, 20, fhir_deserialize::ResourceType::ContactDetail},
#line 21 "./src/generated/gperf_class_files/Parameters_Parameter.gperf"
    {"valueDate", 0x50, 8, 4, {(U8*)"value", 5}, fhir_deserialize::ResourceType::Unknown, 16, fhir_deserialize::ResourceType::Unknown},
#line 40 "./src/generated/gperf_class_files/Parameters_Parameter.gperf"
    {"valueCodeableConcept", 0x50, 8, 23, {(U8*)"value", 5}, fhir_deserialize::ResourceType::Unknown, 20, fhir_deserialize::ResourceType::CodeableConcept},
#line 26 "./src/generated/gperf_class_files/Parameters_Parameter.gperf"
    {"valueInteger", 0x50, 8, 9, {(U8*)"value", 5}, fhir_deserialize::ResourceType::Unknown, 20, fhir_deserialize::ResourceType::Integer},
#line 22 "./src/generated/gperf_class_files/Parameters_Parameter.gperf"
    {"valueDateTime", 0x50, 8, 5, {(U8*)"value", 5}, fhir_deserialize::ResourceType::Unknown, 17, fhir_deserialize::ResourceType::Unknown},
#line 69 "./src/generated/gperf_class_files/Parameters_Parameter.gperf"
    {"part", 0x70, 11, -1, {(U8*)"part", 4}, fhir_deserialize::ResourceType::Parameters_Parameter, 0, fhir_deserialize::ResourceType::Unknown},
#line 47 "./src/generated/gperf_class_files/Parameters_Parameter.gperf"
    {"valueIdentifier", 0x50, 8, 30, {(U8*)"value", 5}, fhir_deserialize::ResourceType::Unknown, 20, fhir_deserialize::ResourceType::Identifier},
#line 65 "./src/generated/gperf_class_files/Parameters_Parameter.gperf"
    {"valueDosage", 0x50, 8, 48, {(U8*)"value", 5}, fhir_deserialize::ResourceType::Unknown, 20, fhir_deserialize::ResourceType::Dosage},
#line 25 "./src/generated/gperf_class_files/Parameters_Parameter.gperf"
    {"valueInstant", 0x50, 8, 8, {(U8*)"value", 5}, fhir_deserialize::ResourceType::Unknown, 19, fhir_deserialize::ResourceType::Unknown},
#line 44 "./src/generated/gperf_class_files/Parameters_Parameter.gperf"
    {"valueDistance", 0x50, 8, 27, {(U8*)"value", 5}, fhir_deserialize::ResourceType::Unknown, 20, fhir_deserialize::ResourceType::Distance},
#line 31 "./src/generated/gperf_class_files/Parameters_Parameter.gperf"
    {"valueTime", 0x50, 8, 14, {(U8*)"value", 5}, fhir_deserialize::ResourceType::Unknown, 18, fhir_deserialize::ResourceType::Unknown},
#line 59 "./src/generated/gperf_class_files/Parameters_Parameter.gperf"
    {"valueDataRequirement", 0x50, 8, 42, {(U8*)"value", 5}, fhir_deserialize::ResourceType::Unknown, 20, fhir_deserialize::ResourceType::DataRequirement},
#line 56 "./src/generated/gperf_class_files/Parameters_Parameter.gperf"
    {"valueTiming", 0x50, 8, 39, {(U8*)"value", 5}, fhir_deserialize::ResourceType::Unknown, 20, fhir_deserialize::ResourceType::Timing},
#line 36 "./src/generated/gperf_class_files/Parameters_Parameter.gperf"
    {"valueAddress", 0x50, 8, 19, {(U8*)"value", 5}, fhir_deserialize::ResourceType::Unknown, 20, fhir_deserialize::ResourceType::Address},
#line 37 "./src/generated/gperf_class_files/Parameters_Parameter.gperf"
    {"valueAge", 0x50, 8, 20, {(U8*)"value", 5}, fhir_deserialize::ResourceType::Unknown, 20, fhir_deserialize::ResourceType::Age},
#line 53 "./src/generated/gperf_class_files/Parameters_Parameter.gperf"
    {"valueReference", 0x50, 8, 36, {(U8*)"value", 5}, fhir_deserialize::ResourceType::Unknown, 20, fhir_deserialize::ResourceType::Reference},
#line 38 "./src/generated/gperf_class_files/Parameters_Parameter.gperf"
    {"valueAnnotation", 0x50, 8, 21, {(U8*)"value", 5}, fhir_deserialize::ResourceType::Unknown, 20, fhir_deserialize::ResourceType::Annotation},
#line 29 "./src/generated/gperf_class_files/Parameters_Parameter.gperf"
    {"valuePositiveInt", 0x50, 8, 12, {(U8*)"value", 5}, fhir_deserialize::ResourceType::Unknown, 13, fhir_deserialize::ResourceType::Unknown},
#line 63 "./src/generated/gperf_class_files/Parameters_Parameter.gperf"
    {"valueTriggerDefinition", 0x50, 8, 46, {(U8*)"value", 5}, fhir_deserialize::ResourceType::Unknown, 20, fhir_deserialize::ResourceType::TriggerDefinition},
#line 45 "./src/generated/gperf_class_files/Parameters_Parameter.gperf"
    {"valueDuration", 0x50, 8, 28, {(U8*)"value", 5}, fhir_deserialize::ResourceType::Unknown, 20, fhir_deserialize::ResourceType::Duration},
#line 55 "./src/generated/gperf_class_files/Parameters_Parameter.gperf"
    {"valueSignature", 0x50, 8, 38, {(U8*)"value", 5}, fhir_deserialize::ResourceType::Unknown, 20, fhir_deserialize::ResourceType::Signature},
#line 39 "./src/generated/gperf_class_files/Parameters_Parameter.gperf"
    {"valueAttachment", 0x50, 8, 22, {(U8*)"value", 5}, fhir_deserialize::ResourceType::Unknown, 20, fhir_deserialize::ResourceType::Attachment},
#line 49 "./src/generated/gperf_class_files/Parameters_Parameter.gperf"
    {"valuePeriod", 0x50, 8, 32, {(U8*)"value", 5}, fhir_deserialize::ResourceType::Unknown, 20, fhir_deserialize::ResourceType::Period},
#line 15 "./src/generated/gperf_class_files/Parameters_Parameter.gperf"
    {"modifierExtension", 0x30, 5, -1, {(U8*)"modifierExtension", 17}, fhir_deserialize::ResourceType::Extension, 0, fhir_deserialize::ResourceType::Unknown},
#line 33 "./src/generated/gperf_class_files/Parameters_Parameter.gperf"
    {"valueUri", 0x50, 8, 16, {(U8*)"value", 5}, fhir_deserialize::ResourceType::Unknown, 9, fhir_deserialize::ResourceType::Unknown},
#line 35 "./src/generated/gperf_class_files/Parameters_Parameter.gperf"
    {"valueUuid", 0x50, 8, 18, {(U8*)"value", 5}, fhir_deserialize::ResourceType::Unknown, 11, fhir_deserialize::ResourceType::Unknown},
#line 48 "./src/generated/gperf_class_files/Parameters_Parameter.gperf"
    {"valueMoney", 0x50, 8, 31, {(U8*)"value", 5}, fhir_deserialize::ResourceType::Unknown, 20, fhir_deserialize::ResourceType::Money},
#line 54 "./src/generated/gperf_class_files/Parameters_Parameter.gperf"
    {"valueSampledData", 0x50, 8, 37, {(U8*)"value", 5}, fhir_deserialize::ResourceType::Unknown, 20, fhir_deserialize::ResourceType::SampledData},
#line 23 "./src/generated/gperf_class_files/Parameters_Parameter.gperf"
    {"valueDecimal", 0x50, 8, 6, {(U8*)"value", 5}, fhir_deserialize::ResourceType::Unknown, 15, fhir_deserialize::ResourceType::Unknown},
#line 14 "./src/generated/gperf_class_files/Parameters_Parameter.gperf"
    {"modifierExtension_count", 0x28, 4, -1, {(U8*)"modifierExtension_count", 23}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 66 "./src/generated/gperf_class_files/Parameters_Parameter.gperf"
    {"valueMeta", 0x50, 8, 49, {(U8*)"value", 5}, fhir_deserialize::ResourceType::Unknown, 20, fhir_deserialize::ResourceType::Meta},
#line 62 "./src/generated/gperf_class_files/Parameters_Parameter.gperf"
    {"valueRelatedArtifact", 0x50, 8, 45, {(U8*)"value", 5}, fhir_deserialize::ResourceType::Unknown, 20, fhir_deserialize::ResourceType::RelatedArtifact},
#line 17 "./src/generated/gperf_class_files/Parameters_Parameter.gperf"
    {"valueBase64Binary", 0x50, 8, 0, {(U8*)"value", 5}, fhir_deserialize::ResourceType::Unknown, 1, fhir_deserialize::ResourceType::Unknown},
#line 67 "./src/generated/gperf_class_files/Parameters_Parameter.gperf"
    {"resource", 0x60, 9, -1, {(U8*)"resource", 8}, fhir_deserialize::ResourceType::Resource, 0, fhir_deserialize::ResourceType::Unknown},
#line 61 "./src/generated/gperf_class_files/Parameters_Parameter.gperf"
    {"valueParameterDefinition", 0x50, 8, 44, {(U8*)"value", 5}, fhir_deserialize::ResourceType::Unknown, 20, fhir_deserialize::ResourceType::ParameterDefinition},
#line 43 "./src/generated/gperf_class_files/Parameters_Parameter.gperf"
    {"valueCount", 0x50, 8, 26, {(U8*)"value", 5}, fhir_deserialize::ResourceType::Unknown, 20, fhir_deserialize::ResourceType::Count},
#line 30 "./src/generated/gperf_class_files/Parameters_Parameter.gperf"
    {"valueString", 0x50, 8, 13, {(U8*)"value", 5}, fhir_deserialize::ResourceType::Unknown, 7, fhir_deserialize::ResourceType::Unknown},
#line 10 "./src/generated/gperf_class_files/Parameters_Parameter.gperf"
    {"resourceType", 0x0, 0, -1, {(U8*)"resourceType", 12}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 50 "./src/generated/gperf_class_files/Parameters_Parameter.gperf"
    {"valueQuantity", 0x50, 8, 33, {(U8*)"value", 5}, fhir_deserialize::ResourceType::Unknown, 20, fhir_deserialize::ResourceType::Quantity},
#line 13 "./src/generated/gperf_class_files/Parameters_Parameter.gperf"
    {"extension", 0x20, 3, -1, {(U8*)"extension", 9}, fhir_deserialize::ResourceType::Extension, 0, fhir_deserialize::ResourceType::Unknown},
#line 60 "./src/generated/gperf_class_files/Parameters_Parameter.gperf"
    {"valueExpression", 0x50, 8, 43, {(U8*)"value", 5}, fhir_deserialize::ResourceType::Unknown, 20, fhir_deserialize::ResourceType::Expression},
#line 32 "./src/generated/gperf_class_files/Parameters_Parameter.gperf"
    {"valueUnsignedInt", 0x50, 8, 15, {(U8*)"value", 5}, fhir_deserialize::ResourceType::Unknown, 14, fhir_deserialize::ResourceType::Unknown},
#line 64 "./src/generated/gperf_class_files/Parameters_Parameter.gperf"
    {"valueUsageContext", 0x50, 8, 47, {(U8*)"value", 5}, fhir_deserialize::ResourceType::Unknown, 20, fhir_deserialize::ResourceType::UsageContext},
#line 46 "./src/generated/gperf_class_files/Parameters_Parameter.gperf"
    {"valueHumanName", 0x50, 8, 29, {(U8*)"value", 5}, fhir_deserialize::ResourceType::Unknown, 20, fhir_deserialize::ResourceType::HumanName},
#line 12 "./src/generated/gperf_class_files/Parameters_Parameter.gperf"
    {"extension_count", 0x18, 2, -1, {(U8*)"extension_count", 15}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 27 "./src/generated/gperf_class_files/Parameters_Parameter.gperf"
    {"valueMarkdown", 0x50, 8, 10, {(U8*)"value", 5}, fhir_deserialize::ResourceType::Unknown, 5, fhir_deserialize::ResourceType::Unknown},
#line 18 "./src/generated/gperf_class_files/Parameters_Parameter.gperf"
    {"valueBoolean", 0x50, 8, 1, {(U8*)"value", 5}, fhir_deserialize::ResourceType::Unknown, 12, fhir_deserialize::ResourceType::Unknown},
#line 34 "./src/generated/gperf_class_files/Parameters_Parameter.gperf"
    {"valueUrl", 0x50, 8, 17, {(U8*)"value", 5}, fhir_deserialize::ResourceType::Unknown, 10, fhir_deserialize::ResourceType::Unknown},
#line 68 "./src/generated/gperf_class_files/Parameters_Parameter.gperf"
    {"part_count", 0x68, 10, -1, {(U8*)"part_count", 10}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown}
  };

static const signed char lookup[] =
  {
    -1, -1,  0, -1,  1, -1, -1, -1,  2,  3,  4,  5,  6, -1,
     7,  8,  9, 10, 11, 12, 13, -1, 14, 15, 16, 17, 18, 19,
    20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33,
    34, 35, 36, 37, 38, 39, 40, 41, 42, -1, 43, 44, 45, 46,
    47, 48, 49, 50, 51, 52, 53, -1, 54, 55, -1, -1, 56, -1,
    -1, -1, 57, 58, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, 59
  };

const struct fhir_deserialize::MemberNameAndOffset *
Parameters_Parameter_Gperf::Parameters_Parameter_MemberLookup (register const char *str, register unsigned int len)
{
  if (len <= MAX_WORD_LENGTH && len >= MIN_WORD_LENGTH)
    {
      register int key = hash (str, len);

      if (key <= MAX_HASH_VALUE && key >= 0)
        {
          register int index = lookup[key];

          if (index >= 0)
            {
              register const char *s = word_array_Parameters_Parameter[index].name;

              if (*str == *s && !strncmp (str + 1, s + 1, len - 1) && s[len] == '\0')
                return &word_array_Parameters_Parameter[index];
            }
        }
    }
  return 0;
}
