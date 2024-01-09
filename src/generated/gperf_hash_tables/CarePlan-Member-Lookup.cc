/* C++ code produced by gperf version 3.0.1 */
/* Command-line: gperf.exe -t --output-file=src/generated/gperf_hash_tables/CarePlan-Member-Lookup.cc -CGD ./src/generated/gperf_class_files/CarePlan.gperf  */
/* Computed positions: -k'1,5,13' */

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

#line 8 "./src/generated/gperf_class_files/CarePlan.gperf"
struct fhir_deserialize::MemberNameAndOffset;
enum
  {
    TOTAL_KEYWORDS = 49,
    MIN_WORD_LENGTH = 2,
    MAX_WORD_LENGTH = 27,
    MIN_HASH_VALUE = 2,
    MAX_HASH_VALUE = 103
  };

/* maximum key range = 102, duplicates = 0 */

class CarePlan_Gperf
{
private:
  static inline unsigned int hash (const char *str, unsigned int len);
public:
  static const struct fhir_deserialize::MemberNameAndOffset *CarePlan_MemberLookup (const char *str, unsigned int len);
};

inline unsigned int
CarePlan_Gperf::hash (register const char *str, register unsigned int len)
{
  static const unsigned char asso_values[] =
    {
      104, 104, 104, 104, 104, 104, 104, 104, 104, 104,
      104, 104, 104, 104, 104, 104, 104, 104, 104, 104,
      104, 104, 104, 104, 104, 104, 104, 104, 104, 104,
      104, 104, 104, 104, 104, 104, 104, 104, 104, 104,
      104, 104, 104, 104, 104, 104, 104, 104, 104, 104,
      104, 104, 104, 104, 104, 104, 104, 104, 104, 104,
      104, 104, 104, 104, 104, 104, 104,  15, 104, 104,
      104, 104, 104, 104, 104, 104, 104, 104, 104,   5,
      104, 104, 104, 104,  50,  35, 104, 104, 104, 104,
      104, 104, 104, 104, 104,  15, 104,  10,   0,   5,
       10,   0,  30,  30, 104,   0, 104, 104,   5,  50,
        0,   0,  25, 104,   5,   0,  35,   5,  35, 104,
      104, 104, 104, 104, 104, 104, 104, 104, 104, 104,
      104, 104, 104, 104, 104, 104, 104, 104, 104, 104,
      104, 104, 104, 104, 104, 104, 104, 104, 104, 104,
      104, 104, 104, 104, 104, 104, 104, 104, 104, 104,
      104, 104, 104, 104, 104, 104, 104, 104, 104, 104,
      104, 104, 104, 104, 104, 104, 104, 104, 104, 104,
      104, 104, 104, 104, 104, 104, 104, 104, 104, 104,
      104, 104, 104, 104, 104, 104, 104, 104, 104, 104,
      104, 104, 104, 104, 104, 104, 104, 104, 104, 104,
      104, 104, 104, 104, 104, 104, 104, 104, 104, 104,
      104, 104, 104, 104, 104, 104, 104, 104, 104, 104,
      104, 104, 104, 104, 104, 104, 104, 104, 104, 104,
      104, 104, 104, 104, 104, 104, 104, 104, 104, 104,
      104, 104, 104, 104, 104, 104
    };
  register int hval = len;

  switch (hval)
    {
      default:
        hval += asso_values[(unsigned char)str[12]];
      /*FALLTHROUGH*/
      case 12:
      case 11:
      case 10:
      case 9:
      case 8:
      case 7:
      case 6:
      case 5:
        hval += asso_values[(unsigned char)str[4]];
      /*FALLTHROUGH*/
      case 4:
      case 3:
      case 2:
      case 1:
        hval += asso_values[(unsigned char)str[0]];
        break;
    }
  return hval;
}

