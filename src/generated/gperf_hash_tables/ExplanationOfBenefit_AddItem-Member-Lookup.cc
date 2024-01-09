/* C++ code produced by gperf version 3.0.1 */
/* Command-line: gperf.exe -t --output-file=src/generated/gperf_hash_tables/ExplanationOfBenefit_AddItem-Member-Lookup.cc -CGD ./src/generated/gperf_class_files/ExplanationOfBenefit_AddItem.gperf  */
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

#line 8 "./src/generated/gperf_class_files/ExplanationOfBenefit_AddItem.gperf"
struct fhir_deserialize::MemberNameAndOffset;
enum
  {
    TOTAL_KEYWORDS = 37,
    MIN_WORD_LENGTH = 2,
    MAX_WORD_LENGTH = 23,
    MIN_HASH_VALUE = 3,
    MAX_HASH_VALUE = 63
  };

/* maximum key range = 61, duplicates = 0 */

class ExplanationOfBenefit_AddItem_Gperf
{
private:
  static inline unsigned int hash (const char *str, unsigned int len);
public:
  static const struct fhir_deserialize::MemberNameAndOffset *ExplanationOfBenefit_AddItem_MemberLookup (const char *str, unsigned int len);
};

inline unsigned int
ExplanationOfBenefit_AddItem_Gperf::hash (register const char *str, register unsigned int len)
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
      64, 64, 64, 64, 64, 64, 64, 40, 25, 64,
      30,  0,  0, 64, 64, 45, 64, 64, 15, 20,
       0, 64, 10,  0, 10,  0, 64, 10, 64, 64,
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
      64, 64, 64, 64, 64, 64, 64, 64, 64, 64,
      64, 64, 64, 64, 64, 64
    };
  return len + asso_values[(unsigned char)str[0]];
}

