#include <string>
#include <vector>
#include <optional>
#include <memory>
#include <variant>

typedef std::string base64Binary;
typedef std::string boolean;
typedef std::string canonical;
typedef std::string code;
typedef std::string date;
typedef std::string dateTime;
typedef std::string decimal;
typedef std::string id;
typedef std::string instant;
typedef std::string integer;
typedef std::string markdown;
typedef std::string oid;
typedef std::string positiveInt;
typedef std::string string;
typedef std::string time;
typedef std::string unsignedInt;
typedef std::string uri;
typedef std::string url;
typedef std::string uuid;

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
    std::optional<string> description;
    std::vector<std::shared_ptr<Extension>> extension;
    std::vector<std::shared_ptr<Account_Guarantor>> guarantor;
    std::optional<string> id_;
    std::vector<std::shared_ptr<Identifier>> identifier;
    std::optional<uri> implicit_rules;
    std::optional<code> language;
    std::optional<std::shared_ptr<Meta>> meta;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<string> name;
    std::optional<std::shared_ptr<Reference>> owner;
    std::optional<std::shared_ptr<Reference>> part_of;
    std::optional<std::shared_ptr<Period>> service_period;
    code status;
    std::vector<std::shared_ptr<Reference>> subject;
    std::optional<std::shared_ptr<Narrative>> text;
    std::optional<std::shared_ptr<CodeableConcept>> type;
};

class Account_Coverage {
public:
    std::shared_ptr<Reference> coverage;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<positiveInt> priority;
};

class Account_Guarantor {
public:
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<boolean> on_hold;
    std::shared_ptr<Reference> party;
    std::optional<std::shared_ptr<Period>> period;
};

class ActivityDefinition {
public:
    std::optional<date> approval_date;
    std::vector<std::shared_ptr<ContactDetail>> author;
    std::vector<std::shared_ptr<CodeableConcept>> body_site;
    std::optional<std::shared_ptr<CodeableConcept>> code_;
    std::vector<std::shared_ptr<ContactDetail>> contact;
    std::vector<std::shared_ptr<Resource>> contained;
    std::optional<markdown> copyright;
    std::optional<dateTime> date_;
    std::optional<markdown> description;
    std::optional<boolean> do_not_perform;
    std::vector<std::shared_ptr<Dosage>> dosage;
    std::vector<std::shared_ptr<ActivityDefinition_DynamicValue>> dynamic_value;
    std::vector<std::shared_ptr<ContactDetail>> editor;
    std::optional<std::shared_ptr<Period>> effective_period;
    std::vector<std::shared_ptr<ContactDetail>> endorser;
    std::optional<boolean> experimental;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::vector<std::shared_ptr<Identifier>> identifier;
    std::optional<uri> implicit_rules;
    std::optional<code> intent;
    std::vector<std::shared_ptr<CodeableConcept>> jurisdiction;
    std::optional<code> kind;
    std::optional<code> language;
    std::optional<date> last_review_date;
    std::vector<canonical> library;
    std::optional<std::shared_ptr<Reference>> location;
    std::optional<std::shared_ptr<Meta>> meta;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<string> name;
    std::vector<std::shared_ptr<Reference>> observation_requirement;
    std::vector<std::shared_ptr<Reference>> observation_result_requirement;
    std::vector<std::shared_ptr<ActivityDefinition_Participant>> participant;
    std::optional<code> priority;
    using PRODUCT_Variant = std::variant<
        std::shared_ptr<Reference>,
        std::shared_ptr<CodeableConcept>
    >;
    PRODUCT_Variant product;
    std::optional<canonical> profile;
    std::optional<string> publisher;
    std::optional<markdown> purpose;
    std::optional<std::shared_ptr<Quantity>> quantity;
    std::vector<std::shared_ptr<RelatedArtifact>> related_artifact;
    std::vector<std::shared_ptr<ContactDetail>> reviewer;
    std::vector<std::shared_ptr<Reference>> specimen_requirement;
    code status;
    using SUBJECT_Variant = std::variant<
        std::shared_ptr<CodeableConcept>,
        std::shared_ptr<Reference>
    >;
    SUBJECT_Variant subject;
    std::optional<string> subtitle;
    std::optional<std::shared_ptr<Narrative>> text;
    using TIMING_Variant = std::variant<
        std::shared_ptr<Timing>,
        std::shared_ptr<dateTime>,
        std::shared_ptr<Age>,
        std::shared_ptr<Period>,
        std::shared_ptr<Range>,
        std::shared_ptr<Duration>
    >;
    TIMING_Variant timing;
    std::optional<string> title;
    std::vector<std::shared_ptr<CodeableConcept>> topic;
    std::optional<canonical> transform;
    std::optional<uri> url_;
    std::optional<string> usage;
    std::vector<std::shared_ptr<UsageContext>> use_context;
    std::optional<string> version;
};

class ActivityDefinition_DynamicValue {
public:
    std::shared_ptr<Expression> expression;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    string path;
};

class ActivityDefinition_Participant {
public:
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<std::shared_ptr<CodeableConcept>> role;
    code type;
};

class Address {
public:
    std::optional<string> city;
    std::optional<string> country;
    std::optional<string> district;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::vector<string> line;
    std::optional<std::shared_ptr<Period>> period;
    std::optional<string> postal_code;
    std::optional<string> state;
    std::optional<string> text;
    std::optional<code> type;
    std::optional<code> use;
};

class AdverseEvent {
public:
    code actuality;
    std::vector<std::shared_ptr<CodeableConcept>> category;
    std::vector<std::shared_ptr<Resource>> contained;
    std::vector<std::shared_ptr<Reference>> contributor;
    std::optional<dateTime> date_;
    std::optional<dateTime> detected;
    std::optional<std::shared_ptr<Reference>> encounter;
    std::optional<std::shared_ptr<CodeableConcept>> event;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::optional<std::shared_ptr<Identifier>> identifier;
    std::optional<uri> implicit_rules;
    std::optional<code> language;
    std::optional<std::shared_ptr<Reference>> location;
    std::optional<std::shared_ptr<Meta>> meta;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<std::shared_ptr<CodeableConcept>> outcome;
    std::optional<dateTime> recorded_date;
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
    std::optional<string> id_;
    std::shared_ptr<Reference> instance;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
};

class AdverseEvent_SuspectEntity_Causality {
public:
    std::optional<std::shared_ptr<CodeableConcept>> assessment;
    std::optional<std::shared_ptr<Reference>> author;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::optional<std::shared_ptr<CodeableConcept>> method;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<string> product_relatedness;
};

class Age {
public:
    std::optional<code> code_;
    std::optional<code> comparator;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::optional<uri> system;
    std::optional<string> unit;
    std::optional<decimal> value;
};

class AllergyIntolerance {
public:
    std::optional<std::shared_ptr<Reference>> asserter;
    std::vector<code> category;
    std::optional<std::shared_ptr<CodeableConcept>> clinical_status;
    std::optional<std::shared_ptr<CodeableConcept>> code_;
    std::vector<std::shared_ptr<Resource>> contained;
    std::optional<code> criticality;
    std::optional<std::shared_ptr<Reference>> encounter;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::vector<std::shared_ptr<Identifier>> identifier;
    std::optional<uri> implicit_rules;
    std::optional<code> language;
    std::optional<dateTime> last_occurrence;
    std::optional<std::shared_ptr<Meta>> meta;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::vector<std::shared_ptr<Annotation>> note;
    using ONSET_Variant = std::variant<
        std::shared_ptr<dateTime>,
        std::shared_ptr<Age>,
        std::shared_ptr<Period>,
        std::shared_ptr<Range>,
        std::shared_ptr<string>
    >;
    ONSET_Variant onset;
    std::shared_ptr<Reference> patient;
    std::vector<std::shared_ptr<AllergyIntolerance_Reaction>> reaction;
    std::optional<dateTime> recorded_date;
    std::optional<std::shared_ptr<Reference>> recorder;
    std::optional<std::shared_ptr<Narrative>> text;
    std::optional<code> type;
    std::optional<std::shared_ptr<CodeableConcept>> verification_status;
};

class AllergyIntolerance_Reaction {
public:
    std::optional<string> description;
    std::optional<std::shared_ptr<CodeableConcept>> exposure_route;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::vector<std::shared_ptr<Annotation>> note;
    std::optional<dateTime> onset;
    std::optional<code> severity;
    std::optional<std::shared_ptr<CodeableConcept>> substance;
};

class Annotation {
public:
    using AUTHOR_Variant = std::variant<
        std::shared_ptr<Reference>,
        std::shared_ptr<string>
    >;
    AUTHOR_Variant author;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    markdown text;
    std::optional<dateTime> time_;
};

class Appointment {
public:
    std::optional<std::shared_ptr<CodeableConcept>> appointment_type;
    std::vector<std::shared_ptr<Reference>> based_on;
    std::optional<std::shared_ptr<CodeableConcept>> cancelation_reason;
    std::optional<string> comment;
    std::vector<std::shared_ptr<Resource>> contained;
    std::optional<dateTime> created;
    std::optional<string> description;
    std::optional<instant> end;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::vector<std::shared_ptr<Identifier>> identifier;
    std::optional<uri> implicit_rules;
    std::optional<code> language;
    std::optional<std::shared_ptr<Meta>> meta;
    std::optional<positiveInt> minutes_duration;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<string> patient_instruction;
    std::optional<unsignedInt> priority;
    std::vector<std::shared_ptr<CodeableConcept>> reason_code;
    std::vector<std::shared_ptr<Reference>> reason_reference;
    std::vector<std::shared_ptr<Period>> requested_period;
    std::vector<std::shared_ptr<CodeableConcept>> service_category;
    std::vector<std::shared_ptr<CodeableConcept>> service_type;
    std::vector<std::shared_ptr<Reference>> slot;
    std::vector<std::shared_ptr<CodeableConcept>> specialty;
    std::optional<instant> start;
    code status;
    std::vector<std::shared_ptr<Reference>> supporting_information;
    std::optional<std::shared_ptr<Narrative>> text;
};

class Appointment_Participant {
public:
    std::optional<std::shared_ptr<Reference>> actor;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<std::shared_ptr<Period>> period;
    std::optional<code> required;
    code status;
    std::vector<std::shared_ptr<CodeableConcept>> type;
};

class AppointmentResponse {
public:
    std::optional<std::shared_ptr<Reference>> actor;
    std::shared_ptr<Reference> appointment;
    std::optional<string> comment;
    std::vector<std::shared_ptr<Resource>> contained;
    std::optional<instant> end;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::vector<std::shared_ptr<Identifier>> identifier;
    std::optional<uri> implicit_rules;
    std::optional<code> language;
    std::optional<std::shared_ptr<Meta>> meta;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    code participant_status;
    std::vector<std::shared_ptr<CodeableConcept>> participant_type;
    std::optional<instant> start;
    std::optional<std::shared_ptr<Narrative>> text;
};

class Attachment {
public:
    std::optional<code> content_type;
    std::optional<dateTime> creation;
    std::optional<base64Binary> data;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<base64Binary> hash;
    std::optional<string> id_;
    std::optional<code> language;
    std::optional<unsignedInt> size;
    std::optional<string> title;
    std::optional<url> url_;
};

class AuditEvent {
public:
    std::optional<code> action;
    std::vector<std::shared_ptr<Resource>> contained;
    std::vector<std::shared_ptr<AuditEvent_Entity>> entity;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::optional<uri> implicit_rules;
    std::optional<code> language;
    std::optional<std::shared_ptr<Meta>> meta;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<code> outcome;
    std::optional<string> outcome_desc;
    std::optional<std::shared_ptr<Period>> period;
    std::vector<std::shared_ptr<CodeableConcept>> purpose_of_event;
    instant recorded;
    std::shared_ptr<AuditEvent_Source> source;
    std::vector<std::shared_ptr<Coding>> subtype;
    std::optional<std::shared_ptr<Narrative>> text;
    std::shared_ptr<Coding> type;
};

class AuditEvent_Agent {
public:
    std::optional<string> alt_id;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::optional<std::shared_ptr<Reference>> location;
    std::optional<std::shared_ptr<Coding>> media;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<string> name;
    std::optional<std::shared_ptr<AuditEvent_Agent_Network>> network;
    std::vector<uri> policy;
    std::vector<std::shared_ptr<CodeableConcept>> purpose_of_use;
    boolean requestor;
    std::vector<std::shared_ptr<CodeableConcept>> role;
    std::optional<std::shared_ptr<CodeableConcept>> type;
    std::optional<std::shared_ptr<Reference>> who;
};

class AuditEvent_Agent_Network {
public:
    std::optional<string> address;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<code> type;
};

class AuditEvent_Entity {
public:
    std::optional<string> description;
    std::vector<std::shared_ptr<AuditEvent_Entity_Detail>> detail;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::optional<std::shared_ptr<Coding>> lifecycle;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<string> name;
    std::optional<base64Binary> query;
    std::optional<std::shared_ptr<Coding>> role;
    std::vector<std::shared_ptr<Coding>> security_label;
    std::optional<std::shared_ptr<Coding>> type;
    std::optional<std::shared_ptr<Reference>> what;
};

class AuditEvent_Entity_Detail {
public:
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    string type;
    using VALUE_Variant = std::variant<
        std::shared_ptr<string>,
        std::shared_ptr<base64Binary>
    >;
    VALUE_Variant value;
};

class AuditEvent_Source {
public:
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::shared_ptr<Reference> observer;
    std::optional<string> site;
    std::vector<std::shared_ptr<Coding>> type;
};

class BackboneElement {
public:
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
};

class Basic {
public:
    std::optional<std::shared_ptr<Reference>> author;
    std::shared_ptr<CodeableConcept> code_;
    std::vector<std::shared_ptr<Resource>> contained;
    std::optional<date> created;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::vector<std::shared_ptr<Identifier>> identifier;
    std::optional<uri> implicit_rules;
    std::optional<code> language;
    std::optional<std::shared_ptr<Meta>> meta;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<std::shared_ptr<Reference>> subject;
    std::optional<std::shared_ptr<Narrative>> text;
};

class Binary {
public:
    code content_type;
    std::optional<base64Binary> data;
    std::optional<string> id_;
    std::optional<uri> implicit_rules;
    std::optional<code> language;
    std::optional<std::shared_ptr<Meta>> meta;
    std::optional<std::shared_ptr<Reference>> security_context;
};

class BiologicallyDerivedProduct {
public:
    std::optional<std::shared_ptr<BiologicallyDerivedProduct_Collection>> collection;
    std::vector<std::shared_ptr<Resource>> contained;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::vector<std::shared_ptr<Identifier>> identifier;
    std::optional<uri> implicit_rules;
    std::optional<code> language;
    std::optional<std::shared_ptr<BiologicallyDerivedProduct_Manipulation>> manipulation;
    std::optional<std::shared_ptr<Meta>> meta;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::vector<std::shared_ptr<Reference>> parent;
    std::vector<std::shared_ptr<BiologicallyDerivedProduct_Processing>> processing;
    std::optional<code> product_category;
    std::optional<std::shared_ptr<CodeableConcept>> product_code;
    std::optional<integer> quantity;
    std::vector<std::shared_ptr<Reference>> request;
    std::optional<code> status;
    std::vector<std::shared_ptr<BiologicallyDerivedProduct_Storage>> storage;
    std::optional<std::shared_ptr<Narrative>> text;
};

class BiologicallyDerivedProduct_Collection {
public:
    using COLLECTED_Variant = std::variant<
        std::shared_ptr<dateTime>,
        std::shared_ptr<Period>
    >;
    COLLECTED_Variant collected;
    std::optional<std::shared_ptr<Reference>> collector;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<std::shared_ptr<Reference>> source;
};

class BiologicallyDerivedProduct_Manipulation {
public:
    std::optional<string> description;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    using TIME_Variant = std::variant<
        std::shared_ptr<dateTime>,
        std::shared_ptr<Period>
    >;
    TIME_Variant time_;
};

class BiologicallyDerivedProduct_Processing {
public:
    std::optional<std::shared_ptr<Reference>> additive;
    std::optional<string> description;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<std::shared_ptr<CodeableConcept>> procedure;
    using TIME_Variant = std::variant<
        std::shared_ptr<dateTime>,
        std::shared_ptr<Period>
    >;
    TIME_Variant time_;
};

class BiologicallyDerivedProduct_Storage {
public:
    std::optional<string> description;
    std::optional<std::shared_ptr<Period>> duration;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<code> scale;
    std::optional<decimal> temperature;
};

class BodyStructure {
public:
    std::optional<boolean> active;
    std::vector<std::shared_ptr<Resource>> contained;
    std::optional<string> description;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::vector<std::shared_ptr<Identifier>> identifier;
    std::vector<std::shared_ptr<Attachment>> image;
    std::optional<uri> implicit_rules;
    std::optional<code> language;
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
    std::optional<string> id_;
    std::optional<std::shared_ptr<Identifier>> identifier;
    std::optional<uri> implicit_rules;
    std::optional<code> language;
    std::vector<std::shared_ptr<Bundle_Link>> link;
    std::optional<std::shared_ptr<Meta>> meta;
    std::optional<std::shared_ptr<Signature>> signature;
    std::optional<instant> timestamp;
    std::optional<unsignedInt> total;
    code type;
};

class Bundle_Entry {
public:
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<uri> full_url;
    std::optional<string> id_;
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
    std::optional<string> id_;
    std::optional<string> if_match;
    std::optional<instant> if_modified_since;
    std::optional<string> if_none_exist;
    std::optional<string> if_none_match;
    code method;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    uri url_;
};

class Bundle_Entry_Response {
public:
    std::optional<string> etag;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::optional<instant> last_modified;
    std::optional<uri> location;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<std::shared_ptr<Resource>> outcome;
    string status;
};

class Bundle_Entry_Search {
public:
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::optional<code> mode;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<decimal> score;
};

class Bundle_Link {
public:
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    string relation;
    uri url_;
};

class CapabilityStatement {
public:
    std::vector<std::shared_ptr<ContactDetail>> contact;
    std::vector<std::shared_ptr<Resource>> contained;
    std::optional<markdown> copyright;
    dateTime date_;
    std::optional<markdown> description;
    std::vector<std::shared_ptr<CapabilityStatement_Document>> document;
    std::optional<boolean> experimental;
    std::vector<std::shared_ptr<Extension>> extension;
    code fhir_version;
    std::optional<string> id_;
    std::optional<std::shared_ptr<CapabilityStatement_Implementation>> implementation;
    std::vector<canonical> implementation_guide;
    std::optional<uri> implicit_rules;
    std::vector<canonical> imports;
    std::vector<canonical> instantiates;
    std::vector<std::shared_ptr<CodeableConcept>> jurisdiction;
    code kind;
    std::optional<code> language;
    std::vector<std::shared_ptr<CapabilityStatement_Messaging>> messaging;
    std::optional<std::shared_ptr<Meta>> meta;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<string> name;
    std::vector<code> patch_format;
    std::optional<string> publisher;
    std::optional<markdown> purpose;
    std::vector<std::shared_ptr<CapabilityStatement_Rest>> rest;
    std::optional<std::shared_ptr<CapabilityStatement_Software>> software;
    code status;
    std::optional<std::shared_ptr<Narrative>> text;
    std::optional<string> title;
    std::optional<uri> url_;
    std::vector<std::shared_ptr<UsageContext>> use_context;
    std::optional<string> version;
};

class CapabilityStatement_Document {
public:
    std::optional<markdown> documentation;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    code mode;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    canonical profile;
};

class CapabilityStatement_Implementation {
public:
    std::optional<std::shared_ptr<Reference>> custodian;
    string description;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<url> url_;
};

class CapabilityStatement_Messaging {
public:
    std::optional<markdown> documentation;
    std::vector<std::shared_ptr<CapabilityStatement_Messaging_Endpoint>> endpoint;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<unsignedInt> reliable_cache;
    std::vector<std::shared_ptr<CapabilityStatement_Messaging_SupportedMessage>> supported_message;
};

class CapabilityStatement_Messaging_Endpoint {
public:
    url address;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::shared_ptr<Coding> protocol;
};

class CapabilityStatement_Messaging_SupportedMessage {
public:
    canonical definition;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    code mode;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
};

class CapabilityStatement_Rest {
public:
    std::vector<canonical> compartment;
    std::optional<markdown> documentation;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::vector<std::shared_ptr<CapabilityStatement_Rest_Interaction>> interaction;
    code mode;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::vector<std::shared_ptr<CapabilityStatement_Rest_Resource_Operation>> operation;
    std::vector<std::shared_ptr<CapabilityStatement_Rest_Resource>> resource;
    std::vector<std::shared_ptr<CapabilityStatement_Rest_Resource_SearchParam>> search_param;
    std::optional<std::shared_ptr<CapabilityStatement_Rest_Security>> security;
};

class CapabilityStatement_Rest_Interaction {
public:
    code code_;
    std::optional<markdown> documentation;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
};

class CapabilityStatement_Rest_Resource {
public:
    std::optional<boolean> conditional_create;
    std::optional<code> conditional_delete;
    std::optional<code> conditional_read;
    std::optional<boolean> conditional_update;
    std::optional<markdown> documentation;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::vector<std::shared_ptr<CapabilityStatement_Rest_Resource_Interaction>> interaction;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::vector<std::shared_ptr<CapabilityStatement_Rest_Resource_Operation>> operation;
    std::optional<canonical> profile;
    std::optional<boolean> read_history;
    std::vector<code> reference_policy;
    std::vector<string> search_include;
    std::vector<std::shared_ptr<CapabilityStatement_Rest_Resource_SearchParam>> search_param;
    std::vector<string> search_rev_include;
    std::vector<canonical> supported_profile;
    code type;
    std::optional<boolean> update_create;
    std::optional<code> versioning;
};

class CapabilityStatement_Rest_Resource_Interaction {
public:
    code code_;
    std::optional<markdown> documentation;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
};

class CapabilityStatement_Rest_Resource_Operation {
public:
    canonical definition;
    std::optional<markdown> documentation;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    string name;
};

class CapabilityStatement_Rest_Resource_SearchParam {
public:
    std::optional<canonical> definition;
    std::optional<markdown> documentation;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    string name;
    code type;
};

class CapabilityStatement_Rest_Security {
public:
    std::optional<boolean> cors;
    std::optional<markdown> description;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::vector<std::shared_ptr<CodeableConcept>> service;
};

class CapabilityStatement_Software {
public:
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    string name;
    std::optional<dateTime> release_date;
    std::optional<string> version;
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
    std::optional<dateTime> created;
    std::optional<string> description;
    std::optional<std::shared_ptr<Reference>> encounter;
    std::vector<std::shared_ptr<Extension>> extension;
    std::vector<std::shared_ptr<Reference>> goal;
    std::optional<string> id_;
    std::vector<std::shared_ptr<Identifier>> identifier;
    std::optional<uri> implicit_rules;
    std::vector<canonical> instantiates_canonical;
    std::vector<uri> instantiates_uri;
    code intent;
    std::optional<code> language;
    std::optional<std::shared_ptr<Meta>> meta;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::vector<std::shared_ptr<Annotation>> note;
    std::vector<std::shared_ptr<Reference>> part_of;
    std::optional<std::shared_ptr<Period>> period;
    std::vector<std::shared_ptr<Reference>> replaces;
    code status;
    std::shared_ptr<Reference> subject;
    std::vector<std::shared_ptr<Reference>> supporting_info;
    std::optional<std::shared_ptr<Narrative>> text;
    std::optional<string> title;
};

class CarePlan_Activity {
public:
    std::optional<std::shared_ptr<CarePlan_Activity_Detail>> detail;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
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
    std::optional<string> description;
    std::optional<boolean> do_not_perform;
    std::vector<std::shared_ptr<Extension>> extension;
    std::vector<std::shared_ptr<Reference>> goal;
    std::optional<string> id_;
    std::vector<canonical> instantiates_canonical;
    std::vector<uri> instantiates_uri;
    std::optional<code> kind;
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
        std::shared_ptr<string>
    >;
    SCHEDULED_Variant scheduled;
    code status;
    std::optional<std::shared_ptr<CodeableConcept>> status_reason;
};

class CareTeam {
public:
    std::vector<std::shared_ptr<CodeableConcept>> category;
    std::vector<std::shared_ptr<Resource>> contained;
    std::optional<std::shared_ptr<Reference>> encounter;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::vector<std::shared_ptr<Identifier>> identifier;
    std::optional<uri> implicit_rules;
    std::optional<code> language;
    std::vector<std::shared_ptr<Reference>> managing_organization;
    std::optional<std::shared_ptr<Meta>> meta;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<string> name;
    std::vector<std::shared_ptr<Annotation>> note;
    std::vector<std::shared_ptr<CareTeam_Participant>> participant;
    std::optional<std::shared_ptr<Period>> period;
    std::vector<std::shared_ptr<CodeableConcept>> reason_code;
    std::vector<std::shared_ptr<Reference>> reason_reference;
    std::optional<code> status;
    std::optional<std::shared_ptr<Reference>> subject;
    std::vector<std::shared_ptr<ContactPoint>> telecom;
    std::optional<std::shared_ptr<Narrative>> text;
};

class CareTeam_Participant {
public:
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
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
    std::optional<string> id_;
    std::vector<std::shared_ptr<Identifier>> identifier;
    std::optional<uri> implicit_rules;
    std::optional<code> language;
    std::optional<dateTime> last_updated;
    std::optional<std::shared_ptr<Meta>> meta;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    boolean orderable;
    std::shared_ptr<Reference> referenced_item;
    std::vector<std::shared_ptr<CatalogEntry_RelatedEntry>> related_entry;
    std::optional<code> status;
    std::optional<std::shared_ptr<Narrative>> text;
    std::optional<std::shared_ptr<CodeableConcept>> type;
    std::optional<dateTime> valid_to;
    std::optional<std::shared_ptr<Period>> validity_period;
};

class CatalogEntry_RelatedEntry {
public:
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::shared_ptr<Reference> item;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    code relationtype;
};

class ChargeItem {
public:
    std::vector<std::shared_ptr<Reference>> account;
    std::vector<std::shared_ptr<CodeableConcept>> bodysite;
    std::shared_ptr<CodeableConcept> code_;
    std::vector<std::shared_ptr<Resource>> contained;
    std::optional<std::shared_ptr<Reference>> context;
    std::optional<std::shared_ptr<Reference>> cost_center;
    std::vector<canonical> definition_canonical;
    std::vector<uri> definition_uri;
    std::optional<dateTime> entered_date;
    std::optional<std::shared_ptr<Reference>> enterer;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<decimal> factor_override;
    std::optional<string> id_;
    std::vector<std::shared_ptr<Identifier>> identifier;
    std::optional<uri> implicit_rules;
    std::optional<code> language;
    std::optional<std::shared_ptr<Meta>> meta;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::vector<std::shared_ptr<Annotation>> note;
    using OCCURRENCE_Variant = std::variant<
        std::shared_ptr<dateTime>,
        std::shared_ptr<Period>,
        std::shared_ptr<Timing>
    >;
    OCCURRENCE_Variant occurrence;
    std::optional<string> override_reason;
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
    code status;
    std::shared_ptr<Reference> subject;
    std::vector<std::shared_ptr<Reference>> supporting_information;
    std::optional<std::shared_ptr<Narrative>> text;
};

class ChargeItem_Performer {
public:
    std::shared_ptr<Reference> actor;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<CodeableConcept>> function;
    std::optional<string> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
};

class ChargeItemDefinition {
public:
    std::vector<std::shared_ptr<ChargeItemDefinition_Applicability>> applicability;
    std::optional<date> approval_date;
    std::optional<std::shared_ptr<CodeableConcept>> code_;
    std::vector<std::shared_ptr<ContactDetail>> contact;
    std::vector<std::shared_ptr<Resource>> contained;
    std::optional<markdown> copyright;
    std::optional<dateTime> date_;
    std::vector<uri> derived_from_uri;
    std::optional<markdown> description;
    std::optional<std::shared_ptr<Period>> effective_period;
    std::optional<boolean> experimental;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::vector<std::shared_ptr<Identifier>> identifier;
    std::optional<uri> implicit_rules;
    std::vector<std::shared_ptr<Reference>> instance;
    std::vector<std::shared_ptr<CodeableConcept>> jurisdiction;
    std::optional<code> language;
    std::optional<date> last_review_date;
    std::optional<std::shared_ptr<Meta>> meta;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::vector<canonical> part_of;
    std::vector<std::shared_ptr<ChargeItemDefinition_PropertyGroup>> property_group;
    std::optional<string> publisher;
    std::vector<canonical> replaces;
    code status;
    std::optional<std::shared_ptr<Narrative>> text;
    std::optional<string> title;
    uri url_;
    std::vector<std::shared_ptr<UsageContext>> use_context;
    std::optional<string> version;
};

class ChargeItemDefinition_Applicability {
public:
    std::optional<string> description;
    std::optional<string> expression;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::optional<string> language;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
};

class ChargeItemDefinition_PropertyGroup {
public:
    std::vector<std::shared_ptr<ChargeItemDefinition_Applicability>> applicability;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::vector<std::shared_ptr<ChargeItemDefinition_PropertyGroup_PriceComponent>> price_component;
};

class ChargeItemDefinition_PropertyGroup_PriceComponent {
public:
    std::optional<std::shared_ptr<Money>> amount;
    std::optional<std::shared_ptr<CodeableConcept>> code_;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<decimal> factor;
    std::optional<string> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    code type;
};

class Claim {
public:
    std::optional<std::shared_ptr<Claim_Accident>> accident;
    std::optional<std::shared_ptr<Period>> billable_period;
    std::vector<std::shared_ptr<Claim_CareTeam>> care_team;
    std::vector<std::shared_ptr<Resource>> contained;
    dateTime created;
    std::vector<std::shared_ptr<Claim_Diagnosis>> diagnosis;
    std::optional<std::shared_ptr<Reference>> enterer;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<Reference>> facility;
    std::optional<std::shared_ptr<CodeableConcept>> funds_reserve;
    std::optional<string> id_;
    std::vector<std::shared_ptr<Identifier>> identifier;
    std::optional<uri> implicit_rules;
    std::optional<std::shared_ptr<Reference>> insurer;
    std::vector<std::shared_ptr<Claim_Item>> item;
    std::optional<code> language;
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
    code status;
    std::optional<std::shared_ptr<CodeableConcept>> sub_type;
    std::vector<std::shared_ptr<Claim_SupportingInfo>> supporting_info;
    std::optional<std::shared_ptr<Narrative>> text;
    std::optional<std::shared_ptr<Money>> total;
    std::shared_ptr<CodeableConcept> type;
    code use;
};

class Claim_Accident {
public:
    date date_;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
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
    std::optional<string> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::shared_ptr<Reference> provider;
    std::optional<std::shared_ptr<CodeableConcept>> qualification;
    std::optional<boolean> responsible;
    std::optional<std::shared_ptr<CodeableConcept>> role;
    positiveInt sequence;
};

class Claim_Diagnosis {
public:
    using DIAGNOSIS_Variant = std::variant<
        std::shared_ptr<CodeableConcept>,
        std::shared_ptr<Reference>
    >;
    DIAGNOSIS_Variant diagnosis;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<std::shared_ptr<CodeableConcept>> on_admission;
    std::optional<std::shared_ptr<CodeableConcept>> package_code;
    positiveInt sequence;
    std::vector<std::shared_ptr<CodeableConcept>> type;
};

class Claim_Insurance {
public:
    std::optional<string> business_arrangement;
    std::optional<std::shared_ptr<Reference>> claim_response;
    std::shared_ptr<Reference> coverage;
    std::vector<std::shared_ptr<Extension>> extension;
    boolean focal;
    std::optional<string> id_;
    std::optional<std::shared_ptr<Identifier>> identifier;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::vector<string> pre_auth_ref;
    positiveInt sequence;
};

class Claim_Item {
public:
    std::optional<std::shared_ptr<CodeableConcept>> body_site;
    std::vector<positiveInt> care_team_sequence;
    std::optional<std::shared_ptr<CodeableConcept>> category;
    std::vector<std::shared_ptr<Claim_Item_Detail>> detail;
    std::vector<positiveInt> diagnosis_sequence;
    std::vector<std::shared_ptr<Reference>> encounter;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<decimal> factor;
    std::optional<string> id_;
    std::vector<positiveInt> information_sequence;
    using LOCATION_Variant = std::variant<
        std::shared_ptr<CodeableConcept>,
        std::shared_ptr<Address>,
        std::shared_ptr<Reference>
    >;
    LOCATION_Variant location;
    std::vector<std::shared_ptr<CodeableConcept>> modifier;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<std::shared_ptr<Money>> net;
    std::vector<positiveInt> procedure_sequence;
    std::shared_ptr<CodeableConcept> product_or_service;
    std::vector<std::shared_ptr<CodeableConcept>> program_code;
    std::optional<std::shared_ptr<Quantity>> quantity;
    std::optional<std::shared_ptr<CodeableConcept>> revenue;
    positiveInt sequence;
    using SERVICED_Variant = std::variant<
        std::shared_ptr<date>,
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
    std::optional<decimal> factor;
    std::optional<string> id_;
    std::vector<std::shared_ptr<CodeableConcept>> modifier;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<std::shared_ptr<Money>> net;
    std::shared_ptr<CodeableConcept> product_or_service;
    std::vector<std::shared_ptr<CodeableConcept>> program_code;
    std::optional<std::shared_ptr<Quantity>> quantity;
    std::optional<std::shared_ptr<CodeableConcept>> revenue;
    positiveInt sequence;
    std::vector<std::shared_ptr<Claim_Item_Detail_SubDetail>> sub_detail;
    std::vector<std::shared_ptr<Reference>> udi;
    std::optional<std::shared_ptr<Money>> unit_price;
};

class Claim_Item_Detail_SubDetail {
public:
    std::optional<std::shared_ptr<CodeableConcept>> category;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<decimal> factor;
    std::optional<string> id_;
    std::vector<std::shared_ptr<CodeableConcept>> modifier;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<std::shared_ptr<Money>> net;
    std::shared_ptr<CodeableConcept> product_or_service;
    std::vector<std::shared_ptr<CodeableConcept>> program_code;
    std::optional<std::shared_ptr<Quantity>> quantity;
    std::optional<std::shared_ptr<CodeableConcept>> revenue;
    positiveInt sequence;
    std::vector<std::shared_ptr<Reference>> udi;
    std::optional<std::shared_ptr<Money>> unit_price;
};

class Claim_Payee {
public:
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<std::shared_ptr<Reference>> party;
    std::shared_ptr<CodeableConcept> type;
};

class Claim_Procedure {
public:
    std::optional<dateTime> date_;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    using PROCEDURE_Variant = std::variant<
        std::shared_ptr<CodeableConcept>,
        std::shared_ptr<Reference>
    >;
    PROCEDURE_Variant procedure;
    positiveInt sequence;
    std::vector<std::shared_ptr<CodeableConcept>> type;
    std::vector<std::shared_ptr<Reference>> udi;
};

class Claim_Related {
public:
    std::optional<std::shared_ptr<Reference>> claim;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<std::shared_ptr<Identifier>> reference;
    std::optional<std::shared_ptr<CodeableConcept>> relationship;
};

