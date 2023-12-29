typedef char* fhir_base64Binary;
typedef char* fhir_canonical;
typedef char* fhir_code;
typedef char* fhir_id;
typedef char* fhir_markdown;
typedef char* fhir_oid;
typedef char* fhir_string;
typedef char* fhir_uri;
typedef char* fhir_url;
typedef char* fhir_uuid;
typedef char* fhir_boolean;
typedef char* fhir_positiveInt;
typedef char* fhir_unsignedInt;
typedef char* fhir_decimal;
typedef char* fhir_date;
typedef char* fhir_dateTime;
typedef char* fhir_time;
typedef char* fhir_instant;
class Resource;
class Account;
class Account_Coverage;
class Account_Guarantor;
class ActivityDefinition;
class ActivityDefinition_Participant;
class ActivityDefinition_DynamicValue;
class AdverseEvent;
class AdverseEvent_SuspectEntity;
class AdverseEvent_SuspectEntity_Causality;
class AllergyIntolerance;
class AllergyIntolerance_Reaction;
class Appointment;
class Appointment_Participant;
class AppointmentResponse;
class AuditEvent;
class AuditEvent_Agent;
class AuditEvent_Agent_Network;
class AuditEvent_Source;
class AuditEvent_Entity;
class AuditEvent_Entity_Detail;
class Basic;
class Binary;
class BiologicallyDerivedProduct;
class BiologicallyDerivedProduct_Collection;
class BiologicallyDerivedProduct_Processing;
class BiologicallyDerivedProduct_Manipulation;
class BiologicallyDerivedProduct_Storage;
class BodyStructure;
class Bundle;
class Bundle_Link;
class Bundle_Entry;
class Bundle_Entry_Search;
class Bundle_Entry_Request;
class Bundle_Entry_Response;
class CapabilityStatement;
class CapabilityStatement_Software;
class CapabilityStatement_Implementation;
class CapabilityStatement_Rest;
class CapabilityStatement_Rest_Security;
class CapabilityStatement_Rest_Resource;
class CapabilityStatement_Rest_Resource_Interaction;
class CapabilityStatement_Rest_Resource_SearchParam;
class CapabilityStatement_Rest_Resource_Operation;
class CapabilityStatement_Rest_Interaction;
class CapabilityStatement_Messaging;
class CapabilityStatement_Messaging_Endpoint;
class CapabilityStatement_Messaging_SupportedMessage;
class CapabilityStatement_Document;
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
class Claim_Related;
class Claim_Payee;
class Claim_CareTeam;
class Claim_SupportingInfo;
class Claim_Diagnosis;
class Claim_Procedure;
class Claim_Insurance;
class Claim_Accident;
class Claim_Item;
class Claim_Item_Detail;
class Claim_Item_Detail_SubDetail;
class ClaimResponse;
class ClaimResponse_Item;
class ClaimResponse_Item_Adjudication;
class ClaimResponse_Item_Detail;
class ClaimResponse_Item_Detail_SubDetail;
class ClaimResponse_AddItem;
class ClaimResponse_AddItem_Detail;
class ClaimResponse_AddItem_Detail_SubDetail;
class ClaimResponse_Total;
class ClaimResponse_Payment;
class ClaimResponse_ProcessNote;
class ClaimResponse_Insurance;
class ClaimResponse_Error;
class ClinicalImpression;
class ClinicalImpression_Investigation;
class ClinicalImpression_Finding;
class CodeSystem;
class CodeSystem_Filter;
class CodeSystem_Property;
class CodeSystem_Concept;
class CodeSystem_Concept_Designation;
class CodeSystem_Concept_Property;
class Communication;
class Communication_Payload;
class CommunicationRequest;
class CommunicationRequest_Payload;
class CompartmentDefinition;
class CompartmentDefinition_Resource;
class Composition;
class Composition_Attester;
class Composition_RelatesTo;
class Composition_Event;
class Composition_Section;
class ConceptMap;
class ConceptMap_Group;
class ConceptMap_Group_Element;
class ConceptMap_Group_Element_Target;
class ConceptMap_Group_Element_Target_DependsOn;
class ConceptMap_Group_Unmapped;
class Condition;
class Condition_Stage;
class Condition_Evidence;
class Consent;
class Consent_Policy;
class Consent_Verification;
class Consent_Provision;
class Consent_Provision_Actor;
class Consent_Provision_Data;
class Contract;
class Contract_ContentDefinition;
class Contract_Term;
class Contract_Term_SecurityLabel;
class Contract_Term_Offer;
class Contract_Term_Offer_Party;
class Contract_Term_Offer_Answer;
class Contract_Term_Asset;
class Contract_Term_Asset_Context;
class Contract_Term_Asset_ValuedItem;
class Contract_Term_Action;
class Contract_Term_Action_Subject;
class Contract_Signer;
class Contract_Friendly;
class Contract_Legal;
class Contract_Rule;
class Coverage;
class Coverage_Class;
class Coverage_CostToBeneficiary;
class Coverage_CostToBeneficiary_Exception;
class CoverageEligibilityRequest;
class CoverageEligibilityRequest_SupportingInfo;
class CoverageEligibilityRequest_Insurance;
class CoverageEligibilityRequest_Item;
class CoverageEligibilityRequest_Item_Diagnosis;
class CoverageEligibilityResponse;
class CoverageEligibilityResponse_Insurance;
class CoverageEligibilityResponse_Insurance_Item;
class CoverageEligibilityResponse_Insurance_Item_Benefit;
class CoverageEligibilityResponse_Error;
class DetectedIssue;
class DetectedIssue_Evidence;
class DetectedIssue_Mitigation;
class Device;
class Device_UdiCarrier;
class Device_DeviceName;
class Device_Specialization;
class Device_Version;
class Device_Property;
class DeviceDefinition;
class DeviceDefinition_UdiDeviceIdentifier;
class DeviceDefinition_DeviceName;
class DeviceDefinition_Specialization;
class DeviceDefinition_Capability;
class DeviceDefinition_Property;
class DeviceDefinition_Material;
class DeviceMetric;
class DeviceMetric_Calibration;
class DeviceRequest;
class DeviceRequest_Parameter;
class DeviceUseStatement;
class DiagnosticReport;
class DiagnosticReport_Media;
class DocumentManifest;
class DocumentManifest_Related;
class DocumentReference;
class DocumentReference_RelatesTo;
class DocumentReference_Content;
class DocumentReference_Context;
class DomainResource;
class EffectEvidenceSynthesis;
class EffectEvidenceSynthesis_SampleSize;
class EffectEvidenceSynthesis_ResultsByExposure;
class EffectEvidenceSynthesis_EffectEstimate;
class EffectEvidenceSynthesis_EffectEstimate_PrecisionEstimate;
class EffectEvidenceSynthesis_Certainty;
class EffectEvidenceSynthesis_Certainty_CertaintySubcomponent;
class Encounter;
class Encounter_StatusHistory;
class Encounter_ClassHistory;
class Encounter_Participant;
class Encounter_Diagnosis;
class Encounter_Hospitalization;
class Encounter_Location;
class Endpoint;
class EnrollmentRequest;
class EnrollmentResponse;
class EpisodeOfCare;
class EpisodeOfCare_StatusHistory;
class EpisodeOfCare_Diagnosis;
class EventDefinition;
class Evidence;
class EvidenceVariable;
class EvidenceVariable_Characteristic;
class ExampleScenario;
class ExampleScenario_Actor;
class ExampleScenario_Instance;
class ExampleScenario_Instance_Version;
class ExampleScenario_Instance_ContainedInstance;
class ExampleScenario_Process;
class ExampleScenario_Process_Step;
class ExampleScenario_Process_Step_Operation;
class ExampleScenario_Process_Step_Alternative;
class ExplanationOfBenefit;
class ExplanationOfBenefit_Related;
class ExplanationOfBenefit_Payee;
class ExplanationOfBenefit_CareTeam;
class ExplanationOfBenefit_SupportingInfo;
class ExplanationOfBenefit_Diagnosis;
class ExplanationOfBenefit_Procedure;
class ExplanationOfBenefit_Insurance;
class ExplanationOfBenefit_Accident;
class ExplanationOfBenefit_Item;
class ExplanationOfBenefit_Item_Adjudication;
class ExplanationOfBenefit_Item_Detail;
class ExplanationOfBenefit_Item_Detail_SubDetail;
class ExplanationOfBenefit_AddItem;
class ExplanationOfBenefit_AddItem_Detail;
class ExplanationOfBenefit_AddItem_Detail_SubDetail;
class ExplanationOfBenefit_Total;
class ExplanationOfBenefit_Payment;
class ExplanationOfBenefit_ProcessNote;
class ExplanationOfBenefit_BenefitBalance;
class ExplanationOfBenefit_BenefitBalance_Financial;
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
class HealthcareService_Eligibility;
class HealthcareService_AvailableTime;
class HealthcareService_NotAvailable;
class ImagingStudy;
class ImagingStudy_Series;
class ImagingStudy_Series_Performer;
class ImagingStudy_Series_Instance;
class Immunization;
class Immunization_Performer;
class Immunization_Education;
class Immunization_Reaction;
class Immunization_ProtocolApplied;
class ImmunizationEvaluation;
class ImmunizationRecommendation;
class ImmunizationRecommendation_Recommendation;
class ImmunizationRecommendation_Recommendation_DateCriterion;
class ImplementationGuide;
class ImplementationGuide_DependsOn;
class ImplementationGuide_Global;
class ImplementationGuide_Definition;
class ImplementationGuide_Definition_Grouping;
class ImplementationGuide_Definition_Resource;
class ImplementationGuide_Definition_Page;
class ImplementationGuide_Definition_Parameter;
class ImplementationGuide_Definition_Template;
class ImplementationGuide_Manifest;
class ImplementationGuide_Manifest_Resource;
class ImplementationGuide_Manifest_Page;
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
class Invoice_Participant;
class Invoice_LineItem;
class Invoice_LineItem_PriceComponent;
class Library;
class Linkage;
class Linkage_Item;
class List;
class List_Entry;
class Location;
class Location_Position;
class Location_HoursOfOperation;
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
class Medication_Ingredient;
class Medication_Batch;
class MedicationAdministration;
class MedicationAdministration_Performer;
class MedicationAdministration_Dosage;
class MedicationDispense;
class MedicationDispense_Performer;
class MedicationDispense_Substitution;
class MedicationKnowledge;
class MedicationKnowledge_RelatedMedicationKnowledge;
class MedicationKnowledge_Monograph;
class MedicationKnowledge_Ingredient;
class MedicationKnowledge_Cost;
class MedicationKnowledge_MonitoringProgram;
class MedicationKnowledge_AdministrationGuidelines;
class MedicationKnowledge_AdministrationGuidelines_Dosage;
class MedicationKnowledge_AdministrationGuidelines_PatientCharacteristics;
class MedicationKnowledge_MedicineClassification;
class MedicationKnowledge_Packaging;
class MedicationKnowledge_DrugCharacteristic;
class MedicationKnowledge_Regulatory;
class MedicationKnowledge_Regulatory_Substitution;
class MedicationKnowledge_Regulatory_Schedule;
class MedicationKnowledge_Regulatory_MaxDispense;
class MedicationKnowledge_Kinetics;
class MedicationRequest;
class MedicationRequest_DispenseRequest;
class MedicationRequest_DispenseRequest_InitialFill;
class MedicationRequest_Substitution;
class MedicationStatement;
class MedicinalProduct;
class MedicinalProduct_Name;
class MedicinalProduct_Name_NamePart;
class MedicinalProduct_Name_CountryLanguage;
class MedicinalProduct_ManufacturingBusinessOperation;
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
class MessageDefinition_Focus;
class MessageDefinition_AllowedResponse;
class MessageHeader;
class MessageHeader_Destination;
class MessageHeader_Source;
class MessageHeader_Response;
class MolecularSequence;
class MolecularSequence_ReferenceSeq;
class MolecularSequence_Variant;
class MolecularSequence_Quality;
class MolecularSequence_Quality_Roc;
class MolecularSequence_Repository;
class MolecularSequence_StructureVariant;
class MolecularSequence_StructureVariant_Outer;
class MolecularSequence_StructureVariant_Inner;
class NamingSystem;
class NamingSystem_UniqueId;
class NutritionOrder;
class NutritionOrder_OralDiet;
class NutritionOrder_OralDiet_Nutrient;
class NutritionOrder_OralDiet_Texture;
class NutritionOrder_Supplement;
class NutritionOrder_EnteralFormula;
class NutritionOrder_EnteralFormula_Administration;
class Observation;
class Observation_ReferenceRange;
class Observation_Component;
class ObservationDefinition;
class ObservationDefinition_QuantitativeDetails;
class ObservationDefinition_QualifiedInterval;
class OperationDefinition;
class OperationDefinition_Parameter;
class OperationDefinition_Parameter_Binding;
class OperationDefinition_Parameter_ReferencedFrom;
class OperationDefinition_Overload;
class OperationOutcome;
class OperationOutcome_Issue;
class Organization;
class Organization_Contact;
class OrganizationAffiliation;
class Parameters;
class Parameters_Parameter;
class Patient;
class Patient_Contact;
class Patient_Communication;
class Patient_Link;
class PaymentNotice;
class PaymentReconciliation;
class PaymentReconciliation_Detail;
class PaymentReconciliation_ProcessNote;
class Person;
class Person_Link;
class PlanDefinition;
class PlanDefinition_Goal;
class PlanDefinition_Goal_Target;
class PlanDefinition_Action;
class PlanDefinition_Action_Condition;
class PlanDefinition_Action_RelatedAction;
class PlanDefinition_Action_Participant;
class PlanDefinition_Action_DynamicValue;
class Practitioner;
class Practitioner_Qualification;
class PractitionerRole;
class PractitionerRole_AvailableTime;
class PractitionerRole_NotAvailable;
class Procedure;
class Procedure_Performer;
class Procedure_FocalDevice;
class Provenance;
class Provenance_Agent;
class Provenance_Entity;
class Questionnaire;
class Questionnaire_Item;
class Questionnaire_Item_EnableWhen;
class Questionnaire_Item_AnswerOption;
class Questionnaire_Item_Initial;
class QuestionnaireResponse;
class QuestionnaireResponse_Item;
class QuestionnaireResponse_Item_Answer;
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
class RiskAssessment;
class RiskAssessment_Prediction;
class RiskEvidenceSynthesis;
class RiskEvidenceSynthesis_SampleSize;
class RiskEvidenceSynthesis_RiskEstimate;
class RiskEvidenceSynthesis_RiskEstimate_PrecisionEstimate;
class RiskEvidenceSynthesis_Certainty;
class RiskEvidenceSynthesis_Certainty_CertaintySubcomponent;
class Schedule;
class SearchParameter;
class SearchParameter_Component;
class ServiceRequest;
class Slot;
class Specimen;
class Specimen_Collection;
class Specimen_Processing;
class Specimen_Container;
class SpecimenDefinition;
class SpecimenDefinition_TypeTested;
class SpecimenDefinition_TypeTested_Container;
class SpecimenDefinition_TypeTested_Container_Additive;
class SpecimenDefinition_TypeTested_Handling;
class StructureDefinition;
class StructureDefinition_Mapping;
class StructureDefinition_Context;
class StructureDefinition_Snapshot;
class StructureDefinition_Differential;
class StructureMap;
class StructureMap_Structure;
class StructureMap_Group;
class StructureMap_Group_Input;
class StructureMap_Group_Rule;
class StructureMap_Group_Rule_Source;
class StructureMap_Group_Rule_Target;
class StructureMap_Group_Rule_Target_Parameter;
class StructureMap_Group_Rule_Dependent;
class Subscription;
class Subscription_Channel;
class Substance;
class Substance_Instance;
class Substance_Ingredient;
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
class SubstanceReferenceInformation_Gene;
class SubstanceReferenceInformation_GeneElement;
class SubstanceReferenceInformation_Classification;
class SubstanceReferenceInformation_Target;
class SubstanceSourceMaterial;
class SubstanceSourceMaterial_FractionDescription;
class SubstanceSourceMaterial_Organism;
class SubstanceSourceMaterial_Organism_Author;
class SubstanceSourceMaterial_Organism_Hybrid;
class SubstanceSourceMaterial_Organism_OrganismGeneral;
class SubstanceSourceMaterial_PartDescription;
class SubstanceSpecification;
class SubstanceSpecification_Moiety;
class SubstanceSpecification_Property;
class SubstanceSpecification_Structure;
class SubstanceSpecification_Structure_Isotope;
class SubstanceSpecification_Structure_Isotope_MolecularWeight;
class SubstanceSpecification_Structure_Representation;
class SubstanceSpecification_Code;
class SubstanceSpecification_Name;
class SubstanceSpecification_Name_Official;
class SubstanceSpecification_Relationship;
class SupplyDelivery;
class SupplyDelivery_SuppliedItem;
class SupplyRequest;
class SupplyRequest_Parameter;
class Task;
class Task_Restriction;
class Task_Input;
class Task_Output;
class TerminologyCapabilities;
class TerminologyCapabilities_Software;
class TerminologyCapabilities_Implementation;
class TerminologyCapabilities_CodeSystem;
class TerminologyCapabilities_CodeSystem_Version;
class TerminologyCapabilities_CodeSystem_Version_Filter;
class TerminologyCapabilities_Expansion;
class TerminologyCapabilities_Expansion_Parameter;
class TerminologyCapabilities_ValidateCode;
class TerminologyCapabilities_Translation;
class TerminologyCapabilities_Closure;
class TestReport;
class TestReport_Participant;
class TestReport_Setup;
class TestReport_Setup_Action;
class TestReport_Setup_Action_Operation;
class TestReport_Setup_Action_Assert;
class TestReport_Test;
class TestReport_Test_Action;
class TestReport_Teardown;
class TestReport_Teardown_Action;
class TestScript;
class TestScript_Origin;
class TestScript_Destination;
class TestScript_Metadata;
class TestScript_Metadata_Link;
class TestScript_Metadata_Capability;
class TestScript_Fixture;
class TestScript_Variable;
class TestScript_Setup;
class TestScript_Setup_Action;
class TestScript_Setup_Action_Operation;
class TestScript_Setup_Action_Operation_RequestHeader;
class TestScript_Setup_Action_Assert;
class TestScript_Test;
class TestScript_Test_Action;
class TestScript_Teardown;
class TestScript_Teardown_Action;
class ValueSet;
class ValueSet_Compose;
class ValueSet_Compose_Include;
class ValueSet_Compose_Include_Concept;
class ValueSet_Compose_Include_Concept_Designation;
class ValueSet_Compose_Include_Filter;
class ValueSet_Expansion;
class ValueSet_Expansion_Parameter;
class ValueSet_Expansion_Contains;
class VerificationResult;
class VerificationResult_PrimarySource;
class VerificationResult_Attestation;
class VerificationResult_Validator;
class VisionPrescription;
class VisionPrescription_LensSpecification;
class VisionPrescription_LensSpecification_Prism;
class MetadataResource;
class Element;
class BackboneElement;
class base64Binary;
class boolean;
class canonical;
class code;
class date;
class dateTime;
class decimal;
class id;
class instant;
class integer;
class markdown;
class oid;
class positiveInt;
class string;
class time;
class unsignedInt;
class uri;
class url;
class uuid;
class xhtml;
class Address;
class Age;
class Annotation;
class Attachment;
class CodeableConcept;
class Coding;
class ContactDetail;
class ContactPoint;
class Contributor;
class Count;
class DataRequirement;
class DataRequirement_CodeFilter;
class DataRequirement_DateFilter;
class DataRequirement_Sort;
class Distance;
class Dosage;
class Dosage_DoseAndRate;
class Duration;
class ElementDefinition;
class ElementDefinition_Slicing;
class ElementDefinition_Slicing_Discriminator;
class ElementDefinition_Base;
class ElementDefinition_Type;
class ElementDefinition_Example;
class ElementDefinition_Constraint;
class ElementDefinition_Binding;
class ElementDefinition_Mapping;
class Expression;
class Extension;
class HumanName;
class Identifier;
class MarketingStatus;
class Meta;
class Money;
class Narrative;
class ParameterDefinition;
class Period;
class Population;
class ProdCharacteristic;
class ProductShelfLife;
class Quantity;
class Range;
class Ratio;
class Reference;
class RelatedArtifact;
class SampledData;
class Signature;
class SubstanceAmount;
class SubstanceAmount_ReferenceRange;
class Timing;
class Timing_Repeat;
class TriggerDefinition;
class UsageContext;
class MoneyQuantity;
class SimpleQuantity;
class shareablemeasure;
class servicerequest_genetics;
class groupdefinition;
class actualgroup;
class familymemberhistory_genetic;
class shareableactivitydefinition;
class cdshooksrequestgroup;
class provenance_relevant_history;
class cqf_questionnaire;
class shareablevalueset;
class picoelement;
class shareablecodesystem;
class cdshooksguidanceresponse;
class devicemetricobservation;
class observation_genetics;
class vitalsigns;
class bodyweight;
class vitalspanel;
class bodyheight;
class resprate;
class heartrate;
class bodytemp;
class headcircum;
class oxygensat;
class bmi;
class bp;
class shareablelibrary;
class cqllibrary;
class lipidprofile;
class cholesterol;
class triglyceride;
class hdlcholesterol;
class ldlcholesterol;
class diagnosticreport_genetics;
class hlaresult;
class synthesis;
class clinicaldocument;
class catalog;
class shareableplandefinition;
class computableplandefinition;
class cdshooksserviceplandefinition;
class elementdefinition_de;
class ehrsrle_auditevent;
class ehrsrle_provenance;
class Resource {
public:
	fhir_string id;
	Meta* meta;
	fhir_uri implicitRules;
	fhir_code language;
};
class Account {
public:
	fhir_string id;
	Meta* meta;
	fhir_uri implicitRules;
	fhir_code language;
	Narrative* text;
	int contained_count;
	Resource* contained;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	int identifier_count;
	Identifier* identifier;
	fhir_code status;
	CodeableConcept* type;
	fhir_string name;
	int subject_count;
	Reference* subject;
	Period* servicePeriod;
	int coverage_count;
	Account_Coverage* coverage;
	Reference* owner;
	fhir_string description;
	int guarantor_count;
	Account_Guarantor* guarantor;
	Reference* partOf;
};
class Account_Coverage {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	Reference* coverage;
	fhir_positiveInt priority;
};
class Account_Guarantor {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	Reference* party;
	fhir_boolean onHold;
	Period* period;
};
class ActivityDefinition {
public:
	fhir_string id;
	Meta* meta;
	fhir_uri implicitRules;
	fhir_code language;
	Narrative* text;
	int contained_count;
	Resource* contained;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	fhir_uri url;
	int identifier_count;
	Identifier* identifier;
	fhir_string version;
	fhir_string name;
	fhir_string title;
	fhir_string subtitle;
	fhir_code status;
	fhir_boolean experimental;
	enum class Subject {
		CodeableConcept,
		Reference
	} subject_type;
	union {
		CodeableConcept* _codeableConcept;
		Reference* _reference;
	} subject;

	fhir_dateTime date;
	fhir_string publisher;
	int contact_count;
	ContactDetail* contact;
	fhir_markdown description;
	int useContext_count;
	UsageContext* useContext;
	int jurisdiction_count;
	CodeableConcept* jurisdiction;
	fhir_markdown purpose;
	fhir_string usage;
	fhir_markdown copyright;
	fhir_date approvalDate;
	fhir_date lastReviewDate;
	Period* effectivePeriod;
	int topic_count;
	CodeableConcept* topic;
	int author_count;
	ContactDetail* author;
	int editor_count;
	ContactDetail* editor;
	int reviewer_count;
	ContactDetail* reviewer;
	int endorser_count;
	ContactDetail* endorser;
	int relatedArtifact_count;
	RelatedArtifact* relatedArtifact;
	int library_count;
	fhir_canonical library;
	fhir_code kind;
	fhir_canonical profile;
	CodeableConcept* code;
	fhir_code intent;
	fhir_code priority;
	fhir_boolean doNotPerform;
	enum class Timing {
		Timing,
		fhir_dateTime,
		Age,
		Period,
		Range,
		Duration
	} timing_type;
	union {
		Timing* _timing;
		fhir_dateTime _fhir_dateTime;
		Age* _age;
		Period* _period;
		Range* _range;
		Duration* _duration;
	} timing;

	Reference* location;
	int participant_count;
	ActivityDefinition_Participant* participant;
	enum class Product {
		Reference,
		CodeableConcept
	} product_type;
	union {
		Reference* _reference;
		CodeableConcept* _codeableConcept;
	} product;

	Quantity* quantity;
	int dosage_count;
	Dosage* dosage;
	int bodySite_count;
	CodeableConcept* bodySite;
	int specimenRequirement_count;
	Reference* specimenRequirement;
	int observationRequirement_count;
	Reference* observationRequirement;
	int observationResultRequirement_count;
	Reference* observationResultRequirement;
	fhir_canonical transform;
	int dynamicValue_count;
	ActivityDefinition_DynamicValue* dynamicValue;
};
class ActivityDefinition_Participant {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	fhir_code type;
	CodeableConcept* role;
};
class ActivityDefinition_DynamicValue {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	fhir_string path;
	Expression* expression;
};
class AdverseEvent {
public:
	fhir_string id;
	Meta* meta;
	fhir_uri implicitRules;
	fhir_code language;
	Narrative* text;
	int contained_count;
	Resource* contained;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	Identifier* identifier;
	fhir_code actuality;
	int category_count;
	CodeableConcept* category;
	CodeableConcept* event;
	Reference* subject;
	Reference* encounter;
	fhir_dateTime date;
	fhir_dateTime detected;
	fhir_dateTime recordedDate;
	int resultingCondition_count;
	Reference* resultingCondition;
	Reference* location;
	CodeableConcept* seriousness;
	CodeableConcept* severity;
	CodeableConcept* outcome;
	Reference* recorder;
	int contributor_count;
	Reference* contributor;
	int suspectEntity_count;
	AdverseEvent_SuspectEntity* suspectEntity;
	int subjectMedicalHistory_count;
	Reference* subjectMedicalHistory;
	int referenceDocument_count;
	Reference* referenceDocument;
	int study_count;
	Reference* study;
};
class AdverseEvent_SuspectEntity {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	Reference* instance;
	int causality_count;
	AdverseEvent_SuspectEntity_Causality* causality;
};
class AdverseEvent_SuspectEntity_Causality {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	CodeableConcept* assessment;
	fhir_string productRelatedness;
	Reference* author;
	CodeableConcept* method;
};
class AllergyIntolerance {
public:
	fhir_string id;
	Meta* meta;
	fhir_uri implicitRules;
	fhir_code language;
	Narrative* text;
	int contained_count;
	Resource* contained;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	int identifier_count;
	Identifier* identifier;
	CodeableConcept* clinicalStatus;
	CodeableConcept* verificationStatus;
	fhir_code type;
	int category_count;
	fhir_code category;
	fhir_code criticality;
	CodeableConcept* code;
	Reference* patient;
	Reference* encounter;
	enum class Onset {
		fhir_dateTime,
		Age,
		Period,
		Range,
		fhir_string
	} onset_type;
	union {
		fhir_dateTime _fhir_dateTime;
		Age* _age;
		Period* _period;
		Range* _range;
		fhir_string _fhir_string;
	} onset;

	fhir_dateTime recordedDate;
	Reference* recorder;
	Reference* asserter;
	fhir_dateTime lastOccurrence;
	int note_count;
	Annotation* note;
	int reaction_count;
	AllergyIntolerance_Reaction* reaction;
};
class AllergyIntolerance_Reaction {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	CodeableConcept* substance;
	int manifestation_count;
	CodeableConcept* manifestation;
	fhir_string description;
	fhir_dateTime onset;
	fhir_code severity;
	CodeableConcept* exposureRoute;
	int note_count;
	Annotation* note;
};
class Appointment {
public:
	fhir_string id;
	Meta* meta;
	fhir_uri implicitRules;
	fhir_code language;
	Narrative* text;
	int contained_count;
	Resource* contained;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	int identifier_count;
	Identifier* identifier;
	fhir_code status;
	CodeableConcept* cancelationReason;
	int serviceCategory_count;
	CodeableConcept* serviceCategory;
	int serviceType_count;
	CodeableConcept* serviceType;
	int specialty_count;
	CodeableConcept* specialty;
	CodeableConcept* appointmentType;
	int reasonCode_count;
	CodeableConcept* reasonCode;
	int reasonReference_count;
	Reference* reasonReference;
	fhir_unsignedInt priority;
	fhir_string description;
	int supportingInformation_count;
	Reference* supportingInformation;
	fhir_instant start;
	fhir_instant end;
	fhir_positiveInt minutesDuration;
	int slot_count;
	Reference* slot;
	fhir_dateTime created;
	fhir_string comment;
	fhir_string patientInstruction;
	int basedOn_count;
	Reference* basedOn;
	int participant_count;
	Appointment_Participant* participant;
	int requestedPeriod_count;
	Period* requestedPeriod;
};
class Appointment_Participant {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	int type_count;
	CodeableConcept* type;
	Reference* actor;
	fhir_code required;
	fhir_code status;
	Period* period;
};
class AppointmentResponse {
public:
	fhir_string id;
	Meta* meta;
	fhir_uri implicitRules;
	fhir_code language;
	Narrative* text;
	int contained_count;
	Resource* contained;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	int identifier_count;
	Identifier* identifier;
	Reference* appointment;
	fhir_instant start;
	fhir_instant end;
	int participantType_count;
	CodeableConcept* participantType;
	Reference* actor;
	fhir_code participantStatus;
	fhir_string comment;
};
class AuditEvent {
public:
	fhir_string id;
	Meta* meta;
	fhir_uri implicitRules;
	fhir_code language;
	Narrative* text;
	int contained_count;
	Resource* contained;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	Coding* type;
	int subtype_count;
	Coding* subtype;
	fhir_code action;
	Period* period;
	fhir_instant recorded;
	fhir_code outcome;
	fhir_string outcomeDesc;
	int purposeOfEvent_count;
	CodeableConcept* purposeOfEvent;
	int agent_count;
	AuditEvent_Agent* agent;
	AuditEvent_Source* source;
	int entity_count;
	AuditEvent_Entity* entity;
};
class AuditEvent_Agent {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	CodeableConcept* type;
	int role_count;
	CodeableConcept* role;
	Reference* who;
	fhir_string altId;
	fhir_string name;
	fhir_boolean requestor;
	Reference* location;
	int policy_count;
	fhir_uri policy;
	Coding* media;
	AuditEvent_Agent_Network* network;
	int purposeOfUse_count;
	CodeableConcept* purposeOfUse;
};
class AuditEvent_Agent_Network {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	fhir_string address;
	fhir_code type;
};
class AuditEvent_Source {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	fhir_string site;
	Reference* observer;
	int type_count;
	Coding* type;
};
class AuditEvent_Entity {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	Reference* what;
	Coding* type;
	Coding* role;
	Coding* lifecycle;
	int securityLabel_count;
	Coding* securityLabel;
	fhir_string name;
	fhir_string description;
	fhir_base64Binary query;
	int detail_count;
	AuditEvent_Entity_Detail* detail;
};
class AuditEvent_Entity_Detail {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	fhir_string type;
	enum class Value {
		fhir_string,
		fhir_base64Binary
	} value_type;
	union {
		fhir_string _fhir_string;
		fhir_base64Binary _fhir_base64Binary;
	} value;

};
class Basic {
public:
	fhir_string id;
	Meta* meta;
	fhir_uri implicitRules;
	fhir_code language;
	Narrative* text;
	int contained_count;
	Resource* contained;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	int identifier_count;
	Identifier* identifier;
	CodeableConcept* code;
	Reference* subject;
	fhir_date created;
	Reference* author;
};
class Binary {
public:
	fhir_string id;
	Meta* meta;
	fhir_uri implicitRules;
	fhir_code language;
	fhir_code contentType;
	Reference* securityContext;
	fhir_base64Binary data;
};
class BiologicallyDerivedProduct {
public:
	fhir_string id;
	Meta* meta;
	fhir_uri implicitRules;
	fhir_code language;
	Narrative* text;
	int contained_count;
	Resource* contained;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	int identifier_count;
	Identifier* identifier;
	fhir_code productCategory;
	CodeableConcept* productCode;
	fhir_code status;
	int request_count;
	Reference* request;
	integer* quantity;
	int parent_count;
	Reference* parent;
	BiologicallyDerivedProduct_Collection* collection;
	int processing_count;
	BiologicallyDerivedProduct_Processing* processing;
	BiologicallyDerivedProduct_Manipulation* manipulation;
	int storage_count;
	BiologicallyDerivedProduct_Storage* storage;
};
class BiologicallyDerivedProduct_Collection {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	Reference* collector;
	Reference* source;
	enum class Collected {
		fhir_dateTime,
		Period
	} collected_type;
	union {
		fhir_dateTime _fhir_dateTime;
		Period* _period;
	} collected;

};
class BiologicallyDerivedProduct_Processing {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	fhir_string description;
	CodeableConcept* procedure;
	Reference* additive;
	enum class Time {
		fhir_dateTime,
		Period
	} time_type;
	union {
		fhir_dateTime _fhir_dateTime;
		Period* _period;
	} time;

};
class BiologicallyDerivedProduct_Manipulation {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	fhir_string description;
	enum class Time {
		fhir_dateTime,
		Period
	} time_type;
	union {
		fhir_dateTime _fhir_dateTime;
		Period* _period;
	} time;

};
class BiologicallyDerivedProduct_Storage {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	fhir_string description;
	fhir_decimal temperature;
	fhir_code scale;
	Period* duration;
};
class BodyStructure {
public:
	fhir_string id;
	Meta* meta;
	fhir_uri implicitRules;
	fhir_code language;
	Narrative* text;
	int contained_count;
	Resource* contained;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	int identifier_count;
	Identifier* identifier;
	fhir_boolean active;
	CodeableConcept* morphology;
	CodeableConcept* location;
	int locationQualifier_count;
	CodeableConcept* locationQualifier;
	fhir_string description;
	int image_count;
	Attachment* image;
	Reference* patient;
};
class Bundle {
public:
	fhir_string id;
	Meta* meta;
	fhir_uri implicitRules;
	fhir_code language;
	Identifier* identifier;
	fhir_code type;
	fhir_instant timestamp;
	fhir_unsignedInt total;
	int link_count;
	Bundle_Link* link;
	int entry_count;
	Bundle_Entry* entry;
	Signature* signature;
};
class Bundle_Link {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	fhir_string relation;
	fhir_uri url;
};
class Bundle_Entry {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	int link_count;
	Bundle_Link* link;
	fhir_uri fullUrl;
	Resource* resource;
	Bundle_Entry_Search* search;
	Bundle_Entry_Request* request;
	Bundle_Entry_Response* response;
};
class Bundle_Entry_Search {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	fhir_code mode;
	fhir_decimal score;
};
class Bundle_Entry_Request {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	fhir_code method;
	fhir_uri url;
	fhir_string ifNoneMatch;
	fhir_instant ifModifiedSince;
	fhir_string ifMatch;
	fhir_string ifNoneExist;
};
class Bundle_Entry_Response {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	fhir_string status;
	fhir_uri location;
	fhir_string etag;
	fhir_instant lastModified;
	Resource* outcome;
};
class CapabilityStatement {
public:
	fhir_string id;
	Meta* meta;
	fhir_uri implicitRules;
	fhir_code language;
	Narrative* text;
	int contained_count;
	Resource* contained;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	fhir_uri url;
	fhir_string version;
	fhir_string name;
	fhir_string title;
	fhir_code status;
	fhir_boolean experimental;
	fhir_dateTime date;
	fhir_string publisher;
	int contact_count;
	ContactDetail* contact;
	fhir_markdown description;
	int useContext_count;
	UsageContext* useContext;
	int jurisdiction_count;
	CodeableConcept* jurisdiction;
	fhir_markdown purpose;
	fhir_markdown copyright;
	fhir_code kind;
	int instantiates_count;
	fhir_canonical instantiates;
	int imports_count;
	fhir_canonical imports;
	CapabilityStatement_Software* software;
	CapabilityStatement_Implementation* implementation;
	fhir_code fhirVersion;
	int format_count;
	fhir_code format;
	int patchFormat_count;
	fhir_code patchFormat;
	int implementationGuide_count;
	fhir_canonical implementationGuide;
	int rest_count;
	CapabilityStatement_Rest* rest;
	int messaging_count;
	CapabilityStatement_Messaging* messaging;
	int document_count;
	CapabilityStatement_Document* document;
};
class CapabilityStatement_Software {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	fhir_string name;
	fhir_string version;
	fhir_dateTime releaseDate;
};
class CapabilityStatement_Implementation {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	fhir_string description;
	fhir_url url;
	Reference* custodian;
};
class CapabilityStatement_Rest {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	fhir_code mode;
	fhir_markdown documentation;
	CapabilityStatement_Rest_Security* security;
	int resource_count;
	CapabilityStatement_Rest_Resource* resource;
	int interaction_count;
	CapabilityStatement_Rest_Interaction* interaction;
	int searchParam_count;
	CapabilityStatement_Rest_Resource_SearchParam* searchParam;
	int operation_count;
	CapabilityStatement_Rest_Resource_Operation* operation;
	int compartment_count;
	fhir_canonical compartment;
};
class CapabilityStatement_Rest_Security {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	fhir_boolean cors;
	int service_count;
	CodeableConcept* service;
	fhir_markdown description;
};
class CapabilityStatement_Rest_Resource {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	fhir_code type;
	fhir_canonical profile;
	int supportedProfile_count;
	fhir_canonical supportedProfile;
	fhir_markdown documentation;
	int interaction_count;
	CapabilityStatement_Rest_Resource_Interaction* interaction;
	fhir_code versioning;
	fhir_boolean readHistory;
	fhir_boolean updateCreate;
	fhir_boolean conditionalCreate;
	fhir_code conditionalRead;
	fhir_boolean conditionalUpdate;
	fhir_code conditionalDelete;
	int referencePolicy_count;
	fhir_code referencePolicy;
	int searchInclude_count;
	fhir_string searchInclude;
	int searchRevInclude_count;
	fhir_string searchRevInclude;
	int searchParam_count;
	CapabilityStatement_Rest_Resource_SearchParam* searchParam;
	int operation_count;
	CapabilityStatement_Rest_Resource_Operation* operation;
};
class CapabilityStatement_Rest_Resource_Interaction {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	fhir_code code;
	fhir_markdown documentation;
};
class CapabilityStatement_Rest_Resource_SearchParam {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	fhir_string name;
	fhir_canonical definition;
	fhir_code type;
	fhir_markdown documentation;
};
class CapabilityStatement_Rest_Resource_Operation {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	fhir_string name;
	fhir_canonical definition;
	fhir_markdown documentation;
};
class CapabilityStatement_Rest_Interaction {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	fhir_code code;
	fhir_markdown documentation;
};
class CapabilityStatement_Messaging {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	int endpoint_count;
	CapabilityStatement_Messaging_Endpoint* endpoint;
	fhir_unsignedInt reliableCache;
	fhir_markdown documentation;
	int supportedMessage_count;
	CapabilityStatement_Messaging_SupportedMessage* supportedMessage;
};
class CapabilityStatement_Messaging_Endpoint {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	Coding* protocol;
	fhir_url address;
};
class CapabilityStatement_Messaging_SupportedMessage {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	fhir_code mode;
	fhir_canonical definition;
};
class CapabilityStatement_Document {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	fhir_code mode;
	fhir_markdown documentation;
	fhir_canonical profile;
};
class CarePlan {
public:
	fhir_string id;
	Meta* meta;
	fhir_uri implicitRules;
	fhir_code language;
	Narrative* text;
	int contained_count;
	Resource* contained;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	int identifier_count;
	Identifier* identifier;
	int instantiatesCanonical_count;
	fhir_canonical instantiatesCanonical;
	int instantiatesUri_count;
	fhir_uri instantiatesUri;
	int basedOn_count;
	Reference* basedOn;
	int replaces_count;
	Reference* replaces;
	int partOf_count;
	Reference* partOf;
	fhir_code status;
	fhir_code intent;
	int category_count;
	CodeableConcept* category;
	fhir_string title;
	fhir_string description;
	Reference* subject;
	Reference* encounter;
	Period* period;
	fhir_dateTime created;
	Reference* author;
	int contributor_count;
	Reference* contributor;
	int careTeam_count;
	Reference* careTeam;
	int addresses_count;
	Reference* addresses;
	int supportingInfo_count;
	Reference* supportingInfo;
	int goal_count;
	Reference* goal;
	int activity_count;
	CarePlan_Activity* activity;
	int note_count;
	Annotation* note;
};
class CarePlan_Activity {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	int outcomeCodeableConcept_count;
	CodeableConcept* outcomeCodeableConcept;
	int outcomeReference_count;
	Reference* outcomeReference;
	int progress_count;
	Annotation* progress;
	Reference* reference;
	CarePlan_Activity_Detail* detail;
};
class CarePlan_Activity_Detail {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	fhir_code kind;
	int instantiatesCanonical_count;
	fhir_canonical instantiatesCanonical;
	int instantiatesUri_count;
	fhir_uri instantiatesUri;
	CodeableConcept* code;
	int reasonCode_count;
	CodeableConcept* reasonCode;
	int reasonReference_count;
	Reference* reasonReference;
	int goal_count;
	Reference* goal;
	fhir_code status;
	CodeableConcept* statusReason;
	fhir_boolean doNotPerform;
	enum class Scheduled {
		Timing,
		Period,
		fhir_string
	} scheduled_type;
	union {
		Timing* _timing;
		Period* _period;
		fhir_string _fhir_string;
	} scheduled;

