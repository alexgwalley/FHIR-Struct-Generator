/* C++ code produced by gperf version 3.0.1 */
/* Command-line: gperf.exe -t --output-file=src/gperf_hash_tables/MedicationDispense-Member-Lookup.cc -CGD ./gperf_class_files/MedicationDispense.gperf  */
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

#line 8 "./gperf_class_files/MedicationDispense.gperf"
struct fhir_deserialize::MemberNameAndOffset;
enum
  {
    TOTAL_KEYWORDS = 48,
    MIN_WORD_LENGTH = 2,
    MAX_WORD_LENGTH = 29,
    MIN_HASH_VALUE = 4,
    MAX_HASH_VALUE = 101
  };

/* maximum key range = 98, duplicates = 0 */

class MedicationDispense_Gperf
{
private:
  static inline unsigned int hash (const char *str, unsigned int len);
public:
  static const struct fhir_deserialize::MemberNameAndOffset *MedicationDispense_MemberLookup (const char *str, unsigned int len);
};

inline unsigned int
MedicationDispense_Gperf::hash (register const char *str, register unsigned int len)
{
  static const unsigned char asso_values[] =
    {
      102, 102, 102, 102, 102, 102, 102, 102, 102, 102,
      102, 102, 102, 102, 102, 102, 102, 102, 102, 102,
      102, 102, 102, 102, 102, 102, 102, 102, 102, 102,
      102, 102, 102, 102, 102, 102, 102, 102, 102, 102,
      102, 102, 102, 102, 102, 102, 102, 102, 102, 102,
      102, 102, 102, 102, 102, 102, 102, 102, 102, 102,
      102, 102, 102, 102, 102, 102, 102, 102, 102, 102,
      102, 102, 102, 102, 102, 102, 102, 102, 102, 102,
      102, 102, 102, 102, 102, 102, 102, 102, 102, 102,
      102, 102, 102, 102, 102, 102, 102,  30,   0,  10,
        0,  40, 102, 102, 102,  45, 102, 102,  15,  35,
       25, 102,   5,   0,  10,   0,   0, 102, 102,  10,
        0,   0, 102, 102, 102, 102, 102, 102, 102, 102,
      102, 102, 102, 102, 102, 102, 102, 102, 102, 102,
      102, 102, 102, 102, 102, 102, 102, 102, 102, 102,
      102, 102, 102, 102, 102, 102, 102, 102, 102, 102,
      102, 102, 102, 102, 102, 102, 102, 102, 102, 102,
      102, 102, 102, 102, 102, 102, 102, 102, 102, 102,
      102, 102, 102, 102, 102, 102, 102, 102, 102, 102,
      102, 102, 102, 102, 102, 102, 102, 102, 102, 102,
      102, 102, 102, 102, 102, 102, 102, 102, 102, 102,
      102, 102, 102, 102, 102, 102, 102, 102, 102, 102,
      102, 102, 102, 102, 102, 102, 102, 102, 102, 102,
      102, 102, 102, 102, 102, 102, 102, 102, 102, 102,
      102, 102, 102, 102, 102, 102, 102, 102, 102, 102,
      102, 102, 102, 102, 102, 102
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

static const struct fhir_deserialize::MemberNameAndOffset word_array_MedicationDispense[] =
  {
#line 15 "./gperf_class_files/MedicationDispense.gperf"
    {"text", 0x40, 5, -1},
#line 32 "./gperf_class_files/MedicationDispense.gperf"
    {"subject", 0xd0, 22, -1},
#line 41 "./gperf_class_files/MedicationDispense.gperf"
    {"type", 0x118, 31, -1},
#line 43 "./gperf_class_files/MedicationDispense.gperf"
    {"daysSupply", 0x128, 33, -1},
#line 46 "./gperf_class_files/MedicationDispense.gperf"
    {"destination", 0x150, 36, -1},
#line 53 "./gperf_class_files/MedicationDispense.gperf"
    {"substitution", 0x188, 43, -1},
#line 55 "./gperf_class_files/MedicationDispense.gperf"
    {"detectedIssue", 0x198, 45, -1},
#line 52 "./gperf_class_files/MedicationDispense.gperf"
    {"dosageInstruction", 0x180, 42, -1},
#line 29 "./gperf_class_files/MedicationDispense.gperf"
    {"category", 0xb8, 19, -1},
#line 54 "./gperf_class_files/MedicationDispense.gperf"
    {"detectedIssue_count", 0x190, 44, -1},
#line 25 "./gperf_class_files/MedicationDispense.gperf"
    {"partOf", 0x90, 15, -1},
#line 10 "./gperf_class_files/MedicationDispense.gperf"
    {"resourceType", 0x0, 0, -1},
#line 51 "./gperf_class_files/MedicationDispense.gperf"
    {"dosageInstruction_count", 0x178, 41, -1},
#line 37 "./gperf_class_files/MedicationDispense.gperf"
    {"performer", 0xf8, 27, -1},
#line 35 "./gperf_class_files/MedicationDispense.gperf"
    {"supportingInformation", 0xe8, 25, -1},
#line 24 "./gperf_class_files/MedicationDispense.gperf"
    {"partOf_count", 0x88, 14, -1},
#line 48 "./gperf_class_files/MedicationDispense.gperf"
    {"receiver", 0x160, 38, -1},
#line 50 "./gperf_class_files/MedicationDispense.gperf"
    {"note", 0x170, 40, -1},
#line 36 "./gperf_class_files/MedicationDispense.gperf"
    {"performer_count", 0xf0, 26, -1},
#line 34 "./gperf_class_files/MedicationDispense.gperf"
    {"supportingInformation_count", 0xe0, 24, -1},
#line 38 "./gperf_class_files/MedicationDispense.gperf"
    {"location", 0x100, 28, -1},
#line 47 "./gperf_class_files/MedicationDispense.gperf"
    {"receiver_count", 0x158, 37, -1},
#line 49 "./gperf_class_files/MedicationDispense.gperf"
    {"note_count", 0x168, 39, -1},
#line 26 "./gperf_class_files/MedicationDispense.gperf"
    {"status", 0x98, 16, -1},
#line 42 "./gperf_class_files/MedicationDispense.gperf"
    {"quantity", 0x120, 32, -1},
#line 12 "./gperf_class_files/MedicationDispense.gperf"
    {"meta", 0x18, 2, -1},
#line 33 "./gperf_class_files/MedicationDispense.gperf"
    {"context", 0xd8, 23, -1},
#line 17 "./gperf_class_files/MedicationDispense.gperf"
    {"contained", 0x50, 7, -1},
#line 11 "./gperf_class_files/MedicationDispense.gperf"
    {"id", 0x8, 1, -1},
#line 14 "./gperf_class_files/MedicationDispense.gperf"
    {"language", 0x30, 4, -1},
#line 19 "./gperf_class_files/MedicationDispense.gperf"
    {"extension", 0x60, 9, -1},
#line 16 "./gperf_class_files/MedicationDispense.gperf"
    {"contained_count", 0x48, 6, -1},
#line 28 "./gperf_class_files/MedicationDispense.gperf"
    {"statusReasonReference", 0xb0, 18, 1},
#line 21 "./gperf_class_files/MedicationDispense.gperf"
    {"modifierExtension", 0x70, 11, -1},
#line 40 "./gperf_class_files/MedicationDispense.gperf"
    {"authorizingPrescription", 0x110, 30, -1},
#line 31 "./gperf_class_files/MedicationDispense.gperf"
    {"medicationReference", 0xc8, 21, 1},
#line 18 "./gperf_class_files/MedicationDispense.gperf"
    {"extension_count", 0x58, 8, -1},
#line 27 "./gperf_class_files/MedicationDispense.gperf"
    {"statusReasonCodeableConcept", 0xb0, 18, 0},
#line 20 "./gperf_class_files/MedicationDispense.gperf"
    {"modifierExtension_count", 0x68, 10, -1},
#line 39 "./gperf_class_files/MedicationDispense.gperf"
    {"authorizingPrescription_count", 0x108, 29, -1},
#line 30 "./gperf_class_files/MedicationDispense.gperf"
    {"medicationCodeableConcept", 0xc8, 21, 0},
#line 44 "./gperf_class_files/MedicationDispense.gperf"
    {"whenPrepared", 0x130, 34, -1},
#line 13 "./gperf_class_files/MedicationDispense.gperf"
    {"implicitRules", 0x20, 3, -1},
#line 45 "./gperf_class_files/MedicationDispense.gperf"
    {"whenHandedOver", 0x140, 35, -1},
#line 57 "./gperf_class_files/MedicationDispense.gperf"
    {"eventHistory", 0x1a8, 47, -1},
#line 23 "./gperf_class_files/MedicationDispense.gperf"
    {"identifier", 0x80, 13, -1},
#line 56 "./gperf_class_files/MedicationDispense.gperf"
    {"eventHistory_count", 0x1a0, 46, -1},
#line 22 "./gperf_class_files/MedicationDispense.gperf"
    {"identifier_count", 0x78, 12, -1}
  };

static const signed char lookup[] =
  {
    -1, -1, -1, -1,  0, -1, -1,  1, -1,  2,  3,  4,  5,  6,
    -1, -1, -1,  7,  8,  9, -1, 10, 11, 12, 13, -1, 14, 15,
    16, 17, 18, -1, 19, 20, 21, 22, 23, -1, 24, 25, -1, -1,
    26, -1, 27, -1, -1, 28, 29, 30, 31, 32, 33, 34, 35, 36,
    -1, 37, 38, 39, 40, -1, 41, 42, 43, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, 44, -1, -1, 45, -1, -1,
    46, -1, -1, 47
  };

const struct fhir_deserialize::MemberNameAndOffset *
MedicationDispense_Gperf::MedicationDispense_MemberLookup (register const char *str, register unsigned int len)
{
  if (len <= MAX_WORD_LENGTH && len >= MIN_WORD_LENGTH)
    {
      register int key = hash (str, len);

      if (key <= MAX_HASH_VALUE && key >= 0)
        {
          register int index = lookup[key];

          if (index >= 0)
            {
              register const char *s = word_array_MedicationDispense[index].name;

              if (*str == *s && !strncmp (str + 1, s + 1, len - 1) && s[len] == '\0')
                return &word_array_MedicationDispense[index];
            }
        }
    }
  return 0;
}