class Claim_SupportingInfo {
public:
    std::shared_ptr<CodeableConcept> category;
    std::optional<std::shared_ptr<CodeableConcept>> code_;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<std::shared_ptr<CodeableConcept>> reason;
    positiveInt sequence;
    using TIMING_Variant = std::variant<
        std::shared_ptr<date>,
        std::shared_ptr<Period>
    >;
    TIMING_Variant timing;
    using VALUE_Variant = std::variant<
        std::shared_ptr<boolean>,
        std::shared_ptr<string>,
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
    dateTime created;
    std::optional<string> disposition;
    std::vector<std::shared_ptr<ClaimResponse_Error>> error;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<Attachment>> form;
    std::optional<std::shared_ptr<CodeableConcept>> form_code;
    std::optional<std::shared_ptr<CodeableConcept>> funds_reserve;
    std::optional<string> id_;
    std::vector<std::shared_ptr<Identifier>> identifier;
    std::optional<uri> implicit_rules;
    std::vector<std::shared_ptr<ClaimResponse_Insurance>> insurance;
    std::shared_ptr<Reference> insurer;
    std::vector<std::shared_ptr<ClaimResponse_Item>> item;
    std::optional<code> language;
    std::optional<std::shared_ptr<Meta>> meta;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    code outcome;
    std::shared_ptr<Reference> patient;
    std::optional<std::shared_ptr<CodeableConcept>> payee_type;
    std::optional<std::shared_ptr<ClaimResponse_Payment>> payment;
    std::optional<std::shared_ptr<Period>> pre_auth_period;
    std::optional<string> pre_auth_ref;
    std::vector<std::shared_ptr<ClaimResponse_ProcessNote>> process_note;
    std::optional<std::shared_ptr<Reference>> request;
    std::optional<std::shared_ptr<Reference>> requestor;
    code status;
    std::optional<std::shared_ptr<CodeableConcept>> sub_type;
    std::optional<std::shared_ptr<Narrative>> text;
    std::vector<std::shared_ptr<ClaimResponse_Total>> total;
    std::shared_ptr<CodeableConcept> type;
    code use;
};

class ClaimResponse_AddItem {
public:
    std::optional<std::shared_ptr<CodeableConcept>> body_site;
    std::vector<std::shared_ptr<ClaimResponse_AddItem_Detail>> detail;
    std::vector<positiveInt> detail_sequence;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<decimal> factor;
    std::optional<string> id_;
    std::vector<positiveInt> item_sequence;
    using LOCATION_Variant = std::variant<
        std::shared_ptr<CodeableConcept>,
        std::shared_ptr<Address>,
        std::shared_ptr<Reference>
    >;
    LOCATION_Variant location;
    std::vector<std::shared_ptr<CodeableConcept>> modifier;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<std::shared_ptr<Money>> net;
    std::vector<positiveInt> note_number;
    std::shared_ptr<CodeableConcept> product_or_service;
    std::vector<std::shared_ptr<CodeableConcept>> program_code;
    std::vector<std::shared_ptr<Reference>> provider;
    std::optional<std::shared_ptr<Quantity>> quantity;
    using SERVICED_Variant = std::variant<
        std::shared_ptr<date>,
        std::shared_ptr<Period>
    >;
    SERVICED_Variant serviced;
    std::vector<std::shared_ptr<CodeableConcept>> sub_site;
    std::vector<positiveInt> subdetail_sequence;
    std::optional<std::shared_ptr<Money>> unit_price;
};

class ClaimResponse_AddItem_Detail {
public:
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<decimal> factor;
    std::optional<string> id_;
    std::vector<std::shared_ptr<CodeableConcept>> modifier;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<std::shared_ptr<Money>> net;
    std::vector<positiveInt> note_number;
    std::shared_ptr<CodeableConcept> product_or_service;
    std::optional<std::shared_ptr<Quantity>> quantity;
    std::vector<std::shared_ptr<ClaimResponse_AddItem_Detail_SubDetail>> sub_detail;
    std::optional<std::shared_ptr<Money>> unit_price;
};

class ClaimResponse_AddItem_Detail_SubDetail {
public:
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<decimal> factor;
    std::optional<string> id_;
    std::vector<std::shared_ptr<CodeableConcept>> modifier;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<std::shared_ptr<Money>> net;
    std::vector<positiveInt> note_number;
    std::shared_ptr<CodeableConcept> product_or_service;
    std::optional<std::shared_ptr<Quantity>> quantity;
    std::optional<std::shared_ptr<Money>> unit_price;
};

class ClaimResponse_Error {
public:
    std::shared_ptr<CodeableConcept> code_;
    std::optional<positiveInt> detail_sequence;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::optional<positiveInt> item_sequence;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<positiveInt> sub_detail_sequence;
};

class ClaimResponse_Insurance {
public:
    std::optional<string> business_arrangement;
    std::optional<std::shared_ptr<Reference>> claim_response;
    std::shared_ptr<Reference> coverage;
    std::vector<std::shared_ptr<Extension>> extension;
    boolean focal;
    std::optional<string> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    positiveInt sequence;
};

class ClaimResponse_Item {
public:
    std::vector<std::shared_ptr<ClaimResponse_Item_Detail>> detail;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    positiveInt item_sequence;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::vector<positiveInt> note_number;
};

class ClaimResponse_Item_Adjudication {
public:
    std::optional<std::shared_ptr<Money>> amount;
    std::shared_ptr<CodeableConcept> category;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<std::shared_ptr<CodeableConcept>> reason;
    std::optional<decimal> value;
};

class ClaimResponse_Item_Detail {
public:
    positiveInt detail_sequence;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::vector<positiveInt> note_number;
    std::vector<std::shared_ptr<ClaimResponse_Item_Detail_SubDetail>> sub_detail;
};

class ClaimResponse_Item_Detail_SubDetail {
public:
    std::vector<std::shared_ptr<ClaimResponse_Item_Adjudication>> adjudication;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::vector<positiveInt> note_number;
    positiveInt sub_detail_sequence;
};

class ClaimResponse_Payment {
public:
    std::optional<std::shared_ptr<Money>> adjustment;
    std::optional<std::shared_ptr<CodeableConcept>> adjustment_reason;
    std::shared_ptr<Money> amount;
    std::optional<date> date_;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::optional<std::shared_ptr<Identifier>> identifier;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::shared_ptr<CodeableConcept> type;
};

class ClaimResponse_ProcessNote {
public:
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::optional<std::shared_ptr<CodeableConcept>> language;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<positiveInt> number;
    string text;
    std::optional<code> type;
};

class ClaimResponse_Total {
public:
    std::shared_ptr<Money> amount;
    std::shared_ptr<CodeableConcept> category;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
};

class ClinicalImpression {
public:
    std::optional<std::shared_ptr<Reference>> assessor;
    std::optional<std::shared_ptr<CodeableConcept>> code_;
    std::vector<std::shared_ptr<Resource>> contained;
    std::optional<dateTime> date_;
    std::optional<string> description;
    using EFFECTIVE_Variant = std::variant<
        std::shared_ptr<dateTime>,
        std::shared_ptr<Period>
    >;
    EFFECTIVE_Variant effective;
    std::optional<std::shared_ptr<Reference>> encounter;
    std::vector<std::shared_ptr<Extension>> extension;
    std::vector<std::shared_ptr<ClinicalImpression_Finding>> finding;
    std::optional<string> id_;
    std::vector<std::shared_ptr<Identifier>> identifier;
    std::optional<uri> implicit_rules;
    std::vector<std::shared_ptr<ClinicalImpression_Investigation>> investigation;
    std::optional<code> language;
    std::optional<std::shared_ptr<Meta>> meta;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::vector<std::shared_ptr<Annotation>> note;
    std::optional<std::shared_ptr<Reference>> previous;
    std::vector<std::shared_ptr<Reference>> problem;
    std::vector<std::shared_ptr<CodeableConcept>> prognosis_codeable_concept;
    std::vector<std::shared_ptr<Reference>> prognosis_reference;
    std::vector<uri> protocol;
    code status;
    std::optional<std::shared_ptr<CodeableConcept>> status_reason;
    std::shared_ptr<Reference> subject;
    std::optional<string> summary;
    std::vector<std::shared_ptr<Reference>> supporting_info;
    std::optional<std::shared_ptr<Narrative>> text;
};

class ClinicalImpression_Finding {
public:
    std::optional<string> basis;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::optional<std::shared_ptr<CodeableConcept>> item_codeable_concept;
    std::optional<std::shared_ptr<Reference>> item_reference;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
};

class ClinicalImpression_Investigation {
public:
    std::shared_ptr<CodeableConcept> code_;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::vector<std::shared_ptr<Reference>> item;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
};

class CodeSystem {
public:
    std::optional<boolean> case_sensitive;
    std::optional<boolean> compositional;
    std::vector<std::shared_ptr<CodeSystem_Concept>> concept;
    std::vector<std::shared_ptr<ContactDetail>> contact;
    std::vector<std::shared_ptr<Resource>> contained;
    code content;
    std::optional<markdown> copyright;
    std::optional<unsignedInt> count;
    std::optional<dateTime> date_;
    std::optional<markdown> description;
    std::optional<boolean> experimental;
    std::vector<std::shared_ptr<Extension>> extension;
    std::vector<std::shared_ptr<CodeSystem_Filter>> filter;
    std::optional<code> hierarchy_meaning;
    std::optional<string> id_;
    std::vector<std::shared_ptr<Identifier>> identifier;
    std::optional<uri> implicit_rules;
    std::vector<std::shared_ptr<CodeableConcept>> jurisdiction;
    std::optional<code> language;
    std::optional<std::shared_ptr<Meta>> meta;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<string> name;
    std::vector<std::shared_ptr<CodeSystem_Property>> property;
    std::optional<string> publisher;
    std::optional<markdown> purpose;
    code status;
    std::optional<canonical> supplements;
    std::optional<std::shared_ptr<Narrative>> text;
    std::optional<string> title;
    std::optional<uri> url_;
    std::vector<std::shared_ptr<UsageContext>> use_context;
    std::optional<canonical> value_set;
    std::optional<string> version;
    std::optional<boolean> version_needed;
};

class CodeSystem_Concept {
public:
    code code_;
    std::vector<std::shared_ptr<CodeSystem_Concept>> concept;
    std::optional<string> definition;
    std::vector<std::shared_ptr<CodeSystem_Concept_Designation>> designation;
    std::optional<string> display;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::vector<std::shared_ptr<CodeSystem_Concept_Property>> property;
};

class CodeSystem_Concept_Designation {
public:
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::optional<code> language;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<std::shared_ptr<Coding>> use;
    string value;
};

class CodeSystem_Concept_Property {
public:
    code code_;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    using VALUE_Variant = std::variant<
        std::shared_ptr<code>,
        std::shared_ptr<Coding>,
        std::shared_ptr<string>,
        std::shared_ptr<integer>,
        std::shared_ptr<boolean>,
        std::shared_ptr<dateTime>,
        std::shared_ptr<decimal>
    >;
    VALUE_Variant value;
};

class CodeSystem_Filter {
public:
    code code_;
    std::optional<string> description;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    string value;
};

class CodeSystem_Property {
public:
    code code_;
    std::optional<string> description;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    code type;
    std::optional<uri> uri_;
};

class CodeableConcept {
public:
    std::vector<std::shared_ptr<Coding>> coding;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::optional<string> text;
};

class Coding {
public:
    std::optional<code> code_;
    std::optional<string> display;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::optional<uri> system;
    std::optional<boolean> user_selected;
    std::optional<string> version;
};

class Communication {
public:
    std::vector<std::shared_ptr<Reference>> about;
    std::vector<std::shared_ptr<Reference>> based_on;
    std::vector<std::shared_ptr<CodeableConcept>> category;
    std::vector<std::shared_ptr<Resource>> contained;
    std::optional<std::shared_ptr<Reference>> encounter;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::vector<std::shared_ptr<Identifier>> identifier;
    std::optional<uri> implicit_rules;
    std::vector<std::shared_ptr<Reference>> in_response_to;
    std::vector<canonical> instantiates_canonical;
    std::vector<uri> instantiates_uri;
    std::optional<code> language;
    std::vector<std::shared_ptr<CodeableConcept>> medium;
    std::optional<std::shared_ptr<Meta>> meta;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::vector<std::shared_ptr<Annotation>> note;
    std::vector<std::shared_ptr<Reference>> part_of;
    std::vector<std::shared_ptr<Communication_Payload>> payload;
    std::optional<code> priority;
    std::vector<std::shared_ptr<CodeableConcept>> reason_code;
    std::vector<std::shared_ptr<Reference>> reason_reference;
    std::optional<dateTime> received;
    std::vector<std::shared_ptr<Reference>> recipient;
    std::optional<std::shared_ptr<Reference>> sender;
    std::optional<dateTime> sent;
    code status;
    std::optional<std::shared_ptr<CodeableConcept>> status_reason;
    std::optional<std::shared_ptr<Reference>> subject;
    std::optional<std::shared_ptr<Narrative>> text;
    std::optional<std::shared_ptr<CodeableConcept>> topic;
};

class Communication_Payload {
public:
    using CONTENT_Variant = std::variant<
        std::shared_ptr<string>,
        std::shared_ptr<Attachment>,
        std::shared_ptr<Reference>
    >;
    CONTENT_Variant content;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
};

class CommunicationRequest {
public:
    std::vector<std::shared_ptr<Reference>> about;
    std::optional<dateTime> authored_on;
    std::vector<std::shared_ptr<Reference>> based_on;
    std::vector<std::shared_ptr<CodeableConcept>> category;
    std::vector<std::shared_ptr<Resource>> contained;
    std::optional<boolean> do_not_perform;
    std::optional<std::shared_ptr<Reference>> encounter;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<Identifier>> group_identifier;
    std::optional<string> id_;
    std::vector<std::shared_ptr<Identifier>> identifier;
    std::optional<uri> implicit_rules;
    std::optional<code> language;
    std::vector<std::shared_ptr<CodeableConcept>> medium;
    std::optional<std::shared_ptr<Meta>> meta;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::vector<std::shared_ptr<Annotation>> note;
    using OCCURRENCE_Variant = std::variant<
        std::shared_ptr<dateTime>,
        std::shared_ptr<Period>
    >;
    OCCURRENCE_Variant occurrence;
    std::vector<std::shared_ptr<CommunicationRequest_Payload>> payload;
    std::optional<code> priority;
    std::vector<std::shared_ptr<CodeableConcept>> reason_code;
    std::vector<std::shared_ptr<Reference>> reason_reference;
    std::vector<std::shared_ptr<Reference>> recipient;
    std::vector<std::shared_ptr<Reference>> replaces;
    std::optional<std::shared_ptr<Reference>> requester;
    std::optional<std::shared_ptr<Reference>> sender;
    code status;
    std::optional<std::shared_ptr<CodeableConcept>> status_reason;
    std::optional<std::shared_ptr<Reference>> subject;
    std::optional<std::shared_ptr<Narrative>> text;
};

class CommunicationRequest_Payload {
public:
    using CONTENT_Variant = std::variant<
        std::shared_ptr<string>,
        std::shared_ptr<Attachment>,
        std::shared_ptr<Reference>
    >;
    CONTENT_Variant content;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
};

class CompartmentDefinition {
public:
    code code_;
    std::vector<std::shared_ptr<ContactDetail>> contact;
    std::vector<std::shared_ptr<Resource>> contained;
    std::optional<dateTime> date_;
    std::optional<markdown> description;
    std::optional<boolean> experimental;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::optional<uri> implicit_rules;
    std::optional<code> language;
    std::optional<std::shared_ptr<Meta>> meta;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    string name;
    std::optional<string> publisher;
    std::optional<markdown> purpose;
    std::vector<std::shared_ptr<CompartmentDefinition_Resource>> resource;
    boolean search;
    code status;
    std::optional<std::shared_ptr<Narrative>> text;
    uri url_;
    std::vector<std::shared_ptr<UsageContext>> use_context;
    std::optional<string> version;
};

class CompartmentDefinition_Resource {
public:
    code code_;
    std::optional<string> documentation;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::vector<string> param;
};

class Composition {
public:
    std::vector<std::shared_ptr<Composition_Attester>> attester;
    std::vector<std::shared_ptr<CodeableConcept>> category;
    std::optional<code> confidentiality;
    std::vector<std::shared_ptr<Resource>> contained;
    std::optional<std::shared_ptr<Reference>> custodian;
    dateTime date_;
    std::optional<std::shared_ptr<Reference>> encounter;
    std::vector<std::shared_ptr<Composition_Event>> event;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::optional<std::shared_ptr<Identifier>> identifier;
    std::optional<uri> implicit_rules;
    std::optional<code> language;
    std::optional<std::shared_ptr<Meta>> meta;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::vector<std::shared_ptr<Composition_RelatesTo>> relates_to;
    std::vector<std::shared_ptr<Composition_Section>> section;
    code status;
    std::optional<std::shared_ptr<Reference>> subject;
    std::optional<std::shared_ptr<Narrative>> text;
    string title;
    std::shared_ptr<CodeableConcept> type;
};

class Composition_Attester {
public:
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    code mode;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<std::shared_ptr<Reference>> party;
    std::optional<dateTime> time_;
};

class Composition_Event {
public:
    std::vector<std::shared_ptr<CodeableConcept>> code_;
    std::vector<std::shared_ptr<Reference>> detail;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<std::shared_ptr<Period>> period;
};

class Composition_RelatesTo {
public:
    code code_;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
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
    std::optional<string> id_;
    std::optional<code> mode;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<std::shared_ptr<CodeableConcept>> ordered_by;
    std::vector<std::shared_ptr<Composition_Section>> section;
    std::optional<std::shared_ptr<Narrative>> text;
    std::optional<string> title;
};

class ConceptMap {
public:
    std::vector<std::shared_ptr<ContactDetail>> contact;
    std::vector<std::shared_ptr<Resource>> contained;
    std::optional<markdown> copyright;
    std::optional<dateTime> date_;
    std::optional<markdown> description;
    std::optional<boolean> experimental;
    std::vector<std::shared_ptr<Extension>> extension;
    std::vector<std::shared_ptr<ConceptMap_Group>> group;
    std::optional<string> id_;
    std::optional<std::shared_ptr<Identifier>> identifier;
    std::optional<uri> implicit_rules;
    std::vector<std::shared_ptr<CodeableConcept>> jurisdiction;
    std::optional<code> language;
    std::optional<std::shared_ptr<Meta>> meta;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<string> name;
    std::optional<string> publisher;
    std::optional<markdown> purpose;
    using SOURCE_Variant = std::variant<
        std::shared_ptr<uri>,
        std::shared_ptr<canonical>
    >;
    SOURCE_Variant source;
    code status;
    using TARGET_Variant = std::variant<
        std::shared_ptr<uri>,
        std::shared_ptr<canonical>
    >;
    TARGET_Variant target;
    std::optional<std::shared_ptr<Narrative>> text;
    std::optional<string> title;
    std::optional<uri> url_;
    std::vector<std::shared_ptr<UsageContext>> use_context;
    std::optional<string> version;
};

class ConceptMap_Group {
public:
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<uri> source;
    std::optional<string> source_version;
    std::optional<uri> target;
    std::optional<string> target_version;
    std::optional<std::shared_ptr<ConceptMap_Group_Unmapped>> unmapped;
};

class ConceptMap_Group_Element {
public:
    std::optional<code> code_;
    std::optional<string> display;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::vector<std::shared_ptr<ConceptMap_Group_Element_Target>> target;
};

class ConceptMap_Group_Element_Target {
public:
    std::optional<code> code_;
    std::optional<string> comment;
    std::vector<std::shared_ptr<ConceptMap_Group_Element_Target_DependsOn>> depends_on;
    std::optional<string> display;
    code equivalence;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::vector<std::shared_ptr<ConceptMap_Group_Element_Target_DependsOn>> product;
};

class ConceptMap_Group_Element_Target_DependsOn {
public:
    std::optional<string> display;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    uri property;
    std::optional<canonical> system;
    string value;
};

class ConceptMap_Group_Unmapped {
public:
    std::optional<code> code_;
    std::optional<string> display;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    code mode;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<canonical> url_;
};

class Condition {
public:
    using ABATEMENT_Variant = std::variant<
        std::shared_ptr<dateTime>,
        std::shared_ptr<Age>,
        std::shared_ptr<Period>,
        std::shared_ptr<Range>,
        std::shared_ptr<string>
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
    std::optional<string> id_;
    std::vector<std::shared_ptr<Identifier>> identifier;
    std::optional<uri> implicit_rules;
    std::optional<code> language;
    std::optional<std::shared_ptr<Meta>> meta;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::vector<std::shared_ptr<Annotation>> note;
    using ONSET_Variant = std::variant<
        std::shared_ptr<dateTime>,
        std::shared_ptr<Age>,
        std::shared_ptr<Period>,
        std::shared_ptr<Range>,
        std::shared_ptr<string>
    >;
    ONSET_Variant onset;
    std::optional<dateTime> recorded_date;
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
    std::optional<string> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
};

class Condition_Stage {
public:
    std::vector<std::shared_ptr<Reference>> assessment;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<std::shared_ptr<CodeableConcept>> summary;
    std::optional<std::shared_ptr<CodeableConcept>> type;
};

class Consent {
public:
    std::vector<std::shared_ptr<Resource>> contained;
    std::optional<dateTime> date_time;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::vector<std::shared_ptr<Identifier>> identifier;
    std::optional<uri> implicit_rules;
    std::optional<code> language;
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
    code status;
    std::optional<std::shared_ptr<Narrative>> text;
    std::vector<std::shared_ptr<Consent_Verification>> verification;
};

class Consent_Policy {
public:
    std::optional<uri> authority;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<uri> uri_;
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
    std::optional<string> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<std::shared_ptr<Period>> period;
    std::vector<std::shared_ptr<Consent_Provision>> provision;
    std::vector<std::shared_ptr<Coding>> purpose;
    std::vector<std::shared_ptr<Coding>> security_label;
    std::optional<code> type;
};

class Consent_Provision_Actor {
public:
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::shared_ptr<Reference> reference;
    std::shared_ptr<CodeableConcept> role;
};

class Consent_Provision_Data {
public:
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    code meaning;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::shared_ptr<Reference> reference;
};

class Consent_Verification {
public:
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<dateTime> verification_date;
    boolean verified;
    std::optional<std::shared_ptr<Reference>> verified_with;
};

class ContactDetail {
public:
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::optional<string> name;
    std::vector<std::shared_ptr<ContactPoint>> telecom;
};

class ContactPoint {
public:
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::optional<std::shared_ptr<Period>> period;
    std::optional<positiveInt> rank;
    std::optional<code> system;
    std::optional<code> use;
    std::optional<string> value;
};

class Contract {
public:
    std::vector<string> alias;
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
    std::optional<string> id_;
    std::vector<std::shared_ptr<Identifier>> identifier;
    std::optional<uri> implicit_rules;
    std::optional<std::shared_ptr<Reference>> instantiates_canonical;
    std::optional<uri> instantiates_uri;
    std::optional<dateTime> issued;
    std::optional<code> language;
    std::vector<std::shared_ptr<Contract_Legal>> legal;
    std::optional<std::shared_ptr<CodeableConcept>> legal_state;
    using LEGALLY_BINDING_Variant = std::variant<
        std::shared_ptr<Attachment>,
        std::shared_ptr<Reference>
    >;
    LEGALLY_BINDING_Variant legally_binding;
    std::optional<std::shared_ptr<Meta>> meta;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<string> name;
    std::vector<std::shared_ptr<Reference>> relevant_history;
    std::vector<std::shared_ptr<Contract_Rule>> rule;
    std::optional<std::shared_ptr<CodeableConcept>> scope;
    std::vector<std::shared_ptr<Contract_Signer>> signer;
    std::vector<std::shared_ptr<Reference>> site;
    std::optional<code> status;
    std::vector<std::shared_ptr<CodeableConcept>> sub_type;
    std::vector<std::shared_ptr<Reference>> subject;
    std::optional<string> subtitle;
    std::vector<std::shared_ptr<Reference>> supporting_info;
    std::vector<std::shared_ptr<Contract_Term>> term;
    std::optional<std::shared_ptr<Narrative>> text;
    std::optional<string> title;
    using TOPIC_Variant = std::variant<
        std::shared_ptr<CodeableConcept>,
        std::shared_ptr<Reference>
    >;
    TOPIC_Variant topic;
    std::optional<std::shared_ptr<CodeableConcept>> type;
    std::optional<uri> url_;
    std::optional<string> version;
};

class Contract_ContentDefinition {
public:
    std::optional<markdown> copyright;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<dateTime> publication_date;
    code publication_status;
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
    std::optional<string> id_;
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
    std::optional<string> id_;
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
    std::optional<string> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
};

class Contract_Signer {
public:
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
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
    std::optional<string> id_;
    std::optional<std::shared_ptr<Identifier>> identifier;
    std::optional<dateTime> issued;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::shared_ptr<Contract_Term_Offer> offer;
    std::vector<std::shared_ptr<Contract_Term_SecurityLabel>> security_label;
    std::optional<std::shared_ptr<CodeableConcept>> sub_type;
    std::optional<string> text;
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
    std::vector<string> context_link_id;
    std::optional<boolean> do_not_perform;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::shared_ptr<CodeableConcept> intent;
    std::vector<string> link_id;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::vector<std::shared_ptr<Annotation>> note;
    using OCCURRENCE_Variant = std::variant<
        std::shared_ptr<dateTime>,
        std::shared_ptr<Period>,
        std::shared_ptr<Timing>
    >;
    OCCURRENCE_Variant occurrence;
    std::optional<std::shared_ptr<Reference>> performer;
    std::vector<string> performer_link_id;
    std::optional<std::shared_ptr<CodeableConcept>> performer_role;
    std::vector<std::shared_ptr<CodeableConcept>> performer_type;
    std::vector<string> reason;
    std::vector<std::shared_ptr<CodeableConcept>> reason_code;
    std::vector<string> reason_link_id;
    std::vector<std::shared_ptr<Reference>> reason_reference;
    std::vector<std::shared_ptr<Reference>> requester;
    std::vector<string> requester_link_id;
    std::vector<unsignedInt> security_label_number;
    std::shared_ptr<CodeableConcept> status;
    std::vector<std::shared_ptr<Contract_Term_Action_Subject>> subject;
    std::shared_ptr<CodeableConcept> type;
};

class Contract_Term_Action_Subject {
public:
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<std::shared_ptr<CodeableConcept>> role;
};

class Contract_Term_Asset {
public:
    std::vector<std::shared_ptr<Contract_Term_Offer_Answer>> answer;
    std::optional<string> condition;
    std::vector<std::shared_ptr<Contract_Term_Asset_Context>> context;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::vector<string> link_id;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::vector<std::shared_ptr<Period>> period;
    std::vector<std::shared_ptr<CodeableConcept>> period_type;
    std::optional<std::shared_ptr<Coding>> relationship;
    std::optional<std::shared_ptr<CodeableConcept>> scope;
    std::vector<unsignedInt> security_label_number;
    std::vector<std::shared_ptr<CodeableConcept>> subtype;
    std::optional<string> text;
    std::vector<std::shared_ptr<CodeableConcept>> type;
    std::vector<std::shared_ptr<Reference>> type_reference;
    std::vector<std::shared_ptr<Period>> use_period;
    std::vector<std::shared_ptr<Contract_Term_Asset_ValuedItem>> valued_item;
};

class Contract_Term_Asset_Context {
public:
    std::vector<std::shared_ptr<CodeableConcept>> code_;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<std::shared_ptr<Reference>> reference;
    std::optional<string> text;
};

class Contract_Term_Asset_ValuedItem {
public:
    std::optional<dateTime> effective_time;
    using ENTITY_Variant = std::variant<
        std::shared_ptr<CodeableConcept>,
        std::shared_ptr<Reference>
    >;
    ENTITY_Variant entity;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<decimal> factor;
    std::optional<string> id_;
    std::optional<std::shared_ptr<Identifier>> identifier;
    std::vector<string> link_id;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<std::shared_ptr<Money>> net;
    std::optional<string> payment;
    std::optional<dateTime> payment_date;
    std::optional<decimal> points;
    std::optional<std::shared_ptr<Quantity>> quantity;
    std::optional<std::shared_ptr<Reference>> recipient;
    std::optional<std::shared_ptr<Reference>> responsible;
    std::vector<unsignedInt> security_label_number;
    std::optional<std::shared_ptr<Money>> unit_price;
};

class Contract_Term_Offer {
public:
    std::vector<std::shared_ptr<Contract_Term_Offer_Answer>> answer;
    std::optional<std::shared_ptr<CodeableConcept>> decision;
    std::vector<std::shared_ptr<CodeableConcept>> decision_mode;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::vector<std::shared_ptr<Identifier>> identifier;
    std::vector<string> link_id;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::vector<std::shared_ptr<Contract_Term_Offer_Party>> party;
    std::vector<unsignedInt> security_label_number;
    std::optional<string> text;
    std::optional<std::shared_ptr<Reference>> topic;
    std::optional<std::shared_ptr<CodeableConcept>> type;
};

class Contract_Term_Offer_Answer {
public:
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    using VALUE_Variant = std::variant<
        std::shared_ptr<boolean>,
        std::shared_ptr<decimal>,
        std::shared_ptr<integer>,
        std::shared_ptr<date>,
        std::shared_ptr<dateTime>,
        std::shared_ptr<time>,
        std::shared_ptr<string>,
        std::shared_ptr<uri>,
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
    std::optional<string> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::shared_ptr<CodeableConcept> role;
};

class Contract_Term_SecurityLabel {
public:
    std::vector<std::shared_ptr<Coding>> category;
    std::shared_ptr<Coding> classification;
    std::vector<std::shared_ptr<Coding>> control;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::vector<unsignedInt> number;
};

class Contributor {
public:
    std::vector<std::shared_ptr<ContactDetail>> contact;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    string name;
    code type;
};

class Count {
public:
    std::optional<code> code_;
    std::optional<code> comparator;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::optional<uri> system;
    std::optional<string> unit;
    std::optional<decimal> value;
};

class Coverage {
public:
    std::shared_ptr<Reference> beneficiary;
    std::vector<std::shared_ptr<Coverage_Class>> class_;
    std::vector<std::shared_ptr<Resource>> contained;
    std::vector<std::shared_ptr<Reference>> contract;
    std::vector<std::shared_ptr<Coverage_CostToBeneficiary>> cost_to_beneficiary;
    std::optional<string> dependent;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::vector<std::shared_ptr<Identifier>> identifier;
    std::optional<uri> implicit_rules;
    std::optional<code> language;
    std::optional<std::shared_ptr<Meta>> meta;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<string> network;
    std::optional<positiveInt> order;
    std::optional<std::shared_ptr<Period>> period;
    std::optional<std::shared_ptr<Reference>> policy_holder;
    std::optional<std::shared_ptr<CodeableConcept>> relationship;
    code status;
    std::optional<boolean> subrogation;
    std::optional<std::shared_ptr<Reference>> subscriber;
    std::optional<string> subscriber_id;
    std::optional<std::shared_ptr<Narrative>> text;
    std::optional<std::shared_ptr<CodeableConcept>> type;
};

class Coverage_Class {
public:
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<string> name;
    std::shared_ptr<CodeableConcept> type;
    string value;
};

class Coverage_CostToBeneficiary {
public:
    std::vector<std::shared_ptr<Coverage_CostToBeneficiary_Exception>> exception;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
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
    std::optional<string> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<std::shared_ptr<Period>> period;
    std::shared_ptr<CodeableConcept> type;
};

class CoverageEligibilityRequest {
public:
    std::vector<std::shared_ptr<Resource>> contained;
    dateTime created;
    std::optional<std::shared_ptr<Reference>> enterer;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<Reference>> facility;
    std::optional<string> id_;
    std::vector<std::shared_ptr<Identifier>> identifier;
    std::optional<uri> implicit_rules;
    std::vector<std::shared_ptr<CoverageEligibilityRequest_Insurance>> insurance;
    std::shared_ptr<Reference> insurer;
    std::vector<std::shared_ptr<CoverageEligibilityRequest_Item>> item;
    std::optional<code> language;
    std::optional<std::shared_ptr<Meta>> meta;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::shared_ptr<Reference> patient;
    std::optional<std::shared_ptr<CodeableConcept>> priority;
    std::optional<std::shared_ptr<Reference>> provider;
    using SERVICED_Variant = std::variant<
        std::shared_ptr<date>,
        std::shared_ptr<Period>
    >;
    SERVICED_Variant serviced;
    code status;
    std::vector<std::shared_ptr<CoverageEligibilityRequest_SupportingInfo>> supporting_info;
    std::optional<std::shared_ptr<Narrative>> text;
};

class CoverageEligibilityRequest_Insurance {
public:
    std::optional<string> business_arrangement;
    std::shared_ptr<Reference> coverage;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<boolean> focal;
    std::optional<string> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
};

class CoverageEligibilityRequest_Item {
public:
    std::optional<std::shared_ptr<CodeableConcept>> category;
    std::vector<std::shared_ptr<Reference>> detail;
    std::vector<std::shared_ptr<CoverageEligibilityRequest_Item_Diagnosis>> diagnosis;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<Reference>> facility;
    std::optional<string> id_;
    std::vector<std::shared_ptr<CodeableConcept>> modifier;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<std::shared_ptr<CodeableConcept>> product_or_service;
    std::optional<std::shared_ptr<Reference>> provider;
    std::optional<std::shared_ptr<Quantity>> quantity;
    std::vector<positiveInt> supporting_info_sequence;
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
    std::optional<string> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
};

class CoverageEligibilityRequest_SupportingInfo {
public:
    std::optional<boolean> applies_to_all;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::shared_ptr<Reference> information;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    positiveInt sequence;
};

class CoverageEligibilityResponse {
public:
    std::vector<std::shared_ptr<Resource>> contained;
    dateTime created;
    std::optional<string> disposition;
    std::vector<std::shared_ptr<CoverageEligibilityResponse_Error>> error;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<CodeableConcept>> form;
    std::optional<string> id_;
    std::vector<std::shared_ptr<Identifier>> identifier;
    std::optional<uri> implicit_rules;
    std::vector<std::shared_ptr<CoverageEligibilityResponse_Insurance>> insurance;
    std::shared_ptr<Reference> insurer;
    std::optional<code> language;
    std::optional<std::shared_ptr<Meta>> meta;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    code outcome;
    std::shared_ptr<Reference> patient;
    std::optional<string> pre_auth_ref;
    std::shared_ptr<Reference> request;
    std::optional<std::shared_ptr<Reference>> requestor;
    using SERVICED_Variant = std::variant<
        std::shared_ptr<date>,
        std::shared_ptr<Period>
    >;
    SERVICED_Variant serviced;
    code status;
    std::optional<std::shared_ptr<Narrative>> text;
};

class CoverageEligibilityResponse_Error {
public:
    std::shared_ptr<CodeableConcept> code_;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
};

class CoverageEligibilityResponse_Insurance {
public:
    std::optional<std::shared_ptr<Period>> benefit_period;
    std::shared_ptr<Reference> coverage;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::optional<boolean> inforce;
    std::vector<std::shared_ptr<CoverageEligibilityResponse_Insurance_Item>> item;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
};

class CoverageEligibilityResponse_Insurance_Item {
public:
    std::optional<boolean> authorization_required;
    std::vector<std::shared_ptr<CodeableConcept>> authorization_supporting;
    std::optional<uri> authorization_url;
    std::vector<std::shared_ptr<CoverageEligibilityResponse_Insurance_Item_Benefit>> benefit;
    std::optional<std::shared_ptr<CodeableConcept>> category;
    std::optional<string> description;
    std::optional<boolean> excluded;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::vector<std::shared_ptr<CodeableConcept>> modifier;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<string> name;
    std::optional<std::shared_ptr<CodeableConcept>> network;
    std::optional<std::shared_ptr<CodeableConcept>> product_or_service;
    std::optional<std::shared_ptr<Reference>> provider;
    std::optional<std::shared_ptr<CodeableConcept>> term;
    std::optional<std::shared_ptr<CodeableConcept>> unit;
};

class CoverageEligibilityResponse_Insurance_Item_Benefit {
public:
    using ALLOWED_Variant = std::variant<
        std::shared_ptr<unsignedInt>,
        std::shared_ptr<string>,
        std::shared_ptr<Money>
    >;
    ALLOWED_Variant allowed;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::shared_ptr<CodeableConcept> type;
    using USED_Variant = std::variant<
        std::shared_ptr<unsignedInt>,
        std::shared_ptr<string>,
        std::shared_ptr<Money>
    >;
    USED_Variant used;
};

class DataRequirement {
public:
    std::vector<std::shared_ptr<DataRequirement_CodeFilter>> code_filter;
    std::vector<std::shared_ptr<DataRequirement_DateFilter>> date_filter;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::optional<positiveInt> limit;
    std::vector<string> must_support;
    std::vector<canonical> profile;
    std::vector<std::shared_ptr<DataRequirement_Sort>> sort;
    using SUBJECT_Variant = std::variant<
        std::shared_ptr<CodeableConcept>,
        std::shared_ptr<Reference>
    >;
    SUBJECT_Variant subject;
    code type;
};

