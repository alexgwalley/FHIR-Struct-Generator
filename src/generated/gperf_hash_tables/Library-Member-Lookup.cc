/* C++ code produced by gperf version 3.0.1 */
/* Command-line: gperf.exe -t --output-file=src/generated/gperf_hash_tables/Library-Member-Lookup.cc -CGD ./src/generated/gperf_class_files/Library.gperf  */
/* Computed positions: -k'2-3,5' */

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

#line 8 "./src/generated/gperf_class_files/Library.gperf"
struct fhir_deserialize::MemberNameAndOffset;
enum
  {
    TOTAL_KEYWORDS = 57,
    MIN_WORD_LENGTH = 2,
    MAX_WORD_LENGTH = 23,
    MIN_HASH_VALUE = 4,
    MAX_HASH_VALUE = 100
  };

/* maximum key range = 97, duplicates = 0 */

class Library_Gperf
{
private:
  static inline unsigned int hash (const char *str, unsigned int len);
public:
  static const struct fhir_deserialize::MemberNameAndOffset *Library_MemberLookup (const char *str, unsigned int len);
};

inline unsigned int
Library_Gperf::hash (register const char *str, register unsigned int len)
{
  static const unsigned char asso_values[] =
    {
      101, 101, 101, 101, 101, 101, 101, 101, 101, 101,
      101, 101, 101, 101, 101, 101, 101, 101, 101, 101,
      101, 101, 101, 101, 101, 101, 101, 101, 101, 101,
      101, 101, 101, 101, 101, 101, 101, 101, 101, 101,
      101, 101, 101, 101, 101, 101, 101, 101, 101, 101,
      101, 101, 101, 101, 101, 101, 101, 101, 101, 101,
      101, 101, 101, 101, 101, 101, 101, 101, 101, 101,
      101, 101, 101, 101, 101, 101, 101, 101, 101, 101,
      101, 101,  55, 101, 101, 101, 101, 101, 101, 101,
      101, 101, 101, 101, 101, 101, 101,  10,  45,  45,
       35,   0,  20, 101, 101,  35, 101, 101,  50,  20,
        0,   0,  25, 101,  15,  20,   0,   0,  55, 101,
       35,   0, 101, 101, 101, 101, 101, 101, 101, 101,
      101, 101, 101, 101, 101, 101, 101, 101, 101, 101,
      101, 101, 101, 101, 101, 101, 101, 101, 101, 101,
      101, 101, 101, 101, 101, 101, 101, 101, 101, 101,
      101, 101, 101, 101, 101, 101, 101, 101, 101, 101,
      101, 101, 101, 101, 101, 101, 101, 101, 101, 101,
      101, 101, 101, 101, 101, 101, 101, 101, 101, 101,
      101, 101, 101, 101, 101, 101, 101, 101, 101, 101,
      101, 101, 101, 101, 101, 101, 101, 101, 101, 101,
      101, 101, 101, 101, 101, 101, 101, 101, 101, 101,
      101, 101, 101, 101, 101, 101, 101, 101, 101, 101,
      101, 101, 101, 101, 101, 101, 101, 101, 101, 101,
      101, 101, 101, 101, 101, 101, 101, 101, 101, 101,
      101, 101, 101, 101, 101, 101
    };
  register int hval = len;

  switch (hval)
    {
      default:
        hval += asso_values[(unsigned char)str[4]];
      /*FALLTHROUGH*/
      case 4:
      case 3:
        hval += asso_values[(unsigned char)str[2]];
      /*FALLTHROUGH*/
      case 2:
        hval += asso_values[(unsigned char)str[1]];
        break;
    }
  return hval;
}