	Reference* location;
	int performer_count;
	Reference* performer;
	enum class Product {
		CodeableConcept,
		Reference
	} product_type;
	union {
		CodeableConcept* _codeableConcept;
		Reference* _reference;
	} product;

	Quantity* dailyAmount;
	Quantity* quantity;
	fhir_string description;
};
class CareTeam {
public:
	fhir_string id;
	Meta* meta;
	fhir_uri implicitRules;
	fhir_code language;
	Narrative* text;
	int contained_count;
	Resource* contained;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	int identifier_count;
	Identifier* identifier;
	fhir_code status;
	int category_count;
	CodeableConcept* category;
	fhir_string name;
	Reference* subject;
	Reference* encounter;
	Period* period;
	int participant_count;
	CareTeam_Participant* participant;
	int reasonCode_count;
	CodeableConcept* reasonCode;
	int reasonReference_count;
	Reference* reasonReference;
	int managingOrganization_count;
	Reference* managingOrganization;
	int telecom_count;
	ContactPoint* telecom;
	int note_count;
	Annotation* note;
};
class CareTeam_Participant {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	int role_count;
	CodeableConcept* role;
	Reference* member;
	Reference* onBehalfOf;
	Period* period;
};
class CatalogEntry {
public:
	fhir_string id;
	Meta* meta;
	fhir_uri implicitRules;
	fhir_code language;
	Narrative* text;
	int contained_count;
	Resource* contained;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	int identifier_count;
	Identifier* identifier;
	CodeableConcept* type;
	fhir_boolean orderable;
	Reference* referencedItem;
	int additionalIdentifier_count;
	Identifier* additionalIdentifier;
	int classification_count;
	CodeableConcept* classification;
	fhir_code status;
	Period* validityPeriod;
	fhir_dateTime validTo;
	fhir_dateTime lastUpdated;
	int additionalCharacteristic_count;
	CodeableConcept* additionalCharacteristic;
	int additionalClassification_count;
	CodeableConcept* additionalClassification;
	int relatedEntry_count;
	CatalogEntry_RelatedEntry* relatedEntry;
};
class CatalogEntry_RelatedEntry {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	fhir_code relationtype;
	Reference* item;
};
class ChargeItem {
public:
	fhir_string id;
	Meta* meta;
	fhir_uri implicitRules;
	fhir_code language;
	Narrative* text;
	int contained_count;
	Resource* contained;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	int identifier_count;
	Identifier* identifier;
	int definitionUri_count;
	fhir_uri definitionUri;
	int definitionCanonical_count;
	fhir_canonical definitionCanonical;
	fhir_code status;
	int partOf_count;
	Reference* partOf;
	CodeableConcept* code;
	Reference* subject;
	Reference* context;
	enum class Occurrence {
		fhir_dateTime,
		Period,
		Timing
	} occurrence_type;
	union {
		fhir_dateTime _fhir_dateTime;
		Period* _period;
		Timing* _timing;
	} occurrence;

	int performer_count;
	ChargeItem_Performer* performer;
	Reference* performingOrganization;
	Reference* requestingOrganization;
	Reference* costCenter;
	Quantity* quantity;
	int bodysite_count;
	CodeableConcept* bodysite;
	fhir_decimal factorOverride;
	Money* priceOverride;
	fhir_string overrideReason;
	Reference* enterer;
	fhir_dateTime enteredDate;
	int reason_count;
	CodeableConcept* reason;
	int service_count;
	Reference* service;
	enum class Product {
		Reference,
		CodeableConcept
	} product_type;
	union {
		Reference* _reference;
		CodeableConcept* _codeableConcept;
	} product;

	int account_count;
	Reference* account;
	int note_count;
	Annotation* note;
	int supportingInformation_count;
	Reference* supportingInformation;
};
class ChargeItem_Performer {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	CodeableConcept* function;
	Reference* actor;
};
class ChargeItemDefinition {
public:
	fhir_string id;
	Meta* meta;
	fhir_uri implicitRules;
	fhir_code language;
	Narrative* text;
	int contained_count;
	Resource* contained;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	fhir_uri url;
	int identifier_count;
	Identifier* identifier;
	fhir_string version;
	fhir_string title;
	int derivedFromUri_count;
	fhir_uri derivedFromUri;
	int partOf_count;
	fhir_canonical partOf;
	int replaces_count;
	fhir_canonical replaces;
	fhir_code status;
	fhir_boolean experimental;
	fhir_dateTime date;
	fhir_string publisher;
	int contact_count;
	ContactDetail* contact;
	fhir_markdown description;
	int useContext_count;
	UsageContext* useContext;
	int jurisdiction_count;
	CodeableConcept* jurisdiction;
	fhir_markdown copyright;
	fhir_date approvalDate;
	fhir_date lastReviewDate;
	Period* effectivePeriod;
	CodeableConcept* code;
	int instance_count;
	Reference* instance;
	int applicability_count;
	ChargeItemDefinition_Applicability* applicability;
	int propertyGroup_count;
	ChargeItemDefinition_PropertyGroup* propertyGroup;
};
class ChargeItemDefinition_Applicability {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	fhir_string description;
	fhir_string language;
	fhir_string expression;
};
class ChargeItemDefinition_PropertyGroup {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	int applicability_count;
	ChargeItemDefinition_Applicability* applicability;
	int priceComponent_count;
	ChargeItemDefinition_PropertyGroup_PriceComponent* priceComponent;
};
class ChargeItemDefinition_PropertyGroup_PriceComponent {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	fhir_code type;
	CodeableConcept* code;
	fhir_decimal factor;
	Money* amount;
};
class Claim {
public:
	fhir_string id;
	Meta* meta;
	fhir_uri implicitRules;
	fhir_code language;
	Narrative* text;
	int contained_count;
	Resource* contained;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	int identifier_count;
	Identifier* identifier;
	fhir_code status;
	CodeableConcept* type;
	CodeableConcept* subType;
	fhir_code use;
	Reference* patient;
	Period* billablePeriod;
	fhir_dateTime created;
	Reference* enterer;
	Reference* insurer;
	Reference* provider;
	CodeableConcept* priority;
	CodeableConcept* fundsReserve;
	int related_count;
	Claim_Related* related;
	Reference* prescription;
	Reference* originalPrescription;
	Claim_Payee* payee;
	Reference* referral;
	Reference* facility;
	int careTeam_count;
	Claim_CareTeam* careTeam;
	int supportingInfo_count;
	Claim_SupportingInfo* supportingInfo;
	int diagnosis_count;
	Claim_Diagnosis* diagnosis;
	int procedure_count;
	Claim_Procedure* procedure;
	int insurance_count;
	Claim_Insurance* insurance;
	Claim_Accident* accident;
	int item_count;
	Claim_Item* item;
	Money* total;
};
class Claim_Related {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	Reference* claim;
	CodeableConcept* relationship;
	Identifier* reference;
};
class Claim_Payee {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	CodeableConcept* type;
	Reference* party;
};
class Claim_CareTeam {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	fhir_positiveInt sequence;
	Reference* provider;
	fhir_boolean responsible;
	CodeableConcept* role;
	CodeableConcept* qualification;
};
class Claim_SupportingInfo {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	fhir_positiveInt sequence;
	CodeableConcept* category;
	CodeableConcept* code;
	enum class Timing {
		fhir_date,
		Period
	} timing_type;
	union {
		fhir_date _fhir_date;
		Period* _period;
	} timing;

	enum class Value {
		fhir_boolean,
		fhir_string,
		Quantity,
		Attachment,
		Reference
	} value_type;
	union {
		fhir_boolean _fhir_boolean;
		fhir_string _fhir_string;
		Quantity* _quantity;
		Attachment* _attachment;
		Reference* _reference;
	} value;

	CodeableConcept* reason;
};
class Claim_Diagnosis {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	fhir_positiveInt sequence;
	enum class Diagnosis {
		CodeableConcept,
		Reference
	} diagnosis_type;
	union {
		CodeableConcept* _codeableConcept;
		Reference* _reference;
	} diagnosis;

	int type_count;
	CodeableConcept* type;
	CodeableConcept* onAdmission;
	CodeableConcept* packageCode;
};
class Claim_Procedure {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	fhir_positiveInt sequence;
	int type_count;
	CodeableConcept* type;
	fhir_dateTime date;
	enum class Procedure {
		CodeableConcept,
		Reference
	} procedure_type;
	union {
		CodeableConcept* _codeableConcept;
		Reference* _reference;
	} procedure;

	int udi_count;
	Reference* udi;
};
class Claim_Insurance {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	fhir_positiveInt sequence;
	fhir_boolean focal;
	Identifier* identifier;
	Reference* coverage;
	fhir_string businessArrangement;
	int preAuthRef_count;
	fhir_string preAuthRef;
	Reference* claimResponse;
};
class Claim_Accident {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	fhir_date date;
	CodeableConcept* type;
	enum class Location {
		Address,
		Reference
	} location_type;
	union {
		Address* _address;
		Reference* _reference;
	} location;

};
class Claim_Item {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	fhir_positiveInt sequence;
	int careTeamSequence_count;
	fhir_positiveInt careTeamSequence;
	int diagnosisSequence_count;
	fhir_positiveInt diagnosisSequence;
	int procedureSequence_count;
	fhir_positiveInt procedureSequence;
	int informationSequence_count;
	fhir_positiveInt informationSequence;
	CodeableConcept* revenue;
	CodeableConcept* category;
	CodeableConcept* productOrService;
	int modifier_count;
	CodeableConcept* modifier;
	int programCode_count;
	CodeableConcept* programCode;
	enum class Serviced {
		fhir_date,
		Period
	} serviced_type;
	union {
		fhir_date _fhir_date;
		Period* _period;
	} serviced;

	enum class Location {
		CodeableConcept,
		Address,
		Reference
	} location_type;
	union {
		CodeableConcept* _codeableConcept;
		Address* _address;
		Reference* _reference;
	} location;

	Quantity* quantity;
	Money* unitPrice;
	fhir_decimal factor;
	Money* net;
	int udi_count;
	Reference* udi;
	CodeableConcept* bodySite;
	int subSite_count;
	CodeableConcept* subSite;
	int encounter_count;
	Reference* encounter;
	int detail_count;
	Claim_Item_Detail* detail;
};
class Claim_Item_Detail {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	fhir_positiveInt sequence;
	CodeableConcept* revenue;
	CodeableConcept* category;
	CodeableConcept* productOrService;
	int modifier_count;
	CodeableConcept* modifier;
	int programCode_count;
	CodeableConcept* programCode;
	Quantity* quantity;
	Money* unitPrice;
	fhir_decimal factor;
	Money* net;
	int udi_count;
	Reference* udi;
	int subDetail_count;
	Claim_Item_Detail_SubDetail* subDetail;
};
class Claim_Item_Detail_SubDetail {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	fhir_positiveInt sequence;
	CodeableConcept* revenue;
	CodeableConcept* category;
	CodeableConcept* productOrService;
	int modifier_count;
	CodeableConcept* modifier;
	int programCode_count;
	CodeableConcept* programCode;
	Quantity* quantity;
	Money* unitPrice;
	fhir_decimal factor;
	Money* net;
	int udi_count;
	Reference* udi;
};
class ClaimResponse {
public:
	fhir_string id;
	Meta* meta;
	fhir_uri implicitRules;
	fhir_code language;
	Narrative* text;
	int contained_count;
	Resource* contained;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	int identifier_count;
	Identifier* identifier;
	fhir_code status;
	CodeableConcept* type;
	CodeableConcept* subType;
	fhir_code use;
	Reference* patient;
	fhir_dateTime created;
	Reference* insurer;
	Reference* requestor;
	Reference* request;
	fhir_code outcome;
	fhir_string disposition;
	fhir_string preAuthRef;
	Period* preAuthPeriod;
	CodeableConcept* payeeType;
	int item_count;
	ClaimResponse_Item* item;
	int addItem_count;
	ClaimResponse_AddItem* addItem;
	int adjudication_count;
	ClaimResponse_Item_Adjudication* adjudication;
	int total_count;
	ClaimResponse_Total* total;
	ClaimResponse_Payment* payment;
	CodeableConcept* fundsReserve;
	CodeableConcept* formCode;
	Attachment* form;
	int processNote_count;
	ClaimResponse_ProcessNote* processNote;
	int communicationRequest_count;
	Reference* communicationRequest;
	int insurance_count;
	ClaimResponse_Insurance* insurance;
	int error_count;
	ClaimResponse_Error* error;
};
class ClaimResponse_Item {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	fhir_positiveInt itemSequence;
	int noteNumber_count;
	fhir_positiveInt noteNumber;
	int adjudication_count;
	ClaimResponse_Item_Adjudication* adjudication;
	int detail_count;
	ClaimResponse_Item_Detail* detail;
};
class ClaimResponse_Item_Adjudication {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	CodeableConcept* category;
	CodeableConcept* reason;
	Money* amount;
	fhir_decimal value;
};
class ClaimResponse_Item_Detail {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	fhir_positiveInt detailSequence;
	int noteNumber_count;
	fhir_positiveInt noteNumber;
	int adjudication_count;
	ClaimResponse_Item_Adjudication* adjudication;
	int subDetail_count;
	ClaimResponse_Item_Detail_SubDetail* subDetail;
};
class ClaimResponse_Item_Detail_SubDetail {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	fhir_positiveInt subDetailSequence;
	int noteNumber_count;
	fhir_positiveInt noteNumber;
	int adjudication_count;
	ClaimResponse_Item_Adjudication* adjudication;
};
class ClaimResponse_AddItem {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	int itemSequence_count;
	fhir_positiveInt itemSequence;
	int detailSequence_count;
	fhir_positiveInt detailSequence;
	int subdetailSequence_count;
	fhir_positiveInt subdetailSequence;
	int provider_count;
	Reference* provider;
	CodeableConcept* productOrService;
	int modifier_count;
	CodeableConcept* modifier;
	int programCode_count;
	CodeableConcept* programCode;
	enum class Serviced {
		fhir_date,
		Period
	} serviced_type;
	union {
		fhir_date _fhir_date;
		Period* _period;
	} serviced;

	enum class Location {
		CodeableConcept,
		Address,
		Reference
	} location_type;
	union {
		CodeableConcept* _codeableConcept;
		Address* _address;
		Reference* _reference;
	} location;

	Quantity* quantity;
	Money* unitPrice;
	fhir_decimal factor;
	Money* net;
	CodeableConcept* bodySite;
	int subSite_count;
	CodeableConcept* subSite;
	int noteNumber_count;
	fhir_positiveInt noteNumber;
	int adjudication_count;
	ClaimResponse_Item_Adjudication* adjudication;
	int detail_count;
	ClaimResponse_AddItem_Detail* detail;
};
class ClaimResponse_AddItem_Detail {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	CodeableConcept* productOrService;
	int modifier_count;
	CodeableConcept* modifier;
	Quantity* quantity;
	Money* unitPrice;
	fhir_decimal factor;
	Money* net;
	int noteNumber_count;
	fhir_positiveInt noteNumber;
	int adjudication_count;
	ClaimResponse_Item_Adjudication* adjudication;
	int subDetail_count;
	ClaimResponse_AddItem_Detail_SubDetail* subDetail;
};
class ClaimResponse_AddItem_Detail_SubDetail {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	CodeableConcept* productOrService;
	int modifier_count;
	CodeableConcept* modifier;
	Quantity* quantity;
	Money* unitPrice;
	fhir_decimal factor;
	Money* net;
	int noteNumber_count;
	fhir_positiveInt noteNumber;
	int adjudication_count;
	ClaimResponse_Item_Adjudication* adjudication;
};
class ClaimResponse_Total {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	CodeableConcept* category;
	Money* amount;
};
class ClaimResponse_Payment {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	CodeableConcept* type;
	Money* adjustment;
	CodeableConcept* adjustmentReason;
	fhir_date date;
	Money* amount;
	Identifier* identifier;
};
class ClaimResponse_ProcessNote {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	fhir_positiveInt number;
	fhir_code type;
	fhir_string text;
	CodeableConcept* language;
};
class ClaimResponse_Insurance {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	fhir_positiveInt sequence;
	fhir_boolean focal;
	Reference* coverage;
	fhir_string businessArrangement;
	Reference* claimResponse;
};
class ClaimResponse_Error {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	fhir_positiveInt itemSequence;
	fhir_positiveInt detailSequence;
	fhir_positiveInt subDetailSequence;
	CodeableConcept* code;
};
class ClinicalImpression {
public:
	fhir_string id;
	Meta* meta;
	fhir_uri implicitRules;
	fhir_code language;
	Narrative* text;
	int contained_count;
	Resource* contained;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	int identifier_count;
	Identifier* identifier;
	fhir_code status;
	CodeableConcept* statusReason;
	CodeableConcept* code;
	fhir_string description;
	Reference* subject;
	Reference* encounter;
	enum class Effective {
		fhir_dateTime,
		Period
	} effective_type;
	union {
		fhir_dateTime _fhir_dateTime;
		Period* _period;
	} effective;

	fhir_dateTime date;
	Reference* assessor;
	Reference* previous;
	int problem_count;
	Reference* problem;
	int investigation_count;
	ClinicalImpression_Investigation* investigation;
	int protocol_count;
	fhir_uri protocol;
	fhir_string summary;
	int finding_count;
	ClinicalImpression_Finding* finding;
	int prognosisCodeableConcept_count;
	CodeableConcept* prognosisCodeableConcept;
	int prognosisReference_count;
	Reference* prognosisReference;
	int supportingInfo_count;
	Reference* supportingInfo;
	int note_count;
	Annotation* note;
};
class ClinicalImpression_Investigation {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	CodeableConcept* code;
	int item_count;
	Reference* item;
};
class ClinicalImpression_Finding {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	CodeableConcept* itemCodeableConcept;
	Reference* itemReference;
	fhir_string basis;
};
class CodeSystem {
public:
	fhir_string id;
	Meta* meta;
	fhir_uri implicitRules;
	fhir_code language;
	Narrative* text;
	int contained_count;
	Resource* contained;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	fhir_uri url;
	int identifier_count;
	Identifier* identifier;
	fhir_string version;
	fhir_string name;
	fhir_string title;
	fhir_code status;
	fhir_boolean experimental;
	fhir_dateTime date;
	fhir_string publisher;
	int contact_count;
	ContactDetail* contact;
	fhir_markdown description;
	int useContext_count;
	UsageContext* useContext;
	int jurisdiction_count;
	CodeableConcept* jurisdiction;
	fhir_markdown purpose;
	fhir_markdown copyright;
	fhir_boolean caseSensitive;
	fhir_canonical valueSet;
	fhir_code hierarchyMeaning;
	fhir_boolean compositional;
	fhir_boolean versionNeeded;
	fhir_code content;
	fhir_canonical supplements;
	fhir_unsignedInt count;
	int filter_count;
	CodeSystem_Filter* filter;
	int property_count;
	CodeSystem_Property* property;
	int concept_count;
	CodeSystem_Concept* concept;
};
class CodeSystem_Filter {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	fhir_code code;
	fhir_string description;
	int operator__count;
	fhir_code operator_;
	fhir_string value;
};
class CodeSystem_Property {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	fhir_code code;
	fhir_uri uri;
	fhir_string description;
	fhir_code type;
};
class CodeSystem_Concept {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	fhir_code code;
	fhir_string display;
	fhir_string definition;
	int designation_count;
	CodeSystem_Concept_Designation* designation;
	int property_count;
	CodeSystem_Concept_Property* property;
	int concept_count;
	CodeSystem_Concept* concept;
};
class CodeSystem_Concept_Designation {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	fhir_code language;
	Coding* use;
	fhir_string value;
};
class CodeSystem_Concept_Property {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	fhir_code code;
	enum class Value {
		fhir_code,
		Coding,
		fhir_string,
		integer,
		fhir_boolean,
		fhir_dateTime,
		fhir_decimal
	} value_type;
	union {
		fhir_code _fhir_code;
		Coding* _coding;
		fhir_string _fhir_string;
		integer* _integer;
		fhir_boolean _fhir_boolean;
		fhir_dateTime _fhir_dateTime;
		fhir_decimal _fhir_decimal;
	} value;

};
class Communication {
public:
	fhir_string id;
	Meta* meta;
	fhir_uri implicitRules;
	fhir_code language;
	Narrative* text;
	int contained_count;
	Resource* contained;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	int identifier_count;
	Identifier* identifier;
	int instantiatesCanonical_count;
	fhir_canonical instantiatesCanonical;
	int instantiatesUri_count;
	fhir_uri instantiatesUri;
	int basedOn_count;
	Reference* basedOn;
	int partOf_count;
	Reference* partOf;
	int inResponseTo_count;
	Reference* inResponseTo;
	fhir_code status;
	CodeableConcept* statusReason;
	int category_count;
	CodeableConcept* category;
	fhir_code priority;
	int medium_count;
	CodeableConcept* medium;
	Reference* subject;
	CodeableConcept* topic;
	int about_count;
	Reference* about;
	Reference* encounter;
	fhir_dateTime sent;
	fhir_dateTime received;
	int recipient_count;
	Reference* recipient;
	Reference* sender;
	int reasonCode_count;
	CodeableConcept* reasonCode;
	int reasonReference_count;
	Reference* reasonReference;
	int payload_count;
	Communication_Payload* payload;
	int note_count;
	Annotation* note;
};
class Communication_Payload {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	enum class Content {
		fhir_string,
		Attachment,
		Reference
	} content_type;
	union {
		fhir_string _fhir_string;
		Attachment* _attachment;
		Reference* _reference;
	} content;

};
class CommunicationRequest {
public:
	fhir_string id;
	Meta* meta;
	fhir_uri implicitRules;
	fhir_code language;
	Narrative* text;
	int contained_count;
	Resource* contained;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	int identifier_count;
	Identifier* identifier;
	int basedOn_count;
	Reference* basedOn;
	int replaces_count;
	Reference* replaces;
	Identifier* groupIdentifier;
	fhir_code status;
	CodeableConcept* statusReason;
	int category_count;
	CodeableConcept* category;
	fhir_code priority;
	fhir_boolean doNotPerform;
	int medium_count;
	CodeableConcept* medium;
	Reference* subject;
	int about_count;
	Reference* about;
	Reference* encounter;
	int payload_count;
	CommunicationRequest_Payload* payload;
	enum class Occurrence {
		fhir_dateTime,
		Period
	} occurrence_type;
	union {
		fhir_dateTime _fhir_dateTime;
		Period* _period;
	} occurrence;

	fhir_dateTime authoredOn;
	Reference* requester;
	int recipient_count;
	Reference* recipient;
	Reference* sender;
	int reasonCode_count;
	CodeableConcept* reasonCode;
	int reasonReference_count;
	Reference* reasonReference;
	int note_count;
	Annotation* note;
};
class CommunicationRequest_Payload {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	enum class Content {
		fhir_string,
		Attachment,
		Reference
	} content_type;
	union {
		fhir_string _fhir_string;
		Attachment* _attachment;
		Reference* _reference;
	} content;

};
class CompartmentDefinition {
public:
	fhir_string id;
	Meta* meta;
	fhir_uri implicitRules;
	fhir_code language;
	Narrative* text;
	int contained_count;
	Resource* contained;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	fhir_uri url;
	fhir_string version;
	fhir_string name;
	fhir_code status;
	fhir_boolean experimental;
	fhir_dateTime date;
	fhir_string publisher;
	int contact_count;
	ContactDetail* contact;
	fhir_markdown description;
	int useContext_count;
	UsageContext* useContext;
	fhir_markdown purpose;
	fhir_code code;
	fhir_boolean search;
	int resource_count;
	CompartmentDefinition_Resource* resource;
};
class CompartmentDefinition_Resource {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	fhir_code code;
	int param_count;
	fhir_string param;
	fhir_string documentation;
};
class Composition {
public:
	fhir_string id;
	Meta* meta;
	fhir_uri implicitRules;
	fhir_code language;
	Narrative* text;
	int contained_count;
	Resource* contained;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	Identifier* identifier;
	fhir_code status;
	CodeableConcept* type;
	int category_count;
	CodeableConcept* category;
	Reference* subject;
	Reference* encounter;
	fhir_dateTime date;
	int author_count;
	Reference* author;
	fhir_string title;
	fhir_code confidentiality;
	int attester_count;
	Composition_Attester* attester;
	Reference* custodian;
	int relatesTo_count;
	Composition_RelatesTo* relatesTo;
	int event_count;
	Composition_Event* event;
	int section_count;
	Composition_Section* section;
};
class Composition_Attester {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	fhir_code mode;
	fhir_dateTime time;
	Reference* party;
};
class Composition_RelatesTo {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	fhir_code code;
	enum class Target {
		Identifier,
		Reference
	} target_type;
	union {
		Identifier* _identifier;
		Reference* _reference;
	} target;

};
class Composition_Event {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	int code_count;
	CodeableConcept* code;
	Period* period;
	int detail_count;
	Reference* detail;
};
class Composition_Section {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	fhir_string title;
	CodeableConcept* code;
	int author_count;
	Reference* author;
	Reference* focus;
	Narrative* text;
	fhir_code mode;
	CodeableConcept* orderedBy;
	int entry_count;
	Reference* entry;
	CodeableConcept* emptyReason;
	int section_count;
	Composition_Section* section;
};
class ConceptMap {
public:
	fhir_string id;
	Meta* meta;
	fhir_uri implicitRules;
	fhir_code language;
	Narrative* text;
	int contained_count;
	Resource* contained;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	fhir_uri url;
	Identifier* identifier;
	fhir_string version;
	fhir_string name;
	fhir_string title;
	fhir_code status;
	fhir_boolean experimental;
	fhir_dateTime date;
	fhir_string publisher;
	int contact_count;
	ContactDetail* contact;
	fhir_markdown description;
	int useContext_count;
	UsageContext* useContext;
	int jurisdiction_count;
	CodeableConcept* jurisdiction;
	fhir_markdown purpose;
	fhir_markdown copyright;
	enum class Source {
		fhir_uri,
		fhir_canonical
	} source_type;
	union {
		fhir_uri _fhir_uri;
		fhir_canonical _fhir_canonical;
	} source;

	enum class Target {
		fhir_uri,
		fhir_canonical
	} target_type;
	union {
		fhir_uri _fhir_uri;
		fhir_canonical _fhir_canonical;
	} target;

	int group_count;
	ConceptMap_Group* group;
};
class ConceptMap_Group {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	fhir_uri source;
	fhir_string sourceVersion;
	fhir_uri target;
	fhir_string targetVersion;
	int element_count;
	ConceptMap_Group_Element* element;
	ConceptMap_Group_Unmapped* unmapped;
};
class ConceptMap_Group_Element {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	fhir_code code;
	fhir_string display;
	int target_count;
	ConceptMap_Group_Element_Target* target;
};
class ConceptMap_Group_Element_Target {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	fhir_code code;
	fhir_string display;
	fhir_code equivalence;
	fhir_string comment;
	int dependsOn_count;
	ConceptMap_Group_Element_Target_DependsOn* dependsOn;
	int product_count;
	ConceptMap_Group_Element_Target_DependsOn* product;
};
class ConceptMap_Group_Element_Target_DependsOn {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	fhir_uri property;
	fhir_canonical system;
	fhir_string value;
	fhir_string display;
};
class ConceptMap_Group_Unmapped {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	fhir_code mode;
	fhir_code code;
	fhir_string display;
	fhir_canonical url;
};
class Condition {
public:
	fhir_string id;
	Meta* meta;
	fhir_uri implicitRules;
	fhir_code language;
	Narrative* text;
	int contained_count;
	Resource* contained;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	int identifier_count;
	Identifier* identifier;
	CodeableConcept* clinicalStatus;
	CodeableConcept* verificationStatus;
	int category_count;
	CodeableConcept* category;
	CodeableConcept* severity;
	CodeableConcept* code;
	int bodySite_count;
	CodeableConcept* bodySite;
	Reference* subject;
	Reference* encounter;
	enum class Onset {
		fhir_dateTime,
		Age,
		Period,
		Range,
		fhir_string
	} onset_type;
	union {
		fhir_dateTime _fhir_dateTime;
		Age* _age;
		Period* _period;
		Range* _range;
		fhir_string _fhir_string;
	} onset;

	enum class Abatement {
		fhir_dateTime,
		Age,
		Period,
		Range,
		fhir_string
	} abatement_type;
	union {
		fhir_dateTime _fhir_dateTime;
		Age* _age;
		Period* _period;
		Range* _range;
		fhir_string _fhir_string;
	} abatement;

	fhir_dateTime recordedDate;
	Reference* recorder;
	Reference* asserter;
	int stage_count;
	Condition_Stage* stage;
	int evidence_count;
	Condition_Evidence* evidence;
	int note_count;
	Annotation* note;
};
class Condition_Stage {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	CodeableConcept* summary;
	int assessment_count;
	Reference* assessment;
	CodeableConcept* type;
};
class Condition_Evidence {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	int code_count;
	CodeableConcept* code;
	int detail_count;
	Reference* detail;
};
class Consent {
public:
	fhir_string id;
	Meta* meta;
	fhir_uri implicitRules;
	fhir_code language;
	Narrative* text;
	int contained_count;
	Resource* contained;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	int identifier_count;
	Identifier* identifier;
	fhir_code status;
	CodeableConcept* scope;
	int category_count;
	CodeableConcept* category;
	Reference* patient;
	fhir_dateTime dateTime;
	int performer_count;
	Reference* performer;
	int organization_count;
	Reference* organization;
	enum class Source {
		Attachment,
		Reference
	} source_type;
	union {
		Attachment* _attachment;
		Reference* _reference;
	} source;

	int policy_count;
	Consent_Policy* policy;
	CodeableConcept* policyRule;
	int verification_count;
	Consent_Verification* verification;
	Consent_Provision* provision;
};
class Consent_Policy {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	fhir_uri authority;
	fhir_uri uri;
};
class Consent_Verification {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	fhir_boolean verified;
	Reference* verifiedWith;
	fhir_dateTime verificationDate;
};
class Consent_Provision {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	fhir_code type;
	Period* period;
	int actor_count;
	Consent_Provision_Actor* actor;
	int action_count;
	CodeableConcept* action;
	int securityLabel_count;
	Coding* securityLabel;
	int purpose_count;
	Coding* purpose;
	int class__count;
	Coding* class_;
	int code_count;
	CodeableConcept* code;
	Period* dataPeriod;
	int data_count;
	Consent_Provision_Data* data;
	int provision_count;
	Consent_Provision* provision;
};
class Consent_Provision_Actor {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	CodeableConcept* role;
	Reference* reference;
};
class Consent_Provision_Data {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	fhir_code meaning;
	Reference* reference;
};
class Contract {
public:
	fhir_string id;
	Meta* meta;
	fhir_uri implicitRules;
	fhir_code language;
	Narrative* text;
	int contained_count;
	Resource* contained;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	int identifier_count;
	Identifier* identifier;
	fhir_uri url;
	fhir_string version;
	fhir_code status;
	CodeableConcept* legalState;
	Reference* instantiatesCanonical;
	fhir_uri instantiatesUri;
	CodeableConcept* contentDerivative;
	fhir_dateTime issued;
	Period* applies;
	CodeableConcept* expirationType;
	int subject_count;
	Reference* subject;
	int authority_count;
	Reference* authority;
	int domain_count;
	Reference* domain;
	int site_count;
	Reference* site;
	fhir_string name;
	fhir_string title;
	fhir_string subtitle;
	int alias_count;
	fhir_string alias;
	Reference* author;
	CodeableConcept* scope;
	enum class Topic {
		CodeableConcept,
		Reference
	} topic_type;
	union {
		CodeableConcept* _codeableConcept;
		Reference* _reference;
	} topic;

	CodeableConcept* type;
	int subType_count;
	CodeableConcept* subType;
	Contract_ContentDefinition* contentDefinition;
	int term_count;
	Contract_Term* term;
	int supportingInfo_count;
	Reference* supportingInfo;
	int relevantHistory_count;
	Reference* relevantHistory;
	int signer_count;
	Contract_Signer* signer;
	int friendly_count;
	Contract_Friendly* friendly;
	int legal_count;
	Contract_Legal* legal;
	int rule_count;
	Contract_Rule* rule;
	enum class LegallyBinding {
		Attachment,
		Reference
	} legallyBinding_type;
	union {
		Attachment* _attachment;
		Reference* _reference;
	} legallyBinding;

};
class Contract_ContentDefinition {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	CodeableConcept* type;
	CodeableConcept* subType;
	Reference* publisher;
	fhir_dateTime publicationDate;
	fhir_code publicationStatus;
	fhir_markdown copyright;
};
class Contract_Term {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	Identifier* identifier;
	fhir_dateTime issued;
	Period* applies;
	enum class Topic {
		CodeableConcept,
		Reference
	} topic_type;
	union {
		CodeableConcept* _codeableConcept;
		Reference* _reference;
	} topic;

	CodeableConcept* type;
	CodeableConcept* subType;
	fhir_string text;
	int securityLabel_count;
	Contract_Term_SecurityLabel* securityLabel;
	Contract_Term_Offer* offer;
	int asset_count;
	Contract_Term_Asset* asset;
	int action_count;
	Contract_Term_Action* action;
	int group_count;
	Contract_Term* group;
};
class Contract_Term_SecurityLabel {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	int number_count;
	fhir_unsignedInt number;
	Coding* classification;
	int category_count;
	Coding* category;
	int control_count;
	Coding* control;
};
class Contract_Term_Offer {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	int identifier_count;
	Identifier* identifier;
	int party_count;
	Contract_Term_Offer_Party* party;
	Reference* topic;
	CodeableConcept* type;
	CodeableConcept* decision;
	int decisionMode_count;
	CodeableConcept* decisionMode;
	int answer_count;
	Contract_Term_Offer_Answer* answer;
	fhir_string text;
	int linkId_count;
	fhir_string linkId;
	int securityLabelNumber_count;
	fhir_unsignedInt securityLabelNumber;
};
class Contract_Term_Offer_Party {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	int reference_count;
	Reference* reference;
	CodeableConcept* role;
};
class Contract_Term_Offer_Answer {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	enum class Value {
		fhir_boolean,
		fhir_decimal,
		integer,
		fhir_date,
		fhir_dateTime,
		fhir_time,
		fhir_string,
		fhir_uri,
		Attachment,
		Coding,
		Quantity,
		Reference
	} value_type;
	union {
		fhir_boolean _fhir_boolean;
		fhir_decimal _fhir_decimal;
		integer* _integer;
		fhir_date _fhir_date;
		fhir_dateTime _fhir_dateTime;
		fhir_time _fhir_time;
		fhir_string _fhir_string;
		fhir_uri _fhir_uri;
		Attachment* _attachment;
		Coding* _coding;
		Quantity* _quantity;
		Reference* _reference;
	} value;

};
class Contract_Term_Asset {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	CodeableConcept* scope;
	int type_count;
	CodeableConcept* type;
	int typeReference_count;
	Reference* typeReference;
	int subtype_count;
	CodeableConcept* subtype;
	Coding* relationship;
	int context_count;
	Contract_Term_Asset_Context* context;
	fhir_string condition;
	int periodType_count;
	CodeableConcept* periodType;
	int period_count;
	Period* period;
	int usePeriod_count;
	Period* usePeriod;
	fhir_string text;
	int linkId_count;
	fhir_string linkId;
	int answer_count;
	Contract_Term_Offer_Answer* answer;
	int securityLabelNumber_count;
	fhir_unsignedInt securityLabelNumber;
	int valuedItem_count;
	Contract_Term_Asset_ValuedItem* valuedItem;
};
class Contract_Term_Asset_Context {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	Reference* reference;
	int code_count;
	CodeableConcept* code;
	fhir_string text;
};
class Contract_Term_Asset_ValuedItem {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	enum class Entity {
		CodeableConcept,
		Reference
	} entity_type;
	union {
		CodeableConcept* _codeableConcept;
		Reference* _reference;
	} entity;

	Identifier* identifier;
	fhir_dateTime effectiveTime;
	Quantity* quantity;
	Money* unitPrice;
	fhir_decimal factor;
	fhir_decimal points;
	Money* net;
	fhir_string payment;
	fhir_dateTime paymentDate;
	Reference* responsible;
	Reference* recipient;
	int linkId_count;
	fhir_string linkId;
	int securityLabelNumber_count;
	fhir_unsignedInt securityLabelNumber;
};
class Contract_Term_Action {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	fhir_boolean doNotPerform;
	CodeableConcept* type;
	int subject_count;
	Contract_Term_Action_Subject* subject;
	CodeableConcept* intent;
	int linkId_count;
	fhir_string linkId;
	CodeableConcept* status;
	Reference* context;
	int contextLinkId_count;
	fhir_string contextLinkId;
	enum class Occurrence {
		fhir_dateTime,
		Period,
		Timing
	} occurrence_type;
	union {
		fhir_dateTime _fhir_dateTime;
		Period* _period;
		Timing* _timing;
	} occurrence;

