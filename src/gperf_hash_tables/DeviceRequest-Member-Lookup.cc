/* C++ code produced by gperf version 3.0.1 */
/* Command-line: gperf.exe -t --output-file=src/gperf_hash_tables/DeviceRequest-Member-Lookup.cc -CGD ./gperf_class_files/DeviceRequest.gperf  */
/* Computed positions: -k'4,$' */

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

#line 8 "./gperf_class_files/DeviceRequest.gperf"
struct fhir_deserialize::MemberNameAndOffset;
enum
  {
    TOTAL_KEYWORDS = 51,
    MIN_WORD_LENGTH = 2,
    MAX_WORD_LENGTH = 27,
    MIN_HASH_VALUE = 4,
    MAX_HASH_VALUE = 86
  };

/* maximum key range = 83, duplicates = 0 */

class DeviceRequest_Gperf
{
private:
  static inline unsigned int hash (const char *str, unsigned int len);
public:
  static const struct fhir_deserialize::MemberNameAndOffset *DeviceRequest_MemberLookup (const char *str, unsigned int len);
};

inline unsigned int
DeviceRequest_Gperf::hash (register const char *str, register unsigned int len)
{
  static const unsigned char asso_values[] =
    {
      87, 87, 87, 87, 87, 87, 87, 87, 87, 87,
      87, 87, 87, 87, 87, 87, 87, 87, 87, 87,
      87, 87, 87, 87, 87, 87, 87, 87, 87, 87,
      87, 87, 87, 87, 87, 87, 87, 87, 87, 87,
      87, 87, 87, 87, 87, 87, 87, 87, 87, 87,
      87, 87, 87, 87, 87, 87, 87, 87, 87, 87,
      87, 87, 87, 87, 87, 87, 87, 87, 87, 87,
      87, 87, 87, 87, 87, 87, 87, 87, 87, 87,
      87, 87, 87, 87, 87, 87, 87, 87, 87, 87,
      87, 87, 87, 87, 87, 87, 87, 20, 87, 87,
      55, 10, 45, 30, 25, 35,  0, 87, 30, 87,
      30,  0, 55, 87, 30, 20,  0, 15, 87, 87,
      87, 30, 87, 87, 87, 87, 87, 87, 87, 87,
      87, 87, 87, 87, 87, 87, 87, 87, 87, 87,
      87, 87, 87, 87, 87, 87, 87, 87, 87, 87,
      87, 87, 87, 87, 87, 87, 87, 87, 87, 87,
      87, 87, 87, 87, 87, 87, 87, 87, 87, 87,
      87, 87, 87, 87, 87, 87, 87, 87, 87, 87,
      87, 87, 87, 87, 87, 87, 87, 87, 87, 87,
      87, 87, 87, 87, 87, 87, 87, 87, 87, 87,
      87, 87, 87, 87, 87, 87, 87, 87, 87, 87,
      87, 87, 87, 87, 87, 87, 87, 87, 87, 87,
      87, 87, 87, 87, 87, 87, 87, 87, 87, 87,
      87, 87, 87, 87, 87, 87, 87, 87, 87, 87,
      87, 87, 87, 87, 87, 87, 87, 87, 87, 87,
      87, 87, 87, 87, 87, 87
    };
  register int hval = len;

  switch (hval)
    {
      default:
        hval += asso_values[(unsigned char)str[3]];
      /*FALLTHROUGH*/
      case 3:
      case 2:
        break;
    }
  return hval + asso_values[(unsigned char)str[len - 1]];
}