class DataRequirement_CodeFilter {
public:
    std::vector<std::shared_ptr<Coding>> code_;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::optional<string> path;
    std::optional<string> search_param;
    std::optional<canonical> value_set;
};

class DataRequirement_DateFilter {
public:
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::optional<string> path;
    std::optional<string> search_param;
    using VALUE_Variant = std::variant<
        std::shared_ptr<dateTime>,
        std::shared_ptr<Period>,
        std::shared_ptr<Duration>
    >;
    VALUE_Variant value;
};

class DataRequirement_Sort {
public:
    code direction;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    string path;
};

class DetectedIssue {
public:
    std::optional<std::shared_ptr<Reference>> author;
    std::optional<std::shared_ptr<CodeableConcept>> code_;
    std::vector<std::shared_ptr<Resource>> contained;
    std::optional<string> detail;
    std::vector<std::shared_ptr<DetectedIssue_Evidence>> evidence;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    using IDENTIFIED_Variant = std::variant<
        std::shared_ptr<dateTime>,
        std::shared_ptr<Period>
    >;
    IDENTIFIED_Variant identified;
    std::vector<std::shared_ptr<Identifier>> identifier;
    std::vector<std::shared_ptr<Reference>> implicated;
    std::optional<uri> implicit_rules;
    std::optional<code> language;
    std::optional<std::shared_ptr<Meta>> meta;
    std::vector<std::shared_ptr<DetectedIssue_Mitigation>> mitigation;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<std::shared_ptr<Reference>> patient;
    std::optional<uri> reference;
    std::optional<code> severity;
    code status;
    std::optional<std::shared_ptr<Narrative>> text;
};

class DetectedIssue_Evidence {
public:
    std::vector<std::shared_ptr<CodeableConcept>> code_;
    std::vector<std::shared_ptr<Reference>> detail;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
};

class DetectedIssue_Mitigation {
public:
    std::shared_ptr<CodeableConcept> action;
    std::optional<std::shared_ptr<Reference>> author;
    std::optional<dateTime> date_;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
};

class Device {
public:
    std::vector<std::shared_ptr<ContactPoint>> contact;
    std::vector<std::shared_ptr<Resource>> contained;
    std::optional<std::shared_ptr<Reference>> definition;
    std::vector<std::shared_ptr<Device_DeviceName>> device_name;
    std::optional<string> distinct_identifier;
    std::optional<dateTime> expiration_date;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::vector<std::shared_ptr<Identifier>> identifier;
    std::optional<uri> implicit_rules;
    std::optional<code> language;
    std::optional<std::shared_ptr<Reference>> location;
    std::optional<string> lot_number;
    std::optional<dateTime> manufacture_date;
    std::optional<string> manufacturer;
    std::optional<std::shared_ptr<Meta>> meta;
    std::optional<string> model_number;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::vector<std::shared_ptr<Annotation>> note;
    std::optional<std::shared_ptr<Reference>> owner;
    std::optional<std::shared_ptr<Reference>> parent;
    std::optional<string> part_number;
    std::optional<std::shared_ptr<Reference>> patient;
    std::vector<std::shared_ptr<Device_Property>> property;
    std::vector<std::shared_ptr<CodeableConcept>> safety;
    std::optional<string> serial_number;
    std::vector<std::shared_ptr<Device_Specialization>> specialization;
    std::optional<code> status;
    std::vector<std::shared_ptr<CodeableConcept>> status_reason;
    std::optional<std::shared_ptr<Narrative>> text;
    std::optional<std::shared_ptr<CodeableConcept>> type;
    std::vector<std::shared_ptr<Device_UdiCarrier>> udi_carrier;
    std::optional<uri> url_;
    std::vector<std::shared_ptr<Device_Version>> version;
};

class Device_DeviceName {
public:
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    string name;
    code type;
};

class Device_Property {
public:
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::shared_ptr<CodeableConcept> type;
    std::vector<std::shared_ptr<CodeableConcept>> value_code;
    std::vector<std::shared_ptr<Quantity>> value_quantity;
};

class Device_Specialization {
public:
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::shared_ptr<CodeableConcept> system_type;
    std::optional<string> version;
};

class Device_UdiCarrier {
public:
    std::optional<base64Binary> carrier_a_i_d_c;
    std::optional<string> carrier_h_r_f;
    std::optional<string> device_identifier;
    std::optional<code> entry_type;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::optional<uri> issuer;
    std::optional<uri> jurisdiction;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
};

class Device_Version {
public:
    std::optional<std::shared_ptr<Identifier>> component;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<std::shared_ptr<CodeableConcept>> type;
    string value;
};

class DeviceDefinition {
public:
    std::vector<std::shared_ptr<DeviceDefinition_Capability>> capability;
    std::vector<std::shared_ptr<ContactPoint>> contact;
    std::vector<std::shared_ptr<Resource>> contained;
    std::vector<std::shared_ptr<DeviceDefinition_DeviceName>> device_name;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::vector<std::shared_ptr<Identifier>> identifier;
    std::optional<uri> implicit_rules;
    std::optional<code> language;
    std::vector<std::shared_ptr<CodeableConcept>> language_code;
    using MANUFACTURER_Variant = std::variant<
        std::shared_ptr<string>,
        std::shared_ptr<Reference>
    >;
    MANUFACTURER_Variant manufacturer;
    std::vector<std::shared_ptr<DeviceDefinition_Material>> material;
    std::optional<std::shared_ptr<Meta>> meta;
    std::optional<string> model_number;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::vector<std::shared_ptr<Annotation>> note;
    std::optional<uri> online_information;
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
    std::optional<uri> url_;
    std::vector<string> version;
};

class DeviceDefinition_Capability {
public:
    std::vector<std::shared_ptr<CodeableConcept>> description;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::shared_ptr<CodeableConcept> type;
};

class DeviceDefinition_DeviceName {
public:
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    string name;
    code type;
};

class DeviceDefinition_Material {
public:
    std::optional<boolean> allergenic_indicator;
    std::optional<boolean> alternate;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::shared_ptr<CodeableConcept> substance;
};

class DeviceDefinition_Property {
public:
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::shared_ptr<CodeableConcept> type;
    std::vector<std::shared_ptr<CodeableConcept>> value_code;
    std::vector<std::shared_ptr<Quantity>> value_quantity;
};

class DeviceDefinition_Specialization {
public:
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    string system_type;
    std::optional<string> version;
};

class DeviceDefinition_UdiDeviceIdentifier {
public:
    string device_identifier;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    uri issuer;
    uri jurisdiction;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
};

class DeviceMetric {
public:
    std::vector<std::shared_ptr<DeviceMetric_Calibration>> calibration;
    code category;
    std::optional<code> color;
    std::vector<std::shared_ptr<Resource>> contained;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::vector<std::shared_ptr<Identifier>> identifier;
    std::optional<uri> implicit_rules;
    std::optional<code> language;
    std::optional<std::shared_ptr<Timing>> measurement_period;
    std::optional<std::shared_ptr<Meta>> meta;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<code> operational_status;
    std::optional<std::shared_ptr<Reference>> parent;
    std::optional<std::shared_ptr<Reference>> source;
    std::optional<std::shared_ptr<Narrative>> text;
    std::shared_ptr<CodeableConcept> type;
    std::optional<std::shared_ptr<CodeableConcept>> unit;
};

class DeviceMetric_Calibration {
public:
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<code> state;
    std::optional<instant> time_;
    std::optional<code> type;
};

class DeviceRequest {
public:
    std::optional<dateTime> authored_on;
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
    std::optional<string> id_;
    std::vector<std::shared_ptr<Identifier>> identifier;
    std::optional<uri> implicit_rules;
    std::vector<canonical> instantiates_canonical;
    std::vector<uri> instantiates_uri;
    std::vector<std::shared_ptr<Reference>> insurance;
    code intent;
    std::optional<code> language;
    std::optional<std::shared_ptr<Meta>> meta;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::vector<std::shared_ptr<Annotation>> note;
    using OCCURRENCE_Variant = std::variant<
        std::shared_ptr<dateTime>,
        std::shared_ptr<Period>,
        std::shared_ptr<Timing>
    >;
    OCCURRENCE_Variant occurrence;
    std::vector<std::shared_ptr<DeviceRequest_Parameter>> parameter;
    std::optional<std::shared_ptr<Reference>> performer;
    std::optional<std::shared_ptr<CodeableConcept>> performer_type;
    std::vector<std::shared_ptr<Reference>> prior_request;
    std::optional<code> priority;
    std::vector<std::shared_ptr<CodeableConcept>> reason_code;
    std::vector<std::shared_ptr<Reference>> reason_reference;
    std::vector<std::shared_ptr<Reference>> relevant_history;
    std::optional<std::shared_ptr<Reference>> requester;
    std::optional<code> status;
    std::shared_ptr<Reference> subject;
    std::vector<std::shared_ptr<Reference>> supporting_info;
    std::optional<std::shared_ptr<Narrative>> text;
};

class DeviceRequest_Parameter {
public:
    std::optional<std::shared_ptr<CodeableConcept>> code_;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    using VALUE_Variant = std::variant<
        std::shared_ptr<CodeableConcept>,
        std::shared_ptr<Quantity>,
        std::shared_ptr<Range>,
        std::shared_ptr<boolean>
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
    std::optional<string> id_;
    std::vector<std::shared_ptr<Identifier>> identifier;
    std::optional<uri> implicit_rules;
    std::optional<code> language;
    std::optional<std::shared_ptr<Meta>> meta;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::vector<std::shared_ptr<Annotation>> note;
    std::vector<std::shared_ptr<CodeableConcept>> reason_code;
    std::vector<std::shared_ptr<Reference>> reason_reference;
    std::optional<dateTime> recorded_on;
    std::optional<std::shared_ptr<Reference>> source;
    code status;
    std::shared_ptr<Reference> subject;
    std::optional<std::shared_ptr<Narrative>> text;
    using TIMING_Variant = std::variant<
        std::shared_ptr<Timing>,
        std::shared_ptr<Period>,
        std::shared_ptr<dateTime>
    >;
    TIMING_Variant timing;
};

class DiagnosticReport {
public:
    std::vector<std::shared_ptr<Reference>> based_on;
    std::vector<std::shared_ptr<CodeableConcept>> category;
    std::shared_ptr<CodeableConcept> code_;
    std::optional<string> conclusion;
    std::vector<std::shared_ptr<CodeableConcept>> conclusion_code;
    std::vector<std::shared_ptr<Resource>> contained;
    using EFFECTIVE_Variant = std::variant<
        std::shared_ptr<dateTime>,
        std::shared_ptr<Period>
    >;
    EFFECTIVE_Variant effective;
    std::optional<std::shared_ptr<Reference>> encounter;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::vector<std::shared_ptr<Identifier>> identifier;
    std::vector<std::shared_ptr<Reference>> imaging_study;
    std::optional<uri> implicit_rules;
    std::optional<instant> issued;
    std::optional<code> language;
    std::vector<std::shared_ptr<DiagnosticReport_Media>> media;
    std::optional<std::shared_ptr<Meta>> meta;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::vector<std::shared_ptr<Reference>> performer;
    std::vector<std::shared_ptr<Attachment>> presented_form;
    std::vector<std::shared_ptr<Reference>> result;
    std::vector<std::shared_ptr<Reference>> results_interpreter;
    std::vector<std::shared_ptr<Reference>> specimen;
    code status;
    std::optional<std::shared_ptr<Reference>> subject;
    std::optional<std::shared_ptr<Narrative>> text;
};

class DiagnosticReport_Media {
public:
    std::optional<string> comment;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::shared_ptr<Reference> link;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
};

class Distance {
public:
    std::optional<code> code_;
    std::optional<code> comparator;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::optional<uri> system;
    std::optional<string> unit;
    std::optional<decimal> value;
};

class DocumentManifest {
public:
    std::vector<std::shared_ptr<Reference>> author;
    std::vector<std::shared_ptr<Resource>> contained;
    std::optional<dateTime> created;
    std::optional<string> description;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::vector<std::shared_ptr<Identifier>> identifier;
    std::optional<uri> implicit_rules;
    std::optional<code> language;
    std::optional<std::shared_ptr<Identifier>> master_identifier;
    std::optional<std::shared_ptr<Meta>> meta;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::vector<std::shared_ptr<Reference>> recipient;
    std::vector<std::shared_ptr<DocumentManifest_Related>> related;
    std::optional<uri> source;
    code status;
    std::optional<std::shared_ptr<Reference>> subject;
    std::optional<std::shared_ptr<Narrative>> text;
    std::optional<std::shared_ptr<CodeableConcept>> type;
};

class DocumentManifest_Related {
public:
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
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
    std::optional<instant> date_;
    std::optional<string> description;
    std::optional<code> doc_status;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::vector<std::shared_ptr<Identifier>> identifier;
    std::optional<uri> implicit_rules;
    std::optional<code> language;
    std::optional<std::shared_ptr<Identifier>> master_identifier;
    std::optional<std::shared_ptr<Meta>> meta;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::vector<std::shared_ptr<DocumentReference_RelatesTo>> relates_to;
    std::vector<std::shared_ptr<CodeableConcept>> security_label;
    code status;
    std::optional<std::shared_ptr<Reference>> subject;
    std::optional<std::shared_ptr<Narrative>> text;
    std::optional<std::shared_ptr<CodeableConcept>> type;
};

class DocumentReference_Content {
public:
    std::shared_ptr<Attachment> attachment;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<Coding>> format;
    std::optional<string> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
};

class DocumentReference_Context {
public:
    std::vector<std::shared_ptr<Reference>> encounter;
    std::vector<std::shared_ptr<CodeableConcept>> event;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<CodeableConcept>> facility_type;
    std::optional<string> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<std::shared_ptr<Period>> period;
    std::optional<std::shared_ptr<CodeableConcept>> practice_setting;
    std::vector<std::shared_ptr<Reference>> related;
    std::optional<std::shared_ptr<Reference>> source_patient_info;
};

class DocumentReference_RelatesTo {
public:
    code code_;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::shared_ptr<Reference> target;
};

class DomainResource {
public:
    std::vector<std::shared_ptr<Resource>> contained;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::optional<uri> implicit_rules;
    std::optional<code> language;
    std::optional<std::shared_ptr<Meta>> meta;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<std::shared_ptr<Narrative>> text;
};

class Dosage {
public:
    std::vector<std::shared_ptr<CodeableConcept>> additional_instruction;
    using AS_NEEDED_Variant = std::variant<
        std::shared_ptr<boolean>,
        std::shared_ptr<CodeableConcept>
    >;
    AS_NEEDED_Variant as_needed;
    std::vector<std::shared_ptr<Dosage_DoseAndRate>> dose_and_rate;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::optional<std::shared_ptr<Quantity>> max_dose_per_administration;
    std::optional<std::shared_ptr<Quantity>> max_dose_per_lifetime;
    std::optional<std::shared_ptr<Ratio>> max_dose_per_period;
    std::optional<std::shared_ptr<CodeableConcept>> method;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<string> patient_instruction;
    std::optional<std::shared_ptr<CodeableConcept>> route;
    std::optional<integer> sequence;
    std::optional<std::shared_ptr<CodeableConcept>> site;
    std::optional<string> text;
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
    std::optional<string> id_;
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
    std::optional<code> code_;
    std::optional<code> comparator;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::optional<uri> system;
    std::optional<string> unit;
    std::optional<decimal> value;
};

class EffectEvidenceSynthesis {
public:
    std::optional<date> approval_date;
    std::vector<std::shared_ptr<ContactDetail>> author;
    std::vector<std::shared_ptr<EffectEvidenceSynthesis_Certainty>> certainty;
    std::vector<std::shared_ptr<ContactDetail>> contact;
    std::vector<std::shared_ptr<Resource>> contained;
    std::optional<markdown> copyright;
    std::optional<dateTime> date_;
    std::optional<markdown> description;
    std::vector<std::shared_ptr<ContactDetail>> editor;
    std::vector<std::shared_ptr<EffectEvidenceSynthesis_EffectEstimate>> effect_estimate;
    std::optional<std::shared_ptr<Period>> effective_period;
    std::vector<std::shared_ptr<ContactDetail>> endorser;
    std::shared_ptr<Reference> exposure;
    std::shared_ptr<Reference> exposure_alternative;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::vector<std::shared_ptr<Identifier>> identifier;
    std::optional<uri> implicit_rules;
    std::vector<std::shared_ptr<CodeableConcept>> jurisdiction;
    std::optional<code> language;
    std::optional<date> last_review_date;
    std::optional<std::shared_ptr<Meta>> meta;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<string> name;
    std::vector<std::shared_ptr<Annotation>> note;
    std::shared_ptr<Reference> outcome;
    std::shared_ptr<Reference> population;
    std::optional<string> publisher;
    std::vector<std::shared_ptr<RelatedArtifact>> related_artifact;
    std::vector<std::shared_ptr<EffectEvidenceSynthesis_ResultsByExposure>> results_by_exposure;
    std::vector<std::shared_ptr<ContactDetail>> reviewer;
    std::optional<std::shared_ptr<EffectEvidenceSynthesis_SampleSize>> sample_size;
    code status;
    std::optional<std::shared_ptr<CodeableConcept>> study_type;
    std::optional<std::shared_ptr<CodeableConcept>> synthesis_type;
    std::optional<std::shared_ptr<Narrative>> text;
    std::optional<string> title;
    std::vector<std::shared_ptr<CodeableConcept>> topic;
    std::optional<uri> url_;
    std::vector<std::shared_ptr<UsageContext>> use_context;
    std::optional<string> version;
};

class EffectEvidenceSynthesis_Certainty {
public:
    std::vector<std::shared_ptr<EffectEvidenceSynthesis_Certainty_CertaintySubcomponent>> certainty_subcomponent;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::vector<std::shared_ptr<Annotation>> note;
    std::vector<std::shared_ptr<CodeableConcept>> rating;
};

class EffectEvidenceSynthesis_Certainty_CertaintySubcomponent {
public:
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::vector<std::shared_ptr<Annotation>> note;
    std::vector<std::shared_ptr<CodeableConcept>> rating;
    std::optional<std::shared_ptr<CodeableConcept>> type;
};

class EffectEvidenceSynthesis_EffectEstimate {
public:
    std::optional<string> description;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::vector<std::shared_ptr<EffectEvidenceSynthesis_EffectEstimate_PrecisionEstimate>> precision_estimate;
    std::optional<std::shared_ptr<CodeableConcept>> type;
    std::optional<std::shared_ptr<CodeableConcept>> unit_of_measure;
    std::optional<decimal> value;
    std::optional<std::shared_ptr<CodeableConcept>> variant_state;
};

class EffectEvidenceSynthesis_EffectEstimate_PrecisionEstimate {
public:
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<decimal> from;
    std::optional<string> id_;
    std::optional<decimal> level;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<decimal> to;
    std::optional<std::shared_ptr<CodeableConcept>> type;
};

class EffectEvidenceSynthesis_ResultsByExposure {
public:
    std::optional<string> description;
    std::optional<code> exposure_state;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::shared_ptr<Reference> risk_evidence_synthesis;
    std::optional<std::shared_ptr<CodeableConcept>> variant_state;
};

class EffectEvidenceSynthesis_SampleSize {
public:
    std::optional<string> description;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<integer> number_of_participants;
    std::optional<integer> number_of_studies;
};

class Element {
public:
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
};

class ElementDefinition {
public:
    std::vector<string> alias;
    std::optional<std::shared_ptr<ElementDefinition_Base>> base;
    std::optional<std::shared_ptr<ElementDefinition_Binding>> binding;
    std::vector<std::shared_ptr<Coding>> code_;
    std::optional<markdown> comment;
    std::vector<id> condition;
    std::vector<std::shared_ptr<ElementDefinition_Constraint>> constraint;
    std::optional<uri> content_reference;
    using DEFAULT_VALUE_Variant = std::variant<
        std::shared_ptr<base64Binary>,
        std::shared_ptr<boolean>,
        std::shared_ptr<canonical>,
        std::shared_ptr<code>,
        std::shared_ptr<date>,
        std::shared_ptr<dateTime>,
        std::shared_ptr<decimal>,
        std::shared_ptr<id>,
        std::shared_ptr<instant>,
        std::shared_ptr<integer>,
        std::shared_ptr<markdown>,
        std::shared_ptr<oid>,
        std::shared_ptr<positiveInt>,
        std::shared_ptr<string>,
        std::shared_ptr<time>,
        std::shared_ptr<unsignedInt>,
        std::shared_ptr<uri>,
        std::shared_ptr<url>,
        std::shared_ptr<uuid>,
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
    std::optional<markdown> definition;
    std::vector<std::shared_ptr<ElementDefinition_Example>> example;
    std::vector<std::shared_ptr<Extension>> extension;
    using FIXED_Variant = std::variant<
        std::shared_ptr<base64Binary>,
        std::shared_ptr<boolean>,
        std::shared_ptr<canonical>,
        std::shared_ptr<code>,
        std::shared_ptr<date>,
        std::shared_ptr<dateTime>,
        std::shared_ptr<decimal>,
        std::shared_ptr<id>,
        std::shared_ptr<instant>,
        std::shared_ptr<integer>,
        std::shared_ptr<markdown>,
        std::shared_ptr<oid>,
        std::shared_ptr<positiveInt>,
        std::shared_ptr<string>,
        std::shared_ptr<time>,
        std::shared_ptr<unsignedInt>,
        std::shared_ptr<uri>,
        std::shared_ptr<url>,
        std::shared_ptr<uuid>,
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
    std::optional<string> id_;
    std::optional<boolean> is_modifier;
    std::optional<string> is_modifier_reason;
    std::optional<boolean> is_summary;
    std::optional<string> label;
    std::vector<std::shared_ptr<ElementDefinition_Mapping>> mapping;
    std::optional<string> max;
    std::optional<integer> max_length;
    using MAX_VALUE_Variant = std::variant<
        std::shared_ptr<date>,
        std::shared_ptr<dateTime>,
        std::shared_ptr<instant>,
        std::shared_ptr<time>,
        std::shared_ptr<decimal>,
        std::shared_ptr<integer>,
        std::shared_ptr<positiveInt>,
        std::shared_ptr<unsignedInt>,
        std::shared_ptr<Quantity>
    >;
    MAX_VALUE_Variant max_value;
    std::optional<markdown> meaning_when_missing;
    std::optional<unsignedInt> min;
    using MIN_VALUE_Variant = std::variant<
        std::shared_ptr<date>,
        std::shared_ptr<dateTime>,
        std::shared_ptr<instant>,
        std::shared_ptr<time>,
        std::shared_ptr<decimal>,
        std::shared_ptr<integer>,
        std::shared_ptr<positiveInt>,
        std::shared_ptr<unsignedInt>,
        std::shared_ptr<Quantity>
    >;
    MIN_VALUE_Variant min_value;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<boolean> must_support;
    std::optional<string> order_meaning;
    string path;
    using PATTERN_Variant = std::variant<
        std::shared_ptr<base64Binary>,
        std::shared_ptr<boolean>,
        std::shared_ptr<canonical>,
        std::shared_ptr<code>,
        std::shared_ptr<date>,
        std::shared_ptr<dateTime>,
        std::shared_ptr<decimal>,
        std::shared_ptr<id>,
        std::shared_ptr<instant>,
        std::shared_ptr<integer>,
        std::shared_ptr<markdown>,
        std::shared_ptr<oid>,
        std::shared_ptr<positiveInt>,
        std::shared_ptr<string>,
        std::shared_ptr<time>,
        std::shared_ptr<unsignedInt>,
        std::shared_ptr<uri>,
        std::shared_ptr<url>,
        std::shared_ptr<uuid>,
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
    std::vector<code> representation;
    std::optional<markdown> requirements;
    std::optional<string> short_;
    std::optional<boolean> slice_is_constraining;
    std::optional<string> slice_name;
    std::optional<std::shared_ptr<ElementDefinition_Slicing>> slicing;
    std::vector<std::shared_ptr<ElementDefinition_Type>> type;
    string url_;
    using VALUE_Variant = std::variant<
        std::shared_ptr<CodeableConcept>,
        std::shared_ptr<canonical>
    >;
    VALUE_Variant value;
};

class ElementDefinition_Base {
public:
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    string max;
    unsignedInt min;
    string path;
};

class ElementDefinition_Binding {
public:
    std::optional<string> description;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    code strength;
    std::optional<canonical> value_set;
};

class ElementDefinition_Constraint {
public:
    std::optional<string> expression;
    std::vector<std::shared_ptr<Extension>> extension;
    string human;
    std::optional<string> id_;
    id key;
    std::optional<string> requirements;
    code severity;
    std::optional<canonical> source;
    std::optional<string> xpath;
};

class ElementDefinition_Example {
public:
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    string label;
    using VALUE_Variant = std::variant<
        std::shared_ptr<base64Binary>,
        std::shared_ptr<boolean>,
        std::shared_ptr<canonical>,
        std::shared_ptr<code>,
        std::shared_ptr<date>,
        std::shared_ptr<dateTime>,
        std::shared_ptr<decimal>,
        std::shared_ptr<id>,
        std::shared_ptr<instant>,
        std::shared_ptr<integer>,
        std::shared_ptr<markdown>,
        std::shared_ptr<oid>,
        std::shared_ptr<positiveInt>,
        std::shared_ptr<string>,
        std::shared_ptr<time>,
        std::shared_ptr<unsignedInt>,
        std::shared_ptr<uri>,
        std::shared_ptr<url>,
        std::shared_ptr<uuid>,
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
    std::optional<string> comment;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    id identity;
    std::optional<code> language;
    string map;
};

class ElementDefinition_Slicing {
public:
    std::optional<string> description;
    std::vector<std::shared_ptr<ElementDefinition_Slicing_Discriminator>> discriminator;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::optional<boolean> ordered;
    code rules;
};

class ElementDefinition_Slicing_Discriminator {
public:
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    string path;
    code type;
};

class ElementDefinition_Type {
public:
    std::vector<code> aggregation;
    uri code_;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::vector<canonical> profile;
    std::vector<canonical> target_profile;
    std::optional<code> versioning;
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
    std::optional<string> id_;
    std::vector<std::shared_ptr<Identifier>> identifier;
    std::optional<uri> implicit_rules;
    std::optional<code> language;
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
    code status;
    std::vector<std::shared_ptr<Encounter_StatusHistory>> status_history;
    std::optional<std::shared_ptr<Reference>> subject;
    std::optional<std::shared_ptr<Narrative>> text;
    std::vector<std::shared_ptr<CodeableConcept>> type;
};

class Encounter_ClassHistory {
public:
    std::shared_ptr<Coding> class_;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::shared_ptr<Period> period;
};

class Encounter_Diagnosis {
public:
    std::shared_ptr<Reference> condition;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<positiveInt> rank;
    std::optional<std::shared_ptr<CodeableConcept>> use;
};

class Encounter_Hospitalization {
public:
    std::optional<std::shared_ptr<CodeableConcept>> admit_source;
    std::optional<std::shared_ptr<Reference>> destination;
    std::vector<std::shared_ptr<CodeableConcept>> diet_preference;
    std::optional<std::shared_ptr<CodeableConcept>> discharge_disposition;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
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
    std::optional<string> id_;
    std::shared_ptr<Reference> location;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<std::shared_ptr<Period>> period;
    std::optional<std::shared_ptr<CodeableConcept>> physical_type;
    std::optional<code> status;
};

class Encounter_Participant {
public:
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::optional<std::shared_ptr<Reference>> individual;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<std::shared_ptr<Period>> period;
    std::vector<std::shared_ptr<CodeableConcept>> type;
};

class Encounter_StatusHistory {
public:
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::shared_ptr<Period> period;
    code status;
};

class Endpoint {
public:
    url address;
    std::shared_ptr<Coding> connection_type;
    std::vector<std::shared_ptr<ContactPoint>> contact;
    std::vector<std::shared_ptr<Resource>> contained;
    std::vector<std::shared_ptr<Extension>> extension;
    std::vector<string> header;
    std::optional<string> id_;
    std::vector<std::shared_ptr<Identifier>> identifier;
    std::optional<uri> implicit_rules;
    std::optional<code> language;
    std::optional<std::shared_ptr<Reference>> managing_organization;
    std::optional<std::shared_ptr<Meta>> meta;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<string> name;
    std::vector<code> payload_mime_type;
    std::optional<std::shared_ptr<Period>> period;
    code status;
    std::optional<std::shared_ptr<Narrative>> text;
};

class EnrollmentRequest {
public:
    std::optional<std::shared_ptr<Reference>> candidate;
    std::vector<std::shared_ptr<Resource>> contained;
    std::optional<std::shared_ptr<Reference>> coverage;
    std::optional<dateTime> created;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::vector<std::shared_ptr<Identifier>> identifier;
    std::optional<uri> implicit_rules;
    std::optional<std::shared_ptr<Reference>> insurer;
    std::optional<code> language;
    std::optional<std::shared_ptr<Meta>> meta;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<std::shared_ptr<Reference>> provider;
    std::optional<code> status;
    std::optional<std::shared_ptr<Narrative>> text;
};

class EnrollmentResponse {
public:
    std::vector<std::shared_ptr<Resource>> contained;
    std::optional<dateTime> created;
    std::optional<string> disposition;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::vector<std::shared_ptr<Identifier>> identifier;
    std::optional<uri> implicit_rules;
    std::optional<code> language;
    std::optional<std::shared_ptr<Meta>> meta;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<std::shared_ptr<Reference>> organization;
    std::optional<code> outcome;
    std::optional<std::shared_ptr<Reference>> request;
    std::optional<std::shared_ptr<Reference>> request_provider;
    std::optional<code> status;
    std::optional<std::shared_ptr<Narrative>> text;
};

class EpisodeOfCare {
public:
    std::vector<std::shared_ptr<Reference>> account;
    std::optional<std::shared_ptr<Reference>> care_manager;
    std::vector<std::shared_ptr<Resource>> contained;
    std::vector<std::shared_ptr<EpisodeOfCare_Diagnosis>> diagnosis;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::vector<std::shared_ptr<Identifier>> identifier;
    std::optional<uri> implicit_rules;
    std::optional<code> language;
    std::optional<std::shared_ptr<Reference>> managing_organization;
    std::optional<std::shared_ptr<Meta>> meta;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::shared_ptr<Reference> patient;
    std::optional<std::shared_ptr<Period>> period;
    std::vector<std::shared_ptr<Reference>> referral_request;
    code status;
    std::vector<std::shared_ptr<EpisodeOfCare_StatusHistory>> status_history;
    std::vector<std::shared_ptr<Reference>> team;
    std::optional<std::shared_ptr<Narrative>> text;
    std::vector<std::shared_ptr<CodeableConcept>> type;
};

class EpisodeOfCare_Diagnosis {
public:
    std::shared_ptr<Reference> condition;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<positiveInt> rank;
    std::optional<std::shared_ptr<CodeableConcept>> role;
};

class EpisodeOfCare_StatusHistory {
public:
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::shared_ptr<Period> period;
    code status;
};

class EventDefinition {
public:
    std::optional<date> approval_date;
    std::vector<std::shared_ptr<ContactDetail>> author;
    std::vector<std::shared_ptr<ContactDetail>> contact;
    std::vector<std::shared_ptr<Resource>> contained;
    std::optional<markdown> copyright;
    std::optional<dateTime> date_;
    std::optional<markdown> description;
    std::vector<std::shared_ptr<ContactDetail>> editor;
    std::optional<std::shared_ptr<Period>> effective_period;
    std::vector<std::shared_ptr<ContactDetail>> endorser;
    std::optional<boolean> experimental;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::vector<std::shared_ptr<Identifier>> identifier;
    std::optional<uri> implicit_rules;
    std::vector<std::shared_ptr<CodeableConcept>> jurisdiction;
    std::optional<code> language;
    std::optional<date> last_review_date;
    std::optional<std::shared_ptr<Meta>> meta;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<string> name;
    std::optional<string> publisher;
    std::optional<markdown> purpose;
    std::vector<std::shared_ptr<RelatedArtifact>> related_artifact;
    std::vector<std::shared_ptr<ContactDetail>> reviewer;
    code status;
    using SUBJECT_Variant = std::variant<
        std::shared_ptr<CodeableConcept>,
        std::shared_ptr<Reference>
    >;
    SUBJECT_Variant subject;
    std::optional<string> subtitle;
    std::optional<std::shared_ptr<Narrative>> text;
    std::optional<string> title;
    std::vector<std::shared_ptr<CodeableConcept>> topic;
    std::optional<uri> url_;
    std::optional<string> usage;
    std::vector<std::shared_ptr<UsageContext>> use_context;
    std::optional<string> version;
};

class Evidence {
public:
    std::optional<date> approval_date;
    std::vector<std::shared_ptr<ContactDetail>> author;
    std::vector<std::shared_ptr<ContactDetail>> contact;
    std::vector<std::shared_ptr<Resource>> contained;
    std::optional<markdown> copyright;
    std::optional<dateTime> date_;
    std::optional<markdown> description;
    std::vector<std::shared_ptr<ContactDetail>> editor;
    std::optional<std::shared_ptr<Period>> effective_period;
    std::vector<std::shared_ptr<ContactDetail>> endorser;
    std::shared_ptr<Reference> exposure_background;
    std::vector<std::shared_ptr<Reference>> exposure_variant;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::vector<std::shared_ptr<Identifier>> identifier;
    std::optional<uri> implicit_rules;
    std::vector<std::shared_ptr<CodeableConcept>> jurisdiction;
    std::optional<code> language;
    std::optional<date> last_review_date;
    std::optional<std::shared_ptr<Meta>> meta;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<string> name;
    std::vector<std::shared_ptr<Annotation>> note;
    std::vector<std::shared_ptr<Reference>> outcome;
    std::optional<string> publisher;
    std::vector<std::shared_ptr<RelatedArtifact>> related_artifact;
    std::vector<std::shared_ptr<ContactDetail>> reviewer;
    std::optional<string> short_title;
    code status;
    std::optional<string> subtitle;
    std::optional<std::shared_ptr<Narrative>> text;
    std::optional<string> title;
    std::vector<std::shared_ptr<CodeableConcept>> topic;
    std::optional<uri> url_;
    std::vector<std::shared_ptr<UsageContext>> use_context;
    std::optional<string> version;
};

class EvidenceVariable {
public:
    std::optional<date> approval_date;
    std::vector<std::shared_ptr<ContactDetail>> author;
    std::vector<std::shared_ptr<ContactDetail>> contact;
    std::vector<std::shared_ptr<Resource>> contained;
    std::optional<markdown> copyright;
    std::optional<dateTime> date_;
    std::optional<markdown> description;
    std::vector<std::shared_ptr<ContactDetail>> editor;
    std::optional<std::shared_ptr<Period>> effective_period;
    std::vector<std::shared_ptr<ContactDetail>> endorser;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::vector<std::shared_ptr<Identifier>> identifier;
    std::optional<uri> implicit_rules;
    std::vector<std::shared_ptr<CodeableConcept>> jurisdiction;
    std::optional<code> language;
    std::optional<date> last_review_date;
    std::optional<std::shared_ptr<Meta>> meta;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<string> name;
    std::vector<std::shared_ptr<Annotation>> note;
    std::optional<string> publisher;
    std::vector<std::shared_ptr<RelatedArtifact>> related_artifact;
    std::vector<std::shared_ptr<ContactDetail>> reviewer;
    std::optional<string> short_title;
    code status;
    std::optional<string> subtitle;
    std::optional<std::shared_ptr<Narrative>> text;
    std::optional<string> title;
    std::vector<std::shared_ptr<CodeableConcept>> topic;
    std::optional<code> type;
    std::optional<uri> url_;
    std::vector<std::shared_ptr<UsageContext>> use_context;
    std::optional<string> version;
};