static const struct fhir_deserialize::MemberNameAndOffset word_array_Library[] =
  {
#line 12 "./src/generated/gperf_class_files/Library.gperf"
    {"meta", 0x18, 2, -1},
#line 52 "./src/generated/gperf_class_files/Library.gperf"
    {"author", 0x1d8, 42, -1},
#line 66 "./src/generated/gperf_class_files/Library.gperf"
    {"content", 0x248, 56, -1},
#line 51 "./src/generated/gperf_class_files/Library.gperf"
    {"author_count", 0x1d0, 41, -1},
#line 65 "./src/generated/gperf_class_files/Library.gperf"
    {"content_count", 0x240, 55, -1},
#line 34 "./src/generated/gperf_class_files/Library.gperf"
    {"date", 0x108, 24, -1},
#line 29 "./src/generated/gperf_class_files/Library.gperf"
    {"status", 0xd8, 19, -1},
#line 37 "./src/generated/gperf_class_files/Library.gperf"
    {"contact", 0x130, 27, -1},
#line 14 "./src/generated/gperf_class_files/Library.gperf"
    {"language", 0x30, 4, -1},
#line 17 "./src/generated/gperf_class_files/Library.gperf"
    {"contained", 0x50, 7, -1},
#line 43 "./src/generated/gperf_class_files/Library.gperf"
    {"purpose", 0x168, 33, -1},
#line 36 "./src/generated/gperf_class_files/Library.gperf"
    {"contact_count", 0x128, 26, -1},
#line 16 "./src/generated/gperf_class_files/Library.gperf"
    {"contained_count", 0x48, 6, -1},
#line 31 "./src/generated/gperf_class_files/Library.gperf"
    {"type", 0xf0, 21, -1},
#line 40 "./src/generated/gperf_class_files/Library.gperf"
    {"useContext", 0x150, 30, -1},
#line 10 "./src/generated/gperf_class_files/Library.gperf"
    {"resourceType", 0x0, 0, -1},
#line 26 "./src/generated/gperf_class_files/Library.gperf"
    {"name", 0xa8, 16, -1},
#line 44 "./src/generated/gperf_class_files/Library.gperf"
    {"usage", 0x178, 34, -1},
#line 39 "./src/generated/gperf_class_files/Library.gperf"
    {"useContext_count", 0x148, 29, -1},
#line 11 "./src/generated/gperf_class_files/Library.gperf"
    {"id", 0x8, 1, -1},
#line 15 "./src/generated/gperf_class_files/Library.gperf"
    {"text", 0x40, 5, -1},
#line 27 "./src/generated/gperf_class_files/Library.gperf"
    {"title", 0xb8, 17, -1},
#line 19 "./src/generated/gperf_class_files/Library.gperf"
    {"extension", 0x60, 9, -1},
#line 24 "./src/generated/gperf_class_files/Library.gperf"
    {"identifier", 0x90, 14, -1},
#line 38 "./src/generated/gperf_class_files/Library.gperf"
    {"description", 0x138, 28, -1},
#line 42 "./src/generated/gperf_class_files/Library.gperf"
    {"jurisdiction", 0x160, 32, -1},
#line 45 "./src/generated/gperf_class_files/Library.gperf"
    {"copyright", 0x188, 35, -1},
#line 18 "./src/generated/gperf_class_files/Library.gperf"
    {"extension_count", 0x58, 8, -1},
#line 23 "./src/generated/gperf_class_files/Library.gperf"
    {"identifier_count", 0x88, 13, -1},
#line 41 "./src/generated/gperf_class_files/Library.gperf"
    {"jurisdiction_count", 0x158, 31, -1},
#line 62 "./src/generated/gperf_class_files/Library.gperf"
    {"parameter", 0x228, 52, -1},
#line 25 "./src/generated/gperf_class_files/Library.gperf"
    {"version", 0x98, 15, -1},
#line 58 "./src/generated/gperf_class_files/Library.gperf"
    {"endorser", 0x208, 48, -1},
#line 61 "./src/generated/gperf_class_files/Library.gperf"
    {"parameter_count", 0x220, 51, -1},
#line 33 "./src/generated/gperf_class_files/Library.gperf"
    {"subjectReference", 0x100, 23, 1},
#line 46 "./src/generated/gperf_class_files/Library.gperf"
    {"approvalDate", 0x198, 36, -1},
#line 56 "./src/generated/gperf_class_files/Library.gperf"
    {"reviewer", 0x1f8, 46, -1},
#line 57 "./src/generated/gperf_class_files/Library.gperf"
    {"endorser_count", 0x200, 47, -1},
#line 60 "./src/generated/gperf_class_files/Library.gperf"
    {"relatedArtifact", 0x218, 50, -1},
#line 32 "./src/generated/gperf_class_files/Library.gperf"
    {"subjectCodeableConcept", 0x100, 23, 0},
#line 22 "./src/generated/gperf_class_files/Library.gperf"
    {"url", 0x78, 12, -1},
#line 55 "./src/generated/gperf_class_files/Library.gperf"
    {"reviewer_count", 0x1f0, 45, -1},
#line 59 "./src/generated/gperf_class_files/Library.gperf"
    {"relatedArtifact_count", 0x210, 49, -1},
#line 21 "./src/generated/gperf_class_files/Library.gperf"
    {"modifierExtension", 0x70, 11, -1},
#line 50 "./src/generated/gperf_class_files/Library.gperf"
    {"topic", 0x1c8, 40, -1},
#line 54 "./src/generated/gperf_class_files/Library.gperf"
    {"editor", 0x1e8, 44, -1},
#line 20 "./src/generated/gperf_class_files/Library.gperf"
    {"modifierExtension_count", 0x68, 10, -1},
#line 64 "./src/generated/gperf_class_files/Library.gperf"
    {"dataRequirement", 0x238, 54, -1},
#line 49 "./src/generated/gperf_class_files/Library.gperf"
    {"topic_count", 0x1c0, 39, -1},
#line 53 "./src/generated/gperf_class_files/Library.gperf"
    {"editor_count", 0x1e0, 43, -1},
#line 63 "./src/generated/gperf_class_files/Library.gperf"
    {"dataRequirement_count", 0x230, 53, -1},
#line 30 "./src/generated/gperf_class_files/Library.gperf"
    {"experimental", 0xe8, 20, -1},
#line 28 "./src/generated/gperf_class_files/Library.gperf"
    {"subtitle", 0xc8, 18, -1},
#line 35 "./src/generated/gperf_class_files/Library.gperf"
    {"publisher", 0x118, 25, -1},
#line 13 "./src/generated/gperf_class_files/Library.gperf"
    {"implicitRules", 0x20, 3, -1},
#line 47 "./src/generated/gperf_class_files/Library.gperf"
    {"lastReviewDate", 0x1a8, 37, -1},
#line 48 "./src/generated/gperf_class_files/Library.gperf"
    {"effectivePeriod", 0x1b8, 38, -1}
  };

