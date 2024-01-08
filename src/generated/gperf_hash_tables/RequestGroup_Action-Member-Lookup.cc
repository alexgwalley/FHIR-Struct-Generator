/* C++ code produced by gperf version 3.0.1 */
/* Command-line: gperf.exe -t --output-file=src/generated/gperf_hash_tables/RequestGroup_Action-Member-Lookup.cc -CGD ./src/generated/gperf_class_files/RequestGroup_Action.gperf  */
/* Computed positions: -k'3,8' */

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

#line 8 "./src/generated/gperf_class_files/RequestGroup_Action.gperf"
struct fhir_deserialize::MemberNameAndOffset;
enum
  {
    TOTAL_KEYWORDS = 36,
    MIN_WORD_LENGTH = 2,
    MAX_WORD_LENGTH = 23,
    MIN_HASH_VALUE = 2,
    MAX_HASH_VALUE = 54
  };

/* maximum key range = 53, duplicates = 0 */

class RequestGroup_Action_Gperf
{
private:
  static inline unsigned int hash (const char *str, unsigned int len);
public:
  static const struct fhir_deserialize::MemberNameAndOffset *RequestGroup_Action_MemberLookup (const char *str, unsigned int len);
};

inline unsigned int
RequestGroup_Action_Gperf::hash (register const char *str, register unsigned int len)
{
  static const unsigned char asso_values[] =
    {
      55, 55, 55, 55, 55, 55, 55, 55, 55, 55,
      55, 55, 55, 55, 55, 55, 55, 55, 55, 55,
      55, 55, 55, 55, 55, 55, 55, 55, 55, 55,
      55, 55, 55, 55, 55, 55, 55, 55, 55, 55,
      55, 55, 55, 55, 55, 55, 55, 55, 55, 55,
      55, 55, 55, 55, 55, 55, 55, 55, 55, 55,
      55, 55, 55, 55, 55, 15, 55, 55, 55, 55,
      55, 55, 55, 55, 55, 55, 55, 55, 55, 55,
      55, 55, 55, 55, 55, 55, 55, 55, 55, 55,
      55, 55, 55, 55, 55, 55, 55, 10, 55,  0,
       5, 10, 55, 10, 55, 20, 55, 15, 20, 15,
      10,  5,  0,  5, 10,  0,  0,  0, 55, 55,
      10,  0, 55, 55, 55, 55, 55, 55, 55, 55,
      55, 55, 55, 55, 55, 55, 55, 55, 55, 55,
      55, 55, 55, 55, 55, 55, 55, 55, 55, 55,
      55, 55, 55, 55, 55, 55, 55, 55, 55, 55,
      55, 55, 55, 55, 55, 55, 55, 55, 55, 55,
      55, 55, 55, 55, 55, 55, 55, 55, 55, 55,
      55, 55, 55, 55, 55, 55, 55, 55, 55, 55,
      55, 55, 55, 55, 55, 55, 55, 55, 55, 55,
      55, 55, 55, 55, 55, 55, 55, 55, 55, 55,
      55, 55, 55, 55, 55, 55, 55, 55, 55, 55,
      55, 55, 55, 55, 55, 55, 55, 55, 55, 55,
      55, 55, 55, 55, 55, 55, 55, 55, 55, 55,
      55, 55, 55, 55, 55, 55, 55, 55, 55, 55,
      55, 55, 55, 55, 55, 55
    };
  register int hval = len;

  switch (hval)
    {
      default:
        hval += asso_values[(unsigned char)str[7]];
      /*FALLTHROUGH*/
      case 7:
      case 6:
      case 5:
      case 4:
      case 3:
        hval += asso_values[(unsigned char)str[2]];
      /*FALLTHROUGH*/
      case 2:
        break;
    }
  return hval;
}

