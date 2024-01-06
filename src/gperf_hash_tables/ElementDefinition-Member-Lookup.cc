/* C++ code produced by gperf version 3.0.1 */
/* Command-line: gperf.exe -t --output-file=src/gperf_hash_tables/ElementDefinition-Member-Lookup.cc -CGD ./gperf_class_files/ElementDefinition.gperf  */
/* Computed positions: -k'2,6,9,14,$' */

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

#line 8 "./gperf_class_files/ElementDefinition.gperf"
struct fhir_deserialize::MemberNameAndOffset;
enum
  {
    TOTAL_KEYWORDS = 212,
    MIN_WORD_LENGTH = 2,
    MAX_WORD_LENGTH = 31,
    MIN_HASH_VALUE = 19,
    MAX_HASH_VALUE = 562
  };

/* maximum key range = 544, duplicates = 0 */

class ElementDefinition_Gperf
{
private:
  static inline unsigned int hash (const char *str, unsigned int len);
public:
  static const struct fhir_deserialize::MemberNameAndOffset *ElementDefinition_MemberLookup (const char *str, unsigned int len);
};

inline unsigned int
ElementDefinition_Gperf::hash (register const char *str, register unsigned int len)
{
  static const unsigned short asso_values[] =
    {
      563, 563, 563, 563, 563, 563, 563, 563, 563, 563,
      563, 563, 563, 563, 563, 563, 563, 563, 563, 563,
      563, 563, 563, 563, 563, 563, 563, 563, 563, 563,
      563, 563, 563, 563, 563, 563, 563, 563, 563, 563,
      563, 563, 563, 563, 563, 563, 563, 563, 563, 563,
      563, 563, 563, 563, 563, 563, 563, 563, 563, 563,
      563, 563, 563, 563, 563,  95,   5, 120, 175, 240,
       40, 563,  35, 205,  30, 563, 563,  90,   0,   0,
      130,  25,  95,  55,  35, 255, 105, 563, 563, 563,
      563, 563, 563, 563, 563,   0, 563,  15,  10, 145,
      100,   0,  85, 140, 215,   5,   0, 563,   0,   5,
       15,  70,  35,   5,  20,  55,   0,  70,  90,   5,
      175, 170,   5, 563, 563, 563, 563, 563, 563, 563,
      563, 563, 563, 563, 563, 563, 563, 563, 563, 563,
      563, 563, 563, 563, 563, 563, 563, 563, 563, 563,
      563, 563, 563, 563, 563, 563, 563, 563, 563, 563,
      563, 563, 563, 563, 563, 563, 563, 563, 563, 563,
      563, 563, 563, 563, 563, 563, 563, 563, 563, 563,
      563, 563, 563, 563, 563, 563, 563, 563, 563, 563,
      563, 563, 563, 563, 563, 563, 563, 563, 563, 563,
      563, 563, 563, 563, 563, 563, 563, 563, 563, 563,
      563, 563, 563, 563, 563, 563, 563, 563, 563, 563,
      563, 563, 563, 563, 563, 563, 563, 563, 563, 563,
      563, 563, 563, 563, 563, 563, 563, 563, 563, 563,
      563, 563, 563, 563, 563, 563, 563, 563, 563, 563,
      563, 563, 563, 563, 563, 563, 563
    };
  register int hval = len;

  switch (hval)
    {
      default:
        hval += asso_values[(unsigned char)str[13]+1];
      /*FALLTHROUGH*/
      case 13:
      case 12:
      case 11:
      case 10:
      case 9:
        hval += asso_values[(unsigned char)str[8]+1];
      /*FALLTHROUGH*/
      case 8:
      case 7:
      case 6:
        hval += asso_values[(unsigned char)str[5]];
      /*FALLTHROUGH*/
      case 5:
      case 4:
      case 3:
      case 2:
        hval += asso_values[(unsigned char)str[1]];
        break;
    }
  return hval + asso_values[(unsigned char)str[len - 1]];
}

