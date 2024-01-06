/* C++ code produced by gperf version 3.0.1 */
/* Command-line: gperf.exe -t --output-file=src/gperf_hash_tables/Communication-Member-Lookup.cc -CGD ./gperf_class_files/Communication.gperf  */
/* Computed positions: -k'3,$' */

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

#line 8 "./gperf_class_files/Communication.gperf"
struct fhir_deserialize::MemberNameAndOffset;
enum
  {
    TOTAL_KEYWORDS = 49,
    MIN_WORD_LENGTH = 2,
    MAX_WORD_LENGTH = 27,
    MIN_HASH_VALUE = 4,
    MAX_HASH_VALUE = 89
  };

/* maximum key range = 86, duplicates = 0 */

class Communication_Gperf
{
private:
  static inline unsigned int hash (const char *str, unsigned int len);
public:
  static const struct fhir_deserialize::MemberNameAndOffset *Communication_MemberLookup (const char *str, unsigned int len);
};

inline unsigned int
Communication_Gperf::hash (register const char *str, register unsigned int len)
{
  static const unsigned char asso_values[] =
    {
      90, 90, 90, 90, 90, 90, 90, 90, 90, 90,
      90, 90, 90, 90, 90, 90, 90, 90, 90, 90,
      90, 90, 90, 90, 90, 90, 90, 90, 90, 90,
      90, 90, 90, 90, 90, 90, 90, 90, 90, 90,
      90, 90, 90, 90, 90, 90, 90, 90, 90, 90,
      90, 90, 90, 90, 90, 90, 90, 90, 90, 90,
      90, 90, 90, 90, 90, 90, 90, 90, 90, 90,
      90, 90, 90, 90, 90, 90, 90, 90, 90, 90,
      90, 90, 55, 90, 90, 90, 90, 90, 90, 90,
      90, 90, 90, 90, 90, 90, 90,  0,  0, 35,
      10, 25,  5, 90, 90, 15, 90, 90,  5, 10,
      15,  0,  5, 90, 45, 25,  0, 90, 90, 90,
       5,  0, 90, 90, 90, 90, 90, 90, 90, 90,
      90, 90, 90, 90, 90, 90, 90, 90, 90, 90,
      90, 90, 90, 90, 90, 90, 90, 90, 90, 90,
      90, 90, 90, 90, 90, 90, 90, 90, 90, 90,
      90, 90, 90, 90, 90, 90, 90, 90, 90, 90,
      90, 90, 90, 90, 90, 90, 90, 90, 90, 90,
      90, 90, 90, 90, 90, 90, 90, 90, 90, 90,
      90, 90, 90, 90, 90, 90, 90, 90, 90, 90,
      90, 90, 90, 90, 90, 90, 90, 90, 90, 90,
      90, 90, 90, 90, 90, 90, 90, 90, 90, 90,
      90, 90, 90, 90, 90, 90, 90, 90, 90, 90,
      90, 90, 90, 90, 90, 90, 90, 90, 90, 90,
      90, 90, 90, 90, 90, 90, 90, 90, 90, 90,
      90, 90, 90, 90, 90, 90
    };
  register int hval = len;

  switch (hval)
    {
      default:
        hval += asso_values[(unsigned char)str[2]];
      /*FALLTHROUGH*/
      case 2:
        break;
    }
  return hval + asso_values[(unsigned char)str[len - 1]];
}