static const struct fhir_deserialize::MemberNameAndOffset word_array_CarePlan[] =
  {
#line 11 "./src/generated/gperf_class_files/CarePlan.gperf"
    {"id", 0x8, 1, -1, {(U8*)"id", 2}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 58 "./src/generated/gperf_class_files/CarePlan.gperf"
    {"note", 0x1c0, 48, -1, {(U8*)"note", 4}, fhir_deserialize::ResourceType::Annotation, 0, fhir_deserialize::ResourceType::Unknown},
#line 35 "./src/generated/gperf_class_files/CarePlan.gperf"
    {"intent", 0xe8, 25, -1, {(U8*)"intent", 6}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 40 "./src/generated/gperf_class_files/CarePlan.gperf"
    {"subject", 0x128, 30, -1, {(U8*)"subject", 7}, fhir_deserialize::ResourceType::Reference, 0, fhir_deserialize::ResourceType::Unknown},
#line 19 "./src/generated/gperf_class_files/CarePlan.gperf"
    {"extension", 0x60, 9, -1, {(U8*)"extension", 9}, fhir_deserialize::ResourceType::Extension, 0, fhir_deserialize::ResourceType::Unknown},
#line 34 "./src/generated/gperf_class_files/CarePlan.gperf"
    {"status", 0xd8, 24, -1, {(U8*)"status", 6}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 13 "./src/generated/gperf_class_files/CarePlan.gperf"
    {"implicitRules", 0x20, 3, -1, {(U8*)"implicitRules", 13}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 41 "./src/generated/gperf_class_files/CarePlan.gperf"
    {"encounter", 0x130, 31, -1, {(U8*)"encounter", 9}, fhir_deserialize::ResourceType::Reference, 0, fhir_deserialize::ResourceType::Unknown},
#line 44 "./src/generated/gperf_class_files/CarePlan.gperf"
    {"author", 0x150, 34, -1, {(U8*)"author", 6}, fhir_deserialize::ResourceType::Reference, 0, fhir_deserialize::ResourceType::Unknown},
#line 29 "./src/generated/gperf_class_files/CarePlan.gperf"
    {"basedOn", 0xb0, 19, -1, {(U8*)"basedOn", 7}, fhir_deserialize::ResourceType::Reference, 0, fhir_deserialize::ResourceType::Unknown},
#line 14 "./src/generated/gperf_class_files/CarePlan.gperf"
    {"language", 0x30, 4, -1, {(U8*)"language", 8}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 50 "./src/generated/gperf_class_files/CarePlan.gperf"
    {"addresses", 0x180, 40, -1, {(U8*)"addresses", 9}, fhir_deserialize::ResourceType::Reference, 0, fhir_deserialize::ResourceType::Unknown},
#line 18 "./src/generated/gperf_class_files/CarePlan.gperf"
    {"extension_count", 0x58, 8, -1, {(U8*)"extension_count", 15}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 46 "./src/generated/gperf_class_files/CarePlan.gperf"
    {"contributor", 0x160, 36, -1, {(U8*)"contributor", 11}, fhir_deserialize::ResourceType::Reference, 0, fhir_deserialize::ResourceType::Unknown},
#line 10 "./src/generated/gperf_class_files/CarePlan.gperf"
    {"resourceType", 0x0, 0, -1, {(U8*)"resourceType", 12}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 31 "./src/generated/gperf_class_files/CarePlan.gperf"
    {"replaces", 0xc0, 21, -1, {(U8*)"replaces", 8}, fhir_deserialize::ResourceType::Reference, 0, fhir_deserialize::ResourceType::Unknown},
#line 17 "./src/generated/gperf_class_files/CarePlan.gperf"
    {"contained", 0x50, 7, -1, {(U8*)"contained", 9}, fhir_deserialize::ResourceType::Resource, 0, fhir_deserialize::ResourceType::Unknown},
#line 57 "./src/generated/gperf_class_files/CarePlan.gperf"
    {"note_count", 0x1b8, 47, -1, {(U8*)"note_count", 10}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 39 "./src/generated/gperf_class_files/CarePlan.gperf"
    {"description", 0x118, 29, -1, {(U8*)"description", 11}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 30 "./src/generated/gperf_class_files/CarePlan.gperf"
    {"replaces_count", 0xb8, 20, -1, {(U8*)"replaces_count", 14}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 49 "./src/generated/gperf_class_files/CarePlan.gperf"
    {"addresses_count", 0x178, 39, -1, {(U8*)"addresses_count", 15}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 42 "./src/generated/gperf_class_files/CarePlan.gperf"
    {"period", 0x138, 32, -1, {(U8*)"period", 6}, fhir_deserialize::ResourceType::Period, 0, fhir_deserialize::ResourceType::Unknown},
#line 45 "./src/generated/gperf_class_files/CarePlan.gperf"
    {"contributor_count", 0x158, 35, -1, {(U8*)"contributor_count", 17}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 54 "./src/generated/gperf_class_files/CarePlan.gperf"
    {"goal", 0x1a0, 44, -1, {(U8*)"goal", 4}, fhir_deserialize::ResourceType::Reference, 0, fhir_deserialize::ResourceType::Unknown},
#line 16 "./src/generated/gperf_class_files/CarePlan.gperf"
    {"contained_count", 0x48, 6, -1, {(U8*)"contained_count", 15}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 33 "./src/generated/gperf_class_files/CarePlan.gperf"
    {"partOf", 0xd0, 23, -1, {(U8*)"partOf", 6}, fhir_deserialize::ResourceType::Reference, 0, fhir_deserialize::ResourceType::Unknown},
#line 15 "./src/generated/gperf_class_files/CarePlan.gperf"
    {"text", 0x40, 5, -1, {(U8*)"text", 4}, fhir_deserialize::ResourceType::Narrative, 0, fhir_deserialize::ResourceType::Unknown},
#line 38 "./src/generated/gperf_class_files/CarePlan.gperf"
    {"title", 0x108, 28, -1, {(U8*)"title", 5}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 32 "./src/generated/gperf_class_files/CarePlan.gperf"
    {"partOf_count", 0xc8, 22, -1, {(U8*)"partOf_count", 12}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 37 "./src/generated/gperf_class_files/CarePlan.gperf"
    {"category", 0x100, 27, -1, {(U8*)"category", 8}, fhir_deserialize::ResourceType::CodeableConcept, 0, fhir_deserialize::ResourceType::Unknown},
#line 52 "./src/generated/gperf_class_files/CarePlan.gperf"
    {"supportingInfo", 0x190, 42, -1, {(U8*)"supportingInfo", 14}, fhir_deserialize::ResourceType::Reference, 0, fhir_deserialize::ResourceType::Unknown},
#line 23 "./src/generated/gperf_class_files/CarePlan.gperf"
    {"identifier", 0x80, 13, -1, {(U8*)"identifier", 10}, fhir_deserialize::ResourceType::Identifier, 0, fhir_deserialize::ResourceType::Unknown},
#line 25 "./src/generated/gperf_class_files/CarePlan.gperf"
    {"instantiatesCanonical", 0x90, 15, -1, {(U8*)"instantiatesCanonical", 21}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 43 "./src/generated/gperf_class_files/CarePlan.gperf"
    {"created", 0x140, 33, -1, {(U8*)"created", 7}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 36 "./src/generated/gperf_class_files/CarePlan.gperf"
    {"category_count", 0xf8, 26, -1, {(U8*)"category_count", 14}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 51 "./src/generated/gperf_class_files/CarePlan.gperf"
    {"supportingInfo_count", 0x188, 41, -1, {(U8*)"supportingInfo_count", 20}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 22 "./src/generated/gperf_class_files/CarePlan.gperf"
    {"identifier_count", 0x78, 12, -1, {(U8*)"identifier_count", 16}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 24 "./src/generated/gperf_class_files/CarePlan.gperf"
    {"instantiatesCanonical_count", 0x88, 14, -1, {(U8*)"instantiatesCanonical_count", 27}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 56 "./src/generated/gperf_class_files/CarePlan.gperf"
    {"activity", 0x1b0, 46, -1, {(U8*)"activity", 8}, fhir_deserialize::ResourceType::CarePlan_Activity, 0, fhir_deserialize::ResourceType::Unknown},
#line 12 "./src/generated/gperf_class_files/CarePlan.gperf"
    {"meta", 0x18, 2, -1, {(U8*)"meta", 4}, fhir_deserialize::ResourceType::Meta, 0, fhir_deserialize::ResourceType::Unknown},
#line 53 "./src/generated/gperf_class_files/CarePlan.gperf"
    {"goal_count", 0x198, 43, -1, {(U8*)"goal_count", 10}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 28 "./src/generated/gperf_class_files/CarePlan.gperf"
    {"basedOn_count", 0xa8, 18, -1, {(U8*)"basedOn_count", 13}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 55 "./src/generated/gperf_class_files/CarePlan.gperf"
    {"activity_count", 0x1a8, 45, -1, {(U8*)"activity_count", 14}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 27 "./src/generated/gperf_class_files/CarePlan.gperf"
    {"instantiatesUri", 0xa0, 17, -1, {(U8*)"instantiatesUri", 15}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 48 "./src/generated/gperf_class_files/CarePlan.gperf"
    {"careTeam", 0x170, 38, -1, {(U8*)"careTeam", 8}, fhir_deserialize::ResourceType::Reference, 0, fhir_deserialize::ResourceType::Unknown},
#line 26 "./src/generated/gperf_class_files/CarePlan.gperf"
    {"instantiatesUri_count", 0x98, 16, -1, {(U8*)"instantiatesUri_count", 21}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 47 "./src/generated/gperf_class_files/CarePlan.gperf"
    {"careTeam_count", 0x168, 37, -1, {(U8*)"careTeam_count", 14}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 21 "./src/generated/gperf_class_files/CarePlan.gperf"
    {"modifierExtension", 0x70, 11, -1, {(U8*)"modifierExtension", 17}, fhir_deserialize::ResourceType::Extension, 0, fhir_deserialize::ResourceType::Unknown},
#line 20 "./src/generated/gperf_class_files/CarePlan.gperf"
    {"modifierExtension_count", 0x68, 10, -1, {(U8*)"modifierExtension_count", 23}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown}
  };

static const signed char lookup[] =
  {
    -1, -1,  0, -1,  1, -1,  2,  3, -1,  4, -1,  5, -1,  6,
     7, -1,  8,  9, 10, 11, 12, 13, 14, 15, 16, 17, 18, -1,
    -1, 19, 20, 21, 22, -1, 23, 24, 25, -1, -1, 26, 27, -1,
    28, 29, 30, 31, 32, 33, -1, 34, 35, 36, 37, 38, 39, 40,
    -1, -1, 41, 42, 43, -1, -1, 44, -1, -1, 45, -1, -1, 46,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 47,
    -1, -1, -1, -1, -1, 48
  };

const struct fhir_deserialize::MemberNameAndOffset *
CarePlan_Gperf::CarePlan_MemberLookup (register const char *str, register unsigned int len)
{
  if (len <= MAX_WORD_LENGTH && len >= MIN_WORD_LENGTH)
    {
      register int key = hash (str, len);

      if (key <= MAX_HASH_VALUE && key >= 0)
        {
          register int index = lookup[key];

          if (index >= 0)
            {
              register const char *s = word_array_CarePlan[index].name;

              if (*str == *s && !strncmp (str + 1, s + 1, len - 1) && s[len] == '\0')
                return &word_array_CarePlan[index];
            }
        }
    }
  return 0;
}
