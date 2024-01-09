/* C++ code produced by gperf version 3.0.1 */
/* Command-line: gperf.exe -t --output-file=src/generated/gperf_hash_tables/Range-Member-Lookup.cc -CGD ./src/generated/gperf_class_files/Range.gperf  */
/* Computed positions: -k'' */

#line 8 "./src/generated/gperf_class_files/Range.gperf"
struct fhir_deserialize::MemberNameAndOffset;
enum
  {
    TOTAL_KEYWORDS = 6,
    MIN_WORD_LENGTH = 2,
    MAX_WORD_LENGTH = 15,
    MIN_HASH_VALUE = 2,
    MAX_HASH_VALUE = 15
  };

/* maximum key range = 14, duplicates = 0 */

class Range_Gperf
{
private:
  static inline unsigned int hash (const char *str, unsigned int len);
public:
  static const struct fhir_deserialize::MemberNameAndOffset *Range_MemberLookup (const char *str, unsigned int len);
};

inline /*ARGSUSED*/
unsigned int
Range_Gperf::hash (register const char *str, register unsigned int len)
{
  return len;
}

static const struct fhir_deserialize::MemberNameAndOffset word_array_Range[] =
  {
#line 11 "./src/generated/gperf_class_files/Range.gperf"
    {"id", 0x8, 1, -1, {(U8*)"id", 2}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 14 "./src/generated/gperf_class_files/Range.gperf"
    {"low", 0x28, 4, -1, {(U8*)"low", 3}, fhir_deserialize::ResourceType::Quantity, 0, fhir_deserialize::ResourceType::Unknown},
#line 15 "./src/generated/gperf_class_files/Range.gperf"
    {"high", 0x30, 5, -1, {(U8*)"high", 4}, fhir_deserialize::ResourceType::Quantity, 0, fhir_deserialize::ResourceType::Unknown},
#line 13 "./src/generated/gperf_class_files/Range.gperf"
    {"extension", 0x20, 3, -1, {(U8*)"extension", 9}, fhir_deserialize::ResourceType::Extension, 0, fhir_deserialize::ResourceType::Unknown},
#line 10 "./src/generated/gperf_class_files/Range.gperf"
    {"resourceType", 0x0, 0, -1, {(U8*)"resourceType", 12}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 12 "./src/generated/gperf_class_files/Range.gperf"
    {"extension_count", 0x18, 2, -1, {(U8*)"extension_count", 15}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown}
  };

static const signed char lookup[] =
  {
    -1, -1,  0,  1,  2, -1, -1, -1, -1,  3, -1, -1,  4, -1,
    -1,  5
  };

const struct fhir_deserialize::MemberNameAndOffset *
Range_Gperf::Range_MemberLookup (register const char *str, register unsigned int len)
{
  if (len <= MAX_WORD_LENGTH && len >= MIN_WORD_LENGTH)
    {
      register int key = hash (str, len);

      if (key <= MAX_HASH_VALUE && key >= 0)
        {
          register int index = lookup[key];

          if (index >= 0)
            {
              register const char *s = word_array_Range[index].name;

              if (*str == *s && !strncmp (str + 1, s + 1, len - 1) && s[len] == '\0')
                return &word_array_Range[index];
            }
        }
    }
  return 0;
}
