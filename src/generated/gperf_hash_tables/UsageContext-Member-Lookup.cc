/* C++ code produced by gperf version 3.0.1 */
/* Command-line: gperf.exe -t --output-file=src/generated/gperf_hash_tables/UsageContext-Member-Lookup.cc -CGD ./src/generated/gperf_class_files/UsageContext.gperf  */
/* Computed positions: -k'' */

#line 8 "./src/generated/gperf_class_files/UsageContext.gperf"
struct fhir_deserialize::MemberNameAndOffset;
enum
  {
    TOTAL_KEYWORDS = 9,
    MIN_WORD_LENGTH = 2,
    MAX_WORD_LENGTH = 20,
    MIN_HASH_VALUE = 2,
    MAX_HASH_VALUE = 20
  };

/* maximum key range = 19, duplicates = 0 */

class UsageContext_Gperf
{
private:
  static inline unsigned int hash (const char *str, unsigned int len);
public:
  static const struct fhir_deserialize::MemberNameAndOffset *UsageContext_MemberLookup (const char *str, unsigned int len);
};

inline /*ARGSUSED*/
unsigned int
UsageContext_Gperf::hash (register const char *str, register unsigned int len)
{
  return len;
}

static const struct fhir_deserialize::MemberNameAndOffset word_array_UsageContext[] =
  {
#line 11 "./src/generated/gperf_class_files/UsageContext.gperf"
    {"id", 0x8, 1, -1},
#line 14 "./src/generated/gperf_class_files/UsageContext.gperf"
    {"code", 0x28, 4, -1},
#line 13 "./src/generated/gperf_class_files/UsageContext.gperf"
    {"extension", 0x20, 3, -1},
#line 17 "./src/generated/gperf_class_files/UsageContext.gperf"
    {"valueRange", 0x38, 6, 2},
#line 10 "./src/generated/gperf_class_files/UsageContext.gperf"
    {"resourceType", 0x0, 0, -1},
#line 16 "./src/generated/gperf_class_files/UsageContext.gperf"
    {"valueQuantity", 0x38, 6, 1},
#line 18 "./src/generated/gperf_class_files/UsageContext.gperf"
    {"valueReference", 0x38, 6, 3},
#line 12 "./src/generated/gperf_class_files/UsageContext.gperf"
    {"extension_count", 0x18, 2, -1},
#line 15 "./src/generated/gperf_class_files/UsageContext.gperf"
    {"valueCodeableConcept", 0x38, 6, 0}
  };

static const signed char lookup[] =
  {
    -1, -1,  0, -1,  1, -1, -1, -1, -1,  2,  3, -1,  4,  5,
     6,  7, -1, -1, -1, -1,  8
  };

const struct fhir_deserialize::MemberNameAndOffset *
UsageContext_Gperf::UsageContext_MemberLookup (register const char *str, register unsigned int len)
{
  if (len <= MAX_WORD_LENGTH && len >= MIN_WORD_LENGTH)
    {
      register int key = hash (str, len);

      if (key <= MAX_HASH_VALUE && key >= 0)
        {
          register int index = lookup[key];

          if (index >= 0)
            {
              register const char *s = word_array_UsageContext[index].name;

              if (*str == *s && !strncmp (str + 1, s + 1, len - 1) && s[len] == '\0')
                return &word_array_UsageContext[index];
            }
        }
    }
  return 0;
}
