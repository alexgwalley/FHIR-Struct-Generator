/* C++ code produced by gperf version 3.0.1 */
/* Command-line: gperf.exe -t --output-file=src/generated/gperf_hash_tables/PlanDefinition_Action-Member-Lookup.cc -CGD ./src/generated/gperf_class_files/PlanDefinition_Action.gperf  */
/* Computed positions: -k'1,8' */

#if !((' ' == 32) && ('!' == 33) && ('"' == 34) && ('#' == 35) \
      && ('%' == 37) && ('&' == 38) && ('\'' == 39) && ('(' == 40) \
      && (')' == 41) && ('*' == 42) && ('+' == 43) && (',' == 44) \
      && ('-' == 45) && ('.' == 46) && ('/' == 47) && ('0' == 48) \
      && ('1' == 49) && ('2' == 50) && ('3' == 51) && ('4' == 52) \
      && ('5' == 53) && ('6' == 54) && ('7' == 55) && ('8' == 56) \
      && ('9' == 57) && (':' == 58) && (';' == 59) && ('<' == 60) \
      && ('=' == 61) && ('>' == 62) && ('?' == 63) && ('A' == 65) \
      && ('B' == 66) && ('C' == 67) && ('D' == 68) && ('E' == 69) \
      && ('F' == 70) && ('G' == 71) && ('H' == 72) && ('I' == 73) \
      && ('J' == 74) && ('K' == 75) && ('L' == 76) && ('M' == 77) \
      && ('N' == 78) && ('O' == 79) && ('P' == 80) && ('Q' == 81) \
      && ('R' == 82) && ('S' == 83) && ('T' == 84) && ('U' == 85) \
      && ('V' == 86) && ('W' == 87) && ('X' == 88) && ('Y' == 89) \
      && ('Z' == 90) && ('[' == 91) && ('\\' == 92) && (']' == 93) \
      && ('^' == 94) && ('_' == 95) && ('a' == 97) && ('b' == 98) \
      && ('c' == 99) && ('d' == 100) && ('e' == 101) && ('f' == 102) \
      && ('g' == 103) && ('h' == 104) && ('i' == 105) && ('j' == 106) \
      && ('k' == 107) && ('l' == 108) && ('m' == 109) && ('n' == 110) \
      && ('o' == 111) && ('p' == 112) && ('q' == 113) && ('r' == 114) \
      && ('s' == 115) && ('t' == 116) && ('u' == 117) && ('v' == 118) \
      && ('w' == 119) && ('x' == 120) && ('y' == 121) && ('z' == 122) \
      && ('{' == 123) && ('|' == 124) && ('}' == 125) && ('~' == 126))
/* The character set is not based on ISO-646.  */
#error "gperf generated tables don't work with this execution character set. Please report a bug to <bug-gnu-gperf@gnu.org>."
#endif

#line 8 "./src/generated/gperf_class_files/PlanDefinition_Action.gperf"
struct fhir_deserialize::MemberNameAndOffset;
enum
  {
    TOTAL_KEYWORDS = 52,
    MIN_WORD_LENGTH = 2,
    MAX_WORD_LENGTH = 23,
    MIN_HASH_VALUE = 4,
    MAX_HASH_VALUE = 117
  };

/* maximum key range = 114, duplicates = 0 */

class PlanDefinition_Action_Gperf
{
private:
  static inline unsigned int hash (const char *str, unsigned int len);
public:
  static const struct fhir_deserialize::MemberNameAndOffset *PlanDefinition_Action_MemberLookup (const char *str, unsigned int len);
};

