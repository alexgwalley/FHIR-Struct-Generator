/* C++ code produced by gperf version 3.0.1 */
/* Command-line: gperf.exe -t --output-file=src/generated/gperf_hash_tables/RiskEvidenceSynthesis-Member-Lookup.cc -CGD ./src/generated/gperf_class_files/RiskEvidenceSynthesis.gperf  */
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

#line 8 "./src/generated/gperf_class_files/RiskEvidenceSynthesis.gperf"
struct fhir_deserialize::MemberNameAndOffset;
enum
  {
    TOTAL_KEYWORDS = 55,
    MIN_WORD_LENGTH = 2,
    MAX_WORD_LENGTH = 23,
    MIN_HASH_VALUE = 2,
    MAX_HASH_VALUE = 90
  };

/* maximum key range = 89, duplicates = 0 */

class RiskEvidenceSynthesis_Gperf
{
private:
  static inline unsigned int hash (const char *str, unsigned int len);
public:
  static const struct fhir_deserialize::MemberNameAndOffset *RiskEvidenceSynthesis_MemberLookup (const char *str, unsigned int len);
};

inline unsigned int
RiskEvidenceSynthesis_Gperf::hash (register const char *str, register unsigned int len)
{
  static const unsigned char asso_values[] =
    {
      91, 91, 91, 91, 91, 91, 91, 91, 91, 91,
      91, 91, 91, 91, 91, 91, 91, 91, 91, 91,
      91, 91, 91, 91, 91, 91, 91, 91, 91, 91,
      91, 91, 91, 91, 91, 91, 91, 91, 91, 91,
      91, 91, 91, 91, 91, 91, 91, 91, 91, 91,
      91, 91, 91, 91, 91, 91, 91, 91, 91, 91,
      91, 91, 91, 91, 91, 91, 91, 91, 91, 91,
      91, 91, 91, 91, 91, 91, 91, 91, 91, 91,
      91, 91, 91, 91, 91, 91, 91, 91, 91, 91,
      91, 91, 91, 91, 91, 91, 91, 40, 20, 91,
       0, 25, 30, 91, 91, 45, 91, 91, 25, 40,
       0,  0, 15, 91, 15, 25,  0, 25, 30, 91,
      30,  5, 91, 91, 91, 91, 91, 91, 91, 91,
      91, 91, 91, 91, 91, 91, 91, 91, 91, 91,
      91, 91, 91, 91, 91, 91, 91, 91, 91, 91,
      91, 91, 91, 91, 91, 91, 91, 91, 91, 91,
      91, 91, 91, 91, 91, 91, 91, 91, 91, 91,
      91, 91, 91, 91, 91, 91, 91, 91, 91, 91,
      91, 91, 91, 91, 91, 91, 91, 91, 91, 91,
      91, 91, 91, 91, 91, 91, 91, 91, 91, 91,
      91, 91, 91, 91, 91, 91, 91, 91, 91, 91,
      91, 91, 91, 91, 91, 91, 91, 91, 91, 91,
      91, 91, 91, 91, 91, 91, 91, 91, 91, 91,
      91, 91, 91, 91, 91, 91, 91, 91, 91, 91,
      91, 91, 91, 91, 91, 91, 91, 91, 91, 91,
      91, 91, 91, 91, 91, 91
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

static const struct fhir_deserialize::MemberNameAndOffset word_array_RiskEvidenceSynthesis[] =
  {
#line 11 "./src/generated/gperf_class_files/RiskEvidenceSynthesis.gperf"
    {"id", 0x8, 1, -1, {(U8*)"id", 2}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 35 "./src/generated/gperf_class_files/RiskEvidenceSynthesis.gperf"
    {"note", 0x120, 25, -1, {(U8*)"note", 4}, fhir_deserialize::ResourceType::Annotation, 0, fhir_deserialize::ResourceType::Unknown},
#line 32 "./src/generated/gperf_class_files/RiskEvidenceSynthesis.gperf"
    {"contact", 0x100, 22, -1, {(U8*)"contact", 7}, fhir_deserialize::ResourceType::ContactDetail, 0, fhir_deserialize::ResourceType::Unknown},
#line 53 "./src/generated/gperf_class_files/RiskEvidenceSynthesis.gperf"
    {"endorser", 0x1c8, 43, -1, {(U8*)"endorser", 8}, fhir_deserialize::ResourceType::ContactDetail, 0, fhir_deserialize::ResourceType::Unknown},
#line 17 "./src/generated/gperf_class_files/RiskEvidenceSynthesis.gperf"
    {"contained", 0x50, 7, -1, {(U8*)"contained", 9}, fhir_deserialize::ResourceType::Resource, 0, fhir_deserialize::ResourceType::Unknown},
#line 34 "./src/generated/gperf_class_files/RiskEvidenceSynthesis.gperf"
    {"note_count", 0x118, 24, -1, {(U8*)"note_count", 10}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 31 "./src/generated/gperf_class_files/RiskEvidenceSynthesis.gperf"
    {"contact_count", 0xf8, 21, -1, {(U8*)"contact_count", 13}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 52 "./src/generated/gperf_class_files/RiskEvidenceSynthesis.gperf"
    {"endorser_count", 0x1c0, 42, -1, {(U8*)"endorser_count", 14}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 16 "./src/generated/gperf_class_files/RiskEvidenceSynthesis.gperf"
    {"contained_count", 0x48, 6, -1, {(U8*)"contained_count", 15}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 21 "./src/generated/gperf_class_files/RiskEvidenceSynthesis.gperf"
    {"modifierExtension", 0x70, 11, -1, {(U8*)"modifierExtension", 17}, fhir_deserialize::ResourceType::Extension, 0, fhir_deserialize::ResourceType::Unknown},
#line 56 "./src/generated/gperf_class_files/RiskEvidenceSynthesis.gperf"
    {"synthesisType", 0x1e0, 46, -1, {(U8*)"synthesisType", 13}, fhir_deserialize::ResourceType::CodeableConcept, 0, fhir_deserialize::ResourceType::Unknown},
#line 45 "./src/generated/gperf_class_files/RiskEvidenceSynthesis.gperf"
    {"topic", 0x188, 35, -1, {(U8*)"topic", 5}, fhir_deserialize::ResourceType::CodeableConcept, 0, fhir_deserialize::ResourceType::Unknown},
#line 20 "./src/generated/gperf_class_files/RiskEvidenceSynthesis.gperf"
    {"modifierExtension_count", 0x68, 10, -1, {(U8*)"modifierExtension_count", 23}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 40 "./src/generated/gperf_class_files/RiskEvidenceSynthesis.gperf"
    {"copyright", 0x148, 30, -1, {(U8*)"copyright", 9}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 58 "./src/generated/gperf_class_files/RiskEvidenceSynthesis.gperf"
    {"population", 0x1f0, 48, -1, {(U8*)"population", 10}, fhir_deserialize::ResourceType::Reference, 0, fhir_deserialize::ResourceType::Unknown},
#line 44 "./src/generated/gperf_class_files/RiskEvidenceSynthesis.gperf"
    {"topic_count", 0x180, 34, -1, {(U8*)"topic_count", 11}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 12 "./src/generated/gperf_class_files/RiskEvidenceSynthesis.gperf"
    {"meta", 0x18, 2, -1, {(U8*)"meta", 4}, fhir_deserialize::ResourceType::Meta, 0, fhir_deserialize::ResourceType::Unknown},
#line 47 "./src/generated/gperf_class_files/RiskEvidenceSynthesis.gperf"
    {"author", 0x198, 37, -1, {(U8*)"author", 6}, fhir_deserialize::ResourceType::ContactDetail, 0, fhir_deserialize::ResourceType::Unknown},
#line 60 "./src/generated/gperf_class_files/RiskEvidenceSynthesis.gperf"
    {"outcome", 0x200, 50, -1, {(U8*)"outcome", 7}, fhir_deserialize::ResourceType::Reference, 0, fhir_deserialize::ResourceType::Unknown},
#line 57 "./src/generated/gperf_class_files/RiskEvidenceSynthesis.gperf"
    {"studyType", 0x1e8, 47, -1, {(U8*)"studyType", 9}, fhir_deserialize::ResourceType::CodeableConcept, 0, fhir_deserialize::ResourceType::Unknown},
#line 24 "./src/generated/gperf_class_files/RiskEvidenceSynthesis.gperf"
    {"identifier", 0x90, 14, -1, {(U8*)"identifier", 10}, fhir_deserialize::ResourceType::Identifier, 0, fhir_deserialize::ResourceType::Unknown},
#line 46 "./src/generated/gperf_class_files/RiskEvidenceSynthesis.gperf"
    {"author_count", 0x190, 36, -1, {(U8*)"author_count", 12}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 19 "./src/generated/gperf_class_files/RiskEvidenceSynthesis.gperf"
    {"extension", 0x60, 9, -1, {(U8*)"extension", 9}, fhir_deserialize::ResourceType::Extension, 0, fhir_deserialize::ResourceType::Unknown},
#line 23 "./src/generated/gperf_class_files/RiskEvidenceSynthesis.gperf"
    {"identifier_count", 0x88, 13, -1, {(U8*)"identifier_count", 16}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 41 "./src/generated/gperf_class_files/RiskEvidenceSynthesis.gperf"
    {"approvalDate", 0x158, 31, -1, {(U8*)"approvalDate", 12}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 22 "./src/generated/gperf_class_files/RiskEvidenceSynthesis.gperf"
    {"url", 0x78, 12, -1, {(U8*)"url", 3}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 29 "./src/generated/gperf_class_files/RiskEvidenceSynthesis.gperf"
    {"date", 0xd8, 19, -1, {(U8*)"date", 4}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 18 "./src/generated/gperf_class_files/RiskEvidenceSynthesis.gperf"
    {"extension_count", 0x58, 8, -1, {(U8*)"extension_count", 15}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 28 "./src/generated/gperf_class_files/RiskEvidenceSynthesis.gperf"
    {"status", 0xc8, 18, -1, {(U8*)"status", 6}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 25 "./src/generated/gperf_class_files/RiskEvidenceSynthesis.gperf"
    {"version", 0x98, 15, -1, {(U8*)"version", 7}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 14 "./src/generated/gperf_class_files/RiskEvidenceSynthesis.gperf"
    {"language", 0x30, 4, -1, {(U8*)"language", 8}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 64 "./src/generated/gperf_class_files/RiskEvidenceSynthesis.gperf"
    {"certainty", 0x220, 54, -1, {(U8*)"certainty", 9}, fhir_deserialize::ResourceType::RiskEvidenceSynthesis_Certainty, 0, fhir_deserialize::ResourceType::Unknown},
#line 27 "./src/generated/gperf_class_files/RiskEvidenceSynthesis.gperf"
    {"title", 0xb8, 17, -1, {(U8*)"title", 5}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 49 "./src/generated/gperf_class_files/RiskEvidenceSynthesis.gperf"
    {"editor", 0x1a8, 39, -1, {(U8*)"editor", 6}, fhir_deserialize::ResourceType::ContactDetail, 0, fhir_deserialize::ResourceType::Unknown},
#line 39 "./src/generated/gperf_class_files/RiskEvidenceSynthesis.gperf"
    {"jurisdiction", 0x140, 29, -1, {(U8*)"jurisdiction", 12}, fhir_deserialize::ResourceType::CodeableConcept, 0, fhir_deserialize::ResourceType::Unknown},
#line 59 "./src/generated/gperf_class_files/RiskEvidenceSynthesis.gperf"
    {"exposure", 0x1f8, 49, -1, {(U8*)"exposure", 8}, fhir_deserialize::ResourceType::Reference, 0, fhir_deserialize::ResourceType::Unknown},
#line 30 "./src/generated/gperf_class_files/RiskEvidenceSynthesis.gperf"
    {"publisher", 0xe8, 20, -1, {(U8*)"publisher", 9}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 63 "./src/generated/gperf_class_files/RiskEvidenceSynthesis.gperf"
    {"certainty_count", 0x218, 53, -1, {(U8*)"certainty_count", 15}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 48 "./src/generated/gperf_class_files/RiskEvidenceSynthesis.gperf"
    {"editor_count", 0x1a0, 38, -1, {(U8*)"editor_count", 12}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 38 "./src/generated/gperf_class_files/RiskEvidenceSynthesis.gperf"
    {"jurisdiction_count", 0x138, 28, -1, {(U8*)"jurisdiction_count", 18}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 15 "./src/generated/gperf_class_files/RiskEvidenceSynthesis.gperf"
    {"text", 0x40, 5, -1, {(U8*)"text", 4}, fhir_deserialize::ResourceType::Narrative, 0, fhir_deserialize::ResourceType::Unknown},
#line 37 "./src/generated/gperf_class_files/RiskEvidenceSynthesis.gperf"
    {"useContext", 0x130, 27, -1, {(U8*)"useContext", 10}, fhir_deserialize::ResourceType::UsageContext, 0, fhir_deserialize::ResourceType::Unknown},
#line 33 "./src/generated/gperf_class_files/RiskEvidenceSynthesis.gperf"
    {"description", 0x108, 23, -1, {(U8*)"description", 11}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 10 "./src/generated/gperf_class_files/RiskEvidenceSynthesis.gperf"
    {"resourceType", 0x0, 0, -1, {(U8*)"resourceType", 12}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 51 "./src/generated/gperf_class_files/RiskEvidenceSynthesis.gperf"
    {"reviewer", 0x1b8, 41, -1, {(U8*)"reviewer", 8}, fhir_deserialize::ResourceType::ContactDetail, 0, fhir_deserialize::ResourceType::Unknown},
#line 55 "./src/generated/gperf_class_files/RiskEvidenceSynthesis.gperf"
    {"relatedArtifact", 0x1d8, 45, -1, {(U8*)"relatedArtifact", 15}, fhir_deserialize::ResourceType::RelatedArtifact, 0, fhir_deserialize::ResourceType::Unknown},
#line 36 "./src/generated/gperf_class_files/RiskEvidenceSynthesis.gperf"
    {"useContext_count", 0x128, 26, -1, {(U8*)"useContext_count", 16}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 13 "./src/generated/gperf_class_files/RiskEvidenceSynthesis.gperf"
    {"implicitRules", 0x20, 3, -1, {(U8*)"implicitRules", 13}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 50 "./src/generated/gperf_class_files/RiskEvidenceSynthesis.gperf"
    {"reviewer_count", 0x1b0, 40, -1, {(U8*)"reviewer_count", 14}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 54 "./src/generated/gperf_class_files/RiskEvidenceSynthesis.gperf"
    {"relatedArtifact_count", 0x1d0, 44, -1, {(U8*)"relatedArtifact_count", 21}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 43 "./src/generated/gperf_class_files/RiskEvidenceSynthesis.gperf"
    {"effectivePeriod", 0x178, 33, -1, {(U8*)"effectivePeriod", 15}, fhir_deserialize::ResourceType::Period, 0, fhir_deserialize::ResourceType::Unknown},
#line 42 "./src/generated/gperf_class_files/RiskEvidenceSynthesis.gperf"
    {"lastReviewDate", 0x168, 32, -1, {(U8*)"lastReviewDate", 14}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 62 "./src/generated/gperf_class_files/RiskEvidenceSynthesis.gperf"
    {"riskEstimate", 0x210, 52, -1, {(U8*)"riskEstimate", 12}, fhir_deserialize::ResourceType::RiskEvidenceSynthesis_RiskEstimate, 0, fhir_deserialize::ResourceType::Unknown},
#line 26 "./src/generated/gperf_class_files/RiskEvidenceSynthesis.gperf"
    {"name", 0xa8, 16, -1, {(U8*)"name", 4}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 61 "./src/generated/gperf_class_files/RiskEvidenceSynthesis.gperf"
    {"sampleSize", 0x208, 51, -1, {(U8*)"sampleSize", 10}, fhir_deserialize::ResourceType::RiskEvidenceSynthesis_SampleSize, 0, fhir_deserialize::ResourceType::Unknown}
  };

static const signed char lookup[] =
  {
    -1, -1,  0, -1,  1, -1, -1,  2,  3,  4,  5, -1, -1,  6,
     7,  8, -1,  9, 10, -1, 11, -1, -1, 12, 13, 14, 15, -1,
    -1, 16, -1, 17, 18, -1, 19, 20, -1, 21, -1, 22, -1, 23,
    24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37,
    -1, 38, 39, 40, 41, 42, 43, 44, -1, 45, 46, -1, 47, 48,
    -1, 49, -1, -1, -1, 50, -1, -1, -1, 51, -1, -1, 52, -1,
    53, -1, -1, -1, -1, -1, 54
  };

const struct fhir_deserialize::MemberNameAndOffset *
RiskEvidenceSynthesis_Gperf::RiskEvidenceSynthesis_MemberLookup (register const char *str, register unsigned int len)
{
  if (len <= MAX_WORD_LENGTH && len >= MIN_WORD_LENGTH)
    {
      register int key = hash (str, len);

      if (key <= MAX_HASH_VALUE && key >= 0)
        {
          register int index = lookup[key];

          if (index >= 0)
            {
              register const char *s = word_array_RiskEvidenceSynthesis[index].name;

              if (*str == *s && !strncmp (str + 1, s + 1, len - 1) && s[len] == '\0')
                return &word_array_RiskEvidenceSynthesis[index];
            }
        }
    }
  return 0;
}