class EvidenceVariable_Characteristic {
public:
    using DEFINITION_Variant = std::variant<
        std::shared_ptr<Reference>,
        std::shared_ptr<canonical>,
        std::shared_ptr<CodeableConcept>,
        std::shared_ptr<Expression>,
        std::shared_ptr<DataRequirement>,
        std::shared_ptr<TriggerDefinition>
    >;
    DEFINITION_Variant definition;
    std::optional<string> description;
    std::optional<boolean> exclude;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<code> group_measure;
    std::optional<string> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    using PARTICIPANT_EFFECTIVE_Variant = std::variant<
        std::shared_ptr<dateTime>,
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
    std::optional<markdown> copyright;
    std::optional<dateTime> date_;
    std::optional<boolean> experimental;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::vector<std::shared_ptr<Identifier>> identifier;
    std::optional<uri> implicit_rules;
    std::vector<std::shared_ptr<ExampleScenario_Instance>> instance;
    std::vector<std::shared_ptr<CodeableConcept>> jurisdiction;
    std::optional<code> language;
    std::optional<std::shared_ptr<Meta>> meta;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<string> name;
    std::vector<std::shared_ptr<ExampleScenario_Process>> process;
    std::optional<string> publisher;
    std::optional<markdown> purpose;
    code status;
    std::optional<std::shared_ptr<Narrative>> text;
    std::optional<uri> url_;
    std::vector<std::shared_ptr<UsageContext>> use_context;
    std::optional<string> version;
    std::vector<canonical> workflow;
};

class ExampleScenario_Actor {
public:
    string actor_id;
    std::optional<markdown> description;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<string> name;
    code type;
};

class ExampleScenario_Instance {
public:
    std::vector<std::shared_ptr<ExampleScenario_Instance_ContainedInstance>> contained_instance;
    std::optional<markdown> description;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<string> name;
    string resource_id;
    code resource_type;
    std::vector<std::shared_ptr<ExampleScenario_Instance_Version>> version;
};

class ExampleScenario_Instance_ContainedInstance {
public:
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    string resource_id;
    std::optional<string> version_id;
};

class ExampleScenario_Instance_Version {
public:
    markdown description;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    string version_id;
};

class ExampleScenario_Process {
public:
    std::optional<markdown> description;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<markdown> post_conditions;
    std::optional<markdown> pre_conditions;
    std::vector<std::shared_ptr<ExampleScenario_Process_Step>> step;
    string title;
};

class ExampleScenario_Process_Step {
public:
    std::vector<std::shared_ptr<ExampleScenario_Process_Step_Alternative>> alternative;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<std::shared_ptr<ExampleScenario_Process_Step_Operation>> operation;
    std::optional<boolean> pause;
    std::vector<std::shared_ptr<ExampleScenario_Process>> process;
};

class ExampleScenario_Process_Step_Alternative {
public:
    std::optional<markdown> description;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::vector<std::shared_ptr<ExampleScenario_Process_Step>> step;
    string title;
};

class ExampleScenario_Process_Step_Operation {
public:
    std::optional<markdown> description;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::optional<string> initiator;
    std::optional<boolean> initiator_active;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<string> name;
    string number;
    std::optional<string> receiver;
    std::optional<boolean> receiver_active;
    std::optional<std::shared_ptr<ExampleScenario_Instance_ContainedInstance>> request;
    std::optional<std::shared_ptr<ExampleScenario_Instance_ContainedInstance>> response;
    std::optional<string> type;
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
    dateTime created;
    std::vector<std::shared_ptr<ExplanationOfBenefit_Diagnosis>> diagnosis;
    std::optional<string> disposition;
    std::optional<std::shared_ptr<Reference>> enterer;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<Reference>> facility;
    std::optional<std::shared_ptr<Attachment>> form;
    std::optional<std::shared_ptr<CodeableConcept>> form_code;
    std::optional<std::shared_ptr<CodeableConcept>> funds_reserve;
    std::optional<std::shared_ptr<CodeableConcept>> funds_reserve_requested;
    std::optional<string> id_;
    std::vector<std::shared_ptr<Identifier>> identifier;
    std::optional<uri> implicit_rules;
    std::shared_ptr<Reference> insurer;
    std::vector<std::shared_ptr<ExplanationOfBenefit_Item>> item;
    std::optional<code> language;
    std::optional<std::shared_ptr<Meta>> meta;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<std::shared_ptr<Reference>> original_prescription;
    code outcome;
    std::shared_ptr<Reference> patient;
    std::optional<std::shared_ptr<ExplanationOfBenefit_Payee>> payee;
    std::optional<std::shared_ptr<ExplanationOfBenefit_Payment>> payment;
    std::vector<string> pre_auth_ref;
    std::vector<std::shared_ptr<Period>> pre_auth_ref_period;
    std::optional<positiveInt> precedence;
    std::optional<std::shared_ptr<Reference>> prescription;
    std::optional<std::shared_ptr<CodeableConcept>> priority;
    std::vector<std::shared_ptr<ExplanationOfBenefit_Procedure>> procedure;
    std::vector<std::shared_ptr<ExplanationOfBenefit_ProcessNote>> process_note;
    std::shared_ptr<Reference> provider;
    std::optional<std::shared_ptr<Reference>> referral;
    std::vector<std::shared_ptr<ExplanationOfBenefit_Related>> related;
    code status;
    std::optional<std::shared_ptr<CodeableConcept>> sub_type;
    std::vector<std::shared_ptr<ExplanationOfBenefit_SupportingInfo>> supporting_info;
    std::optional<std::shared_ptr<Narrative>> text;
    std::vector<std::shared_ptr<ExplanationOfBenefit_Total>> total;
    std::shared_ptr<CodeableConcept> type;
    code use;
};

class ExplanationOfBenefit_Accident {
public:
    std::optional<date> date_;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
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
    std::vector<positiveInt> detail_sequence;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<decimal> factor;
    std::optional<string> id_;
    std::vector<positiveInt> item_sequence;
    using LOCATION_Variant = std::variant<
        std::shared_ptr<CodeableConcept>,
        std::shared_ptr<Address>,
        std::shared_ptr<Reference>
    >;
    LOCATION_Variant location;
    std::vector<std::shared_ptr<CodeableConcept>> modifier;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<std::shared_ptr<Money>> net;
    std::vector<positiveInt> note_number;
    std::shared_ptr<CodeableConcept> product_or_service;
    std::vector<std::shared_ptr<CodeableConcept>> program_code;
    std::vector<std::shared_ptr<Reference>> provider;
    std::optional<std::shared_ptr<Quantity>> quantity;
    using SERVICED_Variant = std::variant<
        std::shared_ptr<date>,
        std::shared_ptr<Period>
    >;
    SERVICED_Variant serviced;
    std::vector<positiveInt> sub_detail_sequence;
    std::vector<std::shared_ptr<CodeableConcept>> sub_site;
    std::optional<std::shared_ptr<Money>> unit_price;
};

class ExplanationOfBenefit_AddItem_Detail {
public:
    std::vector<std::shared_ptr<ExplanationOfBenefit_Item_Adjudication>> adjudication;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<decimal> factor;
    std::optional<string> id_;
    std::vector<std::shared_ptr<CodeableConcept>> modifier;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<std::shared_ptr<Money>> net;
    std::vector<positiveInt> note_number;
    std::shared_ptr<CodeableConcept> product_or_service;
    std::optional<std::shared_ptr<Quantity>> quantity;
    std::vector<std::shared_ptr<ExplanationOfBenefit_AddItem_Detail_SubDetail>> sub_detail;
    std::optional<std::shared_ptr<Money>> unit_price;
};

class ExplanationOfBenefit_AddItem_Detail_SubDetail {
public:
    std::vector<std::shared_ptr<ExplanationOfBenefit_Item_Adjudication>> adjudication;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<decimal> factor;
    std::optional<string> id_;
    std::vector<std::shared_ptr<CodeableConcept>> modifier;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<std::shared_ptr<Money>> net;
    std::vector<positiveInt> note_number;
    std::shared_ptr<CodeableConcept> product_or_service;
    std::optional<std::shared_ptr<Quantity>> quantity;
    std::optional<std::shared_ptr<Money>> unit_price;
};

class ExplanationOfBenefit_BenefitBalance {
public:
    std::shared_ptr<CodeableConcept> category;
    std::optional<string> description;
    std::optional<boolean> excluded;
    std::vector<std::shared_ptr<Extension>> extension;
    std::vector<std::shared_ptr<ExplanationOfBenefit_BenefitBalance_Financial>> financial;
    std::optional<string> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<string> name;
    std::optional<std::shared_ptr<CodeableConcept>> network;
    std::optional<std::shared_ptr<CodeableConcept>> term;
    std::optional<std::shared_ptr<CodeableConcept>> unit;
};

class ExplanationOfBenefit_BenefitBalance_Financial {
public:
    using ALLOWED_Variant = std::variant<
        std::shared_ptr<unsignedInt>,
        std::shared_ptr<string>,
        std::shared_ptr<Money>
    >;
    ALLOWED_Variant allowed;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::shared_ptr<CodeableConcept> type;
    using USED_Variant = std::variant<
        std::shared_ptr<unsignedInt>,
        std::shared_ptr<Money>
    >;
    USED_Variant used;
};

class ExplanationOfBenefit_CareTeam {
public:
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::shared_ptr<Reference> provider;
    std::optional<std::shared_ptr<CodeableConcept>> qualification;
    std::optional<boolean> responsible;
    std::optional<std::shared_ptr<CodeableConcept>> role;
    positiveInt sequence;
};

class ExplanationOfBenefit_Diagnosis {
public:
    using DIAGNOSIS_Variant = std::variant<
        std::shared_ptr<CodeableConcept>,
        std::shared_ptr<Reference>
    >;
    DIAGNOSIS_Variant diagnosis;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<std::shared_ptr<CodeableConcept>> on_admission;
    std::optional<std::shared_ptr<CodeableConcept>> package_code;
    positiveInt sequence;
    std::vector<std::shared_ptr<CodeableConcept>> type;
};

class ExplanationOfBenefit_Insurance {
public:
    std::shared_ptr<Reference> coverage;
    std::vector<std::shared_ptr<Extension>> extension;
    boolean focal;
    std::optional<string> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::vector<string> pre_auth_ref;
};

class ExplanationOfBenefit_Item {
public:
    std::vector<std::shared_ptr<ExplanationOfBenefit_Item_Adjudication>> adjudication;
    std::optional<std::shared_ptr<CodeableConcept>> body_site;
    std::vector<positiveInt> care_team_sequence;
    std::optional<std::shared_ptr<CodeableConcept>> category;
    std::vector<std::shared_ptr<ExplanationOfBenefit_Item_Detail>> detail;
    std::vector<positiveInt> diagnosis_sequence;
    std::vector<std::shared_ptr<Reference>> encounter;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<decimal> factor;
    std::optional<string> id_;
    std::vector<positiveInt> information_sequence;
    using LOCATION_Variant = std::variant<
        std::shared_ptr<CodeableConcept>,
        std::shared_ptr<Address>,
        std::shared_ptr<Reference>
    >;
    LOCATION_Variant location;
    std::vector<std::shared_ptr<CodeableConcept>> modifier;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<std::shared_ptr<Money>> net;
    std::vector<positiveInt> note_number;
    std::vector<positiveInt> procedure_sequence;
    std::shared_ptr<CodeableConcept> product_or_service;
    std::vector<std::shared_ptr<CodeableConcept>> program_code;
    std::optional<std::shared_ptr<Quantity>> quantity;
    std::optional<std::shared_ptr<CodeableConcept>> revenue;
    positiveInt sequence;
    using SERVICED_Variant = std::variant<
        std::shared_ptr<date>,
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
    std::optional<string> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<std::shared_ptr<CodeableConcept>> reason;
    std::optional<decimal> value;
};

class ExplanationOfBenefit_Item_Detail {
public:
    std::vector<std::shared_ptr<ExplanationOfBenefit_Item_Adjudication>> adjudication;
    std::optional<std::shared_ptr<CodeableConcept>> category;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<decimal> factor;
    std::optional<string> id_;
    std::vector<std::shared_ptr<CodeableConcept>> modifier;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<std::shared_ptr<Money>> net;
    std::vector<positiveInt> note_number;
    std::shared_ptr<CodeableConcept> product_or_service;
    std::vector<std::shared_ptr<CodeableConcept>> program_code;
    std::optional<std::shared_ptr<Quantity>> quantity;
    std::optional<std::shared_ptr<CodeableConcept>> revenue;
    positiveInt sequence;
    std::vector<std::shared_ptr<ExplanationOfBenefit_Item_Detail_SubDetail>> sub_detail;
    std::vector<std::shared_ptr<Reference>> udi;
    std::optional<std::shared_ptr<Money>> unit_price;
};

class ExplanationOfBenefit_Item_Detail_SubDetail {
public:
    std::vector<std::shared_ptr<ExplanationOfBenefit_Item_Adjudication>> adjudication;
    std::optional<std::shared_ptr<CodeableConcept>> category;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<decimal> factor;
    std::optional<string> id_;
    std::vector<std::shared_ptr<CodeableConcept>> modifier;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<std::shared_ptr<Money>> net;
    std::vector<positiveInt> note_number;
    std::shared_ptr<CodeableConcept> product_or_service;
    std::vector<std::shared_ptr<CodeableConcept>> program_code;
    std::optional<std::shared_ptr<Quantity>> quantity;
    std::optional<std::shared_ptr<CodeableConcept>> revenue;
    positiveInt sequence;
    std::vector<std::shared_ptr<Reference>> udi;
    std::optional<std::shared_ptr<Money>> unit_price;
};

class ExplanationOfBenefit_Payee {
public:
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<std::shared_ptr<Reference>> party;
    std::optional<std::shared_ptr<CodeableConcept>> type;
};

class ExplanationOfBenefit_Payment {
public:
    std::optional<std::shared_ptr<Money>> adjustment;
    std::optional<std::shared_ptr<CodeableConcept>> adjustment_reason;
    std::optional<std::shared_ptr<Money>> amount;
    std::optional<date> date_;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::optional<std::shared_ptr<Identifier>> identifier;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<std::shared_ptr<CodeableConcept>> type;
};

class ExplanationOfBenefit_Procedure {
public:
    std::optional<dateTime> date_;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    using PROCEDURE_Variant = std::variant<
        std::shared_ptr<CodeableConcept>,
        std::shared_ptr<Reference>
    >;
    PROCEDURE_Variant procedure;
    positiveInt sequence;
    std::vector<std::shared_ptr<CodeableConcept>> type;
    std::vector<std::shared_ptr<Reference>> udi;
};

class ExplanationOfBenefit_ProcessNote {
public:
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::optional<std::shared_ptr<CodeableConcept>> language;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<positiveInt> number;
    std::optional<string> text;
    std::optional<code> type;
};

class ExplanationOfBenefit_Related {
public:
    std::optional<std::shared_ptr<Reference>> claim;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<std::shared_ptr<Identifier>> reference;
    std::optional<std::shared_ptr<CodeableConcept>> relationship;
};

class ExplanationOfBenefit_SupportingInfo {
public:
    std::shared_ptr<CodeableConcept> category;
    std::optional<std::shared_ptr<CodeableConcept>> code_;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<std::shared_ptr<Coding>> reason;
    positiveInt sequence;
    using TIMING_Variant = std::variant<
        std::shared_ptr<date>,
        std::shared_ptr<Period>
    >;
    TIMING_Variant timing;
    using VALUE_Variant = std::variant<
        std::shared_ptr<boolean>,
        std::shared_ptr<string>,
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
    std::optional<string> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
};

class Expression {
public:
    std::optional<string> description;
    std::optional<string> expression;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    code language;
    std::optional<id> name;
    std::optional<uri> reference;
};

class Extension {
public:
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    string url_;
    using VALUE_Variant = std::variant<
        std::shared_ptr<base64Binary>,
        std::shared_ptr<boolean>,
        std::shared_ptr<canonical>,
        std::shared_ptr<code>,
        std::shared_ptr<date>,
        std::shared_ptr<dateTime>,
        std::shared_ptr<decimal>,
        std::shared_ptr<id>,
        std::shared_ptr<instant>,
        std::shared_ptr<integer>,
        std::shared_ptr<markdown>,
        std::shared_ptr<oid>,
        std::shared_ptr<positiveInt>,
        std::shared_ptr<string>,
        std::shared_ptr<time>,
        std::shared_ptr<unsignedInt>,
        std::shared_ptr<uri>,
        std::shared_ptr<url>,
        std::shared_ptr<uuid>,
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
        std::shared_ptr<string>
    >;
    AGE_Variant age;
    using BORN_Variant = std::variant<
        std::shared_ptr<Period>,
        std::shared_ptr<date>,
        std::shared_ptr<string>
    >;
    BORN_Variant born;
    std::vector<std::shared_ptr<FamilyMemberHistory_Condition>> condition;
    std::vector<std::shared_ptr<Resource>> contained;
    std::optional<std::shared_ptr<CodeableConcept>> data_absent_reason;
    std::optional<dateTime> date_;
    using DECEASED_Variant = std::variant<
        std::shared_ptr<boolean>,
        std::shared_ptr<Age>,
        std::shared_ptr<Range>,
        std::shared_ptr<date>,
        std::shared_ptr<string>
    >;
    DECEASED_Variant deceased;
    std::optional<boolean> estimated_age;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::vector<std::shared_ptr<Identifier>> identifier;
    std::optional<uri> implicit_rules;
    std::vector<canonical> instantiates_canonical;
    std::vector<uri> instantiates_uri;
    std::optional<code> language;
    std::optional<std::shared_ptr<Meta>> meta;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<string> name;
    std::vector<std::shared_ptr<Annotation>> note;
    std::shared_ptr<Reference> patient;
    std::vector<std::shared_ptr<CodeableConcept>> reason_code;
    std::vector<std::shared_ptr<Reference>> reason_reference;
    std::shared_ptr<CodeableConcept> relationship;
    std::optional<std::shared_ptr<CodeableConcept>> sex;
    code status;
    std::optional<std::shared_ptr<Narrative>> text;
};

class FamilyMemberHistory_Condition {
public:
    std::shared_ptr<CodeableConcept> code_;
    std::optional<boolean> contributed_to_death;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::vector<std::shared_ptr<Annotation>> note;
    using ONSET_Variant = std::variant<
        std::shared_ptr<Age>,
        std::shared_ptr<Range>,
        std::shared_ptr<Period>,
        std::shared_ptr<string>
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
    std::optional<string> id_;
    std::vector<std::shared_ptr<Identifier>> identifier;
    std::optional<uri> implicit_rules;
    std::optional<code> language;
    std::optional<std::shared_ptr<Meta>> meta;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<std::shared_ptr<Period>> period;
    code status;
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
    std::optional<string> id_;
    std::vector<std::shared_ptr<Identifier>> identifier;
    std::optional<uri> implicit_rules;
    std::optional<code> language;
    code lifecycle_status;
    std::optional<std::shared_ptr<Meta>> meta;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::vector<std::shared_ptr<Annotation>> note;
    std::vector<std::shared_ptr<CodeableConcept>> outcome_code;
    std::vector<std::shared_ptr<Reference>> outcome_reference;
    std::optional<std::shared_ptr<CodeableConcept>> priority;
    using START_Variant = std::variant<
        std::shared_ptr<date>,
        std::shared_ptr<CodeableConcept>
    >;
    START_Variant start;
    std::optional<date> status_date;
    std::optional<string> status_reason;
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
        std::shared_ptr<string>,
        std::shared_ptr<boolean>,
        std::shared_ptr<integer>,
        std::shared_ptr<Ratio>
    >;
    DETAIL_Variant detail;
    using DUE_Variant = std::variant<
        std::shared_ptr<date>,
        std::shared_ptr<Duration>
    >;
    DUE_Variant due;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::optional<std::shared_ptr<CodeableConcept>> measure;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
};

class GraphDefinition {
public:
    std::vector<std::shared_ptr<ContactDetail>> contact;
    std::vector<std::shared_ptr<Resource>> contained;
    std::optional<dateTime> date_;
    std::optional<markdown> description;
    std::optional<boolean> experimental;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::optional<uri> implicit_rules;
    std::vector<std::shared_ptr<CodeableConcept>> jurisdiction;
    std::optional<code> language;
    std::vector<std::shared_ptr<GraphDefinition_Link>> link;
    std::optional<std::shared_ptr<Meta>> meta;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    string name;
    std::optional<canonical> profile;
    std::optional<string> publisher;
    std::optional<markdown> purpose;
    code start;
    code status;
    std::optional<std::shared_ptr<Narrative>> text;
    std::optional<uri> url_;
    std::vector<std::shared_ptr<UsageContext>> use_context;
    std::optional<string> version;
};

class GraphDefinition_Link {
public:
    std::optional<string> description;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::optional<string> max;
    std::optional<integer> min;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<string> path;
    std::optional<string> slice_name;
    std::vector<std::shared_ptr<GraphDefinition_Link_Target>> target;
};

class GraphDefinition_Link_Target {
public:
    std::vector<std::shared_ptr<GraphDefinition_Link_Target_Compartment>> compartment;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::vector<std::shared_ptr<GraphDefinition_Link>> link;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<string> params;
    std::optional<canonical> profile;
    code type;
};

class GraphDefinition_Link_Target_Compartment {
public:
    code code_;
    std::optional<string> description;
    std::optional<string> expression;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    code rule;
    code use;
};

class Group {
public:
    std::optional<boolean> active;
    boolean actual;
    std::vector<std::shared_ptr<Group_Characteristic>> characteristic;
    std::optional<std::shared_ptr<CodeableConcept>> code_;
    std::vector<std::shared_ptr<Resource>> contained;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::vector<std::shared_ptr<Identifier>> identifier;
    std::optional<uri> implicit_rules;
    std::optional<code> language;
    std::optional<std::shared_ptr<Reference>> managing_entity;
    std::vector<std::shared_ptr<Group_Member>> member;
    std::optional<std::shared_ptr<Meta>> meta;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<string> name;
    std::optional<unsignedInt> quantity;
    std::optional<std::shared_ptr<Narrative>> text;
    code type;
};

class Group_Characteristic {
public:
    std::shared_ptr<CodeableConcept> code_;
    boolean exclude;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<std::shared_ptr<Period>> period;
    using VALUE_Variant = std::variant<
        std::shared_ptr<CodeableConcept>,
        std::shared_ptr<boolean>,
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
    std::optional<string> id_;
    std::optional<boolean> inactive;
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
    std::optional<string> id_;
    std::vector<std::shared_ptr<Identifier>> identifier;
    std::optional<uri> implicit_rules;
    std::optional<code> language;
    std::optional<std::shared_ptr<Meta>> meta;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    using MODULE_Variant = std::variant<
        std::shared_ptr<uri>,
        std::shared_ptr<canonical>,
        std::shared_ptr<CodeableConcept>
    >;
    MODULE_Variant module;
    std::vector<std::shared_ptr<Annotation>> note;
    std::optional<dateTime> occurrence_date_time;
    std::optional<std::shared_ptr<Reference>> output_parameters;
    std::optional<std::shared_ptr<Reference>> performer;
    std::vector<std::shared_ptr<CodeableConcept>> reason_code;
    std::vector<std::shared_ptr<Reference>> reason_reference;
    std::optional<std::shared_ptr<Identifier>> request_identifier;
    std::optional<std::shared_ptr<Reference>> result;
    code status;
    std::optional<std::shared_ptr<Reference>> subject;
    std::optional<std::shared_ptr<Narrative>> text;
};

class HealthcareService {
public:
    std::optional<boolean> active;
    std::optional<boolean> appointment_required;
    std::optional<string> availability_exceptions;
    std::vector<std::shared_ptr<HealthcareService_AvailableTime>> available_time;
    std::vector<std::shared_ptr<CodeableConcept>> category;
    std::vector<std::shared_ptr<CodeableConcept>> characteristic;
    std::optional<string> comment;
    std::vector<std::shared_ptr<CodeableConcept>> communication;
    std::vector<std::shared_ptr<Resource>> contained;
    std::vector<std::shared_ptr<Reference>> coverage_area;
    std::vector<std::shared_ptr<HealthcareService_Eligibility>> eligibility;
    std::vector<std::shared_ptr<Reference>> endpoint;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<markdown> extra_details;
    std::optional<string> id_;
    std::vector<std::shared_ptr<Identifier>> identifier;
    std::optional<uri> implicit_rules;
    std::optional<code> language;
    std::vector<std::shared_ptr<Reference>> location;
    std::optional<std::shared_ptr<Meta>> meta;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<string> name;
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
    std::optional<boolean> all_day;
    std::optional<time> available_end_time;
    std::optional<time> available_start_time;
    std::vector<code> days_of_week;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
};

class HealthcareService_Eligibility {
public:
    std::optional<std::shared_ptr<CodeableConcept>> code_;
    std::optional<markdown> comment;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
};

class HealthcareService_NotAvailable {
public:
    string description;
    std::optional<std::shared_ptr<Period>> during;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
};

class HumanName {
public:
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> family;
    std::vector<string> given;
    std::optional<string> id_;
    std::optional<std::shared_ptr<Period>> period;
    std::vector<string> prefix;
    std::vector<string> suffix;
    std::optional<string> text;
    std::optional<code> use;
};

class Identifier {
public:
    std::optional<std::shared_ptr<Reference>> assigner;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::optional<std::shared_ptr<Period>> period;
    std::optional<uri> system;
    std::optional<std::shared_ptr<CodeableConcept>> type;
    std::optional<code> use;
    std::optional<string> value;
};

class ImagingStudy {
public:
    std::vector<std::shared_ptr<Reference>> based_on;
    std::vector<std::shared_ptr<Resource>> contained;
    std::optional<string> description;
    std::optional<std::shared_ptr<Reference>> encounter;
    std::vector<std::shared_ptr<Reference>> endpoint;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::vector<std::shared_ptr<Identifier>> identifier;
    std::optional<uri> implicit_rules;
    std::vector<std::shared_ptr<Reference>> interpreter;
    std::optional<code> language;
    std::optional<std::shared_ptr<Reference>> location;
    std::optional<std::shared_ptr<Meta>> meta;
    std::vector<std::shared_ptr<Coding>> modality;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::vector<std::shared_ptr<Annotation>> note;
    std::optional<unsignedInt> number_of_instances;
    std::optional<unsignedInt> number_of_series;
    std::vector<std::shared_ptr<CodeableConcept>> procedure_code;
    std::optional<std::shared_ptr<Reference>> procedure_reference;
    std::vector<std::shared_ptr<CodeableConcept>> reason_code;
    std::vector<std::shared_ptr<Reference>> reason_reference;
    std::optional<std::shared_ptr<Reference>> referrer;
    std::vector<std::shared_ptr<ImagingStudy_Series>> series;
    std::optional<dateTime> started;
    code status;
    std::shared_ptr<Reference> subject;
    std::optional<std::shared_ptr<Narrative>> text;
};

class ImagingStudy_Series {
public:
    std::optional<std::shared_ptr<Coding>> body_site;
    std::optional<string> description;
    std::vector<std::shared_ptr<Reference>> endpoint;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::vector<std::shared_ptr<ImagingStudy_Series_Instance>> instance;
    std::optional<std::shared_ptr<Coding>> laterality;
    std::shared_ptr<Coding> modality;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<unsignedInt> number;
    std::optional<unsignedInt> number_of_instances;
    std::vector<std::shared_ptr<ImagingStudy_Series_Performer>> performer;
    std::vector<std::shared_ptr<Reference>> specimen;
    std::optional<dateTime> started;
    id uid;
};

class ImagingStudy_Series_Instance {
public:
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<unsignedInt> number;
    std::shared_ptr<Coding> sop_class;
    std::optional<string> title;
    id uid;
};

class ImagingStudy_Series_Performer {
public:
    std::shared_ptr<Reference> actor;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<CodeableConcept>> function;
    std::optional<string> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
};

class Immunization {
public:
    std::vector<std::shared_ptr<Resource>> contained;
    std::optional<std::shared_ptr<Quantity>> dose_quantity;
    std::vector<std::shared_ptr<Immunization_Education>> education;
    std::optional<std::shared_ptr<Reference>> encounter;
    std::optional<date> expiration_date;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<CodeableConcept>> funding_source;
    std::optional<string> id_;
    std::vector<std::shared_ptr<Identifier>> identifier;
    std::optional<uri> implicit_rules;
    std::optional<boolean> is_subpotent;
    std::optional<code> language;
    std::optional<std::shared_ptr<Reference>> location;
    std::optional<string> lot_number;
    std::optional<std::shared_ptr<Reference>> manufacturer;
    std::optional<std::shared_ptr<Meta>> meta;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::vector<std::shared_ptr<Annotation>> note;
    using OCCURRENCE_Variant = std::variant<
        std::shared_ptr<dateTime>,
        std::shared_ptr<string>
    >;
    OCCURRENCE_Variant occurrence;
    std::shared_ptr<Reference> patient;
    std::vector<std::shared_ptr<Immunization_Performer>> performer;
    std::optional<boolean> primary_source;
    std::vector<std::shared_ptr<CodeableConcept>> program_eligibility;
    std::vector<std::shared_ptr<Immunization_ProtocolApplied>> protocol_applied;
    std::vector<std::shared_ptr<Immunization_Reaction>> reaction;
    std::vector<std::shared_ptr<CodeableConcept>> reason_code;
    std::vector<std::shared_ptr<Reference>> reason_reference;
    std::optional<dateTime> recorded;
    std::optional<std::shared_ptr<CodeableConcept>> report_origin;
    std::optional<std::shared_ptr<CodeableConcept>> route;
    std::optional<std::shared_ptr<CodeableConcept>> site;
    code status;
    std::optional<std::shared_ptr<CodeableConcept>> status_reason;
    std::vector<std::shared_ptr<CodeableConcept>> subpotent_reason;
    std::optional<std::shared_ptr<Narrative>> text;
    std::shared_ptr<CodeableConcept> vaccine_code;
};

class Immunization_Education {
public:
    std::optional<string> document_type;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<dateTime> presentation_date;
    std::optional<dateTime> publication_date;
    std::optional<uri> reference;
};

class Immunization_Performer {
public:
    std::shared_ptr<Reference> actor;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<CodeableConcept>> function;
    std::optional<string> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
};

class Immunization_ProtocolApplied {
public:
    std::optional<std::shared_ptr<Reference>> authority;
    using DOSE_NUMBER_Variant = std::variant<
        std::shared_ptr<positiveInt>,
        std::shared_ptr<string>
    >;
    DOSE_NUMBER_Variant dose_number;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<string> series;
    using SERIES_DOSES_Variant = std::variant<
        std::shared_ptr<positiveInt>,
        std::shared_ptr<string>
    >;
    SERIES_DOSES_Variant series_doses;
    std::vector<std::shared_ptr<CodeableConcept>> target_disease;
};

class Immunization_Reaction {
public:
    std::optional<dateTime> date_;
    std::optional<std::shared_ptr<Reference>> detail;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<boolean> reported;
};

class ImmunizationEvaluation {
public:
    std::optional<std::shared_ptr<Reference>> authority;
    std::vector<std::shared_ptr<Resource>> contained;
    std::optional<dateTime> date_;
    std::optional<string> description;
    using DOSE_NUMBER_Variant = std::variant<
        std::shared_ptr<positiveInt>,
        std::shared_ptr<string>
    >;
    DOSE_NUMBER_Variant dose_number;
    std::shared_ptr<CodeableConcept> dose_status;
    std::vector<std::shared_ptr<CodeableConcept>> dose_status_reason;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::vector<std::shared_ptr<Identifier>> identifier;
    std::shared_ptr<Reference> immunization_event;
    std::optional<uri> implicit_rules;
    std::optional<code> language;
    std::optional<std::shared_ptr<Meta>> meta;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::shared_ptr<Reference> patient;
    std::optional<string> series;
    using SERIES_DOSES_Variant = std::variant<
        std::shared_ptr<positiveInt>,
        std::shared_ptr<string>
    >;
    SERIES_DOSES_Variant series_doses;
    code status;
    std::shared_ptr<CodeableConcept> target_disease;
    std::optional<std::shared_ptr<Narrative>> text;
};

class ImmunizationRecommendation {
public:
    std::optional<std::shared_ptr<Reference>> authority;
    std::vector<std::shared_ptr<Resource>> contained;
    dateTime date_;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::vector<std::shared_ptr<Identifier>> identifier;
    std::optional<uri> implicit_rules;
    std::optional<code> language;
    std::optional<std::shared_ptr<Meta>> meta;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::shared_ptr<Reference> patient;
    std::optional<std::shared_ptr<Narrative>> text;
};

class ImmunizationRecommendation_Recommendation {
public:
    std::vector<std::shared_ptr<CodeableConcept>> contraindicated_vaccine_code;
    std::vector<std::shared_ptr<ImmunizationRecommendation_Recommendation_DateCriterion>> date_criterion;
    std::optional<string> description;
    using DOSE_NUMBER_Variant = std::variant<
        std::shared_ptr<positiveInt>,
        std::shared_ptr<string>
    >;
    DOSE_NUMBER_Variant dose_number;
    std::vector<std::shared_ptr<Extension>> extension;
    std::vector<std::shared_ptr<CodeableConcept>> forecast_reason;
    std::shared_ptr<CodeableConcept> forecast_status;
    std::optional<string> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<string> series;
    using SERIES_DOSES_Variant = std::variant<
        std::shared_ptr<positiveInt>,
        std::shared_ptr<string>
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
    std::optional<string> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    dateTime value;
};

class ImplementationGuide {
public:
    std::vector<std::shared_ptr<ContactDetail>> contact;
    std::vector<std::shared_ptr<Resource>> contained;
    std::optional<markdown> copyright;
    std::optional<dateTime> date_;
    std::optional<std::shared_ptr<ImplementationGuide_Definition>> definition;
    std::vector<std::shared_ptr<ImplementationGuide_DependsOn>> depends_on;
    std::optional<markdown> description;
    std::optional<boolean> experimental;
    std::vector<std::shared_ptr<Extension>> extension;
    std::vector<std::shared_ptr<ImplementationGuide_Global>> global;
    std::optional<string> id_;
    std::optional<uri> implicit_rules;
    std::vector<std::shared_ptr<CodeableConcept>> jurisdiction;
    std::optional<code> language;
    std::optional<code> license;
    std::optional<std::shared_ptr<ImplementationGuide_Manifest>> manifest;
    std::optional<std::shared_ptr<Meta>> meta;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    string name;
    id package_id;
    std::optional<string> publisher;
    code status;
    std::optional<std::shared_ptr<Narrative>> text;
    std::optional<string> title;
    uri url_;
    std::vector<std::shared_ptr<UsageContext>> use_context;
    std::optional<string> version;
};

class ImplementationGuide_Definition {
public:
    std::vector<std::shared_ptr<Extension>> extension;
    std::vector<std::shared_ptr<ImplementationGuide_Definition_Grouping>> grouping;
    std::optional<string> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<std::shared_ptr<ImplementationGuide_Definition_Page>> page;
    std::vector<std::shared_ptr<ImplementationGuide_Definition_Parameter>> parameter;
    std::vector<std::shared_ptr<ImplementationGuide_Definition_Template>> template_;
};

class ImplementationGuide_Definition_Grouping {
public:
    std::optional<string> description;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    string name;
};

class ImplementationGuide_Definition_Page {
public:
    std::vector<std::shared_ptr<Extension>> extension;
    code generation;
    std::optional<string> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    using NAME_Variant = std::variant<
        std::shared_ptr<url>,
        std::shared_ptr<Reference>
    >;
    NAME_Variant name;
    std::vector<std::shared_ptr<ImplementationGuide_Definition_Page>> page;
    string title;
};

class ImplementationGuide_Definition_Parameter {
public:
    code code_;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    string value;
};

class ImplementationGuide_Definition_Resource {
public:
    std::optional<string> description;
    using EXAMPLE_Variant = std::variant<
        std::shared_ptr<boolean>,
        std::shared_ptr<canonical>
    >;
    EXAMPLE_Variant example;
    std::vector<std::shared_ptr<Extension>> extension;
    std::vector<code> fhir_version;
    std::optional<id> grouping_id;
    std::optional<string> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<string> name;
    std::shared_ptr<Reference> reference;
};

class ImplementationGuide_Definition_Template {
public:
    code code_;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<string> scope;
    string source;
};

