/* C++ code produced by gperf version 3.0.1 */
/* Command-line: gperf.exe -t --output-file=src/generated/gperf_hash_tables/DeviceDefinition-Member-Lookup.cc -CGD ./src/generated/gperf_class_files/DeviceDefinition.gperf  */
/* Computed positions: -k'1-2' */

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

#line 8 "./src/generated/gperf_class_files/DeviceDefinition.gperf"
struct fhir_deserialize::MemberNameAndOffset;
enum
  {
    TOTAL_KEYWORDS = 48,
    MIN_WORD_LENGTH = 2,
    MAX_WORD_LENGTH = 25,
    MIN_HASH_VALUE = 4,
    MAX_HASH_VALUE = 63
  };

/* maximum key range = 60, duplicates = 0 */

class DeviceDefinition_Gperf
{
private:
  static inline unsigned int hash (const char *str, unsigned int len);
public:
  static const struct fhir_deserialize::MemberNameAndOffset *DeviceDefinition_MemberLookup (const char *str, unsigned int len);
};

inline unsigned int
DeviceDefinition_Gperf::hash (register const char *str, register unsigned int len)
{
  static const unsigned char asso_values[] =
    {
      64, 64, 64, 64, 64, 64, 64, 64, 64, 64,
      64, 64, 64, 64, 64, 64, 64, 64, 64, 64,
      64, 64, 64, 64, 64, 64, 64, 64, 64, 64,
      64, 64, 64, 64, 64, 64, 64, 64, 64, 64,
      64, 64, 64, 64, 64, 64, 64, 64, 64, 64,
      64, 64, 64, 64, 64, 64, 64, 64, 64, 64,
      64, 64, 64, 64, 64, 64, 64, 64, 64, 64,
      64, 64, 64, 64, 64, 64, 64, 64, 64, 64,
      64, 64, 64, 64, 64, 64, 64, 64, 64, 64,
      64, 64, 64, 64, 64, 64, 64,  0, 64,  0,
      10,  0, 64, 64, 20, 15, 64, 64, 40,  0,
      30,  0, 10, 45, 20,  0, 25, 10, 30,  0,
      10, 20, 64, 64, 64, 64, 64, 64, 64, 64,
      64, 64, 64, 64, 64, 64, 64, 64, 64, 64,
      64, 64, 64, 64, 64, 64, 64, 64, 64, 64,
      64, 64, 64, 64, 64, 64, 64, 64, 64, 64,
      64, 64, 64, 64, 64, 64, 64, 64, 64, 64,
      64, 64, 64, 64, 64, 64, 64, 64, 64, 64,
      64, 64, 64, 64, 64, 64, 64, 64, 64, 64,
      64, 64, 64, 64, 64, 64, 64, 64, 64, 64,
      64, 64, 64, 64, 64, 64, 64, 64, 64, 64,
      64, 64, 64, 64, 64, 64, 64, 64, 64, 64,
      64, 64, 64, 64, 64, 64, 64, 64, 64, 64,
      64, 64, 64, 64, 64, 64, 64, 64, 64, 64,
      64, 64, 64, 64, 64, 64, 64, 64, 64, 64,
      64, 64, 64, 64, 64, 64
    };
  return len + asso_values[(unsigned char)str[1]] + asso_values[(unsigned char)str[0]];
}

