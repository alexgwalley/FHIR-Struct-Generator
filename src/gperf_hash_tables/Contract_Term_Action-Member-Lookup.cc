/* C++ code produced by gperf version 3.0.1 */
/* Command-line: gperf.exe -t --output-file=src/gperf_hash_tables/Contract_Term_Action-Member-Lookup.cc -CGD ./gperf_class_files/Contract_Term_Action.gperf  */
/* Computed positions: -k'1,11' */

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

#line 8 "./gperf_class_files/Contract_Term_Action.gperf"
struct fhir_deserialize::MemberNameAndOffset;
enum
  {
    TOTAL_KEYWORDS = 42,
    MIN_WORD_LENGTH = 2,
    MAX_WORD_LENGTH = 25,
    MIN_HASH_VALUE = 4,
    MAX_HASH_VALUE = 55
  };

/* maximum key range = 52, duplicates = 0 */

class Contract_Term_Action_Gperf
{
private:
  static inline unsigned int hash (const char *str, unsigned int len);
public:
  static const struct fhir_deserialize::MemberNameAndOffset *Contract_Term_Action_MemberLookup (const char *str, unsigned int len);
};

inline unsigned int
Contract_Term_Action_Gperf::hash (register const char *str, register unsigned int len)
{
  static const unsigned char asso_values[] =
    {
      56, 56, 56, 56, 56, 56, 56, 56, 56, 56,
      56, 56, 56, 56, 56, 56, 56, 56, 56, 56,
      56, 56, 56, 56, 56, 56, 56, 56, 56, 56,
      56, 56, 56, 56, 56, 56, 56, 56, 56, 56,
      56, 56, 56, 56, 56, 56, 56, 56, 56, 56,
      56, 56, 56, 56, 56, 56, 56, 56, 56, 56,
      56, 56, 56, 56, 56, 56, 56, 56, 10, 56,
      56, 56, 56,  0, 56, 56, 56, 56, 56, 56,
      15, 56, 56, 56, 10, 56, 56, 56, 56, 56,
      56, 56, 56, 56, 56, 25, 56, 56,  0, 20,
      35, 10, 56, 56, 56,  5, 56,  0, 10,  5,
      20, 20,  5, 56,  0, 30,  0,  0, 56, 56,
      56,  5, 56, 56, 56, 56, 56, 56, 56, 56,
      56, 56, 56, 56, 56, 56, 56, 56, 56, 56,
      56, 56, 56, 56, 56, 56, 56, 56, 56, 56,
      56, 56, 56, 56, 56, 56, 56, 56, 56, 56,
      56, 56, 56, 56, 56, 56, 56, 56, 56, 56,
      56, 56, 56, 56, 56, 56, 56, 56, 56, 56,
      56, 56, 56, 56, 56, 56, 56, 56, 56, 56,
      56, 56, 56, 56, 56, 56, 56, 56, 56, 56,
      56, 56, 56, 56, 56, 56, 56, 56, 56, 56,
      56, 56, 56, 56, 56, 56, 56, 56, 56, 56,
      56, 56, 56, 56, 56, 56, 56, 56, 56, 56,
      56, 56, 56, 56, 56, 56, 56, 56, 56, 56,
      56, 56, 56, 56, 56, 56, 56, 56, 56, 56,
      56, 56, 56, 56, 56, 56
    };
  register int hval = len;

  switch (hval)
    {
      default:
        hval += asso_values[(unsigned char)str[10]];
      /*FALLTHROUGH*/
      case 10:
      case 9:
      case 8:
      case 7:
      case 6:
      case 5:
      case 4:
      case 3:
      case 2:
      case 1:
        hval += asso_values[(unsigned char)str[0]];
        break;
    }
  return hval;
}