static const signed char lookup[] =
  {
    -1, -1, -1, -1,  0, -1,  1,  2, -1, -1, -1, -1,  3,  4,
     5, -1,  6,  7,  8,  9, -1, -1, 10, 11, -1, 12, -1, -1,
    -1, 13, 14, -1, 15, -1, 16, 17, 18, 19, -1, 20, 21, -1,
    -1, -1, 22, 23, 24, 25, -1, 26, 27, 28, -1, 29, 30, -1,
    -1, 31, 32, -1, 33, 34, 35, 36, 37, 38, -1, 39, 40, 41,
    -1, 42, 43, -1, -1, 44, 45, -1, 46, -1, 47, 48, 49, -1,
    -1, -1, 50, 51, 52, 53, -1, -1, -1, 54, -1, -1, -1, -1,
    -1, 55, 56
  };

const struct fhir_deserialize::MemberNameAndOffset *
Library_Gperf::Library_MemberLookup (register const char *str, register unsigned int len)
{
  if (len <= MAX_WORD_LENGTH && len >= MIN_WORD_LENGTH)
    {
      register int key = hash (str, len);

      if (key <= MAX_HASH_VALUE && key >= 0)
        {
          register int index = lookup[key];

          if (index >= 0)
            {
              register const char *s = word_array_Library[index].name;

              if (*str == *s && !strncmp (str + 1, s + 1, len - 1) && s[len] == '\0')
                return &word_array_Library[index];
            }
        }
    }
  return 0;
}
