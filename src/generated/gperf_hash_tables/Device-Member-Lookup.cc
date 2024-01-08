/* C++ code produced by gperf version 3.0.1 */
/* Command-line: gperf.exe -t --output-file=src/generated/gperf_hash_tables/Device-Member-Lookup.cc -CGD ./src/generated/gperf_class_files/Device.gperf  */
/* Computed positions: -k'1,3' */

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

#line 8 "./src/generated/gperf_class_files/Device.gperf"
struct fhir_deserialize::MemberNameAndOffset;
enum
  {
    TOTAL_KEYWORDS = 48,
    MIN_WORD_LENGTH = 2,
    MAX_WORD_LENGTH = 23,
    MIN_HASH_VALUE = 2,
    MAX_HASH_VALUE = 79
  };

/* maximum key range = 78, duplicates = 0 */

class Device_Gperf
{
private:
  static inline unsigned int hash (const char *str, unsigned int len);
public:
  static const struct fhir_deserialize::MemberNameAndOffset *Device_MemberLookup (const char *str, unsigned int len);
};

inline unsigned int
Device_Gperf::hash (register const char *str, register unsigned int len)
{
  static const unsigned char asso_values[] =
    {
      80, 80, 80, 80, 80, 80, 80, 80, 80, 80,
      80, 80, 80, 80, 80, 80, 80, 80, 80, 80,
      80, 80, 80, 80, 80, 80, 80, 80, 80, 80,
      80, 80, 80, 80, 80, 80, 80, 80, 80, 80,
      80, 80, 80, 80, 80, 80, 80, 80, 80, 80,
      80, 80, 80, 80, 80, 80, 80, 80, 80, 80,
      80, 80, 80, 80, 80, 80, 80, 80, 80, 80,
      80, 80, 80, 80, 80, 80, 80, 80, 80, 80,
      80, 80, 80, 80, 80, 80, 80, 80, 80, 80,
      80, 80, 80, 80, 80, 80, 80, 80, 10, 25,
      15,  0,  0, 20, 80,  0, 45, 80, 40, 10,
      55,  0,  5, 40, 10, 15, 35,  0, 30, 25,
      80,  0, 80, 80, 80, 80, 80, 80, 80, 80,
      80, 80, 80, 80, 80, 80, 80, 80, 80, 80,
      80, 80, 80, 80, 80, 80, 80, 80, 80, 80,
      80, 80, 80, 80, 80, 80, 80, 80, 80, 80,
      80, 80, 80, 80, 80, 80, 80, 80, 80, 80,
      80, 80, 80, 80, 80, 80, 80, 80, 80, 80,
      80, 80, 80, 80, 80, 80, 80, 80, 80, 80,
      80, 80, 80, 80, 80, 80, 80, 80, 80, 80,
      80, 80, 80, 80, 80, 80, 80, 80, 80, 80,
      80, 80, 80, 80, 80, 80, 80, 80, 80, 80,
      80, 80, 80, 80, 80, 80, 80, 80, 80, 80,
      80, 80, 80, 80, 80, 80, 80, 80, 80, 80,
      80, 80, 80, 80, 80, 80, 80, 80, 80, 80,
      80, 80, 80, 80, 80, 80, 80
    };
  register int hval = len;

  switch (hval)
    {
      default:
        hval += asso_values[(unsigned char)str[2]+1];
      /*FALLTHROUGH*/
      case 2:
      case 1:
        hval += asso_values[(unsigned char)str[0]];
        break;
    }
  return hval;
}

