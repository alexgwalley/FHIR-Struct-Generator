/* C++ code produced by gperf version 3.0.1 */
/* Command-line: gperf.exe -t --output-file=src/generated/gperf_hash_tables/Task_Input-Member-Lookup.cc -CGD ./src/generated/gperf_class_files/Task_Input.gperf  */
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

#line 8 "./src/generated/gperf_class_files/Task_Input.gperf"
struct fhir_deserialize::MemberNameAndOffset;
enum
  {
    TOTAL_KEYWORDS = 57,
    MIN_WORD_LENGTH = 2,
    MAX_WORD_LENGTH = 24,
    MIN_HASH_VALUE = 2,
    MAX_HASH_VALUE = 78
  };

/* maximum key range = 77, duplicates = 0 */

class Task_Input_Gperf
{
private:
  static inline unsigned int hash (const char *str, unsigned int len);
public:
  static const struct fhir_deserialize::MemberNameAndOffset *Task_Input_MemberLookup (const char *str, unsigned int len);
};

inline unsigned int
Task_Input_Gperf::hash (register const char *str, register unsigned int len)
{
  static const unsigned char asso_values[] =
    {
      79, 79, 79, 79, 79, 79, 79, 79, 79, 79,
      79, 79, 79, 79, 79, 79, 79, 79, 79, 79,
      79, 79, 79, 79, 79, 79, 79, 79, 79, 79,
      79, 79, 79, 79, 79, 79, 79, 79, 79, 79,
      79, 79, 79, 79, 79, 79, 79, 79, 79, 79,
      79, 79, 79, 79, 79, 79, 79, 79, 79, 79,
      79, 79, 79, 79, 79, 20, 25,  0,  5, 25,
      79, 79, 20,  5, 79, 79, 79, 40, 79,  0,
       5, 20,  0, 20, 20, 30, 79, 79, 79, 79,
      79, 79, 79, 79, 79, 79, 79, 20, 79, 45,
       0,  5, 10,  0, 79,  5, 79, 79, 40, 30,
       0, 20, 25, 79, 20, 10,  5, 45, 79, 79,
      79, 79, 79, 79, 79, 79, 79, 79, 79, 79,
      79, 79, 79, 79, 79, 79, 79, 79, 79, 79,
      79, 79, 79, 79, 79, 79, 79, 79, 79, 79,
      79, 79, 79, 79, 79, 79, 79, 79, 79, 79,
      79, 79, 79, 79, 79, 79, 79, 79, 79, 79,
      79, 79, 79, 79, 79, 79, 79, 79, 79, 79,
      79, 79, 79, 79, 79, 79, 79, 79, 79, 79,
      79, 79, 79, 79, 79, 79, 79, 79, 79, 79,
      79, 79, 79, 79, 79, 79, 79, 79, 79, 79,
      79, 79, 79, 79, 79, 79, 79, 79, 79, 79,
      79, 79, 79, 79, 79, 79, 79, 79, 79, 79,
      79, 79, 79, 79, 79, 79, 79, 79, 79, 79,
      79, 79, 79, 79, 79, 79, 79, 79, 79, 79,
      79, 79, 79, 79, 79, 79
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

static const struct fhir_deserialize::MemberNameAndOffset word_array_Task_Input[] =
  {
#line 11 "./src/generated/gperf_class_files/Task_Input.gperf"
    {"id", 0x8, 1, -1, {(U8*)"id", 2}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 16 "./src/generated/gperf_class_files/Task_Input.gperf"
    {"type", 0x38, 6, -1, {(U8*)"type", 4}, fhir_deserialize::ResourceType::CodeableConcept, 0, fhir_deserialize::ResourceType::Unknown},
#line 28 "./src/generated/gperf_class_files/Task_Input.gperf"
    {"valueOid", 0x48, 8, 11, {(U8*)"value", 5}, fhir_deserialize::ResourceType::Unknown, 6, fhir_deserialize::ResourceType::Unknown},
#line 20 "./src/generated/gperf_class_files/Task_Input.gperf"
    {"valueCode", 0x48, 8, 3, {(U8*)"value", 5}, fhir_deserialize::ResourceType::Unknown, 3, fhir_deserialize::ResourceType::Unknown},
#line 51 "./src/generated/gperf_class_files/Task_Input.gperf"
    {"valueRange", 0x48, 8, 34, {(U8*)"value", 5}, fhir_deserialize::ResourceType::Unknown, 20, fhir_deserialize::ResourceType::Range},
#line 41 "./src/generated/gperf_class_files/Task_Input.gperf"
    {"valueCoding", 0x48, 8, 24, {(U8*)"value", 5}, fhir_deserialize::ResourceType::Unknown, 20, fhir_deserialize::ResourceType::Coding},
#line 24 "./src/generated/gperf_class_files/Task_Input.gperf"
    {"valueId", 0x48, 8, 7, {(U8*)"value", 5}, fhir_deserialize::ResourceType::Unknown, 4, fhir_deserialize::ResourceType::Unknown},
#line 19 "./src/generated/gperf_class_files/Task_Input.gperf"
    {"valueCanonical", 0x48, 8, 2, {(U8*)"value", 5}, fhir_deserialize::ResourceType::Unknown, 2, fhir_deserialize::ResourceType::Unknown},
#line 52 "./src/generated/gperf_class_files/Task_Input.gperf"
    {"valueRatio", 0x48, 8, 35, {(U8*)"value", 5}, fhir_deserialize::ResourceType::Unknown, 20, fhir_deserialize::ResourceType::Ratio},
#line 58 "./src/generated/gperf_class_files/Task_Input.gperf"
    {"valueContributor", 0x48, 8, 41, {(U8*)"value", 5}, fhir_deserialize::ResourceType::Unknown, 20, fhir_deserialize::ResourceType::Contributor},
#line 42 "./src/generated/gperf_class_files/Task_Input.gperf"
    {"valueContactPoint", 0x48, 8, 25, {(U8*)"value", 5}, fhir_deserialize::ResourceType::Unknown, 20, fhir_deserialize::ResourceType::ContactPoint},
#line 57 "./src/generated/gperf_class_files/Task_Input.gperf"
    {"valueContactDetail", 0x48, 8, 40, {(U8*)"value", 5}, fhir_deserialize::ResourceType::Unknown, 20, fhir_deserialize::ResourceType::ContactDetail},
#line 21 "./src/generated/gperf_class_files/Task_Input.gperf"
    {"valueDate", 0x48, 8, 4, {(U8*)"value", 5}, fhir_deserialize::ResourceType::Unknown, 16, fhir_deserialize::ResourceType::Unknown},
#line 40 "./src/generated/gperf_class_files/Task_Input.gperf"
    {"valueCodeableConcept", 0x48, 8, 23, {(U8*)"value", 5}, fhir_deserialize::ResourceType::Unknown, 20, fhir_deserialize::ResourceType::CodeableConcept},
#line 26 "./src/generated/gperf_class_files/Task_Input.gperf"
    {"valueInteger", 0x48, 8, 9, {(U8*)"value", 5}, fhir_deserialize::ResourceType::Unknown, 20, fhir_deserialize::ResourceType::Integer},
#line 22 "./src/generated/gperf_class_files/Task_Input.gperf"
    {"valueDateTime", 0x48, 8, 5, {(U8*)"value", 5}, fhir_deserialize::ResourceType::Unknown, 17, fhir_deserialize::ResourceType::Unknown},
#line 53 "./src/generated/gperf_class_files/Task_Input.gperf"
    {"valueReference", 0x48, 8, 36, {(U8*)"value", 5}, fhir_deserialize::ResourceType::Unknown, 20, fhir_deserialize::ResourceType::Reference},
#line 47 "./src/generated/gperf_class_files/Task_Input.gperf"
    {"valueIdentifier", 0x48, 8, 30, {(U8*)"value", 5}, fhir_deserialize::ResourceType::Unknown, 20, fhir_deserialize::ResourceType::Identifier},
#line 65 "./src/generated/gperf_class_files/Task_Input.gperf"
    {"valueDosage", 0x48, 8, 48, {(U8*)"value", 5}, fhir_deserialize::ResourceType::Unknown, 20, fhir_deserialize::ResourceType::Dosage},
#line 25 "./src/generated/gperf_class_files/Task_Input.gperf"
    {"valueInstant", 0x48, 8, 8, {(U8*)"value", 5}, fhir_deserialize::ResourceType::Unknown, 19, fhir_deserialize::ResourceType::Unknown},
#line 44 "./src/generated/gperf_class_files/Task_Input.gperf"
    {"valueDistance", 0x48, 8, 27, {(U8*)"value", 5}, fhir_deserialize::ResourceType::Unknown, 20, fhir_deserialize::ResourceType::Distance},
#line 59 "./src/generated/gperf_class_files/Task_Input.gperf"
    {"valueDataRequirement", 0x48, 8, 42, {(U8*)"value", 5}, fhir_deserialize::ResourceType::Unknown, 20, fhir_deserialize::ResourceType::DataRequirement},
#line 29 "./src/generated/gperf_class_files/Task_Input.gperf"
    {"valuePositiveInt", 0x48, 8, 12, {(U8*)"value", 5}, fhir_deserialize::ResourceType::Unknown, 13, fhir_deserialize::ResourceType::Unknown},
#line 36 "./src/generated/gperf_class_files/Task_Input.gperf"
    {"valueAddress", 0x48, 8, 19, {(U8*)"value", 5}, fhir_deserialize::ResourceType::Unknown, 20, fhir_deserialize::ResourceType::Address},
#line 37 "./src/generated/gperf_class_files/Task_Input.gperf"
    {"valueAge", 0x48, 8, 20, {(U8*)"value", 5}, fhir_deserialize::ResourceType::Unknown, 20, fhir_deserialize::ResourceType::Age},
#line 55 "./src/generated/gperf_class_files/Task_Input.gperf"
    {"valueSignature", 0x48, 8, 38, {(U8*)"value", 5}, fhir_deserialize::ResourceType::Unknown, 20, fhir_deserialize::ResourceType::Signature},
#line 38 "./src/generated/gperf_class_files/Task_Input.gperf"
    {"valueAnnotation", 0x48, 8, 21, {(U8*)"value", 5}, fhir_deserialize::ResourceType::Unknown, 20, fhir_deserialize::ResourceType::Annotation},
#line 49 "./src/generated/gperf_class_files/Task_Input.gperf"
    {"valuePeriod", 0x48, 8, 32, {(U8*)"value", 5}, fhir_deserialize::ResourceType::Unknown, 20, fhir_deserialize::ResourceType::Period},
#line 10 "./src/generated/gperf_class_files/Task_Input.gperf"
    {"resourceType", 0x0, 0, -1, {(U8*)"resourceType", 12}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 45 "./src/generated/gperf_class_files/Task_Input.gperf"
    {"valueDuration", 0x48, 8, 28, {(U8*)"value", 5}, fhir_deserialize::ResourceType::Unknown, 20, fhir_deserialize::ResourceType::Duration},
#line 13 "./src/generated/gperf_class_files/Task_Input.gperf"
    {"extension", 0x20, 3, -1, {(U8*)"extension", 9}, fhir_deserialize::ResourceType::Extension, 0, fhir_deserialize::ResourceType::Unknown},
#line 39 "./src/generated/gperf_class_files/Task_Input.gperf"
    {"valueAttachment", 0x48, 8, 22, {(U8*)"value", 5}, fhir_deserialize::ResourceType::Unknown, 20, fhir_deserialize::ResourceType::Attachment},
#line 15 "./src/generated/gperf_class_files/Task_Input.gperf"
    {"modifierExtension", 0x30, 5, -1, {(U8*)"modifierExtension", 17}, fhir_deserialize::ResourceType::Extension, 0, fhir_deserialize::ResourceType::Unknown},
#line 33 "./src/generated/gperf_class_files/Task_Input.gperf"
    {"valueUri", 0x48, 8, 16, {(U8*)"value", 5}, fhir_deserialize::ResourceType::Unknown, 9, fhir_deserialize::ResourceType::Unknown},
#line 35 "./src/generated/gperf_class_files/Task_Input.gperf"
    {"valueUuid", 0x48, 8, 18, {(U8*)"value", 5}, fhir_deserialize::ResourceType::Unknown, 11, fhir_deserialize::ResourceType::Unknown},
#line 12 "./src/generated/gperf_class_files/Task_Input.gperf"
    {"extension_count", 0x18, 2, -1, {(U8*)"extension_count", 15}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 63 "./src/generated/gperf_class_files/Task_Input.gperf"
    {"valueTriggerDefinition", 0x48, 8, 46, {(U8*)"value", 5}, fhir_deserialize::ResourceType::Unknown, 20, fhir_deserialize::ResourceType::TriggerDefinition},
#line 14 "./src/generated/gperf_class_files/Task_Input.gperf"
    {"modifierExtension_count", 0x28, 4, -1, {(U8*)"modifierExtension_count", 23}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 61 "./src/generated/gperf_class_files/Task_Input.gperf"
    {"valueParameterDefinition", 0x48, 8, 44, {(U8*)"value", 5}, fhir_deserialize::ResourceType::Unknown, 20, fhir_deserialize::ResourceType::ParameterDefinition},
#line 48 "./src/generated/gperf_class_files/Task_Input.gperf"
    {"valueMoney", 0x48, 8, 31, {(U8*)"value", 5}, fhir_deserialize::ResourceType::Unknown, 20, fhir_deserialize::ResourceType::Money},
#line 30 "./src/generated/gperf_class_files/Task_Input.gperf"
    {"valueString", 0x48, 8, 13, {(U8*)"value", 5}, fhir_deserialize::ResourceType::Unknown, 7, fhir_deserialize::ResourceType::Unknown},
#line 17 "./src/generated/gperf_class_files/Task_Input.gperf"
    {"valueBase64Binary", 0x48, 8, 0, {(U8*)"value", 5}, fhir_deserialize::ResourceType::Unknown, 1, fhir_deserialize::ResourceType::Unknown},
#line 50 "./src/generated/gperf_class_files/Task_Input.gperf"
    {"valueQuantity", 0x48, 8, 33, {(U8*)"value", 5}, fhir_deserialize::ResourceType::Unknown, 20, fhir_deserialize::ResourceType::Quantity},
#line 66 "./src/generated/gperf_class_files/Task_Input.gperf"
    {"valueMeta", 0x48, 8, 49, {(U8*)"value", 5}, fhir_deserialize::ResourceType::Unknown, 20, fhir_deserialize::ResourceType::Meta},
#line 43 "./src/generated/gperf_class_files/Task_Input.gperf"
    {"valueCount", 0x48, 8, 26, {(U8*)"value", 5}, fhir_deserialize::ResourceType::Unknown, 20, fhir_deserialize::ResourceType::Count},
#line 32 "./src/generated/gperf_class_files/Task_Input.gperf"
    {"valueUnsignedInt", 0x48, 8, 15, {(U8*)"value", 5}, fhir_deserialize::ResourceType::Unknown, 14, fhir_deserialize::ResourceType::Unknown},
#line 18 "./src/generated/gperf_class_files/Task_Input.gperf"
    {"valueBoolean", 0x48, 8, 1, {(U8*)"value", 5}, fhir_deserialize::ResourceType::Unknown, 12, fhir_deserialize::ResourceType::Unknown},
#line 31 "./src/generated/gperf_class_files/Task_Input.gperf"
    {"valueTime", 0x48, 8, 14, {(U8*)"value", 5}, fhir_deserialize::ResourceType::Unknown, 18, fhir_deserialize::ResourceType::Unknown},
#line 62 "./src/generated/gperf_class_files/Task_Input.gperf"
    {"valueRelatedArtifact", 0x48, 8, 45, {(U8*)"value", 5}, fhir_deserialize::ResourceType::Unknown, 20, fhir_deserialize::ResourceType::RelatedArtifact},
#line 56 "./src/generated/gperf_class_files/Task_Input.gperf"
    {"valueTiming", 0x48, 8, 39, {(U8*)"value", 5}, fhir_deserialize::ResourceType::Unknown, 20, fhir_deserialize::ResourceType::Timing},
#line 23 "./src/generated/gperf_class_files/Task_Input.gperf"
    {"valueDecimal", 0x48, 8, 6, {(U8*)"value", 5}, fhir_deserialize::ResourceType::Unknown, 15, fhir_deserialize::ResourceType::Unknown},
#line 46 "./src/generated/gperf_class_files/Task_Input.gperf"
    {"valueHumanName", 0x48, 8, 29, {(U8*)"value", 5}, fhir_deserialize::ResourceType::Unknown, 20, fhir_deserialize::ResourceType::HumanName},
#line 60 "./src/generated/gperf_class_files/Task_Input.gperf"
    {"valueExpression", 0x48, 8, 43, {(U8*)"value", 5}, fhir_deserialize::ResourceType::Unknown, 20, fhir_deserialize::ResourceType::Expression},
#line 54 "./src/generated/gperf_class_files/Task_Input.gperf"
    {"valueSampledData", 0x48, 8, 37, {(U8*)"value", 5}, fhir_deserialize::ResourceType::Unknown, 20, fhir_deserialize::ResourceType::SampledData},
#line 64 "./src/generated/gperf_class_files/Task_Input.gperf"
    {"valueUsageContext", 0x48, 8, 47, {(U8*)"value", 5}, fhir_deserialize::ResourceType::Unknown, 20, fhir_deserialize::ResourceType::UsageContext},
#line 27 "./src/generated/gperf_class_files/Task_Input.gperf"
    {"valueMarkdown", 0x48, 8, 10, {(U8*)"value", 5}, fhir_deserialize::ResourceType::Unknown, 5, fhir_deserialize::ResourceType::Unknown},
#line 34 "./src/generated/gperf_class_files/Task_Input.gperf"
    {"valueUrl", 0x48, 8, 17, {(U8*)"value", 5}, fhir_deserialize::ResourceType::Unknown, 10, fhir_deserialize::ResourceType::Unknown}
  };

static const signed char lookup[] =
  {
    -1, -1,  0, -1,  1, -1, -1, -1,  2,  3,  4,  5,  6, -1,
     7,  8,  9, 10, 11, 12, 13, -1, 14, 15, 16, 17, 18, 19,
    20, -1, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, -1,
    32, 33, 34, 35, -1, 36, 37, 38, 39, 40, 41, 42, 43, 44,
    45, 46, -1, 47, 48, 49, 50, -1, 51, 52, 53, 54, -1, -1,
    -1, -1, -1, 55, -1, -1, -1, -1, 56
  };

const struct fhir_deserialize::MemberNameAndOffset *
Task_Input_Gperf::Task_Input_MemberLookup (register const char *str, register unsigned int len)
{
  if (len <= MAX_WORD_LENGTH && len >= MIN_WORD_LENGTH)
    {
      register int key = hash (str, len);

      if (key <= MAX_HASH_VALUE && key >= 0)
        {
          register int index = lookup[key];

          if (index >= 0)
            {
              register const char *s = word_array_Task_Input[index].name;

              if (*str == *s && !strncmp (str + 1, s + 1, len - 1) && s[len] == '\0')
                return &word_array_Task_Input[index];
            }
        }
    }
  return 0;
}
