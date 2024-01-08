/* C++ code produced by gperf version 3.0.1 */
/* Command-line: gperf.exe -t --output-file=src/generated/gperf_hash_tables/Task-Member-Lookup.cc -CGD ./src/generated/gperf_class_files/Task.gperf  */
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

#line 8 "./src/generated/gperf_class_files/Task.gperf"
struct fhir_deserialize::MemberNameAndOffset;
enum
  {
    TOTAL_KEYWORDS = 53,
    MIN_WORD_LENGTH = 2,
    MAX_WORD_LENGTH = 23,
    MIN_HASH_VALUE = 2,
    MAX_HASH_VALUE = 90
  };

/* maximum key range = 89, duplicates = 0 */

class Task_Gperf
{
private:
  static inline unsigned int hash (const char *str, unsigned int len);
public:
  static const struct fhir_deserialize::MemberNameAndOffset *Task_MemberLookup (const char *str, unsigned int len);
};

inline unsigned int
Task_Gperf::hash (register const char *str, register unsigned int len)
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
      91, 91, 91, 91, 91,  0, 91, 25,  5, 47,
       5, 10, 40, 35, 15,  0, 91, 91, 25, 10,
      60,  5,  0, 91, 15, 35,  0, 40, 91, 91,
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
      91, 91, 91, 91, 91, 91, 91, 91, 91, 91,
      91, 91, 91, 91, 91, 91
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

static const struct fhir_deserialize::MemberNameAndOffset word_array_Task[] =
  {
#line 11 "./src/generated/gperf_class_files/Task.gperf"
    {"id", 0x8, 1, -1},
#line 15 "./src/generated/gperf_class_files/Task.gperf"
    {"text", 0x40, 5, -1},
#line 30 "./src/generated/gperf_class_files/Task.gperf"
    {"partOf", 0xc8, 20, -1},
#line 62 "./src/generated/gperf_class_files/Task.gperf"
    {"output", 0x1f0, 51, -1},
#line 29 "./src/generated/gperf_class_files/Task.gperf"
    {"partOf_count", 0xc0, 19, -1},
#line 35 "./src/generated/gperf_class_files/Task.gperf"
    {"priority", 0x100, 25, -1},
#line 25 "./src/generated/gperf_class_files/Task.gperf"
    {"instantiatesUri", 0x98, 15, -1},
#line 34 "./src/generated/gperf_class_files/Task.gperf"
    {"intent", 0xf0, 24, -1},
#line 61 "./src/generated/gperf_class_files/Task.gperf"
    {"output_count", 0x1e8, 50, -1},
#line 33 "./src/generated/gperf_class_files/Task.gperf"
    {"businessStatus", 0xe8, 23, -1},
#line 48 "./src/generated/gperf_class_files/Task.gperf"
    {"owner", 0x180, 37, -1},
#line 24 "./src/generated/gperf_class_files/Task.gperf"
    {"instantiatesCanonical", 0x88, 14, -1},
#line 27 "./src/generated/gperf_class_files/Task.gperf"
    {"basedOn", 0xb0, 17, -1},
#line 41 "./src/generated/gperf_class_files/Task.gperf"
    {"encounter", 0x138, 30, -1},
#line 58 "./src/generated/gperf_class_files/Task.gperf"
    {"restriction", 0x1d0, 47, -1},
#line 21 "./src/generated/gperf_class_files/Task.gperf"
    {"modifierExtension", 0x70, 11, -1},
#line 26 "./src/generated/gperf_class_files/Task.gperf"
    {"basedOn_count", 0xa8, 16, -1},
#line 19 "./src/generated/gperf_class_files/Task.gperf"
    {"extension", 0x60, 9, -1},
#line 10 "./src/generated/gperf_class_files/Task.gperf"
    {"resourceType", 0x0, 0, -1},
#line 20 "./src/generated/gperf_class_files/Task.gperf"
    {"modifierExtension_count", 0x68, 10, -1},
#line 18 "./src/generated/gperf_class_files/Task.gperf"
    {"extension_count", 0x58, 8, -1},
#line 44 "./src/generated/gperf_class_files/Task.gperf"
    {"lastModified", 0x158, 33, -1},
#line 13 "./src/generated/gperf_class_files/Task.gperf"
    {"implicitRules", 0x20, 3, -1},
#line 12 "./src/generated/gperf_class_files/Task.gperf"
    {"meta", 0x18, 2, -1},
#line 57 "./src/generated/gperf_class_files/Task.gperf"
    {"relevantHistory", 0x1c8, 46, -1},
#line 31 "./src/generated/gperf_class_files/Task.gperf"
    {"status", 0xd0, 21, -1},
#line 39 "./src/generated/gperf_class_files/Task.gperf"
    {"for", 0x130, 29, -1},
#line 40 "./src/generated/gperf_class_files/Task.gperf"
    {"for_", 0x130, 29, -1},
#line 60 "./src/generated/gperf_class_files/Task.gperf"
    {"input", 0x1e0, 49, -1},
#line 56 "./src/generated/gperf_class_files/Task.gperf"
    {"relevantHistory_count", 0x1c0, 45, -1},
#line 32 "./src/generated/gperf_class_files/Task.gperf"
    {"statusReason", 0xe0, 22, -1},
#line 53 "./src/generated/gperf_class_files/Task.gperf"
    {"insurance", 0x1a8, 42, -1},
#line 43 "./src/generated/gperf_class_files/Task.gperf"
    {"authoredOn", 0x148, 32, -1},
#line 59 "./src/generated/gperf_class_files/Task.gperf"
    {"input_count", 0x1d8, 48, -1},
#line 47 "./src/generated/gperf_class_files/Task.gperf"
    {"performerType", 0x178, 36, -1},
#line 52 "./src/generated/gperf_class_files/Task.gperf"
    {"insurance_count", 0x1a0, 41, -1},
#line 17 "./src/generated/gperf_class_files/Task.gperf"
    {"contained", 0x50, 7, -1},
#line 49 "./src/generated/gperf_class_files/Task.gperf"
    {"location", 0x188, 38, -1},
#line 46 "./src/generated/gperf_class_files/Task.gperf"
    {"performerType_count", 0x170, 35, -1},
#line 50 "./src/generated/gperf_class_files/Task.gperf"
    {"reasonCode", 0x190, 39, -1},
#line 36 "./src/generated/gperf_class_files/Task.gperf"
    {"code", 0x110, 26, -1},
#line 16 "./src/generated/gperf_class_files/Task.gperf"
    {"contained_count", 0x48, 6, -1},
#line 37 "./src/generated/gperf_class_files/Task.gperf"
    {"description", 0x118, 27, -1},
#line 45 "./src/generated/gperf_class_files/Task.gperf"
    {"requester", 0x168, 34, -1},
#line 51 "./src/generated/gperf_class_files/Task.gperf"
    {"reasonReference", 0x198, 40, -1},
#line 14 "./src/generated/gperf_class_files/Task.gperf"
    {"language", 0x30, 4, -1},
#line 23 "./src/generated/gperf_class_files/Task.gperf"
    {"identifier", 0x80, 13, -1},
#line 42 "./src/generated/gperf_class_files/Task.gperf"
    {"executionPeriod", 0x140, 31, -1},
#line 55 "./src/generated/gperf_class_files/Task.gperf"
    {"note", 0x1b8, 44, -1},
#line 22 "./src/generated/gperf_class_files/Task.gperf"
    {"identifier_count", 0x78, 12, -1},
#line 54 "./src/generated/gperf_class_files/Task.gperf"
    {"note_count", 0x1b0, 43, -1},
#line 38 "./src/generated/gperf_class_files/Task.gperf"
    {"focus", 0x128, 28, -1},
#line 28 "./src/generated/gperf_class_files/Task.gperf"
    {"groupIdentifier", 0xb8, 18, -1}
  };