static const struct fhir_deserialize::MemberNameAndOffset word_array_Communication[] =
  {
#line 12 "./gperf_class_files/Communication.gperf"
    {"meta", 0x18, 2, -1},
#line 44 "./gperf_class_files/Communication.gperf"
    {"about", 0x138, 34, -1},
#line 41 "./gperf_class_files/Communication.gperf"
    {"subject", 0x120, 31, -1},
#line 37 "./gperf_class_files/Communication.gperf"
    {"category", 0xf8, 27, -1},
#line 15 "./gperf_class_files/Communication.gperf"
    {"text", 0x40, 5, -1},
#line 57 "./gperf_class_files/Communication.gperf"
    {"note_count", 0x1b0, 47, -1},
#line 43 "./gperf_class_files/Communication.gperf"
    {"about_count", 0x130, 33, -1},
#line 11 "./gperf_class_files/Communication.gperf"
    {"id", 0x8, 1, -1},
#line 55 "./gperf_class_files/Communication.gperf"
    {"payload_count", 0x1a0, 45, -1},
#line 36 "./gperf_class_files/Communication.gperf"
    {"category_count", 0xf0, 26, -1},
#line 18 "./gperf_class_files/Communication.gperf"
    {"extension_count", 0x58, 8, -1},
#line 51 "./gperf_class_files/Communication.gperf"
    {"reasonCode_count", 0x180, 41, -1},
#line 56 "./gperf_class_files/Communication.gperf"
    {"payload", 0x1a8, 46, -1},
#line 46 "./gperf_class_files/Communication.gperf"
    {"sent", 0x148, 36, -1},
#line 53 "./gperf_class_files/Communication.gperf"
    {"reasonReference_count", 0x190, 43, -1},
#line 39 "./gperf_class_files/Communication.gperf"
    {"medium_count", 0x110, 29, -1},
#line 38 "./gperf_class_files/Communication.gperf"
    {"priority", 0x100, 28, -1},
#line 19 "./gperf_class_files/Communication.gperf"
    {"extension", 0x60, 9, -1},
#line 40 "./gperf_class_files/Communication.gperf"
    {"medium", 0x118, 30, -1},
#line 35 "./gperf_class_files/Communication.gperf"
    {"statusReason", 0xe8, 25, -1},
#line 58 "./gperf_class_files/Communication.gperf"
    {"note", 0x1b8, 48, -1},
#line 16 "./gperf_class_files/Communication.gperf"
    {"contained_count", 0x48, 6, -1},
#line 34 "./gperf_class_files/Communication.gperf"
    {"status", 0xd8, 24, -1},
#line 20 "./gperf_class_files/Communication.gperf"
    {"modifierExtension_count", 0x68, 10, -1},
#line 17 "./gperf_class_files/Communication.gperf"
    {"contained", 0x50, 7, -1},
#line 52 "./gperf_class_files/Communication.gperf"
    {"reasonCode", 0x188, 42, -1},
#line 28 "./gperf_class_files/Communication.gperf"
    {"basedOn_count", 0xa8, 18, -1},
#line 54 "./gperf_class_files/Communication.gperf"
    {"reasonReference", 0x198, 44, -1},
#line 22 "./gperf_class_files/Communication.gperf"
    {"identifier_count", 0x78, 12, -1},
#line 21 "./gperf_class_files/Communication.gperf"
    {"modifierExtension", 0x70, 11, -1},
#line 13 "./gperf_class_files/Communication.gperf"
    {"implicitRules", 0x20, 3, -1},
#line 49 "./gperf_class_files/Communication.gperf"
    {"recipient", 0x170, 39, -1},
#line 42 "./gperf_class_files/Communication.gperf"
    {"topic", 0x128, 32, -1},
#line 26 "./gperf_class_files/Communication.gperf"
    {"instantiatesUri_count", 0x98, 16, -1},
#line 29 "./gperf_class_files/Communication.gperf"
    {"basedOn", 0xb0, 19, -1},
#line 14 "./gperf_class_files/Communication.gperf"
    {"language", 0x30, 4, -1},
#line 48 "./gperf_class_files/Communication.gperf"
    {"recipient_count", 0x168, 38, -1},
#line 25 "./gperf_class_files/Communication.gperf"
    {"instantiatesCanonical", 0x90, 15, -1},
#line 24 "./gperf_class_files/Communication.gperf"
    {"instantiatesCanonical_count", 0x88, 14, -1},
#line 47 "./gperf_class_files/Communication.gperf"
    {"received", 0x158, 37, -1},
#line 27 "./gperf_class_files/Communication.gperf"
    {"instantiatesUri", 0xa0, 17, -1},
#line 31 "./gperf_class_files/Communication.gperf"
    {"partOf", 0xc0, 21, -1},
#line 30 "./gperf_class_files/Communication.gperf"
    {"partOf_count", 0xb8, 20, -1},
#line 10 "./gperf_class_files/Communication.gperf"
    {"resourceType", 0x0, 0, -1},
#line 50 "./gperf_class_files/Communication.gperf"
    {"sender", 0x178, 40, -1},
#line 33 "./gperf_class_files/Communication.gperf"
    {"inResponseTo", 0xd0, 23, -1},
#line 32 "./gperf_class_files/Communication.gperf"
    {"inResponseTo_count", 0xc8, 22, -1},
#line 23 "./gperf_class_files/Communication.gperf"
    {"identifier", 0x80, 13, -1},
#line 45 "./gperf_class_files/Communication.gperf"
    {"encounter", 0x140, 35, -1}
  };

static const signed char lookup[] =
  {
    -1, -1, -1, -1,  0,  1, -1,  2,  3,  4,  5,  6,  7,  8,
     9, 10, 11, 12, -1, 13, -1, 14, 15, 16, 17, -1, 18, 19,
    -1, 20, 21, 22, -1, 23, 24, 25, -1, -1, 26, -1, 27, 28,
    29, 30, 31, 32, 33, 34, 35, -1, 36, 37, 38, 39, -1, 40,
    41, 42, -1, -1, -1, -1, 43, -1, -1, -1, 44, 45, -1, -1,
    -1, -1, -1, 46, -1, -1, -1, -1, -1, -1, 47, -1, -1, -1,
    -1, -1, -1, -1, -1, 48
  };

const struct fhir_deserialize::MemberNameAndOffset *
Communication_Gperf::Communication_MemberLookup (register const char *str, register unsigned int len)
{
  if (len <= MAX_WORD_LENGTH && len >= MIN_WORD_LENGTH)
    {
      register int key = hash (str, len);

      if (key <= MAX_HASH_VALUE && key >= 0)
        {
          register int index = lookup[key];

          if (index >= 0)
            {
              register const char *s = word_array_Communication[index].name;

              if (*str == *s && !strncmp (str + 1, s + 1, len - 1) && s[len] == '\0')
                return &word_array_Communication[index];
            }
        }
    }
  return 0;
}
