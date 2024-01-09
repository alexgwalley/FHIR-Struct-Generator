/* C++ code produced by gperf version 3.0.1 */
/* Command-line: gperf.exe -t --output-file=src/generated/gperf_hash_tables/HealthcareService-Member-Lookup.cc -CGD ./src/generated/gperf_class_files/HealthcareService.gperf  */
/* Computed positions: -k'1,3' */

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

#line 8 "./src/generated/gperf_class_files/HealthcareService.gperf"
struct fhir_deserialize::MemberNameAndOffset;
enum
  {
    TOTAL_KEYWORDS = 52,
    MIN_WORD_LENGTH = 2,
    MAX_WORD_LENGTH = 26,
    MIN_HASH_VALUE = 4,
    MAX_HASH_VALUE = 108
  };

/* maximum key range = 105, duplicates = 0 */

class HealthcareService_Gperf
{
private:
  static inline unsigned int hash (const char *str, unsigned int len);
public:
  static const struct fhir_deserialize::MemberNameAndOffset *HealthcareService_MemberLookup (const char *str, unsigned int len);
};

inline unsigned int
HealthcareService_Gperf::hash (register const char *str, register unsigned int len)
{
  static const unsigned char asso_values[] =
    {
      109, 109, 109, 109, 109, 109, 109, 109, 109, 109,
      109, 109, 109, 109, 109, 109, 109, 109, 109, 109,
      109, 109, 109, 109, 109, 109, 109, 109, 109, 109,
      109, 109, 109, 109, 109, 109, 109, 109, 109, 109,
      109, 109, 109, 109, 109, 109, 109, 109, 109, 109,
      109, 109, 109, 109, 109, 109, 109, 109, 109, 109,
      109, 109, 109, 109, 109, 109, 109, 109, 109, 109,
      109, 109, 109, 109, 109, 109, 109, 109, 109, 109,
      109, 109, 109, 109, 109, 109, 109, 109, 109, 109,
      109, 109, 109, 109, 109, 109, 109,   5, 109,   0,
       50,   0,  35, 109, 109,  40, 109, 109,  40,  20,
       25,  10,  55, 109,  25,   1,   0, 109,  10, 109,
        0, 109, 109, 109, 109, 109, 109, 109, 109, 109,
      109, 109, 109, 109, 109, 109, 109, 109, 109, 109,
      109, 109, 109, 109, 109, 109, 109, 109, 109, 109,
      109, 109, 109, 109, 109, 109, 109, 109, 109, 109,
      109, 109, 109, 109, 109, 109, 109, 109, 109, 109,
      109, 109, 109, 109, 109, 109, 109, 109, 109, 109,
      109, 109, 109, 109, 109, 109, 109, 109, 109, 109,
      109, 109, 109, 109, 109, 109, 109, 109, 109, 109,
      109, 109, 109, 109, 109, 109, 109, 109, 109, 109,
      109, 109, 109, 109, 109, 109, 109, 109, 109, 109,
      109, 109, 109, 109, 109, 109, 109, 109, 109, 109,
      109, 109, 109, 109, 109, 109, 109, 109, 109, 109,
      109, 109, 109, 109, 109, 109, 109, 109, 109, 109,
      109, 109, 109, 109, 109, 109
    };
  register int hval = len;

  switch (hval)
    {
      default:
        hval += asso_values[(unsigned char)str[2]];
      /*FALLTHROUGH*/
      case 2:
      case 1:
        hval += asso_values[(unsigned char)str[0]];
        break;
    }
  return hval;
}

