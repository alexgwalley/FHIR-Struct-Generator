typedef String8 fhir_base64Binary;
typedef String8 fhir_canonical;
typedef String8 fhir_code;
typedef String8 fhir_id;
typedef String8 fhir_markdown;
typedef String8 fhir_oid;
typedef String8 fhir_string;
typedef String8 fhir_uri;
typedef String8 fhir_url;
typedef String8 fhir_uuid;
typedef boolean fhir_boolean;
typedef unsigned long int fhir_positiveInt;
typedef unsigned long int fhir_unsignedInt;
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
	Xhtml,
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
class Xhtml;
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
	ResourceType resourceType = ResourceType::Resource;
	fhir_string id;
	Meta* meta;
	fhir_uri implicitRules;
	fhir_code language;
};
class Account {
public:
	ResourceType resourceType = ResourceType::Account;
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
	ResourceType resourceType = ResourceType::Account_Coverage;
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
	ResourceType resourceType = ResourceType::Account_Guarantor;
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
	ResourceType resourceType = ResourceType::ActivityDefinition;
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
	enum class SubjectType {
		CodeableConcept,
		Reference
	};
	SubjectType subject_type;
	union {
		CodeableConcept* valueCodeableConcept;
		Reference* valueReference;
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
	fhir_canonical* library;
	fhir_code kind;
	fhir_canonical profile;
	CodeableConcept* code;
	fhir_code intent;
	fhir_code priority;
	fhir_boolean doNotPerform;
	enum class TimingType {
		Timing,
		fhir_dateTime,
		Age,
		Period,
		Range,
		Duration
	};
	TimingType timing_type;
	union {
		Timing* valueTiming;
		fhir_dateTime valueDateTime;
		Age* valueAge;
		Period* valuePeriod;
		Range* valueRange;
		Duration* valueDuration;
	} timing;

	Reference* location;
	int participant_count;
	ActivityDefinition_Participant* participant;
	enum class ProductType {
		Reference,
		CodeableConcept
	};
	ProductType product_type;
	union {
		Reference* valueReference;
		CodeableConcept* valueCodeableConcept;
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
	ResourceType resourceType = ResourceType::ActivityDefinition_Participant;
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
	ResourceType resourceType = ResourceType::ActivityDefinition_DynamicValue;
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
	ResourceType resourceType = ResourceType::AdverseEvent;
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
	ResourceType resourceType = ResourceType::AdverseEvent_SuspectEntity;
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
	ResourceType resourceType = ResourceType::AdverseEvent_SuspectEntity_Causality;
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
	ResourceType resourceType = ResourceType::AllergyIntolerance;
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
	fhir_code* category;
	fhir_code criticality;
	CodeableConcept* code;
	Reference* patient;
	Reference* encounter;
	enum class OnsetType {
		fhir_dateTime,
		Age,
		Period,
		Range,
		fhir_string
	};
	OnsetType onset_type;
	union {
		fhir_dateTime valueDateTime;
		Age* valueAge;
		Period* valuePeriod;
		Range* valueRange;
		fhir_string valueString;
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
	ResourceType resourceType = ResourceType::AllergyIntolerance_Reaction;
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
	ResourceType resourceType = ResourceType::Appointment;
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
	ResourceType resourceType = ResourceType::Appointment_Participant;
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
	ResourceType resourceType = ResourceType::AppointmentResponse;
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
	ResourceType resourceType = ResourceType::AuditEvent;
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
	ResourceType resourceType = ResourceType::AuditEvent_Agent;
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
	fhir_uri* policy;
	Coding* media;
	AuditEvent_Agent_Network* network;
	int purposeOfUse_count;
	CodeableConcept* purposeOfUse;
};
class AuditEvent_Agent_Network {
public:
	ResourceType resourceType = ResourceType::AuditEvent_Agent_Network;
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
	ResourceType resourceType = ResourceType::AuditEvent_Source;
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
	ResourceType resourceType = ResourceType::AuditEvent_Entity;
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
	ResourceType resourceType = ResourceType::AuditEvent_Entity_Detail;
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	fhir_string type;
	enum class ValueType {
		fhir_string,
		fhir_base64Binary
	};
	ValueType value_type;
	union {
		fhir_string valueString;
		fhir_base64Binary valueBase64Binary;
	} value;

};
class Basic {
public:
	ResourceType resourceType = ResourceType::Basic;
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
	ResourceType resourceType = ResourceType::Binary;
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
	ResourceType resourceType = ResourceType::BiologicallyDerivedProduct;
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
	Integer* quantity;
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
	ResourceType resourceType = ResourceType::BiologicallyDerivedProduct_Collection;
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	Reference* collector;
	Reference* source;
	enum class CollectedType {
		fhir_dateTime,
		Period
	};
	CollectedType collected_type;
	union {
		fhir_dateTime valueDateTime;
		Period* valuePeriod;
	} collected;

};
class BiologicallyDerivedProduct_Processing {
public:
	ResourceType resourceType = ResourceType::BiologicallyDerivedProduct_Processing;
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	fhir_string description;
	CodeableConcept* procedure;
	Reference* additive;
	enum class TimeType {
		fhir_dateTime,
		Period
	};
	TimeType time_type;
	union {
		fhir_dateTime valueDateTime;
		Period* valuePeriod;
	} time;

};
class BiologicallyDerivedProduct_Manipulation {
public:
	ResourceType resourceType = ResourceType::BiologicallyDerivedProduct_Manipulation;
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	fhir_string description;
	enum class TimeType {
		fhir_dateTime,
		Period
	};
	TimeType time_type;
	union {
		fhir_dateTime valueDateTime;
		Period* valuePeriod;
	} time;

};
class BiologicallyDerivedProduct_Storage {
public:
	ResourceType resourceType = ResourceType::BiologicallyDerivedProduct_Storage;
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
	ResourceType resourceType = ResourceType::BodyStructure;
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
	ResourceType resourceType = ResourceType::Bundle;
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
	ResourceType resourceType = ResourceType::Bundle_Link;
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
	ResourceType resourceType = ResourceType::Bundle_Entry;
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
	ResourceType resourceType = ResourceType::Bundle_Entry_Search;
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
	ResourceType resourceType = ResourceType::Bundle_Entry_Request;
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
	ResourceType resourceType = ResourceType::Bundle_Entry_Response;
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
	ResourceType resourceType = ResourceType::CapabilityStatement;
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
	fhir_canonical* instantiates;
	int imports_count;
	fhir_canonical* imports;
	CapabilityStatement_Software* software;
	CapabilityStatement_Implementation* implementation;
	fhir_code fhirVersion;
	int format_count;
	fhir_code* format;
	int patchFormat_count;
	fhir_code* patchFormat;
	int implementationGuide_count;
	fhir_canonical* implementationGuide;
	int rest_count;
	CapabilityStatement_Rest* rest;
	int messaging_count;
	CapabilityStatement_Messaging* messaging;
	int document_count;
	CapabilityStatement_Document* document;
};
class CapabilityStatement_Software {
public:
	ResourceType resourceType = ResourceType::CapabilityStatement_Software;
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
	ResourceType resourceType = ResourceType::CapabilityStatement_Implementation;
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
	ResourceType resourceType = ResourceType::CapabilityStatement_Rest;
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
	fhir_canonical* compartment;
};
class CapabilityStatement_Rest_Security {
public:
	ResourceType resourceType = ResourceType::CapabilityStatement_Rest_Security;
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
	ResourceType resourceType = ResourceType::CapabilityStatement_Rest_Resource;
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	fhir_code type;
	fhir_canonical profile;
	int supportedProfile_count;
	fhir_canonical* supportedProfile;
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
	fhir_code* referencePolicy;
	int searchInclude_count;
	fhir_string* searchInclude;
	int searchRevInclude_count;
	fhir_string* searchRevInclude;
	int searchParam_count;
	CapabilityStatement_Rest_Resource_SearchParam* searchParam;
	int operation_count;
	CapabilityStatement_Rest_Resource_Operation* operation;
};
class CapabilityStatement_Rest_Resource_Interaction {
public:
	ResourceType resourceType = ResourceType::CapabilityStatement_Rest_Resource_Interaction;
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
	ResourceType resourceType = ResourceType::CapabilityStatement_Rest_Resource_SearchParam;
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
	ResourceType resourceType = ResourceType::CapabilityStatement_Rest_Resource_Operation;
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
	ResourceType resourceType = ResourceType::CapabilityStatement_Rest_Interaction;
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
	ResourceType resourceType = ResourceType::CapabilityStatement_Messaging;
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
	ResourceType resourceType = ResourceType::CapabilityStatement_Messaging_Endpoint;
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
	ResourceType resourceType = ResourceType::CapabilityStatement_Messaging_SupportedMessage;
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
	ResourceType resourceType = ResourceType::CapabilityStatement_Document;
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
	ResourceType resourceType = ResourceType::CarePlan;
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
	fhir_canonical* instantiatesCanonical;
	int instantiatesUri_count;
	fhir_uri* instantiatesUri;
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
	ResourceType resourceType = ResourceType::CarePlan_Activity;
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
	ResourceType resourceType = ResourceType::CarePlan_Activity_Detail;
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	fhir_code kind;
	int instantiatesCanonical_count;
	fhir_canonical* instantiatesCanonical;
	int instantiatesUri_count;
	fhir_uri* instantiatesUri;
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
	enum class ScheduledType {
		Timing,
		Period,
		fhir_string
	};
	ScheduledType scheduled_type;
	union {
		Timing* valueTiming;
		Period* valuePeriod;
		fhir_string valueString;
	} scheduled;

	Reference* location;
	int performer_count;
	Reference* performer;
	enum class ProductType {
		CodeableConcept,
		Reference
	};
	ProductType product_type;
	union {
		CodeableConcept* valueCodeableConcept;
		Reference* valueReference;
	} product;

	Quantity* dailyAmount;
	Quantity* quantity;
	fhir_string description;
};
class CareTeam {
public:
	ResourceType resourceType = ResourceType::CareTeam;
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
	ResourceType resourceType = ResourceType::CareTeam_Participant;
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
	ResourceType resourceType = ResourceType::CatalogEntry;
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
	ResourceType resourceType = ResourceType::CatalogEntry_RelatedEntry;
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
	ResourceType resourceType = ResourceType::ChargeItem;
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
	fhir_uri* definitionUri;
	int definitionCanonical_count;
	fhir_canonical* definitionCanonical;
	fhir_code status;
	int partOf_count;
	Reference* partOf;
	CodeableConcept* code;
	Reference* subject;
	Reference* context;
	enum class OccurrenceType {
		fhir_dateTime,
		Period,
		Timing
	};
	OccurrenceType occurrence_type;
	union {
		fhir_dateTime valueDateTime;
		Period* valuePeriod;
		Timing* valueTiming;
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
	enum class ProductType {
		Reference,
		CodeableConcept
	};
	ProductType product_type;
	union {
		Reference* valueReference;
		CodeableConcept* valueCodeableConcept;
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
	ResourceType resourceType = ResourceType::ChargeItem_Performer;
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	CodeableConcept* function_;
	Reference* actor;
};
class ChargeItemDefinition {
public:
	ResourceType resourceType = ResourceType::ChargeItemDefinition;
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
	fhir_uri* derivedFromUri;
	int partOf_count;
	fhir_canonical* partOf;
	int replaces_count;
	fhir_canonical* replaces;
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
	ResourceType resourceType = ResourceType::ChargeItemDefinition_Applicability;
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
	ResourceType resourceType = ResourceType::ChargeItemDefinition_PropertyGroup;
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
	ResourceType resourceType = ResourceType::ChargeItemDefinition_PropertyGroup_PriceComponent;
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
	ResourceType resourceType = ResourceType::Claim;
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
	ResourceType resourceType = ResourceType::Claim_Related;
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
	ResourceType resourceType = ResourceType::Claim_Payee;
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
	ResourceType resourceType = ResourceType::Claim_CareTeam;
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
	ResourceType resourceType = ResourceType::Claim_SupportingInfo;
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	fhir_positiveInt sequence;
	CodeableConcept* category;
	CodeableConcept* code;
	enum class TimingType {
		fhir_date,
		Period
	};
	TimingType timing_type;
	union {
		fhir_date valueDate;
		Period* valuePeriod;
	} timing;

	enum class ValueType {
		fhir_boolean,
		fhir_string,
		Quantity,
		Attachment,
		Reference
	};
	ValueType value_type;
	union {
		fhir_boolean valueBoolean;
		fhir_string valueString;
		Quantity* valueQuantity;
		Attachment* valueAttachment;
		Reference* valueReference;
	} value;

	CodeableConcept* reason;
};
class Claim_Diagnosis {
public:
	ResourceType resourceType = ResourceType::Claim_Diagnosis;
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	fhir_positiveInt sequence;
	enum class DiagnosisType {
		CodeableConcept,
		Reference
	};
	DiagnosisType diagnosis_type;
	union {
		CodeableConcept* valueCodeableConcept;
		Reference* valueReference;
	} diagnosis;

	int type_count;
	CodeableConcept* type;
	CodeableConcept* onAdmission;
	CodeableConcept* packageCode;
};
class Claim_Procedure {
public:
	ResourceType resourceType = ResourceType::Claim_Procedure;
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	fhir_positiveInt sequence;
	int type_count;
	CodeableConcept* type;
	fhir_dateTime date;
	enum class ProcedureType {
		CodeableConcept,
		Reference
	};
	ProcedureType procedure_type;
	union {
		CodeableConcept* valueCodeableConcept;
		Reference* valueReference;
	} procedure;

	int udi_count;
	Reference* udi;
};
class Claim_Insurance {
public:
	ResourceType resourceType = ResourceType::Claim_Insurance;
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
	fhir_string* preAuthRef;
	Reference* claimResponse;
};
class Claim_Accident {
public:
	ResourceType resourceType = ResourceType::Claim_Accident;
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	fhir_date date;
	CodeableConcept* type;
	enum class LocationType {
		Address,
		Reference
	};
	LocationType location_type;
	union {
		Address* valueAddress;
		Reference* valueReference;
	} location;

};
class Claim_Item {
public:
	ResourceType resourceType = ResourceType::Claim_Item;
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	fhir_positiveInt sequence;
	int careTeamSequence_count;
	fhir_positiveInt* careTeamSequence;
	int diagnosisSequence_count;
	fhir_positiveInt* diagnosisSequence;
	int procedureSequence_count;
	fhir_positiveInt* procedureSequence;
	int informationSequence_count;
	fhir_positiveInt* informationSequence;
	CodeableConcept* revenue;
	CodeableConcept* category;
	CodeableConcept* productOrService;
	int modifier_count;
	CodeableConcept* modifier;
	int programCode_count;
	CodeableConcept* programCode;
	enum class ServicedType {
		fhir_date,
		Period
	};
	ServicedType serviced_type;
	union {
		fhir_date valueDate;
		Period* valuePeriod;
	} serviced;

	enum class LocationType {
		CodeableConcept,
		Address,
		Reference
	};
	LocationType location_type;
	union {
		CodeableConcept* valueCodeableConcept;
		Address* valueAddress;
		Reference* valueReference;
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
	ResourceType resourceType = ResourceType::Claim_Item_Detail;
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
	ResourceType resourceType = ResourceType::Claim_Item_Detail_SubDetail;
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
	ResourceType resourceType = ResourceType::ClaimResponse;
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
	ResourceType resourceType = ResourceType::ClaimResponse_Item;
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	fhir_positiveInt itemSequence;
	int noteNumber_count;
	fhir_positiveInt* noteNumber;
	int adjudication_count;
	ClaimResponse_Item_Adjudication* adjudication;
	int detail_count;
	ClaimResponse_Item_Detail* detail;
};
class ClaimResponse_Item_Adjudication {
public:
	ResourceType resourceType = ResourceType::ClaimResponse_Item_Adjudication;
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
	ResourceType resourceType = ResourceType::ClaimResponse_Item_Detail;
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	fhir_positiveInt detailSequence;
	int noteNumber_count;
	fhir_positiveInt* noteNumber;
	int adjudication_count;
	ClaimResponse_Item_Adjudication* adjudication;
	int subDetail_count;
	ClaimResponse_Item_Detail_SubDetail* subDetail;
};
class ClaimResponse_Item_Detail_SubDetail {
public:
	ResourceType resourceType = ResourceType::ClaimResponse_Item_Detail_SubDetail;
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	fhir_positiveInt subDetailSequence;
	int noteNumber_count;
	fhir_positiveInt* noteNumber;
	int adjudication_count;
	ClaimResponse_Item_Adjudication* adjudication;
};
class ClaimResponse_AddItem {
public:
	ResourceType resourceType = ResourceType::ClaimResponse_AddItem;
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	int itemSequence_count;
	fhir_positiveInt* itemSequence;
	int detailSequence_count;
	fhir_positiveInt* detailSequence;
	int subdetailSequence_count;
	fhir_positiveInt* subdetailSequence;
	int provider_count;
	Reference* provider;
	CodeableConcept* productOrService;
	int modifier_count;
	CodeableConcept* modifier;
	int programCode_count;
	CodeableConcept* programCode;
	enum class ServicedType {
		fhir_date,
		Period
	};
	ServicedType serviced_type;
	union {
		fhir_date valueDate;
		Period* valuePeriod;
	} serviced;

	enum class LocationType {
		CodeableConcept,
		Address,
		Reference
	};
	LocationType location_type;
	union {
		CodeableConcept* valueCodeableConcept;
		Address* valueAddress;
		Reference* valueReference;
	} location;

