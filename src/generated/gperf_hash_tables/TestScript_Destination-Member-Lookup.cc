/* C++ code produced by gperf version 3.0.1 */
/* Command-line: gperf.exe -t --output-file=src/generated/gperf_hash_tables/TestScript_Destination-Member-Lookup.cc -CGD ./src/generated/gperf_class_files/TestScript_Destination.gperf  */
/* Computed positions: -k'' */

#line 8 "./src/generated/gperf_class_files/TestScript_Destination.gperf"
struct fhir_deserialize::MemberNameAndOffset;
enum
  {
    TOTAL_KEYWORDS = 8,
    MIN_WORD_LENGTH = 2,
    MAX_WORD_LENGTH = 23,
    MIN_HASH_VALUE = 2,
    MAX_HASH_VALUE = 23
  };

/* maximum key range = 22, duplicates = 0 */

class TestScript_Destination_Gperf
{
private:
  static inline unsigned int hash (const char *str, unsigned int len);
public:
  static const struct fhir_deserialize::MemberNameAndOffset *TestScript_Destination_MemberLookup (const char *str, unsigned int len);
};

inline /*ARGSUSED*/
unsigned int
TestScript_Destination_Gperf::hash (register const char *str, register unsigned int len)
{
  return len;
}

static const struct fhir_deserialize::MemberNameAndOffset word_array_TestScript_Destination[] =
  {
#line 11 "./src/generated/gperf_class_files/TestScript_Destination.gperf"
    {"id", 0x8, 1, -1, {(U8*)"id", 2}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 16 "./src/generated/gperf_class_files/TestScript_Destination.gperf"
    {"index", 0x38, 6, -1, {(U8*)"index", 5}, fhir_deserialize::ResourceType::Integer, 0, fhir_deserialize::ResourceType::Unknown},
#line 17 "./src/generated/gperf_class_files/TestScript_Destination.gperf"
    {"profile", 0x40, 7, -1, {(U8*)"profile", 7}, fhir_deserialize::ResourceType::Coding, 0, fhir_deserialize::ResourceType::Unknown},
#line 13 "./src/generated/gperf_class_files/TestScript_Destination.gperf"
    {"extension", 0x20, 3, -1, {(U8*)"extension", 9}, fhir_deserialize::ResourceType::Extension, 0, fhir_deserialize::ResourceType::Unknown},
#line 10 "./src/generated/gperf_class_files/TestScript_Destination.gperf"
    {"resourceType", 0x0, 0, -1, {(U8*)"resourceType", 12}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 12 "./src/generated/gperf_class_files/TestScript_Destination.gperf"
    {"extension_count", 0x18, 2, -1, {(U8*)"extension_count", 15}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 15 "./src/generated/gperf_class_files/TestScript_Destination.gperf"
    {"modifierExtension", 0x30, 5, -1, {(U8*)"modifierExtension", 17}, fhir_deserialize::ResourceType::Extension, 0, fhir_deserialize::ResourceType::Unknown},
#line 14 "./src/generated/gperf_class_files/TestScript_Destination.gperf"
    {"modifierExtension_count", 0x28, 4, -1, {(U8*)"modifierExtension_count", 23}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown}
  };

static const signed char lookup[] =
  {
    -1, -1,  0, -1, -1,  1, -1,  2, -1,  3, -1, -1,  4, -1,
    -1,  5, -1,  6, -1, -1, -1, -1, -1,  7
  };

const struct fhir_deserialize::MemberNameAndOffset *
TestScript_Destination_Gperf::TestScript_Destination_MemberLookup (register const char *str, register unsigned int len)
{
  if (len <= MAX_WORD_LENGTH && len >= MIN_WORD_LENGTH)
    {
      register int key = hash (str, len);

      if (key <= MAX_HASH_VALUE && key >= 0)
        {
          register int index = lookup[key];

          if (index >= 0)
            {
              register const char *s = word_array_TestScript_Destination[index].name;

              if (*str == *s && !strncmp (str + 1, s + 1, len - 1) && s[len] == '\0')
                return &word_array_TestScript_Destination[index];
            }
        }
    }
  return 0;
}