static const struct fhir_deserialize::MemberNameAndOffset word_array_RequestGroup_Action[] =
  {
#line 11 "./src/generated/gperf_class_files/RequestGroup_Action.gperf"
    {"id", 0x8, 1, -1},
#line 37 "./src/generated/gperf_class_files/RequestGroup_Action.gperf"
    {"type", 0xf0, 23, -1},
#line 17 "./src/generated/gperf_class_files/RequestGroup_Action.gperf"
    {"title", 0x48, 7, -1},
#line 45 "./src/generated/gperf_class_files/RequestGroup_Action.gperf"
    {"action", 0x158, 31, -1},
#line 22 "./src/generated/gperf_class_files/RequestGroup_Action.gperf"
    {"code", 0x90, 12, -1},
#line 18 "./src/generated/gperf_class_files/RequestGroup_Action.gperf"
    {"description", 0x58, 8, -1},
#line 44 "./src/generated/gperf_class_files/RequestGroup_Action.gperf"
    {"action_count", 0x150, 30, -1},
#line 24 "./src/generated/gperf_class_files/RequestGroup_Action.gperf"
    {"documentation", 0xa0, 14, -1},
#line 13 "./src/generated/gperf_class_files/RequestGroup_Action.gperf"
    {"extension", 0x20, 3, -1},
#line 21 "./src/generated/gperf_class_files/RequestGroup_Action.gperf"
    {"code_count", 0x88, 11, -1},
#line 16 "./src/generated/gperf_class_files/RequestGroup_Action.gperf"
    {"prefix", 0x38, 6, -1},
#line 43 "./src/generated/gperf_class_files/RequestGroup_Action.gperf"
    {"resource", 0x148, 29, -1},
#line 23 "./src/generated/gperf_class_files/RequestGroup_Action.gperf"
    {"documentation_count", 0x98, 13, -1},
#line 12 "./src/generated/gperf_class_files/RequestGroup_Action.gperf"
    {"extension_count", 0x18, 2, -1},
#line 36 "./src/generated/gperf_class_files/RequestGroup_Action.gperf"
    {"participant", 0xe8, 22, -1},
#line 10 "./src/generated/gperf_class_files/RequestGroup_Action.gperf"
    {"resourceType", 0x0, 0, -1},
#line 26 "./src/generated/gperf_class_files/RequestGroup_Action.gperf"
    {"condition", 0xb0, 16, -1},
#line 40 "./src/generated/gperf_class_files/RequestGroup_Action.gperf"
    {"requiredBehavior", 0x118, 26, -1},
#line 35 "./src/generated/gperf_class_files/RequestGroup_Action.gperf"
    {"participant_count", 0xe0, 21, -1},
#line 20 "./src/generated/gperf_class_files/RequestGroup_Action.gperf"
    {"priority", 0x78, 10, -1},
#line 32 "./src/generated/gperf_class_files/RequestGroup_Action.gperf"
    {"timingDuration", 0xd0, 20, 3},
#line 25 "./src/generated/gperf_class_files/RequestGroup_Action.gperf"
    {"condition_count", 0xa8, 15, -1},
#line 38 "./src/generated/gperf_class_files/RequestGroup_Action.gperf"
    {"groupingBehavior", 0xf8, 24, -1},
#line 15 "./src/generated/gperf_class_files/RequestGroup_Action.gperf"
    {"modifierExtension", 0x30, 5, -1},
#line 30 "./src/generated/gperf_class_files/RequestGroup_Action.gperf"
    {"timingAge", 0xd0, 20, 1},
#line 33 "./src/generated/gperf_class_files/RequestGroup_Action.gperf"
    {"timingRange", 0xd0, 20, 4},
#line 31 "./src/generated/gperf_class_files/RequestGroup_Action.gperf"
    {"timingPeriod", 0xd0, 20, 2},
#line 14 "./src/generated/gperf_class_files/RequestGroup_Action.gperf"
    {"modifierExtension_count", 0x28, 4, -1},
#line 29 "./src/generated/gperf_class_files/RequestGroup_Action.gperf"
    {"timingDateTime", 0xd0, 20, 0},
#line 41 "./src/generated/gperf_class_files/RequestGroup_Action.gperf"
    {"precheckBehavior", 0x128, 27, -1},
#line 39 "./src/generated/gperf_class_files/RequestGroup_Action.gperf"
    {"selectionBehavior", 0x108, 25, -1},
#line 19 "./src/generated/gperf_class_files/RequestGroup_Action.gperf"
    {"textEquivalent", 0x68, 9, -1},
#line 34 "./src/generated/gperf_class_files/RequestGroup_Action.gperf"
    {"timingTiming", 0xd0, 20, 5},
#line 28 "./src/generated/gperf_class_files/RequestGroup_Action.gperf"
    {"relatedAction", 0xc0, 18, -1},
#line 42 "./src/generated/gperf_class_files/RequestGroup_Action.gperf"
    {"cardinalityBehavior", 0x138, 28, -1},
#line 27 "./src/generated/gperf_class_files/RequestGroup_Action.gperf"
    {"relatedAction_count", 0xb8, 17, -1}
  };

static const signed char lookup[] =
  {
    -1, -1,  0, -1,  1,  2,  3, -1, -1,  4, -1,  5,  6,  7,
     8,  9, 10, -1, 11, 12, 13, 14, 15, -1, 16, -1, 17, 18,
    19, 20, 21, 22, 23, -1, 24, -1, 25, 26, 27, 28, -1, 29,
    30, -1, 31, -1, -1, 32, 33, 34, -1, -1, -1, -1, 35
  };

const struct fhir_deserialize::MemberNameAndOffset *
RequestGroup_Action_Gperf::RequestGroup_Action_MemberLookup (register const char *str, register unsigned int len)
{
  if (len <= MAX_WORD_LENGTH && len >= MIN_WORD_LENGTH)
    {
      register int key = hash (str, len);

      if (key <= MAX_HASH_VALUE && key >= 0)
        {
          register int index = lookup[key];

          if (index >= 0)
            {
              register const char *s = word_array_RequestGroup_Action[index].name;

              if (*str == *s && !strncmp (str + 1, s + 1, len - 1) && s[len] == '\0')
                return &word_array_RequestGroup_Action[index];
            }
        }
    }
  return 0;
}
