/* C++ code produced by gperf version 3.0.1 */
/* Command-line: gperf.exe -t --output-file=src/gperf_hash_tables/ActivityDefinition-Member-Lookup.cc -CGD ./gperf_class_files/ActivityDefinition.gperf  */
/* Computed positions: -k'1-2,14,$' */

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

#line 8 "./gperf_class_files/ActivityDefinition.gperf"
struct fhir_deserialize::MemberNameAndOffset;
enum
  {
    TOTAL_KEYWORDS = 83,
    MIN_WORD_LENGTH = 2,
    MAX_WORD_LENGTH = 34,
    MIN_HASH_VALUE = 4,
    MAX_HASH_VALUE = 156
  };

/* maximum key range = 153, duplicates = 0 */

class ActivityDefinition_Gperf
{
private:
  static inline unsigned int hash (const char *str, unsigned int len);
public:
  static const struct fhir_deserialize::MemberNameAndOffset *ActivityDefinition_MemberLookup (const char *str, unsigned int len);
};

inline unsigned int
ActivityDefinition_Gperf::hash (register const char *str, register unsigned int len)
{
  static const unsigned char asso_values[] =
    {
      157, 157, 157, 157, 157, 157, 157, 157, 157, 157,
      157, 157, 157, 157, 157, 157, 157, 157, 157, 157,
      157, 157, 157, 157, 157, 157, 157, 157, 157, 157,
      157, 157, 157, 157, 157, 157, 157, 157, 157, 157,
      157, 157, 157, 157, 157, 157, 157, 157, 157, 157,
      157, 157, 157, 157, 157, 157, 157, 157, 157, 157,
      157, 157, 157, 157, 157, 157, 157, 157, 157, 157,
      157, 157, 157, 157, 157, 157, 157, 157, 157, 157,
      157, 157, 157, 157, 157, 157, 157, 157, 157, 157,
      157, 157, 157, 157, 157, 157, 157,  70, 105,  10,
       15,   0,   0,  45, 157,  35,  15,  10,  10,  25,
       40,   5,  40,  10,   0,   0,   0,  70,  30, 157,
       30,  55, 157, 157, 157, 157, 157, 157, 157, 157,
      157, 157, 157, 157, 157, 157, 157, 157, 157, 157,
      157, 157, 157, 157, 157, 157, 157, 157, 157, 157,
      157, 157, 157, 157, 157, 157, 157, 157, 157, 157,
      157, 157, 157, 157, 157, 157, 157, 157, 157, 157,
      157, 157, 157, 157, 157, 157, 157, 157, 157, 157,
      157, 157, 157, 157, 157, 157, 157, 157, 157, 157,
      157, 157, 157, 157, 157, 157, 157, 157, 157, 157,
      157, 157, 157, 157, 157, 157, 157, 157, 157, 157,
      157, 157, 157, 157, 157, 157, 157, 157, 157, 157,
      157, 157, 157, 157, 157, 157, 157, 157, 157, 157,
      157, 157, 157, 157, 157, 157, 157, 157, 157, 157,
      157, 157, 157, 157, 157, 157, 157, 157, 157, 157,
      157, 157, 157, 157, 157, 157
    };
  register int hval = len;

  switch (hval)
    {
      default:
        hval += asso_values[(unsigned char)str[13]];
      /*FALLTHROUGH*/
      case 13:
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
      /*FALLTHROUGH*/
      case 1:
        hval += asso_values[(unsigned char)str[0]];
        break;
    }
  return hval + asso_values[(unsigned char)str[len - 1]];
}