static const struct fhir_deserialize::MemberNameAndOffset word_array_ElementDefinition[] =
  {
#line 34 "./gperf_class_files/ElementDefinition.gperf"
    {"base", 0x100, 23, -1},
#line 21 "./gperf_class_files/ElementDefinition.gperf"
    {"label", 0x70, 11, -1},
#line 32 "./gperf_class_files/ElementDefinition.gperf"
    {"min", 0xe8, 21, -1},
#line 52 "./gperf_class_files/ElementDefinition.gperf"
    {"defaultValueTime", 0x130, 28, 14},
#line 65 "./gperf_class_files/ElementDefinition.gperf"
    {"defaultValueDistance", 0x130, 28, 27},
#line 76 "./gperf_class_files/ElementDefinition.gperf"
    {"defaultValueSignature", 0x130, 28, 38},
#line 85 "./gperf_class_files/ElementDefinition.gperf"
    {"defaultValueUsageContext", 0x130, 28, 47},
#line 42 "./gperf_class_files/ElementDefinition.gperf"
    {"defaultValueDate", 0x130, 28, 4},
#line 72 "./gperf_class_files/ElementDefinition.gperf"
    {"defaultValueRange", 0x130, 28, 34},
#line 43 "./gperf_class_files/ElementDefinition.gperf"
    {"defaultValueDateTime", 0x130, 28, 5},
#line 40 "./gperf_class_files/ElementDefinition.gperf"
    {"defaultValueCanonical", 0x130, 28, 2},
#line 91 "./gperf_class_files/ElementDefinition.gperf"
    {"fixedBoolean", 0x168, 32, 1},
#line 154 "./gperf_class_files/ElementDefinition.gperf"
    {"patternTime", 0x180, 34, 14},
#line 80 "./gperf_class_files/ElementDefinition.gperf"
    {"defaultValueDataRequirement", 0x130, 28, 42},
#line 198 "./gperf_class_files/ElementDefinition.gperf"
    {"minValuePositiveInt", 0x1a8, 38, 6},
#line 68 "./gperf_class_files/ElementDefinition.gperf"
    {"defaultValueIdentifier", 0x130, 28, 30},
#line 48 "./gperf_class_files/ElementDefinition.gperf"
    {"defaultValueMarkdown", 0x130, 28, 10},
#line 144 "./gperf_class_files/ElementDefinition.gperf"
    {"patternDate", 0x180, 34, 4},
#line 174 "./gperf_class_files/ElementDefinition.gperf"
    {"patternRange", 0x180, 34, 34},
#line 75 "./gperf_class_files/ElementDefinition.gperf"
    {"defaultValueSampledData", 0x130, 28, 37},
#line 207 "./gperf_class_files/ElementDefinition.gperf"
    {"maxValuePositiveInt", 0x1c0, 40, 6},
#line 31 "./gperf_class_files/ElementDefinition.gperf"
    {"alias", 0xe0, 20, -1},
#line 41 "./gperf_class_files/ElementDefinition.gperf"
    {"defaultValueCode", 0x130, 28, 3},
#line 64 "./gperf_class_files/ElementDefinition.gperf"
    {"defaultValueCount", 0x130, 28, 26},
#line 86 "./gperf_class_files/ElementDefinition.gperf"
    {"defaultValueDosage", 0x130, 28, 48},
#line 27 "./gperf_class_files/ElementDefinition.gperf"
    {"definition", 0xa8, 16, -1},
#line 82 "./gperf_class_files/ElementDefinition.gperf"
    {"defaultValueParameterDefinition", 0x130, 28, 44},
#line 50 "./gperf_class_files/ElementDefinition.gperf"
    {"defaultValuePositiveInt", 0x130, 28, 12},
#line 63 "./gperf_class_files/ElementDefinition.gperf"
    {"defaultValueContactPoint", 0x130, 28, 25},
#line 78 "./gperf_class_files/ElementDefinition.gperf"
    {"defaultValueContactDetail", 0x130, 28, 40},
#line 61 "./gperf_class_files/ElementDefinition.gperf"
    {"defaultValueCodeableConcept", 0x130, 28, 23},
#line 23 "./gperf_class_files/ElementDefinition.gperf"
    {"code", 0x88, 13, -1},
#line 145 "./gperf_class_files/ElementDefinition.gperf"
    {"patternDateTime", 0x180, 34, 5},
#line 177 "./gperf_class_files/ElementDefinition.gperf"
    {"patternSampledData", 0x180, 34, 37},
#line 39 "./gperf_class_files/ElementDefinition.gperf"
    {"defaultValueBoolean", 0x130, 28, 1},
#line 55 "./gperf_class_files/ElementDefinition.gperf"
    {"defaultValueUrl", 0x130, 28, 17},
#line 143 "./gperf_class_files/ElementDefinition.gperf"
    {"patternCode", 0x180, 34, 3},
#line 166 "./gperf_class_files/ElementDefinition.gperf"
    {"patternCount", 0x180, 34, 26},
#line 188 "./gperf_class_files/ElementDefinition.gperf"
    {"patternDosage", 0x180, 34, 48},
#line 57 "./gperf_class_files/ElementDefinition.gperf"
    {"defaultValueAddress", 0x130, 28, 19},
#line 54 "./gperf_class_files/ElementDefinition.gperf"
    {"defaultValueUri", 0x130, 28, 16},
#line 182 "./gperf_class_files/ElementDefinition.gperf"
    {"patternDataRequirement", 0x180, 34, 42},
#line 79 "./gperf_class_files/ElementDefinition.gperf"
    {"defaultValueContributor", 0x130, 28, 41},
#line 187 "./gperf_class_files/ElementDefinition.gperf"
    {"patternUsageContext", 0x180, 34, 47},
#line 28 "./gperf_class_files/ElementDefinition.gperf"
    {"comment", 0xb8, 17, -1},
#line 152 "./gperf_class_files/ElementDefinition.gperf"
    {"patternPositiveInt", 0x180, 34, 12},
#line 19 "./gperf_class_files/ElementDefinition.gperf"
    {"sliceName", 0x58, 9, -1},
#line 163 "./gperf_class_files/ElementDefinition.gperf"
    {"patternCodeableConcept", 0x180, 34, 23},
#line 46 "./gperf_class_files/ElementDefinition.gperf"
    {"defaultValueInstant", 0x130, 28, 8},
#line 157 "./gperf_class_files/ElementDefinition.gperf"
    {"patternUrl", 0x180, 34, 17},
#line 30 "./gperf_class_files/ElementDefinition.gperf"
    {"alias_count", 0xd8, 19, -1},
#line 60 "./gperf_class_files/ElementDefinition.gperf"
    {"defaultValueAttachment", 0x130, 28, 22},
#line 53 "./gperf_class_files/ElementDefinition.gperf"
    {"defaultValueUnsignedInt", 0x130, 28, 15},
#line 159 "./gperf_class_files/ElementDefinition.gperf"
    {"patternAddress", 0x180, 34, 19},
#line 156 "./gperf_class_files/ElementDefinition.gperf"
    {"patternUri", 0x180, 34, 16},
#line 127 "./gperf_class_files/ElementDefinition.gperf"
    {"fixedSampledData", 0x168, 32, 37},
#line 73 "./gperf_class_files/ElementDefinition.gperf"
    {"defaultValueRatio", 0x130, 28, 35},
#line 110 "./gperf_class_files/ElementDefinition.gperf"
    {"fixedAge", 0x168, 32, 20},
#line 84 "./gperf_class_files/ElementDefinition.gperf"
    {"defaultValueTriggerDefinition", 0x130, 28, 46},
#line 101 "./gperf_class_files/ElementDefinition.gperf"
    {"fixedOid", 0x168, 32, 11},
#line 44 "./gperf_class_files/ElementDefinition.gperf"
    {"defaultValueDecimal", 0x130, 28, 6},
#line 74 "./gperf_class_files/ElementDefinition.gperf"
    {"defaultValueReference", 0x130, 28, 36},
#line 59 "./gperf_class_files/ElementDefinition.gperf"
    {"defaultValueAnnotation", 0x130, 28, 21},
#line 47 "./gperf_class_files/ElementDefinition.gperf"
    {"defaultValueInteger", 0x130, 28, 9},
#line 194 "./gperf_class_files/ElementDefinition.gperf"
    {"minValueInstant", 0x1a8, 38, 2},
#line 67 "./gperf_class_files/ElementDefinition.gperf"
    {"defaultValueHumanName", 0x130, 28, 29},
#line 83 "./gperf_class_files/ElementDefinition.gperf"
    {"defaultValueRelatedArtifact", 0x130, 28, 45},
#line 100 "./gperf_class_files/ElementDefinition.gperf"
    {"fixedMarkdown", 0x168, 32, 10},
#line 45 "./gperf_class_files/ElementDefinition.gperf"
    {"defaultValueId", 0x130, 28, 7},
#line 49 "./gperf_class_files/ElementDefinition.gperf"
    {"defaultValueOid", 0x130, 28, 11},
#line 87 "./gperf_class_files/ElementDefinition.gperf"
    {"defaultValueMeta", 0x130, 28, 49},
#line 175 "./gperf_class_files/ElementDefinition.gperf"
    {"patternRatio", 0x180, 34, 35},
#line 139 "./gperf_class_files/ElementDefinition.gperf"
    {"fixedMeta", 0x168, 32, 49},
#line 203 "./gperf_class_files/ElementDefinition.gperf"
    {"maxValueInstant", 0x1c0, 40, 2},
#line 104 "./gperf_class_files/ElementDefinition.gperf"
    {"fixedTime", 0x168, 32, 14},
#line 66 "./gperf_class_files/ElementDefinition.gperf"
    {"defaultValueDuration", 0x130, 28, 28},
#line 162 "./gperf_class_files/ElementDefinition.gperf"
    {"patternAttachment", 0x180, 34, 22},
#line 14 "./gperf_class_files/ElementDefinition.gperf"
    {"modifierExtension_count", 0x28, 4, -1},
#line 146 "./gperf_class_files/ElementDefinition.gperf"
    {"patternDecimal", 0x180, 34, 6},
#line 178 "./gperf_class_files/ElementDefinition.gperf"
    {"patternSignature", 0x180, 34, 38},
#line 185 "./gperf_class_files/ElementDefinition.gperf"
    {"patternRelatedArtifact", 0x180, 34, 45},
#line 220 "./gperf_class_files/ElementDefinition.gperf"
    {"mapping_count", 0x220, 51, -1},
#line 147 "./gperf_class_files/ElementDefinition.gperf"
    {"patternId", 0x180, 34, 7},
#line 151 "./gperf_class_files/ElementDefinition.gperf"
    {"patternOid", 0x180, 34, 11},
#line 189 "./gperf_class_files/ElementDefinition.gperf"
    {"patternMeta", 0x180, 34, 49},
#line 15 "./gperf_class_files/ElementDefinition.gperf"
    {"modifierExtension", 0x30, 5, -1},
#line 119 "./gperf_class_files/ElementDefinition.gperf"
    {"fixedHumanName", 0x168, 32, 29},
#line 167 "./gperf_class_files/ElementDefinition.gperf"
    {"patternDistance", 0x180, 34, 27},
#line 169 "./gperf_class_files/ElementDefinition.gperf"
    {"patternHumanName", 0x180, 34, 29},
#line 197 "./gperf_class_files/ElementDefinition.gperf"
    {"minValueInteger", 0x1a8, 38, 5},
#line 184 "./gperf_class_files/ElementDefinition.gperf"
    {"patternParameterDefinition", 0x180, 34, 44},
#line 165 "./gperf_class_files/ElementDefinition.gperf"
    {"patternContactPoint", 0x180, 34, 25},
#line 180 "./gperf_class_files/ElementDefinition.gperf"
    {"patternContactDetail", 0x180, 34, 40},
#line 142 "./gperf_class_files/ElementDefinition.gperf"
    {"patternCanonical", 0x180, 34, 2},
#line 24 "./gperf_class_files/ElementDefinition.gperf"
    {"slicing", 0x90, 14, -1},
#line 212 "./gperf_class_files/ElementDefinition.gperf"
    {"condition", 0x1e0, 43, -1},
#line 206 "./gperf_class_files/ElementDefinition.gperf"
    {"maxValueInteger", 0x1c0, 40, 5},
#line 219 "./gperf_class_files/ElementDefinition.gperf"
    {"binding", 0x218, 50, -1},
#line 77 "./gperf_class_files/ElementDefinition.gperf"
    {"defaultValueTiming", 0x130, 28, 39},
#line 141 "./gperf_class_files/ElementDefinition.gperf"
    {"patternBoolean", 0x180, 34, 1},
#line 214 "./gperf_class_files/ElementDefinition.gperf"
    {"constraint", 0x1f0, 45, -1},
#line 29 "./gperf_class_files/ElementDefinition.gperf"
    {"requirements", 0xc8, 18, -1},
#line 37 "./gperf_class_files/ElementDefinition.gperf"
    {"type", 0x120, 26, -1},
#line 216 "./gperf_class_files/ElementDefinition.gperf"
    {"isModifier", 0x1fc, 47, -1},
#line 217 "./gperf_class_files/ElementDefinition.gperf"
    {"isModifierReason", 0x200, 48, -1},
#line 221 "./gperf_class_files/ElementDefinition.gperf"
    {"mapping", 0x228, 52, -1},
#line 88 "./gperf_class_files/ElementDefinition.gperf"
    {"meaningWhenMissing", 0x140, 29, -1},
#line 92 "./gperf_class_files/ElementDefinition.gperf"
    {"fixedCanonical", 0x168, 32, 2},
#line 125 "./gperf_class_files/ElementDefinition.gperf"
    {"fixedRatio", 0x168, 32, 35},
#line 102 "./gperf_class_files/ElementDefinition.gperf"
    {"fixedPositiveInt", 0x168, 32, 12},
#line 191 "./gperf_class_files/ElementDefinition.gperf"
    {"example", 0x198, 36, -1},
#line 186 "./gperf_class_files/ElementDefinition.gperf"
    {"patternTriggerDefinition", 0x180, 34, 46},
#line 135 "./gperf_class_files/ElementDefinition.gperf"
    {"fixedRelatedArtifact", 0x168, 32, 45},
#line 215 "./gperf_class_files/ElementDefinition.gperf"
    {"mustSupport", 0x1f8, 46, -1},
#line 179 "./gperf_class_files/ElementDefinition.gperf"
    {"patternTiming", 0x180, 34, 39},
#line 148 "./gperf_class_files/ElementDefinition.gperf"
    {"patternInstant", 0x180, 34, 8},
#line 168 "./gperf_class_files/ElementDefinition.gperf"
    {"patternDuration", 0x180, 34, 28},
#line 129 "./gperf_class_files/ElementDefinition.gperf"
    {"fixedTiming", 0x168, 32, 39},
#line 96 "./gperf_class_files/ElementDefinition.gperf"
    {"fixedDecimal", 0x168, 32, 6},
#line 33 "./gperf_class_files/ElementDefinition.gperf"
    {"max", 0xf0, 22, -1},
#line 149 "./gperf_class_files/ElementDefinition.gperf"
    {"patternInteger", 0x180, 34, 9},
#line 112 "./gperf_class_files/ElementDefinition.gperf"
    {"fixedAttachment", 0x168, 32, 22},
#line 199 "./gperf_class_files/ElementDefinition.gperf"
    {"minValueUnsignedInt", 0x1a8, 38, 7},
#line 111 "./gperf_class_files/ElementDefinition.gperf"
    {"fixedAnnotation", 0x168, 32, 21},
#line 138 "./gperf_class_files/ElementDefinition.gperf"
    {"fixedDosage", 0x168, 32, 48},
#line 11 "./gperf_class_files/ElementDefinition.gperf"
    {"id", 0x8, 1, -1},
#line 62 "./gperf_class_files/ElementDefinition.gperf"
    {"defaultValueCoding", 0x130, 28, 24},
#line 116 "./gperf_class_files/ElementDefinition.gperf"
    {"fixedCount", 0x168, 32, 26},
#line 176 "./gperf_class_files/ElementDefinition.gperf"
    {"patternReference", 0x180, 34, 36},
#line 161 "./gperf_class_files/ElementDefinition.gperf"
    {"patternAnnotation", 0x180, 34, 21},
#line 155 "./gperf_class_files/ElementDefinition.gperf"
    {"patternUnsignedInt", 0x180, 34, 15},
#line 208 "./gperf_class_files/ElementDefinition.gperf"
    {"maxValueUnsignedInt", 0x1c0, 40, 7},
#line 132 "./gperf_class_files/ElementDefinition.gperf"
    {"fixedDataRequirement", 0x168, 32, 42},
#line 103 "./gperf_class_files/ElementDefinition.gperf"
    {"fixedString", 0x168, 32, 13},
#line 170 "./gperf_class_files/ElementDefinition.gperf"
    {"patternIdentifier", 0x180, 34, 30},
#line 70 "./gperf_class_files/ElementDefinition.gperf"
    {"defaultValuePeriod", 0x130, 28, 32},
#line 38 "./gperf_class_files/ElementDefinition.gperf"
    {"defaultValueBase64Binary", 0x130, 28, 0},
#line 17 "./gperf_class_files/ElementDefinition.gperf"
    {"representation_count", 0x48, 7, -1},
#line 56 "./gperf_class_files/ElementDefinition.gperf"
    {"defaultValueUuid", 0x130, 28, 18},
#line 81 "./gperf_class_files/ElementDefinition.gperf"
    {"defaultValueExpression", 0x130, 28, 43},
#line 118 "./gperf_class_files/ElementDefinition.gperf"
    {"fixedDuration", 0x168, 32, 28},
#line 93 "./gperf_class_files/ElementDefinition.gperf"
    {"fixedCode", 0x168, 32, 3},
#line 25 "./gperf_class_files/ElementDefinition.gperf"
    {"short", 0x98, 15, -1},
#line 26 "./gperf_class_files/ElementDefinition.gperf"
    {"short_", 0x98, 15, -1},
#line 109 "./gperf_class_files/ElementDefinition.gperf"
    {"fixedAddress", 0x168, 32, 19},
#line 164 "./gperf_class_files/ElementDefinition.gperf"
    {"patternCoding", 0x180, 34, 24},
#line 18 "./gperf_class_files/ElementDefinition.gperf"
    {"representation", 0x50, 8, -1},
#line 211 "./gperf_class_files/ElementDefinition.gperf"
    {"condition_count", 0x1d8, 42, -1},
#line 128 "./gperf_class_files/ElementDefinition.gperf"
    {"fixedSignature", 0x168, 32, 38},
#line 69 "./gperf_class_files/ElementDefinition.gperf"
    {"defaultValueMoney", 0x130, 28, 31},
#line 172 "./gperf_class_files/ElementDefinition.gperf"
    {"patternPeriod", 0x180, 34, 32},
#line 16 "./gperf_class_files/ElementDefinition.gperf"
    {"path", 0x38, 6, -1},
#line 158 "./gperf_class_files/ElementDefinition.gperf"
    {"patternUuid", 0x180, 34, 18},
#line 183 "./gperf_class_files/ElementDefinition.gperf"
    {"patternExpression", 0x180, 34, 43},
#line 51 "./gperf_class_files/ElementDefinition.gperf"
    {"defaultValueString", 0x130, 28, 13},
#line 134 "./gperf_class_files/ElementDefinition.gperf"
    {"fixedParameterDefinition", 0x168, 32, 44},
#line 58 "./gperf_class_files/ElementDefinition.gperf"
    {"defaultValueAge", 0x130, 28, 20},
#line 218 "./gperf_class_files/ElementDefinition.gperf"
    {"isSummary", 0x210, 49, -1},
#line 122 "./gperf_class_files/ElementDefinition.gperf"
    {"fixedPeriod", 0x168, 32, 32},
#line 115 "./gperf_class_files/ElementDefinition.gperf"
    {"fixedContactPoint", 0x168, 32, 25},
#line 150 "./gperf_class_files/ElementDefinition.gperf"
    {"patternMarkdown", 0x180, 34, 10},
#line 171 "./gperf_class_files/ElementDefinition.gperf"
    {"patternMoney", 0x180, 34, 31},
#line 181 "./gperf_class_files/ElementDefinition.gperf"
    {"patternContributor", 0x180, 34, 41},
#line 35 "./gperf_class_files/ElementDefinition.gperf"
    {"contentReference", 0x108, 24, -1},
#line 192 "./gperf_class_files/ElementDefinition.gperf"
    {"minValueDate", 0x1a8, 38, 0},
#line 153 "./gperf_class_files/ElementDefinition.gperf"
    {"patternString", 0x180, 34, 13},
#line 210 "./gperf_class_files/ElementDefinition.gperf"
    {"maxLength", 0x1d0, 41, -1},
#line 160 "./gperf_class_files/ElementDefinition.gperf"
    {"patternAge", 0x180, 34, 20},
#line 193 "./gperf_class_files/ElementDefinition.gperf"
    {"minValueDateTime", 0x1a8, 38, 1},
#line 117 "./gperf_class_files/ElementDefinition.gperf"
    {"fixedDistance", 0x168, 32, 27},
#line 213 "./gperf_class_files/ElementDefinition.gperf"
    {"constraint_count", 0x1e8, 44, -1},
#line 201 "./gperf_class_files/ElementDefinition.gperf"
    {"maxValueDate", 0x1c0, 40, 0},
#line 107 "./gperf_class_files/ElementDefinition.gperf"
    {"fixedUrl", 0x168, 32, 17},
#line 196 "./gperf_class_files/ElementDefinition.gperf"
    {"minValueDecimal", 0x1a8, 38, 4},
#line 202 "./gperf_class_files/ElementDefinition.gperf"
    {"maxValueDateTime", 0x1c0, 40, 1},
#line 195 "./gperf_class_files/ElementDefinition.gperf"
    {"minValueTime", 0x1a8, 38, 3},
#line 106 "./gperf_class_files/ElementDefinition.gperf"
    {"fixedUri", 0x168, 32, 16},
#line 94 "./gperf_class_files/ElementDefinition.gperf"
    {"fixedDate", 0x168, 32, 4},
#line 114 "./gperf_class_files/ElementDefinition.gperf"
    {"fixedCoding", 0x168, 32, 24},
#line 95 "./gperf_class_files/ElementDefinition.gperf"
    {"fixedDateTime", 0x168, 32, 5},
#line 205 "./gperf_class_files/ElementDefinition.gperf"
    {"maxValueDecimal", 0x1c0, 40, 4},
#line 204 "./gperf_class_files/ElementDefinition.gperf"
    {"maxValueTime", 0x1c0, 40, 3},
#line 123 "./gperf_class_files/ElementDefinition.gperf"
    {"fixedQuantity", 0x168, 32, 33},
#line 126 "./gperf_class_files/ElementDefinition.gperf"
    {"fixedReference", 0x168, 32, 36},
#line 200 "./gperf_class_files/ElementDefinition.gperf"
    {"minValueQuantity", 0x1a8, 38, 8},
#line 10 "./gperf_class_files/ElementDefinition.gperf"
    {"resourceType", 0x0, 0, -1},
#line 190 "./gperf_class_files/ElementDefinition.gperf"
    {"example_count", 0x190, 35, -1},
#line 71 "./gperf_class_files/ElementDefinition.gperf"
    {"defaultValueQuantity", 0x130, 28, 33},
#line 98 "./gperf_class_files/ElementDefinition.gperf"
    {"fixedInstant", 0x168, 32, 8},
#line 22 "./gperf_class_files/ElementDefinition.gperf"
    {"code_count", 0x80, 12, -1},
#line 209 "./gperf_class_files/ElementDefinition.gperf"
    {"maxValueQuantity", 0x1c0, 40, 8},
#line 130 "./gperf_class_files/ElementDefinition.gperf"
    {"fixedContactDetail", 0x168, 32, 40},
#line 131 "./gperf_class_files/ElementDefinition.gperf"
    {"fixedContributor", 0x168, 32, 41},
#line 105 "./gperf_class_files/ElementDefinition.gperf"
    {"fixedUnsignedInt", 0x168, 32, 15},
#line 97 "./gperf_class_files/ElementDefinition.gperf"
    {"fixedId", 0x168, 32, 7},
#line 13 "./gperf_class_files/ElementDefinition.gperf"
    {"extension", 0x20, 3, -1},
#line 124 "./gperf_class_files/ElementDefinition.gperf"
    {"fixedRange", 0x168, 32, 34},
#line 99 "./gperf_class_files/ElementDefinition.gperf"
    {"fixedInteger", 0x168, 32, 9},
#line 89 "./gperf_class_files/ElementDefinition.gperf"
    {"orderMeaning", 0x150, 30, -1},
#line 90 "./gperf_class_files/ElementDefinition.gperf"
    {"fixedBase64Binary", 0x168, 32, 0},
#line 140 "./gperf_class_files/ElementDefinition.gperf"
    {"patternBase64Binary", 0x180, 34, 0},
#line 121 "./gperf_class_files/ElementDefinition.gperf"
    {"fixedMoney", 0x168, 32, 31},
#line 133 "./gperf_class_files/ElementDefinition.gperf"
    {"fixedExpression", 0x168, 32, 43},
#line 108 "./gperf_class_files/ElementDefinition.gperf"
    {"fixedUuid", 0x168, 32, 18},
#line 136 "./gperf_class_files/ElementDefinition.gperf"
    {"fixedTriggerDefinition", 0x168, 32, 46},
#line 173 "./gperf_class_files/ElementDefinition.gperf"
    {"patternQuantity", 0x180, 34, 33},
#line 12 "./gperf_class_files/ElementDefinition.gperf"
    {"extension_count", 0x18, 2, -1},
#line 36 "./gperf_class_files/ElementDefinition.gperf"
    {"type_count", 0x118, 25, -1},
#line 120 "./gperf_class_files/ElementDefinition.gperf"
    {"fixedIdentifier", 0x168, 32, 30},
#line 113 "./gperf_class_files/ElementDefinition.gperf"
    {"fixedCodeableConcept", 0x168, 32, 23},
#line 20 "./gperf_class_files/ElementDefinition.gperf"
    {"sliceIsConstraining", 0x68, 10, -1},
#line 137 "./gperf_class_files/ElementDefinition.gperf"
    {"fixedUsageContext", 0x168, 32, 47}
  };

