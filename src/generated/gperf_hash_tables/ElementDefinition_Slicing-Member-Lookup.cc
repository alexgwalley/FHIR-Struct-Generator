/* C++ code produced by gperf version 3.0.1 */
/* Command-line: gperf.exe -t --output-file=src/generated/gperf_hash_tables/ElementDefinition_Slicing-Member-Lookup.cc -CGD ./src/generated/gperf_class_files/ElementDefinition_Slicing.gperf  */
/* Computed positions: -k'' */

#line 8 "./src/generated/gperf_class_files/ElementDefinition_Slicing.gperf"
struct fhir_deserialize::MemberNameAndOffset;
enum
  {
    TOTAL_KEYWORDS = 9,
    MIN_WORD_LENGTH = 2,
    MAX_WORD_LENGTH = 19,
    MIN_HASH_VALUE = 2,
    MAX_HASH_VALUE = 19
  };

/* maximum key range = 18, duplicates = 0 */

class ElementDefinition_Slicing_Gperf
{
private:
  static inline unsigned int hash (const char *str, unsigned int len);
public:
  static const struct fhir_deserialize::MemberNameAndOffset *ElementDefinition_Slicing_MemberLookup (const char *str, unsigned int len);
};

inline /*ARGSUSED*/
unsigned int
ElementDefinition_Slicing_Gperf::hash (register const char *str, register unsigned int len)
{
  return len;
}

static const struct fhir_deserialize::MemberNameAndOffset word_array_ElementDefinition_Slicing[] =
  {
#line 11 "./src/generated/gperf_class_files/ElementDefinition_Slicing.gperf"
    {"id", 0x8, 1, -1, {(U8*)"id", 2}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 18 "./src/generated/gperf_class_files/ElementDefinition_Slicing.gperf"
    {"rules", 0x50, 8, -1, {(U8*)"rules", 5}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 17 "./src/generated/gperf_class_files/ElementDefinition_Slicing.gperf"
    {"ordered", 0x48, 7, -1, {(U8*)"ordered", 7}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 13 "./src/generated/gperf_class_files/ElementDefinition_Slicing.gperf"
    {"extension", 0x20, 3, -1, {(U8*)"extension", 9}, fhir_deserialize::ResourceType::Extension, 0, fhir_deserialize::ResourceType::Unknown},
#line 16 "./src/generated/gperf_class_files/ElementDefinition_Slicing.gperf"
    {"description", 0x38, 6, -1, {(U8*)"description", 11}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 10 "./src/generated/gperf_class_files/ElementDefinition_Slicing.gperf"
    {"resourceType", 0x0, 0, -1, {(U8*)"resourceType", 12}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 15 "./src/generated/gperf_class_files/ElementDefinition_Slicing.gperf"
    {"discriminator", 0x30, 5, -1, {(U8*)"discriminator", 13}, fhir_deserialize::ResourceType::ElementDefinition_Slicing_Discriminator, 0, fhir_deserialize::ResourceType::Unknown},
#line 12 "./src/generated/gperf_class_files/ElementDefinition_Slicing.gperf"
    {"extension_count", 0x18, 2, -1, {(U8*)"extension_count", 15}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 14 "./src/generated/gperf_class_files/ElementDefinition_Slicing.gperf"
    {"discriminator_count", 0x28, 4, -1, {(U8*)"discriminator_count", 19}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown}
  };

static const signed char lookup[] =
  {
    -1, -1,  0, -1, -1,  1, -1,  2, -1,  3, -1,  4,  5,  6,
    -1,  7, -1, -1, -1,  8
  };

const struct fhir_deserialize::MemberNameAndOffset *
ElementDefinition_Slicing_Gperf::ElementDefinition_Slicing_MemberLookup (register const char *str, register unsigned int len)
{
  if (len <= MAX_WORD_LENGTH && len >= MIN_WORD_LENGTH)
    {
      register int key = hash (str, len);

      if (key <= MAX_HASH_VALUE && key >= 0)
        {
          register int index = lookup[key];

          if (index >= 0)
            {
              register const char *s = word_array_ElementDefinition_Slicing[index].name;

              if (*str == *s && !strncmp (str + 1, s + 1, len - 1) && s[len] == '\0')
                return &word_array_ElementDefinition_Slicing[index];
            }
        }
    }
  return 0;
}