inline unsigned int
PlanDefinition_Action_Gperf::hash (register const char *str, register unsigned int len)
{
  static const unsigned char asso_values[] =
    {
      118, 118, 118, 118, 118, 118, 118, 118, 118, 118,
      118, 118, 118, 118, 118, 118, 118, 118, 118, 118,
      118, 118, 118, 118, 118, 118, 118, 118, 118, 118,
      118, 118, 118, 118, 118, 118, 118, 118, 118, 118,
      118, 118, 118, 118, 118, 118, 118, 118, 118, 118,
      118, 118, 118, 118, 118, 118, 118, 118, 118, 118,
      118, 118, 118, 118, 118,  15, 118,   0, 118, 118,
      118, 118, 118, 118, 118, 118, 118, 118, 118, 118,
      118, 118,  30, 118, 118, 118,  15, 118, 118, 118,
      118, 118, 118, 118, 118,   5, 118,  40, 118,   5,
        0,  40, 118,  30, 118,  10, 118,   0,  40,  20,
      118,   0,  50, 118,  25,  15,   0,  30, 118, 118,
      118,   0, 118, 118, 118, 118, 118, 118, 118, 118,
      118, 118, 118, 118, 118, 118, 118, 118, 118, 118,
      118, 118, 118, 118, 118, 118, 118, 118, 118, 118,
      118, 118, 118, 118, 118, 118, 118, 118, 118, 118,
      118, 118, 118, 118, 118, 118, 118, 118, 118, 118,
      118, 118, 118, 118, 118, 118, 118, 118, 118, 118,
      118, 118, 118, 118, 118, 118, 118, 118, 118, 118,
      118, 118, 118, 118, 118, 118, 118, 118, 118, 118,
      118, 118, 118, 118, 118, 118, 118, 118, 118, 118,
      118, 118, 118, 118, 118, 118, 118, 118, 118, 118,
      118, 118, 118, 118, 118, 118, 118, 118, 118, 118,
      118, 118, 118, 118, 118, 118, 118, 118, 118, 118,
      118, 118, 118, 118, 118, 118, 118, 118, 118, 118,
      118, 118, 118, 118, 118, 118
    };
  register int hval = len;

  switch (hval)
    {
      default:
        hval += asso_values[(unsigned char)str[7]];
      /*FALLTHROUGH*/
      case 7:
      case 6:
      case 5:
      case 4:
      case 3:
      case 2:
      case 1:
        hval += asso_values[(unsigned char)str[0]];
        break;
    }
  return hval;
}

