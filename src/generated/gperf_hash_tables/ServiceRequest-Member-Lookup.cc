/* C++ code produced by gperf version 3.0.1 */
/* Command-line: gperf.exe -t --output-file=src/generated/gperf_hash_tables/ServiceRequest-Member-Lookup.cc -CGD ./src/generated/gperf_class_files/ServiceRequest.gperf  */
/* Computed positions: -k'1-2,13' */

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

#line 8 "./src/generated/gperf_class_files/ServiceRequest.gperf"
struct fhir_deserialize::MemberNameAndOffset;
enum
  {
    TOTAL_KEYWORDS = 68,
    MIN_WORD_LENGTH = 2,
    MAX_WORD_LENGTH = 27,
    MIN_HASH_VALUE = 14,
    MAX_HASH_VALUE = 161
  };

/* maximum key range = 148, duplicates = 0 */

class ServiceRequest_Gperf
{
private:
  static inline unsigned int hash (const char *str, unsigned int len);
public:
  static const struct fhir_deserialize::MemberNameAndOffset *ServiceRequest_MemberLookup (const char *str, unsigned int len);
};

inline unsigned int
ServiceRequest_Gperf::hash (register const char *str, register unsigned int len)
{
  static const unsigned char asso_values[] =
    {
      162, 162, 162, 162, 162, 162, 162, 162, 162, 162,
      162, 162, 162, 162, 162, 162, 162, 162, 162, 162,
      162, 162, 162, 162, 162, 162, 162, 162, 162, 162,
      162, 162, 162, 162, 162, 162, 162, 162, 162, 162,
      162, 162, 162, 162, 162, 162, 162, 162, 162, 162,
      162, 162, 162, 162, 162, 162, 162, 162, 162, 162,
      162, 162, 162, 162, 162, 162, 162,  25, 162, 162,
      162, 162, 162, 162, 162, 162, 162, 162, 162, 162,
      162, 162, 162, 162, 162,  20, 162, 162, 162, 162,
      162, 162, 162, 162, 162,   0, 162,  15,  75,  25,
        0,  15,  50, 162, 162,  60, 162, 162,  60,  45,
        0,  10,  25,  90,   5,  20,  55,   0, 162, 162,
       55, 162, 162, 162, 162, 162, 162, 162, 162, 162,
      162, 162, 162, 162, 162, 162, 162, 162, 162, 162,
      162, 162, 162, 162, 162, 162, 162, 162, 162, 162,
      162, 162, 162, 162, 162, 162, 162, 162, 162, 162,
      162, 162, 162, 162, 162, 162, 162, 162, 162, 162,
      162, 162, 162, 162, 162, 162, 162, 162, 162, 162,
      162, 162, 162, 162, 162, 162, 162, 162, 162, 162,
      162, 162, 162, 162, 162, 162, 162, 162, 162, 162,
      162, 162, 162, 162, 162, 162, 162, 162, 162, 162,
      162, 162, 162, 162, 162, 162, 162, 162, 162, 162,
      162, 162, 162, 162, 162, 162, 162, 162, 162, 162,
      162, 162, 162, 162, 162, 162, 162, 162, 162, 162,
      162, 162, 162, 162, 162, 162, 162, 162, 162, 162,
      162, 162, 162, 162, 162, 162
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
      case 3:
      case 2:
        hval += asso_values[(unsigned char)str[1]];
      /*FALLTHROUGH*/
      case 1:
        hval += asso_values[(unsigned char)str[0]];
        break;
    }
  return hval;
}