	int requester_count;
	Reference* requester;
	int requesterLinkId_count;
	fhir_string requesterLinkId;
	int performerType_count;
	CodeableConcept* performerType;
	CodeableConcept* performerRole;
	Reference* performer;
	int performerLinkId_count;
	fhir_string performerLinkId;
	int reasonCode_count;
	CodeableConcept* reasonCode;
	int reasonReference_count;
	Reference* reasonReference;
	int reason_count;
	fhir_string reason;
	int reasonLinkId_count;
	fhir_string reasonLinkId;
	int note_count;
	Annotation* note;
	int securityLabelNumber_count;
	fhir_unsignedInt securityLabelNumber;
};
class Contract_Term_Action_Subject {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	int reference_count;
	Reference* reference;
	CodeableConcept* role;
};
class Contract_Signer {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	Coding* type;
	Reference* party;
	int signature_count;
	Signature* signature;
};
class Contract_Friendly {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	enum class Content {
		Attachment,
		Reference
	} content_type;
	union {
		Attachment* _attachment;
		Reference* _reference;
	} content;

};
class Contract_Legal {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	enum class Content {
		Attachment,
		Reference
	} content_type;
	union {
		Attachment* _attachment;
		Reference* _reference;
	} content;

};
class Contract_Rule {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	enum class Content {
		Attachment,
		Reference
	} content_type;
	union {
		Attachment* _attachment;
		Reference* _reference;
	} content;

};
class Coverage {
public:
	fhir_string id;
	Meta* meta;
	fhir_uri implicitRules;
	fhir_code language;
	Narrative* text;
	int contained_count;
	Resource* contained;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	int identifier_count;
	Identifier* identifier;
	fhir_code status;
	CodeableConcept* type;
	Reference* policyHolder;
	Reference* subscriber;
	fhir_string subscriberId;
	Reference* beneficiary;
	fhir_string dependent;
	CodeableConcept* relationship;
	Period* period;
	int payor_count;
	Reference* payor;
	int class__count;
	Coverage_Class* class_;
	fhir_positiveInt order;
	fhir_string network;
	int costToBeneficiary_count;
	Coverage_CostToBeneficiary* costToBeneficiary;
	fhir_boolean subrogation;
	int contract_count;
	Reference* contract;
};
class Coverage_Class {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	CodeableConcept* type;
	fhir_string value;
	fhir_string name;
};
class Coverage_CostToBeneficiary {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	CodeableConcept* type;
	enum class Value {
		Quantity,
		Money
	} value_type;
	union {
		Quantity* _quantity;
		Money* _money;
	} value;

	int exception_count;
	Coverage_CostToBeneficiary_Exception* exception;
};
class Coverage_CostToBeneficiary_Exception {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	CodeableConcept* type;
	Period* period;
};
class CoverageEligibilityRequest {
public:
	fhir_string id;
	Meta* meta;
	fhir_uri implicitRules;
	fhir_code language;
	Narrative* text;
	int contained_count;
	Resource* contained;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	int identifier_count;
	Identifier* identifier;
	fhir_code status;
	CodeableConcept* priority;
	int purpose_count;
	fhir_code purpose;
	Reference* patient;
	enum class Serviced {
		fhir_date,
		Period
	} serviced_type;
	union {
		fhir_date _fhir_date;
		Period* _period;
	} serviced;

	fhir_dateTime created;
	Reference* enterer;
	Reference* provider;
	Reference* insurer;
	Reference* facility;
	int supportingInfo_count;
	CoverageEligibilityRequest_SupportingInfo* supportingInfo;
	int insurance_count;
	CoverageEligibilityRequest_Insurance* insurance;
	int item_count;
	CoverageEligibilityRequest_Item* item;
};
class CoverageEligibilityRequest_SupportingInfo {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	fhir_positiveInt sequence;
	Reference* information;
	fhir_boolean appliesToAll;
};
class CoverageEligibilityRequest_Insurance {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	fhir_boolean focal;
	Reference* coverage;
	fhir_string businessArrangement;
};
class CoverageEligibilityRequest_Item {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	int supportingInfoSequence_count;
	fhir_positiveInt supportingInfoSequence;
	CodeableConcept* category;
	CodeableConcept* productOrService;
	int modifier_count;
	CodeableConcept* modifier;
	Reference* provider;
	Quantity* quantity;
	Money* unitPrice;
	Reference* facility;
	int diagnosis_count;
	CoverageEligibilityRequest_Item_Diagnosis* diagnosis;
	int detail_count;
	Reference* detail;
};
class CoverageEligibilityRequest_Item_Diagnosis {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	enum class Diagnosis {
		CodeableConcept,
		Reference
	} diagnosis_type;
	union {
		CodeableConcept* _codeableConcept;
		Reference* _reference;
	} diagnosis;

};
class CoverageEligibilityResponse {
public:
	fhir_string id;
	Meta* meta;
	fhir_uri implicitRules;
	fhir_code language;
	Narrative* text;
	int contained_count;
	Resource* contained;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	int identifier_count;
	Identifier* identifier;
	fhir_code status;
	int purpose_count;
	fhir_code purpose;
	Reference* patient;
	enum class Serviced {
		fhir_date,
		Period
	} serviced_type;
	union {
		fhir_date _fhir_date;
		Period* _period;
	} serviced;

	fhir_dateTime created;
	Reference* requestor;
	Reference* request;
	fhir_code outcome;
	fhir_string disposition;
	Reference* insurer;
	int insurance_count;
	CoverageEligibilityResponse_Insurance* insurance;
	fhir_string preAuthRef;
	CodeableConcept* form;
	int error_count;
	CoverageEligibilityResponse_Error* error;
};
class CoverageEligibilityResponse_Insurance {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	Reference* coverage;
	fhir_boolean inforce;
	Period* benefitPeriod;
	int item_count;
	CoverageEligibilityResponse_Insurance_Item* item;
};
class CoverageEligibilityResponse_Insurance_Item {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	CodeableConcept* category;
	CodeableConcept* productOrService;
	int modifier_count;
	CodeableConcept* modifier;
	Reference* provider;
	fhir_boolean excluded;
	fhir_string name;
	fhir_string description;
	CodeableConcept* network;
	CodeableConcept* unit;
	CodeableConcept* term;
	int benefit_count;
	CoverageEligibilityResponse_Insurance_Item_Benefit* benefit;
	fhir_boolean authorizationRequired;
	int authorizationSupporting_count;
	CodeableConcept* authorizationSupporting;
	fhir_uri authorizationUrl;
};
class CoverageEligibilityResponse_Insurance_Item_Benefit {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	CodeableConcept* type;
	enum class Allowed {
		fhir_unsignedInt,
		fhir_string,
		Money
	} allowed_type;
	union {
		fhir_unsignedInt _fhir_unsignedInt;
		fhir_string _fhir_string;
		Money* _money;
	} allowed;

	enum class Used {
		fhir_unsignedInt,
		fhir_string,
		Money
	} used_type;
	union {
		fhir_unsignedInt _fhir_unsignedInt;
		fhir_string _fhir_string;
		Money* _money;
	} used;

};
class CoverageEligibilityResponse_Error {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	CodeableConcept* code;
};
class DetectedIssue {
public:
	fhir_string id;
	Meta* meta;
	fhir_uri implicitRules;
	fhir_code language;
	Narrative* text;
	int contained_count;
	Resource* contained;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	int identifier_count;
	Identifier* identifier;
	fhir_code status;
	CodeableConcept* code;
	fhir_code severity;
	Reference* patient;
	enum class Identified {
		fhir_dateTime,
		Period
	} identified_type;
	union {
		fhir_dateTime _fhir_dateTime;
		Period* _period;
	} identified;

	Reference* author;
	int implicated_count;
	Reference* implicated;
	int evidence_count;
	DetectedIssue_Evidence* evidence;
	fhir_string detail;
	fhir_uri reference;
	int mitigation_count;
	DetectedIssue_Mitigation* mitigation;
};
class DetectedIssue_Evidence {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	int code_count;
	CodeableConcept* code;
	int detail_count;
	Reference* detail;
};
class DetectedIssue_Mitigation {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	CodeableConcept* action;
	fhir_dateTime date;
	Reference* author;
};
class Device {
public:
	fhir_string id;
	Meta* meta;
	fhir_uri implicitRules;
	fhir_code language;
	Narrative* text;
	int contained_count;
	Resource* contained;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	int identifier_count;
	Identifier* identifier;
	Reference* definition;
	int udiCarrier_count;
	Device_UdiCarrier* udiCarrier;
	fhir_code status;
	int statusReason_count;
	CodeableConcept* statusReason;
	fhir_string distinctIdentifier;
	fhir_string manufacturer;
	fhir_dateTime manufactureDate;
	fhir_dateTime expirationDate;
	fhir_string lotNumber;
	fhir_string serialNumber;
	int deviceName_count;
	Device_DeviceName* deviceName;
	fhir_string modelNumber;
	fhir_string partNumber;
	CodeableConcept* type;
	int specialization_count;
	Device_Specialization* specialization;
	int version_count;
	Device_Version* version;
	int property_count;
	Device_Property* property;
	Reference* patient;
	Reference* owner;
	int contact_count;
	ContactPoint* contact;
	Reference* location;
	fhir_uri url;
	int note_count;
	Annotation* note;
	int safety_count;
	CodeableConcept* safety;
	Reference* parent;
};
class Device_UdiCarrier {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	fhir_string deviceIdentifier;
	fhir_uri issuer;
	fhir_uri jurisdiction;
	fhir_base64Binary carrierAIDC;
	fhir_string carrierHRF;
	fhir_code entryType;
};
class Device_DeviceName {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	fhir_string name;
	fhir_code type;
};
class Device_Specialization {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	CodeableConcept* systemType;
	fhir_string version;
};
class Device_Version {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	CodeableConcept* type;
	Identifier* component;
	fhir_string value;
};
class Device_Property {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	CodeableConcept* type;
	int valueQuantity_count;
	Quantity* valueQuantity;
	int valueCode_count;
	CodeableConcept* valueCode;
};
class DeviceDefinition {
public:
	fhir_string id;
	Meta* meta;
	fhir_uri implicitRules;
	fhir_code language;
	Narrative* text;
	int contained_count;
	Resource* contained;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	int identifier_count;
	Identifier* identifier;
	int udiDeviceIdentifier_count;
	DeviceDefinition_UdiDeviceIdentifier* udiDeviceIdentifier;
	enum class Manufacturer {
		fhir_string,
		Reference
	} manufacturer_type;
	union {
		fhir_string _fhir_string;
		Reference* _reference;
	} manufacturer;

	int deviceName_count;
	DeviceDefinition_DeviceName* deviceName;
	fhir_string modelNumber;
	CodeableConcept* type;
	int specialization_count;
	DeviceDefinition_Specialization* specialization;
	int version_count;
	fhir_string version;
	int safety_count;
	CodeableConcept* safety;
	int shelfLifeStorage_count;
	ProductShelfLife* shelfLifeStorage;
	ProdCharacteristic* physicalCharacteristics;
	int languageCode_count;
	CodeableConcept* languageCode;
	int capability_count;
	DeviceDefinition_Capability* capability;
	int property_count;
	DeviceDefinition_Property* property;
	Reference* owner;
	int contact_count;
	ContactPoint* contact;
	fhir_uri url;
	fhir_uri onlineInformation;
	int note_count;
	Annotation* note;
	Quantity* quantity;
	Reference* parentDevice;
	int material_count;
	DeviceDefinition_Material* material;
};
class DeviceDefinition_UdiDeviceIdentifier {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	fhir_string deviceIdentifier;
	fhir_uri issuer;
	fhir_uri jurisdiction;
};
class DeviceDefinition_DeviceName {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	fhir_string name;
	fhir_code type;
};
class DeviceDefinition_Specialization {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	fhir_string systemType;
	fhir_string version;
};
class DeviceDefinition_Capability {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	CodeableConcept* type;
	int description_count;
	CodeableConcept* description;
};
class DeviceDefinition_Property {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	CodeableConcept* type;
	int valueQuantity_count;
	Quantity* valueQuantity;
	int valueCode_count;
	CodeableConcept* valueCode;
};
class DeviceDefinition_Material {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	CodeableConcept* substance;
	fhir_boolean alternate;
	fhir_boolean allergenicIndicator;
};
class DeviceMetric {
public:
	fhir_string id;
	Meta* meta;
	fhir_uri implicitRules;
	fhir_code language;
	Narrative* text;
	int contained_count;
	Resource* contained;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	int identifier_count;
	Identifier* identifier;
	CodeableConcept* type;
	CodeableConcept* unit;
	Reference* source;
	Reference* parent;
	fhir_code operationalStatus;
	fhir_code color;
	fhir_code category;
	Timing* measurementPeriod;
	int calibration_count;
	DeviceMetric_Calibration* calibration;
};
class DeviceMetric_Calibration {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	fhir_code type;
	fhir_code state;
	fhir_instant time;
};
class DeviceRequest {
public:
	fhir_string id;
	Meta* meta;
	fhir_uri implicitRules;
	fhir_code language;
	Narrative* text;
	int contained_count;
	Resource* contained;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	int identifier_count;
	Identifier* identifier;
	int instantiatesCanonical_count;
	fhir_canonical instantiatesCanonical;
	int instantiatesUri_count;
	fhir_uri instantiatesUri;
	int basedOn_count;
	Reference* basedOn;
	int priorRequest_count;
	Reference* priorRequest;
	Identifier* groupIdentifier;
	fhir_code status;
	fhir_code intent;
	fhir_code priority;
	enum class Code {
		Reference,
		CodeableConcept
	} code_type;
	union {
		Reference* _reference;
		CodeableConcept* _codeableConcept;
	} code;

	int parameter_count;
	DeviceRequest_Parameter* parameter;
	Reference* subject;
	Reference* encounter;
	enum class Occurrence {
		fhir_dateTime,
		Period,
		Timing
	} occurrence_type;
	union {
		fhir_dateTime _fhir_dateTime;
		Period* _period;
		Timing* _timing;
	} occurrence;

	fhir_dateTime authoredOn;
	Reference* requester;
	CodeableConcept* performerType;
	Reference* performer;
	int reasonCode_count;
	CodeableConcept* reasonCode;
	int reasonReference_count;
	Reference* reasonReference;
	int insurance_count;
	Reference* insurance;
	int supportingInfo_count;
	Reference* supportingInfo;
	int note_count;
	Annotation* note;
	int relevantHistory_count;
	Reference* relevantHistory;
};
class DeviceRequest_Parameter {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	CodeableConcept* code;
	enum class Value {
		CodeableConcept,
		Quantity,
		Range,
		fhir_boolean
	} value_type;
	union {
		CodeableConcept* _codeableConcept;
		Quantity* _quantity;
		Range* _range;
		fhir_boolean _fhir_boolean;
	} value;

};
class DeviceUseStatement {
public:
	fhir_string id;
	Meta* meta;
	fhir_uri implicitRules;
	fhir_code language;
	Narrative* text;
	int contained_count;
	Resource* contained;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	int identifier_count;
	Identifier* identifier;
	int basedOn_count;
	Reference* basedOn;
	fhir_code status;
	Reference* subject;
	int derivedFrom_count;
	Reference* derivedFrom;
	enum class Timing {
		Timing,
		Period,
		fhir_dateTime
	} timing_type;
	union {
		Timing* _timing;
		Period* _period;
		fhir_dateTime _fhir_dateTime;
	} timing;

	fhir_dateTime recordedOn;
	Reference* source;
	Reference* device;
	int reasonCode_count;
	CodeableConcept* reasonCode;
	int reasonReference_count;
	Reference* reasonReference;
	CodeableConcept* bodySite;
	int note_count;
	Annotation* note;
};
class DiagnosticReport {
public:
	fhir_string id;
	Meta* meta;
	fhir_uri implicitRules;
	fhir_code language;
	Narrative* text;
	int contained_count;
	Resource* contained;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	int identifier_count;
	Identifier* identifier;
	int basedOn_count;
	Reference* basedOn;
	fhir_code status;
	int category_count;
	CodeableConcept* category;
	CodeableConcept* code;
	Reference* subject;
	Reference* encounter;
	enum class Effective {
		fhir_dateTime,
		Period
	} effective_type;
	union {
		fhir_dateTime _fhir_dateTime;
		Period* _period;
	} effective;

	fhir_instant issued;
	int performer_count;
	Reference* performer;
	int resultsInterpreter_count;
	Reference* resultsInterpreter;
	int specimen_count;
	Reference* specimen;
	int result_count;
	Reference* result;
	int imagingStudy_count;
	Reference* imagingStudy;
	int media_count;
	DiagnosticReport_Media* media;
	fhir_string conclusion;
	int conclusionCode_count;
	CodeableConcept* conclusionCode;
	int presentedForm_count;
	Attachment* presentedForm;
};
class DiagnosticReport_Media {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	fhir_string comment;
	Reference* link;
};
class DocumentManifest {
public:
	fhir_string id;
	Meta* meta;
	fhir_uri implicitRules;
	fhir_code language;
	Narrative* text;
	int contained_count;
	Resource* contained;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	Identifier* masterIdentifier;
	int identifier_count;
	Identifier* identifier;
	fhir_code status;
	CodeableConcept* type;
	Reference* subject;
	fhir_dateTime created;
	int author_count;
	Reference* author;
	int recipient_count;
	Reference* recipient;
	fhir_uri source;
	fhir_string description;
	int content_count;
	Reference* content;
	int related_count;
	DocumentManifest_Related* related;
};
class DocumentManifest_Related {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	Identifier* identifier;
	Reference* ref;
};
class DocumentReference {
public:
	fhir_string id;
	Meta* meta;
	fhir_uri implicitRules;
	fhir_code language;
	Narrative* text;
	int contained_count;
	Resource* contained;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	Identifier* masterIdentifier;
	int identifier_count;
	Identifier* identifier;
	fhir_code status;
	fhir_code docStatus;
	CodeableConcept* type;
	int category_count;
	CodeableConcept* category;
	Reference* subject;
	fhir_instant date;
	int author_count;
	Reference* author;
	Reference* authenticator;
	Reference* custodian;
	int relatesTo_count;
	DocumentReference_RelatesTo* relatesTo;
	fhir_string description;
	int securityLabel_count;
	CodeableConcept* securityLabel;
	int content_count;
	DocumentReference_Content* content;
	DocumentReference_Context* context;
};
class DocumentReference_RelatesTo {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	fhir_code code;
	Reference* target;
};
class DocumentReference_Content {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	Attachment* attachment;
	Coding* format;
};
class DocumentReference_Context {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	int encounter_count;
	Reference* encounter;
	int event_count;
	CodeableConcept* event;
	Period* period;
	CodeableConcept* facilityType;
	CodeableConcept* practiceSetting;
	Reference* sourcePatientInfo;
	int related_count;
	Reference* related;
};
class DomainResource {
public:
	fhir_string id;
	Meta* meta;
	fhir_uri implicitRules;
	fhir_code language;
	Narrative* text;
	int contained_count;
	Resource* contained;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
};
class EffectEvidenceSynthesis {
public:
	fhir_string id;
	Meta* meta;
	fhir_uri implicitRules;
	fhir_code language;
	Narrative* text;
	int contained_count;
	Resource* contained;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	fhir_uri url;
	int identifier_count;
	Identifier* identifier;
	fhir_string version;
	fhir_string name;
	fhir_string title;
	fhir_code status;
	fhir_dateTime date;
	fhir_string publisher;
	int contact_count;
	ContactDetail* contact;
	fhir_markdown description;
	int note_count;
	Annotation* note;
	int useContext_count;
	UsageContext* useContext;
	int jurisdiction_count;
	CodeableConcept* jurisdiction;
	fhir_markdown copyright;
	fhir_date approvalDate;
	fhir_date lastReviewDate;
	Period* effectivePeriod;
	int topic_count;
	CodeableConcept* topic;
	int author_count;
	ContactDetail* author;
	int editor_count;
	ContactDetail* editor;
	int reviewer_count;
	ContactDetail* reviewer;
	int endorser_count;
	ContactDetail* endorser;
	int relatedArtifact_count;
	RelatedArtifact* relatedArtifact;
	CodeableConcept* synthesisType;
	CodeableConcept* studyType;
	Reference* population;
	Reference* exposure;
	Reference* exposureAlternative;
	Reference* outcome;
	EffectEvidenceSynthesis_SampleSize* sampleSize;
	int resultsByExposure_count;
	EffectEvidenceSynthesis_ResultsByExposure* resultsByExposure;
	int effectEstimate_count;
	EffectEvidenceSynthesis_EffectEstimate* effectEstimate;
	int certainty_count;
	EffectEvidenceSynthesis_Certainty* certainty;
};
class EffectEvidenceSynthesis_SampleSize {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	fhir_string description;
	integer* numberOfStudies;
	integer* numberOfParticipants;
};
class EffectEvidenceSynthesis_ResultsByExposure {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	fhir_string description;
	fhir_code exposureState;
	CodeableConcept* variantState;
	Reference* riskEvidenceSynthesis;
};
class EffectEvidenceSynthesis_EffectEstimate {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	fhir_string description;
	CodeableConcept* type;
	CodeableConcept* variantState;
	fhir_decimal value;
	CodeableConcept* unitOfMeasure;
	int precisionEstimate_count;
	EffectEvidenceSynthesis_EffectEstimate_PrecisionEstimate* precisionEstimate;
};
class EffectEvidenceSynthesis_EffectEstimate_PrecisionEstimate {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	CodeableConcept* type;
	fhir_decimal level;
	fhir_decimal from;
	fhir_decimal to;
};
class EffectEvidenceSynthesis_Certainty {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	int rating_count;
	CodeableConcept* rating;
	int note_count;
	Annotation* note;
	int certaintySubcomponent_count;
	EffectEvidenceSynthesis_Certainty_CertaintySubcomponent* certaintySubcomponent;
};
class EffectEvidenceSynthesis_Certainty_CertaintySubcomponent {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	CodeableConcept* type;
	int rating_count;
	CodeableConcept* rating;
	int note_count;
	Annotation* note;
};
class Encounter {
public:
	fhir_string id;
	Meta* meta;
	fhir_uri implicitRules;
	fhir_code language;
	Narrative* text;
	int contained_count;
	Resource* contained;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	int identifier_count;
	Identifier* identifier;
	fhir_code status;
	int statusHistory_count;
	Encounter_StatusHistory* statusHistory;
	Coding* class_;
	int classHistory_count;
	Encounter_ClassHistory* classHistory;
	int type_count;
	CodeableConcept* type;
	CodeableConcept* serviceType;
	CodeableConcept* priority;
	Reference* subject;
	int episodeOfCare_count;
	Reference* episodeOfCare;
	int basedOn_count;
	Reference* basedOn;
	int participant_count;
	Encounter_Participant* participant;
	int appointment_count;
	Reference* appointment;
	Period* period;
	Duration* length;
	int reasonCode_count;
	CodeableConcept* reasonCode;
	int reasonReference_count;
	Reference* reasonReference;
	int diagnosis_count;
	Encounter_Diagnosis* diagnosis;
	int account_count;
	Reference* account;
	Encounter_Hospitalization* hospitalization;
	int location_count;
	Encounter_Location* location;
	Reference* serviceProvider;
	Reference* partOf;
};
class Encounter_StatusHistory {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	fhir_code status;
	Period* period;
};
class Encounter_ClassHistory {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	Coding* class_;
	Period* period;
};
class Encounter_Participant {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	int type_count;
	CodeableConcept* type;
	Period* period;
	Reference* individual;
};
class Encounter_Diagnosis {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	Reference* condition;
	CodeableConcept* use;
	fhir_positiveInt rank;
};
class Encounter_Hospitalization {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	Identifier* preAdmissionIdentifier;
	Reference* origin;
	CodeableConcept* admitSource;
	CodeableConcept* reAdmission;
	int dietPreference_count;
	CodeableConcept* dietPreference;
	int specialCourtesy_count;
	CodeableConcept* specialCourtesy;
	int specialArrangement_count;
	CodeableConcept* specialArrangement;
	Reference* destination;
	CodeableConcept* dischargeDisposition;
};
class Encounter_Location {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	Reference* location;
	fhir_code status;
	CodeableConcept* physicalType;
	Period* period;
};
class Endpoint {
public:
	fhir_string id;
	Meta* meta;
	fhir_uri implicitRules;
	fhir_code language;
	Narrative* text;
	int contained_count;
	Resource* contained;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	int identifier_count;
	Identifier* identifier;
	fhir_code status;
	Coding* connectionType;
	fhir_string name;
	Reference* managingOrganization;
	int contact_count;
	ContactPoint* contact;
	Period* period;
	int payloadType_count;
	CodeableConcept* payloadType;
	int payloadMimeType_count;
	fhir_code payloadMimeType;
	fhir_url address;
	int header_count;
	fhir_string header;
};
class EnrollmentRequest {
public:
	fhir_string id;
	Meta* meta;
	fhir_uri implicitRules;
	fhir_code language;
	Narrative* text;
	int contained_count;
	Resource* contained;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	int identifier_count;
	Identifier* identifier;
	fhir_code status;
	fhir_dateTime created;
	Reference* insurer;
	Reference* provider;
	Reference* candidate;
	Reference* coverage;
};
class EnrollmentResponse {
public:
	fhir_string id;
	Meta* meta;
	fhir_uri implicitRules;
	fhir_code language;
	Narrative* text;
	int contained_count;
	Resource* contained;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	int identifier_count;
	Identifier* identifier;
	fhir_code status;
	Reference* request;
	fhir_code outcome;
	fhir_string disposition;
	fhir_dateTime created;
	Reference* organization;
	Reference* requestProvider;
};
class EpisodeOfCare {
public:
	fhir_string id;
	Meta* meta;
	fhir_uri implicitRules;
	fhir_code language;
	Narrative* text;
	int contained_count;
	Resource* contained;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	int identifier_count;
	Identifier* identifier;
	fhir_code status;
	int statusHistory_count;
	EpisodeOfCare_StatusHistory* statusHistory;
	int type_count;
	CodeableConcept* type;
	int diagnosis_count;
	EpisodeOfCare_Diagnosis* diagnosis;
	Reference* patient;
	Reference* managingOrganization;
	Period* period;
	int referralRequest_count;
	Reference* referralRequest;
	Reference* careManager;
	int team_count;
	Reference* team;
	int account_count;
	Reference* account;
};
class EpisodeOfCare_StatusHistory {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	fhir_code status;
	Period* period;
};
class EpisodeOfCare_Diagnosis {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	Reference* condition;
	CodeableConcept* role;
	fhir_positiveInt rank;
};
class EventDefinition {
public:
	fhir_string id;
	Meta* meta;
	fhir_uri implicitRules;
	fhir_code language;
	Narrative* text;
	int contained_count;
	Resource* contained;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	fhir_uri url;
	int identifier_count;
	Identifier* identifier;
	fhir_string version;
	fhir_string name;
	fhir_string title;
	fhir_string subtitle;
	fhir_code status;
	fhir_boolean experimental;
	enum class Subject {
		CodeableConcept,
		Reference
	} subject_type;
	union {
		CodeableConcept* _codeableConcept;
		Reference* _reference;
	} subject;

	fhir_dateTime date;
	fhir_string publisher;
	int contact_count;
	ContactDetail* contact;
	fhir_markdown description;
	int useContext_count;
	UsageContext* useContext;
	int jurisdiction_count;
	CodeableConcept* jurisdiction;
	fhir_markdown purpose;
	fhir_string usage;
	fhir_markdown copyright;
	fhir_date approvalDate;
	fhir_date lastReviewDate;
	Period* effectivePeriod;
	int topic_count;
	CodeableConcept* topic;
	int author_count;
	ContactDetail* author;
	int editor_count;
	ContactDetail* editor;
	int reviewer_count;
	ContactDetail* reviewer;
	int endorser_count;
	ContactDetail* endorser;
	int relatedArtifact_count;
	RelatedArtifact* relatedArtifact;
	int trigger_count;
	TriggerDefinition* trigger;
};
class Evidence {
public:
	fhir_string id;
	Meta* meta;
	fhir_uri implicitRules;
	fhir_code language;
	Narrative* text;
	int contained_count;
	Resource* contained;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	fhir_uri url;
	int identifier_count;
	Identifier* identifier;
	fhir_string version;
	fhir_string name;
	fhir_string title;
	fhir_string shortTitle;
	fhir_string subtitle;
	fhir_code status;
	fhir_dateTime date;
	fhir_string publisher;
	int contact_count;
	ContactDetail* contact;
	fhir_markdown description;
	int note_count;
	Annotation* note;
	int useContext_count;
	UsageContext* useContext;
	int jurisdiction_count;
	CodeableConcept* jurisdiction;
	fhir_markdown copyright;
	fhir_date approvalDate;
	fhir_date lastReviewDate;
	Period* effectivePeriod;
	int topic_count;
	CodeableConcept* topic;
	int author_count;
	ContactDetail* author;
	int editor_count;
	ContactDetail* editor;
	int reviewer_count;
	ContactDetail* reviewer;
	int endorser_count;
	ContactDetail* endorser;
	int relatedArtifact_count;
	RelatedArtifact* relatedArtifact;
	Reference* exposureBackground;
	int exposureVariant_count;
	Reference* exposureVariant;
	int outcome_count;
	Reference* outcome;
};
class EvidenceVariable {
public:
	fhir_string id;
	Meta* meta;
	fhir_uri implicitRules;
	fhir_code language;
	Narrative* text;
	int contained_count;
	Resource* contained;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	fhir_uri url;
	int identifier_count;
	Identifier* identifier;
	fhir_string version;
	fhir_string name;
	fhir_string title;
	fhir_string shortTitle;
	fhir_string subtitle;
	fhir_code status;
	fhir_dateTime date;
	fhir_string publisher;
	int contact_count;
	ContactDetail* contact;
	fhir_markdown description;
	int note_count;
	Annotation* note;
	int useContext_count;
	UsageContext* useContext;
	int jurisdiction_count;
	CodeableConcept* jurisdiction;
	fhir_markdown copyright;
	fhir_date approvalDate;
	fhir_date lastReviewDate;
	Period* effectivePeriod;
	int topic_count;
	CodeableConcept* topic;
	int author_count;
	ContactDetail* author;
	int editor_count;
	ContactDetail* editor;
	int reviewer_count;
	ContactDetail* reviewer;
	int endorser_count;
	ContactDetail* endorser;
	int relatedArtifact_count;
	RelatedArtifact* relatedArtifact;
	fhir_code type;
	int characteristic_count;
	EvidenceVariable_Characteristic* characteristic;
};
class EvidenceVariable_Characteristic {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	fhir_string description;
	enum class Definition {
		Reference,
		fhir_canonical,
		CodeableConcept,
		Expression,
		DataRequirement,
		TriggerDefinition
	} definition_type;
	union {
		Reference* _reference;
		fhir_canonical _fhir_canonical;
		CodeableConcept* _codeableConcept;
		Expression* _expression;
		DataRequirement* _dataRequirement;
		TriggerDefinition* _triggerDefinition;
	} definition;

	int usageContext_count;
	UsageContext* usageContext;
	fhir_boolean exclude;
	enum class ParticipantEffective {
		fhir_dateTime,
		Period,
		Duration,
		Timing
	} participantEffective_type;
	union {
		fhir_dateTime _fhir_dateTime;
		Period* _period;
		Duration* _duration;
		Timing* _timing;
	} participantEffective;

	Duration* timeFromStart;
	fhir_code groupMeasure;
};
class ExampleScenario {
public:
	fhir_string id;
	Meta* meta;
	fhir_uri implicitRules;
	fhir_code language;
	Narrative* text;
	int contained_count;
	Resource* contained;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	fhir_uri url;
	int identifier_count;
	Identifier* identifier;
	fhir_string version;
	fhir_string name;
	fhir_code status;
	fhir_boolean experimental;
	fhir_dateTime date;
	fhir_string publisher;
	int contact_count;
	ContactDetail* contact;
	int useContext_count;
	UsageContext* useContext;
	int jurisdiction_count;
	CodeableConcept* jurisdiction;
	fhir_markdown copyright;
	fhir_markdown purpose;
	int actor_count;
	ExampleScenario_Actor* actor;
	int instance_count;
	ExampleScenario_Instance* instance;
	int process_count;
	ExampleScenario_Process* process;
	int workflow_count;
	fhir_canonical workflow;
};
class ExampleScenario_Actor {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	fhir_string actorId;
	fhir_code type;
	fhir_string name;
	fhir_markdown description;
};
class ExampleScenario_Instance {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	fhir_string resourceId;
	fhir_code resourceType;
	fhir_string name;
	fhir_markdown description;
	int version_count;
	ExampleScenario_Instance_Version* version;
	int containedInstance_count;
	ExampleScenario_Instance_ContainedInstance* containedInstance;
};
class ExampleScenario_Instance_Version {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	fhir_string versionId;
	fhir_markdown description;
};
class ExampleScenario_Instance_ContainedInstance {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	fhir_string resourceId;
	fhir_string versionId;
};
class ExampleScenario_Process {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	fhir_string title;
	fhir_markdown description;
	fhir_markdown preConditions;
	fhir_markdown postConditions;
	int step_count;
	ExampleScenario_Process_Step* step;
};
class ExampleScenario_Process_Step {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	int process_count;
	ExampleScenario_Process* process;
	fhir_boolean pause;
	ExampleScenario_Process_Step_Operation* operation;
	int alternative_count;
	ExampleScenario_Process_Step_Alternative* alternative;
};
class ExampleScenario_Process_Step_Operation {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	fhir_string number;
	fhir_string type;
	fhir_string name;
	fhir_string initiator;
	fhir_string receiver;
	fhir_markdown description;
	fhir_boolean initiatorActive;
	fhir_boolean receiverActive;
	ExampleScenario_Instance_ContainedInstance* request;
	ExampleScenario_Instance_ContainedInstance* response;
};
class ExampleScenario_Process_Step_Alternative {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	fhir_string title;
	fhir_markdown description;
	int step_count;
	ExampleScenario_Process_Step* step;
};
class ExplanationOfBenefit {
public:
	fhir_string id;
	Meta* meta;
	fhir_uri implicitRules;
	fhir_code language;
	Narrative* text;
	int contained_count;
	Resource* contained;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	int identifier_count;
	Identifier* identifier;
	fhir_code status;
	CodeableConcept* type;
	CodeableConcept* subType;
	fhir_code use;
	Reference* patient;
	Period* billablePeriod;
	fhir_dateTime created;
	Reference* enterer;
	Reference* insurer;
	Reference* provider;
	CodeableConcept* priority;
	CodeableConcept* fundsReserveRequested;
	CodeableConcept* fundsReserve;
	int related_count;
	ExplanationOfBenefit_Related* related;
	Reference* prescription;
	Reference* originalPrescription;
	ExplanationOfBenefit_Payee* payee;
	Reference* referral;
	Reference* facility;
	Reference* claim;
	Reference* claimResponse;
	fhir_code outcome;
	fhir_string disposition;
	int preAuthRef_count;
	fhir_string preAuthRef;
	int preAuthRefPeriod_count;
	Period* preAuthRefPeriod;
	int careTeam_count;
	ExplanationOfBenefit_CareTeam* careTeam;
	int supportingInfo_count;
	ExplanationOfBenefit_SupportingInfo* supportingInfo;
	int diagnosis_count;
	ExplanationOfBenefit_Diagnosis* diagnosis;
	int procedure_count;
	ExplanationOfBenefit_Procedure* procedure;
	fhir_positiveInt precedence;
	int insurance_count;
	ExplanationOfBenefit_Insurance* insurance;
	ExplanationOfBenefit_Accident* accident;
	int item_count;
	ExplanationOfBenefit_Item* item;
	int addItem_count;
	ExplanationOfBenefit_AddItem* addItem;
	int adjudication_count;
	ExplanationOfBenefit_Item_Adjudication* adjudication;
	int total_count;
	ExplanationOfBenefit_Total* total;
	ExplanationOfBenefit_Payment* payment;
	CodeableConcept* formCode;
	Attachment* form;
	int processNote_count;
	ExplanationOfBenefit_ProcessNote* processNote;
	Period* benefitPeriod;
	int benefitBalance_count;
	ExplanationOfBenefit_BenefitBalance* benefitBalance;
};
class ExplanationOfBenefit_Related {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	Reference* claim;
	CodeableConcept* relationship;
	Identifier* reference;
};
class ExplanationOfBenefit_Payee {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	CodeableConcept* type;
	Reference* party;
};
class ExplanationOfBenefit_CareTeam {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	fhir_positiveInt sequence;
	Reference* provider;
	fhir_boolean responsible;
	CodeableConcept* role;
	CodeableConcept* qualification;
};
class ExplanationOfBenefit_SupportingInfo {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	fhir_positiveInt sequence;
	CodeableConcept* category;
	CodeableConcept* code;
	enum class Timing {
		fhir_date,
		Period
	} timing_type;
	union {
		fhir_date _fhir_date;
		Period* _period;
	} timing;

	enum class Value {
		fhir_boolean,
		fhir_string,
		Quantity,
		Attachment,
		Reference
	} value_type;
	union {
		fhir_boolean _fhir_boolean;
		fhir_string _fhir_string;
		Quantity* _quantity;
		Attachment* _attachment;
		Reference* _reference;
	} value;

	Coding* reason;
};
class ExplanationOfBenefit_Diagnosis {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	fhir_positiveInt sequence;
	enum class Diagnosis {
		CodeableConcept,
		Reference
	} diagnosis_type;
	union {
		CodeableConcept* _codeableConcept;
		Reference* _reference;
	} diagnosis;

	int type_count;
	CodeableConcept* type;
	CodeableConcept* onAdmission;
	CodeableConcept* packageCode;
};
class ExplanationOfBenefit_Procedure {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	fhir_positiveInt sequence;
	int type_count;
	CodeableConcept* type;
	fhir_dateTime date;
	enum class Procedure {
		CodeableConcept,
		Reference
	} procedure_type;
	union {
		CodeableConcept* _codeableConcept;
		Reference* _reference;
	} procedure;

	int udi_count;
	Reference* udi;
};
class ExplanationOfBenefit_Insurance {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	fhir_boolean focal;
	Reference* coverage;
	int preAuthRef_count;
	fhir_string preAuthRef;
};
class ExplanationOfBenefit_Accident {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	fhir_date date;
	CodeableConcept* type;
	enum class Location {
		Address,
		Reference
	} location_type;
	union {
		Address* _address;
		Reference* _reference;
	} location;

};
class ExplanationOfBenefit_Item {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	fhir_positiveInt sequence;
	int careTeamSequence_count;
	fhir_positiveInt careTeamSequence;
	int diagnosisSequence_count;
	fhir_positiveInt diagnosisSequence;
	int procedureSequence_count;
	fhir_positiveInt procedureSequence;
	int informationSequence_count;
	fhir_positiveInt informationSequence;
	CodeableConcept* revenue;
	CodeableConcept* category;
	CodeableConcept* productOrService;
	int modifier_count;
	CodeableConcept* modifier;
	int programCode_count;
	CodeableConcept* programCode;
	enum class Serviced {
		fhir_date,
		Period
	} serviced_type;
	union {
		fhir_date _fhir_date;
		Period* _period;
	} serviced;

	enum class Location {
		CodeableConcept,
		Address,
		Reference
	} location_type;
	union {
		CodeableConcept* _codeableConcept;
		Address* _address;
		Reference* _reference;
	} location;