	Quantity* quantity;
	Money* unitPrice;
	fhir_decimal factor;
	Money* net;
	CodeableConcept* bodySite;
	int subSite_count;
	CodeableConcept* subSite;
	int noteNumber_count;
	fhir_positiveInt* noteNumber;
	int adjudication_count;
	ClaimResponse_Item_Adjudication* adjudication;
	int detail_count;
	ClaimResponse_AddItem_Detail* detail;
};
class ClaimResponse_AddItem_Detail {
public:
	ResourceType resourceType = ResourceType::ClaimResponse_AddItem_Detail;
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
	fhir_positiveInt* noteNumber;
	int adjudication_count;
	ClaimResponse_Item_Adjudication* adjudication;
	int subDetail_count;
	ClaimResponse_AddItem_Detail_SubDetail* subDetail;
};
class ClaimResponse_AddItem_Detail_SubDetail {
public:
	ResourceType resourceType = ResourceType::ClaimResponse_AddItem_Detail_SubDetail;
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
	fhir_positiveInt* noteNumber;
	int adjudication_count;
	ClaimResponse_Item_Adjudication* adjudication;
};
class ClaimResponse_Total {
public:
	ResourceType resourceType = ResourceType::ClaimResponse_Total;
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
	ResourceType resourceType = ResourceType::ClaimResponse_Payment;
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
	ResourceType resourceType = ResourceType::ClaimResponse_ProcessNote;
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
	ResourceType resourceType = ResourceType::ClaimResponse_Insurance;
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
	ResourceType resourceType = ResourceType::ClaimResponse_Error;
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
	ResourceType resourceType = ResourceType::ClinicalImpression;
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
	enum class EffectiveType {
		fhir_dateTime,
		Period
	};
	EffectiveType effective_type;
	union {
		fhir_dateTime valueDateTime;
		Period* valuePeriod;
	} effective;

	fhir_dateTime date;
	Reference* assessor;
	Reference* previous;
	int problem_count;
	Reference* problem;
	int investigation_count;
	ClinicalImpression_Investigation* investigation;
	int protocol_count;
	fhir_uri* protocol;
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
	ResourceType resourceType = ResourceType::ClinicalImpression_Investigation;
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
	ResourceType resourceType = ResourceType::ClinicalImpression_Finding;
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
	ResourceType resourceType = ResourceType::CodeSystem;
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
	ResourceType resourceType = ResourceType::CodeSystem_Filter;
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	fhir_code code;
	fhir_string description;
	int operator__count;
	fhir_code* operator_;
	fhir_string value;
};
class CodeSystem_Property {
public:
	ResourceType resourceType = ResourceType::CodeSystem_Property;
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
	ResourceType resourceType = ResourceType::CodeSystem_Concept;
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
	ResourceType resourceType = ResourceType::CodeSystem_Concept_Designation;
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
	ResourceType resourceType = ResourceType::CodeSystem_Concept_Property;
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	fhir_code code;
	enum class ValueType {
		fhir_code,
		Coding,
		fhir_string,
		Integer,
		fhir_boolean,
		fhir_dateTime,
		fhir_decimal
	};
	ValueType value_type;
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
	ResourceType resourceType = ResourceType::Communication;
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
	fhir_canonical* instantiatesCanonical;
	int instantiatesUri_count;
	fhir_uri* instantiatesUri;
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
	ResourceType resourceType = ResourceType::Communication_Payload;
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	enum class ContentType {
		fhir_string,
		Attachment,
		Reference
	};
	ContentType content_type;
	union {
		fhir_string valueString;
		Attachment* valueAttachment;
		Reference* valueReference;
	} content;

};
class CommunicationRequest {
public:
	ResourceType resourceType = ResourceType::CommunicationRequest;
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
	enum class OccurrenceType {
		fhir_dateTime,
		Period
	};
	OccurrenceType occurrence_type;
	union {
		fhir_dateTime valueDateTime;
		Period* valuePeriod;
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
	ResourceType resourceType = ResourceType::CommunicationRequest_Payload;
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	enum class ContentType {
		fhir_string,
		Attachment,
		Reference
	};
	ContentType content_type;
	union {
		fhir_string valueString;
		Attachment* valueAttachment;
		Reference* valueReference;
	} content;

};
class CompartmentDefinition {
public:
	ResourceType resourceType = ResourceType::CompartmentDefinition;
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
	ResourceType resourceType = ResourceType::CompartmentDefinition_Resource;
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	fhir_code code;
	int param_count;
	fhir_string* param;
	fhir_string documentation;
};
class Composition {
public:
	ResourceType resourceType = ResourceType::Composition;
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
	ResourceType resourceType = ResourceType::Composition_Attester;
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
	ResourceType resourceType = ResourceType::Composition_RelatesTo;
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	fhir_code code;
	enum class TargetType {
		Identifier,
		Reference
	};
	TargetType target_type;
	union {
		Identifier* valueIdentifier;
		Reference* valueReference;
	} target;

};
class Composition_Event {
public:
	ResourceType resourceType = ResourceType::Composition_Event;
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
	ResourceType resourceType = ResourceType::Composition_Section;
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
	ResourceType resourceType = ResourceType::ConceptMap;
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
	enum class SourceType {
		fhir_uri,
		fhir_canonical
	};
	SourceType source_type;
	union {
		fhir_uri valueUri;
		fhir_canonical valueCanonical;
	} source;

	enum class TargetType {
		fhir_uri,
		fhir_canonical
	};
	TargetType target_type;
	union {
		fhir_uri valueUri;
		fhir_canonical valueCanonical;
	} target;

	int group_count;
	ConceptMap_Group* group;
};
class ConceptMap_Group {
public:
	ResourceType resourceType = ResourceType::ConceptMap_Group;
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
	ResourceType resourceType = ResourceType::ConceptMap_Group_Element;
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
	ResourceType resourceType = ResourceType::ConceptMap_Group_Element_Target;
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
	ResourceType resourceType = ResourceType::ConceptMap_Group_Element_Target_DependsOn;
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
	ResourceType resourceType = ResourceType::ConceptMap_Group_Unmapped;
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
	ResourceType resourceType = ResourceType::Condition;
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
	enum class OnsetType {
		fhir_dateTime,
		Age,
		Period,
		Range,
		fhir_string
	};
	OnsetType onset_type;
	union {
		fhir_dateTime valueDateTime;
		Age* valueAge;
		Period* valuePeriod;
		Range* valueRange;
		fhir_string valueString;
	} onset;

	enum class AbatementType {
		fhir_dateTime,
		Age,
		Period,
		Range,
		fhir_string
	};
	AbatementType abatement_type;
	union {
		fhir_dateTime valueDateTime;
		Age* valueAge;
		Period* valuePeriod;
		Range* valueRange;
		fhir_string valueString;
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
	ResourceType resourceType = ResourceType::Condition_Stage;
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
	ResourceType resourceType = ResourceType::Condition_Evidence;
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
	ResourceType resourceType = ResourceType::Consent;
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
	enum class SourceType {
		Attachment,
		Reference
	};
	SourceType source_type;
	union {
		Attachment* valueAttachment;
		Reference* valueReference;
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
	ResourceType resourceType = ResourceType::Consent_Policy;
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
	ResourceType resourceType = ResourceType::Consent_Verification;
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
	ResourceType resourceType = ResourceType::Consent_Provision;
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
	ResourceType resourceType = ResourceType::Consent_Provision_Actor;
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
	ResourceType resourceType = ResourceType::Consent_Provision_Data;
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
	ResourceType resourceType = ResourceType::Contract;
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
	fhir_string* alias;
	Reference* author;
	CodeableConcept* scope;
	enum class TopicType {
		CodeableConcept,
		Reference
	};
	TopicType topic_type;
	union {
		CodeableConcept* valueCodeableConcept;
		Reference* valueReference;
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
	enum class LegallyBindingType {
		Attachment,
		Reference
	};
	LegallyBindingType legallyBinding_type;
	union {
		Attachment* valueAttachment;
		Reference* valueReference;
	} legallyBinding;

};
class Contract_ContentDefinition {
public:
	ResourceType resourceType = ResourceType::Contract_ContentDefinition;
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
	ResourceType resourceType = ResourceType::Contract_Term;
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	Identifier* identifier;
	fhir_dateTime issued;
	Period* applies;
	enum class TopicType {
		CodeableConcept,
		Reference
	};
	TopicType topic_type;
	union {
		CodeableConcept* valueCodeableConcept;
		Reference* valueReference;
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
	ResourceType resourceType = ResourceType::Contract_Term_SecurityLabel;
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	int number_count;
	fhir_unsignedInt* number;
	Coding* classification;
	int category_count;
	Coding* category;
	int control_count;
	Coding* control;
};
class Contract_Term_Offer {
public:
	ResourceType resourceType = ResourceType::Contract_Term_Offer;
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
	fhir_string* linkId;
	int securityLabelNumber_count;
	fhir_unsignedInt* securityLabelNumber;
};
class Contract_Term_Offer_Party {
public:
	ResourceType resourceType = ResourceType::Contract_Term_Offer_Party;
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
	ResourceType resourceType = ResourceType::Contract_Term_Offer_Answer;
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	enum class ValueType {
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
	ValueType value_type;
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
	ResourceType resourceType = ResourceType::Contract_Term_Asset;
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
	fhir_string* linkId;
	int answer_count;
	Contract_Term_Offer_Answer* answer;
	int securityLabelNumber_count;
	fhir_unsignedInt* securityLabelNumber;
	int valuedItem_count;
	Contract_Term_Asset_ValuedItem* valuedItem;
};
class Contract_Term_Asset_Context {
public:
	ResourceType resourceType = ResourceType::Contract_Term_Asset_Context;
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
	ResourceType resourceType = ResourceType::Contract_Term_Asset_ValuedItem;
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	enum class EntityType {
		CodeableConcept,
		Reference
	};
	EntityType entity_type;
	union {
		CodeableConcept* valueCodeableConcept;
		Reference* valueReference;
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
	fhir_string* linkId;
	int securityLabelNumber_count;
	fhir_unsignedInt* securityLabelNumber;
};
class Contract_Term_Action {
public:
	ResourceType resourceType = ResourceType::Contract_Term_Action;
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
	fhir_string* linkId;
	CodeableConcept* status;
	Reference* context;
	int contextLinkId_count;
	fhir_string* contextLinkId;
	enum class OccurrenceType {
		fhir_dateTime,
		Period,
		Timing
	};
	OccurrenceType occurrence_type;
	union {
		fhir_dateTime valueDateTime;
		Period* valuePeriod;
		Timing* valueTiming;
	} occurrence;

	int requester_count;
	Reference* requester;
	int requesterLinkId_count;
	fhir_string* requesterLinkId;
	int performerType_count;
	CodeableConcept* performerType;
	CodeableConcept* performerRole;
	Reference* performer;
	int performerLinkId_count;
	fhir_string* performerLinkId;
	int reasonCode_count;
	CodeableConcept* reasonCode;
	int reasonReference_count;
	Reference* reasonReference;
	int reason_count;
	fhir_string* reason;
	int reasonLinkId_count;
	fhir_string* reasonLinkId;
	int note_count;
	Annotation* note;
	int securityLabelNumber_count;
	fhir_unsignedInt* securityLabelNumber;
};
class Contract_Term_Action_Subject {
public:
	ResourceType resourceType = ResourceType::Contract_Term_Action_Subject;
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
	ResourceType resourceType = ResourceType::Contract_Signer;
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
	ResourceType resourceType = ResourceType::Contract_Friendly;
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	enum class ContentType {
		Attachment,
		Reference
	};
	ContentType content_type;
	union {
		Attachment* valueAttachment;
		Reference* valueReference;
	} content;

};
class Contract_Legal {
public:
	ResourceType resourceType = ResourceType::Contract_Legal;
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	enum class ContentType {
		Attachment,
		Reference
	};
	ContentType content_type;
	union {
		Attachment* valueAttachment;
		Reference* valueReference;
	} content;

};
class Contract_Rule {
public:
	ResourceType resourceType = ResourceType::Contract_Rule;
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	enum class ContentType {
		Attachment,
		Reference
	};
	ContentType content_type;
	union {
		Attachment* valueAttachment;
		Reference* valueReference;
	} content;

};
class Coverage {
public:
	ResourceType resourceType = ResourceType::Coverage;
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
	ResourceType resourceType = ResourceType::Coverage_Class;
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
	ResourceType resourceType = ResourceType::Coverage_CostToBeneficiary;
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	CodeableConcept* type;
	enum class ValueType {
		Quantity,
		Money
	};
	ValueType value_type;
	union {
		Quantity* valueQuantity;
		Money* valueMoney;
	} value;

	int exception_count;
	Coverage_CostToBeneficiary_Exception* exception;
};
class Coverage_CostToBeneficiary_Exception {
public:
	ResourceType resourceType = ResourceType::Coverage_CostToBeneficiary_Exception;
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
	ResourceType resourceType = ResourceType::CoverageEligibilityRequest;
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
	fhir_code* purpose;
	Reference* patient;
	enum class ServicedType {
		fhir_date,
		Period
	};
	ServicedType serviced_type;
	union {
		fhir_date valueDate;
		Period* valuePeriod;
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
	ResourceType resourceType = ResourceType::CoverageEligibilityRequest_SupportingInfo;
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
	ResourceType resourceType = ResourceType::CoverageEligibilityRequest_Insurance;
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
	ResourceType resourceType = ResourceType::CoverageEligibilityRequest_Item;
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	int supportingInfoSequence_count;
	fhir_positiveInt* supportingInfoSequence;
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
	ResourceType resourceType = ResourceType::CoverageEligibilityRequest_Item_Diagnosis;
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	enum class DiagnosisType {
		CodeableConcept,
		Reference
	};
	DiagnosisType diagnosis_type;
	union {
		CodeableConcept* valueCodeableConcept;
		Reference* valueReference;
	} diagnosis;

};
class CoverageEligibilityResponse {
public:
	ResourceType resourceType = ResourceType::CoverageEligibilityResponse;
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
	fhir_code* purpose;
	Reference* patient;
	enum class ServicedType {
		fhir_date,
		Period
	};
	ServicedType serviced_type;
	union {
		fhir_date valueDate;
		Period* valuePeriod;
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
	ResourceType resourceType = ResourceType::CoverageEligibilityResponse_Insurance;
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
	ResourceType resourceType = ResourceType::CoverageEligibilityResponse_Insurance_Item;
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
	ResourceType resourceType = ResourceType::CoverageEligibilityResponse_Insurance_Item_Benefit;
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	CodeableConcept* type;
	enum class AllowedType {
		fhir_unsignedInt,
		fhir_string,
		Money
	};
	AllowedType allowed_type;
	union {
		fhir_unsignedInt valueUnsignedInt;
		fhir_string valueString;
		Money* valueMoney;
	} allowed;

	enum class UsedType {
		fhir_unsignedInt,
		fhir_string,
		Money
	};
	UsedType used_type;
	union {
		fhir_unsignedInt valueUnsignedInt;
		fhir_string valueString;
		Money* valueMoney;
	} used;

};
class CoverageEligibilityResponse_Error {
public:
	ResourceType resourceType = ResourceType::CoverageEligibilityResponse_Error;
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	CodeableConcept* code;
};
class DetectedIssue {
public:
	ResourceType resourceType = ResourceType::DetectedIssue;
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
	enum class IdentifiedType {
		fhir_dateTime,
		Period
	};
	IdentifiedType identified_type;
	union {
		fhir_dateTime valueDateTime;
		Period* valuePeriod;
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
	ResourceType resourceType = ResourceType::DetectedIssue_Evidence;
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
	ResourceType resourceType = ResourceType::DetectedIssue_Mitigation;
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
	ResourceType resourceType = ResourceType::Device;
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
	ResourceType resourceType = ResourceType::Device_UdiCarrier;
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
	ResourceType resourceType = ResourceType::Device_DeviceName;
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
	ResourceType resourceType = ResourceType::Device_Specialization;
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
	ResourceType resourceType = ResourceType::Device_Version;
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
	ResourceType resourceType = ResourceType::Device_Property;
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
	ResourceType resourceType = ResourceType::DeviceDefinition;
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
	enum class ManufacturerType {
		fhir_string,
		Reference
	};
	ManufacturerType manufacturer_type;
	union {
		fhir_string valueString;
		Reference* valueReference;
	} manufacturer;

	int deviceName_count;
	DeviceDefinition_DeviceName* deviceName;
	fhir_string modelNumber;
	CodeableConcept* type;
	int specialization_count;
	DeviceDefinition_Specialization* specialization;
	int version_count;
	fhir_string* version;
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
	ResourceType resourceType = ResourceType::DeviceDefinition_UdiDeviceIdentifier;
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
	ResourceType resourceType = ResourceType::DeviceDefinition_DeviceName;
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
	ResourceType resourceType = ResourceType::DeviceDefinition_Specialization;
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
	ResourceType resourceType = ResourceType::DeviceDefinition_Capability;
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
	ResourceType resourceType = ResourceType::DeviceDefinition_Property;
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
	ResourceType resourceType = ResourceType::DeviceDefinition_Material;
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
	ResourceType resourceType = ResourceType::DeviceMetric;
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
	ResourceType resourceType = ResourceType::DeviceMetric_Calibration;
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
	ResourceType resourceType = ResourceType::DeviceRequest;
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
	fhir_canonical* instantiatesCanonical;
	int instantiatesUri_count;
	fhir_uri* instantiatesUri;
	int basedOn_count;
	Reference* basedOn;
	int priorRequest_count;
	Reference* priorRequest;
	Identifier* groupIdentifier;
	fhir_code status;
	fhir_code intent;
	fhir_code priority;
	enum class CodeType {
		Reference,
		CodeableConcept
	};
	CodeType code_type;
	union {
		Reference* valueReference;
		CodeableConcept* valueCodeableConcept;
	} code;