static const struct fhir_deserialize::MemberNameAndOffset word_array_ActivityDefinition[] =
  {
#line 15 "./gperf_class_files/ActivityDefinition.gperf"
    {"text", 0x40, 5, -1},
#line 29 "./gperf_class_files/ActivityDefinition.gperf"
    {"status", 0xd8, 19, -1},
#line 55 "./gperf_class_files/ActivityDefinition.gperf"
    {"reviewer", 0x1e8, 45, -1},
#line 10 "./gperf_class_files/ActivityDefinition.gperf"
    {"resourceType", 0x0, 0, -1},
#line 54 "./gperf_class_files/ActivityDefinition.gperf"
    {"reviewer_count", 0x1e0, 44, -1},
#line 48 "./gperf_class_files/ActivityDefinition.gperf"
    {"topic_count", 0x1b0, 38, -1},
#line 64 "./gperf_class_files/ActivityDefinition.gperf"
    {"code", 0x240, 54, -1},
#line 49 "./gperf_class_files/ActivityDefinition.gperf"
    {"topic", 0x1b8, 39, -1},
#line 53 "./gperf_class_files/ActivityDefinition.gperf"
    {"editor", 0x1d8, 43, -1},
#line 36 "./gperf_class_files/ActivityDefinition.gperf"
    {"contact", 0x120, 26, -1},
#line 44 "./gperf_class_files/ActivityDefinition.gperf"
    {"copyright", 0x178, 34, -1},
#line 59 "./gperf_class_files/ActivityDefinition.gperf"
    {"relatedArtifact", 0x208, 49, -1},
#line 81 "./gperf_class_files/ActivityDefinition.gperf"
    {"dosage", 0x2b8, 67, -1},
#line 52 "./gperf_class_files/ActivityDefinition.gperf"
    {"editor_count", 0x1d0, 42, -1},
#line 35 "./gperf_class_files/ActivityDefinition.gperf"
    {"contact_count", 0x118, 25, -1},
#line 58 "./gperf_class_files/ActivityDefinition.gperf"
    {"relatedArtifact_count", 0x200, 48, -1},
#line 80 "./gperf_class_files/ActivityDefinition.gperf"
    {"dosage_count", 0x2b0, 66, -1},
#line 90 "./gperf_class_files/ActivityDefinition.gperf"
    {"transform", 0x300, 76, -1},
#line 47 "./gperf_class_files/ActivityDefinition.gperf"
    {"effectivePeriod", 0x1a8, 37, -1},
#line 17 "./gperf_class_files/ActivityDefinition.gperf"
    {"contained", 0x50, 7, -1},
#line 27 "./gperf_class_files/ActivityDefinition.gperf"
    {"title", 0xb8, 17, -1},
#line 70 "./gperf_class_files/ActivityDefinition.gperf"
    {"timingAge", 0x270, 59, 2},
#line 72 "./gperf_class_files/ActivityDefinition.gperf"
    {"timingRange", 0x270, 59, 4},
#line 63 "./gperf_class_files/ActivityDefinition.gperf"
    {"profile", 0x230, 53, -1},
#line 57 "./gperf_class_files/ActivityDefinition.gperf"
    {"endorser", 0x1f8, 47, -1},
#line 69 "./gperf_class_files/ActivityDefinition.gperf"
    {"timingDateTime", 0x270, 59, 1},
#line 30 "./gperf_class_files/ActivityDefinition.gperf"
    {"experimental", 0xe8, 20, -1},
#line 20 "./gperf_class_files/ActivityDefinition.gperf"
    {"modifierExtension_count", 0x68, 10, -1},
#line 56 "./gperf_class_files/ActivityDefinition.gperf"
    {"endorser_count", 0x1f0, 46, -1},
#line 67 "./gperf_class_files/ActivityDefinition.gperf"
    {"doNotPerform", 0x268, 57, -1},
#line 60 "./gperf_class_files/ActivityDefinition.gperf"
    {"library_count", 0x210, 50, -1},
#line 85 "./gperf_class_files/ActivityDefinition.gperf"
    {"specimenRequirement", 0x2d8, 71, -1},
#line 24 "./gperf_class_files/ActivityDefinition.gperf"
    {"identifier", 0x90, 14, -1},
#line 71 "./gperf_class_files/ActivityDefinition.gperf"
    {"timingPeriod", 0x270, 59, 3},
#line 74 "./gperf_class_files/ActivityDefinition.gperf"
    {"location", 0x280, 60, -1},
#line 62 "./gperf_class_files/ActivityDefinition.gperf"
    {"kind", 0x220, 52, -1},
#line 84 "./gperf_class_files/ActivityDefinition.gperf"
    {"specimenRequirement_count", 0x2d0, 70, -1},
#line 37 "./gperf_class_files/ActivityDefinition.gperf"
    {"description", 0x128, 27, -1},
#line 11 "./gperf_class_files/ActivityDefinition.gperf"
    {"id", 0x8, 1, -1},
#line 16 "./gperf_class_files/ActivityDefinition.gperf"
    {"contained_count", 0x48, 6, -1},
#line 78 "./gperf_class_files/ActivityDefinition.gperf"
    {"productCodeableConcept", 0x2a0, 64, 1},
#line 13 "./gperf_class_files/ActivityDefinition.gperf"
    {"implicitRules", 0x20, 3, -1},
#line 43 "./gperf_class_files/ActivityDefinition.gperf"
    {"usage", 0x168, 33, -1},
#line 25 "./gperf_class_files/ActivityDefinition.gperf"
    {"version", 0x98, 15, -1},
#line 28 "./gperf_class_files/ActivityDefinition.gperf"
    {"subtitle", 0xc8, 18, -1},
#line 19 "./gperf_class_files/ActivityDefinition.gperf"
    {"extension", 0x60, 9, -1},
#line 39 "./gperf_class_files/ActivityDefinition.gperf"
    {"useContext", 0x140, 29, -1},
#line 65 "./gperf_class_files/ActivityDefinition.gperf"
    {"intent", 0x248, 55, -1},
#line 92 "./gperf_class_files/ActivityDefinition.gperf"
    {"dynamicValue", 0x318, 78, -1},
#line 22 "./gperf_class_files/ActivityDefinition.gperf"
    {"url", 0x78, 12, -1},
#line 18 "./gperf_class_files/ActivityDefinition.gperf"
    {"extension_count", 0x58, 8, -1},
#line 21 "./gperf_class_files/ActivityDefinition.gperf"
    {"modifierExtension", 0x70, 11, -1},
#line 14 "./gperf_class_files/ActivityDefinition.gperf"
    {"language", 0x30, 4, -1},
#line 33 "./gperf_class_files/ActivityDefinition.gperf"
    {"date", 0xf8, 23, -1},
#line 68 "./gperf_class_files/ActivityDefinition.gperf"
    {"timingTiming", 0x270, 59, 0},
#line 46 "./gperf_class_files/ActivityDefinition.gperf"
    {"lastReviewDate", 0x198, 36, -1},
#line 77 "./gperf_class_files/ActivityDefinition.gperf"
    {"productReference", 0x2a0, 64, 0},
#line 91 "./gperf_class_files/ActivityDefinition.gperf"
    {"dynamicValue_count", 0x310, 77, -1},
#line 12 "./gperf_class_files/ActivityDefinition.gperf"
    {"meta", 0x18, 2, -1},
#line 31 "./gperf_class_files/ActivityDefinition.gperf"
    {"subjectCodeableConcept", 0xf0, 22, 0},
#line 66 "./gperf_class_files/ActivityDefinition.gperf"
    {"priority", 0x258, 56, -1},
#line 61 "./gperf_class_files/ActivityDefinition.gperf"
    {"library", 0x218, 51, -1},
#line 40 "./gperf_class_files/ActivityDefinition.gperf"
    {"jurisdiction_count", 0x148, 30, -1},
#line 26 "./gperf_class_files/ActivityDefinition.gperf"
    {"name", 0xa8, 16, -1},
#line 42 "./gperf_class_files/ActivityDefinition.gperf"
    {"purpose", 0x158, 32, -1},
#line 83 "./gperf_class_files/ActivityDefinition.gperf"
    {"bodySite", 0x2c8, 69, -1},
#line 34 "./gperf_class_files/ActivityDefinition.gperf"
    {"publisher", 0x108, 24, -1},
#line 76 "./gperf_class_files/ActivityDefinition.gperf"
    {"participant", 0x290, 62, -1},
#line 45 "./gperf_class_files/ActivityDefinition.gperf"
    {"approvalDate", 0x188, 35, -1},
#line 82 "./gperf_class_files/ActivityDefinition.gperf"
    {"bodySite_count", 0x2c0, 68, -1},
#line 32 "./gperf_class_files/ActivityDefinition.gperf"
    {"subjectReference", 0xf0, 22, 1},
#line 73 "./gperf_class_files/ActivityDefinition.gperf"
    {"timingDuration", 0x270, 59, 5},
#line 75 "./gperf_class_files/ActivityDefinition.gperf"
    {"participant_count", 0x288, 61, -1},
#line 23 "./gperf_class_files/ActivityDefinition.gperf"
    {"identifier_count", 0x88, 13, -1},
#line 41 "./gperf_class_files/ActivityDefinition.gperf"
    {"jurisdiction", 0x150, 31, -1},
#line 89 "./gperf_class_files/ActivityDefinition.gperf"
    {"observationResultRequirement", 0x2f8, 75, -1},
#line 87 "./gperf_class_files/ActivityDefinition.gperf"
    {"observationRequirement", 0x2e8, 73, -1},
#line 79 "./gperf_class_files/ActivityDefinition.gperf"
    {"quantity", 0x2a8, 65, -1},
#line 88 "./gperf_class_files/ActivityDefinition.gperf"
    {"observationResultRequirement_count", 0x2f0, 74, -1},
#line 51 "./gperf_class_files/ActivityDefinition.gperf"
    {"author", 0x1c8, 41, -1},
#line 86 "./gperf_class_files/ActivityDefinition.gperf"
    {"observationRequirement_count", 0x2e0, 72, -1},
#line 50 "./gperf_class_files/ActivityDefinition.gperf"
    {"author_count", 0x1c0, 40, -1},
#line 38 "./gperf_class_files/ActivityDefinition.gperf"
    {"useContext_count", 0x138, 28, -1}
  };