class ImplementationGuide_DependsOn {
public:
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<id> package_id;
    canonical uri_;
    std::optional<string> version;
};

class ImplementationGuide_Global {
public:
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    canonical profile;
    code type;
};

class ImplementationGuide_Manifest {
public:
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::vector<string> image;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::vector<string> other;
    std::vector<std::shared_ptr<ImplementationGuide_Manifest_Page>> page;
    std::optional<url> rendering;
};

class ImplementationGuide_Manifest_Page {
public:
    std::vector<string> anchor;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    string name;
    std::optional<string> title;
};

class ImplementationGuide_Manifest_Resource {
public:
    using EXAMPLE_Variant = std::variant<
        std::shared_ptr<boolean>,
        std::shared_ptr<canonical>
    >;
    EXAMPLE_Variant example;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::shared_ptr<Reference> reference;
    std::optional<url> relative_path;
};

class InsurancePlan {
public:
    std::optional<std::shared_ptr<Reference>> administered_by;
    std::vector<string> alias;
    std::vector<std::shared_ptr<InsurancePlan_Contact>> contact;
    std::vector<std::shared_ptr<Resource>> contained;
    std::vector<std::shared_ptr<InsurancePlan_Coverage>> coverage;
    std::vector<std::shared_ptr<Reference>> coverage_area;
    std::vector<std::shared_ptr<Reference>> endpoint;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::vector<std::shared_ptr<Identifier>> identifier;
    std::optional<uri> implicit_rules;
    std::optional<code> language;
    std::optional<std::shared_ptr<Meta>> meta;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<string> name;
    std::vector<std::shared_ptr<Reference>> network;
    std::optional<std::shared_ptr<Reference>> owned_by;
    std::optional<std::shared_ptr<Period>> period;
    std::vector<std::shared_ptr<InsurancePlan_Plan>> plan;
    std::optional<code> status;
    std::optional<std::shared_ptr<Narrative>> text;
    std::vector<std::shared_ptr<CodeableConcept>> type;
};

class InsurancePlan_Contact {
public:
    std::optional<std::shared_ptr<Address>> address;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<std::shared_ptr<HumanName>> name;
    std::optional<std::shared_ptr<CodeableConcept>> purpose;
    std::vector<std::shared_ptr<ContactPoint>> telecom;
};

class InsurancePlan_Coverage {
public:
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::vector<std::shared_ptr<Reference>> network;
    std::shared_ptr<CodeableConcept> type;
};

class InsurancePlan_Coverage_Benefit {
public:
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::vector<std::shared_ptr<InsurancePlan_Coverage_Benefit_Limit>> limit;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<string> requirement;
    std::shared_ptr<CodeableConcept> type;
};

class InsurancePlan_Coverage_Benefit_Limit {
public:
    std::optional<std::shared_ptr<CodeableConcept>> code_;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<std::shared_ptr<Quantity>> value;
};

class InsurancePlan_Plan {
public:
    std::vector<std::shared_ptr<Reference>> coverage_area;
    std::vector<std::shared_ptr<Extension>> extension;
    std::vector<std::shared_ptr<InsurancePlan_Plan_GeneralCost>> general_cost;
    std::optional<string> id_;
    std::vector<std::shared_ptr<Identifier>> identifier;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::vector<std::shared_ptr<Reference>> network;
    std::vector<std::shared_ptr<InsurancePlan_Plan_SpecificCost>> specific_cost;
    std::optional<std::shared_ptr<CodeableConcept>> type;
};

class InsurancePlan_Plan_GeneralCost {
public:
    std::optional<string> comment;
    std::optional<std::shared_ptr<Money>> cost;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<positiveInt> group_size;
    std::optional<string> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<std::shared_ptr<CodeableConcept>> type;
};

class InsurancePlan_Plan_SpecificCost {
public:
    std::vector<std::shared_ptr<InsurancePlan_Plan_SpecificCost_Benefit>> benefit;
    std::shared_ptr<CodeableConcept> category;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
};

class InsurancePlan_Plan_SpecificCost_Benefit {
public:
    std::vector<std::shared_ptr<InsurancePlan_Plan_SpecificCost_Benefit_Cost>> cost;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::shared_ptr<CodeableConcept> type;
};

class InsurancePlan_Plan_SpecificCost_Benefit_Cost {
public:
    std::optional<std::shared_ptr<CodeableConcept>> applicability;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::vector<std::shared_ptr<CodeableConcept>> qualifiers;
    std::shared_ptr<CodeableConcept> type;
    std::optional<std::shared_ptr<Quantity>> value;
};

class Invoice {
public:
    std::optional<std::shared_ptr<Reference>> account;
    std::optional<string> cancelled_reason;
    std::vector<std::shared_ptr<Resource>> contained;
    std::optional<dateTime> date_;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::vector<std::shared_ptr<Identifier>> identifier;
    std::optional<uri> implicit_rules;
    std::optional<std::shared_ptr<Reference>> issuer;
    std::optional<code> language;
    std::vector<std::shared_ptr<Invoice_LineItem>> line_item;
    std::optional<std::shared_ptr<Meta>> meta;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::vector<std::shared_ptr<Annotation>> note;
    std::vector<std::shared_ptr<Invoice_Participant>> participant;
    std::optional<markdown> payment_terms;
    std::optional<std::shared_ptr<Reference>> recipient;
    code status;
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
    std::optional<string> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::vector<std::shared_ptr<Invoice_LineItem_PriceComponent>> price_component;
    std::optional<positiveInt> sequence;
};

class Invoice_LineItem_PriceComponent {
public:
    std::optional<std::shared_ptr<Money>> amount;
    std::optional<std::shared_ptr<CodeableConcept>> code_;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<decimal> factor;
    std::optional<string> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    code type;
};

class Invoice_Participant {
public:
    std::shared_ptr<Reference> actor;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<std::shared_ptr<CodeableConcept>> role;
};

class Library {
public:
    std::optional<date> approval_date;
    std::vector<std::shared_ptr<ContactDetail>> author;
    std::vector<std::shared_ptr<ContactDetail>> contact;
    std::vector<std::shared_ptr<Resource>> contained;
    std::vector<std::shared_ptr<Attachment>> content;
    std::optional<markdown> copyright;
    std::vector<std::shared_ptr<DataRequirement>> data_requirement;
    std::optional<dateTime> date_;
    std::optional<markdown> description;
    std::vector<std::shared_ptr<ContactDetail>> editor;
    std::optional<std::shared_ptr<Period>> effective_period;
    std::vector<std::shared_ptr<ContactDetail>> endorser;
    std::optional<boolean> experimental;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::vector<std::shared_ptr<Identifier>> identifier;
    std::optional<uri> implicit_rules;
    std::vector<std::shared_ptr<CodeableConcept>> jurisdiction;
    std::optional<code> language;
    std::optional<date> last_review_date;
    std::optional<std::shared_ptr<Meta>> meta;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<string> name;
    std::vector<std::shared_ptr<ParameterDefinition>> parameter;
    std::optional<string> publisher;
    std::optional<markdown> purpose;
    std::vector<std::shared_ptr<RelatedArtifact>> related_artifact;
    std::vector<std::shared_ptr<ContactDetail>> reviewer;
    code status;
    using SUBJECT_Variant = std::variant<
        std::shared_ptr<CodeableConcept>,
        std::shared_ptr<Reference>
    >;
    SUBJECT_Variant subject;
    std::optional<string> subtitle;
    std::optional<std::shared_ptr<Narrative>> text;
    std::optional<string> title;
    std::vector<std::shared_ptr<CodeableConcept>> topic;
    std::shared_ptr<CodeableConcept> type;
    std::optional<uri> url_;
    std::optional<string> usage;
    std::vector<std::shared_ptr<UsageContext>> use_context;
    std::optional<string> version;
};

class Linkage {
public:
    std::optional<boolean> active;
    std::optional<std::shared_ptr<Reference>> author;
    std::vector<std::shared_ptr<Resource>> contained;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::optional<uri> implicit_rules;
    std::optional<code> language;
    std::optional<std::shared_ptr<Meta>> meta;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<std::shared_ptr<Narrative>> text;
};

class Linkage_Item {
public:
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::shared_ptr<Reference> resource;
    code type;
};

class List {
public:
    std::optional<std::shared_ptr<CodeableConcept>> code_;
    std::vector<std::shared_ptr<Resource>> contained;
    std::optional<dateTime> date_;
    std::optional<std::shared_ptr<CodeableConcept>> empty_reason;
    std::optional<std::shared_ptr<Reference>> encounter;
    std::vector<std::shared_ptr<List_Entry>> entry;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::vector<std::shared_ptr<Identifier>> identifier;
    std::optional<uri> implicit_rules;
    std::optional<code> language;
    std::optional<std::shared_ptr<Meta>> meta;
    code mode;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::vector<std::shared_ptr<Annotation>> note;
    std::optional<std::shared_ptr<CodeableConcept>> ordered_by;
    std::optional<std::shared_ptr<Reference>> source;
    code status;
    std::optional<std::shared_ptr<Reference>> subject;
    std::optional<std::shared_ptr<Narrative>> text;
    std::optional<string> title;
};

class List_Entry {
public:
    std::optional<dateTime> date_;
    std::optional<boolean> deleted;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<CodeableConcept>> flag;
    std::optional<string> id_;
    std::shared_ptr<Reference> item;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
};

class Location {
public:
    std::optional<std::shared_ptr<Address>> address;
    std::vector<string> alias;
    std::optional<string> availability_exceptions;
    std::vector<std::shared_ptr<Resource>> contained;
    std::optional<string> description;
    std::vector<std::shared_ptr<Reference>> endpoint;
    std::vector<std::shared_ptr<Extension>> extension;
    std::vector<std::shared_ptr<Location_HoursOfOperation>> hours_of_operation;
    std::optional<string> id_;
    std::vector<std::shared_ptr<Identifier>> identifier;
    std::optional<uri> implicit_rules;
    std::optional<code> language;
    std::optional<std::shared_ptr<Reference>> managing_organization;
    std::optional<std::shared_ptr<Meta>> meta;
    std::optional<code> mode;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<string> name;
    std::optional<std::shared_ptr<Coding>> operational_status;
    std::optional<std::shared_ptr<Reference>> part_of;
    std::optional<std::shared_ptr<CodeableConcept>> physical_type;
    std::optional<std::shared_ptr<Location_Position>> position;
    std::optional<code> status;
    std::vector<std::shared_ptr<ContactPoint>> telecom;
    std::optional<std::shared_ptr<Narrative>> text;
    std::vector<std::shared_ptr<CodeableConcept>> type;
};

class Location_HoursOfOperation {
public:
    std::optional<boolean> all_day;
    std::optional<time> closing_time;
    std::vector<code> days_of_week;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<time> opening_time;
};

class Location_Position {
public:
    std::optional<decimal> altitude;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    decimal latitude;
    decimal longitude;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
};

class MarketingStatus {
public:
    std::shared_ptr<CodeableConcept> country;
    std::shared_ptr<Period> date_range;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::optional<std::shared_ptr<CodeableConcept>> jurisdiction;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<dateTime> restore_date;
    std::shared_ptr<CodeableConcept> status;
};

class Measure {
public:
    std::optional<date> approval_date;
    std::vector<std::shared_ptr<ContactDetail>> author;
    std::optional<markdown> clinical_recommendation_statement;
    std::optional<std::shared_ptr<CodeableConcept>> composite_scoring;
    std::vector<std::shared_ptr<ContactDetail>> contact;
    std::vector<std::shared_ptr<Resource>> contained;
    std::optional<markdown> copyright;
    std::optional<dateTime> date_;
    std::vector<markdown> definition;
    std::optional<markdown> description;
    std::optional<markdown> disclaimer;
    std::vector<std::shared_ptr<ContactDetail>> editor;
    std::optional<std::shared_ptr<Period>> effective_period;
    std::vector<std::shared_ptr<ContactDetail>> endorser;
    std::optional<boolean> experimental;
    std::vector<std::shared_ptr<Extension>> extension;
    std::vector<std::shared_ptr<Measure_Group>> group;
    std::optional<markdown> guidance;
    std::optional<string> id_;
    std::vector<std::shared_ptr<Identifier>> identifier;
    std::optional<uri> implicit_rules;
    std::optional<std::shared_ptr<CodeableConcept>> improvement_notation;
    std::vector<std::shared_ptr<CodeableConcept>> jurisdiction;
    std::optional<code> language;
    std::optional<date> last_review_date;
    std::vector<canonical> library;
    std::optional<std::shared_ptr<Meta>> meta;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<string> name;
    std::optional<string> publisher;
    std::optional<markdown> purpose;
    std::optional<string> rate_aggregation;
    std::optional<markdown> rationale;
    std::vector<std::shared_ptr<RelatedArtifact>> related_artifact;
    std::vector<std::shared_ptr<ContactDetail>> reviewer;
    std::optional<string> risk_adjustment;
    std::optional<std::shared_ptr<CodeableConcept>> scoring;
    code status;
    using SUBJECT_Variant = std::variant<
        std::shared_ptr<CodeableConcept>,
        std::shared_ptr<Reference>
    >;
    SUBJECT_Variant subject;
    std::optional<string> subtitle;
    std::vector<std::shared_ptr<Measure_SupplementalData>> supplemental_data;
    std::optional<std::shared_ptr<Narrative>> text;
    std::optional<string> title;
    std::vector<std::shared_ptr<CodeableConcept>> topic;
    std::vector<std::shared_ptr<CodeableConcept>> type;
    std::optional<uri> url_;
    std::optional<string> usage;
    std::vector<std::shared_ptr<UsageContext>> use_context;
    std::optional<string> version;
};

class Measure_Group {
public:
    std::optional<std::shared_ptr<CodeableConcept>> code_;
    std::optional<string> description;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::vector<std::shared_ptr<Measure_Group_Population>> population;
    std::vector<std::shared_ptr<Measure_Group_Stratifier>> stratifier;
};

class Measure_Group_Population {
public:
    std::optional<std::shared_ptr<CodeableConcept>> code_;
    std::shared_ptr<Expression> criteria;
    std::optional<string> description;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
};

class Measure_Group_Stratifier {
public:
    std::optional<std::shared_ptr<CodeableConcept>> code_;
    std::vector<std::shared_ptr<Measure_Group_Stratifier_Component>> component;
    std::optional<std::shared_ptr<Expression>> criteria;
    std::optional<string> description;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
};

class Measure_Group_Stratifier_Component {
public:
    std::optional<std::shared_ptr<CodeableConcept>> code_;
    std::shared_ptr<Expression> criteria;
    std::optional<string> description;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
};

class Measure_SupplementalData {
public:
    std::optional<std::shared_ptr<CodeableConcept>> code_;
    std::shared_ptr<Expression> criteria;
    std::optional<string> description;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::vector<std::shared_ptr<CodeableConcept>> usage;
};

class MeasureReport {
public:
    std::vector<std::shared_ptr<Resource>> contained;
    std::optional<dateTime> date_;
    std::vector<std::shared_ptr<Reference>> evaluated_resource;
    std::vector<std::shared_ptr<Extension>> extension;
    std::vector<std::shared_ptr<MeasureReport_Group>> group;
    std::optional<string> id_;
    std::vector<std::shared_ptr<Identifier>> identifier;
    std::optional<uri> implicit_rules;
    std::optional<std::shared_ptr<CodeableConcept>> improvement_notation;
    std::optional<code> language;
    canonical measure;
    std::optional<std::shared_ptr<Meta>> meta;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::shared_ptr<Period> period;
    std::optional<std::shared_ptr<Reference>> reporter;
    code status;
    std::optional<std::shared_ptr<Reference>> subject;
    std::optional<std::shared_ptr<Narrative>> text;
    code type;
};

class MeasureReport_Group {
public:
    std::optional<std::shared_ptr<CodeableConcept>> code_;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::optional<std::shared_ptr<Quantity>> measure_score;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::vector<std::shared_ptr<MeasureReport_Group_Population>> population;
    std::vector<std::shared_ptr<MeasureReport_Group_Stratifier>> stratifier;
};

class MeasureReport_Group_Population {
public:
    std::optional<std::shared_ptr<CodeableConcept>> code_;
    std::optional<integer> count;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<std::shared_ptr<Reference>> subject_results;
};

class MeasureReport_Group_Stratifier {
public:
    std::vector<std::shared_ptr<CodeableConcept>> code_;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::vector<std::shared_ptr<MeasureReport_Group_Stratifier_Stratum>> stratum;
};

class MeasureReport_Group_Stratifier_Stratum {
public:
    std::vector<std::shared_ptr<MeasureReport_Group_Stratifier_Stratum_Component>> component;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::optional<std::shared_ptr<Quantity>> measure_score;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::vector<std::shared_ptr<MeasureReport_Group_Stratifier_Stratum_Population>> population;
    std::optional<std::shared_ptr<CodeableConcept>> value;
};

class MeasureReport_Group_Stratifier_Stratum_Component {
public:
    std::shared_ptr<CodeableConcept> code_;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::shared_ptr<CodeableConcept> value;
};

class MeasureReport_Group_Stratifier_Stratum_Population {
public:
    std::optional<std::shared_ptr<CodeableConcept>> code_;
    std::optional<integer> count;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
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
        std::shared_ptr<dateTime>,
        std::shared_ptr<Period>
    >;
    CREATED_Variant created;
    std::optional<std::shared_ptr<Reference>> device;
    std::optional<string> device_name;
    std::optional<decimal> duration;
    std::optional<std::shared_ptr<Reference>> encounter;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<positiveInt> frames;
    std::optional<positiveInt> height;
    std::optional<string> id_;
    std::vector<std::shared_ptr<Identifier>> identifier;
    std::optional<uri> implicit_rules;
    std::optional<instant> issued;
    std::optional<code> language;
    std::optional<std::shared_ptr<Meta>> meta;
    std::optional<std::shared_ptr<CodeableConcept>> modality;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::vector<std::shared_ptr<Annotation>> note;
    std::optional<std::shared_ptr<Reference>> operator_;
    std::vector<std::shared_ptr<Reference>> part_of;
    std::vector<std::shared_ptr<CodeableConcept>> reason_code;
    code status;
    std::optional<std::shared_ptr<Reference>> subject;
    std::optional<std::shared_ptr<Narrative>> text;
    std::optional<std::shared_ptr<CodeableConcept>> type;
    std::optional<std::shared_ptr<CodeableConcept>> view;
    std::optional<positiveInt> width;
};

class Medication {
public:
    std::optional<std::shared_ptr<Ratio>> amount;
    std::optional<std::shared_ptr<Medication_Batch>> batch;
    std::optional<std::shared_ptr<CodeableConcept>> code_;
    std::vector<std::shared_ptr<Resource>> contained;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<CodeableConcept>> form;
    std::optional<string> id_;
    std::vector<std::shared_ptr<Identifier>> identifier;
    std::optional<uri> implicit_rules;
    std::vector<std::shared_ptr<Medication_Ingredient>> ingredient;
    std::optional<code> language;
    std::optional<std::shared_ptr<Reference>> manufacturer;
    std::optional<std::shared_ptr<Meta>> meta;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<code> status;
    std::optional<std::shared_ptr<Narrative>> text;
};

class Medication_Batch {
public:
    std::optional<dateTime> expiration_date;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::optional<string> lot_number;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
};

class Medication_Ingredient {
public:
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::optional<boolean> is_active;
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
        std::shared_ptr<dateTime>,
        std::shared_ptr<Period>
    >;
    EFFECTIVE_Variant effective;
    std::vector<std::shared_ptr<Reference>> event_history;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::vector<std::shared_ptr<Identifier>> identifier;
    std::optional<uri> implicit_rules;
    std::vector<uri> instantiates;
    std::optional<code> language;
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
    code status;
    std::vector<std::shared_ptr<CodeableConcept>> status_reason;
    std::shared_ptr<Reference> subject;
    std::vector<std::shared_ptr<Reference>> supporting_information;
    std::optional<std::shared_ptr<Narrative>> text;
};

class MedicationAdministration_Dosage {
public:
    std::optional<std::shared_ptr<Quantity>> dose;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::optional<std::shared_ptr<CodeableConcept>> method;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    using RATE_Variant = std::variant<
        std::shared_ptr<Ratio>,
        std::shared_ptr<Quantity>
    >;
    RATE_Variant rate;
    std::optional<std::shared_ptr<CodeableConcept>> route;
    std::optional<std::shared_ptr<CodeableConcept>> site;
    std::optional<string> text;
};

class MedicationAdministration_Performer {
public:
    std::shared_ptr<Reference> actor;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<CodeableConcept>> function;
    std::optional<string> id_;
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
    std::optional<string> id_;
    std::vector<std::shared_ptr<Identifier>> identifier;
    std::optional<uri> implicit_rules;
    std::optional<code> language;
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
    code status;
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
    std::optional<dateTime> when_handed_over;
    std::optional<dateTime> when_prepared;
};

class MedicationDispense_Performer {
public:
    std::shared_ptr<Reference> actor;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<CodeableConcept>> function;
    std::optional<string> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
};

class MedicationDispense_Substitution {
public:
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::vector<std::shared_ptr<CodeableConcept>> reason;
    std::vector<std::shared_ptr<Reference>> responsible_party;
    std::optional<std::shared_ptr<CodeableConcept>> type;
    boolean was_substituted;
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
    std::optional<string> id_;
    std::optional<uri> implicit_rules;
    std::vector<std::shared_ptr<MedicationKnowledge_Ingredient>> ingredient;
    std::vector<std::shared_ptr<CodeableConcept>> intended_route;
    std::vector<std::shared_ptr<MedicationKnowledge_Kinetics>> kinetics;
    std::optional<code> language;
    std::optional<std::shared_ptr<Reference>> manufacturer;
    std::vector<std::shared_ptr<MedicationKnowledge_MedicineClassification>> medicine_classification;
    std::optional<std::shared_ptr<Meta>> meta;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::vector<std::shared_ptr<MedicationKnowledge_MonitoringProgram>> monitoring_program;
    std::vector<std::shared_ptr<MedicationKnowledge_Monograph>> monograph;
    std::optional<std::shared_ptr<MedicationKnowledge_Packaging>> packaging;
    std::optional<markdown> preparation_instruction;
    std::vector<std::shared_ptr<CodeableConcept>> product_type;
    std::vector<std::shared_ptr<MedicationKnowledge_Regulatory>> regulatory;
    std::vector<std::shared_ptr<MedicationKnowledge_RelatedMedicationKnowledge>> related_medication_knowledge;
    std::optional<code> status;
    std::vector<string> synonym;
    std::optional<std::shared_ptr<Narrative>> text;
};

class MedicationKnowledge_AdministrationGuidelines {
public:
    std::vector<std::shared_ptr<MedicationKnowledge_AdministrationGuidelines_Dosage>> dosage;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
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
    std::optional<string> id_;
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
    std::optional<string> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::vector<string> value;
};

class MedicationKnowledge_Cost {
public:
    std::shared_ptr<Money> cost;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<string> source;
    std::shared_ptr<CodeableConcept> type;
};

class MedicationKnowledge_DrugCharacteristic {
public:
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<std::shared_ptr<CodeableConcept>> type;
    using VALUE_Variant = std::variant<
        std::shared_ptr<CodeableConcept>,
        std::shared_ptr<string>,
        std::shared_ptr<Quantity>,
        std::shared_ptr<base64Binary>
    >;
    VALUE_Variant value;
};

class MedicationKnowledge_Ingredient {
public:
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::optional<boolean> is_active;
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
    std::optional<string> id_;
    std::vector<std::shared_ptr<Quantity>> lethal_dose50;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
};

class MedicationKnowledge_MedicineClassification {
public:
    std::vector<std::shared_ptr<CodeableConcept>> classification;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::shared_ptr<CodeableConcept> type;
};

class MedicationKnowledge_MonitoringProgram {
public:
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<string> name;
    std::optional<std::shared_ptr<CodeableConcept>> type;
};

class MedicationKnowledge_Monograph {
public:
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<std::shared_ptr<Reference>> source;
    std::optional<std::shared_ptr<CodeableConcept>> type;
};

class MedicationKnowledge_Packaging {
public:
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<std::shared_ptr<Quantity>> quantity;
    std::optional<std::shared_ptr<CodeableConcept>> type;
};

class MedicationKnowledge_Regulatory {
public:
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::optional<std::shared_ptr<MedicationKnowledge_Regulatory_MaxDispense>> max_dispense;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::shared_ptr<Reference> regulatory_authority;
    std::vector<std::shared_ptr<MedicationKnowledge_Regulatory_Schedule>> schedule;
    std::vector<std::shared_ptr<MedicationKnowledge_Regulatory_Substitution>> substitution;
};

class MedicationKnowledge_Regulatory_MaxDispense {
public:
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<std::shared_ptr<Duration>> period;
    std::shared_ptr<Quantity> quantity;
};

class MedicationKnowledge_Regulatory_Schedule {
public:
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::shared_ptr<CodeableConcept> schedule;
};

class MedicationKnowledge_Regulatory_Substitution {
public:
    boolean allowed;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::shared_ptr<CodeableConcept> type;
};

class MedicationKnowledge_RelatedMedicationKnowledge {
public:
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::shared_ptr<CodeableConcept> type;
};

class MedicationRequest {
public:
    std::optional<dateTime> authored_on;
    std::vector<std::shared_ptr<Reference>> based_on;
    std::vector<std::shared_ptr<CodeableConcept>> category;
    std::vector<std::shared_ptr<Resource>> contained;
    std::optional<std::shared_ptr<CodeableConcept>> course_of_therapy_type;
    std::vector<std::shared_ptr<Reference>> detected_issue;
    std::optional<std::shared_ptr<MedicationRequest_DispenseRequest>> dispense_request;
    std::optional<boolean> do_not_perform;
    std::vector<std::shared_ptr<Dosage>> dosage_instruction;
    std::optional<std::shared_ptr<Reference>> encounter;
    std::vector<std::shared_ptr<Reference>> event_history;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<Identifier>> group_identifier;
    std::optional<string> id_;
    std::vector<std::shared_ptr<Identifier>> identifier;
    std::optional<uri> implicit_rules;
    std::vector<canonical> instantiates_canonical;
    std::vector<uri> instantiates_uri;
    std::vector<std::shared_ptr<Reference>> insurance;
    code intent;
    std::optional<code> language;
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
    std::optional<code> priority;
    std::vector<std::shared_ptr<CodeableConcept>> reason_code;
    std::vector<std::shared_ptr<Reference>> reason_reference;
    std::optional<std::shared_ptr<Reference>> recorder;
    using REPORTED_Variant = std::variant<
        std::shared_ptr<boolean>,
        std::shared_ptr<Reference>
    >;
    REPORTED_Variant reported;
    std::optional<std::shared_ptr<Reference>> requester;
    code status;
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
    std::optional<string> id_;
    std::optional<std::shared_ptr<MedicationRequest_DispenseRequest_InitialFill>> initial_fill;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<unsignedInt> number_of_repeats_allowed;
    std::optional<std::shared_ptr<Reference>> performer;
    std::optional<std::shared_ptr<Quantity>> quantity;
    std::optional<std::shared_ptr<Period>> validity_period;
};

class MedicationRequest_DispenseRequest_InitialFill {
public:
    std::optional<std::shared_ptr<Duration>> duration;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<std::shared_ptr<Quantity>> quantity;
};

class MedicationRequest_Substitution {
public:
    using ALLOWED_Variant = std::variant<
        std::shared_ptr<boolean>,
        std::shared_ptr<CodeableConcept>
    >;
    ALLOWED_Variant allowed;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<std::shared_ptr<CodeableConcept>> reason;
};

class MedicationStatement {
public:
    std::vector<std::shared_ptr<Reference>> based_on;
    std::optional<std::shared_ptr<CodeableConcept>> category;
    std::vector<std::shared_ptr<Resource>> contained;
    std::optional<std::shared_ptr<Reference>> context;
    std::optional<dateTime> date_asserted;
    std::vector<std::shared_ptr<Reference>> derived_from;
    std::vector<std::shared_ptr<Dosage>> dosage;
    using EFFECTIVE_Variant = std::variant<
        std::shared_ptr<dateTime>,
        std::shared_ptr<Period>
    >;
    EFFECTIVE_Variant effective;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::vector<std::shared_ptr<Identifier>> identifier;
    std::optional<uri> implicit_rules;
    std::optional<std::shared_ptr<Reference>> information_source;
    std::optional<code> language;
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
    code status;
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
    std::optional<string> id_;
    std::vector<std::shared_ptr<Identifier>> identifier;
    std::optional<uri> implicit_rules;
    std::optional<code> language;
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
    std::vector<string> special_measures;
    std::optional<std::shared_ptr<Narrative>> text;
    std::optional<std::shared_ptr<CodeableConcept>> type;
};

class MedicinalProduct_ManufacturingBusinessOperation {
public:
    std::optional<std::shared_ptr<Identifier>> authorisation_reference_number;
    std::optional<std::shared_ptr<CodeableConcept>> confidentiality_indicator;
    std::optional<dateTime> effective_date;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::vector<std::shared_ptr<Reference>> manufacturer;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<std::shared_ptr<CodeableConcept>> operation_type;
    std::optional<std::shared_ptr<Reference>> regulator;
};

class MedicinalProduct_Name {
public:
    std::vector<std::shared_ptr<MedicinalProduct_Name_CountryLanguage>> country_language;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::vector<std::shared_ptr<MedicinalProduct_Name_NamePart>> name_part;
    string product_name;
};

class MedicinalProduct_Name_CountryLanguage {
public:
    std::shared_ptr<CodeableConcept> country;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::optional<std::shared_ptr<CodeableConcept>> jurisdiction;
    std::shared_ptr<CodeableConcept> language;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
};

class MedicinalProduct_Name_NamePart {
public:
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    string part;
    std::shared_ptr<Coding> type;
};

class MedicinalProduct_SpecialDesignation {
public:
    std::optional<dateTime> date_;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
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
    std::optional<dateTime> date_of_first_authorization;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<Reference>> holder;
    std::optional<string> id_;
    std::vector<std::shared_ptr<Identifier>> identifier;
    std::optional<uri> implicit_rules;
    std::optional<dateTime> international_birth_date;
    std::vector<std::shared_ptr<CodeableConcept>> jurisdiction;
    std::vector<std::shared_ptr<MedicinalProductAuthorization_JurisdictionalAuthorization>> jurisdictional_authorization;
    std::optional<code> language;
    std::optional<std::shared_ptr<CodeableConcept>> legal_basis;
    std::optional<std::shared_ptr<Meta>> meta;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<std::shared_ptr<MedicinalProductAuthorization_Procedure>> procedure;
    std::optional<std::shared_ptr<Reference>> regulator;
    std::optional<dateTime> restore_date;
    std::optional<std::shared_ptr<CodeableConcept>> status;
    std::optional<dateTime> status_date;
    std::optional<std::shared_ptr<Reference>> subject;
    std::optional<std::shared_ptr<Narrative>> text;
    std::optional<std::shared_ptr<Period>> validity_period;
};

class MedicinalProductAuthorization_JurisdictionalAuthorization {
public:
    std::optional<std::shared_ptr<CodeableConcept>> country;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
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
        std::shared_ptr<dateTime>
    >;
    DATE_Variant date_;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
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
    std::optional<string> id_;
    std::optional<uri> implicit_rules;
    std::optional<code> language;
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
    std::optional<string> id_;
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
    std::optional<string> id_;
    std::optional<uri> implicit_rules;
    std::optional<std::shared_ptr<CodeableConcept>> intended_effect;
    std::optional<code> language;
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
    std::optional<string> id_;
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
    std::optional<boolean> allergenic_indicator;
    std::vector<std::shared_ptr<Resource>> contained;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::optional<std::shared_ptr<Identifier>> identifier;
    std::optional<uri> implicit_rules;
    std::optional<code> language;
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
    std::optional<string> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::vector<std::shared_ptr<MedicinalProductIngredient_SpecifiedSubstance_Strength>> strength;
};

class MedicinalProductIngredient_SpecifiedSubstance_Strength {
public:
    std::optional<std::shared_ptr<Ratio>> concentration;
    std::optional<std::shared_ptr<Ratio>> concentration_low_limit;
    std::vector<std::shared_ptr<CodeableConcept>> country;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::optional<string> measurement_point;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::shared_ptr<Ratio> presentation;
    std::optional<std::shared_ptr<Ratio>> presentation_low_limit;
    std::vector<std::shared_ptr<MedicinalProductIngredient_SpecifiedSubstance_Strength_ReferenceStrength>> reference_strength;
};

class MedicinalProductIngredient_SpecifiedSubstance_Strength_ReferenceStrength {
public:
    std::vector<std::shared_ptr<CodeableConcept>> country;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::optional<string> measurement_point;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::shared_ptr<Ratio> strength;
    std::optional<std::shared_ptr<Ratio>> strength_low_limit;
    std::optional<std::shared_ptr<CodeableConcept>> substance;
};

class MedicinalProductIngredient_Substance {
public:
    std::shared_ptr<CodeableConcept> code_;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::vector<std::shared_ptr<MedicinalProductIngredient_SpecifiedSubstance_Strength>> strength;
};

class MedicinalProductInteraction {
public:
    std::vector<std::shared_ptr<Resource>> contained;
    std::optional<string> description;
    std::optional<std::shared_ptr<CodeableConcept>> effect;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::optional<uri> implicit_rules;
    std::optional<std::shared_ptr<CodeableConcept>> incidence;
    std::vector<std::shared_ptr<MedicinalProductInteraction_Interactant>> interactant;
    std::optional<code> language;
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
    std::optional<string> id_;
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
    std::optional<string> id_;
    std::optional<uri> implicit_rules;
    std::vector<std::shared_ptr<Reference>> ingredient;
    std::optional<code> language;
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
    std::optional<string> description;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::vector<std::shared_ptr<Identifier>> identifier;
    std::optional<uri> implicit_rules;
    std::optional<code> language;
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
    std::optional<string> id_;
    std::optional<std::shared_ptr<Identifier>> immediate_packaging;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::shared_ptr<Identifier> outer_packaging;
};

class MedicinalProductPackaged_PackageItem {
public:
    std::vector<std::shared_ptr<CodeableConcept>> alternate_material;
    std::vector<std::shared_ptr<Reference>> device;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
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
    std::optional<string> id_;
    std::vector<std::shared_ptr<Identifier>> identifier;
    std::optional<uri> implicit_rules;
    std::vector<std::shared_ptr<Reference>> ingredient;
    std::optional<code> language;
    std::optional<std::shared_ptr<Meta>> meta;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<std::shared_ptr<Narrative>> text;
    std::optional<std::shared_ptr<CodeableConcept>> unit_of_presentation;
};

class MedicinalProductPharmaceutical_Characteristics {
public:
    std::shared_ptr<CodeableConcept> code_;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<std::shared_ptr<CodeableConcept>> status;
};

class MedicinalProductPharmaceutical_RouteOfAdministration {
public:
    std::shared_ptr<CodeableConcept> code_;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<Quantity>> first_dose;
    std::optional<string> id_;
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
    std::optional<string> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::vector<std::shared_ptr<MedicinalProductPharmaceutical_RouteOfAdministration_TargetSpecies_WithdrawalPeriod>> withdrawal_period;
};

class MedicinalProductPharmaceutical_RouteOfAdministration_TargetSpecies_WithdrawalPeriod {
public:
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<string> supporting_information;
    std::shared_ptr<CodeableConcept> tissue;
    std::shared_ptr<Quantity> value;
};

