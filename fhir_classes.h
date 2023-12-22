#include <string>
#include <vector>
#include <optional>
#include <memory>
#include <variant>

typedef std::string fhir_base64Binary;
typedef std::string fhir_boolean;
typedef std::string fhir_canonical;
typedef std::string fhir_code;
typedef std::string fhir_date;
typedef std::string fhir_dateTime;
typedef std::string fhir_decimal;
typedef std::string fhir_id;
typedef std::string fhir_instant;
typedef std::string fhir_integer;
typedef std::string fhir_markdown;
typedef std::string fhir_oid;
typedef std::string fhir_positiveInt;
typedef std::string fhir_string;
typedef std::string fhir_time;
typedef std::string fhir_unsignedInt;
typedef std::string fhir_uri;
typedef std::string fhir_url;
typedef std::string fhir_uuid;

class Account;
class Account_Coverage;
class Account_Guarantor;
class ActivityDefinition;
class ActivityDefinition_DynamicValue;
class ActivityDefinition_Participant;
class Address;
class AdverseEvent;
class AdverseEvent_SuspectEntity;
class AdverseEvent_SuspectEntity_Causality;
class Age;
class AllergyIntolerance;
class AllergyIntolerance_Reaction;
class Annotation;
class Appointment;
class Appointment_Participant;
class AppointmentResponse;
class Attachment;
class AuditEvent;
class AuditEvent_Agent;
class AuditEvent_Agent_Network;
class AuditEvent_Entity;
class AuditEvent_Entity_Detail;
class AuditEvent_Source;
class BackboneElement;
class Basic;
class Binary;
class BiologicallyDerivedProduct;
class BiologicallyDerivedProduct_Collection;
class BiologicallyDerivedProduct_Manipulation;
class BiologicallyDerivedProduct_Processing;
class BiologicallyDerivedProduct_Storage;
class BodyStructure;
class Bundle;
class Bundle_Entry;
class Bundle_Entry_Request;
class Bundle_Entry_Response;
class Bundle_Entry_Search;
class Bundle_Link;
class CapabilityStatement;
class CapabilityStatement_Document;
class CapabilityStatement_Implementation;
class CapabilityStatement_Messaging;
class CapabilityStatement_Messaging_Endpoint;
class CapabilityStatement_Messaging_SupportedMessage;
class CapabilityStatement_Rest;
class CapabilityStatement_Rest_Interaction;
class CapabilityStatement_Rest_Resource;
class CapabilityStatement_Rest_Resource_Interaction;
class CapabilityStatement_Rest_Resource_Operation;
class CapabilityStatement_Rest_Resource_SearchParam;
class CapabilityStatement_Rest_Security;
class CapabilityStatement_Software;
class CarePlan;
class CarePlan_Activity;
class CarePlan_Activity_Detail;
class CareTeam;
class CareTeam_Participant;
class CatalogEntry;
class CatalogEntry_RelatedEntry;
class ChargeItem;
class ChargeItem_Performer;
class ChargeItemDefinition;
class ChargeItemDefinition_Applicability;
class ChargeItemDefinition_PropertyGroup;
class ChargeItemDefinition_PropertyGroup_PriceComponent;
class Claim;
class Claim_Accident;
class Claim_CareTeam;
class Claim_Diagnosis;
class Claim_Insurance;
class Claim_Item;
class Claim_Item_Detail;
class Claim_Item_Detail_SubDetail;
class Claim_Payee;
class Claim_Procedure;
class Claim_Related;
class Claim_SupportingInfo;
class ClaimResponse;
class ClaimResponse_AddItem;
class ClaimResponse_AddItem_Detail;
class ClaimResponse_AddItem_Detail_SubDetail;
class ClaimResponse_Error;
class ClaimResponse_Insurance;
class ClaimResponse_Item;
class ClaimResponse_Item_Adjudication;
class ClaimResponse_Item_Detail;
class ClaimResponse_Item_Detail_SubDetail;
class ClaimResponse_Payment;
class ClaimResponse_ProcessNote;
class ClaimResponse_Total;
class ClinicalImpression;
class ClinicalImpression_Finding;
class ClinicalImpression_Investigation;
class CodeSystem;
class CodeSystem_Concept;
class CodeSystem_Concept_Designation;
class CodeSystem_Concept_Property;
class CodeSystem_Filter;
class CodeSystem_Property;
class CodeableConcept;
class Coding;
class Communication;
class Communication_Payload;
class CommunicationRequest;
class CommunicationRequest_Payload;
class CompartmentDefinition;
class CompartmentDefinition_Resource;
class Composition;
class Composition_Attester;
class Composition_Event;
class Composition_RelatesTo;
class Composition_Section;
class ConceptMap;
class ConceptMap_Group;
class ConceptMap_Group_Element;
class ConceptMap_Group_Element_Target;
class ConceptMap_Group_Element_Target_DependsOn;
class ConceptMap_Group_Unmapped;
class Condition;
class Condition_Evidence;
class Condition_Stage;
class Consent;
class Consent_Policy;
class Consent_Provision;
class Consent_Provision_Actor;
class Consent_Provision_Data;
class Consent_Verification;
class ContactDetail;
class ContactPoint;
class Contract;
class Contract_ContentDefinition;
class Contract_Friendly;
class Contract_Legal;
class Contract_Rule;
class Contract_Signer;
class Contract_Term;
class Contract_Term_Action;
class Contract_Term_Action_Subject;
class Contract_Term_Asset;
class Contract_Term_Asset_Context;
class Contract_Term_Asset_ValuedItem;
class Contract_Term_Offer;
class Contract_Term_Offer_Answer;
class Contract_Term_Offer_Party;
class Contract_Term_SecurityLabel;
class Contributor;
class Count;
class Coverage;
class Coverage_Class;
class Coverage_CostToBeneficiary;
class Coverage_CostToBeneficiary_Exception;
class CoverageEligibilityRequest;
class CoverageEligibilityRequest_Insurance;
class CoverageEligibilityRequest_Item;
class CoverageEligibilityRequest_Item_Diagnosis;
class CoverageEligibilityRequest_SupportingInfo;
class CoverageEligibilityResponse;
class CoverageEligibilityResponse_Error;
class CoverageEligibilityResponse_Insurance;
class CoverageEligibilityResponse_Insurance_Item;
class CoverageEligibilityResponse_Insurance_Item_Benefit;
class DataRequirement;
class DataRequirement_CodeFilter;
class DataRequirement_DateFilter;
class DataRequirement_Sort;
class DetectedIssue;
class DetectedIssue_Evidence;
class DetectedIssue_Mitigation;
class Device;
class Device_DeviceName;
class Device_Property;
class Device_Specialization;
class Device_UdiCarrier;
class Device_Version;
class DeviceDefinition;
class DeviceDefinition_Capability;
class DeviceDefinition_DeviceName;
class DeviceDefinition_Material;
class DeviceDefinition_Property;
class DeviceDefinition_Specialization;
class DeviceDefinition_UdiDeviceIdentifier;
class DeviceMetric;
class DeviceMetric_Calibration;
class DeviceRequest;
class DeviceRequest_Parameter;
class DeviceUseStatement;
class DiagnosticReport;
class DiagnosticReport_Media;
class Distance;
class DocumentManifest;
class DocumentManifest_Related;
class DocumentReference;
class DocumentReference_Content;
class DocumentReference_Context;
class DocumentReference_RelatesTo;
class DomainResource;
class Dosage;
class Dosage_DoseAndRate;
class Duration;
class EffectEvidenceSynthesis;
class EffectEvidenceSynthesis_Certainty;
class EffectEvidenceSynthesis_Certainty_CertaintySubcomponent;
class EffectEvidenceSynthesis_EffectEstimate;
class EffectEvidenceSynthesis_EffectEstimate_PrecisionEstimate;
class EffectEvidenceSynthesis_ResultsByExposure;
class EffectEvidenceSynthesis_SampleSize;
class Element;
class ElementDefinition;
class ElementDefinition_Base;
class ElementDefinition_Binding;
class ElementDefinition_Constraint;
class ElementDefinition_Example;
class ElementDefinition_Mapping;
class ElementDefinition_Slicing;
class ElementDefinition_Slicing_Discriminator;
class ElementDefinition_Type;
class Encounter;
class Encounter_ClassHistory;
class Encounter_Diagnosis;
class Encounter_Hospitalization;
class Encounter_Location;
class Encounter_Participant;
class Encounter_StatusHistory;
class Endpoint;
class EnrollmentRequest;
class EnrollmentResponse;
class EpisodeOfCare;
class EpisodeOfCare_Diagnosis;
class EpisodeOfCare_StatusHistory;
class EventDefinition;
class Evidence;
class EvidenceVariable;
class EvidenceVariable_Characteristic;
class ExampleScenario;
class ExampleScenario_Actor;
class ExampleScenario_Instance;
class ExampleScenario_Instance_ContainedInstance;
class ExampleScenario_Instance_Version;
class ExampleScenario_Process;
class ExampleScenario_Process_Step;
class ExampleScenario_Process_Step_Alternative;
class ExampleScenario_Process_Step_Operation;
class ExplanationOfBenefit;
class ExplanationOfBenefit_Accident;
class ExplanationOfBenefit_AddItem;
class ExplanationOfBenefit_AddItem_Detail;
class ExplanationOfBenefit_AddItem_Detail_SubDetail;
class ExplanationOfBenefit_BenefitBalance;
class ExplanationOfBenefit_BenefitBalance_Financial;
class ExplanationOfBenefit_CareTeam;
class ExplanationOfBenefit_Diagnosis;
class ExplanationOfBenefit_Insurance;
class ExplanationOfBenefit_Item;
class ExplanationOfBenefit_Item_Adjudication;
class ExplanationOfBenefit_Item_Detail;
class ExplanationOfBenefit_Item_Detail_SubDetail;
class ExplanationOfBenefit_Payee;
class ExplanationOfBenefit_Payment;
class ExplanationOfBenefit_Procedure;
class ExplanationOfBenefit_ProcessNote;
class ExplanationOfBenefit_Related;
class ExplanationOfBenefit_SupportingInfo;
class ExplanationOfBenefit_Total;
class Expression;
class Extension;
class FamilyMemberHistory;
class FamilyMemberHistory_Condition;
class Flag;
class Goal;
class Goal_Target;
class GraphDefinition;
class GraphDefinition_Link;
class GraphDefinition_Link_Target;
class GraphDefinition_Link_Target_Compartment;
class Group;
class Group_Characteristic;
class Group_Member;
class GuidanceResponse;
class HealthcareService;
class HealthcareService_AvailableTime;
class HealthcareService_Eligibility;
class HealthcareService_NotAvailable;
class HumanName;
class Identifier;
class ImagingStudy;
class ImagingStudy_Series;
class ImagingStudy_Series_Instance;
class ImagingStudy_Series_Performer;
class Immunization;
class Immunization_Education;
class Immunization_Performer;
class Immunization_ProtocolApplied;
class Immunization_Reaction;
class ImmunizationEvaluation;
class ImmunizationRecommendation;
class ImmunizationRecommendation_Recommendation;
class ImmunizationRecommendation_Recommendation_DateCriterion;
class ImplementationGuide;
class ImplementationGuide_Definition;
class ImplementationGuide_Definition_Grouping;
class ImplementationGuide_Definition_Page;
class ImplementationGuide_Definition_Parameter;
class ImplementationGuide_Definition_Resource;
class ImplementationGuide_Definition_Template;
class ImplementationGuide_DependsOn;
class ImplementationGuide_Global;
class ImplementationGuide_Manifest;
class ImplementationGuide_Manifest_Page;
class ImplementationGuide_Manifest_Resource;
class InsurancePlan;
class InsurancePlan_Contact;
class InsurancePlan_Coverage;
class InsurancePlan_Coverage_Benefit;
class InsurancePlan_Coverage_Benefit_Limit;
class InsurancePlan_Plan;
class InsurancePlan_Plan_GeneralCost;
class InsurancePlan_Plan_SpecificCost;
class InsurancePlan_Plan_SpecificCost_Benefit;
class InsurancePlan_Plan_SpecificCost_Benefit_Cost;
class Invoice;
class Invoice_LineItem;
class Invoice_LineItem_PriceComponent;
class Invoice_Participant;
class Library;
class Linkage;
class Linkage_Item;
class List;
class List_Entry;
class Location;
class Location_HoursOfOperation;
class Location_Position;
class MarketingStatus;
class Measure;
class Measure_Group;
class Measure_Group_Population;
class Measure_Group_Stratifier;
class Measure_Group_Stratifier_Component;
class Measure_SupplementalData;
class MeasureReport;
class MeasureReport_Group;
class MeasureReport_Group_Population;
class MeasureReport_Group_Stratifier;
class MeasureReport_Group_Stratifier_Stratum;
class MeasureReport_Group_Stratifier_Stratum_Component;
class MeasureReport_Group_Stratifier_Stratum_Population;
class Media;
class Medication;
class Medication_Batch;
class Medication_Ingredient;
class MedicationAdministration;
class MedicationAdministration_Dosage;
class MedicationAdministration_Performer;
class MedicationDispense;
class MedicationDispense_Performer;
class MedicationDispense_Substitution;
class MedicationKnowledge;
class MedicationKnowledge_AdministrationGuidelines;
class MedicationKnowledge_AdministrationGuidelines_Dosage;
class MedicationKnowledge_AdministrationGuidelines_PatientCharacteristics;
class MedicationKnowledge_Cost;
class MedicationKnowledge_DrugCharacteristic;
class MedicationKnowledge_Ingredient;
class MedicationKnowledge_Kinetics;
class MedicationKnowledge_MedicineClassification;
class MedicationKnowledge_MonitoringProgram;
class MedicationKnowledge_Monograph;
class MedicationKnowledge_Packaging;
class MedicationKnowledge_Regulatory;
class MedicationKnowledge_Regulatory_MaxDispense;
class MedicationKnowledge_Regulatory_Schedule;
class MedicationKnowledge_Regulatory_Substitution;
class MedicationKnowledge_RelatedMedicationKnowledge;
class MedicationRequest;
class MedicationRequest_DispenseRequest;
class MedicationRequest_DispenseRequest_InitialFill;
class MedicationRequest_Substitution;
class MedicationStatement;
class MedicinalProduct;
class MedicinalProduct_ManufacturingBusinessOperation;
class MedicinalProduct_Name;
class MedicinalProduct_Name_CountryLanguage;
class MedicinalProduct_Name_NamePart;
class MedicinalProduct_SpecialDesignation;
class MedicinalProductAuthorization;
class MedicinalProductAuthorization_JurisdictionalAuthorization;
class MedicinalProductAuthorization_Procedure;
class MedicinalProductContraindication;
class MedicinalProductContraindication_OtherTherapy;
class MedicinalProductIndication;
class MedicinalProductIndication_OtherTherapy;
class MedicinalProductIngredient;
class MedicinalProductIngredient_SpecifiedSubstance;
class MedicinalProductIngredient_SpecifiedSubstance_Strength;
class MedicinalProductIngredient_SpecifiedSubstance_Strength_ReferenceStrength;
class MedicinalProductIngredient_Substance;
class MedicinalProductInteraction;
class MedicinalProductInteraction_Interactant;
class MedicinalProductManufactured;
class MedicinalProductPackaged;
class MedicinalProductPackaged_BatchIdentifier;
class MedicinalProductPackaged_PackageItem;
class MedicinalProductPharmaceutical;
class MedicinalProductPharmaceutical_Characteristics;
class MedicinalProductPharmaceutical_RouteOfAdministration;
class MedicinalProductPharmaceutical_RouteOfAdministration_TargetSpecies;
class MedicinalProductPharmaceutical_RouteOfAdministration_TargetSpecies_WithdrawalPeriod;
class MedicinalProductUndesirableEffect;
class MessageDefinition;
class MessageDefinition_AllowedResponse;
class MessageDefinition_Focus;
class MessageHeader;
class MessageHeader_Destination;
class MessageHeader_Response;
class MessageHeader_Source;
class Meta;
class MetadataResource;
class MolecularSequence;
class MolecularSequence_Quality;
class MolecularSequence_Quality_Roc;
class MolecularSequence_ReferenceSeq;
class MolecularSequence_Repository;
class MolecularSequence_StructureVariant;
class MolecularSequence_StructureVariant_Inner;
class MolecularSequence_StructureVariant_Outer;
class MolecularSequence_Variant;
class Money;
class NamingSystem;
class NamingSystem_UniqueId;
class Narrative;
class NutritionOrder;
class NutritionOrder_EnteralFormula;
class NutritionOrder_EnteralFormula_Administration;
class NutritionOrder_OralDiet;
class NutritionOrder_OralDiet_Nutrient;
class NutritionOrder_OralDiet_Texture;
class NutritionOrder_Supplement;
class Observation;
class Observation_Component;
class Observation_ReferenceRange;
class ObservationDefinition;
class ObservationDefinition_QualifiedInterval;
class ObservationDefinition_QuantitativeDetails;
class OperationDefinition;
class OperationDefinition_Overload;
class OperationDefinition_Parameter;
class OperationDefinition_Parameter_Binding;
class OperationDefinition_Parameter_ReferencedFrom;
class OperationOutcome;
class OperationOutcome_Issue;
class Organization;
class Organization_Contact;
class OrganizationAffiliation;
class ParameterDefinition;
class Parameters;
class Parameters_Parameter;
class Patient;
class Patient_Communication;
class Patient_Contact;
class Patient_Link;
class PaymentNotice;
class PaymentReconciliation;
class PaymentReconciliation_Detail;
class PaymentReconciliation_ProcessNote;
class Period;
class Person;
class Person_Link;
class PlanDefinition;
class PlanDefinition_Action;
class PlanDefinition_Action_Condition;
class PlanDefinition_Action_DynamicValue;
class PlanDefinition_Action_Participant;
class PlanDefinition_Action_RelatedAction;
class PlanDefinition_Goal;
class PlanDefinition_Goal_Target;
class Population;
class Practitioner;
class Practitioner_Qualification;
class PractitionerRole;
class PractitionerRole_AvailableTime;
class PractitionerRole_NotAvailable;
class Procedure;
class Procedure_FocalDevice;
class Procedure_Performer;
class ProdCharacteristic;
class ProductShelfLife;
class Provenance;
class Provenance_Agent;
class Provenance_Entity;
class Quantity;
class Questionnaire;
class Questionnaire_Item;
class Questionnaire_Item_AnswerOption;
class Questionnaire_Item_EnableWhen;
class Questionnaire_Item_Initial;
class QuestionnaireResponse;
class QuestionnaireResponse_Item;
class QuestionnaireResponse_Item_Answer;
class Range;
class Ratio;
class Reference;
class RelatedArtifact;
class RelatedPerson;
class RelatedPerson_Communication;
class RequestGroup;
class RequestGroup_Action;
class RequestGroup_Action_Condition;
class RequestGroup_Action_RelatedAction;
class ResearchDefinition;
class ResearchElementDefinition;
class ResearchElementDefinition_Characteristic;
class ResearchStudy;
class ResearchStudy_Arm;
class ResearchStudy_Objective;
class ResearchSubject;
class Resource;
class RiskAssessment;
class RiskAssessment_Prediction;
class RiskEvidenceSynthesis;
class RiskEvidenceSynthesis_Certainty;
class RiskEvidenceSynthesis_Certainty_CertaintySubcomponent;
class RiskEvidenceSynthesis_RiskEstimate;
class RiskEvidenceSynthesis_RiskEstimate_PrecisionEstimate;
class RiskEvidenceSynthesis_SampleSize;
class SampledData;
class Schedule;
class SearchParameter;
class SearchParameter_Component;
class ServiceRequest;
class Signature;
class Slot;
class Specimen;
class Specimen_Collection;
class Specimen_Container;
class Specimen_Processing;
class SpecimenDefinition;
class SpecimenDefinition_TypeTested;
class SpecimenDefinition_TypeTested_Container;
class SpecimenDefinition_TypeTested_Container_Additive;
class SpecimenDefinition_TypeTested_Handling;
class StructureDefinition;
class StructureDefinition_Context;
class StructureDefinition_Differential;
class StructureDefinition_Mapping;
class StructureDefinition_Snapshot;
class StructureMap;
class StructureMap_Group;
class StructureMap_Group_Input;
class StructureMap_Group_Rule;
class StructureMap_Group_Rule_Dependent;
class StructureMap_Group_Rule_Source;
class StructureMap_Group_Rule_Target;
class StructureMap_Group_Rule_Target_Parameter;
class StructureMap_Structure;
class Subscription;
class Subscription_Channel;
class Substance;
class Substance_Ingredient;
class Substance_Instance;
class SubstanceAmount;
class SubstanceAmount_ReferenceRange;
class SubstanceNucleicAcid;
class SubstanceNucleicAcid_Subunit;
class SubstanceNucleicAcid_Subunit_Linkage;
class SubstanceNucleicAcid_Subunit_Sugar;
class SubstancePolymer;
class SubstancePolymer_MonomerSet;
class SubstancePolymer_MonomerSet_StartingMaterial;
class SubstancePolymer_Repeat;
class SubstancePolymer_Repeat_RepeatUnit;
class SubstancePolymer_Repeat_RepeatUnit_DegreeOfPolymerisation;
class SubstancePolymer_Repeat_RepeatUnit_StructuralRepresentation;
class SubstanceProtein;
class SubstanceProtein_Subunit;
class SubstanceReferenceInformation;
class SubstanceReferenceInformation_Classification;
class SubstanceReferenceInformation_Gene;
class SubstanceReferenceInformation_GeneElement;
class SubstanceReferenceInformation_Target;
class SubstanceSourceMaterial;
class SubstanceSourceMaterial_FractionDescription;
class SubstanceSourceMaterial_Organism;
class SubstanceSourceMaterial_Organism_Author;
class SubstanceSourceMaterial_Organism_Hybrid;
class SubstanceSourceMaterial_Organism_OrganismGeneral;
class SubstanceSourceMaterial_PartDescription;
class SubstanceSpecification;
class SubstanceSpecification_Code;
class SubstanceSpecification_Moiety;
class SubstanceSpecification_Name;
class SubstanceSpecification_Name_Official;
class SubstanceSpecification_Property;
class SubstanceSpecification_Relationship;
class SubstanceSpecification_Structure;
class SubstanceSpecification_Structure_Isotope;
class SubstanceSpecification_Structure_Isotope_MolecularWeight;
class SubstanceSpecification_Structure_Representation;
class SupplyDelivery;
class SupplyDelivery_SuppliedItem;
class SupplyRequest;
class SupplyRequest_Parameter;
class Task;
class Task_Input;
class Task_Output;
class Task_Restriction;
class TerminologyCapabilities;
class TerminologyCapabilities_Closure;
class TerminologyCapabilities_CodeSystem;
class TerminologyCapabilities_CodeSystem_Version;
class TerminologyCapabilities_CodeSystem_Version_Filter;
class TerminologyCapabilities_Expansion;
class TerminologyCapabilities_Expansion_Parameter;
class TerminologyCapabilities_Implementation;
class TerminologyCapabilities_Software;
class TerminologyCapabilities_Translation;
class TerminologyCapabilities_ValidateCode;
class TestReport;
class TestReport_Participant;
class TestReport_Setup;
class TestReport_Setup_Action;
class TestReport_Setup_Action_Assert;
class TestReport_Setup_Action_Operation;
class TestReport_Teardown;
class TestReport_Teardown_Action;
class TestReport_Test;
class TestReport_Test_Action;
class TestScript;
class TestScript_Destination;
class TestScript_Fixture;
class TestScript_Metadata;
class TestScript_Metadata_Capability;
class TestScript_Metadata_Link;
class TestScript_Origin;
class TestScript_Setup;
class TestScript_Setup_Action;
class TestScript_Setup_Action_Assert;
class TestScript_Setup_Action_Operation;
class TestScript_Setup_Action_Operation_RequestHeader;
class TestScript_Teardown;
class TestScript_Teardown_Action;
class TestScript_Test;
class TestScript_Test_Action;
class TestScript_Variable;
class Timing;
class Timing_Repeat;
class TriggerDefinition;
class UsageContext;
class ValueSet;
class ValueSet_Compose;
class ValueSet_Compose_Include;
class ValueSet_Compose_Include_Concept;
class ValueSet_Compose_Include_Concept_Designation;
class ValueSet_Compose_Include_Filter;
class ValueSet_Expansion;
class ValueSet_Expansion_Contains;
class ValueSet_Expansion_Parameter;
class VerificationResult;
class VerificationResult_Attestation;
class VerificationResult_PrimarySource;
class VerificationResult_Validator;
class VisionPrescription;
class VisionPrescription_LensSpecification;
class VisionPrescription_LensSpecification_Prism;
class xhtml;
class Account {
public:
    std::vector<std::shared_ptr<Resource>> contained;
    std::vector<std::shared_ptr<Account_Coverage>> coverage;
    std::optional<fhir_string> description;
    std::vector<std::shared_ptr<Extension>> extension;
    std::vector<std::shared_ptr<Account_Guarantor>> guarantor;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Identifier>> identifier;
    std::optional<fhir_uri> implicit_rules;
    std::optional<fhir_code> language;
    std::optional<std::shared_ptr<Meta>> meta;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<fhir_string> name;
    std::optional<std::shared_ptr<Reference>> owner;
    std::optional<std::shared_ptr<Reference>> part_of;
    std::optional<std::shared_ptr<Period>> service_period;
    fhir_code status;
    std::vector<std::shared_ptr<Reference>> subject;
    std::optional<std::shared_ptr<Narrative>> text;
    std::optional<std::shared_ptr<CodeableConcept>> type;
};

class Account_Coverage {
public:
    std::shared_ptr<Reference> coverage;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<fhir_positiveInt> priority;
};

class Account_Guarantor {
public:
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<fhir_boolean> on_hold;
    std::shared_ptr<Reference> party;
    std::optional<std::shared_ptr<Period>> period;
};

class ActivityDefinition {
public:
    std::optional<fhir_date> approval_date;
    std::vector<std::shared_ptr<ContactDetail>> author;
    std::vector<std::shared_ptr<CodeableConcept>> body_site;
    std::optional<std::shared_ptr<CodeableConcept>> code_;
    std::vector<std::shared_ptr<ContactDetail>> contact;
    std::vector<std::shared_ptr<Resource>> contained;
    std::optional<fhir_markdown> copyright;
    std::optional<fhir_dateTime> date_;
    std::optional<fhir_markdown> description;
    std::optional<fhir_boolean> do_not_perform;
    std::vector<std::shared_ptr<Dosage>> dosage;
    std::vector<std::shared_ptr<ActivityDefinition_DynamicValue>> dynamic_value;
    std::vector<std::shared_ptr<ContactDetail>> editor;
    std::optional<std::shared_ptr<Period>> effective_period;
    std::vector<std::shared_ptr<ContactDetail>> endorser;
    std::optional<fhir_boolean> experimental;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Identifier>> identifier;
    std::optional<fhir_uri> implicit_rules;
    std::optional<fhir_code> intent;
    std::vector<std::shared_ptr<CodeableConcept>> jurisdiction;
    std::optional<fhir_code> kind;
    std::optional<fhir_code> language;
    std::optional<fhir_date> last_review_date;
    std::vector<fhir_canonical> library;
    std::optional<std::shared_ptr<Reference>> location;
    std::optional<std::shared_ptr<Meta>> meta;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<fhir_string> name;
    std::vector<std::shared_ptr<Reference>> observation_requirement;
    std::vector<std::shared_ptr<Reference>> observation_result_requirement;
    std::vector<std::shared_ptr<ActivityDefinition_Participant>> participant;
    std::optional<fhir_code> priority;
    using PRODUCT_Variant = std::variant<
        std::shared_ptr<Reference>,
        std::shared_ptr<CodeableConcept>
    >;
    PRODUCT_Variant product;
    std::optional<fhir_canonical> profile;
    std::optional<fhir_string> publisher;
    std::optional<fhir_markdown> purpose;
    std::optional<std::shared_ptr<Quantity>> quantity;
    std::vector<std::shared_ptr<RelatedArtifact>> related_artifact;
    std::vector<std::shared_ptr<ContactDetail>> reviewer;
    std::vector<std::shared_ptr<Reference>> specimen_requirement;
    fhir_code status;
    using SUBJECT_Variant = std::variant<
        std::shared_ptr<CodeableConcept>,
        std::shared_ptr<Reference>
    >;
    SUBJECT_Variant subject;
    std::optional<fhir_string> subtitle;
    std::optional<std::shared_ptr<Narrative>> text;
    using TIMING_Variant = std::variant<
        std::shared_ptr<Timing>,
        std::shared_ptr<fhir_dateTime>,
        std::shared_ptr<Age>,
        std::shared_ptr<Period>,
        std::shared_ptr<Range>,
        std::shared_ptr<Duration>
    >;
    TIMING_Variant timing;
    std::optional<fhir_string> title;
    std::vector<std::shared_ptr<CodeableConcept>> topic;
    std::optional<fhir_canonical> transform;
    std::optional<fhir_uri> url_;
    std::optional<fhir_string> usage;
    std::vector<std::shared_ptr<UsageContext>> use_context;
    std::optional<fhir_string> version;
};

class ActivityDefinition_DynamicValue {
public:
    std::shared_ptr<Expression> expression;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    fhir_string path;
};

class ActivityDefinition_Participant {
public:
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<std::shared_ptr<CodeableConcept>> role;
    fhir_code type;
};

class Address {
public:
    std::optional<fhir_string> city;
    std::optional<fhir_string> country;
    std::optional<fhir_string> district;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<fhir_string> line;
    std::optional<std::shared_ptr<Period>> period;
    std::optional<fhir_string> postal_code;
    std::optional<fhir_string> state;
    std::optional<fhir_string> text;
    std::optional<fhir_code> type;
    std::optional<fhir_code> use;
};

class AdverseEvent {
public:
    fhir_code actuality;
    std::vector<std::shared_ptr<CodeableConcept>> category;
    std::vector<std::shared_ptr<Resource>> contained;
    std::vector<std::shared_ptr<Reference>> contributor;
    std::optional<fhir_dateTime> date_;
    std::optional<fhir_dateTime> detected;
    std::optional<std::shared_ptr<Reference>> encounter;
    std::optional<std::shared_ptr<CodeableConcept>> event;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::optional<std::shared_ptr<Identifier>> identifier;
    std::optional<fhir_uri> implicit_rules;
    std::optional<fhir_code> language;
    std::optional<std::shared_ptr<Reference>> location;
    std::optional<std::shared_ptr<Meta>> meta;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<std::shared_ptr<CodeableConcept>> outcome;
    std::optional<fhir_dateTime> recorded_date;
    std::optional<std::shared_ptr<Reference>> recorder;
    std::vector<std::shared_ptr<Reference>> reference_document;
    std::vector<std::shared_ptr<Reference>> resulting_condition;
    std::optional<std::shared_ptr<CodeableConcept>> seriousness;
    std::optional<std::shared_ptr<CodeableConcept>> severity;
    std::vector<std::shared_ptr<Reference>> study;
    std::shared_ptr<Reference> subject;
    std::vector<std::shared_ptr<Reference>> subject_medical_history;
    std::vector<std::shared_ptr<AdverseEvent_SuspectEntity>> suspect_entity;
    std::optional<std::shared_ptr<Narrative>> text;
};

class AdverseEvent_SuspectEntity {
public:
    std::vector<std::shared_ptr<AdverseEvent_SuspectEntity_Causality>> causality;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::shared_ptr<Reference> instance;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
};

class AdverseEvent_SuspectEntity_Causality {
public:
    std::optional<std::shared_ptr<CodeableConcept>> assessment;
    std::optional<std::shared_ptr<Reference>> author;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::optional<std::shared_ptr<CodeableConcept>> method;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<fhir_string> product_relatedness;
};

class Age {
public:
    std::optional<fhir_code> code_;
    std::optional<fhir_code> comparator;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::optional<fhir_uri> system;
    std::optional<fhir_string> unit;
    std::optional<fhir_decimal> value;
};

class AllergyIntolerance {
public:
    std::optional<std::shared_ptr<Reference>> asserter;
    std::vector<fhir_code> category;
    std::optional<std::shared_ptr<CodeableConcept>> clinical_status;
    std::optional<std::shared_ptr<CodeableConcept>> code_;
    std::vector<std::shared_ptr<Resource>> contained;
    std::optional<fhir_code> criticality;
    std::optional<std::shared_ptr<Reference>> encounter;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Identifier>> identifier;
    std::optional<fhir_uri> implicit_rules;
    std::optional<fhir_code> language;
    std::optional<fhir_dateTime> last_occurrence;
    std::optional<std::shared_ptr<Meta>> meta;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::vector<std::shared_ptr<Annotation>> note;
    using ONSET_Variant = std::variant<
        std::shared_ptr<fhir_dateTime>,
        std::shared_ptr<Age>,
        std::shared_ptr<Period>,
        std::shared_ptr<Range>,
        std::shared_ptr<fhir_string>
    >;
    ONSET_Variant onset;
    std::shared_ptr<Reference> patient;
    std::vector<std::shared_ptr<AllergyIntolerance_Reaction>> reaction;
    std::optional<fhir_dateTime> recorded_date;
    std::optional<std::shared_ptr<Reference>> recorder;
    std::optional<std::shared_ptr<Narrative>> text;
    std::optional<fhir_code> type;
    std::optional<std::shared_ptr<CodeableConcept>> verification_status;
};

class AllergyIntolerance_Reaction {
public:
    std::optional<fhir_string> description;
    std::optional<std::shared_ptr<CodeableConcept>> exposure_route;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::vector<std::shared_ptr<Annotation>> note;
    std::optional<fhir_dateTime> onset;
    std::optional<fhir_code> severity;
    std::optional<std::shared_ptr<CodeableConcept>> substance;
};

class Annotation {
public:
    using AUTHOR_Variant = std::variant<
        std::shared_ptr<Reference>,
        std::shared_ptr<fhir_string>
    >;
    AUTHOR_Variant author;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    fhir_markdown text;
    std::optional<fhir_dateTime> time_;
};

class Appointment {
public:
    std::optional<std::shared_ptr<CodeableConcept>> appointment_type;
    std::vector<std::shared_ptr<Reference>> based_on;
    std::optional<std::shared_ptr<CodeableConcept>> cancelation_reason;
    std::optional<fhir_string> comment;
    std::vector<std::shared_ptr<Resource>> contained;
    std::optional<fhir_dateTime> created;
    std::optional<fhir_string> description;
    std::optional<fhir_instant> end;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Identifier>> identifier;
    std::optional<fhir_uri> implicit_rules;
    std::optional<fhir_code> language;
    std::optional<std::shared_ptr<Meta>> meta;
    std::optional<fhir_positiveInt> minutes_duration;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<fhir_string> patient_instruction;
    std::optional<fhir_unsignedInt> priority;
    std::vector<std::shared_ptr<CodeableConcept>> reason_code;
    std::vector<std::shared_ptr<Reference>> reason_reference;
    std::vector<std::shared_ptr<Period>> requested_period;
    std::vector<std::shared_ptr<CodeableConcept>> service_category;
    std::vector<std::shared_ptr<CodeableConcept>> service_type;
    std::vector<std::shared_ptr<Reference>> slot;
    std::vector<std::shared_ptr<CodeableConcept>> specialty;
    std::optional<fhir_instant> start;
    fhir_code status;
    std::vector<std::shared_ptr<Reference>> supporting_information;
    std::optional<std::shared_ptr<Narrative>> text;
};

class Appointment_Participant {
public:
    std::optional<std::shared_ptr<Reference>> actor;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<std::shared_ptr<Period>> period;
    std::optional<fhir_code> required;
    fhir_code status;
    std::vector<std::shared_ptr<CodeableConcept>> type;
};

class AppointmentResponse {
public:
    std::optional<std::shared_ptr<Reference>> actor;
    std::shared_ptr<Reference> appointment;
    std::optional<fhir_string> comment;
    std::vector<std::shared_ptr<Resource>> contained;
    std::optional<fhir_instant> end;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Identifier>> identifier;
    std::optional<fhir_uri> implicit_rules;
    std::optional<fhir_code> language;
    std::optional<std::shared_ptr<Meta>> meta;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    fhir_code participant_status;
    std::vector<std::shared_ptr<CodeableConcept>> participant_type;
    std::optional<fhir_instant> start;
    std::optional<std::shared_ptr<Narrative>> text;
};

class Attachment {
public:
    std::optional<fhir_code> content_type;
    std::optional<fhir_dateTime> creation;
    std::optional<fhir_base64Binary> data;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<fhir_base64Binary> hash;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::optional<fhir_code> language;
    std::optional<fhir_unsignedInt> size;
    std::optional<fhir_string> title;
    std::optional<fhir_url> url_;
};

class AuditEvent {
public:
    std::optional<fhir_code> action;
    std::vector<std::shared_ptr<Resource>> contained;
    std::vector<std::shared_ptr<AuditEvent_Entity>> entity;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::optional<fhir_uri> implicit_rules;
    std::optional<fhir_code> language;
    std::optional<std::shared_ptr<Meta>> meta;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<fhir_code> outcome;
    std::optional<fhir_string> outcome_desc;
    std::optional<std::shared_ptr<Period>> period;
    std::vector<std::shared_ptr<CodeableConcept>> purpose_of_event;
    fhir_instant recorded;
    std::shared_ptr<AuditEvent_Source> source;
    std::vector<std::shared_ptr<Coding>> subtype;
    std::optional<std::shared_ptr<Narrative>> text;
    std::shared_ptr<Coding> type;
};

class AuditEvent_Agent {
public:
    std::optional<fhir_string> alt_id;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::optional<std::shared_ptr<Reference>> location;
    std::optional<std::shared_ptr<Coding>> media;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<fhir_string> name;
    std::optional<std::shared_ptr<AuditEvent_Agent_Network>> network;
    std::vector<fhir_uri> policy;
    std::vector<std::shared_ptr<CodeableConcept>> purpose_of_use;
    fhir_boolean requestor;
    std::vector<std::shared_ptr<CodeableConcept>> role;
    std::optional<std::shared_ptr<CodeableConcept>> type;
    std::optional<std::shared_ptr<Reference>> who;
};

class AuditEvent_Agent_Network {
public:
    std::optional<fhir_string> address;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<fhir_code> type;
};

class AuditEvent_Entity {
public:
    std::optional<fhir_string> description;
    std::vector<std::shared_ptr<AuditEvent_Entity_Detail>> detail;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::optional<std::shared_ptr<Coding>> lifecycle;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<fhir_string> name;
    std::optional<fhir_base64Binary> query;
    std::optional<std::shared_ptr<Coding>> role;
    std::vector<std::shared_ptr<Coding>> security_label;
    std::optional<std::shared_ptr<Coding>> type;
    std::optional<std::shared_ptr<Reference>> what;
};

class AuditEvent_Entity_Detail {
public:
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    fhir_string type;
    using VALUE_Variant = std::variant<
        std::shared_ptr<fhir_string>,
        std::shared_ptr<fhir_base64Binary>
    >;
    VALUE_Variant value;
};

class AuditEvent_Source {
public:
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::shared_ptr<Reference> observer;
    std::optional<fhir_string> site;
    std::vector<std::shared_ptr<Coding>> type;
};

class BackboneElement {
public:
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
};

class Basic {
public:
    std::optional<std::shared_ptr<Reference>> author;
    std::shared_ptr<CodeableConcept> code_;
    std::vector<std::shared_ptr<Resource>> contained;
    std::optional<fhir_date> created;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Identifier>> identifier;
    std::optional<fhir_uri> implicit_rules;
    std::optional<fhir_code> language;
    std::optional<std::shared_ptr<Meta>> meta;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<std::shared_ptr<Reference>> subject;
    std::optional<std::shared_ptr<Narrative>> text;
};

class Binary {
public:
    fhir_code content_type;
    std::optional<fhir_base64Binary> data;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::optional<fhir_uri> implicit_rules;
    std::optional<fhir_code> language;
    std::optional<std::shared_ptr<Meta>> meta;
    std::optional<std::shared_ptr<Reference>> security_context;
};

class BiologicallyDerivedProduct {
public:
    std::optional<std::shared_ptr<BiologicallyDerivedProduct_Collection>> collection;
    std::vector<std::shared_ptr<Resource>> contained;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Identifier>> identifier;
    std::optional<fhir_uri> implicit_rules;
    std::optional<fhir_code> language;
    std::optional<std::shared_ptr<BiologicallyDerivedProduct_Manipulation>> manipulation;
    std::optional<std::shared_ptr<Meta>> meta;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::vector<std::shared_ptr<Reference>> parent;
    std::vector<std::shared_ptr<BiologicallyDerivedProduct_Processing>> processing;
    std::optional<fhir_code> product_category;
    std::optional<std::shared_ptr<CodeableConcept>> product_code;
    std::optional<fhir_integer> quantity;
    std::vector<std::shared_ptr<Reference>> request;
    std::optional<fhir_code> status;
    std::vector<std::shared_ptr<BiologicallyDerivedProduct_Storage>> storage;
    std::optional<std::shared_ptr<Narrative>> text;
};

class BiologicallyDerivedProduct_Collection {
public:
    using COLLECTED_Variant = std::variant<
        std::shared_ptr<fhir_dateTime>,
        std::shared_ptr<Period>
    >;
    COLLECTED_Variant collected;
    std::optional<std::shared_ptr<Reference>> collector;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<std::shared_ptr<Reference>> source;
};

class BiologicallyDerivedProduct_Manipulation {
public:
    std::optional<fhir_string> description;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    using TIME_Variant = std::variant<
        std::shared_ptr<fhir_dateTime>,
        std::shared_ptr<Period>
    >;
    TIME_Variant time_;
};

class BiologicallyDerivedProduct_Processing {
public:
    std::optional<std::shared_ptr<Reference>> additive;
    std::optional<fhir_string> description;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<std::shared_ptr<CodeableConcept>> procedure;
    using TIME_Variant = std::variant<
        std::shared_ptr<fhir_dateTime>,
        std::shared_ptr<Period>
    >;
    TIME_Variant time_;
};

class BiologicallyDerivedProduct_Storage {
public:
    std::optional<fhir_string> description;
    std::optional<std::shared_ptr<Period>> duration;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<fhir_code> scale;
    std::optional<fhir_decimal> temperature;
};

class BodyStructure {
public:
    std::optional<fhir_boolean> active;
    std::vector<std::shared_ptr<Resource>> contained;
    std::optional<fhir_string> description;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Identifier>> identifier;
    std::vector<std::shared_ptr<Attachment>> image;
    std::optional<fhir_uri> implicit_rules;
    std::optional<fhir_code> language;
    std::optional<std::shared_ptr<CodeableConcept>> location;
    std::vector<std::shared_ptr<CodeableConcept>> location_qualifier;
    std::optional<std::shared_ptr<Meta>> meta;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<std::shared_ptr<CodeableConcept>> morphology;
    std::shared_ptr<Reference> patient;
    std::optional<std::shared_ptr<Narrative>> text;
};

class Bundle {
public:
    std::vector<std::shared_ptr<Bundle_Entry>> entry;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::optional<std::shared_ptr<Identifier>> identifier;
    std::optional<fhir_uri> implicit_rules;
    std::optional<fhir_code> language;
    std::vector<std::shared_ptr<Bundle_Link>> link;
    std::optional<std::shared_ptr<Meta>> meta;
    std::optional<std::shared_ptr<Signature>> signature;
    std::optional<fhir_instant> timestamp;
    std::optional<fhir_unsignedInt> total;
    fhir_code type;
};

class Bundle_Entry {
public:
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<fhir_uri> full_url;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Bundle_Link>> link;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<std::shared_ptr<Bundle_Entry_Request>> request;
    std::optional<std::shared_ptr<Resource>> resource;
    std::optional<std::shared_ptr<Bundle_Entry_Response>> response;
    std::optional<std::shared_ptr<Bundle_Entry_Search>> search;
};

class Bundle_Entry_Request {
public:
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::optional<fhir_string> if_match;
    std::optional<fhir_instant> if_modified_since;
    std::optional<fhir_string> if_none_exist;
    std::optional<fhir_string> if_none_match;
    fhir_code method;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    fhir_uri url_;
};

class Bundle_Entry_Response {
public:
    std::optional<fhir_string> etag;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::optional<fhir_instant> last_modified;
    std::optional<fhir_uri> location;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<std::shared_ptr<Resource>> outcome;
    fhir_string status;
};

class Bundle_Entry_Search {
public:
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::optional<fhir_code> mode;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<fhir_decimal> score;
};

class Bundle_Link {
public:
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    fhir_string relation;
    fhir_uri url_;
};

class CapabilityStatement {
public:
    std::vector<std::shared_ptr<ContactDetail>> contact;
    std::vector<std::shared_ptr<Resource>> contained;
    std::optional<fhir_markdown> copyright;
    fhir_dateTime date_;
    std::optional<fhir_markdown> description;
    std::vector<std::shared_ptr<CapabilityStatement_Document>> document;
    std::optional<fhir_boolean> experimental;
    std::vector<std::shared_ptr<Extension>> extension;
    fhir_code fhir_version;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::optional<std::shared_ptr<CapabilityStatement_Implementation>> implementation;
    std::vector<fhir_canonical> implementation_guide;
    std::optional<fhir_uri> implicit_rules;
    std::vector<fhir_canonical> imports;
    std::vector<fhir_canonical> instantiates;
    std::vector<std::shared_ptr<CodeableConcept>> jurisdiction;
    fhir_code kind;
    std::optional<fhir_code> language;
    std::vector<std::shared_ptr<CapabilityStatement_Messaging>> messaging;
    std::optional<std::shared_ptr<Meta>> meta;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<fhir_string> name;
    std::vector<fhir_code> patch_format;
    std::optional<fhir_string> publisher;
    std::optional<fhir_markdown> purpose;
    std::vector<std::shared_ptr<CapabilityStatement_Rest>> rest;
    std::optional<std::shared_ptr<CapabilityStatement_Software>> software;
    fhir_code status;
    std::optional<std::shared_ptr<Narrative>> text;
    std::optional<fhir_string> title;
    std::optional<fhir_uri> url_;
    std::vector<std::shared_ptr<UsageContext>> use_context;
    std::optional<fhir_string> version;
};

class CapabilityStatement_Document {
public:
    std::optional<fhir_markdown> documentation;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    fhir_code mode;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    fhir_canonical profile;
};

class CapabilityStatement_Implementation {
public:
    std::optional<std::shared_ptr<Reference>> custodian;
    fhir_string description;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<fhir_url> url_;
};

class CapabilityStatement_Messaging {
public:
    std::optional<fhir_markdown> documentation;
    std::vector<std::shared_ptr<CapabilityStatement_Messaging_Endpoint>> endpoint;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<fhir_unsignedInt> reliable_cache;
    std::vector<std::shared_ptr<CapabilityStatement_Messaging_SupportedMessage>> supported_message;
};

class CapabilityStatement_Messaging_Endpoint {
public:
    fhir_url address;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::shared_ptr<Coding> protocol;
};

class CapabilityStatement_Messaging_SupportedMessage {
public:
    fhir_canonical definition;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    fhir_code mode;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
};

class CapabilityStatement_Rest {
public:
    std::vector<fhir_canonical> compartment;
    std::optional<fhir_markdown> documentation;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<CapabilityStatement_Rest_Interaction>> interaction;
    fhir_code mode;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::vector<std::shared_ptr<CapabilityStatement_Rest_Resource_Operation>> operation;
    std::vector<std::shared_ptr<CapabilityStatement_Rest_Resource>> resource;
    std::vector<std::shared_ptr<CapabilityStatement_Rest_Resource_SearchParam>> search_param;
    std::optional<std::shared_ptr<CapabilityStatement_Rest_Security>> security;
};

class CapabilityStatement_Rest_Interaction {
public:
    fhir_code code_;
    std::optional<fhir_markdown> documentation;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
};

class CapabilityStatement_Rest_Resource {
public:
    std::optional<fhir_boolean> conditional_create;
    std::optional<fhir_code> conditional_delete;
    std::optional<fhir_code> conditional_read;
    std::optional<fhir_boolean> conditional_update;
    std::optional<fhir_markdown> documentation;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<CapabilityStatement_Rest_Resource_Interaction>> interaction;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::vector<std::shared_ptr<CapabilityStatement_Rest_Resource_Operation>> operation;
    std::optional<fhir_canonical> profile;
    std::optional<fhir_boolean> read_history;
    std::vector<fhir_code> reference_policy;
    std::vector<fhir_string> search_include;
    std::vector<std::shared_ptr<CapabilityStatement_Rest_Resource_SearchParam>> search_param;
    std::vector<fhir_string> search_rev_include;
    std::vector<fhir_canonical> supported_profile;
    fhir_code type;
    std::optional<fhir_boolean> update_create;
    std::optional<fhir_code> versioning;
};

class CapabilityStatement_Rest_Resource_Interaction {
public:
    fhir_code code_;
    std::optional<fhir_markdown> documentation;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
};

class CapabilityStatement_Rest_Resource_Operation {
public:
    fhir_canonical definition;
    std::optional<fhir_markdown> documentation;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    fhir_string name;
};

class CapabilityStatement_Rest_Resource_SearchParam {
public:
    std::optional<fhir_canonical> definition;
    std::optional<fhir_markdown> documentation;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    fhir_string name;
    fhir_code type;
};

class CapabilityStatement_Rest_Security {
public:
    std::optional<fhir_boolean> cors;
    std::optional<fhir_markdown> description;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::vector<std::shared_ptr<CodeableConcept>> service;
};

class CapabilityStatement_Software {
public:
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    fhir_string name;
    std::optional<fhir_dateTime> release_date;
    std::optional<fhir_string> version;
};

class CarePlan {
public:
    std::vector<std::shared_ptr<CarePlan_Activity>> activity;
    std::vector<std::shared_ptr<Reference>> addresses;
    std::optional<std::shared_ptr<Reference>> author;
    std::vector<std::shared_ptr<Reference>> based_on;
    std::vector<std::shared_ptr<Reference>> care_team;
    std::vector<std::shared_ptr<CodeableConcept>> category;
    std::vector<std::shared_ptr<Resource>> contained;
    std::vector<std::shared_ptr<Reference>> contributor;
    std::optional<fhir_dateTime> created;
    std::optional<fhir_string> description;
    std::optional<std::shared_ptr<Reference>> encounter;
    std::vector<std::shared_ptr<Extension>> extension;
    std::vector<std::shared_ptr<Reference>> goal;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Identifier>> identifier;
    std::optional<fhir_uri> implicit_rules;
    std::vector<fhir_canonical> instantiates_canonical;
    std::vector<fhir_uri> instantiates_uri;
    fhir_code intent;
    std::optional<fhir_code> language;
    std::optional<std::shared_ptr<Meta>> meta;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::vector<std::shared_ptr<Annotation>> note;
    std::vector<std::shared_ptr<Reference>> part_of;
    std::optional<std::shared_ptr<Period>> period;
    std::vector<std::shared_ptr<Reference>> replaces;
    fhir_code status;
    std::shared_ptr<Reference> subject;
    std::vector<std::shared_ptr<Reference>> supporting_info;
    std::optional<std::shared_ptr<Narrative>> text;
    std::optional<fhir_string> title;
};

class CarePlan_Activity {
public:
    std::optional<std::shared_ptr<CarePlan_Activity_Detail>> detail;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::vector<std::shared_ptr<CodeableConcept>> outcome_codeable_concept;
    std::vector<std::shared_ptr<Reference>> outcome_reference;
    std::vector<std::shared_ptr<Annotation>> progress;
    std::optional<std::shared_ptr<Reference>> reference;
};

class CarePlan_Activity_Detail {
public:
    std::optional<std::shared_ptr<CodeableConcept>> code_;
    std::optional<std::shared_ptr<Quantity>> daily_amount;
    std::optional<fhir_string> description;
    std::optional<fhir_boolean> do_not_perform;
    std::vector<std::shared_ptr<Extension>> extension;
    std::vector<std::shared_ptr<Reference>> goal;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<fhir_canonical> instantiates_canonical;
    std::vector<fhir_uri> instantiates_uri;
    std::optional<fhir_code> kind;
    std::optional<std::shared_ptr<Reference>> location;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::vector<std::shared_ptr<Reference>> performer;
    using PRODUCT_Variant = std::variant<
        std::shared_ptr<CodeableConcept>,
        std::shared_ptr<Reference>
    >;
    PRODUCT_Variant product;
    std::optional<std::shared_ptr<Quantity>> quantity;
    std::vector<std::shared_ptr<CodeableConcept>> reason_code;
    std::vector<std::shared_ptr<Reference>> reason_reference;
    using SCHEDULED_Variant = std::variant<
        std::shared_ptr<Timing>,
        std::shared_ptr<Period>,
        std::shared_ptr<fhir_string>
    >;
    SCHEDULED_Variant scheduled;
    fhir_code status;
    std::optional<std::shared_ptr<CodeableConcept>> status_reason;
};

class CareTeam {
public:
    std::vector<std::shared_ptr<CodeableConcept>> category;
    std::vector<std::shared_ptr<Resource>> contained;
    std::optional<std::shared_ptr<Reference>> encounter;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Identifier>> identifier;
    std::optional<fhir_uri> implicit_rules;
    std::optional<fhir_code> language;
    std::vector<std::shared_ptr<Reference>> managing_organization;
    std::optional<std::shared_ptr<Meta>> meta;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<fhir_string> name;
    std::vector<std::shared_ptr<Annotation>> note;
    std::vector<std::shared_ptr<CareTeam_Participant>> participant;
    std::optional<std::shared_ptr<Period>> period;
    std::vector<std::shared_ptr<CodeableConcept>> reason_code;
    std::vector<std::shared_ptr<Reference>> reason_reference;
    std::optional<fhir_code> status;
    std::optional<std::shared_ptr<Reference>> subject;
    std::vector<std::shared_ptr<ContactPoint>> telecom;
    std::optional<std::shared_ptr<Narrative>> text;
};

class CareTeam_Participant {
public:
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::optional<std::shared_ptr<Reference>> member;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<std::shared_ptr<Reference>> on_behalf_of;
    std::optional<std::shared_ptr<Period>> period;
    std::vector<std::shared_ptr<CodeableConcept>> role;
};

class CatalogEntry {
public:
    std::vector<std::shared_ptr<CodeableConcept>> additional_characteristic;
    std::vector<std::shared_ptr<CodeableConcept>> additional_classification;
    std::vector<std::shared_ptr<Identifier>> additional_identifier;
    std::vector<std::shared_ptr<CodeableConcept>> classification;
    std::vector<std::shared_ptr<Resource>> contained;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Identifier>> identifier;
    std::optional<fhir_uri> implicit_rules;
    std::optional<fhir_code> language;
    std::optional<fhir_dateTime> last_updated;
    std::optional<std::shared_ptr<Meta>> meta;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    fhir_boolean orderable;
    std::shared_ptr<Reference> referenced_item;
    std::vector<std::shared_ptr<CatalogEntry_RelatedEntry>> related_entry;
    std::optional<fhir_code> status;
    std::optional<std::shared_ptr<Narrative>> text;
    std::optional<std::shared_ptr<CodeableConcept>> type;
    std::optional<fhir_dateTime> valid_to;
    std::optional<std::shared_ptr<Period>> validity_period;
};

class CatalogEntry_RelatedEntry {
public:
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::shared_ptr<Reference> item;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    fhir_code relationtype;
};

class ChargeItem {
public:
    std::vector<std::shared_ptr<Reference>> account;
    std::vector<std::shared_ptr<CodeableConcept>> bodysite;
    std::shared_ptr<CodeableConcept> code_;
    std::vector<std::shared_ptr<Resource>> contained;
    std::optional<std::shared_ptr<Reference>> context;
    std::optional<std::shared_ptr<Reference>> cost_center;
    std::vector<fhir_canonical> definition_canonical;
    std::vector<fhir_uri> definition_uri;
    std::optional<fhir_dateTime> entered_date;
    std::optional<std::shared_ptr<Reference>> enterer;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<fhir_decimal> factor_override;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Identifier>> identifier;
    std::optional<fhir_uri> implicit_rules;
    std::optional<fhir_code> language;
    std::optional<std::shared_ptr<Meta>> meta;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::vector<std::shared_ptr<Annotation>> note;
    using OCCURRENCE_Variant = std::variant<
        std::shared_ptr<fhir_dateTime>,
        std::shared_ptr<Period>,
        std::shared_ptr<Timing>
    >;
    OCCURRENCE_Variant occurrence;
    std::optional<fhir_string> override_reason;
    std::vector<std::shared_ptr<Reference>> part_of;
    std::vector<std::shared_ptr<ChargeItem_Performer>> performer;
    std::optional<std::shared_ptr<Reference>> performing_organization;
    std::optional<std::shared_ptr<Money>> price_override;
    using PRODUCT_Variant = std::variant<
        std::shared_ptr<Reference>,
        std::shared_ptr<CodeableConcept>
    >;
    PRODUCT_Variant product;
    std::optional<std::shared_ptr<Quantity>> quantity;
    std::vector<std::shared_ptr<CodeableConcept>> reason;
    std::optional<std::shared_ptr<Reference>> requesting_organization;
    std::vector<std::shared_ptr<Reference>> service;
    fhir_code status;
    std::shared_ptr<Reference> subject;
    std::vector<std::shared_ptr<Reference>> supporting_information;
    std::optional<std::shared_ptr<Narrative>> text;
};

class ChargeItem_Performer {
public:
    std::shared_ptr<Reference> actor;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<CodeableConcept>> function;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
};

class ChargeItemDefinition {
public:
    std::vector<std::shared_ptr<ChargeItemDefinition_Applicability>> applicability;
    std::optional<fhir_date> approval_date;
    std::optional<std::shared_ptr<CodeableConcept>> code_;
    std::vector<std::shared_ptr<ContactDetail>> contact;
    std::vector<std::shared_ptr<Resource>> contained;
    std::optional<fhir_markdown> copyright;
    std::optional<fhir_dateTime> date_;
    std::vector<fhir_uri> derived_from_uri;
    std::optional<fhir_markdown> description;
    std::optional<std::shared_ptr<Period>> effective_period;
    std::optional<fhir_boolean> experimental;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Identifier>> identifier;
    std::optional<fhir_uri> implicit_rules;
    std::vector<std::shared_ptr<Reference>> instance;
    std::vector<std::shared_ptr<CodeableConcept>> jurisdiction;
    std::optional<fhir_code> language;
    std::optional<fhir_date> last_review_date;
    std::optional<std::shared_ptr<Meta>> meta;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::vector<fhir_canonical> part_of;
    std::vector<std::shared_ptr<ChargeItemDefinition_PropertyGroup>> property_group;
    std::optional<fhir_string> publisher;
    std::vector<fhir_canonical> replaces;
    fhir_code status;
    std::optional<std::shared_ptr<Narrative>> text;
    std::optional<fhir_string> title;
    fhir_uri url_;
    std::vector<std::shared_ptr<UsageContext>> use_context;
    std::optional<fhir_string> version;
};

class ChargeItemDefinition_Applicability {
public:
    std::optional<fhir_string> description;
    std::optional<fhir_string> expression;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::optional<fhir_string> language;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
};

class ChargeItemDefinition_PropertyGroup {
public:
    std::vector<std::shared_ptr<ChargeItemDefinition_Applicability>> applicability;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::vector<std::shared_ptr<ChargeItemDefinition_PropertyGroup_PriceComponent>> price_component;
};

class ChargeItemDefinition_PropertyGroup_PriceComponent {
public:
    std::optional<std::shared_ptr<Money>> amount;
    std::optional<std::shared_ptr<CodeableConcept>> code_;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<fhir_decimal> factor;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    fhir_code type;
};

class Claim {
public:
    std::optional<std::shared_ptr<Claim_Accident>> accident;
    std::optional<std::shared_ptr<Period>> billable_period;
    std::vector<std::shared_ptr<Claim_CareTeam>> care_team;
    std::vector<std::shared_ptr<Resource>> contained;
    fhir_dateTime created;
    std::vector<std::shared_ptr<Claim_Diagnosis>> diagnosis;
    std::optional<std::shared_ptr<Reference>> enterer;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<Reference>> facility;
    std::optional<std::shared_ptr<CodeableConcept>> funds_reserve;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Identifier>> identifier;
    std::optional<fhir_uri> implicit_rules;
    std::optional<std::shared_ptr<Reference>> insurer;
    std::vector<std::shared_ptr<Claim_Item>> item;
    std::optional<fhir_code> language;
    std::optional<std::shared_ptr<Meta>> meta;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<std::shared_ptr<Reference>> original_prescription;
    std::shared_ptr<Reference> patient;
    std::optional<std::shared_ptr<Claim_Payee>> payee;
    std::optional<std::shared_ptr<Reference>> prescription;
    std::shared_ptr<CodeableConcept> priority;
    std::vector<std::shared_ptr<Claim_Procedure>> procedure;
    std::shared_ptr<Reference> provider;
    std::optional<std::shared_ptr<Reference>> referral;
    std::vector<std::shared_ptr<Claim_Related>> related;
    fhir_code status;
    std::optional<std::shared_ptr<CodeableConcept>> sub_type;
    std::vector<std::shared_ptr<Claim_SupportingInfo>> supporting_info;
    std::optional<std::shared_ptr<Narrative>> text;
    std::optional<std::shared_ptr<Money>> total;
    std::shared_ptr<CodeableConcept> type;
    fhir_code use;
};

class Claim_Accident {
public:
    fhir_date date_;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    using LOCATION_Variant = std::variant<
        std::shared_ptr<Address>,
        std::shared_ptr<Reference>
    >;
    LOCATION_Variant location;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<std::shared_ptr<CodeableConcept>> type;
};

class Claim_CareTeam {
public:
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::shared_ptr<Reference> provider;
    std::optional<std::shared_ptr<CodeableConcept>> qualification;
    std::optional<fhir_boolean> responsible;
    std::optional<std::shared_ptr<CodeableConcept>> role;
    fhir_positiveInt sequence;
};

class Claim_Diagnosis {
public:
    using DIAGNOSIS_Variant = std::variant<
        std::shared_ptr<CodeableConcept>,
        std::shared_ptr<Reference>
    >;
    DIAGNOSIS_Variant diagnosis;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<std::shared_ptr<CodeableConcept>> on_admission;
    std::optional<std::shared_ptr<CodeableConcept>> package_code;
    fhir_positiveInt sequence;
    std::vector<std::shared_ptr<CodeableConcept>> type;
};

class Claim_Insurance {
public:
    std::optional<fhir_string> business_arrangement;
    std::optional<std::shared_ptr<Reference>> claim_response;
    std::shared_ptr<Reference> coverage;
    std::vector<std::shared_ptr<Extension>> extension;
    fhir_boolean focal;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::optional<std::shared_ptr<Identifier>> identifier;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::vector<fhir_string> pre_auth_ref;
    fhir_positiveInt sequence;
};

class Claim_Item {
public:
    std::optional<std::shared_ptr<CodeableConcept>> body_site;
    std::vector<fhir_positiveInt> care_team_sequence;
    std::optional<std::shared_ptr<CodeableConcept>> category;
    std::vector<std::shared_ptr<Claim_Item_Detail>> detail;
    std::vector<fhir_positiveInt> diagnosis_sequence;
    std::vector<std::shared_ptr<Reference>> encounter;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<fhir_decimal> factor;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<fhir_positiveInt> information_sequence;
    using LOCATION_Variant = std::variant<
        std::shared_ptr<CodeableConcept>,
        std::shared_ptr<Address>,
        std::shared_ptr<Reference>
    >;
    LOCATION_Variant location;
    std::vector<std::shared_ptr<CodeableConcept>> modifier;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<std::shared_ptr<Money>> net;
    std::vector<fhir_positiveInt> procedure_sequence;
    std::shared_ptr<CodeableConcept> product_or_service;
    std::vector<std::shared_ptr<CodeableConcept>> program_code;
    std::optional<std::shared_ptr<Quantity>> quantity;
    std::optional<std::shared_ptr<CodeableConcept>> revenue;
    fhir_positiveInt sequence;
    using SERVICED_Variant = std::variant<
        std::shared_ptr<fhir_date>,
        std::shared_ptr<Period>
    >;
    SERVICED_Variant serviced;
    std::vector<std::shared_ptr<CodeableConcept>> sub_site;
    std::vector<std::shared_ptr<Reference>> udi;
    std::optional<std::shared_ptr<Money>> unit_price;
};

class Claim_Item_Detail {
public:
    std::optional<std::shared_ptr<CodeableConcept>> category;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<fhir_decimal> factor;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<CodeableConcept>> modifier;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<std::shared_ptr<Money>> net;
    std::shared_ptr<CodeableConcept> product_or_service;
    std::vector<std::shared_ptr<CodeableConcept>> program_code;
    std::optional<std::shared_ptr<Quantity>> quantity;
    std::optional<std::shared_ptr<CodeableConcept>> revenue;
    fhir_positiveInt sequence;
    std::vector<std::shared_ptr<Claim_Item_Detail_SubDetail>> sub_detail;
    std::vector<std::shared_ptr<Reference>> udi;
    std::optional<std::shared_ptr<Money>> unit_price;
};

class Claim_Item_Detail_SubDetail {
public:
    std::optional<std::shared_ptr<CodeableConcept>> category;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<fhir_decimal> factor;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<CodeableConcept>> modifier;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<std::shared_ptr<Money>> net;
    std::shared_ptr<CodeableConcept> product_or_service;
    std::vector<std::shared_ptr<CodeableConcept>> program_code;
    std::optional<std::shared_ptr<Quantity>> quantity;
    std::optional<std::shared_ptr<CodeableConcept>> revenue;
    fhir_positiveInt sequence;
    std::vector<std::shared_ptr<Reference>> udi;
    std::optional<std::shared_ptr<Money>> unit_price;
};

class Claim_Payee {
public:
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<std::shared_ptr<Reference>> party;
    std::shared_ptr<CodeableConcept> type;
};

class Claim_Procedure {
public:
    std::optional<fhir_dateTime> date_;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    using PROCEDURE_Variant = std::variant<
        std::shared_ptr<CodeableConcept>,
        std::shared_ptr<Reference>
    >;
    PROCEDURE_Variant procedure;
    fhir_positiveInt sequence;
    std::vector<std::shared_ptr<CodeableConcept>> type;
    std::vector<std::shared_ptr<Reference>> udi;
};

class Claim_Related {
public:
    std::optional<std::shared_ptr<Reference>> claim;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<std::shared_ptr<Identifier>> reference;
    std::optional<std::shared_ptr<CodeableConcept>> relationship;
};

class Claim_SupportingInfo {
public:
    std::shared_ptr<CodeableConcept> category;
    std::optional<std::shared_ptr<CodeableConcept>> code_;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<std::shared_ptr<CodeableConcept>> reason;
    fhir_positiveInt sequence;
    using TIMING_Variant = std::variant<
        std::shared_ptr<fhir_date>,
        std::shared_ptr<Period>
    >;
    TIMING_Variant timing;
    using VALUE_Variant = std::variant<
        std::shared_ptr<fhir_boolean>,
        std::shared_ptr<fhir_string>,
        std::shared_ptr<Quantity>,
        std::shared_ptr<Attachment>,
        std::shared_ptr<Reference>
    >;
    VALUE_Variant value;
};

class ClaimResponse {
public:
    std::vector<std::shared_ptr<ClaimResponse_AddItem>> add_item;
    std::vector<std::shared_ptr<ClaimResponse_Item_Adjudication>> adjudication;
    std::vector<std::shared_ptr<Reference>> communication_request;
    std::vector<std::shared_ptr<Resource>> contained;
    fhir_dateTime created;
    std::optional<fhir_string> disposition;
    std::vector<std::shared_ptr<ClaimResponse_Error>> error;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<Attachment>> form;
    std::optional<std::shared_ptr<CodeableConcept>> form_code;
    std::optional<std::shared_ptr<CodeableConcept>> funds_reserve;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Identifier>> identifier;
    std::optional<fhir_uri> implicit_rules;
    std::vector<std::shared_ptr<ClaimResponse_Insurance>> insurance;
    std::shared_ptr<Reference> insurer;
    std::vector<std::shared_ptr<ClaimResponse_Item>> item;
    std::optional<fhir_code> language;
    std::optional<std::shared_ptr<Meta>> meta;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    fhir_code outcome;
    std::shared_ptr<Reference> patient;
    std::optional<std::shared_ptr<CodeableConcept>> payee_type;
    std::optional<std::shared_ptr<ClaimResponse_Payment>> payment;
    std::optional<std::shared_ptr<Period>> pre_auth_period;
    std::optional<fhir_string> pre_auth_ref;
    std::vector<std::shared_ptr<ClaimResponse_ProcessNote>> process_note;
    std::optional<std::shared_ptr<Reference>> request;
    std::optional<std::shared_ptr<Reference>> requestor;
    fhir_code status;
    std::optional<std::shared_ptr<CodeableConcept>> sub_type;
    std::optional<std::shared_ptr<Narrative>> text;
    std::vector<std::shared_ptr<ClaimResponse_Total>> total;
    std::shared_ptr<CodeableConcept> type;
    fhir_code use;
};

class ClaimResponse_AddItem {
public:
    std::optional<std::shared_ptr<CodeableConcept>> body_site;
    std::vector<std::shared_ptr<ClaimResponse_AddItem_Detail>> detail;
    std::vector<fhir_positiveInt> detail_sequence;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<fhir_decimal> factor;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<fhir_positiveInt> item_sequence;
    using LOCATION_Variant = std::variant<
        std::shared_ptr<CodeableConcept>,
        std::shared_ptr<Address>,
        std::shared_ptr<Reference>
    >;
    LOCATION_Variant location;
    std::vector<std::shared_ptr<CodeableConcept>> modifier;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<std::shared_ptr<Money>> net;
    std::vector<fhir_positiveInt> note_number;
    std::shared_ptr<CodeableConcept> product_or_service;
    std::vector<std::shared_ptr<CodeableConcept>> program_code;
    std::vector<std::shared_ptr<Reference>> provider;
    std::optional<std::shared_ptr<Quantity>> quantity;
    using SERVICED_Variant = std::variant<
        std::shared_ptr<fhir_date>,
        std::shared_ptr<Period>
    >;
    SERVICED_Variant serviced;
    std::vector<std::shared_ptr<CodeableConcept>> sub_site;
    std::vector<fhir_positiveInt> subdetail_sequence;
    std::optional<std::shared_ptr<Money>> unit_price;
};

class ClaimResponse_AddItem_Detail {
public:
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<fhir_decimal> factor;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<CodeableConcept>> modifier;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<std::shared_ptr<Money>> net;
    std::vector<fhir_positiveInt> note_number;
    std::shared_ptr<CodeableConcept> product_or_service;
    std::optional<std::shared_ptr<Quantity>> quantity;
    std::vector<std::shared_ptr<ClaimResponse_AddItem_Detail_SubDetail>> sub_detail;
    std::optional<std::shared_ptr<Money>> unit_price;
};

class ClaimResponse_AddItem_Detail_SubDetail {
public:
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<fhir_decimal> factor;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<CodeableConcept>> modifier;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<std::shared_ptr<Money>> net;
    std::vector<fhir_positiveInt> note_number;
    std::shared_ptr<CodeableConcept> product_or_service;
    std::optional<std::shared_ptr<Quantity>> quantity;
    std::optional<std::shared_ptr<Money>> unit_price;
};

class ClaimResponse_Error {
public:
    std::shared_ptr<CodeableConcept> code_;
    std::optional<fhir_positiveInt> detail_sequence;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::optional<fhir_positiveInt> item_sequence;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<fhir_positiveInt> sub_detail_sequence;
};

class ClaimResponse_Insurance {
public:
    std::optional<fhir_string> business_arrangement;
    std::optional<std::shared_ptr<Reference>> claim_response;
    std::shared_ptr<Reference> coverage;
    std::vector<std::shared_ptr<Extension>> extension;
    fhir_boolean focal;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    fhir_positiveInt sequence;
};

class ClaimResponse_Item {
public:
    std::vector<std::shared_ptr<ClaimResponse_Item_Detail>> detail;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    fhir_positiveInt item_sequence;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::vector<fhir_positiveInt> note_number;
};

class ClaimResponse_Item_Adjudication {
public:
    std::optional<std::shared_ptr<Money>> amount;
    std::shared_ptr<CodeableConcept> category;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<std::shared_ptr<CodeableConcept>> reason;
    std::optional<fhir_decimal> value;
};

class ClaimResponse_Item_Detail {
public:
    fhir_positiveInt detail_sequence;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::vector<fhir_positiveInt> note_number;
    std::vector<std::shared_ptr<ClaimResponse_Item_Detail_SubDetail>> sub_detail;
};

class ClaimResponse_Item_Detail_SubDetail {
public:
    std::vector<std::shared_ptr<ClaimResponse_Item_Adjudication>> adjudication;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::vector<fhir_positiveInt> note_number;
    fhir_positiveInt sub_detail_sequence;
};

class ClaimResponse_Payment {
public:
    std::optional<std::shared_ptr<Money>> adjustment;
    std::optional<std::shared_ptr<CodeableConcept>> adjustment_reason;
    std::shared_ptr<Money> amount;
    std::optional<fhir_date> date_;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::optional<std::shared_ptr<Identifier>> identifier;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::shared_ptr<CodeableConcept> type;
};

class ClaimResponse_ProcessNote {
public:
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::optional<std::shared_ptr<CodeableConcept>> language;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<fhir_positiveInt> number;
    fhir_string text;
    std::optional<fhir_code> type;
};

class ClaimResponse_Total {
public:
    std::shared_ptr<Money> amount;
    std::shared_ptr<CodeableConcept> category;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
};

class ClinicalImpression {
public:
    std::optional<std::shared_ptr<Reference>> assessor;
    std::optional<std::shared_ptr<CodeableConcept>> code_;
    std::vector<std::shared_ptr<Resource>> contained;
    std::optional<fhir_dateTime> date_;
    std::optional<fhir_string> description;
    using EFFECTIVE_Variant = std::variant<
        std::shared_ptr<fhir_dateTime>,
        std::shared_ptr<Period>
    >;
    EFFECTIVE_Variant effective;
    std::optional<std::shared_ptr<Reference>> encounter;
    std::vector<std::shared_ptr<Extension>> extension;
    std::vector<std::shared_ptr<ClinicalImpression_Finding>> finding;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Identifier>> identifier;
    std::optional<fhir_uri> implicit_rules;
    std::vector<std::shared_ptr<ClinicalImpression_Investigation>> investigation;
    std::optional<fhir_code> language;
    std::optional<std::shared_ptr<Meta>> meta;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::vector<std::shared_ptr<Annotation>> note;
    std::optional<std::shared_ptr<Reference>> previous;
    std::vector<std::shared_ptr<Reference>> problem;
    std::vector<std::shared_ptr<CodeableConcept>> prognosis_codeable_concept;
    std::vector<std::shared_ptr<Reference>> prognosis_reference;
    std::vector<fhir_uri> protocol;
    fhir_code status;
    std::optional<std::shared_ptr<CodeableConcept>> status_reason;
    std::shared_ptr<Reference> subject;
    std::optional<fhir_string> summary;
    std::vector<std::shared_ptr<Reference>> supporting_info;
    std::optional<std::shared_ptr<Narrative>> text;
};

class ClinicalImpression_Finding {
public:
    std::optional<fhir_string> basis;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::optional<std::shared_ptr<CodeableConcept>> item_codeable_concept;
    std::optional<std::shared_ptr<Reference>> item_reference;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
};

class ClinicalImpression_Investigation {
public:
    std::shared_ptr<CodeableConcept> code_;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Reference>> item;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
};

class CodeSystem {
public:
    std::optional<fhir_boolean> case_sensitive;
    std::optional<fhir_boolean> compositional;
    std::vector<std::shared_ptr<CodeSystem_Concept>> concept;
    std::vector<std::shared_ptr<ContactDetail>> contact;
    std::vector<std::shared_ptr<Resource>> contained;
    fhir_code content;
    std::optional<fhir_markdown> copyright;
    std::optional<fhir_unsignedInt> count;
    std::optional<fhir_dateTime> date_;
    std::optional<fhir_markdown> description;
    std::optional<fhir_boolean> experimental;
    std::vector<std::shared_ptr<Extension>> extension;
    std::vector<std::shared_ptr<CodeSystem_Filter>> filter;
    std::optional<fhir_code> hierarchy_meaning;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Identifier>> identifier;
    std::optional<fhir_uri> implicit_rules;
    std::vector<std::shared_ptr<CodeableConcept>> jurisdiction;
    std::optional<fhir_code> language;
    std::optional<std::shared_ptr<Meta>> meta;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<fhir_string> name;
    std::vector<std::shared_ptr<CodeSystem_Property>> property;
    std::optional<fhir_string> publisher;
    std::optional<fhir_markdown> purpose;
    fhir_code status;
    std::optional<fhir_canonical> supplements;
    std::optional<std::shared_ptr<Narrative>> text;
    std::optional<fhir_string> title;
    std::optional<fhir_uri> url_;
    std::vector<std::shared_ptr<UsageContext>> use_context;
    std::optional<fhir_canonical> value_set;
    std::optional<fhir_string> version;
    std::optional<fhir_boolean> version_needed;
};

class CodeSystem_Concept {
public:
    fhir_code code_;
    std::vector<std::shared_ptr<CodeSystem_Concept>> concept;
    std::optional<fhir_string> definition;
    std::vector<std::shared_ptr<CodeSystem_Concept_Designation>> designation;
    std::optional<fhir_string> display;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::vector<std::shared_ptr<CodeSystem_Concept_Property>> property;
};

class CodeSystem_Concept_Designation {
public:
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::optional<fhir_code> language;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<std::shared_ptr<Coding>> use;
    fhir_string value;
};

class CodeSystem_Concept_Property {
public:
    fhir_code code_;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    using VALUE_Variant = std::variant<
        std::shared_ptr<fhir_code>,
        std::shared_ptr<Coding>,
        std::shared_ptr<fhir_string>,
        std::shared_ptr<fhir_integer>,
        std::shared_ptr<fhir_boolean>,
        std::shared_ptr<fhir_dateTime>,
        std::shared_ptr<fhir_decimal>
    >;
    VALUE_Variant value;
};

class CodeSystem_Filter {
public:
    fhir_code code_;
    std::optional<fhir_string> description;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    fhir_string value;
};

class CodeSystem_Property {
public:
    fhir_code code_;
    std::optional<fhir_string> description;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    fhir_code type;
    std::optional<fhir_uri> uri_;
};

class CodeableConcept {
public:
    std::vector<std::shared_ptr<Coding>> coding;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::optional<fhir_string> text;
};

class Coding {
public:
    std::optional<fhir_code> code_;
    std::optional<fhir_string> display;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::optional<fhir_uri> system;
    std::optional<fhir_boolean> user_selected;
    std::optional<fhir_string> version;
};

class Communication {
public:
    std::vector<std::shared_ptr<Reference>> about;
    std::vector<std::shared_ptr<Reference>> based_on;
    std::vector<std::shared_ptr<CodeableConcept>> category;
    std::vector<std::shared_ptr<Resource>> contained;
    std::optional<std::shared_ptr<Reference>> encounter;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Identifier>> identifier;
    std::optional<fhir_uri> implicit_rules;
    std::vector<std::shared_ptr<Reference>> in_response_to;
    std::vector<fhir_canonical> instantiates_canonical;
    std::vector<fhir_uri> instantiates_uri;
    std::optional<fhir_code> language;
    std::vector<std::shared_ptr<CodeableConcept>> medium;
    std::optional<std::shared_ptr<Meta>> meta;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::vector<std::shared_ptr<Annotation>> note;
    std::vector<std::shared_ptr<Reference>> part_of;
    std::vector<std::shared_ptr<Communication_Payload>> payload;
    std::optional<fhir_code> priority;
    std::vector<std::shared_ptr<CodeableConcept>> reason_code;
    std::vector<std::shared_ptr<Reference>> reason_reference;
    std::optional<fhir_dateTime> received;
    std::vector<std::shared_ptr<Reference>> recipient;
    std::optional<std::shared_ptr<Reference>> sender;
    std::optional<fhir_dateTime> sent;
    fhir_code status;
    std::optional<std::shared_ptr<CodeableConcept>> status_reason;
    std::optional<std::shared_ptr<Reference>> subject;
    std::optional<std::shared_ptr<Narrative>> text;
    std::optional<std::shared_ptr<CodeableConcept>> topic;
};

class Communication_Payload {
public:
    using CONTENT_Variant = std::variant<
        std::shared_ptr<fhir_string>,
        std::shared_ptr<Attachment>,
        std::shared_ptr<Reference>
    >;
    CONTENT_Variant content;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
};

class CommunicationRequest {
public:
    std::vector<std::shared_ptr<Reference>> about;
    std::optional<fhir_dateTime> authored_on;
    std::vector<std::shared_ptr<Reference>> based_on;
    std::vector<std::shared_ptr<CodeableConcept>> category;
    std::vector<std::shared_ptr<Resource>> contained;
    std::optional<fhir_boolean> do_not_perform;
    std::optional<std::shared_ptr<Reference>> encounter;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<Identifier>> group_identifier;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Identifier>> identifier;
    std::optional<fhir_uri> implicit_rules;
    std::optional<fhir_code> language;
    std::vector<std::shared_ptr<CodeableConcept>> medium;
    std::optional<std::shared_ptr<Meta>> meta;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::vector<std::shared_ptr<Annotation>> note;
    using OCCURRENCE_Variant = std::variant<
        std::shared_ptr<fhir_dateTime>,
        std::shared_ptr<Period>
    >;
    OCCURRENCE_Variant occurrence;
    std::vector<std::shared_ptr<CommunicationRequest_Payload>> payload;
    std::optional<fhir_code> priority;
    std::vector<std::shared_ptr<CodeableConcept>> reason_code;
    std::vector<std::shared_ptr<Reference>> reason_reference;
    std::vector<std::shared_ptr<Reference>> recipient;
    std::vector<std::shared_ptr<Reference>> replaces;
    std::optional<std::shared_ptr<Reference>> requester;
    std::optional<std::shared_ptr<Reference>> sender;
    fhir_code status;
    std::optional<std::shared_ptr<CodeableConcept>> status_reason;
    std::optional<std::shared_ptr<Reference>> subject;
    std::optional<std::shared_ptr<Narrative>> text;
};

class CommunicationRequest_Payload {
public:
    using CONTENT_Variant = std::variant<
        std::shared_ptr<fhir_string>,
        std::shared_ptr<Attachment>,
        std::shared_ptr<Reference>
    >;
    CONTENT_Variant content;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
};

class CompartmentDefinition {
public:
    fhir_code code_;
    std::vector<std::shared_ptr<ContactDetail>> contact;
    std::vector<std::shared_ptr<Resource>> contained;
    std::optional<fhir_dateTime> date_;
    std::optional<fhir_markdown> description;
    std::optional<fhir_boolean> experimental;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::optional<fhir_uri> implicit_rules;
    std::optional<fhir_code> language;
    std::optional<std::shared_ptr<Meta>> meta;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    fhir_string name;
    std::optional<fhir_string> publisher;
    std::optional<fhir_markdown> purpose;
    std::vector<std::shared_ptr<CompartmentDefinition_Resource>> resource;
    fhir_boolean search;
    fhir_code status;
    std::optional<std::shared_ptr<Narrative>> text;
    fhir_uri url_;
    std::vector<std::shared_ptr<UsageContext>> use_context;
    std::optional<fhir_string> version;
};

class CompartmentDefinition_Resource {
public:
    fhir_code code_;
    std::optional<fhir_string> documentation;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::vector<fhir_string> param;
};

class Composition {
public:
    std::vector<std::shared_ptr<Composition_Attester>> attester;
    std::vector<std::shared_ptr<CodeableConcept>> category;
    std::optional<fhir_code> confidentiality;
    std::vector<std::shared_ptr<Resource>> contained;
    std::optional<std::shared_ptr<Reference>> custodian;
    fhir_dateTime date_;
    std::optional<std::shared_ptr<Reference>> encounter;
    std::vector<std::shared_ptr<Composition_Event>> event;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::optional<std::shared_ptr<Identifier>> identifier;
    std::optional<fhir_uri> implicit_rules;
    std::optional<fhir_code> language;
    std::optional<std::shared_ptr<Meta>> meta;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::vector<std::shared_ptr<Composition_RelatesTo>> relates_to;
    std::vector<std::shared_ptr<Composition_Section>> section;
    fhir_code status;
    std::optional<std::shared_ptr<Reference>> subject;
    std::optional<std::shared_ptr<Narrative>> text;
    fhir_string title;
    std::shared_ptr<CodeableConcept> type;
};

class Composition_Attester {
public:
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    fhir_code mode;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<std::shared_ptr<Reference>> party;
    std::optional<fhir_dateTime> time_;
};

class Composition_Event {
public:
    std::vector<std::shared_ptr<CodeableConcept>> code_;
    std::vector<std::shared_ptr<Reference>> detail;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<std::shared_ptr<Period>> period;
};

class Composition_RelatesTo {
public:
    fhir_code code_;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    using TARGET_Variant = std::variant<
        std::shared_ptr<Identifier>,
        std::shared_ptr<Reference>
    >;
    TARGET_Variant target;
};

class Composition_Section {
public:
    std::vector<std::shared_ptr<Reference>> author;
    std::optional<std::shared_ptr<CodeableConcept>> code_;
    std::optional<std::shared_ptr<CodeableConcept>> empty_reason;
    std::vector<std::shared_ptr<Reference>> entry;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<Reference>> focus;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::optional<fhir_code> mode;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<std::shared_ptr<CodeableConcept>> ordered_by;
    std::vector<std::shared_ptr<Composition_Section>> section;
    std::optional<std::shared_ptr<Narrative>> text;
    std::optional<fhir_string> title;
};

class ConceptMap {
public:
    std::vector<std::shared_ptr<ContactDetail>> contact;
    std::vector<std::shared_ptr<Resource>> contained;
    std::optional<fhir_markdown> copyright;
    std::optional<fhir_dateTime> date_;
    std::optional<fhir_markdown> description;
    std::optional<fhir_boolean> experimental;
    std::vector<std::shared_ptr<Extension>> extension;
    std::vector<std::shared_ptr<ConceptMap_Group>> group;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::optional<std::shared_ptr<Identifier>> identifier;
    std::optional<fhir_uri> implicit_rules;
    std::vector<std::shared_ptr<CodeableConcept>> jurisdiction;
    std::optional<fhir_code> language;
    std::optional<std::shared_ptr<Meta>> meta;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<fhir_string> name;
    std::optional<fhir_string> publisher;
    std::optional<fhir_markdown> purpose;
    using SOURCE_Variant = std::variant<
        std::shared_ptr<fhir_uri>,
        std::shared_ptr<fhir_canonical>
    >;
    SOURCE_Variant source;
    fhir_code status;
    using TARGET_Variant = std::variant<
        std::shared_ptr<fhir_uri>,
        std::shared_ptr<fhir_canonical>
    >;
    TARGET_Variant target;
    std::optional<std::shared_ptr<Narrative>> text;
    std::optional<fhir_string> title;
    std::optional<fhir_uri> url_;
    std::vector<std::shared_ptr<UsageContext>> use_context;
    std::optional<fhir_string> version;
};

class ConceptMap_Group {
public:
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<fhir_uri> source;
    std::optional<fhir_string> source_version;
    std::optional<fhir_uri> target;
    std::optional<fhir_string> target_version;
    std::optional<std::shared_ptr<ConceptMap_Group_Unmapped>> unmapped;
};

class ConceptMap_Group_Element {
public:
    std::optional<fhir_code> code_;
    std::optional<fhir_string> display;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::vector<std::shared_ptr<ConceptMap_Group_Element_Target>> target;
};

class ConceptMap_Group_Element_Target {
public:
    std::optional<fhir_code> code_;
    std::optional<fhir_string> comment;
    std::vector<std::shared_ptr<ConceptMap_Group_Element_Target_DependsOn>> depends_on;
    std::optional<fhir_string> display;
    fhir_code equivalence;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::vector<std::shared_ptr<ConceptMap_Group_Element_Target_DependsOn>> product;
};

class ConceptMap_Group_Element_Target_DependsOn {
public:
    std::optional<fhir_string> display;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    fhir_uri property;
    std::optional<fhir_canonical> system;
    fhir_string value;
};

class ConceptMap_Group_Unmapped {
public:
    std::optional<fhir_code> code_;
    std::optional<fhir_string> display;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    fhir_code mode;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<fhir_canonical> url_;
};

class Condition {
public:
    using ABATEMENT_Variant = std::variant<
        std::shared_ptr<fhir_dateTime>,
        std::shared_ptr<Age>,
        std::shared_ptr<Period>,
        std::shared_ptr<Range>,
        std::shared_ptr<fhir_string>
    >;
    ABATEMENT_Variant abatement;
    std::optional<std::shared_ptr<Reference>> asserter;
    std::vector<std::shared_ptr<CodeableConcept>> body_site;
    std::vector<std::shared_ptr<CodeableConcept>> category;
    std::optional<std::shared_ptr<CodeableConcept>> clinical_status;
    std::optional<std::shared_ptr<CodeableConcept>> code_;
    std::vector<std::shared_ptr<Resource>> contained;
    std::optional<std::shared_ptr<Reference>> encounter;
    std::vector<std::shared_ptr<Condition_Evidence>> evidence;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Identifier>> identifier;
    std::optional<fhir_uri> implicit_rules;
    std::optional<fhir_code> language;
    std::optional<std::shared_ptr<Meta>> meta;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::vector<std::shared_ptr<Annotation>> note;
    using ONSET_Variant = std::variant<
        std::shared_ptr<fhir_dateTime>,
        std::shared_ptr<Age>,
        std::shared_ptr<Period>,
        std::shared_ptr<Range>,
        std::shared_ptr<fhir_string>
    >;
    ONSET_Variant onset;
    std::optional<fhir_dateTime> recorded_date;
    std::optional<std::shared_ptr<Reference>> recorder;
    std::optional<std::shared_ptr<CodeableConcept>> severity;
    std::vector<std::shared_ptr<Condition_Stage>> stage;
    std::shared_ptr<Reference> subject;
    std::optional<std::shared_ptr<Narrative>> text;
    std::optional<std::shared_ptr<CodeableConcept>> verification_status;
};

class Condition_Evidence {
public:
    std::vector<std::shared_ptr<CodeableConcept>> code_;
    std::vector<std::shared_ptr<Reference>> detail;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
};

class Condition_Stage {
public:
    std::vector<std::shared_ptr<Reference>> assessment;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<std::shared_ptr<CodeableConcept>> summary;
    std::optional<std::shared_ptr<CodeableConcept>> type;
};

class Consent {
public:
    std::vector<std::shared_ptr<Resource>> contained;
    std::optional<fhir_dateTime> date_time;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Identifier>> identifier;
    std::optional<fhir_uri> implicit_rules;
    std::optional<fhir_code> language;
    std::optional<std::shared_ptr<Meta>> meta;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::vector<std::shared_ptr<Reference>> organization;
    std::optional<std::shared_ptr<Reference>> patient;
    std::vector<std::shared_ptr<Reference>> performer;
    std::vector<std::shared_ptr<Consent_Policy>> policy;
    std::optional<std::shared_ptr<CodeableConcept>> policy_rule;
    std::optional<std::shared_ptr<Consent_Provision>> provision;
    std::shared_ptr<CodeableConcept> scope;
    using SOURCE_Variant = std::variant<
        std::shared_ptr<Attachment>,
        std::shared_ptr<Reference>
    >;
    SOURCE_Variant source;
    fhir_code status;
    std::optional<std::shared_ptr<Narrative>> text;
    std::vector<std::shared_ptr<Consent_Verification>> verification;
};

class Consent_Policy {
public:
    std::optional<fhir_uri> authority;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<fhir_uri> uri_;
};

class Consent_Provision {
public:
    std::vector<std::shared_ptr<CodeableConcept>> action;
    std::vector<std::shared_ptr<Consent_Provision_Actor>> actor;
    std::vector<std::shared_ptr<Coding>> class_;
    std::vector<std::shared_ptr<CodeableConcept>> code_;
    std::vector<std::shared_ptr<Consent_Provision_Data>> data;
    std::optional<std::shared_ptr<Period>> data_period;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<std::shared_ptr<Period>> period;
    std::vector<std::shared_ptr<Consent_Provision>> provision;
    std::vector<std::shared_ptr<Coding>> purpose;
    std::vector<std::shared_ptr<Coding>> security_label;
    std::optional<fhir_code> type;
};

class Consent_Provision_Actor {
public:
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::shared_ptr<Reference> reference;
    std::shared_ptr<CodeableConcept> role;
};

class Consent_Provision_Data {
public:
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    fhir_code meaning;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::shared_ptr<Reference> reference;
};

class Consent_Verification {
public:
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<fhir_dateTime> verification_date;
    fhir_boolean verified;
    std::optional<std::shared_ptr<Reference>> verified_with;
};

class ContactDetail {
public:
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::optional<fhir_string> name;
    std::vector<std::shared_ptr<ContactPoint>> telecom;
};

class ContactPoint {
public:
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::optional<std::shared_ptr<Period>> period;
    std::optional<fhir_positiveInt> rank;
    std::optional<fhir_code> system;
    std::optional<fhir_code> use;
    std::optional<fhir_string> value;
};

class Contract {
public:
    std::vector<fhir_string> alias;
    std::optional<std::shared_ptr<Period>> applies;
    std::optional<std::shared_ptr<Reference>> author;
    std::vector<std::shared_ptr<Reference>> authority;
    std::vector<std::shared_ptr<Resource>> contained;
    std::optional<std::shared_ptr<Contract_ContentDefinition>> content_definition;
    std::optional<std::shared_ptr<CodeableConcept>> content_derivative;
    std::vector<std::shared_ptr<Reference>> domain;
    std::optional<std::shared_ptr<CodeableConcept>> expiration_type;
    std::vector<std::shared_ptr<Extension>> extension;
    std::vector<std::shared_ptr<Contract_Friendly>> friendly;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Identifier>> identifier;
    std::optional<fhir_uri> implicit_rules;
    std::optional<std::shared_ptr<Reference>> instantiates_canonical;
    std::optional<fhir_uri> instantiates_uri;
    std::optional<fhir_dateTime> issued;
    std::optional<fhir_code> language;
    std::vector<std::shared_ptr<Contract_Legal>> legal;
    std::optional<std::shared_ptr<CodeableConcept>> legal_state;
    using LEGALLY_BINDING_Variant = std::variant<
        std::shared_ptr<Attachment>,
        std::shared_ptr<Reference>
    >;
    LEGALLY_BINDING_Variant legally_binding;
    std::optional<std::shared_ptr<Meta>> meta;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<fhir_string> name;
    std::vector<std::shared_ptr<Reference>> relevant_history;
    std::vector<std::shared_ptr<Contract_Rule>> rule;
    std::optional<std::shared_ptr<CodeableConcept>> scope;
    std::vector<std::shared_ptr<Contract_Signer>> signer;
    std::vector<std::shared_ptr<Reference>> site;
    std::optional<fhir_code> status;
    std::vector<std::shared_ptr<CodeableConcept>> sub_type;
    std::vector<std::shared_ptr<Reference>> subject;
    std::optional<fhir_string> subtitle;
    std::vector<std::shared_ptr<Reference>> supporting_info;
    std::vector<std::shared_ptr<Contract_Term>> term;
    std::optional<std::shared_ptr<Narrative>> text;
    std::optional<fhir_string> title;
    using TOPIC_Variant = std::variant<
        std::shared_ptr<CodeableConcept>,
        std::shared_ptr<Reference>
    >;
    TOPIC_Variant topic;
    std::optional<std::shared_ptr<CodeableConcept>> type;
    std::optional<fhir_uri> url_;
    std::optional<fhir_string> version;
};

class Contract_ContentDefinition {
public:
    std::optional<fhir_markdown> copyright;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<fhir_dateTime> publication_date;
    fhir_code publication_status;
    std::optional<std::shared_ptr<Reference>> publisher;
    std::optional<std::shared_ptr<CodeableConcept>> sub_type;
    std::shared_ptr<CodeableConcept> type;
};

class Contract_Friendly {
public:
    using CONTENT_Variant = std::variant<
        std::shared_ptr<Attachment>,
        std::shared_ptr<Reference>
    >;
    CONTENT_Variant content;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
};

class Contract_Legal {
public:
    using CONTENT_Variant = std::variant<
        std::shared_ptr<Attachment>,
        std::shared_ptr<Reference>
    >;
    CONTENT_Variant content;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
};

class Contract_Rule {
public:
    using CONTENT_Variant = std::variant<
        std::shared_ptr<Attachment>,
        std::shared_ptr<Reference>
    >;
    CONTENT_Variant content;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
};

class Contract_Signer {
public:
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::shared_ptr<Reference> party;
    std::shared_ptr<Coding> type;
};

class Contract_Term {
public:
    std::vector<std::shared_ptr<Contract_Term_Action>> action;
    std::optional<std::shared_ptr<Period>> applies;
    std::vector<std::shared_ptr<Contract_Term_Asset>> asset;
    std::vector<std::shared_ptr<Extension>> extension;
    std::vector<std::shared_ptr<Contract_Term>> group;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::optional<std::shared_ptr<Identifier>> identifier;
    std::optional<fhir_dateTime> issued;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::shared_ptr<Contract_Term_Offer> offer;
    std::vector<std::shared_ptr<Contract_Term_SecurityLabel>> security_label;
    std::optional<std::shared_ptr<CodeableConcept>> sub_type;
    std::optional<fhir_string> text;
    using TOPIC_Variant = std::variant<
        std::shared_ptr<CodeableConcept>,
        std::shared_ptr<Reference>
    >;
    TOPIC_Variant topic;
    std::optional<std::shared_ptr<CodeableConcept>> type;
};

class Contract_Term_Action {
public:
    std::optional<std::shared_ptr<Reference>> context;
    std::vector<fhir_string> context_link_id;
    std::optional<fhir_boolean> do_not_perform;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::shared_ptr<CodeableConcept> intent;
    std::vector<fhir_string> link_id;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::vector<std::shared_ptr<Annotation>> note;
    using OCCURRENCE_Variant = std::variant<
        std::shared_ptr<fhir_dateTime>,
        std::shared_ptr<Period>,
        std::shared_ptr<Timing>
    >;
    OCCURRENCE_Variant occurrence;
    std::optional<std::shared_ptr<Reference>> performer;
    std::vector<fhir_string> performer_link_id;
    std::optional<std::shared_ptr<CodeableConcept>> performer_role;
    std::vector<std::shared_ptr<CodeableConcept>> performer_type;
    std::vector<fhir_string> reason;
    std::vector<std::shared_ptr<CodeableConcept>> reason_code;
    std::vector<fhir_string> reason_link_id;
    std::vector<std::shared_ptr<Reference>> reason_reference;
    std::vector<std::shared_ptr<Reference>> requester;
    std::vector<fhir_string> requester_link_id;
    std::vector<fhir_unsignedInt> security_label_number;
    std::shared_ptr<CodeableConcept> status;
    std::vector<std::shared_ptr<Contract_Term_Action_Subject>> subject;
    std::shared_ptr<CodeableConcept> type;
};

class Contract_Term_Action_Subject {
public:
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<std::shared_ptr<CodeableConcept>> role;
};

class Contract_Term_Asset {
public:
    std::vector<std::shared_ptr<Contract_Term_Offer_Answer>> answer;
    std::optional<fhir_string> condition;
    std::vector<std::shared_ptr<Contract_Term_Asset_Context>> context;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<fhir_string> link_id;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::vector<std::shared_ptr<Period>> period;
    std::vector<std::shared_ptr<CodeableConcept>> period_type;
    std::optional<std::shared_ptr<Coding>> relationship;
    std::optional<std::shared_ptr<CodeableConcept>> scope;
    std::vector<fhir_unsignedInt> security_label_number;
    std::vector<std::shared_ptr<CodeableConcept>> subtype;
    std::optional<fhir_string> text;
    std::vector<std::shared_ptr<CodeableConcept>> type;
    std::vector<std::shared_ptr<Reference>> type_reference;
    std::vector<std::shared_ptr<Period>> use_period;
    std::vector<std::shared_ptr<Contract_Term_Asset_ValuedItem>> valued_item;
};

class Contract_Term_Asset_Context {
public:
    std::vector<std::shared_ptr<CodeableConcept>> code_;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<std::shared_ptr<Reference>> reference;
    std::optional<fhir_string> text;
};

class Contract_Term_Asset_ValuedItem {
public:
    std::optional<fhir_dateTime> effective_time;
    using ENTITY_Variant = std::variant<
        std::shared_ptr<CodeableConcept>,
        std::shared_ptr<Reference>
    >;
    ENTITY_Variant entity;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<fhir_decimal> factor;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::optional<std::shared_ptr<Identifier>> identifier;
    std::vector<fhir_string> link_id;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<std::shared_ptr<Money>> net;
    std::optional<fhir_string> payment;
    std::optional<fhir_dateTime> payment_date;
    std::optional<fhir_decimal> points;
    std::optional<std::shared_ptr<Quantity>> quantity;
    std::optional<std::shared_ptr<Reference>> recipient;
    std::optional<std::shared_ptr<Reference>> responsible;
    std::vector<fhir_unsignedInt> security_label_number;
    std::optional<std::shared_ptr<Money>> unit_price;
};

class Contract_Term_Offer {
public:
    std::vector<std::shared_ptr<Contract_Term_Offer_Answer>> answer;
    std::optional<std::shared_ptr<CodeableConcept>> decision;
    std::vector<std::shared_ptr<CodeableConcept>> decision_mode;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Identifier>> identifier;
    std::vector<fhir_string> link_id;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::vector<std::shared_ptr<Contract_Term_Offer_Party>> party;
    std::vector<fhir_unsignedInt> security_label_number;
    std::optional<fhir_string> text;
    std::optional<std::shared_ptr<Reference>> topic;
    std::optional<std::shared_ptr<CodeableConcept>> type;
};

class Contract_Term_Offer_Answer {
public:
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    using VALUE_Variant = std::variant<
        std::shared_ptr<fhir_boolean>,
        std::shared_ptr<fhir_decimal>,
        std::shared_ptr<fhir_integer>,
        std::shared_ptr<fhir_date>,
        std::shared_ptr<fhir_dateTime>,
        std::shared_ptr<fhir_time>,
        std::shared_ptr<fhir_string>,
        std::shared_ptr<fhir_uri>,
        std::shared_ptr<Attachment>,
        std::shared_ptr<Coding>,
        std::shared_ptr<Quantity>,
        std::shared_ptr<Reference>
    >;
    VALUE_Variant value;
};

class Contract_Term_Offer_Party {
public:
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::shared_ptr<CodeableConcept> role;
};

class Contract_Term_SecurityLabel {
public:
    std::vector<std::shared_ptr<Coding>> category;
    std::shared_ptr<Coding> classification;
    std::vector<std::shared_ptr<Coding>> control;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::vector<fhir_unsignedInt> number;
};

class Contributor {
public:
    std::vector<std::shared_ptr<ContactDetail>> contact;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    fhir_string name;
    fhir_code type;
};

class Count {
public:
    std::optional<fhir_code> code_;
    std::optional<fhir_code> comparator;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::optional<fhir_uri> system;
    std::optional<fhir_string> unit;
    std::optional<fhir_decimal> value;
};

class Coverage {
public:
    std::shared_ptr<Reference> beneficiary;
    std::vector<std::shared_ptr<Coverage_Class>> class_;
    std::vector<std::shared_ptr<Resource>> contained;
    std::vector<std::shared_ptr<Reference>> contract;
    std::vector<std::shared_ptr<Coverage_CostToBeneficiary>> cost_to_beneficiary;
    std::optional<fhir_string> dependent;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Identifier>> identifier;
    std::optional<fhir_uri> implicit_rules;
    std::optional<fhir_code> language;
    std::optional<std::shared_ptr<Meta>> meta;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<fhir_string> network;
    std::optional<fhir_positiveInt> order;
    std::optional<std::shared_ptr<Period>> period;
    std::optional<std::shared_ptr<Reference>> policy_holder;
    std::optional<std::shared_ptr<CodeableConcept>> relationship;
    fhir_code status;
    std::optional<fhir_boolean> subrogation;
    std::optional<std::shared_ptr<Reference>> subscriber;
    std::optional<fhir_string> subscriber_id;
    std::optional<std::shared_ptr<Narrative>> text;
    std::optional<std::shared_ptr<CodeableConcept>> type;
};

class Coverage_Class {
public:
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<fhir_string> name;
    std::shared_ptr<CodeableConcept> type;
    fhir_string value;
};

class Coverage_CostToBeneficiary {
public:
    std::vector<std::shared_ptr<Coverage_CostToBeneficiary_Exception>> exception;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<std::shared_ptr<CodeableConcept>> type;
    using VALUE_Variant = std::variant<
        std::shared_ptr<Quantity>,
        std::shared_ptr<Money>
    >;
    VALUE_Variant value;
};

class Coverage_CostToBeneficiary_Exception {
public:
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<std::shared_ptr<Period>> period;
    std::shared_ptr<CodeableConcept> type;
};

class CoverageEligibilityRequest {
public:
    std::vector<std::shared_ptr<Resource>> contained;
    fhir_dateTime created;
    std::optional<std::shared_ptr<Reference>> enterer;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<Reference>> facility;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Identifier>> identifier;
    std::optional<fhir_uri> implicit_rules;
    std::vector<std::shared_ptr<CoverageEligibilityRequest_Insurance>> insurance;
    std::shared_ptr<Reference> insurer;
    std::vector<std::shared_ptr<CoverageEligibilityRequest_Item>> item;
    std::optional<fhir_code> language;
    std::optional<std::shared_ptr<Meta>> meta;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::shared_ptr<Reference> patient;
    std::optional<std::shared_ptr<CodeableConcept>> priority;
    std::optional<std::shared_ptr<Reference>> provider;
    using SERVICED_Variant = std::variant<
        std::shared_ptr<fhir_date>,
        std::shared_ptr<Period>
    >;
    SERVICED_Variant serviced;
    fhir_code status;
    std::vector<std::shared_ptr<CoverageEligibilityRequest_SupportingInfo>> supporting_info;
    std::optional<std::shared_ptr<Narrative>> text;
};

class CoverageEligibilityRequest_Insurance {
public:
    std::optional<fhir_string> business_arrangement;
    std::shared_ptr<Reference> coverage;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<fhir_boolean> focal;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
};

class CoverageEligibilityRequest_Item {
public:
    std::optional<std::shared_ptr<CodeableConcept>> category;
    std::vector<std::shared_ptr<Reference>> detail;
    std::vector<std::shared_ptr<CoverageEligibilityRequest_Item_Diagnosis>> diagnosis;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<Reference>> facility;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<CodeableConcept>> modifier;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<std::shared_ptr<CodeableConcept>> product_or_service;
    std::optional<std::shared_ptr<Reference>> provider;
    std::optional<std::shared_ptr<Quantity>> quantity;
    std::vector<fhir_positiveInt> supporting_info_sequence;
    std::optional<std::shared_ptr<Money>> unit_price;
};

class CoverageEligibilityRequest_Item_Diagnosis {
public:
    using DIAGNOSIS_Variant = std::variant<
        std::shared_ptr<CodeableConcept>,
        std::shared_ptr<Reference>
    >;
    DIAGNOSIS_Variant diagnosis;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
};

class CoverageEligibilityRequest_SupportingInfo {
public:
    std::optional<fhir_boolean> applies_to_all;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::shared_ptr<Reference> information;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    fhir_positiveInt sequence;
};

class CoverageEligibilityResponse {
public:
    std::vector<std::shared_ptr<Resource>> contained;
    fhir_dateTime created;
    std::optional<fhir_string> disposition;
    std::vector<std::shared_ptr<CoverageEligibilityResponse_Error>> error;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<CodeableConcept>> form;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Identifier>> identifier;
    std::optional<fhir_uri> implicit_rules;
    std::vector<std::shared_ptr<CoverageEligibilityResponse_Insurance>> insurance;
    std::shared_ptr<Reference> insurer;
    std::optional<fhir_code> language;
    std::optional<std::shared_ptr<Meta>> meta;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    fhir_code outcome;
    std::shared_ptr<Reference> patient;
    std::optional<fhir_string> pre_auth_ref;
    std::shared_ptr<Reference> request;
    std::optional<std::shared_ptr<Reference>> requestor;
    using SERVICED_Variant = std::variant<
        std::shared_ptr<fhir_date>,
        std::shared_ptr<Period>
    >;
    SERVICED_Variant serviced;
    fhir_code status;
    std::optional<std::shared_ptr<Narrative>> text;
};

class CoverageEligibilityResponse_Error {
public:
    std::shared_ptr<CodeableConcept> code_;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
};

class CoverageEligibilityResponse_Insurance {
public:
    std::optional<std::shared_ptr<Period>> benefit_period;
    std::shared_ptr<Reference> coverage;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::optional<fhir_boolean> inforce;
    std::vector<std::shared_ptr<CoverageEligibilityResponse_Insurance_Item>> item;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
};

class CoverageEligibilityResponse_Insurance_Item {
public:
    std::optional<fhir_boolean> authorization_required;
    std::vector<std::shared_ptr<CodeableConcept>> authorization_supporting;
    std::optional<fhir_uri> authorization_url;
    std::vector<std::shared_ptr<CoverageEligibilityResponse_Insurance_Item_Benefit>> benefit;
    std::optional<std::shared_ptr<CodeableConcept>> category;
    std::optional<fhir_string> description;
    std::optional<fhir_boolean> excluded;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<CodeableConcept>> modifier;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<fhir_string> name;
    std::optional<std::shared_ptr<CodeableConcept>> network;
    std::optional<std::shared_ptr<CodeableConcept>> product_or_service;
    std::optional<std::shared_ptr<Reference>> provider;
    std::optional<std::shared_ptr<CodeableConcept>> term;
    std::optional<std::shared_ptr<CodeableConcept>> unit;
};

class CoverageEligibilityResponse_Insurance_Item_Benefit {
public:
    using ALLOWED_Variant = std::variant<
        std::shared_ptr<fhir_unsignedInt>,
        std::shared_ptr<fhir_string>,
        std::shared_ptr<Money>
    >;
    ALLOWED_Variant allowed;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::shared_ptr<CodeableConcept> type;
    using USED_Variant = std::variant<
        std::shared_ptr<fhir_unsignedInt>,
        std::shared_ptr<fhir_string>,
        std::shared_ptr<Money>
    >;
    USED_Variant used;
};

class DataRequirement {
public:
    std::vector<std::shared_ptr<DataRequirement_CodeFilter>> code_filter;
    std::vector<std::shared_ptr<DataRequirement_DateFilter>> date_filter;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::optional<fhir_positiveInt> limit;
    std::vector<fhir_string> must_support;
    std::vector<fhir_canonical> profile;
    std::vector<std::shared_ptr<DataRequirement_Sort>> sort;
    using SUBJECT_Variant = std::variant<
        std::shared_ptr<CodeableConcept>,
        std::shared_ptr<Reference>
    >;
    SUBJECT_Variant subject;
    fhir_code type;
};

class DataRequirement_CodeFilter {
public:
    std::vector<std::shared_ptr<Coding>> code_;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::optional<fhir_string> path;
    std::optional<fhir_string> search_param;
    std::optional<fhir_canonical> value_set;
};

class DataRequirement_DateFilter {
public:
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::optional<fhir_string> path;
    std::optional<fhir_string> search_param;
    using VALUE_Variant = std::variant<
        std::shared_ptr<fhir_dateTime>,
        std::shared_ptr<Period>,
        std::shared_ptr<Duration>
    >;
    VALUE_Variant value;
};

class DataRequirement_Sort {
public:
    fhir_code direction;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    fhir_string path;
};

class DetectedIssue {
public:
    std::optional<std::shared_ptr<Reference>> author;
    std::optional<std::shared_ptr<CodeableConcept>> code_;
    std::vector<std::shared_ptr<Resource>> contained;
    std::optional<fhir_string> detail;
    std::vector<std::shared_ptr<DetectedIssue_Evidence>> evidence;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    using IDENTIFIED_Variant = std::variant<
        std::shared_ptr<fhir_dateTime>,
        std::shared_ptr<Period>
    >;
    IDENTIFIED_Variant identified;
    std::vector<std::shared_ptr<Identifier>> identifier;
    std::vector<std::shared_ptr<Reference>> implicated;
    std::optional<fhir_uri> implicit_rules;
    std::optional<fhir_code> language;
    std::optional<std::shared_ptr<Meta>> meta;
    std::vector<std::shared_ptr<DetectedIssue_Mitigation>> mitigation;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<std::shared_ptr<Reference>> patient;
    std::optional<fhir_uri> reference;
    std::optional<fhir_code> severity;
    fhir_code status;
    std::optional<std::shared_ptr<Narrative>> text;
};

class DetectedIssue_Evidence {
public:
    std::vector<std::shared_ptr<CodeableConcept>> code_;
    std::vector<std::shared_ptr<Reference>> detail;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
};

class DetectedIssue_Mitigation {
public:
    std::shared_ptr<CodeableConcept> action;
    std::optional<std::shared_ptr<Reference>> author;
    std::optional<fhir_dateTime> date_;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
};

class Device {
public:
    std::vector<std::shared_ptr<ContactPoint>> contact;
    std::vector<std::shared_ptr<Resource>> contained;
    std::optional<std::shared_ptr<Reference>> definition;
    std::vector<std::shared_ptr<Device_DeviceName>> device_name;
    std::optional<fhir_string> distinct_identifier;
    std::optional<fhir_dateTime> expiration_date;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Identifier>> identifier;
    std::optional<fhir_uri> implicit_rules;
    std::optional<fhir_code> language;
    std::optional<std::shared_ptr<Reference>> location;
    std::optional<fhir_string> lot_number;
    std::optional<fhir_dateTime> manufacture_date;
    std::optional<fhir_string> manufacturer;
    std::optional<std::shared_ptr<Meta>> meta;
    std::optional<fhir_string> model_number;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::vector<std::shared_ptr<Annotation>> note;
    std::optional<std::shared_ptr<Reference>> owner;
    std::optional<std::shared_ptr<Reference>> parent;
    std::optional<fhir_string> part_number;
    std::optional<std::shared_ptr<Reference>> patient;
    std::vector<std::shared_ptr<Device_Property>> property;
    std::vector<std::shared_ptr<CodeableConcept>> safety;
    std::optional<fhir_string> serial_number;
    std::vector<std::shared_ptr<Device_Specialization>> specialization;
    std::optional<fhir_code> status;
    std::vector<std::shared_ptr<CodeableConcept>> status_reason;
    std::optional<std::shared_ptr<Narrative>> text;
    std::optional<std::shared_ptr<CodeableConcept>> type;
    std::vector<std::shared_ptr<Device_UdiCarrier>> udi_carrier;
    std::optional<fhir_uri> url_;
    std::vector<std::shared_ptr<Device_Version>> version;
};

class Device_DeviceName {
public:
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    fhir_string name;
    fhir_code type;
};

class Device_Property {
public:
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::shared_ptr<CodeableConcept> type;
    std::vector<std::shared_ptr<CodeableConcept>> value_code;
    std::vector<std::shared_ptr<Quantity>> value_quantity;
};

class Device_Specialization {
public:
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::shared_ptr<CodeableConcept> system_type;
    std::optional<fhir_string> version;
};

class Device_UdiCarrier {
public:
    std::optional<fhir_base64Binary> carrier_a_i_d_c;
    std::optional<fhir_string> carrier_h_r_f;
    std::optional<fhir_string> device_identifier;
    std::optional<fhir_code> entry_type;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::optional<fhir_uri> issuer;
    std::optional<fhir_uri> jurisdiction;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
};

class Device_Version {
public:
    std::optional<std::shared_ptr<Identifier>> component;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<std::shared_ptr<CodeableConcept>> type;
    fhir_string value;
};

class DeviceDefinition {
public:
    std::vector<std::shared_ptr<DeviceDefinition_Capability>> capability;
    std::vector<std::shared_ptr<ContactPoint>> contact;
    std::vector<std::shared_ptr<Resource>> contained;
    std::vector<std::shared_ptr<DeviceDefinition_DeviceName>> device_name;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Identifier>> identifier;
    std::optional<fhir_uri> implicit_rules;
    std::optional<fhir_code> language;
    std::vector<std::shared_ptr<CodeableConcept>> language_code;
    using MANUFACTURER_Variant = std::variant<
        std::shared_ptr<fhir_string>,
        std::shared_ptr<Reference>
    >;
    MANUFACTURER_Variant manufacturer;
    std::vector<std::shared_ptr<DeviceDefinition_Material>> material;
    std::optional<std::shared_ptr<Meta>> meta;
    std::optional<fhir_string> model_number;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::vector<std::shared_ptr<Annotation>> note;
    std::optional<fhir_uri> online_information;
    std::optional<std::shared_ptr<Reference>> owner;
    std::optional<std::shared_ptr<Reference>> parent_device;
    std::optional<std::shared_ptr<ProdCharacteristic>> physical_characteristics;
    std::vector<std::shared_ptr<DeviceDefinition_Property>> property;
    std::optional<std::shared_ptr<Quantity>> quantity;
    std::vector<std::shared_ptr<CodeableConcept>> safety;
    std::vector<std::shared_ptr<ProductShelfLife>> shelf_life_storage;
    std::vector<std::shared_ptr<DeviceDefinition_Specialization>> specialization;
    std::optional<std::shared_ptr<Narrative>> text;
    std::optional<std::shared_ptr<CodeableConcept>> type;
    std::vector<std::shared_ptr<DeviceDefinition_UdiDeviceIdentifier>> udi_device_identifier;
    std::optional<fhir_uri> url_;
    std::vector<fhir_string> version;
};

class DeviceDefinition_Capability {
public:
    std::vector<std::shared_ptr<CodeableConcept>> description;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::shared_ptr<CodeableConcept> type;
};

class DeviceDefinition_DeviceName {
public:
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    fhir_string name;
    fhir_code type;
};

class DeviceDefinition_Material {
public:
    std::optional<fhir_boolean> allergenic_indicator;
    std::optional<fhir_boolean> alternate;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::shared_ptr<CodeableConcept> substance;
};

class DeviceDefinition_Property {
public:
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::shared_ptr<CodeableConcept> type;
    std::vector<std::shared_ptr<CodeableConcept>> value_code;
    std::vector<std::shared_ptr<Quantity>> value_quantity;
};

class DeviceDefinition_Specialization {
public:
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    fhir_string system_type;
    std::optional<fhir_string> version;
};

class DeviceDefinition_UdiDeviceIdentifier {
public:
    fhir_string device_identifier;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    fhir_uri issuer;
    fhir_uri jurisdiction;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
};

class DeviceMetric {
public:
    std::vector<std::shared_ptr<DeviceMetric_Calibration>> calibration;
    fhir_code category;
    std::optional<fhir_code> color;
    std::vector<std::shared_ptr<Resource>> contained;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Identifier>> identifier;
    std::optional<fhir_uri> implicit_rules;
    std::optional<fhir_code> language;
    std::optional<std::shared_ptr<Timing>> measurement_period;
    std::optional<std::shared_ptr<Meta>> meta;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<fhir_code> operational_status;
    std::optional<std::shared_ptr<Reference>> parent;
    std::optional<std::shared_ptr<Reference>> source;
    std::optional<std::shared_ptr<Narrative>> text;
    std::shared_ptr<CodeableConcept> type;
    std::optional<std::shared_ptr<CodeableConcept>> unit;
};

class DeviceMetric_Calibration {
public:
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<fhir_code> state;
    std::optional<fhir_instant> time_;
    std::optional<fhir_code> type;
};

class DeviceRequest {
public:
    std::optional<fhir_dateTime> authored_on;
    std::vector<std::shared_ptr<Reference>> based_on;
    using CODE_Variant = std::variant<
        std::shared_ptr<Reference>,
        std::shared_ptr<CodeableConcept>
    >;
    CODE_Variant code_;
    std::vector<std::shared_ptr<Resource>> contained;
    std::optional<std::shared_ptr<Reference>> encounter;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<Identifier>> group_identifier;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Identifier>> identifier;
    std::optional<fhir_uri> implicit_rules;
    std::vector<fhir_canonical> instantiates_canonical;
    std::vector<fhir_uri> instantiates_uri;
    std::vector<std::shared_ptr<Reference>> insurance;
    fhir_code intent;
    std::optional<fhir_code> language;
    std::optional<std::shared_ptr<Meta>> meta;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::vector<std::shared_ptr<Annotation>> note;
    using OCCURRENCE_Variant = std::variant<
        std::shared_ptr<fhir_dateTime>,
        std::shared_ptr<Period>,
        std::shared_ptr<Timing>
    >;
    OCCURRENCE_Variant occurrence;
    std::vector<std::shared_ptr<DeviceRequest_Parameter>> parameter;
    std::optional<std::shared_ptr<Reference>> performer;
    std::optional<std::shared_ptr<CodeableConcept>> performer_type;
    std::vector<std::shared_ptr<Reference>> prior_request;
    std::optional<fhir_code> priority;
    std::vector<std::shared_ptr<CodeableConcept>> reason_code;
    std::vector<std::shared_ptr<Reference>> reason_reference;
    std::vector<std::shared_ptr<Reference>> relevant_history;
    std::optional<std::shared_ptr<Reference>> requester;
    std::optional<fhir_code> status;
    std::shared_ptr<Reference> subject;
    std::vector<std::shared_ptr<Reference>> supporting_info;
    std::optional<std::shared_ptr<Narrative>> text;
};

class DeviceRequest_Parameter {
public:
    std::optional<std::shared_ptr<CodeableConcept>> code_;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    using VALUE_Variant = std::variant<
        std::shared_ptr<CodeableConcept>,
        std::shared_ptr<Quantity>,
        std::shared_ptr<Range>,
        std::shared_ptr<fhir_boolean>
    >;
    VALUE_Variant value;
};

class DeviceUseStatement {
public:
    std::vector<std::shared_ptr<Reference>> based_on;
    std::optional<std::shared_ptr<CodeableConcept>> body_site;
    std::vector<std::shared_ptr<Resource>> contained;
    std::vector<std::shared_ptr<Reference>> derived_from;
    std::shared_ptr<Reference> device;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Identifier>> identifier;
    std::optional<fhir_uri> implicit_rules;
    std::optional<fhir_code> language;
    std::optional<std::shared_ptr<Meta>> meta;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::vector<std::shared_ptr<Annotation>> note;
    std::vector<std::shared_ptr<CodeableConcept>> reason_code;
    std::vector<std::shared_ptr<Reference>> reason_reference;
    std::optional<fhir_dateTime> recorded_on;
    std::optional<std::shared_ptr<Reference>> source;
    fhir_code status;
    std::shared_ptr<Reference> subject;
    std::optional<std::shared_ptr<Narrative>> text;
    using TIMING_Variant = std::variant<
        std::shared_ptr<Timing>,
        std::shared_ptr<Period>,
        std::shared_ptr<fhir_dateTime>
    >;
    TIMING_Variant timing;
};

class DiagnosticReport {
public:
    std::vector<std::shared_ptr<Reference>> based_on;
    std::vector<std::shared_ptr<CodeableConcept>> category;
    std::shared_ptr<CodeableConcept> code_;
    std::optional<fhir_string> conclusion;
    std::vector<std::shared_ptr<CodeableConcept>> conclusion_code;
    std::vector<std::shared_ptr<Resource>> contained;
    using EFFECTIVE_Variant = std::variant<
        std::shared_ptr<fhir_dateTime>,
        std::shared_ptr<Period>
    >;
    EFFECTIVE_Variant effective;
    std::optional<std::shared_ptr<Reference>> encounter;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Identifier>> identifier;
    std::vector<std::shared_ptr<Reference>> imaging_study;
    std::optional<fhir_uri> implicit_rules;
    std::optional<fhir_instant> issued;
    std::optional<fhir_code> language;
    std::vector<std::shared_ptr<DiagnosticReport_Media>> media;
    std::optional<std::shared_ptr<Meta>> meta;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::vector<std::shared_ptr<Reference>> performer;
    std::vector<std::shared_ptr<Attachment>> presented_form;
    std::vector<std::shared_ptr<Reference>> result;
    std::vector<std::shared_ptr<Reference>> results_interpreter;
    std::vector<std::shared_ptr<Reference>> specimen;
    fhir_code status;
    std::optional<std::shared_ptr<Reference>> subject;
    std::optional<std::shared_ptr<Narrative>> text;
};

class DiagnosticReport_Media {
public:
    std::optional<fhir_string> comment;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::shared_ptr<Reference> link;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
};

class Distance {
public:
    std::optional<fhir_code> code_;
    std::optional<fhir_code> comparator;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::optional<fhir_uri> system;
    std::optional<fhir_string> unit;
    std::optional<fhir_decimal> value;
};

class DocumentManifest {
public:
    std::vector<std::shared_ptr<Reference>> author;
    std::vector<std::shared_ptr<Resource>> contained;
    std::optional<fhir_dateTime> created;
    std::optional<fhir_string> description;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Identifier>> identifier;
    std::optional<fhir_uri> implicit_rules;
    std::optional<fhir_code> language;
    std::optional<std::shared_ptr<Identifier>> master_identifier;
    std::optional<std::shared_ptr<Meta>> meta;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::vector<std::shared_ptr<Reference>> recipient;
    std::vector<std::shared_ptr<DocumentManifest_Related>> related;
    std::optional<fhir_uri> source;
    fhir_code status;
    std::optional<std::shared_ptr<Reference>> subject;
    std::optional<std::shared_ptr<Narrative>> text;
    std::optional<std::shared_ptr<CodeableConcept>> type;
};

class DocumentManifest_Related {
public:
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::optional<std::shared_ptr<Identifier>> identifier;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<std::shared_ptr<Reference>> ref;
};

class DocumentReference {
public:
    std::optional<std::shared_ptr<Reference>> authenticator;
    std::vector<std::shared_ptr<Reference>> author;
    std::vector<std::shared_ptr<CodeableConcept>> category;
    std::vector<std::shared_ptr<Resource>> contained;
    std::optional<std::shared_ptr<DocumentReference_Context>> context;
    std::optional<std::shared_ptr<Reference>> custodian;
    std::optional<fhir_instant> date_;
    std::optional<fhir_string> description;
    std::optional<fhir_code> doc_status;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Identifier>> identifier;
    std::optional<fhir_uri> implicit_rules;
    std::optional<fhir_code> language;
    std::optional<std::shared_ptr<Identifier>> master_identifier;
    std::optional<std::shared_ptr<Meta>> meta;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::vector<std::shared_ptr<DocumentReference_RelatesTo>> relates_to;
    std::vector<std::shared_ptr<CodeableConcept>> security_label;
    fhir_code status;
    std::optional<std::shared_ptr<Reference>> subject;
    std::optional<std::shared_ptr<Narrative>> text;
    std::optional<std::shared_ptr<CodeableConcept>> type;
};

class DocumentReference_Content {
public:
    std::shared_ptr<Attachment> attachment;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<Coding>> format;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
};

class DocumentReference_Context {
public:
    std::vector<std::shared_ptr<Reference>> encounter;
    std::vector<std::shared_ptr<CodeableConcept>> event;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<CodeableConcept>> facility_type;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<std::shared_ptr<Period>> period;
    std::optional<std::shared_ptr<CodeableConcept>> practice_setting;
    std::vector<std::shared_ptr<Reference>> related;
    std::optional<std::shared_ptr<Reference>> source_patient_info;
};

class DocumentReference_RelatesTo {
public:
    fhir_code code_;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::shared_ptr<Reference> target;
};

class DomainResource {
public:
    std::vector<std::shared_ptr<Resource>> contained;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::optional<fhir_uri> implicit_rules;
    std::optional<fhir_code> language;
    std::optional<std::shared_ptr<Meta>> meta;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<std::shared_ptr<Narrative>> text;
};

class Dosage {
public:
    std::vector<std::shared_ptr<CodeableConcept>> additional_instruction;
    using AS_NEEDED_Variant = std::variant<
        std::shared_ptr<fhir_boolean>,
        std::shared_ptr<CodeableConcept>
    >;
    AS_NEEDED_Variant as_needed;
    std::vector<std::shared_ptr<Dosage_DoseAndRate>> dose_and_rate;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::optional<std::shared_ptr<Quantity>> max_dose_per_administration;
    std::optional<std::shared_ptr<Quantity>> max_dose_per_lifetime;
    std::optional<std::shared_ptr<Ratio>> max_dose_per_period;
    std::optional<std::shared_ptr<CodeableConcept>> method;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<fhir_string> patient_instruction;
    std::optional<std::shared_ptr<CodeableConcept>> route;
    std::optional<fhir_integer> sequence;
    std::optional<std::shared_ptr<CodeableConcept>> site;
    std::optional<fhir_string> text;
    std::optional<std::shared_ptr<Timing>> timing;
};

class Dosage_DoseAndRate {
public:
    using DOSE_Variant = std::variant<
        std::shared_ptr<Range>,
        std::shared_ptr<Quantity>
    >;
    DOSE_Variant dose;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    using RATE_Variant = std::variant<
        std::shared_ptr<Ratio>,
        std::shared_ptr<Range>,
        std::shared_ptr<Quantity>
    >;
    RATE_Variant rate;
    std::optional<std::shared_ptr<CodeableConcept>> type;
};

class Duration {
public:
    std::optional<fhir_code> code_;
    std::optional<fhir_code> comparator;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::optional<fhir_uri> system;
    std::optional<fhir_string> unit;
    std::optional<fhir_decimal> value;
};

class EffectEvidenceSynthesis {
public:
    std::optional<fhir_date> approval_date;
    std::vector<std::shared_ptr<ContactDetail>> author;
    std::vector<std::shared_ptr<EffectEvidenceSynthesis_Certainty>> certainty;
    std::vector<std::shared_ptr<ContactDetail>> contact;
    std::vector<std::shared_ptr<Resource>> contained;
    std::optional<fhir_markdown> copyright;
    std::optional<fhir_dateTime> date_;
    std::optional<fhir_markdown> description;
    std::vector<std::shared_ptr<ContactDetail>> editor;
    std::vector<std::shared_ptr<EffectEvidenceSynthesis_EffectEstimate>> effect_estimate;
    std::optional<std::shared_ptr<Period>> effective_period;
    std::vector<std::shared_ptr<ContactDetail>> endorser;
    std::shared_ptr<Reference> exposure;
    std::shared_ptr<Reference> exposure_alternative;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Identifier>> identifier;
    std::optional<fhir_uri> implicit_rules;
    std::vector<std::shared_ptr<CodeableConcept>> jurisdiction;
    std::optional<fhir_code> language;
    std::optional<fhir_date> last_review_date;
    std::optional<std::shared_ptr<Meta>> meta;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<fhir_string> name;
    std::vector<std::shared_ptr<Annotation>> note;
    std::shared_ptr<Reference> outcome;
    std::shared_ptr<Reference> population;
    std::optional<fhir_string> publisher;
    std::vector<std::shared_ptr<RelatedArtifact>> related_artifact;
    std::vector<std::shared_ptr<EffectEvidenceSynthesis_ResultsByExposure>> results_by_exposure;
    std::vector<std::shared_ptr<ContactDetail>> reviewer;
    std::optional<std::shared_ptr<EffectEvidenceSynthesis_SampleSize>> sample_size;
    fhir_code status;
    std::optional<std::shared_ptr<CodeableConcept>> study_type;
    std::optional<std::shared_ptr<CodeableConcept>> synthesis_type;
    std::optional<std::shared_ptr<Narrative>> text;
    std::optional<fhir_string> title;
    std::vector<std::shared_ptr<CodeableConcept>> topic;
    std::optional<fhir_uri> url_;
    std::vector<std::shared_ptr<UsageContext>> use_context;
    std::optional<fhir_string> version;
};

class EffectEvidenceSynthesis_Certainty {
public:
    std::vector<std::shared_ptr<EffectEvidenceSynthesis_Certainty_CertaintySubcomponent>> certainty_subcomponent;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::vector<std::shared_ptr<Annotation>> note;
    std::vector<std::shared_ptr<CodeableConcept>> rating;
};

class EffectEvidenceSynthesis_Certainty_CertaintySubcomponent {
public:
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::vector<std::shared_ptr<Annotation>> note;
    std::vector<std::shared_ptr<CodeableConcept>> rating;
    std::optional<std::shared_ptr<CodeableConcept>> type;
};

class EffectEvidenceSynthesis_EffectEstimate {
public:
    std::optional<fhir_string> description;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::vector<std::shared_ptr<EffectEvidenceSynthesis_EffectEstimate_PrecisionEstimate>> precision_estimate;
    std::optional<std::shared_ptr<CodeableConcept>> type;
    std::optional<std::shared_ptr<CodeableConcept>> unit_of_measure;
    std::optional<fhir_decimal> value;
    std::optional<std::shared_ptr<CodeableConcept>> variant_state;
};

class EffectEvidenceSynthesis_EffectEstimate_PrecisionEstimate {
public:
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<fhir_decimal> from;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::optional<fhir_decimal> level;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<fhir_decimal> to;
    std::optional<std::shared_ptr<CodeableConcept>> type;
};

class EffectEvidenceSynthesis_ResultsByExposure {
public:
    std::optional<fhir_string> description;
    std::optional<fhir_code> exposure_state;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::shared_ptr<Reference> risk_evidence_synthesis;
    std::optional<std::shared_ptr<CodeableConcept>> variant_state;
};

class EffectEvidenceSynthesis_SampleSize {
public:
    std::optional<fhir_string> description;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<fhir_integer> number_of_participants;
    std::optional<fhir_integer> number_of_studies;
};

class Element {
public:
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
};

class ElementDefinition {
public:
    std::vector<fhir_string> alias;
    std::optional<std::shared_ptr<ElementDefinition_Base>> base;
    std::optional<std::shared_ptr<ElementDefinition_Binding>> binding;
    std::vector<std::shared_ptr<Coding>> code_;
    std::optional<fhir_markdown> comment;
    std::vector<fhir_id> condition;
    std::vector<std::shared_ptr<ElementDefinition_Constraint>> constraint;
    std::optional<fhir_uri> content_reference;
    using DEFAULT_VALUE_Variant = std::variant<
        std::shared_ptr<fhir_base64Binary>,
        std::shared_ptr<fhir_boolean>,
        std::shared_ptr<fhir_canonical>,
        std::shared_ptr<fhir_code>,
        std::shared_ptr<fhir_date>,
        std::shared_ptr<fhir_dateTime>,
        std::shared_ptr<fhir_decimal>,
        std::shared_ptr<fhir_id>,
        std::shared_ptr<fhir_instant>,
        std::shared_ptr<fhir_integer>,
        std::shared_ptr<fhir_markdown>,
        std::shared_ptr<fhir_oid>,
        std::shared_ptr<fhir_positiveInt>,
        std::shared_ptr<fhir_string>,
        std::shared_ptr<fhir_time>,
        std::shared_ptr<fhir_unsignedInt>,
        std::shared_ptr<fhir_uri>,
        std::shared_ptr<fhir_url>,
        std::shared_ptr<fhir_uuid>,
        std::shared_ptr<Address>,
        std::shared_ptr<Age>,
        std::shared_ptr<Annotation>,
        std::shared_ptr<Attachment>,
        std::shared_ptr<CodeableConcept>,
        std::shared_ptr<Coding>,
        std::shared_ptr<ContactPoint>,
        std::shared_ptr<Count>,
        std::shared_ptr<Distance>,
        std::shared_ptr<Duration>,
        std::shared_ptr<HumanName>,
        std::shared_ptr<Identifier>,
        std::shared_ptr<Money>,
        std::shared_ptr<Period>,
        std::shared_ptr<Quantity>,
        std::shared_ptr<Range>,
        std::shared_ptr<Ratio>,
        std::shared_ptr<Reference>,
        std::shared_ptr<SampledData>,
        std::shared_ptr<Signature>,
        std::shared_ptr<Timing>,
        std::shared_ptr<ContactDetail>,
        std::shared_ptr<Contributor>,
        std::shared_ptr<DataRequirement>,
        std::shared_ptr<Expression>,
        std::shared_ptr<ParameterDefinition>,
        std::shared_ptr<RelatedArtifact>,
        std::shared_ptr<TriggerDefinition>,
        std::shared_ptr<UsageContext>,
        std::shared_ptr<Dosage>,
        std::shared_ptr<Meta>
    >;
    DEFAULT_VALUE_Variant default_value;
    std::optional<fhir_markdown> definition;
    std::vector<std::shared_ptr<ElementDefinition_Example>> example;
    std::vector<std::shared_ptr<Extension>> extension;
    using FIXED_Variant = std::variant<
        std::shared_ptr<fhir_base64Binary>,
        std::shared_ptr<fhir_boolean>,
        std::shared_ptr<fhir_canonical>,
        std::shared_ptr<fhir_code>,
        std::shared_ptr<fhir_date>,
        std::shared_ptr<fhir_dateTime>,
        std::shared_ptr<fhir_decimal>,
        std::shared_ptr<fhir_id>,
        std::shared_ptr<fhir_instant>,
        std::shared_ptr<fhir_integer>,
        std::shared_ptr<fhir_markdown>,
        std::shared_ptr<fhir_oid>,
        std::shared_ptr<fhir_positiveInt>,
        std::shared_ptr<fhir_string>,
        std::shared_ptr<fhir_time>,
        std::shared_ptr<fhir_unsignedInt>,
        std::shared_ptr<fhir_uri>,
        std::shared_ptr<fhir_url>,
        std::shared_ptr<fhir_uuid>,
        std::shared_ptr<Address>,
        std::shared_ptr<Age>,
        std::shared_ptr<Annotation>,
        std::shared_ptr<Attachment>,
        std::shared_ptr<CodeableConcept>,
        std::shared_ptr<Coding>,
        std::shared_ptr<ContactPoint>,
        std::shared_ptr<Count>,
        std::shared_ptr<Distance>,
        std::shared_ptr<Duration>,
        std::shared_ptr<HumanName>,
        std::shared_ptr<Identifier>,
        std::shared_ptr<Money>,
        std::shared_ptr<Period>,
        std::shared_ptr<Quantity>,
        std::shared_ptr<Range>,
        std::shared_ptr<Ratio>,
        std::shared_ptr<Reference>,
        std::shared_ptr<SampledData>,
        std::shared_ptr<Signature>,
        std::shared_ptr<Timing>,
        std::shared_ptr<ContactDetail>,
        std::shared_ptr<Contributor>,
        std::shared_ptr<DataRequirement>,
        std::shared_ptr<Expression>,
        std::shared_ptr<ParameterDefinition>,
        std::shared_ptr<RelatedArtifact>,
        std::shared_ptr<TriggerDefinition>,
        std::shared_ptr<UsageContext>,
        std::shared_ptr<Dosage>,
        std::shared_ptr<Meta>
    >;
    FIXED_Variant fixed;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::optional<fhir_boolean> is_modifier;
    std::optional<fhir_string> is_modifier_reason;
    std::optional<fhir_boolean> is_summary;
    std::optional<fhir_string> label;
    std::vector<std::shared_ptr<ElementDefinition_Mapping>> mapping;
    std::optional<fhir_string> max;
    std::optional<fhir_integer> max_length;
    using MAX_VALUE_Variant = std::variant<
        std::shared_ptr<fhir_date>,
        std::shared_ptr<fhir_dateTime>,
        std::shared_ptr<fhir_instant>,
        std::shared_ptr<fhir_time>,
        std::shared_ptr<fhir_decimal>,
        std::shared_ptr<fhir_integer>,
        std::shared_ptr<fhir_positiveInt>,
        std::shared_ptr<fhir_unsignedInt>,
        std::shared_ptr<Quantity>
    >;
    MAX_VALUE_Variant max_value;
    std::optional<fhir_markdown> meaning_when_missing;
    std::optional<fhir_unsignedInt> min;
    using MIN_VALUE_Variant = std::variant<
        std::shared_ptr<fhir_date>,
        std::shared_ptr<fhir_dateTime>,
        std::shared_ptr<fhir_instant>,
        std::shared_ptr<fhir_time>,
        std::shared_ptr<fhir_decimal>,
        std::shared_ptr<fhir_integer>,
        std::shared_ptr<fhir_positiveInt>,
        std::shared_ptr<fhir_unsignedInt>,
        std::shared_ptr<Quantity>
    >;
    MIN_VALUE_Variant min_value;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<fhir_boolean> must_support;
    std::optional<fhir_string> order_meaning;
    fhir_string path;
    using PATTERN_Variant = std::variant<
        std::shared_ptr<fhir_base64Binary>,
        std::shared_ptr<fhir_boolean>,
        std::shared_ptr<fhir_canonical>,
        std::shared_ptr<fhir_code>,
        std::shared_ptr<fhir_date>,
        std::shared_ptr<fhir_dateTime>,
        std::shared_ptr<fhir_decimal>,
        std::shared_ptr<fhir_id>,
        std::shared_ptr<fhir_instant>,
        std::shared_ptr<fhir_integer>,
        std::shared_ptr<fhir_markdown>,
        std::shared_ptr<fhir_oid>,
        std::shared_ptr<fhir_positiveInt>,
        std::shared_ptr<fhir_string>,
        std::shared_ptr<fhir_time>,
        std::shared_ptr<fhir_unsignedInt>,
        std::shared_ptr<fhir_uri>,
        std::shared_ptr<fhir_url>,
        std::shared_ptr<fhir_uuid>,
        std::shared_ptr<Address>,
        std::shared_ptr<Age>,
        std::shared_ptr<Annotation>,
        std::shared_ptr<Attachment>,
        std::shared_ptr<CodeableConcept>,
        std::shared_ptr<Coding>,
        std::shared_ptr<ContactPoint>,
        std::shared_ptr<Count>,
        std::shared_ptr<Distance>,
        std::shared_ptr<Duration>,
        std::shared_ptr<HumanName>,
        std::shared_ptr<Identifier>,
        std::shared_ptr<Money>,
        std::shared_ptr<Period>,
        std::shared_ptr<Quantity>,
        std::shared_ptr<Range>,
        std::shared_ptr<Ratio>,
        std::shared_ptr<Reference>,
        std::shared_ptr<SampledData>,
        std::shared_ptr<Signature>,
        std::shared_ptr<Timing>,
        std::shared_ptr<ContactDetail>,
        std::shared_ptr<Contributor>,
        std::shared_ptr<DataRequirement>,
        std::shared_ptr<Expression>,
        std::shared_ptr<ParameterDefinition>,
        std::shared_ptr<RelatedArtifact>,
        std::shared_ptr<TriggerDefinition>,
        std::shared_ptr<UsageContext>,
        std::shared_ptr<Dosage>,
        std::shared_ptr<Meta>
    >;
    PATTERN_Variant pattern;
    std::vector<fhir_code> representation;
    std::optional<fhir_markdown> requirements;
    std::optional<fhir_string> short_;
    std::optional<fhir_boolean> slice_is_constraining;
    std::optional<fhir_string> slice_name;
    std::optional<std::shared_ptr<ElementDefinition_Slicing>> slicing;
    std::vector<std::shared_ptr<ElementDefinition_Type>> type;
    std::shared_ptr<fhir_string> url_;
    using VALUE_Variant = std::variant<
        std::shared_ptr<CodeableConcept>,
        std::shared_ptr<fhir_canonical>
    >;
    VALUE_Variant value;
};

class ElementDefinition_Base {
public:
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    fhir_string max;
    fhir_unsignedInt min;
    fhir_string path;
};

class ElementDefinition_Binding {
public:
    std::optional<fhir_string> description;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    fhir_code strength;
    std::optional<fhir_canonical> value_set;
};

class ElementDefinition_Constraint {
public:
    std::optional<fhir_string> expression;
    std::vector<std::shared_ptr<Extension>> extension;
    fhir_string human;
    std::optional<std::shared_ptr<fhir_string>> id_;
    fhir_id key;
    std::optional<fhir_string> requirements;
    fhir_code severity;
    std::optional<fhir_canonical> source;
    std::optional<fhir_string> xpath;
};

class ElementDefinition_Example {
public:
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    fhir_string label;
    using VALUE_Variant = std::variant<
        std::shared_ptr<fhir_base64Binary>,
        std::shared_ptr<fhir_boolean>,
        std::shared_ptr<fhir_canonical>,
        std::shared_ptr<fhir_code>,
        std::shared_ptr<fhir_date>,
        std::shared_ptr<fhir_dateTime>,
        std::shared_ptr<fhir_decimal>,
        std::shared_ptr<fhir_id>,
        std::shared_ptr<fhir_instant>,
        std::shared_ptr<fhir_integer>,
        std::shared_ptr<fhir_markdown>,
        std::shared_ptr<fhir_oid>,
        std::shared_ptr<fhir_positiveInt>,
        std::shared_ptr<fhir_string>,
        std::shared_ptr<fhir_time>,
        std::shared_ptr<fhir_unsignedInt>,
        std::shared_ptr<fhir_uri>,
        std::shared_ptr<fhir_url>,
        std::shared_ptr<fhir_uuid>,
        std::shared_ptr<Address>,
        std::shared_ptr<Age>,
        std::shared_ptr<Annotation>,
        std::shared_ptr<Attachment>,
        std::shared_ptr<CodeableConcept>,
        std::shared_ptr<Coding>,
        std::shared_ptr<ContactPoint>,
        std::shared_ptr<Count>,
        std::shared_ptr<Distance>,
        std::shared_ptr<Duration>,
        std::shared_ptr<HumanName>,
        std::shared_ptr<Identifier>,
        std::shared_ptr<Money>,
        std::shared_ptr<Period>,
        std::shared_ptr<Quantity>,
        std::shared_ptr<Range>,
        std::shared_ptr<Ratio>,
        std::shared_ptr<Reference>,
        std::shared_ptr<SampledData>,
        std::shared_ptr<Signature>,
        std::shared_ptr<Timing>,
        std::shared_ptr<ContactDetail>,
        std::shared_ptr<Contributor>,
        std::shared_ptr<DataRequirement>,
        std::shared_ptr<Expression>,
        std::shared_ptr<ParameterDefinition>,
        std::shared_ptr<RelatedArtifact>,
        std::shared_ptr<TriggerDefinition>,
        std::shared_ptr<UsageContext>,
        std::shared_ptr<Dosage>,
        std::shared_ptr<Meta>
    >;
    VALUE_Variant value;
};

class ElementDefinition_Mapping {
public:
    std::optional<fhir_string> comment;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    fhir_id identity;
    std::optional<fhir_code> language;
    fhir_string map;
};

class ElementDefinition_Slicing {
public:
    std::optional<fhir_string> description;
    std::vector<std::shared_ptr<ElementDefinition_Slicing_Discriminator>> discriminator;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::optional<fhir_boolean> ordered;
    fhir_code rules;
};

class ElementDefinition_Slicing_Discriminator {
public:
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    fhir_string path;
    fhir_code type;
};

class ElementDefinition_Type {
public:
    std::vector<fhir_code> aggregation;
    fhir_uri code_;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<fhir_canonical> profile;
    std::vector<fhir_canonical> target_profile;
    std::optional<fhir_code> versioning;
};

class Encounter {
public:
    std::vector<std::shared_ptr<Reference>> account;
    std::vector<std::shared_ptr<Reference>> appointment;
    std::vector<std::shared_ptr<Reference>> based_on;
    std::shared_ptr<Coding> class_;
    std::vector<std::shared_ptr<Encounter_ClassHistory>> class_history;
    std::vector<std::shared_ptr<Resource>> contained;
    std::vector<std::shared_ptr<Encounter_Diagnosis>> diagnosis;
    std::vector<std::shared_ptr<Reference>> episode_of_care;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<Encounter_Hospitalization>> hospitalization;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Identifier>> identifier;
    std::optional<fhir_uri> implicit_rules;
    std::optional<fhir_code> language;
    std::optional<std::shared_ptr<Duration>> length;
    std::vector<std::shared_ptr<Encounter_Location>> location;
    std::optional<std::shared_ptr<Meta>> meta;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<std::shared_ptr<Reference>> part_of;
    std::vector<std::shared_ptr<Encounter_Participant>> participant;
    std::optional<std::shared_ptr<Period>> period;
    std::optional<std::shared_ptr<CodeableConcept>> priority;
    std::vector<std::shared_ptr<CodeableConcept>> reason_code;
    std::vector<std::shared_ptr<Reference>> reason_reference;
    std::optional<std::shared_ptr<Reference>> service_provider;
    std::optional<std::shared_ptr<CodeableConcept>> service_type;
    fhir_code status;
    std::vector<std::shared_ptr<Encounter_StatusHistory>> status_history;
    std::optional<std::shared_ptr<Reference>> subject;
    std::optional<std::shared_ptr<Narrative>> text;
    std::vector<std::shared_ptr<CodeableConcept>> type;
};

class Encounter_ClassHistory {
public:
    std::shared_ptr<Coding> class_;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::shared_ptr<Period> period;
};

class Encounter_Diagnosis {
public:
    std::shared_ptr<Reference> condition;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<fhir_positiveInt> rank;
    std::optional<std::shared_ptr<CodeableConcept>> use;
};

class Encounter_Hospitalization {
public:
    std::optional<std::shared_ptr<CodeableConcept>> admit_source;
    std::optional<std::shared_ptr<Reference>> destination;
    std::vector<std::shared_ptr<CodeableConcept>> diet_preference;
    std::optional<std::shared_ptr<CodeableConcept>> discharge_disposition;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<std::shared_ptr<Reference>> origin;
    std::optional<std::shared_ptr<Identifier>> pre_admission_identifier;
    std::optional<std::shared_ptr<CodeableConcept>> re_admission;
    std::vector<std::shared_ptr<CodeableConcept>> special_arrangement;
    std::vector<std::shared_ptr<CodeableConcept>> special_courtesy;
};

class Encounter_Location {
public:
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::shared_ptr<Reference> location;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<std::shared_ptr<Period>> period;
    std::optional<std::shared_ptr<CodeableConcept>> physical_type;
    std::optional<fhir_code> status;
};

class Encounter_Participant {
public:
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::optional<std::shared_ptr<Reference>> individual;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<std::shared_ptr<Period>> period;
    std::vector<std::shared_ptr<CodeableConcept>> type;
};

class Encounter_StatusHistory {
public:
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::shared_ptr<Period> period;
    fhir_code status;
};

class Endpoint {
public:
    fhir_url address;
    std::shared_ptr<Coding> connection_type;
    std::vector<std::shared_ptr<ContactPoint>> contact;
    std::vector<std::shared_ptr<Resource>> contained;
    std::vector<std::shared_ptr<Extension>> extension;
    std::vector<fhir_string> header;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Identifier>> identifier;
    std::optional<fhir_uri> implicit_rules;
    std::optional<fhir_code> language;
    std::optional<std::shared_ptr<Reference>> managing_organization;
    std::optional<std::shared_ptr<Meta>> meta;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<fhir_string> name;
    std::vector<fhir_code> payload_mime_type;
    std::optional<std::shared_ptr<Period>> period;
    fhir_code status;
    std::optional<std::shared_ptr<Narrative>> text;
};

class EnrollmentRequest {
public:
    std::optional<std::shared_ptr<Reference>> candidate;
    std::vector<std::shared_ptr<Resource>> contained;
    std::optional<std::shared_ptr<Reference>> coverage;
    std::optional<fhir_dateTime> created;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Identifier>> identifier;
    std::optional<fhir_uri> implicit_rules;
    std::optional<std::shared_ptr<Reference>> insurer;
    std::optional<fhir_code> language;
    std::optional<std::shared_ptr<Meta>> meta;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<std::shared_ptr<Reference>> provider;
    std::optional<fhir_code> status;
    std::optional<std::shared_ptr<Narrative>> text;
};

class EnrollmentResponse {
public:
    std::vector<std::shared_ptr<Resource>> contained;
    std::optional<fhir_dateTime> created;
    std::optional<fhir_string> disposition;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Identifier>> identifier;
    std::optional<fhir_uri> implicit_rules;
    std::optional<fhir_code> language;
    std::optional<std::shared_ptr<Meta>> meta;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<std::shared_ptr<Reference>> organization;
    std::optional<fhir_code> outcome;
    std::optional<std::shared_ptr<Reference>> request;
    std::optional<std::shared_ptr<Reference>> request_provider;
    std::optional<fhir_code> status;
    std::optional<std::shared_ptr<Narrative>> text;
};

class EpisodeOfCare {
public:
    std::vector<std::shared_ptr<Reference>> account;
    std::optional<std::shared_ptr<Reference>> care_manager;
    std::vector<std::shared_ptr<Resource>> contained;
    std::vector<std::shared_ptr<EpisodeOfCare_Diagnosis>> diagnosis;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Identifier>> identifier;
    std::optional<fhir_uri> implicit_rules;
    std::optional<fhir_code> language;
    std::optional<std::shared_ptr<Reference>> managing_organization;
    std::optional<std::shared_ptr<Meta>> meta;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::shared_ptr<Reference> patient;
    std::optional<std::shared_ptr<Period>> period;
    std::vector<std::shared_ptr<Reference>> referral_request;
    fhir_code status;
    std::vector<std::shared_ptr<EpisodeOfCare_StatusHistory>> status_history;
    std::vector<std::shared_ptr<Reference>> team;
    std::optional<std::shared_ptr<Narrative>> text;
    std::vector<std::shared_ptr<CodeableConcept>> type;
};

class EpisodeOfCare_Diagnosis {
public:
    std::shared_ptr<Reference> condition;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<fhir_positiveInt> rank;
    std::optional<std::shared_ptr<CodeableConcept>> role;
};

class EpisodeOfCare_StatusHistory {
public:
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::shared_ptr<Period> period;
    fhir_code status;
};

class EventDefinition {
public:
    std::optional<fhir_date> approval_date;
    std::vector<std::shared_ptr<ContactDetail>> author;
    std::vector<std::shared_ptr<ContactDetail>> contact;
    std::vector<std::shared_ptr<Resource>> contained;
    std::optional<fhir_markdown> copyright;
    std::optional<fhir_dateTime> date_;
    std::optional<fhir_markdown> description;
    std::vector<std::shared_ptr<ContactDetail>> editor;
    std::optional<std::shared_ptr<Period>> effective_period;
    std::vector<std::shared_ptr<ContactDetail>> endorser;
    std::optional<fhir_boolean> experimental;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Identifier>> identifier;
    std::optional<fhir_uri> implicit_rules;
    std::vector<std::shared_ptr<CodeableConcept>> jurisdiction;
    std::optional<fhir_code> language;
    std::optional<fhir_date> last_review_date;
    std::optional<std::shared_ptr<Meta>> meta;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<fhir_string> name;
    std::optional<fhir_string> publisher;
    std::optional<fhir_markdown> purpose;
    std::vector<std::shared_ptr<RelatedArtifact>> related_artifact;
    std::vector<std::shared_ptr<ContactDetail>> reviewer;
    fhir_code status;
    using SUBJECT_Variant = std::variant<
        std::shared_ptr<CodeableConcept>,
        std::shared_ptr<Reference>
    >;
    SUBJECT_Variant subject;
    std::optional<fhir_string> subtitle;
    std::optional<std::shared_ptr<Narrative>> text;
    std::optional<fhir_string> title;
    std::vector<std::shared_ptr<CodeableConcept>> topic;
    std::optional<fhir_uri> url_;
    std::optional<fhir_string> usage;
    std::vector<std::shared_ptr<UsageContext>> use_context;
    std::optional<fhir_string> version;
};

class Evidence {
public:
    std::optional<fhir_date> approval_date;
    std::vector<std::shared_ptr<ContactDetail>> author;
    std::vector<std::shared_ptr<ContactDetail>> contact;
    std::vector<std::shared_ptr<Resource>> contained;
    std::optional<fhir_markdown> copyright;
    std::optional<fhir_dateTime> date_;
    std::optional<fhir_markdown> description;
    std::vector<std::shared_ptr<ContactDetail>> editor;
    std::optional<std::shared_ptr<Period>> effective_period;
    std::vector<std::shared_ptr<ContactDetail>> endorser;
    std::shared_ptr<Reference> exposure_background;
    std::vector<std::shared_ptr<Reference>> exposure_variant;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Identifier>> identifier;
    std::optional<fhir_uri> implicit_rules;
    std::vector<std::shared_ptr<CodeableConcept>> jurisdiction;
    std::optional<fhir_code> language;
    std::optional<fhir_date> last_review_date;
    std::optional<std::shared_ptr<Meta>> meta;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<fhir_string> name;
    std::vector<std::shared_ptr<Annotation>> note;
    std::vector<std::shared_ptr<Reference>> outcome;
    std::optional<fhir_string> publisher;
    std::vector<std::shared_ptr<RelatedArtifact>> related_artifact;
    std::vector<std::shared_ptr<ContactDetail>> reviewer;
    std::optional<fhir_string> short_title;
    fhir_code status;
    std::optional<fhir_string> subtitle;
    std::optional<std::shared_ptr<Narrative>> text;
    std::optional<fhir_string> title;
    std::vector<std::shared_ptr<CodeableConcept>> topic;
    std::optional<fhir_uri> url_;
    std::vector<std::shared_ptr<UsageContext>> use_context;
    std::optional<fhir_string> version;
};

class EvidenceVariable {
public:
    std::optional<fhir_date> approval_date;
    std::vector<std::shared_ptr<ContactDetail>> author;
    std::vector<std::shared_ptr<ContactDetail>> contact;
    std::vector<std::shared_ptr<Resource>> contained;
    std::optional<fhir_markdown> copyright;
    std::optional<fhir_dateTime> date_;
    std::optional<fhir_markdown> description;
    std::vector<std::shared_ptr<ContactDetail>> editor;
    std::optional<std::shared_ptr<Period>> effective_period;
    std::vector<std::shared_ptr<ContactDetail>> endorser;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Identifier>> identifier;
    std::optional<fhir_uri> implicit_rules;
    std::vector<std::shared_ptr<CodeableConcept>> jurisdiction;
    std::optional<fhir_code> language;
    std::optional<fhir_date> last_review_date;
    std::optional<std::shared_ptr<Meta>> meta;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<fhir_string> name;
    std::vector<std::shared_ptr<Annotation>> note;
    std::optional<fhir_string> publisher;
    std::vector<std::shared_ptr<RelatedArtifact>> related_artifact;
    std::vector<std::shared_ptr<ContactDetail>> reviewer;
    std::optional<fhir_string> short_title;
    fhir_code status;
    std::optional<fhir_string> subtitle;
    std::optional<std::shared_ptr<Narrative>> text;
    std::optional<fhir_string> title;
    std::vector<std::shared_ptr<CodeableConcept>> topic;
    std::optional<fhir_code> type;
    std::optional<fhir_uri> url_;
    std::vector<std::shared_ptr<UsageContext>> use_context;
    std::optional<fhir_string> version;
};

class EvidenceVariable_Characteristic {
public:
    using DEFINITION_Variant = std::variant<
        std::shared_ptr<Reference>,
        std::shared_ptr<fhir_canonical>,
        std::shared_ptr<CodeableConcept>,
        std::shared_ptr<Expression>,
        std::shared_ptr<DataRequirement>,
        std::shared_ptr<TriggerDefinition>
    >;
    DEFINITION_Variant definition;
    std::optional<fhir_string> description;
    std::optional<fhir_boolean> exclude;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<fhir_code> group_measure;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    using PARTICIPANT_EFFECTIVE_Variant = std::variant<
        std::shared_ptr<fhir_dateTime>,
        std::shared_ptr<Period>,
        std::shared_ptr<Duration>,
        std::shared_ptr<Timing>
    >;
    PARTICIPANT_EFFECTIVE_Variant participant_effective;
    std::optional<std::shared_ptr<Duration>> time_from_start;
    std::vector<std::shared_ptr<UsageContext>> usage_context;
};

class ExampleScenario {
public:
    std::vector<std::shared_ptr<ExampleScenario_Actor>> actor;
    std::vector<std::shared_ptr<ContactDetail>> contact;
    std::vector<std::shared_ptr<Resource>> contained;
    std::optional<fhir_markdown> copyright;
    std::optional<fhir_dateTime> date_;
    std::optional<fhir_boolean> experimental;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Identifier>> identifier;
    std::optional<fhir_uri> implicit_rules;
    std::vector<std::shared_ptr<ExampleScenario_Instance>> instance;
    std::vector<std::shared_ptr<CodeableConcept>> jurisdiction;
    std::optional<fhir_code> language;
    std::optional<std::shared_ptr<Meta>> meta;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<fhir_string> name;
    std::vector<std::shared_ptr<ExampleScenario_Process>> process;
    std::optional<fhir_string> publisher;
    std::optional<fhir_markdown> purpose;
    fhir_code status;
    std::optional<std::shared_ptr<Narrative>> text;
    std::optional<fhir_uri> url_;
    std::vector<std::shared_ptr<UsageContext>> use_context;
    std::optional<fhir_string> version;
    std::vector<fhir_canonical> workflow;
};

class ExampleScenario_Actor {
public:
    fhir_string actor_id;
    std::optional<fhir_markdown> description;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<fhir_string> name;
    fhir_code type;
};

class ExampleScenario_Instance {
public:
    std::vector<std::shared_ptr<ExampleScenario_Instance_ContainedInstance>> contained_instance;
    std::optional<fhir_markdown> description;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<fhir_string> name;
    fhir_string resource_id;
    fhir_code resource_type;
    std::vector<std::shared_ptr<ExampleScenario_Instance_Version>> version;
};

class ExampleScenario_Instance_ContainedInstance {
public:
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    fhir_string resource_id;
    std::optional<fhir_string> version_id;
};

class ExampleScenario_Instance_Version {
public:
    fhir_markdown description;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    fhir_string version_id;
};

class ExampleScenario_Process {
public:
    std::optional<fhir_markdown> description;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<fhir_markdown> post_conditions;
    std::optional<fhir_markdown> pre_conditions;
    std::vector<std::shared_ptr<ExampleScenario_Process_Step>> step;
    fhir_string title;
};

class ExampleScenario_Process_Step {
public:
    std::vector<std::shared_ptr<ExampleScenario_Process_Step_Alternative>> alternative;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<std::shared_ptr<ExampleScenario_Process_Step_Operation>> operation;
    std::optional<fhir_boolean> pause;
    std::vector<std::shared_ptr<ExampleScenario_Process>> process;
};

class ExampleScenario_Process_Step_Alternative {
public:
    std::optional<fhir_markdown> description;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::vector<std::shared_ptr<ExampleScenario_Process_Step>> step;
    fhir_string title;
};

class ExampleScenario_Process_Step_Operation {
public:
    std::optional<fhir_markdown> description;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::optional<fhir_string> initiator;
    std::optional<fhir_boolean> initiator_active;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<fhir_string> name;
    fhir_string number;
    std::optional<fhir_string> receiver;
    std::optional<fhir_boolean> receiver_active;
    std::optional<std::shared_ptr<ExampleScenario_Instance_ContainedInstance>> request;
    std::optional<std::shared_ptr<ExampleScenario_Instance_ContainedInstance>> response;
    std::optional<fhir_string> type;
};

class ExplanationOfBenefit {
public:
    std::optional<std::shared_ptr<ExplanationOfBenefit_Accident>> accident;
    std::vector<std::shared_ptr<ExplanationOfBenefit_AddItem>> add_item;
    std::vector<std::shared_ptr<ExplanationOfBenefit_Item_Adjudication>> adjudication;
    std::vector<std::shared_ptr<ExplanationOfBenefit_BenefitBalance>> benefit_balance;
    std::optional<std::shared_ptr<Period>> benefit_period;
    std::optional<std::shared_ptr<Period>> billable_period;
    std::vector<std::shared_ptr<ExplanationOfBenefit_CareTeam>> care_team;
    std::optional<std::shared_ptr<Reference>> claim;
    std::optional<std::shared_ptr<Reference>> claim_response;
    std::vector<std::shared_ptr<Resource>> contained;
    fhir_dateTime created;
    std::vector<std::shared_ptr<ExplanationOfBenefit_Diagnosis>> diagnosis;
    std::optional<fhir_string> disposition;
    std::optional<std::shared_ptr<Reference>> enterer;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<Reference>> facility;
    std::optional<std::shared_ptr<Attachment>> form;
    std::optional<std::shared_ptr<CodeableConcept>> form_code;
    std::optional<std::shared_ptr<CodeableConcept>> funds_reserve;
    std::optional<std::shared_ptr<CodeableConcept>> funds_reserve_requested;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Identifier>> identifier;
    std::optional<fhir_uri> implicit_rules;
    std::shared_ptr<Reference> insurer;
    std::vector<std::shared_ptr<ExplanationOfBenefit_Item>> item;
    std::optional<fhir_code> language;
    std::optional<std::shared_ptr<Meta>> meta;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<std::shared_ptr<Reference>> original_prescription;
    fhir_code outcome;
    std::shared_ptr<Reference> patient;
    std::optional<std::shared_ptr<ExplanationOfBenefit_Payee>> payee;
    std::optional<std::shared_ptr<ExplanationOfBenefit_Payment>> payment;
    std::vector<fhir_string> pre_auth_ref;
    std::vector<std::shared_ptr<Period>> pre_auth_ref_period;
    std::optional<fhir_positiveInt> precedence;
    std::optional<std::shared_ptr<Reference>> prescription;
    std::optional<std::shared_ptr<CodeableConcept>> priority;
    std::vector<std::shared_ptr<ExplanationOfBenefit_Procedure>> procedure;
    std::vector<std::shared_ptr<ExplanationOfBenefit_ProcessNote>> process_note;
    std::shared_ptr<Reference> provider;
    std::optional<std::shared_ptr<Reference>> referral;
    std::vector<std::shared_ptr<ExplanationOfBenefit_Related>> related;
    fhir_code status;
    std::optional<std::shared_ptr<CodeableConcept>> sub_type;
    std::vector<std::shared_ptr<ExplanationOfBenefit_SupportingInfo>> supporting_info;
    std::optional<std::shared_ptr<Narrative>> text;
    std::vector<std::shared_ptr<ExplanationOfBenefit_Total>> total;
    std::shared_ptr<CodeableConcept> type;
    fhir_code use;
};

class ExplanationOfBenefit_Accident {
public:
    std::optional<fhir_date> date_;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    using LOCATION_Variant = std::variant<
        std::shared_ptr<Address>,
        std::shared_ptr<Reference>
    >;
    LOCATION_Variant location;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<std::shared_ptr<CodeableConcept>> type;
};

class ExplanationOfBenefit_AddItem {
public:
    std::vector<std::shared_ptr<ExplanationOfBenefit_Item_Adjudication>> adjudication;
    std::optional<std::shared_ptr<CodeableConcept>> body_site;
    std::vector<std::shared_ptr<ExplanationOfBenefit_AddItem_Detail>> detail;
    std::vector<fhir_positiveInt> detail_sequence;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<fhir_decimal> factor;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<fhir_positiveInt> item_sequence;
    using LOCATION_Variant = std::variant<
        std::shared_ptr<CodeableConcept>,
        std::shared_ptr<Address>,
        std::shared_ptr<Reference>
    >;
    LOCATION_Variant location;
    std::vector<std::shared_ptr<CodeableConcept>> modifier;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<std::shared_ptr<Money>> net;
    std::vector<fhir_positiveInt> note_number;
    std::shared_ptr<CodeableConcept> product_or_service;
    std::vector<std::shared_ptr<CodeableConcept>> program_code;
    std::vector<std::shared_ptr<Reference>> provider;
    std::optional<std::shared_ptr<Quantity>> quantity;
    using SERVICED_Variant = std::variant<
        std::shared_ptr<fhir_date>,
        std::shared_ptr<Period>
    >;
    SERVICED_Variant serviced;
    std::vector<fhir_positiveInt> sub_detail_sequence;
    std::vector<std::shared_ptr<CodeableConcept>> sub_site;
    std::optional<std::shared_ptr<Money>> unit_price;
};

class ExplanationOfBenefit_AddItem_Detail {
public:
    std::vector<std::shared_ptr<ExplanationOfBenefit_Item_Adjudication>> adjudication;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<fhir_decimal> factor;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<CodeableConcept>> modifier;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<std::shared_ptr<Money>> net;
    std::vector<fhir_positiveInt> note_number;
    std::shared_ptr<CodeableConcept> product_or_service;
    std::optional<std::shared_ptr<Quantity>> quantity;
    std::vector<std::shared_ptr<ExplanationOfBenefit_AddItem_Detail_SubDetail>> sub_detail;
    std::optional<std::shared_ptr<Money>> unit_price;
};

class ExplanationOfBenefit_AddItem_Detail_SubDetail {
public:
    std::vector<std::shared_ptr<ExplanationOfBenefit_Item_Adjudication>> adjudication;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<fhir_decimal> factor;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<CodeableConcept>> modifier;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<std::shared_ptr<Money>> net;
    std::vector<fhir_positiveInt> note_number;
    std::shared_ptr<CodeableConcept> product_or_service;
    std::optional<std::shared_ptr<Quantity>> quantity;
    std::optional<std::shared_ptr<Money>> unit_price;
};

class ExplanationOfBenefit_BenefitBalance {
public:
    std::shared_ptr<CodeableConcept> category;
    std::optional<fhir_string> description;
    std::optional<fhir_boolean> excluded;
    std::vector<std::shared_ptr<Extension>> extension;
    std::vector<std::shared_ptr<ExplanationOfBenefit_BenefitBalance_Financial>> financial;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<fhir_string> name;
    std::optional<std::shared_ptr<CodeableConcept>> network;
    std::optional<std::shared_ptr<CodeableConcept>> term;
    std::optional<std::shared_ptr<CodeableConcept>> unit;
};

class ExplanationOfBenefit_BenefitBalance_Financial {
public:
    using ALLOWED_Variant = std::variant<
        std::shared_ptr<fhir_unsignedInt>,
        std::shared_ptr<fhir_string>,
        std::shared_ptr<Money>
    >;
    ALLOWED_Variant allowed;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::shared_ptr<CodeableConcept> type;
    using USED_Variant = std::variant<
        std::shared_ptr<fhir_unsignedInt>,
        std::shared_ptr<Money>
    >;
    USED_Variant used;
};

class ExplanationOfBenefit_CareTeam {
public:
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::shared_ptr<Reference> provider;
    std::optional<std::shared_ptr<CodeableConcept>> qualification;
    std::optional<fhir_boolean> responsible;
    std::optional<std::shared_ptr<CodeableConcept>> role;
    fhir_positiveInt sequence;
};

class ExplanationOfBenefit_Diagnosis {
public:
    using DIAGNOSIS_Variant = std::variant<
        std::shared_ptr<CodeableConcept>,
        std::shared_ptr<Reference>
    >;
    DIAGNOSIS_Variant diagnosis;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<std::shared_ptr<CodeableConcept>> on_admission;
    std::optional<std::shared_ptr<CodeableConcept>> package_code;
    fhir_positiveInt sequence;
    std::vector<std::shared_ptr<CodeableConcept>> type;
};

class ExplanationOfBenefit_Insurance {
public:
    std::shared_ptr<Reference> coverage;
    std::vector<std::shared_ptr<Extension>> extension;
    fhir_boolean focal;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::vector<fhir_string> pre_auth_ref;
};

class ExplanationOfBenefit_Item {
public:
    std::vector<std::shared_ptr<ExplanationOfBenefit_Item_Adjudication>> adjudication;
    std::optional<std::shared_ptr<CodeableConcept>> body_site;
    std::vector<fhir_positiveInt> care_team_sequence;
    std::optional<std::shared_ptr<CodeableConcept>> category;
    std::vector<std::shared_ptr<ExplanationOfBenefit_Item_Detail>> detail;
    std::vector<fhir_positiveInt> diagnosis_sequence;
    std::vector<std::shared_ptr<Reference>> encounter;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<fhir_decimal> factor;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<fhir_positiveInt> information_sequence;
    using LOCATION_Variant = std::variant<
        std::shared_ptr<CodeableConcept>,
        std::shared_ptr<Address>,
        std::shared_ptr<Reference>
    >;
    LOCATION_Variant location;
    std::vector<std::shared_ptr<CodeableConcept>> modifier;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<std::shared_ptr<Money>> net;
    std::vector<fhir_positiveInt> note_number;
    std::vector<fhir_positiveInt> procedure_sequence;
    std::shared_ptr<CodeableConcept> product_or_service;
    std::vector<std::shared_ptr<CodeableConcept>> program_code;
    std::optional<std::shared_ptr<Quantity>> quantity;
    std::optional<std::shared_ptr<CodeableConcept>> revenue;
    fhir_positiveInt sequence;
    using SERVICED_Variant = std::variant<
        std::shared_ptr<fhir_date>,
        std::shared_ptr<Period>
    >;
    SERVICED_Variant serviced;
    std::vector<std::shared_ptr<CodeableConcept>> sub_site;
    std::vector<std::shared_ptr<Reference>> udi;
    std::optional<std::shared_ptr<Money>> unit_price;
};

class ExplanationOfBenefit_Item_Adjudication {
public:
    std::optional<std::shared_ptr<Money>> amount;
    std::shared_ptr<CodeableConcept> category;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<std::shared_ptr<CodeableConcept>> reason;
    std::optional<fhir_decimal> value;
};

class ExplanationOfBenefit_Item_Detail {
public:
    std::vector<std::shared_ptr<ExplanationOfBenefit_Item_Adjudication>> adjudication;
    std::optional<std::shared_ptr<CodeableConcept>> category;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<fhir_decimal> factor;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<CodeableConcept>> modifier;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<std::shared_ptr<Money>> net;
    std::vector<fhir_positiveInt> note_number;
    std::shared_ptr<CodeableConcept> product_or_service;
    std::vector<std::shared_ptr<CodeableConcept>> program_code;
    std::optional<std::shared_ptr<Quantity>> quantity;
    std::optional<std::shared_ptr<CodeableConcept>> revenue;
    fhir_positiveInt sequence;
    std::vector<std::shared_ptr<ExplanationOfBenefit_Item_Detail_SubDetail>> sub_detail;
    std::vector<std::shared_ptr<Reference>> udi;
    std::optional<std::shared_ptr<Money>> unit_price;
};

class ExplanationOfBenefit_Item_Detail_SubDetail {
public:
    std::vector<std::shared_ptr<ExplanationOfBenefit_Item_Adjudication>> adjudication;
    std::optional<std::shared_ptr<CodeableConcept>> category;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<fhir_decimal> factor;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<CodeableConcept>> modifier;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<std::shared_ptr<Money>> net;
    std::vector<fhir_positiveInt> note_number;
    std::shared_ptr<CodeableConcept> product_or_service;
    std::vector<std::shared_ptr<CodeableConcept>> program_code;
    std::optional<std::shared_ptr<Quantity>> quantity;
    std::optional<std::shared_ptr<CodeableConcept>> revenue;
    fhir_positiveInt sequence;
    std::vector<std::shared_ptr<Reference>> udi;
    std::optional<std::shared_ptr<Money>> unit_price;
};

class ExplanationOfBenefit_Payee {
public:
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<std::shared_ptr<Reference>> party;
    std::optional<std::shared_ptr<CodeableConcept>> type;
};

class ExplanationOfBenefit_Payment {
public:
    std::optional<std::shared_ptr<Money>> adjustment;
    std::optional<std::shared_ptr<CodeableConcept>> adjustment_reason;
    std::optional<std::shared_ptr<Money>> amount;
    std::optional<fhir_date> date_;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::optional<std::shared_ptr<Identifier>> identifier;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<std::shared_ptr<CodeableConcept>> type;
};

class ExplanationOfBenefit_Procedure {
public:
    std::optional<fhir_dateTime> date_;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    using PROCEDURE_Variant = std::variant<
        std::shared_ptr<CodeableConcept>,
        std::shared_ptr<Reference>
    >;
    PROCEDURE_Variant procedure;
    fhir_positiveInt sequence;
    std::vector<std::shared_ptr<CodeableConcept>> type;
    std::vector<std::shared_ptr<Reference>> udi;
};

class ExplanationOfBenefit_ProcessNote {
public:
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::optional<std::shared_ptr<CodeableConcept>> language;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<fhir_positiveInt> number;
    std::optional<fhir_string> text;
    std::optional<fhir_code> type;
};

class ExplanationOfBenefit_Related {
public:
    std::optional<std::shared_ptr<Reference>> claim;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<std::shared_ptr<Identifier>> reference;
    std::optional<std::shared_ptr<CodeableConcept>> relationship;
};

class ExplanationOfBenefit_SupportingInfo {
public:
    std::shared_ptr<CodeableConcept> category;
    std::optional<std::shared_ptr<CodeableConcept>> code_;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<std::shared_ptr<Coding>> reason;
    fhir_positiveInt sequence;
    using TIMING_Variant = std::variant<
        std::shared_ptr<fhir_date>,
        std::shared_ptr<Period>
    >;
    TIMING_Variant timing;
    using VALUE_Variant = std::variant<
        std::shared_ptr<fhir_boolean>,
        std::shared_ptr<fhir_string>,
        std::shared_ptr<Quantity>,
        std::shared_ptr<Attachment>,
        std::shared_ptr<Reference>
    >;
    VALUE_Variant value;
};

class ExplanationOfBenefit_Total {
public:
    std::shared_ptr<Money> amount;
    std::shared_ptr<CodeableConcept> category;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
};

class Expression {
public:
    std::optional<fhir_string> description;
    std::optional<fhir_string> expression;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    fhir_code language;
    std::optional<fhir_id> name;
    std::optional<fhir_uri> reference;
};

class Extension {
public:
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::shared_ptr<fhir_string> url_;
    using VALUE_Variant = std::variant<
        std::shared_ptr<fhir_base64Binary>,
        std::shared_ptr<fhir_boolean>,
        std::shared_ptr<fhir_canonical>,
        std::shared_ptr<fhir_code>,
        std::shared_ptr<fhir_date>,
        std::shared_ptr<fhir_dateTime>,
        std::shared_ptr<fhir_decimal>,
        std::shared_ptr<fhir_id>,
        std::shared_ptr<fhir_instant>,
        std::shared_ptr<fhir_integer>,
        std::shared_ptr<fhir_markdown>,
        std::shared_ptr<fhir_oid>,
        std::shared_ptr<fhir_positiveInt>,
        std::shared_ptr<fhir_string>,
        std::shared_ptr<fhir_time>,
        std::shared_ptr<fhir_unsignedInt>,
        std::shared_ptr<fhir_uri>,
        std::shared_ptr<fhir_url>,
        std::shared_ptr<fhir_uuid>,
        std::shared_ptr<Address>,
        std::shared_ptr<Age>,
        std::shared_ptr<Annotation>,
        std::shared_ptr<Attachment>,
        std::shared_ptr<CodeableConcept>,
        std::shared_ptr<Coding>,
        std::shared_ptr<ContactPoint>,
        std::shared_ptr<Count>,
        std::shared_ptr<Distance>,
        std::shared_ptr<Duration>,
        std::shared_ptr<HumanName>,
        std::shared_ptr<Identifier>,
        std::shared_ptr<Money>,
        std::shared_ptr<Period>,
        std::shared_ptr<Quantity>,
        std::shared_ptr<Range>,
        std::shared_ptr<Ratio>,
        std::shared_ptr<Reference>,
        std::shared_ptr<SampledData>,
        std::shared_ptr<Signature>,
        std::shared_ptr<Timing>,
        std::shared_ptr<ContactDetail>,
        std::shared_ptr<Contributor>,
        std::shared_ptr<DataRequirement>,
        std::shared_ptr<Expression>,
        std::shared_ptr<ParameterDefinition>,
        std::shared_ptr<RelatedArtifact>,
        std::shared_ptr<TriggerDefinition>,
        std::shared_ptr<UsageContext>,
        std::shared_ptr<Dosage>,
        std::shared_ptr<Meta>
    >;
    VALUE_Variant value;
};

class FamilyMemberHistory {
public:
    using AGE_Variant = std::variant<
        std::shared_ptr<Age>,
        std::shared_ptr<Range>,
        std::shared_ptr<fhir_string>
    >;
    AGE_Variant age;
    using BORN_Variant = std::variant<
        std::shared_ptr<Period>,
        std::shared_ptr<fhir_date>,
        std::shared_ptr<fhir_string>
    >;
    BORN_Variant born;
    std::vector<std::shared_ptr<FamilyMemberHistory_Condition>> condition;
    std::vector<std::shared_ptr<Resource>> contained;
    std::optional<std::shared_ptr<CodeableConcept>> data_absent_reason;
    std::optional<fhir_dateTime> date_;
    using DECEASED_Variant = std::variant<
        std::shared_ptr<fhir_boolean>,
        std::shared_ptr<Age>,
        std::shared_ptr<Range>,
        std::shared_ptr<fhir_date>,
        std::shared_ptr<fhir_string>
    >;
    DECEASED_Variant deceased;
    std::optional<fhir_boolean> estimated_age;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Identifier>> identifier;
    std::optional<fhir_uri> implicit_rules;
    std::vector<fhir_canonical> instantiates_canonical;
    std::vector<fhir_uri> instantiates_uri;
    std::optional<fhir_code> language;
    std::optional<std::shared_ptr<Meta>> meta;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<fhir_string> name;
    std::vector<std::shared_ptr<Annotation>> note;
    std::shared_ptr<Reference> patient;
    std::vector<std::shared_ptr<CodeableConcept>> reason_code;
    std::vector<std::shared_ptr<Reference>> reason_reference;
    std::shared_ptr<CodeableConcept> relationship;
    std::optional<std::shared_ptr<CodeableConcept>> sex;
    fhir_code status;
    std::optional<std::shared_ptr<Narrative>> text;
};

class FamilyMemberHistory_Condition {
public:
    std::shared_ptr<CodeableConcept> code_;
    std::optional<fhir_boolean> contributed_to_death;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::vector<std::shared_ptr<Annotation>> note;
    using ONSET_Variant = std::variant<
        std::shared_ptr<Age>,
        std::shared_ptr<Range>,
        std::shared_ptr<Period>,
        std::shared_ptr<fhir_string>
    >;
    ONSET_Variant onset;
    std::optional<std::shared_ptr<CodeableConcept>> outcome;
};

class Flag {
public:
    std::optional<std::shared_ptr<Reference>> author;
    std::vector<std::shared_ptr<CodeableConcept>> category;
    std::shared_ptr<CodeableConcept> code_;
    std::vector<std::shared_ptr<Resource>> contained;
    std::optional<std::shared_ptr<Reference>> encounter;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Identifier>> identifier;
    std::optional<fhir_uri> implicit_rules;
    std::optional<fhir_code> language;
    std::optional<std::shared_ptr<Meta>> meta;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<std::shared_ptr<Period>> period;
    fhir_code status;
    std::shared_ptr<Reference> subject;
    std::optional<std::shared_ptr<Narrative>> text;
};

class Goal {
public:
    std::optional<std::shared_ptr<CodeableConcept>> achievement_status;
    std::vector<std::shared_ptr<Reference>> addresses;
    std::vector<std::shared_ptr<CodeableConcept>> category;
    std::vector<std::shared_ptr<Resource>> contained;
    std::shared_ptr<CodeableConcept> description;
    std::optional<std::shared_ptr<Reference>> expressed_by;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Identifier>> identifier;
    std::optional<fhir_uri> implicit_rules;
    std::optional<fhir_code> language;
    fhir_code lifecycle_status;
    std::optional<std::shared_ptr<Meta>> meta;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::vector<std::shared_ptr<Annotation>> note;
    std::vector<std::shared_ptr<CodeableConcept>> outcome_code;
    std::vector<std::shared_ptr<Reference>> outcome_reference;
    std::optional<std::shared_ptr<CodeableConcept>> priority;
    using START_Variant = std::variant<
        std::shared_ptr<fhir_date>,
        std::shared_ptr<CodeableConcept>
    >;
    START_Variant start;
    std::optional<fhir_date> status_date;
    std::optional<fhir_string> status_reason;
    std::shared_ptr<Reference> subject;
    std::vector<std::shared_ptr<Goal_Target>> target;
    std::optional<std::shared_ptr<Narrative>> text;
};

class Goal_Target {
public:
    using DETAIL_Variant = std::variant<
        std::shared_ptr<Quantity>,
        std::shared_ptr<Range>,
        std::shared_ptr<CodeableConcept>,
        std::shared_ptr<fhir_string>,
        std::shared_ptr<fhir_boolean>,
        std::shared_ptr<fhir_integer>,
        std::shared_ptr<Ratio>
    >;
    DETAIL_Variant detail;
    using DUE_Variant = std::variant<
        std::shared_ptr<fhir_date>,
        std::shared_ptr<Duration>
    >;
    DUE_Variant due;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::optional<std::shared_ptr<CodeableConcept>> measure;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
};

class GraphDefinition {
public:
    std::vector<std::shared_ptr<ContactDetail>> contact;
    std::vector<std::shared_ptr<Resource>> contained;
    std::optional<fhir_dateTime> date_;
    std::optional<fhir_markdown> description;
    std::optional<fhir_boolean> experimental;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::optional<fhir_uri> implicit_rules;
    std::vector<std::shared_ptr<CodeableConcept>> jurisdiction;
    std::optional<fhir_code> language;
    std::vector<std::shared_ptr<GraphDefinition_Link>> link;
    std::optional<std::shared_ptr<Meta>> meta;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    fhir_string name;
    std::optional<fhir_canonical> profile;
    std::optional<fhir_string> publisher;
    std::optional<fhir_markdown> purpose;
    fhir_code start;
    fhir_code status;
    std::optional<std::shared_ptr<Narrative>> text;
    std::optional<fhir_uri> url_;
    std::vector<std::shared_ptr<UsageContext>> use_context;
    std::optional<fhir_string> version;
};

class GraphDefinition_Link {
public:
    std::optional<fhir_string> description;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::optional<fhir_string> max;
    std::optional<fhir_integer> min;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<fhir_string> path;
    std::optional<fhir_string> slice_name;
    std::vector<std::shared_ptr<GraphDefinition_Link_Target>> target;
};

class GraphDefinition_Link_Target {
public:
    std::vector<std::shared_ptr<GraphDefinition_Link_Target_Compartment>> compartment;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<GraphDefinition_Link>> link;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<fhir_string> params;
    std::optional<fhir_canonical> profile;
    fhir_code type;
};

class GraphDefinition_Link_Target_Compartment {
public:
    fhir_code code_;
    std::optional<fhir_string> description;
    std::optional<fhir_string> expression;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    fhir_code rule;
    fhir_code use;
};

class Group {
public:
    std::optional<fhir_boolean> active;
    fhir_boolean actual;
    std::vector<std::shared_ptr<Group_Characteristic>> characteristic;
    std::optional<std::shared_ptr<CodeableConcept>> code_;
    std::vector<std::shared_ptr<Resource>> contained;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Identifier>> identifier;
    std::optional<fhir_uri> implicit_rules;
    std::optional<fhir_code> language;
    std::optional<std::shared_ptr<Reference>> managing_entity;
    std::vector<std::shared_ptr<Group_Member>> member;
    std::optional<std::shared_ptr<Meta>> meta;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<fhir_string> name;
    std::optional<fhir_unsignedInt> quantity;
    std::optional<std::shared_ptr<Narrative>> text;
    fhir_code type;
};

class Group_Characteristic {
public:
    std::shared_ptr<CodeableConcept> code_;
    fhir_boolean exclude;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<std::shared_ptr<Period>> period;
    using VALUE_Variant = std::variant<
        std::shared_ptr<CodeableConcept>,
        std::shared_ptr<fhir_boolean>,
        std::shared_ptr<Quantity>,
        std::shared_ptr<Range>,
        std::shared_ptr<Reference>
    >;
    VALUE_Variant value;
};

class Group_Member {
public:
    std::shared_ptr<Reference> entity;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::optional<fhir_boolean> inactive;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<std::shared_ptr<Period>> period;
};

class GuidanceResponse {
public:
    std::vector<std::shared_ptr<Resource>> contained;
    std::vector<std::shared_ptr<DataRequirement>> data_requirement;
    std::optional<std::shared_ptr<Reference>> encounter;
    std::vector<std::shared_ptr<Reference>> evaluation_message;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Identifier>> identifier;
    std::optional<fhir_uri> implicit_rules;
    std::optional<fhir_code> language;
    std::optional<std::shared_ptr<Meta>> meta;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    using MODULE_Variant = std::variant<
        std::shared_ptr<fhir_uri>,
        std::shared_ptr<fhir_canonical>,
        std::shared_ptr<CodeableConcept>
    >;
    MODULE_Variant module;
    std::vector<std::shared_ptr<Annotation>> note;
    std::optional<fhir_dateTime> occurrence_date_time;
    std::optional<std::shared_ptr<Reference>> output_parameters;
    std::optional<std::shared_ptr<Reference>> performer;
    std::vector<std::shared_ptr<CodeableConcept>> reason_code;
    std::vector<std::shared_ptr<Reference>> reason_reference;
    std::optional<std::shared_ptr<Identifier>> request_identifier;
    std::optional<std::shared_ptr<Reference>> result;
    fhir_code status;
    std::optional<std::shared_ptr<Reference>> subject;
    std::optional<std::shared_ptr<Narrative>> text;
};

class HealthcareService {
public:
    std::optional<fhir_boolean> active;
    std::optional<fhir_boolean> appointment_required;
    std::optional<fhir_string> availability_exceptions;
    std::vector<std::shared_ptr<HealthcareService_AvailableTime>> available_time;
    std::vector<std::shared_ptr<CodeableConcept>> category;
    std::vector<std::shared_ptr<CodeableConcept>> characteristic;
    std::optional<fhir_string> comment;
    std::vector<std::shared_ptr<CodeableConcept>> communication;
    std::vector<std::shared_ptr<Resource>> contained;
    std::vector<std::shared_ptr<Reference>> coverage_area;
    std::vector<std::shared_ptr<HealthcareService_Eligibility>> eligibility;
    std::vector<std::shared_ptr<Reference>> endpoint;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<fhir_markdown> extra_details;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Identifier>> identifier;
    std::optional<fhir_uri> implicit_rules;
    std::optional<fhir_code> language;
    std::vector<std::shared_ptr<Reference>> location;
    std::optional<std::shared_ptr<Meta>> meta;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<fhir_string> name;
    std::vector<std::shared_ptr<HealthcareService_NotAvailable>> not_available;
    std::optional<std::shared_ptr<Attachment>> photo;
    std::vector<std::shared_ptr<CodeableConcept>> program;
    std::optional<std::shared_ptr<Reference>> provided_by;
    std::vector<std::shared_ptr<CodeableConcept>> referral_method;
    std::vector<std::shared_ptr<CodeableConcept>> service_provision_code;
    std::vector<std::shared_ptr<CodeableConcept>> specialty;
    std::vector<std::shared_ptr<ContactPoint>> telecom;
    std::optional<std::shared_ptr<Narrative>> text;
    std::vector<std::shared_ptr<CodeableConcept>> type;
};

class HealthcareService_AvailableTime {
public:
    std::optional<fhir_boolean> all_day;
    std::optional<fhir_time> available_end_time;
    std::optional<fhir_time> available_start_time;
    std::vector<fhir_code> days_of_week;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
};

class HealthcareService_Eligibility {
public:
    std::optional<std::shared_ptr<CodeableConcept>> code_;
    std::optional<fhir_markdown> comment;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
};

class HealthcareService_NotAvailable {
public:
    fhir_string description;
    std::optional<std::shared_ptr<Period>> during;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
};

class HumanName {
public:
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<fhir_string> family;
    std::vector<fhir_string> given;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::optional<std::shared_ptr<Period>> period;
    std::vector<fhir_string> prefix;
    std::vector<fhir_string> suffix;
    std::optional<fhir_string> text;
    std::optional<fhir_code> use;
};

class Identifier {
public:
    std::optional<std::shared_ptr<Reference>> assigner;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::optional<std::shared_ptr<Period>> period;
    std::optional<fhir_uri> system;
    std::optional<std::shared_ptr<CodeableConcept>> type;
    std::optional<fhir_code> use;
    std::optional<fhir_string> value;
};

class ImagingStudy {
public:
    std::vector<std::shared_ptr<Reference>> based_on;
    std::vector<std::shared_ptr<Resource>> contained;
    std::optional<fhir_string> description;
    std::optional<std::shared_ptr<Reference>> encounter;
    std::vector<std::shared_ptr<Reference>> endpoint;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Identifier>> identifier;
    std::optional<fhir_uri> implicit_rules;
    std::vector<std::shared_ptr<Reference>> interpreter;
    std::optional<fhir_code> language;
    std::optional<std::shared_ptr<Reference>> location;
    std::optional<std::shared_ptr<Meta>> meta;
    std::vector<std::shared_ptr<Coding>> modality;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::vector<std::shared_ptr<Annotation>> note;
    std::optional<fhir_unsignedInt> number_of_instances;
    std::optional<fhir_unsignedInt> number_of_series;
    std::vector<std::shared_ptr<CodeableConcept>> procedure_code;
    std::optional<std::shared_ptr<Reference>> procedure_reference;
    std::vector<std::shared_ptr<CodeableConcept>> reason_code;
    std::vector<std::shared_ptr<Reference>> reason_reference;
    std::optional<std::shared_ptr<Reference>> referrer;
    std::vector<std::shared_ptr<ImagingStudy_Series>> series;
    std::optional<fhir_dateTime> started;
    fhir_code status;
    std::shared_ptr<Reference> subject;
    std::optional<std::shared_ptr<Narrative>> text;
};

class ImagingStudy_Series {
public:
    std::optional<std::shared_ptr<Coding>> body_site;
    std::optional<fhir_string> description;
    std::vector<std::shared_ptr<Reference>> endpoint;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<ImagingStudy_Series_Instance>> instance;
    std::optional<std::shared_ptr<Coding>> laterality;
    std::shared_ptr<Coding> modality;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<fhir_unsignedInt> number;
    std::optional<fhir_unsignedInt> number_of_instances;
    std::vector<std::shared_ptr<ImagingStudy_Series_Performer>> performer;
    std::vector<std::shared_ptr<Reference>> specimen;
    std::optional<fhir_dateTime> started;
    fhir_id uid;
};

class ImagingStudy_Series_Instance {
public:
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<fhir_unsignedInt> number;
    std::shared_ptr<Coding> sop_class;
    std::optional<fhir_string> title;
    fhir_id uid;
};

class ImagingStudy_Series_Performer {
public:
    std::shared_ptr<Reference> actor;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<CodeableConcept>> function;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
};

class Immunization {
public:
    std::vector<std::shared_ptr<Resource>> contained;
    std::optional<std::shared_ptr<Quantity>> dose_quantity;
    std::vector<std::shared_ptr<Immunization_Education>> education;
    std::optional<std::shared_ptr<Reference>> encounter;
    std::optional<fhir_date> expiration_date;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<CodeableConcept>> funding_source;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Identifier>> identifier;
    std::optional<fhir_uri> implicit_rules;
    std::optional<fhir_boolean> is_subpotent;
    std::optional<fhir_code> language;
    std::optional<std::shared_ptr<Reference>> location;
    std::optional<fhir_string> lot_number;
    std::optional<std::shared_ptr<Reference>> manufacturer;
    std::optional<std::shared_ptr<Meta>> meta;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::vector<std::shared_ptr<Annotation>> note;
    using OCCURRENCE_Variant = std::variant<
        std::shared_ptr<fhir_dateTime>,
        std::shared_ptr<fhir_string>
    >;
    OCCURRENCE_Variant occurrence;
    std::shared_ptr<Reference> patient;
    std::vector<std::shared_ptr<Immunization_Performer>> performer;
    std::optional<fhir_boolean> primary_source;
    std::vector<std::shared_ptr<CodeableConcept>> program_eligibility;
    std::vector<std::shared_ptr<Immunization_ProtocolApplied>> protocol_applied;
    std::vector<std::shared_ptr<Immunization_Reaction>> reaction;
    std::vector<std::shared_ptr<CodeableConcept>> reason_code;
    std::vector<std::shared_ptr<Reference>> reason_reference;
    std::optional<fhir_dateTime> recorded;
    std::optional<std::shared_ptr<CodeableConcept>> report_origin;
    std::optional<std::shared_ptr<CodeableConcept>> route;
    std::optional<std::shared_ptr<CodeableConcept>> site;
    fhir_code status;
    std::optional<std::shared_ptr<CodeableConcept>> status_reason;
    std::vector<std::shared_ptr<CodeableConcept>> subpotent_reason;
    std::optional<std::shared_ptr<Narrative>> text;
    std::shared_ptr<CodeableConcept> vaccine_code;
};

class Immunization_Education {
public:
    std::optional<fhir_string> document_type;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<fhir_dateTime> presentation_date;
    std::optional<fhir_dateTime> publication_date;
    std::optional<fhir_uri> reference;
};

class Immunization_Performer {
public:
    std::shared_ptr<Reference> actor;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<CodeableConcept>> function;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
};

class Immunization_ProtocolApplied {
public:
    std::optional<std::shared_ptr<Reference>> authority;
    using DOSE_NUMBER_Variant = std::variant<
        std::shared_ptr<fhir_positiveInt>,
        std::shared_ptr<fhir_string>
    >;
    DOSE_NUMBER_Variant dose_number;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<fhir_string> series;
    using SERIES_DOSES_Variant = std::variant<
        std::shared_ptr<fhir_positiveInt>,
        std::shared_ptr<fhir_string>
    >;
    SERIES_DOSES_Variant series_doses;
    std::vector<std::shared_ptr<CodeableConcept>> target_disease;
};

class Immunization_Reaction {
public:
    std::optional<fhir_dateTime> date_;
    std::optional<std::shared_ptr<Reference>> detail;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<fhir_boolean> reported;
};

class ImmunizationEvaluation {
public:
    std::optional<std::shared_ptr<Reference>> authority;
    std::vector<std::shared_ptr<Resource>> contained;
    std::optional<fhir_dateTime> date_;
    std::optional<fhir_string> description;
    using DOSE_NUMBER_Variant = std::variant<
        std::shared_ptr<fhir_positiveInt>,
        std::shared_ptr<fhir_string>
    >;
    DOSE_NUMBER_Variant dose_number;
    std::shared_ptr<CodeableConcept> dose_status;
    std::vector<std::shared_ptr<CodeableConcept>> dose_status_reason;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Identifier>> identifier;
    std::shared_ptr<Reference> immunization_event;
    std::optional<fhir_uri> implicit_rules;
    std::optional<fhir_code> language;
    std::optional<std::shared_ptr<Meta>> meta;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::shared_ptr<Reference> patient;
    std::optional<fhir_string> series;
    using SERIES_DOSES_Variant = std::variant<
        std::shared_ptr<fhir_positiveInt>,
        std::shared_ptr<fhir_string>
    >;
    SERIES_DOSES_Variant series_doses;
    fhir_code status;
    std::shared_ptr<CodeableConcept> target_disease;
    std::optional<std::shared_ptr<Narrative>> text;
};

class ImmunizationRecommendation {
public:
    std::optional<std::shared_ptr<Reference>> authority;
    std::vector<std::shared_ptr<Resource>> contained;
    fhir_dateTime date_;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Identifier>> identifier;
    std::optional<fhir_uri> implicit_rules;
    std::optional<fhir_code> language;
    std::optional<std::shared_ptr<Meta>> meta;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::shared_ptr<Reference> patient;
    std::optional<std::shared_ptr<Narrative>> text;
};

class ImmunizationRecommendation_Recommendation {
public:
    std::vector<std::shared_ptr<CodeableConcept>> contraindicated_vaccine_code;
    std::vector<std::shared_ptr<ImmunizationRecommendation_Recommendation_DateCriterion>> date_criterion;
    std::optional<fhir_string> description;
    using DOSE_NUMBER_Variant = std::variant<
        std::shared_ptr<fhir_positiveInt>,
        std::shared_ptr<fhir_string>
    >;
    DOSE_NUMBER_Variant dose_number;
    std::vector<std::shared_ptr<Extension>> extension;
    std::vector<std::shared_ptr<CodeableConcept>> forecast_reason;
    std::shared_ptr<CodeableConcept> forecast_status;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<fhir_string> series;
    using SERIES_DOSES_Variant = std::variant<
        std::shared_ptr<fhir_positiveInt>,
        std::shared_ptr<fhir_string>
    >;
    SERIES_DOSES_Variant series_doses;
    std::vector<std::shared_ptr<Reference>> supporting_immunization;
    std::vector<std::shared_ptr<Reference>> supporting_patient_information;
    std::optional<std::shared_ptr<CodeableConcept>> target_disease;
    std::vector<std::shared_ptr<CodeableConcept>> vaccine_code;
};

class ImmunizationRecommendation_Recommendation_DateCriterion {
public:
    std::shared_ptr<CodeableConcept> code_;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    fhir_dateTime value;
};

class ImplementationGuide {
public:
    std::vector<std::shared_ptr<ContactDetail>> contact;
    std::vector<std::shared_ptr<Resource>> contained;
    std::optional<fhir_markdown> copyright;
    std::optional<fhir_dateTime> date_;
    std::optional<std::shared_ptr<ImplementationGuide_Definition>> definition;
    std::vector<std::shared_ptr<ImplementationGuide_DependsOn>> depends_on;
    std::optional<fhir_markdown> description;
    std::optional<fhir_boolean> experimental;
    std::vector<std::shared_ptr<Extension>> extension;
    std::vector<std::shared_ptr<ImplementationGuide_Global>> global;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::optional<fhir_uri> implicit_rules;
    std::vector<std::shared_ptr<CodeableConcept>> jurisdiction;
    std::optional<fhir_code> language;
    std::optional<fhir_code> license;
    std::optional<std::shared_ptr<ImplementationGuide_Manifest>> manifest;
    std::optional<std::shared_ptr<Meta>> meta;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    fhir_string name;
    fhir_id package_id;
    std::optional<fhir_string> publisher;
    fhir_code status;
    std::optional<std::shared_ptr<Narrative>> text;
    std::optional<fhir_string> title;
    fhir_uri url_;
    std::vector<std::shared_ptr<UsageContext>> use_context;
    std::optional<fhir_string> version;
};

class ImplementationGuide_Definition {
public:
    std::vector<std::shared_ptr<Extension>> extension;
    std::vector<std::shared_ptr<ImplementationGuide_Definition_Grouping>> grouping;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<std::shared_ptr<ImplementationGuide_Definition_Page>> page;
    std::vector<std::shared_ptr<ImplementationGuide_Definition_Parameter>> parameter;
    std::vector<std::shared_ptr<ImplementationGuide_Definition_Template>> template_;
};

class ImplementationGuide_Definition_Grouping {
public:
    std::optional<fhir_string> description;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    fhir_string name;
};

class ImplementationGuide_Definition_Page {
public:
    std::vector<std::shared_ptr<Extension>> extension;
    fhir_code generation;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    using NAME_Variant = std::variant<
        std::shared_ptr<fhir_url>,
        std::shared_ptr<Reference>
    >;
    NAME_Variant name;
    std::vector<std::shared_ptr<ImplementationGuide_Definition_Page>> page;
    fhir_string title;
};

class ImplementationGuide_Definition_Parameter {
public:
    fhir_code code_;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    fhir_string value;
};

class ImplementationGuide_Definition_Resource {
public:
    std::optional<fhir_string> description;
    using EXAMPLE_Variant = std::variant<
        std::shared_ptr<fhir_boolean>,
        std::shared_ptr<fhir_canonical>
    >;
    EXAMPLE_Variant example;
    std::vector<std::shared_ptr<Extension>> extension;
    std::vector<fhir_code> fhir_version;
    std::optional<fhir_id> grouping_id;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<fhir_string> name;
    std::shared_ptr<Reference> reference;
};

class ImplementationGuide_Definition_Template {
public:
    fhir_code code_;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<fhir_string> scope;
    fhir_string source;
};

class ImplementationGuide_DependsOn {
public:
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<fhir_id> package_id;
    fhir_canonical uri_;
    std::optional<fhir_string> version;
};

class ImplementationGuide_Global {
public:
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    fhir_canonical profile;
    fhir_code type;
};

class ImplementationGuide_Manifest {
public:
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<fhir_string> image;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::vector<fhir_string> other;
    std::vector<std::shared_ptr<ImplementationGuide_Manifest_Page>> page;
    std::optional<fhir_url> rendering;
};

class ImplementationGuide_Manifest_Page {
public:
    std::vector<fhir_string> anchor;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    fhir_string name;
    std::optional<fhir_string> title;
};

class ImplementationGuide_Manifest_Resource {
public:
    using EXAMPLE_Variant = std::variant<
        std::shared_ptr<fhir_boolean>,
        std::shared_ptr<fhir_canonical>
    >;
    EXAMPLE_Variant example;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::shared_ptr<Reference> reference;
    std::optional<fhir_url> relative_path;
};

class InsurancePlan {
public:
    std::optional<std::shared_ptr<Reference>> administered_by;
    std::vector<fhir_string> alias;
    std::vector<std::shared_ptr<InsurancePlan_Contact>> contact;
    std::vector<std::shared_ptr<Resource>> contained;
    std::vector<std::shared_ptr<InsurancePlan_Coverage>> coverage;
    std::vector<std::shared_ptr<Reference>> coverage_area;
    std::vector<std::shared_ptr<Reference>> endpoint;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Identifier>> identifier;
    std::optional<fhir_uri> implicit_rules;
    std::optional<fhir_code> language;
    std::optional<std::shared_ptr<Meta>> meta;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<fhir_string> name;
    std::vector<std::shared_ptr<Reference>> network;
    std::optional<std::shared_ptr<Reference>> owned_by;
    std::optional<std::shared_ptr<Period>> period;
    std::vector<std::shared_ptr<InsurancePlan_Plan>> plan;
    std::optional<fhir_code> status;
    std::optional<std::shared_ptr<Narrative>> text;
    std::vector<std::shared_ptr<CodeableConcept>> type;
};

class InsurancePlan_Contact {
public:
    std::optional<std::shared_ptr<Address>> address;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<std::shared_ptr<HumanName>> name;
    std::optional<std::shared_ptr<CodeableConcept>> purpose;
    std::vector<std::shared_ptr<ContactPoint>> telecom;
};

class InsurancePlan_Coverage {
public:
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::vector<std::shared_ptr<Reference>> network;
    std::shared_ptr<CodeableConcept> type;
};

class InsurancePlan_Coverage_Benefit {
public:
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<InsurancePlan_Coverage_Benefit_Limit>> limit;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<fhir_string> requirement;
    std::shared_ptr<CodeableConcept> type;
};

class InsurancePlan_Coverage_Benefit_Limit {
public:
    std::optional<std::shared_ptr<CodeableConcept>> code_;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<std::shared_ptr<Quantity>> value;
};

class InsurancePlan_Plan {
public:
    std::vector<std::shared_ptr<Reference>> coverage_area;
    std::vector<std::shared_ptr<Extension>> extension;
    std::vector<std::shared_ptr<InsurancePlan_Plan_GeneralCost>> general_cost;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Identifier>> identifier;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::vector<std::shared_ptr<Reference>> network;
    std::vector<std::shared_ptr<InsurancePlan_Plan_SpecificCost>> specific_cost;
    std::optional<std::shared_ptr<CodeableConcept>> type;
};

class InsurancePlan_Plan_GeneralCost {
public:
    std::optional<fhir_string> comment;
    std::optional<std::shared_ptr<Money>> cost;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<fhir_positiveInt> group_size;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<std::shared_ptr<CodeableConcept>> type;
};

class InsurancePlan_Plan_SpecificCost {
public:
    std::vector<std::shared_ptr<InsurancePlan_Plan_SpecificCost_Benefit>> benefit;
    std::shared_ptr<CodeableConcept> category;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
};

class InsurancePlan_Plan_SpecificCost_Benefit {
public:
    std::vector<std::shared_ptr<InsurancePlan_Plan_SpecificCost_Benefit_Cost>> cost;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::shared_ptr<CodeableConcept> type;
};

class InsurancePlan_Plan_SpecificCost_Benefit_Cost {
public:
    std::optional<std::shared_ptr<CodeableConcept>> applicability;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::vector<std::shared_ptr<CodeableConcept>> qualifiers;
    std::shared_ptr<CodeableConcept> type;
    std::optional<std::shared_ptr<Quantity>> value;
};

class Invoice {
public:
    std::optional<std::shared_ptr<Reference>> account;
    std::optional<fhir_string> cancelled_reason;
    std::vector<std::shared_ptr<Resource>> contained;
    std::optional<fhir_dateTime> date_;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Identifier>> identifier;
    std::optional<fhir_uri> implicit_rules;
    std::optional<std::shared_ptr<Reference>> issuer;
    std::optional<fhir_code> language;
    std::vector<std::shared_ptr<Invoice_LineItem>> line_item;
    std::optional<std::shared_ptr<Meta>> meta;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::vector<std::shared_ptr<Annotation>> note;
    std::vector<std::shared_ptr<Invoice_Participant>> participant;
    std::optional<fhir_markdown> payment_terms;
    std::optional<std::shared_ptr<Reference>> recipient;
    fhir_code status;
    std::optional<std::shared_ptr<Reference>> subject;
    std::optional<std::shared_ptr<Narrative>> text;
    std::optional<std::shared_ptr<Money>> total_gross;
    std::optional<std::shared_ptr<Money>> total_net;
    std::vector<std::shared_ptr<Invoice_LineItem_PriceComponent>> total_price_component;
    std::optional<std::shared_ptr<CodeableConcept>> type;
};

class Invoice_LineItem {
public:
    using CHARGE_ITEM_Variant = std::variant<
        std::shared_ptr<Reference>,
        std::shared_ptr<CodeableConcept>
    >;
    CHARGE_ITEM_Variant charge_item;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::vector<std::shared_ptr<Invoice_LineItem_PriceComponent>> price_component;
    std::optional<fhir_positiveInt> sequence;
};

class Invoice_LineItem_PriceComponent {
public:
    std::optional<std::shared_ptr<Money>> amount;
    std::optional<std::shared_ptr<CodeableConcept>> code_;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<fhir_decimal> factor;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    fhir_code type;
};

class Invoice_Participant {
public:
    std::shared_ptr<Reference> actor;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<std::shared_ptr<CodeableConcept>> role;
};

class Library {
public:
    std::optional<fhir_date> approval_date;
    std::vector<std::shared_ptr<ContactDetail>> author;
    std::vector<std::shared_ptr<ContactDetail>> contact;
    std::vector<std::shared_ptr<Resource>> contained;
    std::vector<std::shared_ptr<Attachment>> content;
    std::optional<fhir_markdown> copyright;
    std::vector<std::shared_ptr<DataRequirement>> data_requirement;
    std::optional<fhir_dateTime> date_;
    std::optional<fhir_markdown> description;
    std::vector<std::shared_ptr<ContactDetail>> editor;
    std::optional<std::shared_ptr<Period>> effective_period;
    std::vector<std::shared_ptr<ContactDetail>> endorser;
    std::optional<fhir_boolean> experimental;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Identifier>> identifier;
    std::optional<fhir_uri> implicit_rules;
    std::vector<std::shared_ptr<CodeableConcept>> jurisdiction;
    std::optional<fhir_code> language;
    std::optional<fhir_date> last_review_date;
    std::optional<std::shared_ptr<Meta>> meta;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<fhir_string> name;
    std::vector<std::shared_ptr<ParameterDefinition>> parameter;
    std::optional<fhir_string> publisher;
    std::optional<fhir_markdown> purpose;
    std::vector<std::shared_ptr<RelatedArtifact>> related_artifact;
    std::vector<std::shared_ptr<ContactDetail>> reviewer;
    fhir_code status;
    using SUBJECT_Variant = std::variant<
        std::shared_ptr<CodeableConcept>,
        std::shared_ptr<Reference>
    >;
    SUBJECT_Variant subject;
    std::optional<fhir_string> subtitle;
    std::optional<std::shared_ptr<Narrative>> text;
    std::optional<fhir_string> title;
    std::vector<std::shared_ptr<CodeableConcept>> topic;
    std::shared_ptr<CodeableConcept> type;
    std::optional<fhir_uri> url_;
    std::optional<fhir_string> usage;
    std::vector<std::shared_ptr<UsageContext>> use_context;
    std::optional<fhir_string> version;
};

class Linkage {
public:
    std::optional<fhir_boolean> active;
    std::optional<std::shared_ptr<Reference>> author;
    std::vector<std::shared_ptr<Resource>> contained;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::optional<fhir_uri> implicit_rules;
    std::optional<fhir_code> language;
    std::optional<std::shared_ptr<Meta>> meta;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<std::shared_ptr<Narrative>> text;
};

class Linkage_Item {
public:
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::shared_ptr<Reference> resource;
    fhir_code type;
};

class List {
public:
    std::optional<std::shared_ptr<CodeableConcept>> code_;
    std::vector<std::shared_ptr<Resource>> contained;
    std::optional<fhir_dateTime> date_;
    std::optional<std::shared_ptr<CodeableConcept>> empty_reason;
    std::optional<std::shared_ptr<Reference>> encounter;
    std::vector<std::shared_ptr<List_Entry>> entry;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Identifier>> identifier;
    std::optional<fhir_uri> implicit_rules;
    std::optional<fhir_code> language;
    std::optional<std::shared_ptr<Meta>> meta;
    fhir_code mode;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::vector<std::shared_ptr<Annotation>> note;
    std::optional<std::shared_ptr<CodeableConcept>> ordered_by;
    std::optional<std::shared_ptr<Reference>> source;
    fhir_code status;
    std::optional<std::shared_ptr<Reference>> subject;
    std::optional<std::shared_ptr<Narrative>> text;
    std::optional<fhir_string> title;
};

class List_Entry {
public:
    std::optional<fhir_dateTime> date_;
    std::optional<fhir_boolean> deleted;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<CodeableConcept>> flag;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::shared_ptr<Reference> item;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
};

class Location {
public:
    std::optional<std::shared_ptr<Address>> address;
    std::vector<fhir_string> alias;
    std::optional<fhir_string> availability_exceptions;
    std::vector<std::shared_ptr<Resource>> contained;
    std::optional<fhir_string> description;
    std::vector<std::shared_ptr<Reference>> endpoint;
    std::vector<std::shared_ptr<Extension>> extension;
    std::vector<std::shared_ptr<Location_HoursOfOperation>> hours_of_operation;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Identifier>> identifier;
    std::optional<fhir_uri> implicit_rules;
    std::optional<fhir_code> language;
    std::optional<std::shared_ptr<Reference>> managing_organization;
    std::optional<std::shared_ptr<Meta>> meta;
    std::optional<fhir_code> mode;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<fhir_string> name;
    std::optional<std::shared_ptr<Coding>> operational_status;
    std::optional<std::shared_ptr<Reference>> part_of;
    std::optional<std::shared_ptr<CodeableConcept>> physical_type;
    std::optional<std::shared_ptr<Location_Position>> position;
    std::optional<fhir_code> status;
    std::vector<std::shared_ptr<ContactPoint>> telecom;
    std::optional<std::shared_ptr<Narrative>> text;
    std::vector<std::shared_ptr<CodeableConcept>> type;
};

class Location_HoursOfOperation {
public:
    std::optional<fhir_boolean> all_day;
    std::optional<fhir_time> closing_time;
    std::vector<fhir_code> days_of_week;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<fhir_time> opening_time;
};

class Location_Position {
public:
    std::optional<fhir_decimal> altitude;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    fhir_decimal latitude;
    fhir_decimal longitude;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
};

class MarketingStatus {
public:
    std::shared_ptr<CodeableConcept> country;
    std::shared_ptr<Period> date_range;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::optional<std::shared_ptr<CodeableConcept>> jurisdiction;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<fhir_dateTime> restore_date;
    std::shared_ptr<CodeableConcept> status;
};

class Measure {
public:
    std::optional<fhir_date> approval_date;
    std::vector<std::shared_ptr<ContactDetail>> author;
    std::optional<fhir_markdown> clinical_recommendation_statement;
    std::optional<std::shared_ptr<CodeableConcept>> composite_scoring;
    std::vector<std::shared_ptr<ContactDetail>> contact;
    std::vector<std::shared_ptr<Resource>> contained;
    std::optional<fhir_markdown> copyright;
    std::optional<fhir_dateTime> date_;
    std::vector<fhir_markdown> definition;
    std::optional<fhir_markdown> description;
    std::optional<fhir_markdown> disclaimer;
    std::vector<std::shared_ptr<ContactDetail>> editor;
    std::optional<std::shared_ptr<Period>> effective_period;
    std::vector<std::shared_ptr<ContactDetail>> endorser;
    std::optional<fhir_boolean> experimental;
    std::vector<std::shared_ptr<Extension>> extension;
    std::vector<std::shared_ptr<Measure_Group>> group;
    std::optional<fhir_markdown> guidance;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Identifier>> identifier;
    std::optional<fhir_uri> implicit_rules;
    std::optional<std::shared_ptr<CodeableConcept>> improvement_notation;
    std::vector<std::shared_ptr<CodeableConcept>> jurisdiction;
    std::optional<fhir_code> language;
    std::optional<fhir_date> last_review_date;
    std::vector<fhir_canonical> library;
    std::optional<std::shared_ptr<Meta>> meta;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<fhir_string> name;
    std::optional<fhir_string> publisher;
    std::optional<fhir_markdown> purpose;
    std::optional<fhir_string> rate_aggregation;
    std::optional<fhir_markdown> rationale;
    std::vector<std::shared_ptr<RelatedArtifact>> related_artifact;
    std::vector<std::shared_ptr<ContactDetail>> reviewer;
    std::optional<fhir_string> risk_adjustment;
    std::optional<std::shared_ptr<CodeableConcept>> scoring;
    fhir_code status;
    using SUBJECT_Variant = std::variant<
        std::shared_ptr<CodeableConcept>,
        std::shared_ptr<Reference>
    >;
    SUBJECT_Variant subject;
    std::optional<fhir_string> subtitle;
    std::vector<std::shared_ptr<Measure_SupplementalData>> supplemental_data;
    std::optional<std::shared_ptr<Narrative>> text;
    std::optional<fhir_string> title;
    std::vector<std::shared_ptr<CodeableConcept>> topic;
    std::vector<std::shared_ptr<CodeableConcept>> type;
    std::optional<fhir_uri> url_;
    std::optional<fhir_string> usage;
    std::vector<std::shared_ptr<UsageContext>> use_context;
    std::optional<fhir_string> version;
};

class Measure_Group {
public:
    std::optional<std::shared_ptr<CodeableConcept>> code_;
    std::optional<fhir_string> description;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::vector<std::shared_ptr<Measure_Group_Population>> population;
    std::vector<std::shared_ptr<Measure_Group_Stratifier>> stratifier;
};

class Measure_Group_Population {
public:
    std::optional<std::shared_ptr<CodeableConcept>> code_;
    std::shared_ptr<Expression> criteria;
    std::optional<fhir_string> description;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
};

class Measure_Group_Stratifier {
public:
    std::optional<std::shared_ptr<CodeableConcept>> code_;
    std::vector<std::shared_ptr<Measure_Group_Stratifier_Component>> component;
    std::optional<std::shared_ptr<Expression>> criteria;
    std::optional<fhir_string> description;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
};

class Measure_Group_Stratifier_Component {
public:
    std::optional<std::shared_ptr<CodeableConcept>> code_;
    std::shared_ptr<Expression> criteria;
    std::optional<fhir_string> description;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
};

class Measure_SupplementalData {
public:
    std::optional<std::shared_ptr<CodeableConcept>> code_;
    std::shared_ptr<Expression> criteria;
    std::optional<fhir_string> description;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::vector<std::shared_ptr<CodeableConcept>> usage;
};

class MeasureReport {
public:
    std::vector<std::shared_ptr<Resource>> contained;
    std::optional<fhir_dateTime> date_;
    std::vector<std::shared_ptr<Reference>> evaluated_resource;
    std::vector<std::shared_ptr<Extension>> extension;
    std::vector<std::shared_ptr<MeasureReport_Group>> group;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Identifier>> identifier;
    std::optional<fhir_uri> implicit_rules;
    std::optional<std::shared_ptr<CodeableConcept>> improvement_notation;
    std::optional<fhir_code> language;
    fhir_canonical measure;
    std::optional<std::shared_ptr<Meta>> meta;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::shared_ptr<Period> period;
    std::optional<std::shared_ptr<Reference>> reporter;
    fhir_code status;
    std::optional<std::shared_ptr<Reference>> subject;
    std::optional<std::shared_ptr<Narrative>> text;
    fhir_code type;
};

class MeasureReport_Group {
public:
    std::optional<std::shared_ptr<CodeableConcept>> code_;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::optional<std::shared_ptr<Quantity>> measure_score;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::vector<std::shared_ptr<MeasureReport_Group_Population>> population;
    std::vector<std::shared_ptr<MeasureReport_Group_Stratifier>> stratifier;
};

class MeasureReport_Group_Population {
public:
    std::optional<std::shared_ptr<CodeableConcept>> code_;
    std::optional<fhir_integer> count;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<std::shared_ptr<Reference>> subject_results;
};

class MeasureReport_Group_Stratifier {
public:
    std::vector<std::shared_ptr<CodeableConcept>> code_;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::vector<std::shared_ptr<MeasureReport_Group_Stratifier_Stratum>> stratum;
};

class MeasureReport_Group_Stratifier_Stratum {
public:
    std::vector<std::shared_ptr<MeasureReport_Group_Stratifier_Stratum_Component>> component;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::optional<std::shared_ptr<Quantity>> measure_score;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::vector<std::shared_ptr<MeasureReport_Group_Stratifier_Stratum_Population>> population;
    std::optional<std::shared_ptr<CodeableConcept>> value;
};

class MeasureReport_Group_Stratifier_Stratum_Component {
public:
    std::shared_ptr<CodeableConcept> code_;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::shared_ptr<CodeableConcept> value;
};

class MeasureReport_Group_Stratifier_Stratum_Population {
public:
    std::optional<std::shared_ptr<CodeableConcept>> code_;
    std::optional<fhir_integer> count;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<std::shared_ptr<Reference>> subject_results;
};

class Media {
public:
    std::vector<std::shared_ptr<Reference>> based_on;
    std::optional<std::shared_ptr<CodeableConcept>> body_site;
    std::vector<std::shared_ptr<Resource>> contained;
    std::shared_ptr<Attachment> content;
    using CREATED_Variant = std::variant<
        std::shared_ptr<fhir_dateTime>,
        std::shared_ptr<Period>
    >;
    CREATED_Variant created;
    std::optional<std::shared_ptr<Reference>> device;
    std::optional<fhir_string> device_name;
    std::optional<fhir_decimal> duration;
    std::optional<std::shared_ptr<Reference>> encounter;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<fhir_positiveInt> frames;
    std::optional<fhir_positiveInt> height;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Identifier>> identifier;
    std::optional<fhir_uri> implicit_rules;
    std::optional<fhir_instant> issued;
    std::optional<fhir_code> language;
    std::optional<std::shared_ptr<Meta>> meta;
    std::optional<std::shared_ptr<CodeableConcept>> modality;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::vector<std::shared_ptr<Annotation>> note;
    std::optional<std::shared_ptr<Reference>> operator_;
    std::vector<std::shared_ptr<Reference>> part_of;
    std::vector<std::shared_ptr<CodeableConcept>> reason_code;
    fhir_code status;
    std::optional<std::shared_ptr<Reference>> subject;
    std::optional<std::shared_ptr<Narrative>> text;
    std::optional<std::shared_ptr<CodeableConcept>> type;
    std::optional<std::shared_ptr<CodeableConcept>> view;
    std::optional<fhir_positiveInt> width;
};

class Medication {
public:
    std::optional<std::shared_ptr<Ratio>> amount;
    std::optional<std::shared_ptr<Medication_Batch>> batch;
    std::optional<std::shared_ptr<CodeableConcept>> code_;
    std::vector<std::shared_ptr<Resource>> contained;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<CodeableConcept>> form;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Identifier>> identifier;
    std::optional<fhir_uri> implicit_rules;
    std::vector<std::shared_ptr<Medication_Ingredient>> ingredient;
    std::optional<fhir_code> language;
    std::optional<std::shared_ptr<Reference>> manufacturer;
    std::optional<std::shared_ptr<Meta>> meta;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<fhir_code> status;
    std::optional<std::shared_ptr<Narrative>> text;
};

class Medication_Batch {
public:
    std::optional<fhir_dateTime> expiration_date;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::optional<fhir_string> lot_number;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
};

class Medication_Ingredient {
public:
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::optional<fhir_boolean> is_active;
    using ITEM_Variant = std::variant<
        std::shared_ptr<CodeableConcept>,
        std::shared_ptr<Reference>
    >;
    ITEM_Variant item;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<std::shared_ptr<Ratio>> strength;
};

class MedicationAdministration {
public:
    std::optional<std::shared_ptr<CodeableConcept>> category;
    std::vector<std::shared_ptr<Resource>> contained;
    std::optional<std::shared_ptr<Reference>> context;
    std::vector<std::shared_ptr<Reference>> device;
    std::optional<std::shared_ptr<MedicationAdministration_Dosage>> dosage;
    using EFFECTIVE_Variant = std::variant<
        std::shared_ptr<fhir_dateTime>,
        std::shared_ptr<Period>
    >;
    EFFECTIVE_Variant effective;
    std::vector<std::shared_ptr<Reference>> event_history;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Identifier>> identifier;
    std::optional<fhir_uri> implicit_rules;
    std::vector<fhir_uri> instantiates;
    std::optional<fhir_code> language;
    using MEDICATION_Variant = std::variant<
        std::shared_ptr<CodeableConcept>,
        std::shared_ptr<Reference>
    >;
    MEDICATION_Variant medication;
    std::optional<std::shared_ptr<Meta>> meta;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::vector<std::shared_ptr<Annotation>> note;
    std::vector<std::shared_ptr<Reference>> part_of;
    std::vector<std::shared_ptr<MedicationAdministration_Performer>> performer;
    std::vector<std::shared_ptr<CodeableConcept>> reason_code;
    std::vector<std::shared_ptr<Reference>> reason_reference;
    std::optional<std::shared_ptr<Reference>> request;
    fhir_code status;
    std::vector<std::shared_ptr<CodeableConcept>> status_reason;
    std::shared_ptr<Reference> subject;
    std::vector<std::shared_ptr<Reference>> supporting_information;
    std::optional<std::shared_ptr<Narrative>> text;
};

class MedicationAdministration_Dosage {
public:
    std::optional<std::shared_ptr<Quantity>> dose;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::optional<std::shared_ptr<CodeableConcept>> method;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    using RATE_Variant = std::variant<
        std::shared_ptr<Ratio>,
        std::shared_ptr<Quantity>
    >;
    RATE_Variant rate;
    std::optional<std::shared_ptr<CodeableConcept>> route;
    std::optional<std::shared_ptr<CodeableConcept>> site;
    std::optional<fhir_string> text;
};

class MedicationAdministration_Performer {
public:
    std::shared_ptr<Reference> actor;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<CodeableConcept>> function;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
};

class MedicationDispense {
public:
    std::vector<std::shared_ptr<Reference>> authorizing_prescription;
    std::optional<std::shared_ptr<CodeableConcept>> category;
    std::vector<std::shared_ptr<Resource>> contained;
    std::optional<std::shared_ptr<Reference>> context;
    std::optional<std::shared_ptr<Quantity>> days_supply;
    std::optional<std::shared_ptr<Reference>> destination;
    std::vector<std::shared_ptr<Reference>> detected_issue;
    std::vector<std::shared_ptr<Dosage>> dosage_instruction;
    std::vector<std::shared_ptr<Reference>> event_history;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Identifier>> identifier;
    std::optional<fhir_uri> implicit_rules;
    std::optional<fhir_code> language;
    std::optional<std::shared_ptr<Reference>> location;
    using MEDICATION_Variant = std::variant<
        std::shared_ptr<CodeableConcept>,
        std::shared_ptr<Reference>
    >;
    MEDICATION_Variant medication;
    std::optional<std::shared_ptr<Meta>> meta;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::vector<std::shared_ptr<Annotation>> note;
    std::vector<std::shared_ptr<Reference>> part_of;
    std::vector<std::shared_ptr<MedicationDispense_Performer>> performer;
    std::optional<std::shared_ptr<Quantity>> quantity;
    std::vector<std::shared_ptr<Reference>> receiver;
    fhir_code status;
    using STATUS_REASON_Variant = std::variant<
        std::shared_ptr<CodeableConcept>,
        std::shared_ptr<Reference>
    >;
    STATUS_REASON_Variant status_reason;
    std::optional<std::shared_ptr<Reference>> subject;
    std::optional<std::shared_ptr<MedicationDispense_Substitution>> substitution;
    std::vector<std::shared_ptr<Reference>> supporting_information;
    std::optional<std::shared_ptr<Narrative>> text;
    std::optional<std::shared_ptr<CodeableConcept>> type;
    std::optional<fhir_dateTime> when_handed_over;
    std::optional<fhir_dateTime> when_prepared;
};

class MedicationDispense_Performer {
public:
    std::shared_ptr<Reference> actor;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<CodeableConcept>> function;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
};

class MedicationDispense_Substitution {
public:
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::vector<std::shared_ptr<CodeableConcept>> reason;
    std::vector<std::shared_ptr<Reference>> responsible_party;
    std::optional<std::shared_ptr<CodeableConcept>> type;
    fhir_boolean was_substituted;
};

class MedicationKnowledge {
public:
    std::vector<std::shared_ptr<MedicationKnowledge_AdministrationGuidelines>> administration_guidelines;
    std::optional<std::shared_ptr<Quantity>> amount;
    std::vector<std::shared_ptr<Reference>> associated_medication;
    std::optional<std::shared_ptr<CodeableConcept>> code_;
    std::vector<std::shared_ptr<Resource>> contained;
    std::vector<std::shared_ptr<Reference>> contraindication;
    std::vector<std::shared_ptr<MedicationKnowledge_Cost>> cost;
    std::optional<std::shared_ptr<CodeableConcept>> dose_form;
    std::vector<std::shared_ptr<MedicationKnowledge_DrugCharacteristic>> drug_characteristic;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::optional<fhir_uri> implicit_rules;
    std::vector<std::shared_ptr<MedicationKnowledge_Ingredient>> ingredient;
    std::vector<std::shared_ptr<CodeableConcept>> intended_route;
    std::vector<std::shared_ptr<MedicationKnowledge_Kinetics>> kinetics;
    std::optional<fhir_code> language;
    std::optional<std::shared_ptr<Reference>> manufacturer;
    std::vector<std::shared_ptr<MedicationKnowledge_MedicineClassification>> medicine_classification;
    std::optional<std::shared_ptr<Meta>> meta;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::vector<std::shared_ptr<MedicationKnowledge_MonitoringProgram>> monitoring_program;
    std::vector<std::shared_ptr<MedicationKnowledge_Monograph>> monograph;
    std::optional<std::shared_ptr<MedicationKnowledge_Packaging>> packaging;
    std::optional<fhir_markdown> preparation_instruction;
    std::vector<std::shared_ptr<CodeableConcept>> product_type;
    std::vector<std::shared_ptr<MedicationKnowledge_Regulatory>> regulatory;
    std::vector<std::shared_ptr<MedicationKnowledge_RelatedMedicationKnowledge>> related_medication_knowledge;
    std::optional<fhir_code> status;
    std::vector<fhir_string> synonym;
    std::optional<std::shared_ptr<Narrative>> text;
};

class MedicationKnowledge_AdministrationGuidelines {
public:
    std::vector<std::shared_ptr<MedicationKnowledge_AdministrationGuidelines_Dosage>> dosage;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    using INDICATION_Variant = std::variant<
        std::shared_ptr<CodeableConcept>,
        std::shared_ptr<Reference>
    >;
    INDICATION_Variant indication;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::vector<std::shared_ptr<MedicationKnowledge_AdministrationGuidelines_PatientCharacteristics>> patient_characteristics;
};

class MedicationKnowledge_AdministrationGuidelines_Dosage {
public:
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::shared_ptr<CodeableConcept> type;
};

class MedicationKnowledge_AdministrationGuidelines_PatientCharacteristics {
public:
    using CHARACTERISTIC_Variant = std::variant<
        std::shared_ptr<CodeableConcept>,
        std::shared_ptr<Quantity>
    >;
    CHARACTERISTIC_Variant characteristic;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::vector<fhir_string> value;
};

class MedicationKnowledge_Cost {
public:
    std::shared_ptr<Money> cost;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<fhir_string> source;
    std::shared_ptr<CodeableConcept> type;
};

class MedicationKnowledge_DrugCharacteristic {
public:
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<std::shared_ptr<CodeableConcept>> type;
    using VALUE_Variant = std::variant<
        std::shared_ptr<CodeableConcept>,
        std::shared_ptr<fhir_string>,
        std::shared_ptr<Quantity>,
        std::shared_ptr<fhir_base64Binary>
    >;
    VALUE_Variant value;
};

class MedicationKnowledge_Ingredient {
public:
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::optional<fhir_boolean> is_active;
    using ITEM_Variant = std::variant<
        std::shared_ptr<CodeableConcept>,
        std::shared_ptr<Reference>
    >;
    ITEM_Variant item;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<std::shared_ptr<Ratio>> strength;
};

class MedicationKnowledge_Kinetics {
public:
    std::vector<std::shared_ptr<Quantity>> area_under_curve;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<Duration>> half_life_period;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Quantity>> lethal_dose50;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
};

class MedicationKnowledge_MedicineClassification {
public:
    std::vector<std::shared_ptr<CodeableConcept>> classification;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::shared_ptr<CodeableConcept> type;
};

class MedicationKnowledge_MonitoringProgram {
public:
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<fhir_string> name;
    std::optional<std::shared_ptr<CodeableConcept>> type;
};

class MedicationKnowledge_Monograph {
public:
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<std::shared_ptr<Reference>> source;
    std::optional<std::shared_ptr<CodeableConcept>> type;
};

class MedicationKnowledge_Packaging {
public:
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<std::shared_ptr<Quantity>> quantity;
    std::optional<std::shared_ptr<CodeableConcept>> type;
};

class MedicationKnowledge_Regulatory {
public:
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::optional<std::shared_ptr<MedicationKnowledge_Regulatory_MaxDispense>> max_dispense;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::shared_ptr<Reference> regulatory_authority;
    std::vector<std::shared_ptr<MedicationKnowledge_Regulatory_Schedule>> schedule;
    std::vector<std::shared_ptr<MedicationKnowledge_Regulatory_Substitution>> substitution;
};

class MedicationKnowledge_Regulatory_MaxDispense {
public:
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<std::shared_ptr<Duration>> period;
    std::shared_ptr<Quantity> quantity;
};

class MedicationKnowledge_Regulatory_Schedule {
public:
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::shared_ptr<CodeableConcept> schedule;
};

class MedicationKnowledge_Regulatory_Substitution {
public:
    fhir_boolean allowed;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::shared_ptr<CodeableConcept> type;
};

class MedicationKnowledge_RelatedMedicationKnowledge {
public:
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::shared_ptr<CodeableConcept> type;
};

class MedicationRequest {
public:
    std::optional<fhir_dateTime> authored_on;
    std::vector<std::shared_ptr<Reference>> based_on;
    std::vector<std::shared_ptr<CodeableConcept>> category;
    std::vector<std::shared_ptr<Resource>> contained;
    std::optional<std::shared_ptr<CodeableConcept>> course_of_therapy_type;
    std::vector<std::shared_ptr<Reference>> detected_issue;
    std::optional<std::shared_ptr<MedicationRequest_DispenseRequest>> dispense_request;
    std::optional<fhir_boolean> do_not_perform;
    std::vector<std::shared_ptr<Dosage>> dosage_instruction;
    std::optional<std::shared_ptr<Reference>> encounter;
    std::vector<std::shared_ptr<Reference>> event_history;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<Identifier>> group_identifier;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Identifier>> identifier;
    std::optional<fhir_uri> implicit_rules;
    std::vector<fhir_canonical> instantiates_canonical;
    std::vector<fhir_uri> instantiates_uri;
    std::vector<std::shared_ptr<Reference>> insurance;
    fhir_code intent;
    std::optional<fhir_code> language;
    using MEDICATION_Variant = std::variant<
        std::shared_ptr<CodeableConcept>,
        std::shared_ptr<Reference>
    >;
    MEDICATION_Variant medication;
    std::optional<std::shared_ptr<Meta>> meta;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::vector<std::shared_ptr<Annotation>> note;
    std::optional<std::shared_ptr<Reference>> performer;
    std::optional<std::shared_ptr<CodeableConcept>> performer_type;
    std::optional<std::shared_ptr<Reference>> prior_prescription;
    std::optional<fhir_code> priority;
    std::vector<std::shared_ptr<CodeableConcept>> reason_code;
    std::vector<std::shared_ptr<Reference>> reason_reference;
    std::optional<std::shared_ptr<Reference>> recorder;
    using REPORTED_Variant = std::variant<
        std::shared_ptr<fhir_boolean>,
        std::shared_ptr<Reference>
    >;
    REPORTED_Variant reported;
    std::optional<std::shared_ptr<Reference>> requester;
    fhir_code status;
    std::optional<std::shared_ptr<CodeableConcept>> status_reason;
    std::shared_ptr<Reference> subject;
    std::optional<std::shared_ptr<MedicationRequest_Substitution>> substitution;
    std::vector<std::shared_ptr<Reference>> supporting_information;
    std::optional<std::shared_ptr<Narrative>> text;
};

class MedicationRequest_DispenseRequest {
public:
    std::optional<std::shared_ptr<Duration>> dispense_interval;
    std::optional<std::shared_ptr<Duration>> expected_supply_duration;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::optional<std::shared_ptr<MedicationRequest_DispenseRequest_InitialFill>> initial_fill;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<fhir_unsignedInt> number_of_repeats_allowed;
    std::optional<std::shared_ptr<Reference>> performer;
    std::optional<std::shared_ptr<Quantity>> quantity;
    std::optional<std::shared_ptr<Period>> validity_period;
};

class MedicationRequest_DispenseRequest_InitialFill {
public:
    std::optional<std::shared_ptr<Duration>> duration;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<std::shared_ptr<Quantity>> quantity;
};

class MedicationRequest_Substitution {
public:
    using ALLOWED_Variant = std::variant<
        std::shared_ptr<fhir_boolean>,
        std::shared_ptr<CodeableConcept>
    >;
    ALLOWED_Variant allowed;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<std::shared_ptr<CodeableConcept>> reason;
};

class MedicationStatement {
public:
    std::vector<std::shared_ptr<Reference>> based_on;
    std::optional<std::shared_ptr<CodeableConcept>> category;
    std::vector<std::shared_ptr<Resource>> contained;
    std::optional<std::shared_ptr<Reference>> context;
    std::optional<fhir_dateTime> date_asserted;
    std::vector<std::shared_ptr<Reference>> derived_from;
    std::vector<std::shared_ptr<Dosage>> dosage;
    using EFFECTIVE_Variant = std::variant<
        std::shared_ptr<fhir_dateTime>,
        std::shared_ptr<Period>
    >;
    EFFECTIVE_Variant effective;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Identifier>> identifier;
    std::optional<fhir_uri> implicit_rules;
    std::optional<std::shared_ptr<Reference>> information_source;
    std::optional<fhir_code> language;
    using MEDICATION_Variant = std::variant<
        std::shared_ptr<CodeableConcept>,
        std::shared_ptr<Reference>
    >;
    MEDICATION_Variant medication;
    std::optional<std::shared_ptr<Meta>> meta;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::vector<std::shared_ptr<Annotation>> note;
    std::vector<std::shared_ptr<Reference>> part_of;
    std::vector<std::shared_ptr<CodeableConcept>> reason_code;
    std::vector<std::shared_ptr<Reference>> reason_reference;
    fhir_code status;
    std::vector<std::shared_ptr<CodeableConcept>> status_reason;
    std::shared_ptr<Reference> subject;
    std::optional<std::shared_ptr<Narrative>> text;
};

class MedicinalProduct {
public:
    std::optional<std::shared_ptr<CodeableConcept>> additional_monitoring_indicator;
    std::vector<std::shared_ptr<Reference>> attached_document;
    std::vector<std::shared_ptr<Reference>> clinical_trial;
    std::optional<std::shared_ptr<CodeableConcept>> combined_pharmaceutical_dose_form;
    std::vector<std::shared_ptr<Reference>> contact;
    std::vector<std::shared_ptr<Resource>> contained;
    std::vector<std::shared_ptr<Identifier>> cross_reference;
    std::optional<std::shared_ptr<Coding>> domain;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Identifier>> identifier;
    std::optional<fhir_uri> implicit_rules;
    std::optional<fhir_code> language;
    std::optional<std::shared_ptr<CodeableConcept>> legal_status_of_supply;
    std::vector<std::shared_ptr<MedicinalProduct_ManufacturingBusinessOperation>> manufacturing_business_operation;
    std::vector<std::shared_ptr<MarketingStatus>> marketing_status;
    std::vector<std::shared_ptr<Reference>> master_file;
    std::optional<std::shared_ptr<Meta>> meta;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::vector<std::shared_ptr<Reference>> packaged_medicinal_product;
    std::optional<std::shared_ptr<CodeableConcept>> paediatric_use_indicator;
    std::vector<std::shared_ptr<Reference>> pharmaceutical_product;
    std::vector<std::shared_ptr<CodeableConcept>> product_classification;
    std::vector<std::shared_ptr<MedicinalProduct_SpecialDesignation>> special_designation;
    std::vector<fhir_string> special_measures;
    std::optional<std::shared_ptr<Narrative>> text;
    std::optional<std::shared_ptr<CodeableConcept>> type;
};

class MedicinalProduct_ManufacturingBusinessOperation {
public:
    std::optional<std::shared_ptr<Identifier>> authorisation_reference_number;
    std::optional<std::shared_ptr<CodeableConcept>> confidentiality_indicator;
    std::optional<fhir_dateTime> effective_date;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Reference>> manufacturer;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<std::shared_ptr<CodeableConcept>> operation_type;
    std::optional<std::shared_ptr<Reference>> regulator;
};

class MedicinalProduct_Name {
public:
    std::vector<std::shared_ptr<MedicinalProduct_Name_CountryLanguage>> country_language;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::vector<std::shared_ptr<MedicinalProduct_Name_NamePart>> name_part;
    fhir_string product_name;
};

class MedicinalProduct_Name_CountryLanguage {
public:
    std::shared_ptr<CodeableConcept> country;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::optional<std::shared_ptr<CodeableConcept>> jurisdiction;
    std::shared_ptr<CodeableConcept> language;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
};

class MedicinalProduct_Name_NamePart {
public:
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    fhir_string part;
    std::shared_ptr<Coding> type;
};

class MedicinalProduct_SpecialDesignation {
public:
    std::optional<fhir_dateTime> date_;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Identifier>> identifier;
    using INDICATION_Variant = std::variant<
        std::shared_ptr<CodeableConcept>,
        std::shared_ptr<Reference>
    >;
    INDICATION_Variant indication;
    std::optional<std::shared_ptr<CodeableConcept>> intended_use;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<std::shared_ptr<CodeableConcept>> species;
    std::optional<std::shared_ptr<CodeableConcept>> status;
    std::optional<std::shared_ptr<CodeableConcept>> type;
};

class MedicinalProductAuthorization {
public:
    std::vector<std::shared_ptr<Resource>> contained;
    std::vector<std::shared_ptr<CodeableConcept>> country;
    std::optional<std::shared_ptr<Period>> data_exclusivity_period;
    std::optional<fhir_dateTime> date_of_first_authorization;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<Reference>> holder;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Identifier>> identifier;
    std::optional<fhir_uri> implicit_rules;
    std::optional<fhir_dateTime> international_birth_date;
    std::vector<std::shared_ptr<CodeableConcept>> jurisdiction;
    std::vector<std::shared_ptr<MedicinalProductAuthorization_JurisdictionalAuthorization>> jurisdictional_authorization;
    std::optional<fhir_code> language;
    std::optional<std::shared_ptr<CodeableConcept>> legal_basis;
    std::optional<std::shared_ptr<Meta>> meta;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<std::shared_ptr<MedicinalProductAuthorization_Procedure>> procedure;
    std::optional<std::shared_ptr<Reference>> regulator;
    std::optional<fhir_dateTime> restore_date;
    std::optional<std::shared_ptr<CodeableConcept>> status;
    std::optional<fhir_dateTime> status_date;
    std::optional<std::shared_ptr<Reference>> subject;
    std::optional<std::shared_ptr<Narrative>> text;
    std::optional<std::shared_ptr<Period>> validity_period;
};

class MedicinalProductAuthorization_JurisdictionalAuthorization {
public:
    std::optional<std::shared_ptr<CodeableConcept>> country;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Identifier>> identifier;
    std::vector<std::shared_ptr<CodeableConcept>> jurisdiction;
    std::optional<std::shared_ptr<CodeableConcept>> legal_status_of_supply;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<std::shared_ptr<Period>> validity_period;
};

class MedicinalProductAuthorization_Procedure {
public:
    std::vector<std::shared_ptr<MedicinalProductAuthorization_Procedure>> application;
    using DATE_Variant = std::variant<
        std::shared_ptr<Period>,
        std::shared_ptr<fhir_dateTime>
    >;
    DATE_Variant date_;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::optional<std::shared_ptr<Identifier>> identifier;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::shared_ptr<CodeableConcept> type;
};

class MedicinalProductContraindication {
public:
    std::vector<std::shared_ptr<CodeableConcept>> comorbidity;
    std::vector<std::shared_ptr<Resource>> contained;
    std::optional<std::shared_ptr<CodeableConcept>> disease;
    std::optional<std::shared_ptr<CodeableConcept>> disease_status;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::optional<fhir_uri> implicit_rules;
    std::optional<fhir_code> language;
    std::optional<std::shared_ptr<Meta>> meta;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::vector<std::shared_ptr<MedicinalProductContraindication_OtherTherapy>> other_therapy;
    std::vector<std::shared_ptr<Population>> population;
    std::vector<std::shared_ptr<Reference>> subject;
    std::optional<std::shared_ptr<Narrative>> text;
    std::vector<std::shared_ptr<Reference>> therapeutic_indication;
};

class MedicinalProductContraindication_OtherTherapy {
public:
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    using MEDICATION_Variant = std::variant<
        std::shared_ptr<CodeableConcept>,
        std::shared_ptr<Reference>
    >;
    MEDICATION_Variant medication;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::shared_ptr<CodeableConcept> therapy_relationship_type;
};

class MedicinalProductIndication {
public:
    std::vector<std::shared_ptr<CodeableConcept>> comorbidity;
    std::vector<std::shared_ptr<Resource>> contained;
    std::optional<std::shared_ptr<CodeableConcept>> disease_status;
    std::optional<std::shared_ptr<CodeableConcept>> disease_symptom_procedure;
    std::optional<std::shared_ptr<Quantity>> duration;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::optional<fhir_uri> implicit_rules;
    std::optional<std::shared_ptr<CodeableConcept>> intended_effect;
    std::optional<fhir_code> language;
    std::optional<std::shared_ptr<Meta>> meta;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::vector<std::shared_ptr<MedicinalProductIndication_OtherTherapy>> other_therapy;
    std::vector<std::shared_ptr<Population>> population;
    std::vector<std::shared_ptr<Reference>> subject;
    std::optional<std::shared_ptr<Narrative>> text;
    std::vector<std::shared_ptr<Reference>> undesirable_effect;
};

class MedicinalProductIndication_OtherTherapy {
public:
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    using MEDICATION_Variant = std::variant<
        std::shared_ptr<CodeableConcept>,
        std::shared_ptr<Reference>
    >;
    MEDICATION_Variant medication;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::shared_ptr<CodeableConcept> therapy_relationship_type;
};

class MedicinalProductIngredient {
public:
    std::optional<fhir_boolean> allergenic_indicator;
    std::vector<std::shared_ptr<Resource>> contained;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::optional<std::shared_ptr<Identifier>> identifier;
    std::optional<fhir_uri> implicit_rules;
    std::optional<fhir_code> language;
    std::vector<std::shared_ptr<Reference>> manufacturer;
    std::optional<std::shared_ptr<Meta>> meta;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::shared_ptr<CodeableConcept> role;
    std::vector<std::shared_ptr<MedicinalProductIngredient_SpecifiedSubstance>> specified_substance;
    std::optional<std::shared_ptr<MedicinalProductIngredient_Substance>> substance;
    std::optional<std::shared_ptr<Narrative>> text;
};

class MedicinalProductIngredient_SpecifiedSubstance {
public:
    std::shared_ptr<CodeableConcept> code_;
    std::optional<std::shared_ptr<CodeableConcept>> confidentiality;
    std::vector<std::shared_ptr<Extension>> extension;
    std::shared_ptr<CodeableConcept> group;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::vector<std::shared_ptr<MedicinalProductIngredient_SpecifiedSubstance_Strength>> strength;
};

class MedicinalProductIngredient_SpecifiedSubstance_Strength {
public:
    std::optional<std::shared_ptr<Ratio>> concentration;
    std::optional<std::shared_ptr<Ratio>> concentration_low_limit;
    std::vector<std::shared_ptr<CodeableConcept>> country;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::optional<fhir_string> measurement_point;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::shared_ptr<Ratio> presentation;
    std::optional<std::shared_ptr<Ratio>> presentation_low_limit;
    std::vector<std::shared_ptr<MedicinalProductIngredient_SpecifiedSubstance_Strength_ReferenceStrength>> reference_strength;
};

class MedicinalProductIngredient_SpecifiedSubstance_Strength_ReferenceStrength {
public:
    std::vector<std::shared_ptr<CodeableConcept>> country;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::optional<fhir_string> measurement_point;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::shared_ptr<Ratio> strength;
    std::optional<std::shared_ptr<Ratio>> strength_low_limit;
    std::optional<std::shared_ptr<CodeableConcept>> substance;
};

class MedicinalProductIngredient_Substance {
public:
    std::shared_ptr<CodeableConcept> code_;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::vector<std::shared_ptr<MedicinalProductIngredient_SpecifiedSubstance_Strength>> strength;
};

class MedicinalProductInteraction {
public:
    std::vector<std::shared_ptr<Resource>> contained;
    std::optional<fhir_string> description;
    std::optional<std::shared_ptr<CodeableConcept>> effect;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::optional<fhir_uri> implicit_rules;
    std::optional<std::shared_ptr<CodeableConcept>> incidence;
    std::vector<std::shared_ptr<MedicinalProductInteraction_Interactant>> interactant;
    std::optional<fhir_code> language;
    std::optional<std::shared_ptr<CodeableConcept>> management;
    std::optional<std::shared_ptr<Meta>> meta;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::vector<std::shared_ptr<Reference>> subject;
    std::optional<std::shared_ptr<Narrative>> text;
    std::optional<std::shared_ptr<CodeableConcept>> type;
};

class MedicinalProductInteraction_Interactant {
public:
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    using ITEM_Variant = std::variant<
        std::shared_ptr<Reference>,
        std::shared_ptr<CodeableConcept>
    >;
    ITEM_Variant item;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
};

class MedicinalProductManufactured {
public:
    std::vector<std::shared_ptr<Resource>> contained;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::optional<fhir_uri> implicit_rules;
    std::vector<std::shared_ptr<Reference>> ingredient;
    std::optional<fhir_code> language;
    std::shared_ptr<CodeableConcept> manufactured_dose_form;
    std::vector<std::shared_ptr<Reference>> manufacturer;
    std::optional<std::shared_ptr<Meta>> meta;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::vector<std::shared_ptr<CodeableConcept>> other_characteristics;
    std::optional<std::shared_ptr<ProdCharacteristic>> physical_characteristics;
    std::shared_ptr<Quantity> quantity;
    std::optional<std::shared_ptr<Narrative>> text;
    std::optional<std::shared_ptr<CodeableConcept>> unit_of_presentation;
};

class MedicinalProductPackaged {
public:
    std::vector<std::shared_ptr<MedicinalProductPackaged_BatchIdentifier>> batch_identifier;
    std::vector<std::shared_ptr<Resource>> contained;
    std::optional<fhir_string> description;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Identifier>> identifier;
    std::optional<fhir_uri> implicit_rules;
    std::optional<fhir_code> language;
    std::optional<std::shared_ptr<CodeableConcept>> legal_status_of_supply;
    std::vector<std::shared_ptr<Reference>> manufacturer;
    std::optional<std::shared_ptr<Reference>> marketing_authorization;
    std::vector<std::shared_ptr<MarketingStatus>> marketing_status;
    std::optional<std::shared_ptr<Meta>> meta;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::vector<std::shared_ptr<Reference>> subject;
    std::optional<std::shared_ptr<Narrative>> text;
};

class MedicinalProductPackaged_BatchIdentifier {
public:
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::optional<std::shared_ptr<Identifier>> immediate_packaging;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::shared_ptr<Identifier> outer_packaging;
};

class MedicinalProductPackaged_PackageItem {
public:
    std::vector<std::shared_ptr<CodeableConcept>> alternate_material;
    std::vector<std::shared_ptr<Reference>> device;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Identifier>> identifier;
    std::vector<std::shared_ptr<Reference>> manufactured_item;
    std::vector<std::shared_ptr<Reference>> manufacturer;
    std::vector<std::shared_ptr<CodeableConcept>> material;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::vector<std::shared_ptr<CodeableConcept>> other_characteristics;
    std::vector<std::shared_ptr<MedicinalProductPackaged_PackageItem>> package_item;
    std::optional<std::shared_ptr<ProdCharacteristic>> physical_characteristics;
    std::shared_ptr<Quantity> quantity;
    std::vector<std::shared_ptr<ProductShelfLife>> shelf_life_storage;
    std::shared_ptr<CodeableConcept> type;
};

class MedicinalProductPharmaceutical {
public:
    std::shared_ptr<CodeableConcept> administrable_dose_form;
    std::vector<std::shared_ptr<MedicinalProductPharmaceutical_Characteristics>> characteristics;
    std::vector<std::shared_ptr<Resource>> contained;
    std::vector<std::shared_ptr<Reference>> device;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Identifier>> identifier;
    std::optional<fhir_uri> implicit_rules;
    std::vector<std::shared_ptr<Reference>> ingredient;
    std::optional<fhir_code> language;
    std::optional<std::shared_ptr<Meta>> meta;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<std::shared_ptr<Narrative>> text;
    std::optional<std::shared_ptr<CodeableConcept>> unit_of_presentation;
};

class MedicinalProductPharmaceutical_Characteristics {
public:
    std::shared_ptr<CodeableConcept> code_;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<std::shared_ptr<CodeableConcept>> status;
};

class MedicinalProductPharmaceutical_RouteOfAdministration {
public:
    std::shared_ptr<CodeableConcept> code_;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<Quantity>> first_dose;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::optional<std::shared_ptr<Quantity>> max_dose_per_day;
    std::optional<std::shared_ptr<Ratio>> max_dose_per_treatment_period;
    std::optional<std::shared_ptr<Quantity>> max_single_dose;
    std::optional<std::shared_ptr<Duration>> max_treatment_period;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::vector<std::shared_ptr<MedicinalProductPharmaceutical_RouteOfAdministration_TargetSpecies>> target_species;
};

class MedicinalProductPharmaceutical_RouteOfAdministration_TargetSpecies {
public:
    std::shared_ptr<CodeableConcept> code_;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::vector<std::shared_ptr<MedicinalProductPharmaceutical_RouteOfAdministration_TargetSpecies_WithdrawalPeriod>> withdrawal_period;
};

class MedicinalProductPharmaceutical_RouteOfAdministration_TargetSpecies_WithdrawalPeriod {
public:
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<fhir_string> supporting_information;
    std::shared_ptr<CodeableConcept> tissue;
    std::shared_ptr<Quantity> value;
};

class MedicinalProductUndesirableEffect {
public:
    std::optional<std::shared_ptr<CodeableConcept>> classification;
    std::vector<std::shared_ptr<Resource>> contained;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<CodeableConcept>> frequency_of_occurrence;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::optional<fhir_uri> implicit_rules;
    std::optional<fhir_code> language;
    std::optional<std::shared_ptr<Meta>> meta;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::vector<std::shared_ptr<Population>> population;
    std::vector<std::shared_ptr<Reference>> subject;
    std::optional<std::shared_ptr<CodeableConcept>> symptom_condition_effect;
    std::optional<std::shared_ptr<Narrative>> text;
};

class MessageDefinition {
public:
    std::vector<std::shared_ptr<MessageDefinition_AllowedResponse>> allowed_response;
    std::optional<fhir_canonical> base;
    std::optional<fhir_code> category;
    std::vector<std::shared_ptr<ContactDetail>> contact;
    std::vector<std::shared_ptr<Resource>> contained;
    std::optional<fhir_markdown> copyright;
    fhir_dateTime date_;
    std::optional<fhir_markdown> description;
    using EVENT_Variant = std::variant<
        std::shared_ptr<Coding>,
        std::shared_ptr<fhir_uri>
    >;
    EVENT_Variant event;
    std::optional<fhir_boolean> experimental;
    std::vector<std::shared_ptr<Extension>> extension;
    std::vector<std::shared_ptr<MessageDefinition_Focus>> focus;
    std::vector<fhir_canonical> graph;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Identifier>> identifier;
    std::optional<fhir_uri> implicit_rules;
    std::vector<std::shared_ptr<CodeableConcept>> jurisdiction;
    std::optional<fhir_code> language;
    std::optional<std::shared_ptr<Meta>> meta;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<fhir_string> name;
    std::vector<fhir_canonical> parent;
    std::optional<fhir_string> publisher;
    std::optional<fhir_markdown> purpose;
    std::vector<fhir_canonical> replaces;
    std::optional<fhir_code> response_required;
    fhir_code status;
    std::optional<std::shared_ptr<Narrative>> text;
    std::optional<fhir_string> title;
    std::optional<fhir_uri> url_;
    std::vector<std::shared_ptr<UsageContext>> use_context;
    std::optional<fhir_string> version;
};

class MessageDefinition_AllowedResponse {
public:
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    fhir_canonical message;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<fhir_markdown> situation;
};

class MessageDefinition_Focus {
public:
    fhir_code code_;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::optional<fhir_string> max;
    fhir_unsignedInt min;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<fhir_canonical> profile;
};

class MessageHeader {
public:
    std::optional<std::shared_ptr<Reference>> author;
    std::vector<std::shared_ptr<Resource>> contained;
    std::optional<fhir_canonical> definition;
    std::vector<std::shared_ptr<MessageHeader_Destination>> destination;
    std::optional<std::shared_ptr<Reference>> enterer;
    using EVENT_Variant = std::variant<
        std::shared_ptr<Coding>,
        std::shared_ptr<fhir_uri>
    >;
    EVENT_Variant event;
    std::vector<std::shared_ptr<Extension>> extension;
    std::vector<std::shared_ptr<Reference>> focus;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::optional<fhir_uri> implicit_rules;
    std::optional<fhir_code> language;
    std::optional<std::shared_ptr<Meta>> meta;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<std::shared_ptr<CodeableConcept>> reason;
    std::optional<std::shared_ptr<MessageHeader_Response>> response;
    std::optional<std::shared_ptr<Reference>> responsible;
    std::optional<std::shared_ptr<Reference>> sender;
    std::shared_ptr<MessageHeader_Source> source;
    std::optional<std::shared_ptr<Narrative>> text;
};

class MessageHeader_Destination {
public:
    fhir_url endpoint;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<fhir_string> name;
    std::optional<std::shared_ptr<Reference>> receiver;
    std::optional<std::shared_ptr<Reference>> target;
};

class MessageHeader_Response {
public:
    fhir_code code_;
    std::optional<std::shared_ptr<Reference>> details;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    fhir_id identifier;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
};

class MessageHeader_Source {
public:
    std::optional<std::shared_ptr<ContactPoint>> contact;
    fhir_url endpoint;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<fhir_string> name;
    std::optional<fhir_string> software;
    std::optional<fhir_string> version;
};

class Meta {
public:
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::optional<fhir_instant> last_updated;
    std::vector<fhir_canonical> profile;
    std::vector<std::shared_ptr<Coding>> security;
    std::optional<fhir_uri> source;
    std::vector<std::shared_ptr<Coding>> tag;
    std::optional<fhir_id> version_id;
};

class MetadataResource {
public:
    std::vector<std::shared_ptr<ContactDetail>> contact;
    std::vector<std::shared_ptr<Resource>> contained;
    std::optional<fhir_dateTime> date_;
    std::optional<fhir_markdown> description;
    std::optional<fhir_boolean> experimental;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::optional<fhir_uri> implicit_rules;
    std::vector<std::shared_ptr<CodeableConcept>> jurisdiction;
    std::optional<fhir_code> language;
    std::optional<std::shared_ptr<Meta>> meta;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<fhir_string> name;
    std::optional<fhir_string> publisher;
    fhir_code status;
    std::optional<std::shared_ptr<Narrative>> text;
    std::optional<fhir_string> title;
    std::optional<fhir_uri> url_;
    std::vector<std::shared_ptr<UsageContext>> use_context;
    std::optional<fhir_string> version;
};

class MolecularSequence {
public:
    std::vector<std::shared_ptr<Resource>> contained;
    fhir_integer coordinate_system;
    std::optional<std::shared_ptr<Reference>> device;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Identifier>> identifier;
    std::optional<fhir_uri> implicit_rules;
    std::optional<fhir_code> language;
    std::optional<std::shared_ptr<Meta>> meta;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<fhir_string> observed_seq;
    std::optional<std::shared_ptr<Reference>> patient;
    std::optional<std::shared_ptr<Reference>> performer;
    std::vector<std::shared_ptr<Reference>> pointer;
    std::vector<std::shared_ptr<MolecularSequence_Quality>> quality;
    std::optional<std::shared_ptr<Quantity>> quantity;
    std::optional<fhir_integer> read_coverage;
    std::optional<std::shared_ptr<MolecularSequence_ReferenceSeq>> reference_seq;
    std::vector<std::shared_ptr<MolecularSequence_Repository>> repository;
    std::optional<std::shared_ptr<Reference>> specimen;
    std::vector<std::shared_ptr<MolecularSequence_StructureVariant>> structure_variant;
    std::optional<std::shared_ptr<Narrative>> text;
    std::optional<fhir_code> type;
    std::vector<std::shared_ptr<MolecularSequence_Variant>> variant;
};

class MolecularSequence_Quality {
public:
    std::optional<fhir_integer> end;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<fhir_decimal> f_score;
    std::optional<fhir_decimal> gt_f_p;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::optional<std::shared_ptr<CodeableConcept>> method;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<fhir_decimal> precision;
    std::optional<fhir_decimal> query_f_p;
    std::optional<fhir_decimal> query_t_p;
    std::optional<fhir_decimal> recall;
    std::optional<std::shared_ptr<MolecularSequence_Quality_Roc>> roc;
    std::optional<std::shared_ptr<Quantity>> score;
    std::optional<std::shared_ptr<CodeableConcept>> standard_sequence;
    std::optional<fhir_integer> start;
    std::optional<fhir_decimal> truth_f_n;
    std::optional<fhir_decimal> truth_t_p;
    fhir_code type;
};

class MolecularSequence_Quality_Roc {
public:
    std::vector<std::shared_ptr<Extension>> extension;
    std::vector<fhir_decimal> f_measure;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::vector<fhir_integer> num_f_n;
    std::vector<fhir_integer> num_f_p;
    std::vector<fhir_integer> num_t_p;
    std::vector<fhir_decimal> precision;
    std::vector<fhir_integer> score;
    std::vector<fhir_decimal> sensitivity;
};

class MolecularSequence_ReferenceSeq {
public:
    std::optional<std::shared_ptr<CodeableConcept>> chromosome;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<fhir_string> genome_build;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<fhir_code> orientation;
    std::optional<std::shared_ptr<CodeableConcept>> reference_seq_id;
    std::optional<std::shared_ptr<Reference>> reference_seq_pointer;
    std::optional<fhir_string> reference_seq_string;
    std::optional<fhir_code> strand;
    std::optional<fhir_integer> window_end;
    std::optional<fhir_integer> window_start;
};

class MolecularSequence_Repository {
public:
    std::optional<fhir_string> dataset_id;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<fhir_string> name;
    std::optional<fhir_string> readset_id;
    fhir_code type;
    std::optional<fhir_uri> url_;
    std::optional<fhir_string> variantset_id;
};

class MolecularSequence_StructureVariant {
public:
    std::optional<fhir_boolean> exact;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::optional<std::shared_ptr<MolecularSequence_StructureVariant_Inner>> inner;
    std::optional<fhir_integer> length;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<std::shared_ptr<MolecularSequence_StructureVariant_Outer>> outer;
    std::optional<std::shared_ptr<CodeableConcept>> variant_type;
};

class MolecularSequence_StructureVariant_Inner {
public:
    std::optional<fhir_integer> end;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<fhir_integer> start;
};

class MolecularSequence_StructureVariant_Outer {
public:
    std::optional<fhir_integer> end;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<fhir_integer> start;
};

class MolecularSequence_Variant {
public:
    std::optional<fhir_string> cigar;
    std::optional<fhir_integer> end;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<fhir_string> observed_allele;
    std::optional<fhir_string> reference_allele;
    std::optional<fhir_integer> start;
    std::optional<std::shared_ptr<Reference>> variant_pointer;
};

class Money {
public:
    std::optional<fhir_code> currency;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::optional<fhir_decimal> value;
};


class NamingSystem {
public:
    std::vector<std::shared_ptr<ContactDetail>> contact;
    std::vector<std::shared_ptr<Resource>> contained;
    fhir_dateTime date_;
    std::optional<fhir_markdown> description;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::optional<fhir_uri> implicit_rules;
    std::vector<std::shared_ptr<CodeableConcept>> jurisdiction;
    fhir_code kind;
    std::optional<fhir_code> language;
    std::optional<std::shared_ptr<Meta>> meta;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    fhir_string name;
    std::optional<fhir_string> publisher;
    std::optional<fhir_string> responsible;
    fhir_code status;
    std::optional<std::shared_ptr<Narrative>> text;
    std::optional<std::shared_ptr<CodeableConcept>> type;
    std::optional<fhir_string> usage;
    std::vector<std::shared_ptr<UsageContext>> use_context;
};

class NamingSystem_UniqueId {
public:
    std::optional<fhir_string> comment;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<std::shared_ptr<Period>> period;
    std::optional<fhir_boolean> preferred;
    fhir_code type;
    fhir_string value;
};

class Narrative {
public:
    std::shared_ptr<xhtml> div;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    fhir_code status;
};

class NutritionOrder {
public:
    std::vector<std::shared_ptr<Reference>> allergy_intolerance;
    std::vector<std::shared_ptr<Resource>> contained;
    fhir_dateTime date_time;
    std::optional<std::shared_ptr<Reference>> encounter;
    std::optional<std::shared_ptr<NutritionOrder_EnteralFormula>> enteral_formula;
    std::vector<std::shared_ptr<CodeableConcept>> exclude_food_modifier;
    std::vector<std::shared_ptr<Extension>> extension;
    std::vector<std::shared_ptr<CodeableConcept>> food_preference_modifier;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Identifier>> identifier;
    std::optional<fhir_uri> implicit_rules;
    std::vector<fhir_uri> instantiates;
    std::vector<fhir_canonical> instantiates_canonical;
    std::vector<fhir_uri> instantiates_uri;
    fhir_code intent;
    std::optional<fhir_code> language;
    std::optional<std::shared_ptr<Meta>> meta;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::vector<std::shared_ptr<Annotation>> note;
    std::optional<std::shared_ptr<NutritionOrder_OralDiet>> oral_diet;
    std::optional<std::shared_ptr<Reference>> orderer;
    std::shared_ptr<Reference> patient;
    fhir_code status;
    std::vector<std::shared_ptr<NutritionOrder_Supplement>> supplement;
    std::optional<std::shared_ptr<Narrative>> text;
};

class NutritionOrder_EnteralFormula {
public:
    std::optional<fhir_string> additive_product_name;
    std::optional<std::shared_ptr<CodeableConcept>> additive_type;
    std::vector<std::shared_ptr<NutritionOrder_EnteralFormula_Administration>> administration;
    std::optional<fhir_string> administration_instruction;
    std::optional<fhir_string> base_formula_product_name;
    std::optional<std::shared_ptr<CodeableConcept>> base_formula_type;
    std::optional<std::shared_ptr<Quantity>> caloric_density;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::optional<std::shared_ptr<Quantity>> max_volume_to_deliver;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<std::shared_ptr<CodeableConcept>> routeof_administration;
};

class NutritionOrder_EnteralFormula_Administration {
public:
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<std::shared_ptr<Quantity>> quantity;
    using RATE_Variant = std::variant<
        std::shared_ptr<Quantity>,
        std::shared_ptr<Ratio>
    >;
    RATE_Variant rate;
    std::optional<std::shared_ptr<Timing>> schedule;
};

class NutritionOrder_OralDiet {
public:
    std::vector<std::shared_ptr<Extension>> extension;
    std::vector<std::shared_ptr<CodeableConcept>> fluid_consistency_type;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::optional<fhir_string> instruction;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::vector<std::shared_ptr<NutritionOrder_OralDiet_Nutrient>> nutrient;
    std::vector<std::shared_ptr<Timing>> schedule;
    std::vector<std::shared_ptr<NutritionOrder_OralDiet_Texture>> texture;
    std::vector<std::shared_ptr<CodeableConcept>> type;
};

class NutritionOrder_OralDiet_Nutrient {
public:
    std::optional<std::shared_ptr<Quantity>> amount;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::optional<std::shared_ptr<CodeableConcept>> modifier;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
};

class NutritionOrder_OralDiet_Texture {
public:
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<CodeableConcept>> food_type;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::optional<std::shared_ptr<CodeableConcept>> modifier;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
};

class NutritionOrder_Supplement {
public:
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::optional<fhir_string> instruction;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<fhir_string> product_name;
    std::optional<std::shared_ptr<Quantity>> quantity;
    std::vector<std::shared_ptr<Timing>> schedule;
    std::optional<std::shared_ptr<CodeableConcept>> type;
};

class Observation {
public:
    std::vector<std::shared_ptr<Reference>> based_on;
    std::optional<std::shared_ptr<CodeableConcept>> body_site;
    std::vector<std::shared_ptr<CodeableConcept>> category;
    std::shared_ptr<CodeableConcept> code_;
    std::optional<fhir_code> comparator;
    std::vector<std::shared_ptr<Observation_Component>> component;
    std::vector<std::shared_ptr<Resource>> contained;
    std::optional<std::shared_ptr<CodeableConcept>> data_absent_reason;
    std::vector<std::shared_ptr<Reference>> derived_from;
    std::optional<std::shared_ptr<Reference>> device;
    std::optional<fhir_string> display;
    using EFFECTIVE_Variant = std::variant<
        std::shared_ptr<fhir_dateTime>,
        std::shared_ptr<Period>,
        std::shared_ptr<Timing>,
        std::shared_ptr<fhir_instant>
    >;
    EFFECTIVE_Variant effective;
    std::optional<std::shared_ptr<Reference>> encounter;
    std::vector<std::shared_ptr<Extension>> extension;
    std::vector<std::shared_ptr<Reference>> focus;
    std::vector<std::shared_ptr<Reference>> has_member;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Identifier>> identifier;
    std::optional<fhir_uri> implicit_rules;
    std::vector<std::shared_ptr<CodeableConcept>> interpretation;
    std::optional<fhir_instant> issued;
    std::optional<fhir_code> language;
    std::optional<std::shared_ptr<Meta>> meta;
    std::optional<std::shared_ptr<CodeableConcept>> method;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::vector<std::shared_ptr<Annotation>> note;
    std::vector<std::shared_ptr<Reference>> part_of;
    std::vector<std::shared_ptr<Reference>> performer;
    std::vector<std::shared_ptr<Observation_ReferenceRange>> reference_range;
    std::optional<std::shared_ptr<Reference>> specimen;
    fhir_code status;
    std::optional<std::shared_ptr<Reference>> subject;
    fhir_uri system;
    std::optional<std::shared_ptr<Narrative>> text;
    fhir_string unit;
    std::optional<fhir_boolean> user_selected;
    fhir_decimal value;
    using VALUE_Variant = std::variant<
        std::shared_ptr<Quantity>,
        std::shared_ptr<CodeableConcept>,
        std::shared_ptr<fhir_string>,
        std::shared_ptr<fhir_boolean>,
        std::shared_ptr<fhir_integer>,
        std::shared_ptr<Range>,
        std::shared_ptr<Ratio>,
        std::shared_ptr<SampledData>,
        std::shared_ptr<fhir_time>,
        std::shared_ptr<fhir_dateTime>,
        std::shared_ptr<Period>
    >;
    VALUE_Variant value_2;
    std::optional<fhir_string> version;
};

class Observation_Component {
public:
    std::shared_ptr<CodeableConcept> code_;
    std::shared_ptr<Coding> coding;
    std::optional<fhir_code> comparator;
    std::optional<std::shared_ptr<CodeableConcept>> data_absent_reason;
    std::optional<fhir_string> display;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<CodeableConcept>> interpretation;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::vector<std::shared_ptr<Observation_ReferenceRange>> reference_range;
    fhir_uri system;
    std::optional<fhir_string> text;
    fhir_string unit;
    std::optional<fhir_boolean> user_selected;
    fhir_decimal value;
    using VALUE_Variant = std::variant<
        std::shared_ptr<Quantity>,
        std::shared_ptr<CodeableConcept>,
        std::shared_ptr<fhir_string>,
        std::shared_ptr<fhir_boolean>,
        std::shared_ptr<fhir_integer>,
        std::shared_ptr<Range>,
        std::shared_ptr<Ratio>,
        std::shared_ptr<SampledData>,
        std::shared_ptr<fhir_time>,
        std::shared_ptr<fhir_dateTime>,
        std::shared_ptr<Period>
    >;
    VALUE_Variant value_2;
    std::optional<fhir_string> version;
};

class Observation_ReferenceRange {
public:
    std::optional<std::shared_ptr<Range>> age;
    std::vector<std::shared_ptr<CodeableConcept>> applies_to;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<Quantity>> high;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::optional<std::shared_ptr<Quantity>> low;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<fhir_string> text;
    std::optional<std::shared_ptr<CodeableConcept>> type;
};

class ObservationDefinition {
public:
    std::optional<std::shared_ptr<Reference>> abnormal_coded_value_set;
    std::vector<std::shared_ptr<CodeableConcept>> category;
    std::shared_ptr<CodeableConcept> code_;
    std::vector<std::shared_ptr<Resource>> contained;
    std::optional<std::shared_ptr<Reference>> critical_coded_value_set;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Identifier>> identifier;
    std::optional<fhir_uri> implicit_rules;
    std::optional<fhir_code> language;
    std::optional<std::shared_ptr<Meta>> meta;
    std::optional<std::shared_ptr<CodeableConcept>> method;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<fhir_boolean> multiple_results_allowed;
    std::optional<std::shared_ptr<Reference>> normal_coded_value_set;
    std::vector<fhir_code> permitted_data_type;
    std::optional<fhir_string> preferred_report_name;
    std::vector<std::shared_ptr<ObservationDefinition_QualifiedInterval>> qualified_interval;
    std::optional<std::shared_ptr<ObservationDefinition_QuantitativeDetails>> quantitative_details;
    std::optional<std::shared_ptr<Narrative>> text;
    std::optional<std::shared_ptr<Reference>> valid_coded_value_set;
};

class ObservationDefinition_QualifiedInterval {
public:
    std::optional<std::shared_ptr<Range>> age;
    std::vector<std::shared_ptr<CodeableConcept>> applies_to;
    std::optional<fhir_code> category;
    std::optional<fhir_string> condition;
    std::optional<std::shared_ptr<CodeableConcept>> context;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<fhir_code> gender;
    std::optional<std::shared_ptr<Range>> gestational_age;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<std::shared_ptr<Range>> range;
};

class ObservationDefinition_QuantitativeDetails {
public:
    std::optional<fhir_decimal> conversion_factor;
    std::optional<std::shared_ptr<CodeableConcept>> customary_unit;
    std::optional<fhir_integer> decimal_precision;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<std::shared_ptr<CodeableConcept>> unit;
};

class OperationDefinition {
public:
    std::optional<fhir_boolean> affects_state;
    std::optional<fhir_canonical> base;
    fhir_code code_;
    std::optional<fhir_markdown> comment;
    std::vector<std::shared_ptr<ContactDetail>> contact;
    std::vector<std::shared_ptr<Resource>> contained;
    std::optional<fhir_dateTime> date_;
    std::optional<fhir_markdown> description;
    std::optional<fhir_boolean> experimental;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::optional<fhir_uri> implicit_rules;
    std::optional<fhir_canonical> input_profile;
    fhir_boolean instance;
    std::vector<std::shared_ptr<CodeableConcept>> jurisdiction;
    fhir_code kind;
    std::optional<fhir_code> language;
    std::optional<std::shared_ptr<Meta>> meta;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    fhir_string name;
    std::optional<fhir_canonical> output_profile;
    std::vector<std::shared_ptr<OperationDefinition_Overload>> overload;
    std::vector<std::shared_ptr<OperationDefinition_Parameter>> parameter;
    std::optional<fhir_string> publisher;
    std::optional<fhir_markdown> purpose;
    std::vector<fhir_code> resource;
    fhir_code status;
    fhir_boolean system;
    std::optional<std::shared_ptr<Narrative>> text;
    std::optional<fhir_string> title;
    fhir_boolean type;
    std::optional<fhir_uri> url_;
    std::vector<std::shared_ptr<UsageContext>> use_context;
    std::optional<fhir_string> version;
};

class OperationDefinition_Overload {
public:
    std::optional<fhir_string> comment;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::vector<fhir_string> parameter_name;
};

class OperationDefinition_Parameter {
public:
    std::optional<std::shared_ptr<OperationDefinition_Parameter_Binding>> binding;
    std::optional<fhir_string> documentation;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    fhir_string max;
    fhir_integer min;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    fhir_code name;
    std::vector<std::shared_ptr<OperationDefinition_Parameter>> part;
    std::vector<std::shared_ptr<OperationDefinition_Parameter_ReferencedFrom>> referenced_from;
    std::optional<fhir_code> search_type;
    std::vector<fhir_canonical> target_profile;
    std::optional<fhir_code> type;
    fhir_code use;
};

class OperationDefinition_Parameter_Binding {
public:
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    fhir_code strength;
    fhir_canonical value_set;
};

class OperationDefinition_Parameter_ReferencedFrom {
public:
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    fhir_string source;
    std::optional<fhir_string> source_id;
};

class OperationOutcome {
public:
    std::vector<std::shared_ptr<Resource>> contained;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::optional<fhir_uri> implicit_rules;
    std::optional<fhir_code> language;
    std::optional<std::shared_ptr<Meta>> meta;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<std::shared_ptr<Narrative>> text;
};

class OperationOutcome_Issue {
public:
    fhir_code code_;
    std::optional<std::shared_ptr<CodeableConcept>> details;
    std::optional<fhir_string> diagnostics;
    std::vector<fhir_string> expression;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<fhir_string> location;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    fhir_code severity;
};

class Organization {
public:
    std::optional<fhir_boolean> active;
    std::vector<std::shared_ptr<Address>> address;
    std::vector<fhir_string> alias;
    std::vector<std::shared_ptr<Organization_Contact>> contact;
    std::vector<std::shared_ptr<Resource>> contained;
    std::vector<std::shared_ptr<Reference>> endpoint;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Identifier>> identifier;
    std::optional<fhir_uri> implicit_rules;
    std::optional<fhir_code> language;
    std::optional<std::shared_ptr<Meta>> meta;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<fhir_string> name;
    std::optional<std::shared_ptr<Reference>> part_of;
    std::vector<std::shared_ptr<ContactPoint>> telecom;
    std::optional<std::shared_ptr<Narrative>> text;
    std::vector<std::shared_ptr<CodeableConcept>> type;
};

class Organization_Contact {
public:
    std::optional<std::shared_ptr<Address>> address;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<std::shared_ptr<HumanName>> name;
    std::optional<std::shared_ptr<CodeableConcept>> purpose;
    std::vector<std::shared_ptr<ContactPoint>> telecom;
};

class OrganizationAffiliation {
public:
    std::optional<fhir_boolean> active;
    std::vector<std::shared_ptr<CodeableConcept>> code_;
    std::vector<std::shared_ptr<Resource>> contained;
    std::vector<std::shared_ptr<Reference>> endpoint;
    std::vector<std::shared_ptr<Extension>> extension;
    std::vector<std::shared_ptr<Reference>> healthcare_service;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Identifier>> identifier;
    std::optional<fhir_uri> implicit_rules;
    std::optional<fhir_code> language;
    std::vector<std::shared_ptr<Reference>> location;
    std::optional<std::shared_ptr<Meta>> meta;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::vector<std::shared_ptr<Reference>> network;
    std::optional<std::shared_ptr<Reference>> organization;
    std::optional<std::shared_ptr<Reference>> participating_organization;
    std::optional<std::shared_ptr<Period>> period;
    std::vector<std::shared_ptr<CodeableConcept>> specialty;
    std::vector<std::shared_ptr<ContactPoint>> telecom;
    std::optional<std::shared_ptr<Narrative>> text;
};

class ParameterDefinition {
public:
    std::optional<fhir_string> documentation;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::optional<fhir_string> max;
    std::optional<fhir_integer> min;
    std::optional<fhir_code> name;
    std::optional<fhir_canonical> profile;
    fhir_code type;
    fhir_code use;
};

class Parameters {
public:
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::optional<fhir_uri> implicit_rules;
    std::optional<fhir_code> language;
    std::optional<std::shared_ptr<Meta>> meta;
    std::vector<std::shared_ptr<Parameters_Parameter>> parameter;
};

class Parameters_Parameter {
public:
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    fhir_string name;
    std::vector<std::shared_ptr<Parameters_Parameter>> part;
    std::optional<std::shared_ptr<Resource>> resource;
    using VALUE_Variant = std::variant<
        std::shared_ptr<fhir_base64Binary>,
        std::shared_ptr<fhir_boolean>,
        std::shared_ptr<fhir_canonical>,
        std::shared_ptr<fhir_code>,
        std::shared_ptr<fhir_date>,
        std::shared_ptr<fhir_dateTime>,
        std::shared_ptr<fhir_decimal>,
        std::shared_ptr<fhir_id>,
        std::shared_ptr<fhir_instant>,
        std::shared_ptr<fhir_integer>,
        std::shared_ptr<fhir_markdown>,
        std::shared_ptr<fhir_oid>,
        std::shared_ptr<fhir_positiveInt>,
        std::shared_ptr<fhir_string>,
        std::shared_ptr<fhir_time>,
        std::shared_ptr<fhir_unsignedInt>,
        std::shared_ptr<fhir_uri>,
        std::shared_ptr<fhir_url>,
        std::shared_ptr<fhir_uuid>,
        std::shared_ptr<Address>,
        std::shared_ptr<Age>,
        std::shared_ptr<Annotation>,
        std::shared_ptr<Attachment>,
        std::shared_ptr<CodeableConcept>,
        std::shared_ptr<Coding>,
        std::shared_ptr<ContactPoint>,
        std::shared_ptr<Count>,
        std::shared_ptr<Distance>,
        std::shared_ptr<Duration>,
        std::shared_ptr<HumanName>,
        std::shared_ptr<Identifier>,
        std::shared_ptr<Money>,
        std::shared_ptr<Period>,
        std::shared_ptr<Quantity>,
        std::shared_ptr<Range>,
        std::shared_ptr<Ratio>,
        std::shared_ptr<Reference>,
        std::shared_ptr<SampledData>,
        std::shared_ptr<Signature>,
        std::shared_ptr<Timing>,
        std::shared_ptr<ContactDetail>,
        std::shared_ptr<Contributor>,
        std::shared_ptr<DataRequirement>,
        std::shared_ptr<Expression>,
        std::shared_ptr<ParameterDefinition>,
        std::shared_ptr<RelatedArtifact>,
        std::shared_ptr<TriggerDefinition>,
        std::shared_ptr<UsageContext>,
        std::shared_ptr<Dosage>,
        std::shared_ptr<Meta>
    >;
    VALUE_Variant value;
};

class Patient {
public:
    std::optional<fhir_boolean> active;
    std::vector<std::shared_ptr<Address>> address;
    std::optional<fhir_date> birth_date;
    std::vector<std::shared_ptr<Patient_Communication>> communication;
    std::vector<std::shared_ptr<Patient_Contact>> contact;
    std::vector<std::shared_ptr<Resource>> contained;
    using DECEASED_Variant = std::variant<
        std::shared_ptr<fhir_boolean>,
        std::shared_ptr<fhir_dateTime>
    >;
    DECEASED_Variant deceased;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<fhir_code> gender;
    std::vector<std::shared_ptr<Reference>> general_practitioner;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Identifier>> identifier;
    std::optional<fhir_uri> implicit_rules;
    std::optional<fhir_code> language;
    std::vector<std::shared_ptr<Patient_Link>> link;
    std::optional<std::shared_ptr<Reference>> managing_organization;
    std::optional<std::shared_ptr<CodeableConcept>> marital_status;
    std::optional<std::shared_ptr<Meta>> meta;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    using MULTIPLE_BIRTH_Variant = std::variant<
        std::shared_ptr<fhir_boolean>,
        std::shared_ptr<fhir_integer>
    >;
    MULTIPLE_BIRTH_Variant multiple_birth;
    std::vector<std::shared_ptr<HumanName>> name;
    std::vector<std::shared_ptr<Attachment>> photo;
    std::vector<std::shared_ptr<ContactPoint>> telecom;
    std::optional<std::shared_ptr<Narrative>> text;
};

class Patient_Communication {
public:
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::shared_ptr<CodeableConcept> language;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<fhir_boolean> preferred;
};

class Patient_Contact {
public:
    std::optional<std::shared_ptr<Address>> address;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<fhir_code> gender;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<std::shared_ptr<HumanName>> name;
    std::optional<std::shared_ptr<Reference>> organization;
    std::optional<std::shared_ptr<Period>> period;
    std::vector<std::shared_ptr<CodeableConcept>> relationship;
    std::vector<std::shared_ptr<ContactPoint>> telecom;
};

class Patient_Link {
public:
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::shared_ptr<Reference> other;
    fhir_code type;
};

class PaymentNotice {
public:
    std::shared_ptr<Money> amount;
    std::vector<std::shared_ptr<Resource>> contained;
    fhir_dateTime created;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Identifier>> identifier;
    std::optional<fhir_uri> implicit_rules;
    std::optional<fhir_code> language;
    std::optional<std::shared_ptr<Meta>> meta;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<std::shared_ptr<Reference>> payee;
    std::shared_ptr<Reference> payment;
    std::optional<fhir_date> payment_date;
    std::optional<std::shared_ptr<CodeableConcept>> payment_status;
    std::optional<std::shared_ptr<Reference>> provider;
    std::shared_ptr<Reference> recipient;
    std::optional<std::shared_ptr<Reference>> request;
    std::optional<std::shared_ptr<Reference>> response;
    fhir_code status;
    std::optional<std::shared_ptr<Narrative>> text;
};

class PaymentReconciliation {
public:
    std::vector<std::shared_ptr<Resource>> contained;
    fhir_dateTime created;
    std::vector<std::shared_ptr<PaymentReconciliation_Detail>> detail;
    std::optional<fhir_string> disposition;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<CodeableConcept>> form_code;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Identifier>> identifier;
    std::optional<fhir_uri> implicit_rules;
    std::optional<fhir_code> language;
    std::optional<std::shared_ptr<Meta>> meta;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<fhir_code> outcome;
    std::shared_ptr<Money> payment_amount;
    fhir_date payment_date;
    std::optional<std::shared_ptr<Identifier>> payment_identifier;
    std::optional<std::shared_ptr<Reference>> payment_issuer;
    std::optional<std::shared_ptr<Period>> period;
    std::vector<std::shared_ptr<PaymentReconciliation_ProcessNote>> process_note;
    std::optional<std::shared_ptr<Reference>> request;
    std::optional<std::shared_ptr<Reference>> requestor;
    fhir_code status;
    std::optional<std::shared_ptr<Narrative>> text;
};

class PaymentReconciliation_Detail {
public:
    std::optional<std::shared_ptr<Money>> amount;
    std::optional<fhir_date> date_;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::optional<std::shared_ptr<Identifier>> identifier;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<std::shared_ptr<Reference>> payee;
    std::optional<std::shared_ptr<Identifier>> predecessor;
    std::optional<std::shared_ptr<Reference>> request;
    std::optional<std::shared_ptr<Reference>> response;
    std::optional<std::shared_ptr<Reference>> responsible;
    std::optional<std::shared_ptr<Reference>> submitter;
    std::shared_ptr<CodeableConcept> type;
};

class PaymentReconciliation_ProcessNote {
public:
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<fhir_string> text;
    std::optional<fhir_code> type;
};

class Period {
public:
    std::optional<fhir_dateTime> end;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::optional<fhir_dateTime> start;
};

class Person {
public:
    std::optional<fhir_boolean> active;
    std::vector<std::shared_ptr<Address>> address;
    std::optional<fhir_date> birth_date;
    std::vector<std::shared_ptr<Resource>> contained;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<fhir_code> gender;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Identifier>> identifier;
    std::optional<fhir_uri> implicit_rules;
    std::optional<fhir_code> language;
    std::vector<std::shared_ptr<Person_Link>> link;
    std::optional<std::shared_ptr<Reference>> managing_organization;
    std::optional<std::shared_ptr<Meta>> meta;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::vector<std::shared_ptr<HumanName>> name;
    std::optional<std::shared_ptr<Attachment>> photo;
    std::vector<std::shared_ptr<ContactPoint>> telecom;
    std::optional<std::shared_ptr<Narrative>> text;
};

class Person_Link {
public:
    std::optional<fhir_code> assurance;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::shared_ptr<Reference> target;
};

class PlanDefinition {
public:
    std::vector<std::shared_ptr<PlanDefinition_Action>> action;
    std::optional<fhir_date> approval_date;
    std::vector<std::shared_ptr<ContactDetail>> author;
    std::vector<std::shared_ptr<ContactDetail>> contact;
    std::vector<std::shared_ptr<Resource>> contained;
    std::optional<fhir_markdown> copyright;
    std::optional<fhir_dateTime> date_;
    std::optional<fhir_markdown> description;
    std::vector<std::shared_ptr<ContactDetail>> editor;
    std::optional<std::shared_ptr<Period>> effective_period;
    std::vector<std::shared_ptr<ContactDetail>> endorser;
    std::optional<fhir_boolean> experimental;
    std::vector<std::shared_ptr<Extension>> extension;
    std::vector<std::shared_ptr<PlanDefinition_Goal>> goal;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Identifier>> identifier;
    std::optional<fhir_uri> implicit_rules;
    std::vector<std::shared_ptr<CodeableConcept>> jurisdiction;
    std::optional<fhir_code> language;
    std::optional<fhir_date> last_review_date;
    std::vector<fhir_canonical> library;
    std::optional<std::shared_ptr<Meta>> meta;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<fhir_string> name;
    std::optional<fhir_string> publisher;
    std::optional<fhir_markdown> purpose;
    std::vector<std::shared_ptr<RelatedArtifact>> related_artifact;
    std::vector<std::shared_ptr<ContactDetail>> reviewer;
    fhir_code status;
    using SUBJECT_Variant = std::variant<
        std::shared_ptr<CodeableConcept>,
        std::shared_ptr<Reference>
    >;
    SUBJECT_Variant subject;
    std::optional<fhir_string> subtitle;
    std::optional<std::shared_ptr<Narrative>> text;
    std::optional<fhir_string> title;
    std::vector<std::shared_ptr<CodeableConcept>> topic;
    std::optional<std::shared_ptr<CodeableConcept>> type;
    std::optional<fhir_uri> url_;
    std::optional<fhir_string> usage;
    std::vector<std::shared_ptr<UsageContext>> use_context;
    std::optional<fhir_string> version;
};

class PlanDefinition_Action {
public:
    std::vector<std::shared_ptr<PlanDefinition_Action>> action;
    std::optional<fhir_code> cardinality_behavior;
    std::vector<std::shared_ptr<CodeableConcept>> code_;
    std::vector<std::shared_ptr<PlanDefinition_Action_Condition>> condition;
    using DEFINITION_Variant = std::variant<
        std::shared_ptr<fhir_canonical>,
        std::shared_ptr<fhir_uri>
    >;
    DEFINITION_Variant definition;
    std::optional<fhir_string> description;
    std::vector<std::shared_ptr<RelatedArtifact>> documentation;
    std::vector<std::shared_ptr<PlanDefinition_Action_DynamicValue>> dynamic_value;
    std::vector<std::shared_ptr<Extension>> extension;
    std::vector<fhir_id> goal_id;
    std::optional<fhir_code> grouping_behavior;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<DataRequirement>> input;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::vector<std::shared_ptr<DataRequirement>> output;
    std::vector<std::shared_ptr<PlanDefinition_Action_Participant>> participant;
    std::optional<fhir_code> precheck_behavior;
    std::optional<fhir_string> prefix;
    std::optional<fhir_code> priority;
    std::vector<std::shared_ptr<CodeableConcept>> reason;
    std::vector<std::shared_ptr<PlanDefinition_Action_RelatedAction>> related_action;
    std::optional<fhir_code> required_behavior;
    std::optional<fhir_code> selection_behavior;
    using SUBJECT_Variant = std::variant<
        std::shared_ptr<CodeableConcept>,
        std::shared_ptr<Reference>
    >;
    SUBJECT_Variant subject;
    std::optional<fhir_string> text_equivalent;
    using TIMING_Variant = std::variant<
        std::shared_ptr<fhir_dateTime>,
        std::shared_ptr<Age>,
        std::shared_ptr<Period>,
        std::shared_ptr<Duration>,
        std::shared_ptr<Range>,
        std::shared_ptr<Timing>
    >;
    TIMING_Variant timing;
    std::optional<fhir_string> title;
    std::optional<fhir_canonical> transform;
    std::vector<std::shared_ptr<TriggerDefinition>> trigger;
    std::optional<std::shared_ptr<CodeableConcept>> type;
};

class PlanDefinition_Action_Condition {
public:
    std::optional<std::shared_ptr<Expression>> expression;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    fhir_code kind;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
};

class PlanDefinition_Action_DynamicValue {
public:
    std::optional<std::shared_ptr<Expression>> expression;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<fhir_string> path;
};

class PlanDefinition_Action_Participant {
public:
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<std::shared_ptr<CodeableConcept>> role;
    fhir_code type;
};

class PlanDefinition_Action_RelatedAction {
public:
    fhir_id action_id;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    using OFFSET_Variant = std::variant<
        std::shared_ptr<Duration>,
        std::shared_ptr<Range>
    >;
    OFFSET_Variant offset;
    fhir_code relationship;
};

class PlanDefinition_Goal {
public:
    std::vector<std::shared_ptr<CodeableConcept>> addresses;
    std::optional<std::shared_ptr<CodeableConcept>> category;
    std::shared_ptr<CodeableConcept> description;
    std::vector<std::shared_ptr<RelatedArtifact>> documentation;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<std::shared_ptr<CodeableConcept>> priority;
    std::optional<std::shared_ptr<CodeableConcept>> start;
    std::vector<std::shared_ptr<PlanDefinition_Goal_Target>> target;
};

class PlanDefinition_Goal_Target {
public:
    using DETAIL_Variant = std::variant<
        std::shared_ptr<Quantity>,
        std::shared_ptr<Range>,
        std::shared_ptr<CodeableConcept>
    >;
    DETAIL_Variant detail;
    std::optional<std::shared_ptr<Duration>> due;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::optional<std::shared_ptr<CodeableConcept>> measure;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
};

class Population {
public:
    using AGE_Variant = std::variant<
        std::shared_ptr<Range>,
        std::shared_ptr<CodeableConcept>
    >;
    AGE_Variant age;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<CodeableConcept>> gender;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<std::shared_ptr<CodeableConcept>> physiological_condition;
    std::optional<std::shared_ptr<CodeableConcept>> race;
};

class Practitioner {
public:
    std::optional<fhir_boolean> active;
    std::vector<std::shared_ptr<Address>> address;
    std::optional<fhir_date> birth_date;
    std::vector<std::shared_ptr<CodeableConcept>> communication;
    std::vector<std::shared_ptr<Resource>> contained;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<fhir_code> gender;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Identifier>> identifier;
    std::optional<fhir_uri> implicit_rules;
    std::optional<fhir_code> language;
    std::optional<std::shared_ptr<Meta>> meta;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::vector<std::shared_ptr<HumanName>> name;
    std::vector<std::shared_ptr<Attachment>> photo;
    std::vector<std::shared_ptr<Practitioner_Qualification>> qualification;
    std::vector<std::shared_ptr<ContactPoint>> telecom;
    std::optional<std::shared_ptr<Narrative>> text;
};

class Practitioner_Qualification {
public:
    std::shared_ptr<CodeableConcept> code_;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Identifier>> identifier;
    std::optional<std::shared_ptr<Reference>> issuer;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<std::shared_ptr<Period>> period;
};

class PractitionerRole {
public:
    std::optional<fhir_boolean> active;
    std::optional<fhir_string> availability_exceptions;
    std::vector<std::shared_ptr<PractitionerRole_AvailableTime>> available_time;
    std::vector<std::shared_ptr<CodeableConcept>> code_;
    std::vector<std::shared_ptr<Resource>> contained;
    std::vector<std::shared_ptr<Reference>> endpoint;
    std::vector<std::shared_ptr<Extension>> extension;
    std::vector<std::shared_ptr<Reference>> healthcare_service;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Identifier>> identifier;
    std::optional<fhir_uri> implicit_rules;
    std::optional<fhir_code> language;
    std::vector<std::shared_ptr<Reference>> location;
    std::optional<std::shared_ptr<Meta>> meta;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::vector<std::shared_ptr<PractitionerRole_NotAvailable>> not_available;
    std::optional<std::shared_ptr<Reference>> organization;
    std::optional<std::shared_ptr<Period>> period;
    std::optional<std::shared_ptr<Reference>> practitioner;
    std::vector<std::shared_ptr<CodeableConcept>> specialty;
    std::vector<std::shared_ptr<ContactPoint>> telecom;
    std::optional<std::shared_ptr<Narrative>> text;
};

class PractitionerRole_AvailableTime {
public:
    std::optional<fhir_boolean> all_day;
    std::optional<fhir_time> available_end_time;
    std::optional<fhir_time> available_start_time;
    std::vector<fhir_code> days_of_week;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
};

class PractitionerRole_NotAvailable {
public:
    fhir_string description;
    std::optional<std::shared_ptr<Period>> during;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
};

class Procedure {
public:
    std::optional<std::shared_ptr<Reference>> asserter;
    std::vector<std::shared_ptr<Reference>> based_on;
    std::vector<std::shared_ptr<CodeableConcept>> body_site;
    std::optional<std::shared_ptr<CodeableConcept>> category;
    std::optional<std::shared_ptr<CodeableConcept>> code_;
    std::vector<std::shared_ptr<CodeableConcept>> complication;
    std::vector<std::shared_ptr<Reference>> complication_detail;
    std::vector<std::shared_ptr<Resource>> contained;
    std::optional<std::shared_ptr<Reference>> encounter;
    std::vector<std::shared_ptr<Extension>> extension;
    std::vector<std::shared_ptr<Procedure_FocalDevice>> focal_device;
    std::vector<std::shared_ptr<CodeableConcept>> follow_up;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Identifier>> identifier;
    std::optional<fhir_uri> implicit_rules;
    std::vector<fhir_canonical> instantiates_canonical;
    std::vector<fhir_uri> instantiates_uri;
    std::optional<fhir_code> language;
    std::optional<std::shared_ptr<Reference>> location;
    std::optional<std::shared_ptr<Meta>> meta;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::vector<std::shared_ptr<Annotation>> note;
    std::optional<std::shared_ptr<CodeableConcept>> outcome;
    std::vector<std::shared_ptr<Reference>> part_of;
    using PERFORMED_Variant = std::variant<
        std::shared_ptr<fhir_dateTime>,
        std::shared_ptr<Period>,
        std::shared_ptr<fhir_string>,
        std::shared_ptr<Age>,
        std::shared_ptr<Range>
    >;
    PERFORMED_Variant performed;
    std::vector<std::shared_ptr<Procedure_Performer>> performer;
    std::vector<std::shared_ptr<CodeableConcept>> reason_code;
    std::vector<std::shared_ptr<Reference>> reason_reference;
    std::optional<std::shared_ptr<Reference>> recorder;
    std::vector<std::shared_ptr<Reference>> report;
    fhir_code status;
    std::optional<std::shared_ptr<CodeableConcept>> status_reason;
    std::shared_ptr<Reference> subject;
    std::optional<std::shared_ptr<Narrative>> text;
    std::vector<std::shared_ptr<CodeableConcept>> used_code;
    std::vector<std::shared_ptr<Reference>> used_reference;
};

class Procedure_FocalDevice {
public:
    std::optional<std::shared_ptr<CodeableConcept>> action;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::shared_ptr<Reference> manipulated;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
};

class Procedure_Performer {
public:
    std::shared_ptr<Reference> actor;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<CodeableConcept>> function;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<std::shared_ptr<Reference>> on_behalf_of;
};

class ProdCharacteristic {
public:
    std::vector<fhir_string> color;
    std::optional<std::shared_ptr<Quantity>> depth;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<Quantity>> external_diameter;
    std::optional<std::shared_ptr<Quantity>> height;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Attachment>> image;
    std::vector<fhir_string> imprint;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<std::shared_ptr<Quantity>> nominal_volume;
    std::optional<std::shared_ptr<CodeableConcept>> scoring;
    std::optional<fhir_string> shape;
    std::optional<std::shared_ptr<Quantity>> weight;
    std::optional<std::shared_ptr<Quantity>> width;
};

class ProductShelfLife {
public:
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::optional<std::shared_ptr<Identifier>> identifier;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::shared_ptr<Quantity> period;
    std::vector<std::shared_ptr<CodeableConcept>> special_precautions_for_storage;
    std::shared_ptr<CodeableConcept> type;
};

class Provenance {
public:
    std::optional<std::shared_ptr<CodeableConcept>> activity;
    std::vector<std::shared_ptr<Resource>> contained;
    std::vector<std::shared_ptr<Provenance_Entity>> entity;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::optional<fhir_uri> implicit_rules;
    std::optional<fhir_code> language;
    std::optional<std::shared_ptr<Reference>> location;
    std::optional<std::shared_ptr<Meta>> meta;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    using OCCURRED_Variant = std::variant<
        std::shared_ptr<Period>,
        std::shared_ptr<fhir_dateTime>
    >;
    OCCURRED_Variant occurred;
    std::vector<fhir_uri> policy;
    std::vector<std::shared_ptr<CodeableConcept>> reason;
    fhir_instant recorded;
    std::vector<std::shared_ptr<Signature>> signature;
    std::optional<std::shared_ptr<Narrative>> text;
};

class Provenance_Agent {
public:
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<std::shared_ptr<Reference>> on_behalf_of;
    std::vector<std::shared_ptr<CodeableConcept>> role;
    std::optional<std::shared_ptr<CodeableConcept>> type;
    std::shared_ptr<Reference> who;
};

class Provenance_Entity {
public:
    std::vector<std::shared_ptr<Provenance_Agent>> agent;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    fhir_code role;
    std::shared_ptr<Reference> what;
};

class Quantity {
public:
    std::optional<fhir_code> code_;
    std::optional<fhir_code> comparator;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::optional<fhir_uri> system;
    std::optional<fhir_string> unit;
    std::optional<fhir_decimal> value;
};

class Questionnaire {
public:
    std::optional<fhir_date> approval_date;
    std::vector<std::shared_ptr<Coding>> code_;
    std::vector<std::shared_ptr<ContactDetail>> contact;
    std::vector<std::shared_ptr<Resource>> contained;
    std::optional<fhir_markdown> copyright;
    std::optional<fhir_dateTime> date_;
    std::vector<fhir_canonical> derived_from;
    std::optional<fhir_markdown> description;
    std::optional<std::shared_ptr<Period>> effective_period;
    std::optional<fhir_boolean> experimental;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Identifier>> identifier;
    std::optional<fhir_uri> implicit_rules;
    std::vector<std::shared_ptr<Questionnaire_Item>> item;
    std::vector<std::shared_ptr<CodeableConcept>> jurisdiction;
    std::optional<fhir_code> language;
    std::optional<fhir_date> last_review_date;
    std::optional<std::shared_ptr<Meta>> meta;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<fhir_string> name;
    std::optional<fhir_string> publisher;
    std::optional<fhir_markdown> purpose;
    fhir_code status;
    std::vector<fhir_code> subject_type;
    std::optional<std::shared_ptr<Narrative>> text;
    std::optional<fhir_string> title;
    std::optional<fhir_uri> url_;
    std::vector<std::shared_ptr<UsageContext>> use_context;
    std::optional<fhir_string> version;
};

class Questionnaire_Item {
public:
    std::vector<std::shared_ptr<Questionnaire_Item_AnswerOption>> answer_option;
    std::optional<fhir_canonical> answer_value_set;
    std::vector<std::shared_ptr<Coding>> code_;
    std::optional<fhir_uri> definition;
    std::optional<fhir_code> enable_behavior;
    std::vector<std::shared_ptr<Questionnaire_Item_EnableWhen>> enable_when;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Questionnaire_Item_Initial>> initial;
    std::vector<std::shared_ptr<Questionnaire_Item>> item;
    fhir_string link_id;
    std::optional<fhir_integer> max_length;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<fhir_string> prefix;
    std::optional<fhir_boolean> read_only;
    std::optional<fhir_boolean> repeats;
    std::optional<fhir_boolean> required;
    std::optional<fhir_string> text;
    fhir_code type;
};

class Questionnaire_Item_AnswerOption {
public:
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::optional<fhir_boolean> initial_selected;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    using VALUE_Variant = std::variant<
        std::shared_ptr<fhir_integer>,
        std::shared_ptr<fhir_date>,
        std::shared_ptr<fhir_time>,
        std::shared_ptr<fhir_string>,
        std::shared_ptr<Coding>,
        std::shared_ptr<Reference>
    >;
    VALUE_Variant value;
};

class Questionnaire_Item_EnableWhen {
public:
    using ANSWER_Variant = std::variant<
        std::shared_ptr<fhir_boolean>,
        std::shared_ptr<fhir_decimal>,
        std::shared_ptr<fhir_integer>,
        std::shared_ptr<fhir_date>,
        std::shared_ptr<fhir_dateTime>,
        std::shared_ptr<fhir_time>,
        std::shared_ptr<fhir_string>,
        std::shared_ptr<Coding>,
        std::shared_ptr<Quantity>,
        std::shared_ptr<Reference>
    >;
    ANSWER_Variant answer;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    fhir_code operator_;
    fhir_string question;
};

class Questionnaire_Item_Initial {
public:
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    using VALUE_Variant = std::variant<
        std::shared_ptr<fhir_boolean>,
        std::shared_ptr<fhir_decimal>,
        std::shared_ptr<fhir_integer>,
        std::shared_ptr<fhir_date>,
        std::shared_ptr<fhir_dateTime>,
        std::shared_ptr<fhir_time>,
        std::shared_ptr<fhir_string>,
        std::shared_ptr<fhir_uri>,
        std::shared_ptr<Attachment>,
        std::shared_ptr<Coding>,
        std::shared_ptr<Quantity>,
        std::shared_ptr<Reference>
    >;
    VALUE_Variant value;
};

class QuestionnaireResponse {
public:
    std::optional<std::shared_ptr<Reference>> author;
    std::optional<fhir_dateTime> authored;
    std::vector<std::shared_ptr<Reference>> based_on;
    std::vector<std::shared_ptr<Resource>> contained;
    std::optional<std::shared_ptr<Reference>> encounter;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::optional<std::shared_ptr<Identifier>> identifier;
    std::optional<fhir_uri> implicit_rules;
    std::vector<std::shared_ptr<QuestionnaireResponse_Item>> item;
    std::optional<fhir_code> language;
    std::optional<std::shared_ptr<Meta>> meta;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::vector<std::shared_ptr<Reference>> part_of;
    std::optional<fhir_canonical> questionnaire;
    std::optional<std::shared_ptr<Reference>> source;
    fhir_code status;
    std::optional<std::shared_ptr<Reference>> subject;
    std::optional<std::shared_ptr<Narrative>> text;
};

class QuestionnaireResponse_Item {
public:
    std::vector<std::shared_ptr<QuestionnaireResponse_Item_Answer>> answer;
    std::optional<fhir_uri> definition;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<QuestionnaireResponse_Item>> item;
    fhir_string link_id;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<fhir_string> text;
};

class QuestionnaireResponse_Item_Answer {
public:
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<QuestionnaireResponse_Item>> item;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    using VALUE_Variant = std::variant<
        std::shared_ptr<fhir_boolean>,
        std::shared_ptr<fhir_decimal>,
        std::shared_ptr<fhir_integer>,
        std::shared_ptr<fhir_date>,
        std::shared_ptr<fhir_dateTime>,
        std::shared_ptr<fhir_time>,
        std::shared_ptr<fhir_string>,
        std::shared_ptr<fhir_uri>,
        std::shared_ptr<Attachment>,
        std::shared_ptr<Coding>,
        std::shared_ptr<Quantity>,
        std::shared_ptr<Reference>
    >;
    VALUE_Variant value;
};

class Range {
public:
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<Quantity>> high;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::optional<std::shared_ptr<Quantity>> low;
};

class Ratio {
public:
    std::optional<std::shared_ptr<Quantity>> denominator;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::optional<std::shared_ptr<Quantity>> numerator;
};

class Reference {
public:
    std::optional<fhir_string> display;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::optional<std::shared_ptr<Identifier>> identifier;
    std::optional<fhir_string> reference;
    std::optional<fhir_uri> type;
};

class RelatedArtifact {
public:
    std::optional<fhir_markdown> citation;
    std::optional<fhir_string> display;
    std::optional<std::shared_ptr<Attachment>> document;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::optional<fhir_string> label;
    std::optional<fhir_canonical> resource;
    fhir_code type;
    std::optional<fhir_url> url_;
};

class RelatedPerson {
public:
    std::optional<fhir_boolean> active;
    std::vector<std::shared_ptr<Address>> address;
    std::optional<fhir_date> birth_date;
    std::vector<std::shared_ptr<RelatedPerson_Communication>> communication;
    std::vector<std::shared_ptr<Resource>> contained;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<fhir_code> gender;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Identifier>> identifier;
    std::optional<fhir_uri> implicit_rules;
    std::optional<fhir_code> language;
    std::optional<std::shared_ptr<Meta>> meta;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::vector<std::shared_ptr<HumanName>> name;
    std::shared_ptr<Reference> patient;
    std::optional<std::shared_ptr<Period>> period;
    std::vector<std::shared_ptr<Attachment>> photo;
    std::vector<std::shared_ptr<CodeableConcept>> relationship;
    std::vector<std::shared_ptr<ContactPoint>> telecom;
    std::optional<std::shared_ptr<Narrative>> text;
};

class RelatedPerson_Communication {
public:
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::shared_ptr<CodeableConcept> language;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<fhir_boolean> preferred;
};

class RequestGroup {
public:
    std::vector<std::shared_ptr<RequestGroup_Action>> action;
    std::optional<std::shared_ptr<Reference>> author;
    std::optional<fhir_dateTime> authored_on;
    std::vector<std::shared_ptr<Reference>> based_on;
    std::optional<std::shared_ptr<CodeableConcept>> code_;
    std::vector<std::shared_ptr<Resource>> contained;
    std::optional<std::shared_ptr<Reference>> encounter;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<Identifier>> group_identifier;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Identifier>> identifier;
    std::optional<fhir_uri> implicit_rules;
    std::vector<fhir_canonical> instantiates_canonical;
    std::vector<fhir_uri> instantiates_uri;
    fhir_code intent;
    std::optional<fhir_code> language;
    std::optional<std::shared_ptr<Meta>> meta;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::vector<std::shared_ptr<Annotation>> note;
    std::optional<fhir_code> priority;
    std::vector<std::shared_ptr<CodeableConcept>> reason_code;
    std::vector<std::shared_ptr<Reference>> reason_reference;
    std::vector<std::shared_ptr<Reference>> replaces;
    fhir_code status;
    std::optional<std::shared_ptr<Reference>> subject;
    std::optional<std::shared_ptr<Narrative>> text;
};

class RequestGroup_Action {
public:
    std::vector<std::shared_ptr<RequestGroup_Action>> action;
    std::optional<fhir_code> cardinality_behavior;
    std::vector<std::shared_ptr<CodeableConcept>> code_;
    std::vector<std::shared_ptr<RequestGroup_Action_Condition>> condition;
    std::optional<fhir_string> description;
    std::vector<std::shared_ptr<RelatedArtifact>> documentation;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<fhir_code> grouping_behavior;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::vector<std::shared_ptr<Reference>> participant;
    std::optional<fhir_code> precheck_behavior;
    std::optional<fhir_string> prefix;
    std::optional<fhir_code> priority;
    std::vector<std::shared_ptr<RequestGroup_Action_RelatedAction>> related_action;
    std::optional<fhir_code> required_behavior;
    std::optional<std::shared_ptr<Reference>> resource;
    std::optional<fhir_code> selection_behavior;
    std::optional<fhir_string> text_equivalent;
    using TIMING_Variant = std::variant<
        std::shared_ptr<fhir_dateTime>,
        std::shared_ptr<Age>,
        std::shared_ptr<Period>,
        std::shared_ptr<Duration>,
        std::shared_ptr<Range>,
        std::shared_ptr<Timing>
    >;
    TIMING_Variant timing;
    std::optional<fhir_string> title;
    std::optional<std::shared_ptr<CodeableConcept>> type;
};

class RequestGroup_Action_Condition {
public:
    std::optional<std::shared_ptr<Expression>> expression;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    fhir_code kind;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
};

class RequestGroup_Action_RelatedAction {
public:
    fhir_id action_id;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    using OFFSET_Variant = std::variant<
        std::shared_ptr<Duration>,
        std::shared_ptr<Range>
    >;
    OFFSET_Variant offset;
    fhir_code relationship;
};

class ResearchDefinition {
public:
    std::optional<fhir_date> approval_date;
    std::vector<std::shared_ptr<ContactDetail>> author;
    std::vector<fhir_string> comment;
    std::vector<std::shared_ptr<ContactDetail>> contact;
    std::vector<std::shared_ptr<Resource>> contained;
    std::optional<fhir_markdown> copyright;
    std::optional<fhir_dateTime> date_;
    std::optional<fhir_markdown> description;
    std::vector<std::shared_ptr<ContactDetail>> editor;
    std::optional<std::shared_ptr<Period>> effective_period;
    std::vector<std::shared_ptr<ContactDetail>> endorser;
    std::optional<fhir_boolean> experimental;
    std::optional<std::shared_ptr<Reference>> exposure;
    std::optional<std::shared_ptr<Reference>> exposure_alternative;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Identifier>> identifier;
    std::optional<fhir_uri> implicit_rules;
    std::vector<std::shared_ptr<CodeableConcept>> jurisdiction;
    std::optional<fhir_code> language;
    std::optional<fhir_date> last_review_date;
    std::vector<fhir_canonical> library;
    std::optional<std::shared_ptr<Meta>> meta;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<fhir_string> name;
    std::optional<std::shared_ptr<Reference>> outcome;
    std::shared_ptr<Reference> population;
    std::optional<fhir_string> publisher;
    std::optional<fhir_markdown> purpose;
    std::vector<std::shared_ptr<RelatedArtifact>> related_artifact;
    std::vector<std::shared_ptr<ContactDetail>> reviewer;
    std::optional<fhir_string> short_title;
    fhir_code status;
    using SUBJECT_Variant = std::variant<
        std::shared_ptr<CodeableConcept>,
        std::shared_ptr<Reference>
    >;
    SUBJECT_Variant subject;
    std::optional<fhir_string> subtitle;
    std::optional<std::shared_ptr<Narrative>> text;
    std::optional<fhir_string> title;
    std::vector<std::shared_ptr<CodeableConcept>> topic;
    std::optional<fhir_uri> url_;
    std::optional<fhir_string> usage;
    std::vector<std::shared_ptr<UsageContext>> use_context;
    std::optional<fhir_string> version;
};

class ResearchElementDefinition {
public:
    std::optional<fhir_date> approval_date;
    std::vector<std::shared_ptr<ContactDetail>> author;
    std::vector<fhir_string> comment;
    std::vector<std::shared_ptr<ContactDetail>> contact;
    std::vector<std::shared_ptr<Resource>> contained;
    std::optional<fhir_markdown> copyright;
    std::optional<fhir_dateTime> date_;
    std::optional<fhir_markdown> description;
    std::vector<std::shared_ptr<ContactDetail>> editor;
    std::optional<std::shared_ptr<Period>> effective_period;
    std::vector<std::shared_ptr<ContactDetail>> endorser;
    std::optional<fhir_boolean> experimental;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Identifier>> identifier;
    std::optional<fhir_uri> implicit_rules;
    std::vector<std::shared_ptr<CodeableConcept>> jurisdiction;
    std::optional<fhir_code> language;
    std::optional<fhir_date> last_review_date;
    std::vector<fhir_canonical> library;
    std::optional<std::shared_ptr<Meta>> meta;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<fhir_string> name;
    std::optional<fhir_string> publisher;
    std::optional<fhir_markdown> purpose;
    std::vector<std::shared_ptr<RelatedArtifact>> related_artifact;
    std::vector<std::shared_ptr<ContactDetail>> reviewer;
    std::optional<fhir_string> short_title;
    fhir_code status;
    using SUBJECT_Variant = std::variant<
        std::shared_ptr<CodeableConcept>,
        std::shared_ptr<Reference>
    >;
    SUBJECT_Variant subject;
    std::optional<fhir_string> subtitle;
    std::optional<std::shared_ptr<Narrative>> text;
    std::optional<fhir_string> title;
    std::vector<std::shared_ptr<CodeableConcept>> topic;
    fhir_code type;
    std::optional<fhir_uri> url_;
    std::optional<fhir_string> usage;
    std::vector<std::shared_ptr<UsageContext>> use_context;
    std::optional<fhir_code> variable_type;
    std::optional<fhir_string> version;
};

class ResearchElementDefinition_Characteristic {
public:
    using DEFINITION_Variant = std::variant<
        std::shared_ptr<CodeableConcept>,
        std::shared_ptr<fhir_canonical>,
        std::shared_ptr<Expression>,
        std::shared_ptr<DataRequirement>
    >;
    DEFINITION_Variant definition;
    std::optional<fhir_boolean> exclude;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<fhir_string> participant_effective_description;
    std::optional<fhir_code> participant_effective_group_measure;
    std::optional<std::shared_ptr<Duration>> participant_effective_time_from_start;
    using PARTICIPANT_EFFECTIVE_Variant = std::variant<
        std::shared_ptr<fhir_dateTime>,
        std::shared_ptr<Period>,
        std::shared_ptr<Duration>,
        std::shared_ptr<Timing>
    >;
    PARTICIPANT_EFFECTIVE_Variant participant_effective;
    std::optional<fhir_string> study_effective_description;
    std::optional<fhir_code> study_effective_group_measure;
    std::optional<std::shared_ptr<Duration>> study_effective_time_from_start;
    using STUDY_EFFECTIVE_Variant = std::variant<
        std::shared_ptr<fhir_dateTime>,
        std::shared_ptr<Period>,
        std::shared_ptr<Duration>,
        std::shared_ptr<Timing>
    >;
    STUDY_EFFECTIVE_Variant study_effective;
    std::optional<std::shared_ptr<CodeableConcept>> unit_of_measure;
    std::vector<std::shared_ptr<UsageContext>> usage_context;
};

class ResearchStudy {
public:
    std::vector<std::shared_ptr<ResearchStudy_Arm>> arm;
    std::vector<std::shared_ptr<CodeableConcept>> category;
    std::vector<std::shared_ptr<CodeableConcept>> condition;
    std::vector<std::shared_ptr<ContactDetail>> contact;
    std::vector<std::shared_ptr<Resource>> contained;
    std::optional<fhir_markdown> description;
    std::vector<std::shared_ptr<Reference>> enrollment;
    std::vector<std::shared_ptr<Extension>> extension;
    std::vector<std::shared_ptr<CodeableConcept>> focus;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Identifier>> identifier;
    std::optional<fhir_uri> implicit_rules;
    std::vector<std::shared_ptr<CodeableConcept>> keyword;
    std::optional<fhir_code> language;
    std::vector<std::shared_ptr<CodeableConcept>> location;
    std::optional<std::shared_ptr<Meta>> meta;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::vector<std::shared_ptr<Annotation>> note;
    std::vector<std::shared_ptr<ResearchStudy_Objective>> objective;
    std::vector<std::shared_ptr<Reference>> part_of;
    std::optional<std::shared_ptr<Period>> period;
    std::optional<std::shared_ptr<CodeableConcept>> phase;
    std::optional<std::shared_ptr<CodeableConcept>> primary_purpose_type;
    std::optional<std::shared_ptr<Reference>> principal_investigator;
    std::vector<std::shared_ptr<Reference>> protocol;
    std::optional<std::shared_ptr<CodeableConcept>> reason_stopped;
    std::vector<std::shared_ptr<RelatedArtifact>> related_artifact;
    std::vector<std::shared_ptr<Reference>> site;
    std::optional<std::shared_ptr<Reference>> sponsor;
    fhir_code status;
    std::optional<std::shared_ptr<Narrative>> text;
    std::optional<fhir_string> title;
};

class ResearchStudy_Arm {
public:
    std::optional<fhir_string> description;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    fhir_string name;
    std::optional<std::shared_ptr<CodeableConcept>> type;
};

class ResearchStudy_Objective {
public:
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<fhir_string> name;
    std::optional<std::shared_ptr<CodeableConcept>> type;
};

class ResearchSubject {
public:
    std::optional<fhir_string> actual_arm;
    std::optional<fhir_string> assigned_arm;
    std::optional<std::shared_ptr<Reference>> consent;
    std::vector<std::shared_ptr<Resource>> contained;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Identifier>> identifier;
    std::optional<fhir_uri> implicit_rules;
    std::shared_ptr<Reference> individual;
    std::optional<fhir_code> language;
    std::optional<std::shared_ptr<Meta>> meta;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<std::shared_ptr<Period>> period;
    fhir_code status;
    std::shared_ptr<Reference> study;
    std::optional<std::shared_ptr<Narrative>> text;
};

class Resource {
public:
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::optional<fhir_uri> implicit_rules;
    std::optional<fhir_code> language;
    std::optional<std::shared_ptr<Meta>> meta;
};

class RiskAssessment {
public:
    std::optional<std::shared_ptr<Reference>> based_on;
    std::vector<std::shared_ptr<Reference>> basis;
    std::optional<std::shared_ptr<CodeableConcept>> code_;
    std::optional<std::shared_ptr<Reference>> condition;
    std::vector<std::shared_ptr<Resource>> contained;
    std::optional<std::shared_ptr<Reference>> encounter;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Identifier>> identifier;
    std::optional<fhir_uri> implicit_rules;
    std::optional<fhir_code> language;
    std::optional<std::shared_ptr<Meta>> meta;
    std::optional<std::shared_ptr<CodeableConcept>> method;
    std::optional<fhir_string> mitigation;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::vector<std::shared_ptr<Annotation>> note;
    using OCCURRENCE_Variant = std::variant<
        std::shared_ptr<fhir_dateTime>,
        std::shared_ptr<Period>
    >;
    OCCURRENCE_Variant occurrence;
    std::optional<std::shared_ptr<Reference>> parent;
    std::optional<std::shared_ptr<Reference>> performer;
    std::vector<std::shared_ptr<RiskAssessment_Prediction>> prediction;
    std::vector<std::shared_ptr<CodeableConcept>> reason_code;
    std::vector<std::shared_ptr<Reference>> reason_reference;
    fhir_code status;
    std::shared_ptr<Reference> subject;
    std::optional<std::shared_ptr<Narrative>> text;
};

class RiskAssessment_Prediction {
public:
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<std::shared_ptr<CodeableConcept>> outcome;
    using PROBABILITY_Variant = std::variant<
        std::shared_ptr<fhir_decimal>,
        std::shared_ptr<Range>
    >;
    PROBABILITY_Variant probability;
    std::optional<std::shared_ptr<CodeableConcept>> qualitative_risk;
    std::optional<fhir_string> rationale;
    std::optional<fhir_decimal> relative_risk;
    using WHEN_Variant = std::variant<
        std::shared_ptr<Period>,
        std::shared_ptr<Range>
    >;
    WHEN_Variant when;
};

class RiskEvidenceSynthesis {
public:
    std::optional<fhir_date> approval_date;
    std::vector<std::shared_ptr<ContactDetail>> author;
    std::vector<std::shared_ptr<RiskEvidenceSynthesis_Certainty>> certainty;
    std::vector<std::shared_ptr<ContactDetail>> contact;
    std::vector<std::shared_ptr<Resource>> contained;
    std::optional<fhir_markdown> copyright;
    std::optional<fhir_dateTime> date_;
    std::optional<fhir_markdown> description;
    std::vector<std::shared_ptr<ContactDetail>> editor;
    std::optional<std::shared_ptr<Period>> effective_period;
    std::vector<std::shared_ptr<ContactDetail>> endorser;
    std::optional<std::shared_ptr<Reference>> exposure;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Identifier>> identifier;
    std::optional<fhir_uri> implicit_rules;
    std::vector<std::shared_ptr<CodeableConcept>> jurisdiction;
    std::optional<fhir_code> language;
    std::optional<fhir_date> last_review_date;
    std::optional<std::shared_ptr<Meta>> meta;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<fhir_string> name;
    std::vector<std::shared_ptr<Annotation>> note;
    std::shared_ptr<Reference> outcome;
    std::shared_ptr<Reference> population;
    std::optional<fhir_string> publisher;
    std::vector<std::shared_ptr<RelatedArtifact>> related_artifact;
    std::vector<std::shared_ptr<ContactDetail>> reviewer;
    std::optional<std::shared_ptr<RiskEvidenceSynthesis_RiskEstimate>> risk_estimate;
    std::optional<std::shared_ptr<RiskEvidenceSynthesis_SampleSize>> sample_size;
    fhir_code status;
    std::optional<std::shared_ptr<CodeableConcept>> study_type;
    std::optional<std::shared_ptr<CodeableConcept>> synthesis_type;
    std::optional<std::shared_ptr<Narrative>> text;
    std::optional<fhir_string> title;
    std::vector<std::shared_ptr<CodeableConcept>> topic;
    std::optional<fhir_uri> url_;
    std::vector<std::shared_ptr<UsageContext>> use_context;
    std::optional<fhir_string> version;
};

class RiskEvidenceSynthesis_Certainty {
public:
    std::vector<std::shared_ptr<RiskEvidenceSynthesis_Certainty_CertaintySubcomponent>> certainty_subcomponent;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::vector<std::shared_ptr<Annotation>> note;
    std::vector<std::shared_ptr<CodeableConcept>> rating;
};

class RiskEvidenceSynthesis_Certainty_CertaintySubcomponent {
public:
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::vector<std::shared_ptr<Annotation>> note;
    std::vector<std::shared_ptr<CodeableConcept>> rating;
    std::optional<std::shared_ptr<CodeableConcept>> type;
};

class RiskEvidenceSynthesis_RiskEstimate {
public:
    std::optional<fhir_integer> denominator_count;
    std::optional<fhir_string> description;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<fhir_integer> numerator_count;
    std::vector<std::shared_ptr<RiskEvidenceSynthesis_RiskEstimate_PrecisionEstimate>> precision_estimate;
    std::optional<std::shared_ptr<CodeableConcept>> type;
    std::optional<std::shared_ptr<CodeableConcept>> unit_of_measure;
    std::optional<fhir_decimal> value;
};

class RiskEvidenceSynthesis_RiskEstimate_PrecisionEstimate {
public:
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<fhir_decimal> from;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::optional<fhir_decimal> level;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<fhir_decimal> to;
    std::optional<std::shared_ptr<CodeableConcept>> type;
};

class RiskEvidenceSynthesis_SampleSize {
public:
    std::optional<fhir_string> description;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<fhir_integer> number_of_participants;
    std::optional<fhir_integer> number_of_studies;
};

class SampledData {
public:
    std::optional<fhir_string> data;
    fhir_positiveInt dimensions;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<fhir_decimal> factor;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::optional<fhir_decimal> lower_limit;
    std::shared_ptr<Quantity> origin;
    fhir_decimal period;
    std::optional<fhir_decimal> upper_limit;
};

class Schedule {
public:
    std::optional<fhir_boolean> active;
    std::optional<fhir_string> comment;
    std::vector<std::shared_ptr<Resource>> contained;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Identifier>> identifier;
    std::optional<fhir_uri> implicit_rules;
    std::optional<fhir_code> language;
    std::optional<std::shared_ptr<Meta>> meta;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<std::shared_ptr<Period>> planning_horizon;
    std::vector<std::shared_ptr<CodeableConcept>> service_category;
    std::vector<std::shared_ptr<CodeableConcept>> service_type;
    std::vector<std::shared_ptr<CodeableConcept>> specialty;
    std::optional<std::shared_ptr<Narrative>> text;
};

class SearchParameter {
public:
    std::vector<fhir_string> chain;
    fhir_code code_;
    std::vector<fhir_code> comparator;
    std::vector<std::shared_ptr<SearchParameter_Component>> component;
    std::vector<std::shared_ptr<ContactDetail>> contact;
    std::vector<std::shared_ptr<Resource>> contained;
    std::optional<fhir_dateTime> date_;
    std::optional<fhir_canonical> derived_from;
    fhir_markdown description;
    std::optional<fhir_boolean> experimental;
    std::optional<fhir_string> expression;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::optional<fhir_uri> implicit_rules;
    std::vector<std::shared_ptr<CodeableConcept>> jurisdiction;
    std::optional<fhir_code> language;
    std::optional<std::shared_ptr<Meta>> meta;
    std::vector<fhir_code> modifier;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<fhir_boolean> multiple_and;
    std::optional<fhir_boolean> multiple_or;
    fhir_string name;
    std::optional<fhir_string> publisher;
    std::optional<fhir_markdown> purpose;
    fhir_code status;
    std::vector<fhir_code> target;
    std::optional<std::shared_ptr<Narrative>> text;
    fhir_code type;
    fhir_uri url_;
    std::vector<std::shared_ptr<UsageContext>> use_context;
    std::optional<fhir_string> version;
    std::optional<fhir_string> xpath;
    std::optional<fhir_code> xpath_usage;
};

class SearchParameter_Component {
public:
    fhir_canonical definition;
    fhir_string expression;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
};

class ServiceRequest {
public:
    using AS_NEEDED_Variant = std::variant<
        std::shared_ptr<fhir_boolean>,
        std::shared_ptr<CodeableConcept>
    >;
    AS_NEEDED_Variant as_needed;
    std::optional<fhir_dateTime> authored_on;
    std::vector<std::shared_ptr<Reference>> based_on;
    std::vector<std::shared_ptr<CodeableConcept>> body_site;
    std::vector<std::shared_ptr<CodeableConcept>> category;
    std::optional<std::shared_ptr<CodeableConcept>> code_;
    std::vector<std::shared_ptr<Resource>> contained;
    std::optional<fhir_boolean> do_not_perform;
    std::optional<std::shared_ptr<Reference>> encounter;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Identifier>> identifier;
    std::optional<fhir_uri> implicit_rules;
    std::vector<fhir_canonical> instantiates_canonical;
    std::vector<fhir_uri> instantiates_uri;
    std::vector<std::shared_ptr<Reference>> insurance;
    fhir_code intent;
    std::optional<fhir_code> language;
    std::vector<std::shared_ptr<CodeableConcept>> location_code;
    std::vector<std::shared_ptr<Reference>> location_reference;
    std::optional<std::shared_ptr<Meta>> meta;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::vector<std::shared_ptr<Annotation>> note;
    using OCCURRENCE_Variant = std::variant<
        std::shared_ptr<fhir_dateTime>,
        std::shared_ptr<Period>,
        std::shared_ptr<Timing>
    >;
    OCCURRENCE_Variant occurrence;
    std::vector<std::shared_ptr<CodeableConcept>> order_detail;
    std::optional<fhir_string> patient_instruction;
    std::vector<std::shared_ptr<Reference>> performer;
    std::optional<std::shared_ptr<CodeableConcept>> performer_type;
    std::optional<fhir_code> priority;
    using QUANTITY_Variant = std::variant<
        std::shared_ptr<Quantity>,
        std::shared_ptr<Ratio>,
        std::shared_ptr<Range>
    >;
    QUANTITY_Variant quantity;
    std::vector<std::shared_ptr<CodeableConcept>> reason_code;
    std::vector<std::shared_ptr<Reference>> reason_reference;
    std::vector<std::shared_ptr<Reference>> relevant_history;
    std::vector<std::shared_ptr<Reference>> replaces;
    std::optional<std::shared_ptr<Reference>> requester;
    std::optional<std::shared_ptr<Identifier>> requisition;
    std::vector<std::shared_ptr<Reference>> specimen;
    fhir_code status;
    std::shared_ptr<Reference> subject;
    std::vector<std::shared_ptr<Reference>> supporting_info;
    std::optional<std::shared_ptr<Narrative>> text;
};

class Signature {
public:
    std::optional<fhir_base64Binary> data;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::optional<std::shared_ptr<Reference>> on_behalf_of;
    std::optional<fhir_code> sig_format;
    std::optional<fhir_code> target_format;
    fhir_instant when;
    std::shared_ptr<Reference> who;
};


class Slot {
public:
    std::optional<std::shared_ptr<CodeableConcept>> appointment_type;
    std::optional<fhir_string> comment;
    std::vector<std::shared_ptr<Resource>> contained;
    fhir_instant end;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Identifier>> identifier;
    std::optional<fhir_uri> implicit_rules;
    std::optional<fhir_code> language;
    std::optional<std::shared_ptr<Meta>> meta;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<fhir_boolean> overbooked;
    std::shared_ptr<Reference> schedule;
    std::vector<std::shared_ptr<CodeableConcept>> service_category;
    std::vector<std::shared_ptr<CodeableConcept>> service_type;
    std::vector<std::shared_ptr<CodeableConcept>> specialty;
    fhir_instant start;
    fhir_code status;
    std::optional<std::shared_ptr<Narrative>> text;
};

class Specimen {
public:
    std::optional<std::shared_ptr<Identifier>> accession_identifier;
    std::optional<std::shared_ptr<Specimen_Collection>> collection;
    std::vector<std::shared_ptr<CodeableConcept>> condition;
    std::vector<std::shared_ptr<Resource>> contained;
    std::vector<std::shared_ptr<Specimen_Container>> container;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Identifier>> identifier;
    std::optional<fhir_uri> implicit_rules;
    std::optional<fhir_code> language;
    std::optional<std::shared_ptr<Meta>> meta;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::vector<std::shared_ptr<Annotation>> note;
    std::vector<std::shared_ptr<Reference>> parent;
    std::vector<std::shared_ptr<Specimen_Processing>> processing;
    std::optional<fhir_dateTime> received_time;
    std::vector<std::shared_ptr<Reference>> request;
    std::optional<fhir_code> status;
    std::optional<std::shared_ptr<Reference>> subject;
    std::optional<std::shared_ptr<Narrative>> text;
    std::optional<std::shared_ptr<CodeableConcept>> type;
};

class Specimen_Collection {
public:
    std::optional<std::shared_ptr<CodeableConcept>> body_site;
    using COLLECTED_Variant = std::variant<
        std::shared_ptr<fhir_dateTime>,
        std::shared_ptr<Period>
    >;
    COLLECTED_Variant collected;
    std::optional<std::shared_ptr<Reference>> collector;
    std::optional<std::shared_ptr<Duration>> duration;
    std::vector<std::shared_ptr<Extension>> extension;
    using FASTING_STATUS_Variant = std::variant<
        std::shared_ptr<CodeableConcept>,
        std::shared_ptr<Duration>
    >;
    FASTING_STATUS_Variant fasting_status;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::optional<std::shared_ptr<CodeableConcept>> method;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<std::shared_ptr<Quantity>> quantity;
};

class Specimen_Container {
public:
    using ADDITIVE_Variant = std::variant<
        std::shared_ptr<CodeableConcept>,
        std::shared_ptr<Reference>
    >;
    ADDITIVE_Variant additive;
    std::optional<std::shared_ptr<Quantity>> capacity;
    std::optional<fhir_string> description;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Identifier>> identifier;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<std::shared_ptr<Quantity>> specimen_quantity;
    std::optional<std::shared_ptr<CodeableConcept>> type;
};

class Specimen_Processing {
public:
    std::vector<std::shared_ptr<Reference>> additive;
    std::optional<fhir_string> description;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<std::shared_ptr<CodeableConcept>> procedure;
    using TIME_Variant = std::variant<
        std::shared_ptr<fhir_dateTime>,
        std::shared_ptr<Period>
    >;
    TIME_Variant time_;
};

class SpecimenDefinition {
public:
    std::vector<std::shared_ptr<CodeableConcept>> collection;
    std::vector<std::shared_ptr<Resource>> contained;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::optional<std::shared_ptr<Identifier>> identifier;
    std::optional<fhir_uri> implicit_rules;
    std::optional<fhir_code> language;
    std::optional<std::shared_ptr<Meta>> meta;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::vector<std::shared_ptr<CodeableConcept>> patient_preparation;
    std::optional<std::shared_ptr<Narrative>> text;
    std::optional<fhir_string> time_aspect;
    std::optional<std::shared_ptr<CodeableConcept>> type_collected;
    std::vector<std::shared_ptr<SpecimenDefinition_TypeTested>> type_tested;
};

class SpecimenDefinition_TypeTested {
public:
    std::optional<std::shared_ptr<SpecimenDefinition_TypeTested_Container>> container;
    std::vector<std::shared_ptr<Extension>> extension;
    std::vector<std::shared_ptr<SpecimenDefinition_TypeTested_Handling>> handling;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::optional<fhir_boolean> is_derived;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    fhir_code preference;
    std::vector<std::shared_ptr<CodeableConcept>> rejection_criterion;
    std::optional<fhir_string> requirement;
    std::optional<std::shared_ptr<Duration>> retention_time;
    std::optional<std::shared_ptr<CodeableConcept>> type;
};

class SpecimenDefinition_TypeTested_Container {
public:
    std::vector<std::shared_ptr<SpecimenDefinition_TypeTested_Container_Additive>> additive;
    std::optional<std::shared_ptr<CodeableConcept>> cap;
    std::optional<std::shared_ptr<Quantity>> capacity;
    std::optional<fhir_string> description;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::optional<std::shared_ptr<CodeableConcept>> material;
    using MINIMUM_VOLUME_Variant = std::variant<
        std::shared_ptr<Quantity>,
        std::shared_ptr<fhir_string>
    >;
    MINIMUM_VOLUME_Variant minimum_volume;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<fhir_string> preparation;
    std::optional<std::shared_ptr<CodeableConcept>> type;
};

class SpecimenDefinition_TypeTested_Container_Additive {
public:
    using ADDITIVE_Variant = std::variant<
        std::shared_ptr<CodeableConcept>,
        std::shared_ptr<Reference>
    >;
    ADDITIVE_Variant additive;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
};

class SpecimenDefinition_TypeTested_Handling {
public:
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::optional<fhir_string> instruction;
    std::optional<std::shared_ptr<Duration>> max_duration;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<std::shared_ptr<CodeableConcept>> temperature_qualifier;
    std::optional<std::shared_ptr<Range>> temperature_range;
};

class StructureDefinition {
public:
    fhir_boolean abstract;
    std::optional<fhir_canonical> base_definition;
    std::vector<std::shared_ptr<ContactDetail>> contact;
    std::vector<std::shared_ptr<Resource>> contained;
    std::vector<std::shared_ptr<StructureDefinition_Context>> context;
    std::vector<fhir_string> context_invariant;
    std::optional<fhir_markdown> copyright;
    std::optional<fhir_dateTime> date_;
    std::optional<fhir_code> derivation;
    std::optional<fhir_markdown> description;
    std::optional<std::shared_ptr<StructureDefinition_Differential>> differential;
    std::optional<fhir_boolean> experimental;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<fhir_code> fhir_version;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Identifier>> identifier;
    std::optional<fhir_uri> implicit_rules;
    std::vector<std::shared_ptr<CodeableConcept>> jurisdiction;
    std::vector<std::shared_ptr<Coding>> keyword;
    fhir_code kind;
    std::optional<fhir_code> language;
    std::vector<std::shared_ptr<StructureDefinition_Mapping>> mapping;
    std::optional<std::shared_ptr<Meta>> meta;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    fhir_string name;
    std::optional<fhir_string> publisher;
    std::optional<fhir_markdown> purpose;
    std::optional<std::shared_ptr<StructureDefinition_Snapshot>> snapshot;
    fhir_code status;
    std::optional<std::shared_ptr<Narrative>> text;
    std::optional<fhir_string> title;
    fhir_uri type;
    fhir_uri url_;
    std::vector<std::shared_ptr<UsageContext>> use_context;
    std::optional<fhir_string> version;
};

class StructureDefinition_Context {
public:
    fhir_string expression;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    fhir_code type;
};

class StructureDefinition_Differential {
public:
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
};

class StructureDefinition_Mapping {
public:
    std::optional<fhir_string> comment;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    fhir_id identity;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<fhir_string> name;
    std::optional<fhir_uri> uri_;
};

class StructureDefinition_Snapshot {
public:
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
};

class StructureMap {
public:
    std::vector<std::shared_ptr<ContactDetail>> contact;
    std::vector<std::shared_ptr<Resource>> contained;
    std::optional<fhir_markdown> copyright;
    std::optional<fhir_dateTime> date_;
    std::optional<fhir_markdown> description;
    std::optional<fhir_boolean> experimental;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Identifier>> identifier;
    std::optional<fhir_uri> implicit_rules;
    std::vector<fhir_canonical> import;
    std::vector<std::shared_ptr<CodeableConcept>> jurisdiction;
    std::optional<fhir_code> language;
    std::optional<std::shared_ptr<Meta>> meta;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    fhir_string name;
    std::optional<fhir_string> publisher;
    std::optional<fhir_markdown> purpose;
    fhir_code status;
    std::vector<std::shared_ptr<StructureMap_Structure>> structure;
    std::optional<std::shared_ptr<Narrative>> text;
    std::optional<fhir_string> title;
    fhir_uri url_;
    std::vector<std::shared_ptr<UsageContext>> use_context;
    std::optional<fhir_string> version;
};

class StructureMap_Group {
public:
    std::optional<fhir_string> documentation;
    std::optional<fhir_id> extends;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    fhir_id name;
    fhir_code type_mode;
};

class StructureMap_Group_Input {
public:
    std::optional<fhir_string> documentation;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    fhir_code mode;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    fhir_id name;
    std::optional<fhir_string> type;
};

class StructureMap_Group_Rule {
public:
    std::vector<std::shared_ptr<StructureMap_Group_Rule_Dependent>> dependent;
    std::optional<fhir_string> documentation;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    fhir_id name;
    std::vector<std::shared_ptr<StructureMap_Group_Rule>> rule;
    std::vector<std::shared_ptr<StructureMap_Group_Rule_Target>> target;
};

class StructureMap_Group_Rule_Dependent {
public:
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    fhir_id name;
};

class StructureMap_Group_Rule_Source {
public:
    std::optional<fhir_string> check;
    std::optional<fhir_string> condition;
    fhir_id context;
    using DEFAULT_VALUE_Variant = std::variant<
        std::shared_ptr<fhir_base64Binary>,
        std::shared_ptr<fhir_boolean>,
        std::shared_ptr<fhir_canonical>,
        std::shared_ptr<fhir_code>,
        std::shared_ptr<fhir_date>,
        std::shared_ptr<fhir_dateTime>,
        std::shared_ptr<fhir_decimal>,
        std::shared_ptr<fhir_id>,
        std::shared_ptr<fhir_instant>,
        std::shared_ptr<fhir_integer>,
        std::shared_ptr<fhir_markdown>,
        std::shared_ptr<fhir_oid>,
        std::shared_ptr<fhir_positiveInt>,
        std::shared_ptr<fhir_string>,
        std::shared_ptr<fhir_time>,
        std::shared_ptr<fhir_unsignedInt>,
        std::shared_ptr<fhir_uri>,
        std::shared_ptr<fhir_url>,
        std::shared_ptr<fhir_uuid>,
        std::shared_ptr<Address>,
        std::shared_ptr<Age>,
        std::shared_ptr<Annotation>,
        std::shared_ptr<Attachment>,
        std::shared_ptr<CodeableConcept>,
        std::shared_ptr<Coding>,
        std::shared_ptr<ContactPoint>,
        std::shared_ptr<Count>,
        std::shared_ptr<Distance>,
        std::shared_ptr<Duration>,
        std::shared_ptr<HumanName>,
        std::shared_ptr<Identifier>,
        std::shared_ptr<Money>,
        std::shared_ptr<Period>,
        std::shared_ptr<Quantity>,
        std::shared_ptr<Range>,
        std::shared_ptr<Ratio>,
        std::shared_ptr<Reference>,
        std::shared_ptr<SampledData>,
        std::shared_ptr<Signature>,
        std::shared_ptr<Timing>,
        std::shared_ptr<ContactDetail>,
        std::shared_ptr<Contributor>,
        std::shared_ptr<DataRequirement>,
        std::shared_ptr<Expression>,
        std::shared_ptr<ParameterDefinition>,
        std::shared_ptr<RelatedArtifact>,
        std::shared_ptr<TriggerDefinition>,
        std::shared_ptr<UsageContext>,
        std::shared_ptr<Dosage>,
        std::shared_ptr<Meta>
    >;
    DEFAULT_VALUE_Variant default_value;
    std::optional<fhir_string> element;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::optional<fhir_code> list_mode;
    std::optional<fhir_string> log_message;
    std::optional<fhir_string> max;
    std::optional<fhir_integer> min;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<fhir_string> type;
    std::optional<fhir_id> variable;
};

class StructureMap_Group_Rule_Target {
public:
    std::optional<fhir_id> context;
    std::optional<fhir_code> context_type;
    std::optional<fhir_string> element;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<fhir_code> list_mode;
    std::optional<fhir_id> list_rule_id;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::vector<std::shared_ptr<StructureMap_Group_Rule_Target_Parameter>> parameter;
    std::optional<fhir_code> transform;
    std::optional<fhir_id> variable;
};

class StructureMap_Group_Rule_Target_Parameter {
public:
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    using VALUE_Variant = std::variant<
        std::shared_ptr<fhir_id>,
        std::shared_ptr<fhir_string>,
        std::shared_ptr<fhir_boolean>,
        std::shared_ptr<fhir_integer>,
        std::shared_ptr<fhir_decimal>
    >;
    VALUE_Variant value;
};

class StructureMap_Structure {
public:
    std::optional<fhir_string> alias;
    std::optional<fhir_string> documentation;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    fhir_code mode;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    fhir_canonical url_;
};

class Subscription {
public:
    std::shared_ptr<Subscription_Channel> channel;
    std::vector<std::shared_ptr<ContactPoint>> contact;
    std::vector<std::shared_ptr<Resource>> contained;
    fhir_string criteria;
    std::optional<fhir_instant> end;
    std::optional<fhir_string> error;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::optional<fhir_uri> implicit_rules;
    std::optional<fhir_code> language;
    std::optional<std::shared_ptr<Meta>> meta;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    fhir_string reason;
    fhir_code status;
    std::optional<std::shared_ptr<Narrative>> text;
};

class Subscription_Channel {
public:
    std::optional<fhir_url> endpoint;
    std::vector<std::shared_ptr<Extension>> extension;
    std::vector<fhir_string> header;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<fhir_code> payload;
    fhir_code type;
};

class Substance {
public:
    std::vector<std::shared_ptr<CodeableConcept>> category;
    std::shared_ptr<CodeableConcept> code_;
    std::vector<std::shared_ptr<Resource>> contained;
    std::optional<fhir_string> description;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Identifier>> identifier;
    std::optional<fhir_uri> implicit_rules;
    std::vector<std::shared_ptr<Substance_Ingredient>> ingredient;
    std::vector<std::shared_ptr<Substance_Instance>> instance;
    std::optional<fhir_code> language;
    std::optional<std::shared_ptr<Meta>> meta;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<fhir_code> status;
    std::optional<std::shared_ptr<Narrative>> text;
};

class Substance_Ingredient {
public:
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<std::shared_ptr<Ratio>> quantity;
    using SUBSTANCE_Variant = std::variant<
        std::shared_ptr<CodeableConcept>,
        std::shared_ptr<Reference>
    >;
    SUBSTANCE_Variant substance;
};

class Substance_Instance {
public:
    std::optional<fhir_dateTime> expiry;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::optional<std::shared_ptr<Identifier>> identifier;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<std::shared_ptr<Quantity>> quantity;
};

class SubstanceAmount {
public:
    std::optional<fhir_string> amount_text;
    std::optional<std::shared_ptr<CodeableConcept>> amount_type;
    using AMOUNT_Variant = std::variant<
        std::shared_ptr<Quantity>,
        std::shared_ptr<Range>,
        std::shared_ptr<fhir_string>
    >;
    AMOUNT_Variant amount;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<std::shared_ptr<SubstanceAmount_ReferenceRange>> reference_range;
};

class SubstanceAmount_ReferenceRange {
public:
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<Quantity>> high_limit;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::optional<std::shared_ptr<Quantity>> low_limit;
};

class SubstanceNucleicAcid {
public:
    std::optional<fhir_string> area_of_hybridisation;
    std::vector<std::shared_ptr<Resource>> contained;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::optional<fhir_uri> implicit_rules;
    std::optional<fhir_code> language;
    std::optional<std::shared_ptr<Meta>> meta;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<fhir_integer> number_of_subunits;
    std::optional<std::shared_ptr<CodeableConcept>> oligo_nucleotide_type;
    std::optional<std::shared_ptr<CodeableConcept>> sequence_type;
    std::vector<std::shared_ptr<SubstanceNucleicAcid_Subunit>> subunit;
    std::optional<std::shared_ptr<Narrative>> text;
};

class SubstanceNucleicAcid_Subunit {
public:
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<CodeableConcept>> five_prime;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::optional<fhir_integer> length;
    std::vector<std::shared_ptr<SubstanceNucleicAcid_Subunit_Linkage>> linkage;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<fhir_string> sequence;
    std::optional<std::shared_ptr<Attachment>> sequence_attachment;
    std::optional<fhir_integer> subunit;
    std::vector<std::shared_ptr<SubstanceNucleicAcid_Subunit_Sugar>> sugar;
    std::optional<std::shared_ptr<CodeableConcept>> three_prime;
};

class SubstanceNucleicAcid_Subunit_Linkage {
public:
    std::optional<fhir_string> connectivity;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::optional<std::shared_ptr<Identifier>> identifier;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<fhir_string> name;
    std::optional<fhir_string> residue_site;
};

class SubstanceNucleicAcid_Subunit_Sugar {
public:
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::optional<std::shared_ptr<Identifier>> identifier;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<fhir_string> name;
    std::optional<fhir_string> residue_site;
};

class SubstancePolymer {
public:
    std::optional<std::shared_ptr<CodeableConcept>> class_;
    std::vector<std::shared_ptr<Resource>> contained;
    std::vector<std::shared_ptr<CodeableConcept>> copolymer_connectivity;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<CodeableConcept>> geometry;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::optional<fhir_uri> implicit_rules;
    std::optional<fhir_code> language;
    std::optional<std::shared_ptr<Meta>> meta;
    std::vector<fhir_string> modification;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::vector<std::shared_ptr<SubstancePolymer_MonomerSet>> monomer_set;
    std::vector<std::shared_ptr<SubstancePolymer_Repeat>> repeat;
    std::optional<std::shared_ptr<Narrative>> text;
};

class SubstancePolymer_MonomerSet {
public:
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<std::shared_ptr<CodeableConcept>> ratio_type;
    std::vector<std::shared_ptr<SubstancePolymer_MonomerSet_StartingMaterial>> starting_material;
};

class SubstancePolymer_MonomerSet_StartingMaterial {
public:
    std::optional<std::shared_ptr<SubstanceAmount>> amount;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::optional<fhir_boolean> is_defining;
    std::optional<std::shared_ptr<CodeableConcept>> material;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<std::shared_ptr<CodeableConcept>> type;
};

class SubstancePolymer_Repeat {
public:
    std::optional<fhir_string> average_molecular_formula;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<fhir_integer> number_of_units;
    std::vector<std::shared_ptr<SubstancePolymer_Repeat_RepeatUnit>> repeat_unit;
    std::optional<std::shared_ptr<CodeableConcept>> repeat_unit_amount_type;
};

class SubstancePolymer_Repeat_RepeatUnit {
public:
    std::optional<std::shared_ptr<SubstanceAmount>> amount;
    std::vector<std::shared_ptr<SubstancePolymer_Repeat_RepeatUnit_DegreeOfPolymerisation>> degree_of_polymerisation;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<std::shared_ptr<CodeableConcept>> orientation_of_polymerisation;
    std::optional<fhir_string> repeat_unit;
    std::vector<std::shared_ptr<SubstancePolymer_Repeat_RepeatUnit_StructuralRepresentation>> structural_representation;
};

class SubstancePolymer_Repeat_RepeatUnit_DegreeOfPolymerisation {
public:
    std::optional<std::shared_ptr<SubstanceAmount>> amount;
    std::optional<std::shared_ptr<CodeableConcept>> degree;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
};

class SubstancePolymer_Repeat_RepeatUnit_StructuralRepresentation {
public:
    std::optional<std::shared_ptr<Attachment>> attachment;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<fhir_string> representation;
    std::optional<std::shared_ptr<CodeableConcept>> type;
};

class SubstanceProtein {
public:
    std::vector<std::shared_ptr<Resource>> contained;
    std::vector<fhir_string> disulfide_linkage;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::optional<fhir_uri> implicit_rules;
    std::optional<fhir_code> language;
    std::optional<std::shared_ptr<Meta>> meta;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<fhir_integer> number_of_subunits;
    std::optional<std::shared_ptr<CodeableConcept>> sequence_type;
    std::vector<std::shared_ptr<SubstanceProtein_Subunit>> subunit;
    std::optional<std::shared_ptr<Narrative>> text;
};

class SubstanceProtein_Subunit {
public:
    std::optional<fhir_string> c_terminal_modification;
    std::optional<std::shared_ptr<Identifier>> c_terminal_modification_id;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::optional<fhir_integer> length;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<fhir_string> n_terminal_modification;
    std::optional<std::shared_ptr<Identifier>> n_terminal_modification_id;
    std::optional<fhir_string> sequence;
    std::optional<std::shared_ptr<Attachment>> sequence_attachment;
    std::optional<fhir_integer> subunit;
};

class SubstanceReferenceInformation {
public:
    std::vector<std::shared_ptr<SubstanceReferenceInformation_Classification>> classification;
    std::optional<fhir_string> comment;
    std::vector<std::shared_ptr<Resource>> contained;
    std::vector<std::shared_ptr<Extension>> extension;
    std::vector<std::shared_ptr<SubstanceReferenceInformation_Gene>> gene;
    std::vector<std::shared_ptr<SubstanceReferenceInformation_GeneElement>> gene_element;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::optional<fhir_uri> implicit_rules;
    std::optional<fhir_code> language;
    std::optional<std::shared_ptr<Meta>> meta;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::vector<std::shared_ptr<SubstanceReferenceInformation_Target>> target;
    std::optional<std::shared_ptr<Narrative>> text;
};

class SubstanceReferenceInformation_Classification {
public:
    std::optional<std::shared_ptr<CodeableConcept>> classification;
    std::optional<std::shared_ptr<CodeableConcept>> domain;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::vector<std::shared_ptr<Reference>> source;
    std::vector<std::shared_ptr<CodeableConcept>> subtype;
};

class SubstanceReferenceInformation_Gene {
public:
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<CodeableConcept>> gene;
    std::optional<std::shared_ptr<CodeableConcept>> gene_sequence_origin;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::vector<std::shared_ptr<Reference>> source;
};

class SubstanceReferenceInformation_GeneElement {
public:
    std::optional<std::shared_ptr<Identifier>> element;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::vector<std::shared_ptr<Reference>> source;
    std::optional<std::shared_ptr<CodeableConcept>> type;
};

class SubstanceReferenceInformation_Target {
public:
    std::optional<std::shared_ptr<CodeableConcept>> amount_type;
    using AMOUNT_Variant = std::variant<
        std::shared_ptr<Quantity>,
        std::shared_ptr<Range>,
        std::shared_ptr<fhir_string>
    >;
    AMOUNT_Variant amount;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::optional<std::shared_ptr<CodeableConcept>> interaction;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<std::shared_ptr<CodeableConcept>> organism;
    std::optional<std::shared_ptr<CodeableConcept>> organism_type;
    std::vector<std::shared_ptr<Reference>> source;
    std::optional<std::shared_ptr<Identifier>> target;
    std::optional<std::shared_ptr<CodeableConcept>> type;
};

class SubstanceSourceMaterial {
public:
    std::vector<std::shared_ptr<Resource>> contained;
    std::vector<std::shared_ptr<CodeableConcept>> country_of_origin;
    std::optional<std::shared_ptr<CodeableConcept>> development_stage;
    std::vector<std::shared_ptr<Extension>> extension;
    std::vector<std::shared_ptr<SubstanceSourceMaterial_FractionDescription>> fraction_description;
    std::vector<fhir_string> geographical_location;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::optional<fhir_uri> implicit_rules;
    std::optional<fhir_code> language;
    std::optional<std::shared_ptr<Meta>> meta;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<std::shared_ptr<SubstanceSourceMaterial_Organism>> organism;
    std::optional<std::shared_ptr<Identifier>> organism_id;
    std::optional<fhir_string> organism_name;
    std::vector<std::shared_ptr<Identifier>> parent_substance_id;
    std::vector<fhir_string> parent_substance_name;
    std::vector<std::shared_ptr<SubstanceSourceMaterial_PartDescription>> part_description;
    std::optional<std::shared_ptr<CodeableConcept>> source_material_class;
    std::optional<std::shared_ptr<CodeableConcept>> source_material_state;
    std::optional<std::shared_ptr<CodeableConcept>> source_material_type;
    std::optional<std::shared_ptr<Narrative>> text;
};

class SubstanceSourceMaterial_FractionDescription {
public:
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<fhir_string> fraction;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::optional<std::shared_ptr<CodeableConcept>> material_type;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
};

class SubstanceSourceMaterial_Organism {
public:
    std::vector<std::shared_ptr<SubstanceSourceMaterial_Organism_Author>> author;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<CodeableConcept>> family;
    std::optional<std::shared_ptr<CodeableConcept>> genus;
    std::optional<std::shared_ptr<SubstanceSourceMaterial_Organism_Hybrid>> hybrid;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::optional<fhir_string> intraspecific_description;
    std::optional<std::shared_ptr<CodeableConcept>> intraspecific_type;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<std::shared_ptr<SubstanceSourceMaterial_Organism_OrganismGeneral>> organism_general;
    std::optional<std::shared_ptr<CodeableConcept>> species;
};

class SubstanceSourceMaterial_Organism_Author {
public:
    std::optional<fhir_string> author_description;
    std::optional<std::shared_ptr<CodeableConcept>> author_type;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
};

class SubstanceSourceMaterial_Organism_Hybrid {
public:
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<CodeableConcept>> hybrid_type;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::optional<fhir_string> maternal_organism_id;
    std::optional<fhir_string> maternal_organism_name;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<fhir_string> paternal_organism_id;
    std::optional<fhir_string> paternal_organism_name;
};

class SubstanceSourceMaterial_Organism_OrganismGeneral {
public:
    std::optional<std::shared_ptr<CodeableConcept>> class_;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::optional<std::shared_ptr<CodeableConcept>> kingdom;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<std::shared_ptr<CodeableConcept>> order;
    std::optional<std::shared_ptr<CodeableConcept>> phylum;
};

class SubstanceSourceMaterial_PartDescription {
public:
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<std::shared_ptr<CodeableConcept>> part;
    std::optional<std::shared_ptr<CodeableConcept>> part_location;
};

class SubstanceSpecification {
public:
    std::vector<std::shared_ptr<SubstanceSpecification_Code>> code_;
    std::optional<fhir_string> comment;
    std::vector<std::shared_ptr<Resource>> contained;
    std::optional<fhir_string> description;
    std::optional<std::shared_ptr<CodeableConcept>> domain;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::optional<std::shared_ptr<Identifier>> identifier;
    std::optional<fhir_uri> implicit_rules;
    std::optional<fhir_code> language;
    std::optional<std::shared_ptr<Meta>> meta;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::vector<std::shared_ptr<SubstanceSpecification_Moiety>> moiety;
    std::vector<std::shared_ptr<SubstanceSpecification_Structure_Isotope_MolecularWeight>> molecular_weight;
    std::vector<std::shared_ptr<SubstanceSpecification_Name>> name;
    std::optional<std::shared_ptr<Reference>> nucleic_acid;
    std::optional<std::shared_ptr<Reference>> polymer;
    std::vector<std::shared_ptr<SubstanceSpecification_Property>> property;
    std::optional<std::shared_ptr<Reference>> protein;
    std::optional<std::shared_ptr<Reference>> reference_information;
    std::vector<std::shared_ptr<SubstanceSpecification_Relationship>> relationship;
    std::vector<std::shared_ptr<Reference>> source;
    std::optional<std::shared_ptr<Reference>> source_material;
    std::optional<std::shared_ptr<CodeableConcept>> status;
    std::optional<std::shared_ptr<SubstanceSpecification_Structure>> structure;
    std::optional<std::shared_ptr<Narrative>> text;
    std::optional<std::shared_ptr<CodeableConcept>> type;
};

class SubstanceSpecification_Code {
public:
    std::optional<std::shared_ptr<CodeableConcept>> code_;
    std::optional<fhir_string> comment;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::vector<std::shared_ptr<Reference>> source;
    std::optional<std::shared_ptr<CodeableConcept>> status;
    std::optional<fhir_dateTime> status_date;
};

class SubstanceSpecification_Moiety {
public:
    using AMOUNT_Variant = std::variant<
        std::shared_ptr<Quantity>,
        std::shared_ptr<fhir_string>
    >;
    AMOUNT_Variant amount;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::optional<std::shared_ptr<Identifier>> identifier;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<fhir_string> molecular_formula;
    std::optional<fhir_string> name;
    std::optional<std::shared_ptr<CodeableConcept>> optical_activity;
    std::optional<std::shared_ptr<CodeableConcept>> role;
    std::optional<std::shared_ptr<CodeableConcept>> stereochemistry;
};

class SubstanceSpecification_Name {
public:
    std::vector<std::shared_ptr<CodeableConcept>> domain;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<CodeableConcept>> jurisdiction;
    std::vector<std::shared_ptr<CodeableConcept>> language;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    fhir_string name;
    std::vector<std::shared_ptr<SubstanceSpecification_Name_Official>> official;
    std::optional<fhir_boolean> preferred;
    std::vector<std::shared_ptr<Reference>> source;
    std::optional<std::shared_ptr<CodeableConcept>> status;
    std::vector<std::shared_ptr<SubstanceSpecification_Name>> synonym;
    std::vector<std::shared_ptr<SubstanceSpecification_Name>> translation;
    std::optional<std::shared_ptr<CodeableConcept>> type;
};

class SubstanceSpecification_Name_Official {
public:
    std::optional<std::shared_ptr<CodeableConcept>> authority;
    std::optional<fhir_dateTime> date_;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<std::shared_ptr<CodeableConcept>> status;
};

class SubstanceSpecification_Property {
public:
    using AMOUNT_Variant = std::variant<
        std::shared_ptr<Quantity>,
        std::shared_ptr<fhir_string>
    >;
    AMOUNT_Variant amount;
    std::optional<std::shared_ptr<CodeableConcept>> category;
    std::optional<std::shared_ptr<CodeableConcept>> code_;
    using DEFINING_SUBSTANCE_Variant = std::variant<
        std::shared_ptr<Reference>,
        std::shared_ptr<CodeableConcept>
    >;
    DEFINING_SUBSTANCE_Variant defining_substance;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<fhir_string> parameters;
};

class SubstanceSpecification_Relationship {
public:
    std::optional<std::shared_ptr<Ratio>> amount_ratio_low_limit;
    std::optional<std::shared_ptr<CodeableConcept>> amount_type;
    using AMOUNT_Variant = std::variant<
        std::shared_ptr<Quantity>,
        std::shared_ptr<Range>,
        std::shared_ptr<Ratio>,
        std::shared_ptr<fhir_string>
    >;
    AMOUNT_Variant amount;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::optional<fhir_boolean> is_defining;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<std::shared_ptr<CodeableConcept>> relationship;
    std::vector<std::shared_ptr<Reference>> source;
    using SUBSTANCE_Variant = std::variant<
        std::shared_ptr<Reference>,
        std::shared_ptr<CodeableConcept>
    >;
    SUBSTANCE_Variant substance;
};

class SubstanceSpecification_Structure {
public:
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<SubstanceSpecification_Structure_Isotope>> isotope;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<fhir_string> molecular_formula;
    std::optional<fhir_string> molecular_formula_by_moiety;
    std::optional<std::shared_ptr<SubstanceSpecification_Structure_Isotope_MolecularWeight>> molecular_weight;
    std::optional<std::shared_ptr<CodeableConcept>> optical_activity;
    std::vector<std::shared_ptr<SubstanceSpecification_Structure_Representation>> representation;
    std::vector<std::shared_ptr<Reference>> source;
    std::optional<std::shared_ptr<CodeableConcept>> stereochemistry;
};

class SubstanceSpecification_Structure_Isotope {
public:
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<Quantity>> half_life;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::optional<std::shared_ptr<Identifier>> identifier;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<std::shared_ptr<SubstanceSpecification_Structure_Isotope_MolecularWeight>> molecular_weight;
    std::optional<std::shared_ptr<CodeableConcept>> name;
    std::optional<std::shared_ptr<CodeableConcept>> substitution;
};

class SubstanceSpecification_Structure_Isotope_MolecularWeight {
public:
    std::optional<std::shared_ptr<Quantity>> amount;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::optional<std::shared_ptr<CodeableConcept>> method;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<std::shared_ptr<CodeableConcept>> type;
};

class SubstanceSpecification_Structure_Representation {
public:
    std::optional<std::shared_ptr<Attachment>> attachment;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<fhir_string> representation;
    std::optional<std::shared_ptr<CodeableConcept>> type;
};

class SupplyDelivery {
public:
    std::vector<std::shared_ptr<Reference>> based_on;
    std::vector<std::shared_ptr<Resource>> contained;
    std::optional<std::shared_ptr<Reference>> destination;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Identifier>> identifier;
    std::optional<fhir_uri> implicit_rules;
    std::optional<fhir_code> language;
    std::optional<std::shared_ptr<Meta>> meta;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    using OCCURRENCE_Variant = std::variant<
        std::shared_ptr<fhir_dateTime>,
        std::shared_ptr<Period>,
        std::shared_ptr<Timing>
    >;
    OCCURRENCE_Variant occurrence;
    std::vector<std::shared_ptr<Reference>> part_of;
    std::optional<std::shared_ptr<Reference>> patient;
    std::vector<std::shared_ptr<Reference>> receiver;
    std::optional<fhir_code> status;
    std::optional<std::shared_ptr<SupplyDelivery_SuppliedItem>> supplied_item;
    std::optional<std::shared_ptr<Reference>> supplier;
    std::optional<std::shared_ptr<Narrative>> text;
    std::optional<std::shared_ptr<CodeableConcept>> type;
};

class SupplyDelivery_SuppliedItem {
public:
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    using ITEM_Variant = std::variant<
        std::shared_ptr<CodeableConcept>,
        std::shared_ptr<Reference>
    >;
    ITEM_Variant item;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<std::shared_ptr<Quantity>> quantity;
};

class SupplyRequest {
public:
    std::optional<fhir_dateTime> authored_on;
    std::optional<std::shared_ptr<CodeableConcept>> category;
    std::vector<std::shared_ptr<Resource>> contained;
    std::optional<std::shared_ptr<Reference>> deliver_from;
    std::optional<std::shared_ptr<Reference>> deliver_to;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Identifier>> identifier;
    std::optional<fhir_uri> implicit_rules;
    using ITEM_Variant = std::variant<
        std::shared_ptr<CodeableConcept>,
        std::shared_ptr<Reference>
    >;
    ITEM_Variant item;
    std::optional<fhir_code> language;
    std::optional<std::shared_ptr<Meta>> meta;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    using OCCURRENCE_Variant = std::variant<
        std::shared_ptr<fhir_dateTime>,
        std::shared_ptr<Period>,
        std::shared_ptr<Timing>
    >;
    OCCURRENCE_Variant occurrence;
    std::vector<std::shared_ptr<SupplyRequest_Parameter>> parameter;
    std::optional<fhir_code> priority;
    std::shared_ptr<Quantity> quantity;
    std::vector<std::shared_ptr<CodeableConcept>> reason_code;
    std::vector<std::shared_ptr<Reference>> reason_reference;
    std::optional<std::shared_ptr<Reference>> requester;
    std::optional<fhir_code> status;
    std::vector<std::shared_ptr<Reference>> supplier;
    std::optional<std::shared_ptr<Narrative>> text;
};

class SupplyRequest_Parameter {
public:
    std::optional<std::shared_ptr<CodeableConcept>> code_;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    using VALUE_Variant = std::variant<
        std::shared_ptr<CodeableConcept>,
        std::shared_ptr<Quantity>,
        std::shared_ptr<Range>,
        std::shared_ptr<fhir_boolean>
    >;
    VALUE_Variant value;
};

class Task {
public:
    std::optional<fhir_dateTime> authored_on;
    std::vector<std::shared_ptr<Reference>> based_on;
    std::optional<std::shared_ptr<CodeableConcept>> business_status;
    std::optional<std::shared_ptr<CodeableConcept>> code_;
    std::vector<std::shared_ptr<Resource>> contained;
    std::optional<fhir_string> description;
    std::optional<std::shared_ptr<Reference>> encounter;
    std::optional<std::shared_ptr<Period>> execution_period;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<Reference>> focus;
    std::optional<std::shared_ptr<Reference>> for_;
    std::optional<std::shared_ptr<Identifier>> group_identifier;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Identifier>> identifier;
    std::optional<fhir_uri> implicit_rules;
    std::vector<std::shared_ptr<Task_Input>> input;
    std::optional<fhir_canonical> instantiates_canonical;
    std::optional<fhir_uri> instantiates_uri;
    std::vector<std::shared_ptr<Reference>> insurance;
    fhir_code intent;
    std::optional<fhir_code> language;
    std::optional<fhir_dateTime> last_modified;
    std::optional<std::shared_ptr<Reference>> location;
    std::optional<std::shared_ptr<Meta>> meta;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::vector<std::shared_ptr<Annotation>> note;
    std::vector<std::shared_ptr<Task_Output>> output;
    std::optional<std::shared_ptr<Reference>> owner;
    std::vector<std::shared_ptr<Reference>> part_of;
    std::vector<std::shared_ptr<CodeableConcept>> performer_type;
    std::optional<fhir_code> priority;
    std::optional<std::shared_ptr<CodeableConcept>> reason_code;
    std::optional<std::shared_ptr<Reference>> reason_reference;
    std::vector<std::shared_ptr<Reference>> relevant_history;
    std::optional<std::shared_ptr<Reference>> requester;
    std::optional<std::shared_ptr<Task_Restriction>> restriction;
    fhir_code status;
    std::optional<std::shared_ptr<CodeableConcept>> status_reason;
    std::optional<std::shared_ptr<Narrative>> text;
};

class Task_Input {
public:
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::shared_ptr<CodeableConcept> type;
    using VALUE_Variant = std::variant<
        std::shared_ptr<fhir_base64Binary>,
        std::shared_ptr<fhir_boolean>,
        std::shared_ptr<fhir_canonical>,
        std::shared_ptr<fhir_code>,
        std::shared_ptr<fhir_date>,
        std::shared_ptr<fhir_dateTime>,
        std::shared_ptr<fhir_decimal>,
        std::shared_ptr<fhir_id>,
        std::shared_ptr<fhir_instant>,
        std::shared_ptr<fhir_integer>,
        std::shared_ptr<fhir_markdown>,
        std::shared_ptr<fhir_oid>,
        std::shared_ptr<fhir_positiveInt>,
        std::shared_ptr<fhir_string>,
        std::shared_ptr<fhir_time>,
        std::shared_ptr<fhir_unsignedInt>,
        std::shared_ptr<fhir_uri>,
        std::shared_ptr<fhir_url>,
        std::shared_ptr<fhir_uuid>,
        std::shared_ptr<Address>,
        std::shared_ptr<Age>,
        std::shared_ptr<Annotation>,
        std::shared_ptr<Attachment>,
        std::shared_ptr<CodeableConcept>,
        std::shared_ptr<Coding>,
        std::shared_ptr<ContactPoint>,
        std::shared_ptr<Count>,
        std::shared_ptr<Distance>,
        std::shared_ptr<Duration>,
        std::shared_ptr<HumanName>,
        std::shared_ptr<Identifier>,
        std::shared_ptr<Money>,
        std::shared_ptr<Period>,
        std::shared_ptr<Quantity>,
        std::shared_ptr<Range>,
        std::shared_ptr<Ratio>,
        std::shared_ptr<Reference>,
        std::shared_ptr<SampledData>,
        std::shared_ptr<Signature>,
        std::shared_ptr<Timing>,
        std::shared_ptr<ContactDetail>,
        std::shared_ptr<Contributor>,
        std::shared_ptr<DataRequirement>,
        std::shared_ptr<Expression>,
        std::shared_ptr<ParameterDefinition>,
        std::shared_ptr<RelatedArtifact>,
        std::shared_ptr<TriggerDefinition>,
        std::shared_ptr<UsageContext>,
        std::shared_ptr<Dosage>,
        std::shared_ptr<Meta>
    >;
    VALUE_Variant value;
};

class Task_Output {
public:
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::shared_ptr<CodeableConcept> type;
    using VALUE_Variant = std::variant<
        std::shared_ptr<fhir_base64Binary>,
        std::shared_ptr<fhir_boolean>,
        std::shared_ptr<fhir_canonical>,
        std::shared_ptr<fhir_code>,
        std::shared_ptr<fhir_date>,
        std::shared_ptr<fhir_dateTime>,
        std::shared_ptr<fhir_decimal>,
        std::shared_ptr<fhir_id>,
        std::shared_ptr<fhir_instant>,
        std::shared_ptr<fhir_integer>,
        std::shared_ptr<fhir_markdown>,
        std::shared_ptr<fhir_oid>,
        std::shared_ptr<fhir_positiveInt>,
        std::shared_ptr<fhir_string>,
        std::shared_ptr<fhir_time>,
        std::shared_ptr<fhir_unsignedInt>,
        std::shared_ptr<fhir_uri>,
        std::shared_ptr<fhir_url>,
        std::shared_ptr<fhir_uuid>,
        std::shared_ptr<Address>,
        std::shared_ptr<Age>,
        std::shared_ptr<Annotation>,
        std::shared_ptr<Attachment>,
        std::shared_ptr<CodeableConcept>,
        std::shared_ptr<Coding>,
        std::shared_ptr<ContactPoint>,
        std::shared_ptr<Count>,
        std::shared_ptr<Distance>,
        std::shared_ptr<Duration>,
        std::shared_ptr<HumanName>,
        std::shared_ptr<Identifier>,
        std::shared_ptr<Money>,
        std::shared_ptr<Period>,
        std::shared_ptr<Quantity>,
        std::shared_ptr<Range>,
        std::shared_ptr<Ratio>,
        std::shared_ptr<Reference>,
        std::shared_ptr<SampledData>,
        std::shared_ptr<Signature>,
        std::shared_ptr<Timing>,
        std::shared_ptr<ContactDetail>,
        std::shared_ptr<Contributor>,
        std::shared_ptr<DataRequirement>,
        std::shared_ptr<Expression>,
        std::shared_ptr<ParameterDefinition>,
        std::shared_ptr<RelatedArtifact>,
        std::shared_ptr<TriggerDefinition>,
        std::shared_ptr<UsageContext>,
        std::shared_ptr<Dosage>,
        std::shared_ptr<Meta>
    >;
    VALUE_Variant value;
};

class Task_Restriction {
public:
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<std::shared_ptr<Period>> period;
    std::vector<std::shared_ptr<Reference>> recipient;
    std::optional<fhir_positiveInt> repetitions;
};

class TerminologyCapabilities {
public:
    std::optional<std::shared_ptr<TerminologyCapabilities_Closure>> closure;
    std::optional<fhir_code> code_search;
    std::vector<std::shared_ptr<TerminologyCapabilities_CodeSystem>> code_system;
    std::vector<std::shared_ptr<ContactDetail>> contact;
    std::vector<std::shared_ptr<Resource>> contained;
    std::optional<fhir_markdown> copyright;
    fhir_dateTime date_;
    std::optional<fhir_markdown> description;
    std::optional<std::shared_ptr<TerminologyCapabilities_Expansion>> expansion;
    std::optional<fhir_boolean> experimental;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::optional<std::shared_ptr<TerminologyCapabilities_Implementation>> implementation;
    std::optional<fhir_uri> implicit_rules;
    std::vector<std::shared_ptr<CodeableConcept>> jurisdiction;
    fhir_code kind;
    std::optional<fhir_code> language;
    std::optional<fhir_boolean> locked_date;
    std::optional<std::shared_ptr<Meta>> meta;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<fhir_string> name;
    std::optional<fhir_string> publisher;
    std::optional<fhir_markdown> purpose;
    std::optional<std::shared_ptr<TerminologyCapabilities_Software>> software;
    fhir_code status;
    std::optional<std::shared_ptr<Narrative>> text;
    std::optional<fhir_string> title;
    std::optional<std::shared_ptr<TerminologyCapabilities_Translation>> translation;
    std::optional<fhir_uri> url_;
    std::vector<std::shared_ptr<UsageContext>> use_context;
    std::optional<std::shared_ptr<TerminologyCapabilities_ValidateCode>> validate_code;
    std::optional<fhir_string> version;
};

class TerminologyCapabilities_Closure {
public:
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<fhir_boolean> translation;
};

class TerminologyCapabilities_CodeSystem {
public:
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<fhir_boolean> subsumption;
    std::optional<fhir_canonical> uri_;
    std::vector<std::shared_ptr<TerminologyCapabilities_CodeSystem_Version>> version;
};

class TerminologyCapabilities_CodeSystem_Version {
public:
    std::optional<fhir_string> code_;
    std::optional<fhir_boolean> compositional;
    std::vector<std::shared_ptr<Extension>> extension;
    std::vector<std::shared_ptr<TerminologyCapabilities_CodeSystem_Version_Filter>> filter;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::optional<fhir_boolean> is_default;
    std::vector<fhir_code> language;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::vector<fhir_code> property;
};

class TerminologyCapabilities_CodeSystem_Version_Filter {
public:
    fhir_code code_;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
};

class TerminologyCapabilities_Expansion {
public:
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<fhir_boolean> hierarchical;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::optional<fhir_boolean> incomplete;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<fhir_boolean> paging;
    std::vector<std::shared_ptr<TerminologyCapabilities_Expansion_Parameter>> parameter;
    std::optional<fhir_markdown> text_filter;
};

class TerminologyCapabilities_Expansion_Parameter {
public:
    std::optional<fhir_string> documentation;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    fhir_code name;
};

class TerminologyCapabilities_Implementation {
public:
    fhir_string description;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<fhir_url> url_;
};

class TerminologyCapabilities_Software {
public:
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    fhir_string name;
    std::optional<fhir_string> version;
};

class TerminologyCapabilities_Translation {
public:
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    fhir_boolean needs_map;
};

class TerminologyCapabilities_ValidateCode {
public:
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    fhir_boolean translations;
};

class TestReport {
public:
    std::vector<std::shared_ptr<Resource>> contained;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::optional<std::shared_ptr<Identifier>> identifier;
    std::optional<fhir_uri> implicit_rules;
    std::optional<fhir_dateTime> issued;
    std::optional<fhir_code> language;
    std::optional<std::shared_ptr<Meta>> meta;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<fhir_string> name;
    std::vector<std::shared_ptr<TestReport_Participant>> participant;
    fhir_code result;
    std::optional<fhir_decimal> score;
    std::optional<std::shared_ptr<TestReport_Setup>> setup;
    fhir_code status;
    std::optional<std::shared_ptr<TestReport_Teardown>> teardown;
    std::vector<std::shared_ptr<TestReport_Test>> test;
    std::shared_ptr<Reference> test_script;
    std::optional<fhir_string> tester;
    std::optional<std::shared_ptr<Narrative>> text;
};

class TestReport_Participant {
public:
    std::optional<fhir_string> display;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    fhir_code type;
    fhir_uri uri_;
};

class TestReport_Setup {
public:
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
};

class TestReport_Setup_Action {
public:
    std::optional<std::shared_ptr<TestReport_Setup_Action_Assert>> assert;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<std::shared_ptr<TestReport_Setup_Action_Operation>> operation;
};

class TestReport_Setup_Action_Assert {
public:
    std::optional<fhir_string> detail;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::optional<fhir_markdown> message;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    fhir_code result;
};

class TestReport_Setup_Action_Operation {
public:
    std::optional<fhir_uri> detail;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::optional<fhir_markdown> message;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    fhir_code result;
};

class TestReport_Teardown {
public:
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
};

class TestReport_Teardown_Action {
public:
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::shared_ptr<TestReport_Setup_Action_Operation> operation;
};

class TestReport_Test {
public:
    std::optional<fhir_string> description;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<fhir_string> name;
};

class TestReport_Test_Action {
public:
    std::optional<std::shared_ptr<TestReport_Setup_Action_Assert>> assert;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<std::shared_ptr<TestReport_Setup_Action_Operation>> operation;
};

class TestScript {
public:
    std::vector<std::shared_ptr<ContactDetail>> contact;
    std::vector<std::shared_ptr<Resource>> contained;
    std::optional<fhir_markdown> copyright;
    std::optional<fhir_dateTime> date_;
    std::optional<fhir_markdown> description;
    std::vector<std::shared_ptr<TestScript_Destination>> destination;
    std::optional<fhir_boolean> experimental;
    std::vector<std::shared_ptr<Extension>> extension;
    std::vector<std::shared_ptr<TestScript_Fixture>> fixture;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::optional<std::shared_ptr<Identifier>> identifier;
    std::optional<fhir_uri> implicit_rules;
    std::vector<std::shared_ptr<CodeableConcept>> jurisdiction;
    std::optional<fhir_code> language;
    std::optional<std::shared_ptr<Meta>> meta;
    std::optional<std::shared_ptr<TestScript_Metadata>> metadata;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    fhir_string name;
    std::vector<std::shared_ptr<TestScript_Origin>> origin;
    std::vector<std::shared_ptr<Reference>> profile;
    std::optional<fhir_string> publisher;
    std::optional<fhir_markdown> purpose;
    std::optional<std::shared_ptr<TestScript_Setup>> setup;
    fhir_code status;
    std::optional<std::shared_ptr<TestScript_Teardown>> teardown;
    std::vector<std::shared_ptr<TestScript_Test>> test;
    std::optional<std::shared_ptr<Narrative>> text;
    std::optional<fhir_string> title;
    fhir_uri url_;
    std::vector<std::shared_ptr<UsageContext>> use_context;
    std::vector<std::shared_ptr<TestScript_Variable>> variable;
    std::optional<fhir_string> version;
};

class TestScript_Destination {
public:
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    fhir_integer index;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::shared_ptr<Coding> profile;
};

class TestScript_Fixture {
public:
    fhir_boolean autocreate;
    fhir_boolean autodelete;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<std::shared_ptr<Reference>> resource;
};

class TestScript_Metadata {
public:
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<TestScript_Metadata_Link>> link;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
};

class TestScript_Metadata_Capability {
public:
    fhir_canonical capabilities;
    std::optional<fhir_string> description;
    std::optional<fhir_integer> destination;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<fhir_uri> link;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::vector<fhir_integer> origin;
    fhir_boolean required;
    fhir_boolean validated;
};

class TestScript_Metadata_Link {
public:
    std::optional<fhir_string> description;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    fhir_uri url_;
};

class TestScript_Origin {
public:
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    fhir_integer index;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::shared_ptr<Coding> profile;
};

class TestScript_Setup {
public:
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
};

class TestScript_Setup_Action {
public:
    std::optional<std::shared_ptr<TestScript_Setup_Action_Assert>> assert;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<std::shared_ptr<TestScript_Setup_Action_Operation>> operation;
};

class TestScript_Setup_Action_Assert {
public:
    std::optional<fhir_string> compare_to_source_expression;
    std::optional<fhir_string> compare_to_source_id;
    std::optional<fhir_string> compare_to_source_path;
    std::optional<fhir_code> content_type;
    std::optional<fhir_string> description;
    std::optional<fhir_code> direction;
    std::optional<fhir_string> expression;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<fhir_string> header_field;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::optional<fhir_string> label;
    std::optional<fhir_string> minimum_id;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<fhir_boolean> navigation_links;
    std::optional<fhir_code> operator_;
    std::optional<fhir_string> path;
    std::optional<fhir_code> request_method;
    std::optional<fhir_string> request_u_r_l;
    std::optional<fhir_code> resource;
    std::optional<fhir_code> response;
    std::optional<fhir_string> response_code;
    std::optional<fhir_id> source_id;
    std::optional<fhir_id> validate_profile_id;
    std::optional<fhir_string> value;
    fhir_boolean warning_only;
};

class TestScript_Setup_Action_Operation {
public:
    std::optional<fhir_code> accept;
    std::optional<fhir_code> content_type;
    std::optional<fhir_string> description;
    std::optional<fhir_integer> destination;
    fhir_boolean encode_request_url;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::optional<fhir_string> label;
    std::optional<fhir_code> method;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<fhir_integer> origin;
    std::optional<fhir_string> params;
    std::vector<std::shared_ptr<TestScript_Setup_Action_Operation_RequestHeader>> request_header;
    std::optional<fhir_id> request_id;
    std::optional<fhir_code> resource;
    std::optional<fhir_id> response_id;
    std::optional<fhir_id> source_id;
    std::optional<fhir_id> target_id;
    std::optional<std::shared_ptr<Coding>> type;
    std::optional<fhir_string> url_;
};

class TestScript_Setup_Action_Operation_RequestHeader {
public:
    std::vector<std::shared_ptr<Extension>> extension;
    fhir_string field;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    fhir_string value;
};

class TestScript_Teardown {
public:
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
};

class TestScript_Teardown_Action {
public:
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::shared_ptr<TestScript_Setup_Action_Operation> operation;
};

class TestScript_Test {
public:
    std::optional<fhir_string> description;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<fhir_string> name;
};

class TestScript_Test_Action {
public:
    std::optional<std::shared_ptr<TestScript_Setup_Action_Assert>> assert;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<std::shared_ptr<TestScript_Setup_Action_Operation>> operation;
};

class TestScript_Variable {
public:
    std::optional<fhir_string> default_value;
    std::optional<fhir_string> description;
    std::optional<fhir_string> expression;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<fhir_string> header_field;
    std::optional<fhir_string> hint;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    fhir_string name;
    std::optional<fhir_string> path;
    std::optional<fhir_id> source_id;
};

class Timing {
public:
    std::optional<std::shared_ptr<CodeableConcept>> code_;
    std::vector<fhir_dateTime> event;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<std::shared_ptr<Timing_Repeat>> repeat;
};

class Timing_Repeat {
public:
    using BOUNDS_Variant = std::variant<
        std::shared_ptr<Duration>,
        std::shared_ptr<Range>,
        std::shared_ptr<Period>
    >;
    BOUNDS_Variant bounds;
    std::optional<fhir_positiveInt> count;
    std::optional<fhir_positiveInt> count_max;
    std::vector<fhir_code> day_of_week;
    std::optional<fhir_decimal> duration;
    std::optional<fhir_decimal> duration_max;
    std::optional<fhir_code> duration_unit;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<fhir_positiveInt> frequency;
    std::optional<fhir_positiveInt> frequency_max;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::optional<fhir_unsignedInt> offset;
    std::optional<fhir_decimal> period;
    std::optional<fhir_decimal> period_max;
    std::optional<fhir_code> period_unit;
    std::vector<fhir_time> time_of_day;
    std::vector<fhir_code> when;
};

class TriggerDefinition {
public:
    std::optional<std::shared_ptr<Expression>> condition;
    std::vector<std::shared_ptr<DataRequirement>> data;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::optional<fhir_string> name;
    using TIMING_Variant = std::variant<
        std::shared_ptr<Timing>,
        std::shared_ptr<Reference>,
        std::shared_ptr<fhir_date>,
        std::shared_ptr<fhir_dateTime>
    >;
    TIMING_Variant timing;
    fhir_code type;
};

class UsageContext {
public:
    std::shared_ptr<Coding> code_;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    using VALUE_Variant = std::variant<
        std::shared_ptr<CodeableConcept>,
        std::shared_ptr<Quantity>,
        std::shared_ptr<Range>,
        std::shared_ptr<Reference>
    >;
    VALUE_Variant value;
};

class ValueSet {
public:
    std::optional<std::shared_ptr<ValueSet_Compose>> compose;
    std::vector<std::shared_ptr<ContactDetail>> contact;
    std::vector<std::shared_ptr<Resource>> contained;
    std::optional<fhir_markdown> copyright;
    std::optional<fhir_dateTime> date_;
    std::optional<fhir_markdown> description;
    std::optional<std::shared_ptr<ValueSet_Expansion>> expansion;
    std::optional<fhir_boolean> experimental;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Identifier>> identifier;
    std::optional<fhir_boolean> immutable;
    std::optional<fhir_uri> implicit_rules;
    std::vector<std::shared_ptr<CodeableConcept>> jurisdiction;
    std::optional<fhir_code> language;
    std::optional<std::shared_ptr<Meta>> meta;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<fhir_string> name;
    std::optional<fhir_string> publisher;
    std::optional<fhir_markdown> purpose;
    fhir_code status;
    std::optional<std::shared_ptr<Narrative>> text;
    std::optional<fhir_string> title;
    std::optional<fhir_uri> url_;
    std::vector<std::shared_ptr<UsageContext>> use_context;
    std::optional<fhir_string> version;
};

class ValueSet_Compose {
public:
    std::vector<std::shared_ptr<ValueSet_Compose_Include>> exclude;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::optional<fhir_boolean> inactive;
    std::optional<fhir_date> locked_date;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
};

class ValueSet_Compose_Include {
public:
    std::vector<std::shared_ptr<ValueSet_Compose_Include_Concept>> concept;
    std::vector<std::shared_ptr<Extension>> extension;
    std::vector<std::shared_ptr<ValueSet_Compose_Include_Filter>> filter;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<fhir_uri> system;
    std::vector<fhir_canonical> value_set;
    std::optional<fhir_string> version;
};

class ValueSet_Compose_Include_Concept {
public:
    fhir_code code_;
    std::vector<std::shared_ptr<ValueSet_Compose_Include_Concept_Designation>> designation;
    std::optional<fhir_string> display;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
};

class ValueSet_Compose_Include_Concept_Designation {
public:
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::optional<fhir_code> language;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<std::shared_ptr<Coding>> use;
    fhir_string value;
};

class ValueSet_Compose_Include_Filter {
public:
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    fhir_code op;
    fhir_code property;
    fhir_string value;
};

class ValueSet_Expansion {
public:
    std::vector<std::shared_ptr<ValueSet_Expansion_Contains>> contains;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::optional<fhir_uri> identifier;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<fhir_integer> offset;
    std::vector<std::shared_ptr<ValueSet_Expansion_Parameter>> parameter;
    fhir_dateTime timestamp;
    std::optional<fhir_integer> total;
};

class ValueSet_Expansion_Contains {
public:
    std::optional<fhir_boolean> abstract;
    std::optional<fhir_code> code_;
    std::vector<std::shared_ptr<ValueSet_Expansion_Contains>> contains;
    std::vector<std::shared_ptr<ValueSet_Compose_Include_Concept_Designation>> designation;
    std::optional<fhir_string> display;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::optional<fhir_boolean> inactive;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<fhir_uri> system;
    std::optional<fhir_string> version;
};

class ValueSet_Expansion_Parameter {
public:
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    fhir_string name;
    using VALUE_Variant = std::variant<
        std::shared_ptr<fhir_string>,
        std::shared_ptr<fhir_boolean>,
        std::shared_ptr<fhir_integer>,
        std::shared_ptr<fhir_decimal>,
        std::shared_ptr<fhir_uri>,
        std::shared_ptr<fhir_code>,
        std::shared_ptr<fhir_dateTime>
    >;
    VALUE_Variant value;
};

class VerificationResult {
public:
    std::optional<std::shared_ptr<VerificationResult_Attestation>> attestation;
    std::vector<std::shared_ptr<Resource>> contained;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<CodeableConcept>> failure_action;
    std::optional<std::shared_ptr<Timing>> frequency;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::optional<fhir_uri> implicit_rules;
    std::optional<fhir_code> language;
    std::optional<fhir_dateTime> last_performed;
    std::optional<std::shared_ptr<Meta>> meta;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<std::shared_ptr<CodeableConcept>> need;
    std::optional<fhir_date> next_scheduled;
    std::vector<std::shared_ptr<VerificationResult_PrimarySource>> primary_source;
    fhir_code status;
    std::optional<fhir_dateTime> status_date;
    std::vector<std::shared_ptr<Reference>> target;
    std::vector<fhir_string> target_location;
    std::optional<std::shared_ptr<Narrative>> text;
    std::vector<std::shared_ptr<CodeableConcept>> validation_process;
    std::optional<std::shared_ptr<CodeableConcept>> validation_type;
    std::vector<std::shared_ptr<VerificationResult_Validator>> validator;
};

class VerificationResult_Attestation {
public:
    std::optional<std::shared_ptr<CodeableConcept>> communication_method;
    std::optional<fhir_date> date_;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<std::shared_ptr<Reference>> on_behalf_of;
    std::optional<fhir_string> proxy_identity_certificate;
    std::optional<std::shared_ptr<Signature>> proxy_signature;
    std::optional<fhir_string> source_identity_certificate;
    std::optional<std::shared_ptr<Signature>> source_signature;
    std::optional<std::shared_ptr<Reference>> who;
};

class VerificationResult_PrimarySource {
public:
    std::optional<std::shared_ptr<CodeableConcept>> can_push_updates;
    std::vector<std::shared_ptr<CodeableConcept>> communication_method;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::vector<std::shared_ptr<CodeableConcept>> push_type_available;
    std::vector<std::shared_ptr<CodeableConcept>> type;
    std::optional<fhir_dateTime> validation_date;
    std::optional<std::shared_ptr<CodeableConcept>> validation_status;
    std::optional<std::shared_ptr<Reference>> who;
};

class VerificationResult_Validator {
public:
    std::optional<std::shared_ptr<Signature>> attestation_signature;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::optional<fhir_string> identity_certificate;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::shared_ptr<Reference> organization;
};

class VisionPrescription {
public:
    std::vector<std::shared_ptr<Resource>> contained;
    fhir_dateTime created;
    fhir_dateTime date_written;
    std::optional<std::shared_ptr<Reference>> encounter;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Identifier>> identifier;
    std::optional<fhir_uri> implicit_rules;
    std::optional<fhir_code> language;
    std::optional<std::shared_ptr<Meta>> meta;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::shared_ptr<Reference> patient;
    std::shared_ptr<Reference> prescriber;
    fhir_code status;
    std::optional<std::shared_ptr<Narrative>> text;
};

class VisionPrescription_LensSpecification {
public:
    std::optional<fhir_decimal> add;
    std::optional<fhir_integer> axis;
    std::optional<fhir_decimal> back_curve;
    std::optional<fhir_string> brand;
    std::optional<fhir_string> color;
    std::optional<fhir_decimal> cylinder;
    std::optional<fhir_decimal> diameter;
    std::optional<std::shared_ptr<Quantity>> duration;
    std::vector<std::shared_ptr<Extension>> extension;
    fhir_code eye;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::vector<std::shared_ptr<Annotation>> note;
    std::optional<fhir_decimal> power;
    std::vector<std::shared_ptr<VisionPrescription_LensSpecification_Prism>> prism;
    std::shared_ptr<CodeableConcept> product;
    std::optional<fhir_decimal> sphere;
};

class VisionPrescription_LensSpecification_Prism {
public:
    fhir_decimal amount;
    fhir_code base;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
};













































class xhtml {
public:
    std::optional<std::shared_ptr<fhir_string>> id_;
    std::shared_ptr<fhir_string> value;
};

