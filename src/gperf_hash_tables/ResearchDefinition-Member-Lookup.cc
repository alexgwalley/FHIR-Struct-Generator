/* C++ code produced by gperf version 3.0.1 */
/* Command-line: gperf.exe -t --output-file=src/gperf_hash_tables/ResearchDefinition-Member-Lookup.cc -CGD ./gperf_class_files/ResearchDefinition.gperf  */
/* Computed positions: -k'3-4' */

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

#line 8 "./gperf_class_files/ResearchDefinition.gperf"
struct fhir_deserialize::MemberNameAndOffset;
enum
  {
    TOTAL_KEYWORDS = 59,
    MIN_WORD_LENGTH = 2,
    MAX_WORD_LENGTH = 23,
    MIN_HASH_VALUE = 2,
    MAX_HASH_VALUE = 94
  };

/* maximum key range = 93, duplicates = 0 */

class ResearchDefinition_Gperf
{
private:
  static inline unsigned int hash (const char *str, unsigned int len);
public:
  static const struct fhir_deserialize::MemberNameAndOffset *ResearchDefinition_MemberLookup (const char *str, unsigned int len);
};

inline unsigned int
ResearchDefinition_Gperf::hash (register const char *str, register unsigned int len)
{
  static const unsigned char asso_values[] =
    {
      95, 95, 95, 95, 95, 95, 95, 95, 95, 95,
      95, 95, 95, 95, 95, 95, 95, 95, 95, 95,
      95, 95, 95, 95, 95, 95, 95, 95, 95, 95,
      95, 95, 95, 95, 95, 95, 95, 95, 95, 95,
      95, 95, 95, 95, 95, 95, 95, 95, 95, 95,
      95, 95, 95, 95, 95, 95, 95, 95, 95, 95,
      95, 95, 95, 95, 95, 95, 95, 50, 95, 95,
      95, 95, 95, 95, 95, 95, 95, 95, 95, 95,
      95, 95, 95, 95, 95, 95, 95, 95, 95, 95,
      95, 95, 95, 95, 95, 95, 95, 15, 60,  0,
      35,  0, 50, 30, 35,  5,  0, 95, 25,  0,
       5, 25, 20, 95, 10, 30,  5, 10, 25, 95,
      25,  0, 95, 95, 95, 95, 95, 95, 95, 95,
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
        hval += asso_values[(unsigned char)str[3]];
      /*FALLTHROUGH*/
      case 3:
        hval += asso_values[(unsigned char)str[2]];
      /*FALLTHROUGH*/
      case 2:
        break;
    }
  return hval;
}