	int parameter_count;
	DeviceRequest_Parameter* parameter;
	Reference* subject;
	Reference* encounter;
	enum class OccurrenceType {
		fhir_dateTime,
		Period,
		Timing
	};
	OccurrenceType occurrence_type;
	union {
		fhir_dateTime valueDateTime;
		Period* valuePeriod;
		Timing* valueTiming;
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
	ResourceType resourceType = ResourceType::DeviceRequest_Parameter;
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	CodeableConcept* code;
	enum class ValueType {
		CodeableConcept,
		Quantity,
		Range,
		fhir_boolean
	};
	ValueType value_type;
	union {
		CodeableConcept* valueCodeableConcept;
		Quantity* valueQuantity;
		Range* valueRange;
		fhir_boolean valueBoolean;
	} value;

};
class DeviceUseStatement {
public:
	ResourceType resourceType = ResourceType::DeviceUseStatement;
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
	enum class TimingType {
		Timing,
		Period,
		fhir_dateTime
	};
	TimingType timing_type;
	union {
		Timing* valueTiming;
		Period* valuePeriod;
		fhir_dateTime valueDateTime;
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
	ResourceType resourceType = ResourceType::DiagnosticReport;
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
	enum class EffectiveType {
		fhir_dateTime,
		Period
	};
	EffectiveType effective_type;
	union {
		fhir_dateTime valueDateTime;
		Period* valuePeriod;
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
	ResourceType resourceType = ResourceType::DiagnosticReport_Media;
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
	ResourceType resourceType = ResourceType::DocumentManifest;
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
	ResourceType resourceType = ResourceType::DocumentManifest_Related;
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
	ResourceType resourceType = ResourceType::DocumentReference;
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
	ResourceType resourceType = ResourceType::DocumentReference_RelatesTo;
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
	ResourceType resourceType = ResourceType::DocumentReference_Content;
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
	ResourceType resourceType = ResourceType::DocumentReference_Context;
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
	ResourceType resourceType = ResourceType::DomainResource;
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
	ResourceType resourceType = ResourceType::EffectEvidenceSynthesis;
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
	ResourceType resourceType = ResourceType::EffectEvidenceSynthesis_SampleSize;
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	fhir_string description;
	Integer* numberOfStudies;
	Integer* numberOfParticipants;
};
class EffectEvidenceSynthesis_ResultsByExposure {
public:
	ResourceType resourceType = ResourceType::EffectEvidenceSynthesis_ResultsByExposure;
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
	ResourceType resourceType = ResourceType::EffectEvidenceSynthesis_EffectEstimate;
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
	ResourceType resourceType = ResourceType::EffectEvidenceSynthesis_EffectEstimate_PrecisionEstimate;
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
	ResourceType resourceType = ResourceType::EffectEvidenceSynthesis_Certainty;
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
	ResourceType resourceType = ResourceType::EffectEvidenceSynthesis_Certainty_CertaintySubcomponent;
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
	ResourceType resourceType = ResourceType::Encounter;
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
	ResourceType resourceType = ResourceType::Encounter_StatusHistory;
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
	ResourceType resourceType = ResourceType::Encounter_ClassHistory;
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
	ResourceType resourceType = ResourceType::Encounter_Participant;
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
	ResourceType resourceType = ResourceType::Encounter_Diagnosis;
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
	ResourceType resourceType = ResourceType::Encounter_Hospitalization;
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
	ResourceType resourceType = ResourceType::Encounter_Location;
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
	ResourceType resourceType = ResourceType::Endpoint;
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
	fhir_code* payloadMimeType;
	fhir_url address;
	int header_count;
	fhir_string* header;
};
class EnrollmentRequest {
public:
	ResourceType resourceType = ResourceType::EnrollmentRequest;
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
	ResourceType resourceType = ResourceType::EnrollmentResponse;
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
	ResourceType resourceType = ResourceType::EpisodeOfCare;
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
	ResourceType resourceType = ResourceType::EpisodeOfCare_StatusHistory;
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
	ResourceType resourceType = ResourceType::EpisodeOfCare_Diagnosis;
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
	ResourceType resourceType = ResourceType::EventDefinition;
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
	enum class SubjectType {
		CodeableConcept,
		Reference
	};
	SubjectType subject_type;
	union {
		CodeableConcept* valueCodeableConcept;
		Reference* valueReference;
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
	ResourceType resourceType = ResourceType::Evidence;
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
	ResourceType resourceType = ResourceType::EvidenceVariable;
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
	ResourceType resourceType = ResourceType::EvidenceVariable_Characteristic;
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	fhir_string description;
	enum class DefinitionType {
		Reference,
		fhir_canonical,
		CodeableConcept,
		Expression,
		DataRequirement,
		TriggerDefinition
	};
	DefinitionType definition_type;
	union {
		Reference* valueReference;
		fhir_canonical valueCanonical;
		CodeableConcept* valueCodeableConcept;
		Expression* valueExpression;
		DataRequirement* valueDataRequirement;
		TriggerDefinition* valueTriggerDefinition;
	} definition;

	int usageContext_count;
	UsageContext* usageContext;
	fhir_boolean exclude;
	enum class ParticipantEffectiveType {
		fhir_dateTime,
		Period,
		Duration,
		Timing
	};
	ParticipantEffectiveType participantEffective_type;
	union {
		fhir_dateTime valueDateTime;
		Period* valuePeriod;
		Duration* valueDuration;
		Timing* valueTiming;
	} participantEffective;

	Duration* timeFromStart;
	fhir_code groupMeasure;
};
class ExampleScenario {
public:
	ResourceType resourceType = ResourceType::ExampleScenario;
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
	fhir_canonical* workflow;
};
class ExampleScenario_Actor {
public:
	ResourceType resourceType = ResourceType::ExampleScenario_Actor;
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
	ResourceType resourceType = ResourceType::ExampleScenario_Instance;
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	fhir_string resourceId;
	fhir_code resourceType_;
	fhir_string name;
	fhir_markdown description;
	int version_count;
	ExampleScenario_Instance_Version* version;
	int containedInstance_count;
	ExampleScenario_Instance_ContainedInstance* containedInstance;
};
class ExampleScenario_Instance_Version {
public:
	ResourceType resourceType = ResourceType::ExampleScenario_Instance_Version;
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
	ResourceType resourceType = ResourceType::ExampleScenario_Instance_ContainedInstance;
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
	ResourceType resourceType = ResourceType::ExampleScenario_Process;
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
	ResourceType resourceType = ResourceType::ExampleScenario_Process_Step;
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
	ResourceType resourceType = ResourceType::ExampleScenario_Process_Step_Operation;
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
	ResourceType resourceType = ResourceType::ExampleScenario_Process_Step_Alternative;
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
	ResourceType resourceType = ResourceType::ExplanationOfBenefit;
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
	fhir_string* preAuthRef;
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
	ResourceType resourceType = ResourceType::ExplanationOfBenefit_Related;
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
	ResourceType resourceType = ResourceType::ExplanationOfBenefit_Payee;
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
	ResourceType resourceType = ResourceType::ExplanationOfBenefit_CareTeam;
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
	ResourceType resourceType = ResourceType::ExplanationOfBenefit_SupportingInfo;
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	fhir_positiveInt sequence;
	CodeableConcept* category;
	CodeableConcept* code;
	enum class TimingType {
		fhir_date,
		Period
	};
	TimingType timing_type;
	union {
		fhir_date valueDate;
		Period* valuePeriod;
	} timing;

	enum class ValueType {
		fhir_boolean,
		fhir_string,
		Quantity,
		Attachment,
		Reference
	};
	ValueType value_type;
	union {
		fhir_boolean valueBoolean;
		fhir_string valueString;
		Quantity* valueQuantity;
		Attachment* valueAttachment;
		Reference* valueReference;
	} value;

	Coding* reason;
};
class ExplanationOfBenefit_Diagnosis {
public:
	ResourceType resourceType = ResourceType::ExplanationOfBenefit_Diagnosis;
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	fhir_positiveInt sequence;
	enum class DiagnosisType {
		CodeableConcept,
		Reference
	};
	DiagnosisType diagnosis_type;
	union {
		CodeableConcept* valueCodeableConcept;
		Reference* valueReference;
	} diagnosis;

	int type_count;
	CodeableConcept* type;
	CodeableConcept* onAdmission;
	CodeableConcept* packageCode;
};
class ExplanationOfBenefit_Procedure {
public:
	ResourceType resourceType = ResourceType::ExplanationOfBenefit_Procedure;
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	fhir_positiveInt sequence;
	int type_count;
	CodeableConcept* type;
	fhir_dateTime date;
	enum class ProcedureType {
		CodeableConcept,
		Reference
	};
	ProcedureType procedure_type;
	union {
		CodeableConcept* valueCodeableConcept;
		Reference* valueReference;
	} procedure;

	int udi_count;
	Reference* udi;
};
class ExplanationOfBenefit_Insurance {
public:
	ResourceType resourceType = ResourceType::ExplanationOfBenefit_Insurance;
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	fhir_boolean focal;
	Reference* coverage;
	int preAuthRef_count;
	fhir_string* preAuthRef;
};
class ExplanationOfBenefit_Accident {
public:
	ResourceType resourceType = ResourceType::ExplanationOfBenefit_Accident;
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	fhir_date date;
	CodeableConcept* type;
	enum class LocationType {
		Address,
		Reference
	};
	LocationType location_type;
	union {
		Address* valueAddress;
		Reference* valueReference;
	} location;

};
class ExplanationOfBenefit_Item {
public:
	ResourceType resourceType = ResourceType::ExplanationOfBenefit_Item;
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	fhir_positiveInt sequence;
	int careTeamSequence_count;
	fhir_positiveInt* careTeamSequence;
	int diagnosisSequence_count;
	fhir_positiveInt* diagnosisSequence;
	int procedureSequence_count;
	fhir_positiveInt* procedureSequence;
	int informationSequence_count;
	fhir_positiveInt* informationSequence;
	CodeableConcept* revenue;
	CodeableConcept* category;
	CodeableConcept* productOrService;
	int modifier_count;
	CodeableConcept* modifier;
	int programCode_count;
	CodeableConcept* programCode;
	enum class ServicedType {
		fhir_date,
		Period
	};
	ServicedType serviced_type;
	union {
		fhir_date valueDate;
		Period* valuePeriod;
	} serviced;

	enum class LocationType {
		CodeableConcept,
		Address,
		Reference
	};
	LocationType location_type;
	union {
		CodeableConcept* valueCodeableConcept;
		Address* valueAddress;
		Reference* valueReference;
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
	fhir_positiveInt* noteNumber;
	int adjudication_count;
	ExplanationOfBenefit_Item_Adjudication* adjudication;
	int detail_count;
	ExplanationOfBenefit_Item_Detail* detail;
};
class ExplanationOfBenefit_Item_Adjudication {
public:
	ResourceType resourceType = ResourceType::ExplanationOfBenefit_Item_Adjudication;
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
	ResourceType resourceType = ResourceType::ExplanationOfBenefit_Item_Detail;
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
	fhir_positiveInt* noteNumber;
	int adjudication_count;
	ExplanationOfBenefit_Item_Adjudication* adjudication;
	int subDetail_count;
	ExplanationOfBenefit_Item_Detail_SubDetail* subDetail;
};
class ExplanationOfBenefit_Item_Detail_SubDetail {
public:
	ResourceType resourceType = ResourceType::ExplanationOfBenefit_Item_Detail_SubDetail;
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
	fhir_positiveInt* noteNumber;
	int adjudication_count;
	ExplanationOfBenefit_Item_Adjudication* adjudication;
};
class ExplanationOfBenefit_AddItem {
public:
	ResourceType resourceType = ResourceType::ExplanationOfBenefit_AddItem;
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	int itemSequence_count;
	fhir_positiveInt* itemSequence;
	int detailSequence_count;
	fhir_positiveInt* detailSequence;
	int subDetailSequence_count;
	fhir_positiveInt* subDetailSequence;
	int provider_count;
	Reference* provider;
	CodeableConcept* productOrService;
	int modifier_count;
	CodeableConcept* modifier;
	int programCode_count;
	CodeableConcept* programCode;
	enum class ServicedType {
		fhir_date,
		Period
	};
	ServicedType serviced_type;
	union {
		fhir_date valueDate;
		Period* valuePeriod;
	} serviced;

	enum class LocationType {
		CodeableConcept,
		Address,
		Reference
	};
	LocationType location_type;
	union {
		CodeableConcept* valueCodeableConcept;
		Address* valueAddress;
		Reference* valueReference;
	} location;

	Quantity* quantity;
	Money* unitPrice;
	fhir_decimal factor;
	Money* net;
	CodeableConcept* bodySite;
	int subSite_count;
	CodeableConcept* subSite;
	int noteNumber_count;
	fhir_positiveInt* noteNumber;
	int adjudication_count;
	ExplanationOfBenefit_Item_Adjudication* adjudication;
	int detail_count;
	ExplanationOfBenefit_AddItem_Detail* detail;
};
class ExplanationOfBenefit_AddItem_Detail {
public:
	ResourceType resourceType = ResourceType::ExplanationOfBenefit_AddItem_Detail;
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
	fhir_positiveInt* noteNumber;
	int adjudication_count;
	ExplanationOfBenefit_Item_Adjudication* adjudication;
	int subDetail_count;
	ExplanationOfBenefit_AddItem_Detail_SubDetail* subDetail;
};
class ExplanationOfBenefit_AddItem_Detail_SubDetail {
public:
	ResourceType resourceType = ResourceType::ExplanationOfBenefit_AddItem_Detail_SubDetail;
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
	fhir_positiveInt* noteNumber;
	int adjudication_count;
	ExplanationOfBenefit_Item_Adjudication* adjudication;
};
class ExplanationOfBenefit_Total {
public:
	ResourceType resourceType = ResourceType::ExplanationOfBenefit_Total;
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
	ResourceType resourceType = ResourceType::ExplanationOfBenefit_Payment;
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
	ResourceType resourceType = ResourceType::ExplanationOfBenefit_ProcessNote;
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
	ResourceType resourceType = ResourceType::ExplanationOfBenefit_BenefitBalance;
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
	ResourceType resourceType = ResourceType::ExplanationOfBenefit_BenefitBalance_Financial;
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	CodeableConcept* type;
	enum class AllowedType {
		fhir_unsignedInt,
		fhir_string,
		Money
	};
	AllowedType allowed_type;
	union {
		fhir_unsignedInt valueUnsignedInt;
		fhir_string valueString;
		Money* valueMoney;
	} allowed;

	enum class UsedType {
		fhir_unsignedInt,
		Money
	};
	UsedType used_type;
	union {
		fhir_unsignedInt valueUnsignedInt;
		Money* valueMoney;
	} used;

};
class FamilyMemberHistory {
public:
	ResourceType resourceType = ResourceType::FamilyMemberHistory;
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
	fhir_canonical* instantiatesCanonical;
	int instantiatesUri_count;
	fhir_uri* instantiatesUri;
	fhir_code status;
	CodeableConcept* dataAbsentReason;
	Reference* patient;
	fhir_dateTime date;
	fhir_string name;
	CodeableConcept* relationship;
	CodeableConcept* sex;
	enum class BornType {
		Period,
		fhir_date,
		fhir_string
	};
	BornType born_type;
	union {
		Period* valuePeriod;
		fhir_date valueDate;
		fhir_string valueString;
	} born;

	enum class AgeType {
		Age,
		Range,
		fhir_string
	};
	AgeType age_type;
	union {
		Age* valueAge;
		Range* valueRange;
		fhir_string valueString;
	} age;

	fhir_boolean estimatedAge;
	enum class DeceasedType {
		fhir_boolean,
		Age,
		Range,
		fhir_date,
		fhir_string
	};
	DeceasedType deceased_type;
	union {
		fhir_boolean valueBoolean;
		Age* valueAge;
		Range* valueRange;
		fhir_date valueDate;
		fhir_string valueString;
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
	ResourceType resourceType = ResourceType::FamilyMemberHistory_Condition;
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	CodeableConcept* code;
	CodeableConcept* outcome;
	fhir_boolean contributedToDeath;
	enum class OnsetType {
		Age,
		Range,
		Period,
		fhir_string
	};
	OnsetType onset_type;
	union {
		Age* valueAge;
		Range* valueRange;
		Period* valuePeriod;
		fhir_string valueString;
	} onset;

	int note_count;
	Annotation* note;
};
class Flag {
public:
	ResourceType resourceType = ResourceType::Flag;
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
	ResourceType resourceType = ResourceType::Goal;
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
	enum class StartType {
		fhir_date,
		CodeableConcept
	};
	StartType start_type;
	union {
		fhir_date valueDate;
		CodeableConcept* valueCodeableConcept;
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
	ResourceType resourceType = ResourceType::Goal_Target;
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	CodeableConcept* measure;
	enum class DetailType {
		Quantity,
		Range,
		CodeableConcept,
		fhir_string,
		fhir_boolean,
		Integer,
		Ratio
	};
	DetailType detail_type;
	union {
		Quantity* valueQuantity;
		Range* valueRange;
		CodeableConcept* valueCodeableConcept;
		fhir_string valueString;
		fhir_boolean valueBoolean;
		Integer* valueInteger;
		Ratio* valueRatio;
	} detail;

	enum class DueType {
		fhir_date,
		Duration
	};
	DueType due_type;
	union {
		fhir_date valueDate;
		Duration* valueDuration;
	} due;

};
class GraphDefinition {
public:
	ResourceType resourceType = ResourceType::GraphDefinition;
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
	ResourceType resourceType = ResourceType::GraphDefinition_Link;
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	fhir_string path;
	fhir_string sliceName;
	Integer* min;
	fhir_string max;
	fhir_string description;
	int target_count;
	GraphDefinition_Link_Target* target;
};
class GraphDefinition_Link_Target {
public:
	ResourceType resourceType = ResourceType::GraphDefinition_Link_Target;
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
	ResourceType resourceType = ResourceType::GraphDefinition_Link_Target_Compartment;
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
	ResourceType resourceType = ResourceType::Group;
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
	ResourceType resourceType = ResourceType::Group_Characteristic;
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	CodeableConcept* code;
	enum class ValueType {
		CodeableConcept,
		fhir_boolean,
		Quantity,
		Range,
		Reference
	};
	ValueType value_type;
	union {
		CodeableConcept* valueCodeableConcept;
		fhir_boolean valueBoolean;
		Quantity* valueQuantity;
		Range* valueRange;
		Reference* valueReference;
	} value;