	Quantity* quantity;
	Money* unitPrice;
	fhir_decimal factor;
	Money* net;
	int udi_count;
	Reference* udi;
	CodeableConcept* bodySite;
	int subSite_count;
	CodeableConcept* subSite;
	int encounter_count;
	Reference* encounter;
	int noteNumber_count;
	fhir_positiveInt noteNumber;
	int adjudication_count;
	ExplanationOfBenefit_Item_Adjudication* adjudication;
	int detail_count;
	ExplanationOfBenefit_Item_Detail* detail;
};
class ExplanationOfBenefit_Item_Adjudication {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	CodeableConcept* category;
	CodeableConcept* reason;
	Money* amount;
	fhir_decimal value;
};
class ExplanationOfBenefit_Item_Detail {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	fhir_positiveInt sequence;
	CodeableConcept* revenue;
	CodeableConcept* category;
	CodeableConcept* productOrService;
	int modifier_count;
	CodeableConcept* modifier;
	int programCode_count;
	CodeableConcept* programCode;
	Quantity* quantity;
	Money* unitPrice;
	fhir_decimal factor;
	Money* net;
	int udi_count;
	Reference* udi;
	int noteNumber_count;
	fhir_positiveInt noteNumber;
	int adjudication_count;
	ExplanationOfBenefit_Item_Adjudication* adjudication;
	int subDetail_count;
	ExplanationOfBenefit_Item_Detail_SubDetail* subDetail;
};
class ExplanationOfBenefit_Item_Detail_SubDetail {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	fhir_positiveInt sequence;
	CodeableConcept* revenue;
	CodeableConcept* category;
	CodeableConcept* productOrService;
	int modifier_count;
	CodeableConcept* modifier;
	int programCode_count;
	CodeableConcept* programCode;
	Quantity* quantity;
	Money* unitPrice;
	fhir_decimal factor;
	Money* net;
	int udi_count;
	Reference* udi;
	int noteNumber_count;
	fhir_positiveInt noteNumber;
	int adjudication_count;
	ExplanationOfBenefit_Item_Adjudication* adjudication;
};
class ExplanationOfBenefit_AddItem {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	int itemSequence_count;
	fhir_positiveInt itemSequence;
	int detailSequence_count;
	fhir_positiveInt detailSequence;
	int subDetailSequence_count;
	fhir_positiveInt subDetailSequence;
	int provider_count;
	Reference* provider;
	CodeableConcept* productOrService;
	int modifier_count;
	CodeableConcept* modifier;
	int programCode_count;
	CodeableConcept* programCode;
	enum class Serviced {
		fhir_date,
		Period
	} serviced_type;
	union {
		fhir_date _fhir_date;
		Period* _period;
	} serviced;

	enum class Location {
		CodeableConcept,
		Address,
		Reference
	} location_type;
	union {
		CodeableConcept* _codeableConcept;
		Address* _address;
		Reference* _reference;
	} location;

	Quantity* quantity;
	Money* unitPrice;
	fhir_decimal factor;
	Money* net;
	CodeableConcept* bodySite;
	int subSite_count;
	CodeableConcept* subSite;
	int noteNumber_count;
	fhir_positiveInt noteNumber;
	int adjudication_count;
	ExplanationOfBenefit_Item_Adjudication* adjudication;
	int detail_count;
	ExplanationOfBenefit_AddItem_Detail* detail;
};
class ExplanationOfBenefit_AddItem_Detail {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	CodeableConcept* productOrService;
	int modifier_count;
	CodeableConcept* modifier;
	Quantity* quantity;
	Money* unitPrice;
	fhir_decimal factor;
	Money* net;
	int noteNumber_count;
	fhir_positiveInt noteNumber;
	int adjudication_count;
	ExplanationOfBenefit_Item_Adjudication* adjudication;
	int subDetail_count;
	ExplanationOfBenefit_AddItem_Detail_SubDetail* subDetail;
};
class ExplanationOfBenefit_AddItem_Detail_SubDetail {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	CodeableConcept* productOrService;
	int modifier_count;
	CodeableConcept* modifier;
	Quantity* quantity;
	Money* unitPrice;
	fhir_decimal factor;
	Money* net;
	int noteNumber_count;
	fhir_positiveInt noteNumber;
	int adjudication_count;
	ExplanationOfBenefit_Item_Adjudication* adjudication;
};
class ExplanationOfBenefit_Total {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	CodeableConcept* category;
	Money* amount;
};
class ExplanationOfBenefit_Payment {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	CodeableConcept* type;
	Money* adjustment;
	CodeableConcept* adjustmentReason;
	fhir_date date;
	Money* amount;
	Identifier* identifier;
};
class ExplanationOfBenefit_ProcessNote {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	fhir_positiveInt number;
	fhir_code type;
	fhir_string text;
	CodeableConcept* language;
};
class ExplanationOfBenefit_BenefitBalance {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	CodeableConcept* category;
	fhir_boolean excluded;
	fhir_string name;
	fhir_string description;
	CodeableConcept* network;
	CodeableConcept* unit;
	CodeableConcept* term;
	int financial_count;
	ExplanationOfBenefit_BenefitBalance_Financial* financial;
};
class ExplanationOfBenefit_BenefitBalance_Financial {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	CodeableConcept* type;
	enum class Allowed {
		fhir_unsignedInt,
		fhir_string,
		Money
	} allowed_type;
	union {
		fhir_unsignedInt _fhir_unsignedInt;
		fhir_string _fhir_string;
		Money* _money;
	} allowed;

	enum class Used {
		fhir_unsignedInt,
		Money
	} used_type;
	union {
		fhir_unsignedInt _fhir_unsignedInt;
		Money* _money;
	} used;

};
class FamilyMemberHistory {
public:
	fhir_string id;
	Meta* meta;
	fhir_uri implicitRules;
	fhir_code language;
	Narrative* text;
	int contained_count;
	Resource* contained;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	int identifier_count;
	Identifier* identifier;
	int instantiatesCanonical_count;
	fhir_canonical instantiatesCanonical;
	int instantiatesUri_count;
	fhir_uri instantiatesUri;
	fhir_code status;
	CodeableConcept* dataAbsentReason;
	Reference* patient;
	fhir_dateTime date;
	fhir_string name;
	CodeableConcept* relationship;
	CodeableConcept* sex;
	enum class Born {
		Period,
		fhir_date,
		fhir_string
	} born_type;
	union {
		Period* _period;
		fhir_date _fhir_date;
		fhir_string _fhir_string;
	} born;

	enum class Age {
		Age,
		Range,
		fhir_string
	} age_type;
	union {
		Age* _age;
		Range* _range;
		fhir_string _fhir_string;
	} age;

	fhir_boolean estimatedAge;
	enum class Deceased {
		fhir_boolean,
		Age,
		Range,
		fhir_date,
		fhir_string
	} deceased_type;
	union {
		fhir_boolean _fhir_boolean;
		Age* _age;
		Range* _range;
		fhir_date _fhir_date;
		fhir_string _fhir_string;
	} deceased;

	int reasonCode_count;
	CodeableConcept* reasonCode;
	int reasonReference_count;
	Reference* reasonReference;
	int note_count;
	Annotation* note;
	int condition_count;
	FamilyMemberHistory_Condition* condition;
};
class FamilyMemberHistory_Condition {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	CodeableConcept* code;
	CodeableConcept* outcome;
	fhir_boolean contributedToDeath;
	enum class Onset {
		Age,
		Range,
		Period,
		fhir_string
	} onset_type;
	union {
		Age* _age;
		Range* _range;
		Period* _period;
		fhir_string _fhir_string;
	} onset;

	int note_count;
	Annotation* note;
};
class Flag {
public:
	fhir_string id;
	Meta* meta;
	fhir_uri implicitRules;
	fhir_code language;
	Narrative* text;
	int contained_count;
	Resource* contained;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	int identifier_count;
	Identifier* identifier;
	fhir_code status;
	int category_count;
	CodeableConcept* category;
	CodeableConcept* code;
	Reference* subject;
	Period* period;
	Reference* encounter;
	Reference* author;
};
class Goal {
public:
	fhir_string id;
	Meta* meta;
	fhir_uri implicitRules;
	fhir_code language;
	Narrative* text;
	int contained_count;
	Resource* contained;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	int identifier_count;
	Identifier* identifier;
	fhir_code lifecycleStatus;
	CodeableConcept* achievementStatus;
	int category_count;
	CodeableConcept* category;
	CodeableConcept* priority;
	CodeableConcept* description;
	Reference* subject;
	enum class Start {
		fhir_date,
		CodeableConcept
	} start_type;
	union {
		fhir_date _fhir_date;
		CodeableConcept* _codeableConcept;
	} start;

	int target_count;
	Goal_Target* target;
	fhir_date statusDate;
	fhir_string statusReason;
	Reference* expressedBy;
	int addresses_count;
	Reference* addresses;
	int note_count;
	Annotation* note;
	int outcomeCode_count;
	CodeableConcept* outcomeCode;
	int outcomeReference_count;
	Reference* outcomeReference;
};
class Goal_Target {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	CodeableConcept* measure;
	enum class Detail {
		Quantity,
		Range,
		CodeableConcept,
		fhir_string,
		fhir_boolean,
		integer,
		Ratio
	} detail_type;
	union {
		Quantity* _quantity;
		Range* _range;
		CodeableConcept* _codeableConcept;
		fhir_string _fhir_string;
		fhir_boolean _fhir_boolean;
		integer* _integer;
		Ratio* _ratio;
	} detail;

	enum class Due {
		fhir_date,
		Duration
	} due_type;
	union {
		fhir_date _fhir_date;
		Duration* _duration;
	} due;

};
class GraphDefinition {
public:
	fhir_string id;
	Meta* meta;
	fhir_uri implicitRules;
	fhir_code language;
	Narrative* text;
	int contained_count;
	Resource* contained;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	fhir_uri url;
	fhir_string version;
	fhir_string name;
	fhir_code status;
	fhir_boolean experimental;
	fhir_dateTime date;
	fhir_string publisher;
	int contact_count;
	ContactDetail* contact;
	fhir_markdown description;
	int useContext_count;
	UsageContext* useContext;
	int jurisdiction_count;
	CodeableConcept* jurisdiction;
	fhir_markdown purpose;
	fhir_code start;
	fhir_canonical profile;
	int link_count;
	GraphDefinition_Link* link;
};
class GraphDefinition_Link {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	fhir_string path;
	fhir_string sliceName;
	integer* min;
	fhir_string max;
	fhir_string description;
	int target_count;
	GraphDefinition_Link_Target* target;
};
class GraphDefinition_Link_Target {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	fhir_code type;
	fhir_string params;
	fhir_canonical profile;
	int compartment_count;
	GraphDefinition_Link_Target_Compartment* compartment;
	int link_count;
	GraphDefinition_Link* link;
};
class GraphDefinition_Link_Target_Compartment {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	fhir_code use;
	fhir_code code;
	fhir_code rule;
	fhir_string expression;
	fhir_string description;
};
class Group {
public:
	fhir_string id;
	Meta* meta;
	fhir_uri implicitRules;
	fhir_code language;
	Narrative* text;
	int contained_count;
	Resource* contained;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	int identifier_count;
	Identifier* identifier;
	fhir_boolean active;
	fhir_code type;
	fhir_boolean actual;
	CodeableConcept* code;
	fhir_string name;
	fhir_unsignedInt quantity;
	Reference* managingEntity;
	int characteristic_count;
	Group_Characteristic* characteristic;
	int member_count;
	Group_Member* member;
};
class Group_Characteristic {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	CodeableConcept* code;
	enum class Value {
		CodeableConcept,
		fhir_boolean,
		Quantity,
		Range,
		Reference
	} value_type;
	union {
		CodeableConcept* _codeableConcept;
		fhir_boolean _fhir_boolean;
		Quantity* _quantity;
		Range* _range;
		Reference* _reference;
	} value;

	fhir_boolean exclude;
	Period* period;
};
class Group_Member {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	Reference* entity;
	Period* period;
	fhir_boolean inactive;
};
class GuidanceResponse {
public:
	fhir_string id;
	Meta* meta;
	fhir_uri implicitRules;
	fhir_code language;
	Narrative* text;
	int contained_count;
	Resource* contained;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	Identifier* requestIdentifier;
	int identifier_count;
	Identifier* identifier;
	enum class Module {
		fhir_uri,
		fhir_canonical,
		CodeableConcept
	} module_type;
	union {
		fhir_uri _fhir_uri;
		fhir_canonical _fhir_canonical;
		CodeableConcept* _codeableConcept;
	} module;

	fhir_code status;
	Reference* subject;
	Reference* encounter;
	fhir_dateTime occurrenceDateTime;
	Reference* performer;
	int reasonCode_count;
	CodeableConcept* reasonCode;
	int reasonReference_count;
	Reference* reasonReference;
	int note_count;
	Annotation* note;
	int evaluationMessage_count;
	Reference* evaluationMessage;
	Reference* outputParameters;
	Reference* result;
	int dataRequirement_count;
	DataRequirement* dataRequirement;
};
class HealthcareService {
public:
	fhir_string id;
	Meta* meta;
	fhir_uri implicitRules;
	fhir_code language;
	Narrative* text;
	int contained_count;
	Resource* contained;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	int identifier_count;
	Identifier* identifier;
	fhir_boolean active;
	Reference* providedBy;
	int category_count;
	CodeableConcept* category;
	int type_count;
	CodeableConcept* type;
	int specialty_count;
	CodeableConcept* specialty;
	int location_count;
	Reference* location;
	fhir_string name;
	fhir_string comment;
	fhir_markdown extraDetails;
	Attachment* photo;
	int telecom_count;
	ContactPoint* telecom;
	int coverageArea_count;
	Reference* coverageArea;
	int serviceProvisionCode_count;
	CodeableConcept* serviceProvisionCode;
	int eligibility_count;
	HealthcareService_Eligibility* eligibility;
	int program_count;
	CodeableConcept* program;
	int characteristic_count;
	CodeableConcept* characteristic;
	int communication_count;
	CodeableConcept* communication;
	int referralMethod_count;
	CodeableConcept* referralMethod;
	fhir_boolean appointmentRequired;
	int availableTime_count;
	HealthcareService_AvailableTime* availableTime;
	int notAvailable_count;
	HealthcareService_NotAvailable* notAvailable;
	fhir_string availabilityExceptions;
	int endpoint_count;
	Reference* endpoint;
};
class HealthcareService_Eligibility {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	CodeableConcept* code;
	fhir_markdown comment;
};
class HealthcareService_AvailableTime {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	int daysOfWeek_count;
	fhir_code daysOfWeek;
	fhir_boolean allDay;
	fhir_time availableStartTime;
	fhir_time availableEndTime;
};
class HealthcareService_NotAvailable {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	fhir_string description;
	Period* during;
};
class ImagingStudy {
public:
	fhir_string id;
	Meta* meta;
	fhir_uri implicitRules;
	fhir_code language;
	Narrative* text;
	int contained_count;
	Resource* contained;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	int identifier_count;
	Identifier* identifier;
	fhir_code status;
	int modality_count;
	Coding* modality;
	Reference* subject;
	Reference* encounter;
	fhir_dateTime started;
	int basedOn_count;
	Reference* basedOn;
	Reference* referrer;
	int interpreter_count;
	Reference* interpreter;
	int endpoint_count;
	Reference* endpoint;
	fhir_unsignedInt numberOfSeries;
	fhir_unsignedInt numberOfInstances;
	Reference* procedureReference;
	int procedureCode_count;
	CodeableConcept* procedureCode;
	Reference* location;
	int reasonCode_count;
	CodeableConcept* reasonCode;
	int reasonReference_count;
	Reference* reasonReference;
	int note_count;
	Annotation* note;
	fhir_string description;
	int series_count;
	ImagingStudy_Series* series;
};
class ImagingStudy_Series {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	fhir_id uid;
	fhir_unsignedInt number;
	Coding* modality;
	fhir_string description;
	fhir_unsignedInt numberOfInstances;
	int endpoint_count;
	Reference* endpoint;
	Coding* bodySite;
	Coding* laterality;
	int specimen_count;
	Reference* specimen;
	fhir_dateTime started;
	int performer_count;
	ImagingStudy_Series_Performer* performer;
	int instance_count;
	ImagingStudy_Series_Instance* instance;
};
class ImagingStudy_Series_Performer {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	CodeableConcept* function;
	Reference* actor;
};
class ImagingStudy_Series_Instance {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	fhir_id uid;
	Coding* sopClass;
	fhir_unsignedInt number;
	fhir_string title;
};
class Immunization {
public:
	fhir_string id;
	Meta* meta;
	fhir_uri implicitRules;
	fhir_code language;
	Narrative* text;
	int contained_count;
	Resource* contained;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	int identifier_count;
	Identifier* identifier;
	fhir_code status;
	CodeableConcept* statusReason;
	CodeableConcept* vaccineCode;
	Reference* patient;
	Reference* encounter;
	enum class Occurrence {
		fhir_dateTime,
		fhir_string
	} occurrence_type;
	union {
		fhir_dateTime _fhir_dateTime;
		fhir_string _fhir_string;
	} occurrence;

	fhir_dateTime recorded;
	fhir_boolean primarySource;
	CodeableConcept* reportOrigin;
	Reference* location;
	Reference* manufacturer;
	fhir_string lotNumber;
	fhir_date expirationDate;
	CodeableConcept* site;
	CodeableConcept* route;
	Quantity* doseQuantity;
	int performer_count;
	Immunization_Performer* performer;
	int note_count;
	Annotation* note;
	int reasonCode_count;
	CodeableConcept* reasonCode;
	int reasonReference_count;
	Reference* reasonReference;
	fhir_boolean isSubpotent;
	int subpotentReason_count;
	CodeableConcept* subpotentReason;
	int education_count;
	Immunization_Education* education;
	int programEligibility_count;
	CodeableConcept* programEligibility;
	CodeableConcept* fundingSource;
	int reaction_count;
	Immunization_Reaction* reaction;
	int protocolApplied_count;
	Immunization_ProtocolApplied* protocolApplied;
};
class Immunization_Performer {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	CodeableConcept* function;
	Reference* actor;
};
class Immunization_Education {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	fhir_string documentType;
	fhir_uri reference;
	fhir_dateTime publicationDate;
	fhir_dateTime presentationDate;
};
class Immunization_Reaction {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	fhir_dateTime date;
	Reference* detail;
	fhir_boolean reported;
};
class Immunization_ProtocolApplied {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	fhir_string series;
	Reference* authority;
	int targetDisease_count;
	CodeableConcept* targetDisease;
	enum class DoseNumber {
		fhir_positiveInt,
		fhir_string
	} doseNumber_type;
	union {
		fhir_positiveInt _fhir_positiveInt;
		fhir_string _fhir_string;
	} doseNumber;

	enum class SeriesDoses {
		fhir_positiveInt,
		fhir_string
	} seriesDoses_type;
	union {
		fhir_positiveInt _fhir_positiveInt;
		fhir_string _fhir_string;
	} seriesDoses;

};
class ImmunizationEvaluation {
public:
	fhir_string id;
	Meta* meta;
	fhir_uri implicitRules;
	fhir_code language;
	Narrative* text;
	int contained_count;
	Resource* contained;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	int identifier_count;
	Identifier* identifier;
	fhir_code status;
	Reference* patient;
	fhir_dateTime date;
	Reference* authority;
	CodeableConcept* targetDisease;
	Reference* immunizationEvent;
	CodeableConcept* doseStatus;
	int doseStatusReason_count;
	CodeableConcept* doseStatusReason;
	fhir_string description;
	fhir_string series;
	enum class DoseNumber {
		fhir_positiveInt,
		fhir_string
	} doseNumber_type;
	union {
		fhir_positiveInt _fhir_positiveInt;
		fhir_string _fhir_string;
	} doseNumber;

	enum class SeriesDoses {
		fhir_positiveInt,
		fhir_string
	} seriesDoses_type;
	union {
		fhir_positiveInt _fhir_positiveInt;
		fhir_string _fhir_string;
	} seriesDoses;

};
class ImmunizationRecommendation {
public:
	fhir_string id;
	Meta* meta;
	fhir_uri implicitRules;
	fhir_code language;
	Narrative* text;
	int contained_count;
	Resource* contained;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	int identifier_count;
	Identifier* identifier;
	Reference* patient;
	fhir_dateTime date;
	Reference* authority;
	int recommendation_count;
	ImmunizationRecommendation_Recommendation* recommendation;
};
class ImmunizationRecommendation_Recommendation {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	int vaccineCode_count;
	CodeableConcept* vaccineCode;
	CodeableConcept* targetDisease;
	int contraindicatedVaccineCode_count;
	CodeableConcept* contraindicatedVaccineCode;
	CodeableConcept* forecastStatus;
	int forecastReason_count;
	CodeableConcept* forecastReason;
	int dateCriterion_count;
	ImmunizationRecommendation_Recommendation_DateCriterion* dateCriterion;
	fhir_string description;
	fhir_string series;
	enum class DoseNumber {
		fhir_positiveInt,
		fhir_string
	} doseNumber_type;
	union {
		fhir_positiveInt _fhir_positiveInt;
		fhir_string _fhir_string;
	} doseNumber;

	enum class SeriesDoses {
		fhir_positiveInt,
		fhir_string
	} seriesDoses_type;
	union {
		fhir_positiveInt _fhir_positiveInt;
		fhir_string _fhir_string;
	} seriesDoses;

	int supportingImmunization_count;
	Reference* supportingImmunization;
	int supportingPatientInformation_count;
	Reference* supportingPatientInformation;
};
class ImmunizationRecommendation_Recommendation_DateCriterion {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	CodeableConcept* code;
	fhir_dateTime value;
};
class ImplementationGuide {
public:
	fhir_string id;
	Meta* meta;
	fhir_uri implicitRules;
	fhir_code language;
	Narrative* text;
	int contained_count;
	Resource* contained;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	fhir_uri url;
	fhir_string version;
	fhir_string name;
	fhir_string title;
	fhir_code status;
	fhir_boolean experimental;
	fhir_dateTime date;
	fhir_string publisher;
	int contact_count;
	ContactDetail* contact;
	fhir_markdown description;
	int useContext_count;
	UsageContext* useContext;
	int jurisdiction_count;
	CodeableConcept* jurisdiction;
	fhir_markdown copyright;
	fhir_id packageId;
	fhir_code license;
	int fhirVersion_count;
	fhir_code fhirVersion;
	int dependsOn_count;
	ImplementationGuide_DependsOn* dependsOn;
	int global_count;
	ImplementationGuide_Global* global;
	ImplementationGuide_Definition* definition;
	ImplementationGuide_Manifest* manifest;
};
class ImplementationGuide_DependsOn {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	fhir_canonical uri;
	fhir_id packageId;
	fhir_string version;
};
class ImplementationGuide_Global {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	fhir_code type;
	fhir_canonical profile;
};
class ImplementationGuide_Definition {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	int grouping_count;
	ImplementationGuide_Definition_Grouping* grouping;
	int resource_count;
	ImplementationGuide_Definition_Resource* resource;
	ImplementationGuide_Definition_Page* page;
	int parameter_count;
	ImplementationGuide_Definition_Parameter* parameter;
	int template__count;
	ImplementationGuide_Definition_Template* template_;
};
class ImplementationGuide_Definition_Grouping {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	fhir_string name;
	fhir_string description;
};
class ImplementationGuide_Definition_Resource {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	Reference* reference;
	int fhirVersion_count;
	fhir_code fhirVersion;
	fhir_string name;
	fhir_string description;
	enum class Example {
		fhir_boolean,
		fhir_canonical
	} example_type;
	union {
		fhir_boolean _fhir_boolean;
		fhir_canonical _fhir_canonical;
	} example;

	fhir_id groupingId;
};
class ImplementationGuide_Definition_Page {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	enum class Name {
		fhir_url,
		Reference
	} name_type;
	union {
		fhir_url _fhir_url;
		Reference* _reference;
	} name;

	fhir_string title;
	fhir_code generation;
	int page_count;
	ImplementationGuide_Definition_Page* page;
};
class ImplementationGuide_Definition_Parameter {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	fhir_code code;
	fhir_string value;
};
class ImplementationGuide_Definition_Template {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	fhir_code code;
	fhir_string source;
	fhir_string scope;
};
class ImplementationGuide_Manifest {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	fhir_url rendering;
	int resource_count;
	ImplementationGuide_Manifest_Resource* resource;
	int page_count;
	ImplementationGuide_Manifest_Page* page;
	int image_count;
	fhir_string image;
	int other_count;
	fhir_string other;
};
class ImplementationGuide_Manifest_Resource {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	Reference* reference;
	enum class Example {
		fhir_boolean,
		fhir_canonical
	} example_type;
	union {
		fhir_boolean _fhir_boolean;
		fhir_canonical _fhir_canonical;
	} example;

	fhir_url relativePath;
};
class ImplementationGuide_Manifest_Page {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	fhir_string name;
	fhir_string title;
	int anchor_count;
	fhir_string anchor;
};
class InsurancePlan {
public:
	fhir_string id;
	Meta* meta;
	fhir_uri implicitRules;
	fhir_code language;
	Narrative* text;
	int contained_count;
	Resource* contained;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	int identifier_count;
	Identifier* identifier;
	fhir_code status;
	int type_count;
	CodeableConcept* type;
	fhir_string name;
	int alias_count;
	fhir_string alias;
	Period* period;
	Reference* ownedBy;
	Reference* administeredBy;
	int coverageArea_count;
	Reference* coverageArea;
	int contact_count;
	InsurancePlan_Contact* contact;
	int endpoint_count;
	Reference* endpoint;
	int network_count;
	Reference* network;
	int coverage_count;
	InsurancePlan_Coverage* coverage;
	int plan_count;
	InsurancePlan_Plan* plan;
};
class InsurancePlan_Contact {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	CodeableConcept* purpose;
	HumanName* name;
	int telecom_count;
	ContactPoint* telecom;
	Address* address;
};
class InsurancePlan_Coverage {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	CodeableConcept* type;
	int network_count;
	Reference* network;
	int benefit_count;
	InsurancePlan_Coverage_Benefit* benefit;
};
class InsurancePlan_Coverage_Benefit {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	CodeableConcept* type;
	fhir_string requirement;
	int limit_count;
	InsurancePlan_Coverage_Benefit_Limit* limit;
};
class InsurancePlan_Coverage_Benefit_Limit {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	Quantity* value;
	CodeableConcept* code;
};
class InsurancePlan_Plan {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	int identifier_count;
	Identifier* identifier;
	CodeableConcept* type;
	int coverageArea_count;
	Reference* coverageArea;
	int network_count;
	Reference* network;
	int generalCost_count;
	InsurancePlan_Plan_GeneralCost* generalCost;
	int specificCost_count;
	InsurancePlan_Plan_SpecificCost* specificCost;
};
class InsurancePlan_Plan_GeneralCost {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	CodeableConcept* type;
	fhir_positiveInt groupSize;
	Money* cost;
	fhir_string comment;
};
class InsurancePlan_Plan_SpecificCost {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	CodeableConcept* category;
	int benefit_count;
	InsurancePlan_Plan_SpecificCost_Benefit* benefit;
};
class InsurancePlan_Plan_SpecificCost_Benefit {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	CodeableConcept* type;
	int cost_count;
	InsurancePlan_Plan_SpecificCost_Benefit_Cost* cost;
};
class InsurancePlan_Plan_SpecificCost_Benefit_Cost {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	CodeableConcept* type;
	CodeableConcept* applicability;
	int qualifiers_count;
	CodeableConcept* qualifiers;
	Quantity* value;
};
class Invoice {
public:
	fhir_string id;
	Meta* meta;
	fhir_uri implicitRules;
	fhir_code language;
	Narrative* text;
	int contained_count;
	Resource* contained;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	int identifier_count;
	Identifier* identifier;
	fhir_code status;
	fhir_string cancelledReason;
	CodeableConcept* type;
	Reference* subject;
	Reference* recipient;
	fhir_dateTime date;
	int participant_count;
	Invoice_Participant* participant;
	Reference* issuer;
	Reference* account;
	int lineItem_count;
	Invoice_LineItem* lineItem;
	int totalPriceComponent_count;
	Invoice_LineItem_PriceComponent* totalPriceComponent;
	Money* totalNet;
	Money* totalGross;
	fhir_markdown paymentTerms;
	int note_count;
	Annotation* note;
};
class Invoice_Participant {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	CodeableConcept* role;
	Reference* actor;
};
class Invoice_LineItem {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	fhir_positiveInt sequence;
	enum class ChargeItem {
		Reference,
		CodeableConcept
	} chargeItem_type;
	union {
		Reference* _reference;
		CodeableConcept* _codeableConcept;
	} chargeItem;

	int priceComponent_count;
	Invoice_LineItem_PriceComponent* priceComponent;
};
class Invoice_LineItem_PriceComponent {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	fhir_code type;
	CodeableConcept* code;
	fhir_decimal factor;
	Money* amount;
};
class Library {
public:
	fhir_string id;
	Meta* meta;
	fhir_uri implicitRules;
	fhir_code language;
	Narrative* text;
	int contained_count;
	Resource* contained;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	fhir_uri url;
	int identifier_count;
	Identifier* identifier;
	fhir_string version;
	fhir_string name;
	fhir_string title;
	fhir_string subtitle;
	fhir_code status;
	fhir_boolean experimental;
	CodeableConcept* type;
	enum class Subject {
		CodeableConcept,
		Reference
	} subject_type;
	union {
		CodeableConcept* _codeableConcept;
		Reference* _reference;
	} subject;

	fhir_dateTime date;
	fhir_string publisher;
	int contact_count;
	ContactDetail* contact;
	fhir_markdown description;
	int useContext_count;
	UsageContext* useContext;
	int jurisdiction_count;
	CodeableConcept* jurisdiction;
	fhir_markdown purpose;
	fhir_string usage;
	fhir_markdown copyright;
	fhir_date approvalDate;
	fhir_date lastReviewDate;
	Period* effectivePeriod;
	int topic_count;
	CodeableConcept* topic;
	int author_count;
	ContactDetail* author;
	int editor_count;
	ContactDetail* editor;
	int reviewer_count;
	ContactDetail* reviewer;
	int endorser_count;
	ContactDetail* endorser;
	int relatedArtifact_count;
	RelatedArtifact* relatedArtifact;
	int parameter_count;
	ParameterDefinition* parameter;
	int dataRequirement_count;
	DataRequirement* dataRequirement;
	int content_count;
	Attachment* content;
};
class Linkage {
public:
	fhir_string id;
	Meta* meta;
	fhir_uri implicitRules;
	fhir_code language;
	Narrative* text;
	int contained_count;
	Resource* contained;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	fhir_boolean active;
	Reference* author;
	int item_count;
	Linkage_Item* item;
};
class Linkage_Item {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	fhir_code type;
	Reference* resource;
};
class List {
public:
	fhir_string id;
	Meta* meta;
	fhir_uri implicitRules;
	fhir_code language;
	Narrative* text;
	int contained_count;
	Resource* contained;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	int identifier_count;
	Identifier* identifier;
	fhir_code status;
	fhir_code mode;
	fhir_string title;
	CodeableConcept* code;
	Reference* subject;
	Reference* encounter;
	fhir_dateTime date;
	Reference* source;
	CodeableConcept* orderedBy;
	int note_count;
	Annotation* note;
	int entry_count;
	List_Entry* entry;
	CodeableConcept* emptyReason;
};
class List_Entry {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	CodeableConcept* flag;
	fhir_boolean deleted;
	fhir_dateTime date;
	Reference* item;
};
class Location {
public:
	fhir_string id;
	Meta* meta;
	fhir_uri implicitRules;
	fhir_code language;
	Narrative* text;
	int contained_count;
	Resource* contained;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	int identifier_count;
	Identifier* identifier;
	fhir_code status;
	Coding* operationalStatus;
	fhir_string name;
	int alias_count;
	fhir_string alias;
	fhir_string description;
	fhir_code mode;
	int type_count;
	CodeableConcept* type;
	int telecom_count;
	ContactPoint* telecom;
	Address* address;
	CodeableConcept* physicalType;
	Location_Position* position;
	Reference* managingOrganization;
	Reference* partOf;
	int hoursOfOperation_count;
	Location_HoursOfOperation* hoursOfOperation;
	fhir_string availabilityExceptions;
	int endpoint_count;
	Reference* endpoint;
};
class Location_Position {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	fhir_decimal longitude;
	fhir_decimal latitude;
	fhir_decimal altitude;
};
class Location_HoursOfOperation {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	int daysOfWeek_count;
	fhir_code daysOfWeek;
	fhir_boolean allDay;
	fhir_time openingTime;
	fhir_time closingTime;
};
class Measure {
public:
	fhir_string id;
	Meta* meta;
	fhir_uri implicitRules;
	fhir_code language;
	Narrative* text;
	int contained_count;
	Resource* contained;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	fhir_uri url;
	int identifier_count;
	Identifier* identifier;
	fhir_string version;
	fhir_string name;
	fhir_string title;
	fhir_string subtitle;
	fhir_code status;
	fhir_boolean experimental;
	enum class Subject {
		CodeableConcept,
		Reference
	} subject_type;
	union {
		CodeableConcept* _codeableConcept;
		Reference* _reference;
	} subject;

	fhir_dateTime date;
	fhir_string publisher;
	int contact_count;
	ContactDetail* contact;
	fhir_markdown description;
	int useContext_count;
	UsageContext* useContext;
	int jurisdiction_count;
	CodeableConcept* jurisdiction;
	fhir_markdown purpose;
	fhir_string usage;
	fhir_markdown copyright;
	fhir_date approvalDate;
	fhir_date lastReviewDate;
	Period* effectivePeriod;
	int topic_count;
	CodeableConcept* topic;
	int author_count;
	ContactDetail* author;
	int editor_count;
	ContactDetail* editor;
	int reviewer_count;
	ContactDetail* reviewer;
	int endorser_count;
	ContactDetail* endorser;
	int relatedArtifact_count;
	RelatedArtifact* relatedArtifact;
	int library_count;
	fhir_canonical library;
	fhir_markdown disclaimer;
	CodeableConcept* scoring;
	CodeableConcept* compositeScoring;
	int type_count;
	CodeableConcept* type;
	fhir_string riskAdjustment;
	fhir_string rateAggregation;
	fhir_markdown rationale;
	fhir_markdown clinicalRecommendationStatement;
	CodeableConcept* improvementNotation;
	int definition_count;
	fhir_markdown definition;
	fhir_markdown guidance;
	int group_count;
	Measure_Group* group;
	int supplementalData_count;
	Measure_SupplementalData* supplementalData;
};
class Measure_Group {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	CodeableConcept* code;
	fhir_string description;
	int population_count;
	Measure_Group_Population* population;
	int stratifier_count;
	Measure_Group_Stratifier* stratifier;
};
class Measure_Group_Population {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	CodeableConcept* code;
	fhir_string description;
	Expression* criteria;
};
class Measure_Group_Stratifier {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	CodeableConcept* code;
	fhir_string description;
	Expression* criteria;
	int component_count;
	Measure_Group_Stratifier_Component* component;
};
class Measure_Group_Stratifier_Component {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	CodeableConcept* code;
	fhir_string description;
	Expression* criteria;
};
class Measure_SupplementalData {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	CodeableConcept* code;
	int usage_count;
	CodeableConcept* usage;
	fhir_string description;
	Expression* criteria;
};
class MeasureReport {
public:
	fhir_string id;
	Meta* meta;
	fhir_uri implicitRules;
	fhir_code language;
	Narrative* text;
	int contained_count;
	Resource* contained;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	int identifier_count;
	Identifier* identifier;
	fhir_code status;
	fhir_code type;
	fhir_canonical measure;
	Reference* subject;
	fhir_dateTime date;
	Reference* reporter;
	Period* period;
	CodeableConcept* improvementNotation;
	int group_count;
	MeasureReport_Group* group;
	int evaluatedResource_count;
	Reference* evaluatedResource;
};
class MeasureReport_Group {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	CodeableConcept* code;
	int population_count;
	MeasureReport_Group_Population* population;
	Quantity* measureScore;
	int stratifier_count;
	MeasureReport_Group_Stratifier* stratifier;
};
class MeasureReport_Group_Population {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	CodeableConcept* code;
	integer* count;
	Reference* subjectResults;
};
class MeasureReport_Group_Stratifier {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	int code_count;
	CodeableConcept* code;
	int stratum_count;
	MeasureReport_Group_Stratifier_Stratum* stratum;
};
class MeasureReport_Group_Stratifier_Stratum {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	CodeableConcept* value;
	int component_count;
	MeasureReport_Group_Stratifier_Stratum_Component* component;
	int population_count;
	MeasureReport_Group_Stratifier_Stratum_Population* population;
	Quantity* measureScore;
};
class MeasureReport_Group_Stratifier_Stratum_Component {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	CodeableConcept* code;
	CodeableConcept* value;
};
class MeasureReport_Group_Stratifier_Stratum_Population {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	CodeableConcept* code;
	integer* count;
	Reference* subjectResults;
};
class Media {
public:
	fhir_string id;
	Meta* meta;
	fhir_uri implicitRules;
	fhir_code language;
	Narrative* text;
	int contained_count;
	Resource* contained;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	int identifier_count;
	Identifier* identifier;
	int basedOn_count;
	Reference* basedOn;
	int partOf_count;
	Reference* partOf;
	fhir_code status;
	CodeableConcept* type;
	CodeableConcept* modality;
	CodeableConcept* view;
	Reference* subject;
	Reference* encounter;
	enum class Created {
		fhir_dateTime,
		Period
	} created_type;
	union {
		fhir_dateTime _fhir_dateTime;
		Period* _period;
	} created;

	fhir_instant issued;
	Reference* operator_;
	int reasonCode_count;
	CodeableConcept* reasonCode;
	CodeableConcept* bodySite;
	fhir_string deviceName;
	Reference* device;
	fhir_positiveInt height;
	fhir_positiveInt width;
	fhir_positiveInt frames;
	fhir_decimal duration;
	Attachment* content;
	int note_count;
	Annotation* note;
};
class Medication {
public:
	fhir_string id;
	Meta* meta;
	fhir_uri implicitRules;
	fhir_code language;
	Narrative* text;
	int contained_count;
	Resource* contained;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	int identifier_count;
	Identifier* identifier;
	CodeableConcept* code;
	fhir_code status;
	Reference* manufacturer;
	CodeableConcept* form;
	Ratio* amount;
	int ingredient_count;
	Medication_Ingredient* ingredient;
	Medication_Batch* batch;
};
class Medication_Ingredient {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	enum class Item {
		CodeableConcept,
		Reference
	} item_type;
	union {
		CodeableConcept* _codeableConcept;
		Reference* _reference;
	} item;

	fhir_boolean isActive;
	Ratio* strength;
};
class Medication_Batch {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	fhir_string lotNumber;
	fhir_dateTime expirationDate;
};
class MedicationAdministration {
public:
	fhir_string id;
	Meta* meta;
	fhir_uri implicitRules;
	fhir_code language;
	Narrative* text;
	int contained_count;
	Resource* contained;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	int identifier_count;
	Identifier* identifier;
	int instantiates_count;
	fhir_uri instantiates;
	int partOf_count;
	Reference* partOf;
	fhir_code status;
	int statusReason_count;
	CodeableConcept* statusReason;
	CodeableConcept* category;
	enum class Medication {
		CodeableConcept,
		Reference
	} medication_type;
	union {
		CodeableConcept* _codeableConcept;
		Reference* _reference;
	} medication;

	Reference* subject;
	Reference* context;
	int supportingInformation_count;
	Reference* supportingInformation;
	enum class Effective {
		fhir_dateTime,
		Period
	} effective_type;
	union {
		fhir_dateTime _fhir_dateTime;
		Period* _period;
	} effective;

