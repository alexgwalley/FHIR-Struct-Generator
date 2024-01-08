/* C++ code produced by gperf version 3.0.1 */
/* Command-line: gperf.exe -t --output-file=src/generated/gperf_hash_tables/Cqf_questionnaire-Member-Lookup.cc -CGD ./src/generated/gperf_class_files/Cqf_questionnaire.gperf  */
/* Computed positions: -k'' */

#line 8 "./src/generated/gperf_class_files/Cqf_questionnaire.gperf"
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

class Cqf_questionnaire_Gperf
{
private:
  static inline unsigned int hash (const char *str, unsigned int len);
public:
  static const struct fhir_deserialize::MemberNameAndOffset *Cqf_questionnaire_MemberLookup (const char *str, unsigned int len);
};

inline /*ARGSUSED*/
unsigned int
Cqf_questionnaire_Gperf::hash (register const char *str, register unsigned int len)
{
  return len;
}

static const struct fhir_deserialize::MemberNameAndOffset word_array_Cqf_questionnaire[] =
  {
#line 10 "./src/generated/gperf_class_files/Cqf_questionnaire.gperf"
    {"resourceType", 0x0, 0, -1}
  };

static const signed char lookup[] =
  {
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,  0
  };

const struct fhir_deserialize::MemberNameAndOffset *
Cqf_questionnaire_Gperf::Cqf_questionnaire_MemberLookup (register const char *str, register unsigned int len)
{
  if (len <= MAX_WORD_LENGTH && len >= MIN_WORD_LENGTH)
    {
      register int key = hash (str, len);

      if (key <= MAX_HASH_VALUE && key >= 0)
        {
          register int index = lookup[key];

          if (index >= 0)
            {
              register const char *s = word_array_Cqf_questionnaire[index].name;

              if (*str == *s && !strncmp (str + 1, s + 1, len - 1) && s[len] == '\0')
                return &word_array_Cqf_questionnaire[index];
            }
        }
    }
  return 0;
}