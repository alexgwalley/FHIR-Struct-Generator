/* C++ code produced by gperf version 3.0.1 */
/* Command-line: gperf.exe -t --output-file=src/gperf_hash_tables/ClinicalImpression_Finding-Member-Lookup.cc -CGD ./gperf_class_files/ClinicalImpression_Finding.gperf  */
/* Computed positions: -k'' */

#line 8 "./gperf_class_files/ClinicalImpression_Finding.gperf"
struct fhir_deserialize::MemberNameAndOffset;
enum
  {
    TOTAL_KEYWORDS = 9,
    MIN_WORD_LENGTH = 2,
    MAX_WORD_LENGTH = 23,
    MIN_HASH_VALUE = 2,
    MAX_HASH_VALUE = 23
  };

/* maximum key range = 22, duplicates = 0 */

class ClinicalImpression_Finding_Gperf
{
private:
  static inline unsigned int hash (const char *str, unsigned int len);
public:
  static const struct fhir_deserialize::MemberNameAndOffset *ClinicalImpression_Finding_MemberLookup (const char *str, unsigned int len);
};

inline /*ARGSUSED*/
unsigned int
ClinicalImpression_Finding_Gperf::hash (register const char *str, register unsigned int len)
{
  return len;
}

static const struct fhir_deserialize::MemberNameAndOffset word_array_ClinicalImpression_Finding[] =
  {
#line 11 "./gperf_class_files/ClinicalImpression_Finding.gperf"
    {"id", 0x8, 1, -1},
#line 18 "./gperf_class_files/ClinicalImpression_Finding.gperf"
    {"basis", 0x48, 8, -1},
#line 13 "./gperf_class_files/ClinicalImpression_Finding.gperf"
    {"extension", 0x20, 3, -1},
#line 10 "./gperf_class_files/ClinicalImpression_Finding.gperf"
    {"resourceType", 0x0, 0, -1},
#line 17 "./gperf_class_files/ClinicalImpression_Finding.gperf"
    {"itemReference", 0x40, 7, -1},
#line 12 "./gperf_class_files/ClinicalImpression_Finding.gperf"
    {"extension_count", 0x18, 2, -1},
#line 15 "./gperf_class_files/ClinicalImpression_Finding.gperf"
    {"modifierExtension", 0x30, 5, -1},
#line 16 "./gperf_class_files/ClinicalImpression_Finding.gperf"
    {"itemCodeableConcept", 0x38, 6, -1},
#line 14 "./gperf_class_files/ClinicalImpression_Finding.gperf"
    {"modifierExtension_count", 0x28, 4, -1}
  };

static const signed char lookup[] =
  {
    -1, -1,  0, -1, -1,  1, -1, -1, -1,  2, -1, -1,  3,  4,
    -1,  5, -1,  6, -1,  7, -1, -1, -1,  8
  };

const struct fhir_deserialize::MemberNameAndOffset *
ClinicalImpression_Finding_Gperf::ClinicalImpression_Finding_MemberLookup (register const char *str, register unsigned int len)
{
  if (len <= MAX_WORD_LENGTH && len >= MIN_WORD_LENGTH)
    {
      register int key = hash (str, len);

      if (key <= MAX_HASH_VALUE && key >= 0)
        {
          register int index = lookup[key];

          if (index >= 0)
            {
              register const char *s = word_array_ClinicalImpression_Finding[index].name;

              if (*str == *s && !strncmp (str + 1, s + 1, len - 1) && s[len] == '\0')
                return &word_array_ClinicalImpression_Finding[index];
            }
        }
    }
  return 0;
}