	int performer_count;
	MedicationAdministration_Performer* performer;
	int reasonCode_count;
	CodeableConcept* reasonCode;
	int reasonReference_count;
	Reference* reasonReference;
	Reference* request;
	int device_count;
	Reference* device;
	int note_count;
	Annotation* note;
	MedicationAdministration_Dosage* dosage;
	int eventHistory_count;
	Reference* eventHistory;
};
class MedicationAdministration_Performer {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	CodeableConcept* function;
	Reference* actor;
};
class MedicationAdministration_Dosage {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	fhir_string text;
	CodeableConcept* site;
	CodeableConcept* route;
	CodeableConcept* method;
	Quantity* dose;
	enum class Rate {
		Ratio,
		Quantity
	} rate_type;
	union {
		Ratio* _ratio;
		Quantity* _quantity;
	} rate;

};
class MedicationDispense {
public:
	fhir_string id;
	Meta* meta;
	fhir_uri implicitRules;
	fhir_code language;
	Narrative* text;
	int contained_count;
	Resource* contained;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	int identifier_count;
	Identifier* identifier;
	int partOf_count;
	Reference* partOf;
	fhir_code status;
	enum class StatusReason {
		CodeableConcept,
		Reference
	} statusReason_type;
	union {
		CodeableConcept* _codeableConcept;
		Reference* _reference;
	} statusReason;

	CodeableConcept* category;
	enum class Medication {
		CodeableConcept,
		Reference
	} medication_type;
	union {
		CodeableConcept* _codeableConcept;
		Reference* _reference;
	} medication;

	Reference* subject;
	Reference* context;
	int supportingInformation_count;
	Reference* supportingInformation;
	int performer_count;
	MedicationDispense_Performer* performer;
	Reference* location;
	int authorizingPrescription_count;
	Reference* authorizingPrescription;
	CodeableConcept* type;
	Quantity* quantity;
	Quantity* daysSupply;
	fhir_dateTime whenPrepared;
	fhir_dateTime whenHandedOver;
	Reference* destination;
	int receiver_count;
	Reference* receiver;
	int note_count;
	Annotation* note;
	int dosageInstruction_count;
	Dosage* dosageInstruction;
	MedicationDispense_Substitution* substitution;
	int detectedIssue_count;
	Reference* detectedIssue;
	int eventHistory_count;
	Reference* eventHistory;
};
class MedicationDispense_Performer {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	CodeableConcept* function;
	Reference* actor;
};
class MedicationDispense_Substitution {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	fhir_boolean wasSubstituted;
	CodeableConcept* type;
	int reason_count;
	CodeableConcept* reason;
	int responsibleParty_count;
	Reference* responsibleParty;
};
class MedicationKnowledge {
public:
	fhir_string id;
	Meta* meta;
	fhir_uri implicitRules;
	fhir_code language;
	Narrative* text;
	int contained_count;
	Resource* contained;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	CodeableConcept* code;
	fhir_code status;
	Reference* manufacturer;
	CodeableConcept* doseForm;
	Quantity* amount;
	int synonym_count;
	fhir_string synonym;
	int relatedMedicationKnowledge_count;
	MedicationKnowledge_RelatedMedicationKnowledge* relatedMedicationKnowledge;
	int associatedMedication_count;
	Reference* associatedMedication;
	int productType_count;
	CodeableConcept* productType;
	int monograph_count;
	MedicationKnowledge_Monograph* monograph;
	int ingredient_count;
	MedicationKnowledge_Ingredient* ingredient;
	fhir_markdown preparationInstruction;
	int intendedRoute_count;
	CodeableConcept* intendedRoute;
	int cost_count;
	MedicationKnowledge_Cost* cost;
	int monitoringProgram_count;
	MedicationKnowledge_MonitoringProgram* monitoringProgram;
	int administrationGuidelines_count;
	MedicationKnowledge_AdministrationGuidelines* administrationGuidelines;
	int medicineClassification_count;
	MedicationKnowledge_MedicineClassification* medicineClassification;
	MedicationKnowledge_Packaging* packaging;
	int drugCharacteristic_count;
	MedicationKnowledge_DrugCharacteristic* drugCharacteristic;
	int contraindication_count;
	Reference* contraindication;
	int regulatory_count;
	MedicationKnowledge_Regulatory* regulatory;
	int kinetics_count;
	MedicationKnowledge_Kinetics* kinetics;
};
class MedicationKnowledge_RelatedMedicationKnowledge {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	CodeableConcept* type;
	int reference_count;
	Reference* reference;
};
class MedicationKnowledge_Monograph {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	CodeableConcept* type;
	Reference* source;
};
class MedicationKnowledge_Ingredient {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	enum class Item {
		CodeableConcept,
		Reference
	} item_type;
	union {
		CodeableConcept* _codeableConcept;
		Reference* _reference;
	} item;

	fhir_boolean isActive;
	Ratio* strength;
};
class MedicationKnowledge_Cost {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	CodeableConcept* type;
	fhir_string source;
	Money* cost;
};
class MedicationKnowledge_MonitoringProgram {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	CodeableConcept* type;
	fhir_string name;
};
class MedicationKnowledge_AdministrationGuidelines {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	int dosage_count;
	MedicationKnowledge_AdministrationGuidelines_Dosage* dosage;
	enum class Indication {
		CodeableConcept,
		Reference
	} indication_type;
	union {
		CodeableConcept* _codeableConcept;
		Reference* _reference;
	} indication;

	int patientCharacteristics_count;
	MedicationKnowledge_AdministrationGuidelines_PatientCharacteristics* patientCharacteristics;
};
class MedicationKnowledge_AdministrationGuidelines_Dosage {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	CodeableConcept* type;
	int dosage_count;
	Dosage* dosage;
};
class MedicationKnowledge_AdministrationGuidelines_PatientCharacteristics {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	enum class Characteristic {
		CodeableConcept,
		Quantity
	} characteristic_type;
	union {
		CodeableConcept* _codeableConcept;
		Quantity* _quantity;
	} characteristic;

	int value_count;
	fhir_string value;
};
class MedicationKnowledge_MedicineClassification {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	CodeableConcept* type;
	int classification_count;
	CodeableConcept* classification;
};
class MedicationKnowledge_Packaging {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	CodeableConcept* type;
	Quantity* quantity;
};
class MedicationKnowledge_DrugCharacteristic {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	CodeableConcept* type;
	enum class Value {
		CodeableConcept,
		fhir_string,
		Quantity,
		fhir_base64Binary
	} value_type;
	union {
		CodeableConcept* _codeableConcept;
		fhir_string _fhir_string;
		Quantity* _quantity;
		fhir_base64Binary _fhir_base64Binary;
	} value;

};
class MedicationKnowledge_Regulatory {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	Reference* regulatoryAuthority;
	int substitution_count;
	MedicationKnowledge_Regulatory_Substitution* substitution;
	int schedule_count;
	MedicationKnowledge_Regulatory_Schedule* schedule;
	MedicationKnowledge_Regulatory_MaxDispense* maxDispense;
};
class MedicationKnowledge_Regulatory_Substitution {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	CodeableConcept* type;
	fhir_boolean allowed;
};
class MedicationKnowledge_Regulatory_Schedule {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	CodeableConcept* schedule;
};
class MedicationKnowledge_Regulatory_MaxDispense {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	Quantity* quantity;
	Duration* period;
};
class MedicationKnowledge_Kinetics {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	int areaUnderCurve_count;
	Quantity* areaUnderCurve;
	int lethalDose50_count;
	Quantity* lethalDose50;
	Duration* halfLifePeriod;
};
class MedicationRequest {
public:
	fhir_string id;
	Meta* meta;
	fhir_uri implicitRules;
	fhir_code language;
	Narrative* text;
	int contained_count;
	Resource* contained;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	int identifier_count;
	Identifier* identifier;
	fhir_code status;
	CodeableConcept* statusReason;
	fhir_code intent;
	int category_count;
	CodeableConcept* category;
	fhir_code priority;
	fhir_boolean doNotPerform;
	enum class Reported {
		fhir_boolean,
		Reference
	} reported_type;
	union {
		fhir_boolean _fhir_boolean;
		Reference* _reference;
	} reported;

	enum class Medication {
		CodeableConcept,
		Reference
	} medication_type;
	union {
		CodeableConcept* _codeableConcept;
		Reference* _reference;
	} medication;

	Reference* subject;
	Reference* encounter;
	int supportingInformation_count;
	Reference* supportingInformation;
	fhir_dateTime authoredOn;
	Reference* requester;
	Reference* performer;
	CodeableConcept* performerType;
	Reference* recorder;
	int reasonCode_count;
	CodeableConcept* reasonCode;
	int reasonReference_count;
	Reference* reasonReference;
	int instantiatesCanonical_count;
	fhir_canonical instantiatesCanonical;
	int instantiatesUri_count;
	fhir_uri instantiatesUri;
	int basedOn_count;
	Reference* basedOn;
	Identifier* groupIdentifier;
	CodeableConcept* courseOfTherapyType;
	int insurance_count;
	Reference* insurance;
	int note_count;
	Annotation* note;
	int dosageInstruction_count;
	Dosage* dosageInstruction;
	MedicationRequest_DispenseRequest* dispenseRequest;
	MedicationRequest_Substitution* substitution;
	Reference* priorPrescription;
	int detectedIssue_count;
	Reference* detectedIssue;
	int eventHistory_count;
	Reference* eventHistory;
};
class MedicationRequest_DispenseRequest {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	MedicationRequest_DispenseRequest_InitialFill* initialFill;
	Duration* dispenseInterval;
	Period* validityPeriod;
	fhir_unsignedInt numberOfRepeatsAllowed;
	Quantity* quantity;
	Duration* expectedSupplyDuration;
	Reference* performer;
};
class MedicationRequest_DispenseRequest_InitialFill {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	Quantity* quantity;
	Duration* duration;
};
class MedicationRequest_Substitution {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	enum class Allowed {
		fhir_boolean,
		CodeableConcept
	} allowed_type;
	union {
		fhir_boolean _fhir_boolean;
		CodeableConcept* _codeableConcept;
	} allowed;

	CodeableConcept* reason;
};
class MedicationStatement {
public:
	fhir_string id;
	Meta* meta;
	fhir_uri implicitRules;
	fhir_code language;
	Narrative* text;
	int contained_count;
	Resource* contained;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	int identifier_count;
	Identifier* identifier;
	int basedOn_count;
	Reference* basedOn;
	int partOf_count;
	Reference* partOf;
	fhir_code status;
	int statusReason_count;
	CodeableConcept* statusReason;
	CodeableConcept* category;
	enum class Medication {
		CodeableConcept,
		Reference
	} medication_type;
	union {
		CodeableConcept* _codeableConcept;
		Reference* _reference;
	} medication;

	Reference* subject;
	Reference* context;
	enum class Effective {
		fhir_dateTime,
		Period
	} effective_type;
	union {
		fhir_dateTime _fhir_dateTime;
		Period* _period;
	} effective;

	fhir_dateTime dateAsserted;
	Reference* informationSource;
	int derivedFrom_count;
	Reference* derivedFrom;
	int reasonCode_count;
	CodeableConcept* reasonCode;
	int reasonReference_count;
	Reference* reasonReference;
	int note_count;
	Annotation* note;
	int dosage_count;
	Dosage* dosage;
};
class MedicinalProduct {
public:
	fhir_string id;
	Meta* meta;
	fhir_uri implicitRules;
	fhir_code language;
	Narrative* text;
	int contained_count;
	Resource* contained;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	int identifier_count;
	Identifier* identifier;
	CodeableConcept* type;
	Coding* domain;
	CodeableConcept* combinedPharmaceuticalDoseForm;
	CodeableConcept* legalStatusOfSupply;
	CodeableConcept* additionalMonitoringIndicator;
	int specialMeasures_count;
	fhir_string specialMeasures;
	CodeableConcept* paediatricUseIndicator;
	int productClassification_count;
	CodeableConcept* productClassification;
	int marketingStatus_count;
	MarketingStatus* marketingStatus;
	int pharmaceuticalProduct_count;
	Reference* pharmaceuticalProduct;
	int packagedMedicinalProduct_count;
	Reference* packagedMedicinalProduct;
	int attachedDocument_count;
	Reference* attachedDocument;
	int masterFile_count;
	Reference* masterFile;
	int contact_count;
	Reference* contact;
	int clinicalTrial_count;
	Reference* clinicalTrial;
	int name_count;
	MedicinalProduct_Name* name;
	int crossReference_count;
	Identifier* crossReference;
	int manufacturingBusinessOperation_count;
	MedicinalProduct_ManufacturingBusinessOperation* manufacturingBusinessOperation;
	int specialDesignation_count;
	MedicinalProduct_SpecialDesignation* specialDesignation;
};
class MedicinalProduct_Name {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	fhir_string productName;
	int namePart_count;
	MedicinalProduct_Name_NamePart* namePart;
	int countryLanguage_count;
	MedicinalProduct_Name_CountryLanguage* countryLanguage;
};
class MedicinalProduct_Name_NamePart {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	fhir_string part;
	Coding* type;
};
class MedicinalProduct_Name_CountryLanguage {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	CodeableConcept* country;
	CodeableConcept* jurisdiction;
	CodeableConcept* language;
};
class MedicinalProduct_ManufacturingBusinessOperation {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	CodeableConcept* operationType;
	Identifier* authorisationReferenceNumber;
	fhir_dateTime effectiveDate;
	CodeableConcept* confidentialityIndicator;
	int manufacturer_count;
	Reference* manufacturer;
	Reference* regulator;
};
class MedicinalProduct_SpecialDesignation {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	int identifier_count;
	Identifier* identifier;
	CodeableConcept* type;
	CodeableConcept* intendedUse;
	enum class Indication {
		CodeableConcept,
		Reference
	} indication_type;
	union {
		CodeableConcept* _codeableConcept;
		Reference* _reference;
	} indication;

	CodeableConcept* status;
	fhir_dateTime date;
	CodeableConcept* species;
};
class MedicinalProductAuthorization {
public:
	fhir_string id;
	Meta* meta;
	fhir_uri implicitRules;
	fhir_code language;
	Narrative* text;
	int contained_count;
	Resource* contained;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	int identifier_count;
	Identifier* identifier;
	Reference* subject;
	int country_count;
	CodeableConcept* country;
	int jurisdiction_count;
	CodeableConcept* jurisdiction;
	CodeableConcept* status;
	fhir_dateTime statusDate;
	fhir_dateTime restoreDate;
	Period* validityPeriod;
	Period* dataExclusivityPeriod;
	fhir_dateTime dateOfFirstAuthorization;
	fhir_dateTime internationalBirthDate;
	CodeableConcept* legalBasis;
	int jurisdictionalAuthorization_count;
	MedicinalProductAuthorization_JurisdictionalAuthorization* jurisdictionalAuthorization;
	Reference* holder;
	Reference* regulator;
	MedicinalProductAuthorization_Procedure* procedure;
};
class MedicinalProductAuthorization_JurisdictionalAuthorization {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	int identifier_count;
	Identifier* identifier;
	CodeableConcept* country;
	int jurisdiction_count;
	CodeableConcept* jurisdiction;
	CodeableConcept* legalStatusOfSupply;
	Period* validityPeriod;
};
class MedicinalProductAuthorization_Procedure {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	Identifier* identifier;
	CodeableConcept* type;
	enum class Date {
		Period,
		fhir_dateTime
	} date_type;
	union {
		Period* _period;
		fhir_dateTime _fhir_dateTime;
	} date;

	int application_count;
	MedicinalProductAuthorization_Procedure* application;
};
class MedicinalProductContraindication {
public:
	fhir_string id;
	Meta* meta;
	fhir_uri implicitRules;
	fhir_code language;
	Narrative* text;
	int contained_count;
	Resource* contained;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	int subject_count;
	Reference* subject;
	CodeableConcept* disease;
	CodeableConcept* diseaseStatus;
	int comorbidity_count;
	CodeableConcept* comorbidity;
	int therapeuticIndication_count;
	Reference* therapeuticIndication;
	int otherTherapy_count;
	MedicinalProductContraindication_OtherTherapy* otherTherapy;
	int population_count;
	Population* population;
};
class MedicinalProductContraindication_OtherTherapy {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	CodeableConcept* therapyRelationshipType;
	enum class Medication {
		CodeableConcept,
		Reference
	} medication_type;
	union {
		CodeableConcept* _codeableConcept;
		Reference* _reference;
	} medication;

};
class MedicinalProductIndication {
public:
	fhir_string id;
	Meta* meta;
	fhir_uri implicitRules;
	fhir_code language;
	Narrative* text;
	int contained_count;
	Resource* contained;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	int subject_count;
	Reference* subject;
	CodeableConcept* diseaseSymptomProcedure;
	CodeableConcept* diseaseStatus;
	int comorbidity_count;
	CodeableConcept* comorbidity;
	CodeableConcept* intendedEffect;
	Quantity* duration;
	int otherTherapy_count;
	MedicinalProductIndication_OtherTherapy* otherTherapy;
	int undesirableEffect_count;
	Reference* undesirableEffect;
	int population_count;
	Population* population;
};
class MedicinalProductIndication_OtherTherapy {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	CodeableConcept* therapyRelationshipType;
	enum class Medication {
		CodeableConcept,
		Reference
	} medication_type;
	union {
		CodeableConcept* _codeableConcept;
		Reference* _reference;
	} medication;

};
class MedicinalProductIngredient {
public:
	fhir_string id;
	Meta* meta;
	fhir_uri implicitRules;
	fhir_code language;
	Narrative* text;
	int contained_count;
	Resource* contained;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	Identifier* identifier;
	CodeableConcept* role;
	fhir_boolean allergenicIndicator;
	int manufacturer_count;
	Reference* manufacturer;
	int specifiedSubstance_count;
	MedicinalProductIngredient_SpecifiedSubstance* specifiedSubstance;
	MedicinalProductIngredient_Substance* substance;
};
class MedicinalProductIngredient_SpecifiedSubstance {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	CodeableConcept* code;
	CodeableConcept* group;
	CodeableConcept* confidentiality;
	int strength_count;
	MedicinalProductIngredient_SpecifiedSubstance_Strength* strength;
};
class MedicinalProductIngredient_SpecifiedSubstance_Strength {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	Ratio* presentation;
	Ratio* presentationLowLimit;
	Ratio* concentration;
	Ratio* concentrationLowLimit;
	fhir_string measurementPoint;
	int country_count;
	CodeableConcept* country;
	int referenceStrength_count;
	MedicinalProductIngredient_SpecifiedSubstance_Strength_ReferenceStrength* referenceStrength;
};
class MedicinalProductIngredient_SpecifiedSubstance_Strength_ReferenceStrength {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	CodeableConcept* substance;
	Ratio* strength;
	Ratio* strengthLowLimit;
	fhir_string measurementPoint;
	int country_count;
	CodeableConcept* country;
};
class MedicinalProductIngredient_Substance {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	CodeableConcept* code;
	int strength_count;
	MedicinalProductIngredient_SpecifiedSubstance_Strength* strength;
};
class MedicinalProductInteraction {
public:
	fhir_string id;
	Meta* meta;
	fhir_uri implicitRules;
	fhir_code language;
	Narrative* text;
	int contained_count;
	Resource* contained;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	int subject_count;
	Reference* subject;
	fhir_string description;
	int interactant_count;
	MedicinalProductInteraction_Interactant* interactant;
	CodeableConcept* type;
	CodeableConcept* effect;
	CodeableConcept* incidence;
	CodeableConcept* management;
};
class MedicinalProductInteraction_Interactant {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	enum class Item {
		Reference,
		CodeableConcept
	} item_type;
	union {
		Reference* _reference;
		CodeableConcept* _codeableConcept;
	} item;

};
class MedicinalProductManufactured {
public:
	fhir_string id;
	Meta* meta;
	fhir_uri implicitRules;
	fhir_code language;
	Narrative* text;
	int contained_count;
	Resource* contained;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	CodeableConcept* manufacturedDoseForm;
	CodeableConcept* unitOfPresentation;
	Quantity* quantity;
	int manufacturer_count;
	Reference* manufacturer;
	int ingredient_count;
	Reference* ingredient;
	ProdCharacteristic* physicalCharacteristics;
	int otherCharacteristics_count;
	CodeableConcept* otherCharacteristics;
};
class MedicinalProductPackaged {
public:
	fhir_string id;
	Meta* meta;
	fhir_uri implicitRules;
	fhir_code language;
	Narrative* text;
	int contained_count;
	Resource* contained;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	int identifier_count;
	Identifier* identifier;
	int subject_count;
	Reference* subject;
	fhir_string description;
	CodeableConcept* legalStatusOfSupply;
	int marketingStatus_count;
	MarketingStatus* marketingStatus;
	Reference* marketingAuthorization;
	int manufacturer_count;
	Reference* manufacturer;
	int batchIdentifier_count;
	MedicinalProductPackaged_BatchIdentifier* batchIdentifier;
	int packageItem_count;
	MedicinalProductPackaged_PackageItem* packageItem;
};
class MedicinalProductPackaged_BatchIdentifier {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	Identifier* outerPackaging;
	Identifier* immediatePackaging;
};
class MedicinalProductPackaged_PackageItem {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	int identifier_count;
	Identifier* identifier;
	CodeableConcept* type;
	Quantity* quantity;
	int material_count;
	CodeableConcept* material;
	int alternateMaterial_count;
	CodeableConcept* alternateMaterial;
	int device_count;
	Reference* device;
	int manufacturedItem_count;
	Reference* manufacturedItem;
	int packageItem_count;
	MedicinalProductPackaged_PackageItem* packageItem;
	ProdCharacteristic* physicalCharacteristics;
	int otherCharacteristics_count;
	CodeableConcept* otherCharacteristics;
	int shelfLifeStorage_count;
	ProductShelfLife* shelfLifeStorage;
	int manufacturer_count;
	Reference* manufacturer;
};
class MedicinalProductPharmaceutical {
public:
	fhir_string id;
	Meta* meta;
	fhir_uri implicitRules;
	fhir_code language;
	Narrative* text;
	int contained_count;
	Resource* contained;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	int identifier_count;
	Identifier* identifier;
	CodeableConcept* administrableDoseForm;
	CodeableConcept* unitOfPresentation;
	int ingredient_count;
	Reference* ingredient;
	int device_count;
	Reference* device;
	int characteristics_count;
	MedicinalProductPharmaceutical_Characteristics* characteristics;
	int routeOfAdministration_count;
	MedicinalProductPharmaceutical_RouteOfAdministration* routeOfAdministration;
};
class MedicinalProductPharmaceutical_Characteristics {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	CodeableConcept* code;
	CodeableConcept* status;
};
class MedicinalProductPharmaceutical_RouteOfAdministration {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	CodeableConcept* code;
	Quantity* firstDose;
	Quantity* maxSingleDose;
	Quantity* maxDosePerDay;
	Ratio* maxDosePerTreatmentPeriod;
	Duration* maxTreatmentPeriod;
	int targetSpecies_count;
	MedicinalProductPharmaceutical_RouteOfAdministration_TargetSpecies* targetSpecies;
};
class MedicinalProductPharmaceutical_RouteOfAdministration_TargetSpecies {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	CodeableConcept* code;
	int withdrawalPeriod_count;
	MedicinalProductPharmaceutical_RouteOfAdministration_TargetSpecies_WithdrawalPeriod* withdrawalPeriod;
};
class MedicinalProductPharmaceutical_RouteOfAdministration_TargetSpecies_WithdrawalPeriod {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	CodeableConcept* tissue;
	Quantity* value;
	fhir_string supportingInformation;
};
class MedicinalProductUndesirableEffect {
public:
	fhir_string id;
	Meta* meta;
	fhir_uri implicitRules;
	fhir_code language;
	Narrative* text;
	int contained_count;
	Resource* contained;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	int subject_count;
	Reference* subject;
	CodeableConcept* symptomConditionEffect;
	CodeableConcept* classification;
	CodeableConcept* frequencyOfOccurrence;
	int population_count;
	Population* population;
};
class MessageDefinition {
public:
	fhir_string id;
	Meta* meta;
	fhir_uri implicitRules;
	fhir_code language;
	Narrative* text;
	int contained_count;
	Resource* contained;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	fhir_uri url;
	int identifier_count;
	Identifier* identifier;
	fhir_string version;
	fhir_string name;
	fhir_string title;
	int replaces_count;
	fhir_canonical replaces;
	fhir_code status;
	fhir_boolean experimental;
	fhir_dateTime date;
	fhir_string publisher;
	int contact_count;
	ContactDetail* contact;
	fhir_markdown description;
	int useContext_count;
	UsageContext* useContext;
	int jurisdiction_count;
	CodeableConcept* jurisdiction;
	fhir_markdown purpose;
	fhir_markdown copyright;
	fhir_canonical base;
	int parent_count;
	fhir_canonical parent;
	enum class Event {
		Coding,
		fhir_uri
	} event_type;
	union {
		Coding* _coding;
		fhir_uri _fhir_uri;
	} event;

	fhir_code category;
	int focus_count;
	MessageDefinition_Focus* focus;
	fhir_code responseRequired;
	int allowedResponse_count;
	MessageDefinition_AllowedResponse* allowedResponse;
	int graph_count;
	fhir_canonical graph;
};
class MessageDefinition_Focus {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	fhir_code code;
	fhir_canonical profile;
	fhir_unsignedInt min;
	fhir_string max;
};
class MessageDefinition_AllowedResponse {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	fhir_canonical message;
	fhir_markdown situation;
};
class MessageHeader {
public:
	fhir_string id;
	Meta* meta;
	fhir_uri implicitRules;
	fhir_code language;
	Narrative* text;
	int contained_count;
	Resource* contained;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	enum class Event {
		Coding,
		fhir_uri
	} event_type;
	union {
		Coding* _coding;
		fhir_uri _fhir_uri;
	} event;

	int destination_count;
	MessageHeader_Destination* destination;
	Reference* sender;
	Reference* enterer;
	Reference* author;
	MessageHeader_Source* source;
	Reference* responsible;
	CodeableConcept* reason;
	MessageHeader_Response* response;
	int focus_count;
	Reference* focus;
	fhir_canonical definition;
};
class MessageHeader_Destination {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	fhir_string name;
	Reference* target;
	fhir_url endpoint;
	Reference* receiver;
};
class MessageHeader_Source {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	fhir_string name;
	fhir_string software;
	fhir_string version;
	ContactPoint* contact;
	fhir_url endpoint;
};
class MessageHeader_Response {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	fhir_id identifier;
	fhir_code code;
	Reference* details;
};
class MolecularSequence {
public:
	fhir_string id;
	Meta* meta;
	fhir_uri implicitRules;
	fhir_code language;
	Narrative* text;
	int contained_count;
	Resource* contained;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	int identifier_count;
	Identifier* identifier;
	fhir_code type;
	integer* coordinateSystem;
	Reference* patient;
	Reference* specimen;
	Reference* device;
	Reference* performer;
	Quantity* quantity;
	MolecularSequence_ReferenceSeq* referenceSeq;
	int variant_count;
	MolecularSequence_Variant* variant;
	fhir_string observedSeq;
	int quality_count;
	MolecularSequence_Quality* quality;
	integer* readCoverage;
	int repository_count;
	MolecularSequence_Repository* repository;
	int pointer_count;
	Reference* pointer;
	int structureVariant_count;
	MolecularSequence_StructureVariant* structureVariant;
};
class MolecularSequence_ReferenceSeq {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	CodeableConcept* chromosome;
	fhir_string genomeBuild;
	fhir_code orientation;
	CodeableConcept* referenceSeqId;
	Reference* referenceSeqPointer;
	fhir_string referenceSeqString;
	fhir_code strand;
	integer* windowStart;
	integer* windowEnd;
};
class MolecularSequence_Variant {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	integer* start;
	integer* end;
	fhir_string observedAllele;
	fhir_string referenceAllele;
	fhir_string cigar;
	Reference* variantPointer;
};
class MolecularSequence_Quality {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	fhir_code type;
	CodeableConcept* standardSequence;
	integer* start;
	integer* end;
	Quantity* score;
	CodeableConcept* method;
	fhir_decimal truthTP;
	fhir_decimal queryTP;
	fhir_decimal truthFN;
	fhir_decimal queryFP;
	fhir_decimal gtFP;
	fhir_decimal precision;
	fhir_decimal recall;
	fhir_decimal fScore;
	MolecularSequence_Quality_Roc* roc;
};
class MolecularSequence_Quality_Roc {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	int score_count;
	integer* score;
	int numTP_count;
	integer* numTP;
	int numFP_count;
	integer* numFP;
	int numFN_count;
	integer* numFN;
	int precision_count;
	fhir_decimal precision;
	int sensitivity_count;
	fhir_decimal sensitivity;
	int fMeasure_count;
	fhir_decimal fMeasure;
};
class MolecularSequence_Repository {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	fhir_code type;
	fhir_uri url;
	fhir_string name;
	fhir_string datasetId;
	fhir_string variantsetId;
	fhir_string readsetId;
};
class MolecularSequence_StructureVariant {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	CodeableConcept* variantType;
	fhir_boolean exact;
	integer* length;
	MolecularSequence_StructureVariant_Outer* outer;
	MolecularSequence_StructureVariant_Inner* inner;
};
class MolecularSequence_StructureVariant_Outer {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	integer* start;
	integer* end;
};
class MolecularSequence_StructureVariant_Inner {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	integer* start;
	integer* end;
};
class NamingSystem {
public:
	fhir_string id;
	Meta* meta;
	fhir_uri implicitRules;
	fhir_code language;
	Narrative* text;
	int contained_count;
	Resource* contained;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	fhir_string name;
	fhir_code status;
	fhir_code kind;
	fhir_dateTime date;
	fhir_string publisher;
	int contact_count;
	ContactDetail* contact;
	fhir_string responsible;
	CodeableConcept* type;
	fhir_markdown description;
	int useContext_count;
	UsageContext* useContext;
	int jurisdiction_count;
	CodeableConcept* jurisdiction;
	fhir_string usage;
	int uniqueId_count;
	NamingSystem_UniqueId* uniqueId;
};
class NamingSystem_UniqueId {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	fhir_code type;
	fhir_string value;
	fhir_boolean preferred;
	fhir_string comment;
	Period* period;
};
class NutritionOrder {
public:
	fhir_string id;
	Meta* meta;
	fhir_uri implicitRules;
	fhir_code language;
	Narrative* text;
	int contained_count;
	Resource* contained;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	int identifier_count;
	Identifier* identifier;
	int instantiatesCanonical_count;
	fhir_canonical instantiatesCanonical;
	int instantiatesUri_count;
	fhir_uri instantiatesUri;
	int instantiates_count;
	fhir_uri instantiates;
	fhir_code status;
	fhir_code intent;
	Reference* patient;
	Reference* encounter;
	fhir_dateTime dateTime;
	Reference* orderer;
	int allergyIntolerance_count;
	Reference* allergyIntolerance;
	int foodPreferenceModifier_count;
	CodeableConcept* foodPreferenceModifier;
	int excludeFoodModifier_count;
	CodeableConcept* excludeFoodModifier;
	NutritionOrder_OralDiet* oralDiet;
	int supplement_count;
	NutritionOrder_Supplement* supplement;
	NutritionOrder_EnteralFormula* enteralFormula;
	int note_count;
	Annotation* note;
};
class NutritionOrder_OralDiet {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	int type_count;
	CodeableConcept* type;
	int schedule_count;
	Timing* schedule;
	int nutrient_count;
	NutritionOrder_OralDiet_Nutrient* nutrient;
	int texture_count;
	NutritionOrder_OralDiet_Texture* texture;
	int fluidConsistencyType_count;
	CodeableConcept* fluidConsistencyType;
	fhir_string instruction;
};
class NutritionOrder_OralDiet_Nutrient {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	CodeableConcept* modifier;
	Quantity* amount;
};
class NutritionOrder_OralDiet_Texture {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	CodeableConcept* modifier;
	CodeableConcept* foodType;
};
class NutritionOrder_Supplement {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	CodeableConcept* type;
	fhir_string productName;
	int schedule_count;
	Timing* schedule;
	Quantity* quantity;
	fhir_string instruction;
};
class NutritionOrder_EnteralFormula {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	CodeableConcept* baseFormulaType;
	fhir_string baseFormulaProductName;
	CodeableConcept* additiveType;
	fhir_string additiveProductName;
	Quantity* caloricDensity;
	CodeableConcept* routeofAdministration;
	int administration_count;
	NutritionOrder_EnteralFormula_Administration* administration;
	Quantity* maxVolumeToDeliver;
	fhir_string administrationInstruction;
};
class NutritionOrder_EnteralFormula_Administration {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	Timing* schedule;
	Quantity* quantity;
	enum class Rate {
		Quantity,
		Ratio
	} rate_type;
	union {
		Quantity* _quantity;
		Ratio* _ratio;
	} rate;

};
class Observation {
public:
	fhir_string id;
	Meta* meta;
	fhir_uri implicitRules;
	fhir_code language;
	Narrative* text;
	int contained_count;
	Resource* contained;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	int identifier_count;
	Identifier* identifier;
	int basedOn_count;
	Reference* basedOn;
	int partOf_count;
	Reference* partOf;
	fhir_code status;
	int category_count;
	CodeableConcept* category;
	CodeableConcept* code;
	Reference* subject;
	int focus_count;
	Reference* focus;
	Reference* encounter;
	enum class Effective {
		fhir_dateTime,
		Period,
		Timing,
		fhir_instant
	} effective_type;
	union {
		fhir_dateTime _fhir_dateTime;
		Period* _period;
		Timing* _timing;
		fhir_instant _fhir_instant;
	} effective;

	fhir_instant issued;
	int performer_count;
	Reference* performer;
	enum class Value {
		Quantity,
		CodeableConcept,
		fhir_string,
		fhir_boolean,
		integer,
		Range,
		Ratio,
		SampledData,
		fhir_time,
		fhir_dateTime,
		Period
	} value_type;
	union {
		Quantity* _quantity;
		CodeableConcept* _codeableConcept;
		fhir_string _fhir_string;
		fhir_boolean _fhir_boolean;
		integer* _integer;
		Range* _range;
		Ratio* _ratio;
		SampledData* _sampledData;
		fhir_time _fhir_time;
		fhir_dateTime _fhir_dateTime;
		Period* _period;
	} value;

	CodeableConcept* dataAbsentReason;
	int interpretation_count;
	CodeableConcept* interpretation;
	int note_count;
	Annotation* note;
	CodeableConcept* bodySite;
	CodeableConcept* method;
	Reference* specimen;
	Reference* device;
	int referenceRange_count;
	Observation_ReferenceRange* referenceRange;
	int hasMember_count;
	Reference* hasMember;
	int derivedFrom_count;
	Reference* derivedFrom;
	int component_count;
	Observation_Component* component;
};
class Observation_ReferenceRange {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	Quantity* low;
	Quantity* high;
	CodeableConcept* type;
	int appliesTo_count;
	CodeableConcept* appliesTo;
	Range* age;
	fhir_string text;
};
class Observation_Component {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	CodeableConcept* code;
	enum class Value {
		Quantity,
		CodeableConcept,
		fhir_string,
		fhir_boolean,
		integer,
		Range,
		Ratio,
		SampledData,
		fhir_time,
		fhir_dateTime,
		Period
	} value_type;
	union {
		Quantity* _quantity;
		CodeableConcept* _codeableConcept;
		fhir_string _fhir_string;
		fhir_boolean _fhir_boolean;
		integer* _integer;
		Range* _range;
		Ratio* _ratio;
		SampledData* _sampledData;
		fhir_time _fhir_time;
		fhir_dateTime _fhir_dateTime;
		Period* _period;
	} value;