static const struct fhir_deserialize::MemberNameAndOffset word_array_DeviceDefinition[] =
  {
#line 12 "./src/generated/gperf_class_files/DeviceDefinition.gperf"
    {"meta", 0x18, 2, -1},
#line 47 "./src/generated/gperf_class_files/DeviceDefinition.gperf"
    {"owner", 0x150, 37, -1},
#line 37 "./src/generated/gperf_class_files/DeviceDefinition.gperf"
    {"safety", 0x100, 27, -1},
#line 49 "./src/generated/gperf_class_files/DeviceDefinition.gperf"
    {"contact", 0x160, 39, -1},
#line 57 "./src/generated/gperf_class_files/DeviceDefinition.gperf"
    {"material", 0x1b0, 47, -1},
#line 17 "./src/generated/gperf_class_files/DeviceDefinition.gperf"
    {"contained", 0x50, 7, -1},
#line 44 "./src/generated/gperf_class_files/DeviceDefinition.gperf"
    {"capability", 0x138, 34, -1},
#line 30 "./src/generated/gperf_class_files/DeviceDefinition.gperf"
    {"modelNumber", 0xc0, 20, -1},
#line 36 "./src/generated/gperf_class_files/DeviceDefinition.gperf"
    {"safety_count", 0xf8, 26, -1},
#line 48 "./src/generated/gperf_class_files/DeviceDefinition.gperf"
    {"contact_count", 0x158, 38, -1},
#line 56 "./src/generated/gperf_class_files/DeviceDefinition.gperf"
    {"material_count", 0x1a8, 46, -1},
#line 16 "./src/generated/gperf_class_files/DeviceDefinition.gperf"
    {"contained_count", 0x48, 6, -1},
#line 43 "./src/generated/gperf_class_files/DeviceDefinition.gperf"
    {"capability_count", 0x130, 33, -1},
#line 21 "./src/generated/gperf_class_files/DeviceDefinition.gperf"
    {"modifierExtension", 0x70, 11, -1},
#line 26 "./src/generated/gperf_class_files/DeviceDefinition.gperf"
    {"manufacturerString", 0xa0, 17, 0},
#line 19 "./src/generated/gperf_class_files/DeviceDefinition.gperf"
    {"extension", 0x60, 9, -1},
#line 29 "./src/generated/gperf_class_files/DeviceDefinition.gperf"
    {"deviceName", 0xb8, 19, -1},
#line 27 "./src/generated/gperf_class_files/DeviceDefinition.gperf"
    {"manufacturerReference", 0xa0, 17, 1},
#line 55 "./src/generated/gperf_class_files/DeviceDefinition.gperf"
    {"parentDevice", 0x1a0, 45, -1},
#line 20 "./src/generated/gperf_class_files/DeviceDefinition.gperf"
    {"modifierExtension_count", 0x68, 10, -1},
#line 33 "./src/generated/gperf_class_files/DeviceDefinition.gperf"
    {"specialization", 0xe0, 23, -1},
#line 18 "./src/generated/gperf_class_files/DeviceDefinition.gperf"
    {"extension_count", 0x58, 8, -1},
#line 28 "./src/generated/gperf_class_files/DeviceDefinition.gperf"
    {"deviceName_count", 0xb0, 18, -1},
#line 11 "./src/generated/gperf_class_files/DeviceDefinition.gperf"
    {"id", 0x8, 1, -1},
#line 13 "./src/generated/gperf_class_files/DeviceDefinition.gperf"
    {"implicitRules", 0x20, 3, -1},
#line 15 "./src/generated/gperf_class_files/DeviceDefinition.gperf"
    {"text", 0x40, 5, -1},
#line 32 "./src/generated/gperf_class_files/DeviceDefinition.gperf"
    {"specialization_count", 0xd8, 22, -1},
#line 10 "./src/generated/gperf_class_files/DeviceDefinition.gperf"
    {"resourceType", 0x0, 0, -1},
#line 50 "./src/generated/gperf_class_files/DeviceDefinition.gperf"
    {"url", 0x168, 40, -1},
#line 53 "./src/generated/gperf_class_files/DeviceDefinition.gperf"
    {"note", 0x190, 43, -1},
#line 23 "./src/generated/gperf_class_files/DeviceDefinition.gperf"
    {"identifier", 0x80, 13, -1},
#line 39 "./src/generated/gperf_class_files/DeviceDefinition.gperf"
    {"shelfLifeStorage", 0x110, 29, -1},
#line 35 "./src/generated/gperf_class_files/DeviceDefinition.gperf"
    {"version", 0xf0, 25, -1},
#line 46 "./src/generated/gperf_class_files/DeviceDefinition.gperf"
    {"property", 0x148, 36, -1},
#line 25 "./src/generated/gperf_class_files/DeviceDefinition.gperf"
    {"udiDeviceIdentifier", 0x90, 15, -1},
#line 52 "./src/generated/gperf_class_files/DeviceDefinition.gperf"
    {"note_count", 0x188, 42, -1},
#line 22 "./src/generated/gperf_class_files/DeviceDefinition.gperf"
    {"identifier_count", 0x78, 12, -1},
#line 38 "./src/generated/gperf_class_files/DeviceDefinition.gperf"
    {"shelfLifeStorage_count", 0x108, 28, -1},
#line 34 "./src/generated/gperf_class_files/DeviceDefinition.gperf"
    {"version_count", 0xe8, 24, -1},
#line 45 "./src/generated/gperf_class_files/DeviceDefinition.gperf"
    {"property_count", 0x140, 35, -1},
#line 24 "./src/generated/gperf_class_files/DeviceDefinition.gperf"
    {"udiDeviceIdentifier_count", 0x88, 14, -1},
#line 51 "./src/generated/gperf_class_files/DeviceDefinition.gperf"
    {"onlineInformation", 0x178, 41, -1},
#line 14 "./src/generated/gperf_class_files/DeviceDefinition.gperf"
    {"language", 0x30, 4, -1},
#line 31 "./src/generated/gperf_class_files/DeviceDefinition.gperf"
    {"type", 0xd0, 21, -1},
#line 42 "./src/generated/gperf_class_files/DeviceDefinition.gperf"
    {"languageCode", 0x128, 32, -1},
#line 40 "./src/generated/gperf_class_files/DeviceDefinition.gperf"
    {"physicalCharacteristics", 0x118, 30, -1},
#line 41 "./src/generated/gperf_class_files/DeviceDefinition.gperf"
    {"languageCode_count", 0x120, 31, -1},
#line 54 "./src/generated/gperf_class_files/DeviceDefinition.gperf"
    {"quantity", 0x198, 44, -1}
  };

static const signed char lookup[] =
  {
    -1, -1, -1, -1,  0,  1,  2,  3,  4,  5,  6,  7,  8,  9,
    10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23,
    24, 25, 26, -1, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36,
    37, 38, 39, 40, -1, 41, 42, 43, -1, -1, 44, 45, -1, -1,
    -1, -1, 46, -1, -1, -1, -1, 47
  };

const struct fhir_deserialize::MemberNameAndOffset *
DeviceDefinition_Gperf::DeviceDefinition_MemberLookup (register const char *str, register unsigned int len)
{
  if (len <= MAX_WORD_LENGTH && len >= MIN_WORD_LENGTH)
    {
      register int key = hash (str, len);

      if (key <= MAX_HASH_VALUE && key >= 0)
        {
          register int index = lookup[key];

          if (index >= 0)
            {
              register const char *s = word_array_DeviceDefinition[index].name;

              if (*str == *s && !strncmp (str + 1, s + 1, len - 1) && s[len] == '\0')
                return &word_array_DeviceDefinition[index];
            }
        }
    }
  return 0;
}