	fhir_boolean exclude;
	Period* period;
};
class Group_Member {
public:
	ResourceType resourceType = ResourceType::Group_Member;
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
	ResourceType resourceType = ResourceType::GuidanceResponse;
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
	enum class ModuleType {
		fhir_uri,
		fhir_canonical,
		CodeableConcept
	};
	ModuleType module_type;
	union {
		fhir_uri valueUri;
		fhir_canonical valueCanonical;
		CodeableConcept* valueCodeableConcept;
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
	ResourceType resourceType = ResourceType::HealthcareService;
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
	ResourceType resourceType = ResourceType::HealthcareService_Eligibility;
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
	ResourceType resourceType = ResourceType::HealthcareService_AvailableTime;
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	int daysOfWeek_count;
	fhir_code* daysOfWeek;
	fhir_boolean allDay;
	fhir_time availableStartTime;
	fhir_time availableEndTime;
};
class HealthcareService_NotAvailable {
public:
	ResourceType resourceType = ResourceType::HealthcareService_NotAvailable;
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
	ResourceType resourceType = ResourceType::ImagingStudy;
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
	ResourceType resourceType = ResourceType::ImagingStudy_Series;
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
	ResourceType resourceType = ResourceType::ImagingStudy_Series_Performer;
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	CodeableConcept* function_;
	Reference* actor;
};
class ImagingStudy_Series_Instance {
public:
	ResourceType resourceType = ResourceType::ImagingStudy_Series_Instance;
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
	ResourceType resourceType = ResourceType::Immunization;
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
	enum class OccurrenceType {
		fhir_dateTime,
		fhir_string
	};
	OccurrenceType occurrence_type;
	union {
		fhir_dateTime valueDateTime;
		fhir_string valueString;
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
	ResourceType resourceType = ResourceType::Immunization_Performer;
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	CodeableConcept* function_;
	Reference* actor;
};
class Immunization_Education {
public:
	ResourceType resourceType = ResourceType::Immunization_Education;
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
	ResourceType resourceType = ResourceType::Immunization_Reaction;
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
	ResourceType resourceType = ResourceType::Immunization_ProtocolApplied;
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	fhir_string series;
	Reference* authority;
	int targetDisease_count;
	CodeableConcept* targetDisease;
	enum class DoseNumberType {
		fhir_positiveInt,
		fhir_string
	};
	DoseNumberType doseNumber_type;
	union {
		fhir_positiveInt valuePositiveInt;
		fhir_string valueString;
	} doseNumber;

	enum class SeriesDosesType {
		fhir_positiveInt,
		fhir_string
	};
	SeriesDosesType seriesDoses_type;
	union {
		fhir_positiveInt valuePositiveInt;
		fhir_string valueString;
	} seriesDoses;

};
class ImmunizationEvaluation {
public:
	ResourceType resourceType = ResourceType::ImmunizationEvaluation;
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
	enum class DoseNumberType {
		fhir_positiveInt,
		fhir_string
	};
	DoseNumberType doseNumber_type;
	union {
		fhir_positiveInt valuePositiveInt;
		fhir_string valueString;
	} doseNumber;

	enum class SeriesDosesType {
		fhir_positiveInt,
		fhir_string
	};
	SeriesDosesType seriesDoses_type;
	union {
		fhir_positiveInt valuePositiveInt;
		fhir_string valueString;
	} seriesDoses;

};
class ImmunizationRecommendation {
public:
	ResourceType resourceType = ResourceType::ImmunizationRecommendation;
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
	ResourceType resourceType = ResourceType::ImmunizationRecommendation_Recommendation;
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
	enum class DoseNumberType {
		fhir_positiveInt,
		fhir_string
	};
	DoseNumberType doseNumber_type;
	union {
		fhir_positiveInt valuePositiveInt;
		fhir_string valueString;
	} doseNumber;

	enum class SeriesDosesType {
		fhir_positiveInt,
		fhir_string
	};
	SeriesDosesType seriesDoses_type;
	union {
		fhir_positiveInt valuePositiveInt;
		fhir_string valueString;
	} seriesDoses;

	int supportingImmunization_count;
	Reference* supportingImmunization;
	int supportingPatientInformation_count;
	Reference* supportingPatientInformation;
};
class ImmunizationRecommendation_Recommendation_DateCriterion {
public:
	ResourceType resourceType = ResourceType::ImmunizationRecommendation_Recommendation_DateCriterion;
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
	ResourceType resourceType = ResourceType::ImplementationGuide;
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
	fhir_code* fhirVersion;
	int dependsOn_count;
	ImplementationGuide_DependsOn* dependsOn;
	int global__count;
	ImplementationGuide_Global* global_;
	ImplementationGuide_Definition* definition;
	ImplementationGuide_Manifest* manifest;
};
class ImplementationGuide_DependsOn {
public:
	ResourceType resourceType = ResourceType::ImplementationGuide_DependsOn;
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
	ResourceType resourceType = ResourceType::ImplementationGuide_Global;
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
	ResourceType resourceType = ResourceType::ImplementationGuide_Definition;
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
	ResourceType resourceType = ResourceType::ImplementationGuide_Definition_Grouping;
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
	ResourceType resourceType = ResourceType::ImplementationGuide_Definition_Resource;
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	Reference* reference;
	int fhirVersion_count;
	fhir_code* fhirVersion;
	fhir_string name;
	fhir_string description;
	enum class ExampleType {
		fhir_boolean,
		fhir_canonical
	};
	ExampleType example_type;
	union {
		fhir_boolean valueBoolean;
		fhir_canonical valueCanonical;
	} example;

	fhir_id groupingId;
};
class ImplementationGuide_Definition_Page {
public:
	ResourceType resourceType = ResourceType::ImplementationGuide_Definition_Page;
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	enum class NameType {
		fhir_url,
		Reference
	};
	NameType name_type;
	union {
		fhir_url valueUrl;
		Reference* valueReference;
	} name;

	fhir_string title;
	fhir_code generation;
	int page_count;
	ImplementationGuide_Definition_Page* page;
};
class ImplementationGuide_Definition_Parameter {
public:
	ResourceType resourceType = ResourceType::ImplementationGuide_Definition_Parameter;
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
	ResourceType resourceType = ResourceType::ImplementationGuide_Definition_Template;
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
	ResourceType resourceType = ResourceType::ImplementationGuide_Manifest;
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
	fhir_string* image;
	int other_count;
	fhir_string* other;
};
class ImplementationGuide_Manifest_Resource {
public:
	ResourceType resourceType = ResourceType::ImplementationGuide_Manifest_Resource;
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	Reference* reference;
	enum class ExampleType {
		fhir_boolean,
		fhir_canonical
	};
	ExampleType example_type;
	union {
		fhir_boolean valueBoolean;
		fhir_canonical valueCanonical;
	} example;

	fhir_url relativePath;
};
class ImplementationGuide_Manifest_Page {
public:
	ResourceType resourceType = ResourceType::ImplementationGuide_Manifest_Page;
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	fhir_string name;
	fhir_string title;
	int anchor_count;
	fhir_string* anchor;
};
class InsurancePlan {
public:
	ResourceType resourceType = ResourceType::InsurancePlan;
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
	fhir_string* alias;
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
	ResourceType resourceType = ResourceType::InsurancePlan_Contact;
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
	ResourceType resourceType = ResourceType::InsurancePlan_Coverage;
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
	ResourceType resourceType = ResourceType::InsurancePlan_Coverage_Benefit;
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
	ResourceType resourceType = ResourceType::InsurancePlan_Coverage_Benefit_Limit;
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
	ResourceType resourceType = ResourceType::InsurancePlan_Plan;
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
	ResourceType resourceType = ResourceType::InsurancePlan_Plan_GeneralCost;
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
	ResourceType resourceType = ResourceType::InsurancePlan_Plan_SpecificCost;
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
	ResourceType resourceType = ResourceType::InsurancePlan_Plan_SpecificCost_Benefit;
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
	ResourceType resourceType = ResourceType::InsurancePlan_Plan_SpecificCost_Benefit_Cost;
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
	ResourceType resourceType = ResourceType::Invoice;
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
	ResourceType resourceType = ResourceType::Invoice_Participant;
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
	ResourceType resourceType = ResourceType::Invoice_LineItem;
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	fhir_positiveInt sequence;
	enum class ChargeItemType {
		Reference,
		CodeableConcept
	};
	ChargeItemType chargeItem_type;
	union {
		Reference* valueReference;
		CodeableConcept* valueCodeableConcept;
	} chargeItem;

	int priceComponent_count;
	Invoice_LineItem_PriceComponent* priceComponent;
};
class Invoice_LineItem_PriceComponent {
public:
	ResourceType resourceType = ResourceType::Invoice_LineItem_PriceComponent;
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
	ResourceType resourceType = ResourceType::Library;
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
	enum class SubjectType {
		CodeableConcept,
		Reference
	};
	SubjectType subject_type;
	union {
		CodeableConcept* valueCodeableConcept;
		Reference* valueReference;
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
	ResourceType resourceType = ResourceType::Linkage;
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
	ResourceType resourceType = ResourceType::Linkage_Item;
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
	ResourceType resourceType = ResourceType::List;
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
	ResourceType resourceType = ResourceType::List_Entry;
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
	ResourceType resourceType = ResourceType::Location;
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
	fhir_string* alias;
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
	ResourceType resourceType = ResourceType::Location_Position;
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
	ResourceType resourceType = ResourceType::Location_HoursOfOperation;
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	int daysOfWeek_count;
	fhir_code* daysOfWeek;
	fhir_boolean allDay;
	fhir_time openingTime;
	fhir_time closingTime;
};
class Measure {
public:
	ResourceType resourceType = ResourceType::Measure;
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
	enum class SubjectType {
		CodeableConcept,
		Reference
	};
	SubjectType subject_type;
	union {
		CodeableConcept* valueCodeableConcept;
		Reference* valueReference;
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
	fhir_canonical* library;
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
	fhir_markdown* definition;
	fhir_markdown guidance;
	int group_count;
	Measure_Group* group;
	int supplementalData_count;
	Measure_SupplementalData* supplementalData;
};
class Measure_Group {
public:
	ResourceType resourceType = ResourceType::Measure_Group;
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
	ResourceType resourceType = ResourceType::Measure_Group_Population;
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
	ResourceType resourceType = ResourceType::Measure_Group_Stratifier;
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
	ResourceType resourceType = ResourceType::Measure_Group_Stratifier_Component;
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
	ResourceType resourceType = ResourceType::Measure_SupplementalData;
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
	ResourceType resourceType = ResourceType::MeasureReport;
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
	ResourceType resourceType = ResourceType::MeasureReport_Group;
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
	ResourceType resourceType = ResourceType::MeasureReport_Group_Population;
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	CodeableConcept* code;
	Integer* count;
	Reference* subjectResults;
};
class MeasureReport_Group_Stratifier {
public:
	ResourceType resourceType = ResourceType::MeasureReport_Group_Stratifier;
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
	ResourceType resourceType = ResourceType::MeasureReport_Group_Stratifier_Stratum;
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
	ResourceType resourceType = ResourceType::MeasureReport_Group_Stratifier_Stratum_Component;
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
	ResourceType resourceType = ResourceType::MeasureReport_Group_Stratifier_Stratum_Population;
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	CodeableConcept* code;
	Integer* count;
	Reference* subjectResults;
};
class Media {
public:
	ResourceType resourceType = ResourceType::Media;
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
	enum class CreatedType {
		fhir_dateTime,
		Period
	};
	CreatedType created_type;
	union {
		fhir_dateTime valueDateTime;
		Period* valuePeriod;
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
	ResourceType resourceType = ResourceType::Medication;
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
	ResourceType resourceType = ResourceType::Medication_Ingredient;
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	enum class ItemType {
		CodeableConcept,
		Reference
	};
	ItemType item_type;
	union {
		CodeableConcept* valueCodeableConcept;
		Reference* valueReference;
	} item;

	fhir_boolean isActive;
	Ratio* strength;
};
class Medication_Batch {
public:
	ResourceType resourceType = ResourceType::Medication_Batch;
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
	ResourceType resourceType = ResourceType::MedicationAdministration;
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
	fhir_uri* instantiates;
	int partOf_count;
	Reference* partOf;
	fhir_code status;
	int statusReason_count;
	CodeableConcept* statusReason;
	CodeableConcept* category;
	enum class MedicationType {
		CodeableConcept,
		Reference
	};
	MedicationType medication_type;
	union {
		CodeableConcept* valueCodeableConcept;
		Reference* valueReference;
	} medication;

	Reference* subject;
	Reference* context;
	int supportingInformation_count;
	Reference* supportingInformation;
	enum class EffectiveType {
		fhir_dateTime,
		Period
	};
	EffectiveType effective_type;
	union {
		fhir_dateTime valueDateTime;
		Period* valuePeriod;
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
	ResourceType resourceType = ResourceType::MedicationAdministration_Performer;
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	CodeableConcept* function_;
	Reference* actor;
};
class MedicationAdministration_Dosage {
public:
	ResourceType resourceType = ResourceType::MedicationAdministration_Dosage;
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
	enum class RateType {
		Ratio,
		Quantity
	};
	RateType rate_type;
	union {
		Ratio* valueRatio;
		Quantity* valueQuantity;
	} rate;

};
class MedicationDispense {
public:
	ResourceType resourceType = ResourceType::MedicationDispense;
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
	enum class StatusReasonType {
		CodeableConcept,
		Reference
	};
	StatusReasonType statusReason_type;
	union {
		CodeableConcept* valueCodeableConcept;
		Reference* valueReference;
	} statusReason;

	CodeableConcept* category;
	enum class MedicationType {
		CodeableConcept,
		Reference
	};
	MedicationType medication_type;
	union {
		CodeableConcept* valueCodeableConcept;
		Reference* valueReference;
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
	ResourceType resourceType = ResourceType::MedicationDispense_Performer;
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	CodeableConcept* function_;
	Reference* actor;
};
class MedicationDispense_Substitution {
public:
	ResourceType resourceType = ResourceType::MedicationDispense_Substitution;
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
	ResourceType resourceType = ResourceType::MedicationKnowledge;
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
	fhir_string* synonym;
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
	ResourceType resourceType = ResourceType::MedicationKnowledge_RelatedMedicationKnowledge;
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
	ResourceType resourceType = ResourceType::MedicationKnowledge_Monograph;
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
	ResourceType resourceType = ResourceType::MedicationKnowledge_Ingredient;
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	enum class ItemType {
		CodeableConcept,
		Reference
	};
	ItemType item_type;
	union {
		CodeableConcept* valueCodeableConcept;
		Reference* valueReference;
	} item;

	fhir_boolean isActive;
	Ratio* strength;
};
class MedicationKnowledge_Cost {
public:
	ResourceType resourceType = ResourceType::MedicationKnowledge_Cost;
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
	ResourceType resourceType = ResourceType::MedicationKnowledge_MonitoringProgram;
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
	ResourceType resourceType = ResourceType::MedicationKnowledge_AdministrationGuidelines;
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	int dosage_count;
	MedicationKnowledge_AdministrationGuidelines_Dosage* dosage;
	enum class IndicationType {
		CodeableConcept,
		Reference
	};
	IndicationType indication_type;
	union {
		CodeableConcept* valueCodeableConcept;
		Reference* valueReference;
	} indication;

	int patientCharacteristics_count;
	MedicationKnowledge_AdministrationGuidelines_PatientCharacteristics* patientCharacteristics;
};
class MedicationKnowledge_AdministrationGuidelines_Dosage {
public:
	ResourceType resourceType = ResourceType::MedicationKnowledge_AdministrationGuidelines_Dosage;
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
	ResourceType resourceType = ResourceType::MedicationKnowledge_AdministrationGuidelines_PatientCharacteristics;
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	enum class CharacteristicType {
		CodeableConcept,
		Quantity
	};
	CharacteristicType characteristic_type;
	union {
		CodeableConcept* valueCodeableConcept;
		Quantity* valueQuantity;
	} characteristic;

	int value_count;
	fhir_string* value;
};
class MedicationKnowledge_MedicineClassification {
public:
	ResourceType resourceType = ResourceType::MedicationKnowledge_MedicineClassification;
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
	ResourceType resourceType = ResourceType::MedicationKnowledge_Packaging;
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
	ResourceType resourceType = ResourceType::MedicationKnowledge_DrugCharacteristic;
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	CodeableConcept* type;
	enum class ValueType {
		CodeableConcept,
		fhir_string,
		Quantity,
		fhir_base64Binary
	};
	ValueType value_type;
	union {
		CodeableConcept* valueCodeableConcept;
		fhir_string valueString;
		Quantity* valueQuantity;
		fhir_base64Binary valueBase64Binary;
	} value;

};
class MedicationKnowledge_Regulatory {
public:
	ResourceType resourceType = ResourceType::MedicationKnowledge_Regulatory;
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
	ResourceType resourceType = ResourceType::MedicationKnowledge_Regulatory_Substitution;
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
	ResourceType resourceType = ResourceType::MedicationKnowledge_Regulatory_Schedule;
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	CodeableConcept* schedule;
};
class MedicationKnowledge_Regulatory_MaxDispense {
public:
	ResourceType resourceType = ResourceType::MedicationKnowledge_Regulatory_MaxDispense;
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
	ResourceType resourceType = ResourceType::MedicationKnowledge_Kinetics;
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
	ResourceType resourceType = ResourceType::MedicationRequest;
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
	enum class ReportedType {
		fhir_boolean,
		Reference
	};
	ReportedType reported_type;
	union {
		fhir_boolean valueBoolean;
		Reference* valueReference;
	} reported;

