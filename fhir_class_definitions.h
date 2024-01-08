namespace fhir_r4 {
typedef String8 fhir_base64Binary;
typedef String8 fhir_canonical;
typedef String8 fhir_code;
typedef String8 fhir_id;
typedef String8 fhir_markdown;
typedef String8 fhir_oid;
typedef String8 fhir_string;
typedef String8 fhir_xhtml;
typedef String8 fhir_uri;
typedef String8 fhir_url;
typedef String8 fhir_uuid;
typedef int fhir_boolean;
typedef unsigned long fhir_positiveInt;
typedef unsigned long fhir_unsignedInt;
typedef double fhir_decimal;
typedef String8 fhir_date;
typedef String8 fhir_dateTime;
typedef String8 fhir_time;
typedef String8 fhir_instant;
typedef enum class ResourceType {
	Unknown,
	Resource,
	Account,
	Account_Coverage,
	Account_Guarantor,
	ActivityDefinition,
	ActivityDefinition_Participant,
	ActivityDefinition_DynamicValue,
	AdverseEvent,
	AdverseEvent_SuspectEntity,
	AdverseEvent_SuspectEntity_Causality,
	AllergyIntolerance,
	AllergyIntolerance_Reaction,
	Appointment,
	Appointment_Participant,
	AppointmentResponse,
	AuditEvent,
	AuditEvent_Agent,
	AuditEvent_Agent_Network,
	AuditEvent_Source,
	AuditEvent_Entity,
	AuditEvent_Entity_Detail,
	Basic,
	Binary,
	BiologicallyDerivedProduct,
	BiologicallyDerivedProduct_Collection,
	BiologicallyDerivedProduct_Processing,
	BiologicallyDerivedProduct_Manipulation,
	BiologicallyDerivedProduct_Storage,
	BodyStructure,
	Bundle,
	Bundle_Link,
	Bundle_Entry,
	Bundle_Entry_Search,
	Bundle_Entry_Request,
	Bundle_Entry_Response,
	CapabilityStatement,
	CapabilityStatement_Software,
	CapabilityStatement_Implementation,
	CapabilityStatement_Rest,
	CapabilityStatement_Rest_Security,
	CapabilityStatement_Rest_Resource,
	CapabilityStatement_Rest_Resource_Interaction,
	CapabilityStatement_Rest_Resource_SearchParam,
	CapabilityStatement_Rest_Resource_Operation,
	CapabilityStatement_Rest_Interaction,
	CapabilityStatement_Messaging,
	CapabilityStatement_Messaging_Endpoint,
	CapabilityStatement_Messaging_SupportedMessage,
	CapabilityStatement_Document,
	CarePlan,
	CarePlan_Activity,
	CarePlan_Activity_Detail,
	CareTeam,
	CareTeam_Participant,
	CatalogEntry,
	CatalogEntry_RelatedEntry,
	ChargeItem,
	ChargeItem_Performer,
	ChargeItemDefinition,
	ChargeItemDefinition_Applicability,
	ChargeItemDefinition_PropertyGroup,
	ChargeItemDefinition_PropertyGroup_PriceComponent,
	Claim,
	Claim_Related,
	Claim_Payee,
	Claim_CareTeam,
	Claim_SupportingInfo,
	Claim_Diagnosis,
	Claim_Procedure,
	Claim_Insurance,
	Claim_Accident,
	Claim_Item,
	Claim_Item_Detail,
	Claim_Item_Detail_SubDetail,
	ClaimResponse,
	ClaimResponse_Item,
	ClaimResponse_Item_Adjudication,
	ClaimResponse_Item_Detail,
	ClaimResponse_Item_Detail_SubDetail,
	ClaimResponse_AddItem,
	ClaimResponse_AddItem_Detail,
	ClaimResponse_AddItem_Detail_SubDetail,
	ClaimResponse_Total,
	ClaimResponse_Payment,
	ClaimResponse_ProcessNote,
	ClaimResponse_Insurance,
	ClaimResponse_Error,
	ClinicalImpression,
	ClinicalImpression_Investigation,
	ClinicalImpression_Finding,
	CodeSystem,
	CodeSystem_Filter,
	CodeSystem_Property,
	CodeSystem_Concept,
	CodeSystem_Concept_Designation,
	CodeSystem_Concept_Property,
	Communication,
	Communication_Payload,
	CommunicationRequest,
	CommunicationRequest_Payload,
	CompartmentDefinition,
	CompartmentDefinition_Resource,
	Composition,
	Composition_Attester,
	Composition_RelatesTo,
	Composition_Event,
	Composition_Section,
	ConceptMap,
	ConceptMap_Group,
	ConceptMap_Group_Element,
	ConceptMap_Group_Element_Target,
	ConceptMap_Group_Element_Target_DependsOn,
	ConceptMap_Group_Unmapped,
	Condition,
	Condition_Stage,
	Condition_Evidence,
	Consent,
	Consent_Policy,
	Consent_Verification,
	Consent_Provision,
	Consent_Provision_Actor,
	Consent_Provision_Data,
	Contract,
	Contract_ContentDefinition,
	Contract_Term,
	Contract_Term_SecurityLabel,
	Contract_Term_Offer,
	Contract_Term_Offer_Party,
	Contract_Term_Offer_Answer,
	Contract_Term_Asset,
	Contract_Term_Asset_Context,
	Contract_Term_Asset_ValuedItem,
	Contract_Term_Action,
	Contract_Term_Action_Subject,
	Contract_Signer,
	Contract_Friendly,
	Contract_Legal,
	Contract_Rule,
	Coverage,
	Coverage_Class,
	Coverage_CostToBeneficiary,
	Coverage_CostToBeneficiary_Exception,
	CoverageEligibilityRequest,
	CoverageEligibilityRequest_SupportingInfo,
	CoverageEligibilityRequest_Insurance,
	CoverageEligibilityRequest_Item,
	CoverageEligibilityRequest_Item_Diagnosis,
	CoverageEligibilityResponse,
	CoverageEligibilityResponse_Insurance,
	CoverageEligibilityResponse_Insurance_Item,
	CoverageEligibilityResponse_Insurance_Item_Benefit,
	CoverageEligibilityResponse_Error,
	DetectedIssue,
	DetectedIssue_Evidence,
	DetectedIssue_Mitigation,
	Device,
	Device_UdiCarrier,
	Device_DeviceName,
	Device_Specialization,
	Device_Version,
	Device_Property,
	DeviceDefinition,
	DeviceDefinition_UdiDeviceIdentifier,
	DeviceDefinition_DeviceName,
	DeviceDefinition_Specialization,
	DeviceDefinition_Capability,
	DeviceDefinition_Property,
	DeviceDefinition_Material,
	DeviceMetric,
	DeviceMetric_Calibration,
	DeviceRequest,
	DeviceRequest_Parameter,
	DeviceUseStatement,
	DiagnosticReport,
	DiagnosticReport_Media,
	DocumentManifest,
	DocumentManifest_Related,
	DocumentReference,
	DocumentReference_RelatesTo,
	DocumentReference_Content,
	DocumentReference_Context,
	DomainResource,
	EffectEvidenceSynthesis,
	EffectEvidenceSynthesis_SampleSize,
	EffectEvidenceSynthesis_ResultsByExposure,
	EffectEvidenceSynthesis_EffectEstimate,
	EffectEvidenceSynthesis_EffectEstimate_PrecisionEstimate,
	EffectEvidenceSynthesis_Certainty,
	EffectEvidenceSynthesis_Certainty_CertaintySubcomponent,
	Encounter,
	Encounter_StatusHistory,
	Encounter_ClassHistory,
	Encounter_Participant,
	Encounter_Diagnosis,
	Encounter_Hospitalization,
	Encounter_Location,
	Endpoint,
	EnrollmentRequest,
	EnrollmentResponse,
	EpisodeOfCare,
	EpisodeOfCare_StatusHistory,
	EpisodeOfCare_Diagnosis,
	EventDefinition,
	Evidence,
	EvidenceVariable,
	EvidenceVariable_Characteristic,
	ExampleScenario,
	ExampleScenario_Actor,
	ExampleScenario_Instance,
	ExampleScenario_Instance_Version,
	ExampleScenario_Instance_ContainedInstance,
	ExampleScenario_Process,
	ExampleScenario_Process_Step,
	ExampleScenario_Process_Step_Operation,
	ExampleScenario_Process_Step_Alternative,
	ExplanationOfBenefit,
	ExplanationOfBenefit_Related,
	ExplanationOfBenefit_Payee,
	ExplanationOfBenefit_CareTeam,
	ExplanationOfBenefit_SupportingInfo,
	ExplanationOfBenefit_Diagnosis,
	ExplanationOfBenefit_Procedure,
	ExplanationOfBenefit_Insurance,
	ExplanationOfBenefit_Accident,
	ExplanationOfBenefit_Item,
	ExplanationOfBenefit_Item_Adjudication,
	ExplanationOfBenefit_Item_Detail,
	ExplanationOfBenefit_Item_Detail_SubDetail,
	ExplanationOfBenefit_AddItem,
	ExplanationOfBenefit_AddItem_Detail,
	ExplanationOfBenefit_AddItem_Detail_SubDetail,
	ExplanationOfBenefit_Total,
	ExplanationOfBenefit_Payment,
	ExplanationOfBenefit_ProcessNote,
	ExplanationOfBenefit_BenefitBalance,
	ExplanationOfBenefit_BenefitBalance_Financial,
	FamilyMemberHistory,
	FamilyMemberHistory_Condition,
	Flag,
	Goal,
	Goal_Target,
	GraphDefinition,
	GraphDefinition_Link,
	GraphDefinition_Link_Target,
	GraphDefinition_Link_Target_Compartment,
	Group,
	Group_Characteristic,
	Group_Member,
	GuidanceResponse,
	HealthcareService,
	HealthcareService_Eligibility,
	HealthcareService_AvailableTime,
	HealthcareService_NotAvailable,
	ImagingStudy,
	ImagingStudy_Series,
	ImagingStudy_Series_Performer,
	ImagingStudy_Series_Instance,
	Immunization,
	Immunization_Performer,
	Immunization_Education,
	Immunization_Reaction,
	Immunization_ProtocolApplied,
	ImmunizationEvaluation,
	ImmunizationRecommendation,
	ImmunizationRecommendation_Recommendation,
	ImmunizationRecommendation_Recommendation_DateCriterion,
	ImplementationGuide,
	ImplementationGuide_DependsOn,
	ImplementationGuide_Global,
	ImplementationGuide_Definition,
	ImplementationGuide_Definition_Grouping,
	ImplementationGuide_Definition_Resource,
	ImplementationGuide_Definition_Page,
	ImplementationGuide_Definition_Parameter,
	ImplementationGuide_Definition_Template,
	ImplementationGuide_Manifest,
	ImplementationGuide_Manifest_Resource,
	ImplementationGuide_Manifest_Page,
	InsurancePlan,
	InsurancePlan_Contact,
	InsurancePlan_Coverage,
	InsurancePlan_Coverage_Benefit,
	InsurancePlan_Coverage_Benefit_Limit,
	InsurancePlan_Plan,
	InsurancePlan_Plan_GeneralCost,
	InsurancePlan_Plan_SpecificCost,
	InsurancePlan_Plan_SpecificCost_Benefit,
	InsurancePlan_Plan_SpecificCost_Benefit_Cost,
	Invoice,
	Invoice_Participant,
	Invoice_LineItem,
	Invoice_LineItem_PriceComponent,
	Library,
	Linkage,
	Linkage_Item,
	List,
	List_Entry,
	Location,
	Location_Position,
	Location_HoursOfOperation,
	Measure,
	Measure_Group,
	Measure_Group_Population,
	Measure_Group_Stratifier,
	Measure_Group_Stratifier_Component,
	Measure_SupplementalData,
	MeasureReport,
	MeasureReport_Group,
	MeasureReport_Group_Population,
	MeasureReport_Group_Stratifier,
	MeasureReport_Group_Stratifier_Stratum,
	MeasureReport_Group_Stratifier_Stratum_Component,
	MeasureReport_Group_Stratifier_Stratum_Population,
	Media,
	Medication,
	Medication_Ingredient,
	Medication_Batch,
	MedicationAdministration,
	MedicationAdministration_Performer,
	MedicationAdministration_Dosage,
	MedicationDispense,
	MedicationDispense_Performer,
	MedicationDispense_Substitution,
	MedicationKnowledge,
	MedicationKnowledge_RelatedMedicationKnowledge,
	MedicationKnowledge_Monograph,
	MedicationKnowledge_Ingredient,
	MedicationKnowledge_Cost,
	MedicationKnowledge_MonitoringProgram,
	MedicationKnowledge_AdministrationGuidelines,
	MedicationKnowledge_AdministrationGuidelines_Dosage,
	MedicationKnowledge_AdministrationGuidelines_PatientCharacteristics,
	MedicationKnowledge_MedicineClassification,
	MedicationKnowledge_Packaging,
	MedicationKnowledge_DrugCharacteristic,
	MedicationKnowledge_Regulatory,
	MedicationKnowledge_Regulatory_Substitution,
	MedicationKnowledge_Regulatory_Schedule,
	MedicationKnowledge_Regulatory_MaxDispense,
	MedicationKnowledge_Kinetics,
	MedicationRequest,
	MedicationRequest_DispenseRequest,
	MedicationRequest_DispenseRequest_InitialFill,
	MedicationRequest_Substitution,
	MedicationStatement,
	MedicinalProduct,
	MedicinalProduct_Name,
	MedicinalProduct_Name_NamePart,
	MedicinalProduct_Name_CountryLanguage,
	MedicinalProduct_ManufacturingBusinessOperation,
	MedicinalProduct_SpecialDesignation,
	MedicinalProductAuthorization,
	MedicinalProductAuthorization_JurisdictionalAuthorization,
	MedicinalProductAuthorization_Procedure,
	MedicinalProductContraindication,
	MedicinalProductContraindication_OtherTherapy,
	MedicinalProductIndication,
	MedicinalProductIndication_OtherTherapy,
	MedicinalProductIngredient,
	MedicinalProductIngredient_SpecifiedSubstance,
	MedicinalProductIngredient_SpecifiedSubstance_Strength,
	MedicinalProductIngredient_SpecifiedSubstance_Strength_ReferenceStrength,
	MedicinalProductIngredient_Substance,
	MedicinalProductInteraction,
	MedicinalProductInteraction_Interactant,
	MedicinalProductManufactured,
	MedicinalProductPackaged,
	MedicinalProductPackaged_BatchIdentifier,
	MedicinalProductPackaged_PackageItem,
	MedicinalProductPharmaceutical,
	MedicinalProductPharmaceutical_Characteristics,
	MedicinalProductPharmaceutical_RouteOfAdministration,
	MedicinalProductPharmaceutical_RouteOfAdministration_TargetSpecies,
	MedicinalProductPharmaceutical_RouteOfAdministration_TargetSpecies_WithdrawalPeriod,
	MedicinalProductUndesirableEffect,
	MessageDefinition,
	MessageDefinition_Focus,
	MessageDefinition_AllowedResponse,
	MessageHeader,
	MessageHeader_Destination,
	MessageHeader_Source,
	MessageHeader_Response,
	MolecularSequence,
	MolecularSequence_ReferenceSeq,
	MolecularSequence_Variant,
	MolecularSequence_Quality,
	MolecularSequence_Quality_Roc,
	MolecularSequence_Repository,
	MolecularSequence_StructureVariant,
	MolecularSequence_StructureVariant_Outer,
	MolecularSequence_StructureVariant_Inner,
	NamingSystem,
	NamingSystem_UniqueId,
	NutritionOrder,
	NutritionOrder_OralDiet,
	NutritionOrder_OralDiet_Nutrient,
	NutritionOrder_OralDiet_Texture,
	NutritionOrder_Supplement,
	NutritionOrder_EnteralFormula,
	NutritionOrder_EnteralFormula_Administration,
	Observation,
	Observation_ReferenceRange,
	Observation_Component,
	ObservationDefinition,
	ObservationDefinition_QuantitativeDetails,
	ObservationDefinition_QualifiedInterval,
	OperationDefinition,
	OperationDefinition_Parameter,
	OperationDefinition_Parameter_Binding,
	OperationDefinition_Parameter_ReferencedFrom,
	OperationDefinition_Overload,
	OperationOutcome,
	OperationOutcome_Issue,
	Organization,
	Organization_Contact,
	OrganizationAffiliation,
	Parameters,
	Parameters_Parameter,
	Patient,
	Patient_Contact,
	Patient_Communication,
	Patient_Link,
	PaymentNotice,
	PaymentReconciliation,
	PaymentReconciliation_Detail,
	PaymentReconciliation_ProcessNote,
	Person,
	Person_Link,
	PlanDefinition,
	PlanDefinition_Goal,
	PlanDefinition_Goal_Target,
	PlanDefinition_Action,
	PlanDefinition_Action_Condition,
	PlanDefinition_Action_RelatedAction,
	PlanDefinition_Action_Participant,
	PlanDefinition_Action_DynamicValue,
	Practitioner,
	Practitioner_Qualification,
	PractitionerRole,
	PractitionerRole_AvailableTime,
	PractitionerRole_NotAvailable,
	Procedure,
	Procedure_Performer,
	Procedure_FocalDevice,
	Provenance,
	Provenance_Agent,
	Provenance_Entity,
	Questionnaire,
	Questionnaire_Item,
	Questionnaire_Item_EnableWhen,
	Questionnaire_Item_AnswerOption,
	Questionnaire_Item_Initial,
	QuestionnaireResponse,
	QuestionnaireResponse_Item,
	QuestionnaireResponse_Item_Answer,
	RelatedPerson,
	RelatedPerson_Communication,
	RequestGroup,
	RequestGroup_Action,
	RequestGroup_Action_Condition,
	RequestGroup_Action_RelatedAction,
	ResearchDefinition,
	ResearchElementDefinition,
	ResearchElementDefinition_Characteristic,
	ResearchStudy,
	ResearchStudy_Arm,
	ResearchStudy_Objective,
	ResearchSubject,
	RiskAssessment,
	RiskAssessment_Prediction,
	RiskEvidenceSynthesis,
	RiskEvidenceSynthesis_SampleSize,
	RiskEvidenceSynthesis_RiskEstimate,
	RiskEvidenceSynthesis_RiskEstimate_PrecisionEstimate,
	RiskEvidenceSynthesis_Certainty,
	RiskEvidenceSynthesis_Certainty_CertaintySubcomponent,
	Schedule,
	SearchParameter,
	SearchParameter_Component,
	ServiceRequest,
	Slot,
	Specimen,
	Specimen_Collection,
	Specimen_Processing,
	Specimen_Container,
	SpecimenDefinition,
	SpecimenDefinition_TypeTested,
	SpecimenDefinition_TypeTested_Container,
	SpecimenDefinition_TypeTested_Container_Additive,
	SpecimenDefinition_TypeTested_Handling,
	StructureDefinition,
	StructureDefinition_Mapping,
	StructureDefinition_Context,
	StructureDefinition_Snapshot,
	StructureDefinition_Differential,
	StructureMap,
	StructureMap_Structure,
	StructureMap_Group,
	StructureMap_Group_Input,
	StructureMap_Group_Rule,
	StructureMap_Group_Rule_Source,
	StructureMap_Group_Rule_Target,
	StructureMap_Group_Rule_Target_Parameter,
	StructureMap_Group_Rule_Dependent,
	Subscription,
	Subscription_Channel,
	Substance,
	Substance_Instance,
	Substance_Ingredient,
	SubstanceNucleicAcid,
	SubstanceNucleicAcid_Subunit,
	SubstanceNucleicAcid_Subunit_Linkage,
	SubstanceNucleicAcid_Subunit_Sugar,
	SubstancePolymer,
	SubstancePolymer_MonomerSet,
	SubstancePolymer_MonomerSet_StartingMaterial,
	SubstancePolymer_Repeat,
	SubstancePolymer_Repeat_RepeatUnit,
	SubstancePolymer_Repeat_RepeatUnit_DegreeOfPolymerisation,
	SubstancePolymer_Repeat_RepeatUnit_StructuralRepresentation,
	SubstanceProtein,
	SubstanceProtein_Subunit,
	SubstanceReferenceInformation,
	SubstanceReferenceInformation_Gene,
	SubstanceReferenceInformation_GeneElement,
	SubstanceReferenceInformation_Classification,
	SubstanceReferenceInformation_Target,
	SubstanceSourceMaterial,
	SubstanceSourceMaterial_FractionDescription,
	SubstanceSourceMaterial_Organism,
	SubstanceSourceMaterial_Organism_Author,
	SubstanceSourceMaterial_Organism_Hybrid,
	SubstanceSourceMaterial_Organism_OrganismGeneral,
	SubstanceSourceMaterial_PartDescription,
	SubstanceSpecification,
	SubstanceSpecification_Moiety,
	SubstanceSpecification_Property,
	SubstanceSpecification_Structure,
	SubstanceSpecification_Structure_Isotope,
	SubstanceSpecification_Structure_Isotope_MolecularWeight,
	SubstanceSpecification_Structure_Representation,
	SubstanceSpecification_Code,
	SubstanceSpecification_Name,
	SubstanceSpecification_Name_Official,
	SubstanceSpecification_Relationship,
	SupplyDelivery,
	SupplyDelivery_SuppliedItem,
	SupplyRequest,
	SupplyRequest_Parameter,
	Task,
	Task_Restriction,
	Task_Input,
	Task_Output,
	TerminologyCapabilities,
	TerminologyCapabilities_Software,
	TerminologyCapabilities_Implementation,
	TerminologyCapabilities_CodeSystem,
	TerminologyCapabilities_CodeSystem_Version,
	TerminologyCapabilities_CodeSystem_Version_Filter,
	TerminologyCapabilities_Expansion,
	TerminologyCapabilities_Expansion_Parameter,
	TerminologyCapabilities_ValidateCode,
	TerminologyCapabilities_Translation,
	TerminologyCapabilities_Closure,
	TestReport,
	TestReport_Participant,
	TestReport_Setup,
	TestReport_Setup_Action,
	TestReport_Setup_Action_Operation,
	TestReport_Setup_Action_Assert,
	TestReport_Test,
	TestReport_Test_Action,
	TestReport_Teardown,
	TestReport_Teardown_Action,
	TestScript,
	TestScript_Origin,
	TestScript_Destination,
	TestScript_Metadata,
	TestScript_Metadata_Link,
	TestScript_Metadata_Capability,
	TestScript_Fixture,
	TestScript_Variable,
	TestScript_Setup,
	TestScript_Setup_Action,
	TestScript_Setup_Action_Operation,
	TestScript_Setup_Action_Operation_RequestHeader,
	TestScript_Setup_Action_Assert,
	TestScript_Test,
	TestScript_Test_Action,
	TestScript_Teardown,
	TestScript_Teardown_Action,
	ValueSet,
	ValueSet_Compose,
	ValueSet_Compose_Include,
	ValueSet_Compose_Include_Concept,
	ValueSet_Compose_Include_Concept_Designation,
	ValueSet_Compose_Include_Filter,
	ValueSet_Expansion,
	ValueSet_Expansion_Parameter,
	ValueSet_Expansion_Contains,
	VerificationResult,
	VerificationResult_PrimarySource,
	VerificationResult_Attestation,
	VerificationResult_Validator,
	VisionPrescription,
	VisionPrescription_LensSpecification,
	VisionPrescription_LensSpecification_Prism,
	MetadataResource,
	Element,
	BackboneElement,
	Integer,
	Address,
	Age,
	Annotation,
	Attachment,
	CodeableConcept,
	Coding,
	ContactDetail,
	ContactPoint,
	Contributor,
	Count,
	DataRequirement,
	DataRequirement_CodeFilter,
	DataRequirement_DateFilter,
	DataRequirement_Sort,
	Distance,
	Dosage,
	Dosage_DoseAndRate,
	Duration,
	ElementDefinition,
	ElementDefinition_Slicing,
	ElementDefinition_Slicing_Discriminator,
	ElementDefinition_Base,
	ElementDefinition_Type,
	ElementDefinition_Example,
	ElementDefinition_Constraint,
	ElementDefinition_Binding,
	ElementDefinition_Mapping,
	Expression,
	Extension,
	HumanName,
	Identifier,
	MarketingStatus,
	Meta,
	Money,
	Narrative,
	ParameterDefinition,
	Period,
	Population,
	ProdCharacteristic,
	ProductShelfLife,
	Quantity,
	Range,
	Ratio,
	Reference,
	RelatedArtifact,
	SampledData,
	Signature,
	SubstanceAmount,
	SubstanceAmount_ReferenceRange,
	Timing,
	Timing_Repeat,
	TriggerDefinition,
	UsageContext,
	MoneyQuantity,
	SimpleQuantity,
	Shareablemeasure,
	Servicerequest_genetics,
	Groupdefinition,
	Actualgroup,
	Familymemberhistory_genetic,
	Shareableactivitydefinition,
	Cdshooksrequestgroup,
	Provenance_relevant_history,
	Cqf_questionnaire,
	Shareablevalueset,
	Picoelement,
	Shareablecodesystem,
	Cdshooksguidanceresponse,
	Devicemetricobservation,
	Observation_genetics,
	Vitalsigns,
	Bodyweight,
	Vitalspanel,
	Bodyheight,
	Resprate,
	Heartrate,
	Bodytemp,
	Headcircum,
	Oxygensat,
	Bmi,
	Bp,
	Shareablelibrary,
	Cqllibrary,
	Lipidprofile,
	Cholesterol,
	Triglyceride,
	Hdlcholesterol,
	Ldlcholesterol,
	Diagnosticreport_genetics,
	Hlaresult,
	Synthesis,
	Clinicaldocument,
	Catalog,
	Shareableplandefinition,
	Computableplandefinition,
	Cdshooksserviceplandefinition,
	Elementdefinition_de,
	Ehrsrle_auditevent,
	Ehrsrle_provenance,
} ResourceType;
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
class Integer;
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
class Shareablemeasure;
class Servicerequest_genetics;
class Groupdefinition;
class Actualgroup;
class Familymemberhistory_genetic;
class Shareableactivitydefinition;
class Cdshooksrequestgroup;
class Provenance_relevant_history;
class Cqf_questionnaire;
class Shareablevalueset;
class Picoelement;
class Shareablecodesystem;
class Cdshooksguidanceresponse;
class Devicemetricobservation;
class Observation_genetics;
class Vitalsigns;
class Bodyweight;
class Vitalspanel;
class Bodyheight;
class Resprate;
class Heartrate;
class Bodytemp;
class Headcircum;
class Oxygensat;
class Bmi;
class Bp;
class Shareablelibrary;
class Cqllibrary;
class Lipidprofile;
class Cholesterol;
class Triglyceride;
class Hdlcholesterol;
class Ldlcholesterol;
class Diagnosticreport_genetics;
class Hlaresult;
class Synthesis;
class Clinicaldocument;
class Catalog;
class Shareableplandefinition;
class Computableplandefinition;
class Cdshooksserviceplandefinition;
class Elementdefinition_de;
class Ehrsrle_auditevent;
class Ehrsrle_provenance;
class Resource {
public: 
	ResourceType resourceType;
	fhir_string id;
	Meta *meta;
	fhir_uri implicitRules;
	fhir_code language;
};
class Account {
public: 
	ResourceType resourceType;
	fhir_string id;
	Meta *meta;
	fhir_uri implicitRules;
	fhir_code language;
	Narrative *text;
	U64 contained_count;
	Resource **contained;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	U64 identifier_count;
	Identifier **identifier;
	fhir_code status;
	CodeableConcept *type;
	fhir_string name;
	U64 subject_count;
	Reference **subject;
	Period *servicePeriod;
	U64 coverage_count;
	Account_Coverage **coverage;
	Reference *owner;
	fhir_string description;
	U64 guarantor_count;
	Account_Guarantor **guarantor;
	Reference *partOf;
};
class Account_Coverage {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	Reference *coverage;
	fhir_positiveInt priority;
};
class Account_Guarantor {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	Reference *party;
	fhir_boolean onHold;
	Period *period;
};
class ActivityDefinition {
public: 
	ResourceType resourceType;
	fhir_string id;
	Meta *meta;
	fhir_uri implicitRules;
	fhir_code language;
	Narrative *text;
	U64 contained_count;
	Resource **contained;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	fhir_uri url;
	U64 identifier_count;
	Identifier **identifier;
	fhir_string version;
	fhir_string name;
	fhir_string title;
	fhir_string subtitle;
	fhir_code status;
	fhir_boolean experimental;
	enum class SubjeType {
		Unknown,
		CodeableConcept,
		Reference
	};
	SubjeType subject_type_type;

	union {
		CodeableConcept* subjectCodeableConcept;
		Reference* subjectReference;
	} subject;

	fhir_dateTime date;
	fhir_string publisher;
	U64 contact_count;
	ContactDetail **contact;
	fhir_markdown description;
	U64 useContext_count;
	UsageContext **useContext;
	U64 jurisdiction_count;
	CodeableConcept **jurisdiction;
	fhir_markdown purpose;
	fhir_string usage;
	fhir_markdown copyright;
	fhir_date approvalDate;
	fhir_date lastReviewDate;
	Period *effectivePeriod;
	U64 topic_count;
	CodeableConcept **topic;
	U64 author_count;
	ContactDetail **author;
	U64 editor_count;
	ContactDetail **editor;
	U64 reviewer_count;
	ContactDetail **reviewer;
	U64 endorser_count;
	ContactDetail **endorser;
	U64 relatedArtifact_count;
	RelatedArtifact **relatedArtifact;
	U64 library_count;
	fhir_canonical *library;
	fhir_code kind;
	fhir_canonical profile;
	CodeableConcept *code;
	fhir_code intent;
	fhir_code priority;
	fhir_boolean doNotPerform;
	enum class TiminType {
		Unknown,
		Timing,
		fhir_dateTime,
		Age,
		Period,
		Range,
		Duration
	};
	TiminType timing_type_type;

	union {
		Timing* timingTiming;
		fhir_dateTime timingDateTime;
		Age* timingAge;
		Period* timingPeriod;
		Range* timingRange;
		Duration* timingDuration;
	} timing;

	Reference *location;
	U64 participant_count;
	ActivityDefinition_Participant **participant;
	enum class ProduType {
		Unknown,
		Reference,
		CodeableConcept
	};
	ProduType product_type_type;

	union {
		Reference* productReference;
		CodeableConcept* productCodeableConcept;
	} product;

	Quantity *quantity;
	U64 dosage_count;
	Dosage **dosage;
	U64 bodySite_count;
	CodeableConcept **bodySite;
	U64 specimenRequirement_count;
	Reference **specimenRequirement;
	U64 observationRequirement_count;
	Reference **observationRequirement;
	U64 observationResultRequirement_count;
	Reference **observationResultRequirement;
	fhir_canonical transform;
	U64 dynamicValue_count;
	ActivityDefinition_DynamicValue **dynamicValue;
};
class ActivityDefinition_Participant {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	fhir_code type;
	CodeableConcept *role;
};
class ActivityDefinition_DynamicValue {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	fhir_string path;
	Expression *expression;
};
class AdverseEvent {
public: 
	ResourceType resourceType;
	fhir_string id;
	Meta *meta;
	fhir_uri implicitRules;
	fhir_code language;
	Narrative *text;
	U64 contained_count;
	Resource **contained;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	Identifier *identifier;
	fhir_code actuality;
	U64 category_count;
	CodeableConcept **category;
	CodeableConcept *event;
	Reference *subject;
	Reference *encounter;
	fhir_dateTime date;
	fhir_dateTime detected;
	fhir_dateTime recordedDate;
	U64 resultingCondition_count;
	Reference **resultingCondition;
	Reference *location;
	CodeableConcept *seriousness;
	CodeableConcept *severity;
	CodeableConcept *outcome;
	Reference *recorder;
	U64 contributor_count;
	Reference **contributor;
	U64 suspectEntity_count;
	AdverseEvent_SuspectEntity **suspectEntity;
	U64 subjectMedicalHistory_count;
	Reference **subjectMedicalHistory;
	U64 referenceDocument_count;
	Reference **referenceDocument;
	U64 study_count;
	Reference **study;
};
class AdverseEvent_SuspectEntity {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	Reference *instance;
	U64 causality_count;
	AdverseEvent_SuspectEntity_Causality **causality;
};
class AdverseEvent_SuspectEntity_Causality {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	CodeableConcept *assessment;
	fhir_string productRelatedness;
	Reference *author;
	CodeableConcept *method;
};
class AllergyIntolerance {
public: 
	ResourceType resourceType;
	fhir_string id;
	Meta *meta;
	fhir_uri implicitRules;
	fhir_code language;
	Narrative *text;
	U64 contained_count;
	Resource **contained;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	U64 identifier_count;
	Identifier **identifier;
	CodeableConcept *clinicalStatus;
	CodeableConcept *verificationStatus;
	fhir_code type;
	U64 category_count;
	fhir_code *category;
	fhir_code criticality;
	CodeableConcept *code;
	Reference *patient;
	Reference *encounter;
	enum class OnsetType {
		Unknown,
		fhir_dateTime,
		Age,
		Period,
		Range,
		fhir_string
	};
	OnsetType onset_type_type;

	union {
		fhir_dateTime onsetDateTime;
		Age* onsetAge;
		Period* onsetPeriod;
		Range* onsetRange;
		fhir_string onsetString;
	} onset;

	fhir_dateTime recordedDate;
	Reference *recorder;
	Reference *asserter;
	fhir_dateTime lastOccurrence;
	U64 note_count;
	Annotation **note;
	U64 reaction_count;
	AllergyIntolerance_Reaction **reaction;
};
class AllergyIntolerance_Reaction {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	CodeableConcept *substance;
	U64 manifestation_count;
	CodeableConcept **manifestation;
	fhir_string description;
	fhir_dateTime onset;
	fhir_code severity;
	CodeableConcept *exposureRoute;
	U64 note_count;
	Annotation **note;
};
class Appointment {
public: 
	ResourceType resourceType;
	fhir_string id;
	Meta *meta;
	fhir_uri implicitRules;
	fhir_code language;
	Narrative *text;
	U64 contained_count;
	Resource **contained;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	U64 identifier_count;
	Identifier **identifier;
	fhir_code status;
	CodeableConcept *cancelationReason;
	U64 serviceCategory_count;
	CodeableConcept **serviceCategory;
	U64 serviceType_count;
	CodeableConcept **serviceType;
	U64 specialty_count;
	CodeableConcept **specialty;
	CodeableConcept *appointmentType;
	U64 reasonCode_count;
	CodeableConcept **reasonCode;
	U64 reasonReference_count;
	Reference **reasonReference;
	fhir_unsignedInt priority;
	fhir_string description;
	U64 supportingInformation_count;
	Reference **supportingInformation;
	fhir_instant start;
	fhir_instant end;
	fhir_positiveInt minutesDuration;
	U64 slot_count;
	Reference **slot;
	fhir_dateTime created;
	fhir_string comment;
	fhir_string patientInstruction;
	U64 basedOn_count;
	Reference **basedOn;
	U64 participant_count;
	Appointment_Participant **participant;
	U64 requestedPeriod_count;
	Period **requestedPeriod;
};
class Appointment_Participant {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	U64 type_count;
	CodeableConcept **type;
	Reference *actor;
	fhir_code required;
	fhir_code status;
	Period *period;
};
class AppointmentResponse {
public: 
	ResourceType resourceType;
	fhir_string id;
	Meta *meta;
	fhir_uri implicitRules;
	fhir_code language;
	Narrative *text;
	U64 contained_count;
	Resource **contained;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	U64 identifier_count;
	Identifier **identifier;
	Reference *appointment;
	fhir_instant start;
	fhir_instant end;
	U64 participantType_count;
	CodeableConcept **participantType;
	Reference *actor;
	fhir_code participantStatus;
	fhir_string comment;
};
class AuditEvent {
public: 
	ResourceType resourceType;
	fhir_string id;
	Meta *meta;
	fhir_uri implicitRules;
	fhir_code language;
	Narrative *text;
	U64 contained_count;
	Resource **contained;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	Coding *type;
	U64 subtype_count;
	Coding **subtype;
	fhir_code action;
	Period *period;
	fhir_instant recorded;
	fhir_code outcome;
	fhir_string outcomeDesc;
	U64 purposeOfEvent_count;
	CodeableConcept **purposeOfEvent;
	U64 agent_count;
	AuditEvent_Agent **agent;
	AuditEvent_Source *source;
	U64 entity_count;
	AuditEvent_Entity **entity;
};
class AuditEvent_Agent {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	CodeableConcept *type;
	U64 role_count;
	CodeableConcept **role;
	Reference *who;
	fhir_string altId;
	fhir_string name;
	fhir_boolean requestor;
	Reference *location;
	U64 policy_count;
	fhir_uri *policy;
	Coding *media;
	AuditEvent_Agent_Network *network;
	U64 purposeOfUse_count;
	CodeableConcept **purposeOfUse;
};
class AuditEvent_Agent_Network {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	fhir_string address;
	fhir_code type;
};
class AuditEvent_Source {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	fhir_string site;
	Reference *observer;
	U64 type_count;
	Coding **type;
};
class AuditEvent_Entity {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	Reference *what;
	Coding *type;
	Coding *role;
	Coding *lifecycle;
	U64 securityLabel_count;
	Coding **securityLabel;
	fhir_string name;
	fhir_string description;
	fhir_base64Binary query;
	U64 detail_count;
	AuditEvent_Entity_Detail **detail;
};
class AuditEvent_Entity_Detail {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	fhir_string type;
	enum class ValueType {
		Unknown,
		fhir_string,
		fhir_base64Binary
	};
	ValueType value_type_type;

	union {
		fhir_string valueString;
		fhir_base64Binary valueBase64Binary;
	} value;

};
class Basic {
public: 
	ResourceType resourceType;
	fhir_string id;
	Meta *meta;
	fhir_uri implicitRules;
	fhir_code language;
	Narrative *text;
	U64 contained_count;
	Resource **contained;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	U64 identifier_count;
	Identifier **identifier;
	CodeableConcept *code;
	Reference *subject;
	fhir_date created;
	Reference *author;
};
class Binary {
public: 
	ResourceType resourceType;
	fhir_string id;
	Meta *meta;
	fhir_uri implicitRules;
	fhir_code language;
	fhir_code contentType;
	Reference *securityContext;
	fhir_base64Binary data;
};
class BiologicallyDerivedProduct {
public: 
	ResourceType resourceType;
	fhir_string id;
	Meta *meta;
	fhir_uri implicitRules;
	fhir_code language;
	Narrative *text;
	U64 contained_count;
	Resource **contained;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	U64 identifier_count;
	Identifier **identifier;
	fhir_code productCategory;
	CodeableConcept *productCode;
	fhir_code status;
	U64 request_count;
	Reference **request;
	Integer *quantity;
	U64 parent_count;
	Reference **parent;
	BiologicallyDerivedProduct_Collection *collection;
	U64 processing_count;
	BiologicallyDerivedProduct_Processing **processing;
	BiologicallyDerivedProduct_Manipulation *manipulation;
	U64 storage_count;
	BiologicallyDerivedProduct_Storage **storage;
};
class BiologicallyDerivedProduct_Collection {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	Reference *collector;
	Reference *source;
	enum class ColleType {
		Unknown,
		fhir_dateTime,
		Period
	};
	ColleType collected_type_type;

	union {
		fhir_dateTime collectedDateTime;
		Period* collectedPeriod;
	} collected;

};
class BiologicallyDerivedProduct_Processing {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	fhir_string description;
	CodeableConcept *procedure;
	Reference *additive;
	enum class Time_Type {
		Unknown,
		fhir_dateTime,
		Period
	};
	Time_Type time_type_type;

	union {
		fhir_dateTime timeDateTime;
		Period* timePeriod;
	} time;

};
class BiologicallyDerivedProduct_Manipulation {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	fhir_string description;
	enum class Time_Type {
		Unknown,
		fhir_dateTime,
		Period
	};
	Time_Type time_type_type;

	union {
		fhir_dateTime timeDateTime;
		Period* timePeriod;
	} time;

};
class BiologicallyDerivedProduct_Storage {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	fhir_string description;
	fhir_decimal temperature;
	fhir_code scale;
	Period *duration;
};
class BodyStructure {
public: 
	ResourceType resourceType;
	fhir_string id;
	Meta *meta;
	fhir_uri implicitRules;
	fhir_code language;
	Narrative *text;
	U64 contained_count;
	Resource **contained;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	U64 identifier_count;
	Identifier **identifier;
	fhir_boolean active;
	CodeableConcept *morphology;
	CodeableConcept *location;
	U64 locationQualifier_count;
	CodeableConcept **locationQualifier;
	fhir_string description;
	U64 image_count;
	Attachment **image;
	Reference *patient;
};
class Bundle {
public: 
	ResourceType resourceType;
	fhir_string id;
	Meta *meta;
	fhir_uri implicitRules;
	fhir_code language;
	Identifier *identifier;
	fhir_code type;
	fhir_instant timestamp;
	fhir_unsignedInt total;
	U64 link_count;
	Bundle_Link **link;
	U64 entry_count;
	Bundle_Entry **entry;
	Signature *signature;
};
class Bundle_Link {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	fhir_string relation;
	fhir_uri url;
};
class Bundle_Entry {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	U64 link_count;
	Bundle_Link **link;
	fhir_uri fullUrl;
	Resource *resource;
	Bundle_Entry_Search *search;
	Bundle_Entry_Request *request;
	Bundle_Entry_Response *response;
};
class Bundle_Entry_Search {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	fhir_code mode;
	fhir_decimal score;
};
class Bundle_Entry_Request {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	fhir_code method;
	fhir_uri url;
	fhir_string ifNoneMatch;
	fhir_instant ifModifiedSince;
	fhir_string ifMatch;
	fhir_string ifNoneExist;
};
class Bundle_Entry_Response {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	fhir_string status;
	fhir_uri location;
	fhir_string etag;
	fhir_instant lastModified;
	Resource *outcome;
};
class CapabilityStatement {
public: 
	ResourceType resourceType;
	fhir_string id;
	Meta *meta;
	fhir_uri implicitRules;
	fhir_code language;
	Narrative *text;
	U64 contained_count;
	Resource **contained;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	fhir_uri url;
	fhir_string version;
	fhir_string name;
	fhir_string title;
	fhir_code status;
	fhir_boolean experimental;
	fhir_dateTime date;
	fhir_string publisher;
	U64 contact_count;
	ContactDetail **contact;
	fhir_markdown description;
	U64 useContext_count;
	UsageContext **useContext;
	U64 jurisdiction_count;
	CodeableConcept **jurisdiction;
	fhir_markdown purpose;
	fhir_markdown copyright;
	fhir_code kind;
	U64 instantiates_count;
	fhir_canonical *instantiates;
	U64 imports_count;
	fhir_canonical *imports;
	CapabilityStatement_Software *software;
	CapabilityStatement_Implementation *implementation;
	fhir_code fhirVersion;
	U64 format_count;
	fhir_code *format;
	U64 patchFormat_count;
	fhir_code *patchFormat;
	U64 implementationGuide_count;
	fhir_canonical *implementationGuide;
	U64 rest_count;
	CapabilityStatement_Rest **rest;
	U64 messaging_count;
	CapabilityStatement_Messaging **messaging;
	U64 document_count;
	CapabilityStatement_Document **document;
};
class CapabilityStatement_Software {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	fhir_string name;
	fhir_string version;
	fhir_dateTime releaseDate;
};
class CapabilityStatement_Implementation {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	fhir_string description;
	fhir_url url;
	Reference *custodian;
};
class CapabilityStatement_Rest {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	fhir_code mode;
	fhir_markdown documentation;
	CapabilityStatement_Rest_Security *security;
	U64 resource_count;
	CapabilityStatement_Rest_Resource **resource;
	U64 interaction_count;
	CapabilityStatement_Rest_Interaction **interaction;
	U64 searchParam_count;
	CapabilityStatement_Rest_Resource_SearchParam **searchParam;
	U64 operation_count;
	CapabilityStatement_Rest_Resource_Operation **operation;
	U64 compartment_count;
	fhir_canonical *compartment;
};
class CapabilityStatement_Rest_Security {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	fhir_boolean cors;
	U64 service_count;
	CodeableConcept **service;
	fhir_markdown description;
};
class CapabilityStatement_Rest_Resource {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	fhir_code type;
	fhir_canonical profile;
	U64 supportedProfile_count;
	fhir_canonical *supportedProfile;
	fhir_markdown documentation;
	U64 interaction_count;
	CapabilityStatement_Rest_Resource_Interaction **interaction;
	fhir_code versioning;
	fhir_boolean readHistory;
	fhir_boolean updateCreate;
	fhir_boolean conditionalCreate;
	fhir_code conditionalRead;
	fhir_boolean conditionalUpdate;
	fhir_code conditionalDelete;
	U64 referencePolicy_count;
	fhir_code *referencePolicy;
	U64 searchInclude_count;
	fhir_string *searchInclude;
	U64 searchRevInclude_count;
	fhir_string *searchRevInclude;
	U64 searchParam_count;
	CapabilityStatement_Rest_Resource_SearchParam **searchParam;
	U64 operation_count;
	CapabilityStatement_Rest_Resource_Operation **operation;
};
class CapabilityStatement_Rest_Resource_Interaction {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	fhir_code code;
	fhir_markdown documentation;
};
class CapabilityStatement_Rest_Resource_SearchParam {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	fhir_string name;
	fhir_canonical definition;
	fhir_code type;
	fhir_markdown documentation;
};
class CapabilityStatement_Rest_Resource_Operation {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	fhir_string name;
	fhir_canonical definition;
	fhir_markdown documentation;
};
class CapabilityStatement_Rest_Interaction {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	fhir_code code;
	fhir_markdown documentation;
};
class CapabilityStatement_Messaging {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	U64 endpoint_count;
	CapabilityStatement_Messaging_Endpoint **endpoint;
	fhir_unsignedInt reliableCache;
	fhir_markdown documentation;
	U64 supportedMessage_count;
	CapabilityStatement_Messaging_SupportedMessage **supportedMessage;
};
class CapabilityStatement_Messaging_Endpoint {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	Coding *protocol;
	fhir_url address;
};
class CapabilityStatement_Messaging_SupportedMessage {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	fhir_code mode;
	fhir_canonical definition;
};
class CapabilityStatement_Document {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	fhir_code mode;
	fhir_markdown documentation;
	fhir_canonical profile;
};
class CarePlan {
public: 
	ResourceType resourceType;
	fhir_string id;
	Meta *meta;
	fhir_uri implicitRules;
	fhir_code language;
	Narrative *text;
	U64 contained_count;
	Resource **contained;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	U64 identifier_count;
	Identifier **identifier;
	U64 instantiatesCanonical_count;
	fhir_canonical *instantiatesCanonical;
	U64 instantiatesUri_count;
	fhir_uri *instantiatesUri;
	U64 basedOn_count;
	Reference **basedOn;
	U64 replaces_count;
	Reference **replaces;
	U64 partOf_count;
	Reference **partOf;
	fhir_code status;
	fhir_code intent;
	U64 category_count;
	CodeableConcept **category;
	fhir_string title;
	fhir_string description;
	Reference *subject;
	Reference *encounter;
	Period *period;
	fhir_dateTime created;
	Reference *author;
	U64 contributor_count;
	Reference **contributor;
	U64 careTeam_count;
	Reference **careTeam;
	U64 addresses_count;
	Reference **addresses;
	U64 supportingInfo_count;
	Reference **supportingInfo;
	U64 goal_count;
	Reference **goal;
	U64 activity_count;
	CarePlan_Activity **activity;
	U64 note_count;
	Annotation **note;
};
class CarePlan_Activity {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	U64 outcomeCodeableConcept_count;
	CodeableConcept **outcomeCodeableConcept;
	U64 outcomeReference_count;
	Reference **outcomeReference;
	U64 progress_count;
	Annotation **progress;
	Reference *reference;
	CarePlan_Activity_Detail *detail;
};
class CarePlan_Activity_Detail {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	fhir_code kind;
	U64 instantiatesCanonical_count;
	fhir_canonical *instantiatesCanonical;
	U64 instantiatesUri_count;
	fhir_uri *instantiatesUri;
	CodeableConcept *code;
	U64 reasonCode_count;
	CodeableConcept **reasonCode;
	U64 reasonReference_count;
	Reference **reasonReference;
	U64 goal_count;
	Reference **goal;
	fhir_code status;
	CodeableConcept *statusReason;
	fhir_boolean doNotPerform;
	enum class SchedType {
		Unknown,
		Timing,
		Period,
		fhir_string
	};
	SchedType scheduled_type_type;

	union {
		Timing* scheduledTiming;
		Period* scheduledPeriod;
		fhir_string scheduledString;
	} scheduled;

	Reference *location;
	U64 performer_count;
	Reference **performer;
	enum class ProduType {
		Unknown,
		CodeableConcept,
		Reference
	};
	ProduType product_type_type;

	union {
		CodeableConcept* productCodeableConcept;
		Reference* productReference;
	} product;

	Quantity *dailyAmount;
	Quantity *quantity;
	fhir_string description;
};
class CareTeam {
public: 
	ResourceType resourceType;
	fhir_string id;
	Meta *meta;
	fhir_uri implicitRules;
	fhir_code language;
	Narrative *text;
	U64 contained_count;
	Resource **contained;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	U64 identifier_count;
	Identifier **identifier;
	fhir_code status;
	U64 category_count;
	CodeableConcept **category;
	fhir_string name;
	Reference *subject;
	Reference *encounter;
	Period *period;
	U64 participant_count;
	CareTeam_Participant **participant;
	U64 reasonCode_count;
	CodeableConcept **reasonCode;
	U64 reasonReference_count;
	Reference **reasonReference;
	U64 managingOrganization_count;
	Reference **managingOrganization;
	U64 telecom_count;
	ContactPoint **telecom;
	U64 note_count;
	Annotation **note;
};
class CareTeam_Participant {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	U64 role_count;
	CodeableConcept **role;
	Reference *member;
	Reference *onBehalfOf;
	Period *period;
};
class CatalogEntry {
public: 
	ResourceType resourceType;
	fhir_string id;
	Meta *meta;
	fhir_uri implicitRules;
	fhir_code language;
	Narrative *text;
	U64 contained_count;
	Resource **contained;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	U64 identifier_count;
	Identifier **identifier;
	CodeableConcept *type;
	fhir_boolean orderable;
	Reference *referencedItem;
	U64 additionalIdentifier_count;
	Identifier **additionalIdentifier;
	U64 classification_count;
	CodeableConcept **classification;
	fhir_code status;
	Period *validityPeriod;
	fhir_dateTime validTo;
	fhir_dateTime lastUpdated;
	U64 additionalCharacteristic_count;
	CodeableConcept **additionalCharacteristic;
	U64 additionalClassification_count;
	CodeableConcept **additionalClassification;
	U64 relatedEntry_count;
	CatalogEntry_RelatedEntry **relatedEntry;
};
class CatalogEntry_RelatedEntry {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	fhir_code relationtype;
	Reference *item;
};
class ChargeItem {
public: 
	ResourceType resourceType;
	fhir_string id;
	Meta *meta;
	fhir_uri implicitRules;
	fhir_code language;
	Narrative *text;
	U64 contained_count;
	Resource **contained;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	U64 identifier_count;
	Identifier **identifier;
	U64 definitionUri_count;
	fhir_uri *definitionUri;
	U64 definitionCanonical_count;
	fhir_canonical *definitionCanonical;
	fhir_code status;
	U64 partOf_count;
	Reference **partOf;
	CodeableConcept *code;
	Reference *subject;
	Reference *context;
	enum class OccurType {
		Unknown,
		fhir_dateTime,
		Period,
		Timing
	};
	OccurType occurrence_type_type;

	union {
		fhir_dateTime occurrenceDateTime;
		Period* occurrencePeriod;
		Timing* occurrenceTiming;
	} occurrence;

	U64 performer_count;
	ChargeItem_Performer **performer;
	Reference *performingOrganization;
	Reference *requestingOrganization;
	Reference *costCenter;
	Quantity *quantity;
	U64 bodysite_count;
	CodeableConcept **bodysite;
	fhir_decimal factorOverride;
	Money *priceOverride;
	fhir_string overrideReason;
	Reference *enterer;
	fhir_dateTime enteredDate;
	U64 reason_count;
	CodeableConcept **reason;
	U64 service_count;
	Reference **service;
	enum class ProduType {
		Unknown,
		Reference,
		CodeableConcept
	};
	ProduType product_type_type;

	union {
		Reference* productReference;
		CodeableConcept* productCodeableConcept;
	} product;

	U64 account_count;
	Reference **account;
	U64 note_count;
	Annotation **note;
	U64 supportingInformation_count;
	Reference **supportingInformation;
};
class ChargeItem_Performer {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	CodeableConcept *function_;
	Reference *actor;
};
class ChargeItemDefinition {
public: 
	ResourceType resourceType;
	fhir_string id;
	Meta *meta;
	fhir_uri implicitRules;
	fhir_code language;
	Narrative *text;
	U64 contained_count;
	Resource **contained;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	fhir_uri url;
	U64 identifier_count;
	Identifier **identifier;
	fhir_string version;
	fhir_string title;
	U64 derivedFromUri_count;
	fhir_uri *derivedFromUri;
	U64 partOf_count;
	fhir_canonical *partOf;
	U64 replaces_count;
	fhir_canonical *replaces;
	fhir_code status;
	fhir_boolean experimental;
	fhir_dateTime date;
	fhir_string publisher;
	U64 contact_count;
	ContactDetail **contact;
	fhir_markdown description;
	U64 useContext_count;
	UsageContext **useContext;
	U64 jurisdiction_count;
	CodeableConcept **jurisdiction;
	fhir_markdown copyright;
	fhir_date approvalDate;
	fhir_date lastReviewDate;
	Period *effectivePeriod;
	CodeableConcept *code;
	U64 instance_count;
	Reference **instance;
	U64 applicability_count;
	ChargeItemDefinition_Applicability **applicability;
	U64 propertyGroup_count;
	ChargeItemDefinition_PropertyGroup **propertyGroup;
};
class ChargeItemDefinition_Applicability {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	fhir_string description;
	fhir_string language;
	fhir_string expression;
};
class ChargeItemDefinition_PropertyGroup {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	U64 applicability_count;
	ChargeItemDefinition_Applicability **applicability;
	U64 priceComponent_count;
	ChargeItemDefinition_PropertyGroup_PriceComponent **priceComponent;
};
class ChargeItemDefinition_PropertyGroup_PriceComponent {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	fhir_code type;
	CodeableConcept *code;
	fhir_decimal factor;
	Money *amount;
};
class Claim {
public: 
	ResourceType resourceType;
	fhir_string id;
	Meta *meta;
	fhir_uri implicitRules;
	fhir_code language;
	Narrative *text;
	U64 contained_count;
	Resource **contained;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	U64 identifier_count;
	Identifier **identifier;
	fhir_code status;
	CodeableConcept *type;
	CodeableConcept *subType;
	fhir_code use;
	Reference *patient;
	Period *billablePeriod;
	fhir_dateTime created;
	Reference *enterer;
	Reference *insurer;
	Reference *provider;
	CodeableConcept *priority;
	CodeableConcept *fundsReserve;
	U64 related_count;
	Claim_Related **related;
	Reference *prescription;
	Reference *originalPrescription;
	Claim_Payee *payee;
	Reference *referral;
	Reference *facility;
	U64 careTeam_count;
	Claim_CareTeam **careTeam;
	U64 supportingInfo_count;
	Claim_SupportingInfo **supportingInfo;
	U64 diagnosis_count;
	Claim_Diagnosis **diagnosis;
	U64 procedure_count;
	Claim_Procedure **procedure;
	U64 insurance_count;
	Claim_Insurance **insurance;
	Claim_Accident *accident;
	U64 item_count;
	Claim_Item **item;
	Money *total;
};
class Claim_Related {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	Reference *claim;
	CodeableConcept *relationship;
	Identifier *reference;
};
class Claim_Payee {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	CodeableConcept *type;
	Reference *party;
};
class Claim_CareTeam {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	fhir_positiveInt sequence;
	Reference *provider;
	fhir_boolean responsible;
	CodeableConcept *role;
	CodeableConcept *qualification;
};
class Claim_SupportingInfo {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	fhir_positiveInt sequence;
	CodeableConcept *category;
	CodeableConcept *code;
	enum class TiminType {
		Unknown,
		fhir_date,
		Period
	};
	TiminType timing_type_type;

	union {
		fhir_date timingDate;
		Period* timingPeriod;
	} timing;

	enum class ValueType {
		Unknown,
		fhir_boolean,
		fhir_string,
		Quantity,
		Attachment,
		Reference
	};
	ValueType value_type_type;

	union {
		fhir_boolean valueBoolean;
		fhir_string valueString;
		Quantity* valueQuantity;
		Attachment* valueAttachment;
		Reference* valueReference;
	} value;

	CodeableConcept *reason;
};
class Claim_Diagnosis {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	fhir_positiveInt sequence;
	enum class DiagnType {
		Unknown,
		CodeableConcept,
		Reference
	};
	DiagnType diagnosis_type_type;

	union {
		CodeableConcept* diagnosisCodeableConcept;
		Reference* diagnosisReference;
	} diagnosis;

	U64 type_count;
	CodeableConcept **type;
	CodeableConcept *onAdmission;
	CodeableConcept *packageCode;
};
class Claim_Procedure {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	fhir_positiveInt sequence;
	U64 type_count;
	CodeableConcept **type;
	fhir_dateTime date;
	enum class ProceType {
		Unknown,
		CodeableConcept,
		Reference
	};
	ProceType procedure_type_type;

	union {
		CodeableConcept* procedureCodeableConcept;
		Reference* procedureReference;
	} procedure;

	U64 udi_count;
	Reference **udi;
};
class Claim_Insurance {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	fhir_positiveInt sequence;
	fhir_boolean focal;
	Identifier *identifier;
	Reference *coverage;
	fhir_string businessArrangement;
	U64 preAuthRef_count;
	fhir_string *preAuthRef;
	Reference *claimResponse;
};
class Claim_Accident {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	fhir_date date;
	CodeableConcept *type;
	enum class LocatType {
		Unknown,
		Address,
		Reference
	};
	LocatType location_type_type;

	union {
		Address* locationAddress;
		Reference* locationReference;
	} location;

};
class Claim_Item {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	fhir_positiveInt sequence;
	U64 careTeamSequence_count;
	fhir_positiveInt *careTeamSequence;
	U64 diagnosisSequence_count;
	fhir_positiveInt *diagnosisSequence;
	U64 procedureSequence_count;
	fhir_positiveInt *procedureSequence;
	U64 informationSequence_count;
	fhir_positiveInt *informationSequence;
	CodeableConcept *revenue;
	CodeableConcept *category;
	CodeableConcept *productOrService;
	U64 modifier_count;
	CodeableConcept **modifier;
	U64 programCode_count;
	CodeableConcept **programCode;
	enum class ServiType {
		Unknown,
		fhir_date,
		Period
	};
	ServiType serviced_type_type;

	union {
		fhir_date servicedDate;
		Period* servicedPeriod;
	} serviced;

	enum class LocatType {
		Unknown,
		CodeableConcept,
		Address,
		Reference
	};
	LocatType location_type_type;

	union {
		CodeableConcept* locationCodeableConcept;
		Address* locationAddress;
		Reference* locationReference;
	} location;

	Quantity *quantity;
	Money *unitPrice;
	fhir_decimal factor;
	Money *net;
	U64 udi_count;
	Reference **udi;
	CodeableConcept *bodySite;
	U64 subSite_count;
	CodeableConcept **subSite;
	U64 encounter_count;
	Reference **encounter;
	U64 detail_count;
	Claim_Item_Detail **detail;
};
class Claim_Item_Detail {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	fhir_positiveInt sequence;
	CodeableConcept *revenue;
	CodeableConcept *category;
	CodeableConcept *productOrService;
	U64 modifier_count;
	CodeableConcept **modifier;
	U64 programCode_count;
	CodeableConcept **programCode;
	Quantity *quantity;
	Money *unitPrice;
	fhir_decimal factor;
	Money *net;
	U64 udi_count;
	Reference **udi;
	U64 subDetail_count;
	Claim_Item_Detail_SubDetail **subDetail;
};
class Claim_Item_Detail_SubDetail {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	fhir_positiveInt sequence;
	CodeableConcept *revenue;
	CodeableConcept *category;
	CodeableConcept *productOrService;
	U64 modifier_count;
	CodeableConcept **modifier;
	U64 programCode_count;
	CodeableConcept **programCode;
	Quantity *quantity;
	Money *unitPrice;
	fhir_decimal factor;
	Money *net;
	U64 udi_count;
	Reference **udi;
};
class ClaimResponse {
public: 
	ResourceType resourceType;
	fhir_string id;
	Meta *meta;
	fhir_uri implicitRules;
	fhir_code language;
	Narrative *text;
	U64 contained_count;
	Resource **contained;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	U64 identifier_count;
	Identifier **identifier;
	fhir_code status;
	CodeableConcept *type;
	CodeableConcept *subType;
	fhir_code use;
	Reference *patient;
	fhir_dateTime created;
	Reference *insurer;
	Reference *requestor;
	Reference *request;
	fhir_code outcome;
	fhir_string disposition;
	fhir_string preAuthRef;
	Period *preAuthPeriod;
	CodeableConcept *payeeType;
	U64 item_count;
	ClaimResponse_Item **item;
	U64 addItem_count;
	ClaimResponse_AddItem **addItem;
	U64 adjudication_count;
	ClaimResponse_Item_Adjudication **adjudication;
	U64 total_count;
	ClaimResponse_Total **total;
	ClaimResponse_Payment *payment;
	CodeableConcept *fundsReserve;
	CodeableConcept *formCode;
	Attachment *form;
	U64 processNote_count;
	ClaimResponse_ProcessNote **processNote;
	U64 communicationRequest_count;
	Reference **communicationRequest;
	U64 insurance_count;
	ClaimResponse_Insurance **insurance;
	U64 error_count;
	ClaimResponse_Error **error;
};
class ClaimResponse_Item {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	fhir_positiveInt itemSequence;
	U64 noteNumber_count;
	fhir_positiveInt *noteNumber;
	U64 adjudication_count;
	ClaimResponse_Item_Adjudication **adjudication;
	U64 detail_count;
	ClaimResponse_Item_Detail **detail;
};
class ClaimResponse_Item_Adjudication {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	CodeableConcept *category;
	CodeableConcept *reason;
	Money *amount;
	fhir_decimal value;
};
class ClaimResponse_Item_Detail {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	fhir_positiveInt detailSequence;
	U64 noteNumber_count;
	fhir_positiveInt *noteNumber;
	U64 adjudication_count;
	ClaimResponse_Item_Adjudication **adjudication;
	U64 subDetail_count;
	ClaimResponse_Item_Detail_SubDetail **subDetail;
};
class ClaimResponse_Item_Detail_SubDetail {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	fhir_positiveInt subDetailSequence;
	U64 noteNumber_count;
	fhir_positiveInt *noteNumber;
	U64 adjudication_count;
	ClaimResponse_Item_Adjudication **adjudication;
};
class ClaimResponse_AddItem {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	U64 itemSequence_count;
	fhir_positiveInt *itemSequence;
	U64 detailSequence_count;
	fhir_positiveInt *detailSequence;
	U64 subdetailSequence_count;
	fhir_positiveInt *subdetailSequence;
	U64 provider_count;
	Reference **provider;
	CodeableConcept *productOrService;
	U64 modifier_count;
	CodeableConcept **modifier;
	U64 programCode_count;
	CodeableConcept **programCode;
	enum class ServiType {
		Unknown,
		fhir_date,
		Period
	};
	ServiType serviced_type_type;

	union {
		fhir_date servicedDate;
		Period* servicedPeriod;
	} serviced;

	enum class LocatType {
		Unknown,
		CodeableConcept,
		Address,
		Reference
	};
	LocatType location_type_type;

	union {
		CodeableConcept* locationCodeableConcept;
		Address* locationAddress;
		Reference* locationReference;
	} location;

	Quantity *quantity;
	Money *unitPrice;
	fhir_decimal factor;
	Money *net;
	CodeableConcept *bodySite;
	U64 subSite_count;
	CodeableConcept **subSite;
	U64 noteNumber_count;
	fhir_positiveInt *noteNumber;
	U64 adjudication_count;
	ClaimResponse_Item_Adjudication **adjudication;
	U64 detail_count;
	ClaimResponse_AddItem_Detail **detail;
};
class ClaimResponse_AddItem_Detail {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	CodeableConcept *productOrService;
	U64 modifier_count;
	CodeableConcept **modifier;
	Quantity *quantity;
	Money *unitPrice;
	fhir_decimal factor;
	Money *net;
	U64 noteNumber_count;
	fhir_positiveInt *noteNumber;
	U64 adjudication_count;
	ClaimResponse_Item_Adjudication **adjudication;
	U64 subDetail_count;
	ClaimResponse_AddItem_Detail_SubDetail **subDetail;
};
class ClaimResponse_AddItem_Detail_SubDetail {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	CodeableConcept *productOrService;
	U64 modifier_count;
	CodeableConcept **modifier;
	Quantity *quantity;
	Money *unitPrice;
	fhir_decimal factor;
	Money *net;
	U64 noteNumber_count;
	fhir_positiveInt *noteNumber;
	U64 adjudication_count;
	ClaimResponse_Item_Adjudication **adjudication;
};
class ClaimResponse_Total {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	CodeableConcept *category;
	Money *amount;
};
class ClaimResponse_Payment {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	CodeableConcept *type;
	Money *adjustment;
	CodeableConcept *adjustmentReason;
	fhir_date date;
	Money *amount;
	Identifier *identifier;
};
class ClaimResponse_ProcessNote {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	fhir_positiveInt number;
	fhir_code type;
	fhir_string text;
	CodeableConcept *language;
};
class ClaimResponse_Insurance {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	fhir_positiveInt sequence;
	fhir_boolean focal;
	Reference *coverage;
	fhir_string businessArrangement;
	Reference *claimResponse;
};
class ClaimResponse_Error {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	fhir_positiveInt itemSequence;
	fhir_positiveInt detailSequence;
	fhir_positiveInt subDetailSequence;
	CodeableConcept *code;
};
class ClinicalImpression {
public: 
	ResourceType resourceType;
	fhir_string id;
	Meta *meta;
	fhir_uri implicitRules;
	fhir_code language;
	Narrative *text;
	U64 contained_count;
	Resource **contained;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	U64 identifier_count;
	Identifier **identifier;
	fhir_code status;
	CodeableConcept *statusReason;
	CodeableConcept *code;
	fhir_string description;
	Reference *subject;
	Reference *encounter;
	enum class EffecType {
		Unknown,
		fhir_dateTime,
		Period
	};
	EffecType effective_type_type;

	union {
		fhir_dateTime effectiveDateTime;
		Period* effectivePeriod;
	} effective;

	fhir_dateTime date;
	Reference *assessor;
	Reference *previous;
	U64 problem_count;
	Reference **problem;
	U64 investigation_count;
	ClinicalImpression_Investigation **investigation;
	U64 protocol_count;
	fhir_uri *protocol;
	fhir_string summary;
	U64 finding_count;
	ClinicalImpression_Finding **finding;
	U64 prognosisCodeableConcept_count;
	CodeableConcept **prognosisCodeableConcept;
	U64 prognosisReference_count;
	Reference **prognosisReference;
	U64 supportingInfo_count;
	Reference **supportingInfo;
	U64 note_count;
	Annotation **note;
};
class ClinicalImpression_Investigation {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	CodeableConcept *code;
	U64 item_count;
	Reference **item;
};
class ClinicalImpression_Finding {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	CodeableConcept *itemCodeableConcept;
	Reference *itemReference;
	fhir_string basis;
};
class CodeSystem {
public: 
	ResourceType resourceType;
	fhir_string id;
	Meta *meta;
	fhir_uri implicitRules;
	fhir_code language;
	Narrative *text;
	U64 contained_count;
	Resource **contained;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	fhir_uri url;
	U64 identifier_count;
	Identifier **identifier;
	fhir_string version;
	fhir_string name;
	fhir_string title;
	fhir_code status;
	fhir_boolean experimental;
	fhir_dateTime date;
	fhir_string publisher;
	U64 contact_count;
	ContactDetail **contact;
	fhir_markdown description;
	U64 useContext_count;
	UsageContext **useContext;
	U64 jurisdiction_count;
	CodeableConcept **jurisdiction;
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
	U64 filter_count;
	CodeSystem_Filter **filter;
	U64 property_count;
	CodeSystem_Property **property;
	U64 concept_count;
	CodeSystem_Concept **concept;
};
class CodeSystem_Filter {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	fhir_code code;
	fhir_string description;
	U64 operator__count;
	fhir_code *operator_;
	fhir_string value;
};
class CodeSystem_Property {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	fhir_code code;
	fhir_uri uri;
	fhir_string description;
	fhir_code type;
};
class CodeSystem_Concept {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	fhir_code code;
	fhir_string display;
	fhir_string definition;
	U64 designation_count;
	CodeSystem_Concept_Designation **designation;
	U64 property_count;
	CodeSystem_Concept_Property **property;
	U64 concept_count;
	CodeSystem_Concept **concept;
};
class CodeSystem_Concept_Designation {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	fhir_code language;
	Coding *use;
	fhir_string value;
};
class CodeSystem_Concept_Property {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	fhir_code code;
	enum class ValueType {
		Unknown,
		fhir_code,
		Coding,
		fhir_string,
		Integer,
		fhir_boolean,
		fhir_dateTime,
		fhir_decimal
	};
	ValueType value_type_type;

	union {
		fhir_code valueCode;
		Coding* valueCoding;
		fhir_string valueString;
		Integer* valueInteger;
		fhir_boolean valueBoolean;
		fhir_dateTime valueDateTime;
		fhir_decimal valueDecimal;
	} value;

};
class Communication {
public: 
	ResourceType resourceType;
	fhir_string id;
	Meta *meta;
	fhir_uri implicitRules;
	fhir_code language;
	Narrative *text;
	U64 contained_count;
	Resource **contained;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	U64 identifier_count;
	Identifier **identifier;
	U64 instantiatesCanonical_count;
	fhir_canonical *instantiatesCanonical;
	U64 instantiatesUri_count;
	fhir_uri *instantiatesUri;
	U64 basedOn_count;
	Reference **basedOn;
	U64 partOf_count;
	Reference **partOf;
	U64 inResponseTo_count;
	Reference **inResponseTo;
	fhir_code status;
	CodeableConcept *statusReason;
	U64 category_count;
	CodeableConcept **category;
	fhir_code priority;
	U64 medium_count;
	CodeableConcept **medium;
	Reference *subject;
	CodeableConcept *topic;
	U64 about_count;
	Reference **about;
	Reference *encounter;
	fhir_dateTime sent;
	fhir_dateTime received;
	U64 recipient_count;
	Reference **recipient;
	Reference *sender;
	U64 reasonCode_count;
	CodeableConcept **reasonCode;
	U64 reasonReference_count;
	Reference **reasonReference;
	U64 payload_count;
	Communication_Payload **payload;
	U64 note_count;
	Annotation **note;
};
class Communication_Payload {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	enum class ConteType {
		Unknown,
		fhir_string,
		Attachment,
		Reference
	};
	ConteType content_type_type;

	union {
		fhir_string contentString;
		Attachment* contentAttachment;
		Reference* contentReference;
	} content;

};
class CommunicationRequest {
public: 
	ResourceType resourceType;
	fhir_string id;
	Meta *meta;
	fhir_uri implicitRules;
	fhir_code language;
	Narrative *text;
	U64 contained_count;
	Resource **contained;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	U64 identifier_count;
	Identifier **identifier;
	U64 basedOn_count;
	Reference **basedOn;
	U64 replaces_count;
	Reference **replaces;
	Identifier *groupIdentifier;
	fhir_code status;
	CodeableConcept *statusReason;
	U64 category_count;
	CodeableConcept **category;
	fhir_code priority;
	fhir_boolean doNotPerform;
	U64 medium_count;
	CodeableConcept **medium;
	Reference *subject;
	U64 about_count;
	Reference **about;
	Reference *encounter;
	U64 payload_count;
	CommunicationRequest_Payload **payload;
	enum class OccurType {
		Unknown,
		fhir_dateTime,
		Period
	};
	OccurType occurrence_type_type;

	union {
		fhir_dateTime occurrenceDateTime;
		Period* occurrencePeriod;
	} occurrence;

	fhir_dateTime authoredOn;
	Reference *requester;
	U64 recipient_count;
	Reference **recipient;
	Reference *sender;
	U64 reasonCode_count;
	CodeableConcept **reasonCode;
	U64 reasonReference_count;
	Reference **reasonReference;
	U64 note_count;
	Annotation **note;
};
class CommunicationRequest_Payload {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	enum class ConteType {
		Unknown,
		fhir_string,
		Attachment,
		Reference
	};
	ConteType content_type_type;

	union {
		fhir_string contentString;
		Attachment* contentAttachment;
		Reference* contentReference;
	} content;

};
class CompartmentDefinition {
public: 
	ResourceType resourceType;
	fhir_string id;
	Meta *meta;
	fhir_uri implicitRules;
	fhir_code language;
	Narrative *text;
	U64 contained_count;
	Resource **contained;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	fhir_uri url;
	fhir_string version;
	fhir_string name;
	fhir_code status;
	fhir_boolean experimental;
	fhir_dateTime date;
	fhir_string publisher;
	U64 contact_count;
	ContactDetail **contact;
	fhir_markdown description;
	U64 useContext_count;
	UsageContext **useContext;
	fhir_markdown purpose;
	fhir_code code;
	fhir_boolean search;
	U64 resource_count;
	CompartmentDefinition_Resource **resource;
};
class CompartmentDefinition_Resource {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	fhir_code code;
	U64 param_count;
	fhir_string *param;
	fhir_string documentation;
};
class Composition {
public: 
	ResourceType resourceType;
	fhir_string id;
	Meta *meta;
	fhir_uri implicitRules;
	fhir_code language;
	Narrative *text;
	U64 contained_count;
	Resource **contained;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	Identifier *identifier;
	fhir_code status;
	CodeableConcept *type;
	U64 category_count;
	CodeableConcept **category;
	Reference *subject;
	Reference *encounter;
	fhir_dateTime date;
	U64 author_count;
	Reference **author;
	fhir_string title;
	fhir_code confidentiality;
	U64 attester_count;
	Composition_Attester **attester;
	Reference *custodian;
	U64 relatesTo_count;
	Composition_RelatesTo **relatesTo;
	U64 event_count;
	Composition_Event **event;
	U64 section_count;
	Composition_Section **section;
};
class Composition_Attester {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	fhir_code mode;
	fhir_dateTime time;
	Reference *party;
};
class Composition_RelatesTo {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	fhir_code code;
	enum class TargeType {
		Unknown,
		Identifier,
		Reference
	};
	TargeType target_type_type;

	union {
		Identifier* targetIdentifier;
		Reference* targetReference;
	} target;

};
class Composition_Event {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	U64 code_count;
	CodeableConcept **code;
	Period *period;
	U64 detail_count;
	Reference **detail;
};
class Composition_Section {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	fhir_string title;
	CodeableConcept *code;
	U64 author_count;
	Reference **author;
	Reference *focus;
	Narrative *text;
	fhir_code mode;
	CodeableConcept *orderedBy;
	U64 entry_count;
	Reference **entry;
	CodeableConcept *emptyReason;
	U64 section_count;
	Composition_Section **section;
};
class ConceptMap {
public: 
	ResourceType resourceType;
	fhir_string id;
	Meta *meta;
	fhir_uri implicitRules;
	fhir_code language;
	Narrative *text;
	U64 contained_count;
	Resource **contained;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	fhir_uri url;
	Identifier *identifier;
	fhir_string version;
	fhir_string name;
	fhir_string title;
	fhir_code status;
	fhir_boolean experimental;
	fhir_dateTime date;
	fhir_string publisher;
	U64 contact_count;
	ContactDetail **contact;
	fhir_markdown description;
	U64 useContext_count;
	UsageContext **useContext;
	U64 jurisdiction_count;
	CodeableConcept **jurisdiction;
	fhir_markdown purpose;
	fhir_markdown copyright;
	enum class SourcType {
		Unknown,
		fhir_uri,
		fhir_canonical
	};
	SourcType source_type_type;

	union {
		fhir_uri sourceUri;
		fhir_canonical sourceCanonical;
	} source;

	enum class TargeType {
		Unknown,
		fhir_uri,
		fhir_canonical
	};
	TargeType target_type_type;

	union {
		fhir_uri targetUri;
		fhir_canonical targetCanonical;
	} target;

	U64 group_count;
	ConceptMap_Group **group;
};
class ConceptMap_Group {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	fhir_uri source;
	fhir_string sourceVersion;
	fhir_uri target;
	fhir_string targetVersion;
	U64 element_count;
	ConceptMap_Group_Element **element;
	ConceptMap_Group_Unmapped *unmapped;
};
class ConceptMap_Group_Element {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	fhir_code code;
	fhir_string display;
	U64 target_count;
	ConceptMap_Group_Element_Target **target;
};
class ConceptMap_Group_Element_Target {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	fhir_code code;
	fhir_string display;
	fhir_code equivalence;
	fhir_string comment;
	U64 dependsOn_count;
	ConceptMap_Group_Element_Target_DependsOn **dependsOn;
	U64 product_count;
	ConceptMap_Group_Element_Target_DependsOn **product;
};
class ConceptMap_Group_Element_Target_DependsOn {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	fhir_uri property;
	fhir_canonical system;
	fhir_string value;
	fhir_string display;
};
class ConceptMap_Group_Unmapped {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	fhir_code mode;
	fhir_code code;
	fhir_string display;
	fhir_canonical url;
};
class Condition {
public: 
	ResourceType resourceType;
	fhir_string id;
	Meta *meta;
	fhir_uri implicitRules;
	fhir_code language;
	Narrative *text;
	U64 contained_count;
	Resource **contained;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	U64 identifier_count;
	Identifier **identifier;
	CodeableConcept *clinicalStatus;
	CodeableConcept *verificationStatus;
	U64 category_count;
	CodeableConcept **category;
	CodeableConcept *severity;
	CodeableConcept *code;
	U64 bodySite_count;
	CodeableConcept **bodySite;
	Reference *subject;
	Reference *encounter;
	enum class OnsetType {
		Unknown,
		fhir_dateTime,
		Age,
		Period,
		Range,
		fhir_string
	};
	OnsetType onset_type_type;

	union {
		fhir_dateTime onsetDateTime;
		Age* onsetAge;
		Period* onsetPeriod;
		Range* onsetRange;
		fhir_string onsetString;
	} onset;

	enum class AbateType {
		Unknown,
		fhir_dateTime,
		Age,
		Period,
		Range,
		fhir_string
	};
	AbateType abatement_type_type;

	union {
		fhir_dateTime abatementDateTime;
		Age* abatementAge;
		Period* abatementPeriod;
		Range* abatementRange;
		fhir_string abatementString;
	} abatement;

	fhir_dateTime recordedDate;
	Reference *recorder;
	Reference *asserter;
	U64 stage_count;
	Condition_Stage **stage;
	U64 evidence_count;
	Condition_Evidence **evidence;
	U64 note_count;
	Annotation **note;
};
class Condition_Stage {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	CodeableConcept *summary;
	U64 assessment_count;
	Reference **assessment;
	CodeableConcept *type;
};
class Condition_Evidence {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	U64 code_count;
	CodeableConcept **code;
	U64 detail_count;
	Reference **detail;
};
class Consent {
public: 
	ResourceType resourceType;
	fhir_string id;
	Meta *meta;
	fhir_uri implicitRules;
	fhir_code language;
	Narrative *text;
	U64 contained_count;
	Resource **contained;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	U64 identifier_count;
	Identifier **identifier;
	fhir_code status;
	CodeableConcept *scope;
	U64 category_count;
	CodeableConcept **category;
	Reference *patient;
	fhir_dateTime dateTime;
	U64 performer_count;
	Reference **performer;
	U64 organization_count;
	Reference **organization;
	enum class SourcType {
		Unknown,
		Attachment,
		Reference
	};
	SourcType source_type_type;

	union {
		Attachment* sourceAttachment;
		Reference* sourceReference;
	} source;

	U64 policy_count;
	Consent_Policy **policy;
	CodeableConcept *policyRule;
	U64 verification_count;
	Consent_Verification **verification;
	Consent_Provision *provision;
};
class Consent_Policy {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	fhir_uri authority;
	fhir_uri uri;
};
class Consent_Verification {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	fhir_boolean verified;
	Reference *verifiedWith;
	fhir_dateTime verificationDate;
};
class Consent_Provision {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	fhir_code type;
	Period *period;
	U64 actor_count;
	Consent_Provision_Actor **actor;
	U64 action_count;
	CodeableConcept **action;
	U64 securityLabel_count;
	Coding **securityLabel;
	U64 purpose_count;
	Coding **purpose;
	U64 class__count;
	Coding **class_;
	U64 code_count;
	CodeableConcept **code;
	Period *dataPeriod;
	U64 data_count;
	Consent_Provision_Data **data;
	U64 provision_count;
	Consent_Provision **provision;
};
class Consent_Provision_Actor {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	CodeableConcept *role;
	Reference *reference;
};
class Consent_Provision_Data {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	fhir_code meaning;
	Reference *reference;
};
class Contract {
public: 
	ResourceType resourceType;
	fhir_string id;
	Meta *meta;
	fhir_uri implicitRules;
	fhir_code language;
	Narrative *text;
	U64 contained_count;
	Resource **contained;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	U64 identifier_count;
	Identifier **identifier;
	fhir_uri url;
	fhir_string version;
	fhir_code status;
	CodeableConcept *legalState;
	Reference *instantiatesCanonical;
	fhir_uri instantiatesUri;
	CodeableConcept *contentDerivative;
	fhir_dateTime issued;
	Period *applies;
	CodeableConcept *expirationType;
	U64 subject_count;
	Reference **subject;
	U64 authority_count;
	Reference **authority;
	U64 domain_count;
	Reference **domain;
	U64 site_count;
	Reference **site;
	fhir_string name;
	fhir_string title;
	fhir_string subtitle;
	U64 alias_count;
	fhir_string *alias;
	Reference *author;
	CodeableConcept *scope;
	enum class TopicType {
		Unknown,
		CodeableConcept,
		Reference
	};
	TopicType topic_type_type;

	union {
		CodeableConcept* topicCodeableConcept;
		Reference* topicReference;
	} topic;

	CodeableConcept *type;
	U64 subType_count;
	CodeableConcept **subType;
	Contract_ContentDefinition *contentDefinition;
	U64 term_count;
	Contract_Term **term;
	U64 supportingInfo_count;
	Reference **supportingInfo;
	U64 relevantHistory_count;
	Reference **relevantHistory;
	U64 signer_count;
	Contract_Signer **signer;
	U64 friendly_count;
	Contract_Friendly **friendly;
	U64 legal_count;
	Contract_Legal **legal;
	U64 rule_count;
	Contract_Rule **rule;
	enum class LegalType {
		Unknown,
		Attachment,
		Reference
	};
	LegalType legallyBinding_type_type;

	union {
		Attachment* legallyBindingAttachment;
		Reference* legallyBindingReference;
	} legallyBinding;

};
class Contract_ContentDefinition {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	CodeableConcept *type;
	CodeableConcept *subType;
	Reference *publisher;
	fhir_dateTime publicationDate;
	fhir_code publicationStatus;
	fhir_markdown copyright;
};
class Contract_Term {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	Identifier *identifier;
	fhir_dateTime issued;
	Period *applies;
	enum class TopicType {
		Unknown,
		CodeableConcept,
		Reference
	};
	TopicType topic_type_type;

	union {
		CodeableConcept* topicCodeableConcept;
		Reference* topicReference;
	} topic;

	CodeableConcept *type;
	CodeableConcept *subType;
	fhir_string text;
	U64 securityLabel_count;
	Contract_Term_SecurityLabel **securityLabel;
	Contract_Term_Offer *offer;
	U64 asset_count;
	Contract_Term_Asset **asset;
	U64 action_count;
	Contract_Term_Action **action;
	U64 group_count;
	Contract_Term **group;
};
class Contract_Term_SecurityLabel {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	U64 number_count;
	fhir_unsignedInt *number;
	Coding *classification;
	U64 category_count;
	Coding **category;
	U64 control_count;
	Coding **control;
};
class Contract_Term_Offer {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	U64 identifier_count;
	Identifier **identifier;
	U64 party_count;
	Contract_Term_Offer_Party **party;
	Reference *topic;
	CodeableConcept *type;
	CodeableConcept *decision;
	U64 decisionMode_count;
	CodeableConcept **decisionMode;
	U64 answer_count;
	Contract_Term_Offer_Answer **answer;
	fhir_string text;
	U64 linkId_count;
	fhir_string *linkId;
	U64 securityLabelNumber_count;
	fhir_unsignedInt *securityLabelNumber;
};
class Contract_Term_Offer_Party {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	U64 reference_count;
	Reference **reference;
	CodeableConcept *role;
};
class Contract_Term_Offer_Answer {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	enum class ValueType {
		Unknown,
		fhir_boolean,
		fhir_decimal,
		Integer,
		fhir_date,
		fhir_dateTime,
		fhir_time,
		fhir_string,
		fhir_uri,
		Attachment,
		Coding,
		Quantity,
		Reference
	};
	ValueType value_type_type;

	union {
		fhir_boolean valueBoolean;
		fhir_decimal valueDecimal;
		Integer* valueInteger;
		fhir_date valueDate;
		fhir_dateTime valueDateTime;
		fhir_time valueTime;
		fhir_string valueString;
		fhir_uri valueUri;
		Attachment* valueAttachment;
		Coding* valueCoding;
		Quantity* valueQuantity;
		Reference* valueReference;
	} value;

};
class Contract_Term_Asset {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	CodeableConcept *scope;
	U64 type_count;
	CodeableConcept **type;
	U64 typeReference_count;
	Reference **typeReference;
	U64 subtype_count;
	CodeableConcept **subtype;
	Coding *relationship;
	U64 context_count;
	Contract_Term_Asset_Context **context;
	fhir_string condition;
	U64 periodType_count;
	CodeableConcept **periodType;
	U64 period_count;
	Period **period;
	U64 usePeriod_count;
	Period **usePeriod;
	fhir_string text;
	U64 linkId_count;
	fhir_string *linkId;
	U64 answer_count;
	Contract_Term_Offer_Answer **answer;
	U64 securityLabelNumber_count;
	fhir_unsignedInt *securityLabelNumber;
	U64 valuedItem_count;
	Contract_Term_Asset_ValuedItem **valuedItem;
};
class Contract_Term_Asset_Context {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	Reference *reference;
	U64 code_count;
	CodeableConcept **code;
	fhir_string text;
};
class Contract_Term_Asset_ValuedItem {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	enum class EntitType {
		Unknown,
		CodeableConcept,
		Reference
	};
	EntitType entity_type_type;

	union {
		CodeableConcept* entityCodeableConcept;
		Reference* entityReference;
	} entity;

	Identifier *identifier;
	fhir_dateTime effectiveTime;
	Quantity *quantity;
	Money *unitPrice;
	fhir_decimal factor;
	fhir_decimal points;
	Money *net;
	fhir_string payment;
	fhir_dateTime paymentDate;
	Reference *responsible;
	Reference *recipient;
	U64 linkId_count;
	fhir_string *linkId;
	U64 securityLabelNumber_count;
	fhir_unsignedInt *securityLabelNumber;
};
class Contract_Term_Action {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	fhir_boolean doNotPerform;
	CodeableConcept *type;
	U64 subject_count;
	Contract_Term_Action_Subject **subject;
	CodeableConcept *intent;
	U64 linkId_count;
	fhir_string *linkId;
	CodeableConcept *status;
	Reference *context;
	U64 contextLinkId_count;
	fhir_string *contextLinkId;
	enum class OccurType {
		Unknown,
		fhir_dateTime,
		Period,
		Timing
	};
	OccurType occurrence_type_type;

	union {
		fhir_dateTime occurrenceDateTime;
		Period* occurrencePeriod;
		Timing* occurrenceTiming;
	} occurrence;

	U64 requester_count;
	Reference **requester;
	U64 requesterLinkId_count;
	fhir_string *requesterLinkId;
	U64 performerType_count;
	CodeableConcept **performerType;
	CodeableConcept *performerRole;
	Reference *performer;
	U64 performerLinkId_count;
	fhir_string *performerLinkId;
	U64 reasonCode_count;
	CodeableConcept **reasonCode;
	U64 reasonReference_count;
	Reference **reasonReference;
	U64 reason_count;
	fhir_string *reason;
	U64 reasonLinkId_count;
	fhir_string *reasonLinkId;
	U64 note_count;
	Annotation **note;
	U64 securityLabelNumber_count;
	fhir_unsignedInt *securityLabelNumber;
};
class Contract_Term_Action_Subject {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	U64 reference_count;
	Reference **reference;
	CodeableConcept *role;
};
class Contract_Signer {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	Coding *type;
	Reference *party;
	U64 signature_count;
	Signature **signature;
};
class Contract_Friendly {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	enum class ConteType {
		Unknown,
		Attachment,
		Reference
	};
	ConteType content_type_type;

	union {
		Attachment* contentAttachment;
		Reference* contentReference;
	} content;

};
class Contract_Legal {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	enum class ConteType {
		Unknown,
		Attachment,
		Reference
	};
	ConteType content_type_type;

	union {
		Attachment* contentAttachment;
		Reference* contentReference;
	} content;

};
class Contract_Rule {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	enum class ConteType {
		Unknown,
		Attachment,
		Reference
	};
	ConteType content_type_type;

	union {
		Attachment* contentAttachment;
		Reference* contentReference;
	} content;

};
class Coverage {
public: 
	ResourceType resourceType;
	fhir_string id;
	Meta *meta;
	fhir_uri implicitRules;
	fhir_code language;
	Narrative *text;
	U64 contained_count;
	Resource **contained;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	U64 identifier_count;
	Identifier **identifier;
	fhir_code status;
	CodeableConcept *type;
	Reference *policyHolder;
	Reference *subscriber;
	fhir_string subscriberId;
	Reference *beneficiary;
	fhir_string dependent;
	CodeableConcept *relationship;
	Period *period;
	U64 payor_count;
	Reference **payor;
	U64 class__count;
	Coverage_Class **class_;
	fhir_positiveInt order;
	fhir_string network;
	U64 costToBeneficiary_count;
	Coverage_CostToBeneficiary **costToBeneficiary;
	fhir_boolean subrogation;
	U64 contract_count;
	Reference **contract;
};
class Coverage_Class {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	CodeableConcept *type;
	fhir_string value;
	fhir_string name;
};
class Coverage_CostToBeneficiary {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	CodeableConcept *type;
	enum class ValueType {
		Unknown,
		Quantity,
		Money
	};
	ValueType value_type_type;

	union {
		Quantity* valueQuantity;
		Money* valueMoney;
	} value;

	U64 exception_count;
	Coverage_CostToBeneficiary_Exception **exception;
};
class Coverage_CostToBeneficiary_Exception {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	CodeableConcept *type;
	Period *period;
};
class CoverageEligibilityRequest {
public: 
	ResourceType resourceType;
	fhir_string id;
	Meta *meta;
	fhir_uri implicitRules;
	fhir_code language;
	Narrative *text;
	U64 contained_count;
	Resource **contained;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	U64 identifier_count;
	Identifier **identifier;
	fhir_code status;
	CodeableConcept *priority;
	U64 purpose_count;
	fhir_code *purpose;
	Reference *patient;
	enum class ServiType {
		Unknown,
		fhir_date,
		Period
	};
	ServiType serviced_type_type;

	union {
		fhir_date servicedDate;
		Period* servicedPeriod;
	} serviced;

	fhir_dateTime created;
	Reference *enterer;
	Reference *provider;
	Reference *insurer;
	Reference *facility;
	U64 supportingInfo_count;
	CoverageEligibilityRequest_SupportingInfo **supportingInfo;
	U64 insurance_count;
	CoverageEligibilityRequest_Insurance **insurance;
	U64 item_count;
	CoverageEligibilityRequest_Item **item;
};
class CoverageEligibilityRequest_SupportingInfo {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	fhir_positiveInt sequence;
	Reference *information;
	fhir_boolean appliesToAll;
};
class CoverageEligibilityRequest_Insurance {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	fhir_boolean focal;
	Reference *coverage;
	fhir_string businessArrangement;
};
class CoverageEligibilityRequest_Item {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	U64 supportingInfoSequence_count;
	fhir_positiveInt *supportingInfoSequence;
	CodeableConcept *category;
	CodeableConcept *productOrService;
	U64 modifier_count;
	CodeableConcept **modifier;
	Reference *provider;
	Quantity *quantity;
	Money *unitPrice;
	Reference *facility;
	U64 diagnosis_count;
	CoverageEligibilityRequest_Item_Diagnosis **diagnosis;
	U64 detail_count;
	Reference **detail;
};
class CoverageEligibilityRequest_Item_Diagnosis {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	enum class DiagnType {
		Unknown,
		CodeableConcept,
		Reference
	};
	DiagnType diagnosis_type_type;

	union {
		CodeableConcept* diagnosisCodeableConcept;
		Reference* diagnosisReference;
	} diagnosis;

};
class CoverageEligibilityResponse {
public: 
	ResourceType resourceType;
	fhir_string id;
	Meta *meta;
	fhir_uri implicitRules;
	fhir_code language;
	Narrative *text;
	U64 contained_count;
	Resource **contained;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	U64 identifier_count;
	Identifier **identifier;
	fhir_code status;
	U64 purpose_count;
	fhir_code *purpose;
	Reference *patient;
	enum class ServiType {
		Unknown,
		fhir_date,
		Period
	};
	ServiType serviced_type_type;

	union {
		fhir_date servicedDate;
		Period* servicedPeriod;
	} serviced;

	fhir_dateTime created;
	Reference *requestor;
	Reference *request;
	fhir_code outcome;
	fhir_string disposition;
	Reference *insurer;
	U64 insurance_count;
	CoverageEligibilityResponse_Insurance **insurance;
	fhir_string preAuthRef;
	CodeableConcept *form;
	U64 error_count;
	CoverageEligibilityResponse_Error **error;
};
class CoverageEligibilityResponse_Insurance {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	Reference *coverage;
	fhir_boolean inforce;
	Period *benefitPeriod;
	U64 item_count;
	CoverageEligibilityResponse_Insurance_Item **item;
};
class CoverageEligibilityResponse_Insurance_Item {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	CodeableConcept *category;
	CodeableConcept *productOrService;
	U64 modifier_count;
	CodeableConcept **modifier;
	Reference *provider;
	fhir_boolean excluded;
	fhir_string name;
	fhir_string description;
	CodeableConcept *network;
	CodeableConcept *unit;
	CodeableConcept *term;
	U64 benefit_count;
	CoverageEligibilityResponse_Insurance_Item_Benefit **benefit;
	fhir_boolean authorizationRequired;
	U64 authorizationSupporting_count;
	CodeableConcept **authorizationSupporting;
	fhir_uri authorizationUrl;
};
class CoverageEligibilityResponse_Insurance_Item_Benefit {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	CodeableConcept *type;
	enum class AllowType {
		Unknown,
		fhir_unsignedInt,
		fhir_string,
		Money
	};
	AllowType allowed_type_type;

	union {
		fhir_unsignedInt allowedUnsignedInt;
		fhir_string allowedString;
		Money* allowedMoney;
	} allowed;

	enum class Used_Type {
		Unknown,
		fhir_unsignedInt,
		fhir_string,
		Money
	};
	Used_Type used_type_type;

	union {
		fhir_unsignedInt usedUnsignedInt;
		fhir_string usedString;
		Money* usedMoney;
	} used;

};
class CoverageEligibilityResponse_Error {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	CodeableConcept *code;
};
class DetectedIssue {
public: 
	ResourceType resourceType;
	fhir_string id;
	Meta *meta;
	fhir_uri implicitRules;
	fhir_code language;
	Narrative *text;
	U64 contained_count;
	Resource **contained;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	U64 identifier_count;
	Identifier **identifier;
	fhir_code status;
	CodeableConcept *code;
	fhir_code severity;
	Reference *patient;
	enum class IdentType {
		Unknown,
		fhir_dateTime,
		Period
	};
	IdentType identified_type_type;

	union {
		fhir_dateTime identifiedDateTime;
		Period* identifiedPeriod;
	} identified;

	Reference *author;
	U64 implicated_count;
	Reference **implicated;
	U64 evidence_count;
	DetectedIssue_Evidence **evidence;
	fhir_string detail;
	fhir_uri reference;
	U64 mitigation_count;
	DetectedIssue_Mitigation **mitigation;
};
class DetectedIssue_Evidence {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	U64 code_count;
	CodeableConcept **code;
	U64 detail_count;
	Reference **detail;
};
class DetectedIssue_Mitigation {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	CodeableConcept *action;
	fhir_dateTime date;
	Reference *author;
};
class Device {
public: 
	ResourceType resourceType;
	fhir_string id;
	Meta *meta;
	fhir_uri implicitRules;
	fhir_code language;
	Narrative *text;
	U64 contained_count;
	Resource **contained;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	U64 identifier_count;
	Identifier **identifier;
	Reference *definition;
	U64 udiCarrier_count;
	Device_UdiCarrier **udiCarrier;
	fhir_code status;
	U64 statusReason_count;
	CodeableConcept **statusReason;
	fhir_string distinctIdentifier;
	fhir_string manufacturer;
	fhir_dateTime manufactureDate;
	fhir_dateTime expirationDate;
	fhir_string lotNumber;
	fhir_string serialNumber;
	U64 deviceName_count;
	Device_DeviceName **deviceName;
	fhir_string modelNumber;
	fhir_string partNumber;
	CodeableConcept *type;
	U64 specialization_count;
	Device_Specialization **specialization;
	U64 version_count;
	Device_Version **version;
	U64 property_count;
	Device_Property **property;
	Reference *patient;
	Reference *owner;
	U64 contact_count;
	ContactPoint **contact;
	Reference *location;
	fhir_uri url;
	U64 note_count;
	Annotation **note;
	U64 safety_count;
	CodeableConcept **safety;
	Reference *parent;
};
class Device_UdiCarrier {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	fhir_string deviceIdentifier;
	fhir_uri issuer;
	fhir_uri jurisdiction;
	fhir_base64Binary carrierAIDC;
	fhir_string carrierHRF;
	fhir_code entryType;
};
class Device_DeviceName {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	fhir_string name;
	fhir_code type;
};
class Device_Specialization {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	CodeableConcept *systemType;
	fhir_string version;
};
class Device_Version {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	CodeableConcept *type;
	Identifier *component;
	fhir_string value;
};
class Device_Property {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	CodeableConcept *type;
	U64 valueQuantity_count;
	Quantity **valueQuantity;
	U64 valueCode_count;
	CodeableConcept **valueCode;
};
class DeviceDefinition {
public: 
	ResourceType resourceType;
	fhir_string id;
	Meta *meta;
	fhir_uri implicitRules;
	fhir_code language;
	Narrative *text;
	U64 contained_count;
	Resource **contained;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	U64 identifier_count;
	Identifier **identifier;
	U64 udiDeviceIdentifier_count;
	DeviceDefinition_UdiDeviceIdentifier **udiDeviceIdentifier;
	enum class ManufType {
		Unknown,
		fhir_string,
		Reference
	};
	ManufType manufacturer_type_type;

	union {
		fhir_string manufacturerString;
		Reference* manufacturerReference;
	} manufacturer;

	U64 deviceName_count;
	DeviceDefinition_DeviceName **deviceName;
	fhir_string modelNumber;
	CodeableConcept *type;
	U64 specialization_count;
	DeviceDefinition_Specialization **specialization;
	U64 version_count;
	fhir_string *version;
	U64 safety_count;
	CodeableConcept **safety;
	U64 shelfLifeStorage_count;
	ProductShelfLife **shelfLifeStorage;
	ProdCharacteristic *physicalCharacteristics;
	U64 languageCode_count;
	CodeableConcept **languageCode;
	U64 capability_count;
	DeviceDefinition_Capability **capability;
	U64 property_count;
	DeviceDefinition_Property **property;
	Reference *owner;
	U64 contact_count;
	ContactPoint **contact;
	fhir_uri url;
	fhir_uri onlineInformation;
	U64 note_count;
	Annotation **note;
	Quantity *quantity;
	Reference *parentDevice;
	U64 material_count;
	DeviceDefinition_Material **material;
};
class DeviceDefinition_UdiDeviceIdentifier {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	fhir_string deviceIdentifier;
	fhir_uri issuer;
	fhir_uri jurisdiction;
};
class DeviceDefinition_DeviceName {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	fhir_string name;
	fhir_code type;
};
class DeviceDefinition_Specialization {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	fhir_string systemType;
	fhir_string version;
};
class DeviceDefinition_Capability {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	CodeableConcept *type;
	U64 description_count;
	CodeableConcept **description;
};
class DeviceDefinition_Property {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	CodeableConcept *type;
	U64 valueQuantity_count;
	Quantity **valueQuantity;
	U64 valueCode_count;
	CodeableConcept **valueCode;
};
class DeviceDefinition_Material {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	CodeableConcept *substance;
	fhir_boolean alternate;
	fhir_boolean allergenicIndicator;
};
class DeviceMetric {
public: 
	ResourceType resourceType;
	fhir_string id;
	Meta *meta;
	fhir_uri implicitRules;
	fhir_code language;
	Narrative *text;
	U64 contained_count;
	Resource **contained;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	U64 identifier_count;
	Identifier **identifier;
	CodeableConcept *type;
	CodeableConcept *unit;
	Reference *source;
	Reference *parent;
	fhir_code operationalStatus;
	fhir_code color;
	fhir_code category;
	Timing *measurementPeriod;
	U64 calibration_count;
	DeviceMetric_Calibration **calibration;
};
class DeviceMetric_Calibration {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	fhir_code type;
	fhir_code state;
	fhir_instant time;
};
class DeviceRequest {
public: 
	ResourceType resourceType;
	fhir_string id;
	Meta *meta;
	fhir_uri implicitRules;
	fhir_code language;
	Narrative *text;
	U64 contained_count;
	Resource **contained;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	U64 identifier_count;
	Identifier **identifier;
	U64 instantiatesCanonical_count;
	fhir_canonical *instantiatesCanonical;
	U64 instantiatesUri_count;
	fhir_uri *instantiatesUri;
	U64 basedOn_count;
	Reference **basedOn;
	U64 priorRequest_count;
	Reference **priorRequest;
	Identifier *groupIdentifier;
	fhir_code status;
	fhir_code intent;
	fhir_code priority;
	enum class Code_Type {
		Unknown,
		Reference,
		CodeableConcept
	};
	Code_Type code_type_type;

	union {
		Reference* codeReference;
		CodeableConcept* codeCodeableConcept;
	} code;

	U64 parameter_count;
	DeviceRequest_Parameter **parameter;
	Reference *subject;
	Reference *encounter;
	enum class OccurType {
		Unknown,
		fhir_dateTime,
		Period,
		Timing
	};
	OccurType occurrence_type_type;

	union {
		fhir_dateTime occurrenceDateTime;
		Period* occurrencePeriod;
		Timing* occurrenceTiming;
	} occurrence;

	fhir_dateTime authoredOn;
	Reference *requester;
	CodeableConcept *performerType;
	Reference *performer;
	U64 reasonCode_count;
	CodeableConcept **reasonCode;
	U64 reasonReference_count;
	Reference **reasonReference;
	U64 insurance_count;
	Reference **insurance;
	U64 supportingInfo_count;
	Reference **supportingInfo;
	U64 note_count;
	Annotation **note;
	U64 relevantHistory_count;
	Reference **relevantHistory;
};
class DeviceRequest_Parameter {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	CodeableConcept *code;
	enum class ValueType {
		Unknown,
		CodeableConcept,
		Quantity,
		Range,
		fhir_boolean
	};
	ValueType value_type_type;

	union {
		CodeableConcept* valueCodeableConcept;
		Quantity* valueQuantity;
		Range* valueRange;
		fhir_boolean valueBoolean;
	} value;

};
class DeviceUseStatement {
public: 
	ResourceType resourceType;
	fhir_string id;
	Meta *meta;
	fhir_uri implicitRules;
	fhir_code language;
	Narrative *text;
	U64 contained_count;
	Resource **contained;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	U64 identifier_count;
	Identifier **identifier;
	U64 basedOn_count;
	Reference **basedOn;
	fhir_code status;
	Reference *subject;
	U64 derivedFrom_count;
	Reference **derivedFrom;
	enum class TiminType {
		Unknown,
		Timing,
		Period,
		fhir_dateTime
	};
	TiminType timing_type_type;

	union {
		Timing* timingTiming;
		Period* timingPeriod;
		fhir_dateTime timingDateTime;
	} timing;

	fhir_dateTime recordedOn;
	Reference *source;
	Reference *device;
	U64 reasonCode_count;
	CodeableConcept **reasonCode;
	U64 reasonReference_count;
	Reference **reasonReference;
	CodeableConcept *bodySite;
	U64 note_count;
	Annotation **note;
};
class DiagnosticReport {
public: 
	ResourceType resourceType;
	fhir_string id;
	Meta *meta;
	fhir_uri implicitRules;
	fhir_code language;
	Narrative *text;
	U64 contained_count;
	Resource **contained;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	U64 identifier_count;
	Identifier **identifier;
	U64 basedOn_count;
	Reference **basedOn;
	fhir_code status;
	U64 category_count;
	CodeableConcept **category;
	CodeableConcept *code;
	Reference *subject;
	Reference *encounter;
	enum class EffecType {
		Unknown,
		fhir_dateTime,
		Period
	};
	EffecType effective_type_type;

	union {
		fhir_dateTime effectiveDateTime;
		Period* effectivePeriod;
	} effective;

	fhir_instant issued;
	U64 performer_count;
	Reference **performer;
	U64 resultsInterpreter_count;
	Reference **resultsInterpreter;
	U64 specimen_count;
	Reference **specimen;
	U64 result_count;
	Reference **result;
	U64 imagingStudy_count;
	Reference **imagingStudy;
	U64 media_count;
	DiagnosticReport_Media **media;
	fhir_string conclusion;
	U64 conclusionCode_count;
	CodeableConcept **conclusionCode;
	U64 presentedForm_count;
	Attachment **presentedForm;
};
class DiagnosticReport_Media {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	fhir_string comment;
	Reference *link;
};
class DocumentManifest {
public: 
	ResourceType resourceType;
	fhir_string id;
	Meta *meta;
	fhir_uri implicitRules;
	fhir_code language;
	Narrative *text;
	U64 contained_count;
	Resource **contained;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	Identifier *masterIdentifier;
	U64 identifier_count;
	Identifier **identifier;
	fhir_code status;
	CodeableConcept *type;
	Reference *subject;
	fhir_dateTime created;
	U64 author_count;
	Reference **author;
	U64 recipient_count;
	Reference **recipient;
	fhir_uri source;
	fhir_string description;
	U64 content_count;
	Reference **content;
	U64 related_count;
	DocumentManifest_Related **related;
};
class DocumentManifest_Related {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	Identifier *identifier;
	Reference *ref;
};
class DocumentReference {
public: 
	ResourceType resourceType;
	fhir_string id;
	Meta *meta;
	fhir_uri implicitRules;
	fhir_code language;
	Narrative *text;
	U64 contained_count;
	Resource **contained;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	Identifier *masterIdentifier;
	U64 identifier_count;
	Identifier **identifier;
	fhir_code status;
	fhir_code docStatus;
	CodeableConcept *type;
	U64 category_count;
	CodeableConcept **category;
	Reference *subject;
	fhir_instant date;
	U64 author_count;
	Reference **author;
	Reference *authenticator;
	Reference *custodian;
	U64 relatesTo_count;
	DocumentReference_RelatesTo **relatesTo;
	fhir_string description;
	U64 securityLabel_count;
	CodeableConcept **securityLabel;
	U64 content_count;
	DocumentReference_Content **content;
	DocumentReference_Context *context;
};
class DocumentReference_RelatesTo {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	fhir_code code;
	Reference *target;
};
class DocumentReference_Content {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	Attachment *attachment;
	Coding *format;
};
class DocumentReference_Context {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	U64 encounter_count;
	Reference **encounter;
	U64 event_count;
	CodeableConcept **event;
	Period *period;
	CodeableConcept *facilityType;
	CodeableConcept *practiceSetting;
	Reference *sourcePatientInfo;
	U64 related_count;
	Reference **related;
};
class DomainResource {
public: 
	ResourceType resourceType;
	fhir_string id;
	Meta *meta;
	fhir_uri implicitRules;
	fhir_code language;
	Narrative *text;
	U64 contained_count;
	Resource **contained;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
};
class EffectEvidenceSynthesis {
public: 
	ResourceType resourceType;
	fhir_string id;
	Meta *meta;
	fhir_uri implicitRules;
	fhir_code language;
	Narrative *text;
	U64 contained_count;
	Resource **contained;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	fhir_uri url;
	U64 identifier_count;
	Identifier **identifier;
	fhir_string version;
	fhir_string name;
	fhir_string title;
	fhir_code status;
	fhir_dateTime date;
	fhir_string publisher;
	U64 contact_count;
	ContactDetail **contact;
	fhir_markdown description;
	U64 note_count;
	Annotation **note;
	U64 useContext_count;
	UsageContext **useContext;
	U64 jurisdiction_count;
	CodeableConcept **jurisdiction;
	fhir_markdown copyright;
	fhir_date approvalDate;
	fhir_date lastReviewDate;
	Period *effectivePeriod;
	U64 topic_count;
	CodeableConcept **topic;
	U64 author_count;
	ContactDetail **author;
	U64 editor_count;
	ContactDetail **editor;
	U64 reviewer_count;
	ContactDetail **reviewer;
	U64 endorser_count;
	ContactDetail **endorser;
	U64 relatedArtifact_count;
	RelatedArtifact **relatedArtifact;
	CodeableConcept *synthesisType;
	CodeableConcept *studyType;
	Reference *population;
	Reference *exposure;
	Reference *exposureAlternative;
	Reference *outcome;
	EffectEvidenceSynthesis_SampleSize *sampleSize;
	U64 resultsByExposure_count;
	EffectEvidenceSynthesis_ResultsByExposure **resultsByExposure;
	U64 effectEstimate_count;
	EffectEvidenceSynthesis_EffectEstimate **effectEstimate;
	U64 certainty_count;
	EffectEvidenceSynthesis_Certainty **certainty;
};
class EffectEvidenceSynthesis_SampleSize {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	fhir_string description;
	Integer *numberOfStudies;
	Integer *numberOfParticipants;
};
class EffectEvidenceSynthesis_ResultsByExposure {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	fhir_string description;
	fhir_code exposureState;
	CodeableConcept *variantState;
	Reference *riskEvidenceSynthesis;
};
class EffectEvidenceSynthesis_EffectEstimate {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	fhir_string description;
	CodeableConcept *type;
	CodeableConcept *variantState;
	fhir_decimal value;
	CodeableConcept *unitOfMeasure;
	U64 precisionEstimate_count;
	EffectEvidenceSynthesis_EffectEstimate_PrecisionEstimate **precisionEstimate;
};
class EffectEvidenceSynthesis_EffectEstimate_PrecisionEstimate {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	CodeableConcept *type;
	fhir_decimal level;
	fhir_decimal from;
	fhir_decimal to;
};
class EffectEvidenceSynthesis_Certainty {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	U64 rating_count;
	CodeableConcept **rating;
	U64 note_count;
	Annotation **note;
	U64 certaintySubcomponent_count;
	EffectEvidenceSynthesis_Certainty_CertaintySubcomponent **certaintySubcomponent;
};
class EffectEvidenceSynthesis_Certainty_CertaintySubcomponent {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	CodeableConcept *type;
	U64 rating_count;
	CodeableConcept **rating;
	U64 note_count;
	Annotation **note;
};
class Encounter {
public: 
	ResourceType resourceType;
	fhir_string id;
	Meta *meta;
	fhir_uri implicitRules;
	fhir_code language;
	Narrative *text;
	U64 contained_count;
	Resource **contained;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	U64 identifier_count;
	Identifier **identifier;
	fhir_code status;
	U64 statusHistory_count;
	Encounter_StatusHistory **statusHistory;
	Coding *class_;
	U64 classHistory_count;
	Encounter_ClassHistory **classHistory;
	U64 type_count;
	CodeableConcept **type;
	CodeableConcept *serviceType;
	CodeableConcept *priority;
	Reference *subject;
	U64 episodeOfCare_count;
	Reference **episodeOfCare;
	U64 basedOn_count;
	Reference **basedOn;
	U64 participant_count;
	Encounter_Participant **participant;
	U64 appointment_count;
	Reference **appointment;
	Period *period;
	Duration *length;
	U64 reasonCode_count;
	CodeableConcept **reasonCode;
	U64 reasonReference_count;
	Reference **reasonReference;
	U64 diagnosis_count;
	Encounter_Diagnosis **diagnosis;
	U64 account_count;
	Reference **account;
	Encounter_Hospitalization *hospitalization;
	U64 location_count;
	Encounter_Location **location;
	Reference *serviceProvider;
	Reference *partOf;
};
class Encounter_StatusHistory {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	fhir_code status;
	Period *period;
};
class Encounter_ClassHistory {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	Coding *class_;
	Period *period;
};
class Encounter_Participant {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	U64 type_count;
	CodeableConcept **type;
	Period *period;
	Reference *individual;
};
class Encounter_Diagnosis {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	Reference *condition;
	CodeableConcept *use;
	fhir_positiveInt rank;
};
class Encounter_Hospitalization {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	Identifier *preAdmissionIdentifier;
	Reference *origin;
	CodeableConcept *admitSource;
	CodeableConcept *reAdmission;
	U64 dietPreference_count;
	CodeableConcept **dietPreference;
	U64 specialCourtesy_count;
	CodeableConcept **specialCourtesy;
	U64 specialArrangement_count;
	CodeableConcept **specialArrangement;
	Reference *destination;
	CodeableConcept *dischargeDisposition;
};
class Encounter_Location {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	Reference *location;
	fhir_code status;
	CodeableConcept *physicalType;
	Period *period;
};
class Endpoint {
public: 
	ResourceType resourceType;
	fhir_string id;
	Meta *meta;
	fhir_uri implicitRules;
	fhir_code language;
	Narrative *text;
	U64 contained_count;
	Resource **contained;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	U64 identifier_count;
	Identifier **identifier;
	fhir_code status;
	Coding *connectionType;
	fhir_string name;
	Reference *managingOrganization;
	U64 contact_count;
	ContactPoint **contact;
	Period *period;
	U64 payloadType_count;
	CodeableConcept **payloadType;
	U64 payloadMimeType_count;
	fhir_code *payloadMimeType;
	fhir_url address;
	U64 header_count;
	fhir_string *header;
};
class EnrollmentRequest {
public: 
	ResourceType resourceType;
	fhir_string id;
	Meta *meta;
	fhir_uri implicitRules;
	fhir_code language;
	Narrative *text;
	U64 contained_count;
	Resource **contained;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	U64 identifier_count;
	Identifier **identifier;
	fhir_code status;
	fhir_dateTime created;
	Reference *insurer;
	Reference *provider;
	Reference *candidate;
	Reference *coverage;
};
class EnrollmentResponse {
public: 
	ResourceType resourceType;
	fhir_string id;
	Meta *meta;
	fhir_uri implicitRules;
	fhir_code language;
	Narrative *text;
	U64 contained_count;
	Resource **contained;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	U64 identifier_count;
	Identifier **identifier;
	fhir_code status;
	Reference *request;
	fhir_code outcome;
	fhir_string disposition;
	fhir_dateTime created;
	Reference *organization;
	Reference *requestProvider;
};
class EpisodeOfCare {
public: 
	ResourceType resourceType;
	fhir_string id;
	Meta *meta;
	fhir_uri implicitRules;
	fhir_code language;
	Narrative *text;
	U64 contained_count;
	Resource **contained;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	U64 identifier_count;
	Identifier **identifier;
	fhir_code status;
	U64 statusHistory_count;
	EpisodeOfCare_StatusHistory **statusHistory;
	U64 type_count;
	CodeableConcept **type;
	U64 diagnosis_count;
	EpisodeOfCare_Diagnosis **diagnosis;
	Reference *patient;
	Reference *managingOrganization;
	Period *period;
	U64 referralRequest_count;
	Reference **referralRequest;
	Reference *careManager;
	U64 team_count;
	Reference **team;
	U64 account_count;
	Reference **account;
};
class EpisodeOfCare_StatusHistory {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	fhir_code status;
	Period *period;
};
class EpisodeOfCare_Diagnosis {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	Reference *condition;
	CodeableConcept *role;
	fhir_positiveInt rank;
};
class EventDefinition {
public: 
	ResourceType resourceType;
	fhir_string id;
	Meta *meta;
	fhir_uri implicitRules;
	fhir_code language;
	Narrative *text;
	U64 contained_count;
	Resource **contained;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	fhir_uri url;
	U64 identifier_count;
	Identifier **identifier;
	fhir_string version;
	fhir_string name;
	fhir_string title;
	fhir_string subtitle;
	fhir_code status;
	fhir_boolean experimental;
	enum class SubjeType {
		Unknown,
		CodeableConcept,
		Reference
	};
	SubjeType subject_type_type;

	union {
		CodeableConcept* subjectCodeableConcept;
		Reference* subjectReference;
	} subject;

	fhir_dateTime date;
	fhir_string publisher;
	U64 contact_count;
	ContactDetail **contact;
	fhir_markdown description;
	U64 useContext_count;
	UsageContext **useContext;
	U64 jurisdiction_count;
	CodeableConcept **jurisdiction;
	fhir_markdown purpose;
	fhir_string usage;
	fhir_markdown copyright;
	fhir_date approvalDate;
	fhir_date lastReviewDate;
	Period *effectivePeriod;
	U64 topic_count;
	CodeableConcept **topic;
	U64 author_count;
	ContactDetail **author;
	U64 editor_count;
	ContactDetail **editor;
	U64 reviewer_count;
	ContactDetail **reviewer;
	U64 endorser_count;
	ContactDetail **endorser;
	U64 relatedArtifact_count;
	RelatedArtifact **relatedArtifact;
	U64 trigger_count;
	TriggerDefinition **trigger;
};
class Evidence {
public: 
	ResourceType resourceType;
	fhir_string id;
	Meta *meta;
	fhir_uri implicitRules;
	fhir_code language;
	Narrative *text;
	U64 contained_count;
	Resource **contained;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	fhir_uri url;
	U64 identifier_count;
	Identifier **identifier;
	fhir_string version;
	fhir_string name;
	fhir_string title;
	fhir_string shortTitle;
	fhir_string subtitle;
	fhir_code status;
	fhir_dateTime date;
	fhir_string publisher;
	U64 contact_count;
	ContactDetail **contact;
	fhir_markdown description;
	U64 note_count;
	Annotation **note;
	U64 useContext_count;
	UsageContext **useContext;
	U64 jurisdiction_count;
	CodeableConcept **jurisdiction;
	fhir_markdown copyright;
	fhir_date approvalDate;
	fhir_date lastReviewDate;
	Period *effectivePeriod;
	U64 topic_count;
	CodeableConcept **topic;
	U64 author_count;
	ContactDetail **author;
	U64 editor_count;
	ContactDetail **editor;
	U64 reviewer_count;
	ContactDetail **reviewer;
	U64 endorser_count;
	ContactDetail **endorser;
	U64 relatedArtifact_count;
	RelatedArtifact **relatedArtifact;
	Reference *exposureBackground;
	U64 exposureVariant_count;
	Reference **exposureVariant;
	U64 outcome_count;
	Reference **outcome;
};
class EvidenceVariable {
public: 
	ResourceType resourceType;
	fhir_string id;
	Meta *meta;
	fhir_uri implicitRules;
	fhir_code language;
	Narrative *text;
	U64 contained_count;
	Resource **contained;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	fhir_uri url;
	U64 identifier_count;
	Identifier **identifier;
	fhir_string version;
	fhir_string name;
	fhir_string title;
	fhir_string shortTitle;
	fhir_string subtitle;
	fhir_code status;
	fhir_dateTime date;
	fhir_string publisher;
	U64 contact_count;
	ContactDetail **contact;
	fhir_markdown description;
	U64 note_count;
	Annotation **note;
	U64 useContext_count;
	UsageContext **useContext;
	U64 jurisdiction_count;
	CodeableConcept **jurisdiction;
	fhir_markdown copyright;
	fhir_date approvalDate;
	fhir_date lastReviewDate;
	Period *effectivePeriod;
	U64 topic_count;
	CodeableConcept **topic;
	U64 author_count;
	ContactDetail **author;
	U64 editor_count;
	ContactDetail **editor;
	U64 reviewer_count;
	ContactDetail **reviewer;
	U64 endorser_count;
	ContactDetail **endorser;
	U64 relatedArtifact_count;
	RelatedArtifact **relatedArtifact;
	fhir_code type;
	U64 characteristic_count;
	EvidenceVariable_Characteristic **characteristic;
};
class EvidenceVariable_Characteristic {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	fhir_string description;
	enum class DefinType {
		Unknown,
		Reference,
		fhir_canonical,
		CodeableConcept,
		Expression,
		DataRequirement,
		TriggerDefinition
	};
	DefinType definition_type_type;

	union {
		Reference* definitionReference;
		fhir_canonical definitionCanonical;
		CodeableConcept* definitionCodeableConcept;
		Expression* definitionExpression;
		DataRequirement* definitionDataRequirement;
		TriggerDefinition* definitionTriggerDefinition;
	} definition;

	U64 usageContext_count;
	UsageContext **usageContext;
	fhir_boolean exclude;
	enum class PartiType {
		Unknown,
		fhir_dateTime,
		Period,
		Duration,
		Timing
	};
	PartiType participantEffective_type_type;

	union {
		fhir_dateTime participantEffectiveDateTime;
		Period* participantEffectivePeriod;
		Duration* participantEffectiveDuration;
		Timing* participantEffectiveTiming;
	} participantEffective;

	Duration *timeFromStart;
	fhir_code groupMeasure;
};
class ExampleScenario {
public: 
	ResourceType resourceType;
	fhir_string id;
	Meta *meta;
	fhir_uri implicitRules;
	fhir_code language;
	Narrative *text;
	U64 contained_count;
	Resource **contained;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	fhir_uri url;
	U64 identifier_count;
	Identifier **identifier;
	fhir_string version;
	fhir_string name;
	fhir_code status;
	fhir_boolean experimental;
	fhir_dateTime date;
	fhir_string publisher;
	U64 contact_count;
	ContactDetail **contact;
	U64 useContext_count;
	UsageContext **useContext;
	U64 jurisdiction_count;
	CodeableConcept **jurisdiction;
	fhir_markdown copyright;
	fhir_markdown purpose;
	U64 actor_count;
	ExampleScenario_Actor **actor;
	U64 instance_count;
	ExampleScenario_Instance **instance;
	U64 process_count;
	ExampleScenario_Process **process;
	U64 workflow_count;
	fhir_canonical *workflow;
};
class ExampleScenario_Actor {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	fhir_string actorId;
	fhir_code type;
	fhir_string name;
	fhir_markdown description;
};
class ExampleScenario_Instance {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	fhir_string resourceId;
	fhir_code resourceType_;
	fhir_string name;
	fhir_markdown description;
	U64 version_count;
	ExampleScenario_Instance_Version **version;
	U64 containedInstance_count;
	ExampleScenario_Instance_ContainedInstance **containedInstance;
};
class ExampleScenario_Instance_Version {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	fhir_string versionId;
	fhir_markdown description;
};
class ExampleScenario_Instance_ContainedInstance {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	fhir_string resourceId;
	fhir_string versionId;
};
class ExampleScenario_Process {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	fhir_string title;
	fhir_markdown description;
	fhir_markdown preConditions;
	fhir_markdown postConditions;
	U64 step_count;
	ExampleScenario_Process_Step **step;
};
class ExampleScenario_Process_Step {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	U64 process_count;
	ExampleScenario_Process **process;
	fhir_boolean pause;
	ExampleScenario_Process_Step_Operation *operation;
	U64 alternative_count;
	ExampleScenario_Process_Step_Alternative **alternative;
};
class ExampleScenario_Process_Step_Operation {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	fhir_string number;
	fhir_string type;
	fhir_string name;
	fhir_string initiator;
	fhir_string receiver;
	fhir_markdown description;
	fhir_boolean initiatorActive;
	fhir_boolean receiverActive;
	ExampleScenario_Instance_ContainedInstance *request;
	ExampleScenario_Instance_ContainedInstance *response;
};
class ExampleScenario_Process_Step_Alternative {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	fhir_string title;
	fhir_markdown description;
	U64 step_count;
	ExampleScenario_Process_Step **step;
};
class ExplanationOfBenefit {
public: 
	ResourceType resourceType;
	fhir_string id;
	Meta *meta;
	fhir_uri implicitRules;
	fhir_code language;
	Narrative *text;
	U64 contained_count;
	Resource **contained;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	U64 identifier_count;
	Identifier **identifier;
	fhir_code status;
	CodeableConcept *type;
	CodeableConcept *subType;
	fhir_code use;
	Reference *patient;
	Period *billablePeriod;
	fhir_dateTime created;
	Reference *enterer;
	Reference *insurer;
	Reference *provider;
	CodeableConcept *priority;
	CodeableConcept *fundsReserveRequested;
	CodeableConcept *fundsReserve;
	U64 related_count;
	ExplanationOfBenefit_Related **related;
	Reference *prescription;
	Reference *originalPrescription;
	ExplanationOfBenefit_Payee *payee;
	Reference *referral;
	Reference *facility;
	Reference *claim;
	Reference *claimResponse;
	fhir_code outcome;
	fhir_string disposition;
	U64 preAuthRef_count;
	fhir_string *preAuthRef;
	U64 preAuthRefPeriod_count;
	Period **preAuthRefPeriod;
	U64 careTeam_count;
	ExplanationOfBenefit_CareTeam **careTeam;
	U64 supportingInfo_count;
	ExplanationOfBenefit_SupportingInfo **supportingInfo;
	U64 diagnosis_count;
	ExplanationOfBenefit_Diagnosis **diagnosis;
	U64 procedure_count;
	ExplanationOfBenefit_Procedure **procedure;
	fhir_positiveInt precedence;
	U64 insurance_count;
	ExplanationOfBenefit_Insurance **insurance;
	ExplanationOfBenefit_Accident *accident;
	U64 item_count;
	ExplanationOfBenefit_Item **item;
	U64 addItem_count;
	ExplanationOfBenefit_AddItem **addItem;
	U64 adjudication_count;
	ExplanationOfBenefit_Item_Adjudication **adjudication;
	U64 total_count;
	ExplanationOfBenefit_Total **total;
	ExplanationOfBenefit_Payment *payment;
	CodeableConcept *formCode;
	Attachment *form;
	U64 processNote_count;
	ExplanationOfBenefit_ProcessNote **processNote;
	Period *benefitPeriod;
	U64 benefitBalance_count;
	ExplanationOfBenefit_BenefitBalance **benefitBalance;
};
class ExplanationOfBenefit_Related {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	Reference *claim;
	CodeableConcept *relationship;
	Identifier *reference;
};
class ExplanationOfBenefit_Payee {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	CodeableConcept *type;
	Reference *party;
};
class ExplanationOfBenefit_CareTeam {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	fhir_positiveInt sequence;
	Reference *provider;
	fhir_boolean responsible;
	CodeableConcept *role;
	CodeableConcept *qualification;
};
class ExplanationOfBenefit_SupportingInfo {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	fhir_positiveInt sequence;
	CodeableConcept *category;
	CodeableConcept *code;
	enum class TiminType {
		Unknown,
		fhir_date,
		Period
	};
	TiminType timing_type_type;

	union {
		fhir_date timingDate;
		Period* timingPeriod;
	} timing;

	enum class ValueType {
		Unknown,
		fhir_boolean,
		fhir_string,
		Quantity,
		Attachment,
		Reference
	};
	ValueType value_type_type;

	union {
		fhir_boolean valueBoolean;
		fhir_string valueString;
		Quantity* valueQuantity;
		Attachment* valueAttachment;
		Reference* valueReference;
	} value;

	Coding *reason;
};
class ExplanationOfBenefit_Diagnosis {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	fhir_positiveInt sequence;
	enum class DiagnType {
		Unknown,
		CodeableConcept,
		Reference
	};
	DiagnType diagnosis_type_type;

	union {
		CodeableConcept* diagnosisCodeableConcept;
		Reference* diagnosisReference;
	} diagnosis;

	U64 type_count;
	CodeableConcept **type;
	CodeableConcept *onAdmission;
	CodeableConcept *packageCode;
};
class ExplanationOfBenefit_Procedure {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	fhir_positiveInt sequence;
	U64 type_count;
	CodeableConcept **type;
	fhir_dateTime date;
	enum class ProceType {
		Unknown,
		CodeableConcept,
		Reference
	};
	ProceType procedure_type_type;

	union {
		CodeableConcept* procedureCodeableConcept;
		Reference* procedureReference;
	} procedure;

	U64 udi_count;
	Reference **udi;
};
class ExplanationOfBenefit_Insurance {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	fhir_boolean focal;
	Reference *coverage;
	U64 preAuthRef_count;
	fhir_string *preAuthRef;
};
class ExplanationOfBenefit_Accident {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	fhir_date date;
	CodeableConcept *type;
	enum class LocatType {
		Unknown,
		Address,
		Reference
	};
	LocatType location_type_type;

	union {
		Address* locationAddress;
		Reference* locationReference;
	} location;

};
class ExplanationOfBenefit_Item {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	fhir_positiveInt sequence;
	U64 careTeamSequence_count;
	fhir_positiveInt *careTeamSequence;
	U64 diagnosisSequence_count;
	fhir_positiveInt *diagnosisSequence;
	U64 procedureSequence_count;
	fhir_positiveInt *procedureSequence;
	U64 informationSequence_count;
	fhir_positiveInt *informationSequence;
	CodeableConcept *revenue;
	CodeableConcept *category;
	CodeableConcept *productOrService;
	U64 modifier_count;
	CodeableConcept **modifier;
	U64 programCode_count;
	CodeableConcept **programCode;
	enum class ServiType {
		Unknown,
		fhir_date,
		Period
	};
	ServiType serviced_type_type;

	union {
		fhir_date servicedDate;
		Period* servicedPeriod;
	} serviced;

	enum class LocatType {
		Unknown,
		CodeableConcept,
		Address,
		Reference
	};
	LocatType location_type_type;

	union {
		CodeableConcept* locationCodeableConcept;
		Address* locationAddress;
		Reference* locationReference;
	} location;

	Quantity *quantity;
	Money *unitPrice;
	fhir_decimal factor;
	Money *net;
	U64 udi_count;
	Reference **udi;
	CodeableConcept *bodySite;
	U64 subSite_count;
	CodeableConcept **subSite;
	U64 encounter_count;
	Reference **encounter;
	U64 noteNumber_count;
	fhir_positiveInt *noteNumber;
	U64 adjudication_count;
	ExplanationOfBenefit_Item_Adjudication **adjudication;
	U64 detail_count;
	ExplanationOfBenefit_Item_Detail **detail;
};
class ExplanationOfBenefit_Item_Adjudication {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	CodeableConcept *category;
	CodeableConcept *reason;
	Money *amount;
	fhir_decimal value;
};
class ExplanationOfBenefit_Item_Detail {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	fhir_positiveInt sequence;
	CodeableConcept *revenue;
	CodeableConcept *category;
	CodeableConcept *productOrService;
	U64 modifier_count;
	CodeableConcept **modifier;
	U64 programCode_count;
	CodeableConcept **programCode;
	Quantity *quantity;
	Money *unitPrice;
	fhir_decimal factor;
	Money *net;
	U64 udi_count;
	Reference **udi;
	U64 noteNumber_count;
	fhir_positiveInt *noteNumber;
	U64 adjudication_count;
	ExplanationOfBenefit_Item_Adjudication **adjudication;
	U64 subDetail_count;
	ExplanationOfBenefit_Item_Detail_SubDetail **subDetail;
};
class ExplanationOfBenefit_Item_Detail_SubDetail {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	fhir_positiveInt sequence;
	CodeableConcept *revenue;
	CodeableConcept *category;
	CodeableConcept *productOrService;
	U64 modifier_count;
	CodeableConcept **modifier;
	U64 programCode_count;
	CodeableConcept **programCode;
	Quantity *quantity;
	Money *unitPrice;
	fhir_decimal factor;
	Money *net;
	U64 udi_count;
	Reference **udi;
	U64 noteNumber_count;
	fhir_positiveInt *noteNumber;
	U64 adjudication_count;
	ExplanationOfBenefit_Item_Adjudication **adjudication;
};
class ExplanationOfBenefit_AddItem {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	U64 itemSequence_count;
	fhir_positiveInt *itemSequence;
	U64 detailSequence_count;
	fhir_positiveInt *detailSequence;
	U64 subDetailSequence_count;
	fhir_positiveInt *subDetailSequence;
	U64 provider_count;
	Reference **provider;
	CodeableConcept *productOrService;
	U64 modifier_count;
	CodeableConcept **modifier;
	U64 programCode_count;
	CodeableConcept **programCode;
	enum class ServiType {
		Unknown,
		fhir_date,
		Period
	};
	ServiType serviced_type_type;

	union {
		fhir_date servicedDate;
		Period* servicedPeriod;
	} serviced;

	enum class LocatType {
		Unknown,
		CodeableConcept,
		Address,
		Reference
	};
	LocatType location_type_type;

	union {
		CodeableConcept* locationCodeableConcept;
		Address* locationAddress;
		Reference* locationReference;
	} location;

	Quantity *quantity;
	Money *unitPrice;
	fhir_decimal factor;
	Money *net;
	CodeableConcept *bodySite;
	U64 subSite_count;
	CodeableConcept **subSite;
	U64 noteNumber_count;
	fhir_positiveInt *noteNumber;
	U64 adjudication_count;
	ExplanationOfBenefit_Item_Adjudication **adjudication;
	U64 detail_count;
	ExplanationOfBenefit_AddItem_Detail **detail;
};
class ExplanationOfBenefit_AddItem_Detail {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	CodeableConcept *productOrService;
	U64 modifier_count;
	CodeableConcept **modifier;
	Quantity *quantity;
	Money *unitPrice;
	fhir_decimal factor;
	Money *net;
	U64 noteNumber_count;
	fhir_positiveInt *noteNumber;
	U64 adjudication_count;
	ExplanationOfBenefit_Item_Adjudication **adjudication;
	U64 subDetail_count;
	ExplanationOfBenefit_AddItem_Detail_SubDetail **subDetail;
};
class ExplanationOfBenefit_AddItem_Detail_SubDetail {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	CodeableConcept *productOrService;
	U64 modifier_count;
	CodeableConcept **modifier;
	Quantity *quantity;
	Money *unitPrice;
	fhir_decimal factor;
	Money *net;
	U64 noteNumber_count;
	fhir_positiveInt *noteNumber;
	U64 adjudication_count;
	ExplanationOfBenefit_Item_Adjudication **adjudication;
};
class ExplanationOfBenefit_Total {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	CodeableConcept *category;
	Money *amount;
};
class ExplanationOfBenefit_Payment {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	CodeableConcept *type;
	Money *adjustment;
	CodeableConcept *adjustmentReason;
	fhir_date date;
	Money *amount;
	Identifier *identifier;
};
class ExplanationOfBenefit_ProcessNote {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	fhir_positiveInt number;
	fhir_code type;
	fhir_string text;
	CodeableConcept *language;
};
class ExplanationOfBenefit_BenefitBalance {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	CodeableConcept *category;
	fhir_boolean excluded;
	fhir_string name;
	fhir_string description;
	CodeableConcept *network;
	CodeableConcept *unit;
	CodeableConcept *term;
	U64 financial_count;
	ExplanationOfBenefit_BenefitBalance_Financial **financial;
};
class ExplanationOfBenefit_BenefitBalance_Financial {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	CodeableConcept *type;
	enum class AllowType {
		Unknown,
		fhir_unsignedInt,
		fhir_string,
		Money
	};
	AllowType allowed_type_type;

	union {
		fhir_unsignedInt allowedUnsignedInt;
		fhir_string allowedString;
		Money* allowedMoney;
	} allowed;

	enum class Used_Type {
		Unknown,
		fhir_unsignedInt,
		Money
	};
	Used_Type used_type_type;

	union {
		fhir_unsignedInt usedUnsignedInt;
		Money* usedMoney;
	} used;

};
class FamilyMemberHistory {
public: 
	ResourceType resourceType;
	fhir_string id;
	Meta *meta;
	fhir_uri implicitRules;
	fhir_code language;
	Narrative *text;
	U64 contained_count;
	Resource **contained;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	U64 identifier_count;
	Identifier **identifier;
	U64 instantiatesCanonical_count;
	fhir_canonical *instantiatesCanonical;
	U64 instantiatesUri_count;
	fhir_uri *instantiatesUri;
	fhir_code status;
	CodeableConcept *dataAbsentReason;
	Reference *patient;
	fhir_dateTime date;
	fhir_string name;
	CodeableConcept *relationship;
	CodeableConcept *sex;
	enum class Born_Type {
		Unknown,
		Period,
		fhir_date,
		fhir_string
	};
	Born_Type born_type_type;

	union {
		Period* bornPeriod;
		fhir_date bornDate;
		fhir_string bornString;
	} born;

	enum class Age_tType {
		Unknown,
		Age,
		Range,
		fhir_string
	};
	Age_tType age_type_type;

	union {
		Age* ageAge;
		Range* ageRange;
		fhir_string ageString;
	} age;

	fhir_boolean estimatedAge;
	enum class DeceaType {
		Unknown,
		fhir_boolean,
		Age,
		Range,
		fhir_date,
		fhir_string
	};
	DeceaType deceased_type_type;

	union {
		fhir_boolean deceasedBoolean;
		Age* deceasedAge;
		Range* deceasedRange;
		fhir_date deceasedDate;
		fhir_string deceasedString;
	} deceased;

	U64 reasonCode_count;
	CodeableConcept **reasonCode;
	U64 reasonReference_count;
	Reference **reasonReference;
	U64 note_count;
	Annotation **note;
	U64 condition_count;
	FamilyMemberHistory_Condition **condition;
};
class FamilyMemberHistory_Condition {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	CodeableConcept *code;
	CodeableConcept *outcome;
	fhir_boolean contributedToDeath;
	enum class OnsetType {
		Unknown,
		Age,
		Range,
		Period,
		fhir_string
	};
	OnsetType onset_type_type;

	union {
		Age* onsetAge;
		Range* onsetRange;
		Period* onsetPeriod;
		fhir_string onsetString;
	} onset;

	U64 note_count;
	Annotation **note;
};
class Flag {
public: 
	ResourceType resourceType;
	fhir_string id;
	Meta *meta;
	fhir_uri implicitRules;
	fhir_code language;
	Narrative *text;
	U64 contained_count;
	Resource **contained;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	U64 identifier_count;
	Identifier **identifier;
	fhir_code status;
	U64 category_count;
	CodeableConcept **category;
	CodeableConcept *code;
	Reference *subject;
	Period *period;
	Reference *encounter;
	Reference *author;
};
class Goal {
public: 
	ResourceType resourceType;
	fhir_string id;
	Meta *meta;
	fhir_uri implicitRules;
	fhir_code language;
	Narrative *text;
	U64 contained_count;
	Resource **contained;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	U64 identifier_count;
	Identifier **identifier;
	fhir_code lifecycleStatus;
	CodeableConcept *achievementStatus;
	U64 category_count;
	CodeableConcept **category;
	CodeableConcept *priority;
	CodeableConcept *description;
	Reference *subject;
	enum class StartType {
		Unknown,
		fhir_date,
		CodeableConcept
	};
	StartType start_type_type;

	union {
		fhir_date startDate;
		CodeableConcept* startCodeableConcept;
	} start;

	U64 target_count;
	Goal_Target **target;
	fhir_date statusDate;
	fhir_string statusReason;
	Reference *expressedBy;
	U64 addresses_count;
	Reference **addresses;
	U64 note_count;
	Annotation **note;
	U64 outcomeCode_count;
	CodeableConcept **outcomeCode;
	U64 outcomeReference_count;
	Reference **outcomeReference;
};
class Goal_Target {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	CodeableConcept *measure;
	enum class DetaiType {
		Unknown,
		Quantity,
		Range,
		CodeableConcept,
		fhir_string,
		fhir_boolean,
		Integer,
		Ratio
	};
	DetaiType detail_type_type;

	union {
		Quantity* detailQuantity;
		Range* detailRange;
		CodeableConcept* detailCodeableConcept;
		fhir_string detailString;
		fhir_boolean detailBoolean;
		Integer* detailInteger;
		Ratio* detailRatio;
	} detail;

	enum class Due_tType {
		Unknown,
		fhir_date,
		Duration
	};
	Due_tType due_type_type;

	union {
		fhir_date dueDate;
		Duration* dueDuration;
	} due;

};
class GraphDefinition {
public: 
	ResourceType resourceType;
	fhir_string id;
	Meta *meta;
	fhir_uri implicitRules;
	fhir_code language;
	Narrative *text;
	U64 contained_count;
	Resource **contained;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	fhir_uri url;
	fhir_string version;
	fhir_string name;
	fhir_code status;
	fhir_boolean experimental;
	fhir_dateTime date;
	fhir_string publisher;
	U64 contact_count;
	ContactDetail **contact;
	fhir_markdown description;
	U64 useContext_count;
	UsageContext **useContext;
	U64 jurisdiction_count;
	CodeableConcept **jurisdiction;
	fhir_markdown purpose;
	fhir_code start;
	fhir_canonical profile;
	U64 link_count;
	GraphDefinition_Link **link;
};
class GraphDefinition_Link {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	fhir_string path;
	fhir_string sliceName;
	Integer *min;
	fhir_string max;
	fhir_string description;
	U64 target_count;
	GraphDefinition_Link_Target **target;
};
class GraphDefinition_Link_Target {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	fhir_code type;
	fhir_string params;
	fhir_canonical profile;
	U64 compartment_count;
	GraphDefinition_Link_Target_Compartment **compartment;
	U64 link_count;
	GraphDefinition_Link **link;
};
class GraphDefinition_Link_Target_Compartment {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	fhir_code use;
	fhir_code code;
	fhir_code rule;
	fhir_string expression;
	fhir_string description;
};
class Group {
public: 
	ResourceType resourceType;
	fhir_string id;
	Meta *meta;
	fhir_uri implicitRules;
	fhir_code language;
	Narrative *text;
	U64 contained_count;
	Resource **contained;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	U64 identifier_count;
	Identifier **identifier;
	fhir_boolean active;
	fhir_code type;
	fhir_boolean actual;
	CodeableConcept *code;
	fhir_string name;
	fhir_unsignedInt quantity;
	Reference *managingEntity;
	U64 characteristic_count;
	Group_Characteristic **characteristic;
	U64 member_count;
	Group_Member **member;
};
class Group_Characteristic {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	CodeableConcept *code;
	enum class ValueType {
		Unknown,
		CodeableConcept,
		fhir_boolean,
		Quantity,
		Range,
		Reference
	};
	ValueType value_type_type;

	union {
		CodeableConcept* valueCodeableConcept;
		fhir_boolean valueBoolean;
		Quantity* valueQuantity;
		Range* valueRange;
		Reference* valueReference;
	} value;

	fhir_boolean exclude;
	Period *period;
};
class Group_Member {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	Reference *entity;
	Period *period;
	fhir_boolean inactive;
};
class GuidanceResponse {
public: 
	ResourceType resourceType;
	fhir_string id;
	Meta *meta;
	fhir_uri implicitRules;
	fhir_code language;
	Narrative *text;
	U64 contained_count;
	Resource **contained;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	Identifier *requestIdentifier;
	U64 identifier_count;
	Identifier **identifier;
	enum class ModulType {
		Unknown,
		fhir_uri,
		fhir_canonical,
		CodeableConcept
	};
	ModulType module_type_type;

	union {
		fhir_uri moduleUri;
		fhir_canonical moduleCanonical;
		CodeableConcept* moduleCodeableConcept;
	} module;

	fhir_code status;
	Reference *subject;
	Reference *encounter;
	fhir_dateTime occurrenceDateTime;
	Reference *performer;
	U64 reasonCode_count;
	CodeableConcept **reasonCode;
	U64 reasonReference_count;
	Reference **reasonReference;
	U64 note_count;
	Annotation **note;
	U64 evaluationMessage_count;
	Reference **evaluationMessage;
	Reference *outputParameters;
	Reference *result;
	U64 dataRequirement_count;
	DataRequirement **dataRequirement;
};
class HealthcareService {
public: 
	ResourceType resourceType;
	fhir_string id;
	Meta *meta;
	fhir_uri implicitRules;
	fhir_code language;
	Narrative *text;
	U64 contained_count;
	Resource **contained;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	U64 identifier_count;
	Identifier **identifier;
	fhir_boolean active;
	Reference *providedBy;
	U64 category_count;
	CodeableConcept **category;
	U64 type_count;
	CodeableConcept **type;
	U64 specialty_count;
	CodeableConcept **specialty;
	U64 location_count;
	Reference **location;
	fhir_string name;
	fhir_string comment;
	fhir_markdown extraDetails;
	Attachment *photo;
	U64 telecom_count;
	ContactPoint **telecom;
	U64 coverageArea_count;
	Reference **coverageArea;
	U64 serviceProvisionCode_count;
	CodeableConcept **serviceProvisionCode;
	U64 eligibility_count;
	HealthcareService_Eligibility **eligibility;
	U64 program_count;
	CodeableConcept **program;
	U64 characteristic_count;
	CodeableConcept **characteristic;
	U64 communication_count;
	CodeableConcept **communication;
	U64 referralMethod_count;
	CodeableConcept **referralMethod;
	fhir_boolean appointmentRequired;
	U64 availableTime_count;
	HealthcareService_AvailableTime **availableTime;
	U64 notAvailable_count;
	HealthcareService_NotAvailable **notAvailable;
	fhir_string availabilityExceptions;
	U64 endpoint_count;
	Reference **endpoint;
};
class HealthcareService_Eligibility {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	CodeableConcept *code;
	fhir_markdown comment;
};
class HealthcareService_AvailableTime {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	U64 daysOfWeek_count;
	fhir_code *daysOfWeek;
	fhir_boolean allDay;
	fhir_time availableStartTime;
	fhir_time availableEndTime;
};
class HealthcareService_NotAvailable {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	fhir_string description;
	Period *during;
};
class ImagingStudy {
public: 
	ResourceType resourceType;
	fhir_string id;
	Meta *meta;
	fhir_uri implicitRules;
	fhir_code language;
	Narrative *text;
	U64 contained_count;
	Resource **contained;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	U64 identifier_count;
	Identifier **identifier;
	fhir_code status;
	U64 modality_count;
	Coding **modality;
	Reference *subject;
	Reference *encounter;
	fhir_dateTime started;
	U64 basedOn_count;
	Reference **basedOn;
	Reference *referrer;
	U64 interpreter_count;
	Reference **interpreter;
	U64 endpoint_count;
	Reference **endpoint;
	fhir_unsignedInt numberOfSeries;
	fhir_unsignedInt numberOfInstances;
	Reference *procedureReference;
	U64 procedureCode_count;
	CodeableConcept **procedureCode;
	Reference *location;
	U64 reasonCode_count;
	CodeableConcept **reasonCode;
	U64 reasonReference_count;
	Reference **reasonReference;
	U64 note_count;
	Annotation **note;
	fhir_string description;
	U64 series_count;
	ImagingStudy_Series **series;
};
class ImagingStudy_Series {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	fhir_id uid;
	fhir_unsignedInt number;
	Coding *modality;
	fhir_string description;
	fhir_unsignedInt numberOfInstances;
	U64 endpoint_count;
	Reference **endpoint;
	Coding *bodySite;
	Coding *laterality;
	U64 specimen_count;
	Reference **specimen;
	fhir_dateTime started;
	U64 performer_count;
	ImagingStudy_Series_Performer **performer;
	U64 instance_count;
	ImagingStudy_Series_Instance **instance;
};
class ImagingStudy_Series_Performer {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	CodeableConcept *function_;
	Reference *actor;
};
class ImagingStudy_Series_Instance {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	fhir_id uid;
	Coding *sopClass;
	fhir_unsignedInt number;
	fhir_string title;
};
class Immunization {
public: 
	ResourceType resourceType;
	fhir_string id;
	Meta *meta;
	fhir_uri implicitRules;
	fhir_code language;
	Narrative *text;
	U64 contained_count;
	Resource **contained;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	U64 identifier_count;
	Identifier **identifier;
	fhir_code status;
	CodeableConcept *statusReason;
	CodeableConcept *vaccineCode;
	Reference *patient;
	Reference *encounter;
	enum class OccurType {
		Unknown,
		fhir_dateTime,
		fhir_string
	};
	OccurType occurrence_type_type;

	union {
		fhir_dateTime occurrenceDateTime;
		fhir_string occurrenceString;
	} occurrence;

	fhir_dateTime recorded;
	fhir_boolean primarySource;
	CodeableConcept *reportOrigin;
	Reference *location;
	Reference *manufacturer;
	fhir_string lotNumber;
	fhir_date expirationDate;
	CodeableConcept *site;
	CodeableConcept *route;
	Quantity *doseQuantity;
	U64 performer_count;
	Immunization_Performer **performer;
	U64 note_count;
	Annotation **note;
	U64 reasonCode_count;
	CodeableConcept **reasonCode;
	U64 reasonReference_count;
	Reference **reasonReference;
	fhir_boolean isSubpotent;
	U64 subpotentReason_count;
	CodeableConcept **subpotentReason;
	U64 education_count;
	Immunization_Education **education;
	U64 programEligibility_count;
	CodeableConcept **programEligibility;
	CodeableConcept *fundingSource;
	U64 reaction_count;
	Immunization_Reaction **reaction;
	U64 protocolApplied_count;
	Immunization_ProtocolApplied **protocolApplied;
};
class Immunization_Performer {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	CodeableConcept *function_;
	Reference *actor;
};
class Immunization_Education {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	fhir_string documentType;
	fhir_uri reference;
	fhir_dateTime publicationDate;
	fhir_dateTime presentationDate;
};
class Immunization_Reaction {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	fhir_dateTime date;
	Reference *detail;
	fhir_boolean reported;
};
class Immunization_ProtocolApplied {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	fhir_string series;
	Reference *authority;
	U64 targetDisease_count;
	CodeableConcept **targetDisease;
	enum class DoseNType {
		Unknown,
		fhir_positiveInt,
		fhir_string
	};
	DoseNType doseNumber_type_type;

	union {
		fhir_positiveInt doseNumberPositiveInt;
		fhir_string doseNumberString;
	} doseNumber;

	enum class SerieType {
		Unknown,
		fhir_positiveInt,
		fhir_string
	};
	SerieType seriesDoses_type_type;

	union {
		fhir_positiveInt seriesDosesPositiveInt;
		fhir_string seriesDosesString;
	} seriesDoses;

};
class ImmunizationEvaluation {
public: 
	ResourceType resourceType;
	fhir_string id;
	Meta *meta;
	fhir_uri implicitRules;
	fhir_code language;
	Narrative *text;
	U64 contained_count;
	Resource **contained;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	U64 identifier_count;
	Identifier **identifier;
	fhir_code status;
	Reference *patient;
	fhir_dateTime date;
	Reference *authority;
	CodeableConcept *targetDisease;
	Reference *immunizationEvent;
	CodeableConcept *doseStatus;
	U64 doseStatusReason_count;
	CodeableConcept **doseStatusReason;
	fhir_string description;
	fhir_string series;
	enum class DoseNType {
		Unknown,
		fhir_positiveInt,
		fhir_string
	};
	DoseNType doseNumber_type_type;

	union {
		fhir_positiveInt doseNumberPositiveInt;
		fhir_string doseNumberString;
	} doseNumber;

	enum class SerieType {
		Unknown,
		fhir_positiveInt,
		fhir_string
	};
	SerieType seriesDoses_type_type;

	union {
		fhir_positiveInt seriesDosesPositiveInt;
		fhir_string seriesDosesString;
	} seriesDoses;

};
class ImmunizationRecommendation {
public: 
	ResourceType resourceType;
	fhir_string id;
	Meta *meta;
	fhir_uri implicitRules;
	fhir_code language;
	Narrative *text;
	U64 contained_count;
	Resource **contained;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	U64 identifier_count;
	Identifier **identifier;
	Reference *patient;
	fhir_dateTime date;
	Reference *authority;
	U64 recommendation_count;
	ImmunizationRecommendation_Recommendation **recommendation;
};
class ImmunizationRecommendation_Recommendation {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	U64 vaccineCode_count;
	CodeableConcept **vaccineCode;
	CodeableConcept *targetDisease;
	U64 contraindicatedVaccineCode_count;
	CodeableConcept **contraindicatedVaccineCode;
	CodeableConcept *forecastStatus;
	U64 forecastReason_count;
	CodeableConcept **forecastReason;
	U64 dateCriterion_count;
	ImmunizationRecommendation_Recommendation_DateCriterion **dateCriterion;
	fhir_string description;
	fhir_string series;
	enum class DoseNType {
		Unknown,
		fhir_positiveInt,
		fhir_string
	};
	DoseNType doseNumber_type_type;

	union {
		fhir_positiveInt doseNumberPositiveInt;
		fhir_string doseNumberString;
	} doseNumber;

	enum class SerieType {
		Unknown,
		fhir_positiveInt,
		fhir_string
	};
	SerieType seriesDoses_type_type;

	union {
		fhir_positiveInt seriesDosesPositiveInt;
		fhir_string seriesDosesString;
	} seriesDoses;

	U64 supportingImmunization_count;
	Reference **supportingImmunization;
	U64 supportingPatientInformation_count;
	Reference **supportingPatientInformation;
};
class ImmunizationRecommendation_Recommendation_DateCriterion {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	CodeableConcept *code;
	fhir_dateTime value;
};
class ImplementationGuide {
public: 
	ResourceType resourceType;
	fhir_string id;
	Meta *meta;
	fhir_uri implicitRules;
	fhir_code language;
	Narrative *text;
	U64 contained_count;
	Resource **contained;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	fhir_uri url;
	fhir_string version;
	fhir_string name;
	fhir_string title;
	fhir_code status;
	fhir_boolean experimental;
	fhir_dateTime date;
	fhir_string publisher;
	U64 contact_count;
	ContactDetail **contact;
	fhir_markdown description;
	U64 useContext_count;
	UsageContext **useContext;
	U64 jurisdiction_count;
	CodeableConcept **jurisdiction;
	fhir_markdown copyright;
	fhir_id packageId;
	fhir_code license;
	U64 fhirVersion_count;
	fhir_code *fhirVersion;
	U64 dependsOn_count;
	ImplementationGuide_DependsOn **dependsOn;
	U64 global__count;
	ImplementationGuide_Global **global_;
	ImplementationGuide_Definition *definition;
	ImplementationGuide_Manifest *manifest;
};
class ImplementationGuide_DependsOn {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	fhir_canonical uri;
	fhir_id packageId;
	fhir_string version;
};
class ImplementationGuide_Global {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	fhir_code type;
	fhir_canonical profile;
};
class ImplementationGuide_Definition {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	U64 grouping_count;
	ImplementationGuide_Definition_Grouping **grouping;
	U64 resource_count;
	ImplementationGuide_Definition_Resource **resource;
	ImplementationGuide_Definition_Page *page;
	U64 parameter_count;
	ImplementationGuide_Definition_Parameter **parameter;
	U64 template__count;
	ImplementationGuide_Definition_Template **template_;
};
class ImplementationGuide_Definition_Grouping {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	fhir_string name;
	fhir_string description;
};
class ImplementationGuide_Definition_Resource {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	Reference *reference;
	U64 fhirVersion_count;
	fhir_code *fhirVersion;
	fhir_string name;
	fhir_string description;
	enum class ExampType {
		Unknown,
		fhir_boolean,
		fhir_canonical
	};
	ExampType example_type_type;

	union {
		fhir_boolean exampleBoolean;
		fhir_canonical exampleCanonical;
	} example;

	fhir_id groupingId;
};
class ImplementationGuide_Definition_Page {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	enum class Name_Type {
		Unknown,
		fhir_url,
		Reference
	};
	Name_Type name_type_type;

	union {
		fhir_url nameUrl;
		Reference* nameReference;
	} name;

	fhir_string title;
	fhir_code generation;
	U64 page_count;
	ImplementationGuide_Definition_Page **page;
};
class ImplementationGuide_Definition_Parameter {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	fhir_code code;
	fhir_string value;
};
class ImplementationGuide_Definition_Template {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	fhir_code code;
	fhir_string source;
	fhir_string scope;
};
class ImplementationGuide_Manifest {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	fhir_url rendering;
	U64 resource_count;
	ImplementationGuide_Manifest_Resource **resource;
	U64 page_count;
	ImplementationGuide_Manifest_Page **page;
	U64 image_count;
	fhir_string *image;
	U64 other_count;
	fhir_string *other;
};
class ImplementationGuide_Manifest_Resource {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	Reference *reference;
	enum class ExampType {
		Unknown,
		fhir_boolean,
		fhir_canonical
	};
	ExampType example_type_type;

	union {
		fhir_boolean exampleBoolean;
		fhir_canonical exampleCanonical;
	} example;

	fhir_url relativePath;
};
class ImplementationGuide_Manifest_Page {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	fhir_string name;
	fhir_string title;
	U64 anchor_count;
	fhir_string *anchor;
};
class InsurancePlan {
public: 
	ResourceType resourceType;
	fhir_string id;
	Meta *meta;
	fhir_uri implicitRules;
	fhir_code language;
	Narrative *text;
	U64 contained_count;
	Resource **contained;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	U64 identifier_count;
	Identifier **identifier;
	fhir_code status;
	U64 type_count;
	CodeableConcept **type;
	fhir_string name;
	U64 alias_count;
	fhir_string *alias;
	Period *period;
	Reference *ownedBy;
	Reference *administeredBy;
	U64 coverageArea_count;
	Reference **coverageArea;
	U64 contact_count;
	InsurancePlan_Contact **contact;
	U64 endpoint_count;
	Reference **endpoint;
	U64 network_count;
	Reference **network;
	U64 coverage_count;
	InsurancePlan_Coverage **coverage;
	U64 plan_count;
	InsurancePlan_Plan **plan;
};
class InsurancePlan_Contact {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	CodeableConcept *purpose;
	HumanName *name;
	U64 telecom_count;
	ContactPoint **telecom;
	Address *address;
};
class InsurancePlan_Coverage {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	CodeableConcept *type;
	U64 network_count;
	Reference **network;
	U64 benefit_count;
	InsurancePlan_Coverage_Benefit **benefit;
};
class InsurancePlan_Coverage_Benefit {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	CodeableConcept *type;
	fhir_string requirement;
	U64 limit_count;
	InsurancePlan_Coverage_Benefit_Limit **limit;
};
class InsurancePlan_Coverage_Benefit_Limit {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	Quantity *value;
	CodeableConcept *code;
};
class InsurancePlan_Plan {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	U64 identifier_count;
	Identifier **identifier;
	CodeableConcept *type;
	U64 coverageArea_count;
	Reference **coverageArea;
	U64 network_count;
	Reference **network;
	U64 generalCost_count;
	InsurancePlan_Plan_GeneralCost **generalCost;
	U64 specificCost_count;
	InsurancePlan_Plan_SpecificCost **specificCost;
};
class InsurancePlan_Plan_GeneralCost {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	CodeableConcept *type;
	fhir_positiveInt groupSize;
	Money *cost;
	fhir_string comment;
};
class InsurancePlan_Plan_SpecificCost {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	CodeableConcept *category;
	U64 benefit_count;
	InsurancePlan_Plan_SpecificCost_Benefit **benefit;
};
class InsurancePlan_Plan_SpecificCost_Benefit {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	CodeableConcept *type;
	U64 cost_count;
	InsurancePlan_Plan_SpecificCost_Benefit_Cost **cost;
};
class InsurancePlan_Plan_SpecificCost_Benefit_Cost {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	CodeableConcept *type;
	CodeableConcept *applicability;
	U64 qualifiers_count;
	CodeableConcept **qualifiers;
	Quantity *value;
};
class Invoice {
public: 
	ResourceType resourceType;
	fhir_string id;
	Meta *meta;
	fhir_uri implicitRules;
	fhir_code language;
	Narrative *text;
	U64 contained_count;
	Resource **contained;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	U64 identifier_count;
	Identifier **identifier;
	fhir_code status;
	fhir_string cancelledReason;
	CodeableConcept *type;
	Reference *subject;
	Reference *recipient;
	fhir_dateTime date;
	U64 participant_count;
	Invoice_Participant **participant;
	Reference *issuer;
	Reference *account;
	U64 lineItem_count;
	Invoice_LineItem **lineItem;
	U64 totalPriceComponent_count;
	Invoice_LineItem_PriceComponent **totalPriceComponent;
	Money *totalNet;
	Money *totalGross;
	fhir_markdown paymentTerms;
	U64 note_count;
	Annotation **note;
};
class Invoice_Participant {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	CodeableConcept *role;
	Reference *actor;
};
class Invoice_LineItem {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	fhir_positiveInt sequence;
	enum class ChargType {
		Unknown,
		Reference,
		CodeableConcept
	};
	ChargType chargeItem_type_type;

	union {
		Reference* chargeItemReference;
		CodeableConcept* chargeItemCodeableConcept;
	} chargeItem;

	U64 priceComponent_count;
	Invoice_LineItem_PriceComponent **priceComponent;
};
class Invoice_LineItem_PriceComponent {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	fhir_code type;
	CodeableConcept *code;
	fhir_decimal factor;
	Money *amount;
};
class Library {
public: 
	ResourceType resourceType;
	fhir_string id;
	Meta *meta;
	fhir_uri implicitRules;
	fhir_code language;
	Narrative *text;
	U64 contained_count;
	Resource **contained;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	fhir_uri url;
	U64 identifier_count;
	Identifier **identifier;
	fhir_string version;
	fhir_string name;
	fhir_string title;
	fhir_string subtitle;
	fhir_code status;
	fhir_boolean experimental;
	CodeableConcept *type;
	enum class SubjeType {
		Unknown,
		CodeableConcept,
		Reference
	};
	SubjeType subject_type_type;

	union {
		CodeableConcept* subjectCodeableConcept;
		Reference* subjectReference;
	} subject;

	fhir_dateTime date;
	fhir_string publisher;
	U64 contact_count;
	ContactDetail **contact;
	fhir_markdown description;
	U64 useContext_count;
	UsageContext **useContext;
	U64 jurisdiction_count;
	CodeableConcept **jurisdiction;
	fhir_markdown purpose;
	fhir_string usage;
	fhir_markdown copyright;
	fhir_date approvalDate;
	fhir_date lastReviewDate;
	Period *effectivePeriod;
	U64 topic_count;
	CodeableConcept **topic;
	U64 author_count;
	ContactDetail **author;
	U64 editor_count;
	ContactDetail **editor;
	U64 reviewer_count;
	ContactDetail **reviewer;
	U64 endorser_count;
	ContactDetail **endorser;
	U64 relatedArtifact_count;
	RelatedArtifact **relatedArtifact;
	U64 parameter_count;
	ParameterDefinition **parameter;
	U64 dataRequirement_count;
	DataRequirement **dataRequirement;
	U64 content_count;
	Attachment **content;
};
class Linkage {
public: 
	ResourceType resourceType;
	fhir_string id;
	Meta *meta;
	fhir_uri implicitRules;
	fhir_code language;
	Narrative *text;
	U64 contained_count;
	Resource **contained;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	fhir_boolean active;
	Reference *author;
	U64 item_count;
	Linkage_Item **item;
};
class Linkage_Item {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	fhir_code type;
	Reference *resource;
};
class List {
public: 
	ResourceType resourceType;
	fhir_string id;
	Meta *meta;
	fhir_uri implicitRules;
	fhir_code language;
	Narrative *text;
	U64 contained_count;
	Resource **contained;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	U64 identifier_count;
	Identifier **identifier;
	fhir_code status;
	fhir_code mode;
	fhir_string title;
	CodeableConcept *code;
	Reference *subject;
	Reference *encounter;
	fhir_dateTime date;
	Reference *source;
	CodeableConcept *orderedBy;
	U64 note_count;
	Annotation **note;
	U64 entry_count;
	List_Entry **entry;
	CodeableConcept *emptyReason;
};
class List_Entry {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	CodeableConcept *flag;
	fhir_boolean deleted;
	fhir_dateTime date;
	Reference *item;
};
class Location {
public: 
	ResourceType resourceType;
	fhir_string id;
	Meta *meta;
	fhir_uri implicitRules;
	fhir_code language;
	Narrative *text;
	U64 contained_count;
	Resource **contained;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	U64 identifier_count;
	Identifier **identifier;
	fhir_code status;
	Coding *operationalStatus;
	fhir_string name;
	U64 alias_count;
	fhir_string *alias;
	fhir_string description;
	fhir_code mode;
	U64 type_count;
	CodeableConcept **type;
	U64 telecom_count;
	ContactPoint **telecom;
	Address *address;
	CodeableConcept *physicalType;
	Location_Position *position;
	Reference *managingOrganization;
	Reference *partOf;
	U64 hoursOfOperation_count;
	Location_HoursOfOperation **hoursOfOperation;
	fhir_string availabilityExceptions;
	U64 endpoint_count;
	Reference **endpoint;
};
class Location_Position {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	fhir_decimal longitude;
	fhir_decimal latitude;
	fhir_decimal altitude;
};
class Location_HoursOfOperation {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	U64 daysOfWeek_count;
	fhir_code *daysOfWeek;
	fhir_boolean allDay;
	fhir_time openingTime;
	fhir_time closingTime;
};
class Measure {
public: 
	ResourceType resourceType;
	fhir_string id;
	Meta *meta;
	fhir_uri implicitRules;
	fhir_code language;
	Narrative *text;
	U64 contained_count;
	Resource **contained;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	fhir_uri url;
	U64 identifier_count;
	Identifier **identifier;
	fhir_string version;
	fhir_string name;
	fhir_string title;
	fhir_string subtitle;
	fhir_code status;
	fhir_boolean experimental;
	enum class SubjeType {
		Unknown,
		CodeableConcept,
		Reference
	};
	SubjeType subject_type_type;

	union {
		CodeableConcept* subjectCodeableConcept;
		Reference* subjectReference;
	} subject;

	fhir_dateTime date;
	fhir_string publisher;
	U64 contact_count;
	ContactDetail **contact;
	fhir_markdown description;
	U64 useContext_count;
	UsageContext **useContext;
	U64 jurisdiction_count;
	CodeableConcept **jurisdiction;
	fhir_markdown purpose;
	fhir_string usage;
	fhir_markdown copyright;
	fhir_date approvalDate;
	fhir_date lastReviewDate;
	Period *effectivePeriod;
	U64 topic_count;
	CodeableConcept **topic;
	U64 author_count;
	ContactDetail **author;
	U64 editor_count;
	ContactDetail **editor;
	U64 reviewer_count;
	ContactDetail **reviewer;
	U64 endorser_count;
	ContactDetail **endorser;
	U64 relatedArtifact_count;
	RelatedArtifact **relatedArtifact;
	U64 library_count;
	fhir_canonical *library;
	fhir_markdown disclaimer;
	CodeableConcept *scoring;
	CodeableConcept *compositeScoring;
	U64 type_count;
	CodeableConcept **type;
	fhir_string riskAdjustment;
	fhir_string rateAggregation;
	fhir_markdown rationale;
	fhir_markdown clinicalRecommendationStatement;
	CodeableConcept *improvementNotation;
	U64 definition_count;
	fhir_markdown *definition;
	fhir_markdown guidance;
	U64 group_count;
	Measure_Group **group;
	U64 supplementalData_count;
	Measure_SupplementalData **supplementalData;
};
class Measure_Group {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	CodeableConcept *code;
	fhir_string description;
	U64 population_count;
	Measure_Group_Population **population;
	U64 stratifier_count;
	Measure_Group_Stratifier **stratifier;
};
class Measure_Group_Population {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	CodeableConcept *code;
	fhir_string description;
	Expression *criteria;
};
class Measure_Group_Stratifier {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	CodeableConcept *code;
	fhir_string description;
	Expression *criteria;
	U64 component_count;
	Measure_Group_Stratifier_Component **component;
};
class Measure_Group_Stratifier_Component {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	CodeableConcept *code;
	fhir_string description;
	Expression *criteria;
};
class Measure_SupplementalData {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	CodeableConcept *code;
	U64 usage_count;
	CodeableConcept **usage;
	fhir_string description;
	Expression *criteria;
};
class MeasureReport {
public: 
	ResourceType resourceType;
	fhir_string id;
	Meta *meta;
	fhir_uri implicitRules;
	fhir_code language;
	Narrative *text;
	U64 contained_count;
	Resource **contained;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	U64 identifier_count;
	Identifier **identifier;
	fhir_code status;
	fhir_code type;
	fhir_canonical measure;
	Reference *subject;
	fhir_dateTime date;
	Reference *reporter;
	Period *period;
	CodeableConcept *improvementNotation;
	U64 group_count;
	MeasureReport_Group **group;
	U64 evaluatedResource_count;
	Reference **evaluatedResource;
};
class MeasureReport_Group {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	CodeableConcept *code;
	U64 population_count;
	MeasureReport_Group_Population **population;
	Quantity *measureScore;
	U64 stratifier_count;
	MeasureReport_Group_Stratifier **stratifier;
};
class MeasureReport_Group_Population {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	CodeableConcept *code;
	Integer *count;
	Reference *subjectResults;
};
class MeasureReport_Group_Stratifier {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	U64 code_count;
	CodeableConcept **code;
	U64 stratum_count;
	MeasureReport_Group_Stratifier_Stratum **stratum;
};
class MeasureReport_Group_Stratifier_Stratum {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	CodeableConcept *value;
	U64 component_count;
	MeasureReport_Group_Stratifier_Stratum_Component **component;
	U64 population_count;
	MeasureReport_Group_Stratifier_Stratum_Population **population;
	Quantity *measureScore;
};
class MeasureReport_Group_Stratifier_Stratum_Component {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	CodeableConcept *code;
	CodeableConcept *value;
};
class MeasureReport_Group_Stratifier_Stratum_Population {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	CodeableConcept *code;
	Integer *count;
	Reference *subjectResults;
};
class Media {
public: 
	ResourceType resourceType;
	fhir_string id;
	Meta *meta;
	fhir_uri implicitRules;
	fhir_code language;
	Narrative *text;
	U64 contained_count;
	Resource **contained;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	U64 identifier_count;
	Identifier **identifier;
	U64 basedOn_count;
	Reference **basedOn;
	U64 partOf_count;
	Reference **partOf;
	fhir_code status;
	CodeableConcept *type;
	CodeableConcept *modality;
	CodeableConcept *view;
	Reference *subject;
	Reference *encounter;
	enum class CreatType {
		Unknown,
		fhir_dateTime,
		Period
	};
	CreatType created_type_type;

	union {
		fhir_dateTime createdDateTime;
		Period* createdPeriod;
	} created;

	fhir_instant issued;
	Reference *operator_;
	U64 reasonCode_count;
	CodeableConcept **reasonCode;
	CodeableConcept *bodySite;
	fhir_string deviceName;
	Reference *device;
	fhir_positiveInt height;
	fhir_positiveInt width;
	fhir_positiveInt frames;
	fhir_decimal duration;
	Attachment *content;
	U64 note_count;
	Annotation **note;
};
class Medication {
public: 
	ResourceType resourceType;
	fhir_string id;
	Meta *meta;
	fhir_uri implicitRules;
	fhir_code language;
	Narrative *text;
	U64 contained_count;
	Resource **contained;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	U64 identifier_count;
	Identifier **identifier;
	CodeableConcept *code;
	fhir_code status;
	Reference *manufacturer;
	CodeableConcept *form;
	Ratio *amount;
	U64 ingredient_count;
	Medication_Ingredient **ingredient;
	Medication_Batch *batch;
};
class Medication_Ingredient {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	enum class Item_Type {
		Unknown,
		CodeableConcept,
		Reference
	};
	Item_Type item_type_type;

	union {
		CodeableConcept* itemCodeableConcept;
		Reference* itemReference;
	} item;

	fhir_boolean isActive;
	Ratio *strength;
};
class Medication_Batch {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	fhir_string lotNumber;
	fhir_dateTime expirationDate;
};
class MedicationAdministration {
public: 
	ResourceType resourceType;
	fhir_string id;
	Meta *meta;
	fhir_uri implicitRules;
	fhir_code language;
	Narrative *text;
	U64 contained_count;
	Resource **contained;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	U64 identifier_count;
	Identifier **identifier;
	U64 instantiates_count;
	fhir_uri *instantiates;
	U64 partOf_count;
	Reference **partOf;
	fhir_code status;
	U64 statusReason_count;
	CodeableConcept **statusReason;
	CodeableConcept *category;
	enum class MedicType {
		Unknown,
		CodeableConcept,
		Reference
	};
	MedicType medication_type_type;

	union {
		CodeableConcept* medicationCodeableConcept;
		Reference* medicationReference;
	} medication;

	Reference *subject;
	Reference *context;
	U64 supportingInformation_count;
	Reference **supportingInformation;
	enum class EffecType {
		Unknown,
		fhir_dateTime,
		Period
	};
	EffecType effective_type_type;

	union {
		fhir_dateTime effectiveDateTime;
		Period* effectivePeriod;
	} effective;

	U64 performer_count;
	MedicationAdministration_Performer **performer;
	U64 reasonCode_count;
	CodeableConcept **reasonCode;
	U64 reasonReference_count;
	Reference **reasonReference;
	Reference *request;
	U64 device_count;
	Reference **device;
	U64 note_count;
	Annotation **note;
	MedicationAdministration_Dosage *dosage;
	U64 eventHistory_count;
	Reference **eventHistory;
};
class MedicationAdministration_Performer {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	CodeableConcept *function_;
	Reference *actor;
};
class MedicationAdministration_Dosage {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	fhir_string text;
	CodeableConcept *site;
	CodeableConcept *route;
	CodeableConcept *method;
	Quantity *dose;
	enum class Rate_Type {
		Unknown,
		Ratio,
		Quantity
	};
	Rate_Type rate_type_type;

	union {
		Ratio* rateRatio;
		Quantity* rateQuantity;
	} rate;

};
class MedicationDispense {
public: 
	ResourceType resourceType;
	fhir_string id;
	Meta *meta;
	fhir_uri implicitRules;
	fhir_code language;
	Narrative *text;
	U64 contained_count;
	Resource **contained;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	U64 identifier_count;
	Identifier **identifier;
	U64 partOf_count;
	Reference **partOf;
	fhir_code status;
	enum class StatuType {
		Unknown,
		CodeableConcept,
		Reference
	};
	StatuType statusReason_type_type;

	union {
		CodeableConcept* statusReasonCodeableConcept;
		Reference* statusReasonReference;
	} statusReason;

	CodeableConcept *category;
	enum class MedicType {
		Unknown,
		CodeableConcept,
		Reference
	};
	MedicType medication_type_type;

	union {
		CodeableConcept* medicationCodeableConcept;
		Reference* medicationReference;
	} medication;

	Reference *subject;
	Reference *context;
	U64 supportingInformation_count;
	Reference **supportingInformation;
	U64 performer_count;
	MedicationDispense_Performer **performer;
	Reference *location;
	U64 authorizingPrescription_count;
	Reference **authorizingPrescription;
	CodeableConcept *type;
	Quantity *quantity;
	Quantity *daysSupply;
	fhir_dateTime whenPrepared;
	fhir_dateTime whenHandedOver;
	Reference *destination;
	U64 receiver_count;
	Reference **receiver;
	U64 note_count;
	Annotation **note;
	U64 dosageInstruction_count;
	Dosage **dosageInstruction;
	MedicationDispense_Substitution *substitution;
	U64 detectedIssue_count;
	Reference **detectedIssue;
	U64 eventHistory_count;
	Reference **eventHistory;
};
class MedicationDispense_Performer {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	CodeableConcept *function_;
	Reference *actor;
};
class MedicationDispense_Substitution {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	fhir_boolean wasSubstituted;
	CodeableConcept *type;
	U64 reason_count;
	CodeableConcept **reason;
	U64 responsibleParty_count;
	Reference **responsibleParty;
};
class MedicationKnowledge {
public: 
	ResourceType resourceType;
	fhir_string id;
	Meta *meta;
	fhir_uri implicitRules;
	fhir_code language;
	Narrative *text;
	U64 contained_count;
	Resource **contained;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	CodeableConcept *code;
	fhir_code status;
	Reference *manufacturer;
	CodeableConcept *doseForm;
	Quantity *amount;
	U64 synonym_count;
	fhir_string *synonym;
	U64 relatedMedicationKnowledge_count;
	MedicationKnowledge_RelatedMedicationKnowledge **relatedMedicationKnowledge;
	U64 associatedMedication_count;
	Reference **associatedMedication;
	U64 productType_count;
	CodeableConcept **productType;
	U64 monograph_count;
	MedicationKnowledge_Monograph **monograph;
	U64 ingredient_count;
	MedicationKnowledge_Ingredient **ingredient;
	fhir_markdown preparationInstruction;
	U64 intendedRoute_count;
	CodeableConcept **intendedRoute;
	U64 cost_count;
	MedicationKnowledge_Cost **cost;
	U64 monitoringProgram_count;
	MedicationKnowledge_MonitoringProgram **monitoringProgram;
	U64 administrationGuidelines_count;
	MedicationKnowledge_AdministrationGuidelines **administrationGuidelines;
	U64 medicineClassification_count;
	MedicationKnowledge_MedicineClassification **medicineClassification;
	MedicationKnowledge_Packaging *packaging;
	U64 drugCharacteristic_count;
	MedicationKnowledge_DrugCharacteristic **drugCharacteristic;
	U64 contraindication_count;
	Reference **contraindication;
	U64 regulatory_count;
	MedicationKnowledge_Regulatory **regulatory;
	U64 kinetics_count;
	MedicationKnowledge_Kinetics **kinetics;
};
class MedicationKnowledge_RelatedMedicationKnowledge {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	CodeableConcept *type;
	U64 reference_count;
	Reference **reference;
};
class MedicationKnowledge_Monograph {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	CodeableConcept *type;
	Reference *source;
};
class MedicationKnowledge_Ingredient {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	enum class Item_Type {
		Unknown,
		CodeableConcept,
		Reference
	};
	Item_Type item_type_type;

	union {
		CodeableConcept* itemCodeableConcept;
		Reference* itemReference;
	} item;

	fhir_boolean isActive;
	Ratio *strength;
};
class MedicationKnowledge_Cost {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	CodeableConcept *type;
	fhir_string source;
	Money *cost;
};
class MedicationKnowledge_MonitoringProgram {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	CodeableConcept *type;
	fhir_string name;
};
class MedicationKnowledge_AdministrationGuidelines {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	U64 dosage_count;
	MedicationKnowledge_AdministrationGuidelines_Dosage **dosage;
	enum class IndicType {
		Unknown,
		CodeableConcept,
		Reference
	};
	IndicType indication_type_type;

	union {
		CodeableConcept* indicationCodeableConcept;
		Reference* indicationReference;
	} indication;

	U64 patientCharacteristics_count;
	MedicationKnowledge_AdministrationGuidelines_PatientCharacteristics **patientCharacteristics;
};
class MedicationKnowledge_AdministrationGuidelines_Dosage {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	CodeableConcept *type;
	U64 dosage_count;
	Dosage **dosage;
};
class MedicationKnowledge_AdministrationGuidelines_PatientCharacteristics {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	enum class CharaType {
		Unknown,
		CodeableConcept,
		Quantity
	};
	CharaType characteristic_type_type;

	union {
		CodeableConcept* characteristicCodeableConcept;
		Quantity* characteristicQuantity;
	} characteristic;

	U64 value_count;
	fhir_string *value;
};
class MedicationKnowledge_MedicineClassification {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	CodeableConcept *type;
	U64 classification_count;
	CodeableConcept **classification;
};
class MedicationKnowledge_Packaging {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	CodeableConcept *type;
	Quantity *quantity;
};
class MedicationKnowledge_DrugCharacteristic {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	CodeableConcept *type;
	enum class ValueType {
		Unknown,
		CodeableConcept,
		fhir_string,
		Quantity,
		fhir_base64Binary
	};
	ValueType value_type_type;

	union {
		CodeableConcept* valueCodeableConcept;
		fhir_string valueString;
		Quantity* valueQuantity;
		fhir_base64Binary valueBase64Binary;
	} value;

};
class MedicationKnowledge_Regulatory {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	Reference *regulatoryAuthority;
	U64 substitution_count;
	MedicationKnowledge_Regulatory_Substitution **substitution;
	U64 schedule_count;
	MedicationKnowledge_Regulatory_Schedule **schedule;
	MedicationKnowledge_Regulatory_MaxDispense *maxDispense;
};
class MedicationKnowledge_Regulatory_Substitution {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	CodeableConcept *type;
	fhir_boolean allowed;
};
class MedicationKnowledge_Regulatory_Schedule {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	CodeableConcept *schedule;
};
class MedicationKnowledge_Regulatory_MaxDispense {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	Quantity *quantity;
	Duration *period;
};
class MedicationKnowledge_Kinetics {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	U64 areaUnderCurve_count;
	Quantity **areaUnderCurve;
	U64 lethalDose50_count;
	Quantity **lethalDose50;
	Duration *halfLifePeriod;
};
class MedicationRequest {
public: 
	ResourceType resourceType;
	fhir_string id;
	Meta *meta;
	fhir_uri implicitRules;
	fhir_code language;
	Narrative *text;
	U64 contained_count;
	Resource **contained;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	U64 identifier_count;
	Identifier **identifier;
	fhir_code status;
	CodeableConcept *statusReason;
	fhir_code intent;
	U64 category_count;
	CodeableConcept **category;
	fhir_code priority;
	fhir_boolean doNotPerform;
	enum class ReporType {
		Unknown,
		fhir_boolean,
		Reference
	};
	ReporType reported_type_type;

	union {
		fhir_boolean reportedBoolean;
		Reference* reportedReference;
	} reported;

	enum class MedicType {
		Unknown,
		CodeableConcept,
		Reference
	};
	MedicType medication_type_type;

	union {
		CodeableConcept* medicationCodeableConcept;
		Reference* medicationReference;
	} medication;

	Reference *subject;
	Reference *encounter;
	U64 supportingInformation_count;
	Reference **supportingInformation;
	fhir_dateTime authoredOn;
	Reference *requester;
	Reference *performer;
	CodeableConcept *performerType;
	Reference *recorder;
	U64 reasonCode_count;
	CodeableConcept **reasonCode;
	U64 reasonReference_count;
	Reference **reasonReference;
	U64 instantiatesCanonical_count;
	fhir_canonical *instantiatesCanonical;
	U64 instantiatesUri_count;
	fhir_uri *instantiatesUri;
	U64 basedOn_count;
	Reference **basedOn;
	Identifier *groupIdentifier;
	CodeableConcept *courseOfTherapyType;
	U64 insurance_count;
	Reference **insurance;
	U64 note_count;
	Annotation **note;
	U64 dosageInstruction_count;
	Dosage **dosageInstruction;
	MedicationRequest_DispenseRequest *dispenseRequest;
	MedicationRequest_Substitution *substitution;
	Reference *priorPrescription;
	U64 detectedIssue_count;
	Reference **detectedIssue;
	U64 eventHistory_count;
	Reference **eventHistory;
};
class MedicationRequest_DispenseRequest {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	MedicationRequest_DispenseRequest_InitialFill *initialFill;
	Duration *dispenseInterval;
	Period *validityPeriod;
	fhir_unsignedInt numberOfRepeatsAllowed;
	Quantity *quantity;
	Duration *expectedSupplyDuration;
	Reference *performer;
};
class MedicationRequest_DispenseRequest_InitialFill {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	Quantity *quantity;
	Duration *duration;
};
class MedicationRequest_Substitution {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	enum class AllowType {
		Unknown,
		fhir_boolean,
		CodeableConcept
	};
	AllowType allowed_type_type;

	union {
		fhir_boolean allowedBoolean;
		CodeableConcept* allowedCodeableConcept;
	} allowed;

	CodeableConcept *reason;
};
class MedicationStatement {
public: 
	ResourceType resourceType;
	fhir_string id;
	Meta *meta;
	fhir_uri implicitRules;
	fhir_code language;
	Narrative *text;
	U64 contained_count;
	Resource **contained;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	U64 identifier_count;
	Identifier **identifier;
	U64 basedOn_count;
	Reference **basedOn;
	U64 partOf_count;
	Reference **partOf;
	fhir_code status;
	U64 statusReason_count;
	CodeableConcept **statusReason;
	CodeableConcept *category;
	enum class MedicType {
		Unknown,
		CodeableConcept,
		Reference
	};
	MedicType medication_type_type;

	union {
		CodeableConcept* medicationCodeableConcept;
		Reference* medicationReference;
	} medication;

	Reference *subject;
	Reference *context;
	enum class EffecType {
		Unknown,
		fhir_dateTime,
		Period
	};
	EffecType effective_type_type;

	union {
		fhir_dateTime effectiveDateTime;
		Period* effectivePeriod;
	} effective;

	fhir_dateTime dateAsserted;
	Reference *informationSource;
	U64 derivedFrom_count;
	Reference **derivedFrom;
	U64 reasonCode_count;
	CodeableConcept **reasonCode;
	U64 reasonReference_count;
	Reference **reasonReference;
	U64 note_count;
	Annotation **note;
	U64 dosage_count;
	Dosage **dosage;
};
class MedicinalProduct {
public: 
	ResourceType resourceType;
	fhir_string id;
	Meta *meta;
	fhir_uri implicitRules;
	fhir_code language;
	Narrative *text;
	U64 contained_count;
	Resource **contained;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	U64 identifier_count;
	Identifier **identifier;
	CodeableConcept *type;
	Coding *domain;
	CodeableConcept *combinedPharmaceuticalDoseForm;
	CodeableConcept *legalStatusOfSupply;
	CodeableConcept *additionalMonitoringIndicator;
	U64 specialMeasures_count;
	fhir_string *specialMeasures;
	CodeableConcept *paediatricUseIndicator;
	U64 productClassification_count;
	CodeableConcept **productClassification;
	U64 marketingStatus_count;
	MarketingStatus **marketingStatus;
	U64 pharmaceuticalProduct_count;
	Reference **pharmaceuticalProduct;
	U64 packagedMedicinalProduct_count;
	Reference **packagedMedicinalProduct;
	U64 attachedDocument_count;
	Reference **attachedDocument;
	U64 masterFile_count;
	Reference **masterFile;
	U64 contact_count;
	Reference **contact;
	U64 clinicalTrial_count;
	Reference **clinicalTrial;
	U64 name_count;
	MedicinalProduct_Name **name;
	U64 crossReference_count;
	Identifier **crossReference;
	U64 manufacturingBusinessOperation_count;
	MedicinalProduct_ManufacturingBusinessOperation **manufacturingBusinessOperation;
	U64 specialDesignation_count;
	MedicinalProduct_SpecialDesignation **specialDesignation;
};
class MedicinalProduct_Name {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	fhir_string productName;
	U64 namePart_count;
	MedicinalProduct_Name_NamePart **namePart;
	U64 countryLanguage_count;
	MedicinalProduct_Name_CountryLanguage **countryLanguage;
};
class MedicinalProduct_Name_NamePart {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	fhir_string part;
	Coding *type;
};
class MedicinalProduct_Name_CountryLanguage {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	CodeableConcept *country;
	CodeableConcept *jurisdiction;
	CodeableConcept *language;
};
class MedicinalProduct_ManufacturingBusinessOperation {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	CodeableConcept *operationType;
	Identifier *authorisationReferenceNumber;
	fhir_dateTime effectiveDate;
	CodeableConcept *confidentialityIndicator;
	U64 manufacturer_count;
	Reference **manufacturer;
	Reference *regulator;
};
class MedicinalProduct_SpecialDesignation {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	U64 identifier_count;
	Identifier **identifier;
	CodeableConcept *type;
	CodeableConcept *intendedUse;
	enum class IndicType {
		Unknown,
		CodeableConcept,
		Reference
	};
	IndicType indication_type_type;

	union {
		CodeableConcept* indicationCodeableConcept;
		Reference* indicationReference;
	} indication;

	CodeableConcept *status;
	fhir_dateTime date;
	CodeableConcept *species;
};
class MedicinalProductAuthorization {
public: 
	ResourceType resourceType;
	fhir_string id;
	Meta *meta;
	fhir_uri implicitRules;
	fhir_code language;
	Narrative *text;
	U64 contained_count;
	Resource **contained;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	U64 identifier_count;
	Identifier **identifier;
	Reference *subject;
	U64 country_count;
	CodeableConcept **country;
	U64 jurisdiction_count;
	CodeableConcept **jurisdiction;
	CodeableConcept *status;
	fhir_dateTime statusDate;
	fhir_dateTime restoreDate;
	Period *validityPeriod;
	Period *dataExclusivityPeriod;
	fhir_dateTime dateOfFirstAuthorization;
	fhir_dateTime internationalBirthDate;
	CodeableConcept *legalBasis;
	U64 jurisdictionalAuthorization_count;
	MedicinalProductAuthorization_JurisdictionalAuthorization **jurisdictionalAuthorization;
	Reference *holder;
	Reference *regulator;
	MedicinalProductAuthorization_Procedure *procedure;
};
class MedicinalProductAuthorization_JurisdictionalAuthorization {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	U64 identifier_count;
	Identifier **identifier;
	CodeableConcept *country;
	U64 jurisdiction_count;
	CodeableConcept **jurisdiction;
	CodeableConcept *legalStatusOfSupply;
	Period *validityPeriod;
};
class MedicinalProductAuthorization_Procedure {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	Identifier *identifier;
	CodeableConcept *type;
	enum class Date_Type {
		Unknown,
		Period,
		fhir_dateTime
	};
	Date_Type date_type_type;

	union {
		Period* datePeriod;
		fhir_dateTime dateDateTime;
	} date;

	U64 application_count;
	MedicinalProductAuthorization_Procedure **application;
};
class MedicinalProductContraindication {
public: 
	ResourceType resourceType;
	fhir_string id;
	Meta *meta;
	fhir_uri implicitRules;
	fhir_code language;
	Narrative *text;
	U64 contained_count;
	Resource **contained;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	U64 subject_count;
	Reference **subject;
	CodeableConcept *disease;
	CodeableConcept *diseaseStatus;
	U64 comorbidity_count;
	CodeableConcept **comorbidity;
	U64 therapeuticIndication_count;
	Reference **therapeuticIndication;
	U64 otherTherapy_count;
	MedicinalProductContraindication_OtherTherapy **otherTherapy;
	U64 population_count;
	Population **population;
};
class MedicinalProductContraindication_OtherTherapy {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	CodeableConcept *therapyRelationshipType;
	enum class MedicType {
		Unknown,
		CodeableConcept,
		Reference
	};
	MedicType medication_type_type;

	union {
		CodeableConcept* medicationCodeableConcept;
		Reference* medicationReference;
	} medication;

};
class MedicinalProductIndication {
public: 
	ResourceType resourceType;
	fhir_string id;
	Meta *meta;
	fhir_uri implicitRules;
	fhir_code language;
	Narrative *text;
	U64 contained_count;
	Resource **contained;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	U64 subject_count;
	Reference **subject;
	CodeableConcept *diseaseSymptomProcedure;
	CodeableConcept *diseaseStatus;
	U64 comorbidity_count;
	CodeableConcept **comorbidity;
	CodeableConcept *intendedEffect;
	Quantity *duration;
	U64 otherTherapy_count;
	MedicinalProductIndication_OtherTherapy **otherTherapy;
	U64 undesirableEffect_count;
	Reference **undesirableEffect;
	U64 population_count;
	Population **population;
};
class MedicinalProductIndication_OtherTherapy {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	CodeableConcept *therapyRelationshipType;
	enum class MedicType {
		Unknown,
		CodeableConcept,
		Reference
	};
	MedicType medication_type_type;

	union {
		CodeableConcept* medicationCodeableConcept;
		Reference* medicationReference;
	} medication;

};
class MedicinalProductIngredient {
public: 
	ResourceType resourceType;
	fhir_string id;
	Meta *meta;
	fhir_uri implicitRules;
	fhir_code language;
	Narrative *text;
	U64 contained_count;
	Resource **contained;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	Identifier *identifier;
	CodeableConcept *role;
	fhir_boolean allergenicIndicator;
	U64 manufacturer_count;
	Reference **manufacturer;
	U64 specifiedSubstance_count;
	MedicinalProductIngredient_SpecifiedSubstance **specifiedSubstance;
	MedicinalProductIngredient_Substance *substance;
};
class MedicinalProductIngredient_SpecifiedSubstance {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	CodeableConcept *code;
	CodeableConcept *group;
	CodeableConcept *confidentiality;
	U64 strength_count;
	MedicinalProductIngredient_SpecifiedSubstance_Strength **strength;
};
class MedicinalProductIngredient_SpecifiedSubstance_Strength {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	Ratio *presentation;
	Ratio *presentationLowLimit;
	Ratio *concentration;
	Ratio *concentrationLowLimit;
	fhir_string measurementPoint;
	U64 country_count;
	CodeableConcept **country;
	U64 referenceStrength_count;
	MedicinalProductIngredient_SpecifiedSubstance_Strength_ReferenceStrength **referenceStrength;
};
class MedicinalProductIngredient_SpecifiedSubstance_Strength_ReferenceStrength {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	CodeableConcept *substance;
	Ratio *strength;
	Ratio *strengthLowLimit;
	fhir_string measurementPoint;
	U64 country_count;
	CodeableConcept **country;
};
class MedicinalProductIngredient_Substance {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	CodeableConcept *code;
	U64 strength_count;
	MedicinalProductIngredient_SpecifiedSubstance_Strength **strength;
};
class MedicinalProductInteraction {
public: 
	ResourceType resourceType;
	fhir_string id;
	Meta *meta;
	fhir_uri implicitRules;
	fhir_code language;
	Narrative *text;
	U64 contained_count;
	Resource **contained;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	U64 subject_count;
	Reference **subject;
	fhir_string description;
	U64 interactant_count;
	MedicinalProductInteraction_Interactant **interactant;
	CodeableConcept *type;
	CodeableConcept *effect;
	CodeableConcept *incidence;
	CodeableConcept *management;
};
class MedicinalProductInteraction_Interactant {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	enum class Item_Type {
		Unknown,
		Reference,
		CodeableConcept
	};
	Item_Type item_type_type;

	union {
		Reference* itemReference;
		CodeableConcept* itemCodeableConcept;
	} item;

};
class MedicinalProductManufactured {
public: 
	ResourceType resourceType;
	fhir_string id;
	Meta *meta;
	fhir_uri implicitRules;
	fhir_code language;
	Narrative *text;
	U64 contained_count;
	Resource **contained;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	CodeableConcept *manufacturedDoseForm;
	CodeableConcept *unitOfPresentation;
	Quantity *quantity;
	U64 manufacturer_count;
	Reference **manufacturer;
	U64 ingredient_count;
	Reference **ingredient;
	ProdCharacteristic *physicalCharacteristics;
	U64 otherCharacteristics_count;
	CodeableConcept **otherCharacteristics;
};
class MedicinalProductPackaged {
public: 
	ResourceType resourceType;
	fhir_string id;
	Meta *meta;
	fhir_uri implicitRules;
	fhir_code language;
	Narrative *text;
	U64 contained_count;
	Resource **contained;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	U64 identifier_count;
	Identifier **identifier;
	U64 subject_count;
	Reference **subject;
	fhir_string description;
	CodeableConcept *legalStatusOfSupply;
	U64 marketingStatus_count;
	MarketingStatus **marketingStatus;
	Reference *marketingAuthorization;
	U64 manufacturer_count;
	Reference **manufacturer;
	U64 batchIdentifier_count;
	MedicinalProductPackaged_BatchIdentifier **batchIdentifier;
	U64 packageItem_count;
	MedicinalProductPackaged_PackageItem **packageItem;
};
class MedicinalProductPackaged_BatchIdentifier {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	Identifier *outerPackaging;
	Identifier *immediatePackaging;
};
class MedicinalProductPackaged_PackageItem {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	U64 identifier_count;
	Identifier **identifier;
	CodeableConcept *type;
	Quantity *quantity;
	U64 material_count;
	CodeableConcept **material;
	U64 alternateMaterial_count;
	CodeableConcept **alternateMaterial;
	U64 device_count;
	Reference **device;
	U64 manufacturedItem_count;
	Reference **manufacturedItem;
	U64 packageItem_count;
	MedicinalProductPackaged_PackageItem **packageItem;
	ProdCharacteristic *physicalCharacteristics;
	U64 otherCharacteristics_count;
	CodeableConcept **otherCharacteristics;
	U64 shelfLifeStorage_count;
	ProductShelfLife **shelfLifeStorage;
	U64 manufacturer_count;
	Reference **manufacturer;
};
class MedicinalProductPharmaceutical {
public: 
	ResourceType resourceType;
	fhir_string id;
	Meta *meta;
	fhir_uri implicitRules;
	fhir_code language;
	Narrative *text;
	U64 contained_count;
	Resource **contained;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	U64 identifier_count;
	Identifier **identifier;
	CodeableConcept *administrableDoseForm;
	CodeableConcept *unitOfPresentation;
	U64 ingredient_count;
	Reference **ingredient;
	U64 device_count;
	Reference **device;
	U64 characteristics_count;
	MedicinalProductPharmaceutical_Characteristics **characteristics;
	U64 routeOfAdministration_count;
	MedicinalProductPharmaceutical_RouteOfAdministration **routeOfAdministration;
};
class MedicinalProductPharmaceutical_Characteristics {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	CodeableConcept *code;
	CodeableConcept *status;
};
class MedicinalProductPharmaceutical_RouteOfAdministration {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	CodeableConcept *code;
	Quantity *firstDose;
	Quantity *maxSingleDose;
	Quantity *maxDosePerDay;
	Ratio *maxDosePerTreatmentPeriod;
	Duration *maxTreatmentPeriod;
	U64 targetSpecies_count;
	MedicinalProductPharmaceutical_RouteOfAdministration_TargetSpecies **targetSpecies;
};
class MedicinalProductPharmaceutical_RouteOfAdministration_TargetSpecies {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	CodeableConcept *code;
	U64 withdrawalPeriod_count;
	MedicinalProductPharmaceutical_RouteOfAdministration_TargetSpecies_WithdrawalPeriod **withdrawalPeriod;
};
class MedicinalProductPharmaceutical_RouteOfAdministration_TargetSpecies_WithdrawalPeriod {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	CodeableConcept *tissue;
	Quantity *value;
	fhir_string supportingInformation;
};
class MedicinalProductUndesirableEffect {
public: 
	ResourceType resourceType;
	fhir_string id;
	Meta *meta;
	fhir_uri implicitRules;
	fhir_code language;
	Narrative *text;
	U64 contained_count;
	Resource **contained;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	U64 subject_count;
	Reference **subject;
	CodeableConcept *symptomConditionEffect;
	CodeableConcept *classification;
	CodeableConcept *frequencyOfOccurrence;
	U64 population_count;
	Population **population;
};
class MessageDefinition {
public: 
	ResourceType resourceType;
	fhir_string id;
	Meta *meta;
	fhir_uri implicitRules;
	fhir_code language;
	Narrative *text;
	U64 contained_count;
	Resource **contained;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	fhir_uri url;
	U64 identifier_count;
	Identifier **identifier;
	fhir_string version;
	fhir_string name;
	fhir_string title;
	U64 replaces_count;
	fhir_canonical *replaces;
	fhir_code status;
	fhir_boolean experimental;
	fhir_dateTime date;
	fhir_string publisher;
	U64 contact_count;
	ContactDetail **contact;
	fhir_markdown description;
	U64 useContext_count;
	UsageContext **useContext;
	U64 jurisdiction_count;
	CodeableConcept **jurisdiction;
	fhir_markdown purpose;
	fhir_markdown copyright;
	fhir_canonical base;
	U64 parent_count;
	fhir_canonical *parent;
	enum class EventType {
		Unknown,
		Coding,
		fhir_uri
	};
	EventType event_type_type;

	union {
		Coding* eventCoding;
		fhir_uri eventUri;
	} event;

	fhir_code category;
	U64 focus_count;
	MessageDefinition_Focus **focus;
	fhir_code responseRequired;
	U64 allowedResponse_count;
	MessageDefinition_AllowedResponse **allowedResponse;
	U64 graph_count;
	fhir_canonical *graph;
};
class MessageDefinition_Focus {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	fhir_code code;
	fhir_canonical profile;
	fhir_unsignedInt min;
	fhir_string max;
};
class MessageDefinition_AllowedResponse {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	fhir_canonical message;
	fhir_markdown situation;
};
class MessageHeader {
public: 
	ResourceType resourceType;
	fhir_string id;
	Meta *meta;
	fhir_uri implicitRules;
	fhir_code language;
	Narrative *text;
	U64 contained_count;
	Resource **contained;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	enum class EventType {
		Unknown,
		Coding,
		fhir_uri
	};
	EventType event_type_type;

	union {
		Coding* eventCoding;
		fhir_uri eventUri;
	} event;

	U64 destination_count;
	MessageHeader_Destination **destination;
	Reference *sender;
	Reference *enterer;
	Reference *author;
	MessageHeader_Source *source;
	Reference *responsible;
	CodeableConcept *reason;
	MessageHeader_Response *response;
	U64 focus_count;
	Reference **focus;
	fhir_canonical definition;
};
class MessageHeader_Destination {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	fhir_string name;
	Reference *target;
	fhir_url endpoint;
	Reference *receiver;
};
class MessageHeader_Source {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	fhir_string name;
	fhir_string software;
	fhir_string version;
	ContactPoint *contact;
	fhir_url endpoint;
};
class MessageHeader_Response {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	fhir_id identifier;
	fhir_code code;
	Reference *details;
};
class MolecularSequence {
public: 
	ResourceType resourceType;
	fhir_string id;
	Meta *meta;
	fhir_uri implicitRules;
	fhir_code language;
	Narrative *text;
	U64 contained_count;
	Resource **contained;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	U64 identifier_count;
	Identifier **identifier;
	fhir_code type;
	Integer *coordinateSystem;
	Reference *patient;
	Reference *specimen;
	Reference *device;
	Reference *performer;
	Quantity *quantity;
	MolecularSequence_ReferenceSeq *referenceSeq;
	U64 variant_count;
	MolecularSequence_Variant **variant;
	fhir_string observedSeq;
	U64 quality_count;
	MolecularSequence_Quality **quality;
	Integer *readCoverage;
	U64 repository_count;
	MolecularSequence_Repository **repository;
	U64 pointer_count;
	Reference **pointer;
	U64 structureVariant_count;
	MolecularSequence_StructureVariant **structureVariant;
};
class MolecularSequence_ReferenceSeq {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	CodeableConcept *chromosome;
	fhir_string genomeBuild;
	fhir_code orientation;
	CodeableConcept *referenceSeqId;
	Reference *referenceSeqPointer;
	fhir_string referenceSeqString;
	fhir_code strand;
	Integer *windowStart;
	Integer *windowEnd;
};
class MolecularSequence_Variant {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	Integer *start;
	Integer *end;
	fhir_string observedAllele;
	fhir_string referenceAllele;
	fhir_string cigar;
	Reference *variantPointer;
};
class MolecularSequence_Quality {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	fhir_code type;
	CodeableConcept *standardSequence;
	Integer *start;
	Integer *end;
	Quantity *score;
	CodeableConcept *method;
	fhir_decimal truthTP;
	fhir_decimal queryTP;
	fhir_decimal truthFN;
	fhir_decimal queryFP;
	fhir_decimal gtFP;
	fhir_decimal precision;
	fhir_decimal recall;
	fhir_decimal fScore;
	MolecularSequence_Quality_Roc *roc;
};
class MolecularSequence_Quality_Roc {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	U64 score_count;
	Integer **score;
	U64 numTP_count;
	Integer **numTP;
	U64 numFP_count;
	Integer **numFP;
	U64 numFN_count;
	Integer **numFN;
	U64 precision_count;
	fhir_decimal *precision;
	U64 sensitivity_count;
	fhir_decimal *sensitivity;
	U64 fMeasure_count;
	fhir_decimal *fMeasure;
};
class MolecularSequence_Repository {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	fhir_code type;
	fhir_uri url;
	fhir_string name;
	fhir_string datasetId;
	fhir_string variantsetId;
	fhir_string readsetId;
};
class MolecularSequence_StructureVariant {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	CodeableConcept *variantType;
	fhir_boolean exact;
	Integer *length;
	MolecularSequence_StructureVariant_Outer *outer;
	MolecularSequence_StructureVariant_Inner *inner;
};
class MolecularSequence_StructureVariant_Outer {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	Integer *start;
	Integer *end;
};
class MolecularSequence_StructureVariant_Inner {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	Integer *start;
	Integer *end;
};
class NamingSystem {
public: 
	ResourceType resourceType;
	fhir_string id;
	Meta *meta;
	fhir_uri implicitRules;
	fhir_code language;
	Narrative *text;
	U64 contained_count;
	Resource **contained;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	fhir_string name;
	fhir_code status;
	fhir_code kind;
	fhir_dateTime date;
	fhir_string publisher;
	U64 contact_count;
	ContactDetail **contact;
	fhir_string responsible;
	CodeableConcept *type;
	fhir_markdown description;
	U64 useContext_count;
	UsageContext **useContext;
	U64 jurisdiction_count;
	CodeableConcept **jurisdiction;
	fhir_string usage;
	U64 uniqueId_count;
	NamingSystem_UniqueId **uniqueId;
};
class NamingSystem_UniqueId {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	fhir_code type;
	fhir_string value;
	fhir_boolean preferred;
	fhir_string comment;
	Period *period;
};
class NutritionOrder {
public: 
	ResourceType resourceType;
	fhir_string id;
	Meta *meta;
	fhir_uri implicitRules;
	fhir_code language;
	Narrative *text;
	U64 contained_count;
	Resource **contained;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	U64 identifier_count;
	Identifier **identifier;
	U64 instantiatesCanonical_count;
	fhir_canonical *instantiatesCanonical;
	U64 instantiatesUri_count;
	fhir_uri *instantiatesUri;
	U64 instantiates_count;
	fhir_uri *instantiates;
	fhir_code status;
	fhir_code intent;
	Reference *patient;
	Reference *encounter;
	fhir_dateTime dateTime;
	Reference *orderer;
	U64 allergyIntolerance_count;
	Reference **allergyIntolerance;
	U64 foodPreferenceModifier_count;
	CodeableConcept **foodPreferenceModifier;
	U64 excludeFoodModifier_count;
	CodeableConcept **excludeFoodModifier;
	NutritionOrder_OralDiet *oralDiet;
	U64 supplement_count;
	NutritionOrder_Supplement **supplement;
	NutritionOrder_EnteralFormula *enteralFormula;
	U64 note_count;
	Annotation **note;
};
class NutritionOrder_OralDiet {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	U64 type_count;
	CodeableConcept **type;
	U64 schedule_count;
	Timing **schedule;
	U64 nutrient_count;
	NutritionOrder_OralDiet_Nutrient **nutrient;
	U64 texture_count;
	NutritionOrder_OralDiet_Texture **texture;
	U64 fluidConsistencyType_count;
	CodeableConcept **fluidConsistencyType;
	fhir_string instruction;
};
class NutritionOrder_OralDiet_Nutrient {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	CodeableConcept *modifier;
	Quantity *amount;
};
class NutritionOrder_OralDiet_Texture {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	CodeableConcept *modifier;
	CodeableConcept *foodType;
};
class NutritionOrder_Supplement {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	CodeableConcept *type;
	fhir_string productName;
	U64 schedule_count;
	Timing **schedule;
	Quantity *quantity;
	fhir_string instruction;
};
class NutritionOrder_EnteralFormula {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	CodeableConcept *baseFormulaType;
	fhir_string baseFormulaProductName;
	CodeableConcept *additiveType;
	fhir_string additiveProductName;
	Quantity *caloricDensity;
	CodeableConcept *routeofAdministration;
	U64 administration_count;
	NutritionOrder_EnteralFormula_Administration **administration;
	Quantity *maxVolumeToDeliver;
	fhir_string administrationInstruction;
};
class NutritionOrder_EnteralFormula_Administration {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	Timing *schedule;
	Quantity *quantity;
	enum class Rate_Type {
		Unknown,
		Quantity,
		Ratio
	};
	Rate_Type rate_type_type;

	union {
		Quantity* rateQuantity;
		Ratio* rateRatio;
	} rate;

};
class Observation {
public: 
	ResourceType resourceType;
	fhir_string id;
	Meta *meta;
	fhir_uri implicitRules;
	fhir_code language;
	Narrative *text;
	U64 contained_count;
	Resource **contained;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	U64 identifier_count;
	Identifier **identifier;
	U64 basedOn_count;
	Reference **basedOn;
	U64 partOf_count;
	Reference **partOf;
	fhir_code status;
	U64 category_count;
	CodeableConcept **category;
	CodeableConcept *code;
	Reference *subject;
	U64 focus_count;
	Reference **focus;
	Reference *encounter;
	enum class EffecType {
		Unknown,
		fhir_dateTime,
		Period,
		Timing,
		fhir_instant
	};
	EffecType effective_type_type;

	union {
		fhir_dateTime effectiveDateTime;
		Period* effectivePeriod;
		Timing* effectiveTiming;
		fhir_instant effectiveInstant;
	} effective;

	fhir_instant issued;
	U64 performer_count;
	Reference **performer;
	enum class ValueType {
		Unknown,
		Quantity,
		CodeableConcept,
		fhir_string,
		fhir_boolean,
		Integer,
		Range,
		Ratio,
		SampledData,
		fhir_time,
		fhir_dateTime,
		Period
	};
	ValueType value_type_type;

	union {
		Quantity* valueQuantity;
		CodeableConcept* valueCodeableConcept;
		fhir_string valueString;
		fhir_boolean valueBoolean;
		Integer* valueInteger;
		Range* valueRange;
		Ratio* valueRatio;
		SampledData* valueSampledData;
		fhir_time valueTime;
		fhir_dateTime valueDateTime;
		Period* valuePeriod;
	} value;

	CodeableConcept *dataAbsentReason;
	U64 interpretation_count;
	CodeableConcept **interpretation;
	U64 note_count;
	Annotation **note;
	CodeableConcept *bodySite;
	CodeableConcept *method;
	Reference *specimen;
	Reference *device;
	U64 referenceRange_count;
	Observation_ReferenceRange **referenceRange;
	U64 hasMember_count;
	Reference **hasMember;
	U64 derivedFrom_count;
	Reference **derivedFrom;
	U64 component_count;
	Observation_Component **component;
};
class Observation_ReferenceRange {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	Quantity *low;
	Quantity *high;
	CodeableConcept *type;
	U64 appliesTo_count;
	CodeableConcept **appliesTo;
	Range *age;
	fhir_string text;
};
class Observation_Component {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	CodeableConcept *code;
	enum class ValueType {
		Unknown,
		Quantity,
		CodeableConcept,
		fhir_string,
		fhir_boolean,
		Integer,
		Range,
		Ratio,
		SampledData,
		fhir_time,
		fhir_dateTime,
		Period
	};
	ValueType value_type_type;

	union {
		Quantity* valueQuantity;
		CodeableConcept* valueCodeableConcept;
		fhir_string valueString;
		fhir_boolean valueBoolean;
		Integer* valueInteger;
		Range* valueRange;
		Ratio* valueRatio;
		SampledData* valueSampledData;
		fhir_time valueTime;
		fhir_dateTime valueDateTime;
		Period* valuePeriod;
	} value;

	CodeableConcept *dataAbsentReason;
	U64 interpretation_count;
	CodeableConcept **interpretation;
	U64 referenceRange_count;
	Observation_ReferenceRange **referenceRange;
};
class ObservationDefinition {
public: 
	ResourceType resourceType;
	fhir_string id;
	Meta *meta;
	fhir_uri implicitRules;
	fhir_code language;
	Narrative *text;
	U64 contained_count;
	Resource **contained;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	U64 category_count;
	CodeableConcept **category;
	CodeableConcept *code;
	U64 identifier_count;
	Identifier **identifier;
	U64 permittedDataType_count;
	fhir_code *permittedDataType;
	fhir_boolean multipleResultsAllowed;
	CodeableConcept *method;
	fhir_string preferredReportName;
	ObservationDefinition_QuantitativeDetails *quantitativeDetails;
	U64 qualifiedInterval_count;
	ObservationDefinition_QualifiedInterval **qualifiedInterval;
	Reference *validCodedValueSet;
	Reference *normalCodedValueSet;
	Reference *abnormalCodedValueSet;
	Reference *criticalCodedValueSet;
};
class ObservationDefinition_QuantitativeDetails {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	CodeableConcept *customaryUnit;
	CodeableConcept *unit;
	fhir_decimal conversionFactor;
	Integer *decimalPrecision;
};
class ObservationDefinition_QualifiedInterval {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	fhir_code category;
	Range *range;
	CodeableConcept *context;
	U64 appliesTo_count;
	CodeableConcept **appliesTo;
	fhir_code gender;
	Range *age;
	Range *gestationalAge;
	fhir_string condition;
};
class OperationDefinition {
public: 
	ResourceType resourceType;
	fhir_string id;
	Meta *meta;
	fhir_uri implicitRules;
	fhir_code language;
	Narrative *text;
	U64 contained_count;
	Resource **contained;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	fhir_uri url;
	fhir_string version;
	fhir_string name;
	fhir_string title;
	fhir_code status;
	fhir_code kind;
	fhir_boolean experimental;
	fhir_dateTime date;
	fhir_string publisher;
	U64 contact_count;
	ContactDetail **contact;
	fhir_markdown description;
	U64 useContext_count;
	UsageContext **useContext;
	U64 jurisdiction_count;
	CodeableConcept **jurisdiction;
	fhir_markdown purpose;
	fhir_boolean affectsState;
	fhir_code code;
	fhir_markdown comment;
	fhir_canonical base;
	U64 resource_count;
	fhir_code *resource;
	fhir_boolean system;
	fhir_boolean type;
	fhir_boolean instance;
	fhir_canonical inputProfile;
	fhir_canonical outputProfile;
	U64 parameter_count;
	OperationDefinition_Parameter **parameter;
	U64 overload_count;
	OperationDefinition_Overload **overload;
};
class OperationDefinition_Parameter {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	fhir_code name;
	fhir_code use;
	Integer *min;
	fhir_string max;
	fhir_string documentation;
	fhir_code type;
	U64 targetProfile_count;
	fhir_canonical *targetProfile;
	fhir_code searchType;
	OperationDefinition_Parameter_Binding *binding;
	U64 referencedFrom_count;
	OperationDefinition_Parameter_ReferencedFrom **referencedFrom;
	U64 part_count;
	OperationDefinition_Parameter **part;
};
class OperationDefinition_Parameter_Binding {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	fhir_code strength;
	fhir_canonical valueSet;
};
class OperationDefinition_Parameter_ReferencedFrom {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	fhir_string source;
	fhir_string sourceId;
};
class OperationDefinition_Overload {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	U64 parameterName_count;
	fhir_string *parameterName;
	fhir_string comment;
};
class OperationOutcome {
public: 
	ResourceType resourceType;
	fhir_string id;
	Meta *meta;
	fhir_uri implicitRules;
	fhir_code language;
	Narrative *text;
	U64 contained_count;
	Resource **contained;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	U64 issue_count;
	OperationOutcome_Issue **issue;
};
class OperationOutcome_Issue {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	fhir_code severity;
	fhir_code code;
	CodeableConcept *details;
	fhir_string diagnostics;
	U64 location_count;
	fhir_string *location;
	U64 expression_count;
	fhir_string *expression;
};
class Organization {
public: 
	ResourceType resourceType;
	fhir_string id;
	Meta *meta;
	fhir_uri implicitRules;
	fhir_code language;
	Narrative *text;
	U64 contained_count;
	Resource **contained;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	U64 identifier_count;
	Identifier **identifier;
	fhir_boolean active;
	U64 type_count;
	CodeableConcept **type;
	fhir_string name;
	U64 alias_count;
	fhir_string *alias;
	U64 telecom_count;
	ContactPoint **telecom;
	U64 address_count;
	Address **address;
	Reference *partOf;
	U64 contact_count;
	Organization_Contact **contact;
	U64 endpoint_count;
	Reference **endpoint;
};
class Organization_Contact {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	CodeableConcept *purpose;
	HumanName *name;
	U64 telecom_count;
	ContactPoint **telecom;
	Address *address;
};
class OrganizationAffiliation {
public: 
	ResourceType resourceType;
	fhir_string id;
	Meta *meta;
	fhir_uri implicitRules;
	fhir_code language;
	Narrative *text;
	U64 contained_count;
	Resource **contained;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	U64 identifier_count;
	Identifier **identifier;
	fhir_boolean active;
	Period *period;
	Reference *organization;
	Reference *participatingOrganization;
	U64 network_count;
	Reference **network;
	U64 code_count;
	CodeableConcept **code;
	U64 specialty_count;
	CodeableConcept **specialty;
	U64 location_count;
	Reference **location;
	U64 healthcareService_count;
	Reference **healthcareService;
	U64 telecom_count;
	ContactPoint **telecom;
	U64 endpoint_count;
	Reference **endpoint;
};
class Parameters {
public: 
	ResourceType resourceType;
	fhir_string id;
	Meta *meta;
	fhir_uri implicitRules;
	fhir_code language;
	U64 parameter_count;
	Parameters_Parameter **parameter;
};
class Parameters_Parameter {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	fhir_string name;
	enum class ValueType {
		Unknown,
		fhir_base64Binary,
		fhir_boolean,
		fhir_canonical,
		fhir_code,
		fhir_date,
		fhir_dateTime,
		fhir_decimal,
		fhir_id,
		fhir_instant,
		Integer,
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
	};
	ValueType value_type_type;

	union {
		fhir_base64Binary valueBase64Binary;
		fhir_boolean valueBoolean;
		fhir_canonical valueCanonical;
		fhir_code valueCode;
		fhir_date valueDate;
		fhir_dateTime valueDateTime;
		fhir_decimal valueDecimal;
		fhir_id valueId;
		fhir_instant valueInstant;
		Integer* valueInteger;
		fhir_markdown valueMarkdown;
		fhir_oid valueOid;
		fhir_positiveInt valuePositiveInt;
		fhir_string valueString;
		fhir_time valueTime;
		fhir_unsignedInt valueUnsignedInt;
		fhir_uri valueUri;
		fhir_url valueUrl;
		fhir_uuid valueUuid;
		Address* valueAddress;
		Age* valueAge;
		Annotation* valueAnnotation;
		Attachment* valueAttachment;
		CodeableConcept* valueCodeableConcept;
		Coding* valueCoding;
		ContactPoint* valueContactPoint;
		Count* valueCount;
		Distance* valueDistance;
		Duration* valueDuration;
		HumanName* valueHumanName;
		Identifier* valueIdentifier;
		Money* valueMoney;
		Period* valuePeriod;
		Quantity* valueQuantity;
		Range* valueRange;
		Ratio* valueRatio;
		Reference* valueReference;
		SampledData* valueSampledData;
		Signature* valueSignature;
		Timing* valueTiming;
		ContactDetail* valueContactDetail;
		Contributor* valueContributor;
		DataRequirement* valueDataRequirement;
		Expression* valueExpression;
		ParameterDefinition* valueParameterDefinition;
		RelatedArtifact* valueRelatedArtifact;
		TriggerDefinition* valueTriggerDefinition;
		UsageContext* valueUsageContext;
		Dosage* valueDosage;
		Meta* valueMeta;
	} value;

	Resource *resource;
	U64 part_count;
	Parameters_Parameter **part;
};
class Patient {
public: 
	ResourceType resourceType;
	fhir_string id;
	Meta *meta;
	fhir_uri implicitRules;
	fhir_code language;
	Narrative *text;
	U64 contained_count;
	Resource **contained;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	U64 identifier_count;
	Identifier **identifier;
	fhir_boolean active;
	U64 name_count;
	HumanName **name;
	U64 telecom_count;
	ContactPoint **telecom;
	fhir_code gender;
	fhir_date birthDate;
	enum class DeceaType {
		Unknown,
		fhir_boolean,
		fhir_dateTime
	};
	DeceaType deceased_type_type;

	union {
		fhir_boolean deceasedBoolean;
		fhir_dateTime deceasedDateTime;
	} deceased;

	U64 address_count;
	Address **address;
	CodeableConcept *maritalStatus;
	enum class MultiType {
		Unknown,
		fhir_boolean,
		Integer
	};
	MultiType multipleBirth_type_type;

	union {
		fhir_boolean multipleBirthBoolean;
		Integer* multipleBirthInteger;
	} multipleBirth;

	U64 photo_count;
	Attachment **photo;
	U64 contact_count;
	Patient_Contact **contact;
	U64 communication_count;
	Patient_Communication **communication;
	U64 generalPractitioner_count;
	Reference **generalPractitioner;
	Reference *managingOrganization;
	U64 link_count;
	Patient_Link **link;
};
class Patient_Contact {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	U64 relationship_count;
	CodeableConcept **relationship;
	HumanName *name;
	U64 telecom_count;
	ContactPoint **telecom;
	Address *address;
	fhir_code gender;
	Reference *organization;
	Period *period;
};
class Patient_Communication {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	CodeableConcept *language;
	fhir_boolean preferred;
};
class Patient_Link {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	Reference *other;
	fhir_code type;
};
class PaymentNotice {
public: 
	ResourceType resourceType;
	fhir_string id;
	Meta *meta;
	fhir_uri implicitRules;
	fhir_code language;
	Narrative *text;
	U64 contained_count;
	Resource **contained;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	U64 identifier_count;
	Identifier **identifier;
	fhir_code status;
	Reference *request;
	Reference *response;
	fhir_dateTime created;
	Reference *provider;
	Reference *payment;
	fhir_date paymentDate;
	Reference *payee;
	Reference *recipient;
	Money *amount;
	CodeableConcept *paymentStatus;
};
class PaymentReconciliation {
public: 
	ResourceType resourceType;
	fhir_string id;
	Meta *meta;
	fhir_uri implicitRules;
	fhir_code language;
	Narrative *text;
	U64 contained_count;
	Resource **contained;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	U64 identifier_count;
	Identifier **identifier;
	fhir_code status;
	Period *period;
	fhir_dateTime created;
	Reference *paymentIssuer;
	Reference *request;
	Reference *requestor;
	fhir_code outcome;
	fhir_string disposition;
	fhir_date paymentDate;
	Money *paymentAmount;
	Identifier *paymentIdentifier;
	U64 detail_count;
	PaymentReconciliation_Detail **detail;
	CodeableConcept *formCode;
	U64 processNote_count;
	PaymentReconciliation_ProcessNote **processNote;
};
class PaymentReconciliation_Detail {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	Identifier *identifier;
	Identifier *predecessor;
	CodeableConcept *type;
	Reference *request;
	Reference *submitter;
	Reference *response;
	fhir_date date;
	Reference *responsible;
	Reference *payee;
	Money *amount;
};
class PaymentReconciliation_ProcessNote {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	fhir_code type;
	fhir_string text;
};
class Person {
public: 
	ResourceType resourceType;
	fhir_string id;
	Meta *meta;
	fhir_uri implicitRules;
	fhir_code language;
	Narrative *text;
	U64 contained_count;
	Resource **contained;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	U64 identifier_count;
	Identifier **identifier;
	U64 name_count;
	HumanName **name;
	U64 telecom_count;
	ContactPoint **telecom;
	fhir_code gender;
	fhir_date birthDate;
	U64 address_count;
	Address **address;
	Attachment *photo;
	Reference *managingOrganization;
	fhir_boolean active;
	U64 link_count;
	Person_Link **link;
};
class Person_Link {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	Reference *target;
	fhir_code assurance;
};
class PlanDefinition {
public: 
	ResourceType resourceType;
	fhir_string id;
	Meta *meta;
	fhir_uri implicitRules;
	fhir_code language;
	Narrative *text;
	U64 contained_count;
	Resource **contained;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	fhir_uri url;
	U64 identifier_count;
	Identifier **identifier;
	fhir_string version;
	fhir_string name;
	fhir_string title;
	fhir_string subtitle;
	CodeableConcept *type;
	fhir_code status;
	fhir_boolean experimental;
	enum class SubjeType {
		Unknown,
		CodeableConcept,
		Reference
	};
	SubjeType subject_type_type;

	union {
		CodeableConcept* subjectCodeableConcept;
		Reference* subjectReference;
	} subject;

	fhir_dateTime date;
	fhir_string publisher;
	U64 contact_count;
	ContactDetail **contact;
	fhir_markdown description;
	U64 useContext_count;
	UsageContext **useContext;
	U64 jurisdiction_count;
	CodeableConcept **jurisdiction;
	fhir_markdown purpose;
	fhir_string usage;
	fhir_markdown copyright;
	fhir_date approvalDate;
	fhir_date lastReviewDate;
	Period *effectivePeriod;
	U64 topic_count;
	CodeableConcept **topic;
	U64 author_count;
	ContactDetail **author;
	U64 editor_count;
	ContactDetail **editor;
	U64 reviewer_count;
	ContactDetail **reviewer;
	U64 endorser_count;
	ContactDetail **endorser;
	U64 relatedArtifact_count;
	RelatedArtifact **relatedArtifact;
	U64 library_count;
	fhir_canonical *library;
	U64 goal_count;
	PlanDefinition_Goal **goal;
	U64 action_count;
	PlanDefinition_Action **action;
};
class PlanDefinition_Goal {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	CodeableConcept *category;
	CodeableConcept *description;
	CodeableConcept *priority;
	CodeableConcept *start;
	U64 addresses_count;
	CodeableConcept **addresses;
	U64 documentation_count;
	RelatedArtifact **documentation;
	U64 target_count;
	PlanDefinition_Goal_Target **target;
};
class PlanDefinition_Goal_Target {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	CodeableConcept *measure;
	enum class DetaiType {
		Unknown,
		Quantity,
		Range,
		CodeableConcept
	};
	DetaiType detail_type_type;

	union {
		Quantity* detailQuantity;
		Range* detailRange;
		CodeableConcept* detailCodeableConcept;
	} detail;

	Duration *due;
};
class PlanDefinition_Action {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	fhir_string prefix;
	fhir_string title;
	fhir_string description;
	fhir_string textEquivalent;
	fhir_code priority;
	U64 code_count;
	CodeableConcept **code;
	U64 reason_count;
	CodeableConcept **reason;
	U64 documentation_count;
	RelatedArtifact **documentation;
	U64 goalId_count;
	fhir_id *goalId;
	enum class SubjeType {
		Unknown,
		CodeableConcept,
		Reference
	};
	SubjeType subject_type_type;

	union {
		CodeableConcept* subjectCodeableConcept;
		Reference* subjectReference;
	} subject;

	U64 trigger_count;
	TriggerDefinition **trigger;
	U64 condition_count;
	PlanDefinition_Action_Condition **condition;
	U64 input_count;
	DataRequirement **input;
	U64 output_count;
	DataRequirement **output;
	U64 relatedAction_count;
	PlanDefinition_Action_RelatedAction **relatedAction;
	enum class TiminType {
		Unknown,
		fhir_dateTime,
		Age,
		Period,
		Duration,
		Range,
		Timing
	};
	TiminType timing_type_type;

	union {
		fhir_dateTime timingDateTime;
		Age* timingAge;
		Period* timingPeriod;
		Duration* timingDuration;
		Range* timingRange;
		Timing* timingTiming;
	} timing;

	U64 participant_count;
	PlanDefinition_Action_Participant **participant;
	CodeableConcept *type;
	fhir_code groupingBehavior;
	fhir_code selectionBehavior;
	fhir_code requiredBehavior;
	fhir_code precheckBehavior;
	fhir_code cardinalityBehavior;
	enum class DefinType {
		Unknown,
		fhir_canonical,
		fhir_uri
	};
	DefinType definition_type_type;

	union {
		fhir_canonical definitionCanonical;
		fhir_uri definitionUri;
	} definition;

	fhir_canonical transform;
	U64 dynamicValue_count;
	PlanDefinition_Action_DynamicValue **dynamicValue;
	U64 action_count;
	PlanDefinition_Action **action;
};
class PlanDefinition_Action_Condition {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	fhir_code kind;
	Expression *expression;
};
class PlanDefinition_Action_RelatedAction {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	fhir_id actionId;
	fhir_code relationship;
	enum class OffseType {
		Unknown,
		Duration,
		Range
	};
	OffseType offset_type_type;

	union {
		Duration* offsetDuration;
		Range* offsetRange;
	} offset;

};
class PlanDefinition_Action_Participant {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	fhir_code type;
	CodeableConcept *role;
};
class PlanDefinition_Action_DynamicValue {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	fhir_string path;
	Expression *expression;
};
class Practitioner {
public: 
	ResourceType resourceType;
	fhir_string id;
	Meta *meta;
	fhir_uri implicitRules;
	fhir_code language;
	Narrative *text;
	U64 contained_count;
	Resource **contained;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	U64 identifier_count;
	Identifier **identifier;
	fhir_boolean active;
	U64 name_count;
	HumanName **name;
	U64 telecom_count;
	ContactPoint **telecom;
	U64 address_count;
	Address **address;
	fhir_code gender;
	fhir_date birthDate;
	U64 photo_count;
	Attachment **photo;
	U64 qualification_count;
	Practitioner_Qualification **qualification;
	U64 communication_count;
	CodeableConcept **communication;
};
class Practitioner_Qualification {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	U64 identifier_count;
	Identifier **identifier;
	CodeableConcept *code;
	Period *period;
	Reference *issuer;
};
class PractitionerRole {
public: 
	ResourceType resourceType;
	fhir_string id;
	Meta *meta;
	fhir_uri implicitRules;
	fhir_code language;
	Narrative *text;
	U64 contained_count;
	Resource **contained;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	U64 identifier_count;
	Identifier **identifier;
	fhir_boolean active;
	Period *period;
	Reference *practitioner;
	Reference *organization;
	U64 code_count;
	CodeableConcept **code;
	U64 specialty_count;
	CodeableConcept **specialty;
	U64 location_count;
	Reference **location;
	U64 healthcareService_count;
	Reference **healthcareService;
	U64 telecom_count;
	ContactPoint **telecom;
	U64 availableTime_count;
	PractitionerRole_AvailableTime **availableTime;
	U64 notAvailable_count;
	PractitionerRole_NotAvailable **notAvailable;
	fhir_string availabilityExceptions;
	U64 endpoint_count;
	Reference **endpoint;
};
class PractitionerRole_AvailableTime {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	U64 daysOfWeek_count;
	fhir_code *daysOfWeek;
	fhir_boolean allDay;
	fhir_time availableStartTime;
	fhir_time availableEndTime;
};
class PractitionerRole_NotAvailable {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	fhir_string description;
	Period *during;
};
class Procedure {
public: 
	ResourceType resourceType;
	fhir_string id;
	Meta *meta;
	fhir_uri implicitRules;
	fhir_code language;
	Narrative *text;
	U64 contained_count;
	Resource **contained;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	U64 identifier_count;
	Identifier **identifier;
	U64 instantiatesCanonical_count;
	fhir_canonical *instantiatesCanonical;
	U64 instantiatesUri_count;
	fhir_uri *instantiatesUri;
	U64 basedOn_count;
	Reference **basedOn;
	U64 partOf_count;
	Reference **partOf;
	fhir_code status;
	CodeableConcept *statusReason;
	CodeableConcept *category;
	CodeableConcept *code;
	Reference *subject;
	Reference *encounter;
	enum class PerfoType {
		Unknown,
		fhir_dateTime,
		Period,
		fhir_string,
		Age,
		Range
	};
	PerfoType performed_type_type;

	union {
		fhir_dateTime performedDateTime;
		Period* performedPeriod;
		fhir_string performedString;
		Age* performedAge;
		Range* performedRange;
	} performed;

	Reference *recorder;
	Reference *asserter;
	U64 performer_count;
	Procedure_Performer **performer;
	Reference *location;
	U64 reasonCode_count;
	CodeableConcept **reasonCode;
	U64 reasonReference_count;
	Reference **reasonReference;
	U64 bodySite_count;
	CodeableConcept **bodySite;
	CodeableConcept *outcome;
	U64 report_count;
	Reference **report;
	U64 complication_count;
	CodeableConcept **complication;
	U64 complicationDetail_count;
	Reference **complicationDetail;
	U64 followUp_count;
	CodeableConcept **followUp;
	U64 note_count;
	Annotation **note;
	U64 focalDevice_count;
	Procedure_FocalDevice **focalDevice;
	U64 usedReference_count;
	Reference **usedReference;
	U64 usedCode_count;
	CodeableConcept **usedCode;
};
class Procedure_Performer {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	CodeableConcept *function_;
	Reference *actor;
	Reference *onBehalfOf;
};
class Procedure_FocalDevice {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	CodeableConcept *action;
	Reference *manipulated;
};
class Provenance {
public: 
	ResourceType resourceType;
	fhir_string id;
	Meta *meta;
	fhir_uri implicitRules;
	fhir_code language;
	Narrative *text;
	U64 contained_count;
	Resource **contained;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	U64 target_count;
	Reference **target;
	enum class OccurType {
		Unknown,
		Period,
		fhir_dateTime
	};
	OccurType occurred_type_type;

	union {
		Period* occurredPeriod;
		fhir_dateTime occurredDateTime;
	} occurred;

	fhir_instant recorded;
	U64 policy_count;
	fhir_uri *policy;
	Reference *location;
	U64 reason_count;
	CodeableConcept **reason;
	CodeableConcept *activity;
	U64 agent_count;
	Provenance_Agent **agent;
	U64 entity_count;
	Provenance_Entity **entity;
	U64 signature_count;
	Signature **signature;
};
class Provenance_Agent {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	CodeableConcept *type;
	U64 role_count;
	CodeableConcept **role;
	Reference *who;
	Reference *onBehalfOf;
};
class Provenance_Entity {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	fhir_code role;
	Reference *what;
	U64 agent_count;
	Provenance_Agent **agent;
};
class Questionnaire {
public: 
	ResourceType resourceType;
	fhir_string id;
	Meta *meta;
	fhir_uri implicitRules;
	fhir_code language;
	Narrative *text;
	U64 contained_count;
	Resource **contained;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	fhir_uri url;
	U64 identifier_count;
	Identifier **identifier;
	fhir_string version;
	fhir_string name;
	fhir_string title;
	U64 derivedFrom_count;
	fhir_canonical *derivedFrom;
	fhir_code status;
	fhir_boolean experimental;
	U64 subjectType_count;
	fhir_code *subjectType;
	fhir_dateTime date;
	fhir_string publisher;
	U64 contact_count;
	ContactDetail **contact;
	fhir_markdown description;
	U64 useContext_count;
	UsageContext **useContext;
	U64 jurisdiction_count;
	CodeableConcept **jurisdiction;
	fhir_markdown purpose;
	fhir_markdown copyright;
	fhir_date approvalDate;
	fhir_date lastReviewDate;
	Period *effectivePeriod;
	U64 code_count;
	Coding **code;
	U64 item_count;
	Questionnaire_Item **item;
};
class Questionnaire_Item {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	fhir_string linkId;
	fhir_uri definition;
	U64 code_count;
	Coding **code;
	fhir_string prefix;
	fhir_string text;
	fhir_code type;
	U64 enableWhen_count;
	Questionnaire_Item_EnableWhen **enableWhen;
	fhir_code enableBehavior;
	fhir_boolean required;
	fhir_boolean repeats;
	fhir_boolean readOnly;
	Integer *maxLength;
	fhir_canonical answerValueSet;
	U64 answerOption_count;
	Questionnaire_Item_AnswerOption **answerOption;
	U64 initial_count;
	Questionnaire_Item_Initial **initial;
	U64 item_count;
	Questionnaire_Item **item;
};
class Questionnaire_Item_EnableWhen {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	fhir_string question;
	fhir_code operator_;
	enum class AnsweType {
		Unknown,
		fhir_boolean,
		fhir_decimal,
		Integer,
		fhir_date,
		fhir_dateTime,
		fhir_time,
		fhir_string,
		Coding,
		Quantity,
		Reference
	};
	AnsweType answer_type_type;

	union {
		fhir_boolean answerBoolean;
		fhir_decimal answerDecimal;
		Integer* answerInteger;
		fhir_date answerDate;
		fhir_dateTime answerDateTime;
		fhir_time answerTime;
		fhir_string answerString;
		Coding* answerCoding;
		Quantity* answerQuantity;
		Reference* answerReference;
	} answer;

};
class Questionnaire_Item_AnswerOption {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	enum class ValueType {
		Unknown,
		Integer,
		fhir_date,
		fhir_time,
		fhir_string,
		Coding,
		Reference
	};
	ValueType value_type_type;

	union {
		Integer* valueInteger;
		fhir_date valueDate;
		fhir_time valueTime;
		fhir_string valueString;
		Coding* valueCoding;
		Reference* valueReference;
	} value;

	fhir_boolean initialSelected;
};
class Questionnaire_Item_Initial {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	enum class ValueType {
		Unknown,
		fhir_boolean,
		fhir_decimal,
		Integer,
		fhir_date,
		fhir_dateTime,
		fhir_time,
		fhir_string,
		fhir_uri,
		Attachment,
		Coding,
		Quantity,
		Reference
	};
	ValueType value_type_type;

	union {
		fhir_boolean valueBoolean;
		fhir_decimal valueDecimal;
		Integer* valueInteger;
		fhir_date valueDate;
		fhir_dateTime valueDateTime;
		fhir_time valueTime;
		fhir_string valueString;
		fhir_uri valueUri;
		Attachment* valueAttachment;
		Coding* valueCoding;
		Quantity* valueQuantity;
		Reference* valueReference;
	} value;

};
class QuestionnaireResponse {
public: 
	ResourceType resourceType;
	fhir_string id;
	Meta *meta;
	fhir_uri implicitRules;
	fhir_code language;
	Narrative *text;
	U64 contained_count;
	Resource **contained;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	Identifier *identifier;
	U64 basedOn_count;
	Reference **basedOn;
	U64 partOf_count;
	Reference **partOf;
	fhir_canonical questionnaire;
	fhir_code status;
	Reference *subject;
	Reference *encounter;
	fhir_dateTime authored;
	Reference *author;
	Reference *source;
	U64 item_count;
	QuestionnaireResponse_Item **item;
};
class QuestionnaireResponse_Item {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	fhir_string linkId;
	fhir_uri definition;
	fhir_string text;
	U64 answer_count;
	QuestionnaireResponse_Item_Answer **answer;
	U64 item_count;
	QuestionnaireResponse_Item **item;
};
class QuestionnaireResponse_Item_Answer {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	enum class ValueType {
		Unknown,
		fhir_boolean,
		fhir_decimal,
		Integer,
		fhir_date,
		fhir_dateTime,
		fhir_time,
		fhir_string,
		fhir_uri,
		Attachment,
		Coding,
		Quantity,
		Reference
	};
	ValueType value_type_type;

	union {
		fhir_boolean valueBoolean;
		fhir_decimal valueDecimal;
		Integer* valueInteger;
		fhir_date valueDate;
		fhir_dateTime valueDateTime;
		fhir_time valueTime;
		fhir_string valueString;
		fhir_uri valueUri;
		Attachment* valueAttachment;
		Coding* valueCoding;
		Quantity* valueQuantity;
		Reference* valueReference;
	} value;

	U64 item_count;
	QuestionnaireResponse_Item **item;
};
class RelatedPerson {
public: 
	ResourceType resourceType;
	fhir_string id;
	Meta *meta;
	fhir_uri implicitRules;
	fhir_code language;
	Narrative *text;
	U64 contained_count;
	Resource **contained;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	U64 identifier_count;
	Identifier **identifier;
	fhir_boolean active;
	Reference *patient;
	U64 relationship_count;
	CodeableConcept **relationship;
	U64 name_count;
	HumanName **name;
	U64 telecom_count;
	ContactPoint **telecom;
	fhir_code gender;
	fhir_date birthDate;
	U64 address_count;
	Address **address;
	U64 photo_count;
	Attachment **photo;
	Period *period;
	U64 communication_count;
	RelatedPerson_Communication **communication;
};
class RelatedPerson_Communication {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	CodeableConcept *language;
	fhir_boolean preferred;
};
class RequestGroup {
public: 
	ResourceType resourceType;
	fhir_string id;
	Meta *meta;
	fhir_uri implicitRules;
	fhir_code language;
	Narrative *text;
	U64 contained_count;
	Resource **contained;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	U64 identifier_count;
	Identifier **identifier;
	U64 instantiatesCanonical_count;
	fhir_canonical *instantiatesCanonical;
	U64 instantiatesUri_count;
	fhir_uri *instantiatesUri;
	U64 basedOn_count;
	Reference **basedOn;
	U64 replaces_count;
	Reference **replaces;
	Identifier *groupIdentifier;
	fhir_code status;
	fhir_code intent;
	fhir_code priority;
	CodeableConcept *code;
	Reference *subject;
	Reference *encounter;
	fhir_dateTime authoredOn;
	Reference *author;
	U64 reasonCode_count;
	CodeableConcept **reasonCode;
	U64 reasonReference_count;
	Reference **reasonReference;
	U64 note_count;
	Annotation **note;
	U64 action_count;
	RequestGroup_Action **action;
};
class RequestGroup_Action {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	fhir_string prefix;
	fhir_string title;
	fhir_string description;
	fhir_string textEquivalent;
	fhir_code priority;
	U64 code_count;
	CodeableConcept **code;
	U64 documentation_count;
	RelatedArtifact **documentation;
	U64 condition_count;
	RequestGroup_Action_Condition **condition;
	U64 relatedAction_count;
	RequestGroup_Action_RelatedAction **relatedAction;
	enum class TiminType {
		Unknown,
		fhir_dateTime,
		Age,
		Period,
		Duration,
		Range,
		Timing
	};
	TiminType timing_type_type;

	union {
		fhir_dateTime timingDateTime;
		Age* timingAge;
		Period* timingPeriod;
		Duration* timingDuration;
		Range* timingRange;
		Timing* timingTiming;
	} timing;

	U64 participant_count;
	Reference **participant;
	CodeableConcept *type;
	fhir_code groupingBehavior;
	fhir_code selectionBehavior;
	fhir_code requiredBehavior;
	fhir_code precheckBehavior;
	fhir_code cardinalityBehavior;
	Reference *resource;
	U64 action_count;
	RequestGroup_Action **action;
};
class RequestGroup_Action_Condition {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	fhir_code kind;
	Expression *expression;
};
class RequestGroup_Action_RelatedAction {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	fhir_id actionId;
	fhir_code relationship;
	enum class OffseType {
		Unknown,
		Duration,
		Range
	};
	OffseType offset_type_type;

	union {
		Duration* offsetDuration;
		Range* offsetRange;
	} offset;

};
class ResearchDefinition {
public: 
	ResourceType resourceType;
	fhir_string id;
	Meta *meta;
	fhir_uri implicitRules;
	fhir_code language;
	Narrative *text;
	U64 contained_count;
	Resource **contained;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	fhir_uri url;
	U64 identifier_count;
	Identifier **identifier;
	fhir_string version;
	fhir_string name;
	fhir_string title;
	fhir_string shortTitle;
	fhir_string subtitle;
	fhir_code status;
	fhir_boolean experimental;
	enum class SubjeType {
		Unknown,
		CodeableConcept,
		Reference
	};
	SubjeType subject_type_type;

	union {
		CodeableConcept* subjectCodeableConcept;
		Reference* subjectReference;
	} subject;

	fhir_dateTime date;
	fhir_string publisher;
	U64 contact_count;
	ContactDetail **contact;
	fhir_markdown description;
	U64 comment_count;
	fhir_string *comment;
	U64 useContext_count;
	UsageContext **useContext;
	U64 jurisdiction_count;
	CodeableConcept **jurisdiction;
	fhir_markdown purpose;
	fhir_string usage;
	fhir_markdown copyright;
	fhir_date approvalDate;
	fhir_date lastReviewDate;
	Period *effectivePeriod;
	U64 topic_count;
	CodeableConcept **topic;
	U64 author_count;
	ContactDetail **author;
	U64 editor_count;
	ContactDetail **editor;
	U64 reviewer_count;
	ContactDetail **reviewer;
	U64 endorser_count;
	ContactDetail **endorser;
	U64 relatedArtifact_count;
	RelatedArtifact **relatedArtifact;
	U64 library_count;
	fhir_canonical *library;
	Reference *population;
	Reference *exposure;
	Reference *exposureAlternative;
	Reference *outcome;
};
class ResearchElementDefinition {
public: 
	ResourceType resourceType;
	fhir_string id;
	Meta *meta;
	fhir_uri implicitRules;
	fhir_code language;
	Narrative *text;
	U64 contained_count;
	Resource **contained;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	fhir_uri url;
	U64 identifier_count;
	Identifier **identifier;
	fhir_string version;
	fhir_string name;
	fhir_string title;
	fhir_string shortTitle;
	fhir_string subtitle;
	fhir_code status;
	fhir_boolean experimental;
	enum class SubjeType {
		Unknown,
		CodeableConcept,
		Reference
	};
	SubjeType subject_type_type;

	union {
		CodeableConcept* subjectCodeableConcept;
		Reference* subjectReference;
	} subject;

	fhir_dateTime date;
	fhir_string publisher;
	U64 contact_count;
	ContactDetail **contact;
	fhir_markdown description;
	U64 comment_count;
	fhir_string *comment;
	U64 useContext_count;
	UsageContext **useContext;
	U64 jurisdiction_count;
	CodeableConcept **jurisdiction;
	fhir_markdown purpose;
	fhir_string usage;
	fhir_markdown copyright;
	fhir_date approvalDate;
	fhir_date lastReviewDate;
	Period *effectivePeriod;
	U64 topic_count;
	CodeableConcept **topic;
	U64 author_count;
	ContactDetail **author;
	U64 editor_count;
	ContactDetail **editor;
	U64 reviewer_count;
	ContactDetail **reviewer;
	U64 endorser_count;
	ContactDetail **endorser;
	U64 relatedArtifact_count;
	RelatedArtifact **relatedArtifact;
	U64 library_count;
	fhir_canonical *library;
	fhir_code type;
	fhir_code variableType;
	U64 characteristic_count;
	ResearchElementDefinition_Characteristic **characteristic;
};
class ResearchElementDefinition_Characteristic {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	enum class DefinType {
		Unknown,
		CodeableConcept,
		fhir_canonical,
		Expression,
		DataRequirement
	};
	DefinType definition_type_type;

	union {
		CodeableConcept* definitionCodeableConcept;
		fhir_canonical definitionCanonical;
		Expression* definitionExpression;
		DataRequirement* definitionDataRequirement;
	} definition;

	U64 usageContext_count;
	UsageContext **usageContext;
	fhir_boolean exclude;
	CodeableConcept *unitOfMeasure;
	fhir_string studyEffectiveDescription;
	enum class StudyType {
		Unknown,
		fhir_dateTime,
		Period,
		Duration,
		Timing
	};
	StudyType studyEffective_type_type;

	union {
		fhir_dateTime studyEffectiveDateTime;
		Period* studyEffectivePeriod;
		Duration* studyEffectiveDuration;
		Timing* studyEffectiveTiming;
	} studyEffective;

	Duration *studyEffectiveTimeFromStart;
	fhir_code studyEffectiveGroupMeasure;
	fhir_string participantEffectiveDescription;
	enum class PartiType {
		Unknown,
		fhir_dateTime,
		Period,
		Duration,
		Timing
	};
	PartiType participantEffective_type_type;

	union {
		fhir_dateTime participantEffectiveDateTime;
		Period* participantEffectivePeriod;
		Duration* participantEffectiveDuration;
		Timing* participantEffectiveTiming;
	} participantEffective;

	Duration *participantEffectiveTimeFromStart;
	fhir_code participantEffectiveGroupMeasure;
};
class ResearchStudy {
public: 
	ResourceType resourceType;
	fhir_string id;
	Meta *meta;
	fhir_uri implicitRules;
	fhir_code language;
	Narrative *text;
	U64 contained_count;
	Resource **contained;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	U64 identifier_count;
	Identifier **identifier;
	fhir_string title;
	U64 protocol_count;
	Reference **protocol;
	U64 partOf_count;
	Reference **partOf;
	fhir_code status;
	CodeableConcept *primaryPurposeType;
	CodeableConcept *phase;
	U64 category_count;
	CodeableConcept **category;
	U64 focus_count;
	CodeableConcept **focus;
	U64 condition_count;
	CodeableConcept **condition;
	U64 contact_count;
	ContactDetail **contact;
	U64 relatedArtifact_count;
	RelatedArtifact **relatedArtifact;
	U64 keyword_count;
	CodeableConcept **keyword;
	U64 location_count;
	CodeableConcept **location;
	fhir_markdown description;
	U64 enrollment_count;
	Reference **enrollment;
	Period *period;
	Reference *sponsor;
	Reference *principalInvestigator;
	U64 site_count;
	Reference **site;
	CodeableConcept *reasonStopped;
	U64 note_count;
	Annotation **note;
	U64 arm_count;
	ResearchStudy_Arm **arm;
	U64 objective_count;
	ResearchStudy_Objective **objective;
};
class ResearchStudy_Arm {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	fhir_string name;
	CodeableConcept *type;
	fhir_string description;
};
class ResearchStudy_Objective {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	fhir_string name;
	CodeableConcept *type;
};
class ResearchSubject {
public: 
	ResourceType resourceType;
	fhir_string id;
	Meta *meta;
	fhir_uri implicitRules;
	fhir_code language;
	Narrative *text;
	U64 contained_count;
	Resource **contained;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	U64 identifier_count;
	Identifier **identifier;
	fhir_code status;
	Period *period;
	Reference *study;
	Reference *individual;
	fhir_string assignedArm;
	fhir_string actualArm;
	Reference *consent;
};
class RiskAssessment {
public: 
	ResourceType resourceType;
	fhir_string id;
	Meta *meta;
	fhir_uri implicitRules;
	fhir_code language;
	Narrative *text;
	U64 contained_count;
	Resource **contained;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	U64 identifier_count;
	Identifier **identifier;
	Reference *basedOn;
	Reference *parent;
	fhir_code status;
	CodeableConcept *method;
	CodeableConcept *code;
	Reference *subject;
	Reference *encounter;
	enum class OccurType {
		Unknown,
		fhir_dateTime,
		Period
	};
	OccurType occurrence_type_type;

	union {
		fhir_dateTime occurrenceDateTime;
		Period* occurrencePeriod;
	} occurrence;

	Reference *condition;
	Reference *performer;
	U64 reasonCode_count;
	CodeableConcept **reasonCode;
	U64 reasonReference_count;
	Reference **reasonReference;
	U64 basis_count;
	Reference **basis;
	U64 prediction_count;
	RiskAssessment_Prediction **prediction;
	fhir_string mitigation;
	U64 note_count;
	Annotation **note;
};
class RiskAssessment_Prediction {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	CodeableConcept *outcome;
	enum class ProbaType {
		Unknown,
		fhir_decimal,
		Range
	};
	ProbaType probability_type_type;

	union {
		fhir_decimal probabilityDecimal;
		Range* probabilityRange;
	} probability;

	CodeableConcept *qualitativeRisk;
	fhir_decimal relativeRisk;
	enum class When_Type {
		Unknown,
		Period,
		Range
	};
	When_Type when_type_type;

	union {
		Period* whenPeriod;
		Range* whenRange;
	} when;

	fhir_string rationale;
};
class RiskEvidenceSynthesis {
public: 
	ResourceType resourceType;
	fhir_string id;
	Meta *meta;
	fhir_uri implicitRules;
	fhir_code language;
	Narrative *text;
	U64 contained_count;
	Resource **contained;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	fhir_uri url;
	U64 identifier_count;
	Identifier **identifier;
	fhir_string version;
	fhir_string name;
	fhir_string title;
	fhir_code status;
	fhir_dateTime date;
	fhir_string publisher;
	U64 contact_count;
	ContactDetail **contact;
	fhir_markdown description;
	U64 note_count;
	Annotation **note;
	U64 useContext_count;
	UsageContext **useContext;
	U64 jurisdiction_count;
	CodeableConcept **jurisdiction;
	fhir_markdown copyright;
	fhir_date approvalDate;
	fhir_date lastReviewDate;
	Period *effectivePeriod;
	U64 topic_count;
	CodeableConcept **topic;
	U64 author_count;
	ContactDetail **author;
	U64 editor_count;
	ContactDetail **editor;
	U64 reviewer_count;
	ContactDetail **reviewer;
	U64 endorser_count;
	ContactDetail **endorser;
	U64 relatedArtifact_count;
	RelatedArtifact **relatedArtifact;
	CodeableConcept *synthesisType;
	CodeableConcept *studyType;
	Reference *population;
	Reference *exposure;
	Reference *outcome;
	RiskEvidenceSynthesis_SampleSize *sampleSize;
	RiskEvidenceSynthesis_RiskEstimate *riskEstimate;
	U64 certainty_count;
	RiskEvidenceSynthesis_Certainty **certainty;
};
class RiskEvidenceSynthesis_SampleSize {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	fhir_string description;
	Integer *numberOfStudies;
	Integer *numberOfParticipants;
};
class RiskEvidenceSynthesis_RiskEstimate {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	fhir_string description;
	CodeableConcept *type;
	fhir_decimal value;
	CodeableConcept *unitOfMeasure;
	Integer *denominatorCount;
	Integer *numeratorCount;
	U64 precisionEstimate_count;
	RiskEvidenceSynthesis_RiskEstimate_PrecisionEstimate **precisionEstimate;
};
class RiskEvidenceSynthesis_RiskEstimate_PrecisionEstimate {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	CodeableConcept *type;
	fhir_decimal level;
	fhir_decimal from;
	fhir_decimal to;
};
class RiskEvidenceSynthesis_Certainty {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	U64 rating_count;
	CodeableConcept **rating;
	U64 note_count;
	Annotation **note;
	U64 certaintySubcomponent_count;
	RiskEvidenceSynthesis_Certainty_CertaintySubcomponent **certaintySubcomponent;
};
class RiskEvidenceSynthesis_Certainty_CertaintySubcomponent {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	CodeableConcept *type;
	U64 rating_count;
	CodeableConcept **rating;
	U64 note_count;
	Annotation **note;
};
class Schedule {
public: 
	ResourceType resourceType;
	fhir_string id;
	Meta *meta;
	fhir_uri implicitRules;
	fhir_code language;
	Narrative *text;
	U64 contained_count;
	Resource **contained;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	U64 identifier_count;
	Identifier **identifier;
	fhir_boolean active;
	U64 serviceCategory_count;
	CodeableConcept **serviceCategory;
	U64 serviceType_count;
	CodeableConcept **serviceType;
	U64 specialty_count;
	CodeableConcept **specialty;
	U64 actor_count;
	Reference **actor;
	Period *planningHorizon;
	fhir_string comment;
};
class SearchParameter {
public: 
	ResourceType resourceType;
	fhir_string id;
	Meta *meta;
	fhir_uri implicitRules;
	fhir_code language;
	Narrative *text;
	U64 contained_count;
	Resource **contained;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	fhir_uri url;
	fhir_string version;
	fhir_string name;
	fhir_canonical derivedFrom;
	fhir_code status;
	fhir_boolean experimental;
	fhir_dateTime date;
	fhir_string publisher;
	U64 contact_count;
	ContactDetail **contact;
	fhir_markdown description;
	U64 useContext_count;
	UsageContext **useContext;
	U64 jurisdiction_count;
	CodeableConcept **jurisdiction;
	fhir_markdown purpose;
	fhir_code code;
	U64 base_count;
	fhir_code *base;
	fhir_code type;
	fhir_string expression;
	fhir_string xpath;
	fhir_code xpathUsage;
	U64 target_count;
	fhir_code *target;
	fhir_boolean multipleOr;
	fhir_boolean multipleAnd;
	U64 comparator_count;
	fhir_code *comparator;
	U64 modifier_count;
	fhir_code *modifier;
	U64 chain_count;
	fhir_string *chain;
	U64 component_count;
	SearchParameter_Component **component;
};
class SearchParameter_Component {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	fhir_canonical definition;
	fhir_string expression;
};
class ServiceRequest {
public: 
	ResourceType resourceType;
	fhir_string id;
	Meta *meta;
	fhir_uri implicitRules;
	fhir_code language;
	Narrative *text;
	U64 contained_count;
	Resource **contained;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	U64 identifier_count;
	Identifier **identifier;
	U64 instantiatesCanonical_count;
	fhir_canonical *instantiatesCanonical;
	U64 instantiatesUri_count;
	fhir_uri *instantiatesUri;
	U64 basedOn_count;
	Reference **basedOn;
	U64 replaces_count;
	Reference **replaces;
	Identifier *requisition;
	fhir_code status;
	fhir_code intent;
	U64 category_count;
	CodeableConcept **category;
	fhir_code priority;
	fhir_boolean doNotPerform;
	CodeableConcept *code;
	U64 orderDetail_count;
	CodeableConcept **orderDetail;
	enum class QuantType {
		Unknown,
		Quantity,
		Ratio,
		Range
	};
	QuantType quantity_type_type;

	union {
		Quantity* quantityQuantity;
		Ratio* quantityRatio;
		Range* quantityRange;
	} quantity;

	Reference *subject;
	Reference *encounter;
	enum class OccurType {
		Unknown,
		fhir_dateTime,
		Period,
		Timing
	};
	OccurType occurrence_type_type;

	union {
		fhir_dateTime occurrenceDateTime;
		Period* occurrencePeriod;
		Timing* occurrenceTiming;
	} occurrence;

	enum class AsNeeType {
		Unknown,
		fhir_boolean,
		CodeableConcept
	};
	AsNeeType asNeeded_type_type;

	union {
		fhir_boolean asNeededBoolean;
		CodeableConcept* asNeededCodeableConcept;
	} asNeeded;

	fhir_dateTime authoredOn;
	Reference *requester;
	CodeableConcept *performerType;
	U64 performer_count;
	Reference **performer;
	U64 locationCode_count;
	CodeableConcept **locationCode;
	U64 locationReference_count;
	Reference **locationReference;
	U64 reasonCode_count;
	CodeableConcept **reasonCode;
	U64 reasonReference_count;
	Reference **reasonReference;
	U64 insurance_count;
	Reference **insurance;
	U64 supportingInfo_count;
	Reference **supportingInfo;
	U64 specimen_count;
	Reference **specimen;
	U64 bodySite_count;
	CodeableConcept **bodySite;
	U64 note_count;
	Annotation **note;
	fhir_string patientInstruction;
	U64 relevantHistory_count;
	Reference **relevantHistory;
};
class Slot {
public: 
	ResourceType resourceType;
	fhir_string id;
	Meta *meta;
	fhir_uri implicitRules;
	fhir_code language;
	Narrative *text;
	U64 contained_count;
	Resource **contained;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	U64 identifier_count;
	Identifier **identifier;
	U64 serviceCategory_count;
	CodeableConcept **serviceCategory;
	U64 serviceType_count;
	CodeableConcept **serviceType;
	U64 specialty_count;
	CodeableConcept **specialty;
	CodeableConcept *appointmentType;
	Reference *schedule;
	fhir_code status;
	fhir_instant start;
	fhir_instant end;
	fhir_boolean overbooked;
	fhir_string comment;
};
class Specimen {
public: 
	ResourceType resourceType;
	fhir_string id;
	Meta *meta;
	fhir_uri implicitRules;
	fhir_code language;
	Narrative *text;
	U64 contained_count;
	Resource **contained;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	U64 identifier_count;
	Identifier **identifier;
	Identifier *accessionIdentifier;
	fhir_code status;
	CodeableConcept *type;
	Reference *subject;
	fhir_dateTime receivedTime;
	U64 parent_count;
	Reference **parent;
	U64 request_count;
	Reference **request;
	Specimen_Collection *collection;
	U64 processing_count;
	Specimen_Processing **processing;
	U64 container_count;
	Specimen_Container **container;
	U64 condition_count;
	CodeableConcept **condition;
	U64 note_count;
	Annotation **note;
};
class Specimen_Collection {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	Reference *collector;
	enum class ColleType {
		Unknown,
		fhir_dateTime,
		Period
	};
	ColleType collected_type_type;

	union {
		fhir_dateTime collectedDateTime;
		Period* collectedPeriod;
	} collected;

	Duration *duration;
	Quantity *quantity;
	CodeableConcept *method;
	CodeableConcept *bodySite;
	enum class FastiType {
		Unknown,
		CodeableConcept,
		Duration
	};
	FastiType fastingStatus_type_type;

	union {
		CodeableConcept* fastingStatusCodeableConcept;
		Duration* fastingStatusDuration;
	} fastingStatus;

};
class Specimen_Processing {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	fhir_string description;
	CodeableConcept *procedure;
	U64 additive_count;
	Reference **additive;
	enum class Time_Type {
		Unknown,
		fhir_dateTime,
		Period
	};
	Time_Type time_type_type;

	union {
		fhir_dateTime timeDateTime;
		Period* timePeriod;
	} time;

};
class Specimen_Container {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	U64 identifier_count;
	Identifier **identifier;
	fhir_string description;
	CodeableConcept *type;
	Quantity *capacity;
	Quantity *specimenQuantity;
	enum class AdditType {
		Unknown,
		CodeableConcept,
		Reference
	};
	AdditType additive_type_type;

	union {
		CodeableConcept* additiveCodeableConcept;
		Reference* additiveReference;
	} additive;

};
class SpecimenDefinition {
public: 
	ResourceType resourceType;
	fhir_string id;
	Meta *meta;
	fhir_uri implicitRules;
	fhir_code language;
	Narrative *text;
	U64 contained_count;
	Resource **contained;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	Identifier *identifier;
	CodeableConcept *typeCollected;
	U64 patientPreparation_count;
	CodeableConcept **patientPreparation;
	fhir_string timeAspect;
	U64 collection_count;
	CodeableConcept **collection;
	U64 typeTested_count;
	SpecimenDefinition_TypeTested **typeTested;
};
class SpecimenDefinition_TypeTested {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	fhir_boolean isDerived;
	CodeableConcept *type;
	fhir_code preference;
	SpecimenDefinition_TypeTested_Container *container;
	fhir_string requirement;
	Duration *retentionTime;
	U64 rejectionCriterion_count;
	CodeableConcept **rejectionCriterion;
	U64 handling_count;
	SpecimenDefinition_TypeTested_Handling **handling;
};
class SpecimenDefinition_TypeTested_Container {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	CodeableConcept *material;
	CodeableConcept *type;
	CodeableConcept *cap;
	fhir_string description;
	Quantity *capacity;
	enum class MinimType {
		Unknown,
		Quantity,
		fhir_string
	};
	MinimType minimumVolume_type_type;

	union {
		Quantity* minimumVolumeQuantity;
		fhir_string minimumVolumeString;
	} minimumVolume;

	U64 additive_count;
	SpecimenDefinition_TypeTested_Container_Additive **additive;
	fhir_string preparation;
};
class SpecimenDefinition_TypeTested_Container_Additive {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	enum class AdditType {
		Unknown,
		CodeableConcept,
		Reference
	};
	AdditType additive_type_type;

	union {
		CodeableConcept* additiveCodeableConcept;
		Reference* additiveReference;
	} additive;

};
class SpecimenDefinition_TypeTested_Handling {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	CodeableConcept *temperatureQualifier;
	Range *temperatureRange;
	Duration *maxDuration;
	fhir_string instruction;
};
class StructureDefinition {
public: 
	ResourceType resourceType;
	fhir_string id;
	Meta *meta;
	fhir_uri implicitRules;
	fhir_code language;
	Narrative *text;
	U64 contained_count;
	Resource **contained;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	fhir_uri url;
	U64 identifier_count;
	Identifier **identifier;
	fhir_string version;
	fhir_string name;
	fhir_string title;
	fhir_code status;
	fhir_boolean experimental;
	fhir_dateTime date;
	fhir_string publisher;
	U64 contact_count;
	ContactDetail **contact;
	fhir_markdown description;
	U64 useContext_count;
	UsageContext **useContext;
	U64 jurisdiction_count;
	CodeableConcept **jurisdiction;
	fhir_markdown purpose;
	fhir_markdown copyright;
	U64 keyword_count;
	Coding **keyword;
	fhir_code fhirVersion;
	U64 mapping_count;
	StructureDefinition_Mapping **mapping;
	fhir_code kind;
	fhir_boolean abstract;
	U64 context_count;
	StructureDefinition_Context **context;
	U64 contextInvariant_count;
	fhir_string *contextInvariant;
	fhir_uri type;
	fhir_canonical baseDefinition;
	fhir_code derivation;
	StructureDefinition_Snapshot *snapshot;
	StructureDefinition_Differential *differential;
};
class StructureDefinition_Mapping {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	fhir_id identity;
	fhir_uri uri;
	fhir_string name;
	fhir_string comment;
};
class StructureDefinition_Context {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	fhir_code type;
	fhir_string expression;
};
class StructureDefinition_Snapshot {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	U64 element_count;
	ElementDefinition **element;
};
class StructureDefinition_Differential {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	U64 element_count;
	ElementDefinition **element;
};
class StructureMap {
public: 
	ResourceType resourceType;
	fhir_string id;
	Meta *meta;
	fhir_uri implicitRules;
	fhir_code language;
	Narrative *text;
	U64 contained_count;
	Resource **contained;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	fhir_uri url;
	U64 identifier_count;
	Identifier **identifier;
	fhir_string version;
	fhir_string name;
	fhir_string title;
	fhir_code status;
	fhir_boolean experimental;
	fhir_dateTime date;
	fhir_string publisher;
	U64 contact_count;
	ContactDetail **contact;
	fhir_markdown description;
	U64 useContext_count;
	UsageContext **useContext;
	U64 jurisdiction_count;
	CodeableConcept **jurisdiction;
	fhir_markdown purpose;
	fhir_markdown copyright;
	U64 structure_count;
	StructureMap_Structure **structure;
	U64 import_count;
	fhir_canonical *import;
	U64 group_count;
	StructureMap_Group **group;
};
class StructureMap_Structure {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	fhir_canonical url;
	fhir_code mode;
	fhir_string alias;
	fhir_string documentation;
};
class StructureMap_Group {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	fhir_id name;
	fhir_id extends;
	fhir_code typeMode;
	fhir_string documentation;
	U64 input_count;
	StructureMap_Group_Input **input;
	U64 rule_count;
	StructureMap_Group_Rule **rule;
};
class StructureMap_Group_Input {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	fhir_id name;
	fhir_string type;
	fhir_code mode;
	fhir_string documentation;
};
class StructureMap_Group_Rule {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	fhir_id name;
	U64 source_count;
	StructureMap_Group_Rule_Source **source;
	U64 target_count;
	StructureMap_Group_Rule_Target **target;
	U64 rule_count;
	StructureMap_Group_Rule **rule;
	U64 dependent_count;
	StructureMap_Group_Rule_Dependent **dependent;
	fhir_string documentation;
};
class StructureMap_Group_Rule_Source {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	fhir_id context;
	Integer *min;
	fhir_string max;
	fhir_string type;
	enum class DefauType {
		Unknown,
		fhir_base64Binary,
		fhir_boolean,
		fhir_canonical,
		fhir_code,
		fhir_date,
		fhir_dateTime,
		fhir_decimal,
		fhir_id,
		fhir_instant,
		Integer,
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
	};
	DefauType defaultValue_type_type;

	union {
		fhir_base64Binary defaultValueBase64Binary;
		fhir_boolean defaultValueBoolean;
		fhir_canonical defaultValueCanonical;
		fhir_code defaultValueCode;
		fhir_date defaultValueDate;
		fhir_dateTime defaultValueDateTime;
		fhir_decimal defaultValueDecimal;
		fhir_id defaultValueId;
		fhir_instant defaultValueInstant;
		Integer* defaultValueInteger;
		fhir_markdown defaultValueMarkdown;
		fhir_oid defaultValueOid;
		fhir_positiveInt defaultValuePositiveInt;
		fhir_string defaultValueString;
		fhir_time defaultValueTime;
		fhir_unsignedInt defaultValueUnsignedInt;
		fhir_uri defaultValueUri;
		fhir_url defaultValueUrl;
		fhir_uuid defaultValueUuid;
		Address* defaultValueAddress;
		Age* defaultValueAge;
		Annotation* defaultValueAnnotation;
		Attachment* defaultValueAttachment;
		CodeableConcept* defaultValueCodeableConcept;
		Coding* defaultValueCoding;
		ContactPoint* defaultValueContactPoint;
		Count* defaultValueCount;
		Distance* defaultValueDistance;
		Duration* defaultValueDuration;
		HumanName* defaultValueHumanName;
		Identifier* defaultValueIdentifier;
		Money* defaultValueMoney;
		Period* defaultValuePeriod;
		Quantity* defaultValueQuantity;
		Range* defaultValueRange;
		Ratio* defaultValueRatio;
		Reference* defaultValueReference;
		SampledData* defaultValueSampledData;
		Signature* defaultValueSignature;
		Timing* defaultValueTiming;
		ContactDetail* defaultValueContactDetail;
		Contributor* defaultValueContributor;
		DataRequirement* defaultValueDataRequirement;
		Expression* defaultValueExpression;
		ParameterDefinition* defaultValueParameterDefinition;
		RelatedArtifact* defaultValueRelatedArtifact;
		TriggerDefinition* defaultValueTriggerDefinition;
		UsageContext* defaultValueUsageContext;
		Dosage* defaultValueDosage;
		Meta* defaultValueMeta;
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
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	fhir_id context;
	fhir_code contextType;
	fhir_string element;
	fhir_id variable;
	U64 listMode_count;
	fhir_code *listMode;
	fhir_id listRuleId;
	fhir_code transform;
	U64 parameter_count;
	StructureMap_Group_Rule_Target_Parameter **parameter;
};
class StructureMap_Group_Rule_Target_Parameter {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	enum class ValueType {
		Unknown,
		fhir_id,
		fhir_string,
		fhir_boolean,
		Integer,
		fhir_decimal
	};
	ValueType value_type_type;

	union {
		fhir_id valueId;
		fhir_string valueString;
		fhir_boolean valueBoolean;
		Integer* valueInteger;
		fhir_decimal valueDecimal;
	} value;

};
class StructureMap_Group_Rule_Dependent {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	fhir_id name;
	U64 variable_count;
	fhir_string *variable;
};
class Subscription {
public: 
	ResourceType resourceType;
	fhir_string id;
	Meta *meta;
	fhir_uri implicitRules;
	fhir_code language;
	Narrative *text;
	U64 contained_count;
	Resource **contained;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	fhir_code status;
	U64 contact_count;
	ContactPoint **contact;
	fhir_instant end;
	fhir_string reason;
	fhir_string criteria;
	fhir_string error;
	Subscription_Channel *channel;
};
class Subscription_Channel {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	fhir_code type;
	fhir_url endpoint;
	fhir_code payload;
	U64 header_count;
	fhir_string *header;
};
class Substance {
public: 
	ResourceType resourceType;
	fhir_string id;
	Meta *meta;
	fhir_uri implicitRules;
	fhir_code language;
	Narrative *text;
	U64 contained_count;
	Resource **contained;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	U64 identifier_count;
	Identifier **identifier;
	fhir_code status;
	U64 category_count;
	CodeableConcept **category;
	CodeableConcept *code;
	fhir_string description;
	U64 instance_count;
	Substance_Instance **instance;
	U64 ingredient_count;
	Substance_Ingredient **ingredient;
};
class Substance_Instance {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	Identifier *identifier;
	fhir_dateTime expiry;
	Quantity *quantity;
};
class Substance_Ingredient {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	Ratio *quantity;
	enum class SubstType {
		Unknown,
		CodeableConcept,
		Reference
	};
	SubstType substance_type_type;

	union {
		CodeableConcept* substanceCodeableConcept;
		Reference* substanceReference;
	} substance;

};
class SubstanceNucleicAcid {
public: 
	ResourceType resourceType;
	fhir_string id;
	Meta *meta;
	fhir_uri implicitRules;
	fhir_code language;
	Narrative *text;
	U64 contained_count;
	Resource **contained;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	CodeableConcept *sequenceType;
	Integer *numberOfSubunits;
	fhir_string areaOfHybridisation;
	CodeableConcept *oligoNucleotideType;
	U64 subunit_count;
	SubstanceNucleicAcid_Subunit **subunit;
};
class SubstanceNucleicAcid_Subunit {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	Integer *subunit;
	fhir_string sequence;
	Integer *length;
	Attachment *sequenceAttachment;
	CodeableConcept *fivePrime;
	CodeableConcept *threePrime;
	U64 linkage_count;
	SubstanceNucleicAcid_Subunit_Linkage **linkage;
	U64 sugar_count;
	SubstanceNucleicAcid_Subunit_Sugar **sugar;
};
class SubstanceNucleicAcid_Subunit_Linkage {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	fhir_string connectivity;
	Identifier *identifier;
	fhir_string name;
	fhir_string residueSite;
};
class SubstanceNucleicAcid_Subunit_Sugar {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	Identifier *identifier;
	fhir_string name;
	fhir_string residueSite;
};
class SubstancePolymer {
public: 
	ResourceType resourceType;
	fhir_string id;
	Meta *meta;
	fhir_uri implicitRules;
	fhir_code language;
	Narrative *text;
	U64 contained_count;
	Resource **contained;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	CodeableConcept *class_;
	CodeableConcept *geometry;
	U64 copolymerConnectivity_count;
	CodeableConcept **copolymerConnectivity;
	U64 modification_count;
	fhir_string *modification;
	U64 monomerSet_count;
	SubstancePolymer_MonomerSet **monomerSet;
	U64 repeat_count;
	SubstancePolymer_Repeat **repeat;
};
class SubstancePolymer_MonomerSet {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	CodeableConcept *ratioType;
	U64 startingMaterial_count;
	SubstancePolymer_MonomerSet_StartingMaterial **startingMaterial;
};
class SubstancePolymer_MonomerSet_StartingMaterial {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	CodeableConcept *material;
	CodeableConcept *type;
	fhir_boolean isDefining;
	SubstanceAmount *amount;
};
class SubstancePolymer_Repeat {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	Integer *numberOfUnits;
	fhir_string averageMolecularFormula;
	CodeableConcept *repeatUnitAmountType;
	U64 repeatUnit_count;
	SubstancePolymer_Repeat_RepeatUnit **repeatUnit;
};
class SubstancePolymer_Repeat_RepeatUnit {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	CodeableConcept *orientationOfPolymerisation;
	fhir_string repeatUnit;
	SubstanceAmount *amount;
	U64 degreeOfPolymerisation_count;
	SubstancePolymer_Repeat_RepeatUnit_DegreeOfPolymerisation **degreeOfPolymerisation;
	U64 structuralRepresentation_count;
	SubstancePolymer_Repeat_RepeatUnit_StructuralRepresentation **structuralRepresentation;
};
class SubstancePolymer_Repeat_RepeatUnit_DegreeOfPolymerisation {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	CodeableConcept *degree;
	SubstanceAmount *amount;
};
class SubstancePolymer_Repeat_RepeatUnit_StructuralRepresentation {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	CodeableConcept *type;
	fhir_string representation;
	Attachment *attachment;
};
class SubstanceProtein {
public: 
	ResourceType resourceType;
	fhir_string id;
	Meta *meta;
	fhir_uri implicitRules;
	fhir_code language;
	Narrative *text;
	U64 contained_count;
	Resource **contained;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	CodeableConcept *sequenceType;
	Integer *numberOfSubunits;
	U64 disulfideLinkage_count;
	fhir_string *disulfideLinkage;
	U64 subunit_count;
	SubstanceProtein_Subunit **subunit;
};
class SubstanceProtein_Subunit {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	Integer *subunit;
	fhir_string sequence;
	Integer *length;
	Attachment *sequenceAttachment;
	Identifier *nTerminalModificationId;
	fhir_string nTerminalModification;
	Identifier *cTerminalModificationId;
	fhir_string cTerminalModification;
};
class SubstanceReferenceInformation {
public: 
	ResourceType resourceType;
	fhir_string id;
	Meta *meta;
	fhir_uri implicitRules;
	fhir_code language;
	Narrative *text;
	U64 contained_count;
	Resource **contained;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	fhir_string comment;
	U64 gene_count;
	SubstanceReferenceInformation_Gene **gene;
	U64 geneElement_count;
	SubstanceReferenceInformation_GeneElement **geneElement;
	U64 classification_count;
	SubstanceReferenceInformation_Classification **classification;
	U64 target_count;
	SubstanceReferenceInformation_Target **target;
};
class SubstanceReferenceInformation_Gene {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	CodeableConcept *geneSequenceOrigin;
	CodeableConcept *gene;
	U64 source_count;
	Reference **source;
};
class SubstanceReferenceInformation_GeneElement {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	CodeableConcept *type;
	Identifier *element;
	U64 source_count;
	Reference **source;
};
class SubstanceReferenceInformation_Classification {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	CodeableConcept *domain;
	CodeableConcept *classification;
	U64 subtype_count;
	CodeableConcept **subtype;
	U64 source_count;
	Reference **source;
};
class SubstanceReferenceInformation_Target {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	Identifier *target;
	CodeableConcept *type;
	CodeableConcept *interaction;
	CodeableConcept *organism;
	CodeableConcept *organismType;
	enum class AmounType {
		Unknown,
		Quantity,
		Range,
		fhir_string
	};
	AmounType amount_type_type;

	union {
		Quantity* amountQuantity;
		Range* amountRange;
		fhir_string amountString;
	} amount;

	CodeableConcept *amountType;
	U64 source_count;
	Reference **source;
};
class SubstanceSourceMaterial {
public: 
	ResourceType resourceType;
	fhir_string id;
	Meta *meta;
	fhir_uri implicitRules;
	fhir_code language;
	Narrative *text;
	U64 contained_count;
	Resource **contained;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	CodeableConcept *sourceMaterialClass;
	CodeableConcept *sourceMaterialType;
	CodeableConcept *sourceMaterialState;
	Identifier *organismId;
	fhir_string organismName;
	U64 parentSubstanceId_count;
	Identifier **parentSubstanceId;
	U64 parentSubstanceName_count;
	fhir_string *parentSubstanceName;
	U64 countryOfOrigin_count;
	CodeableConcept **countryOfOrigin;
	U64 geographicalLocation_count;
	fhir_string *geographicalLocation;
	CodeableConcept *developmentStage;
	U64 fractionDescription_count;
	SubstanceSourceMaterial_FractionDescription **fractionDescription;
	SubstanceSourceMaterial_Organism *organism;
	U64 partDescription_count;
	SubstanceSourceMaterial_PartDescription **partDescription;
};
class SubstanceSourceMaterial_FractionDescription {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	fhir_string fraction;
	CodeableConcept *materialType;
};
class SubstanceSourceMaterial_Organism {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	CodeableConcept *family;
	CodeableConcept *genus;
	CodeableConcept *species;
	CodeableConcept *intraspecificType;
	fhir_string intraspecificDescription;
	U64 author_count;
	SubstanceSourceMaterial_Organism_Author **author;
	SubstanceSourceMaterial_Organism_Hybrid *hybrid;
	SubstanceSourceMaterial_Organism_OrganismGeneral *organismGeneral;
};
class SubstanceSourceMaterial_Organism_Author {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	CodeableConcept *authorType;
	fhir_string authorDescription;
};
class SubstanceSourceMaterial_Organism_Hybrid {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	fhir_string maternalOrganismId;
	fhir_string maternalOrganismName;
	fhir_string paternalOrganismId;
	fhir_string paternalOrganismName;
	CodeableConcept *hybridType;
};
class SubstanceSourceMaterial_Organism_OrganismGeneral {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	CodeableConcept *kingdom;
	CodeableConcept *phylum;
	CodeableConcept *class_;
	CodeableConcept *order;
};
class SubstanceSourceMaterial_PartDescription {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	CodeableConcept *part;
	CodeableConcept *partLocation;
};
class SubstanceSpecification {
public: 
	ResourceType resourceType;
	fhir_string id;
	Meta *meta;
	fhir_uri implicitRules;
	fhir_code language;
	Narrative *text;
	U64 contained_count;
	Resource **contained;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	Identifier *identifier;
	CodeableConcept *type;
	CodeableConcept *status;
	CodeableConcept *domain;
	fhir_string description;
	U64 source_count;
	Reference **source;
	fhir_string comment;
	U64 moiety_count;
	SubstanceSpecification_Moiety **moiety;
	U64 property_count;
	SubstanceSpecification_Property **property;
	Reference *referenceInformation;
	SubstanceSpecification_Structure *structure;
	U64 code_count;
	SubstanceSpecification_Code **code;
	U64 name_count;
	SubstanceSpecification_Name **name;
	U64 molecularWeight_count;
	SubstanceSpecification_Structure_Isotope_MolecularWeight **molecularWeight;
	U64 relationship_count;
	SubstanceSpecification_Relationship **relationship;
	Reference *nucleicAcid;
	Reference *polymer;
	Reference *protein;
	Reference *sourceMaterial;
};
class SubstanceSpecification_Moiety {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	CodeableConcept *role;
	Identifier *identifier;
	fhir_string name;
	CodeableConcept *stereochemistry;
	CodeableConcept *opticalActivity;
	fhir_string molecularFormula;
	enum class AmounType {
		Unknown,
		Quantity,
		fhir_string
	};
	AmounType amount_type_type;

	union {
		Quantity* amountQuantity;
		fhir_string amountString;
	} amount;

};
class SubstanceSpecification_Property {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	CodeableConcept *category;
	CodeableConcept *code;
	fhir_string parameters;
	enum class DefinType {
		Unknown,
		Reference,
		CodeableConcept
	};
	DefinType definingSubstance_type_type;

	union {
		Reference* definingSubstanceReference;
		CodeableConcept* definingSubstanceCodeableConcept;
	} definingSubstance;

	enum class AmounType {
		Unknown,
		Quantity,
		fhir_string
	};
	AmounType amount_type_type;

	union {
		Quantity* amountQuantity;
		fhir_string amountString;
	} amount;

};
class SubstanceSpecification_Structure {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	CodeableConcept *stereochemistry;
	CodeableConcept *opticalActivity;
	fhir_string molecularFormula;
	fhir_string molecularFormulaByMoiety;
	U64 isotope_count;
	SubstanceSpecification_Structure_Isotope **isotope;
	SubstanceSpecification_Structure_Isotope_MolecularWeight *molecularWeight;
	U64 source_count;
	Reference **source;
	U64 representation_count;
	SubstanceSpecification_Structure_Representation **representation;
};
class SubstanceSpecification_Structure_Isotope {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	Identifier *identifier;
	CodeableConcept *name;
	CodeableConcept *substitution;
	Quantity *halfLife;
	SubstanceSpecification_Structure_Isotope_MolecularWeight *molecularWeight;
};
class SubstanceSpecification_Structure_Isotope_MolecularWeight {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	CodeableConcept *method;
	CodeableConcept *type;
	Quantity *amount;
};
class SubstanceSpecification_Structure_Representation {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	CodeableConcept *type;
	fhir_string representation;
	Attachment *attachment;
};
class SubstanceSpecification_Code {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	CodeableConcept *code;
	CodeableConcept *status;
	fhir_dateTime statusDate;
	fhir_string comment;
	U64 source_count;
	Reference **source;
};
class SubstanceSpecification_Name {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	fhir_string name;
	CodeableConcept *type;
	CodeableConcept *status;
	fhir_boolean preferred;
	U64 language_count;
	CodeableConcept **language;
	U64 domain_count;
	CodeableConcept **domain;
	U64 jurisdiction_count;
	CodeableConcept **jurisdiction;
	U64 synonym_count;
	SubstanceSpecification_Name **synonym;
	U64 translation_count;
	SubstanceSpecification_Name **translation;
	U64 official_count;
	SubstanceSpecification_Name_Official **official;
	U64 source_count;
	Reference **source;
};
class SubstanceSpecification_Name_Official {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	CodeableConcept *authority;
	CodeableConcept *status;
	fhir_dateTime date;
};
class SubstanceSpecification_Relationship {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	enum class SubstType {
		Unknown,
		Reference,
		CodeableConcept
	};
	SubstType substance_type_type;

	union {
		Reference* substanceReference;
		CodeableConcept* substanceCodeableConcept;
	} substance;

	CodeableConcept *relationship;
	fhir_boolean isDefining;
	enum class AmounType {
		Unknown,
		Quantity,
		Range,
		Ratio,
		fhir_string
	};
	AmounType amount_type_type;

	union {
		Quantity* amountQuantity;
		Range* amountRange;
		Ratio* amountRatio;
		fhir_string amountString;
	} amount;

	Ratio *amountRatioLowLimit;
	CodeableConcept *amountType;
	U64 source_count;
	Reference **source;
};
class SupplyDelivery {
public: 
	ResourceType resourceType;
	fhir_string id;
	Meta *meta;
	fhir_uri implicitRules;
	fhir_code language;
	Narrative *text;
	U64 contained_count;
	Resource **contained;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	U64 identifier_count;
	Identifier **identifier;
	U64 basedOn_count;
	Reference **basedOn;
	U64 partOf_count;
	Reference **partOf;
	fhir_code status;
	Reference *patient;
	CodeableConcept *type;
	SupplyDelivery_SuppliedItem *suppliedItem;
	enum class OccurType {
		Unknown,
		fhir_dateTime,
		Period,
		Timing
	};
	OccurType occurrence_type_type;

	union {
		fhir_dateTime occurrenceDateTime;
		Period* occurrencePeriod;
		Timing* occurrenceTiming;
	} occurrence;

	Reference *supplier;
	Reference *destination;
	U64 receiver_count;
	Reference **receiver;
};
class SupplyDelivery_SuppliedItem {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	Quantity *quantity;
	enum class Item_Type {
		Unknown,
		CodeableConcept,
		Reference
	};
	Item_Type item_type_type;

	union {
		CodeableConcept* itemCodeableConcept;
		Reference* itemReference;
	} item;

};
class SupplyRequest {
public: 
	ResourceType resourceType;
	fhir_string id;
	Meta *meta;
	fhir_uri implicitRules;
	fhir_code language;
	Narrative *text;
	U64 contained_count;
	Resource **contained;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	U64 identifier_count;
	Identifier **identifier;
	fhir_code status;
	CodeableConcept *category;
	fhir_code priority;
	enum class Item_Type {
		Unknown,
		CodeableConcept,
		Reference
	};
	Item_Type item_type_type;

	union {
		CodeableConcept* itemCodeableConcept;
		Reference* itemReference;
	} item;

	Quantity *quantity;
	U64 parameter_count;
	SupplyRequest_Parameter **parameter;
	enum class OccurType {
		Unknown,
		fhir_dateTime,
		Period,
		Timing
	};
	OccurType occurrence_type_type;

	union {
		fhir_dateTime occurrenceDateTime;
		Period* occurrencePeriod;
		Timing* occurrenceTiming;
	} occurrence;

	fhir_dateTime authoredOn;
	Reference *requester;
	U64 supplier_count;
	Reference **supplier;
	U64 reasonCode_count;
	CodeableConcept **reasonCode;
	U64 reasonReference_count;
	Reference **reasonReference;
	Reference *deliverFrom;
	Reference *deliverTo;
};
class SupplyRequest_Parameter {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	CodeableConcept *code;
	enum class ValueType {
		Unknown,
		CodeableConcept,
		Quantity,
		Range,
		fhir_boolean
	};
	ValueType value_type_type;

	union {
		CodeableConcept* valueCodeableConcept;
		Quantity* valueQuantity;
		Range* valueRange;
		fhir_boolean valueBoolean;
	} value;

};
class Task {
public: 
	ResourceType resourceType;
	fhir_string id;
	Meta *meta;
	fhir_uri implicitRules;
	fhir_code language;
	Narrative *text;
	U64 contained_count;
	Resource **contained;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	U64 identifier_count;
	Identifier **identifier;
	fhir_canonical instantiatesCanonical;
	fhir_uri instantiatesUri;
	U64 basedOn_count;
	Reference **basedOn;
	Identifier *groupIdentifier;
	U64 partOf_count;
	Reference **partOf;
	fhir_code status;
	CodeableConcept *statusReason;
	CodeableConcept *businessStatus;
	fhir_code intent;
	fhir_code priority;
	CodeableConcept *code;
	fhir_string description;
	Reference *focus;
	Reference *for_;
	Reference *encounter;
	Period *executionPeriod;
	fhir_dateTime authoredOn;
	fhir_dateTime lastModified;
	Reference *requester;
	U64 performerType_count;
	CodeableConcept **performerType;
	Reference *owner;
	Reference *location;
	CodeableConcept *reasonCode;
	Reference *reasonReference;
	U64 insurance_count;
	Reference **insurance;
	U64 note_count;
	Annotation **note;
	U64 relevantHistory_count;
	Reference **relevantHistory;
	Task_Restriction *restriction;
	U64 input_count;
	Task_Input **input;
	U64 output_count;
	Task_Output **output;
};
class Task_Restriction {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	fhir_positiveInt repetitions;
	Period *period;
	U64 recipient_count;
	Reference **recipient;
};
class Task_Input {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	CodeableConcept *type;
	enum class ValueType {
		Unknown,
		fhir_base64Binary,
		fhir_boolean,
		fhir_canonical,
		fhir_code,
		fhir_date,
		fhir_dateTime,
		fhir_decimal,
		fhir_id,
		fhir_instant,
		Integer,
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
	};
	ValueType value_type_type;

	union {
		fhir_base64Binary valueBase64Binary;
		fhir_boolean valueBoolean;
		fhir_canonical valueCanonical;
		fhir_code valueCode;
		fhir_date valueDate;
		fhir_dateTime valueDateTime;
		fhir_decimal valueDecimal;
		fhir_id valueId;
		fhir_instant valueInstant;
		Integer* valueInteger;
		fhir_markdown valueMarkdown;
		fhir_oid valueOid;
		fhir_positiveInt valuePositiveInt;
		fhir_string valueString;
		fhir_time valueTime;
		fhir_unsignedInt valueUnsignedInt;
		fhir_uri valueUri;
		fhir_url valueUrl;
		fhir_uuid valueUuid;
		Address* valueAddress;
		Age* valueAge;
		Annotation* valueAnnotation;
		Attachment* valueAttachment;
		CodeableConcept* valueCodeableConcept;
		Coding* valueCoding;
		ContactPoint* valueContactPoint;
		Count* valueCount;
		Distance* valueDistance;
		Duration* valueDuration;
		HumanName* valueHumanName;
		Identifier* valueIdentifier;
		Money* valueMoney;
		Period* valuePeriod;
		Quantity* valueQuantity;
		Range* valueRange;
		Ratio* valueRatio;
		Reference* valueReference;
		SampledData* valueSampledData;
		Signature* valueSignature;
		Timing* valueTiming;
		ContactDetail* valueContactDetail;
		Contributor* valueContributor;
		DataRequirement* valueDataRequirement;
		Expression* valueExpression;
		ParameterDefinition* valueParameterDefinition;
		RelatedArtifact* valueRelatedArtifact;
		TriggerDefinition* valueTriggerDefinition;
		UsageContext* valueUsageContext;
		Dosage* valueDosage;
		Meta* valueMeta;
	} value;

};
class Task_Output {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	CodeableConcept *type;
	enum class ValueType {
		Unknown,
		fhir_base64Binary,
		fhir_boolean,
		fhir_canonical,
		fhir_code,
		fhir_date,
		fhir_dateTime,
		fhir_decimal,
		fhir_id,
		fhir_instant,
		Integer,
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
	};
	ValueType value_type_type;

	union {
		fhir_base64Binary valueBase64Binary;
		fhir_boolean valueBoolean;
		fhir_canonical valueCanonical;
		fhir_code valueCode;
		fhir_date valueDate;
		fhir_dateTime valueDateTime;
		fhir_decimal valueDecimal;
		fhir_id valueId;
		fhir_instant valueInstant;
		Integer* valueInteger;
		fhir_markdown valueMarkdown;
		fhir_oid valueOid;
		fhir_positiveInt valuePositiveInt;
		fhir_string valueString;
		fhir_time valueTime;
		fhir_unsignedInt valueUnsignedInt;
		fhir_uri valueUri;
		fhir_url valueUrl;
		fhir_uuid valueUuid;
		Address* valueAddress;
		Age* valueAge;
		Annotation* valueAnnotation;
		Attachment* valueAttachment;
		CodeableConcept* valueCodeableConcept;
		Coding* valueCoding;
		ContactPoint* valueContactPoint;
		Count* valueCount;
		Distance* valueDistance;
		Duration* valueDuration;
		HumanName* valueHumanName;
		Identifier* valueIdentifier;
		Money* valueMoney;
		Period* valuePeriod;
		Quantity* valueQuantity;
		Range* valueRange;
		Ratio* valueRatio;
		Reference* valueReference;
		SampledData* valueSampledData;
		Signature* valueSignature;
		Timing* valueTiming;
		ContactDetail* valueContactDetail;
		Contributor* valueContributor;
		DataRequirement* valueDataRequirement;
		Expression* valueExpression;
		ParameterDefinition* valueParameterDefinition;
		RelatedArtifact* valueRelatedArtifact;
		TriggerDefinition* valueTriggerDefinition;
		UsageContext* valueUsageContext;
		Dosage* valueDosage;
		Meta* valueMeta;
	} value;

};
class TerminologyCapabilities {
public: 
	ResourceType resourceType;
	fhir_string id;
	Meta *meta;
	fhir_uri implicitRules;
	fhir_code language;
	Narrative *text;
	U64 contained_count;
	Resource **contained;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	fhir_uri url;
	fhir_string version;
	fhir_string name;
	fhir_string title;
	fhir_code status;
	fhir_boolean experimental;
	fhir_dateTime date;
	fhir_string publisher;
	U64 contact_count;
	ContactDetail **contact;
	fhir_markdown description;
	U64 useContext_count;
	UsageContext **useContext;
	U64 jurisdiction_count;
	CodeableConcept **jurisdiction;
	fhir_markdown purpose;
	fhir_markdown copyright;
	fhir_code kind;
	TerminologyCapabilities_Software *software;
	TerminologyCapabilities_Implementation *implementation;
	fhir_boolean lockedDate;
	U64 codeSystem_count;
	TerminologyCapabilities_CodeSystem **codeSystem;
	TerminologyCapabilities_Expansion *expansion;
	fhir_code codeSearch;
	TerminologyCapabilities_ValidateCode *validateCode;
	TerminologyCapabilities_Translation *translation;
	TerminologyCapabilities_Closure *closure;
};
class TerminologyCapabilities_Software {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	fhir_string name;
	fhir_string version;
};
class TerminologyCapabilities_Implementation {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	fhir_string description;
	fhir_url url;
};
class TerminologyCapabilities_CodeSystem {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	fhir_canonical uri;
	U64 version_count;
	TerminologyCapabilities_CodeSystem_Version **version;
	fhir_boolean subsumption;
};
class TerminologyCapabilities_CodeSystem_Version {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	fhir_string code;
	fhir_boolean isDefault;
	fhir_boolean compositional;
	U64 language_count;
	fhir_code *language;
	U64 filter_count;
	TerminologyCapabilities_CodeSystem_Version_Filter **filter;
	U64 property_count;
	fhir_code *property;
};
class TerminologyCapabilities_CodeSystem_Version_Filter {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	fhir_code code;
	U64 op_count;
	fhir_code *op;
};
class TerminologyCapabilities_Expansion {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	fhir_boolean hierarchical;
	fhir_boolean paging;
	fhir_boolean incomplete;
	U64 parameter_count;
	TerminologyCapabilities_Expansion_Parameter **parameter;
	fhir_markdown textFilter;
};
class TerminologyCapabilities_Expansion_Parameter {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	fhir_code name;
	fhir_string documentation;
};
class TerminologyCapabilities_ValidateCode {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	fhir_boolean translations;
};
class TerminologyCapabilities_Translation {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	fhir_boolean needsMap;
};
class TerminologyCapabilities_Closure {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	fhir_boolean translation;
};
class TestReport {
public: 
	ResourceType resourceType;
	fhir_string id;
	Meta *meta;
	fhir_uri implicitRules;
	fhir_code language;
	Narrative *text;
	U64 contained_count;
	Resource **contained;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	Identifier *identifier;
	fhir_string name;
	fhir_code status;
	Reference *testScript;
	fhir_code result;
	fhir_decimal score;
	fhir_string tester;
	fhir_dateTime issued;
	U64 participant_count;
	TestReport_Participant **participant;
	TestReport_Setup *setup;
	U64 test_count;
	TestReport_Test **test;
	TestReport_Teardown *teardown;
};
class TestReport_Participant {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	fhir_code type;
	fhir_uri uri;
	fhir_string display;
};
class TestReport_Setup {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	U64 action_count;
	TestReport_Setup_Action **action;
};
class TestReport_Setup_Action {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	TestReport_Setup_Action_Operation *operation;
	TestReport_Setup_Action_Assert *assert;
};
class TestReport_Setup_Action_Operation {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	fhir_code result;
	fhir_markdown message;
	fhir_uri detail;
};
class TestReport_Setup_Action_Assert {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	fhir_code result;
	fhir_markdown message;
	fhir_string detail;
};
class TestReport_Test {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	fhir_string name;
	fhir_string description;
	U64 action_count;
	TestReport_Test_Action **action;
};
class TestReport_Test_Action {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	TestReport_Setup_Action_Operation *operation;
	TestReport_Setup_Action_Assert *assert;
};
class TestReport_Teardown {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	U64 action_count;
	TestReport_Teardown_Action **action;
};
class TestReport_Teardown_Action {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	TestReport_Setup_Action_Operation *operation;
};
class TestScript {
public: 
	ResourceType resourceType;
	fhir_string id;
	Meta *meta;
	fhir_uri implicitRules;
	fhir_code language;
	Narrative *text;
	U64 contained_count;
	Resource **contained;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	fhir_uri url;
	Identifier *identifier;
	fhir_string version;
	fhir_string name;
	fhir_string title;
	fhir_code status;
	fhir_boolean experimental;
	fhir_dateTime date;
	fhir_string publisher;
	U64 contact_count;
	ContactDetail **contact;
	fhir_markdown description;
	U64 useContext_count;
	UsageContext **useContext;
	U64 jurisdiction_count;
	CodeableConcept **jurisdiction;
	fhir_markdown purpose;
	fhir_markdown copyright;
	U64 origin_count;
	TestScript_Origin **origin;
	U64 destination_count;
	TestScript_Destination **destination;
	TestScript_Metadata *metadata;
	U64 fixture_count;
	TestScript_Fixture **fixture;
	U64 profile_count;
	Reference **profile;
	U64 variable_count;
	TestScript_Variable **variable;
	TestScript_Setup *setup;
	U64 test_count;
	TestScript_Test **test;
	TestScript_Teardown *teardown;
};
class TestScript_Origin {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	Integer *index;
	Coding *profile;
};
class TestScript_Destination {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	Integer *index;
	Coding *profile;
};
class TestScript_Metadata {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	U64 link_count;
	TestScript_Metadata_Link **link;
	U64 capability_count;
	TestScript_Metadata_Capability **capability;
};
class TestScript_Metadata_Link {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	fhir_uri url;
	fhir_string description;
};
class TestScript_Metadata_Capability {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	fhir_boolean required;
	fhir_boolean validated;
	fhir_string description;
	U64 origin_count;
	Integer **origin;
	Integer *destination;
	U64 link_count;
	fhir_uri *link;
	fhir_canonical capabilities;
};
class TestScript_Fixture {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	fhir_boolean autocreate;
	fhir_boolean autodelete;
	Reference *resource;
};
class TestScript_Variable {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
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
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	U64 action_count;
	TestScript_Setup_Action **action;
};
class TestScript_Setup_Action {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	TestScript_Setup_Action_Operation *operation;
	TestScript_Setup_Action_Assert *assert;
};
class TestScript_Setup_Action_Operation {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	Coding *type;
	fhir_code resource;
	fhir_string label;
	fhir_string description;
	fhir_code accept;
	fhir_code contentType;
	Integer *destination;
	fhir_boolean encodeRequestUrl;
	fhir_code method;
	Integer *origin;
	fhir_string params;
	U64 requestHeader_count;
	TestScript_Setup_Action_Operation_RequestHeader **requestHeader;
	fhir_id requestId;
	fhir_id responseId;
	fhir_id sourceId;
	fhir_id targetId;
	fhir_string url;
};
class TestScript_Setup_Action_Operation_RequestHeader {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	fhir_string field;
	fhir_string value;
};
class TestScript_Setup_Action_Assert {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
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
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	fhir_string name;
	fhir_string description;
	U64 action_count;
	TestScript_Test_Action **action;
};
class TestScript_Test_Action {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	TestScript_Setup_Action_Operation *operation;
	TestScript_Setup_Action_Assert *assert;
};
class TestScript_Teardown {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	U64 action_count;
	TestScript_Teardown_Action **action;
};
class TestScript_Teardown_Action {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	TestScript_Setup_Action_Operation *operation;
};
class ValueSet {
public: 
	ResourceType resourceType;
	fhir_string id;
	Meta *meta;
	fhir_uri implicitRules;
	fhir_code language;
	Narrative *text;
	U64 contained_count;
	Resource **contained;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	fhir_uri url;
	U64 identifier_count;
	Identifier **identifier;
	fhir_string version;
	fhir_string name;
	fhir_string title;
	fhir_code status;
	fhir_boolean experimental;
	fhir_dateTime date;
	fhir_string publisher;
	U64 contact_count;
	ContactDetail **contact;
	fhir_markdown description;
	U64 useContext_count;
	UsageContext **useContext;
	U64 jurisdiction_count;
	CodeableConcept **jurisdiction;
	fhir_boolean immutable;
	fhir_markdown purpose;
	fhir_markdown copyright;
	ValueSet_Compose *compose;
	ValueSet_Expansion *expansion;
};
class ValueSet_Compose {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	fhir_date lockedDate;
	fhir_boolean inactive;
	U64 include_count;
	ValueSet_Compose_Include **include;
	U64 exclude_count;
	ValueSet_Compose_Include **exclude;
};
class ValueSet_Compose_Include {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	fhir_uri system;
	fhir_string version;
	U64 concept_count;
	ValueSet_Compose_Include_Concept **concept;
	U64 filter_count;
	ValueSet_Compose_Include_Filter **filter;
	U64 valueSet_count;
	fhir_canonical *valueSet;
};
class ValueSet_Compose_Include_Concept {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	fhir_code code;
	fhir_string display;
	U64 designation_count;
	ValueSet_Compose_Include_Concept_Designation **designation;
};
class ValueSet_Compose_Include_Concept_Designation {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	fhir_code language;
	Coding *use;
	fhir_string value;
};
class ValueSet_Compose_Include_Filter {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	fhir_code property;
	fhir_code op;
	fhir_string value;
};
class ValueSet_Expansion {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	fhir_uri identifier;
	fhir_dateTime timestamp;
	Integer *total;
	Integer *offset;
	U64 parameter_count;
	ValueSet_Expansion_Parameter **parameter;
	U64 contains_count;
	ValueSet_Expansion_Contains **contains;
};
class ValueSet_Expansion_Parameter {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	fhir_string name;
	enum class ValueType {
		Unknown,
		fhir_string,
		fhir_boolean,
		Integer,
		fhir_decimal,
		fhir_uri,
		fhir_code,
		fhir_dateTime
	};
	ValueType value_type_type;

	union {
		fhir_string valueString;
		fhir_boolean valueBoolean;
		Integer* valueInteger;
		fhir_decimal valueDecimal;
		fhir_uri valueUri;
		fhir_code valueCode;
		fhir_dateTime valueDateTime;
	} value;

};
class ValueSet_Expansion_Contains {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	fhir_uri system;
	fhir_boolean abstract;
	fhir_boolean inactive;
	fhir_string version;
	fhir_code code;
	fhir_string display;
	U64 designation_count;
	ValueSet_Compose_Include_Concept_Designation **designation;
	U64 contains_count;
	ValueSet_Expansion_Contains **contains;
};
class VerificationResult {
public: 
	ResourceType resourceType;
	fhir_string id;
	Meta *meta;
	fhir_uri implicitRules;
	fhir_code language;
	Narrative *text;
	U64 contained_count;
	Resource **contained;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	U64 target_count;
	Reference **target;
	U64 targetLocation_count;
	fhir_string *targetLocation;
	CodeableConcept *need;
	fhir_code status;
	fhir_dateTime statusDate;
	CodeableConcept *validationType;
	U64 validationProcess_count;
	CodeableConcept **validationProcess;
	Timing *frequency;
	fhir_dateTime lastPerformed;
	fhir_date nextScheduled;
	CodeableConcept *failureAction;
	U64 primarySource_count;
	VerificationResult_PrimarySource **primarySource;
	VerificationResult_Attestation *attestation;
	U64 validator_count;
	VerificationResult_Validator **validator;
};
class VerificationResult_PrimarySource {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	Reference *who;
	U64 type_count;
	CodeableConcept **type;
	U64 communicationMethod_count;
	CodeableConcept **communicationMethod;
	CodeableConcept *validationStatus;
	fhir_dateTime validationDate;
	CodeableConcept *canPushUpdates;
	U64 pushTypeAvailable_count;
	CodeableConcept **pushTypeAvailable;
};
class VerificationResult_Attestation {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	Reference *who;
	Reference *onBehalfOf;
	CodeableConcept *communicationMethod;
	fhir_date date;
	fhir_string sourceIdentityCertificate;
	fhir_string proxyIdentityCertificate;
	Signature *proxySignature;
	Signature *sourceSignature;
};
class VerificationResult_Validator {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	Reference *organization;
	fhir_string identityCertificate;
	Signature *attestationSignature;
};
class VisionPrescription {
public: 
	ResourceType resourceType;
	fhir_string id;
	Meta *meta;
	fhir_uri implicitRules;
	fhir_code language;
	Narrative *text;
	U64 contained_count;
	Resource **contained;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	U64 identifier_count;
	Identifier **identifier;
	fhir_code status;
	fhir_dateTime created;
	Reference *patient;
	Reference *encounter;
	fhir_dateTime dateWritten;
	Reference *prescriber;
	U64 lensSpecification_count;
	VisionPrescription_LensSpecification **lensSpecification;
};
class VisionPrescription_LensSpecification {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	CodeableConcept *product;
	fhir_code eye;
	fhir_decimal sphere;
	fhir_decimal cylinder;
	Integer *axis;
	U64 prism_count;
	VisionPrescription_LensSpecification_Prism **prism;
	fhir_decimal add;
	fhir_decimal power;
	fhir_decimal backCurve;
	fhir_decimal diameter;
	Quantity *duration;
	fhir_string color;
	fhir_string brand;
	U64 note_count;
	Annotation **note;
};
class VisionPrescription_LensSpecification_Prism {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	fhir_decimal amount;
	fhir_code base;
};
class MetadataResource {
public: 
	ResourceType resourceType;
	fhir_string id;
	Meta *meta;
	fhir_uri implicitRules;
	fhir_code language;
	Narrative *text;
	U64 contained_count;
	Resource **contained;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	fhir_uri url;
	fhir_string version;
	fhir_string name;
	fhir_string title;
	fhir_code status;
	fhir_boolean experimental;
	fhir_dateTime date;
	fhir_string publisher;
	U64 contact_count;
	ContactDetail **contact;
	fhir_markdown description;
	U64 useContext_count;
	UsageContext **useContext;
	U64 jurisdiction_count;
	CodeableConcept **jurisdiction;
};
class Element {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
};
class BackboneElement {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
};
class Integer {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	fhir_unsignedInt value;
};
class Address {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	fhir_code use;
	fhir_code type;
	fhir_string text;
	U64 line_count;
	fhir_string *line;
	fhir_string city;
	fhir_string district;
	fhir_string state;
	fhir_string postalCode;
	fhir_string country;
	Period *period;
};
class Age {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	fhir_decimal value;
	fhir_code comparator;
	fhir_string unit;
	fhir_uri system;
	fhir_code code;
};
class Annotation {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	enum class AuthoType {
		Unknown,
		Reference,
		fhir_string
	};
	AuthoType author_type_type;

	union {
		Reference* authorReference;
		fhir_string authorString;
	} author;

	fhir_dateTime time;
	fhir_markdown text;
};
class Attachment {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
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
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 coding_count;
	Coding **coding;
	fhir_string text;
};
class Coding {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	fhir_uri system;
	fhir_string version;
	fhir_code code;
	fhir_string display;
	fhir_boolean userSelected;
};
class ContactDetail {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	fhir_string name;
	U64 telecom_count;
	ContactPoint **telecom;
};
class ContactPoint {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	fhir_code system;
	fhir_string value;
	fhir_code use;
	fhir_positiveInt rank;
	Period *period;
};
class Contributor {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	fhir_code type;
	fhir_string name;
	U64 contact_count;
	ContactDetail **contact;
};
class Count {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	fhir_decimal value;
	fhir_code comparator;
	fhir_string unit;
	fhir_uri system;
	fhir_code code;
};
class DataRequirement {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	fhir_code type;
	U64 profile_count;
	fhir_canonical *profile;
	enum class SubjeType {
		Unknown,
		CodeableConcept,
		Reference
	};
	SubjeType subject_type_type;

	union {
		CodeableConcept* subjectCodeableConcept;
		Reference* subjectReference;
	} subject;

	U64 mustSupport_count;
	fhir_string *mustSupport;
	U64 codeFilter_count;
	DataRequirement_CodeFilter **codeFilter;
	U64 dateFilter_count;
	DataRequirement_DateFilter **dateFilter;
	fhir_positiveInt limit;
	U64 sort_count;
	DataRequirement_Sort **sort;
};
class DataRequirement_CodeFilter {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	fhir_string path;
	fhir_string searchParam;
	fhir_canonical valueSet;
	U64 code_count;
	Coding **code;
};
class DataRequirement_DateFilter {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	fhir_string path;
	fhir_string searchParam;
	enum class ValueType {
		Unknown,
		fhir_dateTime,
		Period,
		Duration
	};
	ValueType value_type_type;

	union {
		fhir_dateTime valueDateTime;
		Period* valuePeriod;
		Duration* valueDuration;
	} value;

};
class DataRequirement_Sort {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	fhir_string path;
	fhir_code direction;
};
class Distance {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	fhir_decimal value;
	fhir_code comparator;
	fhir_string unit;
	fhir_uri system;
	fhir_code code;
};
class Dosage {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	Integer *sequence;
	fhir_string text;
	U64 additionalInstruction_count;
	CodeableConcept **additionalInstruction;
	fhir_string patientInstruction;
	Timing *timing;
	enum class AsNeeType {
		Unknown,
		fhir_boolean,
		CodeableConcept
	};
	AsNeeType asNeeded_type_type;

	union {
		fhir_boolean asNeededBoolean;
		CodeableConcept* asNeededCodeableConcept;
	} asNeeded;

	CodeableConcept *site;
	CodeableConcept *route;
	CodeableConcept *method;
	U64 doseAndRate_count;
	Dosage_DoseAndRate **doseAndRate;
	Ratio *maxDosePerPeriod;
	Quantity *maxDosePerAdministration;
	Quantity *maxDosePerLifetime;
};
class Dosage_DoseAndRate {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	CodeableConcept *type;
	enum class Dose_Type {
		Unknown,
		Range,
		Quantity
	};
	Dose_Type dose_type_type;

	union {
		Range* doseRange;
		Quantity* doseQuantity;
	} dose;

	enum class Rate_Type {
		Unknown,
		Ratio,
		Range,
		Quantity
	};
	Rate_Type rate_type_type;

	union {
		Ratio* rateRatio;
		Range* rateRange;
		Quantity* rateQuantity;
	} rate;

};
class Duration {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	fhir_decimal value;
	fhir_code comparator;
	fhir_string unit;
	fhir_uri system;
	fhir_code code;
};
class ElementDefinition {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	fhir_string path;
	U64 representation_count;
	fhir_code *representation;
	fhir_string sliceName;
	fhir_boolean sliceIsConstraining;
	fhir_string label;
	U64 code_count;
	Coding **code;
	ElementDefinition_Slicing *slicing;
	fhir_string short_;
	fhir_markdown definition;
	fhir_markdown comment;
	fhir_markdown requirements;
	U64 alias_count;
	fhir_string *alias;
	fhir_unsignedInt min;
	fhir_string max;
	ElementDefinition_Base *base;
	fhir_uri contentReference;
	U64 type_count;
	ElementDefinition_Type **type;
	enum class DefauType {
		Unknown,
		fhir_base64Binary,
		fhir_boolean,
		fhir_canonical,
		fhir_code,
		fhir_date,
		fhir_dateTime,
		fhir_decimal,
		fhir_id,
		fhir_instant,
		Integer,
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
	};
	DefauType defaultValue_type_type;

	union {
		fhir_base64Binary defaultValueBase64Binary;
		fhir_boolean defaultValueBoolean;
		fhir_canonical defaultValueCanonical;
		fhir_code defaultValueCode;
		fhir_date defaultValueDate;
		fhir_dateTime defaultValueDateTime;
		fhir_decimal defaultValueDecimal;
		fhir_id defaultValueId;
		fhir_instant defaultValueInstant;
		Integer* defaultValueInteger;
		fhir_markdown defaultValueMarkdown;
		fhir_oid defaultValueOid;
		fhir_positiveInt defaultValuePositiveInt;
		fhir_string defaultValueString;
		fhir_time defaultValueTime;
		fhir_unsignedInt defaultValueUnsignedInt;
		fhir_uri defaultValueUri;
		fhir_url defaultValueUrl;
		fhir_uuid defaultValueUuid;
		Address* defaultValueAddress;
		Age* defaultValueAge;
		Annotation* defaultValueAnnotation;
		Attachment* defaultValueAttachment;
		CodeableConcept* defaultValueCodeableConcept;
		Coding* defaultValueCoding;
		ContactPoint* defaultValueContactPoint;
		Count* defaultValueCount;
		Distance* defaultValueDistance;
		Duration* defaultValueDuration;
		HumanName* defaultValueHumanName;
		Identifier* defaultValueIdentifier;
		Money* defaultValueMoney;
		Period* defaultValuePeriod;
		Quantity* defaultValueQuantity;
		Range* defaultValueRange;
		Ratio* defaultValueRatio;
		Reference* defaultValueReference;
		SampledData* defaultValueSampledData;
		Signature* defaultValueSignature;
		Timing* defaultValueTiming;
		ContactDetail* defaultValueContactDetail;
		Contributor* defaultValueContributor;
		DataRequirement* defaultValueDataRequirement;
		Expression* defaultValueExpression;
		ParameterDefinition* defaultValueParameterDefinition;
		RelatedArtifact* defaultValueRelatedArtifact;
		TriggerDefinition* defaultValueTriggerDefinition;
		UsageContext* defaultValueUsageContext;
		Dosage* defaultValueDosage;
		Meta* defaultValueMeta;
	} defaultValue;

	fhir_markdown meaningWhenMissing;
	fhir_string orderMeaning;
	enum class FixedType {
		Unknown,
		fhir_base64Binary,
		fhir_boolean,
		fhir_canonical,
		fhir_code,
		fhir_date,
		fhir_dateTime,
		fhir_decimal,
		fhir_id,
		fhir_instant,
		Integer,
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
	};
	FixedType fixed_type_type;

	union {
		fhir_base64Binary fixedBase64Binary;
		fhir_boolean fixedBoolean;
		fhir_canonical fixedCanonical;
		fhir_code fixedCode;
		fhir_date fixedDate;
		fhir_dateTime fixedDateTime;
		fhir_decimal fixedDecimal;
		fhir_id fixedId;
		fhir_instant fixedInstant;
		Integer* fixedInteger;
		fhir_markdown fixedMarkdown;
		fhir_oid fixedOid;
		fhir_positiveInt fixedPositiveInt;
		fhir_string fixedString;
		fhir_time fixedTime;
		fhir_unsignedInt fixedUnsignedInt;
		fhir_uri fixedUri;
		fhir_url fixedUrl;
		fhir_uuid fixedUuid;
		Address* fixedAddress;
		Age* fixedAge;
		Annotation* fixedAnnotation;
		Attachment* fixedAttachment;
		CodeableConcept* fixedCodeableConcept;
		Coding* fixedCoding;
		ContactPoint* fixedContactPoint;
		Count* fixedCount;
		Distance* fixedDistance;
		Duration* fixedDuration;
		HumanName* fixedHumanName;
		Identifier* fixedIdentifier;
		Money* fixedMoney;
		Period* fixedPeriod;
		Quantity* fixedQuantity;
		Range* fixedRange;
		Ratio* fixedRatio;
		Reference* fixedReference;
		SampledData* fixedSampledData;
		Signature* fixedSignature;
		Timing* fixedTiming;
		ContactDetail* fixedContactDetail;
		Contributor* fixedContributor;
		DataRequirement* fixedDataRequirement;
		Expression* fixedExpression;
		ParameterDefinition* fixedParameterDefinition;
		RelatedArtifact* fixedRelatedArtifact;
		TriggerDefinition* fixedTriggerDefinition;
		UsageContext* fixedUsageContext;
		Dosage* fixedDosage;
		Meta* fixedMeta;
	} fixed;

	enum class PatteType {
		Unknown,
		fhir_base64Binary,
		fhir_boolean,
		fhir_canonical,
		fhir_code,
		fhir_date,
		fhir_dateTime,
		fhir_decimal,
		fhir_id,
		fhir_instant,
		Integer,
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
	};
	PatteType pattern_type_type;

	union {
		fhir_base64Binary patternBase64Binary;
		fhir_boolean patternBoolean;
		fhir_canonical patternCanonical;
		fhir_code patternCode;
		fhir_date patternDate;
		fhir_dateTime patternDateTime;
		fhir_decimal patternDecimal;
		fhir_id patternId;
		fhir_instant patternInstant;
		Integer* patternInteger;
		fhir_markdown patternMarkdown;
		fhir_oid patternOid;
		fhir_positiveInt patternPositiveInt;
		fhir_string patternString;
		fhir_time patternTime;
		fhir_unsignedInt patternUnsignedInt;
		fhir_uri patternUri;
		fhir_url patternUrl;
		fhir_uuid patternUuid;
		Address* patternAddress;
		Age* patternAge;
		Annotation* patternAnnotation;
		Attachment* patternAttachment;
		CodeableConcept* patternCodeableConcept;
		Coding* patternCoding;
		ContactPoint* patternContactPoint;
		Count* patternCount;
		Distance* patternDistance;
		Duration* patternDuration;
		HumanName* patternHumanName;
		Identifier* patternIdentifier;
		Money* patternMoney;
		Period* patternPeriod;
		Quantity* patternQuantity;
		Range* patternRange;
		Ratio* patternRatio;
		Reference* patternReference;
		SampledData* patternSampledData;
		Signature* patternSignature;
		Timing* patternTiming;
		ContactDetail* patternContactDetail;
		Contributor* patternContributor;
		DataRequirement* patternDataRequirement;
		Expression* patternExpression;
		ParameterDefinition* patternParameterDefinition;
		RelatedArtifact* patternRelatedArtifact;
		TriggerDefinition* patternTriggerDefinition;
		UsageContext* patternUsageContext;
		Dosage* patternDosage;
		Meta* patternMeta;
	} pattern;

	U64 example_count;
	ElementDefinition_Example **example;
	enum class MinVaType {
		Unknown,
		fhir_date,
		fhir_dateTime,
		fhir_instant,
		fhir_time,
		fhir_decimal,
		Integer,
		fhir_positiveInt,
		fhir_unsignedInt,
		Quantity
	};
	MinVaType minValue_type_type;

	union {
		fhir_date minValueDate;
		fhir_dateTime minValueDateTime;
		fhir_instant minValueInstant;
		fhir_time minValueTime;
		fhir_decimal minValueDecimal;
		Integer* minValueInteger;
		fhir_positiveInt minValuePositiveInt;
		fhir_unsignedInt minValueUnsignedInt;
		Quantity* minValueQuantity;
	} minValue;

	enum class MaxVaType {
		Unknown,
		fhir_date,
		fhir_dateTime,
		fhir_instant,
		fhir_time,
		fhir_decimal,
		Integer,
		fhir_positiveInt,
		fhir_unsignedInt,
		Quantity
	};
	MaxVaType maxValue_type_type;

	union {
		fhir_date maxValueDate;
		fhir_dateTime maxValueDateTime;
		fhir_instant maxValueInstant;
		fhir_time maxValueTime;
		fhir_decimal maxValueDecimal;
		Integer* maxValueInteger;
		fhir_positiveInt maxValuePositiveInt;
		fhir_unsignedInt maxValueUnsignedInt;
		Quantity* maxValueQuantity;
	} maxValue;

	Integer *maxLength;
	U64 condition_count;
	fhir_id *condition;
	U64 constraint_count;
	ElementDefinition_Constraint **constraint;
	fhir_boolean mustSupport;
	fhir_boolean isModifier;
	fhir_string isModifierReason;
	fhir_boolean isSummary;
	ElementDefinition_Binding *binding;
	U64 mapping_count;
	ElementDefinition_Mapping **mapping;
};
class ElementDefinition_Slicing {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 discriminator_count;
	ElementDefinition_Slicing_Discriminator **discriminator;
	fhir_string description;
	fhir_boolean ordered;
	fhir_code rules;
};
class ElementDefinition_Slicing_Discriminator {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	fhir_code type;
	fhir_string path;
};
class ElementDefinition_Base {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	fhir_string path;
	fhir_unsignedInt min;
	fhir_string max;
};
class ElementDefinition_Type {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	fhir_uri code;
	U64 profile_count;
	fhir_canonical *profile;
	U64 targetProfile_count;
	fhir_canonical *targetProfile;
	U64 aggregation_count;
	fhir_code *aggregation;
	fhir_code versioning;
};
class ElementDefinition_Example {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	fhir_string label;
	enum class ValueType {
		Unknown,
		fhir_base64Binary,
		fhir_boolean,
		fhir_canonical,
		fhir_code,
		fhir_date,
		fhir_dateTime,
		fhir_decimal,
		fhir_id,
		fhir_instant,
		Integer,
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
	};
	ValueType value_type_type;

	union {
		fhir_base64Binary valueBase64Binary;
		fhir_boolean valueBoolean;
		fhir_canonical valueCanonical;
		fhir_code valueCode;
		fhir_date valueDate;
		fhir_dateTime valueDateTime;
		fhir_decimal valueDecimal;
		fhir_id valueId;
		fhir_instant valueInstant;
		Integer* valueInteger;
		fhir_markdown valueMarkdown;
		fhir_oid valueOid;
		fhir_positiveInt valuePositiveInt;
		fhir_string valueString;
		fhir_time valueTime;
		fhir_unsignedInt valueUnsignedInt;
		fhir_uri valueUri;
		fhir_url valueUrl;
		fhir_uuid valueUuid;
		Address* valueAddress;
		Age* valueAge;
		Annotation* valueAnnotation;
		Attachment* valueAttachment;
		CodeableConcept* valueCodeableConcept;
		Coding* valueCoding;
		ContactPoint* valueContactPoint;
		Count* valueCount;
		Distance* valueDistance;
		Duration* valueDuration;
		HumanName* valueHumanName;
		Identifier* valueIdentifier;
		Money* valueMoney;
		Period* valuePeriod;
		Quantity* valueQuantity;
		Range* valueRange;
		Ratio* valueRatio;
		Reference* valueReference;
		SampledData* valueSampledData;
		Signature* valueSignature;
		Timing* valueTiming;
		ContactDetail* valueContactDetail;
		Contributor* valueContributor;
		DataRequirement* valueDataRequirement;
		Expression* valueExpression;
		ParameterDefinition* valueParameterDefinition;
		RelatedArtifact* valueRelatedArtifact;
		TriggerDefinition* valueTriggerDefinition;
		UsageContext* valueUsageContext;
		Dosage* valueDosage;
		Meta* valueMeta;
	} value;

};
class ElementDefinition_Constraint {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
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
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	fhir_code strength;
	fhir_string description;
	fhir_canonical valueSet;
};
class ElementDefinition_Mapping {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	fhir_id identity;
	fhir_code language;
	fhir_string map;
	fhir_string comment;
};
class Expression {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	fhir_string description;
	fhir_id name;
	fhir_code language;
	fhir_string expression;
	fhir_uri reference;
};
class Extension {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	fhir_string url;
	enum class ValueType {
		Unknown,
		fhir_base64Binary,
		fhir_boolean,
		fhir_canonical,
		fhir_code,
		fhir_date,
		fhir_dateTime,
		fhir_decimal,
		fhir_id,
		fhir_instant,
		Integer,
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
	};
	ValueType value_type_type;

	union {
		fhir_base64Binary valueBase64Binary;
		fhir_boolean valueBoolean;
		fhir_canonical valueCanonical;
		fhir_code valueCode;
		fhir_date valueDate;
		fhir_dateTime valueDateTime;
		fhir_decimal valueDecimal;
		fhir_id valueId;
		fhir_instant valueInstant;
		Integer* valueInteger;
		fhir_markdown valueMarkdown;
		fhir_oid valueOid;
		fhir_positiveInt valuePositiveInt;
		fhir_string valueString;
		fhir_time valueTime;
		fhir_unsignedInt valueUnsignedInt;
		fhir_uri valueUri;
		fhir_url valueUrl;
		fhir_uuid valueUuid;
		Address* valueAddress;
		Age* valueAge;
		Annotation* valueAnnotation;
		Attachment* valueAttachment;
		CodeableConcept* valueCodeableConcept;
		Coding* valueCoding;
		ContactPoint* valueContactPoint;
		Count* valueCount;
		Distance* valueDistance;
		Duration* valueDuration;
		HumanName* valueHumanName;
		Identifier* valueIdentifier;
		Money* valueMoney;
		Period* valuePeriod;
		Quantity* valueQuantity;
		Range* valueRange;
		Ratio* valueRatio;
		Reference* valueReference;
		SampledData* valueSampledData;
		Signature* valueSignature;
		Timing* valueTiming;
		ContactDetail* valueContactDetail;
		Contributor* valueContributor;
		DataRequirement* valueDataRequirement;
		Expression* valueExpression;
		ParameterDefinition* valueParameterDefinition;
		RelatedArtifact* valueRelatedArtifact;
		TriggerDefinition* valueTriggerDefinition;
		UsageContext* valueUsageContext;
		Dosage* valueDosage;
		Meta* valueMeta;
	} value;

};
class HumanName {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	fhir_code use;
	fhir_string text;
	fhir_string family;
	U64 given_count;
	fhir_string *given;
	U64 prefix_count;
	fhir_string *prefix;
	U64 suffix_count;
	fhir_string *suffix;
	Period *period;
};
class Identifier {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	fhir_code use;
	CodeableConcept *type;
	fhir_uri system;
	fhir_string value;
	Period *period;
	Reference *assigner;
};
class MarketingStatus {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	CodeableConcept *country;
	CodeableConcept *jurisdiction;
	CodeableConcept *status;
	Period *dateRange;
	fhir_dateTime restoreDate;
};
class Meta {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	fhir_id versionId;
	fhir_instant lastUpdated;
	fhir_uri source;
	U64 profile_count;
	fhir_canonical *profile;
	U64 security_count;
	Coding **security;
	U64 tag_count;
	Coding **tag;
};
class Money {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	fhir_decimal value;
	fhir_code currency;
};
class Narrative {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	fhir_code status;
	fhir_xhtml div;
};
class ParameterDefinition {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	fhir_code name;
	fhir_code use;
	Integer *min;
	fhir_string max;
	fhir_string documentation;
	fhir_code type;
	fhir_canonical profile;
};
class Period {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	fhir_dateTime start;
	fhir_dateTime end;
};
class Population {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	enum class Age_tType {
		Unknown,
		Range,
		CodeableConcept
	};
	Age_tType age_type_type;

	union {
		Range* ageRange;
		CodeableConcept* ageCodeableConcept;
	} age;

	CodeableConcept *gender;
	CodeableConcept *race;
	CodeableConcept *physiologicalCondition;
};
class ProdCharacteristic {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	Quantity *height;
	Quantity *width;
	Quantity *depth;
	Quantity *weight;
	Quantity *nominalVolume;
	Quantity *externalDiameter;
	fhir_string shape;
	U64 color_count;
	fhir_string *color;
	U64 imprint_count;
	fhir_string *imprint;
	U64 image_count;
	Attachment **image;
	CodeableConcept *scoring;
};
class ProductShelfLife {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	Identifier *identifier;
	CodeableConcept *type;
	Quantity *period;
	U64 specialPrecautionsForStorage_count;
	CodeableConcept **specialPrecautionsForStorage;
};
class Quantity {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	fhir_decimal value;
	fhir_code comparator;
	fhir_string unit;
	fhir_uri system;
	fhir_code code;
};
class Range {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	Quantity *low;
	Quantity *high;
};
class Ratio {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	Quantity *numerator;
	Quantity *denominator;
};
class Reference {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	fhir_string reference;
	fhir_uri type;
	Identifier *identifier;
	fhir_string display;
};
class RelatedArtifact {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	fhir_code type;
	fhir_string label;
	fhir_string display;
	fhir_markdown citation;
	fhir_url url;
	Attachment *document;
	fhir_canonical resource;
};
class SampledData {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	Quantity *origin;
	fhir_decimal period;
	fhir_decimal factor;
	fhir_decimal lowerLimit;
	fhir_decimal upperLimit;
	fhir_positiveInt dimensions;
	fhir_string data;
};
class Signature {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 type_count;
	Coding **type;
	fhir_instant when;
	Reference *who;
	Reference *onBehalfOf;
	fhir_code targetFormat;
	fhir_code sigFormat;
	fhir_base64Binary data;
};
class SubstanceAmount {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	enum class AmounType {
		Unknown,
		Quantity,
		Range,
		fhir_string
	};
	AmounType amount_type_type;

	union {
		Quantity* amountQuantity;
		Range* amountRange;
		fhir_string amountString;
	} amount;

	CodeableConcept *amountType;
	fhir_string amountText;
	SubstanceAmount_ReferenceRange *referenceRange;
};
class SubstanceAmount_ReferenceRange {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	Quantity *lowLimit;
	Quantity *highLimit;
};
class Timing {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	U64 modifierExtension_count;
	Extension **modifierExtension;
	U64 event_count;
	fhir_dateTime *event;
	Timing_Repeat *repeat;
	CodeableConcept *code;
};
class Timing_Repeat {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	enum class BoundType {
		Unknown,
		Duration,
		Range,
		Period
	};
	BoundType bounds_type_type;

	union {
		Duration* boundsDuration;
		Range* boundsRange;
		Period* boundsPeriod;
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
	U64 dayOfWeek_count;
	fhir_code *dayOfWeek;
	U64 timeOfDay_count;
	fhir_time *timeOfDay;
	U64 when_count;
	fhir_code *when;
	fhir_unsignedInt offset;
};
class TriggerDefinition {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	fhir_code type;
	fhir_string name;
	enum class TiminType {
		Unknown,
		Timing,
		Reference,
		fhir_date,
		fhir_dateTime
	};
	TiminType timing_type_type;

	union {
		Timing* timingTiming;
		Reference* timingReference;
		fhir_date timingDate;
		fhir_dateTime timingDateTime;
	} timing;

	U64 data_count;
	DataRequirement **data;
	Expression *condition;
};
class UsageContext {
public: 
	ResourceType resourceType;
	fhir_string id;
	U64 extension_count;
	Extension **extension;
	Coding *code;
	enum class ValueType {
		Unknown,
		CodeableConcept,
		Quantity,
		Range,
		Reference
	};
	ValueType value_type_type;

	union {
		CodeableConcept* valueCodeableConcept;
		Quantity* valueQuantity;
		Range* valueRange;
		Reference* valueReference;
	} value;

};
class MoneyQuantity : Quantity {
public: 
	ResourceType resourceType;
};
class SimpleQuantity : Quantity {
public: 
	ResourceType resourceType;
};
class Shareablemeasure : Measure {
public: 
	ResourceType resourceType;
};
class Servicerequest_genetics : ServiceRequest {
public: 
	ResourceType resourceType;
};
class Groupdefinition : Group {
public: 
	ResourceType resourceType;
};
class Actualgroup : Group {
public: 
	ResourceType resourceType;
};
class Familymemberhistory_genetic : FamilyMemberHistory {
public: 
	ResourceType resourceType;
};
class Shareableactivitydefinition : ActivityDefinition {
public: 
	ResourceType resourceType;
};
class Cdshooksrequestgroup : RequestGroup {
public: 
	ResourceType resourceType;
};
class Provenance_relevant_history : Provenance {
public: 
	ResourceType resourceType;
};
class Cqf_questionnaire : Questionnaire {
public: 
	ResourceType resourceType;
};
class Shareablevalueset : ValueSet {
public: 
	ResourceType resourceType;
};
class Picoelement : EvidenceVariable {
public: 
	ResourceType resourceType;
};
class Shareablecodesystem : CodeSystem {
public: 
	ResourceType resourceType;
};
class Cdshooksguidanceresponse : GuidanceResponse {
public: 
	ResourceType resourceType;
};
class Devicemetricobservation : Observation {
public: 
	ResourceType resourceType;
};
class Observation_genetics : Observation {
public: 
	ResourceType resourceType;
};
class Vitalsigns : Observation {
public: 
	ResourceType resourceType;
};
class Bodyweight : Observation {
public: 
	ResourceType resourceType;
};
class Vitalspanel : Observation {
public: 
	ResourceType resourceType;
};
class Bodyheight : Observation {
public: 
	ResourceType resourceType;
};
class Resprate : Observation {
public: 
	ResourceType resourceType;
};
class Heartrate : Observation {
public: 
	ResourceType resourceType;
};
class Bodytemp : Observation {
public: 
	ResourceType resourceType;
};
class Headcircum : Observation {
public: 
	ResourceType resourceType;
};
class Oxygensat : Observation {
public: 
	ResourceType resourceType;
};
class Bmi : Observation {
public: 
	ResourceType resourceType;
};
class Bp : Observation {
public: 
	ResourceType resourceType;
};
class Shareablelibrary : Library {
public: 
	ResourceType resourceType;
};
class Cqllibrary : Library {
public: 
	ResourceType resourceType;
};
class Lipidprofile : DiagnosticReport {
public: 
	ResourceType resourceType;
};
class Cholesterol : Observation {
public: 
	ResourceType resourceType;
};
class Triglyceride : Observation {
public: 
	ResourceType resourceType;
};
class Hdlcholesterol : Observation {
public: 
	ResourceType resourceType;
};
class Ldlcholesterol : Observation {
public: 
	ResourceType resourceType;
};
class Diagnosticreport_genetics : DiagnosticReport {
public: 
	ResourceType resourceType;
};
class Hlaresult : DiagnosticReport {
public: 
	ResourceType resourceType;
};
class Synthesis : Evidence {
public: 
	ResourceType resourceType;
};
class Clinicaldocument : Composition {
public: 
	ResourceType resourceType;
};
class Catalog : Composition {
public: 
	ResourceType resourceType;
};
class Shareableplandefinition : PlanDefinition {
public: 
	ResourceType resourceType;
};
class Computableplandefinition : PlanDefinition {
public: 
	ResourceType resourceType;
};
class Cdshooksserviceplandefinition : PlanDefinition {
public: 
	ResourceType resourceType;
};
class Elementdefinition_de : ElementDefinition {
public: 
	ResourceType resourceType;
};
class Ehrsrle_auditevent : AuditEvent {
public: 
	ResourceType resourceType;
};
class Ehrsrle_provenance : Provenance {
public: 
	ResourceType resourceType;
};
}
