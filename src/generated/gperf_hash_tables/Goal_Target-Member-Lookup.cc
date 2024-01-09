/* C++ code produced by gperf version 3.0.1 */
/* Command-line: gperf.exe -t --output-file=src/generated/gperf_hash_tables/Goal_Target-Member-Lookup.cc -CGD ./src/generated/gperf_class_files/Goal_Target.gperf  */
/* Computed positions: -k'1,9' */

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

#line 8 "./src/generated/gperf_class_files/Goal_Target.gperf"
struct fhir_deserialize::MemberNameAndOffset;
enum
  {
    TOTAL_KEYWORDS = 16,
    MIN_WORD_LENGTH = 2,
    MAX_WORD_LENGTH = 23,
    MIN_HASH_VALUE = 7,
    MAX_HASH_VALUE = 32
  };

/* maximum key range = 26, duplicates = 0 */

class Goal_Target_Gperf
{
private:
  static inline unsigned int hash (const char *str, unsigned int len);
public:
  static const struct fhir_deserialize::MemberNameAndOffset *Goal_Target_MemberLookup (const char *str, unsigned int len);
};

inline unsigned int
Goal_Target_Gperf::hash (register const char *str, register unsigned int len)
{
  static const unsigned char asso_values[] =
    {
      33, 33, 33, 33, 33, 33, 33, 33, 33, 33,
      33, 33, 33, 33, 33, 33, 33, 33, 33, 33,
      33, 33, 33, 33, 33, 33, 33, 33, 33, 33,
      33, 33, 33, 33, 33, 33, 33, 33, 33, 33,
      33, 33, 33, 33, 33, 33, 33, 33, 33, 33,
      33, 33, 33, 33, 33, 33, 33, 33, 33, 33,
      33, 33, 33, 33, 33, 33, 33, 33, 33,  0,
      33, 33, 33, 33, 33, 33, 33, 33, 33, 33,
      33, 33, 33, 33,  5, 33, 33, 33, 33, 33,
      33, 33, 33, 33, 33, 33, 33,  5, 33, 33,
       0,  0, 33, 33, 33, 15, 33, 33, 33,  5,
       5,  5, 33, 33, 15, 33,  0, 33, 33, 33,
      33, 33, 33, 33, 33, 33, 33, 33, 33, 33,
      33, 33, 33, 33, 33, 33, 33, 33, 33, 33,
      33, 33, 33, 33, 33, 33, 33, 33, 33, 33,
      33, 33, 33, 33, 33, 33, 33, 33, 33, 33,
      33, 33, 33, 33, 33, 33, 33, 33, 33, 33,
      33, 33, 33, 33, 33, 33, 33, 33, 33, 33,
      33, 33, 33, 33, 33, 33, 33, 33, 33, 33,
      33, 33, 33, 33, 33, 33, 33, 33, 33, 33,
      33, 33, 33, 33, 33, 33, 33, 33, 33, 33,
      33, 33, 33, 33, 33, 33, 33, 33, 33, 33,
      33, 33, 33, 33, 33, 33, 33, 33, 33, 33,
      33, 33, 33, 33, 33, 33, 33, 33, 33, 33,
      33, 33, 33, 33, 33, 33, 33, 33, 33, 33,
      33, 33, 33, 33, 33, 33
    };
  register int hval = len;

  switch (hval)
    {
      default:
        hval += asso_values[(unsigned char)str[8]];
      /*FALLTHROUGH*/
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

static const struct fhir_deserialize::MemberNameAndOffset word_array_Goal_Target[] =
  {
#line 24 "./src/generated/gperf_class_files/Goal_Target.gperf"
    {"dueDate", 0x60, 10, 0, {(U8*)"due", 3}, fhir_deserialize::ResourceType::Unknown, 16, fhir_deserialize::ResourceType::Unknown},
#line 23 "./src/generated/gperf_class_files/Goal_Target.gperf"
    {"detailRatio", 0x48, 8, 6, {(U8*)"detail", 6}, fhir_deserialize::ResourceType::Quantity, 20, fhir_deserialize::ResourceType::Ratio},
#line 16 "./src/generated/gperf_class_files/Goal_Target.gperf"
    {"measure", 0x38, 6, -1, {(U8*)"measure", 7}, fhir_deserialize::ResourceType::CodeableConcept, 0, fhir_deserialize::ResourceType::Unknown},
#line 22 "./src/generated/gperf_class_files/Goal_Target.gperf"
    {"detailInteger", 0x48, 8, 5, {(U8*)"detail", 6}, fhir_deserialize::ResourceType::Quantity, 20, fhir_deserialize::ResourceType::Integer},
#line 13 "./src/generated/gperf_class_files/Goal_Target.gperf"
    {"extension", 0x20, 3, -1, {(U8*)"extension", 9}, fhir_deserialize::ResourceType::Extension, 0, fhir_deserialize::ResourceType::Unknown},
#line 18 "./src/generated/gperf_class_files/Goal_Target.gperf"
    {"detailRange", 0x48, 8, 1, {(U8*)"detail", 6}, fhir_deserialize::ResourceType::Quantity, 20, fhir_deserialize::ResourceType::Range},
#line 11 "./src/generated/gperf_class_files/Goal_Target.gperf"
    {"id", 0x8, 1, -1, {(U8*)"id", 2}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 21 "./src/generated/gperf_class_files/Goal_Target.gperf"
    {"detailBoolean", 0x48, 8, 4, {(U8*)"detail", 6}, fhir_deserialize::ResourceType::Quantity, 12, fhir_deserialize::ResourceType::Unknown},
#line 17 "./src/generated/gperf_class_files/Goal_Target.gperf"
    {"detailQuantity", 0x48, 8, 0, {(U8*)"detail", 6}, fhir_deserialize::ResourceType::Quantity, 20, fhir_deserialize::ResourceType::Quantity},
#line 12 "./src/generated/gperf_class_files/Goal_Target.gperf"
    {"extension_count", 0x18, 2, -1, {(U8*)"extension_count", 15}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 19 "./src/generated/gperf_class_files/Goal_Target.gperf"
    {"detailCodeableConcept", 0x48, 8, 2, {(U8*)"detail", 6}, fhir_deserialize::ResourceType::Quantity, 20, fhir_deserialize::ResourceType::CodeableConcept},
#line 15 "./src/generated/gperf_class_files/Goal_Target.gperf"
    {"modifierExtension", 0x30, 5, -1, {(U8*)"modifierExtension", 17}, fhir_deserialize::ResourceType::Extension, 0, fhir_deserialize::ResourceType::Unknown},
#line 25 "./src/generated/gperf_class_files/Goal_Target.gperf"
    {"dueDuration", 0x60, 10, 1, {(U8*)"due", 3}, fhir_deserialize::ResourceType::Unknown, 20, fhir_deserialize::ResourceType::Duration},
#line 20 "./src/generated/gperf_class_files/Goal_Target.gperf"
    {"detailString", 0x48, 8, 3, {(U8*)"detail", 6}, fhir_deserialize::ResourceType::Quantity, 7, fhir_deserialize::ResourceType::Unknown},
#line 14 "./src/generated/gperf_class_files/Goal_Target.gperf"
    {"modifierExtension_count", 0x28, 4, -1, {(U8*)"modifierExtension_count", 23}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 10 "./src/generated/gperf_class_files/Goal_Target.gperf"
    {"resourceType", 0x0, 0, -1, {(U8*)"resourceType", 12}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown}
  };

static const signed char lookup[] =
  {
    -1, -1, -1, -1, -1, -1, -1,  0, -1, -1, -1,  1,  2,  3,
     4, -1,  5,  6,  7,  8,  9, 10, 11, -1, -1, -1, 12, 13,
    14, -1, -1, -1, 15
  };

const struct fhir_deserialize::MemberNameAndOffset *
Goal_Target_Gperf::Goal_Target_MemberLookup (register const char *str, register unsigned int len)
{
  if (len <= MAX_WORD_LENGTH && len >= MIN_WORD_LENGTH)
    {
      register int key = hash (str, len);

      if (key <= MAX_HASH_VALUE && key >= 0)
        {
          register int index = lookup[key];

          if (index >= 0)
            {
              register const char *s = word_array_Goal_Target[index].name;

              if (*str == *s && !strncmp (str + 1, s + 1, len - 1) && s[len] == '\0')
                return &word_array_Goal_Target[index];
            }
        }
    }
  return 0;
}
