/* C++ code produced by gperf version 3.0.1 */
/* Command-line: gperf.exe -t --output-file=src/generated/gperf_hash_tables/MedicationRequest-Member-Lookup.cc -CGD ./src/generated/gperf_class_files/MedicationRequest.gperf  */
/* Computed positions: -k'1,4,13' */

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

#line 8 "./src/generated/gperf_class_files/MedicationRequest.gperf"
struct fhir_deserialize::MemberNameAndOffset;
enum
  {
    TOTAL_KEYWORDS = 59,
    MIN_WORD_LENGTH = 2,
    MAX_WORD_LENGTH = 27,
    MIN_HASH_VALUE = 4,
    MAX_HASH_VALUE = 105
  };

/* maximum key range = 102, duplicates = 0 */

class MedicationRequest_Gperf
{
private:
  static inline unsigned int hash (const char *str, unsigned int len);
public:
  static const struct fhir_deserialize::MemberNameAndOffset *MedicationRequest_MemberLookup (const char *str, unsigned int len);
};

inline unsigned int
MedicationRequest_Gperf::hash (register const char *str, register unsigned int len)
{
  static const unsigned char asso_values[] =
    {
      106, 106, 106, 106, 106, 106, 106, 106, 106, 106,
      106, 106, 106, 106, 106, 106, 106, 106, 106, 106,
      106, 106, 106, 106, 106, 106, 106, 106, 106, 106,
      106, 106, 106, 106, 106, 106, 106, 106, 106, 106,
      106, 106, 106, 106, 106, 106, 106, 106, 106, 106,
      106, 106, 106, 106, 106, 106, 106, 106, 106, 106,
      106, 106, 106, 106, 106, 106, 106,   0, 106, 106,
      106, 106, 106, 106, 106, 106, 106, 106, 106, 106,
      106, 106, 106, 106, 106,   5, 106, 106, 106, 106,
      106, 106, 106, 106, 106,   0, 106,   0,   0,  30,
       15,   0,  20,   0,   5,  35,  40, 106,   0,   0,
       15,   5,  10, 106,   0,   0,  40,  20, 106, 106,
      106, 106, 106, 106, 106, 106, 106, 106, 106, 106,
      106, 106, 106, 106, 106, 106, 106, 106, 106, 106,
      106, 106, 106, 106, 106, 106, 106, 106, 106, 106,
      106, 106, 106, 106, 106, 106, 106, 106, 106, 106,
      106, 106, 106, 106, 106, 106, 106, 106, 106, 106,
      106, 106, 106, 106, 106, 106, 106, 106, 106, 106,
      106, 106, 106, 106, 106, 106, 106, 106, 106, 106,
      106, 106, 106, 106, 106, 106, 106, 106, 106, 106,
      106, 106, 106, 106, 106, 106, 106, 106, 106, 106,
      106, 106, 106, 106, 106, 106, 106, 106, 106, 106,
      106, 106, 106, 106, 106, 106, 106, 106, 106, 106,
      106, 106, 106, 106, 106, 106, 106, 106, 106, 106,
      106, 106, 106, 106, 106, 106, 106, 106, 106, 106,
      106, 106, 106, 106, 106, 106
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
      case 4:
        hval += asso_values[(unsigned char)str[3]];
      /*FALLTHROUGH*/
      case 3:
      case 2:
      case 1:
        hval += asso_values[(unsigned char)str[0]];
        break;
    }
  return hval;
}

