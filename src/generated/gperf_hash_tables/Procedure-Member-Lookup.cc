/* C++ code produced by gperf version 3.0.1 */
/* Command-line: gperf.exe -t --output-file=src/generated/gperf_hash_tables/Procedure-Member-Lookup.cc -CGD ./src/generated/gperf_class_files/Procedure.gperf  */
/* Computed positions: -k'3,$' */

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

#line 8 "./src/generated/gperf_class_files/Procedure.gperf"
struct fhir_deserialize::MemberNameAndOffset;
enum
  {
    TOTAL_KEYWORDS = 61,
    MIN_WORD_LENGTH = 2,
    MAX_WORD_LENGTH = 27,
    MIN_HASH_VALUE = 4,
    MAX_HASH_VALUE = 133
  };

/* maximum key range = 130, duplicates = 0 */

class Procedure_Gperf
{
private:
  static inline unsigned int hash (const char *str, unsigned int len);
public:
  static const struct fhir_deserialize::MemberNameAndOffset *Procedure_MemberLookup (const char *str, unsigned int len);
};

inline unsigned int
Procedure_Gperf::hash (register const char *str, register unsigned int len)
{
  static const unsigned char asso_values[] =
    {
      134, 134, 134, 134, 134, 134, 134, 134, 134, 134,
      134, 134, 134, 134, 134, 134, 134, 134, 134, 134,
      134, 134, 134, 134, 134, 134, 134, 134, 134, 134,
      134, 134, 134, 134, 134, 134, 134, 134, 134, 134,
      134, 134, 134, 134, 134, 134, 134, 134, 134, 134,
      134, 134, 134, 134, 134, 134, 134, 134, 134, 134,
      134, 134, 134, 134, 134, 134, 134, 134, 134, 134,
      134, 134, 134, 134, 134, 134, 134, 134, 134, 134,
      134, 134, 134, 134, 134, 134, 134, 134, 134, 134,
      134, 134, 134, 134, 134, 134, 134,   0,   0,  55,
       35,  20,  10,  25, 134,   5, 134, 134,  55,  60,
       55, 134,  50, 134,  10,  25,   0, 134, 134, 134,
        5,   0, 134, 134, 134, 134, 134, 134, 134, 134,
      134, 134, 134, 134, 134, 134, 134, 134, 134, 134,
      134, 134, 134, 134, 134, 134, 134, 134, 134, 134,
      134, 134, 134, 134, 134, 134, 134, 134, 134, 134,
      134, 134, 134, 134, 134, 134, 134, 134, 134, 134,
      134, 134, 134, 134, 134, 134, 134, 134, 134, 134,
      134, 134, 134, 134, 134, 134, 134, 134, 134, 134,
      134, 134, 134, 134, 134, 134, 134, 134, 134, 134,
      134, 134, 134, 134, 134, 134, 134, 134, 134, 134,
      134, 134, 134, 134, 134, 134, 134, 134, 134, 134,
      134, 134, 134, 134, 134, 134, 134, 134, 134, 134,
      134, 134, 134, 134, 134, 134, 134, 134, 134, 134,
      134, 134, 134, 134, 134, 134, 134, 134, 134, 134,
      134, 134, 134, 134, 134, 134
    };
  register int hval = len;

  switch (hval)
    {
      default:
        hval += asso_values[(unsigned char)str[2]];
      /*FALLTHROUGH*/
      case 2:
        break;
    }
  return hval + asso_values[(unsigned char)str[len - 1]];
}