static const struct fhir_deserialize::MemberNameAndOffset word_array_ServiceRequest[] =
  {
#line 74 "./src/generated/gperf_class_files/ServiceRequest.gperf"
    {"note", 0x230, 62, -1, {(U8*)"note", 4}, fhir_deserialize::ResourceType::Annotation, 0, fhir_deserialize::ResourceType::Unknown},
#line 73 "./src/generated/gperf_class_files/ServiceRequest.gperf"
    {"note_count", 0x228, 61, -1, {(U8*)"note_count", 10}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 38 "./src/generated/gperf_class_files/ServiceRequest.gperf"
    {"doNotPerform", 0x110, 28, -1, {(U8*)"doNotPerform", 12}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 46 "./src/generated/gperf_class_files/ServiceRequest.gperf"
    {"encounter", 0x148, 35, -1, {(U8*)"encounter", 9}, fhir_deserialize::ResourceType::Reference, 0, fhir_deserialize::ResourceType::Unknown},
#line 52 "./src/generated/gperf_class_files/ServiceRequest.gperf"
    {"authoredOn", 0x178, 40, -1, {(U8*)"authoredOn", 10}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 41 "./src/generated/gperf_class_files/ServiceRequest.gperf"
    {"orderDetail", 0x128, 31, -1, {(U8*)"orderDetail", 11}, fhir_deserialize::ResourceType::CodeableConcept, 0, fhir_deserialize::ResourceType::Unknown},
#line 45 "./src/generated/gperf_class_files/ServiceRequest.gperf"
    {"subject", 0x140, 34, -1, {(U8*)"subject", 7}, fhir_deserialize::ResourceType::Reference, 0, fhir_deserialize::ResourceType::Unknown},
#line 31 "./src/generated/gperf_class_files/ServiceRequest.gperf"
    {"replaces", 0xc0, 21, -1, {(U8*)"replaces", 8}, fhir_deserialize::ResourceType::Reference, 0, fhir_deserialize::ResourceType::Unknown},
#line 53 "./src/generated/gperf_class_files/ServiceRequest.gperf"
    {"requester", 0x188, 41, -1, {(U8*)"requester", 9}, fhir_deserialize::ResourceType::Reference, 0, fhir_deserialize::ResourceType::Unknown},
#line 62 "./src/generated/gperf_class_files/ServiceRequest.gperf"
    {"reasonCode", 0x1d0, 50, -1, {(U8*)"reasonCode", 10}, fhir_deserialize::ResourceType::CodeableConcept, 0, fhir_deserialize::ResourceType::Unknown},
#line 32 "./src/generated/gperf_class_files/ServiceRequest.gperf"
    {"requisition", 0xc8, 22, -1, {(U8*)"requisition", 11}, fhir_deserialize::ResourceType::Identifier, 0, fhir_deserialize::ResourceType::Unknown},
#line 10 "./src/generated/gperf_class_files/ServiceRequest.gperf"
    {"resourceType", 0x0, 0, -1, {(U8*)"resourceType", 12}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 30 "./src/generated/gperf_class_files/ServiceRequest.gperf"
    {"replaces_count", 0xb8, 20, -1, {(U8*)"replaces_count", 14}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 64 "./src/generated/gperf_class_files/ServiceRequest.gperf"
    {"reasonReference", 0x1e0, 52, -1, {(U8*)"reasonReference", 15}, fhir_deserialize::ResourceType::Reference, 0, fhir_deserialize::ResourceType::Unknown},
#line 37 "./src/generated/gperf_class_files/ServiceRequest.gperf"
    {"priority", 0x100, 27, -1, {(U8*)"priority", 8}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 39 "./src/generated/gperf_class_files/ServiceRequest.gperf"
    {"code", 0x118, 29, -1, {(U8*)"code", 4}, fhir_deserialize::ResourceType::CodeableConcept, 0, fhir_deserialize::ResourceType::Unknown},
#line 63 "./src/generated/gperf_class_files/ServiceRequest.gperf"
    {"reasonReference_count", 0x1d8, 51, -1, {(U8*)"reasonReference_count", 21}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 17 "./src/generated/gperf_class_files/ServiceRequest.gperf"
    {"contained", 0x50, 7, -1, {(U8*)"contained", 9}, fhir_deserialize::ResourceType::Resource, 0, fhir_deserialize::ResourceType::Unknown},
#line 77 "./src/generated/gperf_class_files/ServiceRequest.gperf"
    {"relevantHistory", 0x250, 65, -1, {(U8*)"relevantHistory", 15}, fhir_deserialize::ResourceType::Reference, 0, fhir_deserialize::ResourceType::Unknown},
#line 61 "./src/generated/gperf_class_files/ServiceRequest.gperf"
    {"reasonCode_count", 0x1c8, 49, -1, {(U8*)"reasonCode_count", 16}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 36 "./src/generated/gperf_class_files/ServiceRequest.gperf"
    {"category", 0xf8, 26, -1, {(U8*)"category", 8}, fhir_deserialize::ResourceType::CodeableConcept, 0, fhir_deserialize::ResourceType::Unknown},
#line 56 "./src/generated/gperf_class_files/ServiceRequest.gperf"
    {"performer", 0x1a0, 44, -1, {(U8*)"performer", 9}, fhir_deserialize::ResourceType::Reference, 0, fhir_deserialize::ResourceType::Unknown},
#line 16 "./src/generated/gperf_class_files/ServiceRequest.gperf"
    {"contained_count", 0x48, 6, -1, {(U8*)"contained_count", 15}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 76 "./src/generated/gperf_class_files/ServiceRequest.gperf"
    {"relevantHistory_count", 0x248, 64, -1, {(U8*)"relevantHistory_count", 21}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 70 "./src/generated/gperf_class_files/ServiceRequest.gperf"
    {"specimen", 0x210, 58, -1, {(U8*)"specimen", 8}, fhir_deserialize::ResourceType::Reference, 0, fhir_deserialize::ResourceType::Unknown},
#line 35 "./src/generated/gperf_class_files/ServiceRequest.gperf"
    {"category_count", 0xf0, 25, -1, {(U8*)"category_count", 14}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 55 "./src/generated/gperf_class_files/ServiceRequest.gperf"
    {"performer_count", 0x198, 43, -1, {(U8*)"performer_count", 15}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 48 "./src/generated/gperf_class_files/ServiceRequest.gperf"
    {"occurrencePeriod", 0x158, 37, 1, {(U8*)"occurrence", 10}, fhir_deserialize::ResourceType::Unknown, 20, fhir_deserialize::ResourceType::Period},
#line 40 "./src/generated/gperf_class_files/ServiceRequest.gperf"
    {"orderDetail_count", 0x120, 30, -1, {(U8*)"orderDetail_count", 17}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 75 "./src/generated/gperf_class_files/ServiceRequest.gperf"
    {"patientInstruction", 0x238, 63, -1, {(U8*)"patientInstruction", 18}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 69 "./src/generated/gperf_class_files/ServiceRequest.gperf"
    {"specimen_count", 0x208, 57, -1, {(U8*)"specimen_count", 14}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 11 "./src/generated/gperf_class_files/ServiceRequest.gperf"
    {"id", 0x8, 1, -1, {(U8*)"id", 2}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 12 "./src/generated/gperf_class_files/ServiceRequest.gperf"
    {"meta", 0x18, 2, -1, {(U8*)"meta", 4}, fhir_deserialize::ResourceType::Meta, 0, fhir_deserialize::ResourceType::Unknown},
#line 50 "./src/generated/gperf_class_files/ServiceRequest.gperf"
    {"asNeededBoolean", 0x170, 39, 0, {(U8*)"asNeeded", 8}, fhir_deserialize::ResourceType::Unknown, 12, fhir_deserialize::ResourceType::Unknown},
#line 34 "./src/generated/gperf_class_files/ServiceRequest.gperf"
    {"intent", 0xe0, 24, -1, {(U8*)"intent", 6}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 54 "./src/generated/gperf_class_files/ServiceRequest.gperf"
    {"performerType", 0x190, 42, -1, {(U8*)"performerType", 13}, fhir_deserialize::ResourceType::CodeableConcept, 0, fhir_deserialize::ResourceType::Unknown},
#line 66 "./src/generated/gperf_class_files/ServiceRequest.gperf"
    {"insurance", 0x1f0, 54, -1, {(U8*)"insurance", 9}, fhir_deserialize::ResourceType::Reference, 0, fhir_deserialize::ResourceType::Unknown},
#line 23 "./src/generated/gperf_class_files/ServiceRequest.gperf"
    {"identifier", 0x80, 13, -1, {(U8*)"identifier", 10}, fhir_deserialize::ResourceType::Identifier, 0, fhir_deserialize::ResourceType::Unknown},
#line 21 "./src/generated/gperf_class_files/ServiceRequest.gperf"
    {"modifierExtension", 0x70, 11, -1, {(U8*)"modifierExtension", 17}, fhir_deserialize::ResourceType::Extension, 0, fhir_deserialize::ResourceType::Unknown},
#line 51 "./src/generated/gperf_class_files/ServiceRequest.gperf"
    {"asNeededCodeableConcept", 0x170, 39, 1, {(U8*)"asNeeded", 8}, fhir_deserialize::ResourceType::Unknown, 20, fhir_deserialize::ResourceType::CodeableConcept},
#line 15 "./src/generated/gperf_class_files/ServiceRequest.gperf"
    {"text", 0x40, 5, -1, {(U8*)"text", 4}, fhir_deserialize::ResourceType::Narrative, 0, fhir_deserialize::ResourceType::Unknown},
#line 65 "./src/generated/gperf_class_files/ServiceRequest.gperf"
    {"insurance_count", 0x1e8, 53, -1, {(U8*)"insurance_count", 15}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 20 "./src/generated/gperf_class_files/ServiceRequest.gperf"
    {"modifierExtension_count", 0x68, 10, -1, {(U8*)"modifierExtension_count", 23}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 19 "./src/generated/gperf_class_files/ServiceRequest.gperf"
    {"extension", 0x60, 9, -1, {(U8*)"extension", 9}, fhir_deserialize::ResourceType::Extension, 0, fhir_deserialize::ResourceType::Unknown},
#line 33 "./src/generated/gperf_class_files/ServiceRequest.gperf"
    {"status", 0xd0, 23, -1, {(U8*)"status", 6}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 58 "./src/generated/gperf_class_files/ServiceRequest.gperf"
    {"locationCode", 0x1b0, 46, -1, {(U8*)"locationCode", 12}, fhir_deserialize::ResourceType::CodeableConcept, 0, fhir_deserialize::ResourceType::Unknown},
#line 14 "./src/generated/gperf_class_files/ServiceRequest.gperf"
    {"language", 0x30, 4, -1, {(U8*)"language", 8}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 68 "./src/generated/gperf_class_files/ServiceRequest.gperf"
    {"supportingInfo", 0x200, 56, -1, {(U8*)"supportingInfo", 14}, fhir_deserialize::ResourceType::Reference, 0, fhir_deserialize::ResourceType::Unknown},
#line 18 "./src/generated/gperf_class_files/ServiceRequest.gperf"
    {"extension_count", 0x58, 8, -1, {(U8*)"extension_count", 15}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 22 "./src/generated/gperf_class_files/ServiceRequest.gperf"
    {"identifier_count", 0x78, 12, -1, {(U8*)"identifier_count", 16}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 57 "./src/generated/gperf_class_files/ServiceRequest.gperf"
    {"locationCode_count", 0x1a8, 45, -1, {(U8*)"locationCode_count", 18}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 67 "./src/generated/gperf_class_files/ServiceRequest.gperf"
    {"supportingInfo_count", 0x1f8, 55, -1, {(U8*)"supportingInfo_count", 20}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 60 "./src/generated/gperf_class_files/ServiceRequest.gperf"
    {"locationReference", 0x1c0, 48, -1, {(U8*)"locationReference", 17}, fhir_deserialize::ResourceType::Reference, 0, fhir_deserialize::ResourceType::Unknown},
#line 72 "./src/generated/gperf_class_files/ServiceRequest.gperf"
    {"bodySite", 0x220, 60, -1, {(U8*)"bodySite", 8}, fhir_deserialize::ResourceType::CodeableConcept, 0, fhir_deserialize::ResourceType::Unknown},
#line 27 "./src/generated/gperf_class_files/ServiceRequest.gperf"
    {"instantiatesUri", 0xa0, 17, -1, {(U8*)"instantiatesUri", 15}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 49 "./src/generated/gperf_class_files/ServiceRequest.gperf"
    {"occurrenceTiming", 0x158, 37, 2, {(U8*)"occurrence", 10}, fhir_deserialize::ResourceType::Unknown, 20, fhir_deserialize::ResourceType::Timing},
#line 29 "./src/generated/gperf_class_files/ServiceRequest.gperf"
    {"basedOn", 0xb0, 19, -1, {(U8*)"basedOn", 7}, fhir_deserialize::ResourceType::Reference, 0, fhir_deserialize::ResourceType::Unknown},
#line 59 "./src/generated/gperf_class_files/ServiceRequest.gperf"
    {"locationReference_count", 0x1b8, 47, -1, {(U8*)"locationReference_count", 23}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 71 "./src/generated/gperf_class_files/ServiceRequest.gperf"
    {"bodySite_count", 0x218, 59, -1, {(U8*)"bodySite_count", 14}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 26 "./src/generated/gperf_class_files/ServiceRequest.gperf"
    {"instantiatesUri_count", 0x98, 16, -1, {(U8*)"instantiatesUri_count", 21}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 25 "./src/generated/gperf_class_files/ServiceRequest.gperf"
    {"instantiatesCanonical", 0x90, 15, -1, {(U8*)"instantiatesCanonical", 21}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 47 "./src/generated/gperf_class_files/ServiceRequest.gperf"
    {"occurrenceDateTime", 0x158, 37, 0, {(U8*)"occurrence", 10}, fhir_deserialize::ResourceType::Unknown, 17, fhir_deserialize::ResourceType::Unknown},
#line 24 "./src/generated/gperf_class_files/ServiceRequest.gperf"
    {"instantiatesCanonical_count", 0x88, 14, -1, {(U8*)"instantiatesCanonical_count", 27}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 43 "./src/generated/gperf_class_files/ServiceRequest.gperf"
    {"quantityRatio", 0x138, 33, 1, {(U8*)"quantity", 8}, fhir_deserialize::ResourceType::Quantity, 20, fhir_deserialize::ResourceType::Ratio},
#line 44 "./src/generated/gperf_class_files/ServiceRequest.gperf"
    {"quantityRange", 0x138, 33, 2, {(U8*)"quantity", 8}, fhir_deserialize::ResourceType::Quantity, 20, fhir_deserialize::ResourceType::Range},
#line 13 "./src/generated/gperf_class_files/ServiceRequest.gperf"
    {"implicitRules", 0x20, 3, -1, {(U8*)"implicitRules", 13}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 28 "./src/generated/gperf_class_files/ServiceRequest.gperf"
    {"basedOn_count", 0xa8, 18, -1, {(U8*)"basedOn_count", 13}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 42 "./src/generated/gperf_class_files/ServiceRequest.gperf"
    {"quantityQuantity", 0x138, 33, 0, {(U8*)"quantity", 8}, fhir_deserialize::ResourceType::Quantity, 20, fhir_deserialize::ResourceType::Quantity}
  };

static const signed char lookup[] =
  {
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
     0, -1, -1, -1, -1, -1,  1, -1,  2, -1,  3,  4,  5,  6,
     7,  8,  9, 10, 11, -1, 12, 13, -1, -1, 14, 15, -1, 16,
    -1, -1, 17, 18, 19, -1, 20, 21, 22, 23, -1, 24, 25, 26,
    27, 28, 29, 30, -1, -1, 31, -1, 32, 33, 34, -1, 35, 36,
    37, -1, 38, 39, 40, 41, -1, -1, 42, 43, -1, 44, 45, 46,
    47, 48, 49, -1, 50, -1, 51, -1, 52, 53, -1, 54, 55, 56,
    57, 58, -1, 59, -1, -1, -1, -1, 60, -1, 61, -1, -1, -1,
    62, 63, -1, -1, -1, -1, 64, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 65, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, 66, -1, -1, 67
  };

const struct fhir_deserialize::MemberNameAndOffset *
ServiceRequest_Gperf::ServiceRequest_MemberLookup (register const char *str, register unsigned int len)
{
  if (len <= MAX_WORD_LENGTH && len >= MIN_WORD_LENGTH)
    {
      register int key = hash (str, len);

      if (key <= MAX_HASH_VALUE && key >= 0)
        {
          register int index = lookup[key];

          if (index >= 0)
            {
              register const char *s = word_array_ServiceRequest[index].name;

              if (*str == *s && !strncmp (str + 1, s + 1, len - 1) && s[len] == '\0')
                return &word_array_ServiceRequest[index];
            }
        }
    }
  return 0;
}
