/* C++ code produced by gperf version 3.0.1 */
/* Command-line: gperf.exe -t --output-file=src/generated/gperf_hash_tables/Lipidprofile-Member-Lookup.cc -CGD ./src/generated/gperf_class_files/Lipidprofile.gperf  */
/* Computed positions: -k'' */

#line 8 "./src/generated/gperf_class_files/Lipidprofile.gperf"
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

class Lipidprofile_Gperf
{
private:
  static inline unsigned int hash (const char *str, unsigned int len);
public:
  static const struct fhir_deserialize::MemberNameAndOffset *Lipidprofile_MemberLookup (const char *str, unsigned int len);
};

inline /*ARGSUSED*/
unsigned int
Lipidprofile_Gperf::hash (register const char *str, register unsigned int len)
{
  return len;
}

static const struct fhir_deserialize::MemberNameAndOffset word_array_Lipidprofile[] =
  {
#line 10 "./src/generated/gperf_class_files/Lipidprofile.gperf"
    {"resourceType", 0x0, 0, -1}
  };

static const signed char lookup[] =
  {
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,  0
  };

const struct fhir_deserialize::MemberNameAndOffset *
Lipidprofile_Gperf::Lipidprofile_MemberLookup (register const char *str, register unsigned int len)
{
  if (len <= MAX_WORD_LENGTH && len >= MIN_WORD_LENGTH)
    {
      register int key = hash (str, len);

      if (key <= MAX_HASH_VALUE && key >= 0)
        {
          register int index = lookup[key];

          if (index >= 0)
            {
              register const char *s = word_array_Lipidprofile[index].name;

              if (*str == *s && !strncmp (str + 1, s + 1, len - 1) && s[len] == '\0')
                return &word_array_Lipidprofile[index];
            }
        }
    }
  return 0;
}