static const struct fhir_deserialize::MemberNameAndOffset word_array_HealthcareService[] =
  {
#line 15 "./src/generated/gperf_class_files/HealthcareService.gperf"
    {"text", 0x40, 5, -1, {(U8*)"text", 4}, fhir_deserialize::ResourceType::Narrative, 0, fhir_deserialize::ResourceType::Unknown},
#line 27 "./src/generated/gperf_class_files/HealthcareService.gperf"
    {"category", 0xa0, 17, -1, {(U8*)"category", 8}, fhir_deserialize::ResourceType::CodeableConcept, 0, fhir_deserialize::ResourceType::Unknown},
#line 19 "./src/generated/gperf_class_files/HealthcareService.gperf"
    {"extension", 0x60, 9, -1, {(U8*)"extension", 9}, fhir_deserialize::ResourceType::Extension, 0, fhir_deserialize::ResourceType::Unknown},
#line 31 "./src/generated/gperf_class_files/HealthcareService.gperf"
    {"specialty", 0xc0, 21, -1, {(U8*)"specialty", 9}, fhir_deserialize::ResourceType::CodeableConcept, 0, fhir_deserialize::ResourceType::Unknown},
#line 24 "./src/generated/gperf_class_files/HealthcareService.gperf"
    {"active", 0x88, 14, -1, {(U8*)"active", 6}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 36 "./src/generated/gperf_class_files/HealthcareService.gperf"
    {"extraDetails", 0xf8, 26, -1, {(U8*)"extraDetails", 12}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 26 "./src/generated/gperf_class_files/HealthcareService.gperf"
    {"category_count", 0x98, 16, -1, {(U8*)"category_count", 14}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 18 "./src/generated/gperf_class_files/HealthcareService.gperf"
    {"extension_count", 0x58, 8, -1, {(U8*)"extension_count", 15}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 30 "./src/generated/gperf_class_files/HealthcareService.gperf"
    {"specialty_count", 0xb8, 20, -1, {(U8*)"specialty_count", 15}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 49 "./src/generated/gperf_class_files/HealthcareService.gperf"
    {"characteristic", 0x168, 39, -1, {(U8*)"characteristic", 14}, fhir_deserialize::ResourceType::CodeableConcept, 0, fhir_deserialize::ResourceType::Unknown},
#line 41 "./src/generated/gperf_class_files/HealthcareService.gperf"
    {"coverageArea", 0x128, 31, -1, {(U8*)"coverageArea", 12}, fhir_deserialize::ResourceType::Reference, 0, fhir_deserialize::ResourceType::Unknown},
#line 56 "./src/generated/gperf_class_files/HealthcareService.gperf"
    {"availableTime", 0x1a0, 46, -1, {(U8*)"availableTime", 13}, fhir_deserialize::ResourceType::HealthcareService_AvailableTime, 0, fhir_deserialize::ResourceType::Unknown},
#line 12 "./src/generated/gperf_class_files/HealthcareService.gperf"
    {"meta", 0x18, 2, -1, {(U8*)"meta", 4}, fhir_deserialize::ResourceType::Meta, 0, fhir_deserialize::ResourceType::Unknown},
#line 48 "./src/generated/gperf_class_files/HealthcareService.gperf"
    {"characteristic_count", 0x160, 38, -1, {(U8*)"characteristic_count", 20}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 35 "./src/generated/gperf_class_files/HealthcareService.gperf"
    {"comment", 0xe8, 25, -1, {(U8*)"comment", 7}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 40 "./src/generated/gperf_class_files/HealthcareService.gperf"
    {"coverageArea_count", 0x120, 30, -1, {(U8*)"coverageArea_count", 18}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 55 "./src/generated/gperf_class_files/HealthcareService.gperf"
    {"availableTime_count", 0x198, 45, -1, {(U8*)"availableTime_count", 19}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 59 "./src/generated/gperf_class_files/HealthcareService.gperf"
    {"availabilityExceptions", 0x1b8, 49, -1, {(U8*)"availabilityExceptions", 22}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 51 "./src/generated/gperf_class_files/HealthcareService.gperf"
    {"communication", 0x178, 41, -1, {(U8*)"communication", 13}, fhir_deserialize::ResourceType::CodeableConcept, 0, fhir_deserialize::ResourceType::Unknown},
#line 17 "./src/generated/gperf_class_files/HealthcareService.gperf"
    {"contained", 0x50, 7, -1, {(U8*)"contained", 9}, fhir_deserialize::ResourceType::Resource, 0, fhir_deserialize::ResourceType::Unknown},
#line 58 "./src/generated/gperf_class_files/HealthcareService.gperf"
    {"notAvailable", 0x1b0, 48, -1, {(U8*)"notAvailable", 12}, fhir_deserialize::ResourceType::HealthcareService_NotAvailable, 0, fhir_deserialize::ResourceType::Unknown},
#line 10 "./src/generated/gperf_class_files/HealthcareService.gperf"
    {"resourceType", 0x0, 0, -1, {(U8*)"resourceType", 12}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 50 "./src/generated/gperf_class_files/HealthcareService.gperf"
    {"communication_count", 0x170, 40, -1, {(U8*)"communication_count", 19}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 16 "./src/generated/gperf_class_files/HealthcareService.gperf"
    {"contained_count", 0x48, 6, -1, {(U8*)"contained_count", 15}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 11 "./src/generated/gperf_class_files/HealthcareService.gperf"
    {"id", 0x8, 1, -1, {(U8*)"id", 2}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 57 "./src/generated/gperf_class_files/HealthcareService.gperf"
    {"notAvailable_count", 0x1a8, 47, -1, {(U8*)"notAvailable_count", 18}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 43 "./src/generated/gperf_class_files/HealthcareService.gperf"
    {"serviceProvisionCode", 0x138, 33, -1, {(U8*)"serviceProvisionCode", 20}, fhir_deserialize::ResourceType::CodeableConcept, 0, fhir_deserialize::ResourceType::Unknown},
#line 39 "./src/generated/gperf_class_files/HealthcareService.gperf"
    {"telecom", 0x118, 29, -1, {(U8*)"telecom", 7}, fhir_deserialize::ResourceType::ContactPoint, 0, fhir_deserialize::ResourceType::Unknown},
#line 33 "./src/generated/gperf_class_files/HealthcareService.gperf"
    {"location", 0xd0, 23, -1, {(U8*)"location", 8}, fhir_deserialize::ResourceType::Reference, 0, fhir_deserialize::ResourceType::Unknown},
#line 34 "./src/generated/gperf_class_files/HealthcareService.gperf"
    {"name", 0xd8, 24, -1, {(U8*)"name", 4}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 23 "./src/generated/gperf_class_files/HealthcareService.gperf"
    {"identifier", 0x80, 13, -1, {(U8*)"identifier", 10}, fhir_deserialize::ResourceType::Identifier, 0, fhir_deserialize::ResourceType::Unknown},
#line 45 "./src/generated/gperf_class_files/HealthcareService.gperf"
    {"eligibility", 0x148, 35, -1, {(U8*)"eligibility", 11}, fhir_deserialize::ResourceType::HealthcareService_Eligibility, 0, fhir_deserialize::ResourceType::Unknown},
#line 42 "./src/generated/gperf_class_files/HealthcareService.gperf"
    {"serviceProvisionCode_count", 0x130, 32, -1, {(U8*)"serviceProvisionCode_count", 26}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 38 "./src/generated/gperf_class_files/HealthcareService.gperf"
    {"telecom_count", 0x110, 28, -1, {(U8*)"telecom_count", 13}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 32 "./src/generated/gperf_class_files/HealthcareService.gperf"
    {"location_count", 0xc8, 22, -1, {(U8*)"location_count", 14}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 22 "./src/generated/gperf_class_files/HealthcareService.gperf"
    {"identifier_count", 0x78, 12, -1, {(U8*)"identifier_count", 16}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 44 "./src/generated/gperf_class_files/HealthcareService.gperf"
    {"eligibility_count", 0x140, 34, -1, {(U8*)"eligibility_count", 17}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 61 "./src/generated/gperf_class_files/HealthcareService.gperf"
    {"endpoint", 0x1d0, 51, -1, {(U8*)"endpoint", 8}, fhir_deserialize::ResourceType::Reference, 0, fhir_deserialize::ResourceType::Unknown},
#line 29 "./src/generated/gperf_class_files/HealthcareService.gperf"
    {"type", 0xb0, 19, -1, {(U8*)"type", 4}, fhir_deserialize::ResourceType::CodeableConcept, 0, fhir_deserialize::ResourceType::Unknown},
#line 60 "./src/generated/gperf_class_files/HealthcareService.gperf"
    {"endpoint_count", 0x1c8, 50, -1, {(U8*)"endpoint_count", 14}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 28 "./src/generated/gperf_class_files/HealthcareService.gperf"
    {"type_count", 0xa8, 18, -1, {(U8*)"type_count", 10}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 37 "./src/generated/gperf_class_files/HealthcareService.gperf"
    {"photo", 0x108, 27, -1, {(U8*)"photo", 5}, fhir_deserialize::ResourceType::Attachment, 0, fhir_deserialize::ResourceType::Unknown},
#line 47 "./src/generated/gperf_class_files/HealthcareService.gperf"
    {"program", 0x158, 37, -1, {(U8*)"program", 7}, fhir_deserialize::ResourceType::CodeableConcept, 0, fhir_deserialize::ResourceType::Unknown},
#line 14 "./src/generated/gperf_class_files/HealthcareService.gperf"
    {"language", 0x30, 4, -1, {(U8*)"language", 8}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 53 "./src/generated/gperf_class_files/HealthcareService.gperf"
    {"referralMethod", 0x188, 43, -1, {(U8*)"referralMethod", 14}, fhir_deserialize::ResourceType::CodeableConcept, 0, fhir_deserialize::ResourceType::Unknown},
#line 25 "./src/generated/gperf_class_files/HealthcareService.gperf"
    {"providedBy", 0x90, 15, -1, {(U8*)"providedBy", 10}, fhir_deserialize::ResourceType::Reference, 0, fhir_deserialize::ResourceType::Unknown},
#line 46 "./src/generated/gperf_class_files/HealthcareService.gperf"
    {"program_count", 0x150, 36, -1, {(U8*)"program_count", 13}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 54 "./src/generated/gperf_class_files/HealthcareService.gperf"
    {"appointmentRequired", 0x190, 44, -1, {(U8*)"appointmentRequired", 19}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 52 "./src/generated/gperf_class_files/HealthcareService.gperf"
    {"referralMethod_count", 0x180, 42, -1, {(U8*)"referralMethod_count", 20}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 21 "./src/generated/gperf_class_files/HealthcareService.gperf"
    {"modifierExtension", 0x70, 11, -1, {(U8*)"modifierExtension", 17}, fhir_deserialize::ResourceType::Extension, 0, fhir_deserialize::ResourceType::Unknown},
#line 20 "./src/generated/gperf_class_files/HealthcareService.gperf"
    {"modifierExtension_count", 0x68, 10, -1, {(U8*)"modifierExtension_count", 23}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 13 "./src/generated/gperf_class_files/HealthcareService.gperf"
    {"implicitRules", 0x20, 3, -1, {(U8*)"implicitRules", 13}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown}
  };

static const signed char lookup[] =
  {
    -1, -1, -1, -1,  0, -1, -1, -1,  1,  2,  3,  4,  5, -1,
     6,  7,  8, -1, -1,  9, -1, -1, 10, 11, 12, 13, -1, 14,
    15, 16, -1, -1, 17, 18, 19, -1, -1, 20, 21, 22, 23, -1,
    24, 25, -1, -1, 26, 27, 28, 29, 30, 31, 32, 33, 34, -1,
    35, 36, 37, 38, -1, -1, -1, -1, 39, 40, -1, -1, -1, -1,
    41, -1, 42, 43, 44, 45, -1, -1, 46, 47, 48, -1, -1, -1,
    -1, -1, -1, 49, -1, -1, -1, -1, -1, 50, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 51
  };

const struct fhir_deserialize::MemberNameAndOffset *
HealthcareService_Gperf::HealthcareService_MemberLookup (register const char *str, register unsigned int len)
{
  if (len <= MAX_WORD_LENGTH && len >= MIN_WORD_LENGTH)
    {
      register int key = hash (str, len);

      if (key <= MAX_HASH_VALUE && key >= 0)
        {
          register int index = lookup[key];

          if (index >= 0)
            {
              register const char *s = word_array_HealthcareService[index].name;

              if (*str == *s && !strncmp (str + 1, s + 1, len - 1) && s[len] == '\0')
                return &word_array_HealthcareService[index];
            }
        }
    }
  return 0;
}