	CodeableConcept* dataAbsentReason;
	int interpretation_count;
	CodeableConcept* interpretation;
	int referenceRange_count;
	Observation_ReferenceRange* referenceRange;
};
class ObservationDefinition {
public:
	fhir_string id;
	Meta* meta;
	fhir_uri implicitRules;
	fhir_code language;
	Narrative* text;
	int contained_count;
	Resource* contained;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	int category_count;
	CodeableConcept* category;
	CodeableConcept* code;
	int identifier_count;
	Identifier* identifier;
	int permittedDataType_count;
	fhir_code permittedDataType;
	fhir_boolean multipleResultsAllowed;
	CodeableConcept* method;
	fhir_string preferredReportName;
	ObservationDefinition_QuantitativeDetails* quantitativeDetails;
	int qualifiedInterval_count;
	ObservationDefinition_QualifiedInterval* qualifiedInterval;
	Reference* validCodedValueSet;
	Reference* normalCodedValueSet;
	Reference* abnormalCodedValueSet;
	Reference* criticalCodedValueSet;
};
class ObservationDefinition_QuantitativeDetails {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	CodeableConcept* customaryUnit;
	CodeableConcept* unit;
	fhir_decimal conversionFactor;
	integer* decimalPrecision;
};
class ObservationDefinition_QualifiedInterval {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	fhir_code category;
	Range* range;
	CodeableConcept* context;
	int appliesTo_count;
	CodeableConcept* appliesTo;
	fhir_code gender;
	Range* age;
	Range* gestationalAge;
	fhir_string condition;
};
class OperationDefinition {
public:
	fhir_string id;
	Meta* meta;
	fhir_uri implicitRules;
	fhir_code language;
	Narrative* text;
	int contained_count;
	Resource* contained;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	fhir_uri url;
	fhir_string version;
	fhir_string name;
	fhir_string title;
	fhir_code status;
	fhir_code kind;
	fhir_boolean experimental;
	fhir_dateTime date;
	fhir_string publisher;
	int contact_count;
	ContactDetail* contact;
	fhir_markdown description;
	int useContext_count;
	UsageContext* useContext;
	int jurisdiction_count;
	CodeableConcept* jurisdiction;
	fhir_markdown purpose;
	fhir_boolean affectsState;
	fhir_code code;
	fhir_markdown comment;
	fhir_canonical base;
	int resource_count;
	fhir_code resource;
	fhir_boolean system;
	fhir_boolean type;
	fhir_boolean instance;
	fhir_canonical inputProfile;
	fhir_canonical outputProfile;
	int parameter_count;
	OperationDefinition_Parameter* parameter;
	int overload_count;
	OperationDefinition_Overload* overload;
};
class OperationDefinition_Parameter {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	fhir_code name;
	fhir_code use;
	integer* min;
	fhir_string max;
	fhir_string documentation;
	fhir_code type;
	int targetProfile_count;
	fhir_canonical targetProfile;
	fhir_code searchType;
	OperationDefinition_Parameter_Binding* binding;
	int referencedFrom_count;
	OperationDefinition_Parameter_ReferencedFrom* referencedFrom;
	int part_count;
	OperationDefinition_Parameter* part;
};
class OperationDefinition_Parameter_Binding {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	fhir_code strength;
	fhir_canonical valueSet;
};
class OperationDefinition_Parameter_ReferencedFrom {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	fhir_string source;
	fhir_string sourceId;
};
class OperationDefinition_Overload {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	int parameterName_count;
	fhir_string parameterName;
	fhir_string comment;
};
class OperationOutcome {
public:
	fhir_string id;
	Meta* meta;
	fhir_uri implicitRules;
	fhir_code language;
	Narrative* text;
	int contained_count;
	Resource* contained;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	int issue_count;
	OperationOutcome_Issue* issue;
};
class OperationOutcome_Issue {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	fhir_code severity;
	fhir_code code;
	CodeableConcept* details;
	fhir_string diagnostics;
	int location_count;
	fhir_string location;
	int expression_count;
	fhir_string expression;
};
class Organization {
public:
	fhir_string id;
	Meta* meta;
	fhir_uri implicitRules;
	fhir_code language;
	Narrative* text;
	int contained_count;
	Resource* contained;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	int identifier_count;
	Identifier* identifier;
	fhir_boolean active;
	int type_count;
	CodeableConcept* type;
	fhir_string name;
	int alias_count;
	fhir_string alias;
	int telecom_count;
	ContactPoint* telecom;
	int address_count;
	Address* address;
	Reference* partOf;
	int contact_count;
	Organization_Contact* contact;
	int endpoint_count;
	Reference* endpoint;
};
class Organization_Contact {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	CodeableConcept* purpose;
	HumanName* name;
	int telecom_count;
	ContactPoint* telecom;
	Address* address;
};
class OrganizationAffiliation {
public:
	fhir_string id;
	Meta* meta;
	fhir_uri implicitRules;
	fhir_code language;
	Narrative* text;
	int contained_count;
	Resource* contained;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	int identifier_count;
	Identifier* identifier;
	fhir_boolean active;
	Period* period;
	Reference* organization;
	Reference* participatingOrganization;
	int network_count;
	Reference* network;
	int code_count;
	CodeableConcept* code;
	int specialty_count;
	CodeableConcept* specialty;
	int location_count;
	Reference* location;
	int healthcareService_count;
	Reference* healthcareService;
	int telecom_count;
	ContactPoint* telecom;
	int endpoint_count;
	Reference* endpoint;
};
class Parameters {
public:
	fhir_string id;
	Meta* meta;
	fhir_uri implicitRules;
	fhir_code language;
	int parameter_count;
	Parameters_Parameter* parameter;
};
class Parameters_Parameter {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	fhir_string name;
	enum class Value {
		fhir_base64Binary,
		fhir_boolean,
		fhir_canonical,
		fhir_code,
		fhir_date,
		fhir_dateTime,
		fhir_decimal,
		fhir_id,
		fhir_instant,
		integer,
		fhir_markdown,
		fhir_oid,
		fhir_positiveInt,
		fhir_string,
		fhir_time,
		fhir_unsignedInt,
		fhir_uri,
		fhir_url,
		fhir_uuid,
		Address,
		Age,
		Annotation,
		Attachment,
		CodeableConcept,
		Coding,
		ContactPoint,
		Count,
		Distance,
		Duration,
		HumanName,
		Identifier,
		Money,
		Period,
		Quantity,
		Range,
		Ratio,
		Reference,
		SampledData,
		Signature,
		Timing,
		ContactDetail,
		Contributor,
		DataRequirement,
		Expression,
		ParameterDefinition,
		RelatedArtifact,
		TriggerDefinition,
		UsageContext,
		Dosage,
		Meta
	} value_type;
	union {
		fhir_base64Binary _fhir_base64Binary;
		fhir_boolean _fhir_boolean;
		fhir_canonical _fhir_canonical;
		fhir_code _fhir_code;
		fhir_date _fhir_date;
		fhir_dateTime _fhir_dateTime;
		fhir_decimal _fhir_decimal;
		fhir_id _fhir_id;
		fhir_instant _fhir_instant;
		integer* _integer;
		fhir_markdown _fhir_markdown;
		fhir_oid _fhir_oid;
		fhir_positiveInt _fhir_positiveInt;
		fhir_string _fhir_string;
		fhir_time _fhir_time;
		fhir_unsignedInt _fhir_unsignedInt;
		fhir_uri _fhir_uri;
		fhir_url _fhir_url;
		fhir_uuid _fhir_uuid;
		Address* _address;
		Age* _age;
		Annotation* _annotation;
		Attachment* _attachment;
		CodeableConcept* _codeableConcept;
		Coding* _coding;
		ContactPoint* _contactPoint;
		Count* _count;
		Distance* _distance;
		Duration* _duration;
		HumanName* _humanName;
		Identifier* _identifier;
		Money* _money;
		Period* _period;
		Quantity* _quantity;
		Range* _range;
		Ratio* _ratio;
		Reference* _reference;
		SampledData* _sampledData;
		Signature* _signature;
		Timing* _timing;
		ContactDetail* _contactDetail;
		Contributor* _contributor;
		DataRequirement* _dataRequirement;
		Expression* _expression;
		ParameterDefinition* _parameterDefinition;
		RelatedArtifact* _relatedArtifact;
		TriggerDefinition* _triggerDefinition;
		UsageContext* _usageContext;
		Dosage* _dosage;
		Meta* _meta;
	} value;

	Resource* resource;
	int part_count;
	Parameters_Parameter* part;
};
class Patient {
public:
	fhir_string id;
	Meta* meta;
	fhir_uri implicitRules;
	fhir_code language;
	Narrative* text;
	int contained_count;
	Resource* contained;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	int identifier_count;
	Identifier* identifier;
	fhir_boolean active;
	int name_count;
	HumanName* name;
	int telecom_count;
	ContactPoint* telecom;
	fhir_code gender;
	fhir_date birthDate;
	enum class Deceased {
		fhir_boolean,
		fhir_dateTime
	} deceased_type;
	union {
		fhir_boolean _fhir_boolean;
		fhir_dateTime _fhir_dateTime;
	} deceased;

	int address_count;
	Address* address;
	CodeableConcept* maritalStatus;
	enum class MultipleBirth {
		fhir_boolean,
		integer
	} multipleBirth_type;
	union {
		fhir_boolean _fhir_boolean;
		integer* _integer;
	} multipleBirth;

	int photo_count;
	Attachment* photo;
	int contact_count;
	Patient_Contact* contact;
	int communication_count;
	Patient_Communication* communication;
	int generalPractitioner_count;
	Reference* generalPractitioner;
	Reference* managingOrganization;
	int link_count;
	Patient_Link* link;
};
class Patient_Contact {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	int relationship_count;
	CodeableConcept* relationship;
	HumanName* name;
	int telecom_count;
	ContactPoint* telecom;
	Address* address;
	fhir_code gender;
	Reference* organization;
	Period* period;
};
class Patient_Communication {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	CodeableConcept* language;
	fhir_boolean preferred;
};
class Patient_Link {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	Reference* other;
	fhir_code type;
};
class PaymentNotice {
public:
	fhir_string id;
	Meta* meta;
	fhir_uri implicitRules;
	fhir_code language;
	Narrative* text;
	int contained_count;
	Resource* contained;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	int identifier_count;
	Identifier* identifier;
	fhir_code status;
	Reference* request;
	Reference* response;
	fhir_dateTime created;
	Reference* provider;
	Reference* payment;
	fhir_date paymentDate;
	Reference* payee;
	Reference* recipient;
	Money* amount;
	CodeableConcept* paymentStatus;
};
class PaymentReconciliation {
public:
	fhir_string id;
	Meta* meta;
	fhir_uri implicitRules;
	fhir_code language;
	Narrative* text;
	int contained_count;
	Resource* contained;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	int identifier_count;
	Identifier* identifier;
	fhir_code status;
	Period* period;
	fhir_dateTime created;
	Reference* paymentIssuer;
	Reference* request;
	Reference* requestor;
	fhir_code outcome;
	fhir_string disposition;
	fhir_date paymentDate;
	Money* paymentAmount;
	Identifier* paymentIdentifier;
	int detail_count;
	PaymentReconciliation_Detail* detail;
	CodeableConcept* formCode;
	int processNote_count;
	PaymentReconciliation_ProcessNote* processNote;
};
class PaymentReconciliation_Detail {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	Identifier* identifier;
	Identifier* predecessor;
	CodeableConcept* type;
	Reference* request;
	Reference* submitter;
	Reference* response;
	fhir_date date;
	Reference* responsible;
	Reference* payee;
	Money* amount;
};
class PaymentReconciliation_ProcessNote {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	fhir_code type;
	fhir_string text;
};
class Person {
public:
	fhir_string id;
	Meta* meta;
	fhir_uri implicitRules;
	fhir_code language;
	Narrative* text;
	int contained_count;
	Resource* contained;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	int identifier_count;
	Identifier* identifier;
	int name_count;
	HumanName* name;
	int telecom_count;
	ContactPoint* telecom;
	fhir_code gender;
	fhir_date birthDate;
	int address_count;
	Address* address;
	Attachment* photo;
	Reference* managingOrganization;
	fhir_boolean active;
	int link_count;
	Person_Link* link;
};
class Person_Link {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	Reference* target;
	fhir_code assurance;
};
class PlanDefinition {
public:
	fhir_string id;
	Meta* meta;
	fhir_uri implicitRules;
	fhir_code language;
	Narrative* text;
	int contained_count;
	Resource* contained;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	fhir_uri url;
	int identifier_count;
	Identifier* identifier;
	fhir_string version;
	fhir_string name;
	fhir_string title;
	fhir_string subtitle;
	CodeableConcept* type;
	fhir_code status;
	fhir_boolean experimental;
	enum class Subject {
		CodeableConcept,
		Reference
	} subject_type;
	union {
		CodeableConcept* _codeableConcept;
		Reference* _reference;
	} subject;

	fhir_dateTime date;
	fhir_string publisher;
	int contact_count;
	ContactDetail* contact;
	fhir_markdown description;
	int useContext_count;
	UsageContext* useContext;
	int jurisdiction_count;
	CodeableConcept* jurisdiction;
	fhir_markdown purpose;
	fhir_string usage;
	fhir_markdown copyright;
	fhir_date approvalDate;
	fhir_date lastReviewDate;
	Period* effectivePeriod;
	int topic_count;
	CodeableConcept* topic;
	int author_count;
	ContactDetail* author;
	int editor_count;
	ContactDetail* editor;
	int reviewer_count;
	ContactDetail* reviewer;
	int endorser_count;
	ContactDetail* endorser;
	int relatedArtifact_count;
	RelatedArtifact* relatedArtifact;
	int library_count;
	fhir_canonical library;
	int goal_count;
	PlanDefinition_Goal* goal;
	int action_count;
	PlanDefinition_Action* action;
};
class PlanDefinition_Goal {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	CodeableConcept* category;
	CodeableConcept* description;
	CodeableConcept* priority;
	CodeableConcept* start;
	int addresses_count;
	CodeableConcept* addresses;
	int documentation_count;
	RelatedArtifact* documentation;
	int target_count;
	PlanDefinition_Goal_Target* target;
};
class PlanDefinition_Goal_Target {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	CodeableConcept* measure;
	enum class Detail {
		Quantity,
		Range,
		CodeableConcept
	} detail_type;
	union {
		Quantity* _quantity;
		Range* _range;
		CodeableConcept* _codeableConcept;
	} detail;

	Duration* due;
};
class PlanDefinition_Action {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	fhir_string prefix;
	fhir_string title;
	fhir_string description;
	fhir_string textEquivalent;
	fhir_code priority;
	int code_count;
	CodeableConcept* code;
	int reason_count;
	CodeableConcept* reason;
	int documentation_count;
	RelatedArtifact* documentation;
	int goalId_count;
	fhir_id goalId;
	enum class Subject {
		CodeableConcept,
		Reference
	} subject_type;
	union {
		CodeableConcept* _codeableConcept;
		Reference* _reference;
	} subject;

	int trigger_count;
	TriggerDefinition* trigger;
	int condition_count;
	PlanDefinition_Action_Condition* condition;
	int input_count;
	DataRequirement* input;
	int output_count;
	DataRequirement* output;
	int relatedAction_count;
	PlanDefinition_Action_RelatedAction* relatedAction;
	enum class Timing {
		fhir_dateTime,
		Age,
		Period,
		Duration,
		Range,
		Timing
	} timing_type;
	union {
		fhir_dateTime _fhir_dateTime;
		Age* _age;
		Period* _period;
		Duration* _duration;
		Range* _range;
		Timing* _timing;
	} timing;

	int participant_count;
	PlanDefinition_Action_Participant* participant;
	CodeableConcept* type;
	fhir_code groupingBehavior;
	fhir_code selectionBehavior;
	fhir_code requiredBehavior;
	fhir_code precheckBehavior;
	fhir_code cardinalityBehavior;
	enum class Definition {
		fhir_canonical,
		fhir_uri
	} definition_type;
	union {
		fhir_canonical _fhir_canonical;
		fhir_uri _fhir_uri;
	} definition;

	fhir_canonical transform;
	int dynamicValue_count;
	PlanDefinition_Action_DynamicValue* dynamicValue;
	int action_count;
	PlanDefinition_Action* action;
};
class PlanDefinition_Action_Condition {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	fhir_code kind;
	Expression* expression;
};
class PlanDefinition_Action_RelatedAction {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	fhir_id actionId;
	fhir_code relationship;
	enum class Offset {
		Duration,
		Range
	} offset_type;
	union {
		Duration* _duration;
		Range* _range;
	} offset;

};
class PlanDefinition_Action_Participant {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	fhir_code type;
	CodeableConcept* role;
};
class PlanDefinition_Action_DynamicValue {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	fhir_string path;
	Expression* expression;
};
class Practitioner {
public:
	fhir_string id;
	Meta* meta;
	fhir_uri implicitRules;
	fhir_code language;
	Narrative* text;
	int contained_count;
	Resource* contained;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	int identifier_count;
	Identifier* identifier;
	fhir_boolean active;
	int name_count;
	HumanName* name;
	int telecom_count;
	ContactPoint* telecom;
	int address_count;
	Address* address;
	fhir_code gender;
	fhir_date birthDate;
	int photo_count;
	Attachment* photo;
	int qualification_count;
	Practitioner_Qualification* qualification;
	int communication_count;
	CodeableConcept* communication;
};
class Practitioner_Qualification {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	int identifier_count;
	Identifier* identifier;
	CodeableConcept* code;
	Period* period;
	Reference* issuer;
};
class PractitionerRole {
public:
	fhir_string id;
	Meta* meta;
	fhir_uri implicitRules;
	fhir_code language;
	Narrative* text;
	int contained_count;
	Resource* contained;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	int identifier_count;
	Identifier* identifier;
	fhir_boolean active;
	Period* period;
	Reference* practitioner;
	Reference* organization;
	int code_count;
	CodeableConcept* code;
	int specialty_count;
	CodeableConcept* specialty;
	int location_count;
	Reference* location;
	int healthcareService_count;
	Reference* healthcareService;
	int telecom_count;
	ContactPoint* telecom;
	int availableTime_count;
	PractitionerRole_AvailableTime* availableTime;
	int notAvailable_count;
	PractitionerRole_NotAvailable* notAvailable;
	fhir_string availabilityExceptions;
	int endpoint_count;
	Reference* endpoint;
};
class PractitionerRole_AvailableTime {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	int daysOfWeek_count;
	fhir_code daysOfWeek;
	fhir_boolean allDay;
	fhir_time availableStartTime;
	fhir_time availableEndTime;
};
class PractitionerRole_NotAvailable {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	fhir_string description;
	Period* during;
};
class Procedure {
public:
	fhir_string id;
	Meta* meta;
	fhir_uri implicitRules;
	fhir_code language;
	Narrative* text;
	int contained_count;
	Resource* contained;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	int identifier_count;
	Identifier* identifier;
	int instantiatesCanonical_count;
	fhir_canonical instantiatesCanonical;
	int instantiatesUri_count;
	fhir_uri instantiatesUri;
	int basedOn_count;
	Reference* basedOn;
	int partOf_count;
	Reference* partOf;
	fhir_code status;
	CodeableConcept* statusReason;
	CodeableConcept* category;
	CodeableConcept* code;
	Reference* subject;
	Reference* encounter;
	enum class Performed {
		fhir_dateTime,
		Period,
		fhir_string,
		Age,
		Range
	} performed_type;
	union {
		fhir_dateTime _fhir_dateTime;
		Period* _period;
		fhir_string _fhir_string;
		Age* _age;
		Range* _range;
	} performed;

	Reference* recorder;
	Reference* asserter;
	int performer_count;
	Procedure_Performer* performer;
	Reference* location;
	int reasonCode_count;
	CodeableConcept* reasonCode;
	int reasonReference_count;
	Reference* reasonReference;
	int bodySite_count;
	CodeableConcept* bodySite;
	CodeableConcept* outcome;
	int report_count;
	Reference* report;
	int complication_count;
	CodeableConcept* complication;
	int complicationDetail_count;
	Reference* complicationDetail;
	int followUp_count;
	CodeableConcept* followUp;
	int note_count;
	Annotation* note;
	int focalDevice_count;
	Procedure_FocalDevice* focalDevice;
	int usedReference_count;
	Reference* usedReference;
	int usedCode_count;
	CodeableConcept* usedCode;
};
class Procedure_Performer {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	CodeableConcept* function;
	Reference* actor;
	Reference* onBehalfOf;
};
class Procedure_FocalDevice {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	CodeableConcept* action;
	Reference* manipulated;
};
class Provenance {
public:
	fhir_string id;
	Meta* meta;
	fhir_uri implicitRules;
	fhir_code language;
	Narrative* text;
	int contained_count;
	Resource* contained;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	int target_count;
	Reference* target;
	enum class Occurred {
		Period,
		fhir_dateTime
	} occurred_type;
	union {
		Period* _period;
		fhir_dateTime _fhir_dateTime;
	} occurred;

	fhir_instant recorded;
	int policy_count;
	fhir_uri policy;
	Reference* location;
	int reason_count;
	CodeableConcept* reason;
	CodeableConcept* activity;
	int agent_count;
	Provenance_Agent* agent;
	int entity_count;
	Provenance_Entity* entity;
	int signature_count;
	Signature* signature;
};
class Provenance_Agent {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	CodeableConcept* type;
	int role_count;
	CodeableConcept* role;
	Reference* who;
	Reference* onBehalfOf;
};
class Provenance_Entity {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	fhir_code role;
	Reference* what;
	int agent_count;
	Provenance_Agent* agent;
};
class Questionnaire {
public:
	fhir_string id;
	Meta* meta;
	fhir_uri implicitRules;
	fhir_code language;
	Narrative* text;
	int contained_count;
	Resource* contained;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	fhir_uri url;
	int identifier_count;
	Identifier* identifier;
	fhir_string version;
	fhir_string name;
	fhir_string title;
	int derivedFrom_count;
	fhir_canonical derivedFrom;
	fhir_code status;
	fhir_boolean experimental;
	int subjectType_count;
	fhir_code subjectType;
	fhir_dateTime date;
	fhir_string publisher;
	int contact_count;
	ContactDetail* contact;
	fhir_markdown description;
	int useContext_count;
	UsageContext* useContext;
	int jurisdiction_count;
	CodeableConcept* jurisdiction;
	fhir_markdown purpose;
	fhir_markdown copyright;
	fhir_date approvalDate;
	fhir_date lastReviewDate;
	Period* effectivePeriod;
	int code_count;
	Coding* code;
	int item_count;
	Questionnaire_Item* item;
};
class Questionnaire_Item {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	fhir_string linkId;
	fhir_uri definition;
	int code_count;
	Coding* code;
	fhir_string prefix;
	fhir_string text;
	fhir_code type;
	int enableWhen_count;
	Questionnaire_Item_EnableWhen* enableWhen;
	fhir_code enableBehavior;
	fhir_boolean required;
	fhir_boolean repeats;
	fhir_boolean readOnly;
	integer* maxLength;
	fhir_canonical answerValueSet;
	int answerOption_count;
	Questionnaire_Item_AnswerOption* answerOption;
	int initial_count;
	Questionnaire_Item_Initial* initial;
	int item_count;
	Questionnaire_Item* item;
};
class Questionnaire_Item_EnableWhen {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	fhir_string question;
	fhir_code operator_;
	enum class Answer {
		fhir_boolean,
		fhir_decimal,
		integer,
		fhir_date,
		fhir_dateTime,
		fhir_time,
		fhir_string,
		Coding,
		Quantity,
		Reference
	} answer_type;
	union {
		fhir_boolean _fhir_boolean;
		fhir_decimal _fhir_decimal;
		integer* _integer;
		fhir_date _fhir_date;
		fhir_dateTime _fhir_dateTime;
		fhir_time _fhir_time;
		fhir_string _fhir_string;
		Coding* _coding;
		Quantity* _quantity;
		Reference* _reference;
	} answer;

};
class Questionnaire_Item_AnswerOption {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	enum class Value {
		integer,
		fhir_date,
		fhir_time,
		fhir_string,
		Coding,
		Reference
	} value_type;
	union {
		integer* _integer;
		fhir_date _fhir_date;
		fhir_time _fhir_time;
		fhir_string _fhir_string;
		Coding* _coding;
		Reference* _reference;
	} value;

	fhir_boolean initialSelected;
};
class Questionnaire_Item_Initial {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	enum class Value {
		fhir_boolean,
		fhir_decimal,
		integer,
		fhir_date,
		fhir_dateTime,
		fhir_time,
		fhir_string,
		fhir_uri,
		Attachment,
		Coding,
		Quantity,
		Reference
	} value_type;
	union {
		fhir_boolean _fhir_boolean;
		fhir_decimal _fhir_decimal;
		integer* _integer;
		fhir_date _fhir_date;
		fhir_dateTime _fhir_dateTime;
		fhir_time _fhir_time;
		fhir_string _fhir_string;
		fhir_uri _fhir_uri;
		Attachment* _attachment;
		Coding* _coding;
		Quantity* _quantity;
		Reference* _reference;
	} value;

};
class QuestionnaireResponse {
public:
	fhir_string id;
	Meta* meta;
	fhir_uri implicitRules;
	fhir_code language;
	Narrative* text;
	int contained_count;
	Resource* contained;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	Identifier* identifier;
	int basedOn_count;
	Reference* basedOn;
	int partOf_count;
	Reference* partOf;
	fhir_canonical questionnaire;
	fhir_code status;
	Reference* subject;
	Reference* encounter;
	fhir_dateTime authored;
	Reference* author;
	Reference* source;
	int item_count;
	QuestionnaireResponse_Item* item;
};
class QuestionnaireResponse_Item {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	fhir_string linkId;
	fhir_uri definition;
	fhir_string text;
	int answer_count;
	QuestionnaireResponse_Item_Answer* answer;
	int item_count;
	QuestionnaireResponse_Item* item;
};
class QuestionnaireResponse_Item_Answer {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	enum class Value {
		fhir_boolean,
		fhir_decimal,
		integer,
		fhir_date,
		fhir_dateTime,
		fhir_time,
		fhir_string,
		fhir_uri,
		Attachment,
		Coding,
		Quantity,
		Reference
	} value_type;
	union {
		fhir_boolean _fhir_boolean;
		fhir_decimal _fhir_decimal;
		integer* _integer;
		fhir_date _fhir_date;
		fhir_dateTime _fhir_dateTime;
		fhir_time _fhir_time;
		fhir_string _fhir_string;
		fhir_uri _fhir_uri;
		Attachment* _attachment;
		Coding* _coding;
		Quantity* _quantity;
		Reference* _reference;
	} value;

	int item_count;
	QuestionnaireResponse_Item* item;
};
class RelatedPerson {
public:
	fhir_string id;
	Meta* meta;
	fhir_uri implicitRules;
	fhir_code language;
	Narrative* text;
	int contained_count;
	Resource* contained;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	int identifier_count;
	Identifier* identifier;
	fhir_boolean active;
	Reference* patient;
	int relationship_count;
	CodeableConcept* relationship;
	int name_count;
	HumanName* name;
	int telecom_count;
	ContactPoint* telecom;
	fhir_code gender;
	fhir_date birthDate;
	int address_count;
	Address* address;
	int photo_count;
	Attachment* photo;
	Period* period;
	int communication_count;
	RelatedPerson_Communication* communication;
};
class RelatedPerson_Communication {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	CodeableConcept* language;
	fhir_boolean preferred;
};
class RequestGroup {
public:
	fhir_string id;
	Meta* meta;
	fhir_uri implicitRules;
	fhir_code language;
	Narrative* text;
	int contained_count;
	Resource* contained;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	int identifier_count;
	Identifier* identifier;
	int instantiatesCanonical_count;
	fhir_canonical instantiatesCanonical;
	int instantiatesUri_count;
	fhir_uri instantiatesUri;
	int basedOn_count;
	Reference* basedOn;
	int replaces_count;
	Reference* replaces;
	Identifier* groupIdentifier;
	fhir_code status;
	fhir_code intent;
	fhir_code priority;
	CodeableConcept* code;
	Reference* subject;
	Reference* encounter;
	fhir_dateTime authoredOn;
	Reference* author;
	int reasonCode_count;
	CodeableConcept* reasonCode;
	int reasonReference_count;
	Reference* reasonReference;
	int note_count;
	Annotation* note;
	int action_count;
	RequestGroup_Action* action;
};
class RequestGroup_Action {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	fhir_string prefix;
	fhir_string title;
	fhir_string description;
	fhir_string textEquivalent;
	fhir_code priority;
	int code_count;
	CodeableConcept* code;
	int documentation_count;
	RelatedArtifact* documentation;
	int condition_count;
	RequestGroup_Action_Condition* condition;
	int relatedAction_count;
	RequestGroup_Action_RelatedAction* relatedAction;
	enum class Timing {
		fhir_dateTime,
		Age,
		Period,
		Duration,
		Range,
		Timing
	} timing_type;
	union {
		fhir_dateTime _fhir_dateTime;
		Age* _age;
		Period* _period;
		Duration* _duration;
		Range* _range;
		Timing* _timing;
	} timing;

	int participant_count;
	Reference* participant;
	CodeableConcept* type;
	fhir_code groupingBehavior;
	fhir_code selectionBehavior;
	fhir_code requiredBehavior;
	fhir_code precheckBehavior;
	fhir_code cardinalityBehavior;
	Reference* resource;
	int action_count;
	RequestGroup_Action* action;
};
class RequestGroup_Action_Condition {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	fhir_code kind;
	Expression* expression;
};
class RequestGroup_Action_RelatedAction {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	fhir_id actionId;
	fhir_code relationship;
	enum class Offset {
		Duration,
		Range
	} offset_type;
	union {
		Duration* _duration;
		Range* _range;
	} offset;

};
class ResearchDefinition {
public:
	fhir_string id;
	Meta* meta;
	fhir_uri implicitRules;
	fhir_code language;
	Narrative* text;
	int contained_count;
	Resource* contained;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	fhir_uri url;
	int identifier_count;
	Identifier* identifier;
	fhir_string version;
	fhir_string name;
	fhir_string title;
	fhir_string shortTitle;
	fhir_string subtitle;
	fhir_code status;
	fhir_boolean experimental;
	enum class Subject {
		CodeableConcept,
		Reference
	} subject_type;
	union {
		CodeableConcept* _codeableConcept;
		Reference* _reference;
	} subject;

	fhir_dateTime date;
	fhir_string publisher;
	int contact_count;
	ContactDetail* contact;
	fhir_markdown description;
	int comment_count;
	fhir_string comment;
	int useContext_count;
	UsageContext* useContext;
	int jurisdiction_count;
	CodeableConcept* jurisdiction;
	fhir_markdown purpose;
	fhir_string usage;
	fhir_markdown copyright;
	fhir_date approvalDate;
	fhir_date lastReviewDate;
	Period* effectivePeriod;
	int topic_count;
	CodeableConcept* topic;
	int author_count;
	ContactDetail* author;
	int editor_count;
	ContactDetail* editor;
	int reviewer_count;
	ContactDetail* reviewer;
	int endorser_count;
	ContactDetail* endorser;
	int relatedArtifact_count;
	RelatedArtifact* relatedArtifact;
	int library_count;
	fhir_canonical library;
	Reference* population;
	Reference* exposure;
	Reference* exposureAlternative;
	Reference* outcome;
};
class ResearchElementDefinition {
public:
	fhir_string id;
	Meta* meta;
	fhir_uri implicitRules;
	fhir_code language;
	Narrative* text;
	int contained_count;
	Resource* contained;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	fhir_uri url;
	int identifier_count;
	Identifier* identifier;
	fhir_string version;
	fhir_string name;
	fhir_string title;
	fhir_string shortTitle;
	fhir_string subtitle;
	fhir_code status;
	fhir_boolean experimental;
	enum class Subject {
		CodeableConcept,
		Reference
	} subject_type;
	union {
		CodeableConcept* _codeableConcept;
		Reference* _reference;
	} subject;

	fhir_dateTime date;
	fhir_string publisher;
	int contact_count;
	ContactDetail* contact;
	fhir_markdown description;
	int comment_count;
	fhir_string comment;
	int useContext_count;
	UsageContext* useContext;
	int jurisdiction_count;
	CodeableConcept* jurisdiction;
	fhir_markdown purpose;
	fhir_string usage;
	fhir_markdown copyright;
	fhir_date approvalDate;
	fhir_date lastReviewDate;
	Period* effectivePeriod;
	int topic_count;
	CodeableConcept* topic;
	int author_count;
	ContactDetail* author;
	int editor_count;
	ContactDetail* editor;
	int reviewer_count;
	ContactDetail* reviewer;
	int endorser_count;
	ContactDetail* endorser;
	int relatedArtifact_count;
	RelatedArtifact* relatedArtifact;
	int library_count;
	fhir_canonical library;
	fhir_code type;
	fhir_code variableType;
	int characteristic_count;
	ResearchElementDefinition_Characteristic* characteristic;
};
class ResearchElementDefinition_Characteristic {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	enum class Definition {
		CodeableConcept,
		fhir_canonical,
		Expression,
		DataRequirement
	} definition_type;
	union {
		CodeableConcept* _codeableConcept;
		fhir_canonical _fhir_canonical;
		Expression* _expression;
		DataRequirement* _dataRequirement;
	} definition;

	int usageContext_count;
	UsageContext* usageContext;
	fhir_boolean exclude;
	CodeableConcept* unitOfMeasure;
	fhir_string studyEffectiveDescription;
	enum class StudyEffective {
		fhir_dateTime,
		Period,
		Duration,
		Timing
	} studyEffective_type;
	union {
		fhir_dateTime _fhir_dateTime;
		Period* _period;
		Duration* _duration;
		Timing* _timing;
	} studyEffective;

	Duration* studyEffectiveTimeFromStart;
	fhir_code studyEffectiveGroupMeasure;
	fhir_string participantEffectiveDescription;
	enum class ParticipantEffective {
		fhir_dateTime,
		Period,
		Duration,
		Timing
	} participantEffective_type;
	union {
		fhir_dateTime _fhir_dateTime;
		Period* _period;
		Duration* _duration;
		Timing* _timing;
	} participantEffective;

	Duration* participantEffectiveTimeFromStart;
	fhir_code participantEffectiveGroupMeasure;
};
class ResearchStudy {
public:
	fhir_string id;
	Meta* meta;
	fhir_uri implicitRules;
	fhir_code language;
	Narrative* text;
	int contained_count;
	Resource* contained;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	int identifier_count;
	Identifier* identifier;
	fhir_string title;
	int protocol_count;
	Reference* protocol;
	int partOf_count;
	Reference* partOf;
	fhir_code status;
	CodeableConcept* primaryPurposeType;
	CodeableConcept* phase;
	int category_count;
	CodeableConcept* category;
	int focus_count;
	CodeableConcept* focus;
	int condition_count;
	CodeableConcept* condition;
	int contact_count;
	ContactDetail* contact;
	int relatedArtifact_count;
	RelatedArtifact* relatedArtifact;
	int keyword_count;
	CodeableConcept* keyword;
	int location_count;
	CodeableConcept* location;
	fhir_markdown description;
	int enrollment_count;
	Reference* enrollment;
	Period* period;
	Reference* sponsor;
	Reference* principalInvestigator;
	int site_count;
	Reference* site;
	CodeableConcept* reasonStopped;
	int note_count;
	Annotation* note;
	int arm_count;
	ResearchStudy_Arm* arm;
	int objective_count;
	ResearchStudy_Objective* objective;
};
class ResearchStudy_Arm {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	fhir_string name;
	CodeableConcept* type;
	fhir_string description;
};
class ResearchStudy_Objective {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	fhir_string name;
	CodeableConcept* type;
};
class ResearchSubject {
public:
	fhir_string id;
	Meta* meta;
	fhir_uri implicitRules;
	fhir_code language;
	Narrative* text;
	int contained_count;
	Resource* contained;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	int identifier_count;
	Identifier* identifier;
	fhir_code status;
	Period* period;
	Reference* study;
	Reference* individual;
	fhir_string assignedArm;
	fhir_string actualArm;
	Reference* consent;
};
class RiskAssessment {
public:
	fhir_string id;
	Meta* meta;
	fhir_uri implicitRules;
	fhir_code language;
	Narrative* text;
	int contained_count;
	Resource* contained;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	int identifier_count;
	Identifier* identifier;
	Reference* basedOn;
	Reference* parent;
	fhir_code status;
	CodeableConcept* method;
	CodeableConcept* code;
	Reference* subject;
	Reference* encounter;
	enum class Occurrence {
		fhir_dateTime,
		Period
	} occurrence_type;
	union {
		fhir_dateTime _fhir_dateTime;
		Period* _period;
	} occurrence;

	Reference* condition;
	Reference* performer;
	int reasonCode_count;
	CodeableConcept* reasonCode;
	int reasonReference_count;
	Reference* reasonReference;
	int basis_count;
	Reference* basis;
	int prediction_count;
	RiskAssessment_Prediction* prediction;
	fhir_string mitigation;
	int note_count;
	Annotation* note;
};
class RiskAssessment_Prediction {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	CodeableConcept* outcome;
	enum class Probability {
		fhir_decimal,
		Range
	} probability_type;
	union {
		fhir_decimal _fhir_decimal;
		Range* _range;
	} probability;

	CodeableConcept* qualitativeRisk;
	fhir_decimal relativeRisk;
	enum class When {
		Period,
		Range
	} when_type;
	union {
		Period* _period;
		Range* _range;
	} when;

	fhir_string rationale;
};
class RiskEvidenceSynthesis {
public:
	fhir_string id;
	Meta* meta;
	fhir_uri implicitRules;
	fhir_code language;
	Narrative* text;
	int contained_count;
	Resource* contained;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	fhir_uri url;
	int identifier_count;
	Identifier* identifier;
	fhir_string version;
	fhir_string name;
	fhir_string title;
	fhir_code status;
	fhir_dateTime date;
	fhir_string publisher;
	int contact_count;
	ContactDetail* contact;
	fhir_markdown description;
	int note_count;
	Annotation* note;
	int useContext_count;
	UsageContext* useContext;
	int jurisdiction_count;
	CodeableConcept* jurisdiction;
	fhir_markdown copyright;
	fhir_date approvalDate;
	fhir_date lastReviewDate;
	Period* effectivePeriod;
	int topic_count;
	CodeableConcept* topic;
	int author_count;
	ContactDetail* author;
	int editor_count;
	ContactDetail* editor;
	int reviewer_count;
	ContactDetail* reviewer;
	int endorser_count;
	ContactDetail* endorser;
	int relatedArtifact_count;
	RelatedArtifact* relatedArtifact;
	CodeableConcept* synthesisType;
	CodeableConcept* studyType;
	Reference* population;
	Reference* exposure;
	Reference* outcome;
	RiskEvidenceSynthesis_SampleSize* sampleSize;
	RiskEvidenceSynthesis_RiskEstimate* riskEstimate;
	int certainty_count;
	RiskEvidenceSynthesis_Certainty* certainty;
};
class RiskEvidenceSynthesis_SampleSize {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	fhir_string description;
	integer* numberOfStudies;
	integer* numberOfParticipants;
};
class RiskEvidenceSynthesis_RiskEstimate {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	fhir_string description;
	CodeableConcept* type;
	fhir_decimal value;
	CodeableConcept* unitOfMeasure;
	integer* denominatorCount;
	integer* numeratorCount;
	int precisionEstimate_count;
	RiskEvidenceSynthesis_RiskEstimate_PrecisionEstimate* precisionEstimate;
};
class RiskEvidenceSynthesis_RiskEstimate_PrecisionEstimate {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	CodeableConcept* type;
	fhir_decimal level;
	fhir_decimal from;
	fhir_decimal to;
};
class RiskEvidenceSynthesis_Certainty {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	int rating_count;
	CodeableConcept* rating;
	int note_count;
	Annotation* note;
	int certaintySubcomponent_count;
	RiskEvidenceSynthesis_Certainty_CertaintySubcomponent* certaintySubcomponent;
};
class RiskEvidenceSynthesis_Certainty_CertaintySubcomponent {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	CodeableConcept* type;
	int rating_count;
	CodeableConcept* rating;
	int note_count;
	Annotation* note;
};
class Schedule {
public:
	fhir_string id;
	Meta* meta;
	fhir_uri implicitRules;
	fhir_code language;
	Narrative* text;
	int contained_count;
	Resource* contained;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	int identifier_count;
	Identifier* identifier;
	fhir_boolean active;
	int serviceCategory_count;
	CodeableConcept* serviceCategory;
	int serviceType_count;
	CodeableConcept* serviceType;
	int specialty_count;
	CodeableConcept* specialty;
	int actor_count;
	Reference* actor;
	Period* planningHorizon;
	fhir_string comment;
};
class SearchParameter {
public:
	fhir_string id;
	Meta* meta;
	fhir_uri implicitRules;
	fhir_code language;
	Narrative* text;
	int contained_count;
	Resource* contained;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	fhir_uri url;
	fhir_string version;
	fhir_string name;
	fhir_canonical derivedFrom;
	fhir_code status;
	fhir_boolean experimental;
	fhir_dateTime date;
	fhir_string publisher;
	int contact_count;
	ContactDetail* contact;
	fhir_markdown description;
	int useContext_count;
	UsageContext* useContext;
	int jurisdiction_count;
	CodeableConcept* jurisdiction;
	fhir_markdown purpose;
	fhir_code code;
	int base_count;
	fhir_code base;
	fhir_code type;
	fhir_string expression;
	fhir_string xpath;
	fhir_code xpathUsage;
	int target_count;
	fhir_code target;
	fhir_boolean multipleOr;
	fhir_boolean multipleAnd;
	int comparator_count;
	fhir_code comparator;
	int modifier_count;
	fhir_code modifier;
	int chain_count;
	fhir_string chain;
	int component_count;
	SearchParameter_Component* component;
};
class SearchParameter_Component {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	fhir_canonical definition;
	fhir_string expression;
};
class ServiceRequest {
public:
	fhir_string id;
	Meta* meta;
	fhir_uri implicitRules;
	fhir_code language;
	Narrative* text;
	int contained_count;
	Resource* contained;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	int identifier_count;
	Identifier* identifier;
	int instantiatesCanonical_count;
	fhir_canonical instantiatesCanonical;
	int instantiatesUri_count;
	fhir_uri instantiatesUri;
	int basedOn_count;
	Reference* basedOn;
	int replaces_count;
	Reference* replaces;
	Identifier* requisition;
	fhir_code status;
	fhir_code intent;
	int category_count;
	CodeableConcept* category;
	fhir_code priority;
	fhir_boolean doNotPerform;
	CodeableConcept* code;
	int orderDetail_count;
	CodeableConcept* orderDetail;
	enum class Quantity {
		Quantity,
		Ratio,
		Range
	} quantity_type;
	union {
		Quantity* _quantity;
		Ratio* _ratio;
		Range* _range;
	} quantity;

	Reference* subject;
	Reference* encounter;
	enum class Occurrence {
		fhir_dateTime,
		Period,
		Timing
	} occurrence_type;
	union {
		fhir_dateTime _fhir_dateTime;
		Period* _period;
		Timing* _timing;
	} occurrence;

	enum class AsNeeded {
		fhir_boolean,
		CodeableConcept
	} asNeeded_type;
	union {
		fhir_boolean _fhir_boolean;
		CodeableConcept* _codeableConcept;
	} asNeeded;

