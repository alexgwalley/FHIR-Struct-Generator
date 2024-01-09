/* C++ code produced by gperf version 3.0.1 */
/* Command-line: gperf.exe -t --output-file=src/generated/gperf_hash_tables/Contract_Term_Offer-Member-Lookup.cc -CGD ./src/generated/gperf_class_files/Contract_Term_Offer.gperf  */
/* Computed positions: -k'4' */

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

#line 8 "./src/generated/gperf_class_files/Contract_Term_Offer.gperf"
struct fhir_deserialize::MemberNameAndOffset;
enum
  {
    TOTAL_KEYWORDS = 22,
    MIN_WORD_LENGTH = 2,
    MAX_WORD_LENGTH = 25,
    MIN_HASH_VALUE = 2,
    MAX_HASH_VALUE = 37
  };

/* maximum key range = 36, duplicates = 0 */

class Contract_Term_Offer_Gperf
{
private:
  static inline unsigned int hash (const char *str, unsigned int len);
public:
  static const struct fhir_deserialize::MemberNameAndOffset *Contract_Term_Offer_MemberLookup (const char *str, unsigned int len);
};

inline unsigned int
Contract_Term_Offer_Gperf::hash (register const char *str, register unsigned int len)
{
  static const unsigned char asso_values[] =
    {
      38, 38, 38, 38, 38, 38, 38, 38, 38, 38,
      38, 38, 38, 38, 38, 38, 38, 38, 38, 38,
      38, 38, 38, 38, 38, 38, 38, 38, 38, 38,
      38, 38, 38, 38, 38, 38, 38, 38, 38, 38,
      38, 38, 38, 38, 38, 38, 38, 38, 38, 38,
      38, 38, 38, 38, 38, 38, 38, 38, 38, 38,
      38, 38, 38, 38, 38, 38, 38, 38, 38, 38,
      38, 38, 38, 38, 38, 38, 38, 38, 38, 38,
      38, 38, 38, 38, 38, 38, 38, 38, 38, 38,
      38, 38, 38, 38, 38, 38, 38, 38, 38, 38,
      38, 10, 38, 38, 38,  0, 38, 25, 38, 38,
      10, 10, 38, 38, 38, 38,  5,  5, 38, 15,
      38, 38, 38, 38, 38, 38, 38, 38, 38, 38,
      38, 38, 38, 38, 38, 38, 38, 38, 38, 38,
      38, 38, 38, 38, 38, 38, 38, 38, 38, 38,
      38, 38, 38, 38, 38, 38, 38, 38, 38, 38,
      38, 38, 38, 38, 38, 38, 38, 38, 38, 38,
      38, 38, 38, 38, 38, 38, 38, 38, 38, 38,
      38, 38, 38, 38, 38, 38, 38, 38, 38, 38,
      38, 38, 38, 38, 38, 38, 38, 38, 38, 38,
      38, 38, 38, 38, 38, 38, 38, 38, 38, 38,
      38, 38, 38, 38, 38, 38, 38, 38, 38, 38,
      38, 38, 38, 38, 38, 38, 38, 38, 38, 38,
      38, 38, 38, 38, 38, 38, 38, 38, 38, 38,
      38, 38, 38, 38, 38, 38, 38, 38, 38, 38,
      38, 38, 38, 38, 38, 38
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
  return hval;
}

static const struct fhir_deserialize::MemberNameAndOffset word_array_Contract_Term_Offer[] =
  {
#line 11 "./src/generated/gperf_class_files/Contract_Term_Offer.gperf"
    {"id", 0x8, 1, -1, {(U8*)"id", 2}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 20 "./src/generated/gperf_class_files/Contract_Term_Offer.gperf"
    {"topic", 0x58, 10, -1, {(U8*)"topic", 5}, fhir_deserialize::ResourceType::Reference, 0, fhir_deserialize::ResourceType::Unknown},
#line 22 "./src/generated/gperf_class_files/Contract_Term_Offer.gperf"
    {"decision", 0x68, 12, -1, {(U8*)"decision", 8}, fhir_deserialize::ResourceType::CodeableConcept, 0, fhir_deserialize::ResourceType::Unknown},
#line 27 "./src/generated/gperf_class_files/Contract_Term_Offer.gperf"
    {"text", 0x90, 17, -1, {(U8*)"text", 4}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 19 "./src/generated/gperf_class_files/Contract_Term_Offer.gperf"
    {"party", 0x50, 9, -1, {(U8*)"party", 5}, fhir_deserialize::ResourceType::Contract_Term_Offer_Party, 0, fhir_deserialize::ResourceType::Unknown},
#line 24 "./src/generated/gperf_class_files/Contract_Term_Offer.gperf"
    {"decisionMode", 0x78, 14, -1, {(U8*)"decisionMode", 12}, fhir_deserialize::ResourceType::CodeableConcept, 0, fhir_deserialize::ResourceType::Unknown},
#line 21 "./src/generated/gperf_class_files/Contract_Term_Offer.gperf"
    {"type", 0x60, 11, -1, {(U8*)"type", 4}, fhir_deserialize::ResourceType::CodeableConcept, 0, fhir_deserialize::ResourceType::Unknown},
#line 18 "./src/generated/gperf_class_files/Contract_Term_Offer.gperf"
    {"party_count", 0x48, 8, -1, {(U8*)"party_count", 11}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 15 "./src/generated/gperf_class_files/Contract_Term_Offer.gperf"
    {"modifierExtension", 0x30, 5, -1, {(U8*)"modifierExtension", 17}, fhir_deserialize::ResourceType::Extension, 0, fhir_deserialize::ResourceType::Unknown},
#line 23 "./src/generated/gperf_class_files/Contract_Term_Offer.gperf"
    {"decisionMode_count", 0x70, 13, -1, {(U8*)"decisionMode_count", 18}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 13 "./src/generated/gperf_class_files/Contract_Term_Offer.gperf"
    {"extension", 0x20, 3, -1, {(U8*)"extension", 9}, fhir_deserialize::ResourceType::Extension, 0, fhir_deserialize::ResourceType::Unknown},
#line 17 "./src/generated/gperf_class_files/Contract_Term_Offer.gperf"
    {"identifier", 0x40, 7, -1, {(U8*)"identifier", 10}, fhir_deserialize::ResourceType::Identifier, 0, fhir_deserialize::ResourceType::Unknown},
#line 26 "./src/generated/gperf_class_files/Contract_Term_Offer.gperf"
    {"answer", 0x88, 16, -1, {(U8*)"answer", 6}, fhir_deserialize::ResourceType::Contract_Term_Offer_Answer, 0, fhir_deserialize::ResourceType::Unknown},
#line 10 "./src/generated/gperf_class_files/Contract_Term_Offer.gperf"
    {"resourceType", 0x0, 0, -1, {(U8*)"resourceType", 12}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 14 "./src/generated/gperf_class_files/Contract_Term_Offer.gperf"
    {"modifierExtension_count", 0x28, 4, -1, {(U8*)"modifierExtension_count", 23}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 31 "./src/generated/gperf_class_files/Contract_Term_Offer.gperf"
    {"securityLabelNumber", 0xb8, 21, -1, {(U8*)"securityLabelNumber", 19}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 12 "./src/generated/gperf_class_files/Contract_Term_Offer.gperf"
    {"extension_count", 0x18, 2, -1, {(U8*)"extension_count", 15}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 16 "./src/generated/gperf_class_files/Contract_Term_Offer.gperf"
    {"identifier_count", 0x38, 6, -1, {(U8*)"identifier_count", 16}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 25 "./src/generated/gperf_class_files/Contract_Term_Offer.gperf"
    {"answer_count", 0x80, 15, -1, {(U8*)"answer_count", 12}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 30 "./src/generated/gperf_class_files/Contract_Term_Offer.gperf"
    {"securityLabelNumber_count", 0xb0, 20, -1, {(U8*)"securityLabelNumber_count", 25}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 29 "./src/generated/gperf_class_files/Contract_Term_Offer.gperf"
    {"linkId", 0xa8, 19, -1, {(U8*)"linkId", 6}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 28 "./src/generated/gperf_class_files/Contract_Term_Offer.gperf"
    {"linkId_count", 0xa0, 18, -1, {(U8*)"linkId_count", 12}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown}
  };

static const signed char lookup[] =
  {
    -1, -1,  0, -1, -1,  1, -1, -1,  2,  3,  4, -1,  5, -1,
     6, -1,  7,  8,  9, 10, 11, 12, 13, 14, 15, 16, 17, 18,
    -1, -1, 19, 20, -1, -1, -1, -1, -1, 21
  };

const struct fhir_deserialize::MemberNameAndOffset *
Contract_Term_Offer_Gperf::Contract_Term_Offer_MemberLookup (register const char *str, register unsigned int len)
{
  if (len <= MAX_WORD_LENGTH && len >= MIN_WORD_LENGTH)
    {
      register int key = hash (str, len);

      if (key <= MAX_HASH_VALUE && key >= 0)
        {
          register int index = lookup[key];

          if (index >= 0)
            {
              register const char *s = word_array_Contract_Term_Offer[index].name;

              if (*str == *s && !strncmp (str + 1, s + 1, len - 1) && s[len] == '\0')
                return &word_array_Contract_Term_Offer[index];
            }
        }
    }
  return 0;
}
