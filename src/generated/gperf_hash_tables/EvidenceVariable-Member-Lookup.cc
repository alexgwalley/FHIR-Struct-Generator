/* C++ code produced by gperf version 3.0.1 */
/* Command-line: gperf.exe -t --output-file=src/generated/gperf_hash_tables/EvidenceVariable-Member-Lookup.cc -CGD ./src/generated/gperf_class_files/EvidenceVariable.gperf  */
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

#line 8 "./src/generated/gperf_class_files/EvidenceVariable.gperf"
struct fhir_deserialize::MemberNameAndOffset;
enum
  {
    TOTAL_KEYWORDS = 51,
    MIN_WORD_LENGTH = 2,
    MAX_WORD_LENGTH = 23,
    MIN_HASH_VALUE = 2,
    MAX_HASH_VALUE = 85
  };

/* maximum key range = 84, duplicates = 0 */

class EvidenceVariable_Gperf
{
private:
  static inline unsigned int hash (const char *str, unsigned int len);
public:
  static const struct fhir_deserialize::MemberNameAndOffset *EvidenceVariable_MemberLookup (const char *str, unsigned int len);
};

inline unsigned int
EvidenceVariable_Gperf::hash (register const char *str, register unsigned int len)
{
  static const unsigned char asso_values[] =
    {
      86, 86, 86, 86, 86, 86, 86, 86, 86, 86,
      86, 86, 86, 86, 86, 86, 86, 86, 86, 86,
      86, 86, 86, 86, 86, 86, 86, 86, 86, 86,
      86, 86, 86, 86, 86, 86, 86, 86, 86, 86,
      86, 86, 86, 86, 86, 86, 86, 86, 86, 86,
      86, 86, 86, 86, 86, 86, 86, 86, 86, 86,
      86, 86, 86, 86, 86, 86, 86, 86, 86, 86,
      86, 86, 86, 86, 86, 86, 86, 86, 86, 86,
      86, 86, 86, 86, 86, 86, 86, 86, 86, 86,
      86, 86, 86, 86, 86, 86, 86, 20, 45, 86,
       0,  0,  0, 86, 35, 55, 86, 86, 35, 35,
       0, 10,  5, 86, 30, 20, 25, 10, 30, 86,
       0,  0, 86, 86, 86, 86, 86, 86, 86, 86,
      86, 86, 86, 86, 86, 86, 86, 86, 86, 86,
      86, 86, 86, 86, 86, 86, 86, 86, 86, 86,
      86, 86, 86, 86, 86, 86, 86, 86, 86, 86,
      86, 86, 86, 86, 86, 86, 86, 86, 86, 86,
      86, 86, 86, 86, 86, 86, 86, 86, 86, 86,
      86, 86, 86, 86, 86, 86, 86, 86, 86, 86,
      86, 86, 86, 86, 86, 86, 86, 86, 86, 86,
      86, 86, 86, 86, 86, 86, 86, 86, 86, 86,
      86, 86, 86, 86, 86, 86, 86, 86, 86, 86,
      86, 86, 86, 86, 86, 86, 86, 86, 86, 86,
      86, 86, 86, 86, 86, 86, 86, 86, 86, 86,
      86, 86, 86, 86, 86, 86, 86, 86, 86, 86,
      86, 86, 86, 86, 86, 86
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

static const struct fhir_deserialize::MemberNameAndOffset word_array_EvidenceVariable[] =
  {
#line 11 "./src/generated/gperf_class_files/EvidenceVariable.gperf"
    {"id", 0x8, 1, -1},
#line 15 "./src/generated/gperf_class_files/EvidenceVariable.gperf"
    {"text", 0x40, 5, -1},
#line 55 "./src/generated/gperf_class_files/EvidenceVariable.gperf"
    {"endorser", 0x1e8, 45, -1},
#line 58 "./src/generated/gperf_class_files/EvidenceVariable.gperf"
    {"type", 0x200, 48, -1},
#line 24 "./src/generated/gperf_class_files/EvidenceVariable.gperf"
    {"identifier", 0x90, 14, -1},
#line 54 "./src/generated/gperf_class_files/EvidenceVariable.gperf"
    {"endorser_count", 0x1e0, 44, -1},
#line 45 "./src/generated/gperf_class_files/EvidenceVariable.gperf"
    {"effectivePeriod", 0x198, 35, -1},
#line 23 "./src/generated/gperf_class_files/EvidenceVariable.gperf"
    {"identifier_count", 0x88, 13, -1},
#line 34 "./src/generated/gperf_class_files/EvidenceVariable.gperf"
    {"contact", 0x120, 24, -1},
#line 17 "./src/generated/gperf_class_files/EvidenceVariable.gperf"
    {"contained", 0x50, 7, -1},
#line 47 "./src/generated/gperf_class_files/EvidenceVariable.gperf"
    {"topic", 0x1a8, 37, -1},
#line 43 "./src/generated/gperf_class_files/EvidenceVariable.gperf"
    {"approvalDate", 0x178, 33, -1},
#line 33 "./src/generated/gperf_class_files/EvidenceVariable.gperf"
    {"contact_count", 0x118, 23, -1},
#line 42 "./src/generated/gperf_class_files/EvidenceVariable.gperf"
    {"copyright", 0x168, 32, -1},
#line 16 "./src/generated/gperf_class_files/EvidenceVariable.gperf"
    {"contained_count", 0x48, 6, -1},
#line 46 "./src/generated/gperf_class_files/EvidenceVariable.gperf"
    {"topic_count", 0x1a0, 36, -1},
#line 21 "./src/generated/gperf_class_files/EvidenceVariable.gperf"
    {"modifierExtension", 0x70, 11, -1},
#line 14 "./src/generated/gperf_class_files/EvidenceVariable.gperf"
    {"language", 0x30, 4, -1},
#line 12 "./src/generated/gperf_class_files/EvidenceVariable.gperf"
    {"meta", 0x18, 2, -1},
#line 39 "./src/generated/gperf_class_files/EvidenceVariable.gperf"
    {"useContext", 0x150, 29, -1},
#line 35 "./src/generated/gperf_class_files/EvidenceVariable.gperf"
    {"description", 0x128, 25, -1},
#line 10 "./src/generated/gperf_class_files/EvidenceVariable.gperf"
    {"resourceType", 0x0, 0, -1},
#line 20 "./src/generated/gperf_class_files/EvidenceVariable.gperf"
    {"modifierExtension_count", 0x68, 10, -1},
#line 19 "./src/generated/gperf_class_files/EvidenceVariable.gperf"
    {"extension", 0x60, 9, -1},
#line 38 "./src/generated/gperf_class_files/EvidenceVariable.gperf"
    {"useContext_count", 0x148, 28, -1},
#line 25 "./src/generated/gperf_class_files/EvidenceVariable.gperf"
    {"version", 0x98, 15, -1},
#line 53 "./src/generated/gperf_class_files/EvidenceVariable.gperf"
    {"reviewer", 0x1d8, 43, -1},
#line 37 "./src/generated/gperf_class_files/EvidenceVariable.gperf"
    {"note", 0x140, 27, -1},
#line 18 "./src/generated/gperf_class_files/EvidenceVariable.gperf"
    {"extension_count", 0x58, 8, -1},
#line 49 "./src/generated/gperf_class_files/EvidenceVariable.gperf"
    {"author", 0x1b8, 39, -1},
#line 52 "./src/generated/gperf_class_files/EvidenceVariable.gperf"
    {"reviewer_count", 0x1d0, 42, -1},
#line 36 "./src/generated/gperf_class_files/EvidenceVariable.gperf"
    {"note_count", 0x138, 26, -1},
#line 48 "./src/generated/gperf_class_files/EvidenceVariable.gperf"
    {"author_count", 0x1b0, 38, -1},
#line 31 "./src/generated/gperf_class_files/EvidenceVariable.gperf"
    {"date", 0xf8, 21, -1},
#line 57 "./src/generated/gperf_class_files/EvidenceVariable.gperf"
    {"relatedArtifact", 0x1f8, 47, -1},
#line 30 "./src/generated/gperf_class_files/EvidenceVariable.gperf"
    {"status", 0xe8, 20, -1},
#line 41 "./src/generated/gperf_class_files/EvidenceVariable.gperf"
    {"jurisdiction", 0x160, 31, -1},
#line 13 "./src/generated/gperf_class_files/EvidenceVariable.gperf"
    {"implicitRules", 0x20, 3, -1},
#line 44 "./src/generated/gperf_class_files/EvidenceVariable.gperf"
    {"lastReviewDate", 0x188, 34, -1},
#line 28 "./src/generated/gperf_class_files/EvidenceVariable.gperf"
    {"shortTitle", 0xc8, 18, -1},
#line 56 "./src/generated/gperf_class_files/EvidenceVariable.gperf"
    {"relatedArtifact_count", 0x1f0, 46, -1},
#line 40 "./src/generated/gperf_class_files/EvidenceVariable.gperf"
    {"jurisdiction_count", 0x158, 30, -1},
#line 26 "./src/generated/gperf_class_files/EvidenceVariable.gperf"
    {"name", 0xa8, 16, -1},
#line 51 "./src/generated/gperf_class_files/EvidenceVariable.gperf"
    {"editor", 0x1c8, 41, -1},
#line 29 "./src/generated/gperf_class_files/EvidenceVariable.gperf"
    {"subtitle", 0xd8, 19, -1},
#line 32 "./src/generated/gperf_class_files/EvidenceVariable.gperf"
    {"publisher", 0x108, 22, -1},
#line 50 "./src/generated/gperf_class_files/EvidenceVariable.gperf"
    {"editor_count", 0x1c0, 40, -1},
#line 22 "./src/generated/gperf_class_files/EvidenceVariable.gperf"
    {"url", 0x78, 12, -1},
#line 60 "./src/generated/gperf_class_files/EvidenceVariable.gperf"
    {"characteristic", 0x218, 50, -1},
#line 59 "./src/generated/gperf_class_files/EvidenceVariable.gperf"
    {"characteristic_count", 0x210, 49, -1},
#line 27 "./src/generated/gperf_class_files/EvidenceVariable.gperf"
    {"title", 0xb8, 17, -1}
  };

static const signed char lookup[] =
  {
    -1, -1,  0, -1,  1, -1, -1, -1,  2,  3,  4, -1, -1, -1,
     5,  6,  7,  8, -1,  9, 10, -1, 11, 12, 13, 14, 15, 16,
    17, 18, 19, 20, 21, 22, 23, -1, 24, 25, 26, 27, 28, 29,
    -1, -1, 30, 31, -1, 32, -1, 33, 34, 35, 36, 37, 38, 39,
    40, -1, 41, 42, -1, 43, -1, 44, 45, -1, -1, 46, 47, 48,
    -1, -1, -1, -1, -1, 49, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, 50
  };

const struct fhir_deserialize::MemberNameAndOffset *
EvidenceVariable_Gperf::EvidenceVariable_MemberLookup (register const char *str, register unsigned int len)
{
  if (len <= MAX_WORD_LENGTH && len >= MIN_WORD_LENGTH)
    {
      register int key = hash (str, len);

      if (key <= MAX_HASH_VALUE && key >= 0)
        {
          register int index = lookup[key];

          if (index >= 0)
            {
              register const char *s = word_array_EvidenceVariable[index].name;

              if (*str == *s && !strncmp (str + 1, s + 1, len - 1) && s[len] == '\0')
                return &word_array_EvidenceVariable[index];
            }
        }
    }
  return 0;
}
