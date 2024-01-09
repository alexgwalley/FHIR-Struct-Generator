/* C++ code produced by gperf version 3.0.1 */
/* Command-line: gperf.exe -t --output-file=src/generated/gperf_hash_tables/TestScript-Member-Lookup.cc -CGD ./src/generated/gperf_class_files/TestScript.gperf  */
/* Computed positions: -k'3-4' */

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

#line 8 "./src/generated/gperf_class_files/TestScript.gperf"
struct fhir_deserialize::MemberNameAndOffset;
enum
  {
    TOTAL_KEYWORDS = 45,
    MIN_WORD_LENGTH = 2,
    MAX_WORD_LENGTH = 23,
    MIN_HASH_VALUE = 2,
    MAX_HASH_VALUE = 78
  };

/* maximum key range = 77, duplicates = 0 */

class TestScript_Gperf
{
private:
  static inline unsigned int hash (const char *str, unsigned int len);
public:
  static const struct fhir_deserialize::MemberNameAndOffset *TestScript_MemberLookup (const char *str, unsigned int len);
};

inline unsigned int
TestScript_Gperf::hash (register const char *str, register unsigned int len)
{
  static const unsigned char asso_values[] =
    {
      79, 79, 79, 79, 79, 79, 79, 79, 79, 79,
      79, 79, 79, 79, 79, 79, 79, 79, 79, 79,
      79, 79, 79, 79, 79, 79, 79, 79, 79, 79,
      79, 79, 79, 79, 79, 79, 79, 79, 79, 79,
      79, 79, 79, 79, 79, 79, 79, 79, 79, 79,
      79, 79, 79, 79, 79, 79, 79, 79, 79, 79,
      79, 79, 79, 79, 79, 79, 79, 10, 79, 79,
      79, 79, 79, 79, 79, 79, 79, 79, 79, 79,
      79, 79, 79, 79, 79, 79, 79, 79, 79, 79,
      79, 79, 79, 79, 79, 79, 79, 25,  0,  5,
      35, 10, 30, 45, 79,  5, 79, 79, 45, 30,
       0, 15, 20, 79,  5,  0,  0,  0, 79, 79,
      30, 10, 79, 79, 79, 79, 79, 79, 79, 79,
      79, 79, 79, 79, 79, 79, 79, 79, 79, 79,
      79, 79, 79, 79, 79, 79, 79, 79, 79, 79,
      79, 79, 79, 79, 79, 79, 79, 79, 79, 79,
      79, 79, 79, 79, 79, 79, 79, 79, 79, 79,
      79, 79, 79, 79, 79, 79, 79, 79, 79, 79,
      79, 79, 79, 79, 79, 79, 79, 79, 79, 79,
      79, 79, 79, 79, 79, 79, 79, 79, 79, 79,
      79, 79, 79, 79, 79, 79, 79, 79, 79, 79,
      79, 79, 79, 79, 79, 79, 79, 79, 79, 79,
      79, 79, 79, 79, 79, 79, 79, 79, 79, 79,
      79, 79, 79, 79, 79, 79, 79, 79, 79, 79,
      79, 79, 79, 79, 79, 79, 79, 79, 79, 79,
      79, 79, 79, 79, 79, 79
    };
  register int hval = len;

  switch (hval)
    {
      default:
        hval += asso_values[(unsigned char)str[3]];
      /*FALLTHROUGH*/
      case 3:
        hval += asso_values[(unsigned char)str[2]];
      /*FALLTHROUGH*/
      case 2:
        break;
    }
  return hval;
}

