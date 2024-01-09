/* C++ code produced by gperf version 3.0.1 */
/* Command-line: gperf.exe -t --output-file=src/generated/gperf_hash_tables/ImmunizationRecommendation_Recommendation-Member-Lookup.cc -CGD ./src/generated/gperf_class_files/ImmunizationRecommendation_Recommendation.gperf  */
/* Computed positions: -k'$' */

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

#line 8 "./src/generated/gperf_class_files/ImmunizationRecommendation_Recommendation.gperf"
struct fhir_deserialize::MemberNameAndOffset;
enum
  {
    TOTAL_KEYWORDS = 26,
    MIN_WORD_LENGTH = 2,
    MAX_WORD_LENGTH = 34,
    MIN_HASH_VALUE = 2,
    MAX_HASH_VALUE = 44
  };

/* maximum key range = 43, duplicates = 0 */

class ImmunizationRecommendation_Recommendation_Gperf
{
private:
  static inline unsigned int hash (const char *str, unsigned int len);
public:
  static const struct fhir_deserialize::MemberNameAndOffset *ImmunizationRecommendation_Recommendation_MemberLookup (const char *str, unsigned int len);
};

inline unsigned int
ImmunizationRecommendation_Recommendation_Gperf::hash (register const char *str, register unsigned int len)
{
  static const unsigned char asso_values[] =
    {
      45, 45, 45, 45, 45, 45, 45, 45, 45, 45,
      45, 45, 45, 45, 45, 45, 45, 45, 45, 45,
      45, 45, 45, 45, 45, 45, 45, 45, 45, 45,
      45, 45, 45, 45, 45, 45, 45, 45, 45, 45,
      45, 45, 45, 45, 45, 45, 45, 45, 45, 45,
      45, 45, 45, 45, 45, 45, 45, 45, 45, 45,
      45, 45, 45, 45, 45, 45, 45, 45, 45, 45,
      45, 45, 45, 45, 45, 45, 45, 45, 45, 45,
      45, 45, 45, 45, 45, 45, 45, 45, 45, 45,
      45, 45, 45, 45, 45, 45, 45, 45, 45, 45,
       0,  8, 45, 20, 45, 45, 45, 45, 45, 45,
       0, 45, 45, 45, 45, 10, 10, 45, 45, 45,
      45, 45, 45, 45, 45, 45, 45, 45, 45, 45,
      45, 45, 45, 45, 45, 45, 45, 45, 45, 45,
      45, 45, 45, 45, 45, 45, 45, 45, 45, 45,
      45, 45, 45, 45, 45, 45, 45, 45, 45, 45,
      45, 45, 45, 45, 45, 45, 45, 45, 45, 45,
      45, 45, 45, 45, 45, 45, 45, 45, 45, 45,
      45, 45, 45, 45, 45, 45, 45, 45, 45, 45,
      45, 45, 45, 45, 45, 45, 45, 45, 45, 45,
      45, 45, 45, 45, 45, 45, 45, 45, 45, 45,
      45, 45, 45, 45, 45, 45, 45, 45, 45, 45,
      45, 45, 45, 45, 45, 45, 45, 45, 45, 45,
      45, 45, 45, 45, 45, 45, 45, 45, 45, 45,
      45, 45, 45, 45, 45, 45, 45, 45, 45, 45,
      45, 45, 45, 45, 45, 45
    };
  return len + asso_values[(unsigned char)str[len - 1]];
}