static const signed char lookup[] =
  {
    -1, -1, -1, -1,  0, -1,  1, -1,  2, -1, -1, -1,  3, -1,
     4, -1,  5, -1, -1,  6,  7,  8,  9, -1, 10, 11, 12, 13,
    14, -1, -1, 15, 16, -1, 17, 18, -1, -1, -1, 19, 20, -1,
    -1, -1, 21, -1, 22, 23, 24, 25, -1, -1, 26, 27, 28, -1,
    -1, 29, 30, 31, 32, -1, 33, 34, 35, 36, 37, 38, -1, -1,
    39, -1, 40, 41, -1, 42, -1, 43, 44, 45, 46, 47, 48, 49,
    -1, 50, -1, 51, 52, 53, -1, -1, 54, -1, 55, -1, 56, -1,
    57, 58, -1, -1, 59, 60, -1, -1, -1, 61, -1, -1, -1, -1,
    -1, 62, 63, -1, -1, 64, 65, 66, -1, 67, 68, -1, 69, -1,
    70, -1, -1, 71, -1, -1, 72, -1, -1, -1, 73, 74, 75, -1,
    -1, -1, 76, 77, 78, -1, 79, -1, 80, -1, -1, -1, 81, -1,
    -1, -1, 82
  };

const struct fhir_deserialize::MemberNameAndOffset *
ActivityDefinition_Gperf::ActivityDefinition_MemberLookup (register const char *str, register unsigned int len)
{
  if (len <= MAX_WORD_LENGTH && len >= MIN_WORD_LENGTH)
    {
      register int key = hash (str, len);

      if (key <= MAX_HASH_VALUE && key >= 0)
        {
          register int index = lookup[key];

          if (index >= 0)
            {
              register const char *s = word_array_ActivityDefinition[index].name;

              if (*str == *s && !strncmp (str + 1, s + 1, len - 1) && s[len] == '\0')
                return &word_array_ActivityDefinition[index];
            }
        }
    }
  return 0;
}