static const struct fhir_deserialize::MemberNameAndOffset word_array_ExplanationOfBenefit_AddItem[] =
  {
#line 37 "./src/generated/gperf_class_files/ExplanationOfBenefit_AddItem.gperf"
    {"net", 0xe0, 26, -1, {(U8*)"net", 3}, fhir_deserialize::ResourceType::Money, 0, fhir_deserialize::ResourceType::Unknown},
#line 36 "./src/generated/gperf_class_files/ExplanationOfBenefit_AddItem.gperf"
    {"factor", 0xd8, 25, -1, {(U8*)"factor", 6}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 40 "./src/generated/gperf_class_files/ExplanationOfBenefit_AddItem.gperf"
    {"subSite", 0xf8, 29, -1, {(U8*)"subSite", 7}, fhir_deserialize::ResourceType::CodeableConcept, 0, fhir_deserialize::ResourceType::Unknown},
#line 34 "./src/generated/gperf_class_files/ExplanationOfBenefit_AddItem.gperf"
    {"quantity", 0xc8, 23, -1, {(U8*)"quantity", 8}, fhir_deserialize::ResourceType::Quantity, 0, fhir_deserialize::ResourceType::Unknown},
#line 13 "./src/generated/gperf_class_files/ExplanationOfBenefit_AddItem.gperf"
    {"extension", 0x20, 3, -1, {(U8*)"extension", 9}, fhir_deserialize::ResourceType::Extension, 0, fhir_deserialize::ResourceType::Unknown},
#line 42 "./src/generated/gperf_class_files/ExplanationOfBenefit_AddItem.gperf"
    {"noteNumber", 0x108, 31, -1, {(U8*)"noteNumber", 10}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 29 "./src/generated/gperf_class_files/ExplanationOfBenefit_AddItem.gperf"
    {"servicedDate", 0xa8, 20, 0, {(U8*)"serviced", 8}, fhir_deserialize::ResourceType::Unknown, 16, fhir_deserialize::ResourceType::Unknown},
#line 39 "./src/generated/gperf_class_files/ExplanationOfBenefit_AddItem.gperf"
    {"subSite_count", 0xf0, 28, -1, {(U8*)"subSite_count", 13}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 30 "./src/generated/gperf_class_files/ExplanationOfBenefit_AddItem.gperf"
    {"servicedPeriod", 0xa8, 20, 1, {(U8*)"serviced", 8}, fhir_deserialize::ResourceType::Unknown, 20, fhir_deserialize::ResourceType::Period},
#line 12 "./src/generated/gperf_class_files/ExplanationOfBenefit_AddItem.gperf"
    {"extension_count", 0x18, 2, -1, {(U8*)"extension_count", 15}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 41 "./src/generated/gperf_class_files/ExplanationOfBenefit_AddItem.gperf"
    {"noteNumber_count", 0x100, 30, -1, {(U8*)"noteNumber_count", 16}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 21 "./src/generated/gperf_class_files/ExplanationOfBenefit_AddItem.gperf"
    {"subDetailSequence", 0x60, 11, -1, {(U8*)"subDetailSequence", 17}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 23 "./src/generated/gperf_class_files/ExplanationOfBenefit_AddItem.gperf"
    {"provider", 0x70, 13, -1, {(U8*)"provider", 8}, fhir_deserialize::ResourceType::Reference, 0, fhir_deserialize::ResourceType::Unknown},
#line 35 "./src/generated/gperf_class_files/ExplanationOfBenefit_AddItem.gperf"
    {"unitPrice", 0xd0, 24, -1, {(U8*)"unitPrice", 9}, fhir_deserialize::ResourceType::Money, 0, fhir_deserialize::ResourceType::Unknown},
#line 28 "./src/generated/gperf_class_files/ExplanationOfBenefit_AddItem.gperf"
    {"programCode", 0x98, 18, -1, {(U8*)"programCode", 11}, fhir_deserialize::ResourceType::CodeableConcept, 0, fhir_deserialize::ResourceType::Unknown},
#line 10 "./src/generated/gperf_class_files/ExplanationOfBenefit_AddItem.gperf"
    {"resourceType", 0x0, 0, -1, {(U8*)"resourceType", 12}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 20 "./src/generated/gperf_class_files/ExplanationOfBenefit_AddItem.gperf"
    {"subDetailSequence_count", 0x58, 10, -1, {(U8*)"subDetailSequence_count", 23}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 22 "./src/generated/gperf_class_files/ExplanationOfBenefit_AddItem.gperf"
    {"provider_count", 0x68, 12, -1, {(U8*)"provider_count", 14}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 24 "./src/generated/gperf_class_files/ExplanationOfBenefit_AddItem.gperf"
    {"productOrService", 0x78, 14, -1, {(U8*)"productOrService", 16}, fhir_deserialize::ResourceType::CodeableConcept, 0, fhir_deserialize::ResourceType::Unknown},
#line 27 "./src/generated/gperf_class_files/ExplanationOfBenefit_AddItem.gperf"
    {"programCode_count", 0x90, 17, -1, {(U8*)"programCode_count", 17}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 26 "./src/generated/gperf_class_files/ExplanationOfBenefit_AddItem.gperf"
    {"modifier", 0x88, 16, -1, {(U8*)"modifier", 8}, fhir_deserialize::ResourceType::CodeableConcept, 0, fhir_deserialize::ResourceType::Unknown},
#line 32 "./src/generated/gperf_class_files/ExplanationOfBenefit_AddItem.gperf"
    {"locationAddress", 0xc0, 22, 1, {(U8*)"location", 8}, fhir_deserialize::ResourceType::CodeableConcept, 20, fhir_deserialize::ResourceType::Address},
#line 33 "./src/generated/gperf_class_files/ExplanationOfBenefit_AddItem.gperf"
    {"locationReference", 0xc0, 22, 2, {(U8*)"location", 8}, fhir_deserialize::ResourceType::CodeableConcept, 20, fhir_deserialize::ResourceType::Reference},
#line 38 "./src/generated/gperf_class_files/ExplanationOfBenefit_AddItem.gperf"
    {"bodySite", 0xe8, 27, -1, {(U8*)"bodySite", 8}, fhir_deserialize::ResourceType::CodeableConcept, 0, fhir_deserialize::ResourceType::Unknown},
#line 25 "./src/generated/gperf_class_files/ExplanationOfBenefit_AddItem.gperf"
    {"modifier_count", 0x80, 15, -1, {(U8*)"modifier_count", 14}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 46 "./src/generated/gperf_class_files/ExplanationOfBenefit_AddItem.gperf"
    {"detail", 0x128, 35, -1, {(U8*)"detail", 6}, fhir_deserialize::ResourceType::ExplanationOfBenefit_AddItem_Detail, 0, fhir_deserialize::ResourceType::Unknown},
#line 15 "./src/generated/gperf_class_files/ExplanationOfBenefit_AddItem.gperf"
    {"modifierExtension", 0x30, 5, -1, {(U8*)"modifierExtension", 17}, fhir_deserialize::ResourceType::Extension, 0, fhir_deserialize::ResourceType::Unknown},
#line 31 "./src/generated/gperf_class_files/ExplanationOfBenefit_AddItem.gperf"
    {"locationCodeableConcept", 0xc0, 22, 0, {(U8*)"location", 8}, fhir_deserialize::ResourceType::CodeableConcept, 20, fhir_deserialize::ResourceType::CodeableConcept},
#line 45 "./src/generated/gperf_class_files/ExplanationOfBenefit_AddItem.gperf"
    {"detail_count", 0x120, 34, -1, {(U8*)"detail_count", 12}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 14 "./src/generated/gperf_class_files/ExplanationOfBenefit_AddItem.gperf"
    {"modifierExtension_count", 0x28, 4, -1, {(U8*)"modifierExtension_count", 23}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 19 "./src/generated/gperf_class_files/ExplanationOfBenefit_AddItem.gperf"
    {"detailSequence", 0x50, 9, -1, {(U8*)"detailSequence", 14}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 11 "./src/generated/gperf_class_files/ExplanationOfBenefit_AddItem.gperf"
    {"id", 0x8, 1, -1, {(U8*)"id", 2}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 18 "./src/generated/gperf_class_files/ExplanationOfBenefit_AddItem.gperf"
    {"detailSequence_count", 0x48, 8, -1, {(U8*)"detailSequence_count", 20}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 44 "./src/generated/gperf_class_files/ExplanationOfBenefit_AddItem.gperf"
    {"adjudication", 0x118, 33, -1, {(U8*)"adjudication", 12}, fhir_deserialize::ResourceType::ExplanationOfBenefit_Item_Adjudication, 0, fhir_deserialize::ResourceType::Unknown},
#line 17 "./src/generated/gperf_class_files/ExplanationOfBenefit_AddItem.gperf"
    {"itemSequence", 0x40, 7, -1, {(U8*)"itemSequence", 12}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 43 "./src/generated/gperf_class_files/ExplanationOfBenefit_AddItem.gperf"
    {"adjudication_count", 0x110, 32, -1, {(U8*)"adjudication_count", 18}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 16 "./src/generated/gperf_class_files/ExplanationOfBenefit_AddItem.gperf"
    {"itemSequence_count", 0x38, 6, -1, {(U8*)"itemSequence_count", 18}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown}
  };

static const signed char lookup[] =
  {
    -1, -1, -1,  0, -1, -1,  1,  2,  3,  4,  5, -1,  6,  7,
     8,  9, 10, 11, 12, 13, -1, 14, 15, 16, 17, -1, 18, 19,
    20, -1, 21, -1, 22, 23, 24, -1, 25, 26, 27, -1, -1, -1,
    28, 29, 30, -1, -1, 31, -1, -1, 32, -1, 33, -1, -1, -1,
    -1, 34, 35, -1, -1, -1, -1, 36
  };

const struct fhir_deserialize::MemberNameAndOffset *
ExplanationOfBenefit_AddItem_Gperf::ExplanationOfBenefit_AddItem_MemberLookup (register const char *str, register unsigned int len)
{
  if (len <= MAX_WORD_LENGTH && len >= MIN_WORD_LENGTH)
    {
      register int key = hash (str, len);

      if (key <= MAX_HASH_VALUE && key >= 0)
        {
          register int index = lookup[key];

          if (index >= 0)
            {
              register const char *s = word_array_ExplanationOfBenefit_AddItem[index].name;

              if (*str == *s && !strncmp (str + 1, s + 1, len - 1) && s[len] == '\0')
                return &word_array_ExplanationOfBenefit_AddItem[index];
            }
        }
    }
  return 0;
}
