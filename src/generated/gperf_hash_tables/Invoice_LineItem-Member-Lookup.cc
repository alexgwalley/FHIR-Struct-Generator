/* C++ code produced by gperf version 3.0.1 */
/* Command-line: gperf.exe -t --output-file=src/generated/gperf_hash_tables/Invoice_LineItem-Member-Lookup.cc -CGD ./src/generated/gperf_class_files/Invoice_LineItem.gperf  */
/* Computed positions: -k'' */

#line 8 "./src/generated/gperf_class_files/Invoice_LineItem.gperf"
struct fhir_deserialize::MemberNameAndOffset;
enum
  {
    TOTAL_KEYWORDS = 11,
    MIN_WORD_LENGTH = 2,
    MAX_WORD_LENGTH = 25,
    MIN_HASH_VALUE = 2,
    MAX_HASH_VALUE = 25
  };

/* maximum key range = 24, duplicates = 0 */

class Invoice_LineItem_Gperf
{
private:
  static inline unsigned int hash (const char *str, unsigned int len);
public:
  static const struct fhir_deserialize::MemberNameAndOffset *Invoice_LineItem_MemberLookup (const char *str, unsigned int len);
};

inline /*ARGSUSED*/
unsigned int
Invoice_LineItem_Gperf::hash (register const char *str, register unsigned int len)
{
  return len;
}

static const struct fhir_deserialize::MemberNameAndOffset word_array_Invoice_LineItem[] =
  {
#line 11 "./src/generated/gperf_class_files/Invoice_LineItem.gperf"
    {"id", 0x8, 1, -1, {(U8*)"id", 2}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 16 "./src/generated/gperf_class_files/Invoice_LineItem.gperf"
    {"sequence", 0x38, 6, -1, {(U8*)"sequence", 8}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 13 "./src/generated/gperf_class_files/Invoice_LineItem.gperf"
    {"extension", 0x20, 3, -1, {(U8*)"extension", 9}, fhir_deserialize::ResourceType::Extension, 0, fhir_deserialize::ResourceType::Unknown},
#line 10 "./src/generated/gperf_class_files/Invoice_LineItem.gperf"
    {"resourceType", 0x0, 0, -1, {(U8*)"resourceType", 12}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 20 "./src/generated/gperf_class_files/Invoice_LineItem.gperf"
    {"priceComponent", 0x58, 10, -1, {(U8*)"priceComponent", 14}, fhir_deserialize::ResourceType::Invoice_LineItem_PriceComponent, 0, fhir_deserialize::ResourceType::Unknown},
#line 12 "./src/generated/gperf_class_files/Invoice_LineItem.gperf"
    {"extension_count", 0x18, 2, -1, {(U8*)"extension_count", 15}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 15 "./src/generated/gperf_class_files/Invoice_LineItem.gperf"
    {"modifierExtension", 0x30, 5, -1, {(U8*)"modifierExtension", 17}, fhir_deserialize::ResourceType::Extension, 0, fhir_deserialize::ResourceType::Unknown},
#line 17 "./src/generated/gperf_class_files/Invoice_LineItem.gperf"
    {"chargeItemReference", 0x48, 8, 0, {(U8*)"chargeItem", 10}, fhir_deserialize::ResourceType::Reference, 20, fhir_deserialize::ResourceType::Reference},
#line 19 "./src/generated/gperf_class_files/Invoice_LineItem.gperf"
    {"priceComponent_count", 0x50, 9, -1, {(U8*)"priceComponent_count", 20}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 14 "./src/generated/gperf_class_files/Invoice_LineItem.gperf"
    {"modifierExtension_count", 0x28, 4, -1, {(U8*)"modifierExtension_count", 23}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 18 "./src/generated/gperf_class_files/Invoice_LineItem.gperf"
    {"chargeItemCodeableConcept", 0x48, 8, 1, {(U8*)"chargeItem", 10}, fhir_deserialize::ResourceType::Reference, 20, fhir_deserialize::ResourceType::CodeableConcept}
  };

static const signed char lookup[] =
  {
    -1, -1,  0, -1, -1, -1, -1, -1,  1,  2, -1, -1,  3, -1,
     4,  5, -1,  6, -1,  7,  8, -1, -1,  9, -1, 10
  };

const struct fhir_deserialize::MemberNameAndOffset *
Invoice_LineItem_Gperf::Invoice_LineItem_MemberLookup (register const char *str, register unsigned int len)
{
  if (len <= MAX_WORD_LENGTH && len >= MIN_WORD_LENGTH)
    {
      register int key = hash (str, len);

      if (key <= MAX_HASH_VALUE && key >= 0)
        {
          register int index = lookup[key];

          if (index >= 0)
            {
              register const char *s = word_array_Invoice_LineItem[index].name;

              if (*str == *s && !strncmp (str + 1, s + 1, len - 1) && s[len] == '\0')
                return &word_array_Invoice_LineItem[index];
            }
        }
    }
  return 0;
}
