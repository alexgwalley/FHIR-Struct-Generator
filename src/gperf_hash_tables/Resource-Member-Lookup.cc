/* C++ code produced by gperf version 3.0.1 */
/* Command-line: gperf.exe -t --output-file=src/gperf_hash_tables/Resource-Member-Lookup.cc -CGD ./gperf_class_files/Resource.gperf  */
/* Computed positions: -k'' */

#line 8 "./gperf_class_files/Resource.gperf"
struct fhir_deserialize::MemberNameAndOffset;
enum
  {
    TOTAL_KEYWORDS = 5,
    MIN_WORD_LENGTH = 2,
    MAX_WORD_LENGTH = 13,
    MIN_HASH_VALUE = 2,
    MAX_HASH_VALUE = 13
  };

/* maximum key range = 12, duplicates = 0 */

class Resource_Gperf
{
private:
  static inline unsigned int hash (const char *str, unsigned int len);
public:
  static const struct fhir_deserialize::MemberNameAndOffset *Resource_MemberLookup (const char *str, unsigned int len);
};

inline /*ARGSUSED*/
unsigned int
Resource_Gperf::hash (register const char *str, register unsigned int len)
{
  return len;
}

static const struct fhir_deserialize::MemberNameAndOffset word_array_Resource[] =
  {
#line 11 "./gperf_class_files/Resource.gperf"
    {"id", 0x8, 1, -1},
#line 12 "./gperf_class_files/Resource.gperf"
    {"meta", 0x18, 2, -1},
#line 14 "./gperf_class_files/Resource.gperf"
    {"language", 0x30, 4, -1},
#line 10 "./gperf_class_files/Resource.gperf"
    {"resourceType", 0x0, 0, -1},
#line 13 "./gperf_class_files/Resource.gperf"
    {"implicitRules", 0x20, 3, -1}
  };

static const signed char lookup[] =
  {
    -1, -1,  0, -1,  1, -1, -1, -1,  2, -1, -1, -1,  3,  4
  };

const struct fhir_deserialize::MemberNameAndOffset *
Resource_Gperf::Resource_MemberLookup (register const char *str, register unsigned int len)
{
  if (len <= MAX_WORD_LENGTH && len >= MIN_WORD_LENGTH)
    {
      register int key = hash (str, len);

      if (key <= MAX_HASH_VALUE && key >= 0)
        {
          register int index = lookup[key];

          if (index >= 0)
            {
              register const char *s = word_array_Resource[index].name;

              if (*str == *s && !strncmp (str + 1, s + 1, len - 1) && s[len] == '\0')
                return &word_array_Resource[index];
            }
        }
    }
  return 0;
}