	fhir_dateTime authoredOn;
	Reference* requester;
	CodeableConcept* performerType;
	int performer_count;
	Reference* performer;
	int locationCode_count;
	CodeableConcept* locationCode;
	int locationReference_count;
	Reference* locationReference;
	int reasonCode_count;
	CodeableConcept* reasonCode;
	int reasonReference_count;
	Reference* reasonReference;
	int insurance_count;
	Reference* insurance;
	int supportingInfo_count;
	Reference* supportingInfo;
	int specimen_count;
	Reference* specimen;
	int bodySite_count;
	CodeableConcept* bodySite;
	int note_count;
	Annotation* note;
	fhir_string patientInstruction;
	int relevantHistory_count;
	Reference* relevantHistory;
};
class Slot {
public:
	fhir_string id;
	Meta* meta;
	fhir_uri implicitRules;
	fhir_code language;
	Narrative* text;
	int contained_count;
	Resource* contained;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	int identifier_count;
	Identifier* identifier;
	int serviceCategory_count;
	CodeableConcept* serviceCategory;
	int serviceType_count;
	CodeableConcept* serviceType;
	int specialty_count;
	CodeableConcept* specialty;
	CodeableConcept* appointmentType;
	Reference* schedule;
	fhir_code status;
	fhir_instant start;
	fhir_instant end;
	fhir_boolean overbooked;
	fhir_string comment;
};
class Specimen {
public:
	fhir_string id;
	Meta* meta;
	fhir_uri implicitRules;
	fhir_code language;
	Narrative* text;
	int contained_count;
	Resource* contained;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	int identifier_count;
	Identifier* identifier;
	Identifier* accessionIdentifier;
	fhir_code status;
	CodeableConcept* type;
	Reference* subject;
	fhir_dateTime receivedTime;
	int parent_count;
	Reference* parent;
	int request_count;
	Reference* request;
	Specimen_Collection* collection;
	int processing_count;
	Specimen_Processing* processing;
	int container_count;
	Specimen_Container* container;
	int condition_count;
	CodeableConcept* condition;
	int note_count;
	Annotation* note;
};
class Specimen_Collection {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	Reference* collector;
	enum class Collected {
		fhir_dateTime,
		Period
	} collected_type;
	union {
		fhir_dateTime _fhir_dateTime;
		Period* _period;
	} collected;

	Duration* duration;
	Quantity* quantity;
	CodeableConcept* method;
	CodeableConcept* bodySite;
	enum class FastingStatus {
		CodeableConcept,
		Duration
	} fastingStatus_type;
	union {
		CodeableConcept* _codeableConcept;
		Duration* _duration;
	} fastingStatus;

};
class Specimen_Processing {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	fhir_string description;
	CodeableConcept* procedure;
	int additive_count;
	Reference* additive;
	enum class Time {
		fhir_dateTime,
		Period
	} time_type;
	union {
		fhir_dateTime _fhir_dateTime;
		Period* _period;
	} time;

};
class Specimen_Container {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	int identifier_count;
	Identifier* identifier;
	fhir_string description;
	CodeableConcept* type;
	Quantity* capacity;
	Quantity* specimenQuantity;
	enum class Additive {
		CodeableConcept,
		Reference
	} additive_type;
	union {
		CodeableConcept* _codeableConcept;
		Reference* _reference;
	} additive;

};
class SpecimenDefinition {
public:
	fhir_string id;
	Meta* meta;
	fhir_uri implicitRules;
	fhir_code language;
	Narrative* text;
	int contained_count;
	Resource* contained;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	Identifier* identifier;
	CodeableConcept* typeCollected;
	int patientPreparation_count;
	CodeableConcept* patientPreparation;
	fhir_string timeAspect;
	int collection_count;
	CodeableConcept* collection;
	int typeTested_count;
	SpecimenDefinition_TypeTested* typeTested;
};
class SpecimenDefinition_TypeTested {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	fhir_boolean isDerived;
	CodeableConcept* type;
	fhir_code preference;
	SpecimenDefinition_TypeTested_Container* container;
	fhir_string requirement;
	Duration* retentionTime;
	int rejectionCriterion_count;
	CodeableConcept* rejectionCriterion;
	int handling_count;
	SpecimenDefinition_TypeTested_Handling* handling;
};
class SpecimenDefinition_TypeTested_Container {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	CodeableConcept* material;
	CodeableConcept* type;
	CodeableConcept* cap;
	fhir_string description;
	Quantity* capacity;
	enum class MinimumVolume {
		Quantity,
		fhir_string
	} minimumVolume_type;
	union {
		Quantity* _quantity;
		fhir_string _fhir_string;
	} minimumVolume;

	int additive_count;
	SpecimenDefinition_TypeTested_Container_Additive* additive;
	fhir_string preparation;
};
class SpecimenDefinition_TypeTested_Container_Additive {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	enum class Additive {
		CodeableConcept,
		Reference
	} additive_type;
	union {
		CodeableConcept* _codeableConcept;
		Reference* _reference;
	} additive;

};
class SpecimenDefinition_TypeTested_Handling {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	CodeableConcept* temperatureQualifier;
	Range* temperatureRange;
	Duration* maxDuration;
	fhir_string instruction;
};
class StructureDefinition {
public:
	fhir_string id;
	Meta* meta;
	fhir_uri implicitRules;
	fhir_code language;
	Narrative* text;
	int contained_count;
	Resource* contained;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	fhir_uri url;
	int identifier_count;
	Identifier* identifier;
	fhir_string version;
	fhir_string name;
	fhir_string title;
	fhir_code status;
	fhir_boolean experimental;
	fhir_dateTime date;
	fhir_string publisher;
	int contact_count;
	ContactDetail* contact;
	fhir_markdown description;
	int useContext_count;
	UsageContext* useContext;
	int jurisdiction_count;
	CodeableConcept* jurisdiction;
	fhir_markdown purpose;
	fhir_markdown copyright;
	int keyword_count;
	Coding* keyword;
	fhir_code fhirVersion;
	int mapping_count;
	StructureDefinition_Mapping* mapping;
	fhir_code kind;
	fhir_boolean abstract;
	int context_count;
	StructureDefinition_Context* context;
	int contextInvariant_count;
	fhir_string contextInvariant;
	fhir_uri type;
	fhir_canonical baseDefinition;
	fhir_code derivation;
	StructureDefinition_Snapshot* snapshot;
	StructureDefinition_Differential* differential;
};
class StructureDefinition_Mapping {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	fhir_id identity;
	fhir_uri uri;
	fhir_string name;
	fhir_string comment;
};
class StructureDefinition_Context {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	fhir_code type;
	fhir_string expression;
};
class StructureDefinition_Snapshot {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	int element_count;
	ElementDefinition* element;
};
class StructureDefinition_Differential {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	int element_count;
	ElementDefinition* element;
};
class StructureMap {
public:
	fhir_string id;
	Meta* meta;
	fhir_uri implicitRules;
	fhir_code language;
	Narrative* text;
	int contained_count;
	Resource* contained;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	fhir_uri url;
	int identifier_count;
	Identifier* identifier;
	fhir_string version;
	fhir_string name;
	fhir_string title;
	fhir_code status;
	fhir_boolean experimental;
	fhir_dateTime date;
	fhir_string publisher;
	int contact_count;
	ContactDetail* contact;
	fhir_markdown description;
	int useContext_count;
	UsageContext* useContext;
	int jurisdiction_count;
	CodeableConcept* jurisdiction;
	fhir_markdown purpose;
	fhir_markdown copyright;
	int structure_count;
	StructureMap_Structure* structure;
	int import_count;
	fhir_canonical import;
	int group_count;
	StructureMap_Group* group;
};
class StructureMap_Structure {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	fhir_canonical url;
	fhir_code mode;
	fhir_string alias;
	fhir_string documentation;
};
class StructureMap_Group {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	fhir_id name;
	fhir_id extends;
	fhir_code typeMode;
	fhir_string documentation;
	int input_count;
	StructureMap_Group_Input* input;
	int rule_count;
	StructureMap_Group_Rule* rule;
};
class StructureMap_Group_Input {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	fhir_id name;
	fhir_string type;
	fhir_code mode;
	fhir_string documentation;
};
class StructureMap_Group_Rule {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	fhir_id name;
	int source_count;
	StructureMap_Group_Rule_Source* source;
	int target_count;
	StructureMap_Group_Rule_Target* target;
	int rule_count;
	StructureMap_Group_Rule* rule;
	int dependent_count;
	StructureMap_Group_Rule_Dependent* dependent;
	fhir_string documentation;
};
class StructureMap_Group_Rule_Source {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	fhir_id context;
	integer* min;
	fhir_string max;
	fhir_string type;
	enum class DefaultValue {
		fhir_base64Binary,
		fhir_boolean,
		fhir_canonical,
		fhir_code,
		fhir_date,
		fhir_dateTime,
		fhir_decimal,
		fhir_id,
		fhir_instant,
		integer,
		fhir_markdown,
		fhir_oid,
		fhir_positiveInt,
		fhir_string,
		fhir_time,
		fhir_unsignedInt,
		fhir_uri,
		fhir_url,
		fhir_uuid,
		Address,
		Age,
		Annotation,
		Attachment,
		CodeableConcept,
		Coding,
		ContactPoint,
		Count,
		Distance,
		Duration,
		HumanName,
		Identifier,
		Money,
		Period,
		Quantity,
		Range,
		Ratio,
		Reference,
		SampledData,
		Signature,
		Timing,
		ContactDetail,
		Contributor,
		DataRequirement,
		Expression,
		ParameterDefinition,
		RelatedArtifact,
		TriggerDefinition,
		UsageContext,
		Dosage,
		Meta
	} defaultValue_type;
	union {
		fhir_base64Binary _fhir_base64Binary;
		fhir_boolean _fhir_boolean;
		fhir_canonical _fhir_canonical;
		fhir_code _fhir_code;
		fhir_date _fhir_date;
		fhir_dateTime _fhir_dateTime;
		fhir_decimal _fhir_decimal;
		fhir_id _fhir_id;
		fhir_instant _fhir_instant;
		integer* _integer;
		fhir_markdown _fhir_markdown;
		fhir_oid _fhir_oid;
		fhir_positiveInt _fhir_positiveInt;
		fhir_string _fhir_string;
		fhir_time _fhir_time;
		fhir_unsignedInt _fhir_unsignedInt;
		fhir_uri _fhir_uri;
		fhir_url _fhir_url;
		fhir_uuid _fhir_uuid;
		Address* _address;
		Age* _age;
		Annotation* _annotation;
		Attachment* _attachment;
		CodeableConcept* _codeableConcept;
		Coding* _coding;
		ContactPoint* _contactPoint;
		Count* _count;
		Distance* _distance;
		Duration* _duration;
		HumanName* _humanName;
		Identifier* _identifier;
		Money* _money;
		Period* _period;
		Quantity* _quantity;
		Range* _range;
		Ratio* _ratio;
		Reference* _reference;
		SampledData* _sampledData;
		Signature* _signature;
		Timing* _timing;
		ContactDetail* _contactDetail;
		Contributor* _contributor;
		DataRequirement* _dataRequirement;
		Expression* _expression;
		ParameterDefinition* _parameterDefinition;
		RelatedArtifact* _relatedArtifact;
		TriggerDefinition* _triggerDefinition;
		UsageContext* _usageContext;
		Dosage* _dosage;
		Meta* _meta;
	} defaultValue;

	fhir_string element;
	fhir_code listMode;
	fhir_id variable;
	fhir_string condition;
	fhir_string check;
	fhir_string logMessage;
};
class StructureMap_Group_Rule_Target {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	fhir_id context;
	fhir_code contextType;
	fhir_string element;
	fhir_id variable;
	int listMode_count;
	fhir_code listMode;
	fhir_id listRuleId;
	fhir_code transform;
	int parameter_count;
	StructureMap_Group_Rule_Target_Parameter* parameter;
};
class StructureMap_Group_Rule_Target_Parameter {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	enum class Value {
		fhir_id,
		fhir_string,
		fhir_boolean,
		integer,
		fhir_decimal
	} value_type;
	union {
		fhir_id _fhir_id;
		fhir_string _fhir_string;
		fhir_boolean _fhir_boolean;
		integer* _integer;
		fhir_decimal _fhir_decimal;
	} value;

};
class StructureMap_Group_Rule_Dependent {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	fhir_id name;
	int variable_count;
	fhir_string variable;
};
class Subscription {
public:
	fhir_string id;
	Meta* meta;
	fhir_uri implicitRules;
	fhir_code language;
	Narrative* text;
	int contained_count;
	Resource* contained;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	fhir_code status;
	int contact_count;
	ContactPoint* contact;
	fhir_instant end;
	fhir_string reason;
	fhir_string criteria;
	fhir_string error;
	Subscription_Channel* channel;
};
class Subscription_Channel {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	fhir_code type;
	fhir_url endpoint;
	fhir_code payload;
	int header_count;
	fhir_string header;
};
class Substance {
public:
	fhir_string id;
	Meta* meta;
	fhir_uri implicitRules;
	fhir_code language;
	Narrative* text;
	int contained_count;
	Resource* contained;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	int identifier_count;
	Identifier* identifier;
	fhir_code status;
	int category_count;
	CodeableConcept* category;
	CodeableConcept* code;
	fhir_string description;
	int instance_count;
	Substance_Instance* instance;
	int ingredient_count;
	Substance_Ingredient* ingredient;
};
class Substance_Instance {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	Identifier* identifier;
	fhir_dateTime expiry;
	Quantity* quantity;
};
class Substance_Ingredient {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	Ratio* quantity;
	enum class Substance {
		CodeableConcept,
		Reference
	} substance_type;
	union {
		CodeableConcept* _codeableConcept;
		Reference* _reference;
	} substance;

};
class SubstanceNucleicAcid {
public:
	fhir_string id;
	Meta* meta;
	fhir_uri implicitRules;
	fhir_code language;
	Narrative* text;
	int contained_count;
	Resource* contained;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	CodeableConcept* sequenceType;
	integer* numberOfSubunits;
	fhir_string areaOfHybridisation;
	CodeableConcept* oligoNucleotideType;
	int subunit_count;
	SubstanceNucleicAcid_Subunit* subunit;
};
class SubstanceNucleicAcid_Subunit {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	integer* subunit;
	fhir_string sequence;
	integer* length;
	Attachment* sequenceAttachment;
	CodeableConcept* fivePrime;
	CodeableConcept* threePrime;
	int linkage_count;
	SubstanceNucleicAcid_Subunit_Linkage* linkage;
	int sugar_count;
	SubstanceNucleicAcid_Subunit_Sugar* sugar;
};
class SubstanceNucleicAcid_Subunit_Linkage {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	fhir_string connectivity;
	Identifier* identifier;
	fhir_string name;
	fhir_string residueSite;
};
class SubstanceNucleicAcid_Subunit_Sugar {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	Identifier* identifier;
	fhir_string name;
	fhir_string residueSite;
};
class SubstancePolymer {
public:
	fhir_string id;
	Meta* meta;
	fhir_uri implicitRules;
	fhir_code language;
	Narrative* text;
	int contained_count;
	Resource* contained;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	CodeableConcept* class_;
	CodeableConcept* geometry;
	int copolymerConnectivity_count;
	CodeableConcept* copolymerConnectivity;
	int modification_count;
	fhir_string modification;
	int monomerSet_count;
	SubstancePolymer_MonomerSet* monomerSet;
	int repeat_count;
	SubstancePolymer_Repeat* repeat;
};
class SubstancePolymer_MonomerSet {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	CodeableConcept* ratioType;
	int startingMaterial_count;
	SubstancePolymer_MonomerSet_StartingMaterial* startingMaterial;
};
class SubstancePolymer_MonomerSet_StartingMaterial {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	CodeableConcept* material;
	CodeableConcept* type;
	fhir_boolean isDefining;
	SubstanceAmount* amount;
};
class SubstancePolymer_Repeat {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	integer* numberOfUnits;
	fhir_string averageMolecularFormula;
	CodeableConcept* repeatUnitAmountType;
	int repeatUnit_count;
	SubstancePolymer_Repeat_RepeatUnit* repeatUnit;
};
class SubstancePolymer_Repeat_RepeatUnit {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	CodeableConcept* orientationOfPolymerisation;
	fhir_string repeatUnit;
	SubstanceAmount* amount;
	int degreeOfPolymerisation_count;
	SubstancePolymer_Repeat_RepeatUnit_DegreeOfPolymerisation* degreeOfPolymerisation;
	int structuralRepresentation_count;
	SubstancePolymer_Repeat_RepeatUnit_StructuralRepresentation* structuralRepresentation;
};
class SubstancePolymer_Repeat_RepeatUnit_DegreeOfPolymerisation {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	CodeableConcept* degree;
	SubstanceAmount* amount;
};
class SubstancePolymer_Repeat_RepeatUnit_StructuralRepresentation {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	CodeableConcept* type;
	fhir_string representation;
	Attachment* attachment;
};
class SubstanceProtein {
public:
	fhir_string id;
	Meta* meta;
	fhir_uri implicitRules;
	fhir_code language;
	Narrative* text;
	int contained_count;
	Resource* contained;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	CodeableConcept* sequenceType;
	integer* numberOfSubunits;
	int disulfideLinkage_count;
	fhir_string disulfideLinkage;
	int subunit_count;
	SubstanceProtein_Subunit* subunit;
};
class SubstanceProtein_Subunit {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	integer* subunit;
	fhir_string sequence;
	integer* length;
	Attachment* sequenceAttachment;
	Identifier* nTerminalModificationId;
	fhir_string nTerminalModification;
	Identifier* cTerminalModificationId;
	fhir_string cTerminalModification;
};
class SubstanceReferenceInformation {
public:
	fhir_string id;
	Meta* meta;
	fhir_uri implicitRules;
	fhir_code language;
	Narrative* text;
	int contained_count;
	Resource* contained;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	fhir_string comment;
	int gene_count;
	SubstanceReferenceInformation_Gene* gene;
	int geneElement_count;
	SubstanceReferenceInformation_GeneElement* geneElement;
	int classification_count;
	SubstanceReferenceInformation_Classification* classification;
	int target_count;
	SubstanceReferenceInformation_Target* target;
};
class SubstanceReferenceInformation_Gene {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	CodeableConcept* geneSequenceOrigin;
	CodeableConcept* gene;
	int source_count;
	Reference* source;
};
class SubstanceReferenceInformation_GeneElement {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	CodeableConcept* type;
	Identifier* element;
	int source_count;
	Reference* source;
};
class SubstanceReferenceInformation_Classification {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	CodeableConcept* domain;
	CodeableConcept* classification;
	int subtype_count;
	CodeableConcept* subtype;
	int source_count;
	Reference* source;
};
class SubstanceReferenceInformation_Target {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	Identifier* target;
	CodeableConcept* type;
	CodeableConcept* interaction;
	CodeableConcept* organism;
	CodeableConcept* organismType;
	enum class Amount {
		Quantity,
		Range,
		fhir_string
	} amount_type;
	union {
		Quantity* _quantity;
		Range* _range;
		fhir_string _fhir_string;
	} amount;

	CodeableConcept* amountType;
	int source_count;
	Reference* source;
};
class SubstanceSourceMaterial {
public:
	fhir_string id;
	Meta* meta;
	fhir_uri implicitRules;
	fhir_code language;
	Narrative* text;
	int contained_count;
	Resource* contained;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	CodeableConcept* sourceMaterialClass;
	CodeableConcept* sourceMaterialType;
	CodeableConcept* sourceMaterialState;
	Identifier* organismId;
	fhir_string organismName;
	int parentSubstanceId_count;
	Identifier* parentSubstanceId;
	int parentSubstanceName_count;
	fhir_string parentSubstanceName;
	int countryOfOrigin_count;
	CodeableConcept* countryOfOrigin;
	int geographicalLocation_count;
	fhir_string geographicalLocation;
	CodeableConcept* developmentStage;
	int fractionDescription_count;
	SubstanceSourceMaterial_FractionDescription* fractionDescription;
	SubstanceSourceMaterial_Organism* organism;
	int partDescription_count;
	SubstanceSourceMaterial_PartDescription* partDescription;
};
class SubstanceSourceMaterial_FractionDescription {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	fhir_string fraction;
	CodeableConcept* materialType;
};
class SubstanceSourceMaterial_Organism {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	CodeableConcept* family;
	CodeableConcept* genus;
	CodeableConcept* species;
	CodeableConcept* intraspecificType;
	fhir_string intraspecificDescription;
	int author_count;
	SubstanceSourceMaterial_Organism_Author* author;
	SubstanceSourceMaterial_Organism_Hybrid* hybrid;
	SubstanceSourceMaterial_Organism_OrganismGeneral* organismGeneral;
};
class SubstanceSourceMaterial_Organism_Author {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	CodeableConcept* authorType;
	fhir_string authorDescription;
};
class SubstanceSourceMaterial_Organism_Hybrid {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	fhir_string maternalOrganismId;
	fhir_string maternalOrganismName;
	fhir_string paternalOrganismId;
	fhir_string paternalOrganismName;
	CodeableConcept* hybridType;
};
class SubstanceSourceMaterial_Organism_OrganismGeneral {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	CodeableConcept* kingdom;
	CodeableConcept* phylum;
	CodeableConcept* class_;
	CodeableConcept* order;
};
class SubstanceSourceMaterial_PartDescription {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	CodeableConcept* part;
	CodeableConcept* partLocation;
};
class SubstanceSpecification {
public:
	fhir_string id;
	Meta* meta;
	fhir_uri implicitRules;
	fhir_code language;
	Narrative* text;
	int contained_count;
	Resource* contained;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	Identifier* identifier;
	CodeableConcept* type;
	CodeableConcept* status;
	CodeableConcept* domain;
	fhir_string description;
	int source_count;
	Reference* source;
	fhir_string comment;
	int moiety_count;
	SubstanceSpecification_Moiety* moiety;
	int property_count;
	SubstanceSpecification_Property* property;
	Reference* referenceInformation;
	SubstanceSpecification_Structure* structure;
	int code_count;
	SubstanceSpecification_Code* code;
	int name_count;
	SubstanceSpecification_Name* name;
	int molecularWeight_count;
	SubstanceSpecification_Structure_Isotope_MolecularWeight* molecularWeight;
	int relationship_count;
	SubstanceSpecification_Relationship* relationship;
	Reference* nucleicAcid;
	Reference* polymer;
	Reference* protein;
	Reference* sourceMaterial;
};
class SubstanceSpecification_Moiety {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	CodeableConcept* role;
	Identifier* identifier;
	fhir_string name;
	CodeableConcept* stereochemistry;
	CodeableConcept* opticalActivity;
	fhir_string molecularFormula;
	enum class Amount {
		Quantity,
		fhir_string
	} amount_type;
	union {
		Quantity* _quantity;
		fhir_string _fhir_string;
	} amount;

};
class SubstanceSpecification_Property {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	CodeableConcept* category;
	CodeableConcept* code;
	fhir_string parameters;
	enum class DefiningSubstance {
		Reference,
		CodeableConcept
	} definingSubstance_type;
	union {
		Reference* _reference;
		CodeableConcept* _codeableConcept;
	} definingSubstance;

	enum class Amount {
		Quantity,
		fhir_string
	} amount_type;
	union {
		Quantity* _quantity;
		fhir_string _fhir_string;
	} amount;

};
class SubstanceSpecification_Structure {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	CodeableConcept* stereochemistry;
	CodeableConcept* opticalActivity;
	fhir_string molecularFormula;
	fhir_string molecularFormulaByMoiety;
	int isotope_count;
	SubstanceSpecification_Structure_Isotope* isotope;
	SubstanceSpecification_Structure_Isotope_MolecularWeight* molecularWeight;
	int source_count;
	Reference* source;
	int representation_count;
	SubstanceSpecification_Structure_Representation* representation;
};
class SubstanceSpecification_Structure_Isotope {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	Identifier* identifier;
	CodeableConcept* name;
	CodeableConcept* substitution;
	Quantity* halfLife;
	SubstanceSpecification_Structure_Isotope_MolecularWeight* molecularWeight;
};
class SubstanceSpecification_Structure_Isotope_MolecularWeight {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	CodeableConcept* method;
	CodeableConcept* type;
	Quantity* amount;
};
class SubstanceSpecification_Structure_Representation {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	CodeableConcept* type;
	fhir_string representation;
	Attachment* attachment;
};
class SubstanceSpecification_Code {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	CodeableConcept* code;
	CodeableConcept* status;
	fhir_dateTime statusDate;
	fhir_string comment;
	int source_count;
	Reference* source;
};
class SubstanceSpecification_Name {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	fhir_string name;
	CodeableConcept* type;
	CodeableConcept* status;
	fhir_boolean preferred;
	int language_count;
	CodeableConcept* language;
	int domain_count;
	CodeableConcept* domain;
	int jurisdiction_count;
	CodeableConcept* jurisdiction;
	int synonym_count;
	SubstanceSpecification_Name* synonym;
	int translation_count;
	SubstanceSpecification_Name* translation;
	int official_count;
	SubstanceSpecification_Name_Official* official;
	int source_count;
	Reference* source;
};
class SubstanceSpecification_Name_Official {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	CodeableConcept* authority;
	CodeableConcept* status;
	fhir_dateTime date;
};
class SubstanceSpecification_Relationship {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	enum class Substance {
		Reference,
		CodeableConcept
	} substance_type;
	union {
		Reference* _reference;
		CodeableConcept* _codeableConcept;
	} substance;

	CodeableConcept* relationship;
	fhir_boolean isDefining;
	enum class Amount {
		Quantity,
		Range,
		Ratio,
		fhir_string
	} amount_type;
	union {
		Quantity* _quantity;
		Range* _range;
		Ratio* _ratio;
		fhir_string _fhir_string;
	} amount;

	Ratio* amountRatioLowLimit;
	CodeableConcept* amountType;
	int source_count;
	Reference* source;
};
class SupplyDelivery {
public:
	fhir_string id;
	Meta* meta;
	fhir_uri implicitRules;
	fhir_code language;
	Narrative* text;
	int contained_count;
	Resource* contained;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	int identifier_count;
	Identifier* identifier;
	int basedOn_count;
	Reference* basedOn;
	int partOf_count;
	Reference* partOf;
	fhir_code status;
	Reference* patient;
	CodeableConcept* type;
	SupplyDelivery_SuppliedItem* suppliedItem;
	enum class Occurrence {
		fhir_dateTime,
		Period,
		Timing
	} occurrence_type;
	union {
		fhir_dateTime _fhir_dateTime;
		Period* _period;
		Timing* _timing;
	} occurrence;

	Reference* supplier;
	Reference* destination;
	int receiver_count;
	Reference* receiver;
};
class SupplyDelivery_SuppliedItem {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	Quantity* quantity;
	enum class Item {
		CodeableConcept,
		Reference
	} item_type;
	union {
		CodeableConcept* _codeableConcept;
		Reference* _reference;
	} item;

};
class SupplyRequest {
public:
	fhir_string id;
	Meta* meta;
	fhir_uri implicitRules;
	fhir_code language;
	Narrative* text;
	int contained_count;
	Resource* contained;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	int identifier_count;
	Identifier* identifier;
	fhir_code status;
	CodeableConcept* category;
	fhir_code priority;
	enum class Item {
		CodeableConcept,
		Reference
	} item_type;
	union {
		CodeableConcept* _codeableConcept;
		Reference* _reference;
	} item;

	Quantity* quantity;
	int parameter_count;
	SupplyRequest_Parameter* parameter;
	enum class Occurrence {
		fhir_dateTime,
		Period,
		Timing
	} occurrence_type;
	union {
		fhir_dateTime _fhir_dateTime;
		Period* _period;
		Timing* _timing;
	} occurrence;

	fhir_dateTime authoredOn;
	Reference* requester;
	int supplier_count;
	Reference* supplier;
	int reasonCode_count;
	CodeableConcept* reasonCode;
	int reasonReference_count;
	Reference* reasonReference;
	Reference* deliverFrom;
	Reference* deliverTo;
};
class SupplyRequest_Parameter {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	CodeableConcept* code;
	enum class Value {
		CodeableConcept,
		Quantity,
		Range,
		fhir_boolean
	} value_type;
	union {
		CodeableConcept* _codeableConcept;
		Quantity* _quantity;
		Range* _range;
		fhir_boolean _fhir_boolean;
	} value;

};
class Task {
public:
	fhir_string id;
	Meta* meta;
	fhir_uri implicitRules;
	fhir_code language;
	Narrative* text;
	int contained_count;
	Resource* contained;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	int identifier_count;
	Identifier* identifier;
	fhir_canonical instantiatesCanonical;
	fhir_uri instantiatesUri;
	int basedOn_count;
	Reference* basedOn;
	Identifier* groupIdentifier;
	int partOf_count;
	Reference* partOf;
	fhir_code status;
	CodeableConcept* statusReason;
	CodeableConcept* businessStatus;
	fhir_code intent;
	fhir_code priority;
	CodeableConcept* code;
	fhir_string description;
	Reference* focus;
	Reference* for_;
	Reference* encounter;
	Period* executionPeriod;
	fhir_dateTime authoredOn;
	fhir_dateTime lastModified;
	Reference* requester;
	int performerType_count;
	CodeableConcept* performerType;
	Reference* owner;
	Reference* location;
	CodeableConcept* reasonCode;
	Reference* reasonReference;
	int insurance_count;
	Reference* insurance;
	int note_count;
	Annotation* note;
	int relevantHistory_count;
	Reference* relevantHistory;
	Task_Restriction* restriction;
	int input_count;
	Task_Input* input;
	int output_count;
	Task_Output* output;
};
class Task_Restriction {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	fhir_positiveInt repetitions;
	Period* period;
	int recipient_count;
	Reference* recipient;
};
class Task_Input {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	CodeableConcept* type;
	enum class Value {
		fhir_base64Binary,
		fhir_boolean,
		fhir_canonical,
		fhir_code,
		fhir_date,
		fhir_dateTime,
		fhir_decimal,
		fhir_id,
		fhir_instant,
		integer,
		fhir_markdown,
		fhir_oid,
		fhir_positiveInt,
		fhir_string,
		fhir_time,
		fhir_unsignedInt,
		fhir_uri,
		fhir_url,
		fhir_uuid,
		Address,
		Age,
		Annotation,
		Attachment,
		CodeableConcept,
		Coding,
		ContactPoint,
		Count,
		Distance,
		Duration,
		HumanName,
		Identifier,
		Money,
		Period,
		Quantity,
		Range,
		Ratio,
		Reference,
		SampledData,
		Signature,
		Timing,
		ContactDetail,
		Contributor,
		DataRequirement,
		Expression,
		ParameterDefinition,
		RelatedArtifact,
		TriggerDefinition,
		UsageContext,
		Dosage,
		Meta
	} value_type;
	union {
		fhir_base64Binary _fhir_base64Binary;
		fhir_boolean _fhir_boolean;
		fhir_canonical _fhir_canonical;
		fhir_code _fhir_code;
		fhir_date _fhir_date;
		fhir_dateTime _fhir_dateTime;
		fhir_decimal _fhir_decimal;
		fhir_id _fhir_id;
		fhir_instant _fhir_instant;
		integer* _integer;
		fhir_markdown _fhir_markdown;
		fhir_oid _fhir_oid;
		fhir_positiveInt _fhir_positiveInt;
		fhir_string _fhir_string;
		fhir_time _fhir_time;
		fhir_unsignedInt _fhir_unsignedInt;
		fhir_uri _fhir_uri;
		fhir_url _fhir_url;
		fhir_uuid _fhir_uuid;
		Address* _address;
		Age* _age;
		Annotation* _annotation;
		Attachment* _attachment;
		CodeableConcept* _codeableConcept;
		Coding* _coding;
		ContactPoint* _contactPoint;
		Count* _count;
		Distance* _distance;
		Duration* _duration;
		HumanName* _humanName;
		Identifier* _identifier;
		Money* _money;
		Period* _period;
		Quantity* _quantity;
		Range* _range;
		Ratio* _ratio;
		Reference* _reference;
		SampledData* _sampledData;
		Signature* _signature;
		Timing* _timing;
		ContactDetail* _contactDetail;
		Contributor* _contributor;
		DataRequirement* _dataRequirement;
		Expression* _expression;
		ParameterDefinition* _parameterDefinition;
		RelatedArtifact* _relatedArtifact;
		TriggerDefinition* _triggerDefinition;
		UsageContext* _usageContext;
		Dosage* _dosage;
		Meta* _meta;
	} value;

};
class Task_Output {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	CodeableConcept* type;
	enum class Value {
		fhir_base64Binary,
		fhir_boolean,
		fhir_canonical,
		fhir_code,
		fhir_date,
		fhir_dateTime,
		fhir_decimal,
		fhir_id,
		fhir_instant,
		integer,
		fhir_markdown,
		fhir_oid,
		fhir_positiveInt,
		fhir_string,
		fhir_time,
		fhir_unsignedInt,
		fhir_uri,
		fhir_url,
		fhir_uuid,
		Address,
		Age,
		Annotation,
		Attachment,
		CodeableConcept,
		Coding,
		ContactPoint,
		Count,
		Distance,
		Duration,
		HumanName,
		Identifier,
		Money,
		Period,
		Quantity,
		Range,
		Ratio,
		Reference,
		SampledData,
		Signature,
		Timing,
		ContactDetail,
		Contributor,
		DataRequirement,
		Expression,
		ParameterDefinition,
		RelatedArtifact,
		TriggerDefinition,
		UsageContext,
		Dosage,
		Meta
	} value_type;
	union {
		fhir_base64Binary _fhir_base64Binary;
		fhir_boolean _fhir_boolean;
		fhir_canonical _fhir_canonical;
		fhir_code _fhir_code;
		fhir_date _fhir_date;
		fhir_dateTime _fhir_dateTime;
		fhir_decimal _fhir_decimal;
		fhir_id _fhir_id;
		fhir_instant _fhir_instant;
		integer* _integer;
		fhir_markdown _fhir_markdown;
		fhir_oid _fhir_oid;
		fhir_positiveInt _fhir_positiveInt;
		fhir_string _fhir_string;
		fhir_time _fhir_time;
		fhir_unsignedInt _fhir_unsignedInt;
		fhir_uri _fhir_uri;
		fhir_url _fhir_url;
		fhir_uuid _fhir_uuid;
		Address* _address;
		Age* _age;
		Annotation* _annotation;
		Attachment* _attachment;
		CodeableConcept* _codeableConcept;
		Coding* _coding;
		ContactPoint* _contactPoint;
		Count* _count;
		Distance* _distance;
		Duration* _duration;
		HumanName* _humanName;
		Identifier* _identifier;
		Money* _money;
		Period* _period;
		Quantity* _quantity;
		Range* _range;
		Ratio* _ratio;
		Reference* _reference;
		SampledData* _sampledData;
		Signature* _signature;
		Timing* _timing;
		ContactDetail* _contactDetail;
		Contributor* _contributor;
		DataRequirement* _dataRequirement;
		Expression* _expression;
		ParameterDefinition* _parameterDefinition;
		RelatedArtifact* _relatedArtifact;
		TriggerDefinition* _triggerDefinition;
		UsageContext* _usageContext;
		Dosage* _dosage;
		Meta* _meta;
	} value;

};
class TerminologyCapabilities {
public:
	fhir_string id;
	Meta* meta;
	fhir_uri implicitRules;
	fhir_code language;
	Narrative* text;
	int contained_count;
	Resource* contained;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	fhir_uri url;
	fhir_string version;
	fhir_string name;
	fhir_string title;
	fhir_code status;
	fhir_boolean experimental;
	fhir_dateTime date;
	fhir_string publisher;
	int contact_count;
	ContactDetail* contact;
	fhir_markdown description;
	int useContext_count;
	UsageContext* useContext;
	int jurisdiction_count;
	CodeableConcept* jurisdiction;
	fhir_markdown purpose;
	fhir_markdown copyright;
	fhir_code kind;
	TerminologyCapabilities_Software* software;
	TerminologyCapabilities_Implementation* implementation;
	fhir_boolean lockedDate;
	int codeSystem_count;
	TerminologyCapabilities_CodeSystem* codeSystem;
	TerminologyCapabilities_Expansion* expansion;
	fhir_code codeSearch;
	TerminologyCapabilities_ValidateCode* validateCode;
	TerminologyCapabilities_Translation* translation;
	TerminologyCapabilities_Closure* closure;
};
class TerminologyCapabilities_Software {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	fhir_string name;
	fhir_string version;
};
class TerminologyCapabilities_Implementation {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	fhir_string description;
	fhir_url url;
};
class TerminologyCapabilities_CodeSystem {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	fhir_canonical uri;
	int version_count;
	TerminologyCapabilities_CodeSystem_Version* version;
	fhir_boolean subsumption;
};
class TerminologyCapabilities_CodeSystem_Version {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	fhir_string code;
	fhir_boolean isDefault;
	fhir_boolean compositional;
	int language_count;
	fhir_code language;
	int filter_count;
	TerminologyCapabilities_CodeSystem_Version_Filter* filter;
	int property_count;
	fhir_code property;
};
class TerminologyCapabilities_CodeSystem_Version_Filter {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	fhir_code code;
	int op_count;
	fhir_code op;
};
class TerminologyCapabilities_Expansion {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	fhir_boolean hierarchical;
	fhir_boolean paging;
	fhir_boolean incomplete;
	int parameter_count;
	TerminologyCapabilities_Expansion_Parameter* parameter;
	fhir_markdown textFilter;
};
class TerminologyCapabilities_Expansion_Parameter {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	fhir_code name;
	fhir_string documentation;
};
class TerminologyCapabilities_ValidateCode {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	fhir_boolean translations;
};
class TerminologyCapabilities_Translation {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	fhir_boolean needsMap;
};
class TerminologyCapabilities_Closure {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	fhir_boolean translation;
};
class TestReport {
public:
	fhir_string id;
	Meta* meta;
	fhir_uri implicitRules;
	fhir_code language;
	Narrative* text;
	int contained_count;
	Resource* contained;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	Identifier* identifier;
	fhir_string name;
	fhir_code status;
	Reference* testScript;
	fhir_code result;
	fhir_decimal score;
	fhir_string tester;
	fhir_dateTime issued;
	int participant_count;
	TestReport_Participant* participant;
	TestReport_Setup* setup;
	int test_count;
	TestReport_Test* test;
	TestReport_Teardown* teardown;
};
class TestReport_Participant {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	fhir_code type;
	fhir_uri uri;
	fhir_string display;
};
class TestReport_Setup {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	int action_count;
	TestReport_Setup_Action* action;
};
class TestReport_Setup_Action {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	TestReport_Setup_Action_Operation* operation;
	TestReport_Setup_Action_Assert* assert;
};
class TestReport_Setup_Action_Operation {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	fhir_code result;
	fhir_markdown message;
	fhir_uri detail;
};
class TestReport_Setup_Action_Assert {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	fhir_code result;
	fhir_markdown message;
	fhir_string detail;
};
class TestReport_Test {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	fhir_string name;
	fhir_string description;
	int action_count;
	TestReport_Test_Action* action;
};
class TestReport_Test_Action {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	TestReport_Setup_Action_Operation* operation;
	TestReport_Setup_Action_Assert* assert;
};
class TestReport_Teardown {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	int action_count;
	TestReport_Teardown_Action* action;
};
class TestReport_Teardown_Action {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	TestReport_Setup_Action_Operation* operation;
};
class TestScript {
public:
	fhir_string id;
	Meta* meta;
	fhir_uri implicitRules;
	fhir_code language;
	Narrative* text;
	int contained_count;
	Resource* contained;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	fhir_uri url;
	Identifier* identifier;
	fhir_string version;
	fhir_string name;
	fhir_string title;
	fhir_code status;
	fhir_boolean experimental;
	fhir_dateTime date;
	fhir_string publisher;
	int contact_count;
	ContactDetail* contact;
	fhir_markdown description;
	int useContext_count;
	UsageContext* useContext;
	int jurisdiction_count;
	CodeableConcept* jurisdiction;
	fhir_markdown purpose;
	fhir_markdown copyright;
	int origin_count;
	TestScript_Origin* origin;
	int destination_count;
	TestScript_Destination* destination;
	TestScript_Metadata* metadata;
	int fixture_count;
	TestScript_Fixture* fixture;
	int profile_count;
	Reference* profile;
	int variable_count;
	TestScript_Variable* variable;
	TestScript_Setup* setup;
	int test_count;
	TestScript_Test* test;
	TestScript_Teardown* teardown;
};
class TestScript_Origin {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	integer* index;
	Coding* profile;
};
class TestScript_Destination {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	integer* index;
	Coding* profile;
};
class TestScript_Metadata {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	int link_count;
	TestScript_Metadata_Link* link;
	int capability_count;
	TestScript_Metadata_Capability* capability;
};
class TestScript_Metadata_Link {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	fhir_uri url;
	fhir_string description;
};
class TestScript_Metadata_Capability {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	fhir_boolean required;
	fhir_boolean validated;
	fhir_string description;
	int origin_count;
	integer* origin;
	integer* destination;
	int link_count;
	fhir_uri link;
	fhir_canonical capabilities;
};
class TestScript_Fixture {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	fhir_boolean autocreate;
	fhir_boolean autodelete;
	Reference* resource;
};
class TestScript_Variable {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	fhir_string name;
	fhir_string defaultValue;
	fhir_string description;
	fhir_string expression;
	fhir_string headerField;
	fhir_string hint;
	fhir_string path;
	fhir_id sourceId;
};
class TestScript_Setup {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	int action_count;
	TestScript_Setup_Action* action;
};
class TestScript_Setup_Action {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	TestScript_Setup_Action_Operation* operation;
	TestScript_Setup_Action_Assert* assert;
};
class TestScript_Setup_Action_Operation {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	Coding* type;
	fhir_code resource;
	fhir_string label;
	fhir_string description;
	fhir_code accept;
	fhir_code contentType;
	integer* destination;
	fhir_boolean encodeRequestUrl;
	fhir_code method;
	integer* origin;
	fhir_string params;
	int requestHeader_count;
	TestScript_Setup_Action_Operation_RequestHeader* requestHeader;
	fhir_id requestId;
	fhir_id responseId;
	fhir_id sourceId;
	fhir_id targetId;
	fhir_string url;
};
class TestScript_Setup_Action_Operation_RequestHeader {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	fhir_string field;
	fhir_string value;
};
class TestScript_Setup_Action_Assert {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	fhir_string label;
	fhir_string description;
	fhir_code direction;
	fhir_string compareToSourceId;
	fhir_string compareToSourceExpression;
	fhir_string compareToSourcePath;
	fhir_code contentType;
	fhir_string expression;
	fhir_string headerField;
	fhir_string minimumId;
	fhir_boolean navigationLinks;
	fhir_code operator_;
	fhir_string path;
	fhir_code requestMethod;
	fhir_string requestURL;
	fhir_code resource;
	fhir_code response;
	fhir_string responseCode;
	fhir_id sourceId;
	fhir_id validateProfileId;
	fhir_string value;
	fhir_boolean warningOnly;
};
class TestScript_Test {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	fhir_string name;
	fhir_string description;
	int action_count;
	TestScript_Test_Action* action;
};
class TestScript_Test_Action {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	TestScript_Setup_Action_Operation* operation;
	TestScript_Setup_Action_Assert* assert;
};
class TestScript_Teardown {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	int action_count;
	TestScript_Teardown_Action* action;
};
class TestScript_Teardown_Action {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	TestScript_Setup_Action_Operation* operation;
};
class ValueSet {
public:
	fhir_string id;
	Meta* meta;
	fhir_uri implicitRules;
	fhir_code language;
	Narrative* text;
	int contained_count;
	Resource* contained;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	fhir_uri url;
	int identifier_count;
	Identifier* identifier;
	fhir_string version;
	fhir_string name;
	fhir_string title;
	fhir_code status;
	fhir_boolean experimental;
	fhir_dateTime date;
	fhir_string publisher;
	int contact_count;
	ContactDetail* contact;
	fhir_markdown description;
	int useContext_count;
	UsageContext* useContext;
	int jurisdiction_count;
	CodeableConcept* jurisdiction;
	fhir_boolean immutable;
	fhir_markdown purpose;
	fhir_markdown copyright;
	ValueSet_Compose* compose;
	ValueSet_Expansion* expansion;
};
class ValueSet_Compose {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	fhir_date lockedDate;
	fhir_boolean inactive;
	int include_count;
	ValueSet_Compose_Include* include;
	int exclude_count;
	ValueSet_Compose_Include* exclude;
};
class ValueSet_Compose_Include {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	fhir_uri system;
	fhir_string version;
	int concept_count;
	ValueSet_Compose_Include_Concept* concept;
	int filter_count;
	ValueSet_Compose_Include_Filter* filter;
	int valueSet_count;
	fhir_canonical valueSet;
};
class ValueSet_Compose_Include_Concept {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	fhir_code code;
	fhir_string display;
	int designation_count;
	ValueSet_Compose_Include_Concept_Designation* designation;
};
class ValueSet_Compose_Include_Concept_Designation {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	fhir_code language;
	Coding* use;
	fhir_string value;
};
class ValueSet_Compose_Include_Filter {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	fhir_code property;
	fhir_code op;
	fhir_string value;
};
class ValueSet_Expansion {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	fhir_uri identifier;
	fhir_dateTime timestamp;
	integer* total;
	integer* offset;
	int parameter_count;
	ValueSet_Expansion_Parameter* parameter;
	int contains_count;
	ValueSet_Expansion_Contains* contains;
};
class ValueSet_Expansion_Parameter {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	fhir_string name;
	enum class Value {
		fhir_string,
		fhir_boolean,
		integer,
		fhir_decimal,
		fhir_uri,
		fhir_code,
		fhir_dateTime
	} value_type;
	union {
		fhir_string _fhir_string;
		fhir_boolean _fhir_boolean;
		integer* _integer;
		fhir_decimal _fhir_decimal;
		fhir_uri _fhir_uri;
		fhir_code _fhir_code;
		fhir_dateTime _fhir_dateTime;
	} value;

};
class ValueSet_Expansion_Contains {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	fhir_uri system;
	fhir_boolean abstract;
	fhir_boolean inactive;
	fhir_string version;
	fhir_code code;
	fhir_string display;
	int designation_count;
	ValueSet_Compose_Include_Concept_Designation* designation;
	int contains_count;
	ValueSet_Expansion_Contains* contains;
};
class VerificationResult {
public:
	fhir_string id;
	Meta* meta;
	fhir_uri implicitRules;
	fhir_code language;
	Narrative* text;
	int contained_count;
	Resource* contained;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	int target_count;
	Reference* target;
	int targetLocation_count;
	fhir_string targetLocation;
	CodeableConcept* need;
	fhir_code status;
	fhir_dateTime statusDate;
	CodeableConcept* validationType;
	int validationProcess_count;
	CodeableConcept* validationProcess;
	Timing* frequency;
	fhir_dateTime lastPerformed;
	fhir_date nextScheduled;
	CodeableConcept* failureAction;
	int primarySource_count;
	VerificationResult_PrimarySource* primarySource;
	VerificationResult_Attestation* attestation;
	int validator_count;
	VerificationResult_Validator* validator;
};
class VerificationResult_PrimarySource {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	Reference* who;
	int type_count;
	CodeableConcept* type;
	int communicationMethod_count;
	CodeableConcept* communicationMethod;
	CodeableConcept* validationStatus;
	fhir_dateTime validationDate;
	CodeableConcept* canPushUpdates;
	int pushTypeAvailable_count;
	CodeableConcept* pushTypeAvailable;
};
class VerificationResult_Attestation {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	Reference* who;
	Reference* onBehalfOf;
	CodeableConcept* communicationMethod;
	fhir_date date;
	fhir_string sourceIdentityCertificate;
	fhir_string proxyIdentityCertificate;
	Signature* proxySignature;
	Signature* sourceSignature;
};
class VerificationResult_Validator {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	Reference* organization;
	fhir_string identityCertificate;
	Signature* attestationSignature;
};
class VisionPrescription {
public:
	fhir_string id;
	Meta* meta;
	fhir_uri implicitRules;
	fhir_code language;
	Narrative* text;
	int contained_count;
	Resource* contained;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	int identifier_count;
	Identifier* identifier;
	fhir_code status;
	fhir_dateTime created;
	Reference* patient;
	Reference* encounter;
	fhir_dateTime dateWritten;
	Reference* prescriber;
	int lensSpecification_count;
	VisionPrescription_LensSpecification* lensSpecification;
};
class VisionPrescription_LensSpecification {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	CodeableConcept* product;
	fhir_code eye;
	fhir_decimal sphere;
	fhir_decimal cylinder;
	integer* axis;
	int prism_count;
	VisionPrescription_LensSpecification_Prism* prism;
	fhir_decimal add;
	fhir_decimal power;
	fhir_decimal backCurve;
	fhir_decimal diameter;
	Quantity* duration;
	fhir_string color;
	fhir_string brand;
	int note_count;
	Annotation* note;
};
class VisionPrescription_LensSpecification_Prism {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	fhir_decimal amount;
	fhir_code base;
};
class MetadataResource {
public:
	fhir_string id;
	Meta* meta;
	fhir_uri implicitRules;
	fhir_code language;
	Narrative* text;
	int contained_count;
	Resource* contained;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	fhir_uri url;
	fhir_string version;
	fhir_string name;
	fhir_string title;
	fhir_code status;
	fhir_boolean experimental;
	fhir_dateTime date;
	fhir_string publisher;
	int contact_count;
	ContactDetail* contact;
	fhir_markdown description;
	int useContext_count;
	UsageContext* useContext;
	int jurisdiction_count;
	CodeableConcept* jurisdiction;
};
class Element {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
};
class BackboneElement {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
};
class integer {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	fhir_unsignedInt value;
};
class xhtml {
public:
	fhir_string id;
	