static const struct fhir_deserialize::MemberNameAndOffset word_array_DeviceRequest[] =
  {
#line 15 "./gperf_class_files/DeviceRequest.gperf"
    {"text", 0x40, 5, -1},
#line 40 "./gperf_class_files/DeviceRequest.gperf"
    {"subject", 0x120, 30, -1},
#line 31 "./gperf_class_files/DeviceRequest.gperf"
    {"priorRequest", 0xc0, 21, -1},
#line 16 "./gperf_class_files/DeviceRequest.gperf"
    {"contained_count", 0x48, 6, -1},
#line 34 "./gperf_class_files/DeviceRequest.gperf"
    {"intent", 0xe0, 24, -1},
#line 30 "./gperf_class_files/DeviceRequest.gperf"
    {"priorRequest_count", 0xb8, 20, -1},
#line 57 "./gperf_class_files/DeviceRequest.gperf"
    {"note_count", 0x1b0, 46, -1},
#line 26 "./gperf_class_files/DeviceRequest.gperf"
    {"instantiatesUri_count", 0x98, 16, -1},
#line 10 "./gperf_class_files/DeviceRequest.gperf"
    {"resourceType", 0x0, 0, -1},
#line 28 "./gperf_class_files/DeviceRequest.gperf"
    {"basedOn_count", 0xa8, 18, -1},
#line 58 "./gperf_class_files/DeviceRequest.gperf"
    {"note", 0x1b8, 47, -1},
#line 18 "./gperf_class_files/DeviceRequest.gperf"
    {"extension_count", 0x58, 8, -1},
#line 33 "./gperf_class_files/DeviceRequest.gperf"
    {"status", 0xd0, 23, -1},
#line 24 "./gperf_class_files/DeviceRequest.gperf"
    {"instantiatesCanonical_count", 0x88, 14, -1},
#line 37 "./gperf_class_files/DeviceRequest.gperf"
    {"codeCodeableConcept", 0x108, 27, 1},
#line 53 "./gperf_class_files/DeviceRequest.gperf"
    {"insurance_count", 0x190, 42, -1},
#line 59 "./gperf_class_files/DeviceRequest.gperf"
    {"relevantHistory_count", 0x1c0, 48, -1},
#line 36 "./gperf_class_files/DeviceRequest.gperf"
    {"codeReference", 0x108, 27, 0},
#line 54 "./gperf_class_files/DeviceRequest.gperf"
    {"insurance", 0x198, 43, -1},
#line 38 "./gperf_class_files/DeviceRequest.gperf"
    {"parameter_count", 0x110, 28, -1},
#line 49 "./gperf_class_files/DeviceRequest.gperf"
    {"reasonCode_count", 0x170, 38, -1},
#line 35 "./gperf_class_files/DeviceRequest.gperf"
    {"priority", 0xf0, 25, -1},
#line 41 "./gperf_class_files/DeviceRequest.gperf"
    {"encounter", 0x128, 31, -1},
#line 50 "./gperf_class_files/DeviceRequest.gperf"
    {"reasonCode", 0x178, 39, -1},
#line 51 "./gperf_class_files/DeviceRequest.gperf"
    {"reasonReference_count", 0x180, 40, -1},
#line 42 "./gperf_class_files/DeviceRequest.gperf"
    {"occurrenceDateTime", 0x138, 33, 0},
#line 12 "./gperf_class_files/DeviceRequest.gperf"
    {"meta", 0x18, 2, -1},
#line 52 "./gperf_class_files/DeviceRequest.gperf"
    {"reasonReference", 0x188, 41, -1},
#line 22 "./gperf_class_files/DeviceRequest.gperf"
    {"identifier_count", 0x78, 12, -1},
#line 29 "./gperf_class_files/DeviceRequest.gperf"
    {"basedOn", 0xb0, 19, -1},
#line 14 "./gperf_class_files/DeviceRequest.gperf"
    {"language", 0x30, 4, -1},
#line 19 "./gperf_class_files/DeviceRequest.gperf"
    {"extension", 0x60, 9, -1},
#line 27 "./gperf_class_files/DeviceRequest.gperf"
    {"instantiatesUri", 0xa0, 17, -1},
#line 25 "./gperf_class_files/DeviceRequest.gperf"
    {"instantiatesCanonical", 0x90, 15, -1},
#line 46 "./gperf_class_files/DeviceRequest.gperf"
    {"requester", 0x158, 35, -1},
#line 60 "./gperf_class_files/DeviceRequest.gperf"
    {"relevantHistory", 0x1c8, 49, -1},
#line 11 "./gperf_class_files/DeviceRequest.gperf"
    {"id", 0x8, 1, -1},
#line 20 "./gperf_class_files/DeviceRequest.gperf"
    {"modifierExtension_count", 0x68, 10, -1},
#line 39 "./gperf_class_files/DeviceRequest.gperf"
    {"parameter", 0x118, 29, -1},
#line 32 "./gperf_class_files/DeviceRequest.gperf"
    {"groupIdentifier", 0xc8, 22, -1},
#line 44 "./gperf_class_files/DeviceRequest.gperf"
    {"occurrenceTiming", 0x138, 33, 2},
#line 13 "./gperf_class_files/DeviceRequest.gperf"
    {"implicitRules", 0x20, 3, -1},
#line 17 "./gperf_class_files/DeviceRequest.gperf"
    {"contained", 0x50, 7, -1},
#line 45 "./gperf_class_files/DeviceRequest.gperf"
    {"authoredOn", 0x148, 34, -1},
#line 47 "./gperf_class_files/DeviceRequest.gperf"
    {"performerType", 0x160, 36, -1},
#line 56 "./gperf_class_files/DeviceRequest.gperf"
    {"supportingInfo", 0x1a8, 45, -1},
#line 23 "./gperf_class_files/DeviceRequest.gperf"
    {"identifier", 0x80, 13, -1},
#line 55 "./gperf_class_files/DeviceRequest.gperf"
    {"supportingInfo_count", 0x1a0, 44, -1},
#line 21 "./gperf_class_files/DeviceRequest.gperf"
    {"modifierExtension", 0x70, 11, -1},
#line 48 "./gperf_class_files/DeviceRequest.gperf"
    {"performer", 0x168, 37, -1},
#line 43 "./gperf_class_files/DeviceRequest.gperf"
    {"occurrencePeriod", 0x138, 33, 1}
  };

static const signed char lookup[] =
  {
    -1, -1, -1, -1,  0, -1, -1,  1, -1, -1, -1, -1,  2, -1,
    -1,  3,  4, -1,  5, -1,  6,  7,  8,  9, 10, 11, 12, 13,
    -1, 14, 15, 16, -1, 17, 18, 19, 20, -1, 21, 22, 23, 24,
    -1, 25, 26, 27, 28, 29, 30, 31, 32, 33, -1, -1, 34, 35,
    -1, 36, 37, 38, 39, 40, -1, 41, 42, 43, -1, -1, 44, 45,
    46, -1, -1, -1, -1, 47, -1, -1, -1, -1, -1, -1, 48, -1,
    49, -1, 50
  };

const struct fhir_deserialize::MemberNameAndOffset *
DeviceRequest_Gperf::DeviceRequest_MemberLookup (register const char *str, register unsigned int len)
{
  if (len <= MAX_WORD_LENGTH && len >= MIN_WORD_LENGTH)
    {
      register int key = hash (str, len);

      if (key <= MAX_HASH_VALUE && key >= 0)
        {
          register int index = lookup[key];

          if (index >= 0)
            {
              register const char *s = word_array_DeviceRequest[index].name;

              if (*str == *s && !strncmp (str + 1, s + 1, len - 1) && s[len] == '\0')
                return &word_array_DeviceRequest[index];
            }
        }
    }
  return 0;
}
