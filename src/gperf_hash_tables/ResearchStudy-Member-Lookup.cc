/* C++ code produced by gperf version 3.0.1 */
/* Command-line: gperf.exe -t --output-file=src/gperf_hash_tables/ResearchStudy-Member-Lookup.cc -CGD ./gperf_class_files/ResearchStudy.gperf  */
/* Computed positions: -k'1,4' */

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

#line 8 "./gperf_class_files/ResearchStudy.gperf"
struct fhir_deserialize::MemberNameAndOffset;
enum
  {
    TOTAL_KEYWORDS = 51,
    MIN_WORD_LENGTH = 2,
    MAX_WORD_LENGTH = 23,
    MIN_HASH_VALUE = 4,
    MAX_HASH_VALUE = 84
  };

/* maximum key range = 81, duplicates = 0 */

class ResearchStudy_Gperf
{
private:
  static inline unsigned int hash (const char *str, unsigned int len);
public:
  static const struct fhir_deserialize::MemberNameAndOffset *ResearchStudy_MemberLookup (const char *str, unsigned int len);
};

inline unsigned int
ResearchStudy_Gperf::hash (register const char *str, register unsigned int len)
{
  static const unsigned char asso_values[] =
    {
      85, 85, 85, 85, 85, 85, 85, 85, 85, 85,
      85, 85, 85, 85, 85, 85, 85, 85, 85, 85,
      85, 85, 85, 85, 85, 85, 85, 85, 85, 85,
      85, 85, 85, 85, 85, 85, 85, 85, 85, 85,
      85, 85, 85, 85, 85, 85, 85, 85, 85, 85,
      85, 85, 85, 85, 85, 85, 85, 85, 85, 85,
      85, 85, 85, 85, 85, 85, 85, 85, 85, 85,
      85, 85, 85, 85, 85, 85, 85, 85, 85, 85,
      85, 85, 85, 85, 85, 85, 85, 85, 85, 85,
      85, 85, 85, 85, 85,  0, 85, 50, 85, 10,
      20,  0,  5, 20, 85, 20, 85,  0,  0, 30,
      30, 40,  0, 85,  0, 25,  0,  0, 85,  0,
      85, 85, 85, 85, 85, 85, 85, 85, 85, 85,
      85, 85, 85, 85, 85, 85, 85, 85, 85, 85,
      85, 85, 85, 85, 85, 85, 85, 85, 85, 85,
      85, 85, 85, 85, 85, 85, 85, 85, 85, 85,
      85, 85, 85, 85, 85, 85, 85, 85, 85, 85,
      85, 85, 85, 85, 85, 85, 85, 85, 85, 85,
      85, 85, 85, 85, 85, 85, 85, 85, 85, 85,
      85, 85, 85, 85, 85, 85, 85, 85, 85, 85,
      85, 85, 85, 85, 85, 85, 85, 85, 85, 85,
      85, 85, 85, 85, 85, 85, 85, 85, 85, 85,
      85, 85, 85, 85, 85, 85, 85, 85, 85, 85,
      85, 85, 85, 85, 85, 85, 85, 85, 85, 85,
      85, 85, 85, 85, 85, 85, 85, 85, 85, 85,
      85, 85, 85, 85, 85, 85
    };
  register int hval = len;

  switch (hval)
    {
      default:
        hval += asso_values[(unsigned char)str[3]];
      /*FALLTHROUGH*/
      case 3:
      case 2:
      case 1:
        hval += asso_values[(unsigned char)str[0]];
        break;
    }
  return hval;
}

