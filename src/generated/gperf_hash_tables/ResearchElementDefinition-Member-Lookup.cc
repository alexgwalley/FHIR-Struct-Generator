/* C++ code produced by gperf version 3.0.1 */
/* Command-line: gperf.exe -t --output-file=src/generated/gperf_hash_tables/ResearchElementDefinition-Member-Lookup.cc -CGD ./src/generated/gperf_class_files/ResearchElementDefinition.gperf  */
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

#line 8 "./src/generated/gperf_class_files/ResearchElementDefinition.gperf"
struct fhir_deserialize::MemberNameAndOffset;
enum
  {
    TOTAL_KEYWORDS = 59,
    MIN_WORD_LENGTH = 2,
    MAX_WORD_LENGTH = 23,
    MIN_HASH_VALUE = 2,
    MAX_HASH_VALUE = 102
  };

/* maximum key range = 101, duplicates = 0 */

class ResearchElementDefinition_Gperf
{
private:
  static inline unsigned int hash (const char *str, unsigned int len);
public:
  static const struct fhir_deserialize::MemberNameAndOffset *ResearchElementDefinition_MemberLookup (const char *str, unsigned int len);
};

inline unsigned int
ResearchElementDefinition_Gperf::hash (register const char *str, register unsigned int len)
{
  static const unsigned char asso_values[] =
    {
      103, 103, 103, 103, 103, 103, 103, 103, 103, 103,
      103, 103, 103, 103, 103, 103, 103, 103, 103, 103,
      103, 103, 103, 103, 103, 103, 103, 103, 103, 103,
      103, 103, 103, 103, 103, 103, 103, 103, 103, 103,
      103, 103, 103, 103, 103, 103, 103, 103, 103, 103,
      103, 103, 103, 103, 103, 103, 103, 103, 103, 103,
      103, 103, 103, 103, 103, 103, 103, 103, 103, 103,
      103, 103, 103, 103, 103, 103, 103, 103, 103, 103,
      103, 103, 103, 103, 103, 103, 103, 103, 103, 103,
      103, 103, 103, 103, 103, 103, 103,  10,  10, 103,
        0,   0,  10, 103,  45,  45, 103, 103,  45,  35,
        0,   0,  45, 103,   5,  10,  15,  20,  16, 103,
       40,  10, 103, 103, 103, 103, 103, 103, 103, 103,
      103, 103, 103, 103, 103, 103, 103, 103, 103, 103,
      103, 103, 103, 103, 103, 103, 103, 103, 103, 103,
      103, 103, 103, 103, 103, 103, 103, 103, 103, 103,
      103, 103, 103, 103, 103, 103, 103, 103, 103, 103,
      103, 103, 103, 103, 103, 103, 103, 103, 103, 103,
      103, 103, 103, 103, 103, 103, 103, 103, 103, 103,
      103, 103, 103, 103, 103, 103, 103, 103, 103, 103,
      103, 103, 103, 103, 103, 103, 103, 103, 103, 103,
      103, 103, 103, 103, 103, 103, 103, 103, 103, 103,
      103, 103, 103, 103, 103, 103, 103, 103, 103, 103,
      103, 103, 103, 103, 103, 103, 103, 103, 103, 103,
      103, 103, 103, 103, 103, 103, 103, 103, 103, 103,
      103, 103, 103, 103, 103, 103
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

static const struct fhir_deserialize::MemberNameAndOffset word_array_ResearchElementDefinition[] =
  {
#line 11 "./src/generated/gperf_class_files/ResearchElementDefinition.gperf"
    {"id", 0x8, 1, -1, {(U8*)"id", 2}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 37 "./src/generated/gperf_class_files/ResearchElementDefinition.gperf"
    {"contact", 0x130, 27, -1, {(U8*)"contact", 7}, fhir_deserialize::ResourceType::ContactDetail, 0, fhir_deserialize::ResourceType::Unknown},
#line 60 "./src/generated/gperf_class_files/ResearchElementDefinition.gperf"
    {"endorser", 0x218, 50, -1, {(U8*)"endorser", 8}, fhir_deserialize::ResourceType::ContactDetail, 0, fhir_deserialize::ResourceType::Unknown},
#line 17 "./src/generated/gperf_class_files/ResearchElementDefinition.gperf"
    {"contained", 0x50, 7, -1, {(U8*)"contained", 9}, fhir_deserialize::ResourceType::Resource, 0, fhir_deserialize::ResourceType::Unknown},
#line 24 "./src/generated/gperf_class_files/ResearchElementDefinition.gperf"
    {"identifier", 0x90, 14, -1, {(U8*)"identifier", 10}, fhir_deserialize::ResourceType::Identifier, 0, fhir_deserialize::ResourceType::Unknown},
#line 25 "./src/generated/gperf_class_files/ResearchElementDefinition.gperf"
    {"version", 0x98, 15, -1, {(U8*)"version", 7}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 36 "./src/generated/gperf_class_files/ResearchElementDefinition.gperf"
    {"contact_count", 0x128, 26, -1, {(U8*)"contact_count", 13}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 59 "./src/generated/gperf_class_files/ResearchElementDefinition.gperf"
    {"endorser_count", 0x210, 49, -1, {(U8*)"endorser_count", 14}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 16 "./src/generated/gperf_class_files/ResearchElementDefinition.gperf"
    {"contained_count", 0x48, 6, -1, {(U8*)"contained_count", 15}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 23 "./src/generated/gperf_class_files/ResearchElementDefinition.gperf"
    {"identifier_count", 0x88, 13, -1, {(U8*)"identifier_count", 16}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 21 "./src/generated/gperf_class_files/ResearchElementDefinition.gperf"
    {"modifierExtension", 0x70, 11, -1, {(U8*)"modifierExtension", 17}, fhir_deserialize::ResourceType::Extension, 0, fhir_deserialize::ResourceType::Unknown},
#line 14 "./src/generated/gperf_class_files/ResearchElementDefinition.gperf"
    {"language", 0x30, 4, -1, {(U8*)"language", 8}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 12 "./src/generated/gperf_class_files/ResearchElementDefinition.gperf"
    {"meta", 0x18, 2, -1, {(U8*)"meta", 4}, fhir_deserialize::ResourceType::Meta, 0, fhir_deserialize::ResourceType::Unknown},
#line 42 "./src/generated/gperf_class_files/ResearchElementDefinition.gperf"
    {"useContext", 0x160, 32, -1, {(U8*)"useContext", 10}, fhir_deserialize::ResourceType::UsageContext, 0, fhir_deserialize::ResourceType::Unknown},
#line 38 "./src/generated/gperf_class_files/ResearchElementDefinition.gperf"
    {"description", 0x138, 28, -1, {(U8*)"description", 11}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 10 "./src/generated/gperf_class_files/ResearchElementDefinition.gperf"
    {"resourceType", 0x0, 0, -1, {(U8*)"resourceType", 12}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 20 "./src/generated/gperf_class_files/ResearchElementDefinition.gperf"
    {"modifierExtension_count", 0x68, 10, -1, {(U8*)"modifierExtension_count", 23}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 58 "./src/generated/gperf_class_files/ResearchElementDefinition.gperf"
    {"reviewer", 0x208, 48, -1, {(U8*)"reviewer", 8}, fhir_deserialize::ResourceType::ContactDetail, 0, fhir_deserialize::ResourceType::Unknown},
#line 46 "./src/generated/gperf_class_files/ResearchElementDefinition.gperf"
    {"usage", 0x188, 36, -1, {(U8*)"usage", 5}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 41 "./src/generated/gperf_class_files/ResearchElementDefinition.gperf"
    {"useContext_count", 0x158, 31, -1, {(U8*)"useContext_count", 16}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 66 "./src/generated/gperf_class_files/ResearchElementDefinition.gperf"
    {"variableType", 0x250, 56, -1, {(U8*)"variableType", 12}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 34 "./src/generated/gperf_class_files/ResearchElementDefinition.gperf"
    {"date", 0x108, 24, -1, {(U8*)"date", 4}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 57 "./src/generated/gperf_class_files/ResearchElementDefinition.gperf"
    {"reviewer_count", 0x200, 47, -1, {(U8*)"reviewer_count", 14}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 30 "./src/generated/gperf_class_files/ResearchElementDefinition.gperf"
    {"status", 0xe8, 20, -1, {(U8*)"status", 6}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 45 "./src/generated/gperf_class_files/ResearchElementDefinition.gperf"
    {"purpose", 0x178, 35, -1, {(U8*)"purpose", 7}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 49 "./src/generated/gperf_class_files/ResearchElementDefinition.gperf"
    {"lastReviewDate", 0x1b8, 39, -1, {(U8*)"lastReviewDate", 14}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 50 "./src/generated/gperf_class_files/ResearchElementDefinition.gperf"
    {"effectivePeriod", 0x1c8, 40, -1, {(U8*)"effectivePeriod", 15}, fhir_deserialize::ResourceType::Period, 0, fhir_deserialize::ResourceType::Unknown},
#line 44 "./src/generated/gperf_class_files/ResearchElementDefinition.gperf"
    {"jurisdiction", 0x170, 34, -1, {(U8*)"jurisdiction", 12}, fhir_deserialize::ResourceType::CodeableConcept, 0, fhir_deserialize::ResourceType::Unknown},
#line 29 "./src/generated/gperf_class_files/ResearchElementDefinition.gperf"
    {"subtitle", 0xd8, 19, -1, {(U8*)"subtitle", 8}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 35 "./src/generated/gperf_class_files/ResearchElementDefinition.gperf"
    {"publisher", 0x118, 25, -1, {(U8*)"publisher", 9}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 54 "./src/generated/gperf_class_files/ResearchElementDefinition.gperf"
    {"author", 0x1e8, 44, -1, {(U8*)"author", 6}, fhir_deserialize::ResourceType::ContactDetail, 0, fhir_deserialize::ResourceType::Unknown},
#line 40 "./src/generated/gperf_class_files/ResearchElementDefinition.gperf"
    {"comment", 0x150, 30, -1, {(U8*)"comment", 7}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 43 "./src/generated/gperf_class_files/ResearchElementDefinition.gperf"
    {"jurisdiction_count", 0x168, 33, -1, {(U8*)"jurisdiction_count", 18}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 15 "./src/generated/gperf_class_files/ResearchElementDefinition.gperf"
    {"text", 0x40, 5, -1, {(U8*)"text", 4}, fhir_deserialize::ResourceType::Narrative, 0, fhir_deserialize::ResourceType::Unknown},
#line 33 "./src/generated/gperf_class_files/ResearchElementDefinition.gperf"
    {"subjectReference", 0x100, 23, 1, {(U8*)"subject", 7}, fhir_deserialize::ResourceType::CodeableConcept, 20, fhir_deserialize::ResourceType::Reference},
#line 53 "./src/generated/gperf_class_files/ResearchElementDefinition.gperf"
    {"author_count", 0x1e0, 43, -1, {(U8*)"author_count", 12}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 39 "./src/generated/gperf_class_files/ResearchElementDefinition.gperf"
    {"comment_count", 0x148, 29, -1, {(U8*)"comment_count", 13}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 26 "./src/generated/gperf_class_files/ResearchElementDefinition.gperf"
    {"name", 0xa8, 16, -1, {(U8*)"name", 4}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 52 "./src/generated/gperf_class_files/ResearchElementDefinition.gperf"
    {"topic", 0x1d8, 42, -1, {(U8*)"topic", 5}, fhir_deserialize::ResourceType::CodeableConcept, 0, fhir_deserialize::ResourceType::Unknown},
#line 56 "./src/generated/gperf_class_files/ResearchElementDefinition.gperf"
    {"editor", 0x1f8, 46, -1, {(U8*)"editor", 6}, fhir_deserialize::ResourceType::ContactDetail, 0, fhir_deserialize::ResourceType::Unknown},
#line 32 "./src/generated/gperf_class_files/ResearchElementDefinition.gperf"
    {"subjectCodeableConcept", 0x100, 23, 0, {(U8*)"subject", 7}, fhir_deserialize::ResourceType::CodeableConcept, 20, fhir_deserialize::ResourceType::CodeableConcept},
#line 22 "./src/generated/gperf_class_files/ResearchElementDefinition.gperf"
    {"url", 0x78, 12, -1, {(U8*)"url", 3}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 47 "./src/generated/gperf_class_files/ResearchElementDefinition.gperf"
    {"copyright", 0x198, 37, -1, {(U8*)"copyright", 9}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 28 "./src/generated/gperf_class_files/ResearchElementDefinition.gperf"
    {"shortTitle", 0xc8, 18, -1, {(U8*)"shortTitle", 10}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 51 "./src/generated/gperf_class_files/ResearchElementDefinition.gperf"
    {"topic_count", 0x1d0, 41, -1, {(U8*)"topic_count", 11}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 55 "./src/generated/gperf_class_files/ResearchElementDefinition.gperf"
    {"editor_count", 0x1f0, 45, -1, {(U8*)"editor_count", 12}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 65 "./src/generated/gperf_class_files/ResearchElementDefinition.gperf"
    {"type", 0x240, 55, -1, {(U8*)"type", 4}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 62 "./src/generated/gperf_class_files/ResearchElementDefinition.gperf"
    {"relatedArtifact", 0x228, 52, -1, {(U8*)"relatedArtifact", 15}, fhir_deserialize::ResourceType::RelatedArtifact, 0, fhir_deserialize::ResourceType::Unknown},
#line 64 "./src/generated/gperf_class_files/ResearchElementDefinition.gperf"
    {"library", 0x238, 54, -1, {(U8*)"library", 7}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 19 "./src/generated/gperf_class_files/ResearchElementDefinition.gperf"
    {"extension", 0x60, 9, -1, {(U8*)"extension", 9}, fhir_deserialize::ResourceType::Extension, 0, fhir_deserialize::ResourceType::Unknown},
#line 27 "./src/generated/gperf_class_files/ResearchElementDefinition.gperf"
    {"title", 0xb8, 17, -1, {(U8*)"title", 5}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 61 "./src/generated/gperf_class_files/ResearchElementDefinition.gperf"
    {"relatedArtifact_count", 0x220, 51, -1, {(U8*)"relatedArtifact_count", 21}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 63 "./src/generated/gperf_class_files/ResearchElementDefinition.gperf"
    {"library_count", 0x230, 53, -1, {(U8*)"library_count", 13}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 68 "./src/generated/gperf_class_files/ResearchElementDefinition.gperf"
    {"characteristic", 0x268, 58, -1, {(U8*)"characteristic", 14}, fhir_deserialize::ResourceType::ResearchElementDefinition_Characteristic, 0, fhir_deserialize::ResourceType::Unknown},
#line 18 "./src/generated/gperf_class_files/ResearchElementDefinition.gperf"
    {"extension_count", 0x58, 8, -1, {(U8*)"extension_count", 15}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 67 "./src/generated/gperf_class_files/ResearchElementDefinition.gperf"
    {"characteristic_count", 0x260, 57, -1, {(U8*)"characteristic_count", 20}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 13 "./src/generated/gperf_class_files/ResearchElementDefinition.gperf"
    {"implicitRules", 0x20, 3, -1, {(U8*)"implicitRules", 13}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 31 "./src/generated/gperf_class_files/ResearchElementDefinition.gperf"
    {"experimental", 0xf8, 21, -1, {(U8*)"experimental", 12}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 48 "./src/generated/gperf_class_files/ResearchElementDefinition.gperf"
    {"approvalDate", 0x1a8, 38, -1, {(U8*)"approvalDate", 12}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown}
  };

static const signed char lookup[] =
  {
    -1, -1,  0, -1, -1, -1, -1,  1,  2,  3,  4, -1,  5,  6,
     7,  8,  9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20,
    -1, 21, 22, 23, 24, -1, 25, 26, -1, 27, 28, 29, -1, 30,
    31, 32, 33, -1, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43,
    44, 45, -1, 46, 47, -1, 48, -1, 49, 50, 51, -1, 52, 53,
    54, -1, -1, -1, -1, 55, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, 56, -1, -1, -1, 57,
    -1, -1, -1, -1, 58
  };

const struct fhir_deserialize::MemberNameAndOffset *
ResearchElementDefinition_Gperf::ResearchElementDefinition_MemberLookup (register const char *str, register unsigned int len)
{
  if (len <= MAX_WORD_LENGTH && len >= MIN_WORD_LENGTH)
    {
      register int key = hash (str, len);

      if (key <= MAX_HASH_VALUE && key >= 0)
        {
          register int index = lookup[key];

          if (index >= 0)
            {
              register const char *s = word_array_ResearchElementDefinition[index].name;

              if (*str == *s && !strncmp (str + 1, s + 1, len - 1) && s[len] == '\0')
                return &word_array_ResearchElementDefinition[index];
            }
        }
    }
  return 0;
}
