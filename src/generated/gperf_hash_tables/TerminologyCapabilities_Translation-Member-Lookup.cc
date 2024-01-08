/* C++ code produced by gperf version 3.0.1 */
/* Command-line: gperf.exe -t --output-file=src/generated/gperf_hash_tables/TerminologyCapabilities_Translation-Member-Lookup.cc -CGD ./src/generated/gperf_class_files/TerminologyCapabilities_Translation.gperf  */
/* Computed positions: -k'' */

#line 8 "./src/generated/gperf_class_files/TerminologyCapabilities_Translation.gperf"
struct fhir_deserialize::MemberNameAndOffset;
enum
  {
    TOTAL_KEYWORDS = 7,
    MIN_WORD_LENGTH = 2,
    MAX_WORD_LENGTH = 23,
    MIN_HASH_VALUE = 2,
    MAX_HASH_VALUE = 23
  };

/* maximum key range = 22, duplicates = 0 */

class TerminologyCapabilities_Translation_Gperf
{
private:
  static inline unsigned int hash (const char *str, unsigned int len);
public:
  static const struct fhir_deserialize::MemberNameAndOffset *TerminologyCapabilities_Translation_MemberLookup (const char *str, unsigned int len);
};

inline /*ARGSUSED*/
unsigned int
TerminologyCapabilities_Translation_Gperf::hash (register const char *str, register unsigned int len)
{
  return len;
}

static const struct fhir_deserialize::MemberNameAndOffset word_array_TerminologyCapabilities_Translation[] =
  {
#line 11 "./src/generated/gperf_class_files/TerminologyCapabilities_Translation.gperf"
    {"id", 0x8, 1, -1},
#line 16 "./src/generated/gperf_class_files/TerminologyCapabilities_Translation.gperf"
    {"needsMap", 0x38, 6, -1},
#line 13 "./src/generated/gperf_class_files/TerminologyCapabilities_Translation.gperf"
    {"extension", 0x20, 3, -1},
#line 10 "./src/generated/gperf_class_files/TerminologyCapabilities_Translation.gperf"
    {"resourceType", 0x0, 0, -1},
#line 12 "./src/generated/gperf_class_files/TerminologyCapabilities_Translation.gperf"
    {"extension_count", 0x18, 2, -1},
#line 15 "./src/generated/gperf_class_files/TerminologyCapabilities_Translation.gperf"
    {"modifierExtension", 0x30, 5, -1},
#line 14 "./src/generated/gperf_class_files/TerminologyCapabilities_Translation.gperf"
    {"modifierExtension_count", 0x28, 4, -1}
  };

static const signed char lookup[] =
  {
    -1, -1,  0, -1, -1, -1, -1, -1,  1,  2, -1, -1,  3, -1,
    -1,  4, -1,  5, -1, -1, -1, -1, -1,  6
  };

const struct fhir_deserialize::MemberNameAndOffset *
TerminologyCapabilities_Translation_Gperf::TerminologyCapabilities_Translation_MemberLookup (register const char *str, register unsigned int len)
{
  if (len <= MAX_WORD_LENGTH && len >= MIN_WORD_LENGTH)
    {
      register int key = hash (str, len);

      if (key <= MAX_HASH_VALUE && key >= 0)
        {
          register int index = lookup[key];

          if (index >= 0)
            {
              register const char *s = word_array_TerminologyCapabilities_Translation[index].name;

              if (*str == *s && !strncmp (str + 1, s + 1, len - 1) && s[len] == '\0')
                return &word_array_TerminologyCapabilities_Translation[index];
            }
        }
    }
  return 0;
}