static const struct fhir_deserialize::MemberNameAndOffset word_array_ResearchDefinition[] =
  {
#line 11 "./gperf_class_files/ResearchDefinition.gperf"
    {"id", 0x8, 1, -1},
#line 26 "./gperf_class_files/ResearchDefinition.gperf"
    {"name", 0xa8, 16, -1},
#line 40 "./gperf_class_files/ResearchDefinition.gperf"
    {"comment", 0x150, 30, -1},
#line 34 "./gperf_class_files/ResearchDefinition.gperf"
    {"date", 0x108, 24, -1},
#line 68 "./gperf_class_files/ResearchDefinition.gperf"
    {"outcome", 0x258, 58, -1},
#line 39 "./gperf_class_files/ResearchDefinition.gperf"
    {"comment_count", 0x148, 29, -1},
#line 19 "./gperf_class_files/ResearchDefinition.gperf"
    {"extension", 0x60, 9, -1},
#line 24 "./gperf_class_files/ResearchDefinition.gperf"
    {"identifier", 0x90, 14, -1},
#line 56 "./gperf_class_files/ResearchDefinition.gperf"
    {"editor", 0x1f8, 46, -1},
#line 37 "./gperf_class_files/ResearchDefinition.gperf"
    {"contact", 0x130, 27, -1},
#line 17 "./gperf_class_files/ResearchDefinition.gperf"
    {"contained", 0x50, 7, -1},
#line 18 "./gperf_class_files/ResearchDefinition.gperf"
    {"extension_count", 0x58, 8, -1},
#line 23 "./gperf_class_files/ResearchDefinition.gperf"
    {"identifier_count", 0x88, 13, -1},
#line 55 "./gperf_class_files/ResearchDefinition.gperf"
    {"editor_count", 0x1f0, 45, -1},
#line 36 "./gperf_class_files/ResearchDefinition.gperf"
    {"contact_count", 0x128, 26, -1},
#line 12 "./gperf_class_files/ResearchDefinition.gperf"
    {"meta", 0x18, 2, -1},
#line 16 "./gperf_class_files/ResearchDefinition.gperf"
    {"contained_count", 0x48, 6, -1},
#line 30 "./gperf_class_files/ResearchDefinition.gperf"
    {"status", 0xe8, 20, -1},
#line 44 "./gperf_class_files/ResearchDefinition.gperf"
    {"jurisdiction", 0x170, 34, -1},
#line 22 "./gperf_class_files/ResearchDefinition.gperf"
    {"url", 0x78, 12, -1},
#line 47 "./gperf_class_files/ResearchDefinition.gperf"
    {"copyright", 0x198, 37, -1},
#line 52 "./gperf_class_files/ResearchDefinition.gperf"
    {"topic", 0x1d8, 42, -1},
#line 31 "./gperf_class_files/ResearchDefinition.gperf"
    {"experimental", 0xf8, 21, -1},
#line 43 "./gperf_class_files/ResearchDefinition.gperf"
    {"jurisdiction_count", 0x168, 33, -1},
#line 15 "./gperf_class_files/ResearchDefinition.gperf"
    {"text", 0x40, 5, -1},
#line 27 "./gperf_class_files/ResearchDefinition.gperf"
    {"title", 0xb8, 17, -1},
#line 51 "./gperf_class_files/ResearchDefinition.gperf"
    {"topic_count", 0x1d0, 41, -1},
#line 45 "./gperf_class_files/ResearchDefinition.gperf"
    {"purpose", 0x178, 35, -1},
#line 58 "./gperf_class_files/ResearchDefinition.gperf"
    {"reviewer", 0x208, 48, -1},
#line 65 "./gperf_class_files/ResearchDefinition.gperf"
    {"population", 0x240, 55, -1},
#line 38 "./gperf_class_files/ResearchDefinition.gperf"
    {"description", 0x138, 28, -1},
#line 48 "./gperf_class_files/ResearchDefinition.gperf"
    {"approvalDate", 0x1a8, 38, -1},
#line 14 "./gperf_class_files/ResearchDefinition.gperf"
    {"language", 0x30, 4, -1},
#line 57 "./gperf_class_files/ResearchDefinition.gperf"
    {"reviewer_count", 0x200, 47, -1},
#line 28 "./gperf_class_files/ResearchDefinition.gperf"
    {"shortTitle", 0xc8, 18, -1},
#line 54 "./gperf_class_files/ResearchDefinition.gperf"
    {"author", 0x1e8, 44, -1},
#line 25 "./gperf_class_files/ResearchDefinition.gperf"
    {"version", 0x98, 15, -1},
#line 49 "./gperf_class_files/ResearchDefinition.gperf"
    {"lastReviewDate", 0x1b8, 39, -1},
#line 46 "./gperf_class_files/ResearchDefinition.gperf"
    {"usage", 0x188, 36, -1},
#line 53 "./gperf_class_files/ResearchDefinition.gperf"
    {"author_count", 0x1e0, 43, -1},
#line 66 "./gperf_class_files/ResearchDefinition.gperf"
    {"exposure", 0x248, 56, -1},
#line 62 "./gperf_class_files/ResearchDefinition.gperf"
    {"relatedArtifact", 0x228, 52, -1},
#line 21 "./gperf_class_files/ResearchDefinition.gperf"
    {"modifierExtension", 0x70, 11, -1},
#line 13 "./gperf_class_files/ResearchDefinition.gperf"
    {"implicitRules", 0x20, 3, -1},
#line 42 "./gperf_class_files/ResearchDefinition.gperf"
    {"useContext", 0x160, 32, -1},
#line 61 "./gperf_class_files/ResearchDefinition.gperf"
    {"relatedArtifact_count", 0x220, 51, -1},
#line 20 "./gperf_class_files/ResearchDefinition.gperf"
    {"modifierExtension_count", 0x68, 10, -1},
#line 67 "./gperf_class_files/ResearchDefinition.gperf"
    {"exposureAlternative", 0x250, 57, -1},
#line 50 "./gperf_class_files/ResearchDefinition.gperf"
    {"effectivePeriod", 0x1c8, 40, -1},
#line 41 "./gperf_class_files/ResearchDefinition.gperf"
    {"useContext_count", 0x158, 31, -1},
#line 10 "./gperf_class_files/ResearchDefinition.gperf"
    {"resourceType", 0x0, 0, -1},
#line 60 "./gperf_class_files/ResearchDefinition.gperf"
    {"endorser", 0x218, 50, -1},
#line 29 "./gperf_class_files/ResearchDefinition.gperf"
    {"subtitle", 0xd8, 19, -1},
#line 59 "./gperf_class_files/ResearchDefinition.gperf"
    {"endorser_count", 0x210, 49, -1},
#line 33 "./gperf_class_files/ResearchDefinition.gperf"
    {"subjectReference", 0x100, 23, 1},
#line 64 "./gperf_class_files/ResearchDefinition.gperf"
    {"library", 0x238, 54, -1},
#line 32 "./gperf_class_files/ResearchDefinition.gperf"
    {"subjectCodeableConcept", 0x100, 23, 0},
#line 63 "./gperf_class_files/ResearchDefinition.gperf"
    {"library_count", 0x230, 53, -1},
#line 35 "./gperf_class_files/ResearchDefinition.gperf"
    {"publisher", 0x118, 25, -1}
  };

static const signed char lookup[] =
  {
    -1, -1,  0, -1,  1, -1, -1,  2, -1,  3, -1, -1,  4,  5,
     6,  7,  8,  9, -1, 10, 11, 12, 13, 14, 15, 16, 17, 18,
    19, 20, 21, -1, 22, 23, 24, 25, 26, 27, 28, -1, 29, 30,
    31, 32, 33, 34, 35, 36, -1, 37, 38, -1, 39, 40, -1, 41,
    -1, 42, 43, -1, 44, 45, -1, 46, 47, 48, 49, 50, 51, -1,
    -1, -1, -1, 52, 53, -1, 54, 55, -1, -1, -1, -1, 56, 57,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 58
  };

const struct fhir_deserialize::MemberNameAndOffset *
ResearchDefinition_Gperf::ResearchDefinition_MemberLookup (register const char *str, register unsigned int len)
{
  if (len <= MAX_WORD_LENGTH && len >= MIN_WORD_LENGTH)
    {
      register int key = hash (str, len);

      if (key <= MAX_HASH_VALUE && key >= 0)
        {
          register int index = lookup[key];

          if (index >= 0)
            {
              register const char *s = word_array_ResearchDefinition[index].name;

              if (*str == *s && !strncmp (str + 1, s + 1, len - 1) && s[len] == '\0')
                return &word_array_ResearchDefinition[index];
            }
        }
    }
  return 0;
}