static const struct fhir_deserialize::MemberNameAndOffset word_array_Contract_Term_Action[] =
  {
#line 17 "./gperf_class_files/Contract_Term_Action.gperf"
    {"type", 0x40, 7, -1},
#line 45 "./gperf_class_files/Contract_Term_Action.gperf"
    {"reason", 0x120, 34, -1},
#line 11 "./gperf_class_files/Contract_Term_Action.gperf"
    {"id", 0x8, 1, -1},
#line 31 "./gperf_class_files/Contract_Term_Action.gperf"
    {"requester", 0xb0, 20, -1},
#line 41 "./gperf_class_files/Contract_Term_Action.gperf"
    {"reasonCode", 0x100, 30, -1},
#line 20 "./gperf_class_files/Contract_Term_Action.gperf"
    {"intent", 0x58, 10, -1},
#line 47 "./gperf_class_files/Contract_Term_Action.gperf"
    {"reasonLinkId", 0x130, 36, -1},
#line 37 "./gperf_class_files/Contract_Term_Action.gperf"
    {"performer", 0xe0, 26, -1},
#line 43 "./gperf_class_files/Contract_Term_Action.gperf"
    {"reasonReference", 0x110, 32, -1},
#line 22 "./gperf_class_files/Contract_Term_Action.gperf"
    {"linkId", 0x68, 12, -1},
#line 10 "./gperf_class_files/Contract_Term_Action.gperf"
    {"resourceType", 0x0, 0, -1},
#line 46 "./gperf_class_files/Contract_Term_Action.gperf"
    {"reasonLinkId_count", 0x128, 35, -1},
#line 13 "./gperf_class_files/Contract_Term_Action.gperf"
    {"extension", 0x20, 3, -1},
#line 33 "./gperf_class_files/Contract_Term_Action.gperf"
    {"requesterLinkId", 0xc0, 22, -1},
#line 42 "./gperf_class_files/Contract_Term_Action.gperf"
    {"reasonReference_count", 0x108, 31, -1},
#line 15 "./gperf_class_files/Contract_Term_Action.gperf"
    {"modifierExtension", 0x30, 5, -1},
#line 35 "./gperf_class_files/Contract_Term_Action.gperf"
    {"performerType", 0xd0, 24, -1},
#line 49 "./gperf_class_files/Contract_Term_Action.gperf"
    {"note", 0x140, 38, -1},
#line 39 "./gperf_class_files/Contract_Term_Action.gperf"
    {"performerLinkId", 0xf0, 28, -1},
#line 32 "./gperf_class_files/Contract_Term_Action.gperf"
    {"requesterLinkId_count", 0xb8, 21, -1},
#line 24 "./gperf_class_files/Contract_Term_Action.gperf"
    {"context", 0x78, 14, -1},
#line 14 "./gperf_class_files/Contract_Term_Action.gperf"
    {"modifierExtension_count", 0x28, 4, -1},
#line 34 "./gperf_class_files/Contract_Term_Action.gperf"
    {"performerType_count", 0xc8, 23, -1},
#line 48 "./gperf_class_files/Contract_Term_Action.gperf"
    {"note_count", 0x138, 37, -1},
#line 38 "./gperf_class_files/Contract_Term_Action.gperf"
    {"performerLinkId_count", 0xe8, 27, -1},
#line 44 "./gperf_class_files/Contract_Term_Action.gperf"
    {"reason_count", 0x118, 33, -1},
#line 26 "./gperf_class_files/Contract_Term_Action.gperf"
    {"contextLinkId", 0x88, 16, -1},
#line 30 "./gperf_class_files/Contract_Term_Action.gperf"
    {"requester_count", 0xa8, 19, -1},
#line 23 "./gperf_class_files/Contract_Term_Action.gperf"
    {"status", 0x70, 13, -1},
#line 19 "./gperf_class_files/Contract_Term_Action.gperf"
    {"subject", 0x50, 9, -1},
#line 36 "./gperf_class_files/Contract_Term_Action.gperf"
    {"performerRole", 0xd8, 25, -1},
#line 25 "./gperf_class_files/Contract_Term_Action.gperf"
    {"contextLinkId_count", 0x80, 15, -1},
#line 40 "./gperf_class_files/Contract_Term_Action.gperf"
    {"reasonCode_count", 0xf8, 29, -1},
#line 21 "./gperf_class_files/Contract_Term_Action.gperf"
    {"linkId_count", 0x60, 11, -1},
#line 18 "./gperf_class_files/Contract_Term_Action.gperf"
    {"subject_count", 0x48, 8, -1},
#line 12 "./gperf_class_files/Contract_Term_Action.gperf"
    {"extension_count", 0x18, 2, -1},
#line 29 "./gperf_class_files/Contract_Term_Action.gperf"
    {"occurrenceTiming", 0x98, 18, 2},
#line 16 "./gperf_class_files/Contract_Term_Action.gperf"
    {"doNotPerform", 0x38, 6, -1},
#line 27 "./gperf_class_files/Contract_Term_Action.gperf"
    {"occurrenceDateTime", 0x98, 18, 0},
#line 51 "./gperf_class_files/Contract_Term_Action.gperf"
    {"securityLabelNumber", 0x150, 40, -1},
#line 28 "./gperf_class_files/Contract_Term_Action.gperf"
    {"occurrencePeriod", 0x98, 18, 1},
#line 50 "./gperf_class_files/Contract_Term_Action.gperf"
    {"securityLabelNumber_count", 0x148, 39, -1}
  };

static const signed char lookup[] =
  {
    -1, -1, -1, -1,  0, -1,  1,  2, -1,  3,  4,  5,  6, -1,
     7,  8,  9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20,
    21, 22, 23, 24, 25, 26, -1, 27, 28, 29, 30, 31, -1, 32,
    33, 34, -1, 35, 36, 37, 38, 39, -1, 40, -1, -1, -1, 41
  };

const struct fhir_deserialize::MemberNameAndOffset *
Contract_Term_Action_Gperf::Contract_Term_Action_MemberLookup (register const char *str, register unsigned int len)
{
  if (len <= MAX_WORD_LENGTH && len >= MIN_WORD_LENGTH)
    {
      register int key = hash (str, len);

      if (key <= MAX_HASH_VALUE && key >= 0)
        {
          register int index = lookup[key];

          if (index >= 0)
            {
              register const char *s = word_array_Contract_Term_Action[index].name;

              if (*str == *s && !strncmp (str + 1, s + 1, len - 1) && s[len] == '\0')
                return &word_array_Contract_Term_Action[index];
            }
        }
    }
  return 0;
}