	enum class MedicationType {
		CodeableConcept,
		Reference
	};
	MedicationType medication_type;
	union {
		CodeableConcept* valueCodeableConcept;
		Reference* valueReference;
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
	fhir_canonical* instantiatesCanonical;
	int instantiatesUri_count;
	fhir_uri* instantiatesUri;
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
	ResourceType resourceType = ResourceType::MedicationRequest_DispenseRequest;
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
	ResourceType resourceType = ResourceType::MedicationRequest_DispenseRequest_InitialFill;
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
	ResourceType resourceType = ResourceType::MedicationRequest_Substitution;
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	enum class AllowedType {
		fhir_boolean,
		CodeableConcept
	};
	AllowedType allowed_type;
	union {
		fhir_boolean valueBoolean;
		CodeableConcept* valueCodeableConcept;
	} allowed;

	CodeableConcept* reason;
};
class MedicationStatement {
public:
	ResourceType resourceType = ResourceType::MedicationStatement;
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
	enum class MedicationType {
		CodeableConcept,
		Reference
	};
	MedicationType medication_type;
	union {
		CodeableConcept* valueCodeableConcept;
		Reference* valueReference;
	} medication;

	Reference* subject;
	Reference* context;
	enum class EffectiveType {
		fhir_dateTime,
		Period
	};
	EffectiveType effective_type;
	union {
		fhir_dateTime valueDateTime;
		Period* valuePeriod;
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
	ResourceType resourceType = ResourceType::MedicinalProduct;
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
	fhir_string* specialMeasures;
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
	ResourceType resourceType = ResourceType::MedicinalProduct_Name;
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
	ResourceType resourceType = ResourceType::MedicinalProduct_Name_NamePart;
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
	ResourceType resourceType = ResourceType::MedicinalProduct_Name_CountryLanguage;
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
	ResourceType resourceType = ResourceType::MedicinalProduct_ManufacturingBusinessOperation;
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
	ResourceType resourceType = ResourceType::MedicinalProduct_SpecialDesignation;
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	int identifier_count;
	Identifier* identifier;
	CodeableConcept* type;
	CodeableConcept* intendedUse;
	enum class IndicationType {
		CodeableConcept,
		Reference
	};
	IndicationType indication_type;
	union {
		CodeableConcept* valueCodeableConcept;
		Reference* valueReference;
	} indication;

	CodeableConcept* status;
	fhir_dateTime date;
	CodeableConcept* species;
};
class MedicinalProductAuthorization {
public:
	ResourceType resourceType = ResourceType::MedicinalProductAuthorization;
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
	ResourceType resourceType = ResourceType::MedicinalProductAuthorization_JurisdictionalAuthorization;
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
	ResourceType resourceType = ResourceType::MedicinalProductAuthorization_Procedure;
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	Identifier* identifier;
	CodeableConcept* type;
	enum class DateType {
		Period,
		fhir_dateTime
	};
	DateType date_type;
	union {
		Period* valuePeriod;
		fhir_dateTime valueDateTime;
	} date;

	int application_count;
	MedicinalProductAuthorization_Procedure* application;
};
class MedicinalProductContraindication {
public:
	ResourceType resourceType = ResourceType::MedicinalProductContraindication;
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
	ResourceType resourceType = ResourceType::MedicinalProductContraindication_OtherTherapy;
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	CodeableConcept* therapyRelationshipType;
	enum class MedicationType {
		CodeableConcept,
		Reference
	};
	MedicationType medication_type;
	union {
		CodeableConcept* valueCodeableConcept;
		Reference* valueReference;
	} medication;

};
class MedicinalProductIndication {
public:
	ResourceType resourceType = ResourceType::MedicinalProductIndication;
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
	ResourceType resourceType = ResourceType::MedicinalProductIndication_OtherTherapy;
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	CodeableConcept* therapyRelationshipType;
	enum class MedicationType {
		CodeableConcept,
		Reference
	};
	MedicationType medication_type;
	union {
		CodeableConcept* valueCodeableConcept;
		Reference* valueReference;
	} medication;

};
class MedicinalProductIngredient {
public:
	ResourceType resourceType = ResourceType::MedicinalProductIngredient;
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
	ResourceType resourceType = ResourceType::MedicinalProductIngredient_SpecifiedSubstance;
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
	ResourceType resourceType = ResourceType::MedicinalProductIngredient_SpecifiedSubstance_Strength;
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
	ResourceType resourceType = ResourceType::MedicinalProductIngredient_SpecifiedSubstance_Strength_ReferenceStrength;
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
	ResourceType resourceType = ResourceType::MedicinalProductIngredient_Substance;
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
	ResourceType resourceType = ResourceType::MedicinalProductInteraction;
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
	ResourceType resourceType = ResourceType::MedicinalProductInteraction_Interactant;
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	enum class ItemType {
		Reference,
		CodeableConcept
	};
	ItemType item_type;
	union {
		Reference* valueReference;
		CodeableConcept* valueCodeableConcept;
	} item;

};
class MedicinalProductManufactured {
public:
	ResourceType resourceType = ResourceType::MedicinalProductManufactured;
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
	ResourceType resourceType = ResourceType::MedicinalProductPackaged;
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
	ResourceType resourceType = ResourceType::MedicinalProductPackaged_BatchIdentifier;
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
	ResourceType resourceType = ResourceType::MedicinalProductPackaged_PackageItem;
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
	ResourceType resourceType = ResourceType::MedicinalProductPharmaceutical;
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
	ResourceType resourceType = ResourceType::MedicinalProductPharmaceutical_Characteristics;
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
	ResourceType resourceType = ResourceType::MedicinalProductPharmaceutical_RouteOfAdministration;
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
	ResourceType resourceType = ResourceType::MedicinalProductPharmaceutical_RouteOfAdministration_TargetSpecies;
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
	ResourceType resourceType = ResourceType::MedicinalProductPharmaceutical_RouteOfAdministration_TargetSpecies_WithdrawalPeriod;
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
	ResourceType resourceType = ResourceType::MedicinalProductUndesirableEffect;
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
	ResourceType resourceType = ResourceType::MessageDefinition;
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
	fhir_canonical* replaces;
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
	fhir_canonical* parent;
	enum class EventType {
		Coding,
		fhir_uri
	};
	EventType event_type;
	union {
		Coding* valueCoding;
		fhir_uri valueUri;
	} event;

	fhir_code category;
	int focus_count;
	MessageDefinition_Focus* focus;
	fhir_code responseRequired;
	int allowedResponse_count;
	MessageDefinition_AllowedResponse* allowedResponse;
	int graph_count;
	fhir_canonical* graph;
};
class MessageDefinition_Focus {
public:
	ResourceType resourceType = ResourceType::MessageDefinition_Focus;
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
	ResourceType resourceType = ResourceType::MessageDefinition_AllowedResponse;
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
	ResourceType resourceType = ResourceType::MessageHeader;
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
	enum class EventType {
		Coding,
		fhir_uri
	};
	EventType event_type;
	union {
		Coding* valueCoding;
		fhir_uri valueUri;
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
	ResourceType resourceType = ResourceType::MessageHeader_Destination;
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
	ResourceType resourceType = ResourceType::MessageHeader_Source;
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
	ResourceType resourceType = ResourceType::MessageHeader_Response;
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
	ResourceType resourceType = ResourceType::MolecularSequence;
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
	Integer* coordinateSystem;
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
	Integer* readCoverage;
	int repository_count;
	MolecularSequence_Repository* repository;
	int pointer_count;
	Reference* pointer;
	int structureVariant_count;
	MolecularSequence_StructureVariant* structureVariant;
};
class MolecularSequence_ReferenceSeq {
public:
	ResourceType resourceType = ResourceType::MolecularSequence_ReferenceSeq;
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
	Integer* windowStart;
	Integer* windowEnd;
};
class MolecularSequence_Variant {
public:
	ResourceType resourceType = ResourceType::MolecularSequence_Variant;
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	Integer* start;
	Integer* end;
	fhir_string observedAllele;
	fhir_string referenceAllele;
	fhir_string cigar;
	Reference* variantPointer;
};
class MolecularSequence_Quality {
public:
	ResourceType resourceType = ResourceType::MolecularSequence_Quality;
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	fhir_code type;
	CodeableConcept* standardSequence;
	Integer* start;
	Integer* end;
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
	ResourceType resourceType = ResourceType::MolecularSequence_Quality_Roc;
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	int score_count;
	Integer* score;
	int numTP_count;
	Integer* numTP;
	int numFP_count;
	Integer* numFP;
	int numFN_count;
	Integer* numFN;
	int precision_count;
	fhir_decimal* precision;
	int sensitivity_count;
	fhir_decimal* sensitivity;
	int fMeasure_count;
	fhir_decimal* fMeasure;
};
class MolecularSequence_Repository {
public:
	ResourceType resourceType = ResourceType::MolecularSequence_Repository;
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
	ResourceType resourceType = ResourceType::MolecularSequence_StructureVariant;
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	CodeableConcept* variantType;
	fhir_boolean exact;
	Integer* length;
	MolecularSequence_StructureVariant_Outer* outer;
	MolecularSequence_StructureVariant_Inner* inner;
};
class MolecularSequence_StructureVariant_Outer {
public:
	ResourceType resourceType = ResourceType::MolecularSequence_StructureVariant_Outer;
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	Integer* start;
	Integer* end;
};
class MolecularSequence_StructureVariant_Inner {
public:
	ResourceType resourceType = ResourceType::MolecularSequence_StructureVariant_Inner;
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	Integer* start;
	Integer* end;
};
class NamingSystem {
public:
	ResourceType resourceType = ResourceType::NamingSystem;
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
	ResourceType resourceType = ResourceType::NamingSystem_UniqueId;
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
	ResourceType resourceType = ResourceType::NutritionOrder;
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
	fhir_canonical* instantiatesCanonical;
	int instantiatesUri_count;
	fhir_uri* instantiatesUri;
	int instantiates_count;
	fhir_uri* instantiates;
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
	ResourceType resourceType = ResourceType::NutritionOrder_OralDiet;
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
	ResourceType resourceType = ResourceType::NutritionOrder_OralDiet_Nutrient;
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
	ResourceType resourceType = ResourceType::NutritionOrder_OralDiet_Texture;
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
	ResourceType resourceType = ResourceType::NutritionOrder_Supplement;
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
	ResourceType resourceType = ResourceType::NutritionOrder_EnteralFormula;
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
	ResourceType resourceType = ResourceType::NutritionOrder_EnteralFormula_Administration;
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	Timing* schedule;
	Quantity* quantity;
	enum class RateType {
		Quantity,
		Ratio
	};
	RateType rate_type;
	union {
		Quantity* valueQuantity;
		Ratio* valueRatio;
	} rate;

};
class Observation {
public:
	ResourceType resourceType = ResourceType::Observation;
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
	enum class EffectiveType {
		fhir_dateTime,
		Period,
		Timing,
		fhir_instant
	};
	EffectiveType effective_type;
	union {
		fhir_dateTime valueDateTime;
		Period* valuePeriod;
		Timing* valueTiming;
		fhir_instant valueInstant;
	} effective;

	fhir_instant issued;
	int performer_count;
	Reference* performer;
	enum class ValueType {
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
	ValueType value_type;
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
	ResourceType resourceType = ResourceType::Observation_ReferenceRange;
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
	ResourceType resourceType = ResourceType::Observation_Component;
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	CodeableConcept* code;
	enum class ValueType {
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
	ValueType value_type;
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

	CodeableConcept* dataAbsentReason;
	int interpretation_count;
	CodeableConcept* interpretation;
	int referenceRange_count;
	Observation_ReferenceRange* referenceRange;
};
class ObservationDefinition {
public:
	ResourceType resourceType = ResourceType::ObservationDefinition;
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
	fhir_code* permittedDataType;
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
	ResourceType resourceType = ResourceType::ObservationDefinition_QuantitativeDetails;
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	CodeableConcept* customaryUnit;
	CodeableConcept* unit;
	fhir_decimal conversionFactor;
	Integer* decimalPrecision;
};
class ObservationDefinition_QualifiedInterval {
public:
	ResourceType resourceType = ResourceType::ObservationDefinition_QualifiedInterval;
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
	ResourceType resourceType = ResourceType::OperationDefinition;
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
	fhir_code* resource;
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
	ResourceType resourceType = ResourceType::OperationDefinition_Parameter;
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	fhir_code name;
	fhir_code use;
	Integer* min;
	fhir_string max;
	fhir_string documentation;
	fhir_code type;
	int targetProfile_count;
	fhir_canonical* targetProfile;
	fhir_code searchType;
	OperationDefinition_Parameter_Binding* binding;
	int referencedFrom_count;
	OperationDefinition_Parameter_ReferencedFrom* referencedFrom;
	int part_count;
	OperationDefinition_Parameter* part;
};
class OperationDefinition_Parameter_Binding {
public:
	ResourceType resourceType = ResourceType::OperationDefinition_Parameter_Binding;
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
	ResourceType resourceType = ResourceType::OperationDefinition_Parameter_ReferencedFrom;
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
	ResourceType resourceType = ResourceType::OperationDefinition_Overload;
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	int parameterName_count;
	fhir_string* parameterName;
	fhir_string comment;
};
class OperationOutcome {
public:
	ResourceType resourceType = ResourceType::OperationOutcome;
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
	ResourceType resourceType = ResourceType::OperationOutcome_Issue;
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
	fhir_string* location;
	int expression_count;
	fhir_string* expression;
};
class Organization {
public:
	ResourceType resourceType = ResourceType::Organization;
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
	fhir_string* alias;
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
	ResourceType resourceType = ResourceType::Organization_Contact;
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
	ResourceType resourceType = ResourceType::OrganizationAffiliation;
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
	ResourceType resourceType = ResourceType::Parameters;
	fhir_string id;
	Meta* meta;
	fhir_uri implicitRules;
	fhir_code language;
	int parameter_count;
	Parameters_Parameter* parameter;
};
class Parameters_Parameter {
public:
	ResourceType resourceType = ResourceType::Parameters_Parameter;
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	fhir_string name;
	enum class ValueType {
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
	ValueType value_type;
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

	Resource* resource;
	int part_count;
	Parameters_Parameter* part;
};
class Patient {
public:
	ResourceType resourceType = ResourceType::Patient;
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
	enum class DeceasedType {
		fhir_boolean,
		fhir_dateTime
	};
	DeceasedType deceased_type;
	union {
		fhir_boolean valueBoolean;
		fhir_dateTime valueDateTime;
	} deceased;

	int address_count;
	Address* address;
	CodeableConcept* maritalStatus;
	enum class MultipleBirthType {
		fhir_boolean,
		Integer
	};
	MultipleBirthType multipleBirth_type;
	union {
		fhir_boolean valueBoolean;
		Integer* valueInteger;
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
	ResourceType resourceType = ResourceType::Patient_Contact;
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
	ResourceType resourceType = ResourceType::Patient_Communication;
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
	ResourceType resourceType = ResourceType::Patient_Link;
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
	ResourceType resourceType = ResourceType::PaymentNotice;
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
	ResourceType resourceType = ResourceType::PaymentReconciliation;
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
	ResourceType resourceType = ResourceType::PaymentReconciliation_Detail;
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
	ResourceType resourceType = ResourceType::PaymentReconciliation_ProcessNote;
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
	ResourceType resourceType = ResourceType::Person;
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
	ResourceType resourceType = ResourceType::Person_Link;
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
	ResourceType resourceType = ResourceType::PlanDefinition;
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
	enum class SubjectType {
		CodeableConcept,
		Reference
	};
	SubjectType subject_type;
	union {
		CodeableConcept* valueCodeableConcept;
		Reference* valueReference;
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
	fhir_canonical* library;
	int goal_count;
	PlanDefinition_Goal* goal;
	int action_count;
	PlanDefinition_Action* action;
};
class PlanDefinition_Goal {
public:
	ResourceType resourceType = ResourceType::PlanDefinition_Goal;
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
	ResourceType resourceType = ResourceType::PlanDefinition_Goal_Target;
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	CodeableConcept* measure;
	enum class DetailType {
		Quantity,
		Range,
		CodeableConcept
	};
	DetailType detail_type;
	union {
		Quantity* valueQuantity;
		Range* valueRange;
		CodeableConcept* valueCodeableConcept;
	} detail;

	Duration* due;
};
class PlanDefinition_Action {
public:
	ResourceType resourceType = ResourceType::PlanDefinition_Action;
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
	fhir_id* goalId;
	enum class SubjectType {
		CodeableConcept,
		Reference
	};
	SubjectType subject_type;
	union {
		CodeableConcept* valueCodeableConcept;
		Reference* valueReference;
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
	enum class TimingType {
		fhir_dateTime,
		Age,
		Period,
		Duration,
		Range,
		Timing
	};
	TimingType timing_type;
	union {
		fhir_dateTime valueDateTime;
		Age* valueAge;
		Period* valuePeriod;
		Duration* valueDuration;
		Range* valueRange;
		Timing* valueTiming;
	} timing;

	int participant_count;
	PlanDefinition_Action_Participant* participant;
	CodeableConcept* type;
	fhir_code groupingBehavior;
	fhir_code selectionBehavior;
	fhir_code requiredBehavior;
	fhir_code precheckBehavior;
	fhir_code cardinalityBehavior;
	enum class DefinitionType {
		fhir_canonical,
		fhir_uri
	};
	DefinitionType definition_type;
	union {
		fhir_canonical valueCanonical;
		fhir_uri valueUri;
	} definition;