	fhir_string value;
};
class Address {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	fhir_code use;
	fhir_code type;
	fhir_string text;
	int line_count;
	fhir_string line;
	fhir_string city;
	fhir_string district;
	fhir_string state;
	fhir_string postalCode;
	fhir_string country;
	Period* period;
};
class Age {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	fhir_decimal value;
	fhir_code comparator;
	fhir_string unit;
	fhir_uri system;
	fhir_code code;
};
class Annotation {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	enum class Author {
		Reference,
		fhir_string
	} author_type;
	union {
		Reference* _reference;
		fhir_string _fhir_string;
	} author;

	fhir_dateTime time;
	fhir_markdown text;
};
class Attachment {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	fhir_code contentType;
	fhir_code language;
	fhir_base64Binary data;
	fhir_url url;
	fhir_unsignedInt size;
	fhir_base64Binary hash;
	fhir_string title;
	fhir_dateTime creation;
};
class CodeableConcept {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int coding_count;
	Coding* coding;
	fhir_string text;
};
class Coding {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	fhir_uri system;
	fhir_string version;
	fhir_code code;
	fhir_string display;
	fhir_boolean userSelected;
};
class ContactDetail {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	fhir_string name;
	int telecom_count;
	ContactPoint* telecom;
};
class ContactPoint {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	fhir_code system;
	fhir_string value;
	fhir_code use;
	fhir_positiveInt rank;
	Period* period;
};
class Contributor {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	fhir_code type;
	fhir_string name;
	int contact_count;
	ContactDetail* contact;
};
class Count {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	fhir_decimal value;
	fhir_code comparator;
	fhir_string unit;
	fhir_uri system;
	fhir_code code;
};
class DataRequirement {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	fhir_code type;
	int profile_count;
	fhir_canonical profile;
	enum class Subject {
		CodeableConcept,
		Reference
	} subject_type;
	union {
		CodeableConcept* _codeableConcept;
		Reference* _reference;
	} subject;

	int mustSupport_count;
	fhir_string mustSupport;
	int codeFilter_count;
	DataRequirement_CodeFilter* codeFilter;
	int dateFilter_count;
	DataRequirement_DateFilter* dateFilter;
	fhir_positiveInt limit;
	int sort_count;
	DataRequirement_Sort* sort;
};
class DataRequirement_CodeFilter {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	fhir_string path;
	fhir_string searchParam;
	fhir_canonical valueSet;
	int code_count;
	Coding* code;
};
class DataRequirement_DateFilter {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	fhir_string path;
	fhir_string searchParam;
	enum class Value {
		fhir_dateTime,
		Period,
		Duration
	} value_type;
	union {
		fhir_dateTime _fhir_dateTime;
		Period* _period;
		Duration* _duration;
	} value;

};
class DataRequirement_Sort {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	fhir_string path;
	fhir_code direction;
};
class Distance {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	fhir_decimal value;
	fhir_code comparator;
	fhir_string unit;
	fhir_uri system;
	fhir_code code;
};
class Dosage {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	integer* sequence;
	fhir_string text;
	int additionalInstruction_count;
	CodeableConcept* additionalInstruction;
	fhir_string patientInstruction;
	Timing* timing;
	enum class AsNeeded {
		fhir_boolean,
		CodeableConcept
	} asNeeded_type;
	union {
		fhir_boolean _fhir_boolean;
		CodeableConcept* _codeableConcept;
	} asNeeded;

	CodeableConcept* site;
	CodeableConcept* route;
	CodeableConcept* method;
	int doseAndRate_count;
	Dosage_DoseAndRate* doseAndRate;
	Ratio* maxDosePerPeriod;
	Quantity* maxDosePerAdministration;
	Quantity* maxDosePerLifetime;
};
class Dosage_DoseAndRate {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	CodeableConcept* type;
	enum class Dose {
		Range,
		Quantity
	} dose_type;
	union {
		Range* _range;
		Quantity* _quantity;
	} dose;

	enum class Rate {
		Ratio,
		Range,
		Quantity
	} rate_type;
	union {
		Ratio* _ratio;
		Range* _range;
		Quantity* _quantity;
	} rate;

};
class Duration {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	fhir_decimal value;
	fhir_code comparator;
	fhir_string unit;
	fhir_uri system;
	fhir_code code;
};
class ElementDefinition {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	fhir_string path;
	int representation_count;
	fhir_code representation;
	fhir_string sliceName;
	fhir_boolean sliceIsConstraining;
	fhir_string label;
	int code_count;
	Coding* code;
	ElementDefinition_Slicing* slicing;
	fhir_string short_;
	fhir_markdown definition;
	fhir_markdown comment;
	fhir_markdown requirements;
	int alias_count;
	fhir_string alias;
	fhir_unsignedInt min;
	fhir_string max;
	ElementDefinition_Base* base;
	fhir_uri contentReference;
	int type_count;
	ElementDefinition_Type* type;
	enum class DefaultValue {
		fhir_base64Binary,
		fhir_boolean,
		fhir_canonical,
		fhir_code,
		fhir_date,
		fhir_dateTime,
		fhir_decimal,
		fhir_id,
		fhir_instant,
		integer,
		fhir_markdown,
		fhir_oid,
		fhir_positiveInt,
		fhir_string,
		fhir_time,
		fhir_unsignedInt,
		fhir_uri,
		fhir_url,
		fhir_uuid,
		Address,
		Age,
		Annotation,
		Attachment,
		CodeableConcept,
		Coding,
		ContactPoint,
		Count,
		Distance,
		Duration,
		HumanName,
		Identifier,
		Money,
		Period,
		Quantity,
		Range,
		Ratio,
		Reference,
		SampledData,
		Signature,
		Timing,
		ContactDetail,
		Contributor,
		DataRequirement,
		Expression,
		ParameterDefinition,
		RelatedArtifact,
		TriggerDefinition,
		UsageContext,
		Dosage,
		Meta
	} defaultValue_type;
	union {
		fhir_base64Binary _fhir_base64Binary;
		fhir_boolean _fhir_boolean;
		fhir_canonical _fhir_canonical;
		fhir_code _fhir_code;
		fhir_date _fhir_date;
		fhir_dateTime _fhir_dateTime;
		fhir_decimal _fhir_decimal;
		fhir_id _fhir_id;
		fhir_instant _fhir_instant;
		integer* _integer;
		fhir_markdown _fhir_markdown;
		fhir_oid _fhir_oid;
		fhir_positiveInt _fhir_positiveInt;
		fhir_string _fhir_string;
		fhir_time _fhir_time;
		fhir_unsignedInt _fhir_unsignedInt;
		fhir_uri _fhir_uri;
		fhir_url _fhir_url;
		fhir_uuid _fhir_uuid;
		Address* _address;
		Age* _age;
		Annotation* _annotation;
		Attachment* _attachment;
		CodeableConcept* _codeableConcept;
		Coding* _coding;
		ContactPoint* _contactPoint;
		Count* _count;
		Distance* _distance;
		Duration* _duration;
		HumanName* _humanName;
		Identifier* _identifier;
		Money* _money;
		Period* _period;
		Quantity* _quantity;
		Range* _range;
		Ratio* _ratio;
		Reference* _reference;
		SampledData* _sampledData;
		Signature* _signature;
		Timing* _timing;
		ContactDetail* _contactDetail;
		Contributor* _contributor;
		DataRequirement* _dataRequirement;
		Expression* _expression;
		ParameterDefinition* _parameterDefinition;
		RelatedArtifact* _relatedArtifact;
		TriggerDefinition* _triggerDefinition;
		UsageContext* _usageContext;
		Dosage* _dosage;
		Meta* _meta;
	} defaultValue;

	fhir_markdown meaningWhenMissing;
	fhir_string orderMeaning;
	enum class Fixed {
		fhir_base64Binary,
		fhir_boolean,
		fhir_canonical,
		fhir_code,
		fhir_date,
		fhir_dateTime,
		fhir_decimal,
		fhir_id,
		fhir_instant,
		integer,
		fhir_markdown,
		fhir_oid,
		fhir_positiveInt,
		fhir_string,
		fhir_time,
		fhir_unsignedInt,
		fhir_uri,
		fhir_url,
		fhir_uuid,
		Address,
		Age,
		Annotation,
		Attachment,
		CodeableConcept,
		Coding,
		ContactPoint,
		Count,
		Distance,
		Duration,
		HumanName,
		Identifier,
		Money,
		Period,
		Quantity,
		Range,
		Ratio,
		Reference,
		SampledData,
		Signature,
		Timing,
		ContactDetail,
		Contributor,
		DataRequirement,
		Expression,
		ParameterDefinition,
		RelatedArtifact,
		TriggerDefinition,
		UsageContext,
		Dosage,
		Meta
	} fixed_type;
	union {
		fhir_base64Binary _fhir_base64Binary;
		fhir_boolean _fhir_boolean;
		fhir_canonical _fhir_canonical;
		fhir_code _fhir_code;
		fhir_date _fhir_date;
		fhir_dateTime _fhir_dateTime;
		fhir_decimal _fhir_decimal;
		fhir_id _fhir_id;
		fhir_instant _fhir_instant;
		integer* _integer;
		fhir_markdown _fhir_markdown;
		fhir_oid _fhir_oid;
		fhir_positiveInt _fhir_positiveInt;
		fhir_string _fhir_string;
		fhir_time _fhir_time;
		fhir_unsignedInt _fhir_unsignedInt;
		fhir_uri _fhir_uri;
		fhir_url _fhir_url;
		fhir_uuid _fhir_uuid;
		Address* _address;
		Age* _age;
		Annotation* _annotation;
		Attachment* _attachment;
		CodeableConcept* _codeableConcept;
		Coding* _coding;
		ContactPoint* _contactPoint;
		Count* _count;
		Distance* _distance;
		Duration* _duration;
		HumanName* _humanName;
		Identifier* _identifier;
		Money* _money;
		Period* _period;
		Quantity* _quantity;
		Range* _range;
		Ratio* _ratio;
		Reference* _reference;
		SampledData* _sampledData;
		Signature* _signature;
		Timing* _timing;
		ContactDetail* _contactDetail;
		Contributor* _contributor;
		DataRequirement* _dataRequirement;
		Expression* _expression;
		ParameterDefinition* _parameterDefinition;
		RelatedArtifact* _relatedArtifact;
		TriggerDefinition* _triggerDefinition;
		UsageContext* _usageContext;
		Dosage* _dosage;
		Meta* _meta;
	} fixed;

	enum class Pattern {
		fhir_base64Binary,
		fhir_boolean,
		fhir_canonical,
		fhir_code,
		fhir_date,
		fhir_dateTime,
		fhir_decimal,
		fhir_id,
		fhir_instant,
		integer,
		fhir_markdown,
		fhir_oid,
		fhir_positiveInt,
		fhir_string,
		fhir_time,
		fhir_unsignedInt,
		fhir_uri,
		fhir_url,
		fhir_uuid,
		Address,
		Age,
		Annotation,
		Attachment,
		CodeableConcept,
		Coding,
		ContactPoint,
		Count,
		Distance,
		Duration,
		HumanName,
		Identifier,
		Money,
		Period,
		Quantity,
		Range,
		Ratio,
		Reference,
		SampledData,
		Signature,
		Timing,
		ContactDetail,
		Contributor,
		DataRequirement,
		Expression,
		ParameterDefinition,
		RelatedArtifact,
		TriggerDefinition,
		UsageContext,
		Dosage,
		Meta
	} pattern_type;
	union {
		fhir_base64Binary _fhir_base64Binary;
		fhir_boolean _fhir_boolean;
		fhir_canonical _fhir_canonical;
		fhir_code _fhir_code;
		fhir_date _fhir_date;
		fhir_dateTime _fhir_dateTime;
		fhir_decimal _fhir_decimal;
		fhir_id _fhir_id;
		fhir_instant _fhir_instant;
		integer* _integer;
		fhir_markdown _fhir_markdown;
		fhir_oid _fhir_oid;
		fhir_positiveInt _fhir_positiveInt;
		fhir_string _fhir_string;
		fhir_time _fhir_time;
		fhir_unsignedInt _fhir_unsignedInt;
		fhir_uri _fhir_uri;
		fhir_url _fhir_url;
		fhir_uuid _fhir_uuid;
		Address* _address;
		Age* _age;
		Annotation* _annotation;
		Attachment* _attachment;
		CodeableConcept* _codeableConcept;
		Coding* _coding;
		ContactPoint* _contactPoint;
		Count* _count;
		Distance* _distance;
		Duration* _duration;
		HumanName* _humanName;
		Identifier* _identifier;
		Money* _money;
		Period* _period;
		Quantity* _quantity;
		Range* _range;
		Ratio* _ratio;
		Reference* _reference;
		SampledData* _sampledData;
		Signature* _signature;
		Timing* _timing;
		ContactDetail* _contactDetail;
		Contributor* _contributor;
		DataRequirement* _dataRequirement;
		Expression* _expression;
		ParameterDefinition* _parameterDefinition;
		RelatedArtifact* _relatedArtifact;
		TriggerDefinition* _triggerDefinition;
		UsageContext* _usageContext;
		Dosage* _dosage;
		Meta* _meta;
	} pattern;

	int example_count;
	ElementDefinition_Example* example;
	enum class MinValue {
		fhir_date,
		fhir_dateTime,
		fhir_instant,
		fhir_time,
		fhir_decimal,
		integer,
		fhir_positiveInt,
		fhir_unsignedInt,
		Quantity
	} minValue_type;
	union {
		fhir_date _fhir_date;
		fhir_dateTime _fhir_dateTime;
		fhir_instant _fhir_instant;
		fhir_time _fhir_time;
		fhir_decimal _fhir_decimal;
		integer* _integer;
		fhir_positiveInt _fhir_positiveInt;
		fhir_unsignedInt _fhir_unsignedInt;
		Quantity* _quantity;
	} minValue;

	enum class MaxValue {
		fhir_date,
		fhir_dateTime,
		fhir_instant,
		fhir_time,
		fhir_decimal,
		integer,
		fhir_positiveInt,
		fhir_unsignedInt,
		Quantity
	} maxValue_type;
	union {
		fhir_date _fhir_date;
		fhir_dateTime _fhir_dateTime;
		fhir_instant _fhir_instant;
		fhir_time _fhir_time;
		fhir_decimal _fhir_decimal;
		integer* _integer;
		fhir_positiveInt _fhir_positiveInt;
		fhir_unsignedInt _fhir_unsignedInt;
		Quantity* _quantity;
	} maxValue;

	integer* maxLength;
	int condition_count;
	fhir_id condition;
	int constraint_count;
	ElementDefinition_Constraint* constraint;
	fhir_boolean mustSupport;
	fhir_boolean isModifier;
	fhir_string isModifierReason;
	fhir_boolean isSummary;
	ElementDefinition_Binding* binding;
	int mapping_count;
	ElementDefinition_Mapping* mapping;
};
class ElementDefinition_Slicing {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int discriminator_count;
	ElementDefinition_Slicing_Discriminator* discriminator;
	fhir_string description;
	fhir_boolean ordered;
	fhir_code rules;
};
class ElementDefinition_Slicing_Discriminator {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	fhir_code type;
	fhir_string path;
};
class ElementDefinition_Base {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	fhir_string path;
	fhir_unsignedInt min;
	fhir_string max;
};
class ElementDefinition_Type {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	fhir_uri code;
	int profile_count;
	fhir_canonical profile;
	int targetProfile_count;
	fhir_canonical targetProfile;
	int aggregation_count;
	fhir_code aggregation;
	fhir_code versioning;
};
class ElementDefinition_Example {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	fhir_string label;
	enum class Value {
		fhir_base64Binary,
		fhir_boolean,
		fhir_canonical,
		fhir_code,
		fhir_date,
		fhir_dateTime,
		fhir_decimal,
		fhir_id,
		fhir_instant,
		integer,
		fhir_markdown,
		fhir_oid,
		fhir_positiveInt,
		fhir_string,
		fhir_time,
		fhir_unsignedInt,
		fhir_uri,
		fhir_url,
		fhir_uuid,
		Address,
		Age,
		Annotation,
		Attachment,
		CodeableConcept,
		Coding,
		ContactPoint,
		Count,
		Distance,
		Duration,
		HumanName,
		Identifier,
		Money,
		Period,
		Quantity,
		Range,
		Ratio,
		Reference,
		SampledData,
		Signature,
		Timing,
		ContactDetail,
		Contributor,
		DataRequirement,
		Expression,
		ParameterDefinition,
		RelatedArtifact,
		TriggerDefinition,
		UsageContext,
		Dosage,
		Meta
	} value_type;
	union {
		fhir_base64Binary _fhir_base64Binary;
		fhir_boolean _fhir_boolean;
		fhir_canonical _fhir_canonical;
		fhir_code _fhir_code;
		fhir_date _fhir_date;
		fhir_dateTime _fhir_dateTime;
		fhir_decimal _fhir_decimal;
		fhir_id _fhir_id;
		fhir_instant _fhir_instant;
		integer* _integer;
		fhir_markdown _fhir_markdown;
		fhir_oid _fhir_oid;
		fhir_positiveInt _fhir_positiveInt;
		fhir_string _fhir_string;
		fhir_time _fhir_time;
		fhir_unsignedInt _fhir_unsignedInt;
		fhir_uri _fhir_uri;
		fhir_url _fhir_url;
		fhir_uuid _fhir_uuid;
		Address* _address;
		Age* _age;
		Annotation* _annotation;
		Attachment* _attachment;
		CodeableConcept* _codeableConcept;
		Coding* _coding;
		ContactPoint* _contactPoint;
		Count* _count;
		Distance* _distance;
		Duration* _duration;
		HumanName* _humanName;
		Identifier* _identifier;
		Money* _money;
		Period* _period;
		Quantity* _quantity;
		Range* _range;
		Ratio* _ratio;
		Reference* _reference;
		SampledData* _sampledData;
		Signature* _signature;
		Timing* _timing;
		ContactDetail* _contactDetail;
		Contributor* _contributor;
		DataRequirement* _dataRequirement;
		Expression* _expression;
		ParameterDefinition* _parameterDefinition;
		RelatedArtifact* _relatedArtifact;
		TriggerDefinition* _triggerDefinition;
		UsageContext* _usageContext;
		Dosage* _dosage;
		Meta* _meta;
	} value;

};
class ElementDefinition_Constraint {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	fhir_id key;
	fhir_string requirements;
	fhir_code severity;
	fhir_string human;
	fhir_string expression;
	fhir_string xpath;
	fhir_canonical source;
};
class ElementDefinition_Binding {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	fhir_code strength;
	fhir_string description;
	fhir_canonical valueSet;
};
class ElementDefinition_Mapping {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	fhir_id identity;
	fhir_code language;
	fhir_string map;
	fhir_string comment;
};
class Expression {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	fhir_string description;
	fhir_id name;
	fhir_code language;
	fhir_string expression;
	fhir_uri reference;
};
class Extension {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	fhir_string url;
	enum class Value {
		fhir_base64Binary,
		fhir_boolean,
		fhir_canonical,
		fhir_code,
		fhir_date,
		fhir_dateTime,
		fhir_decimal,
		fhir_id,
		fhir_instant,
		integer,
		fhir_markdown,
		fhir_oid,
		fhir_positiveInt,
		fhir_string,
		fhir_time,
		fhir_unsignedInt,
		fhir_uri,
		fhir_url,
		fhir_uuid,
		Address,
		Age,
		Annotation,
		Attachment,
		CodeableConcept,
		Coding,
		ContactPoint,
		Count,
		Distance,
		Duration,
		HumanName,
		Identifier,
		Money,
		Period,
		Quantity,
		Range,
		Ratio,
		Reference,
		SampledData,
		Signature,
		Timing,
		ContactDetail,
		Contributor,
		DataRequirement,
		Expression,
		ParameterDefinition,
		RelatedArtifact,
		TriggerDefinition,
		UsageContext,
		Dosage,
		Meta
	} value_type;
	union {
		fhir_base64Binary _fhir_base64Binary;
		fhir_boolean _fhir_boolean;
		fhir_canonical _fhir_canonical;
		fhir_code _fhir_code;
		fhir_date _fhir_date;
		fhir_dateTime _fhir_dateTime;
		fhir_decimal _fhir_decimal;
		fhir_id _fhir_id;
		fhir_instant _fhir_instant;
		integer* _integer;
		fhir_markdown _fhir_markdown;
		fhir_oid _fhir_oid;
		fhir_positiveInt _fhir_positiveInt;
		fhir_string _fhir_string;
		fhir_time _fhir_time;
		fhir_unsignedInt _fhir_unsignedInt;
		fhir_uri _fhir_uri;
		fhir_url _fhir_url;
		fhir_uuid _fhir_uuid;
		Address* _address;
		Age* _age;
		Annotation* _annotation;
		Attachment* _attachment;
		CodeableConcept* _codeableConcept;
		Coding* _coding;
		ContactPoint* _contactPoint;
		Count* _count;
		Distance* _distance;
		Duration* _duration;
		HumanName* _humanName;
		Identifier* _identifier;
		Money* _money;
		Period* _period;
		Quantity* _quantity;
		Range* _range;
		Ratio* _ratio;
		Reference* _reference;
		SampledData* _sampledData;
		Signature* _signature;
		Timing* _timing;
		ContactDetail* _contactDetail;
		Contributor* _contributor;
		DataRequirement* _dataRequirement;
		Expression* _expression;
		ParameterDefinition* _parameterDefinition;
		RelatedArtifact* _relatedArtifact;
		TriggerDefinition* _triggerDefinition;
		UsageContext* _usageContext;
		Dosage* _dosage;
		Meta* _meta;
	} value;

};
class HumanName {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	fhir_code use;
	fhir_string text;
	fhir_string family;
	int given_count;
	fhir_string given;
	int prefix_count;
	fhir_string prefix;
	int suffix_count;
	fhir_string suffix;
	Period* period;
};
class Identifier {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	fhir_code use;
	CodeableConcept* type;
	fhir_uri system;
	fhir_string value;
	Period* period;
	Reference* assigner;
};
class MarketingStatus {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	CodeableConcept* country;
	CodeableConcept* jurisdiction;
	CodeableConcept* status;
	Period* dateRange;
	fhir_dateTime restoreDate;
};
class Meta {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	fhir_id versionId;
	fhir_instant lastUpdated;
	fhir_uri source;
	int profile_count;
	fhir_canonical profile;
	int security_count;
	Coding* security;
	int tag_count;
	Coding* tag;
};
class Money {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	fhir_decimal value;
	fhir_code currency;
};
class Narrative {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	fhir_code status;
	xhtml* div;
};
class ParameterDefinition {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	fhir_code name;
	fhir_code use;
	integer* min;
	fhir_string max;
	fhir_string documentation;
	fhir_code type;
	fhir_canonical profile;
};
class Period {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	fhir_dateTime start;
	fhir_dateTime end;
};
class Population {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	enum class Age {
		Range,
		CodeableConcept
	} age_type;
	union {
		Range* _range;
		CodeableConcept* _codeableConcept;
	} age;

	CodeableConcept* gender;
	CodeableConcept* race;
	CodeableConcept* physiologicalCondition;
};
class ProdCharacteristic {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	Quantity* height;
	Quantity* width;
	Quantity* depth;
	Quantity* weight;
	Quantity* nominalVolume;
	Quantity* externalDiameter;
	fhir_string shape;
	int color_count;
	fhir_string color;
	int imprint_count;
	fhir_string imprint;
	int image_count;
	Attachment* image;
	CodeableConcept* scoring;
};
class ProductShelfLife {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	Identifier* identifier;
	CodeableConcept* type;
	Quantity* period;
	int specialPrecautionsForStorage_count;
	CodeableConcept* specialPrecautionsForStorage;
};
class Quantity {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	fhir_decimal value;
	fhir_code comparator;
	fhir_string unit;
	fhir_uri system;
	fhir_code code;
};
class Range {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	Quantity* low;
	Quantity* high;
};
class Ratio {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	Quantity* numerator;
	Quantity* denominator;
};
class Reference {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	fhir_string reference;
	fhir_uri type;
	Identifier* identifier;
	fhir_string display;
};
class RelatedArtifact {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	fhir_code type;
	fhir_string label;
	fhir_string display;
	fhir_markdown citation;
	fhir_url url;
	Attachment* document;
	fhir_canonical resource;
};
class SampledData {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	Quantity* origin;
	fhir_decimal period;
	fhir_decimal factor;
	fhir_decimal lowerLimit;
	fhir_decimal upperLimit;
	fhir_positiveInt dimensions;
	fhir_string data;
};
class Signature {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int type_count;
	Coding* type;
	fhir_instant when;
	Reference* who;
	Reference* onBehalfOf;
	fhir_code targetFormat;
	fhir_code sigFormat;
	fhir_base64Binary data;
};
class SubstanceAmount {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	enum class Amount {
		Quantity,
		Range,
		fhir_string
	} amount_type;
	union {
		Quantity* _quantity;
		Range* _range;
		fhir_string _fhir_string;
	} amount;

	CodeableConcept* amountType;
	fhir_string amountText;
	SubstanceAmount_ReferenceRange* referenceRange;
};
class SubstanceAmount_ReferenceRange {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	Quantity* lowLimit;
	Quantity* highLimit;
};
class Timing {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	int event_count;
	fhir_dateTime event;
	Timing_Repeat* repeat;
	CodeableConcept* code;
};
class Timing_Repeat {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	enum class Bounds {
		Duration,
		Range,
		Period
	} bounds_type;
	union {
		Duration* _duration;
		Range* _range;
		Period* _period;
	} bounds;

	fhir_positiveInt count;
	fhir_positiveInt countMax;
	fhir_decimal duration;
	fhir_decimal durationMax;
	fhir_code durationUnit;
	fhir_positiveInt frequency;
	fhir_positiveInt frequencyMax;
	fhir_decimal period;
	fhir_decimal periodMax;
	fhir_code periodUnit;
	int dayOfWeek_count;
	fhir_code dayOfWeek;
	int timeOfDay_count;
	fhir_time timeOfDay;
	int when_count;
	fhir_code when;
	fhir_unsignedInt offset;
};
class TriggerDefinition {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	fhir_code type;
	fhir_string name;
	enum class Timing {
		Timing,
		Reference,
		fhir_date,
		fhir_dateTime
	} timing_type;
	union {
		Timing* _timing;
		Reference* _reference;
		fhir_date _fhir_date;
		fhir_dateTime _fhir_dateTime;
	} timing;

	int data_count;
	DataRequirement* data;
	Expression* condition;
};
class UsageContext {
public:
	fhir_string id;
	int extension_count;
	Extension* extension;
	Coding* code;
	enum class Value {
		CodeableConcept,
		Quantity,
		Range,
		Reference
	} value_type;
	union {
		CodeableConcept* _codeableConcept;
		Quantity* _quantity;
		Range* _range;
		Reference* _reference;
	} value;

};
class MoneyQuantity : Quantity {
public:
};
class SimpleQuantity : Quantity {
public:
};
class shareablemeasure : Measure {
public:
};
class servicerequest_genetics : ServiceRequest {
public:
};
class groupdefinition : Group {
public:
};
class actualgroup : Group {
public:
};
class familymemberhistory_genetic : FamilyMemberHistory {
public:
};
class shareableactivitydefinition : ActivityDefinition {
public:
};
class cdshooksrequestgroup : RequestGroup {
public:
};
class provenance_relevant_history : Provenance {
public:
};
class cqf_questionnaire : Questionnaire {
public:
};
class shareablevalueset : ValueSet {
public:
};
class picoelement : EvidenceVariable {
public:
};
class shareablecodesystem : CodeSystem {
public:
};
class cdshooksguidanceresponse : GuidanceResponse {
public:
};
class devicemetricobservation : Observation {
public:
};
class observation_genetics : Observation {
public:
};
class vitalsigns : Observation {
public:
};
class bodyweight : Observation {
public:
};
class vitalspanel : Observation {
public:
};
class bodyheight : Observation {
public:
};
class resprate : Observation {
public:
};
class heartrate : Observation {
public:
};
class bodytemp : Observation {
public:
};
class headcircum : Observation {
public:
};
class oxygensat : Observation {
public:
};
class bmi : Observation {
public:
};
class bp : Observation {
public:
};
class shareablelibrary : Library {
public:
};
class cqllibrary : Library {
public:
};
class lipidprofile : DiagnosticReport {
public:
};
class cholesterol : Observation {
public:
};
class triglyceride : Observation {
public:
};
class hdlcholesterol : Observation {
public:
};
class ldlcholesterol : Observation {
public:
};
class diagnosticreport_genetics : DiagnosticReport {
public:
};
class hlaresult : DiagnosticReport {
public:
};
class synthesis : Evidence {
public:
};
class clinicaldocument : Composition {
public:
};
class catalog : Composition {
public:
};
class shareableplandefinition : PlanDefinition {
public:
};
class computableplandefinition : PlanDefinition {
public:
};
class cdshooksserviceplandefinition : PlanDefinition {
public:
};
class elementdefinition_de : ElementDefinition {
public:
};
class ehrsrle_auditevent : AuditEvent {
public:
};
class ehrsrle_provenance : Provenance {
public:
};
