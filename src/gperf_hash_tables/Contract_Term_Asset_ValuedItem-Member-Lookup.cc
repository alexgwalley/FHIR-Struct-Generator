/* C++ code produced by gperf version 3.0.1 */
/* Command-line: gperf.exe -t --output-file=src/gperf_hash_tables/Contract_Term_Asset_ValuedItem-Member-Lookup.cc -CGD ./gperf_class_files/Contract_Term_Asset_ValuedItem.gperf  */
/* Computed positions: -k'2' */

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

#line 8 "./gperf_class_files/Contract_Term_Asset_ValuedItem.gperf"
struct fhir_deserialize::MemberNameAndOffset;
enum
  {
    TOTAL_KEYWORDS = 23,
    MIN_WORD_LENGTH = 2,
    MAX_WORD_LENGTH = 25,
    MIN_HASH_VALUE = 2,
    MAX_HASH_VALUE = 36
  };

/* maximum key range = 35, duplicates = 0 */

class Contract_Term_Asset_ValuedItem_Gperf
{
private:
  static inline unsigned int hash (const char *str, unsigned int len);
public:
  static const struct fhir_deserialize::MemberNameAndOffset *Contract_Term_Asset_ValuedItem_MemberLookup (const char *str, unsigned int len);
};

inline unsigned int
Contract_Term_Asset_ValuedItem_Gperf::hash (register const char *str, register unsigned int len)
{
  static const unsigned char asso_values[] =
    {
      37, 37, 37, 37, 37, 37, 37, 37, 37, 37,
      37, 37, 37, 37, 37, 37, 37, 37, 37, 37,
      37, 37, 37, 37, 37, 37, 37, 37, 37, 37,
      37, 37, 37, 37, 37, 37, 37, 37, 37, 37,
      37, 37, 37, 37, 37, 37, 37, 37, 37, 37,
      37, 37, 37, 37, 37, 37, 37, 37, 37, 37,
      37, 37, 37, 37, 37, 37, 37, 37, 37, 37,
      37, 37, 37, 37, 37, 37, 37, 37, 37, 37,
      37, 37, 37, 37, 37, 37, 37, 37, 37, 37,
      37, 37, 37, 37, 37, 37, 37, 25, 37, 37,
       0,  0,  0, 37, 37, 10, 37, 37, 37, 37,
       5,  0, 37, 37, 37, 37, 37,  0, 37, 37,
      15, 37, 37, 37, 37, 37, 37, 37, 37, 37,
      37, 37, 37, 37, 37, 37, 37, 37, 37, 37,
      37, 37, 37, 37, 37, 37, 37, 37, 37, 37,
      37, 37, 37, 37, 37, 37, 37, 37, 37, 37,
      37, 37, 37, 37, 37, 37, 37, 37, 37, 37,
      37, 37, 37, 37, 37, 37, 37, 37, 37, 37,
      37, 37, 37, 37, 37, 37, 37, 37, 37, 37,
      37, 37, 37, 37, 37, 37, 37, 37, 37, 37,
      37, 37, 37, 37, 37, 37, 37, 37, 37, 37,
      37, 37, 37, 37, 37, 37, 37, 37, 37, 37,
      37, 37, 37, 37, 37, 37, 37, 37, 37, 37,
      37, 37, 37, 37, 37, 37, 37, 37, 37, 37,
      37, 37, 37, 37, 37, 37, 37, 37, 37, 37,
      37, 37, 37, 37, 37, 37
    };
  return len + asso_values[(unsigned char)str[1]];
}