static const short lookup[] =
  {
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,   0,
      1,  -1,  -1,   2,  -1,  -1,   3,  -1,  -1,  -1,
      4,   5,  -1,  -1,   6,  -1,   7,   8,  -1,  -1,
      9,  10,  11,  -1,  -1,  -1,  12,  13,  -1,  14,
     -1,  -1,  15,  -1,  -1,  16,  17,  18,  19,  20,
     21,  22,  23,  24,  -1,  25,  26,  -1,  27,  28,
     29,  -1,  30,  -1,  31,  32,  -1,  -1,  33,  34,
     35,  36,  37,  38,  39,  40,  -1,  41,  42,  43,
     -1,  -1,  44,  45,  46,  -1,  -1,  47,  -1,  48,
     49,  50,  51,  52,  53,  54,  55,  56,  57,  58,
     -1,  -1,  -1,  59,  60,  -1,  61,  62,  -1,  63,
     64,  65,  66,  67,  68,  69,  70,  71,  -1,  72,
     73,  -1,  -1,  -1,  74,  75,  -1,  76,  77,  78,
     -1,  79,  80,  81,  82,  83,  84,  85,  -1,  86,
     87,  88,  -1,  -1,  -1,  89,  90,  -1,  -1,  91,
     92,  93,  94,  -1,  95,  96,  -1,  97,  98,  99,
    100,  -1, 101,  -1, 102, 103, 104, 105, 106, 107,
    108, 109, 110,  -1, 111, 112, 113,  -1, 114, 115,
    116, 117, 118, 119, 120, 121,  -1,  -1,  -1, 122,
    123, 124, 125, 126,  -1, 127, 128, 129, 130, 131,
    132, 133, 134, 135, 136, 137, 138, 139, 140, 141,
    142, 143, 144, 145, 146, 147,  -1,  -1,  -1, 148,
     -1,  -1, 149, 150, 151,  -1, 152, 153, 154, 155,
    156,  -1,  -1,  -1, 157,  -1, 158, 159,  -1,  -1,
    160,  -1, 161, 162,  -1,  -1, 163, 164, 165, 166,
    167, 168,  -1, 169,  -1,  -1, 170, 171, 172,  -1,
    173, 174, 175, 176, 177,  -1, 178,  -1, 179,  -1,
    180,  -1, 181, 182, 183,  -1, 184, 185, 186,  -1,
    187,  -1, 188,  -1,  -1, 189, 190,  -1, 191,  -1,
     -1, 192,  -1,  -1,  -1,  -1, 193,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1, 194,  -1,  -1,
     -1,  -1,  -1,  -1, 195, 196,  -1, 197,  -1,  -1,
     -1,  -1, 198,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1, 199,  -1, 200,  -1,  -1,  -1,  -1,  -1,
    201,  -1,  -1,  -1,  -1, 202,  -1,  -1,  -1, 203,
     -1,  -1,  -1,  -1,  -1,  -1,  -1, 204,  -1,  -1,
    205,  -1,  -1,  -1,  -1, 206,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1, 207,  -1,  -1,  -1,  -1,
    208,  -1,  -1,  -1,  -1, 209,  -1,  -1,  -1, 210,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1, 211
  };

const struct fhir_deserialize::MemberNameAndOffset *
ElementDefinition_Gperf::ElementDefinition_MemberLookup (register const char *str, register unsigned int len)
{
  if (len <= MAX_WORD_LENGTH && len >= MIN_WORD_LENGTH)
    {
      register int key = hash (str, len);

      if (key <= MAX_HASH_VALUE && key >= 0)
        {
          register int index = lookup[key];

          if (index >= 0)
            {
              register const char *s = word_array_ElementDefinition[index].name;

              if (*str == *s && !strncmp (str + 1, s + 1, len - 1) && s[len] == '\0')
                return &word_array_ElementDefinition[index];
            }
        }
    }
  return 0;
}