static const struct fhir_deserialize::MemberNameAndOffset word_array_Device[] =
  {
#line 11 "./src/generated/gperf_class_files/Device.gperf"
    {"id", 0x8, 1, -1},
#line 48 "./src/generated/gperf_class_files/Device.gperf"
    {"owner", 0x190, 38, -1},
#line 19 "./src/generated/gperf_class_files/Device.gperf"
    {"extension", 0x60, 9, -1},
#line 23 "./src/generated/gperf_class_files/Device.gperf"
    {"identifier", 0x80, 13, -1},
#line 47 "./src/generated/gperf_class_files/Device.gperf"
    {"patient", 0x188, 37, -1},
#line 52 "./src/generated/gperf_class_files/Device.gperf"
    {"url", 0x1b0, 42, -1},
#line 12 "./src/generated/gperf_class_files/Device.gperf"
    {"meta", 0x18, 2, -1},
#line 18 "./src/generated/gperf_class_files/Device.gperf"
    {"extension_count", 0x58, 8, -1},
#line 22 "./src/generated/gperf_class_files/Device.gperf"
    {"identifier_count", 0x78, 12, -1},
#line 46 "./src/generated/gperf_class_files/Device.gperf"
    {"property", 0x180, 36, -1},
#line 38 "./src/generated/gperf_class_files/Device.gperf"
    {"modelNumber", 0x130, 28, -1},
#line 31 "./src/generated/gperf_class_files/Device.gperf"
    {"manufacturer", 0xd0, 21, -1},
#line 45 "./src/generated/gperf_class_files/Device.gperf"
    {"property_count", 0x178, 35, -1},
#line 32 "./src/generated/gperf_class_files/Device.gperf"
    {"manufactureDate", 0xe0, 22, -1},
#line 57 "./src/generated/gperf_class_files/Device.gperf"
    {"parent", 0x1e0, 47, -1},
#line 21 "./src/generated/gperf_class_files/Device.gperf"
    {"modifierExtension", 0x70, 11, -1},
#line 42 "./src/generated/gperf_class_files/Device.gperf"
    {"specialization", 0x160, 32, -1},
#line 39 "./src/generated/gperf_class_files/Device.gperf"
    {"partNumber", 0x140, 29, -1},
#line 27 "./src/generated/gperf_class_files/Device.gperf"
    {"status", 0xa0, 17, -1},
#line 50 "./src/generated/gperf_class_files/Device.gperf"
    {"contact", 0x1a0, 40, -1},
#line 20 "./src/generated/gperf_class_files/Device.gperf"
    {"modifierExtension_count", 0x68, 10, -1},
#line 17 "./src/generated/gperf_class_files/Device.gperf"
    {"contained", 0x50, 7, -1},
#line 41 "./src/generated/gperf_class_files/Device.gperf"
    {"specialization_count", 0x158, 31, -1},
#line 29 "./src/generated/gperf_class_files/Device.gperf"
    {"statusReason", 0xb8, 19, -1},
#line 49 "./src/generated/gperf_class_files/Device.gperf"
    {"contact_count", 0x198, 39, -1},
#line 15 "./src/generated/gperf_class_files/Device.gperf"
    {"text", 0x40, 5, -1},
#line 16 "./src/generated/gperf_class_files/Device.gperf"
    {"contained_count", 0x48, 6, -1},
#line 56 "./src/generated/gperf_class_files/Device.gperf"
    {"safety", 0x1d8, 46, -1},
#line 35 "./src/generated/gperf_class_files/Device.gperf"
    {"serialNumber", 0x110, 25, -1},
#line 28 "./src/generated/gperf_class_files/Device.gperf"
    {"statusReason_count", 0xb0, 18, -1},
#line 24 "./src/generated/gperf_class_files/Device.gperf"
    {"definition", 0x88, 14, -1},
#line 55 "./src/generated/gperf_class_files/Device.gperf"
    {"safety_count", 0x1d0, 45, -1},
#line 14 "./src/generated/gperf_class_files/Device.gperf"
    {"language", 0x30, 4, -1},
#line 34 "./src/generated/gperf_class_files/Device.gperf"
    {"lotNumber", 0x100, 24, -1},
#line 37 "./src/generated/gperf_class_files/Device.gperf"
    {"deviceName", 0x128, 27, -1},
#line 44 "./src/generated/gperf_class_files/Device.gperf"
    {"version", 0x170, 34, -1},
#line 13 "./src/generated/gperf_class_files/Device.gperf"
    {"implicitRules", 0x20, 3, -1},
#line 33 "./src/generated/gperf_class_files/Device.gperf"
    {"expirationDate", 0xf0, 23, -1},
#line 26 "./src/generated/gperf_class_files/Device.gperf"
    {"udiCarrier", 0x98, 16, -1},
#line 36 "./src/generated/gperf_class_files/Device.gperf"
    {"deviceName_count", 0x120, 26, -1},
#line 10 "./src/generated/gperf_class_files/Device.gperf"
    {"resourceType", 0x0, 0, -1},
#line 43 "./src/generated/gperf_class_files/Device.gperf"
    {"version_count", 0x168, 33, -1},
#line 54 "./src/generated/gperf_class_files/Device.gperf"
    {"note", 0x1c8, 44, -1},
#line 25 "./src/generated/gperf_class_files/Device.gperf"
    {"udiCarrier_count", 0x90, 15, -1},
#line 51 "./src/generated/gperf_class_files/Device.gperf"
    {"location", 0x1a8, 41, -1},
#line 53 "./src/generated/gperf_class_files/Device.gperf"
    {"note_count", 0x1c0, 43, -1},
#line 30 "./src/generated/gperf_class_files/Device.gperf"
    {"distinctIdentifier", 0xc0, 20, -1},
#line 40 "./src/generated/gperf_class_files/Device.gperf"
    {"type", 0x150, 30, -1}
  };

static const signed char lookup[] =
  {
    -1, -1,  0, -1, -1,  1, -1, -1, -1,  2,  3, -1,  4,  5,
     6,  7,  8, -1,  9, -1, -1, 10, 11, -1, 12, 13, 14, 15,
    -1, 16, 17, 18, 19, 20, 21, 22, -1, 23, 24, 25, 26, 27,
    28, 29, -1, 30, -1, 31, 32, 33, 34, -1, 35, 36, 37, 38,
    39, 40, 41, 42, -1, 43, -1, 44, -1, 45, -1, -1, 46, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, 47
  };

const struct fhir_deserialize::MemberNameAndOffset *
Device_Gperf::Device_MemberLookup (register const char *str, register unsigned int len)
{
  if (len <= MAX_WORD_LENGTH && len >= MIN_WORD_LENGTH)
    {
      register int key = hash (str, len);

      if (key <= MAX_HASH_VALUE && key >= 0)
        {
          register int index = lookup[key];

          if (index >= 0)
            {
              register const char *s = word_array_Device[index].name;

              if (*str == *s && !strncmp (str + 1, s + 1, len - 1) && s[len] == '\0')
                return &word_array_Device[index];
            }
        }
    }
  return 0;
}
