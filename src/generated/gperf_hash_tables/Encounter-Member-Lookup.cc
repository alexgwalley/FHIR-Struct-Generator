/* C++ code produced by gperf version 3.0.1 */
/* Command-line: gperf.exe -t --output-file=src/generated/gperf_hash_tables/Encounter-Member-Lookup.cc -CGD ./src/generated/gperf_class_files/Encounter.gperf  */
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

#line 8 "./src/generated/gperf_class_files/Encounter.gperf"
struct fhir_deserialize::MemberNameAndOffset;
enum
  {
    TOTAL_KEYWORDS = 49,
    MIN_WORD_LENGTH = 2,
    MAX_WORD_LENGTH = 23,
    MIN_HASH_VALUE = 4,
    MAX_HASH_VALUE = 73
  };

/* maximum key range = 70, duplicates = 0 */

class Encounter_Gperf
{
private:
  static inline unsigned int hash (const char *str, unsigned int len);
public:
  static const struct fhir_deserialize::MemberNameAndOffset *Encounter_MemberLookup (const char *str, unsigned int len);
};

inline unsigned int
Encounter_Gperf::hash (register const char *str, register unsigned int len)
{
  static const unsigned char asso_values[] =
    {
      74, 74, 74, 74, 74, 74, 74, 74, 74, 74,
      74, 74, 74, 74, 74, 74, 74, 74, 74, 74,
      74, 74, 74, 74, 74, 74, 74, 74, 74, 74,
      74, 74, 74, 74, 74, 74, 74, 74, 74, 74,
      74, 74, 74, 74, 74, 74, 74, 74, 74, 74,
      74, 74, 74, 74, 74, 74, 74, 74, 74, 74,
      74, 74, 74, 74, 74, 74, 74, 74, 74, 74,
      74, 74, 74, 74, 74, 74, 74, 74, 74, 74,
      74, 74, 74, 74, 74, 74, 74, 74, 74, 74,
      74, 74, 74, 74, 74, 74, 74, 15, 25,  5,
      25, 20, 74, 30,  0, 40,  0, 74, 15, 10,
      10,  0, 10, 74, 25,  0,  0, 74, 50, 74,
      74, 74, 74, 74, 74, 74, 74, 74, 74, 74,
      74, 74, 74, 74, 74, 74, 74, 74, 74, 74,
      74, 74, 74, 74, 74, 74, 74, 74, 74, 74,
      74, 74, 74, 74, 74, 74, 74, 74, 74, 74,
      74, 74, 74, 74, 74, 74, 74, 74, 74, 74,
      74, 74, 74, 74, 74, 74, 74, 74, 74, 74,
      74, 74, 74, 74, 74, 74, 74, 74, 74, 74,
      74, 74, 74, 74, 74, 74, 74, 74, 74, 74,
      74, 74, 74, 74, 74, 74, 74, 74, 74, 74,
      74, 74, 74, 74, 74, 74, 74, 74, 74, 74,
      74, 74, 74, 74, 74, 74, 74, 74, 74, 74,
      74, 74, 74, 74, 74, 74, 74, 74, 74, 74,
      74, 74, 74, 74, 74, 74, 74, 74, 74, 74,
      74, 74, 74, 74, 74, 74
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

static const struct fhir_deserialize::MemberNameAndOffset word_array_Encounter[] =
  {
#line 15 "./src/generated/gperf_class_files/Encounter.gperf"
    {"text", 0x40, 5, -1},
#line 24 "./src/generated/gperf_class_files/Encounter.gperf"
    {"status", 0x88, 14, -1},
#line 35 "./src/generated/gperf_class_files/Encounter.gperf"
    {"subject", 0xe0, 24, -1},
#line 27 "./src/generated/gperf_class_files/Encounter.gperf"
    {"class", 0xa8, 17, -1},
#line 28 "./src/generated/gperf_class_files/Encounter.gperf"
    {"class_", 0xa8, 17, -1},
#line 26 "./src/generated/gperf_class_files/Encounter.gperf"
    {"statusHistory", 0xa0, 16, -1},
#line 17 "./src/generated/gperf_class_files/Encounter.gperf"
    {"contained", 0x50, 7, -1},
#line 58 "./src/generated/gperf_class_files/Encounter.gperf"
    {"partOf", 0x198, 47, -1},
#line 30 "./src/generated/gperf_class_files/Encounter.gperf"
    {"classHistory", 0xb8, 19, -1},
#line 34 "./src/generated/gperf_class_files/Encounter.gperf"
    {"priority", 0xd8, 23, -1},
#line 25 "./src/generated/gperf_class_files/Encounter.gperf"
    {"statusHistory_count", 0x98, 15, -1},
#line 16 "./src/generated/gperf_class_files/Encounter.gperf"
    {"contained_count", 0x48, 6, -1},
#line 41 "./src/generated/gperf_class_files/Encounter.gperf"
    {"participant", 0x110, 30, -1},
#line 53 "./src/generated/gperf_class_files/Encounter.gperf"
    {"account", 0x170, 42, -1},
#line 29 "./src/generated/gperf_class_files/Encounter.gperf"
    {"classHistory_count", 0xb0, 18, -1},
#line 32 "./src/generated/gperf_class_files/Encounter.gperf"
    {"type", 0xc8, 21, -1},
#line 54 "./src/generated/gperf_class_files/Encounter.gperf"
    {"hospitalization", 0x178, 43, -1},
#line 43 "./src/generated/gperf_class_files/Encounter.gperf"
    {"appointment", 0x120, 32, -1},
#line 40 "./src/generated/gperf_class_files/Encounter.gperf"
    {"participant_count", 0x108, 29, -1},
#line 52 "./src/generated/gperf_class_files/Encounter.gperf"
    {"account_count", 0x168, 41, -1},
#line 12 "./src/generated/gperf_class_files/Encounter.gperf"
    {"meta", 0x18, 2, -1},
#line 31 "./src/generated/gperf_class_files/Encounter.gperf"
    {"type_count", 0xc0, 20, -1},
#line 42 "./src/generated/gperf_class_files/Encounter.gperf"
    {"appointment_count", 0x118, 31, -1},
#line 37 "./src/generated/gperf_class_files/Encounter.gperf"
    {"episodeOfCare", 0xf0, 26, -1},
#line 47 "./src/generated/gperf_class_files/Encounter.gperf"
    {"reasonCode", 0x140, 36, -1},
#line 10 "./src/generated/gperf_class_files/Encounter.gperf"
    {"resourceType", 0x0, 0, -1},
#line 56 "./src/generated/gperf_class_files/Encounter.gperf"
    {"location", 0x188, 45, -1},
#line 36 "./src/generated/gperf_class_files/Encounter.gperf"
    {"episodeOfCare_count", 0xe8, 25, -1},
#line 49 "./src/generated/gperf_class_files/Encounter.gperf"
    {"reasonReference", 0x150, 38, -1},
#line 46 "./src/generated/gperf_class_files/Encounter.gperf"
    {"reasonCode_count", 0x138, 35, -1},
#line 11 "./src/generated/gperf_class_files/Encounter.gperf"
    {"id", 0x8, 1, -1},
#line 55 "./src/generated/gperf_class_files/Encounter.gperf"
    {"location_count", 0x180, 44, -1},
#line 48 "./src/generated/gperf_class_files/Encounter.gperf"
    {"reasonReference_count", 0x148, 37, -1},
#line 19 "./src/generated/gperf_class_files/Encounter.gperf"
    {"extension", 0x60, 9, -1},
#line 45 "./src/generated/gperf_class_files/Encounter.gperf"
    {"length", 0x130, 34, -1},
#line 39 "./src/generated/gperf_class_files/Encounter.gperf"
    {"basedOn", 0x100, 28, -1},
#line 14 "./src/generated/gperf_class_files/Encounter.gperf"
    {"language", 0x30, 4, -1},
#line 18 "./src/generated/gperf_class_files/Encounter.gperf"
    {"extension_count", 0x58, 8, -1},
#line 44 "./src/generated/gperf_class_files/Encounter.gperf"
    {"period", 0x128, 33, -1},
#line 38 "./src/generated/gperf_class_files/Encounter.gperf"
    {"basedOn_count", 0xf8, 27, -1},
#line 23 "./src/generated/gperf_class_files/Encounter.gperf"
    {"identifier", 0x80, 13, -1},
#line 33 "./src/generated/gperf_class_files/Encounter.gperf"
    {"serviceType", 0xd0, 22, -1},
#line 51 "./src/generated/gperf_class_files/Encounter.gperf"
    {"diagnosis", 0x160, 40, -1},
#line 57 "./src/generated/gperf_class_files/Encounter.gperf"
    {"serviceProvider", 0x190, 46, -1},
#line 22 "./src/generated/gperf_class_files/Encounter.gperf"
    {"identifier_count", 0x78, 12, -1},
#line 21 "./src/generated/gperf_class_files/Encounter.gperf"
    {"modifierExtension", 0x70, 11, -1},
#line 13 "./src/generated/gperf_class_files/Encounter.gperf"
    {"implicitRules", 0x20, 3, -1},
#line 50 "./src/generated/gperf_class_files/Encounter.gperf"
    {"diagnosis_count", 0x158, 39, -1},
#line 20 "./src/generated/gperf_class_files/Encounter.gperf"
    {"modifierExtension_count", 0x68, 10, -1}
  };

static const signed char lookup[] =
  {
    -1, -1, -1, -1,  0, -1,  1,  2, -1, -1,  3,  4, -1,  5,
     6, -1,  7,  8,  9, 10, 11, 12, 13, 14, 15, 16, 17, 18,
    19, 20, 21, -1, 22, 23, -1, 24, -1, 25, 26, 27, 28, 29,
    30, -1, 31, -1, 32, -1, -1, 33, -1, 34, 35, 36, -1, 37,
    38, -1, 39, -1, 40, 41, -1, -1, 42, 43, 44, 45, 46, -1,
    47, -1, -1, 48
  };

const struct fhir_deserialize::MemberNameAndOffset *
Encounter_Gperf::Encounter_MemberLookup (register const char *str, register unsigned int len)
{
  if (len <= MAX_WORD_LENGTH && len >= MIN_WORD_LENGTH)
    {
      register int key = hash (str, len);

      if (key <= MAX_HASH_VALUE && key >= 0)
        {
          register int index = lookup[key];

          if (index >= 0)
            {
              register const char *s = word_array_Encounter[index].name;

              if (*str == *s && !strncmp (str + 1, s + 1, len - 1) && s[len] == '\0')
                return &word_array_Encounter[index];
            }
        }
    }
  return 0;
}
