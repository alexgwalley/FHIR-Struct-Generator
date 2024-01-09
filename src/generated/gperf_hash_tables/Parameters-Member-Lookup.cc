/* C++ code produced by gperf version 3.0.1 */
/* Command-line: gperf.exe -t --output-file=src/generated/gperf_hash_tables/Parameters-Member-Lookup.cc -CGD ./src/generated/gperf_class_files/Parameters.gperf  */
/* Computed positions: -k'' */

#line 8 "./src/generated/gperf_class_files/Parameters.gperf"
struct fhir_deserialize::MemberNameAndOffset;
enum
  {
    TOTAL_KEYWORDS = 7,
    MIN_WORD_LENGTH = 2,
    MAX_WORD_LENGTH = 15,
    MIN_HASH_VALUE = 2,
    MAX_HASH_VALUE = 15
  };

/* maximum key range = 14, duplicates = 0 */

class Parameters_Gperf
{
private:
  static inline unsigned int hash (const char *str, unsigned int len);
public:
  static const struct fhir_deserialize::MemberNameAndOffset *Parameters_MemberLookup (const char *str, unsigned int len);
};

inline /*ARGSUSED*/
unsigned int
Parameters_Gperf::hash (register const char *str, register unsigned int len)
{
  return len;
}

static const struct fhir_deserialize::MemberNameAndOffset word_array_Parameters[] =
  {
#line 11 "./src/generated/gperf_class_files/Parameters.gperf"
    {"id", 0x8, 1, -1, {(U8*)"id", 2}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 12 "./src/generated/gperf_class_files/Parameters.gperf"
    {"meta", 0x18, 2, -1, {(U8*)"meta", 4}, fhir_deserialize::ResourceType::Meta, 0, fhir_deserialize::ResourceType::Unknown},
#line 14 "./src/generated/gperf_class_files/Parameters.gperf"
    {"language", 0x30, 4, -1, {(U8*)"language", 8}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 16 "./src/generated/gperf_class_files/Parameters.gperf"
    {"parameter", 0x48, 6, -1, {(U8*)"parameter", 9}, fhir_deserialize::ResourceType::Parameters_Parameter, 0, fhir_deserialize::ResourceType::Unknown},
#line 10 "./src/generated/gperf_class_files/Parameters.gperf"
    {"resourceType", 0x0, 0, -1, {(U8*)"resourceType", 12}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 13 "./src/generated/gperf_class_files/Parameters.gperf"
    {"implicitRules", 0x20, 3, -1, {(U8*)"implicitRules", 13}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 15 "./src/generated/gperf_class_files/Parameters.gperf"
    {"parameter_count", 0x40, 5, -1, {(U8*)"parameter_count", 15}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown}
  };

static const signed char lookup[] =
  {
    -1, -1,  0, -1,  1, -1, -1, -1,  2,  3, -1, -1,  4,  5,
    -1,  6
  };

const struct fhir_deserialize::MemberNameAndOffset *
Parameters_Gperf::Parameters_MemberLookup (register const char *str, register unsigned int len)
{
  if (len <= MAX_WORD_LENGTH && len >= MIN_WORD_LENGTH)
    {
      register int key = hash (str, len);

      if (key <= MAX_HASH_VALUE && key >= 0)
        {
          register int index = lookup[key];

          if (index >= 0)
            {
              register const char *s = word_array_Parameters[index].name;

              if (*str == *s && !strncmp (str + 1, s + 1, len - 1) && s[len] == '\0')
                return &word_array_Parameters[index];
            }
        }
    }
  return 0;
}