static const struct fhir_deserialize::MemberNameAndOffset word_array_ImmunizationRecommendation_Recommendation[] =
  {
#line 11 "./src/generated/gperf_class_files/ImmunizationRecommendation_Recommendation.gperf"
    {"id", 0x8, 1, -1, {(U8*)"id", 2}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 13 "./src/generated/gperf_class_files/ImmunizationRecommendation_Recommendation.gperf"
    {"extension", 0x20, 3, -1, {(U8*)"extension", 9}, fhir_deserialize::ResourceType::Extension, 0, fhir_deserialize::ResourceType::Unknown},
#line 26 "./src/generated/gperf_class_files/ImmunizationRecommendation_Recommendation.gperf"
    {"description", 0x88, 16, -1, {(U8*)"description", 11}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 25 "./src/generated/gperf_class_files/ImmunizationRecommendation_Recommendation.gperf"
    {"dateCriterion", 0x80, 15, -1, {(U8*)"dateCriterion", 13}, fhir_deserialize::ResourceType::ImmunizationRecommendation_Recommendation_DateCriterion, 0, fhir_deserialize::ResourceType::Unknown},
#line 23 "./src/generated/gperf_class_files/ImmunizationRecommendation_Recommendation.gperf"
    {"forecastReason", 0x70, 13, -1, {(U8*)"forecastReason", 14}, fhir_deserialize::ResourceType::CodeableConcept, 0, fhir_deserialize::ResourceType::Unknown},
#line 27 "./src/generated/gperf_class_files/ImmunizationRecommendation_Recommendation.gperf"
    {"series", 0x98, 17, -1, {(U8*)"series", 6}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 15 "./src/generated/gperf_class_files/ImmunizationRecommendation_Recommendation.gperf"
    {"modifierExtension", 0x30, 5, -1, {(U8*)"modifierExtension", 17}, fhir_deserialize::ResourceType::Extension, 0, fhir_deserialize::ResourceType::Unknown},
#line 17 "./src/generated/gperf_class_files/ImmunizationRecommendation_Recommendation.gperf"
    {"vaccineCode", 0x40, 7, -1, {(U8*)"vaccineCode", 11}, fhir_deserialize::ResourceType::CodeableConcept, 0, fhir_deserialize::ResourceType::Unknown},
#line 10 "./src/generated/gperf_class_files/ImmunizationRecommendation_Recommendation.gperf"
    {"resourceType", 0x0, 0, -1, {(U8*)"resourceType", 12}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 18 "./src/generated/gperf_class_files/ImmunizationRecommendation_Recommendation.gperf"
    {"targetDisease", 0x48, 8, -1, {(U8*)"targetDisease", 13}, fhir_deserialize::ResourceType::CodeableConcept, 0, fhir_deserialize::ResourceType::Unknown},
#line 33 "./src/generated/gperf_class_files/ImmunizationRecommendation_Recommendation.gperf"
    {"supportingImmunization", 0xe0, 23, -1, {(U8*)"supportingImmunization", 22}, fhir_deserialize::ResourceType::Reference, 0, fhir_deserialize::ResourceType::Unknown},
#line 21 "./src/generated/gperf_class_files/ImmunizationRecommendation_Recommendation.gperf"
    {"forecastStatus", 0x60, 11, -1, {(U8*)"forecastStatus", 14}, fhir_deserialize::ResourceType::CodeableConcept, 0, fhir_deserialize::ResourceType::Unknown},
#line 12 "./src/generated/gperf_class_files/ImmunizationRecommendation_Recommendation.gperf"
    {"extension_count", 0x18, 2, -1, {(U8*)"extension_count", 15}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 16 "./src/generated/gperf_class_files/ImmunizationRecommendation_Recommendation.gperf"
    {"vaccineCode_count", 0x38, 6, -1, {(U8*)"vaccineCode_count", 17}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 35 "./src/generated/gperf_class_files/ImmunizationRecommendation_Recommendation.gperf"
    {"supportingPatientInformation", 0xf0, 25, -1, {(U8*)"supportingPatientInformation", 28}, fhir_deserialize::ResourceType::Reference, 0, fhir_deserialize::ResourceType::Unknown},
#line 24 "./src/generated/gperf_class_files/ImmunizationRecommendation_Recommendation.gperf"
    {"dateCriterion_count", 0x78, 14, -1, {(U8*)"dateCriterion_count", 19}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 22 "./src/generated/gperf_class_files/ImmunizationRecommendation_Recommendation.gperf"
    {"forecastReason_count", 0x68, 12, -1, {(U8*)"forecastReason_count", 20}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 28 "./src/generated/gperf_class_files/ImmunizationRecommendation_Recommendation.gperf"
    {"doseNumberPositiveInt", 0xb0, 19, 0, {(U8*)"doseNumber", 10}, fhir_deserialize::ResourceType::Unknown, 13, fhir_deserialize::ResourceType::Unknown},
#line 30 "./src/generated/gperf_class_files/ImmunizationRecommendation_Recommendation.gperf"
    {"seriesDosesPositiveInt", 0xc8, 21, 0, {(U8*)"seriesDoses", 11}, fhir_deserialize::ResourceType::Unknown, 13, fhir_deserialize::ResourceType::Unknown},
#line 14 "./src/generated/gperf_class_files/ImmunizationRecommendation_Recommendation.gperf"
    {"modifierExtension_count", 0x28, 4, -1, {(U8*)"modifierExtension_count", 23}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 20 "./src/generated/gperf_class_files/ImmunizationRecommendation_Recommendation.gperf"
    {"contraindicatedVaccineCode", 0x58, 10, -1, {(U8*)"contraindicatedVaccineCode", 26}, fhir_deserialize::ResourceType::CodeableConcept, 0, fhir_deserialize::ResourceType::Unknown},
#line 29 "./src/generated/gperf_class_files/ImmunizationRecommendation_Recommendation.gperf"
    {"doseNumberString", 0xb0, 19, 1, {(U8*)"doseNumber", 10}, fhir_deserialize::ResourceType::Unknown, 7, fhir_deserialize::ResourceType::Unknown},
#line 31 "./src/generated/gperf_class_files/ImmunizationRecommendation_Recommendation.gperf"
    {"seriesDosesString", 0xc8, 21, 1, {(U8*)"seriesDoses", 11}, fhir_deserialize::ResourceType::Unknown, 7, fhir_deserialize::ResourceType::Unknown},
#line 32 "./src/generated/gperf_class_files/ImmunizationRecommendation_Recommendation.gperf"
    {"supportingImmunization_count", 0xd8, 22, -1, {(U8*)"supportingImmunization_count", 28}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 19 "./src/generated/gperf_class_files/ImmunizationRecommendation_Recommendation.gperf"
    {"contraindicatedVaccineCode_count", 0x50, 9, -1, {(U8*)"contraindicatedVaccineCode_count", 32}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 34 "./src/generated/gperf_class_files/ImmunizationRecommendation_Recommendation.gperf"
    {"supportingPatientInformation_count", 0xe8, 24, -1, {(U8*)"supportingPatientInformation_count", 34}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown}
  };

static const signed char lookup[] =
  {
    -1, -1,  0, -1, -1, -1, -1, -1, -1,  1, -1,  2, -1,  3,
     4, -1,  5,  6, -1,  7,  8,  9, 10, -1, 11, 12, -1, 13,
    14, 15, 16, 17, 18, 19, 20, -1, 21, 22, 23, -1, -1, -1,
    24, -1, 25
  };

const struct fhir_deserialize::MemberNameAndOffset *
ImmunizationRecommendation_Recommendation_Gperf::ImmunizationRecommendation_Recommendation_MemberLookup (register const char *str, register unsigned int len)
{
  if (len <= MAX_WORD_LENGTH && len >= MIN_WORD_LENGTH)
    {
      register int key = hash (str, len);

      if (key <= MAX_HASH_VALUE && key >= 0)
        {
          register int index = lookup[key];

          if (index >= 0)
            {
              register const char *s = word_array_ImmunizationRecommendation_Recommendation[index].name;

              if (*str == *s && !strncmp (str + 1, s + 1, len - 1) && s[len] == '\0')
                return &word_array_ImmunizationRecommendation_Recommendation[index];
            }
        }
    }
  return 0;
}
