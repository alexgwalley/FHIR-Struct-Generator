/* C++ code produced by gperf version 3.0.1 */
/* Command-line: gperf.exe -t --output-file=src/gperf_hash_tables/ServiceRequest-Member-Lookup.cc -CGD ./gperf_class_files/ServiceRequest.gperf  */
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

#line 8 "./gperf_class_files/ServiceRequest.gperf"
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
#line 74 "./gperf_class_files/ServiceRequest.gperf"
    {"note", 0x230, 62, -1},
#line 73 "./gperf_class_files/ServiceRequest.gperf"
    {"note_count", 0x228, 61, -1},
#line 38 "./gperf_class_files/ServiceRequest.gperf"
    {"doNotPerform", 0x110, 28, -1},
#line 46 "./gperf_class_files/ServiceRequest.gperf"
    {"encounter", 0x148, 35, -1},
#line 52 "./gperf_class_files/ServiceRequest.gperf"
    {"authoredOn", 0x178, 40, -1},
#line 41 "./gperf_class_files/ServiceRequest.gperf"
    {"orderDetail", 0x128, 31, -1},
#line 45 "./gperf_class_files/ServiceRequest.gperf"
    {"subject", 0x140, 34, -1},
#line 31 "./gperf_class_files/ServiceRequest.gperf"
    {"replaces", 0xc0, 21, -1},
#line 53 "./gperf_class_files/ServiceRequest.gperf"
    {"requester", 0x188, 41, -1},
#line 62 "./gperf_class_files/ServiceRequest.gperf"
    {"reasonCode", 0x1d0, 50, -1},
#line 32 "./gperf_class_files/ServiceRequest.gperf"
    {"requisition", 0xc8, 22, -1},
#line 10 "./gperf_class_files/ServiceRequest.gperf"
    {"resourceType", 0x0, 0, -1},
#line 30 "./gperf_class_files/ServiceRequest.gperf"
    {"replaces_count", 0xb8, 20, -1},
#line 64 "./gperf_class_files/ServiceRequest.gperf"
    {"reasonReference", 0x1e0, 52, -1},
#line 37 "./gperf_class_files/ServiceRequest.gperf"
    {"priority", 0x100, 27, -1},
#line 39 "./gperf_class_files/ServiceRequest.gperf"
    {"code", 0x118, 29, -1},
#line 63 "./gperf_class_files/ServiceRequest.gperf"
    {"reasonReference_count", 0x1d8, 51, -1},
#line 17 "./gperf_class_files/ServiceRequest.gperf"
    {"contained", 0x50, 7, -1},
#line 77 "./gperf_class_files/ServiceRequest.gperf"
    {"relevantHistory", 0x250, 65, -1},
#line 61 "./gperf_class_files/ServiceRequest.gperf"
    {"reasonCode_count", 0x1c8, 49, -1},
#line 36 "./gperf_class_files/ServiceRequest.gperf"
    {"category", 0xf8, 26, -1},
#line 56 "./gperf_class_files/ServiceRequest.gperf"
    {"performer", 0x1a0, 44, -1},
#line 16 "./gperf_class_files/ServiceRequest.gperf"
    {"contained_count", 0x48, 6, -1},
#line 76 "./gperf_class_files/ServiceRequest.gperf"
    {"relevantHistory_count", 0x248, 64, -1},
#line 70 "./gperf_class_files/ServiceRequest.gperf"
    {"specimen", 0x210, 58, -1},
#line 35 "./gperf_class_files/ServiceRequest.gperf"
    {"category_count", 0xf0, 25, -1},
#line 55 "./gperf_class_files/ServiceRequest.gperf"
    {"performer_count", 0x198, 43, -1},
#line 48 "./gperf_class_files/ServiceRequest.gperf"
    {"occurrencePeriod", 0x158, 37, 1},
#line 40 "./gperf_class_files/ServiceRequest.gperf"
    {"orderDetail_count", 0x120, 30, -1},
#line 75 "./gperf_class_files/ServiceRequest.gperf"
    {"patientInstruction", 0x238, 63, -1},
#line 69 "./gperf_class_files/ServiceRequest.gperf"
    {"specimen_count", 0x208, 57, -1},
#line 11 "./gperf_class_files/ServiceRequest.gperf"
    {"id", 0x8, 1, -1},
#line 12 "./gperf_class_files/ServiceRequest.gperf"
    {"meta", 0x18, 2, -1},