class MedicinalProductUndesirableEffect {
public:
    std::optional<std::shared_ptr<CodeableConcept>> classification;
    std::vector<std::shared_ptr<Resource>> contained;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<CodeableConcept>> frequency_of_occurrence;
    std::optional<string> id_;
    std::optional<uri> implicit_rules;
    std::optional<code> language;
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
    std::optional<canonical> base;
    std::optional<code> category;
    std::vector<std::shared_ptr<ContactDetail>> contact;
    std::vector<std::shared_ptr<Resource>> contained;
    std::optional<markdown> copyright;
    dateTime date_;
    std::optional<markdown> description;
    using EVENT_Variant = std::variant<
        std::shared_ptr<Coding>,
        std::shared_ptr<uri>
    >;
    EVENT_Variant event;
    std::optional<boolean> experimental;
    std::vector<std::shared_ptr<Extension>> extension;
    std::vector<std::shared_ptr<MessageDefinition_Focus>> focus;
    std::vector<canonical> graph;
    std::optional<string> id_;
    std::vector<std::shared_ptr<Identifier>> identifier;
    std::optional<uri> implicit_rules;
    std::vector<std::shared_ptr<CodeableConcept>> jurisdiction;
    std::optional<code> language;
    std::optional<std::shared_ptr<Meta>> meta;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<string> name;
    std::vector<canonical> parent;
    std::optional<string> publisher;
    std::optional<markdown> purpose;
    std::vector<canonical> replaces;
    std::optional<code> response_required;
    code status;
    std::optional<std::shared_ptr<Narrative>> text;
    std::optional<string> title;
    std::optional<uri> url_;
    std::vector<std::shared_ptr<UsageContext>> use_context;
    std::optional<string> version;
};

class MessageDefinition_AllowedResponse {
public:
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    canonical message;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<markdown> situation;
};

class MessageDefinition_Focus {
public:
    code code_;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::optional<string> max;
    unsignedInt min;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<canonical> profile;
};

class MessageHeader {
public:
    std::optional<std::shared_ptr<Reference>> author;
    std::vector<std::shared_ptr<Resource>> contained;
    std::optional<canonical> definition;
    std::vector<std::shared_ptr<MessageHeader_Destination>> destination;
    std::optional<std::shared_ptr<Reference>> enterer;
    using EVENT_Variant = std::variant<
        std::shared_ptr<Coding>,
        std::shared_ptr<uri>
    >;
    EVENT_Variant event;
    std::vector<std::shared_ptr<Extension>> extension;
    std::vector<std::shared_ptr<Reference>> focus;
    std::optional<string> id_;
    std::optional<uri> implicit_rules;
    std::optional<code> language;
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
    url endpoint;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<string> name;
    std::optional<std::shared_ptr<Reference>> receiver;
    std::optional<std::shared_ptr<Reference>> target;
};

class MessageHeader_Response {
public:
    code code_;
    std::optional<std::shared_ptr<Reference>> details;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    id identifier;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
};

class MessageHeader_Source {
public:
    std::optional<std::shared_ptr<ContactPoint>> contact;
    url endpoint;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<string> name;
    std::optional<string> software;
    std::optional<string> version;
};

class Meta {
public:
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::optional<instant> last_updated;
    std::vector<canonical> profile;
    std::vector<std::shared_ptr<Coding>> security;
    std::optional<uri> source;
    std::vector<std::shared_ptr<Coding>> tag;
    std::optional<id> version_id;
};

class MetadataResource {
public:
    std::vector<std::shared_ptr<ContactDetail>> contact;
    std::vector<std::shared_ptr<Resource>> contained;
    std::optional<dateTime> date_;
    std::optional<markdown> description;
    std::optional<boolean> experimental;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::optional<uri> implicit_rules;
    std::vector<std::shared_ptr<CodeableConcept>> jurisdiction;
    std::optional<code> language;
    std::optional<std::shared_ptr<Meta>> meta;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<string> name;
    std::optional<string> publisher;
    code status;
    std::optional<std::shared_ptr<Narrative>> text;
    std::optional<string> title;
    std::optional<uri> url_;
    std::vector<std::shared_ptr<UsageContext>> use_context;
    std::optional<string> version;
};

class MolecularSequence {
public:
    std::vector<std::shared_ptr<Resource>> contained;
    integer coordinate_system;
    std::optional<std::shared_ptr<Reference>> device;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::vector<std::shared_ptr<Identifier>> identifier;
    std::optional<uri> implicit_rules;
    std::optional<code> language;
    std::optional<std::shared_ptr<Meta>> meta;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<string> observed_seq;
    std::optional<std::shared_ptr<Reference>> patient;
    std::optional<std::shared_ptr<Reference>> performer;
    std::vector<std::shared_ptr<Reference>> pointer;
    std::vector<std::shared_ptr<MolecularSequence_Quality>> quality;
    std::optional<std::shared_ptr<Quantity>> quantity;
    std::optional<integer> read_coverage;
    std::optional<std::shared_ptr<MolecularSequence_ReferenceSeq>> reference_seq;
    std::vector<std::shared_ptr<MolecularSequence_Repository>> repository;
    std::optional<std::shared_ptr<Reference>> specimen;
    std::vector<std::shared_ptr<MolecularSequence_StructureVariant>> structure_variant;
    std::optional<std::shared_ptr<Narrative>> text;
    std::optional<code> type;
    std::vector<std::shared_ptr<MolecularSequence_Variant>> variant;
};

class MolecularSequence_Quality {
public:
    std::optional<integer> end;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<decimal> f_score;
    std::optional<decimal> gt_f_p;
    std::optional<string> id_;
    std::optional<std::shared_ptr<CodeableConcept>> method;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<decimal> precision;
    std::optional<decimal> query_f_p;
    std::optional<decimal> query_t_p;
    std::optional<decimal> recall;
    std::optional<std::shared_ptr<MolecularSequence_Quality_Roc>> roc;
    std::optional<std::shared_ptr<Quantity>> score;
    std::optional<std::shared_ptr<CodeableConcept>> standard_sequence;
    std::optional<integer> start;
    std::optional<decimal> truth_f_n;
    std::optional<decimal> truth_t_p;
    code type;
};

class MolecularSequence_Quality_Roc {
public:
    std::vector<std::shared_ptr<Extension>> extension;
    std::vector<decimal> f_measure;
    std::optional<string> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::vector<integer> num_f_n;
    std::vector<integer> num_f_p;
    std::vector<integer> num_t_p;
    std::vector<decimal> precision;
    std::vector<integer> score;
    std::vector<decimal> sensitivity;
};

class MolecularSequence_ReferenceSeq {
public:
    std::optional<std::shared_ptr<CodeableConcept>> chromosome;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> genome_build;
    std::optional<string> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<code> orientation;
    std::optional<std::shared_ptr<CodeableConcept>> reference_seq_id;
    std::optional<std::shared_ptr<Reference>> reference_seq_pointer;
    std::optional<string> reference_seq_string;
    std::optional<code> strand;
    std::optional<integer> window_end;
    std::optional<integer> window_start;
};

class MolecularSequence_Repository {
public:
    std::optional<string> dataset_id;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<string> name;
    std::optional<string> readset_id;
    code type;
    std::optional<uri> url_;
    std::optional<string> variantset_id;
};

class MolecularSequence_StructureVariant {
public:
    std::optional<boolean> exact;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::optional<std::shared_ptr<MolecularSequence_StructureVariant_Inner>> inner;
    std::optional<integer> length;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<std::shared_ptr<MolecularSequence_StructureVariant_Outer>> outer;
    std::optional<std::shared_ptr<CodeableConcept>> variant_type;
};

class MolecularSequence_StructureVariant_Inner {
public:
    std::optional<integer> end;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<integer> start;
};

class MolecularSequence_StructureVariant_Outer {
public:
    std::optional<integer> end;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<integer> start;
};

class MolecularSequence_Variant {
public:
    std::optional<string> cigar;
    std::optional<integer> end;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<string> observed_allele;
    std::optional<string> reference_allele;
    std::optional<integer> start;
    std::optional<std::shared_ptr<Reference>> variant_pointer;
};

class Money {
public:
    std::optional<code> currency;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::optional<decimal> value;
};


class NamingSystem {
public:
    std::vector<std::shared_ptr<ContactDetail>> contact;
    std::vector<std::shared_ptr<Resource>> contained;
    dateTime date_;
    std::optional<markdown> description;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::optional<uri> implicit_rules;
    std::vector<std::shared_ptr<CodeableConcept>> jurisdiction;
    code kind;
    std::optional<code> language;
    std::optional<std::shared_ptr<Meta>> meta;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    string name;
    std::optional<string> publisher;
    std::optional<string> responsible;
    code status;
    std::optional<std::shared_ptr<Narrative>> text;
    std::optional<std::shared_ptr<CodeableConcept>> type;
    std::optional<string> usage;
    std::vector<std::shared_ptr<UsageContext>> use_context;
};

class NamingSystem_UniqueId {
public:
    std::optional<string> comment;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<std::shared_ptr<Period>> period;
    std::optional<boolean> preferred;
    code type;
    string value;
};

class Narrative {
public:
    std::shared_ptr<xhtml> div;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    code status;
};

class NutritionOrder {
public:
    std::vector<std::shared_ptr<Reference>> allergy_intolerance;
    std::vector<std::shared_ptr<Resource>> contained;
    dateTime date_time;
    std::optional<std::shared_ptr<Reference>> encounter;
    std::optional<std::shared_ptr<NutritionOrder_EnteralFormula>> enteral_formula;
    std::vector<std::shared_ptr<CodeableConcept>> exclude_food_modifier;
    std::vector<std::shared_ptr<Extension>> extension;
    std::vector<std::shared_ptr<CodeableConcept>> food_preference_modifier;
    std::optional<string> id_;
    std::vector<std::shared_ptr<Identifier>> identifier;
    std::optional<uri> implicit_rules;
    std::vector<uri> instantiates;
    std::vector<canonical> instantiates_canonical;
    std::vector<uri> instantiates_uri;
    code intent;
    std::optional<code> language;
    std::optional<std::shared_ptr<Meta>> meta;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::vector<std::shared_ptr<Annotation>> note;
    std::optional<std::shared_ptr<NutritionOrder_OralDiet>> oral_diet;
    std::optional<std::shared_ptr<Reference>> orderer;
    std::shared_ptr<Reference> patient;
    code status;
    std::vector<std::shared_ptr<NutritionOrder_Supplement>> supplement;
    std::optional<std::shared_ptr<Narrative>> text;
};

class NutritionOrder_EnteralFormula {
public:
    std::optional<string> additive_product_name;
    std::optional<std::shared_ptr<CodeableConcept>> additive_type;
    std::vector<std::shared_ptr<NutritionOrder_EnteralFormula_Administration>> administration;
    std::optional<string> administration_instruction;
    std::optional<string> base_formula_product_name;
    std::optional<std::shared_ptr<CodeableConcept>> base_formula_type;
    std::optional<std::shared_ptr<Quantity>> caloric_density;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::optional<std::shared_ptr<Quantity>> max_volume_to_deliver;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<std::shared_ptr<CodeableConcept>> routeof_administration;
};

class NutritionOrder_EnteralFormula_Administration {
public:
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
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
    std::optional<string> id_;
    std::optional<string> instruction;
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
    std::optional<string> id_;
    std::optional<std::shared_ptr<CodeableConcept>> modifier;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
};

class NutritionOrder_OralDiet_Texture {
public:
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<CodeableConcept>> food_type;
    std::optional<string> id_;
    std::optional<std::shared_ptr<CodeableConcept>> modifier;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
};

class NutritionOrder_Supplement {
public:
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::optional<string> instruction;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<string> product_name;
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
    std::optional<code> comparator;
    std::vector<std::shared_ptr<Observation_Component>> component;
    std::vector<std::shared_ptr<Resource>> contained;
    std::optional<std::shared_ptr<CodeableConcept>> data_absent_reason;
    std::vector<std::shared_ptr<Reference>> derived_from;
    std::optional<std::shared_ptr<Reference>> device;
    std::optional<string> display;
    using EFFECTIVE_Variant = std::variant<
        std::shared_ptr<dateTime>,
        std::shared_ptr<Period>,
        std::shared_ptr<Timing>,
        std::shared_ptr<instant>
    >;
    EFFECTIVE_Variant effective;
    std::optional<std::shared_ptr<Reference>> encounter;
    std::vector<std::shared_ptr<Extension>> extension;
    std::vector<std::shared_ptr<Reference>> focus;
    std::vector<std::shared_ptr<Reference>> has_member;
    std::optional<string> id_;
    std::vector<std::shared_ptr<Identifier>> identifier;
    std::optional<uri> implicit_rules;
    std::vector<std::shared_ptr<CodeableConcept>> interpretation;
    std::optional<instant> issued;
    std::optional<code> language;
    std::optional<std::shared_ptr<Meta>> meta;
    std::optional<std::shared_ptr<CodeableConcept>> method;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::vector<std::shared_ptr<Annotation>> note;
    std::vector<std::shared_ptr<Reference>> part_of;
    std::vector<std::shared_ptr<Reference>> performer;
    std::vector<std::shared_ptr<Observation_ReferenceRange>> reference_range;
    std::optional<std::shared_ptr<Reference>> specimen;
    code status;
    std::optional<std::shared_ptr<Reference>> subject;
    uri system;
    std::optional<std::shared_ptr<Narrative>> text;
    string unit;
    std::optional<boolean> user_selected;
    decimal value;
    using VALUE_Variant = std::variant<
        std::shared_ptr<Quantity>,
        std::shared_ptr<CodeableConcept>,
        std::shared_ptr<string>,
        std::shared_ptr<boolean>,
        std::shared_ptr<integer>,
        std::shared_ptr<Range>,
        std::shared_ptr<Ratio>,
        std::shared_ptr<SampledData>,
        std::shared_ptr<time>,
        std::shared_ptr<dateTime>,
        std::shared_ptr<Period>
    >;
    VALUE_Variant value_2;
    std::optional<string> version;
};

class Observation_Component {
public:
    std::shared_ptr<CodeableConcept> code_;
    std::shared_ptr<Coding> coding;
    std::optional<code> comparator;
    std::optional<std::shared_ptr<CodeableConcept>> data_absent_reason;
    std::optional<string> display;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::vector<std::shared_ptr<CodeableConcept>> interpretation;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::vector<std::shared_ptr<Observation_ReferenceRange>> reference_range;
    uri system;
    std::optional<string> text;
    string unit;
    std::optional<boolean> user_selected;
    decimal value;
    using VALUE_Variant = std::variant<
        std::shared_ptr<Quantity>,
        std::shared_ptr<CodeableConcept>,
        std::shared_ptr<string>,
        std::shared_ptr<boolean>,
        std::shared_ptr<integer>,
        std::shared_ptr<Range>,
        std::shared_ptr<Ratio>,
        std::shared_ptr<SampledData>,
        std::shared_ptr<time>,
        std::shared_ptr<dateTime>,
        std::shared_ptr<Period>
    >;
    VALUE_Variant value_2;
    std::optional<string> version;
};

class Observation_ReferenceRange {
public:
    std::optional<std::shared_ptr<Range>> age;
    std::vector<std::shared_ptr<CodeableConcept>> applies_to;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<Quantity>> high;
    std::optional<string> id_;
    std::optional<std::shared_ptr<Quantity>> low;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<string> text;
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
    std::optional<string> id_;
    std::vector<std::shared_ptr<Identifier>> identifier;
    std::optional<uri> implicit_rules;
    std::optional<code> language;
    std::optional<std::shared_ptr<Meta>> meta;
    std::optional<std::shared_ptr<CodeableConcept>> method;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<boolean> multiple_results_allowed;
    std::optional<std::shared_ptr<Reference>> normal_coded_value_set;
    std::vector<code> permitted_data_type;
    std::optional<string> preferred_report_name;
    std::vector<std::shared_ptr<ObservationDefinition_QualifiedInterval>> qualified_interval;
    std::optional<std::shared_ptr<ObservationDefinition_QuantitativeDetails>> quantitative_details;
    std::optional<std::shared_ptr<Narrative>> text;
    std::optional<std::shared_ptr<Reference>> valid_coded_value_set;
};

class ObservationDefinition_QualifiedInterval {
public:
    std::optional<std::shared_ptr<Range>> age;
    std::vector<std::shared_ptr<CodeableConcept>> applies_to;
    std::optional<code> category;
    std::optional<string> condition;
    std::optional<std::shared_ptr<CodeableConcept>> context;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<code> gender;
    std::optional<std::shared_ptr<Range>> gestational_age;
    std::optional<string> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<std::shared_ptr<Range>> range;
};

class ObservationDefinition_QuantitativeDetails {
public:
    std::optional<decimal> conversion_factor;
    std::optional<std::shared_ptr<CodeableConcept>> customary_unit;
    std::optional<integer> decimal_precision;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<std::shared_ptr<CodeableConcept>> unit;
};

class OperationDefinition {
public:
    std::optional<boolean> affects_state;
    std::optional<canonical> base;
    code code_;
    std::optional<markdown> comment;
    std::vector<std::shared_ptr<ContactDetail>> contact;
    std::vector<std::shared_ptr<Resource>> contained;
    std::optional<dateTime> date_;
    std::optional<markdown> description;
    std::optional<boolean> experimental;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::optional<uri> implicit_rules;
    std::optional<canonical> input_profile;
    boolean instance;
    std::vector<std::shared_ptr<CodeableConcept>> jurisdiction;
    code kind;
    std::optional<code> language;
    std::optional<std::shared_ptr<Meta>> meta;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    string name;
    std::optional<canonical> output_profile;
    std::vector<std::shared_ptr<OperationDefinition_Overload>> overload;
    std::vector<std::shared_ptr<OperationDefinition_Parameter>> parameter;
    std::optional<string> publisher;
    std::optional<markdown> purpose;
    std::vector<code> resource;
    code status;
    boolean system;
    std::optional<std::shared_ptr<Narrative>> text;
    std::optional<string> title;
    boolean type;
    std::optional<uri> url_;
    std::vector<std::shared_ptr<UsageContext>> use_context;
    std::optional<string> version;
};

class OperationDefinition_Overload {
public:
    std::optional<string> comment;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::vector<string> parameter_name;
};

class OperationDefinition_Parameter {
public:
    std::optional<std::shared_ptr<OperationDefinition_Parameter_Binding>> binding;
    std::optional<string> documentation;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    string max;
    integer min;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    code name;
    std::vector<std::shared_ptr<OperationDefinition_Parameter>> part;
    std::vector<std::shared_ptr<OperationDefinition_Parameter_ReferencedFrom>> referenced_from;
    std::optional<code> search_type;
    std::vector<canonical> target_profile;
    std::optional<code> type;
    code use;
};

class OperationDefinition_Parameter_Binding {
public:
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    code strength;
    canonical value_set;
};

class OperationDefinition_Parameter_ReferencedFrom {
public:
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    string source;
    std::optional<string> source_id;
};

class OperationOutcome {
public:
    std::vector<std::shared_ptr<Resource>> contained;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::optional<uri> implicit_rules;
    std::optional<code> language;
    std::optional<std::shared_ptr<Meta>> meta;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<std::shared_ptr<Narrative>> text;
};

class OperationOutcome_Issue {
public:
    code code_;
    std::optional<std::shared_ptr<CodeableConcept>> details;
    std::optional<string> diagnostics;
    std::vector<string> expression;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::vector<string> location;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    code severity;
};

class Organization {
public:
    std::optional<boolean> active;
    std::vector<std::shared_ptr<Address>> address;
    std::vector<string> alias;
    std::vector<std::shared_ptr<Organization_Contact>> contact;
    std::vector<std::shared_ptr<Resource>> contained;
    std::vector<std::shared_ptr<Reference>> endpoint;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::vector<std::shared_ptr<Identifier>> identifier;
    std::optional<uri> implicit_rules;
    std::optional<code> language;
    std::optional<std::shared_ptr<Meta>> meta;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<string> name;
    std::optional<std::shared_ptr<Reference>> part_of;
    std::vector<std::shared_ptr<ContactPoint>> telecom;
    std::optional<std::shared_ptr<Narrative>> text;
    std::vector<std::shared_ptr<CodeableConcept>> type;
};

class Organization_Contact {
public:
    std::optional<std::shared_ptr<Address>> address;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<std::shared_ptr<HumanName>> name;
    std::optional<std::shared_ptr<CodeableConcept>> purpose;
    std::vector<std::shared_ptr<ContactPoint>> telecom;
};

class OrganizationAffiliation {
public:
    std::optional<boolean> active;
    std::vector<std::shared_ptr<CodeableConcept>> code_;
    std::vector<std::shared_ptr<Resource>> contained;
    std::vector<std::shared_ptr<Reference>> endpoint;
    std::vector<std::shared_ptr<Extension>> extension;
    std::vector<std::shared_ptr<Reference>> healthcare_service;
    std::optional<string> id_;
    std::vector<std::shared_ptr<Identifier>> identifier;
    std::optional<uri> implicit_rules;
    std::optional<code> language;
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
    std::optional<string> documentation;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::optional<string> max;
    std::optional<integer> min;
    std::optional<code> name;
    std::optional<canonical> profile;
    code type;
    code use;
};

class Parameters {
public:
    std::optional<string> id_;
    std::optional<uri> implicit_rules;
    std::optional<code> language;
    std::optional<std::shared_ptr<Meta>> meta;
    std::vector<std::shared_ptr<Parameters_Parameter>> parameter;
};

class Parameters_Parameter {
public:
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    string name;
    std::vector<std::shared_ptr<Parameters_Parameter>> part;
    std::optional<std::shared_ptr<Resource>> resource;
    using VALUE_Variant = std::variant<
        std::shared_ptr<base64Binary>,
        std::shared_ptr<boolean>,
        std::shared_ptr<canonical>,
        std::shared_ptr<code>,
        std::shared_ptr<date>,
        std::shared_ptr<dateTime>,
        std::shared_ptr<decimal>,
        std::shared_ptr<id>,
        std::shared_ptr<instant>,
        std::shared_ptr<integer>,
        std::shared_ptr<markdown>,
        std::shared_ptr<oid>,
        std::shared_ptr<positiveInt>,
        std::shared_ptr<string>,
        std::shared_ptr<time>,
        std::shared_ptr<unsignedInt>,
        std::shared_ptr<uri>,
        std::shared_ptr<url>,
        std::shared_ptr<uuid>,
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
    std::optional<boolean> active;
    std::vector<std::shared_ptr<Address>> address;
    std::optional<date> birth_date;
    std::vector<std::shared_ptr<Patient_Communication>> communication;
    std::vector<std::shared_ptr<Patient_Contact>> contact;
    std::vector<std::shared_ptr<Resource>> contained;
    using DECEASED_Variant = std::variant<
        std::shared_ptr<boolean>,
        std::shared_ptr<dateTime>
    >;
    DECEASED_Variant deceased;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<code> gender;
    std::vector<std::shared_ptr<Reference>> general_practitioner;
    std::optional<string> id_;
    std::vector<std::shared_ptr<Identifier>> identifier;
    std::optional<uri> implicit_rules;
    std::optional<code> language;
    std::vector<std::shared_ptr<Patient_Link>> link;
    std::optional<std::shared_ptr<Reference>> managing_organization;
    std::optional<std::shared_ptr<CodeableConcept>> marital_status;
    std::optional<std::shared_ptr<Meta>> meta;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    using MULTIPLE_BIRTH_Variant = std::variant<
        std::shared_ptr<boolean>,
        std::shared_ptr<integer>
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
    std::optional<string> id_;
    std::shared_ptr<CodeableConcept> language;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<boolean> preferred;
};

class Patient_Contact {
public:
    std::optional<std::shared_ptr<Address>> address;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<code> gender;
    std::optional<string> id_;
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
    std::optional<string> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::shared_ptr<Reference> other;
    code type;
};

class PaymentNotice {
public:
    std::shared_ptr<Money> amount;
    std::vector<std::shared_ptr<Resource>> contained;
    dateTime created;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::vector<std::shared_ptr<Identifier>> identifier;
    std::optional<uri> implicit_rules;
    std::optional<code> language;
    std::optional<std::shared_ptr<Meta>> meta;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<std::shared_ptr<Reference>> payee;
    std::shared_ptr<Reference> payment;
    std::optional<date> payment_date;
    std::optional<std::shared_ptr<CodeableConcept>> payment_status;
    std::optional<std::shared_ptr<Reference>> provider;
    std::shared_ptr<Reference> recipient;
    std::optional<std::shared_ptr<Reference>> request;
    std::optional<std::shared_ptr<Reference>> response;
    code status;
    std::optional<std::shared_ptr<Narrative>> text;
};

class PaymentReconciliation {
public:
    std::vector<std::shared_ptr<Resource>> contained;
    dateTime created;
    std::vector<std::shared_ptr<PaymentReconciliation_Detail>> detail;
    std::optional<string> disposition;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<CodeableConcept>> form_code;
    std::optional<string> id_;
    std::vector<std::shared_ptr<Identifier>> identifier;
    std::optional<uri> implicit_rules;
    std::optional<code> language;
    std::optional<std::shared_ptr<Meta>> meta;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<code> outcome;
    std::shared_ptr<Money> payment_amount;
    date payment_date;
    std::optional<std::shared_ptr<Identifier>> payment_identifier;
    std::optional<std::shared_ptr<Reference>> payment_issuer;
    std::optional<std::shared_ptr<Period>> period;
    std::vector<std::shared_ptr<PaymentReconciliation_ProcessNote>> process_note;
    std::optional<std::shared_ptr<Reference>> request;
    std::optional<std::shared_ptr<Reference>> requestor;
    code status;
    std::optional<std::shared_ptr<Narrative>> text;
};

class PaymentReconciliation_Detail {
public:
    std::optional<std::shared_ptr<Money>> amount;
    std::optional<date> date_;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
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
    std::optional<string> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<string> text;
    std::optional<code> type;
};

class Period {
public:
    std::optional<dateTime> end;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::optional<dateTime> start;
};

class Person {
public:
    std::optional<boolean> active;
    std::vector<std::shared_ptr<Address>> address;
    std::optional<date> birth_date;
    std::vector<std::shared_ptr<Resource>> contained;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<code> gender;
    std::optional<string> id_;
    std::vector<std::shared_ptr<Identifier>> identifier;
    std::optional<uri> implicit_rules;
    std::optional<code> language;
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
    std::optional<code> assurance;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::shared_ptr<Reference> target;
};

class PlanDefinition {
public:
    std::vector<std::shared_ptr<PlanDefinition_Action>> action;
    std::optional<date> approval_date;
    std::vector<std::shared_ptr<ContactDetail>> author;
    std::vector<std::shared_ptr<ContactDetail>> contact;
    std::vector<std::shared_ptr<Resource>> contained;
    std::optional<markdown> copyright;
    std::optional<dateTime> date_;
    std::optional<markdown> description;
    std::vector<std::shared_ptr<ContactDetail>> editor;
    std::optional<std::shared_ptr<Period>> effective_period;
    std::vector<std::shared_ptr<ContactDetail>> endorser;
    std::optional<boolean> experimental;
    std::vector<std::shared_ptr<Extension>> extension;
    std::vector<std::shared_ptr<PlanDefinition_Goal>> goal;
    std::optional<string> id_;
    std::vector<std::shared_ptr<Identifier>> identifier;
    std::optional<uri> implicit_rules;
    std::vector<std::shared_ptr<CodeableConcept>> jurisdiction;
    std::optional<code> language;
    std::optional<date> last_review_date;
    std::vector<canonical> library;
    std::optional<std::shared_ptr<Meta>> meta;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<string> name;
    std::optional<string> publisher;
    std::optional<markdown> purpose;
    std::vector<std::shared_ptr<RelatedArtifact>> related_artifact;
    std::vector<std::shared_ptr<ContactDetail>> reviewer;
    code status;
    using SUBJECT_Variant = std::variant<
        std::shared_ptr<CodeableConcept>,
        std::shared_ptr<Reference>
    >;
    SUBJECT_Variant subject;
    std::optional<string> subtitle;
    std::optional<std::shared_ptr<Narrative>> text;
    std::optional<string> title;
    std::vector<std::shared_ptr<CodeableConcept>> topic;
    std::optional<std::shared_ptr<CodeableConcept>> type;
    std::optional<uri> url_;
    std::optional<string> usage;
    std::vector<std::shared_ptr<UsageContext>> use_context;
    std::optional<string> version;
};

class PlanDefinition_Action {
public:
    std::vector<std::shared_ptr<PlanDefinition_Action>> action;
    std::optional<code> cardinality_behavior;
    std::vector<std::shared_ptr<CodeableConcept>> code_;
    std::vector<std::shared_ptr<PlanDefinition_Action_Condition>> condition;
    using DEFINITION_Variant = std::variant<
        std::shared_ptr<canonical>,
        std::shared_ptr<uri>
    >;
    DEFINITION_Variant definition;
    std::optional<string> description;
    std::vector<std::shared_ptr<RelatedArtifact>> documentation;
    std::vector<std::shared_ptr<PlanDefinition_Action_DynamicValue>> dynamic_value;
    std::vector<std::shared_ptr<Extension>> extension;
    std::vector<id> goal_id;
    std::optional<code> grouping_behavior;
    std::optional<string> id_;
    std::vector<std::shared_ptr<DataRequirement>> input;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::vector<std::shared_ptr<DataRequirement>> output;
    std::vector<std::shared_ptr<PlanDefinition_Action_Participant>> participant;
    std::optional<code> precheck_behavior;
    std::optional<string> prefix;
    std::optional<code> priority;
    std::vector<std::shared_ptr<CodeableConcept>> reason;
    std::vector<std::shared_ptr<PlanDefinition_Action_RelatedAction>> related_action;
    std::optional<code> required_behavior;
    std::optional<code> selection_behavior;
    using SUBJECT_Variant = std::variant<
        std::shared_ptr<CodeableConcept>,
        std::shared_ptr<Reference>
    >;
    SUBJECT_Variant subject;
    std::optional<string> text_equivalent;
    using TIMING_Variant = std::variant<
        std::shared_ptr<dateTime>,
        std::shared_ptr<Age>,
        std::shared_ptr<Period>,
        std::shared_ptr<Duration>,
        std::shared_ptr<Range>,
        std::shared_ptr<Timing>
    >;
    TIMING_Variant timing;
    std::optional<string> title;
    std::optional<canonical> transform;
    std::vector<std::shared_ptr<TriggerDefinition>> trigger;
    std::optional<std::shared_ptr<CodeableConcept>> type;
};

class PlanDefinition_Action_Condition {
public:
    std::optional<std::shared_ptr<Expression>> expression;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    code kind;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
};

class PlanDefinition_Action_DynamicValue {
public:
    std::optional<std::shared_ptr<Expression>> expression;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<string> path;
};

class PlanDefinition_Action_Participant {
public:
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<std::shared_ptr<CodeableConcept>> role;
    code type;
};

class PlanDefinition_Action_RelatedAction {
public:
    id action_id;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    using OFFSET_Variant = std::variant<
        std::shared_ptr<Duration>,
        std::shared_ptr<Range>
    >;
    OFFSET_Variant offset;
    code relationship;
};

class PlanDefinition_Goal {
public:
    std::vector<std::shared_ptr<CodeableConcept>> addresses;
    std::optional<std::shared_ptr<CodeableConcept>> category;
    std::shared_ptr<CodeableConcept> description;
    std::vector<std::shared_ptr<RelatedArtifact>> documentation;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
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
    std::optional<string> id_;
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
    std::optional<string> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<std::shared_ptr<CodeableConcept>> physiological_condition;
    std::optional<std::shared_ptr<CodeableConcept>> race;
};

class Practitioner {
public:
    std::optional<boolean> active;
    std::vector<std::shared_ptr<Address>> address;
    std::optional<date> birth_date;
    std::vector<std::shared_ptr<CodeableConcept>> communication;
    std::vector<std::shared_ptr<Resource>> contained;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<code> gender;
    std::optional<string> id_;
    std::vector<std::shared_ptr<Identifier>> identifier;
    std::optional<uri> implicit_rules;
    std::optional<code> language;
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
    std::optional<string> id_;
    std::vector<std::shared_ptr<Identifier>> identifier;
    std::optional<std::shared_ptr<Reference>> issuer;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<std::shared_ptr<Period>> period;
};

class PractitionerRole {
public:
    std::optional<boolean> active;
    std::optional<string> availability_exceptions;
    std::vector<std::shared_ptr<PractitionerRole_AvailableTime>> available_time;
    std::vector<std::shared_ptr<CodeableConcept>> code_;
    std::vector<std::shared_ptr<Resource>> contained;
    std::vector<std::shared_ptr<Reference>> endpoint;
    std::vector<std::shared_ptr<Extension>> extension;
    std::vector<std::shared_ptr<Reference>> healthcare_service;
    std::optional<string> id_;
    std::vector<std::shared_ptr<Identifier>> identifier;
    std::optional<uri> implicit_rules;
    std::optional<code> language;
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
    std::optional<boolean> all_day;
    std::optional<time> available_end_time;
    std::optional<time> available_start_time;
    std::vector<code> days_of_week;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
};

class PractitionerRole_NotAvailable {
public:
    string description;
    std::optional<std::shared_ptr<Period>> during;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
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
    std::optional<string> id_;
    std::vector<std::shared_ptr<Identifier>> identifier;
    std::optional<uri> implicit_rules;
    std::vector<canonical> instantiates_canonical;
    std::vector<uri> instantiates_uri;
    std::optional<code> language;
    std::optional<std::shared_ptr<Reference>> location;
    std::optional<std::shared_ptr<Meta>> meta;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::vector<std::shared_ptr<Annotation>> note;
    std::optional<std::shared_ptr<CodeableConcept>> outcome;
    std::vector<std::shared_ptr<Reference>> part_of;
    using PERFORMED_Variant = std::variant<
        std::shared_ptr<dateTime>,
        std::shared_ptr<Period>,
        std::shared_ptr<string>,
        std::shared_ptr<Age>,
        std::shared_ptr<Range>
    >;
    PERFORMED_Variant performed;
    std::vector<std::shared_ptr<Procedure_Performer>> performer;
    std::vector<std::shared_ptr<CodeableConcept>> reason_code;
    std::vector<std::shared_ptr<Reference>> reason_reference;
    std::optional<std::shared_ptr<Reference>> recorder;
    std::vector<std::shared_ptr<Reference>> report;
    code status;
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
    std::optional<string> id_;
    std::shared_ptr<Reference> manipulated;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
};

class Procedure_Performer {
public:
    std::shared_ptr<Reference> actor;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<CodeableConcept>> function;
    std::optional<string> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<std::shared_ptr<Reference>> on_behalf_of;
};

class ProdCharacteristic {
public:
    std::vector<string> color;
    std::optional<std::shared_ptr<Quantity>> depth;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<Quantity>> external_diameter;
    std::optional<std::shared_ptr<Quantity>> height;
    std::optional<string> id_;
    std::vector<std::shared_ptr<Attachment>> image;
    std::vector<string> imprint;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<std::shared_ptr<Quantity>> nominal_volume;
    std::optional<std::shared_ptr<CodeableConcept>> scoring;
    std::optional<string> shape;
    std::optional<std::shared_ptr<Quantity>> weight;
    std::optional<std::shared_ptr<Quantity>> width;
};

class ProductShelfLife {
public:
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
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
    std::optional<string> id_;
    std::optional<uri> implicit_rules;
    std::optional<code> language;
    std::optional<std::shared_ptr<Reference>> location;
    std::optional<std::shared_ptr<Meta>> meta;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    using OCCURRED_Variant = std::variant<
        std::shared_ptr<Period>,
        std::shared_ptr<dateTime>
    >;
    OCCURRED_Variant occurred;
    std::vector<uri> policy;
    std::vector<std::shared_ptr<CodeableConcept>> reason;
    instant recorded;
    std::vector<std::shared_ptr<Signature>> signature;
    std::optional<std::shared_ptr<Narrative>> text;
};

class Provenance_Agent {
public:
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
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
    std::optional<string> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    code role;
    std::shared_ptr<Reference> what;
};

class Quantity {
public:
    std::optional<code> code_;
    std::optional<code> comparator;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::optional<uri> system;
    std::optional<string> unit;
    std::optional<decimal> value;
};

