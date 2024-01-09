/* C++ code produced by gperf version 3.0.1 */
/* Command-line: gperf.exe -t --output-file=src/generated/gperf_hash_tables/ExplanationOfBenefit_Item-Member-Lookup.cc -CGD ./src/generated/gperf_class_files/ExplanationOfBenefit_Item.gperf  */
/* Computed positions: -k'1,5' */

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

#line 8 "./src/generated/gperf_class_files/ExplanationOfBenefit_Item.gperf"
struct fhir_deserialize::MemberNameAndOffset;
enum
  {
    TOTAL_KEYWORDS = 44,
    MIN_WORD_LENGTH = 2,
    MAX_WORD_LENGTH = 25,
    MIN_HASH_VALUE = 3,
    MAX_HASH_VALUE = 78
  };

/* maximum key range = 76, duplicates = 0 */

class ExplanationOfBenefit_Item_Gperf
{
private:
  static inline unsigned int hash (const char *str, unsigned int len);
public:
  static const struct fhir_deserialize::MemberNameAndOffset *ExplanationOfBenefit_Item_MemberLookup (const char *str, unsigned int len);
};

inline unsigned int
ExplanationOfBenefit_Item_Gperf::hash (register const char *str, register unsigned int len)
{
  static const unsigned char asso_values[] =
    {
      79, 79, 79, 79, 79, 79, 79, 79, 79, 79,
      79, 79, 79, 79, 79, 79, 79, 79, 79, 79,
      79, 79, 79, 79, 79, 79, 79, 79, 79, 79,
      79, 79, 79, 79, 79, 79, 79, 79, 79, 79,
      79, 79, 79, 79, 79, 79, 79, 79, 79, 79,
      79, 79, 79, 79, 79, 79, 79, 79, 79, 79,
      79, 79, 79, 79, 79, 79, 79, 79, 79, 79,
      79, 79, 79, 79, 79, 79, 79, 79,  0, 79,
      10, 79, 79,  5, 45, 79, 79, 79, 79, 79,
      79, 79, 79, 79, 79, 79, 79, 30,  5,  0,
      20,  5, 20,  0, 79, 15, 79, 79, 20, 20,
      35, 10, 15,  0,  0,  0, 15,  0, 79, 79,
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
      79, 79, 79, 79, 79, 79, 79, 79, 79, 79,
      79, 79, 79, 79, 79, 79
    };
  register int hval = len;

  switch (hval)
    {
      default:
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

static const struct fhir_deserialize::MemberNameAndOffset word_array_ExplanationOfBenefit_Item[] =
  {
#line 42 "./src/generated/gperf_class_files/ExplanationOfBenefit_Item.gperf"
    {"udi", 0x108, 31, -1, {(U8*)"udi", 3}, fhir_deserialize::ResourceType::Reference, 0, fhir_deserialize::ResourceType::Unknown},
#line 26 "./src/generated/gperf_class_files/ExplanationOfBenefit_Item.gperf"
    {"category", 0x88, 16, -1, {(U8*)"category", 8}, fhir_deserialize::ResourceType::CodeableConcept, 0, fhir_deserialize::ResourceType::Unknown},
#line 41 "./src/generated/gperf_class_files/ExplanationOfBenefit_Item.gperf"
    {"udi_count", 0x100, 30, -1, {(U8*)"udi_count", 9}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 10 "./src/generated/gperf_class_files/ExplanationOfBenefit_Item.gperf"
    {"resourceType", 0x0, 0, -1, {(U8*)"resourceType", 12}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 16 "./src/generated/gperf_class_files/ExplanationOfBenefit_Item.gperf"
    {"sequence", 0x38, 6, -1, {(U8*)"sequence", 8}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 47 "./src/generated/gperf_class_files/ExplanationOfBenefit_Item.gperf"
    {"encounter", 0x130, 36, -1, {(U8*)"encounter", 9}, fhir_deserialize::ResourceType::Reference, 0, fhir_deserialize::ResourceType::Unknown},
#line 11 "./src/generated/gperf_class_files/ExplanationOfBenefit_Item.gperf"
    {"id", 0x8, 1, -1, {(U8*)"id", 2}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 43 "./src/generated/gperf_class_files/ExplanationOfBenefit_Item.gperf"
    {"bodySite", 0x110, 32, -1, {(U8*)"bodySite", 8}, fhir_deserialize::ResourceType::CodeableConcept, 0, fhir_deserialize::ResourceType::Unknown},
#line 38 "./src/generated/gperf_class_files/ExplanationOfBenefit_Item.gperf"
    {"unitPrice", 0xe8, 27, -1, {(U8*)"unitPrice", 9}, fhir_deserialize::ResourceType::Money, 0, fhir_deserialize::ResourceType::Unknown},
#line 46 "./src/generated/gperf_class_files/ExplanationOfBenefit_Item.gperf"
    {"encounter_count", 0x128, 35, -1, {(U8*)"encounter_count", 15}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 45 "./src/generated/gperf_class_files/ExplanationOfBenefit_Item.gperf"
    {"subSite", 0x120, 34, -1, {(U8*)"subSite", 7}, fhir_deserialize::ResourceType::CodeableConcept, 0, fhir_deserialize::ResourceType::Unknown},
#line 37 "./src/generated/gperf_class_files/ExplanationOfBenefit_Item.gperf"
    {"quantity", 0xe0, 26, -1, {(U8*)"quantity", 8}, fhir_deserialize::ResourceType::Quantity, 0, fhir_deserialize::ResourceType::Unknown},
#line 31 "./src/generated/gperf_class_files/ExplanationOfBenefit_Item.gperf"
    {"programCode", 0xb0, 21, -1, {(U8*)"programCode", 11}, fhir_deserialize::ResourceType::CodeableConcept, 0, fhir_deserialize::ResourceType::Unknown},
#line 32 "./src/generated/gperf_class_files/ExplanationOfBenefit_Item.gperf"
    {"servicedDate", 0xc0, 23, 0, {(U8*)"serviced", 8}, fhir_deserialize::ResourceType::Unknown, 16, fhir_deserialize::ResourceType::Unknown},
#line 44 "./src/generated/gperf_class_files/ExplanationOfBenefit_Item.gperf"
    {"subSite_count", 0x118, 33, -1, {(U8*)"subSite_count", 13}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 33 "./src/generated/gperf_class_files/ExplanationOfBenefit_Item.gperf"
    {"servicedPeriod", 0xc0, 23, 1, {(U8*)"serviced", 8}, fhir_deserialize::ResourceType::Unknown, 20, fhir_deserialize::ResourceType::Period},
#line 27 "./src/generated/gperf_class_files/ExplanationOfBenefit_Item.gperf"
    {"productOrService", 0x90, 17, -1, {(U8*)"productOrService", 16}, fhir_deserialize::ResourceType::CodeableConcept, 0, fhir_deserialize::ResourceType::Unknown},
#line 30 "./src/generated/gperf_class_files/ExplanationOfBenefit_Item.gperf"
    {"programCode_count", 0xa8, 20, -1, {(U8*)"programCode_count", 17}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 24 "./src/generated/gperf_class_files/ExplanationOfBenefit_Item.gperf"
    {"informationSequence", 0x78, 14, -1, {(U8*)"informationSequence", 19}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 39 "./src/generated/gperf_class_files/ExplanationOfBenefit_Item.gperf"
    {"factor", 0xf0, 28, -1, {(U8*)"factor", 6}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 22 "./src/generated/gperf_class_files/ExplanationOfBenefit_Item.gperf"
    {"procedureSequence", 0x68, 12, -1, {(U8*)"procedureSequence", 17}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 40 "./src/generated/gperf_class_files/ExplanationOfBenefit_Item.gperf"
    {"net", 0xf8, 29, -1, {(U8*)"net", 3}, fhir_deserialize::ResourceType::Money, 0, fhir_deserialize::ResourceType::Unknown},
#line 23 "./src/generated/gperf_class_files/ExplanationOfBenefit_Item.gperf"
    {"informationSequence_count", 0x70, 13, -1, {(U8*)"informationSequence_count", 25}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 53 "./src/generated/gperf_class_files/ExplanationOfBenefit_Item.gperf"
    {"detail", 0x160, 42, -1, {(U8*)"detail", 6}, fhir_deserialize::ResourceType::ExplanationOfBenefit_Item_Detail, 0, fhir_deserialize::ResourceType::Unknown},
#line 25 "./src/generated/gperf_class_files/ExplanationOfBenefit_Item.gperf"
    {"revenue", 0x80, 15, -1, {(U8*)"revenue", 7}, fhir_deserialize::ResourceType::CodeableConcept, 0, fhir_deserialize::ResourceType::Unknown},
#line 21 "./src/generated/gperf_class_files/ExplanationOfBenefit_Item.gperf"
    {"procedureSequence_count", 0x60, 11, -1, {(U8*)"procedureSequence_count", 23}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 49 "./src/generated/gperf_class_files/ExplanationOfBenefit_Item.gperf"
    {"noteNumber", 0x140, 38, -1, {(U8*)"noteNumber", 10}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 52 "./src/generated/gperf_class_files/ExplanationOfBenefit_Item.gperf"
    {"detail_count", 0x158, 41, -1, {(U8*)"detail_count", 12}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 29 "./src/generated/gperf_class_files/ExplanationOfBenefit_Item.gperf"
    {"modifier", 0xa0, 19, -1, {(U8*)"modifier", 8}, fhir_deserialize::ResourceType::CodeableConcept, 0, fhir_deserialize::ResourceType::Unknown},
#line 13 "./src/generated/gperf_class_files/ExplanationOfBenefit_Item.gperf"
    {"extension", 0x20, 3, -1, {(U8*)"extension", 9}, fhir_deserialize::ResourceType::Extension, 0, fhir_deserialize::ResourceType::Unknown},
#line 35 "./src/generated/gperf_class_files/ExplanationOfBenefit_Item.gperf"
    {"locationAddress", 0xd8, 25, 1, {(U8*)"location", 8}, fhir_deserialize::ResourceType::CodeableConcept, 20, fhir_deserialize::ResourceType::Address},
#line 48 "./src/generated/gperf_class_files/ExplanationOfBenefit_Item.gperf"
    {"noteNumber_count", 0x138, 37, -1, {(U8*)"noteNumber_count", 16}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 36 "./src/generated/gperf_class_files/ExplanationOfBenefit_Item.gperf"
    {"locationReference", 0xd8, 25, 2, {(U8*)"location", 8}, fhir_deserialize::ResourceType::CodeableConcept, 20, fhir_deserialize::ResourceType::Reference},
#line 28 "./src/generated/gperf_class_files/ExplanationOfBenefit_Item.gperf"
    {"modifier_count", 0x98, 18, -1, {(U8*)"modifier_count", 14}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 12 "./src/generated/gperf_class_files/ExplanationOfBenefit_Item.gperf"
    {"extension_count", 0x18, 2, -1, {(U8*)"extension_count", 15}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 15 "./src/generated/gperf_class_files/ExplanationOfBenefit_Item.gperf"
    {"modifierExtension", 0x30, 5, -1, {(U8*)"modifierExtension", 17}, fhir_deserialize::ResourceType::Extension, 0, fhir_deserialize::ResourceType::Unknown},
#line 34 "./src/generated/gperf_class_files/ExplanationOfBenefit_Item.gperf"
    {"locationCodeableConcept", 0xd8, 25, 0, {(U8*)"location", 8}, fhir_deserialize::ResourceType::CodeableConcept, 20, fhir_deserialize::ResourceType::CodeableConcept},
#line 18 "./src/generated/gperf_class_files/ExplanationOfBenefit_Item.gperf"
    {"careTeamSequence", 0x48, 8, -1, {(U8*)"careTeamSequence", 16}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 51 "./src/generated/gperf_class_files/ExplanationOfBenefit_Item.gperf"
    {"adjudication", 0x150, 40, -1, {(U8*)"adjudication", 12}, fhir_deserialize::ResourceType::ExplanationOfBenefit_Item_Adjudication, 0, fhir_deserialize::ResourceType::Unknown},
#line 14 "./src/generated/gperf_class_files/ExplanationOfBenefit_Item.gperf"
    {"modifierExtension_count", 0x28, 4, -1, {(U8*)"modifierExtension_count", 23}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 17 "./src/generated/gperf_class_files/ExplanationOfBenefit_Item.gperf"
    {"careTeamSequence_count", 0x40, 7, -1, {(U8*)"careTeamSequence_count", 22}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 50 "./src/generated/gperf_class_files/ExplanationOfBenefit_Item.gperf"
    {"adjudication_count", 0x148, 39, -1, {(U8*)"adjudication_count", 18}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 20 "./src/generated/gperf_class_files/ExplanationOfBenefit_Item.gperf"
    {"diagnosisSequence", 0x58, 10, -1, {(U8*)"diagnosisSequence", 17}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 19 "./src/generated/gperf_class_files/ExplanationOfBenefit_Item.gperf"
    {"diagnosisSequence_count", 0x50, 9, -1, {(U8*)"diagnosisSequence_count", 23}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown}
  };

static const signed char lookup[] =
  {
    -1, -1, -1,  0, -1, -1, -1, -1,  1,  2, -1, -1,  3,  4,
     5, -1, -1,  6,  7,  8,  9, -1, 10, 11, -1, -1, 12, 13,
    14, 15, -1, 16, 17, -1, 18, -1, 19, 20, 21, -1, 22, 23,
    24, 25, -1, 26, -1, 27, 28, 29, 30, 31, 32, -1, 33, 34,
    -1, 35, 36, -1, -1, 37, 38, 39, -1, -1, -1, 40, 41, -1,
    -1, -1, 42, -1, -1, -1, -1, -1, 43
  };

const struct fhir_deserialize::MemberNameAndOffset *
ExplanationOfBenefit_Item_Gperf::ExplanationOfBenefit_Item_MemberLookup (register const char *str, register unsigned int len)
{
  if (len <= MAX_WORD_LENGTH && len >= MIN_WORD_LENGTH)
    {
      register int key = hash (str, len);

      if (key <= MAX_HASH_VALUE && key >= 0)
        {
          register int index = lookup[key];

          if (index >= 0)
            {
              register const char *s = word_array_ExplanationOfBenefit_Item[index].name;

              if (*str == *s && !strncmp (str + 1, s + 1, len - 1) && s[len] == '\0')
                return &word_array_ExplanationOfBenefit_Item[index];
            }
        }
    }
  return 0;
}
