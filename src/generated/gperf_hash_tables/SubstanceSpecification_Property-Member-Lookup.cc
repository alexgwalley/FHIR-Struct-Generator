/* C++ code produced by gperf version 3.0.1 */
/* Command-line: gperf.exe -t --output-file=src/generated/gperf_hash_tables/SubstanceSpecification_Property-Member-Lookup.cc -CGD ./src/generated/gperf_class_files/SubstanceSpecification_Property.gperf  */
/* Computed positions: -k'1' */

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

#line 8 "./src/generated/gperf_class_files/SubstanceSpecification_Property.gperf"
struct fhir_deserialize::MemberNameAndOffset;
enum
  {
    TOTAL_KEYWORDS = 13,
    MIN_WORD_LENGTH = 2,
    MAX_WORD_LENGTH = 32,
    MIN_HASH_VALUE = 2,
    MAX_HASH_VALUE = 32
  };

/* maximum key range = 31, duplicates = 0 */

class SubstanceSpecification_Property_Gperf
{
private:
  static inline unsigned int hash (const char *str, unsigned int len);
public:
  static const struct fhir_deserialize::MemberNameAndOffset *SubstanceSpecification_Property_MemberLookup (const char *str, unsigned int len);
};

inline unsigned int
SubstanceSpecification_Property_Gperf::hash (register const char *str, register unsigned int len)
{
  static const unsigned char asso_values[] =
    {
      33, 33, 33, 33, 33, 33, 33, 33, 33, 33,
      33, 33, 33, 33, 33, 33, 33, 33, 33, 33,
      33, 33, 33, 33, 33, 33, 33, 33, 33, 33,
      33, 33, 33, 33, 33, 33, 33, 33, 33, 33,
      33, 33, 33, 33, 33, 33, 33, 33, 33, 33,
      33, 33, 33, 33, 33, 33, 33, 33, 33, 33,
      33, 33, 33, 33, 33, 33, 33, 33, 33, 33,
      33, 33, 33, 33, 33, 33, 33, 33, 33, 33,
      33, 33, 33, 33, 33, 33, 33, 33, 33, 33,
      33, 33, 33, 33, 33, 33, 33,  0, 33,  0,
       0,  0, 33, 33, 33,  0, 33, 33, 33,  0,
      33, 33,  0, 33, 10, 33, 33, 33, 33, 33,
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
  return len + asso_values[(unsigned char)str[0]];
}

static const struct fhir_deserialize::MemberNameAndOffset word_array_SubstanceSpecification_Property[] =
  {
#line 11 "./src/generated/gperf_class_files/SubstanceSpecification_Property.gperf"
    {"id", 0x8, 1, -1, {(U8*)"id", 2}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 17 "./src/generated/gperf_class_files/SubstanceSpecification_Property.gperf"
    {"code", 0x40, 7, -1, {(U8*)"code", 4}, fhir_deserialize::ResourceType::CodeableConcept, 0, fhir_deserialize::ResourceType::Unknown},
#line 16 "./src/generated/gperf_class_files/SubstanceSpecification_Property.gperf"
    {"category", 0x38, 6, -1, {(U8*)"category", 8}, fhir_deserialize::ResourceType::CodeableConcept, 0, fhir_deserialize::ResourceType::Unknown},
#line 13 "./src/generated/gperf_class_files/SubstanceSpecification_Property.gperf"
    {"extension", 0x20, 3, -1, {(U8*)"extension", 9}, fhir_deserialize::ResourceType::Extension, 0, fhir_deserialize::ResourceType::Unknown},
#line 18 "./src/generated/gperf_class_files/SubstanceSpecification_Property.gperf"
    {"parameters", 0x48, 8, -1, {(U8*)"parameters", 10}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 22 "./src/generated/gperf_class_files/SubstanceSpecification_Property.gperf"
    {"amountString", 0x70, 12, 1, {(U8*)"amount", 6}, fhir_deserialize::ResourceType::Quantity, 7, fhir_deserialize::ResourceType::Unknown},
#line 21 "./src/generated/gperf_class_files/SubstanceSpecification_Property.gperf"
    {"amountQuantity", 0x70, 12, 0, {(U8*)"amount", 6}, fhir_deserialize::ResourceType::Quantity, 20, fhir_deserialize::ResourceType::Quantity},
#line 12 "./src/generated/gperf_class_files/SubstanceSpecification_Property.gperf"
    {"extension_count", 0x18, 2, -1, {(U8*)"extension_count", 15}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 15 "./src/generated/gperf_class_files/SubstanceSpecification_Property.gperf"
    {"modifierExtension", 0x30, 5, -1, {(U8*)"modifierExtension", 17}, fhir_deserialize::ResourceType::Extension, 0, fhir_deserialize::ResourceType::Unknown},
#line 10 "./src/generated/gperf_class_files/SubstanceSpecification_Property.gperf"
    {"resourceType", 0x0, 0, -1, {(U8*)"resourceType", 12}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 14 "./src/generated/gperf_class_files/SubstanceSpecification_Property.gperf"
    {"modifierExtension_count", 0x28, 4, -1, {(U8*)"modifierExtension_count", 23}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 19 "./src/generated/gperf_class_files/SubstanceSpecification_Property.gperf"
    {"definingSubstanceReference", 0x60, 10, 0, {(U8*)"definingSubstance", 17}, fhir_deserialize::ResourceType::Reference, 20, fhir_deserialize::ResourceType::Reference},
#line 20 "./src/generated/gperf_class_files/SubstanceSpecification_Property.gperf"
    {"definingSubstanceCodeableConcept", 0x60, 10, 1, {(U8*)"definingSubstance", 17}, fhir_deserialize::ResourceType::Reference, 20, fhir_deserialize::ResourceType::CodeableConcept}
  };

static const signed char lookup[] =
  {
    -1, -1,  0, -1,  1, -1, -1, -1,  2,  3,  4, -1,  5, -1,
     6,  7, -1,  8, -1, -1, -1, -1,  9, 10, -1, -1, 11, -1,
    -1, -1, -1, -1, 12
  };

const struct fhir_deserialize::MemberNameAndOffset *
SubstanceSpecification_Property_Gperf::SubstanceSpecification_Property_MemberLookup (register const char *str, register unsigned int len)
{
  if (len <= MAX_WORD_LENGTH && len >= MIN_WORD_LENGTH)
    {
      register int key = hash (str, len);

      if (key <= MAX_HASH_VALUE && key >= 0)
        {
          register int index = lookup[key];

          if (index >= 0)
            {
              register const char *s = word_array_SubstanceSpecification_Property[index].name;

              if (*str == *s && !strncmp (str + 1, s + 1, len - 1) && s[len] == '\0')
                return &word_array_SubstanceSpecification_Property[index];
            }
        }
    }
  return 0;
}