class Questionnaire {
public:
    std::optional<date> approval_date;
    std::vector<std::shared_ptr<Coding>> code_;
    std::vector<std::shared_ptr<ContactDetail>> contact;
    std::vector<std::shared_ptr<Resource>> contained;
    std::optional<markdown> copyright;
    std::optional<dateTime> date_;
    std::vector<canonical> derived_from;
    std::optional<markdown> description;
    std::optional<std::shared_ptr<Period>> effective_period;
    std::optional<boolean> experimental;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::vector<std::shared_ptr<Identifier>> identifier;
    std::optional<uri> implicit_rules;
    std::vector<std::shared_ptr<Questionnaire_Item>> item;
    std::vector<std::shared_ptr<CodeableConcept>> jurisdiction;
    std::optional<code> language;
    std::optional<date> last_review_date;
    std::optional<std::shared_ptr<Meta>> meta;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<string> name;
    std::optional<string> publisher;
    std::optional<markdown> purpose;
    code status;
    std::vector<code> subject_type;
    std::optional<std::shared_ptr<Narrative>> text;
    std::optional<string> title;
    std::optional<uri> url_;
    std::vector<std::shared_ptr<UsageContext>> use_context;
    std::optional<string> version;
};

class Questionnaire_Item {
public:
    std::vector<std::shared_ptr<Questionnaire_Item_AnswerOption>> answer_option;
    std::optional<canonical> answer_value_set;
    std::vector<std::shared_ptr<Coding>> code_;
    std::optional<uri> definition;
    std::optional<code> enable_behavior;
    std::vector<std::shared_ptr<Questionnaire_Item_EnableWhen>> enable_when;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::vector<std::shared_ptr<Questionnaire_Item_Initial>> initial;
    std::vector<std::shared_ptr<Questionnaire_Item>> item;
    string link_id;
    std::optional<integer> max_length;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<string> prefix;
    std::optional<boolean> read_only;
    std::optional<boolean> repeats;
    std::optional<boolean> required;
    std::optional<string> text;
    code type;
};

class Questionnaire_Item_AnswerOption {
public:
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::optional<boolean> initial_selected;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    using VALUE_Variant = std::variant<
        std::shared_ptr<integer>,
        std::shared_ptr<date>,
        std::shared_ptr<time>,
        std::shared_ptr<string>,
        std::shared_ptr<Coding>,
        std::shared_ptr<Reference>
    >;
    VALUE_Variant value;
};

class Questionnaire_Item_EnableWhen {
public:
    using ANSWER_Variant = std::variant<
        std::shared_ptr<boolean>,
        std::shared_ptr<decimal>,
        std::shared_ptr<integer>,
        std::shared_ptr<date>,
        std::shared_ptr<dateTime>,
        std::shared_ptr<time>,
        std::shared_ptr<string>,
        std::shared_ptr<Coding>,
        std::shared_ptr<Quantity>,
        std::shared_ptr<Reference>
    >;
    ANSWER_Variant answer;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    code operator_;
    string question;
};

class Questionnaire_Item_Initial {
public:
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    using VALUE_Variant = std::variant<
        std::shared_ptr<boolean>,
        std::shared_ptr<decimal>,
        std::shared_ptr<integer>,
        std::shared_ptr<date>,
        std::shared_ptr<dateTime>,
        std::shared_ptr<time>,
        std::shared_ptr<string>,
        std::shared_ptr<uri>,
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
    std::optional<dateTime> authored;
    std::vector<std::shared_ptr<Reference>> based_on;
    std::vector<std::shared_ptr<Resource>> contained;
    std::optional<std::shared_ptr<Reference>> encounter;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::optional<std::shared_ptr<Identifier>> identifier;
    std::optional<uri> implicit_rules;
    std::vector<std::shared_ptr<QuestionnaireResponse_Item>> item;
    std::optional<code> language;
    std::optional<std::shared_ptr<Meta>> meta;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::vector<std::shared_ptr<Reference>> part_of;
    std::optional<canonical> questionnaire;
    std::optional<std::shared_ptr<Reference>> source;
    code status;
    std::optional<std::shared_ptr<Reference>> subject;
    std::optional<std::shared_ptr<Narrative>> text;
};

class QuestionnaireResponse_Item {
public:
    std::vector<std::shared_ptr<QuestionnaireResponse_Item_Answer>> answer;
    std::optional<uri> definition;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::vector<std::shared_ptr<QuestionnaireResponse_Item>> item;
    string link_id;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<string> text;
};

class QuestionnaireResponse_Item_Answer {
public:
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::vector<std::shared_ptr<QuestionnaireResponse_Item>> item;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    using VALUE_Variant = std::variant<
        std::shared_ptr<boolean>,
        std::shared_ptr<decimal>,
        std::shared_ptr<integer>,
        std::shared_ptr<date>,
        std::shared_ptr<dateTime>,
        std::shared_ptr<time>,
        std::shared_ptr<string>,
        std::shared_ptr<uri>,
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
    std::optional<string> id_;
    std::optional<std::shared_ptr<Quantity>> low;
};

class Ratio {
public:
    std::optional<std::shared_ptr<Quantity>> denominator;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::optional<std::shared_ptr<Quantity>> numerator;
};

class Reference {
public:
    std::optional<string> display;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::optional<std::shared_ptr<Identifier>> identifier;
    std::optional<string> reference;
    std::optional<uri> type;
};

class RelatedArtifact {
public:
    std::optional<markdown> citation;
    std::optional<string> display;
    std::optional<std::shared_ptr<Attachment>> document;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::optional<string> label;
    std::optional<canonical> resource;
    code type;
    std::optional<url> url_;
};

class RelatedPerson {
public:
    std::optional<boolean> active;
    std::vector<std::shared_ptr<Address>> address;
    std::optional<date> birth_date;
    std::vector<std::shared_ptr<RelatedPerson_Communication>> communication;
    std::vector<std::shared_ptr<Resource>> contained;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<code> gender;
    std::optional<string> id_;
    std::vector<std::shared_ptr<Identifier>> identifier;
    std::optional<uri> implicit_rules;
    std::optional<code> language;
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
    std::optional<string> id_;
    std::shared_ptr<CodeableConcept> language;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<boolean> preferred;
};

class RequestGroup {
public:
    std::vector<std::shared_ptr<RequestGroup_Action>> action;
    std::optional<std::shared_ptr<Reference>> author;
    std::optional<dateTime> authored_on;
    std::vector<std::shared_ptr<Reference>> based_on;
    std::optional<std::shared_ptr<CodeableConcept>> code_;
    std::vector<std::shared_ptr<Resource>> contained;
    std::optional<std::shared_ptr<Reference>> encounter;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<Identifier>> group_identifier;
    std::optional<string> id_;
    std::vector<std::shared_ptr<Identifier>> identifier;
    std::optional<uri> implicit_rules;
    std::vector<canonical> instantiates_canonical;
    std::vector<uri> instantiates_uri;
    code intent;
    std::optional<code> language;
    std::optional<std::shared_ptr<Meta>> meta;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::vector<std::shared_ptr<Annotation>> note;
    std::optional<code> priority;
    std::vector<std::shared_ptr<CodeableConcept>> reason_code;
    std::vector<std::shared_ptr<Reference>> reason_reference;
    std::vector<std::shared_ptr<Reference>> replaces;
    code status;
    std::optional<std::shared_ptr<Reference>> subject;
    std::optional<std::shared_ptr<Narrative>> text;
};

class RequestGroup_Action {
public:
    std::vector<std::shared_ptr<RequestGroup_Action>> action;
    std::optional<code> cardinality_behavior;
    std::vector<std::shared_ptr<CodeableConcept>> code_;
    std::vector<std::shared_ptr<RequestGroup_Action_Condition>> condition;
    std::optional<string> description;
    std::vector<std::shared_ptr<RelatedArtifact>> documentation;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<code> grouping_behavior;
    std::optional<string> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::vector<std::shared_ptr<Reference>> participant;
    std::optional<code> precheck_behavior;
    std::optional<string> prefix;
    std::optional<code> priority;
    std::vector<std::shared_ptr<RequestGroup_Action_RelatedAction>> related_action;
    std::optional<code> required_behavior;
    std::optional<std::shared_ptr<Reference>> resource;
    std::optional<code> selection_behavior;
    std::optional<string> text_equivalent;
    using TIMING_Variant = std::variant<
        std::shared_ptr<dateTime>,
        std::shared_ptr<Age>,
        std::shared_ptr<Period>,
        std::shared_ptr<Duration>,
        std::shared_ptr<Range>,
        std::shared_ptr<Timing>
    >;
    TIMING_Variant timing;
    std::optional<string> title;
    std::optional<std::shared_ptr<CodeableConcept>> type;
};

class RequestGroup_Action_Condition {
public:
    std::optional<std::shared_ptr<Expression>> expression;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    code kind;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
};

class RequestGroup_Action_RelatedAction {
public:
    id action_id;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    using OFFSET_Variant = std::variant<
        std::shared_ptr<Duration>,
        std::shared_ptr<Range>
    >;
    OFFSET_Variant offset;
    code relationship;
};

class ResearchDefinition {
public:
    std::optional<date> approval_date;
    std::vector<std::shared_ptr<ContactDetail>> author;
    std::vector<string> comment;
    std::vector<std::shared_ptr<ContactDetail>> contact;
    std::vector<std::shared_ptr<Resource>> contained;
    std::optional<markdown> copyright;
    std::optional<dateTime> date_;
    std::optional<markdown> description;
    std::vector<std::shared_ptr<ContactDetail>> editor;
    std::optional<std::shared_ptr<Period>> effective_period;
    std::vector<std::shared_ptr<ContactDetail>> endorser;
    std::optional<boolean> experimental;
    std::optional<std::shared_ptr<Reference>> exposure;
    std::optional<std::shared_ptr<Reference>> exposure_alternative;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::vector<std::shared_ptr<Identifier>> identifier;
    std::optional<uri> implicit_rules;
    std::vector<std::shared_ptr<CodeableConcept>> jurisdiction;
    std::optional<code> language;
    std::optional<date> last_review_date;
    std::vector<canonical> library;
    std::optional<std::shared_ptr<Meta>> meta;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<string> name;
    std::optional<std::shared_ptr<Reference>> outcome;
    std::shared_ptr<Reference> population;
    std::optional<string> publisher;
    std::optional<markdown> purpose;
    std::vector<std::shared_ptr<RelatedArtifact>> related_artifact;
    std::vector<std::shared_ptr<ContactDetail>> reviewer;
    std::optional<string> short_title;
    code status;
    using SUBJECT_Variant = std::variant<
        std::shared_ptr<CodeableConcept>,
        std::shared_ptr<Reference>
    >;
    SUBJECT_Variant subject;
    std::optional<string> subtitle;
    std::optional<std::shared_ptr<Narrative>> text;
    std::optional<string> title;
    std::vector<std::shared_ptr<CodeableConcept>> topic;
    std::optional<uri> url_;
    std::optional<string> usage;
    std::vector<std::shared_ptr<UsageContext>> use_context;
    std::optional<string> version;
};

class ResearchElementDefinition {
public:
    std::optional<date> approval_date;
    std::vector<std::shared_ptr<ContactDetail>> author;
    std::vector<string> comment;
    std::vector<std::shared_ptr<ContactDetail>> contact;
    std::vector<std::shared_ptr<Resource>> contained;
    std::optional<markdown> copyright;
    std::optional<dateTime> date_;
    std::optional<markdown> description;
    std::vector<std::shared_ptr<ContactDetail>> editor;
    std::optional<std::shared_ptr<Period>> effective_period;
    std::vector<std::shared_ptr<ContactDetail>> endorser;
    std::optional<boolean> experimental;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::vector<std::shared_ptr<Identifier>> identifier;
    std::optional<uri> implicit_rules;
    std::vector<std::shared_ptr<CodeableConcept>> jurisdiction;
    std::optional<code> language;
    std::optional<date> last_review_date;
    std::vector<canonical> library;
    std::optional<std::shared_ptr<Meta>> meta;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<string> name;
    std::optional<string> publisher;
    std::optional<markdown> purpose;
    std::vector<std::shared_ptr<RelatedArtifact>> related_artifact;
    std::vector<std::shared_ptr<ContactDetail>> reviewer;
    std::optional<string> short_title;
    code status;
    using SUBJECT_Variant = std::variant<
        std::shared_ptr<CodeableConcept>,
        std::shared_ptr<Reference>
    >;
    SUBJECT_Variant subject;
    std::optional<string> subtitle;
    std::optional<std::shared_ptr<Narrative>> text;
    std::optional<string> title;
    std::vector<std::shared_ptr<CodeableConcept>> topic;
    code type;
    std::optional<uri> url_;
    std::optional<string> usage;
    std::vector<std::shared_ptr<UsageContext>> use_context;
    std::optional<code> variable_type;
    std::optional<string> version;
};

class ResearchElementDefinition_Characteristic {
public:
    using DEFINITION_Variant = std::variant<
        std::shared_ptr<CodeableConcept>,
        std::shared_ptr<canonical>,
        std::shared_ptr<Expression>,
        std::shared_ptr<DataRequirement>
    >;
    DEFINITION_Variant definition;
    std::optional<boolean> exclude;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<string> participant_effective_description;
    std::optional<code> participant_effective_group_measure;
    std::optional<std::shared_ptr<Duration>> participant_effective_time_from_start;
    using PARTICIPANT_EFFECTIVE_Variant = std::variant<
        std::shared_ptr<dateTime>,
        std::shared_ptr<Period>,
        std::shared_ptr<Duration>,
        std::shared_ptr<Timing>
    >;
    PARTICIPANT_EFFECTIVE_Variant participant_effective;
    std::optional<string> study_effective_description;
    std::optional<code> study_effective_group_measure;
    std::optional<std::shared_ptr<Duration>> study_effective_time_from_start;
    using STUDY_EFFECTIVE_Variant = std::variant<
        std::shared_ptr<dateTime>,
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
    std::optional<markdown> description;
    std::vector<std::shared_ptr<Reference>> enrollment;
    std::vector<std::shared_ptr<Extension>> extension;
    std::vector<std::shared_ptr<CodeableConcept>> focus;
    std::optional<string> id_;
    std::vector<std::shared_ptr<Identifier>> identifier;
    std::optional<uri> implicit_rules;
    std::vector<std::shared_ptr<CodeableConcept>> keyword;
    std::optional<code> language;
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
    code status;
    std::optional<std::shared_ptr<Narrative>> text;
    std::optional<string> title;
};

class ResearchStudy_Arm {
public:
    std::optional<string> description;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    string name;
    std::optional<std::shared_ptr<CodeableConcept>> type;
};

class ResearchStudy_Objective {
public:
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<string> name;
    std::optional<std::shared_ptr<CodeableConcept>> type;
};

class ResearchSubject {
public:
    std::optional<string> actual_arm;
    std::optional<string> assigned_arm;
    std::optional<std::shared_ptr<Reference>> consent;
    std::vector<std::shared_ptr<Resource>> contained;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::vector<std::shared_ptr<Identifier>> identifier;
    std::optional<uri> implicit_rules;
    std::shared_ptr<Reference> individual;
    std::optional<code> language;
    std::optional<std::shared_ptr<Meta>> meta;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<std::shared_ptr<Period>> period;
    code status;
    std::shared_ptr<Reference> study;
    std::optional<std::shared_ptr<Narrative>> text;
};

class Resource {
public:
    std::optional<string> id_;
    std::optional<uri> implicit_rules;
    std::optional<code> language;
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
    std::optional<string> id_;
    std::vector<std::shared_ptr<Identifier>> identifier;
    std::optional<uri> implicit_rules;
    std::optional<code> language;
    std::optional<std::shared_ptr<Meta>> meta;
    std::optional<std::shared_ptr<CodeableConcept>> method;
    std::optional<string> mitigation;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::vector<std::shared_ptr<Annotation>> note;
    using OCCURRENCE_Variant = std::variant<
        std::shared_ptr<dateTime>,
        std::shared_ptr<Period>
    >;
    OCCURRENCE_Variant occurrence;
    std::optional<std::shared_ptr<Reference>> parent;
    std::optional<std::shared_ptr<Reference>> performer;
    std::vector<std::shared_ptr<RiskAssessment_Prediction>> prediction;
    std::vector<std::shared_ptr<CodeableConcept>> reason_code;
    std::vector<std::shared_ptr<Reference>> reason_reference;
    code status;
    std::shared_ptr<Reference> subject;
    std::optional<std::shared_ptr<Narrative>> text;
};

class RiskAssessment_Prediction {
public:
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<std::shared_ptr<CodeableConcept>> outcome;
    using PROBABILITY_Variant = std::variant<
        std::shared_ptr<decimal>,
        std::shared_ptr<Range>
    >;
    PROBABILITY_Variant probability;
    std::optional<std::shared_ptr<CodeableConcept>> qualitative_risk;
    std::optional<string> rationale;
    std::optional<decimal> relative_risk;
    using WHEN_Variant = std::variant<
        std::shared_ptr<Period>,
        std::shared_ptr<Range>
    >;
    WHEN_Variant when;
};

class RiskEvidenceSynthesis {
public:
    std::optional<date> approval_date;
    std::vector<std::shared_ptr<ContactDetail>> author;
    std::vector<std::shared_ptr<RiskEvidenceSynthesis_Certainty>> certainty;
    std::vector<std::shared_ptr<ContactDetail>> contact;
    std::vector<std::shared_ptr<Resource>> contained;
    std::optional<markdown> copyright;
    std::optional<dateTime> date_;
    std::optional<markdown> description;
    std::vector<std::shared_ptr<ContactDetail>> editor;
    std::optional<std::shared_ptr<Period>> effective_period;
    std::vector<std::shared_ptr<ContactDetail>> endorser;
    std::optional<std::shared_ptr<Reference>> exposure;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::vector<std::shared_ptr<Identifier>> identifier;
    std::optional<uri> implicit_rules;
    std::vector<std::shared_ptr<CodeableConcept>> jurisdiction;
    std::optional<code> language;
    std::optional<date> last_review_date;
    std::optional<std::shared_ptr<Meta>> meta;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<string> name;
    std::vector<std::shared_ptr<Annotation>> note;
    std::shared_ptr<Reference> outcome;
    std::shared_ptr<Reference> population;
    std::optional<string> publisher;
    std::vector<std::shared_ptr<RelatedArtifact>> related_artifact;
    std::vector<std::shared_ptr<ContactDetail>> reviewer;
    std::optional<std::shared_ptr<RiskEvidenceSynthesis_RiskEstimate>> risk_estimate;
    std::optional<std::shared_ptr<RiskEvidenceSynthesis_SampleSize>> sample_size;
    code status;
    std::optional<std::shared_ptr<CodeableConcept>> study_type;
    std::optional<std::shared_ptr<CodeableConcept>> synthesis_type;
    std::optional<std::shared_ptr<Narrative>> text;
    std::optional<string> title;
    std::vector<std::shared_ptr<CodeableConcept>> topic;
    std::optional<uri> url_;
    std::vector<std::shared_ptr<UsageContext>> use_context;
    std::optional<string> version;
};

class RiskEvidenceSynthesis_Certainty {
public:
    std::vector<std::shared_ptr<RiskEvidenceSynthesis_Certainty_CertaintySubcomponent>> certainty_subcomponent;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::vector<std::shared_ptr<Annotation>> note;
    std::vector<std::shared_ptr<CodeableConcept>> rating;
};

class RiskEvidenceSynthesis_Certainty_CertaintySubcomponent {
public:
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::vector<std::shared_ptr<Annotation>> note;
    std::vector<std::shared_ptr<CodeableConcept>> rating;
    std::optional<std::shared_ptr<CodeableConcept>> type;
};

class RiskEvidenceSynthesis_RiskEstimate {
public:
    std::optional<integer> denominator_count;
    std::optional<string> description;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<integer> numerator_count;
    std::vector<std::shared_ptr<RiskEvidenceSynthesis_RiskEstimate_PrecisionEstimate>> precision_estimate;
    std::optional<std::shared_ptr<CodeableConcept>> type;
    std::optional<std::shared_ptr<CodeableConcept>> unit_of_measure;
    std::optional<decimal> value;
};

class RiskEvidenceSynthesis_RiskEstimate_PrecisionEstimate {
public:
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<decimal> from;
    std::optional<string> id_;
    std::optional<decimal> level;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<decimal> to;
    std::optional<std::shared_ptr<CodeableConcept>> type;
};

class RiskEvidenceSynthesis_SampleSize {
public:
    std::optional<string> description;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<integer> number_of_participants;
    std::optional<integer> number_of_studies;
};

class SampledData {
public:
    std::optional<string> data;
    positiveInt dimensions;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<decimal> factor;
    std::optional<string> id_;
    std::optional<decimal> lower_limit;
    std::shared_ptr<Quantity> origin;
    decimal period;
    std::optional<decimal> upper_limit;
};

class Schedule {
public:
    std::optional<boolean> active;
    std::optional<string> comment;
    std::vector<std::shared_ptr<Resource>> contained;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::vector<std::shared_ptr<Identifier>> identifier;
    std::optional<uri> implicit_rules;
    std::optional<code> language;
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
    std::vector<string> chain;
    code code_;
    std::vector<code> comparator;
    std::vector<std::shared_ptr<SearchParameter_Component>> component;
    std::vector<std::shared_ptr<ContactDetail>> contact;
    std::vector<std::shared_ptr<Resource>> contained;
    std::optional<dateTime> date_;
    std::optional<canonical> derived_from;
    markdown description;
    std::optional<boolean> experimental;
    std::optional<string> expression;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::optional<uri> implicit_rules;
    std::vector<std::shared_ptr<CodeableConcept>> jurisdiction;
    std::optional<code> language;
    std::optional<std::shared_ptr<Meta>> meta;
    std::vector<code> modifier;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<boolean> multiple_and;
    std::optional<boolean> multiple_or;
    string name;
    std::optional<string> publisher;
    std::optional<markdown> purpose;
    code status;
    std::vector<code> target;
    std::optional<std::shared_ptr<Narrative>> text;
    code type;
    uri url_;
    std::vector<std::shared_ptr<UsageContext>> use_context;
    std::optional<string> version;
    std::optional<string> xpath;
    std::optional<code> xpath_usage;
};

class SearchParameter_Component {
public:
    canonical definition;
    string expression;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
};

class ServiceRequest {
public:
    using AS_NEEDED_Variant = std::variant<
        std::shared_ptr<boolean>,
        std::shared_ptr<CodeableConcept>
    >;
    AS_NEEDED_Variant as_needed;
    std::optional<dateTime> authored_on;
    std::vector<std::shared_ptr<Reference>> based_on;
    std::vector<std::shared_ptr<CodeableConcept>> body_site;
    std::vector<std::shared_ptr<CodeableConcept>> category;
    std::optional<std::shared_ptr<CodeableConcept>> code_;
    std::vector<std::shared_ptr<Resource>> contained;
    std::optional<boolean> do_not_perform;
    std::optional<std::shared_ptr<Reference>> encounter;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::vector<std::shared_ptr<Identifier>> identifier;
    std::optional<uri> implicit_rules;
    std::vector<canonical> instantiates_canonical;
    std::vector<uri> instantiates_uri;
    std::vector<std::shared_ptr<Reference>> insurance;
    code intent;
    std::optional<code> language;
    std::vector<std::shared_ptr<CodeableConcept>> location_code;
    std::vector<std::shared_ptr<Reference>> location_reference;
    std::optional<std::shared_ptr<Meta>> meta;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::vector<std::shared_ptr<Annotation>> note;
    using OCCURRENCE_Variant = std::variant<
        std::shared_ptr<dateTime>,
        std::shared_ptr<Period>,
        std::shared_ptr<Timing>
    >;
    OCCURRENCE_Variant occurrence;
    std::vector<std::shared_ptr<CodeableConcept>> order_detail;
    std::optional<string> patient_instruction;
    std::vector<std::shared_ptr<Reference>> performer;
    std::optional<std::shared_ptr<CodeableConcept>> performer_type;
    std::optional<code> priority;
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
    code status;
    std::shared_ptr<Reference> subject;
    std::vector<std::shared_ptr<Reference>> supporting_info;
    std::optional<std::shared_ptr<Narrative>> text;
};

class Signature {
public:
    std::optional<base64Binary> data;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::optional<std::shared_ptr<Reference>> on_behalf_of;
    std::optional<code> sig_format;
    std::optional<code> target_format;
    instant when;
    std::shared_ptr<Reference> who;
};


class Slot {
public:
    std::optional<std::shared_ptr<CodeableConcept>> appointment_type;
    std::optional<string> comment;
    std::vector<std::shared_ptr<Resource>> contained;
    instant end;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::vector<std::shared_ptr<Identifier>> identifier;
    std::optional<uri> implicit_rules;
    std::optional<code> language;
    std::optional<std::shared_ptr<Meta>> meta;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<boolean> overbooked;
    std::shared_ptr<Reference> schedule;
    std::vector<std::shared_ptr<CodeableConcept>> service_category;
    std::vector<std::shared_ptr<CodeableConcept>> service_type;
    std::vector<std::shared_ptr<CodeableConcept>> specialty;
    instant start;
    code status;
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
    std::optional<string> id_;
    std::vector<std::shared_ptr<Identifier>> identifier;
    std::optional<uri> implicit_rules;
    std::optional<code> language;
    std::optional<std::shared_ptr<Meta>> meta;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::vector<std::shared_ptr<Annotation>> note;
    std::vector<std::shared_ptr<Reference>> parent;
    std::vector<std::shared_ptr<Specimen_Processing>> processing;
    std::optional<dateTime> received_time;
    std::vector<std::shared_ptr<Reference>> request;
    std::optional<code> status;
    std::optional<std::shared_ptr<Reference>> subject;
    std::optional<std::shared_ptr<Narrative>> text;
    std::optional<std::shared_ptr<CodeableConcept>> type;
};

class Specimen_Collection {
public:
    std::optional<std::shared_ptr<CodeableConcept>> body_site;
    using COLLECTED_Variant = std::variant<
        std::shared_ptr<dateTime>,
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
    std::optional<string> id_;
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
    std::optional<string> description;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::vector<std::shared_ptr<Identifier>> identifier;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<std::shared_ptr<Quantity>> specimen_quantity;
    std::optional<std::shared_ptr<CodeableConcept>> type;
};

class Specimen_Processing {
public:
    std::vector<std::shared_ptr<Reference>> additive;
    std::optional<string> description;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<std::shared_ptr<CodeableConcept>> procedure;
    using TIME_Variant = std::variant<
        std::shared_ptr<dateTime>,
        std::shared_ptr<Period>
    >;
    TIME_Variant time_;
};

class SpecimenDefinition {
public:
    std::vector<std::shared_ptr<CodeableConcept>> collection;
    std::vector<std::shared_ptr<Resource>> contained;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::optional<std::shared_ptr<Identifier>> identifier;
    std::optional<uri> implicit_rules;
    std::optional<code> language;
    std::optional<std::shared_ptr<Meta>> meta;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::vector<std::shared_ptr<CodeableConcept>> patient_preparation;
    std::optional<std::shared_ptr<Narrative>> text;
    std::optional<string> time_aspect;
    std::optional<std::shared_ptr<CodeableConcept>> type_collected;
    std::vector<std::shared_ptr<SpecimenDefinition_TypeTested>> type_tested;
};

class SpecimenDefinition_TypeTested {
public:
    std::optional<std::shared_ptr<SpecimenDefinition_TypeTested_Container>> container;
    std::vector<std::shared_ptr<Extension>> extension;
    std::vector<std::shared_ptr<SpecimenDefinition_TypeTested_Handling>> handling;
    std::optional<string> id_;
    std::optional<boolean> is_derived;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    code preference;
    std::vector<std::shared_ptr<CodeableConcept>> rejection_criterion;
    std::optional<string> requirement;
    std::optional<std::shared_ptr<Duration>> retention_time;
    std::optional<std::shared_ptr<CodeableConcept>> type;
};

class SpecimenDefinition_TypeTested_Container {
public:
    std::vector<std::shared_ptr<SpecimenDefinition_TypeTested_Container_Additive>> additive;
    std::optional<std::shared_ptr<CodeableConcept>> cap;
    std::optional<std::shared_ptr<Quantity>> capacity;
    std::optional<string> description;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::optional<std::shared_ptr<CodeableConcept>> material;
    using MINIMUM_VOLUME_Variant = std::variant<
        std::shared_ptr<Quantity>,
        std::shared_ptr<string>
    >;
    MINIMUM_VOLUME_Variant minimum_volume;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<string> preparation;
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
    std::optional<string> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
};

class SpecimenDefinition_TypeTested_Handling {
public:
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::optional<string> instruction;
    std::optional<std::shared_ptr<Duration>> max_duration;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<std::shared_ptr<CodeableConcept>> temperature_qualifier;
    std::optional<std::shared_ptr<Range>> temperature_range;
};

class StructureDefinition {
public:
    boolean abstract;
    std::optional<canonical> base_definition;
    std::vector<std::shared_ptr<ContactDetail>> contact;
    std::vector<std::shared_ptr<Resource>> contained;
    std::vector<std::shared_ptr<StructureDefinition_Context>> context;
    std::vector<string> context_invariant;
    std::optional<markdown> copyright;
    std::optional<dateTime> date_;
    std::optional<code> derivation;
    std::optional<markdown> description;
    std::optional<std::shared_ptr<StructureDefinition_Differential>> differential;
    std::optional<boolean> experimental;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<code> fhir_version;
    std::optional<string> id_;
    std::vector<std::shared_ptr<Identifier>> identifier;
    std::optional<uri> implicit_rules;
    std::vector<std::shared_ptr<CodeableConcept>> jurisdiction;
    std::vector<std::shared_ptr<Coding>> keyword;
    code kind;
    std::optional<code> language;
    std::vector<std::shared_ptr<StructureDefinition_Mapping>> mapping;
    std::optional<std::shared_ptr<Meta>> meta;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    string name;
    std::optional<string> publisher;
    std::optional<markdown> purpose;
    std::optional<std::shared_ptr<StructureDefinition_Snapshot>> snapshot;
    code status;
    std::optional<std::shared_ptr<Narrative>> text;
    std::optional<string> title;
    uri type;
    uri url_;
    std::vector<std::shared_ptr<UsageContext>> use_context;
    std::optional<string> version;
};

class StructureDefinition_Context {
public:
    string expression;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    code type;
};

class StructureDefinition_Differential {
public:
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
};

class StructureDefinition_Mapping {
public:
    std::optional<string> comment;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    id identity;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<string> name;
    std::optional<uri> uri_;
};

class StructureDefinition_Snapshot {
public:
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
};

class StructureMap {
public:
    std::vector<std::shared_ptr<ContactDetail>> contact;
    std::vector<std::shared_ptr<Resource>> contained;
    std::optional<markdown> copyright;
    std::optional<dateTime> date_;
    std::optional<markdown> description;
    std::optional<boolean> experimental;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::vector<std::shared_ptr<Identifier>> identifier;
    std::optional<uri> implicit_rules;
    std::vector<canonical> import;
    std::vector<std::shared_ptr<CodeableConcept>> jurisdiction;
    std::optional<code> language;
    std::optional<std::shared_ptr<Meta>> meta;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    string name;
    std::optional<string> publisher;
    std::optional<markdown> purpose;
    code status;
    std::vector<std::shared_ptr<StructureMap_Structure>> structure;
    std::optional<std::shared_ptr<Narrative>> text;
    std::optional<string> title;
    uri url_;
    std::vector<std::shared_ptr<UsageContext>> use_context;
    std::optional<string> version;
};

class StructureMap_Group {
public:
    std::optional<string> documentation;
    std::optional<id> extends;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    id name;
    code type_mode;
};

class StructureMap_Group_Input {
public:
    std::optional<string> documentation;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    code mode;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    id name;
    std::optional<string> type;
};

class StructureMap_Group_Rule {
public:
    std::vector<std::shared_ptr<StructureMap_Group_Rule_Dependent>> dependent;
    std::optional<string> documentation;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    id name;
    std::vector<std::shared_ptr<StructureMap_Group_Rule>> rule;
    std::vector<std::shared_ptr<StructureMap_Group_Rule_Target>> target;
};

class StructureMap_Group_Rule_Dependent {
public:
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    id name;
};

class StructureMap_Group_Rule_Source {
public:
    std::optional<string> check;
    std::optional<string> condition;
    id context;
    using DEFAULT_VALUE_Variant = std::variant<
        std::shared_ptr<base64Binary>,
        std::shared_ptr<boolean>,
        std::shared_ptr<canonical>,
        std::shared_ptr<code>,
        std::shared_ptr<date>,
        std::shared_ptr<dateTime>,
        std::shared_ptr<decimal>,
        std::shared_ptr<id>,
        std::shared_ptr<instant>,
        std::shared_ptr<integer>,
        std::shared_ptr<markdown>,
        std::shared_ptr<oid>,
        std::shared_ptr<positiveInt>,
        std::shared_ptr<string>,
        std::shared_ptr<time>,
        std::shared_ptr<unsignedInt>,
        std::shared_ptr<uri>,
        std::shared_ptr<url>,
        std::shared_ptr<uuid>,
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
    std::optional<string> element;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::optional<code> list_mode;
    std::optional<string> log_message;
    std::optional<string> max;
    std::optional<integer> min;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<string> type;
    std::optional<id> variable;
};

class StructureMap_Group_Rule_Target {
public:
    std::optional<id> context;
    std::optional<code> context_type;
    std::optional<string> element;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::vector<code> list_mode;
    std::optional<id> list_rule_id;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::vector<std::shared_ptr<StructureMap_Group_Rule_Target_Parameter>> parameter;
    std::optional<code> transform;
    std::optional<id> variable;
};

class StructureMap_Group_Rule_Target_Parameter {
public:
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    using VALUE_Variant = std::variant<
        std::shared_ptr<id>,
        std::shared_ptr<string>,
        std::shared_ptr<boolean>,
        std::shared_ptr<integer>,
        std::shared_ptr<decimal>
    >;
    VALUE_Variant value;
};

class StructureMap_Structure {
public:
    std::optional<string> alias;
    std::optional<string> documentation;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    code mode;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    canonical url_;
};

class Subscription {
public:
    std::shared_ptr<Subscription_Channel> channel;
    std::vector<std::shared_ptr<ContactPoint>> contact;
    std::vector<std::shared_ptr<Resource>> contained;
    string criteria;
    std::optional<instant> end;
    std::optional<string> error;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::optional<uri> implicit_rules;
    std::optional<code> language;
    std::optional<std::shared_ptr<Meta>> meta;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    string reason;
    code status;
    std::optional<std::shared_ptr<Narrative>> text;
};

class Subscription_Channel {
public:
    std::optional<url> endpoint;
    std::vector<std::shared_ptr<Extension>> extension;
    std::vector<string> header;
    std::optional<string> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<code> payload;
    code type;
};

class Substance {
public:
    std::vector<std::shared_ptr<CodeableConcept>> category;
    std::shared_ptr<CodeableConcept> code_;
    std::vector<std::shared_ptr<Resource>> contained;
    std::optional<string> description;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::vector<std::shared_ptr<Identifier>> identifier;
    std::optional<uri> implicit_rules;
    std::vector<std::shared_ptr<Substance_Ingredient>> ingredient;
    std::vector<std::shared_ptr<Substance_Instance>> instance;
    std::optional<code> language;
    std::optional<std::shared_ptr<Meta>> meta;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<code> status;
    std::optional<std::shared_ptr<Narrative>> text;
};

class Substance_Ingredient {
public:
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
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
    std::optional<dateTime> expiry;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::optional<std::shared_ptr<Identifier>> identifier;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<std::shared_ptr<Quantity>> quantity;
};

class SubstanceAmount {
public:
    std::optional<string> amount_text;
    std::optional<std::shared_ptr<CodeableConcept>> amount_type;
    using AMOUNT_Variant = std::variant<
        std::shared_ptr<Quantity>,
        std::shared_ptr<Range>,
        std::shared_ptr<string>
    >;
    AMOUNT_Variant amount;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<std::shared_ptr<SubstanceAmount_ReferenceRange>> reference_range;
};

class SubstanceAmount_ReferenceRange {
public:
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<Quantity>> high_limit;
    std::optional<string> id_;
    std::optional<std::shared_ptr<Quantity>> low_limit;
};

