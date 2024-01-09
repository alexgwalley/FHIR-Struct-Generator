/* C++ code produced by gperf version 3.0.1 */
/* Command-line: gperf.exe -t --output-file=src/generated/gperf_hash_tables/Shareableplandefinition-Member-Lookup.cc -CGD ./src/generated/gperf_class_files/Shareableplandefinition.gperf  */
/* Computed positions: -k'' */

#line 8 "./src/generated/gperf_class_files/Shareableplandefinition.gperf"
struct fhir_deserialize::MemberNameAndOffset;
enum
  {
    TOTAL_KEYWORDS = 1,
    MIN_WORD_LENGTH = 12,
    MAX_WORD_LENGTH = 12,
    MIN_HASH_VALUE = 12,
    MAX_HASH_VALUE = 12
  };

/* maximum key range = 1, duplicates = 0 */

class Shareableplandefinition_Gperf
{
private:
  static inline unsigned int hash (const char *str, unsigned int len);
public:
  static const struct fhir_deserialize::MemberNameAndOffset *Shareableplandefinition_MemberLookup (const char *str, unsigned int len);
};

inline /*ARGSUSED*/
unsigned int
Shareableplandefinition_Gperf::hash (register const char *str, register unsigned int len)
{
  return len;
}

static const struct fhir_deserialize::MemberNameAndOffset word_array_Shareableplandefinition[] =
  {
#line 10 "./src/generated/gperf_class_files/Shareableplandefinition.gperf"
    {"resourceType", 0x0, 0, -1, {(U8*)"resourceType", 12}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown}
  };

static const signed char lookup[] =
  {
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,  0
  };

const struct fhir_deserialize::MemberNameAndOffset *
Shareableplandefinition_Gperf::Shareableplandefinition_MemberLookup (register const char *str, register unsigned int len)
{
  if (len <= MAX_WORD_LENGTH && len >= MIN_WORD_LENGTH)
    {
      register int key = hash (str, len);

      if (key <= MAX_HASH_VALUE && key >= 0)
        {
          register int index = lookup[key];

          if (index >= 0)
            {
              register const char *s = word_array_Shareableplandefinition[index].name;

              if (*str == *s && !strncmp (str + 1, s + 1, len - 1) && s[len] == '\0')
                return &word_array_Shareableplandefinition[index];
            }
        }
    }
  return 0;
}