static const struct fhir_deserialize::MemberNameAndOffset word_array_PlanDefinition_Action[] =
  {
#line 49 "./src/generated/gperf_class_files/PlanDefinition_Action.gperf"
    {"type", 0x150, 35, -1, {(U8*)"type", 4}, fhir_deserialize::ResourceType::CodeableConcept, 0, fhir_deserialize::ResourceType::Unknown},
#line 17 "./src/generated/gperf_class_files/PlanDefinition_Action.gperf"
    {"title", 0x48, 7, -1, {(U8*)"title", 5}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 38 "./src/generated/gperf_class_files/PlanDefinition_Action.gperf"
    {"output", 0x110, 28, -1, {(U8*)"output", 6}, fhir_deserialize::ResourceType::DataRequirement, 0, fhir_deserialize::ResourceType::Unknown},
#line 32 "./src/generated/gperf_class_files/PlanDefinition_Action.gperf"
    {"trigger", 0xe0, 22, -1, {(U8*)"trigger", 7}, fhir_deserialize::ResourceType::TriggerDefinition, 0, fhir_deserialize::ResourceType::Unknown},
#line 22 "./src/generated/gperf_class_files/PlanDefinition_Action.gperf"
    {"code", 0x90, 12, -1, {(U8*)"code", 4}, fhir_deserialize::ResourceType::CodeableConcept, 0, fhir_deserialize::ResourceType::Unknown},
#line 18 "./src/generated/gperf_class_files/PlanDefinition_Action.gperf"
    {"description", 0x58, 8, -1, {(U8*)"description", 11}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 11 "./src/generated/gperf_class_files/PlanDefinition_Action.gperf"
    {"id", 0x8, 1, -1, {(U8*)"id", 2}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 26 "./src/generated/gperf_class_files/PlanDefinition_Action.gperf"
    {"documentation", 0xb0, 16, -1, {(U8*)"documentation", 13}, fhir_deserialize::ResourceType::RelatedArtifact, 0, fhir_deserialize::ResourceType::Unknown},
#line 34 "./src/generated/gperf_class_files/PlanDefinition_Action.gperf"
    {"condition", 0xf0, 24, -1, {(U8*)"condition", 9}, fhir_deserialize::ResourceType::PlanDefinition_Action_Condition, 0, fhir_deserialize::ResourceType::Unknown},
#line 36 "./src/generated/gperf_class_files/PlanDefinition_Action.gperf"
    {"input", 0x100, 26, -1, {(U8*)"input", 5}, fhir_deserialize::ResourceType::DataRequirement, 0, fhir_deserialize::ResourceType::Unknown},
#line 37 "./src/generated/gperf_class_files/PlanDefinition_Action.gperf"
    {"output_count", 0x108, 27, -1, {(U8*)"output_count", 12}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 31 "./src/generated/gperf_class_files/PlanDefinition_Action.gperf"
    {"trigger_count", 0xd8, 21, -1, {(U8*)"trigger_count", 13}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 25 "./src/generated/gperf_class_files/PlanDefinition_Action.gperf"
    {"documentation_count", 0xa8, 15, -1, {(U8*)"documentation_count", 19}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 33 "./src/generated/gperf_class_files/PlanDefinition_Action.gperf"
    {"condition_count", 0xe8, 23, -1, {(U8*)"condition_count", 15}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 35 "./src/generated/gperf_class_files/PlanDefinition_Action.gperf"
    {"input_count", 0xf8, 25, -1, {(U8*)"input_count", 11}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 46 "./src/generated/gperf_class_files/PlanDefinition_Action.gperf"
    {"timingTiming", 0x130, 32, 5, {(U8*)"timing", 6}, fhir_deserialize::ResourceType::Unknown, 20, fhir_deserialize::ResourceType::Timing},
#line 56 "./src/generated/gperf_class_files/PlanDefinition_Action.gperf"
    {"definitionUri", 0x1b0, 42, 1, {(U8*)"definition", 10}, fhir_deserialize::ResourceType::Unknown, 9, fhir_deserialize::ResourceType::Unknown},
#line 19 "./src/generated/gperf_class_files/PlanDefinition_Action.gperf"
    {"textEquivalent", 0x68, 9, -1, {(U8*)"textEquivalent", 14}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 59 "./src/generated/gperf_class_files/PlanDefinition_Action.gperf"
    {"dynamicValue", 0x1d8, 45, -1, {(U8*)"dynamicValue", 12}, fhir_deserialize::ResourceType::PlanDefinition_Action_DynamicValue, 0, fhir_deserialize::ResourceType::Unknown},
#line 55 "./src/generated/gperf_class_files/PlanDefinition_Action.gperf"
    {"definitionCanonical", 0x1b0, 42, 0, {(U8*)"definition", 10}, fhir_deserialize::ResourceType::Unknown, 2, fhir_deserialize::ResourceType::Unknown},
#line 24 "./src/generated/gperf_class_files/PlanDefinition_Action.gperf"
    {"reason", 0xa0, 14, -1, {(U8*)"reason", 6}, fhir_deserialize::ResourceType::CodeableConcept, 0, fhir_deserialize::ResourceType::Unknown},
#line 51 "./src/generated/gperf_class_files/PlanDefinition_Action.gperf"
    {"selectionBehavior", 0x168, 37, -1, {(U8*)"selectionBehavior", 17}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 58 "./src/generated/gperf_class_files/PlanDefinition_Action.gperf"
    {"dynamicValue_count", 0x1d0, 44, -1, {(U8*)"dynamicValue_count", 18}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 57 "./src/generated/gperf_class_files/PlanDefinition_Action.gperf"
    {"transform", 0x1c0, 43, -1, {(U8*)"transform", 9}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 28 "./src/generated/gperf_class_files/PlanDefinition_Action.gperf"
    {"goalId", 0xc0, 18, -1, {(U8*)"goalId", 6}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 29 "./src/generated/gperf_class_files/PlanDefinition_Action.gperf"
    {"subjectCodeableConcept", 0xd0, 20, 0, {(U8*)"subject", 7}, fhir_deserialize::ResourceType::CodeableConcept, 20, fhir_deserialize::ResourceType::CodeableConcept},
#line 42 "./src/generated/gperf_class_files/PlanDefinition_Action.gperf"
    {"timingAge", 0x130, 32, 1, {(U8*)"timing", 6}, fhir_deserialize::ResourceType::Unknown, 20, fhir_deserialize::ResourceType::Age},
#line 52 "./src/generated/gperf_class_files/PlanDefinition_Action.gperf"
    {"requiredBehavior", 0x178, 38, -1, {(U8*)"requiredBehavior", 16}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 23 "./src/generated/gperf_class_files/PlanDefinition_Action.gperf"
    {"reason_count", 0x98, 13, -1, {(U8*)"reason_count", 12}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 44 "./src/generated/gperf_class_files/PlanDefinition_Action.gperf"
    {"timingDuration", 0x130, 32, 3, {(U8*)"timing", 6}, fhir_deserialize::ResourceType::Unknown, 20, fhir_deserialize::ResourceType::Duration},
#line 21 "./src/generated/gperf_class_files/PlanDefinition_Action.gperf"
    {"code_count", 0x88, 11, -1, {(U8*)"code_count", 10}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 61 "./src/generated/gperf_class_files/PlanDefinition_Action.gperf"
    {"action", 0x1e8, 47, -1, {(U8*)"action", 6}, fhir_deserialize::ResourceType::PlanDefinition_Action, 0, fhir_deserialize::ResourceType::Unknown},
#line 27 "./src/generated/gperf_class_files/PlanDefinition_Action.gperf"
    {"goalId_count", 0xb8, 17, -1, {(U8*)"goalId_count", 12}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 13 "./src/generated/gperf_class_files/PlanDefinition_Action.gperf"
    {"extension", 0x20, 3, -1, {(U8*)"extension", 9}, fhir_deserialize::ResourceType::Extension, 0, fhir_deserialize::ResourceType::Unknown},
#line 45 "./src/generated/gperf_class_files/PlanDefinition_Action.gperf"
    {"timingRange", 0x130, 32, 4, {(U8*)"timing", 6}, fhir_deserialize::ResourceType::Unknown, 20, fhir_deserialize::ResourceType::Range},
#line 43 "./src/generated/gperf_class_files/PlanDefinition_Action.gperf"
    {"timingPeriod", 0x130, 32, 2, {(U8*)"timing", 6}, fhir_deserialize::ResourceType::Unknown, 20, fhir_deserialize::ResourceType::Period},
#line 40 "./src/generated/gperf_class_files/PlanDefinition_Action.gperf"
    {"relatedAction", 0x120, 30, -1, {(U8*)"relatedAction", 13}, fhir_deserialize::ResourceType::PlanDefinition_Action_RelatedAction, 0, fhir_deserialize::ResourceType::Unknown},
#line 41 "./src/generated/gperf_class_files/PlanDefinition_Action.gperf"
    {"timingDateTime", 0x130, 32, 0, {(U8*)"timing", 6}, fhir_deserialize::ResourceType::Unknown, 17, fhir_deserialize::ResourceType::Unknown},
#line 12 "./src/generated/gperf_class_files/PlanDefinition_Action.gperf"
    {"extension_count", 0x18, 2, -1, {(U8*)"extension_count", 15}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 16 "./src/generated/gperf_class_files/PlanDefinition_Action.gperf"
    {"prefix", 0x38, 6, -1, {(U8*)"prefix", 6}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 60 "./src/generated/gperf_class_files/PlanDefinition_Action.gperf"
    {"action_count", 0x1e0, 46, -1, {(U8*)"action_count", 12}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 20 "./src/generated/gperf_class_files/PlanDefinition_Action.gperf"
    {"priority", 0x78, 10, -1, {(U8*)"priority", 8}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 39 "./src/generated/gperf_class_files/PlanDefinition_Action.gperf"
    {"relatedAction_count", 0x118, 29, -1, {(U8*)"relatedAction_count", 19}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 30 "./src/generated/gperf_class_files/PlanDefinition_Action.gperf"
    {"subjectReference", 0xd0, 20, 1, {(U8*)"subject", 7}, fhir_deserialize::ResourceType::CodeableConcept, 20, fhir_deserialize::ResourceType::Reference},
#line 15 "./src/generated/gperf_class_files/PlanDefinition_Action.gperf"
    {"modifierExtension", 0x30, 5, -1, {(U8*)"modifierExtension", 17}, fhir_deserialize::ResourceType::Extension, 0, fhir_deserialize::ResourceType::Unknown},
#line 54 "./src/generated/gperf_class_files/PlanDefinition_Action.gperf"
    {"cardinalityBehavior", 0x198, 40, -1, {(U8*)"cardinalityBehavior", 19}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 53 "./src/generated/gperf_class_files/PlanDefinition_Action.gperf"
    {"precheckBehavior", 0x188, 39, -1, {(U8*)"precheckBehavior", 16}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 14 "./src/generated/gperf_class_files/PlanDefinition_Action.gperf"
    {"modifierExtension_count", 0x28, 4, -1, {(U8*)"modifierExtension_count", 23}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 50 "./src/generated/gperf_class_files/PlanDefinition_Action.gperf"
    {"groupingBehavior", 0x158, 36, -1, {(U8*)"groupingBehavior", 16}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 10 "./src/generated/gperf_class_files/PlanDefinition_Action.gperf"
    {"resourceType", 0x0, 0, -1, {(U8*)"resourceType", 12}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown},
#line 48 "./src/generated/gperf_class_files/PlanDefinition_Action.gperf"
    {"participant", 0x148, 34, -1, {(U8*)"participant", 11}, fhir_deserialize::ResourceType::PlanDefinition_Action_Participant, 0, fhir_deserialize::ResourceType::Unknown},
#line 47 "./src/generated/gperf_class_files/PlanDefinition_Action.gperf"
    {"participant_count", 0x140, 33, -1, {(U8*)"participant_count", 17}, fhir_deserialize::ResourceType::Unknown, 0, fhir_deserialize::ResourceType::Unknown}
  };

static const signed char lookup[] =
  {
    -1, -1, -1, -1,  0,  1,  2,  3, -1,  4, -1,  5,  6,  7,
     8,  9, -1, 10, 11, 12, 13, 14, 15, 16, 17, -1, -1, 18,
    -1, 19, -1, 20, 21, 22, 23, -1, 24, 25, -1, 26, -1, 27,
    28, -1, 29, 30, 31, 32, -1, 33, -1, 34, 35, 36, 37, 38,
    39, 40, 41, 42, -1, 43, 44, -1, 45, -1, 46, -1, 47, -1,
    -1, -1, -1, -1, -1, -1, 48, 49, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 50,
    -1, -1, -1, -1, -1, 51
  };

const struct fhir_deserialize::MemberNameAndOffset *
PlanDefinition_Action_Gperf::PlanDefinition_Action_MemberLookup (register const char *str, register unsigned int len)
{
  if (len <= MAX_WORD_LENGTH && len >= MIN_WORD_LENGTH)
    {
      register int key = hash (str, len);

      if (key <= MAX_HASH_VALUE && key >= 0)
        {
          register int index = lookup[key];

          if (index >= 0)
            {
              register const char *s = word_array_PlanDefinition_Action[index].name;

              if (*str == *s && !strncmp (str + 1, s + 1, len - 1) && s[len] == '\0')
                return &word_array_PlanDefinition_Action[index];
            }
        }
    }
  return 0;
}