static const struct fhir_deserialize::MemberNameAndOffset word_array_MedicationRequest[] =
  {
#line 12 "./src/generated/gperf_class_files/MedicationRequest.gperf"
    {"meta", 0x18, 2, -1, {(U8*)"meta", 4}, fhir_deserialize::ResourceType::Meta, 0, fhir_deserialize::ResourceType::Unknown},
#line 53 "./src/generated/gperf_class_files/MedicationRequest.gperf"
    {"basedOn", 0x188, 43, -1, {(U8*)"basedOn", 7}, fhir_deserialize::ResourceType::Reference, 0, fhir_deserialize::ResourceType::Unknown},
#line 14 "./src/generated/gperf_class_files/MedicationRequest.gperf"
    {"language", 0x30, 4, -1, {(U8*)"language", 8}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 19 "./src/generated/gperf_class_files/MedicationRequest.gperf"
    {"extension", 0x60, 9, -1, {(U8*)"extension", 9}, fhir_deserialize::ResourceType::Extension, 0, fhir_deserialize::ResourceType::Unknown},
#line 45 "./src/generated/gperf_class_files/MedicationRequest.gperf"
    {"reasonCode", 0x148, 35, -1, {(U8*)"reasonCode", 10}, fhir_deserialize::ResourceType::CodeableConcept, 0, fhir_deserialize::ResourceType::Unknown},
#line 63 "./src/generated/gperf_class_files/MedicationRequest.gperf"
    {"substitution", 0x1d8, 53, -1, {(U8*)"substitution", 12}, fhir_deserialize::ResourceType::MedicationRequest_Substitution, 0, fhir_deserialize::ResourceType::Unknown},
#line 43 "./src/generated/gperf_class_files/MedicationRequest.gperf"
    {"recorder", 0x138, 33, -1, {(U8*)"recorder", 8}, fhir_deserialize::ResourceType::Reference, 0, fhir_deserialize::ResourceType::Unknown},
#line 36 "./src/generated/gperf_class_files/MedicationRequest.gperf"
    {"encounter", 0xf8, 26, -1, {(U8*)"encounter", 9}, fhir_deserialize::ResourceType::Reference, 0, fhir_deserialize::ResourceType::Unknown},
#line 39 "./src/generated/gperf_class_files/MedicationRequest.gperf"
    {"authoredOn", 0x110, 29, -1, {(U8*)"authoredOn", 10}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 10 "./src/generated/gperf_class_files/MedicationRequest.gperf"
    {"resourceType", 0x0, 0, -1, {(U8*)"resourceType", 12}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 59 "./src/generated/gperf_class_files/MedicationRequest.gperf"
    {"note", 0x1b8, 49, -1, {(U8*)"note", 4}, fhir_deserialize::ResourceType::Annotation, 0, fhir_deserialize::ResourceType::Unknown},
#line 31 "./src/generated/gperf_class_files/MedicationRequest.gperf"
    {"reportedBoolean", 0xd8, 22, 0, {(U8*)"reported", 8}, fhir_deserialize::ResourceType::Unknown, 12, fhir_deserialize::ResourceType::Unknown},
#line 44 "./src/generated/gperf_class_files/MedicationRequest.gperf"
    {"reasonCode_count", 0x140, 34, -1, {(U8*)"reasonCode_count", 16}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 32 "./src/generated/gperf_class_files/MedicationRequest.gperf"
    {"reportedReference", 0xd8, 22, 1, {(U8*)"reported", 8}, fhir_deserialize::ResourceType::Unknown, 20, fhir_deserialize::ResourceType::Reference},
#line 29 "./src/generated/gperf_class_files/MedicationRequest.gperf"
    {"priority", 0xc0, 19, -1, {(U8*)"priority", 8}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 58 "./src/generated/gperf_class_files/MedicationRequest.gperf"
    {"note_count", 0x1b0, 48, -1, {(U8*)"note_count", 10}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 68 "./src/generated/gperf_class_files/MedicationRequest.gperf"
    {"eventHistory", 0x200, 58, -1, {(U8*)"eventHistory", 12}, fhir_deserialize::ResourceType::Reference, 0, fhir_deserialize::ResourceType::Unknown},
#line 66 "./src/generated/gperf_class_files/MedicationRequest.gperf"
    {"detectedIssue", 0x1f0, 56, -1, {(U8*)"detectedIssue", 13}, fhir_deserialize::ResourceType::Reference, 0, fhir_deserialize::ResourceType::Unknown},
#line 40 "./src/generated/gperf_class_files/MedicationRequest.gperf"
    {"requester", 0x120, 30, -1, {(U8*)"requester", 9}, fhir_deserialize::ResourceType::Reference, 0, fhir_deserialize::ResourceType::Unknown},
#line 47 "./src/generated/gperf_class_files/MedicationRequest.gperf"
    {"reasonReference", 0x158, 37, -1, {(U8*)"reasonReference", 15}, fhir_deserialize::ResourceType::Reference, 0, fhir_deserialize::ResourceType::Unknown},
#line 30 "./src/generated/gperf_class_files/MedicationRequest.gperf"
    {"doNotPerform", 0xd0, 20, -1, {(U8*)"doNotPerform", 12}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 67 "./src/generated/gperf_class_files/MedicationRequest.gperf"
    {"eventHistory_count", 0x1f8, 57, -1, {(U8*)"eventHistory_count", 18}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 65 "./src/generated/gperf_class_files/MedicationRequest.gperf"
    {"detectedIssue_count", 0x1e8, 55, -1, {(U8*)"detectedIssue_count", 19}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 18 "./src/generated/gperf_class_files/MedicationRequest.gperf"
    {"extension_count", 0x58, 8, -1, {(U8*)"extension_count", 15}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 46 "./src/generated/gperf_class_files/MedicationRequest.gperf"
    {"reasonReference_count", 0x150, 36, -1, {(U8*)"reasonReference_count", 21}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 11 "./src/generated/gperf_class_files/MedicationRequest.gperf"
    {"id", 0x8, 1, -1, {(U8*)"id", 2}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 28 "./src/generated/gperf_class_files/MedicationRequest.gperf"
    {"category", 0xb8, 18, -1, {(U8*)"category", 8}, fhir_deserialize::ResourceType::CodeableConcept, 0, fhir_deserialize::ResourceType::Unknown},
#line 41 "./src/generated/gperf_class_files/MedicationRequest.gperf"
    {"performer", 0x128, 31, -1, {(U8*)"performer", 9}, fhir_deserialize::ResourceType::Reference, 0, fhir_deserialize::ResourceType::Unknown},
#line 62 "./src/generated/gperf_class_files/MedicationRequest.gperf"
    {"dispenseRequest", 0x1d0, 52, -1, {(U8*)"dispenseRequest", 15}, fhir_deserialize::ResourceType::MedicationRequest_DispenseRequest, 0, fhir_deserialize::ResourceType::Unknown},
#line 26 "./src/generated/gperf_class_files/MedicationRequest.gperf"
    {"intent", 0xa0, 16, -1, {(U8*)"intent", 6}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 64 "./src/generated/gperf_class_files/MedicationRequest.gperf"
    {"priorPrescription", 0x1e0, 54, -1, {(U8*)"priorPrescription", 17}, fhir_deserialize::ResourceType::Reference, 0, fhir_deserialize::ResourceType::Unknown},
#line 42 "./src/generated/gperf_class_files/MedicationRequest.gperf"
    {"performerType", 0x130, 32, -1, {(U8*)"performerType", 13}, fhir_deserialize::ResourceType::CodeableConcept, 0, fhir_deserialize::ResourceType::Unknown},
#line 24 "./src/generated/gperf_class_files/MedicationRequest.gperf"
    {"status", 0x88, 14, -1, {(U8*)"status", 6}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 35 "./src/generated/gperf_class_files/MedicationRequest.gperf"
    {"subject", 0xf0, 25, -1, {(U8*)"subject", 7}, fhir_deserialize::ResourceType::Reference, 0, fhir_deserialize::ResourceType::Unknown},
#line 13 "./src/generated/gperf_class_files/MedicationRequest.gperf"
    {"implicitRules", 0x20, 3, -1, {(U8*)"implicitRules", 13}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 55 "./src/generated/gperf_class_files/MedicationRequest.gperf"
    {"courseOfTherapyType", 0x198, 45, -1, {(U8*)"courseOfTherapyType", 19}, fhir_deserialize::ResourceType::CodeableConcept, 0, fhir_deserialize::ResourceType::Unknown},
#line 38 "./src/generated/gperf_class_files/MedicationRequest.gperf"
    {"supportingInformation", 0x108, 28, -1, {(U8*)"supportingInformation", 21}, fhir_deserialize::ResourceType::Reference, 0, fhir_deserialize::ResourceType::Unknown},
#line 25 "./src/generated/gperf_class_files/MedicationRequest.gperf"
    {"statusReason", 0x98, 15, -1, {(U8*)"statusReason", 12}, fhir_deserialize::ResourceType::CodeableConcept, 0, fhir_deserialize::ResourceType::Unknown},
#line 52 "./src/generated/gperf_class_files/MedicationRequest.gperf"
    {"basedOn_count", 0x180, 42, -1, {(U8*)"basedOn_count", 13}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 37 "./src/generated/gperf_class_files/MedicationRequest.gperf"
    {"supportingInformation_count", 0x100, 27, -1, {(U8*)"supportingInformation_count", 27}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 27 "./src/generated/gperf_class_files/MedicationRequest.gperf"
    {"category_count", 0xb0, 17, -1, {(U8*)"category_count", 14}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 23 "./src/generated/gperf_class_files/MedicationRequest.gperf"
    {"identifier", 0x80, 13, -1, {(U8*)"identifier", 10}, fhir_deserialize::ResourceType::Identifier, 0, fhir_deserialize::ResourceType::Unknown},
#line 61 "./src/generated/gperf_class_files/MedicationRequest.gperf"
    {"dosageInstruction", 0x1c8, 51, -1, {(U8*)"dosageInstruction", 17}, fhir_deserialize::ResourceType::Dosage, 0, fhir_deserialize::ResourceType::Unknown},
#line 57 "./src/generated/gperf_class_files/MedicationRequest.gperf"
    {"insurance", 0x1a8, 47, -1, {(U8*)"insurance", 9}, fhir_deserialize::ResourceType::Reference, 0, fhir_deserialize::ResourceType::Unknown},
#line 21 "./src/generated/gperf_class_files/MedicationRequest.gperf"
    {"modifierExtension", 0x70, 11, -1, {(U8*)"modifierExtension", 17}, fhir_deserialize::ResourceType::Extension, 0, fhir_deserialize::ResourceType::Unknown},
#line 60 "./src/generated/gperf_class_files/MedicationRequest.gperf"
    {"dosageInstruction_count", 0x1c0, 50, -1, {(U8*)"dosageInstruction_count", 23}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 54 "./src/generated/gperf_class_files/MedicationRequest.gperf"
    {"groupIdentifier", 0x190, 44, -1, {(U8*)"groupIdentifier", 15}, fhir_deserialize::ResourceType::Identifier, 0, fhir_deserialize::ResourceType::Unknown},
#line 22 "./src/generated/gperf_class_files/MedicationRequest.gperf"
    {"identifier_count", 0x78, 12, -1, {(U8*)"identifier_count", 16}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 20 "./src/generated/gperf_class_files/MedicationRequest.gperf"
    {"modifierExtension_count", 0x68, 10, -1, {(U8*)"modifierExtension_count", 23}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 34 "./src/generated/gperf_class_files/MedicationRequest.gperf"
    {"medicationReference", 0xe8, 24, 1, {(U8*)"medication", 10}, fhir_deserialize::ResourceType::CodeableConcept, 20, fhir_deserialize::ResourceType::Reference},
#line 33 "./src/generated/gperf_class_files/MedicationRequest.gperf"
    {"medicationCodeableConcept", 0xe8, 24, 0, {(U8*)"medication", 10}, fhir_deserialize::ResourceType::CodeableConcept, 20, fhir_deserialize::ResourceType::CodeableConcept},
#line 17 "./src/generated/gperf_class_files/MedicationRequest.gperf"
    {"contained", 0x50, 7, -1, {(U8*)"contained", 9}, fhir_deserialize::ResourceType::Resource, 0, fhir_deserialize::ResourceType::Unknown},
#line 15 "./src/generated/gperf_class_files/MedicationRequest.gperf"
    {"text", 0x40, 5, -1, {(U8*)"text", 4}, fhir_deserialize::ResourceType::Narrative, 0, fhir_deserialize::ResourceType::Unknown},
#line 56 "./src/generated/gperf_class_files/MedicationRequest.gperf"
    {"insurance_count", 0x1a0, 46, -1, {(U8*)"insurance_count", 15}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 51 "./src/generated/gperf_class_files/MedicationRequest.gperf"
    {"instantiatesUri", 0x178, 41, -1, {(U8*)"instantiatesUri", 15}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 49 "./src/generated/gperf_class_files/MedicationRequest.gperf"
    {"instantiatesCanonical", 0x168, 39, -1, {(U8*)"instantiatesCanonical", 21}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 50 "./src/generated/gperf_class_files/MedicationRequest.gperf"
    {"instantiatesUri_count", 0x170, 40, -1, {(U8*)"instantiatesUri_count", 21}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 48 "./src/generated/gperf_class_files/MedicationRequest.gperf"
    {"instantiatesCanonical_count", 0x160, 38, -1, {(U8*)"instantiatesCanonical_count", 27}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 16 "./src/generated/gperf_class_files/MedicationRequest.gperf"
    {"contained_count", 0x48, 6, -1, {(U8*)"contained_count", 15}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown}
  };

static const signed char lookup[] =
  {
    -1, -1, -1, -1,  0, -1, -1,  1,  2,  3,  4, -1,  5,  6,
     7,  8, -1,  9, -1, 10, 11, 12, 13, 14, -1, 15, -1, 16,
    17, 18, 19, -1, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29,
    30, 31, -1, -1, 32, 33, 34, 35, -1, 36, 37, 38, -1, -1,
    -1, 39, -1, 40, 41, -1, 42, -1, 43, -1, -1, 44, 45, -1,
    46, 47, -1, 48, 49, 50, -1, -1, -1, 51, -1, -1, -1, -1,
    52, -1, -1, -1, -1, -1, 53, -1, -1, -1, -1, 54, 55, -1,
    -1, -1, -1, 56, 57, -1, -1, 58
  };

const struct fhir_deserialize::MemberNameAndOffset *
MedicationRequest_Gperf::MedicationRequest_MemberLookup (register const char *str, register unsigned int len)
{
  if (len <= MAX_WORD_LENGTH && len >= MIN_WORD_LENGTH)
    {
      register int key = hash (str, len);

      if (key <= MAX_HASH_VALUE && key >= 0)
        {
          register int index = lookup[key];

          if (index >= 0)
            {
              register const char *s = word_array_MedicationRequest[index].name;

              if (*str == *s && !strncmp (str + 1, s + 1, len - 1) && s[len] == '\0')
                return &word_array_MedicationRequest[index];
            }
        }
    }
  return 0;
}