class SubstanceNucleicAcid {
public:
    std::optional<string> area_of_hybridisation;
    std::vector<std::shared_ptr<Resource>> contained;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::optional<uri> implicit_rules;
    std::optional<code> language;
    std::optional<std::shared_ptr<Meta>> meta;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<integer> number_of_subunits;
    std::optional<std::shared_ptr<CodeableConcept>> oligo_nucleotide_type;
    std::optional<std::shared_ptr<CodeableConcept>> sequence_type;
    std::vector<std::shared_ptr<SubstanceNucleicAcid_Subunit>> subunit;
    std::optional<std::shared_ptr<Narrative>> text;
};

class SubstanceNucleicAcid_Subunit {
public:
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<CodeableConcept>> five_prime;
    std::optional<string> id_;
    std::optional<integer> length;
    std::vector<std::shared_ptr<SubstanceNucleicAcid_Subunit_Linkage>> linkage;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<string> sequence;
    std::optional<std::shared_ptr<Attachment>> sequence_attachment;
    std::optional<integer> subunit;
    std::vector<std::shared_ptr<SubstanceNucleicAcid_Subunit_Sugar>> sugar;
    std::optional<std::shared_ptr<CodeableConcept>> three_prime;
};

class SubstanceNucleicAcid_Subunit_Linkage {
public:
    std::optional<string> connectivity;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::optional<std::shared_ptr<Identifier>> identifier;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<string> name;
    std::optional<string> residue_site;
};

class SubstanceNucleicAcid_Subunit_Sugar {
public:
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::optional<std::shared_ptr<Identifier>> identifier;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<string> name;
    std::optional<string> residue_site;
};

class SubstancePolymer {
public:
    std::optional<std::shared_ptr<CodeableConcept>> class_;
    std::vector<std::shared_ptr<Resource>> contained;
    std::vector<std::shared_ptr<CodeableConcept>> copolymer_connectivity;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<CodeableConcept>> geometry;
    std::optional<string> id_;
    std::optional<uri> implicit_rules;
    std::optional<code> language;
    std::optional<std::shared_ptr<Meta>> meta;
    std::vector<string> modification;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::vector<std::shared_ptr<SubstancePolymer_MonomerSet>> monomer_set;
    std::vector<std::shared_ptr<SubstancePolymer_Repeat>> repeat;
    std::optional<std::shared_ptr<Narrative>> text;
};

class SubstancePolymer_MonomerSet {
public:
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<std::shared_ptr<CodeableConcept>> ratio_type;
    std::vector<std::shared_ptr<SubstancePolymer_MonomerSet_StartingMaterial>> starting_material;
};

class SubstancePolymer_MonomerSet_StartingMaterial {
public:
    std::optional<std::shared_ptr<SubstanceAmount>> amount;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::optional<boolean> is_defining;
    std::optional<std::shared_ptr<CodeableConcept>> material;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<std::shared_ptr<CodeableConcept>> type;
};

class SubstancePolymer_Repeat {
public:
    std::optional<string> average_molecular_formula;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<integer> number_of_units;
    std::vector<std::shared_ptr<SubstancePolymer_Repeat_RepeatUnit>> repeat_unit;
    std::optional<std::shared_ptr<CodeableConcept>> repeat_unit_amount_type;
};

class SubstancePolymer_Repeat_RepeatUnit {
public:
    std::optional<std::shared_ptr<SubstanceAmount>> amount;
    std::vector<std::shared_ptr<SubstancePolymer_Repeat_RepeatUnit_DegreeOfPolymerisation>> degree_of_polymerisation;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<std::shared_ptr<CodeableConcept>> orientation_of_polymerisation;
    std::optional<string> repeat_unit;
    std::vector<std::shared_ptr<SubstancePolymer_Repeat_RepeatUnit_StructuralRepresentation>> structural_representation;
};

class SubstancePolymer_Repeat_RepeatUnit_DegreeOfPolymerisation {
public:
    std::optional<std::shared_ptr<SubstanceAmount>> amount;
    std::optional<std::shared_ptr<CodeableConcept>> degree;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
};

class SubstancePolymer_Repeat_RepeatUnit_StructuralRepresentation {
public:
    std::optional<std::shared_ptr<Attachment>> attachment;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<string> representation;
    std::optional<std::shared_ptr<CodeableConcept>> type;
};

class SubstanceProtein {
public:
    std::vector<std::shared_ptr<Resource>> contained;
    std::vector<string> disulfide_linkage;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::optional<uri> implicit_rules;
    std::optional<code> language;
    std::optional<std::shared_ptr<Meta>> meta;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<integer> number_of_subunits;
    std::optional<std::shared_ptr<CodeableConcept>> sequence_type;
    std::vector<std::shared_ptr<SubstanceProtein_Subunit>> subunit;
    std::optional<std::shared_ptr<Narrative>> text;
};

class SubstanceProtein_Subunit {
public:
    std::optional<string> c_terminal_modification;
    std::optional<std::shared_ptr<Identifier>> c_terminal_modification_id;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::optional<integer> length;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<string> n_terminal_modification;
    std::optional<std::shared_ptr<Identifier>> n_terminal_modification_id;
    std::optional<string> sequence;
    std::optional<std::shared_ptr<Attachment>> sequence_attachment;
    std::optional<integer> subunit;
};

class SubstanceReferenceInformation {
public:
    std::vector<std::shared_ptr<SubstanceReferenceInformation_Classification>> classification;
    std::optional<string> comment;
    std::vector<std::shared_ptr<Resource>> contained;
    std::vector<std::shared_ptr<Extension>> extension;
    std::vector<std::shared_ptr<SubstanceReferenceInformation_Gene>> gene;
    std::vector<std::shared_ptr<SubstanceReferenceInformation_GeneElement>> gene_element;
    std::optional<string> id_;
    std::optional<uri> implicit_rules;
    std::optional<code> language;
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
    std::optional<string> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::vector<std::shared_ptr<Reference>> source;
    std::vector<std::shared_ptr<CodeableConcept>> subtype;
};

class SubstanceReferenceInformation_Gene {
public:
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<CodeableConcept>> gene;
    std::optional<std::shared_ptr<CodeableConcept>> gene_sequence_origin;
    std::optional<string> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::vector<std::shared_ptr<Reference>> source;
};

class SubstanceReferenceInformation_GeneElement {
public:
    std::optional<std::shared_ptr<Identifier>> element;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
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
        std::shared_ptr<string>
    >;
    AMOUNT_Variant amount;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
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
    std::vector<string> geographical_location;
    std::optional<string> id_;
    std::optional<uri> implicit_rules;
    std::optional<code> language;
    std::optional<std::shared_ptr<Meta>> meta;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<std::shared_ptr<SubstanceSourceMaterial_Organism>> organism;
    std::optional<std::shared_ptr<Identifier>> organism_id;
    std::optional<string> organism_name;
    std::vector<std::shared_ptr<Identifier>> parent_substance_id;
    std::vector<string> parent_substance_name;
    std::vector<std::shared_ptr<SubstanceSourceMaterial_PartDescription>> part_description;
    std::optional<std::shared_ptr<CodeableConcept>> source_material_class;
    std::optional<std::shared_ptr<CodeableConcept>> source_material_state;
    std::optional<std::shared_ptr<CodeableConcept>> source_material_type;
    std::optional<std::shared_ptr<Narrative>> text;
};

class SubstanceSourceMaterial_FractionDescription {
public:
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> fraction;
    std::optional<string> id_;
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
    std::optional<string> id_;
    std::optional<string> intraspecific_description;
    std::optional<std::shared_ptr<CodeableConcept>> intraspecific_type;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<std::shared_ptr<SubstanceSourceMaterial_Organism_OrganismGeneral>> organism_general;
    std::optional<std::shared_ptr<CodeableConcept>> species;
};

class SubstanceSourceMaterial_Organism_Author {
public:
    std::optional<string> author_description;
    std::optional<std::shared_ptr<CodeableConcept>> author_type;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
};

class SubstanceSourceMaterial_Organism_Hybrid {
public:
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<CodeableConcept>> hybrid_type;
    std::optional<string> id_;
    std::optional<string> maternal_organism_id;
    std::optional<string> maternal_organism_name;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<string> paternal_organism_id;
    std::optional<string> paternal_organism_name;
};

class SubstanceSourceMaterial_Organism_OrganismGeneral {
public:
    std::optional<std::shared_ptr<CodeableConcept>> class_;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::optional<std::shared_ptr<CodeableConcept>> kingdom;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<std::shared_ptr<CodeableConcept>> order;
    std::optional<std::shared_ptr<CodeableConcept>> phylum;
};

class SubstanceSourceMaterial_PartDescription {
public:
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<std::shared_ptr<CodeableConcept>> part;
    std::optional<std::shared_ptr<CodeableConcept>> part_location;
};

class SubstanceSpecification {
public:
    std::vector<std::shared_ptr<SubstanceSpecification_Code>> code_;
    std::optional<string> comment;
    std::vector<std::shared_ptr<Resource>> contained;
    std::optional<string> description;
    std::optional<std::shared_ptr<CodeableConcept>> domain;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::optional<std::shared_ptr<Identifier>> identifier;
    std::optional<uri> implicit_rules;
    std::optional<code> language;
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
    std::optional<string> comment;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::vector<std::shared_ptr<Reference>> source;
    std::optional<std::shared_ptr<CodeableConcept>> status;
    std::optional<dateTime> status_date;
};

class SubstanceSpecification_Moiety {
public:
    using AMOUNT_Variant = std::variant<
        std::shared_ptr<Quantity>,
        std::shared_ptr<string>
    >;
    AMOUNT_Variant amount;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::optional<std::shared_ptr<Identifier>> identifier;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<string> molecular_formula;
    std::optional<string> name;
    std::optional<std::shared_ptr<CodeableConcept>> optical_activity;
    std::optional<std::shared_ptr<CodeableConcept>> role;
    std::optional<std::shared_ptr<CodeableConcept>> stereochemistry;
};

class SubstanceSpecification_Name {
public:
    std::vector<std::shared_ptr<CodeableConcept>> domain;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::vector<std::shared_ptr<CodeableConcept>> jurisdiction;
    std::vector<std::shared_ptr<CodeableConcept>> language;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    string name;
    std::vector<std::shared_ptr<SubstanceSpecification_Name_Official>> official;
    std::optional<boolean> preferred;
    std::vector<std::shared_ptr<Reference>> source;
    std::optional<std::shared_ptr<CodeableConcept>> status;
    std::vector<std::shared_ptr<SubstanceSpecification_Name>> synonym;
    std::vector<std::shared_ptr<SubstanceSpecification_Name>> translation;
    std::optional<std::shared_ptr<CodeableConcept>> type;
};

class SubstanceSpecification_Name_Official {
public:
    std::optional<std::shared_ptr<CodeableConcept>> authority;
    std::optional<dateTime> date_;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<std::shared_ptr<CodeableConcept>> status;
};

class SubstanceSpecification_Property {
public:
    using AMOUNT_Variant = std::variant<
        std::shared_ptr<Quantity>,
        std::shared_ptr<string>
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
    std::optional<string> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<string> parameters;
};

class SubstanceSpecification_Relationship {
public:
    std::optional<std::shared_ptr<Ratio>> amount_ratio_low_limit;
    std::optional<std::shared_ptr<CodeableConcept>> amount_type;
    using AMOUNT_Variant = std::variant<
        std::shared_ptr<Quantity>,
        std::shared_ptr<Range>,
        std::shared_ptr<Ratio>,
        std::shared_ptr<string>
    >;
    AMOUNT_Variant amount;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::optional<boolean> is_defining;
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
    std::optional<string> id_;
    std::vector<std::shared_ptr<SubstanceSpecification_Structure_Isotope>> isotope;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<string> molecular_formula;
    std::optional<string> molecular_formula_by_moiety;
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
    std::optional<string> id_;
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
    std::optional<string> id_;
    std::optional<std::shared_ptr<CodeableConcept>> method;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<std::shared_ptr<CodeableConcept>> type;
};

class SubstanceSpecification_Structure_Representation {
public:
    std::optional<std::shared_ptr<Attachment>> attachment;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<string> representation;
    std::optional<std::shared_ptr<CodeableConcept>> type;
};

class SupplyDelivery {
public:
    std::vector<std::shared_ptr<Reference>> based_on;
    std::vector<std::shared_ptr<Resource>> contained;
    std::optional<std::shared_ptr<Reference>> destination;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::vector<std::shared_ptr<Identifier>> identifier;
    std::optional<uri> implicit_rules;
    std::optional<code> language;
    std::optional<std::shared_ptr<Meta>> meta;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    using OCCURRENCE_Variant = std::variant<
        std::shared_ptr<dateTime>,
        std::shared_ptr<Period>,
        std::shared_ptr<Timing>
    >;
    OCCURRENCE_Variant occurrence;
    std::vector<std::shared_ptr<Reference>> part_of;
    std::optional<std::shared_ptr<Reference>> patient;
    std::vector<std::shared_ptr<Reference>> receiver;
    std::optional<code> status;
    std::optional<std::shared_ptr<SupplyDelivery_SuppliedItem>> supplied_item;
    std::optional<std::shared_ptr<Reference>> supplier;
    std::optional<std::shared_ptr<Narrative>> text;
    std::optional<std::shared_ptr<CodeableConcept>> type;
};

class SupplyDelivery_SuppliedItem {
public:
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
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
    std::optional<dateTime> authored_on;
    std::optional<std::shared_ptr<CodeableConcept>> category;
    std::vector<std::shared_ptr<Resource>> contained;
    std::optional<std::shared_ptr<Reference>> deliver_from;
    std::optional<std::shared_ptr<Reference>> deliver_to;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::vector<std::shared_ptr<Identifier>> identifier;
    std::optional<uri> implicit_rules;
    using ITEM_Variant = std::variant<
        std::shared_ptr<CodeableConcept>,
        std::shared_ptr<Reference>
    >;
    ITEM_Variant item;
    std::optional<code> language;
    std::optional<std::shared_ptr<Meta>> meta;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    using OCCURRENCE_Variant = std::variant<
        std::shared_ptr<dateTime>,
        std::shared_ptr<Period>,
        std::shared_ptr<Timing>
    >;
    OCCURRENCE_Variant occurrence;
    std::vector<std::shared_ptr<SupplyRequest_Parameter>> parameter;
    std::optional<code> priority;
    std::shared_ptr<Quantity> quantity;
    std::vector<std::shared_ptr<CodeableConcept>> reason_code;
    std::vector<std::shared_ptr<Reference>> reason_reference;
    std::optional<std::shared_ptr<Reference>> requester;
    std::optional<code> status;
    std::vector<std::shared_ptr<Reference>> supplier;
    std::optional<std::shared_ptr<Narrative>> text;
};

class SupplyRequest_Parameter {
public:
    std::optional<std::shared_ptr<CodeableConcept>> code_;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    using VALUE_Variant = std::variant<
        std::shared_ptr<CodeableConcept>,
        std::shared_ptr<Quantity>,
        std::shared_ptr<Range>,
        std::shared_ptr<boolean>
    >;
    VALUE_Variant value;
};

class Task {
public:
    std::optional<dateTime> authored_on;
    std::vector<std::shared_ptr<Reference>> based_on;
    std::optional<std::shared_ptr<CodeableConcept>> business_status;
    std::optional<std::shared_ptr<CodeableConcept>> code_;
    std::vector<std::shared_ptr<Resource>> contained;
    std::optional<string> description;
    std::optional<std::shared_ptr<Reference>> encounter;
    std::optional<std::shared_ptr<Period>> execution_period;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<std::shared_ptr<Reference>> focus;
    std::optional<std::shared_ptr<Reference>> for_;
    std::optional<std::shared_ptr<Identifier>> group_identifier;
    std::optional<string> id_;
    std::vector<std::shared_ptr<Identifier>> identifier;
    std::optional<uri> implicit_rules;
    std::vector<std::shared_ptr<Task_Input>> input;
    std::optional<canonical> instantiates_canonical;
    std::optional<uri> instantiates_uri;
    std::vector<std::shared_ptr<Reference>> insurance;
    code intent;
    std::optional<code> language;
    std::optional<dateTime> last_modified;
    std::optional<std::shared_ptr<Reference>> location;
    std::optional<std::shared_ptr<Meta>> meta;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::vector<std::shared_ptr<Annotation>> note;
    std::vector<std::shared_ptr<Task_Output>> output;
    std::optional<std::shared_ptr<Reference>> owner;
    std::vector<std::shared_ptr<Reference>> part_of;
    std::vector<std::shared_ptr<CodeableConcept>> performer_type;
    std::optional<code> priority;
    std::optional<std::shared_ptr<CodeableConcept>> reason_code;
    std::optional<std::shared_ptr<Reference>> reason_reference;
    std::vector<std::shared_ptr<Reference>> relevant_history;
    std::optional<std::shared_ptr<Reference>> requester;
    std::optional<std::shared_ptr<Task_Restriction>> restriction;
    code status;
    std::optional<std::shared_ptr<CodeableConcept>> status_reason;
    std::optional<std::shared_ptr<Narrative>> text;
};

class Task_Input {
public:
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::shared_ptr<CodeableConcept> type;
    using VALUE_Variant = std::variant<
        std::shared_ptr<base64Binary>,
        std::shared_ptr<boolean>,
        std::shared_ptr<canonical>,
        std::shared_ptr<code>,
        std::shared_ptr<date>,
        std::shared_ptr<dateTime>,
        std::shared_ptr<decimal>,
        std::shared_ptr<id>,
        std::shared_ptr<instant>,
        std::shared_ptr<integer>,
        std::shared_ptr<markdown>,
        std::shared_ptr<oid>,
        std::shared_ptr<positiveInt>,
        std::shared_ptr<string>,
        std::shared_ptr<time>,
        std::shared_ptr<unsignedInt>,
        std::shared_ptr<uri>,
        std::shared_ptr<url>,
        std::shared_ptr<uuid>,
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
    std::optional<string> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::shared_ptr<CodeableConcept> type;
    using VALUE_Variant = std::variant<
        std::shared_ptr<base64Binary>,
        std::shared_ptr<boolean>,
        std::shared_ptr<canonical>,
        std::shared_ptr<code>,
        std::shared_ptr<date>,
        std::shared_ptr<dateTime>,
        std::shared_ptr<decimal>,
        std::shared_ptr<id>,
        std::shared_ptr<instant>,
        std::shared_ptr<integer>,
        std::shared_ptr<markdown>,
        std::shared_ptr<oid>,
        std::shared_ptr<positiveInt>,
        std::shared_ptr<string>,
        std::shared_ptr<time>,
        std::shared_ptr<unsignedInt>,
        std::shared_ptr<uri>,
        std::shared_ptr<url>,
        std::shared_ptr<uuid>,
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
    std::optional<string> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<std::shared_ptr<Period>> period;
    std::vector<std::shared_ptr<Reference>> recipient;
    std::optional<positiveInt> repetitions;
};

class TerminologyCapabilities {
public:
    std::optional<std::shared_ptr<TerminologyCapabilities_Closure>> closure;
    std::optional<code> code_search;
    std::vector<std::shared_ptr<TerminologyCapabilities_CodeSystem>> code_system;
    std::vector<std::shared_ptr<ContactDetail>> contact;
    std::vector<std::shared_ptr<Resource>> contained;
    std::optional<markdown> copyright;
    dateTime date_;
    std::optional<markdown> description;
    std::optional<std::shared_ptr<TerminologyCapabilities_Expansion>> expansion;
    std::optional<boolean> experimental;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::optional<std::shared_ptr<TerminologyCapabilities_Implementation>> implementation;
    std::optional<uri> implicit_rules;
    std::vector<std::shared_ptr<CodeableConcept>> jurisdiction;
    code kind;
    std::optional<code> language;
    std::optional<boolean> locked_date;
    std::optional<std::shared_ptr<Meta>> meta;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<string> name;
    std::optional<string> publisher;
    std::optional<markdown> purpose;
    std::optional<std::shared_ptr<TerminologyCapabilities_Software>> software;
    code status;
    std::optional<std::shared_ptr<Narrative>> text;
    std::optional<string> title;
    std::optional<std::shared_ptr<TerminologyCapabilities_Translation>> translation;
    std::optional<uri> url_;
    std::vector<std::shared_ptr<UsageContext>> use_context;
    std::optional<std::shared_ptr<TerminologyCapabilities_ValidateCode>> validate_code;
    std::optional<string> version;
};

class TerminologyCapabilities_Closure {
public:
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<boolean> translation;
};

class TerminologyCapabilities_CodeSystem {
public:
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<boolean> subsumption;
    std::optional<canonical> uri_;
    std::vector<std::shared_ptr<TerminologyCapabilities_CodeSystem_Version>> version;
};

class TerminologyCapabilities_CodeSystem_Version {
public:
    std::optional<string> code_;
    std::optional<boolean> compositional;
    std::vector<std::shared_ptr<Extension>> extension;
    std::vector<std::shared_ptr<TerminologyCapabilities_CodeSystem_Version_Filter>> filter;
    std::optional<string> id_;
    std::optional<boolean> is_default;
    std::vector<code> language;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::vector<code> property;
};

class TerminologyCapabilities_CodeSystem_Version_Filter {
public:
    code code_;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
};

class TerminologyCapabilities_Expansion {
public:
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<boolean> hierarchical;
    std::optional<string> id_;
    std::optional<boolean> incomplete;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<boolean> paging;
    std::vector<std::shared_ptr<TerminologyCapabilities_Expansion_Parameter>> parameter;
    std::optional<markdown> text_filter;
};

class TerminologyCapabilities_Expansion_Parameter {
public:
    std::optional<string> documentation;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    code name;
};

class TerminologyCapabilities_Implementation {
public:
    string description;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<url> url_;
};

class TerminologyCapabilities_Software {
public:
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    string name;
    std::optional<string> version;
};

class TerminologyCapabilities_Translation {
public:
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    boolean needs_map;
};

class TerminologyCapabilities_ValidateCode {
public:
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    boolean translations;
};

class TestReport {
public:
    std::vector<std::shared_ptr<Resource>> contained;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::optional<std::shared_ptr<Identifier>> identifier;
    std::optional<uri> implicit_rules;
    std::optional<dateTime> issued;
    std::optional<code> language;
    std::optional<std::shared_ptr<Meta>> meta;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<string> name;
    std::vector<std::shared_ptr<TestReport_Participant>> participant;
    code result;
    std::optional<decimal> score;
    std::optional<std::shared_ptr<TestReport_Setup>> setup;
    code status;
    std::optional<std::shared_ptr<TestReport_Teardown>> teardown;
    std::vector<std::shared_ptr<TestReport_Test>> test;
    std::shared_ptr<Reference> test_script;
    std::optional<string> tester;
    std::optional<std::shared_ptr<Narrative>> text;
};

class TestReport_Participant {
public:
    std::optional<string> display;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    code type;
    uri uri_;
};

class TestReport_Setup {
public:
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
};

class TestReport_Setup_Action {
public:
    std::optional<std::shared_ptr<TestReport_Setup_Action_Assert>> assert;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<std::shared_ptr<TestReport_Setup_Action_Operation>> operation;
};

class TestReport_Setup_Action_Assert {
public:
    std::optional<string> detail;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::optional<markdown> message;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    code result;
};

class TestReport_Setup_Action_Operation {
public:
    std::optional<uri> detail;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::optional<markdown> message;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    code result;
};

class TestReport_Teardown {
public:
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
};

class TestReport_Teardown_Action {
public:
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::shared_ptr<TestReport_Setup_Action_Operation> operation;
};

class TestReport_Test {
public:
    std::optional<string> description;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<string> name;
};

class TestReport_Test_Action {
public:
    std::optional<std::shared_ptr<TestReport_Setup_Action_Assert>> assert;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<std::shared_ptr<TestReport_Setup_Action_Operation>> operation;
};

class TestScript {
public:
    std::vector<std::shared_ptr<ContactDetail>> contact;
    std::vector<std::shared_ptr<Resource>> contained;
    std::optional<markdown> copyright;
    std::optional<dateTime> date_;
    std::optional<markdown> description;
    std::vector<std::shared_ptr<TestScript_Destination>> destination;
    std::optional<boolean> experimental;
    std::vector<std::shared_ptr<Extension>> extension;
    std::vector<std::shared_ptr<TestScript_Fixture>> fixture;
    std::optional<string> id_;
    std::optional<std::shared_ptr<Identifier>> identifier;
    std::optional<uri> implicit_rules;
    std::vector<std::shared_ptr<CodeableConcept>> jurisdiction;
    std::optional<code> language;
    std::optional<std::shared_ptr<Meta>> meta;
    std::optional<std::shared_ptr<TestScript_Metadata>> metadata;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    string name;
    std::vector<std::shared_ptr<TestScript_Origin>> origin;
    std::vector<std::shared_ptr<Reference>> profile;
    std::optional<string> publisher;
    std::optional<markdown> purpose;
    std::optional<std::shared_ptr<TestScript_Setup>> setup;
    code status;
    std::optional<std::shared_ptr<TestScript_Teardown>> teardown;
    std::vector<std::shared_ptr<TestScript_Test>> test;
    std::optional<std::shared_ptr<Narrative>> text;
    std::optional<string> title;
    uri url_;
    std::vector<std::shared_ptr<UsageContext>> use_context;
    std::vector<std::shared_ptr<TestScript_Variable>> variable;
    std::optional<string> version;
};

class TestScript_Destination {
public:
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    integer index;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::shared_ptr<Coding> profile;
};

class TestScript_Fixture {
public:
    boolean autocreate;
    boolean autodelete;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<std::shared_ptr<Reference>> resource;
};

class TestScript_Metadata {
public:
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::vector<std::shared_ptr<TestScript_Metadata_Link>> link;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
};

class TestScript_Metadata_Capability {
public:
    canonical capabilities;
    std::optional<string> description;
    std::optional<integer> destination;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::vector<uri> link;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::vector<integer> origin;
    boolean required;
    boolean validated;
};

class TestScript_Metadata_Link {
public:
    std::optional<string> description;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    uri url_;
};

class TestScript_Origin {
public:
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    integer index;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::shared_ptr<Coding> profile;
};

class TestScript_Setup {
public:
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
};

class TestScript_Setup_Action {
public:
    std::optional<std::shared_ptr<TestScript_Setup_Action_Assert>> assert;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<std::shared_ptr<TestScript_Setup_Action_Operation>> operation;
};

class TestScript_Setup_Action_Assert {
public:
    std::optional<string> compare_to_source_expression;
    std::optional<string> compare_to_source_id;
    std::optional<string> compare_to_source_path;
    std::optional<code> content_type;
    std::optional<string> description;
    std::optional<code> direction;
    std::optional<string> expression;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> header_field;
    std::optional<string> id_;
    std::optional<string> label;
    std::optional<string> minimum_id;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<boolean> navigation_links;
    std::optional<code> operator_;
    std::optional<string> path;
    std::optional<code> request_method;
    std::optional<string> request_u_r_l;
    std::optional<code> resource;
    std::optional<code> response;
    std::optional<string> response_code;
    std::optional<id> source_id;
    std::optional<id> validate_profile_id;
    std::optional<string> value;
    boolean warning_only;
};

class TestScript_Setup_Action_Operation {
public:
    std::optional<code> accept;
    std::optional<code> content_type;
    std::optional<string> description;
    std::optional<integer> destination;
    boolean encode_request_url;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::optional<string> label;
    std::optional<code> method;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<integer> origin;
    std::optional<string> params;
    std::vector<std::shared_ptr<TestScript_Setup_Action_Operation_RequestHeader>> request_header;
    std::optional<id> request_id;
    std::optional<code> resource;
    std::optional<id> response_id;
    std::optional<id> source_id;
    std::optional<id> target_id;
    std::optional<std::shared_ptr<Coding>> type;
    std::optional<string> url_;
};

class TestScript_Setup_Action_Operation_RequestHeader {
public:
    std::vector<std::shared_ptr<Extension>> extension;
    string field;
    std::optional<string> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    string value;
};

class TestScript_Teardown {
public:
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
};

class TestScript_Teardown_Action {
public:
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::shared_ptr<TestScript_Setup_Action_Operation> operation;
};

class TestScript_Test {
public:
    std::optional<string> description;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<string> name;
};

class TestScript_Test_Action {
public:
    std::optional<std::shared_ptr<TestScript_Setup_Action_Assert>> assert;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<std::shared_ptr<TestScript_Setup_Action_Operation>> operation;
};

class TestScript_Variable {
public:
    std::optional<string> default_value;
    std::optional<string> description;
    std::optional<string> expression;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> header_field;
    std::optional<string> hint;
    std::optional<string> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    string name;
    std::optional<string> path;
    std::optional<id> source_id;
};

class Timing {
public:
    std::optional<std::shared_ptr<CodeableConcept>> code_;
    std::vector<dateTime> event;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
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
    std::optional<positiveInt> count;
    std::optional<positiveInt> count_max;
    std::vector<code> day_of_week;
    std::optional<decimal> duration;
    std::optional<decimal> duration_max;
    std::optional<code> duration_unit;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<positiveInt> frequency;
    std::optional<positiveInt> frequency_max;
    std::optional<string> id_;
    std::optional<unsignedInt> offset;
    std::optional<decimal> period;
    std::optional<decimal> period_max;
    std::optional<code> period_unit;
    std::vector<time> time_of_day;
    std::vector<code> when;
};

class TriggerDefinition {
public:
    std::optional<std::shared_ptr<Expression>> condition;
    std::vector<std::shared_ptr<DataRequirement>> data;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::optional<string> name;
    using TIMING_Variant = std::variant<
        std::shared_ptr<Timing>,
        std::shared_ptr<Reference>,
        std::shared_ptr<date>,
        std::shared_ptr<dateTime>
    >;
    TIMING_Variant timing;
    code type;
};

class UsageContext {
public:
    std::shared_ptr<Coding> code_;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
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
    std::optional<markdown> copyright;
    std::optional<dateTime> date_;
    std::optional<markdown> description;
    std::optional<std::shared_ptr<ValueSet_Expansion>> expansion;
    std::optional<boolean> experimental;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::vector<std::shared_ptr<Identifier>> identifier;
    std::optional<boolean> immutable;
    std::optional<uri> implicit_rules;
    std::vector<std::shared_ptr<CodeableConcept>> jurisdiction;
    std::optional<code> language;
    std::optional<std::shared_ptr<Meta>> meta;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<string> name;
    std::optional<string> publisher;
    std::optional<markdown> purpose;
    code status;
    std::optional<std::shared_ptr<Narrative>> text;
    std::optional<string> title;
    std::optional<uri> url_;
    std::vector<std::shared_ptr<UsageContext>> use_context;
    std::optional<string> version;
};

class ValueSet_Compose {
public:
    std::vector<std::shared_ptr<ValueSet_Compose_Include>> exclude;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::optional<boolean> inactive;
    std::optional<date> locked_date;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
};

class ValueSet_Compose_Include {
public:
    std::vector<std::shared_ptr<ValueSet_Compose_Include_Concept>> concept;
    std::vector<std::shared_ptr<Extension>> extension;
    std::vector<std::shared_ptr<ValueSet_Compose_Include_Filter>> filter;
    std::optional<string> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<uri> system;
    std::vector<canonical> value_set;
    std::optional<string> version;
};

class ValueSet_Compose_Include_Concept {
public:
    code code_;
    std::vector<std::shared_ptr<ValueSet_Compose_Include_Concept_Designation>> designation;
    std::optional<string> display;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
};

class ValueSet_Compose_Include_Concept_Designation {
public:
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::optional<code> language;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<std::shared_ptr<Coding>> use;
    string value;
};

class ValueSet_Compose_Include_Filter {
public:
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    code op;
    code property;
    string value;
};

class ValueSet_Expansion {
public:
    std::vector<std::shared_ptr<ValueSet_Expansion_Contains>> contains;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::optional<uri> identifier;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<integer> offset;
    std::vector<std::shared_ptr<ValueSet_Expansion_Parameter>> parameter;
    dateTime timestamp;
    std::optional<integer> total;
};

class ValueSet_Expansion_Contains {
public:
    std::optional<boolean> abstract;
    std::optional<code> code_;
    std::vector<std::shared_ptr<ValueSet_Expansion_Contains>> contains;
    std::vector<std::shared_ptr<ValueSet_Compose_Include_Concept_Designation>> designation;
    std::optional<string> display;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::optional<boolean> inactive;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<uri> system;
    std::optional<string> version;
};

class ValueSet_Expansion_Parameter {
public:
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    string name;
    using VALUE_Variant = std::variant<
        std::shared_ptr<string>,
        std::shared_ptr<boolean>,
        std::shared_ptr<integer>,
        std::shared_ptr<decimal>,
        std::shared_ptr<uri>,
        std::shared_ptr<code>,
        std::shared_ptr<dateTime>
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
    std::optional<string> id_;
    std::optional<uri> implicit_rules;
    std::optional<code> language;
    std::optional<dateTime> last_performed;
    std::optional<std::shared_ptr<Meta>> meta;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<std::shared_ptr<CodeableConcept>> need;
    std::optional<date> next_scheduled;
    std::vector<std::shared_ptr<VerificationResult_PrimarySource>> primary_source;
    code status;
    std::optional<dateTime> status_date;
    std::vector<std::shared_ptr<Reference>> target;
    std::vector<string> target_location;
    std::optional<std::shared_ptr<Narrative>> text;
    std::vector<std::shared_ptr<CodeableConcept>> validation_process;
    std::optional<std::shared_ptr<CodeableConcept>> validation_type;
    std::vector<std::shared_ptr<VerificationResult_Validator>> validator;
};

class VerificationResult_Attestation {
public:
    std::optional<std::shared_ptr<CodeableConcept>> communication_method;
    std::optional<date> date_;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::optional<std::shared_ptr<Reference>> on_behalf_of;
    std::optional<string> proxy_identity_certificate;
    std::optional<std::shared_ptr<Signature>> proxy_signature;
    std::optional<string> source_identity_certificate;
    std::optional<std::shared_ptr<Signature>> source_signature;
    std::optional<std::shared_ptr<Reference>> who;
};

class VerificationResult_PrimarySource {
public:
    std::optional<std::shared_ptr<CodeableConcept>> can_push_updates;
    std::vector<std::shared_ptr<CodeableConcept>> communication_method;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::vector<std::shared_ptr<CodeableConcept>> push_type_available;
    std::vector<std::shared_ptr<CodeableConcept>> type;
    std::optional<dateTime> validation_date;
    std::optional<std::shared_ptr<CodeableConcept>> validation_status;
    std::optional<std::shared_ptr<Reference>> who;
};

class VerificationResult_Validator {
public:
    std::optional<std::shared_ptr<Signature>> attestation_signature;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::optional<string> identity_certificate;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::shared_ptr<Reference> organization;
};

class VisionPrescription {
public:
    std::vector<std::shared_ptr<Resource>> contained;
    dateTime created;
    dateTime date_written;
    std::optional<std::shared_ptr<Reference>> encounter;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::vector<std::shared_ptr<Identifier>> identifier;
    std::optional<uri> implicit_rules;
    std::optional<code> language;
    std::optional<std::shared_ptr<Meta>> meta;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::shared_ptr<Reference> patient;
    std::shared_ptr<Reference> prescriber;
    code status;
    std::optional<std::shared_ptr<Narrative>> text;
};

class VisionPrescription_LensSpecification {
public:
    std::optional<decimal> add;
    std::optional<integer> axis;
    std::optional<decimal> back_curve;
    std::optional<string> brand;
    std::optional<string> color;
    std::optional<decimal> cylinder;
    std::optional<decimal> diameter;
    std::optional<std::shared_ptr<Quantity>> duration;
    std::vector<std::shared_ptr<Extension>> extension;
    code eye;
    std::optional<string> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
    std::vector<std::shared_ptr<Annotation>> note;
    std::optional<decimal> power;
    std::vector<std::shared_ptr<VisionPrescription_LensSpecification_Prism>> prism;
    std::shared_ptr<CodeableConcept> product;
    std::optional<decimal> sphere;
};

class VisionPrescription_LensSpecification_Prism {
public:
    decimal amount;
    code base;
    std::vector<std::shared_ptr<Extension>> extension;
    std::optional<string> id_;
    std::vector<std::shared_ptr<Extension>> modifier_extension;
};













































class xhtml {
public:
    std::optional<string> id_;
    string value;
};

