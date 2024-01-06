/* C++ code produced by gperf version 3.0.1 */
/* Command-line: gperf.exe -t --output-file=src/gperf_hash_tables/SubstancePolymer_Repeat_RepeatUnit-Member-Lookup.cc -CGD ./gperf_class_files/SubstancePolymer_Repeat_RepeatUnit.gperf  */
/* Computed positions: -k'' */

#line 8 "./gperf_class_files/SubstancePolymer_Repeat_RepeatUnit.gperf"
struct fhir_deserialize::MemberNameAndOffset;
enum
  {
    TOTAL_KEYWORDS = 13,
    MIN_WORD_LENGTH = 2,
    MAX_WORD_LENGTH = 30,
    MIN_HASH_VALUE = 2,
    MAX_HASH_VALUE = 30
  };

/* maximum key range = 29, duplicates = 0 */

class SubstancePolymer_Repeat_RepeatUnit_Gperf
{
private:
  static inline unsigned int hash (const char *str, unsigned int len);
public:
  static const struct fhir_deserialize::MemberNameAndOffset *SubstancePolymer_Repeat_RepeatUnit_MemberLookup (const char *str, unsigned int len);
};

inline /*ARGSUSED*/
unsigned int
SubstancePolymer_Repeat_RepeatUnit_Gperf::hash (register const char *str, register unsigned int len)
{
  return len;
}

static const struct fhir_deserialize::MemberNameAndOffset word_array_SubstancePolymer_Repeat_RepeatUnit[] =
  {
#line 11 "./gperf_class_files/SubstancePolymer_Repeat_RepeatUnit.gperf"
    {"id", 0x8, 1, -1},
#line 18 "./gperf_class_files/SubstancePolymer_Repeat_RepeatUnit.gperf"
    {"amount", 0x50, 8, -1},
#line 13 "./gperf_class_files/SubstancePolymer_Repeat_RepeatUnit.gperf"
    {"extension", 0x20, 3, -1},
#line 17 "./gperf_class_files/SubstancePolymer_Repeat_RepeatUnit.gperf"
    {"repeatUnit", 0x40, 7, -1},
#line 10 "./gperf_class_files/SubstancePolymer_Repeat_RepeatUnit.gperf"
    {"resourceType", 0x0, 0, -1},
#line 12 "./gperf_class_files/SubstancePolymer_Repeat_RepeatUnit.gperf"
    {"extension_count", 0x18, 2, -1},
#line 15 "./gperf_class_files/SubstancePolymer_Repeat_RepeatUnit.gperf"
    {"modifierExtension", 0x30, 5, -1},
#line 20 "./gperf_class_files/SubstancePolymer_Repeat_RepeatUnit.gperf"
    {"degreeOfPolymerisation", 0x60, 10, -1},
#line 14 "./gperf_class_files/SubstancePolymer_Repeat_RepeatUnit.gperf"
    {"modifierExtension_count", 0x28, 4, -1},
#line 22 "./gperf_class_files/SubstancePolymer_Repeat_RepeatUnit.gperf"
    {"structuralRepresentation", 0x70, 12, -1},
#line 16 "./gperf_class_files/SubstancePolymer_Repeat_RepeatUnit.gperf"
    {"orientationOfPolymerisation", 0x38, 6, -1},
#line 19 "./gperf_class_files/SubstancePolymer_Repeat_RepeatUnit.gperf"
    {"degreeOfPolymerisation_count", 0x58, 9, -1},
#line 21 "./gperf_class_files/SubstancePolymer_Repeat_RepeatUnit.gperf"
    {"structuralRepresentation_count", 0x68, 11, -1}
  };

static const signed char lookup[] =
  {
    -1, -1,  0, -1, -1, -1,  1, -1, -1,  2,  3, -1,  4, -1,
    -1,  5, -1,  6, -1, -1, -1, -1,  7,  8,  9, -1, -1, 10,
    11, -1, 12
  };

const struct fhir_deserialize::MemberNameAndOffset *
SubstancePolymer_Repeat_RepeatUnit_Gperf::SubstancePolymer_Repeat_RepeatUnit_MemberLookup (register const char *str, register unsigned int len)
{
  if (len <= MAX_WORD_LENGTH && len >= MIN_WORD_LENGTH)
    {
      register int key = hash (str, len);

      if (key <= MAX_HASH_VALUE && key >= 0)
        {
          register int index = lookup[key];

          if (index >= 0)
            {
              register const char *s = word_array_SubstancePolymer_Repeat_RepeatUnit[index].name;

              if (*str == *s && !strncmp (str + 1, s + 1, len - 1) && s[len] == '\0')
                return &word_array_SubstancePolymer_Repeat_RepeatUnit[index];
            }
        }
    }
  return 0;
}