static const struct fhir_deserialize::MemberNameAndOffset word_array_TestScript[] =
  {
#line 11 "./src/generated/gperf_class_files/TestScript.gperf"
    {"id", 0x8, 1, -1, {(U8*)"id", 2}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 53 "./src/generated/gperf_class_files/TestScript.gperf"
    {"test", 0x1c0, 43, -1, {(U8*)"test", 4}, fhir_deserialize::ResourceType::TestScript_Test, 0, fhir_deserialize::ResourceType::Unknown},
#line 51 "./src/generated/gperf_class_files/TestScript.gperf"
    {"setup", 0x1b0, 41, -1, {(U8*)"setup", 5}, fhir_deserialize::ResourceType::TestScript_Setup, 0, fhir_deserialize::ResourceType::Unknown},
#line 32 "./src/generated/gperf_class_files/TestScript.gperf"
    {"contact", 0x100, 22, -1, {(U8*)"contact", 7}, fhir_deserialize::ResourceType::ContactDetail, 0, fhir_deserialize::ResourceType::Unknown},
#line 17 "./src/generated/gperf_class_files/TestScript.gperf"
    {"contained", 0x50, 7, -1, {(U8*)"contained", 9}, fhir_deserialize::ResourceType::Resource, 0, fhir_deserialize::ResourceType::Unknown},
#line 52 "./src/generated/gperf_class_files/TestScript.gperf"
    {"test_count", 0x1b8, 42, -1, {(U8*)"test_count", 10}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 43 "./src/generated/gperf_class_files/TestScript.gperf"
    {"destination", 0x170, 33, -1, {(U8*)"destination", 11}, fhir_deserialize::ResourceType::TestScript_Destination, 0, fhir_deserialize::ResourceType::Unknown},
#line 24 "./src/generated/gperf_class_files/TestScript.gperf"
    {"version", 0x90, 14, -1, {(U8*)"version", 7}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 31 "./src/generated/gperf_class_files/TestScript.gperf"
    {"contact_count", 0xf8, 21, -1, {(U8*)"contact_count", 13}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 29 "./src/generated/gperf_class_files/TestScript.gperf"
    {"date", 0xd8, 19, -1, {(U8*)"date", 4}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 16 "./src/generated/gperf_class_files/TestScript.gperf"
    {"contained_count", 0x48, 6, -1, {(U8*)"contained_count", 15}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 33 "./src/generated/gperf_class_files/TestScript.gperf"
    {"description", 0x108, 23, -1, {(U8*)"description", 11}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 42 "./src/generated/gperf_class_files/TestScript.gperf"
    {"destination_count", 0x168, 32, -1, {(U8*)"destination_count", 17}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 50 "./src/generated/gperf_class_files/TestScript.gperf"
    {"variable", 0x1a8, 40, -1, {(U8*)"variable", 8}, fhir_deserialize::ResourceType::TestScript_Variable, 0, fhir_deserialize::ResourceType::Unknown},
#line 19 "./src/generated/gperf_class_files/TestScript.gperf"
    {"extension", 0x60, 9, -1, {(U8*)"extension", 9}, fhir_deserialize::ResourceType::Extension, 0, fhir_deserialize::ResourceType::Unknown},
#line 23 "./src/generated/gperf_class_files/TestScript.gperf"
    {"identifier", 0x88, 13, -1, {(U8*)"identifier", 10}, fhir_deserialize::ResourceType::Identifier, 0, fhir_deserialize::ResourceType::Unknown},
#line 37 "./src/generated/gperf_class_files/TestScript.gperf"
    {"jurisdiction", 0x130, 27, -1, {(U8*)"jurisdiction", 12}, fhir_deserialize::ResourceType::CodeableConcept, 0, fhir_deserialize::ResourceType::Unknown},
#line 49 "./src/generated/gperf_class_files/TestScript.gperf"
    {"variable_count", 0x1a0, 39, -1, {(U8*)"variable_count", 14}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 18 "./src/generated/gperf_class_files/TestScript.gperf"
    {"extension_count", 0x58, 8, -1, {(U8*)"extension_count", 15}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 10 "./src/generated/gperf_class_files/TestScript.gperf"
    {"resourceType", 0x0, 0, -1, {(U8*)"resourceType", 12}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 36 "./src/generated/gperf_class_files/TestScript.gperf"
    {"jurisdiction_count", 0x128, 26, -1, {(U8*)"jurisdiction_count", 18}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 12 "./src/generated/gperf_class_files/TestScript.gperf"
    {"meta", 0x18, 2, -1, {(U8*)"meta", 4}, fhir_deserialize::ResourceType::Meta, 0, fhir_deserialize::ResourceType::Unknown},
#line 35 "./src/generated/gperf_class_files/TestScript.gperf"
    {"useContext", 0x120, 25, -1, {(U8*)"useContext", 10}, fhir_deserialize::ResourceType::UsageContext, 0, fhir_deserialize::ResourceType::Unknown},
#line 27 "./src/generated/gperf_class_files/TestScript.gperf"
    {"status", 0xc0, 17, -1, {(U8*)"status", 6}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 38 "./src/generated/gperf_class_files/TestScript.gperf"
    {"purpose", 0x138, 28, -1, {(U8*)"purpose", 7}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 44 "./src/generated/gperf_class_files/TestScript.gperf"
    {"metadata", 0x178, 34, -1, {(U8*)"metadata", 8}, fhir_deserialize::ResourceType::TestScript_Metadata, 0, fhir_deserialize::ResourceType::Unknown},
#line 15 "./src/generated/gperf_class_files/TestScript.gperf"
    {"text", 0x40, 5, -1, {(U8*)"text", 4}, fhir_deserialize::ResourceType::Narrative, 0, fhir_deserialize::ResourceType::Unknown},
#line 34 "./src/generated/gperf_class_files/TestScript.gperf"
    {"useContext_count", 0x118, 24, -1, {(U8*)"useContext_count", 16}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 46 "./src/generated/gperf_class_files/TestScript.gperf"
    {"fixture", 0x188, 36, -1, {(U8*)"fixture", 7}, fhir_deserialize::ResourceType::TestScript_Fixture, 0, fhir_deserialize::ResourceType::Unknown},
#line 54 "./src/generated/gperf_class_files/TestScript.gperf"
    {"teardown", 0x1c8, 44, -1, {(U8*)"teardown", 8}, fhir_deserialize::ResourceType::TestScript_Teardown, 0, fhir_deserialize::ResourceType::Unknown},
#line 39 "./src/generated/gperf_class_files/TestScript.gperf"
    {"copyright", 0x148, 29, -1, {(U8*)"copyright", 9}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 28 "./src/generated/gperf_class_files/TestScript.gperf"
    {"experimental", 0xd0, 18, -1, {(U8*)"experimental", 12}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 45 "./src/generated/gperf_class_files/TestScript.gperf"
    {"fixture_count", 0x180, 35, -1, {(U8*)"fixture_count", 13}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 25 "./src/generated/gperf_class_files/TestScript.gperf"
    {"name", 0xa0, 15, -1, {(U8*)"name", 4}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 22 "./src/generated/gperf_class_files/TestScript.gperf"
    {"url", 0x78, 12, -1, {(U8*)"url", 3}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 26 "./src/generated/gperf_class_files/TestScript.gperf"
    {"title", 0xb0, 16, -1, {(U8*)"title", 5}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 48 "./src/generated/gperf_class_files/TestScript.gperf"
    {"profile", 0x198, 38, -1, {(U8*)"profile", 7}, fhir_deserialize::ResourceType::Reference, 0, fhir_deserialize::ResourceType::Unknown},
#line 14 "./src/generated/gperf_class_files/TestScript.gperf"
    {"language", 0x30, 4, -1, {(U8*)"language", 8}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 30 "./src/generated/gperf_class_files/TestScript.gperf"
    {"publisher", 0xe8, 20, -1, {(U8*)"publisher", 9}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 41 "./src/generated/gperf_class_files/TestScript.gperf"
    {"origin", 0x160, 31, -1, {(U8*)"origin", 6}, fhir_deserialize::ResourceType::TestScript_Origin, 0, fhir_deserialize::ResourceType::Unknown},
#line 21 "./src/generated/gperf_class_files/TestScript.gperf"
    {"modifierExtension", 0x70, 11, -1, {(U8*)"modifierExtension", 17}, fhir_deserialize::ResourceType::Extension, 0, fhir_deserialize::ResourceType::Unknown},
#line 47 "./src/generated/gperf_class_files/TestScript.gperf"
    {"profile_count", 0x190, 37, -1, {(U8*)"profile_count", 13}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 40 "./src/generated/gperf_class_files/TestScript.gperf"
    {"origin_count", 0x158, 30, -1, {(U8*)"origin_count", 12}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 20 "./src/generated/gperf_class_files/TestScript.gperf"
    {"modifierExtension_count", 0x68, 10, -1, {(U8*)"modifierExtension_count", 23}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 13 "./src/generated/gperf_class_files/TestScript.gperf"
    {"implicitRules", 0x20, 3, -1, {(U8*)"implicitRules", 13}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown}
  };

static const signed char lookup[] =
  {
    -1, -1,  0, -1,  1,  2, -1,  3, -1,  4,  5,  6,  7,  8,
     9, 10, 11, 12, 13, 14, 15, -1, 16, -1, 17, 18, -1, 19,
    20, 21, 22, 23, 24, 25, 26, -1, 27, 28, 29, 30, -1, -1,
    31, 32, 33, -1, -1, -1, 34, -1, 35, -1, 36, 37, 38, -1,
    39, 40, 41, -1, -1, -1, 42, 43, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, 44
  };

const struct fhir_deserialize::MemberNameAndOffset *
TestScript_Gperf::TestScript_MemberLookup (register const char *str, register unsigned int len)
{
  if (len <= MAX_WORD_LENGTH && len >= MIN_WORD_LENGTH)
    {
      register int key = hash (str, len);

      if (key <= MAX_HASH_VALUE && key >= 0)
        {
          register int index = lookup[key];

          if (index >= 0)
            {
              register const char *s = word_array_TestScript[index].name;

              if (*str == *s && !strncmp (str + 1, s + 1, len - 1) && s[len] == '\0')
                return &word_array_TestScript[index];
            }
        }
    }
  return 0;
}