static const signed char lookup[] =
  {
    -1, -1,  0, -1,  1, -1,  2, -1, -1, -1, -1,  3,  4,  5,
    -1,  6,  7,  8, -1,  9, 10, 11, 12, -1, 13, -1, 14, 15,
    16, 17, -1, -1, 18, 19, -1, 20, -1, 21, 22, 23, 24, 25,
    -1, 26, 27, 28, 29, 30, -1, 31, 32, 33, -1, 34, -1, 35,
    36, -1, 37, 38, 39, 40, 41, 42, 43, 44, -1, -1, 45, -1,
    46, -1, 47, -1, 48, -1, 49, -1, -1, -1, 50, -1, -1, -1,
    -1, 51, -1, -1, -1, -1, 52
  };

const struct fhir_deserialize::MemberNameAndOffset *
Task_Gperf::Task_MemberLookup (register const char *str, register unsigned int len)
{
  if (len <= MAX_WORD_LENGTH && len >= MIN_WORD_LENGTH)
    {
      register int key = hash (str, len);

      if (key <= MAX_HASH_VALUE && key >= 0)
        {
          register int index = lookup[key];

          if (index >= 0)
            {
              register const char *s = word_array_Task[index].name;

              if (*str == *s && !strncmp (str + 1, s + 1, len - 1) && s[len] == '\0')
                return &word_array_Task[index];
            }
        }
    }
  return 0;
}