#line 50 "./gperf_class_files/ServiceRequest.gperf"
    {"asNeededBoolean", 0x170, 39, 0},
#line 34 "./gperf_class_files/ServiceRequest.gperf"
    {"intent", 0xe0, 24, -1},
#line 54 "./gperf_class_files/ServiceRequest.gperf"
    {"performerType", 0x190, 42, -1},
#line 66 "./gperf_class_files/ServiceRequest.gperf"
    {"insurance", 0x1f0, 54, -1},
#line 23 "./gperf_class_files/ServiceRequest.gperf"
    {"identifier", 0x80, 13, -1},
#line 21 "./gperf_class_files/ServiceRequest.gperf"
    {"modifierExtension", 0x70, 11, -1},
#line 51 "./gperf_class_files/ServiceRequest.gperf"
    {"asNeededCodeableConcept", 0x170, 39, 1},
#line 15 "./gperf_class_files/ServiceRequest.gperf"
    {"text", 0x40, 5, -1},
#line 65 "./gperf_class_files/ServiceRequest.gperf"
    {"insurance_count", 0x1e8, 53, -1},
#line 20 "./gperf_class_files/ServiceRequest.gperf"
    {"modifierExtension_count", 0x68, 10, -1},
#line 19 "./gperf_class_files/ServiceRequest.gperf"
    {"extension", 0x60, 9, -1},
#line 33 "./gperf_class_files/ServiceRequest.gperf"
    {"status", 0xd0, 23, -1},
#line 58 "./gperf_class_files/ServiceRequest.gperf"
    {"locationCode", 0x1b0, 46, -1},
#line 14 "./gperf_class_files/ServiceRequest.gperf"
    {"language", 0x30, 4, -1},
#line 68 "./gperf_class_files/ServiceRequest.gperf"
    {"supportingInfo", 0x200, 56, -1},
#line 18 "./gperf_class_files/ServiceRequest.gperf"
    {"extension_count", 0x58, 8, -1},
#line 22 "./gperf_class_files/ServiceRequest.gperf"
    {"identifier_count", 0x78, 12, -1},
#line 57 "./gperf_class_files/ServiceRequest.gperf"
    {"locationCode_count", 0x1a8, 45, -1},
#line 67 "./gperf_class_files/ServiceRequest.gperf"
    {"supportingInfo_count", 0x1f8, 55, -1},
#line 60 "./gperf_class_files/ServiceRequest.gperf"
    {"locationReference", 0x1c0, 48, -1},
#line 72 "./gperf_class_files/ServiceRequest.gperf"
    {"bodySite", 0x220, 60, -1},
#line 27 "./gperf_class_files/ServiceRequest.gperf"
    {"instantiatesUri", 0xa0, 17, -1},
#line 49 "./gperf_class_files/ServiceRequest.gperf"
    {"occurrenceTiming", 0x158, 37, 2},
#line 29 "./gperf_class_files/ServiceRequest.gperf"
    {"basedOn", 0xb0, 19, -1},
#line 59 "./gperf_class_files/ServiceRequest.gperf"
    {"locationReference_count", 0x1b8, 47, -1},
#line 71 "./gperf_class_files/ServiceRequest.gperf"
    {"bodySite_count", 0x218, 59, -1},
#line 26 "./gperf_class_files/ServiceRequest.gperf"
    {"instantiatesUri_count", 0x98, 16, -1},
#line 25 "./gperf_class_files/ServiceRequest.gperf"
    {"instantiatesCanonical", 0x90, 15, -1},
#line 47 "./gperf_class_files/ServiceRequest.gperf"
    {"occurrenceDateTime", 0x158, 37, 0},
#line 24 "./gperf_class_files/ServiceRequest.gperf"
    {"instantiatesCanonical_count", 0x88, 14, -1},
#line 43 "./gperf_class_files/ServiceRequest.gperf"
    {"quantityRatio", 0x138, 33, 1},
#line 44 "./gperf_class_files/ServiceRequest.gperf"
    {"quantityRange", 0x138, 33, 2},
#line 13 "./gperf_class_files/ServiceRequest.gperf"
    {"implicitRules", 0x20, 3, -1},
#line 28 "./gperf_class_files/ServiceRequest.gperf"
    {"basedOn_count", 0xa8, 18, -1},
#line 42 "./gperf_class_files/ServiceRequest.gperf"
    {"quantityQuantity", 0x138, 33, 0}
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