static const struct fhir_deserialize::MemberNameAndOffset word_array_ResearchStudy[] =
  {
#line 15 "./gperf_class_files/ResearchStudy.gperf"
    {"text", 0x40, 5, -1},
#line 24 "./gperf_class_files/ResearchStudy.gperf"
    {"title", 0x88, 14, -1},
#line 28 "./gperf_class_files/ResearchStudy.gperf"
    {"partOf", 0xb0, 18, -1},
#line 43 "./gperf_class_files/ResearchStudy.gperf"
    {"keyword", 0x130, 33, -1},
#line 26 "./gperf_class_files/ResearchStudy.gperf"
    {"protocol", 0xa0, 16, -1},
#line 19 "./gperf_class_files/ResearchStudy.gperf"
    {"extension", 0x60, 9, -1},
#line 35 "./gperf_class_files/ResearchStudy.gperf"
    {"focus", 0xf0, 25, -1},
#line 27 "./gperf_class_files/ResearchStudy.gperf"
    {"partOf_count", 0xa8, 17, -1},
#line 42 "./gperf_class_files/ResearchStudy.gperf"
    {"keyword_count", 0x128, 32, -1},
#line 25 "./gperf_class_files/ResearchStudy.gperf"
    {"protocol_count", 0x98, 15, -1},
#line 18 "./gperf_class_files/ResearchStudy.gperf"
    {"extension_count", 0x58, 8, -1},
#line 34 "./gperf_class_files/ResearchStudy.gperf"
    {"focus_count", 0xe8, 24, -1},
#line 39 "./gperf_class_files/ResearchStudy.gperf"
    {"contact", 0x110, 29, -1},
#line 33 "./gperf_class_files/ResearchStudy.gperf"
    {"category", 0xe0, 23, -1},
#line 17 "./gperf_class_files/ResearchStudy.gperf"
    {"contained", 0x50, 7, -1},
#line 11 "./gperf_class_files/ResearchStudy.gperf"
    {"id", 0x8, 1, -1},
#line 38 "./gperf_class_files/ResearchStudy.gperf"
    {"contact_count", 0x108, 28, -1},
#line 32 "./gperf_class_files/ResearchStudy.gperf"
    {"category_count", 0xd8, 22, -1},
#line 16 "./gperf_class_files/ResearchStudy.gperf"
    {"contained_count", 0x48, 6, -1},
#line 49 "./gperf_class_files/ResearchStudy.gperf"
    {"period", 0x168, 39, -1},
#line 14 "./gperf_class_files/ResearchStudy.gperf"
    {"language", 0x30, 4, -1},
#line 53 "./gperf_class_files/ResearchStudy.gperf"
    {"site", 0x188, 43, -1},
#line 31 "./gperf_class_files/ResearchStudy.gperf"
    {"phase", 0xd0, 21, -1},
#line 29 "./gperf_class_files/ResearchStudy.gperf"
    {"status", 0xb8, 19, -1},
#line 13 "./gperf_class_files/ResearchStudy.gperf"
    {"implicitRules", 0x20, 3, -1},
#line 56 "./gperf_class_files/ResearchStudy.gperf"
    {"note", 0x1a0, 46, -1},
#line 52 "./gperf_class_files/ResearchStudy.gperf"
    {"site_count", 0x180, 42, -1},
#line 54 "./gperf_class_files/ResearchStudy.gperf"
    {"reasonStopped", 0x190, 44, -1},
#line 37 "./gperf_class_files/ResearchStudy.gperf"
    {"condition", 0x100, 27, -1},
#line 55 "./gperf_class_files/ResearchStudy.gperf"
    {"note_count", 0x198, 45, -1},
#line 46 "./gperf_class_files/ResearchStudy.gperf"
    {"description", 0x148, 36, -1},
#line 36 "./gperf_class_files/ResearchStudy.gperf"
    {"condition_count", 0xf8, 26, -1},
#line 30 "./gperf_class_files/ResearchStudy.gperf"
    {"primaryPurposeType", 0xc8, 20, -1},
#line 60 "./gperf_class_files/ResearchStudy.gperf"
    {"objective", 0x1c0, 50, -1},
#line 48 "./gperf_class_files/ResearchStudy.gperf"
    {"enrollment", 0x160, 38, -1},
#line 51 "./gperf_class_files/ResearchStudy.gperf"
    {"principalInvestigator", 0x178, 41, -1},
#line 10 "./gperf_class_files/ResearchStudy.gperf"
    {"resourceType", 0x0, 0, -1},
#line 58 "./gperf_class_files/ResearchStudy.gperf"
    {"arm", 0x1b0, 48, -1},
#line 59 "./gperf_class_files/ResearchStudy.gperf"
    {"objective_count", 0x1b8, 49, -1},
#line 47 "./gperf_class_files/ResearchStudy.gperf"
    {"enrollment_count", 0x158, 37, -1},
#line 45 "./gperf_class_files/ResearchStudy.gperf"
    {"location", 0x140, 35, -1},
#line 57 "./gperf_class_files/ResearchStudy.gperf"
    {"arm_count", 0x1a8, 47, -1},
#line 23 "./gperf_class_files/ResearchStudy.gperf"
    {"identifier", 0x80, 13, -1},
#line 50 "./gperf_class_files/ResearchStudy.gperf"
    {"sponsor", 0x170, 40, -1},
#line 44 "./gperf_class_files/ResearchStudy.gperf"
    {"location_count", 0x138, 34, -1},
#line 41 "./gperf_class_files/ResearchStudy.gperf"
    {"relatedArtifact", 0x120, 31, -1},
#line 22 "./gperf_class_files/ResearchStudy.gperf"
    {"identifier_count", 0x78, 12, -1},
#line 21 "./gperf_class_files/ResearchStudy.gperf"
    {"modifierExtension", 0x70, 11, -1},
#line 40 "./gperf_class_files/ResearchStudy.gperf"
    {"relatedArtifact_count", 0x118, 30, -1},
#line 20 "./gperf_class_files/ResearchStudy.gperf"
    {"modifierExtension_count", 0x68, 10, -1},
#line 12 "./gperf_class_files/ResearchStudy.gperf"
    {"meta", 0x18, 2, -1}
  };

static const signed char lookup[] =
  {
    -1, -1, -1, -1,  0,  1,  2,  3,  4,  5,  6, -1,  7,  8,
     9, 10, 11, 12, 13, 14, -1, -1, 15, 16, 17, 18, 19, -1,
    20, 21, 22, 23, -1, 24, 25, 26, -1, -1, 27, 28, 29, 30,
    -1, -1, -1, 31, -1, -1, 32, 33, 34, 35, 36, 37, -1, 38,
    39, -1, 40, 41, 42, -1, 43, -1, 44, 45, 46, 47, -1, -1,
    -1, 48, -1, 49, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    50
  };

const struct fhir_deserialize::MemberNameAndOffset *
ResearchStudy_Gperf::ResearchStudy_MemberLookup (register const char *str, register unsigned int len)
{
  if (len <= MAX_WORD_LENGTH && len >= MIN_WORD_LENGTH)
    {
      register int key = hash (str, len);

      if (key <= MAX_HASH_VALUE && key >= 0)
        {
          register int index = lookup[key];

          if (index >= 0)
            {
              register const char *s = word_array_ResearchStudy[index].name;

              if (*str == *s && !strncmp (str + 1, s + 1, len - 1) && s[len] == '\0')
                return &word_array_ResearchStudy[index];
            }
        }
    }
  return 0;
}