static const struct fhir_deserialize::MemberNameAndOffset word_array_Contract_Term_Asset_ValuedItem[] =
  {
#line 11 "./gperf_class_files/Contract_Term_Asset_ValuedItem.gperf"
    {"id", 0x8, 1, -1},
#line 24 "./gperf_class_files/Contract_Term_Asset_ValuedItem.gperf"
    {"net", 0x80, 14, -1},
#line 23 "./gperf_class_files/Contract_Term_Asset_ValuedItem.gperf"
    {"points", 0x78, 13, -1},
#line 20 "./gperf_class_files/Contract_Term_Asset_ValuedItem.gperf"
    {"quantity", 0x60, 10, -1},
#line 28 "./gperf_class_files/Contract_Term_Asset_ValuedItem.gperf"
    {"recipient", 0xb0, 18, -1},
#line 18 "./gperf_class_files/Contract_Term_Asset_ValuedItem.gperf"
    {"identifier", 0x48, 8, -1},
#line 27 "./gperf_class_files/Contract_Term_Asset_ValuedItem.gperf"
    {"responsible", 0xa8, 17, -1},
#line 10 "./gperf_class_files/Contract_Term_Asset_ValuedItem.gperf"
    {"resourceType", 0x0, 0, -1},
#line 19 "./gperf_class_files/Contract_Term_Asset_ValuedItem.gperf"
    {"effectiveTime", 0x50, 9, -1},
#line 21 "./gperf_class_files/Contract_Term_Asset_ValuedItem.gperf"
    {"unitPrice", 0x68, 11, -1},
#line 30 "./gperf_class_files/Contract_Term_Asset_ValuedItem.gperf"
    {"linkId", 0xc0, 20, -1},
#line 15 "./gperf_class_files/Contract_Term_Asset_ValuedItem.gperf"
    {"modifierExtension", 0x30, 5, -1},
#line 32 "./gperf_class_files/Contract_Term_Asset_ValuedItem.gperf"
    {"securityLabelNumber", 0xd0, 22, -1},
#line 17 "./gperf_class_files/Contract_Term_Asset_ValuedItem.gperf"
    {"entityReference", 0x40, 7, 1},
#line 29 "./gperf_class_files/Contract_Term_Asset_ValuedItem.gperf"
    {"linkId_count", 0xb8, 19, -1},
#line 14 "./gperf_class_files/Contract_Term_Asset_ValuedItem.gperf"
    {"modifierExtension_count", 0x28, 4, -1},
#line 13 "./gperf_class_files/Contract_Term_Asset_ValuedItem.gperf"
    {"extension", 0x20, 3, -1},
#line 31 "./gperf_class_files/Contract_Term_Asset_ValuedItem.gperf"
    {"securityLabelNumber_count", 0xc8, 21, -1},
#line 16 "./gperf_class_files/Contract_Term_Asset_ValuedItem.gperf"
    {"entityCodeableConcept", 0x40, 7, 0},
#line 12 "./gperf_class_files/Contract_Term_Asset_ValuedItem.gperf"
    {"extension_count", 0x18, 2, -1},
#line 22 "./gperf_class_files/Contract_Term_Asset_ValuedItem.gperf"
    {"factor", 0x70, 12, -1},
#line 25 "./gperf_class_files/Contract_Term_Asset_ValuedItem.gperf"
    {"payment", 0x88, 15, -1},
#line 26 "./gperf_class_files/Contract_Term_Asset_ValuedItem.gperf"
    {"paymentDate", 0x98, 16, -1}
  };

static const signed char lookup[] =
  {
    -1, -1,  0,  1, -1, -1,  2, -1,  3,  4,  5,  6,  7,  8,
     9, -1, 10, 11, -1, 12, 13, -1, 14, 15, 16, 17, 18, -1,
    -1, -1, 19, 20, 21, -1, -1, -1, 22
  };

const struct fhir_deserialize::MemberNameAndOffset *
Contract_Term_Asset_ValuedItem_Gperf::Contract_Term_Asset_ValuedItem_MemberLookup (register const char *str, register unsigned int len)
{
  if (len <= MAX_WORD_LENGTH && len >= MIN_WORD_LENGTH)
    {
      register int key = hash (str, len);

      if (key <= MAX_HASH_VALUE && key >= 0)
        {
          register int index = lookup[key];

          if (index >= 0)
            {
              register const char *s = word_array_Contract_Term_Asset_ValuedItem[index].name;

              if (*str == *s && !strncmp (str + 1, s + 1, len - 1) && s[len] == '\0')
                return &word_array_Contract_Term_Asset_ValuedItem[index];
            }
        }
    }
  return 0;
}