static const struct fhir_deserialize::MemberNameAndOffset word_array_Procedure[] =
  {
#line 12 "./src/generated/gperf_class_files/Procedure.gperf"
    {"meta", 0x18, 2, -1, {(U8*)"meta", 4}, fhir_deserialize::ResourceType::Meta, 0, fhir_deserialize::ResourceType::Unknown},
#line 36 "./src/generated/gperf_class_files/Procedure.gperf"
    {"subject", 0xf0, 26, -1, {(U8*)"subject", 7}, fhir_deserialize::ResourceType::Reference, 0, fhir_deserialize::ResourceType::Unknown},
#line 34 "./src/generated/gperf_class_files/Procedure.gperf"
    {"category", 0xe0, 24, -1, {(U8*)"category", 8}, fhir_deserialize::ResourceType::CodeableConcept, 0, fhir_deserialize::ResourceType::Unknown},
#line 15 "./src/generated/gperf_class_files/Procedure.gperf"
    {"text", 0x40, 5, -1, {(U8*)"text", 4}, fhir_deserialize::ResourceType::Narrative, 0, fhir_deserialize::ResourceType::Unknown},
#line 63 "./src/generated/gperf_class_files/Procedure.gperf"
    {"note_count", 0x1b8, 50, -1, {(U8*)"note_count", 10}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 18 "./src/generated/gperf_class_files/Procedure.gperf"
    {"extension_count", 0x58, 8, -1, {(U8*)"extension_count", 15}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 48 "./src/generated/gperf_class_files/Procedure.gperf"
    {"reasonCode_count", 0x140, 35, -1, {(U8*)"reasonCode_count", 16}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 50 "./src/generated/gperf_class_files/Procedure.gperf"
    {"reasonReference_count", 0x150, 37, -1, {(U8*)"reasonReference_count", 21}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 30 "./src/generated/gperf_class_files/Procedure.gperf"
    {"partOf_count", 0xb8, 20, -1, {(U8*)"partOf_count", 12}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 64 "./src/generated/gperf_class_files/Procedure.gperf"
    {"note", 0x1c0, 51, -1, {(U8*)"note", 4}, fhir_deserialize::ResourceType::Annotation, 0, fhir_deserialize::ResourceType::Unknown},
#line 45 "./src/generated/gperf_class_files/Procedure.gperf"
    {"performer_count", 0x128, 32, -1, {(U8*)"performer_count", 15}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 31 "./src/generated/gperf_class_files/Procedure.gperf"
    {"partOf", 0xc0, 21, -1, {(U8*)"partOf", 6}, fhir_deserialize::ResourceType::Reference, 0, fhir_deserialize::ResourceType::Unknown},
#line 54 "./src/generated/gperf_class_files/Procedure.gperf"
    {"outcome", 0x170, 41, -1, {(U8*)"outcome", 7}, fhir_deserialize::ResourceType::CodeableConcept, 0, fhir_deserialize::ResourceType::Unknown},
#line 46 "./src/generated/gperf_class_files/Procedure.gperf"
    {"performer", 0x130, 33, -1, {(U8*)"performer", 9}, fhir_deserialize::ResourceType::Procedure_Performer, 0, fhir_deserialize::ResourceType::Unknown},
#line 49 "./src/generated/gperf_class_files/Procedure.gperf"
    {"reasonCode", 0x148, 36, -1, {(U8*)"reasonCode", 10}, fhir_deserialize::ResourceType::CodeableConcept, 0, fhir_deserialize::ResourceType::Unknown},
#line 32 "./src/generated/gperf_class_files/Procedure.gperf"
    {"status", 0xc8, 22, -1, {(U8*)"status", 6}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 69 "./src/generated/gperf_class_files/Procedure.gperf"
    {"usedCode_count", 0x1e8, 56, -1, {(U8*)"usedCode_count", 14}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 51 "./src/generated/gperf_class_files/Procedure.gperf"
    {"reasonReference", 0x158, 38, -1, {(U8*)"reasonReference", 15}, fhir_deserialize::ResourceType::Reference, 0, fhir_deserialize::ResourceType::Unknown},
#line 22 "./src/generated/gperf_class_files/Procedure.gperf"
    {"identifier_count", 0x78, 12, -1, {(U8*)"identifier_count", 16}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 11 "./src/generated/gperf_class_files/Procedure.gperf"
    {"id", 0x8, 1, -1, {(U8*)"id", 2}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 28 "./src/generated/gperf_class_files/Procedure.gperf"
    {"basedOn_count", 0xa8, 18, -1, {(U8*)"basedOn_count", 13}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 67 "./src/generated/gperf_class_files/Procedure.gperf"
    {"usedReference_count", 0x1d8, 54, -1, {(U8*)"usedReference_count", 19}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 23 "./src/generated/gperf_class_files/Procedure.gperf"
    {"identifier", 0x80, 13, -1, {(U8*)"identifier", 10}, fhir_deserialize::ResourceType::Identifier, 0, fhir_deserialize::ResourceType::Unknown},
#line 41 "./src/generated/gperf_class_files/Procedure.gperf"
    {"performedAge", 0x108, 29, 3, {(U8*)"performed", 9}, fhir_deserialize::ResourceType::Unknown, 20, fhir_deserialize::ResourceType::Age},
#line 44 "./src/generated/gperf_class_files/Procedure.gperf"
    {"asserter", 0x120, 31, -1, {(U8*)"asserter", 8}, fhir_deserialize::ResourceType::Reference, 0, fhir_deserialize::ResourceType::Unknown},
#line 42 "./src/generated/gperf_class_files/Procedure.gperf"
    {"performedRange", 0x108, 29, 4, {(U8*)"performed", 9}, fhir_deserialize::ResourceType::Unknown, 20, fhir_deserialize::ResourceType::Range},
#line 27 "./src/generated/gperf_class_files/Procedure.gperf"
    {"instantiatesUri", 0xa0, 17, -1, {(U8*)"instantiatesUri", 15}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 26 "./src/generated/gperf_class_files/Procedure.gperf"
    {"instantiatesUri_count", 0x98, 16, -1, {(U8*)"instantiatesUri_count", 21}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 38 "./src/generated/gperf_class_files/Procedure.gperf"
    {"performedDateTime", 0x108, 29, 0, {(U8*)"performed", 9}, fhir_deserialize::ResourceType::Unknown, 17, fhir_deserialize::ResourceType::Unknown},
#line 70 "./src/generated/gperf_class_files/Procedure.gperf"
    {"usedCode", 0x1f0, 57, -1, {(U8*)"usedCode", 8}, fhir_deserialize::ResourceType::CodeableConcept, 0, fhir_deserialize::ResourceType::Unknown},
#line 52 "./src/generated/gperf_class_files/Procedure.gperf"
    {"bodySite_count", 0x160, 39, -1, {(U8*)"bodySite_count", 14}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 40 "./src/generated/gperf_class_files/Procedure.gperf"
    {"performedString", 0x108, 29, 2, {(U8*)"performed", 9}, fhir_deserialize::ResourceType::Unknown, 7, fhir_deserialize::ResourceType::Unknown},
#line 24 "./src/generated/gperf_class_files/Procedure.gperf"
    {"instantiatesCanonical_count", 0x88, 14, -1, {(U8*)"instantiatesCanonical_count", 27}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 68 "./src/generated/gperf_class_files/Procedure.gperf"
    {"usedReference", 0x1e0, 55, -1, {(U8*)"usedReference", 13}, fhir_deserialize::ResourceType::Reference, 0, fhir_deserialize::ResourceType::Unknown},
#line 56 "./src/generated/gperf_class_files/Procedure.gperf"
    {"report", 0x180, 43, -1, {(U8*)"report", 6}, fhir_deserialize::ResourceType::Reference, 0, fhir_deserialize::ResourceType::Unknown},
#line 10 "./src/generated/gperf_class_files/Procedure.gperf"
    {"resourceType", 0x0, 0, -1, {(U8*)"resourceType", 12}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 20 "./src/generated/gperf_class_files/Procedure.gperf"
    {"modifierExtension_count", 0x68, 10, -1, {(U8*)"modifierExtension_count", 23}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 35 "./src/generated/gperf_class_files/Procedure.gperf"
    {"code", 0xe8, 25, -1, {(U8*)"code", 4}, fhir_deserialize::ResourceType::CodeableConcept, 0, fhir_deserialize::ResourceType::Unknown},
#line 39 "./src/generated/gperf_class_files/Procedure.gperf"
    {"performedPeriod", 0x108, 29, 1, {(U8*)"performed", 9}, fhir_deserialize::ResourceType::Unknown, 20, fhir_deserialize::ResourceType::Period},
#line 55 "./src/generated/gperf_class_files/Procedure.gperf"
    {"report_count", 0x178, 42, -1, {(U8*)"report_count", 12}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 53 "./src/generated/gperf_class_files/Procedure.gperf"
    {"bodySite", 0x168, 40, -1, {(U8*)"bodySite", 8}, fhir_deserialize::ResourceType::CodeableConcept, 0, fhir_deserialize::ResourceType::Unknown},
#line 19 "./src/generated/gperf_class_files/Procedure.gperf"
    {"extension", 0x60, 9, -1, {(U8*)"extension", 9}, fhir_deserialize::ResourceType::Extension, 0, fhir_deserialize::ResourceType::Unknown},
#line 33 "./src/generated/gperf_class_files/Procedure.gperf"
    {"statusReason", 0xd8, 23, -1, {(U8*)"statusReason", 12}, fhir_deserialize::ResourceType::CodeableConcept, 0, fhir_deserialize::ResourceType::Unknown},
#line 61 "./src/generated/gperf_class_files/Procedure.gperf"
    {"followUp_count", 0x1a8, 48, -1, {(U8*)"followUp_count", 14}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 16 "./src/generated/gperf_class_files/Procedure.gperf"
    {"contained_count", 0x48, 6, -1, {(U8*)"contained_count", 15}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 65 "./src/generated/gperf_class_files/Procedure.gperf"
    {"focalDevice_count", 0x1c8, 52, -1, {(U8*)"focalDevice_count", 17}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 43 "./src/generated/gperf_class_files/Procedure.gperf"
    {"recorder", 0x118, 30, -1, {(U8*)"recorder", 8}, fhir_deserialize::ResourceType::Reference, 0, fhir_deserialize::ResourceType::Unknown},
#line 37 "./src/generated/gperf_class_files/Procedure.gperf"
    {"encounter", 0xf8, 27, -1, {(U8*)"encounter", 9}, fhir_deserialize::ResourceType::Reference, 0, fhir_deserialize::ResourceType::Unknown},
#line 57 "./src/generated/gperf_class_files/Procedure.gperf"
    {"complication_count", 0x188, 44, -1, {(U8*)"complication_count", 18}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 14 "./src/generated/gperf_class_files/Procedure.gperf"
    {"language", 0x30, 4, -1, {(U8*)"language", 8}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 59 "./src/generated/gperf_class_files/Procedure.gperf"
    {"complicationDetail_count", 0x198, 46, -1, {(U8*)"complicationDetail_count", 24}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 66 "./src/generated/gperf_class_files/Procedure.gperf"
    {"focalDevice", 0x1d0, 53, -1, {(U8*)"focalDevice", 11}, fhir_deserialize::ResourceType::Procedure_FocalDevice, 0, fhir_deserialize::ResourceType::Unknown},
#line 29 "./src/generated/gperf_class_files/Procedure.gperf"
    {"basedOn", 0xb0, 19, -1, {(U8*)"basedOn", 7}, fhir_deserialize::ResourceType::Reference, 0, fhir_deserialize::ResourceType::Unknown},
#line 13 "./src/generated/gperf_class_files/Procedure.gperf"
    {"implicitRules", 0x20, 3, -1, {(U8*)"implicitRules", 13}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 17 "./src/generated/gperf_class_files/Procedure.gperf"
    {"contained", 0x50, 7, -1, {(U8*)"contained", 9}, fhir_deserialize::ResourceType::Resource, 0, fhir_deserialize::ResourceType::Unknown},
#line 25 "./src/generated/gperf_class_files/Procedure.gperf"
    {"instantiatesCanonical", 0x90, 15, -1, {(U8*)"instantiatesCanonical", 21}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 21 "./src/generated/gperf_class_files/Procedure.gperf"
    {"modifierExtension", 0x70, 11, -1, {(U8*)"modifierExtension", 17}, fhir_deserialize::ResourceType::Extension, 0, fhir_deserialize::ResourceType::Unknown},
#line 62 "./src/generated/gperf_class_files/Procedure.gperf"
    {"followUp", 0x1b0, 49, -1, {(U8*)"followUp", 8}, fhir_deserialize::ResourceType::CodeableConcept, 0, fhir_deserialize::ResourceType::Unknown},
#line 47 "./src/generated/gperf_class_files/Procedure.gperf"
    {"location", 0x138, 34, -1, {(U8*)"location", 8}, fhir_deserialize::ResourceType::Reference, 0, fhir_deserialize::ResourceType::Unknown},
#line 58 "./src/generated/gperf_class_files/Procedure.gperf"
    {"complication", 0x190, 45, -1, {(U8*)"complication", 12}, fhir_deserialize::ResourceType::CodeableConcept, 0, fhir_deserialize::ResourceType::Unknown},
#line 60 "./src/generated/gperf_class_files/Procedure.gperf"
    {"complicationDetail", 0x1a0, 47, -1, {(U8*)"complicationDetail", 18}, fhir_deserialize::ResourceType::Reference, 0, fhir_deserialize::ResourceType::Unknown}
  };

static const signed char lookup[] =
  {
    -1, -1, -1, -1,  0, -1, -1,  1,  2,  3,  4, -1, -1, -1,
    -1,  5,  6, -1, -1, -1, -1,  7,  8, -1,  9, 10, 11, 12,
    -1, 13, 14, 15, -1, -1, 16, 17, 18, 19, 20, 21, 22, -1,
    23, 24, 25, 26, 27, 28, 29, 30, 31, -1, 32, 33, -1, -1,
    34, 35, 36, 37, 38, -1, 39, 40, 41, -1, -1, 42, -1, 43,
    44, -1, 45, 46, 47, -1, -1, -1, 48, -1, -1, -1, -1, 49,
    50, -1, 51, 52, 53, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, 54, -1, 55, -1, -1, -1, -1, -1, 56, -1, -1, -1, -1,
    -1, 57, -1, -1, -1, -1, 58, -1, -1, -1, -1, -1, -1, -1,
    -1, 59, -1, -1, -1, -1, -1, 60
  };

const struct fhir_deserialize::MemberNameAndOffset *
Procedure_Gperf::Procedure_MemberLookup (register const char *str, register unsigned int len)
{
  if (len <= MAX_WORD_LENGTH && len >= MIN_WORD_LENGTH)
    {
      register int key = hash (str, len);

      if (key <= MAX_HASH_VALUE && key >= 0)
        {
          register int index = lookup[key];

          if (index >= 0)
            {
              register const char *s = word_array_Procedure[index].name;

              if (*str == *s && !strncmp (str + 1, s + 1, len - 1) && s[len] == '\0')
                return &word_array_Procedure[index];
            }
        }
    }
  return 0;
}