	fhir_canonical transform;
	int dynamicValue_count;
	PlanDefinition_Action_DynamicValue* dynamicValue;
	int action_count;
	PlanDefinition_Action* action;
};
class PlanDefinition_Action_Condition {
public:
	ResourceType resourceType = ResourceType::PlanDefinition_Action_Condition;
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
	ResourceType resourceType = ResourceType::PlanDefinition_Action_RelatedAction;
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	fhir_id actionId;
	fhir_code relationship;
	enum class OffsetType {
		Duration,
		Range
	};
	OffsetType offset_type;
	union {
		Duration* valueDuration;
		Range* valueRange;
	} offset;

};
class PlanDefinition_Action_Participant {
public:
	ResourceType resourceType = ResourceType::PlanDefinition_Action_Participant;
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
	ResourceType resourceType = ResourceType::PlanDefinition_Action_DynamicValue;
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
	ResourceType resourceType = ResourceType::Practitioner;
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
	ResourceType resourceType = ResourceType::Practitioner_Qualification;
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
	ResourceType resourceType = ResourceType::PractitionerRole;
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
	ResourceType resourceType = ResourceType::PractitionerRole_AvailableTime;
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	int daysOfWeek_count;
	fhir_code* daysOfWeek;
	fhir_boolean allDay;
	fhir_time availableStartTime;
	fhir_time availableEndTime;
};
class PractitionerRole_NotAvailable {
public:
	ResourceType resourceType = ResourceType::PractitionerRole_NotAvailable;
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
	ResourceType resourceType = ResourceType::Procedure;
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
	fhir_canonical* instantiatesCanonical;
	int instantiatesUri_count;
	fhir_uri* instantiatesUri;
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
	enum class PerformedType {
		fhir_dateTime,
		Period,
		fhir_string,
		Age,
		Range
	};
	PerformedType performed_type;
	union {
		fhir_dateTime valueDateTime;
		Period* valuePeriod;
		fhir_string valueString;
		Age* valueAge;
		Range* valueRange;
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
	ResourceType resourceType = ResourceType::Procedure_Performer;
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	CodeableConcept* function_;
	Reference* actor;
	Reference* onBehalfOf;
};
class Procedure_FocalDevice {
public:
	ResourceType resourceType = ResourceType::Procedure_FocalDevice;
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
	ResourceType resourceType = ResourceType::Provenance;
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
	enum class OccurredType {
		Period,
		fhir_dateTime
	};
	OccurredType occurred_type;
	union {
		Period* valuePeriod;
		fhir_dateTime valueDateTime;
	} occurred;

