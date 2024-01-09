/* C++ code produced by gperf version 3.0.1 */
/* Command-line: gperf.exe -t --output-file=src/generated/gperf_hash_tables/Measure-Member-Lookup.cc -CGD ./src/generated/gperf_class_files/Measure.gperf  */
/* Computed positions: -k'2-3' */

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

#line 8 "./src/generated/gperf_class_files/Measure.gperf"
struct fhir_deserialize::MemberNameAndOffset;
enum
  {
    TOTAL_KEYWORDS = 69,
    MIN_WORD_LENGTH = 2,
    MAX_WORD_LENGTH = 31,
    MIN_HASH_VALUE = 2,
    MAX_HASH_VALUE = 128
  };

/* maximum key range = 127, duplicates = 0 */

class Measure_Gperf
{
private:
  static inline unsigned int hash (const char *str, unsigned int len);
public:
  static const struct fhir_deserialize::MemberNameAndOffset *Measure_MemberLookup (const char *str, unsigned int len);
};

inline unsigned int
Measure_Gperf::hash (register const char *str, register unsigned int len)
{
  static const unsigned char asso_values[] =
    {
      129, 129, 129, 129, 129, 129, 129, 129, 129, 129,
      129, 129, 129, 129, 129, 129, 129, 129, 129, 129,
      129, 129, 129, 129, 129, 129, 129, 129, 129, 129,
      129, 129, 129, 129, 129, 129, 129, 129, 129, 129,
      129, 129, 129, 129, 129, 129, 129, 129, 129, 129,
      129, 129, 129, 129, 129, 129, 129, 129, 129, 129,
      129, 129, 129, 129, 129, 129, 129, 129, 129, 129,
      129, 129, 129, 129, 129, 129, 129, 129, 129, 129,
      129, 129, 129, 129, 129, 129, 129, 129, 129, 129,
      129, 129, 129, 129, 129, 129, 129,  10,  60,   5,
        0,   0,  30, 129, 129,  25, 129, 129,  65,  45,
        0,   0,  55, 129,  60,  10,  25,   5,  55, 129,
       50,  20, 129, 129, 129, 129, 129, 129, 129, 129,
      129, 129, 129, 129, 129, 129, 129, 129, 129, 129,
      129, 129, 129, 129, 129, 129, 129, 129, 129, 129,
      129, 129, 129, 129, 129, 129, 129, 129, 129, 129,
      129, 129, 129, 129, 129, 129, 129, 129, 129, 129,
      129, 129, 129, 129, 129, 129, 129, 129, 129, 129,
      129, 129, 129, 129, 129, 129, 129, 129, 129, 129,
      129, 129, 129, 129, 129, 129, 129, 129, 129, 129,
      129, 129, 129, 129, 129, 129, 129, 129, 129, 129,
      129, 129, 129, 129, 129, 129, 129, 129, 129, 129,
      129, 129, 129, 129, 129, 129, 129, 129, 129, 129,
      129, 129, 129, 129, 129, 129, 129, 129, 129, 129,
      129, 129, 129, 129, 129, 129, 129, 129, 129, 129,
      129, 129, 129, 129, 129, 129
    };
  register int hval = len;

  switch (hval)
    {
      default:
        hval += asso_values[(unsigned char)str[2]];
      /*FALLTHROUGH*/
      case 2:
        hval += asso_values[(unsigned char)str[1]];
        break;
    }
  return hval;
}

static const struct fhir_deserialize::MemberNameAndOffset word_array_Measure[] =
  {
#line 11 "./src/generated/gperf_class_files/Measure.gperf"
    {"id", 0x8, 1, -1, {(U8*)"id", 2}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 36 "./src/generated/gperf_class_files/Measure.gperf"
    {"contact", 0x120, 26, -1, {(U8*)"contact", 7}, fhir_deserialize::ResourceType::ContactDetail, 0, fhir_deserialize::ResourceType::Unknown},
#line 57 "./src/generated/gperf_class_files/Measure.gperf"
    {"endorser", 0x1f8, 47, -1, {(U8*)"endorser", 8}, fhir_deserialize::ResourceType::ContactDetail, 0, fhir_deserialize::ResourceType::Unknown},
#line 17 "./src/generated/gperf_class_files/Measure.gperf"
    {"contained", 0x50, 7, -1, {(U8*)"contained", 9}, fhir_deserialize::ResourceType::Resource, 0, fhir_deserialize::ResourceType::Unknown},
#line 24 "./src/generated/gperf_class_files/Measure.gperf"
    {"identifier", 0x90, 14, -1, {(U8*)"identifier", 10}, fhir_deserialize::ResourceType::Identifier, 0, fhir_deserialize::ResourceType::Unknown},
#line 63 "./src/generated/gperf_class_files/Measure.gperf"
    {"scoring", 0x230, 53, -1, {(U8*)"scoring", 7}, fhir_deserialize::ResourceType::CodeableConcept, 0, fhir_deserialize::ResourceType::Unknown},
#line 35 "./src/generated/gperf_class_files/Measure.gperf"
    {"contact_count", 0x118, 25, -1, {(U8*)"contact_count", 13}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 56 "./src/generated/gperf_class_files/Measure.gperf"
    {"endorser_count", 0x1f0, 46, -1, {(U8*)"endorser_count", 14}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 16 "./src/generated/gperf_class_files/Measure.gperf"
    {"contained_count", 0x48, 6, -1, {(U8*)"contained_count", 15}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 23 "./src/generated/gperf_class_files/Measure.gperf"
    {"identifier_count", 0x88, 13, -1, {(U8*)"identifier_count", 16}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 21 "./src/generated/gperf_class_files/Measure.gperf"
    {"modifierExtension", 0x70, 11, -1, {(U8*)"modifierExtension", 17}, fhir_deserialize::ResourceType::Extension, 0, fhir_deserialize::ResourceType::Unknown},
#line 14 "./src/generated/gperf_class_files/Measure.gperf"
    {"language", 0x30, 4, -1, {(U8*)"language", 8}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 39 "./src/generated/gperf_class_files/Measure.gperf"
    {"useContext", 0x140, 29, -1, {(U8*)"useContext", 10}, fhir_deserialize::ResourceType::UsageContext, 0, fhir_deserialize::ResourceType::Unknown},
#line 37 "./src/generated/gperf_class_files/Measure.gperf"
    {"description", 0x128, 27, -1, {(U8*)"description", 11}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 10 "./src/generated/gperf_class_files/Measure.gperf"
    {"resourceType", 0x0, 0, -1, {(U8*)"resourceType", 12}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 20 "./src/generated/gperf_class_files/Measure.gperf"
    {"modifierExtension_count", 0x68, 10, -1, {(U8*)"modifierExtension_count", 23}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 43 "./src/generated/gperf_class_files/Measure.gperf"
    {"usage", 0x168, 33, -1, {(U8*)"usage", 5}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 38 "./src/generated/gperf_class_files/Measure.gperf"
    {"useContext_count", 0x138, 28, -1, {(U8*)"useContext_count", 16}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 12 "./src/generated/gperf_class_files/Measure.gperf"
    {"meta", 0x18, 2, -1, {(U8*)"meta", 4}, fhir_deserialize::ResourceType::Meta, 0, fhir_deserialize::ResourceType::Unknown},
#line 53 "./src/generated/gperf_class_files/Measure.gperf"
    {"editor", 0x1d8, 43, -1, {(U8*)"editor", 6}, fhir_deserialize::ResourceType::ContactDetail, 0, fhir_deserialize::ResourceType::Unknown},
#line 46 "./src/generated/gperf_class_files/Measure.gperf"
    {"lastReviewDate", 0x198, 36, -1, {(U8*)"lastReviewDate", 14}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 51 "./src/generated/gperf_class_files/Measure.gperf"
    {"author", 0x1c8, 41, -1, {(U8*)"author", 6}, fhir_deserialize::ResourceType::ContactDetail, 0, fhir_deserialize::ResourceType::Unknown},
#line 52 "./src/generated/gperf_class_files/Measure.gperf"
    {"editor_count", 0x1d0, 42, -1, {(U8*)"editor_count", 12}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 74 "./src/generated/gperf_class_files/Measure.gperf"
    {"guidance", 0x2a8, 64, -1, {(U8*)"guidance", 8}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 33 "./src/generated/gperf_class_files/Measure.gperf"
    {"date", 0xf8, 23, -1, {(U8*)"date", 4}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 73 "./src/generated/gperf_class_files/Measure.gperf"
    {"definition", 0x2a0, 63, -1, {(U8*)"definition", 10}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 29 "./src/generated/gperf_class_files/Measure.gperf"
    {"status", 0xd8, 19, -1, {(U8*)"status", 6}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 50 "./src/generated/gperf_class_files/Measure.gperf"
    {"author_count", 0x1c0, 40, -1, {(U8*)"author_count", 12}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 69 "./src/generated/gperf_class_files/Measure.gperf"
    {"rationale", 0x270, 59, -1, {(U8*)"rationale", 9}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 62 "./src/generated/gperf_class_files/Measure.gperf"
    {"disclaimer", 0x220, 52, -1, {(U8*)"disclaimer", 10}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 72 "./src/generated/gperf_class_files/Measure.gperf"
    {"definition_count", 0x298, 62, -1, {(U8*)"definition_count", 16}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 67 "./src/generated/gperf_class_files/Measure.gperf"
    {"riskAdjustment", 0x250, 57, -1, {(U8*)"riskAdjustment", 14}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 68 "./src/generated/gperf_class_files/Measure.gperf"
    {"rateAggregation", 0x260, 58, -1, {(U8*)"rateAggregation", 15}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 15 "./src/generated/gperf_class_files/Measure.gperf"
    {"text", 0x40, 5, -1, {(U8*)"text", 4}, fhir_deserialize::ResourceType::Narrative, 0, fhir_deserialize::ResourceType::Unknown},
#line 27 "./src/generated/gperf_class_files/Measure.gperf"
    {"title", 0xb8, 17, -1, {(U8*)"title", 5}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 26 "./src/generated/gperf_class_files/Measure.gperf"
    {"name", 0xa8, 16, -1, {(U8*)"name", 4}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 49 "./src/generated/gperf_class_files/Measure.gperf"
    {"topic", 0x1b8, 39, -1, {(U8*)"topic", 5}, fhir_deserialize::ResourceType::CodeableConcept, 0, fhir_deserialize::ResourceType::Unknown},
#line 64 "./src/generated/gperf_class_files/Measure.gperf"
    {"compositeScoring", 0x238, 54, -1, {(U8*)"compositeScoring", 16}, fhir_deserialize::ResourceType::CodeableConcept, 0, fhir_deserialize::ResourceType::Unknown},
#line 55 "./src/generated/gperf_class_files/Measure.gperf"
    {"reviewer", 0x1e8, 45, -1, {(U8*)"reviewer", 8}, fhir_deserialize::ResourceType::ContactDetail, 0, fhir_deserialize::ResourceType::Unknown},
#line 44 "./src/generated/gperf_class_files/Measure.gperf"
    {"copyright", 0x178, 34, -1, {(U8*)"copyright", 9}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 76 "./src/generated/gperf_class_files/Measure.gperf"
    {"group", 0x2c0, 66, -1, {(U8*)"group", 5}, fhir_deserialize::ResourceType::Measure_Group, 0, fhir_deserialize::ResourceType::Unknown},
#line 48 "./src/generated/gperf_class_files/Measure.gperf"
    {"topic_count", 0x1b0, 38, -1, {(U8*)"topic_count", 11}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 25 "./src/generated/gperf_class_files/Measure.gperf"
    {"version", 0x98, 15, -1, {(U8*)"version", 7}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 54 "./src/generated/gperf_class_files/Measure.gperf"
    {"reviewer_count", 0x1e0, 44, -1, {(U8*)"reviewer_count", 14}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 75 "./src/generated/gperf_class_files/Measure.gperf"
    {"group_count", 0x2b8, 65, -1, {(U8*)"group_count", 11}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 42 "./src/generated/gperf_class_files/Measure.gperf"
    {"purpose", 0x158, 32, -1, {(U8*)"purpose", 7}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 28 "./src/generated/gperf_class_files/Measure.gperf"
    {"subtitle", 0xc8, 18, -1, {(U8*)"subtitle", 8}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 34 "./src/generated/gperf_class_files/Measure.gperf"
    {"publisher", 0x108, 24, -1, {(U8*)"publisher", 9}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 47 "./src/generated/gperf_class_files/Measure.gperf"
    {"effectivePeriod", 0x1a8, 37, -1, {(U8*)"effectivePeriod", 15}, fhir_deserialize::ResourceType::Period, 0, fhir_deserialize::ResourceType::Unknown},
#line 78 "./src/generated/gperf_class_files/Measure.gperf"
    {"supplementalData", 0x2d0, 68, -1, {(U8*)"supplementalData", 16}, fhir_deserialize::ResourceType::Measure_SupplementalData, 0, fhir_deserialize::ResourceType::Unknown},
#line 41 "./src/generated/gperf_class_files/Measure.gperf"
    {"jurisdiction", 0x150, 31, -1, {(U8*)"jurisdiction", 12}, fhir_deserialize::ResourceType::CodeableConcept, 0, fhir_deserialize::ResourceType::Unknown},
#line 66 "./src/generated/gperf_class_files/Measure.gperf"
    {"type", 0x248, 56, -1, {(U8*)"type", 4}, fhir_deserialize::ResourceType::CodeableConcept, 0, fhir_deserialize::ResourceType::Unknown},
#line 59 "./src/generated/gperf_class_files/Measure.gperf"
    {"relatedArtifact", 0x208, 49, -1, {(U8*)"relatedArtifact", 15}, fhir_deserialize::ResourceType::RelatedArtifact, 0, fhir_deserialize::ResourceType::Unknown},
#line 32 "./src/generated/gperf_class_files/Measure.gperf"
    {"subjectReference", 0xf0, 22, 1, {(U8*)"subject", 7}, fhir_deserialize::ResourceType::CodeableConcept, 20, fhir_deserialize::ResourceType::Reference},
#line 77 "./src/generated/gperf_class_files/Measure.gperf"
    {"supplementalData_count", 0x2c8, 67, -1, {(U8*)"supplementalData_count", 22}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 40 "./src/generated/gperf_class_files/Measure.gperf"
    {"jurisdiction_count", 0x148, 30, -1, {(U8*)"jurisdiction_count", 18}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 19 "./src/generated/gperf_class_files/Measure.gperf"
    {"extension", 0x60, 9, -1, {(U8*)"extension", 9}, fhir_deserialize::ResourceType::Extension, 0, fhir_deserialize::ResourceType::Unknown},
#line 65 "./src/generated/gperf_class_files/Measure.gperf"
    {"type_count", 0x240, 55, -1, {(U8*)"type_count", 10}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 58 "./src/generated/gperf_class_files/Measure.gperf"
    {"relatedArtifact_count", 0x200, 48, -1, {(U8*)"relatedArtifact_count", 21}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 31 "./src/generated/gperf_class_files/Measure.gperf"
    {"subjectCodeableConcept", 0xf0, 22, 0, {(U8*)"subject", 7}, fhir_deserialize::ResourceType::CodeableConcept, 20, fhir_deserialize::ResourceType::CodeableConcept},
#line 18 "./src/generated/gperf_class_files/Measure.gperf"
    {"extension_count", 0x58, 8, -1, {(U8*)"extension_count", 15}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 61 "./src/generated/gperf_class_files/Measure.gperf"
    {"library", 0x218, 51, -1, {(U8*)"library", 7}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 60 "./src/generated/gperf_class_files/Measure.gperf"
    {"library_count", 0x210, 50, -1, {(U8*)"library_count", 13}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 13 "./src/generated/gperf_class_files/Measure.gperf"
    {"implicitRules", 0x20, 3, -1, {(U8*)"implicitRules", 13}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 30 "./src/generated/gperf_class_files/Measure.gperf"
    {"experimental", 0xe8, 20, -1, {(U8*)"experimental", 12}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 71 "./src/generated/gperf_class_files/Measure.gperf"
    {"improvementNotation", 0x290, 61, -1, {(U8*)"improvementNotation", 19}, fhir_deserialize::ResourceType::CodeableConcept, 0, fhir_deserialize::ResourceType::Unknown},
#line 70 "./src/generated/gperf_class_files/Measure.gperf"
    {"clinicalRecommendationStatement", 0x280, 60, -1, {(U8*)"clinicalRecommendationStatement", 31}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 45 "./src/generated/gperf_class_files/Measure.gperf"
    {"approvalDate", 0x188, 35, -1, {(U8*)"approvalDate", 12}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 22 "./src/generated/gperf_class_files/Measure.gperf"
    {"url", 0x78, 12, -1, {(U8*)"url", 3}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown}
  };

static const signed char lookup[] =
  {
    -1, -1,  0, -1, -1, -1, -1,  1,  2,  3,  4, -1,  5,  6,
     7,  8,  9, 10, 11, -1, 12, 13, 14, 15, -1, 16, 17, -1,
    -1, 18, -1, 19, -1, -1, 20, -1, 21, 22, 23, 24, 25, 26,
    27, -1, 28, 29, 30, -1, -1, 31, 32, -1, -1, -1, 33, 34,
    -1, -1, -1, 35, 36, 37, -1, 38, 39, 40, 41, 42, -1, 43,
    -1, 44, 45, 46, 47, 48, 49, 50, -1, 51, 52, 53, 54, 55,
    56, 57, 58, 59, -1, -1, 60, -1, 61, -1, -1, -1, -1, -1,
    62, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, 63, -1, -1, -1, 64, -1, 65, -1, 66, 67, -1, -1, -1,
    -1, -1, 68
  };

const struct fhir_deserialize::MemberNameAndOffset *
Measure_Gperf::Measure_MemberLookup (register const char *str, register unsigned int len)
{
  if (len <= MAX_WORD_LENGTH && len >= MIN_WORD_LENGTH)
    {
      register int key = hash (str, len);

      if (key <= MAX_HASH_VALUE && key >= 0)
        {
          register int index = lookup[key];

          if (index >= 0)
            {
              register const char *s = word_array_Measure[index].name;

              if (*str == *s && !strncmp (str + 1, s + 1, len - 1) && s[len] == '\0')
                return &word_array_Measure[index];
            }
        }
    }
  return 0;
}