	fhir_instant recorded;
	int policy_count;
	fhir_uri* policy;
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
	ResourceType resourceType = ResourceType::Provenance_Agent;
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
	ResourceType resourceType = ResourceType::Provenance_Entity;
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
	ResourceType resourceType = ResourceType::Questionnaire;
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
	fhir_canonical* derivedFrom;
	fhir_code status;
	fhir_boolean experimental;
	int subjectType_count;
	fhir_code* subjectType;
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
	ResourceType resourceType = ResourceType::Questionnaire_Item;
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
	Integer* maxLength;
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
	ResourceType resourceType = ResourceType::Questionnaire_Item_EnableWhen;
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	fhir_string question;
	fhir_code operator_;
	enum class AnswerType {
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
	AnswerType answer_type;
	union {
		fhir_boolean valueBoolean;
		fhir_decimal valueDecimal;
		Integer* valueInteger;
		fhir_date valueDate;
		fhir_dateTime valueDateTime;
		fhir_time valueTime;
		fhir_string valueString;
		Coding* valueCoding;
		Quantity* valueQuantity;
		Reference* valueReference;
	} answer;

};
class Questionnaire_Item_AnswerOption {
public:
	ResourceType resourceType = ResourceType::Questionnaire_Item_AnswerOption;
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	enum class ValueType {
		Integer,
		fhir_date,
		fhir_time,
		fhir_string,
		Coding,
		Reference
	};
	ValueType value_type;
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
	ResourceType resourceType = ResourceType::Questionnaire_Item_Initial;
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	enum class ValueType {
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
	ValueType value_type;
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
	ResourceType resourceType = ResourceType::QuestionnaireResponse;
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
	ResourceType resourceType = ResourceType::QuestionnaireResponse_Item;
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
	ResourceType resourceType = ResourceType::QuestionnaireResponse_Item_Answer;
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	enum class ValueType {
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
	ValueType value_type;
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

	int item_count;
	QuestionnaireResponse_Item* item;
};
class RelatedPerson {
public:
	ResourceType resourceType = ResourceType::RelatedPerson;
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
	ResourceType resourceType = ResourceType::RelatedPerson_Communication;
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
	ResourceType resourceType = ResourceType::RequestGroup;
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
	fhir_canonical* instantiatesCanonical;
	int instantiatesUri_count;
	fhir_uri* instantiatesUri;
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
	ResourceType resourceType = ResourceType::RequestGroup_Action;
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
	enum class TimingType {
		fhir_dateTime,
		Age,
		Period,
		Duration,
		Range,
		Timing
	};
	TimingType timing_type;
	union {
		fhir_dateTime valueDateTime;
		Age* valueAge;
		Period* valuePeriod;
		Duration* valueDuration;
		Range* valueRange;
		Timing* valueTiming;
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
	ResourceType resourceType = ResourceType::RequestGroup_Action_Condition;
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
	ResourceType resourceType = ResourceType::RequestGroup_Action_RelatedAction;
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	fhir_id actionId;
	fhir_code relationship;
	enum class OffsetType {
		Duration,
		Range
	};
	OffsetType offset_type;
	union {
		Duration* valueDuration;
		Range* valueRange;
	} offset;

};
class ResearchDefinition {
public:
	ResourceType resourceType = ResourceType::ResearchDefinition;
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
	enum class SubjectType {
		CodeableConcept,
		Reference
	};
	SubjectType subject_type;
	union {
		CodeableConcept* valueCodeableConcept;
		Reference* valueReference;
	} subject;

	fhir_dateTime date;
	fhir_string publisher;
	int contact_count;
	ContactDetail* contact;
	fhir_markdown description;
	int comment_count;
	fhir_string* comment;
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
	fhir_canonical* library;
	Reference* population;
	Reference* exposure;
	Reference* exposureAlternative;
	Reference* outcome;
};
class ResearchElementDefinition {
public:
	ResourceType resourceType = ResourceType::ResearchElementDefinition;
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
	enum class SubjectType {
		CodeableConcept,
		Reference
	};
	SubjectType subject_type;
	union {
		CodeableConcept* valueCodeableConcept;
		Reference* valueReference;
	} subject;

	fhir_dateTime date;
	fhir_string publisher;
	int contact_count;
	ContactDetail* contact;
	fhir_markdown description;
	int comment_count;
	fhir_string* comment;
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
	fhir_canonical* library;
	fhir_code type;
	fhir_code variableType;
	int characteristic_count;
	ResearchElementDefinition_Characteristic* characteristic;
};
class ResearchElementDefinition_Characteristic {
public:
	ResourceType resourceType = ResourceType::ResearchElementDefinition_Characteristic;
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	enum class DefinitionType {
		CodeableConcept,
		fhir_canonical,
		Expression,
		DataRequirement
	};
	DefinitionType definition_type;
	union {
		CodeableConcept* valueCodeableConcept;
		fhir_canonical valueCanonical;
		Expression* valueExpression;
		DataRequirement* valueDataRequirement;
	} definition;

	int usageContext_count;
	UsageContext* usageContext;
	fhir_boolean exclude;
	CodeableConcept* unitOfMeasure;
	fhir_string studyEffectiveDescription;
	enum class StudyEffectiveType {
		fhir_dateTime,
		Period,
		Duration,
		Timing
	};
	StudyEffectiveType studyEffective_type;
	union {
		fhir_dateTime valueDateTime;
		Period* valuePeriod;
		Duration* valueDuration;
		Timing* valueTiming;
	} studyEffective;

	Duration* studyEffectiveTimeFromStart;
	fhir_code studyEffectiveGroupMeasure;
	fhir_string participantEffectiveDescription;
	enum class ParticipantEffectiveType {
		fhir_dateTime,
		Period,
		Duration,
		Timing
	};
	ParticipantEffectiveType participantEffective_type;
	union {
		fhir_dateTime valueDateTime;
		Period* valuePeriod;
		Duration* valueDuration;
		Timing* valueTiming;
	} participantEffective;

	Duration* participantEffectiveTimeFromStart;
	fhir_code participantEffectiveGroupMeasure;
};
class ResearchStudy {
public:
	ResourceType resourceType = ResourceType::ResearchStudy;
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
	ResourceType resourceType = ResourceType::ResearchStudy_Arm;
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
	ResourceType resourceType = ResourceType::ResearchStudy_Objective;
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
	ResourceType resourceType = ResourceType::ResearchSubject;
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
	ResourceType resourceType = ResourceType::RiskAssessment;
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
	enum class OccurrenceType {
		fhir_dateTime,
		Period
	};
	OccurrenceType occurrence_type;
	union {
		fhir_dateTime valueDateTime;
		Period* valuePeriod;
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
	ResourceType resourceType = ResourceType::RiskAssessment_Prediction;
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	CodeableConcept* outcome;
	enum class ProbabilityType {
		fhir_decimal,
		Range
	};
	ProbabilityType probability_type;
	union {
		fhir_decimal valueDecimal;
		Range* valueRange;
	} probability;

	CodeableConcept* qualitativeRisk;
	fhir_decimal relativeRisk;
	enum class WhenType {
		Period,
		Range
	};
	WhenType when_type;
	union {
		Period* valuePeriod;
		Range* valueRange;
	} when;

	fhir_string rationale;
};
class RiskEvidenceSynthesis {
public:
	ResourceType resourceType = ResourceType::RiskEvidenceSynthesis;
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
	ResourceType resourceType = ResourceType::RiskEvidenceSynthesis_SampleSize;
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	fhir_string description;
	Integer* numberOfStudies;
	Integer* numberOfParticipants;
};
class RiskEvidenceSynthesis_RiskEstimate {
public:
	ResourceType resourceType = ResourceType::RiskEvidenceSynthesis_RiskEstimate;
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	fhir_string description;
	CodeableConcept* type;
	fhir_decimal value;
	CodeableConcept* unitOfMeasure;
	Integer* denominatorCount;
	Integer* numeratorCount;
	int precisionEstimate_count;
	RiskEvidenceSynthesis_RiskEstimate_PrecisionEstimate* precisionEstimate;
};
class RiskEvidenceSynthesis_RiskEstimate_PrecisionEstimate {
public:
	ResourceType resourceType = ResourceType::RiskEvidenceSynthesis_RiskEstimate_PrecisionEstimate;
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
	ResourceType resourceType = ResourceType::RiskEvidenceSynthesis_Certainty;
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
	ResourceType resourceType = ResourceType::RiskEvidenceSynthesis_Certainty_CertaintySubcomponent;
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
	ResourceType resourceType = ResourceType::Schedule;
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
	ResourceType resourceType = ResourceType::SearchParameter;
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
	fhir_code* base;
	fhir_code type;
	fhir_string expression;
	fhir_string xpath;
	fhir_code xpathUsage;
	int target_count;
	fhir_code* target;
	fhir_boolean multipleOr;
	fhir_boolean multipleAnd;
	int comparator_count;
	fhir_code* comparator;
	int modifier_count;
	fhir_code* modifier;
	int chain_count;
	fhir_string* chain;
	int component_count;
	SearchParameter_Component* component;
};
class SearchParameter_Component {
public:
	ResourceType resourceType = ResourceType::SearchParameter_Component;
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
	ResourceType resourceType = ResourceType::ServiceRequest;
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
	fhir_canonical* instantiatesCanonical;
	int instantiatesUri_count;
	fhir_uri* instantiatesUri;
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
	enum class QuantityType {
		Quantity,
		Ratio,
		Range
	};
	QuantityType quantity_type;
	union {
		Quantity* valueQuantity;
		Ratio* valueRatio;
		Range* valueRange;
	} quantity;

	Reference* subject;
	Reference* encounter;
	enum class OccurrenceType {
		fhir_dateTime,
		Period,
		Timing
	};
	OccurrenceType occurrence_type;
	union {
		fhir_dateTime valueDateTime;
		Period* valuePeriod;
		Timing* valueTiming;
	} occurrence;

	enum class AsNeededType {
		fhir_boolean,
		CodeableConcept
	};
	AsNeededType asNeeded_type;
	union {
		fhir_boolean valueBoolean;
		CodeableConcept* valueCodeableConcept;
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
	ResourceType resourceType = ResourceType::Slot;
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
	ResourceType resourceType = ResourceType::Specimen;
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
	ResourceType resourceType = ResourceType::Specimen_Collection;
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	Reference* collector;
	enum class CollectedType {
		fhir_dateTime,
		Period
	};
	CollectedType collected_type;
	union {
		fhir_dateTime valueDateTime;
		Period* valuePeriod;
	} collected;

	Duration* duration;
	Quantity* quantity;
	CodeableConcept* method;
	CodeableConcept* bodySite;
	enum class FastingStatusType {
		CodeableConcept,
		Duration
	};
	FastingStatusType fastingStatus_type;
	union {
		CodeableConcept* valueCodeableConcept;
		Duration* valueDuration;
	} fastingStatus;

};
class Specimen_Processing {
public:
	ResourceType resourceType = ResourceType::Specimen_Processing;
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	fhir_string description;
	CodeableConcept* procedure;
	int additive_count;
	Reference* additive;
	enum class TimeType {
		fhir_dateTime,
		Period
	};
	TimeType time_type;
	union {
		fhir_dateTime valueDateTime;
		Period* valuePeriod;
	} time;

};
class Specimen_Container {
public:
	ResourceType resourceType = ResourceType::Specimen_Container;
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
	enum class AdditiveType {
		CodeableConcept,
		Reference
	};
	AdditiveType additive_type;
	union {
		CodeableConcept* valueCodeableConcept;
		Reference* valueReference;
	} additive;

};
class SpecimenDefinition {
public:
	ResourceType resourceType = ResourceType::SpecimenDefinition;
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
	ResourceType resourceType = ResourceType::SpecimenDefinition_TypeTested;
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
	ResourceType resourceType = ResourceType::SpecimenDefinition_TypeTested_Container;
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
	enum class MinimumVolumeType {
		Quantity,
		fhir_string
	};
	MinimumVolumeType minimumVolume_type;
	union {
		Quantity* valueQuantity;
		fhir_string valueString;
	} minimumVolume;

	int additive_count;
	SpecimenDefinition_TypeTested_Container_Additive* additive;
	fhir_string preparation;
};
class SpecimenDefinition_TypeTested_Container_Additive {
public:
	ResourceType resourceType = ResourceType::SpecimenDefinition_TypeTested_Container_Additive;
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	enum class AdditiveType {
		CodeableConcept,
		Reference
	};
	AdditiveType additive_type;
	union {
		CodeableConcept* valueCodeableConcept;
		Reference* valueReference;
	} additive;

};
class SpecimenDefinition_TypeTested_Handling {
public:
	ResourceType resourceType = ResourceType::SpecimenDefinition_TypeTested_Handling;
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
	ResourceType resourceType = ResourceType::StructureDefinition;
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
	fhir_string* contextInvariant;
	fhir_uri type;
	fhir_canonical baseDefinition;
	fhir_code derivation;
	StructureDefinition_Snapshot* snapshot;
	StructureDefinition_Differential* differential;
};
class StructureDefinition_Mapping {
public:
	ResourceType resourceType = ResourceType::StructureDefinition_Mapping;
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
	ResourceType resourceType = ResourceType::StructureDefinition_Context;
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
	ResourceType resourceType = ResourceType::StructureDefinition_Snapshot;
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
	ResourceType resourceType = ResourceType::StructureDefinition_Differential;
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
	ResourceType resourceType = ResourceType::StructureMap;
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
	fhir_canonical* import;
	int group_count;
	StructureMap_Group* group;
};
class StructureMap_Structure {
public:
	ResourceType resourceType = ResourceType::StructureMap_Structure;
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
	ResourceType resourceType = ResourceType::StructureMap_Group;
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
	ResourceType resourceType = ResourceType::StructureMap_Group_Input;
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
	ResourceType resourceType = ResourceType::StructureMap_Group_Rule;
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
	ResourceType resourceType = ResourceType::StructureMap_Group_Rule_Source;
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	fhir_id context;
	Integer* min;
	fhir_string max;
	fhir_string type;
	enum class DefaultValueType {
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
	DefaultValueType defaultValue_type;
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
	ResourceType resourceType = ResourceType::StructureMap_Group_Rule_Target;
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
	fhir_code* listMode;
	fhir_id listRuleId;
	fhir_code transform;
	int parameter_count;
	StructureMap_Group_Rule_Target_Parameter* parameter;
};
class StructureMap_Group_Rule_Target_Parameter {
public:
	ResourceType resourceType = ResourceType::StructureMap_Group_Rule_Target_Parameter;
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	enum class ValueType {
		fhir_id,
		fhir_string,
		fhir_boolean,
		Integer,
		fhir_decimal
	};
	ValueType value_type;
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
	ResourceType resourceType = ResourceType::StructureMap_Group_Rule_Dependent;
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	fhir_id name;
	int variable_count;
	fhir_string* variable;
};
class Subscription {
public:
	ResourceType resourceType = ResourceType::Subscription;
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
	ResourceType resourceType = ResourceType::Subscription_Channel;
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	fhir_code type;
	fhir_url endpoint;
	fhir_code payload;
	int header_count;
	fhir_string* header;
};
class Substance {
public:
	ResourceType resourceType = ResourceType::Substance;
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
	ResourceType resourceType = ResourceType::Substance_Instance;
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
	ResourceType resourceType = ResourceType::Substance_Ingredient;
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	Ratio* quantity;
	enum class SubstanceType {
		CodeableConcept,
		Reference
	};
	SubstanceType substance_type;
	union {
		CodeableConcept* valueCodeableConcept;
		Reference* valueReference;
	} substance;

};
class SubstanceNucleicAcid {
public:
	ResourceType resourceType = ResourceType::SubstanceNucleicAcid;
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
	Integer* numberOfSubunits;
	fhir_string areaOfHybridisation;
	CodeableConcept* oligoNucleotideType;
	int subunit_count;
	SubstanceNucleicAcid_Subunit* subunit;
};
class SubstanceNucleicAcid_Subunit {
public:
	ResourceType resourceType = ResourceType::SubstanceNucleicAcid_Subunit;
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	Integer* subunit;
	fhir_string sequence;
	Integer* length;
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
	ResourceType resourceType = ResourceType::SubstanceNucleicAcid_Subunit_Linkage;
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
	ResourceType resourceType = ResourceType::SubstanceNucleicAcid_Subunit_Sugar;
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
	ResourceType resourceType = ResourceType::SubstancePolymer;
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
	fhir_string* modification;
	int monomerSet_count;
	SubstancePolymer_MonomerSet* monomerSet;
	int repeat_count;
	SubstancePolymer_Repeat* repeat;
};
class SubstancePolymer_MonomerSet {
public:
	ResourceType resourceType = ResourceType::SubstancePolymer_MonomerSet;
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
	ResourceType resourceType = ResourceType::SubstancePolymer_MonomerSet_StartingMaterial;
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
	ResourceType resourceType = ResourceType::SubstancePolymer_Repeat;
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	Integer* numberOfUnits;
	fhir_string averageMolecularFormula;
	CodeableConcept* repeatUnitAmountType;
	int repeatUnit_count;
	SubstancePolymer_Repeat_RepeatUnit* repeatUnit;
};
class SubstancePolymer_Repeat_RepeatUnit {
public:
	ResourceType resourceType = ResourceType::SubstancePolymer_Repeat_RepeatUnit;
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
	ResourceType resourceType = ResourceType::SubstancePolymer_Repeat_RepeatUnit_DegreeOfPolymerisation;
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
	ResourceType resourceType = ResourceType::SubstancePolymer_Repeat_RepeatUnit_StructuralRepresentation;
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
	ResourceType resourceType = ResourceType::SubstanceProtein;
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
	Integer* numberOfSubunits;
	int disulfideLinkage_count;
	fhir_string* disulfideLinkage;
	int subunit_count;
	SubstanceProtein_Subunit* subunit;
};
class SubstanceProtein_Subunit {
public:
	ResourceType resourceType = ResourceType::SubstanceProtein_Subunit;
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	Integer* subunit;
	fhir_string sequence;
	Integer* length;
	Attachment* sequenceAttachment;
	Identifier* nTerminalModificationId;
	fhir_string nTerminalModification;
	Identifier* cTerminalModificationId;
	fhir_string cTerminalModification;
};
class SubstanceReferenceInformation {
public:
	ResourceType resourceType = ResourceType::SubstanceReferenceInformation;
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
	ResourceType resourceType = ResourceType::SubstanceReferenceInformation_Gene;
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
	ResourceType resourceType = ResourceType::SubstanceReferenceInformation_GeneElement;
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
	ResourceType resourceType = ResourceType::SubstanceReferenceInformation_Classification;
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
	ResourceType resourceType = ResourceType::SubstanceReferenceInformation_Target;
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
	enum class AmountType {
		Quantity,
		Range,
		fhir_string
	};
	AmountType amount_type;
	union {
		Quantity* valueQuantity;
		Range* valueRange;
		fhir_string valueString;
	} amount;

	CodeableConcept* amountType;
	int source_count;
	Reference* source;
};
class SubstanceSourceMaterial {
public:
	ResourceType resourceType = ResourceType::SubstanceSourceMaterial;
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
	fhir_string* parentSubstanceName;
	int countryOfOrigin_count;
	CodeableConcept* countryOfOrigin;
	int geographicalLocation_count;
	fhir_string* geographicalLocation;
	CodeableConcept* developmentStage;
	int fractionDescription_count;
	SubstanceSourceMaterial_FractionDescription* fractionDescription;
	SubstanceSourceMaterial_Organism* organism;
	int partDescription_count;
	SubstanceSourceMaterial_PartDescription* partDescription;
};
class SubstanceSourceMaterial_FractionDescription {
public:
	ResourceType resourceType = ResourceType::SubstanceSourceMaterial_FractionDescription;
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
	ResourceType resourceType = ResourceType::SubstanceSourceMaterial_Organism;
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
	ResourceType resourceType = ResourceType::SubstanceSourceMaterial_Organism_Author;
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
	ResourceType resourceType = ResourceType::SubstanceSourceMaterial_Organism_Hybrid;
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
	ResourceType resourceType = ResourceType::SubstanceSourceMaterial_Organism_OrganismGeneral;
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
	ResourceType resourceType = ResourceType::SubstanceSourceMaterial_PartDescription;
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
	ResourceType resourceType = ResourceType::SubstanceSpecification;
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
	ResourceType resourceType = ResourceType::SubstanceSpecification_Moiety;
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
	enum class AmountType {
		Quantity,
		fhir_string
	};
	AmountType amount_type;
	union {
		Quantity* valueQuantity;
		fhir_string valueString;
	} amount;

};
class SubstanceSpecification_Property {
public:
	ResourceType resourceType = ResourceType::SubstanceSpecification_Property;
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	CodeableConcept* category;
	CodeableConcept* code;
	fhir_string parameters;
	enum class DefiningSubstanceType {
		Reference,
		CodeableConcept
	};
	DefiningSubstanceType definingSubstance_type;
	union {
		Reference* valueReference;
		CodeableConcept* valueCodeableConcept;
	} definingSubstance;

	enum class AmountType {
		Quantity,
		fhir_string
	};
	AmountType amount_type;
	union {
		Quantity* valueQuantity;
		fhir_string valueString;
	} amount;

};
class SubstanceSpecification_Structure {
public:
	ResourceType resourceType = ResourceType::SubstanceSpecification_Structure;
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
	ResourceType resourceType = ResourceType::SubstanceSpecification_Structure_Isotope;
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
	ResourceType resourceType = ResourceType::SubstanceSpecification_Structure_Isotope_MolecularWeight;
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
	ResourceType resourceType = ResourceType::SubstanceSpecification_Structure_Representation;
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
	ResourceType resourceType = ResourceType::SubstanceSpecification_Code;
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
	ResourceType resourceType = ResourceType::SubstanceSpecification_Name;
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
	ResourceType resourceType = ResourceType::SubstanceSpecification_Name_Official;
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
	ResourceType resourceType = ResourceType::SubstanceSpecification_Relationship;
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	enum class SubstanceType {
		Reference,
		CodeableConcept
	};
	SubstanceType substance_type;
	union {
		Reference* valueReference;
		CodeableConcept* valueCodeableConcept;
	} substance;

	CodeableConcept* relationship;
	fhir_boolean isDefining;
	enum class AmountType {
		Quantity,
		Range,
		Ratio,
		fhir_string
	};
	AmountType amount_type;
	union {
		Quantity* valueQuantity;
		Range* valueRange;
		Ratio* valueRatio;
		fhir_string valueString;
	} amount;

	Ratio* amountRatioLowLimit;
	CodeableConcept* amountType;
	int source_count;
	Reference* source;
};
class SupplyDelivery {
public:
	ResourceType resourceType = ResourceType::SupplyDelivery;
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
	enum class OccurrenceType {
		fhir_dateTime,
		Period,
		Timing
	};
	OccurrenceType occurrence_type;
	union {
		fhir_dateTime valueDateTime;
		Period* valuePeriod;
		Timing* valueTiming;
	} occurrence;

	Reference* supplier;
	Reference* destination;
	int receiver_count;
	Reference* receiver;
};
class SupplyDelivery_SuppliedItem {
public:
	ResourceType resourceType = ResourceType::SupplyDelivery_SuppliedItem;
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	Quantity* quantity;
	enum class ItemType {
		CodeableConcept,
		Reference
	};
	ItemType item_type;
	union {
		CodeableConcept* valueCodeableConcept;
		Reference* valueReference;
	} item;

};
class SupplyRequest {
public:
	ResourceType resourceType = ResourceType::SupplyRequest;
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
	enum class ItemType {
		CodeableConcept,
		Reference
	};
	ItemType item_type;
	union {
		CodeableConcept* valueCodeableConcept;
		Reference* valueReference;
	} item;

	Quantity* quantity;
	int parameter_count;
	SupplyRequest_Parameter* parameter;
	enum class OccurrenceType {
		fhir_dateTime,
		Period,
		Timing
	};
	OccurrenceType occurrence_type;
	union {
		fhir_dateTime valueDateTime;
		Period* valuePeriod;
		Timing* valueTiming;
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
	ResourceType resourceType = ResourceType::SupplyRequest_Parameter;
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	CodeableConcept* code;
	enum class ValueType {
		CodeableConcept,
		Quantity,
		Range,
		fhir_boolean
	};
	ValueType value_type;
	union {
		CodeableConcept* valueCodeableConcept;
		Quantity* valueQuantity;
		Range* valueRange;
		fhir_boolean valueBoolean;
	} value;

};
class Task {
public:
	ResourceType resourceType = ResourceType::Task;
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
	ResourceType resourceType = ResourceType::Task_Restriction;
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
	ResourceType resourceType = ResourceType::Task_Input;
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	CodeableConcept* type;
	enum class ValueType {
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
	ValueType value_type;
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
	ResourceType resourceType = ResourceType::Task_Output;
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	CodeableConcept* type;
	enum class ValueType {
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
	ValueType value_type;
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
	ResourceType resourceType = ResourceType::TerminologyCapabilities;
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
	ResourceType resourceType = ResourceType::TerminologyCapabilities_Software;
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
	ResourceType resourceType = ResourceType::TerminologyCapabilities_Implementation;
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
	ResourceType resourceType = ResourceType::TerminologyCapabilities_CodeSystem;
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
	ResourceType resourceType = ResourceType::TerminologyCapabilities_CodeSystem_Version;
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	fhir_string code;
	fhir_boolean isDefault;
	fhir_boolean compositional;
	int language_count;
	fhir_code* language;
	int filter_count;
	TerminologyCapabilities_CodeSystem_Version_Filter* filter;
	int property_count;
	fhir_code* property;
};
class TerminologyCapabilities_CodeSystem_Version_Filter {
public:
	ResourceType resourceType = ResourceType::TerminologyCapabilities_CodeSystem_Version_Filter;
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	fhir_code code;
	int op_count;
	fhir_code* op;
};
class TerminologyCapabilities_Expansion {
public:
	ResourceType resourceType = ResourceType::TerminologyCapabilities_Expansion;
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
	ResourceType resourceType = ResourceType::TerminologyCapabilities_Expansion_Parameter;
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
	ResourceType resourceType = ResourceType::TerminologyCapabilities_ValidateCode;
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	fhir_boolean translations;
};
class TerminologyCapabilities_Translation {
public:
	ResourceType resourceType = ResourceType::TerminologyCapabilities_Translation;
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	fhir_boolean needsMap;
};
class TerminologyCapabilities_Closure {
public:
	ResourceType resourceType = ResourceType::TerminologyCapabilities_Closure;
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	fhir_boolean translation;
};
class TestReport {
public:
	ResourceType resourceType = ResourceType::TestReport;
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
	ResourceType resourceType = ResourceType::TestReport_Participant;
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
	ResourceType resourceType = ResourceType::TestReport_Setup;
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
	ResourceType resourceType = ResourceType::TestReport_Setup_Action;
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
	ResourceType resourceType = ResourceType::TestReport_Setup_Action_Operation;
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
	ResourceType resourceType = ResourceType::TestReport_Setup_Action_Assert;
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
	ResourceType resourceType = ResourceType::TestReport_Test;
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
	ResourceType resourceType = ResourceType::TestReport_Test_Action;
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
	ResourceType resourceType = ResourceType::TestReport_Teardown;
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
	ResourceType resourceType = ResourceType::TestReport_Teardown_Action;
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	TestReport_Setup_Action_Operation* operation;
};
class TestScript {
public:
	ResourceType resourceType = ResourceType::TestScript;
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
	ResourceType resourceType = ResourceType::TestScript_Origin;
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	Integer* index;
	Coding* profile;
};
class TestScript_Destination {
public:
	ResourceType resourceType = ResourceType::TestScript_Destination;
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	Integer* index;
	Coding* profile;
};
class TestScript_Metadata {
public:
	ResourceType resourceType = ResourceType::TestScript_Metadata;
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
	ResourceType resourceType = ResourceType::TestScript_Metadata_Link;
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
	ResourceType resourceType = ResourceType::TestScript_Metadata_Capability;
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	fhir_boolean required;
	fhir_boolean validated;
	fhir_string description;
	int origin_count;
	Integer* origin;
	Integer* destination;
	int link_count;
	fhir_uri* link;
	fhir_canonical capabilities;
};
class TestScript_Fixture {
public:
	ResourceType resourceType = ResourceType::TestScript_Fixture;
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
	ResourceType resourceType = ResourceType::TestScript_Variable;
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
	ResourceType resourceType = ResourceType::TestScript_Setup;
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
	ResourceType resourceType = ResourceType::TestScript_Setup_Action;
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
	ResourceType resourceType = ResourceType::TestScript_Setup_Action_Operation;
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
	Integer* destination;
	fhir_boolean encodeRequestUrl;
	fhir_code method;
	Integer* origin;
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
	ResourceType resourceType = ResourceType::TestScript_Setup_Action_Operation_RequestHeader;
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
	ResourceType resourceType = ResourceType::TestScript_Setup_Action_Assert;
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
	ResourceType resourceType = ResourceType::TestScript_Test;
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
	ResourceType resourceType = ResourceType::TestScript_Test_Action;
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
	ResourceType resourceType = ResourceType::TestScript_Teardown;
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
	ResourceType resourceType = ResourceType::TestScript_Teardown_Action;
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	TestScript_Setup_Action_Operation* operation;
};
class ValueSet {
public:
	ResourceType resourceType = ResourceType::ValueSet;
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
	ResourceType resourceType = ResourceType::ValueSet_Compose;
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
	ResourceType resourceType = ResourceType::ValueSet_Compose_Include;
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
	fhir_canonical* valueSet;
};
class ValueSet_Compose_Include_Concept {
public:
	ResourceType resourceType = ResourceType::ValueSet_Compose_Include_Concept;
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
	ResourceType resourceType = ResourceType::ValueSet_Compose_Include_Concept_Designation;
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
	ResourceType resourceType = ResourceType::ValueSet_Compose_Include_Filter;
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
	ResourceType resourceType = ResourceType::ValueSet_Expansion;
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	fhir_uri identifier;
	fhir_dateTime timestamp;
	Integer* total;
	Integer* offset;
	int parameter_count;
	ValueSet_Expansion_Parameter* parameter;
	int contains_count;
	ValueSet_Expansion_Contains* contains;
};
class ValueSet_Expansion_Parameter {
public:
	ResourceType resourceType = ResourceType::ValueSet_Expansion_Parameter;
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	fhir_string name;
	enum class ValueType {
		fhir_string,
		fhir_boolean,
		Integer,
		fhir_decimal,
		fhir_uri,
		fhir_code,
		fhir_dateTime
	};
	ValueType value_type;
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
	ResourceType resourceType = ResourceType::ValueSet_Expansion_Contains;
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
	ResourceType resourceType = ResourceType::VerificationResult;
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
	fhir_string* targetLocation;
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
	ResourceType resourceType = ResourceType::VerificationResult_PrimarySource;
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
	ResourceType resourceType = ResourceType::VerificationResult_Attestation;
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
	ResourceType resourceType = ResourceType::VerificationResult_Validator;
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
	ResourceType resourceType = ResourceType::VisionPrescription;
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
	ResourceType resourceType = ResourceType::VisionPrescription_LensSpecification;
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	CodeableConcept* product;
	fhir_code eye;
	fhir_decimal sphere;
	fhir_decimal cylinder;
	Integer* axis;
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
	ResourceType resourceType = ResourceType::VisionPrescription_LensSpecification_Prism;
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
	ResourceType resourceType = ResourceType::MetadataResource;
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
	ResourceType resourceType = ResourceType::Element;
	fhir_string id;
	int extension_count;
	Extension* extension;
};
class BackboneElement {
public:
	ResourceType resourceType = ResourceType::BackboneElement;
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
};
class Integer {
public:
	ResourceType resourceType = ResourceType::Integer;
	fhir_string id;
	int extension_count;
	Extension* extension;
	fhir_unsignedInt value;
};
class Xhtml {
public:
	ResourceType resourceType = ResourceType::Xhtml;
	fhir_string id;
	
	fhir_string value;
};
class Address {
public:
	ResourceType resourceType = ResourceType::Address;
	fhir_string id;
	int extension_count;
	Extension* extension;
	fhir_code use;
	fhir_code type;
	fhir_string text;
	int line_count;
	fhir_string* line;
	fhir_string city;
	fhir_string district;
	fhir_string state;
	fhir_string postalCode;
	fhir_string country;
	Period* period;
};
class Age {
public:
	ResourceType resourceType = ResourceType::Age;
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
	ResourceType resourceType = ResourceType::Annotation;
	fhir_string id;
	int extension_count;
	Extension* extension;
	enum class AuthorType {
		Reference,
		fhir_string
	};
	AuthorType author_type;
	union {
		Reference* valueReference;
		fhir_string valueString;
	} author;

	fhir_dateTime time;
	fhir_markdown text;
};
class Attachment {
public:
	ResourceType resourceType = ResourceType::Attachment;
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
	ResourceType resourceType = ResourceType::CodeableConcept;
	fhir_string id;
	int extension_count;
	Extension* extension;
	int coding_count;
	Coding* coding;
	fhir_string text;
};
class Coding {
public:
	ResourceType resourceType = ResourceType::Coding;
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
	ResourceType resourceType = ResourceType::ContactDetail;
	fhir_string id;
	int extension_count;
	Extension* extension;
	fhir_string name;
	int telecom_count;
	ContactPoint* telecom;
};
class ContactPoint {
public:
	ResourceType resourceType = ResourceType::ContactPoint;
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
	ResourceType resourceType = ResourceType::Contributor;
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
	ResourceType resourceType = ResourceType::Count;
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
	ResourceType resourceType = ResourceType::DataRequirement;
	fhir_string id;
	int extension_count;
	Extension* extension;
	fhir_code type;
	int profile_count;
	fhir_canonical* profile;
	enum class SubjectType {
		CodeableConcept,
		Reference
	};
	SubjectType subject_type;
	union {
		CodeableConcept* valueCodeableConcept;
		Reference* valueReference;
	} subject;

	int mustSupport_count;
	fhir_string* mustSupport;
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
	ResourceType resourceType = ResourceType::DataRequirement_CodeFilter;
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
	ResourceType resourceType = ResourceType::DataRequirement_DateFilter;
	fhir_string id;
	int extension_count;
	Extension* extension;
	fhir_string path;
	fhir_string searchParam;
	enum class ValueType {
		fhir_dateTime,
		Period,
		Duration
	};
	ValueType value_type;
	union {
		fhir_dateTime valueDateTime;
		Period* valuePeriod;
		Duration* valueDuration;
	} value;

};
class DataRequirement_Sort {
public:
	ResourceType resourceType = ResourceType::DataRequirement_Sort;
	fhir_string id;
	int extension_count;
	Extension* extension;
	fhir_string path;
	fhir_code direction;
};
class Distance {
public:
	ResourceType resourceType = ResourceType::Distance;
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
	ResourceType resourceType = ResourceType::Dosage;
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	Integer* sequence;
	fhir_string text;
	int additionalInstruction_count;
	CodeableConcept* additionalInstruction;
	fhir_string patientInstruction;
	Timing* timing;
	enum class AsNeededType {
		fhir_boolean,
		CodeableConcept
	};
	AsNeededType asNeeded_type;
	union {
		fhir_boolean valueBoolean;
		CodeableConcept* valueCodeableConcept;
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
	ResourceType resourceType = ResourceType::Dosage_DoseAndRate;
	fhir_string id;
	int extension_count;
	Extension* extension;
	CodeableConcept* type;
	enum class DoseType {
		Range,
		Quantity
	};
	DoseType dose_type;
	union {
		Range* valueRange;
		Quantity* valueQuantity;
	} dose;

	enum class RateType {
		Ratio,
		Range,
		Quantity
	};
	RateType rate_type;
	union {
		Ratio* valueRatio;
		Range* valueRange;
		Quantity* valueQuantity;
	} rate;

};
class Duration {
public:
	ResourceType resourceType = ResourceType::Duration;
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
	ResourceType resourceType = ResourceType::ElementDefinition;
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	fhir_string path;
	int representation_count;
	fhir_code* representation;
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
	fhir_string* alias;
	fhir_unsignedInt min;
	fhir_string max;
	ElementDefinition_Base* base;
	fhir_uri contentReference;
	int type_count;
	ElementDefinition_Type* type;
	enum class DefaultValueType {
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
	DefaultValueType defaultValue_type;
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
	} defaultValue;

	fhir_markdown meaningWhenMissing;
	fhir_string orderMeaning;
	enum class FixedType {
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
	FixedType fixed_type;
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
	} fixed;

	enum class PatternType {
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
	PatternType pattern_type;
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
	} pattern;

	int example_count;
	ElementDefinition_Example* example;
	enum class MinValueType {
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
	MinValueType minValue_type;
	union {
		fhir_date valueDate;
		fhir_dateTime valueDateTime;
		fhir_instant valueInstant;
		fhir_time valueTime;
		fhir_decimal valueDecimal;
		Integer* valueInteger;
		fhir_positiveInt valuePositiveInt;
		fhir_unsignedInt valueUnsignedInt;
		Quantity* valueQuantity;
	} minValue;

	enum class MaxValueType {
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
	MaxValueType maxValue_type;
	union {
		fhir_date valueDate;
		fhir_dateTime valueDateTime;
		fhir_instant valueInstant;
		fhir_time valueTime;
		fhir_decimal valueDecimal;
		Integer* valueInteger;
		fhir_positiveInt valuePositiveInt;
		fhir_unsignedInt valueUnsignedInt;
		Quantity* valueQuantity;
	} maxValue;

	Integer* maxLength;
	int condition_count;
	fhir_id* condition;
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
	ResourceType resourceType = ResourceType::ElementDefinition_Slicing;
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
	ResourceType resourceType = ResourceType::ElementDefinition_Slicing_Discriminator;
	fhir_string id;
	int extension_count;
	Extension* extension;
	fhir_code type;
	fhir_string path;
};
class ElementDefinition_Base {
public:
	ResourceType resourceType = ResourceType::ElementDefinition_Base;
	fhir_string id;
	int extension_count;
	Extension* extension;
	fhir_string path;
	fhir_unsignedInt min;
	fhir_string max;
};
class ElementDefinition_Type {
public:
	ResourceType resourceType = ResourceType::ElementDefinition_Type;
	fhir_string id;
	int extension_count;
	Extension* extension;
	fhir_uri code;
	int profile_count;
	fhir_canonical* profile;
	int targetProfile_count;
	fhir_canonical* targetProfile;
	int aggregation_count;
	fhir_code* aggregation;
	fhir_code versioning;
};
class ElementDefinition_Example {
public:
	ResourceType resourceType = ResourceType::ElementDefinition_Example;
	fhir_string id;
	int extension_count;
	Extension* extension;
	fhir_string label;
	enum class ValueType {
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
	ValueType value_type;
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
	ResourceType resourceType = ResourceType::ElementDefinition_Constraint;
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
	ResourceType resourceType = ResourceType::ElementDefinition_Binding;
	fhir_string id;
	int extension_count;
	Extension* extension;
	fhir_code strength;
	fhir_string description;
	fhir_canonical valueSet;
};
class ElementDefinition_Mapping {
public:
	ResourceType resourceType = ResourceType::ElementDefinition_Mapping;
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
	ResourceType resourceType = ResourceType::Expression;
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
	ResourceType resourceType = ResourceType::Extension;
	fhir_string id;
	int extension_count;
	Extension* extension;
	fhir_string url;
	enum class ValueType {
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
	ValueType value_type;
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
	ResourceType resourceType = ResourceType::HumanName;
	fhir_string id;
	int extension_count;
	Extension* extension;
	fhir_code use;
	fhir_string text;
	fhir_string family;
	int given_count;
	fhir_string* given;
	int prefix_count;
	fhir_string* prefix;
	int suffix_count;
	fhir_string* suffix;
	Period* period;
};
class Identifier {
public:
	ResourceType resourceType = ResourceType::Identifier;
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
	ResourceType resourceType = ResourceType::MarketingStatus;
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
	ResourceType resourceType = ResourceType::Meta;
	fhir_string id;
	int extension_count;
	Extension* extension;
	fhir_id versionId;
	fhir_instant lastUpdated;
	fhir_uri source;
	int profile_count;
	fhir_canonical* profile;
	int security_count;
	Coding* security;
	int tag_count;
	Coding* tag;
};
class Money {
public:
	ResourceType resourceType = ResourceType::Money;
	fhir_string id;
	int extension_count;
	Extension* extension;
	fhir_decimal value;
	fhir_code currency;
};
class Narrative {
public:
	ResourceType resourceType = ResourceType::Narrative;
	fhir_string id;
	int extension_count;
	Extension* extension;
	fhir_code status;
	Xhtml* div;
};
class ParameterDefinition {
public:
	ResourceType resourceType = ResourceType::ParameterDefinition;
	fhir_string id;
	int extension_count;
	Extension* extension;
	fhir_code name;
	fhir_code use;
	Integer* min;
	fhir_string max;
	fhir_string documentation;
	fhir_code type;
	fhir_canonical profile;
};
class Period {
public:
	ResourceType resourceType = ResourceType::Period;
	fhir_string id;
	int extension_count;
	Extension* extension;
	fhir_dateTime start;
	fhir_dateTime end;
};
class Population {
public:
	ResourceType resourceType = ResourceType::Population;
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	enum class AgeType {
		Range,
		CodeableConcept
	};
	AgeType age_type;
	union {
		Range* valueRange;
		CodeableConcept* valueCodeableConcept;
	} age;

	CodeableConcept* gender;
	CodeableConcept* race;
	CodeableConcept* physiologicalCondition;
};
class ProdCharacteristic {
public:
	ResourceType resourceType = ResourceType::ProdCharacteristic;
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
	fhir_string* color;
	int imprint_count;
	fhir_string* imprint;
	int image_count;
	Attachment* image;
	CodeableConcept* scoring;
};
class ProductShelfLife {
public:
	ResourceType resourceType = ResourceType::ProductShelfLife;
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
	ResourceType resourceType = ResourceType::Quantity;
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
	ResourceType resourceType = ResourceType::Range;
	fhir_string id;
	int extension_count;
	Extension* extension;
	Quantity* low;
	Quantity* high;
};
class Ratio {
public:
	ResourceType resourceType = ResourceType::Ratio;
	fhir_string id;
	int extension_count;
	Extension* extension;
	Quantity* numerator;
	Quantity* denominator;
};
class Reference {
public:
	ResourceType resourceType = ResourceType::Reference;
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
	ResourceType resourceType = ResourceType::RelatedArtifact;
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
	ResourceType resourceType = ResourceType::SampledData;
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
	ResourceType resourceType = ResourceType::Signature;
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
	ResourceType resourceType = ResourceType::SubstanceAmount;
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	enum class AmountType {
		Quantity,
		Range,
		fhir_string
	};
	AmountType amount_type;
	union {
		Quantity* valueQuantity;
		Range* valueRange;
		fhir_string valueString;
	} amount;

	CodeableConcept* amountType;
	fhir_string amountText;
	SubstanceAmount_ReferenceRange* referenceRange;
};
class SubstanceAmount_ReferenceRange {
public:
	ResourceType resourceType = ResourceType::SubstanceAmount_ReferenceRange;
	fhir_string id;
	int extension_count;
	Extension* extension;
	Quantity* lowLimit;
	Quantity* highLimit;
};
class Timing {
public:
	ResourceType resourceType = ResourceType::Timing;
	fhir_string id;
	int extension_count;
	Extension* extension;
	int modifierExtension_count;
	Extension* modifierExtension;
	int event_count;
	fhir_dateTime* event;
	Timing_Repeat* repeat;
	CodeableConcept* code;
};
class Timing_Repeat {
public:
	ResourceType resourceType = ResourceType::Timing_Repeat;
	fhir_string id;
	int extension_count;
	Extension* extension;
	enum class BoundsType {
		Duration,
		Range,
		Period
	};
	BoundsType bounds_type;
	union {
		Duration* valueDuration;
		Range* valueRange;
		Period* valuePeriod;
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
	fhir_code* dayOfWeek;
	int timeOfDay_count;
	fhir_time* timeOfDay;
	int when_count;
	fhir_code* when;
	fhir_unsignedInt offset;
};
class TriggerDefinition {
public:
	ResourceType resourceType = ResourceType::TriggerDefinition;
	fhir_string id;
	int extension_count;
	Extension* extension;
	fhir_code type;
	fhir_string name;
	enum class TimingType {
		Timing,
		Reference,
		fhir_date,
		fhir_dateTime
	};
	TimingType timing_type;
	union {
		Timing* valueTiming;
		Reference* valueReference;
		fhir_date valueDate;
		fhir_dateTime valueDateTime;
	} timing;

	int data_count;
	DataRequirement* data;
	Expression* condition;
};
class UsageContext {
public:
	ResourceType resourceType = ResourceType::UsageContext;
	fhir_string id;
	int extension_count;
	Extension* extension;
	Coding* code;
	enum class ValueType {
		CodeableConcept,
		Quantity,
		Range,
		Reference
	};
	ValueType value_type;
	union {
		CodeableConcept* valueCodeableConcept;
		Quantity* valueQuantity;
		Range* valueRange;
		Reference* valueReference;
	} value;

};
class MoneyQuantity : Quantity {
public:
	ResourceType resourceType = ResourceType::MoneyQuantity;
};
class SimpleQuantity : Quantity {
public:
	ResourceType resourceType = ResourceType::SimpleQuantity;
};
class Shareablemeasure : Measure {
public:
	ResourceType resourceType = ResourceType::Shareablemeasure;
};
class Servicerequest_genetics : ServiceRequest {
public:
	ResourceType resourceType = ResourceType::Servicerequest_genetics;
};
class Groupdefinition : Group {
public:
	ResourceType resourceType = ResourceType::Groupdefinition;
};
class Actualgroup : Group {
public:
	ResourceType resourceType = ResourceType::Actualgroup;
};
class Familymemberhistory_genetic : FamilyMemberHistory {
public:
	ResourceType resourceType = ResourceType::Familymemberhistory_genetic;
};
class Shareableactivitydefinition : ActivityDefinition {
public:
	ResourceType resourceType = ResourceType::Shareableactivitydefinition;
};
class Cdshooksrequestgroup : RequestGroup {
public:
	ResourceType resourceType = ResourceType::Cdshooksrequestgroup;
};
class Provenance_relevant_history : Provenance {
public:
	ResourceType resourceType = ResourceType::Provenance_relevant_history;
};
class Cqf_questionnaire : Questionnaire {
public:
	ResourceType resourceType = ResourceType::Cqf_questionnaire;
};
class Shareablevalueset : ValueSet {
public:
	ResourceType resourceType = ResourceType::Shareablevalueset;
};
class Picoelement : EvidenceVariable {
public:
	ResourceType resourceType = ResourceType::Picoelement;
};
class Shareablecodesystem : CodeSystem {
public:
	ResourceType resourceType = ResourceType::Shareablecodesystem;
};
class Cdshooksguidanceresponse : GuidanceResponse {
public:
	ResourceType resourceType = ResourceType::Cdshooksguidanceresponse;
};
class Devicemetricobservation : Observation {
public:
	ResourceType resourceType = ResourceType::Devicemetricobservation;
};
class Observation_genetics : Observation {
public:
	ResourceType resourceType = ResourceType::Observation_genetics;
};
class Vitalsigns : Observation {
public:
	ResourceType resourceType = ResourceType::Vitalsigns;
};
class Bodyweight : Observation {
public:
	ResourceType resourceType = ResourceType::Bodyweight;
};
class Vitalspanel : Observation {
public:
	ResourceType resourceType = ResourceType::Vitalspanel;
};
class Bodyheight : Observation {
public:
	ResourceType resourceType = ResourceType::Bodyheight;
};
class Resprate : Observation {
public:
	ResourceType resourceType = ResourceType::Resprate;
};
class Heartrate : Observation {
public:
	ResourceType resourceType = ResourceType::Heartrate;
};
class Bodytemp : Observation {
public:
	ResourceType resourceType = ResourceType::Bodytemp;
};
class Headcircum : Observation {
public:
	ResourceType resourceType = ResourceType::Headcircum;
};
class Oxygensat : Observation {
public:
	ResourceType resourceType = ResourceType::Oxygensat;
};
class Bmi : Observation {
public:
	ResourceType resourceType = ResourceType::Bmi;
};
class Bp : Observation {
public:
	ResourceType resourceType = ResourceType::Bp;
};
class Shareablelibrary : Library {
public:
	ResourceType resourceType = ResourceType::Shareablelibrary;
};
class Cqllibrary : Library {
public:
	ResourceType resourceType = ResourceType::Cqllibrary;
};
class Lipidprofile : DiagnosticReport {
public:
	ResourceType resourceType = ResourceType::Lipidprofile;
};
class Cholesterol : Observation {
public:
	ResourceType resourceType = ResourceType::Cholesterol;
};
class Triglyceride : Observation {
public:
	ResourceType resourceType = ResourceType::Triglyceride;
};
class Hdlcholesterol : Observation {
public:
	ResourceType resourceType = ResourceType::Hdlcholesterol;
};
class Ldlcholesterol : Observation {
public:
	ResourceType resourceType = ResourceType::Ldlcholesterol;
};
class Diagnosticreport_genetics : DiagnosticReport {
public:
	ResourceType resourceType = ResourceType::Diagnosticreport_genetics;
};
class Hlaresult : DiagnosticReport {
public:
	ResourceType resourceType = ResourceType::Hlaresult;
};
class Synthesis : Evidence {
public:
	ResourceType resourceType = ResourceType::Synthesis;
};
class Clinicaldocument : Composition {
public:
	ResourceType resourceType = ResourceType::Clinicaldocument;
};
class Catalog : Composition {
public:
	ResourceType resourceType = ResourceType::Catalog;
};
class Shareableplandefinition : PlanDefinition {
public:
	ResourceType resourceType = ResourceType::Shareableplandefinition;
};
class Computableplandefinition : PlanDefinition {
public:
	ResourceType resourceType = ResourceType::Computableplandefinition;
};
class Cdshooksserviceplandefinition : PlanDefinition {
public:
	ResourceType resourceType = ResourceType::Cdshooksserviceplandefinition;
};
class Elementdefinition_de : ElementDefinition {
public:
	ResourceType resourceType = ResourceType::Elementdefinition_de;
};
class Ehrsrle_auditevent : AuditEvent {
public:
	ResourceType resourceType = ResourceType::Ehrsrle_auditevent;
};
class Ehrsrle_provenance : Provenance {
public:
	ResourceType resourceType = ResourceType::Ehrsrle_provenance;
};
