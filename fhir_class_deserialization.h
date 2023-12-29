#ifndef FHIR_DESERIALIZATION_H
#define FHIR_DESERIALIZATION_H
Resource*
Deserialize_Resource(Arena *arena, cJSON *resource);
Account*
Deserialize_Account(Arena *arena, cJSON *account);
Account_Coverage*
Deserialize_Account_Coverage(Arena *arena, cJSON *account_Coverage);
Account_Guarantor*
Deserialize_Account_Guarantor(Arena *arena, cJSON *account_Guarantor);
ActivityDefinition*
Deserialize_ActivityDefinition(Arena *arena, cJSON *activityDefinition);
ActivityDefinition_Participant*
Deserialize_ActivityDefinition_Participant(Arena *arena, cJSON *activityDefinition_Participant);
ActivityDefinition_DynamicValue*
Deserialize_ActivityDefinition_DynamicValue(Arena *arena, cJSON *activityDefinition_DynamicValue);
AdverseEvent*
Deserialize_AdverseEvent(Arena *arena, cJSON *adverseEvent);
AdverseEvent_SuspectEntity*
Deserialize_AdverseEvent_SuspectEntity(Arena *arena, cJSON *adverseEvent_SuspectEntity);
AdverseEvent_SuspectEntity_Causality*
Deserialize_AdverseEvent_SuspectEntity_Causality(Arena *arena, cJSON *adverseEvent_SuspectEntity_Causality);
AllergyIntolerance*
Deserialize_AllergyIntolerance(Arena *arena, cJSON *allergyIntolerance);
AllergyIntolerance_Reaction*
Deserialize_AllergyIntolerance_Reaction(Arena *arena, cJSON *allergyIntolerance_Reaction);
Appointment*
Deserialize_Appointment(Arena *arena, cJSON *appointment);
Appointment_Participant*
Deserialize_Appointment_Participant(Arena *arena, cJSON *appointment_Participant);
AppointmentResponse*
Deserialize_AppointmentResponse(Arena *arena, cJSON *appointmentResponse);
AuditEvent*
Deserialize_AuditEvent(Arena *arena, cJSON *auditEvent);
AuditEvent_Agent*
Deserialize_AuditEvent_Agent(Arena *arena, cJSON *auditEvent_Agent);
AuditEvent_Agent_Network*
Deserialize_AuditEvent_Agent_Network(Arena *arena, cJSON *auditEvent_Agent_Network);
AuditEvent_Source*
Deserialize_AuditEvent_Source(Arena *arena, cJSON *auditEvent_Source);
AuditEvent_Entity*
Deserialize_AuditEvent_Entity(Arena *arena, cJSON *auditEvent_Entity);
AuditEvent_Entity_Detail*
Deserialize_AuditEvent_Entity_Detail(Arena *arena, cJSON *auditEvent_Entity_Detail);
Basic*
Deserialize_Basic(Arena *arena, cJSON *basic);
Binary*
Deserialize_Binary(Arena *arena, cJSON *binary);
BiologicallyDerivedProduct*
Deserialize_BiologicallyDerivedProduct(Arena *arena, cJSON *biologicallyDerivedProduct);
BiologicallyDerivedProduct_Collection*
Deserialize_BiologicallyDerivedProduct_Collection(Arena *arena, cJSON *biologicallyDerivedProduct_Collection);
BiologicallyDerivedProduct_Processing*
Deserialize_BiologicallyDerivedProduct_Processing(Arena *arena, cJSON *biologicallyDerivedProduct_Processing);
BiologicallyDerivedProduct_Manipulation*
Deserialize_BiologicallyDerivedProduct_Manipulation(Arena *arena, cJSON *biologicallyDerivedProduct_Manipulation);
BiologicallyDerivedProduct_Storage*
Deserialize_BiologicallyDerivedProduct_Storage(Arena *arena, cJSON *biologicallyDerivedProduct_Storage);
BodyStructure*
Deserialize_BodyStructure(Arena *arena, cJSON *bodyStructure);
Bundle*
Deserialize_Bundle(Arena *arena, cJSON *bundle);
Bundle_Link*
Deserialize_Bundle_Link(Arena *arena, cJSON *bundle_Link);
Bundle_Entry*
Deserialize_Bundle_Entry(Arena *arena, cJSON *bundle_Entry);
Bundle_Entry_Search*
Deserialize_Bundle_Entry_Search(Arena *arena, cJSON *bundle_Entry_Search);
Bundle_Entry_Request*
Deserialize_Bundle_Entry_Request(Arena *arena, cJSON *bundle_Entry_Request);
Bundle_Entry_Response*
Deserialize_Bundle_Entry_Response(Arena *arena, cJSON *bundle_Entry_Response);
CapabilityStatement*
Deserialize_CapabilityStatement(Arena *arena, cJSON *capabilityStatement);
CapabilityStatement_Software*
Deserialize_CapabilityStatement_Software(Arena *arena, cJSON *capabilityStatement_Software);
CapabilityStatement_Implementation*
Deserialize_CapabilityStatement_Implementation(Arena *arena, cJSON *capabilityStatement_Implementation);
CapabilityStatement_Rest*
Deserialize_CapabilityStatement_Rest(Arena *arena, cJSON *capabilityStatement_Rest);
CapabilityStatement_Rest_Security*
Deserialize_CapabilityStatement_Rest_Security(Arena *arena, cJSON *capabilityStatement_Rest_Security);
CapabilityStatement_Rest_Resource*
Deserialize_CapabilityStatement_Rest_Resource(Arena *arena, cJSON *capabilityStatement_Rest_Resource);
CapabilityStatement_Rest_Resource_Interaction*
Deserialize_CapabilityStatement_Rest_Resource_Interaction(Arena *arena, cJSON *capabilityStatement_Rest_Resource_Interaction);
CapabilityStatement_Rest_Resource_SearchParam*
Deserialize_CapabilityStatement_Rest_Resource_SearchParam(Arena *arena, cJSON *capabilityStatement_Rest_Resource_SearchParam);
CapabilityStatement_Rest_Resource_Operation*
Deserialize_CapabilityStatement_Rest_Resource_Operation(Arena *arena, cJSON *capabilityStatement_Rest_Resource_Operation);
CapabilityStatement_Rest_Interaction*
Deserialize_CapabilityStatement_Rest_Interaction(Arena *arena, cJSON *capabilityStatement_Rest_Interaction);
CapabilityStatement_Messaging*
Deserialize_CapabilityStatement_Messaging(Arena *arena, cJSON *capabilityStatement_Messaging);
CapabilityStatement_Messaging_Endpoint*
Deserialize_CapabilityStatement_Messaging_Endpoint(Arena *arena, cJSON *capabilityStatement_Messaging_Endpoint);
CapabilityStatement_Messaging_SupportedMessage*
Deserialize_CapabilityStatement_Messaging_SupportedMessage(Arena *arena, cJSON *capabilityStatement_Messaging_SupportedMessage);
CapabilityStatement_Document*
Deserialize_CapabilityStatement_Document(Arena *arena, cJSON *capabilityStatement_Document);
CarePlan*
Deserialize_CarePlan(Arena *arena, cJSON *carePlan);
CarePlan_Activity*
Deserialize_CarePlan_Activity(Arena *arena, cJSON *carePlan_Activity);
CarePlan_Activity_Detail*
Deserialize_CarePlan_Activity_Detail(Arena *arena, cJSON *carePlan_Activity_Detail);
CareTeam*
Deserialize_CareTeam(Arena *arena, cJSON *careTeam);
CareTeam_Participant*
Deserialize_CareTeam_Participant(Arena *arena, cJSON *careTeam_Participant);
CatalogEntry*
Deserialize_CatalogEntry(Arena *arena, cJSON *catalogEntry);
CatalogEntry_RelatedEntry*
Deserialize_CatalogEntry_RelatedEntry(Arena *arena, cJSON *catalogEntry_RelatedEntry);
ChargeItem*
Deserialize_ChargeItem(Arena *arena, cJSON *chargeItem);
ChargeItem_Performer*
Deserialize_ChargeItem_Performer(Arena *arena, cJSON *chargeItem_Performer);
ChargeItemDefinition*
Deserialize_ChargeItemDefinition(Arena *arena, cJSON *chargeItemDefinition);
ChargeItemDefinition_Applicability*
Deserialize_ChargeItemDefinition_Applicability(Arena *arena, cJSON *chargeItemDefinition_Applicability);
ChargeItemDefinition_PropertyGroup*
Deserialize_ChargeItemDefinition_PropertyGroup(Arena *arena, cJSON *chargeItemDefinition_PropertyGroup);
ChargeItemDefinition_PropertyGroup_PriceComponent*
Deserialize_ChargeItemDefinition_PropertyGroup_PriceComponent(Arena *arena, cJSON *chargeItemDefinition_PropertyGroup_PriceComponent);
Claim*
Deserialize_Claim(Arena *arena, cJSON *claim);
Claim_Related*
Deserialize_Claim_Related(Arena *arena, cJSON *claim_Related);
Claim_Payee*
Deserialize_Claim_Payee(Arena *arena, cJSON *claim_Payee);
Claim_CareTeam*
Deserialize_Claim_CareTeam(Arena *arena, cJSON *claim_CareTeam);
Claim_SupportingInfo*
Deserialize_Claim_SupportingInfo(Arena *arena, cJSON *claim_SupportingInfo);
Claim_Diagnosis*
Deserialize_Claim_Diagnosis(Arena *arena, cJSON *claim_Diagnosis);
Claim_Procedure*
Deserialize_Claim_Procedure(Arena *arena, cJSON *claim_Procedure);
Claim_Insurance*
Deserialize_Claim_Insurance(Arena *arena, cJSON *claim_Insurance);
Claim_Accident*
Deserialize_Claim_Accident(Arena *arena, cJSON *claim_Accident);
Claim_Item*
Deserialize_Claim_Item(Arena *arena, cJSON *claim_Item);
Claim_Item_Detail*
Deserialize_Claim_Item_Detail(Arena *arena, cJSON *claim_Item_Detail);
Claim_Item_Detail_SubDetail*
Deserialize_Claim_Item_Detail_SubDetail(Arena *arena, cJSON *claim_Item_Detail_SubDetail);
ClaimResponse*
Deserialize_ClaimResponse(Arena *arena, cJSON *claimResponse);
ClaimResponse_Item*
Deserialize_ClaimResponse_Item(Arena *arena, cJSON *claimResponse_Item);
ClaimResponse_Item_Adjudication*
Deserialize_ClaimResponse_Item_Adjudication(Arena *arena, cJSON *claimResponse_Item_Adjudication);
ClaimResponse_Item_Detail*
Deserialize_ClaimResponse_Item_Detail(Arena *arena, cJSON *claimResponse_Item_Detail);
ClaimResponse_Item_Detail_SubDetail*
Deserialize_ClaimResponse_Item_Detail_SubDetail(Arena *arena, cJSON *claimResponse_Item_Detail_SubDetail);
ClaimResponse_AddItem*
Deserialize_ClaimResponse_AddItem(Arena *arena, cJSON *claimResponse_AddItem);
ClaimResponse_AddItem_Detail*
Deserialize_ClaimResponse_AddItem_Detail(Arena *arena, cJSON *claimResponse_AddItem_Detail);
ClaimResponse_AddItem_Detail_SubDetail*
Deserialize_ClaimResponse_AddItem_Detail_SubDetail(Arena *arena, cJSON *claimResponse_AddItem_Detail_SubDetail);
ClaimResponse_Total*
Deserialize_ClaimResponse_Total(Arena *arena, cJSON *claimResponse_Total);
ClaimResponse_Payment*
Deserialize_ClaimResponse_Payment(Arena *arena, cJSON *claimResponse_Payment);
ClaimResponse_ProcessNote*
Deserialize_ClaimResponse_ProcessNote(Arena *arena, cJSON *claimResponse_ProcessNote);
ClaimResponse_Insurance*
Deserialize_ClaimResponse_Insurance(Arena *arena, cJSON *claimResponse_Insurance);
ClaimResponse_Error*
Deserialize_ClaimResponse_Error(Arena *arena, cJSON *claimResponse_Error);
ClinicalImpression*
Deserialize_ClinicalImpression(Arena *arena, cJSON *clinicalImpression);
ClinicalImpression_Investigation*
Deserialize_ClinicalImpression_Investigation(Arena *arena, cJSON *clinicalImpression_Investigation);
ClinicalImpression_Finding*
Deserialize_ClinicalImpression_Finding(Arena *arena, cJSON *clinicalImpression_Finding);
CodeSystem*
Deserialize_CodeSystem(Arena *arena, cJSON *codeSystem);
CodeSystem_Filter*
Deserialize_CodeSystem_Filter(Arena *arena, cJSON *codeSystem_Filter);
CodeSystem_Property*
Deserialize_CodeSystem_Property(Arena *arena, cJSON *codeSystem_Property);
CodeSystem_Concept*
Deserialize_CodeSystem_Concept(Arena *arena, cJSON *codeSystem_Concept);
CodeSystem_Concept_Designation*
Deserialize_CodeSystem_Concept_Designation(Arena *arena, cJSON *codeSystem_Concept_Designation);
CodeSystem_Concept_Property*
Deserialize_CodeSystem_Concept_Property(Arena *arena, cJSON *codeSystem_Concept_Property);
Communication*
Deserialize_Communication(Arena *arena, cJSON *communication);
Communication_Payload*
Deserialize_Communication_Payload(Arena *arena, cJSON *communication_Payload);
CommunicationRequest*
Deserialize_CommunicationRequest(Arena *arena, cJSON *communicationRequest);
CommunicationRequest_Payload*
Deserialize_CommunicationRequest_Payload(Arena *arena, cJSON *communicationRequest_Payload);
CompartmentDefinition*
Deserialize_CompartmentDefinition(Arena *arena, cJSON *compartmentDefinition);
CompartmentDefinition_Resource*
Deserialize_CompartmentDefinition_Resource(Arena *arena, cJSON *compartmentDefinition_Resource);
Composition*
Deserialize_Composition(Arena *arena, cJSON *composition);
Composition_Attester*
Deserialize_Composition_Attester(Arena *arena, cJSON *composition_Attester);
Composition_RelatesTo*
Deserialize_Composition_RelatesTo(Arena *arena, cJSON *composition_RelatesTo);
Composition_Event*
Deserialize_Composition_Event(Arena *arena, cJSON *composition_Event);
Composition_Section*
Deserialize_Composition_Section(Arena *arena, cJSON *composition_Section);
ConceptMap*
Deserialize_ConceptMap(Arena *arena, cJSON *conceptMap);
ConceptMap_Group*
Deserialize_ConceptMap_Group(Arena *arena, cJSON *conceptMap_Group);
ConceptMap_Group_Element*
Deserialize_ConceptMap_Group_Element(Arena *arena, cJSON *conceptMap_Group_Element);
ConceptMap_Group_Element_Target*
Deserialize_ConceptMap_Group_Element_Target(Arena *arena, cJSON *conceptMap_Group_Element_Target);
ConceptMap_Group_Element_Target_DependsOn*
Deserialize_ConceptMap_Group_Element_Target_DependsOn(Arena *arena, cJSON *conceptMap_Group_Element_Target_DependsOn);
ConceptMap_Group_Unmapped*
Deserialize_ConceptMap_Group_Unmapped(Arena *arena, cJSON *conceptMap_Group_Unmapped);
Condition*
Deserialize_Condition(Arena *arena, cJSON *condition);
Condition_Stage*
Deserialize_Condition_Stage(Arena *arena, cJSON *condition_Stage);
Condition_Evidence*
Deserialize_Condition_Evidence(Arena *arena, cJSON *condition_Evidence);
Consent*
Deserialize_Consent(Arena *arena, cJSON *consent);
Consent_Policy*
Deserialize_Consent_Policy(Arena *arena, cJSON *consent_Policy);
Consent_Verification*
Deserialize_Consent_Verification(Arena *arena, cJSON *consent_Verification);
Consent_Provision*
Deserialize_Consent_Provision(Arena *arena, cJSON *consent_Provision);
Consent_Provision_Actor*
Deserialize_Consent_Provision_Actor(Arena *arena, cJSON *consent_Provision_Actor);
Consent_Provision_Data*
Deserialize_Consent_Provision_Data(Arena *arena, cJSON *consent_Provision_Data);
Contract*
Deserialize_Contract(Arena *arena, cJSON *contract);
Contract_ContentDefinition*
Deserialize_Contract_ContentDefinition(Arena *arena, cJSON *contract_ContentDefinition);
Contract_Term*
Deserialize_Contract_Term(Arena *arena, cJSON *contract_Term);
Contract_Term_SecurityLabel*
Deserialize_Contract_Term_SecurityLabel(Arena *arena, cJSON *contract_Term_SecurityLabel);
Contract_Term_Offer*
Deserialize_Contract_Term_Offer(Arena *arena, cJSON *contract_Term_Offer);
Contract_Term_Offer_Party*
Deserialize_Contract_Term_Offer_Party(Arena *arena, cJSON *contract_Term_Offer_Party);
Contract_Term_Offer_Answer*
Deserialize_Contract_Term_Offer_Answer(Arena *arena, cJSON *contract_Term_Offer_Answer);
Contract_Term_Asset*
Deserialize_Contract_Term_Asset(Arena *arena, cJSON *contract_Term_Asset);
Contract_Term_Asset_Context*
Deserialize_Contract_Term_Asset_Context(Arena *arena, cJSON *contract_Term_Asset_Context);
Contract_Term_Asset_ValuedItem*
Deserialize_Contract_Term_Asset_ValuedItem(Arena *arena, cJSON *contract_Term_Asset_ValuedItem);
Contract_Term_Action*
Deserialize_Contract_Term_Action(Arena *arena, cJSON *contract_Term_Action);
Contract_Term_Action_Subject*
Deserialize_Contract_Term_Action_Subject(Arena *arena, cJSON *contract_Term_Action_Subject);
Contract_Signer*
Deserialize_Contract_Signer(Arena *arena, cJSON *contract_Signer);
Contract_Friendly*
Deserialize_Contract_Friendly(Arena *arena, cJSON *contract_Friendly);
Contract_Legal*
Deserialize_Contract_Legal(Arena *arena, cJSON *contract_Legal);
Contract_Rule*
Deserialize_Contract_Rule(Arena *arena, cJSON *contract_Rule);
Coverage*
Deserialize_Coverage(Arena *arena, cJSON *coverage);
Coverage_Class*
Deserialize_Coverage_Class(Arena *arena, cJSON *coverage_Class);
Coverage_CostToBeneficiary*
Deserialize_Coverage_CostToBeneficiary(Arena *arena, cJSON *coverage_CostToBeneficiary);
Coverage_CostToBeneficiary_Exception*
Deserialize_Coverage_CostToBeneficiary_Exception(Arena *arena, cJSON *coverage_CostToBeneficiary_Exception);
CoverageEligibilityRequest*
Deserialize_CoverageEligibilityRequest(Arena *arena, cJSON *coverageEligibilityRequest);
CoverageEligibilityRequest_SupportingInfo*
Deserialize_CoverageEligibilityRequest_SupportingInfo(Arena *arena, cJSON *coverageEligibilityRequest_SupportingInfo);
CoverageEligibilityRequest_Insurance*
Deserialize_CoverageEligibilityRequest_Insurance(Arena *arena, cJSON *coverageEligibilityRequest_Insurance);
CoverageEligibilityRequest_Item*
Deserialize_CoverageEligibilityRequest_Item(Arena *arena, cJSON *coverageEligibilityRequest_Item);
CoverageEligibilityRequest_Item_Diagnosis*
Deserialize_CoverageEligibilityRequest_Item_Diagnosis(Arena *arena, cJSON *coverageEligibilityRequest_Item_Diagnosis);
CoverageEligibilityResponse*
Deserialize_CoverageEligibilityResponse(Arena *arena, cJSON *coverageEligibilityResponse);
CoverageEligibilityResponse_Insurance*
Deserialize_CoverageEligibilityResponse_Insurance(Arena *arena, cJSON *coverageEligibilityResponse_Insurance);
CoverageEligibilityResponse_Insurance_Item*
Deserialize_CoverageEligibilityResponse_Insurance_Item(Arena *arena, cJSON *coverageEligibilityResponse_Insurance_Item);
CoverageEligibilityResponse_Insurance_Item_Benefit*
Deserialize_CoverageEligibilityResponse_Insurance_Item_Benefit(Arena *arena, cJSON *coverageEligibilityResponse_Insurance_Item_Benefit);
CoverageEligibilityResponse_Error*
Deserialize_CoverageEligibilityResponse_Error(Arena *arena, cJSON *coverageEligibilityResponse_Error);
DetectedIssue*
Deserialize_DetectedIssue(Arena *arena, cJSON *detectedIssue);
DetectedIssue_Evidence*
Deserialize_DetectedIssue_Evidence(Arena *arena, cJSON *detectedIssue_Evidence);
DetectedIssue_Mitigation*
Deserialize_DetectedIssue_Mitigation(Arena *arena, cJSON *detectedIssue_Mitigation);
Device*
Deserialize_Device(Arena *arena, cJSON *device);
Device_UdiCarrier*
Deserialize_Device_UdiCarrier(Arena *arena, cJSON *device_UdiCarrier);
Device_DeviceName*
Deserialize_Device_DeviceName(Arena *arena, cJSON *device_DeviceName);
Device_Specialization*
Deserialize_Device_Specialization(Arena *arena, cJSON *device_Specialization);
Device_Version*
Deserialize_Device_Version(Arena *arena, cJSON *device_Version);
Device_Property*
Deserialize_Device_Property(Arena *arena, cJSON *device_Property);
DeviceDefinition*
Deserialize_DeviceDefinition(Arena *arena, cJSON *deviceDefinition);
DeviceDefinition_UdiDeviceIdentifier*
Deserialize_DeviceDefinition_UdiDeviceIdentifier(Arena *arena, cJSON *deviceDefinition_UdiDeviceIdentifier);
DeviceDefinition_DeviceName*
Deserialize_DeviceDefinition_DeviceName(Arena *arena, cJSON *deviceDefinition_DeviceName);
DeviceDefinition_Specialization*
Deserialize_DeviceDefinition_Specialization(Arena *arena, cJSON *deviceDefinition_Specialization);
DeviceDefinition_Capability*
Deserialize_DeviceDefinition_Capability(Arena *arena, cJSON *deviceDefinition_Capability);
DeviceDefinition_Property*
Deserialize_DeviceDefinition_Property(Arena *arena, cJSON *deviceDefinition_Property);
DeviceDefinition_Material*
Deserialize_DeviceDefinition_Material(Arena *arena, cJSON *deviceDefinition_Material);
DeviceMetric*
Deserialize_DeviceMetric(Arena *arena, cJSON *deviceMetric);
DeviceMetric_Calibration*
Deserialize_DeviceMetric_Calibration(Arena *arena, cJSON *deviceMetric_Calibration);
DeviceRequest*
Deserialize_DeviceRequest(Arena *arena, cJSON *deviceRequest);
DeviceRequest_Parameter*
Deserialize_DeviceRequest_Parameter(Arena *arena, cJSON *deviceRequest_Parameter);
DeviceUseStatement*
Deserialize_DeviceUseStatement(Arena *arena, cJSON *deviceUseStatement);
DiagnosticReport*
Deserialize_DiagnosticReport(Arena *arena, cJSON *diagnosticReport);
DiagnosticReport_Media*
Deserialize_DiagnosticReport_Media(Arena *arena, cJSON *diagnosticReport_Media);
DocumentManifest*
Deserialize_DocumentManifest(Arena *arena, cJSON *documentManifest);
DocumentManifest_Related*
Deserialize_DocumentManifest_Related(Arena *arena, cJSON *documentManifest_Related);
DocumentReference*
Deserialize_DocumentReference(Arena *arena, cJSON *documentReference);
DocumentReference_RelatesTo*
Deserialize_DocumentReference_RelatesTo(Arena *arena, cJSON *documentReference_RelatesTo);
DocumentReference_Content*
Deserialize_DocumentReference_Content(Arena *arena, cJSON *documentReference_Content);
DocumentReference_Context*
Deserialize_DocumentReference_Context(Arena *arena, cJSON *documentReference_Context);
DomainResource*
Deserialize_DomainResource(Arena *arena, cJSON *domainResource);
EffectEvidenceSynthesis*
Deserialize_EffectEvidenceSynthesis(Arena *arena, cJSON *effectEvidenceSynthesis);
EffectEvidenceSynthesis_SampleSize*
Deserialize_EffectEvidenceSynthesis_SampleSize(Arena *arena, cJSON *effectEvidenceSynthesis_SampleSize);
EffectEvidenceSynthesis_ResultsByExposure*
Deserialize_EffectEvidenceSynthesis_ResultsByExposure(Arena *arena, cJSON *effectEvidenceSynthesis_ResultsByExposure);
EffectEvidenceSynthesis_EffectEstimate*
Deserialize_EffectEvidenceSynthesis_EffectEstimate(Arena *arena, cJSON *effectEvidenceSynthesis_EffectEstimate);
EffectEvidenceSynthesis_EffectEstimate_PrecisionEstimate*
Deserialize_EffectEvidenceSynthesis_EffectEstimate_PrecisionEstimate(Arena *arena, cJSON *effectEvidenceSynthesis_EffectEstimate_PrecisionEstimate);
EffectEvidenceSynthesis_Certainty*
Deserialize_EffectEvidenceSynthesis_Certainty(Arena *arena, cJSON *effectEvidenceSynthesis_Certainty);
EffectEvidenceSynthesis_Certainty_CertaintySubcomponent*
Deserialize_EffectEvidenceSynthesis_Certainty_CertaintySubcomponent(Arena *arena, cJSON *effectEvidenceSynthesis_Certainty_CertaintySubcomponent);
Encounter*
Deserialize_Encounter(Arena *arena, cJSON *encounter);
Encounter_StatusHistory*
Deserialize_Encounter_StatusHistory(Arena *arena, cJSON *encounter_StatusHistory);
Encounter_ClassHistory*
Deserialize_Encounter_ClassHistory(Arena *arena, cJSON *encounter_ClassHistory);
Encounter_Participant*
Deserialize_Encounter_Participant(Arena *arena, cJSON *encounter_Participant);
Encounter_Diagnosis*
Deserialize_Encounter_Diagnosis(Arena *arena, cJSON *encounter_Diagnosis);
Encounter_Hospitalization*
Deserialize_Encounter_Hospitalization(Arena *arena, cJSON *encounter_Hospitalization);
Encounter_Location*
Deserialize_Encounter_Location(Arena *arena, cJSON *encounter_Location);
Endpoint*
Deserialize_Endpoint(Arena *arena, cJSON *endpoint);
EnrollmentRequest*
Deserialize_EnrollmentRequest(Arena *arena, cJSON *enrollmentRequest);
EnrollmentResponse*
Deserialize_EnrollmentResponse(Arena *arena, cJSON *enrollmentResponse);
EpisodeOfCare*
Deserialize_EpisodeOfCare(Arena *arena, cJSON *episodeOfCare);
EpisodeOfCare_StatusHistory*
Deserialize_EpisodeOfCare_StatusHistory(Arena *arena, cJSON *episodeOfCare_StatusHistory);
EpisodeOfCare_Diagnosis*
Deserialize_EpisodeOfCare_Diagnosis(Arena *arena, cJSON *episodeOfCare_Diagnosis);
EventDefinition*
Deserialize_EventDefinition(Arena *arena, cJSON *eventDefinition);
Evidence*
Deserialize_Evidence(Arena *arena, cJSON *evidence);
EvidenceVariable*
Deserialize_EvidenceVariable(Arena *arena, cJSON *evidenceVariable);
EvidenceVariable_Characteristic*
Deserialize_EvidenceVariable_Characteristic(Arena *arena, cJSON *evidenceVariable_Characteristic);
ExampleScenario*
Deserialize_ExampleScenario(Arena *arena, cJSON *exampleScenario);
ExampleScenario_Actor*
Deserialize_ExampleScenario_Actor(Arena *arena, cJSON *exampleScenario_Actor);
ExampleScenario_Instance*
Deserialize_ExampleScenario_Instance(Arena *arena, cJSON *exampleScenario_Instance);
ExampleScenario_Instance_Version*
Deserialize_ExampleScenario_Instance_Version(Arena *arena, cJSON *exampleScenario_Instance_Version);
ExampleScenario_Instance_ContainedInstance*
Deserialize_ExampleScenario_Instance_ContainedInstance(Arena *arena, cJSON *exampleScenario_Instance_ContainedInstance);
ExampleScenario_Process*
Deserialize_ExampleScenario_Process(Arena *arena, cJSON *exampleScenario_Process);
ExampleScenario_Process_Step*
Deserialize_ExampleScenario_Process_Step(Arena *arena, cJSON *exampleScenario_Process_Step);
ExampleScenario_Process_Step_Operation*
Deserialize_ExampleScenario_Process_Step_Operation(Arena *arena, cJSON *exampleScenario_Process_Step_Operation);
ExampleScenario_Process_Step_Alternative*
Deserialize_ExampleScenario_Process_Step_Alternative(Arena *arena, cJSON *exampleScenario_Process_Step_Alternative);
ExplanationOfBenefit*
Deserialize_ExplanationOfBenefit(Arena *arena, cJSON *explanationOfBenefit);
ExplanationOfBenefit_Related*
Deserialize_ExplanationOfBenefit_Related(Arena *arena, cJSON *explanationOfBenefit_Related);
ExplanationOfBenefit_Payee*
Deserialize_ExplanationOfBenefit_Payee(Arena *arena, cJSON *explanationOfBenefit_Payee);
ExplanationOfBenefit_CareTeam*
Deserialize_ExplanationOfBenefit_CareTeam(Arena *arena, cJSON *explanationOfBenefit_CareTeam);
ExplanationOfBenefit_SupportingInfo*
Deserialize_ExplanationOfBenefit_SupportingInfo(Arena *arena, cJSON *explanationOfBenefit_SupportingInfo);
ExplanationOfBenefit_Diagnosis*
Deserialize_ExplanationOfBenefit_Diagnosis(Arena *arena, cJSON *explanationOfBenefit_Diagnosis);
ExplanationOfBenefit_Procedure*
Deserialize_ExplanationOfBenefit_Procedure(Arena *arena, cJSON *explanationOfBenefit_Procedure);
ExplanationOfBenefit_Insurance*
Deserialize_ExplanationOfBenefit_Insurance(Arena *arena, cJSON *explanationOfBenefit_Insurance);
ExplanationOfBenefit_Accident*
Deserialize_ExplanationOfBenefit_Accident(Arena *arena, cJSON *explanationOfBenefit_Accident);
ExplanationOfBenefit_Item*
Deserialize_ExplanationOfBenefit_Item(Arena *arena, cJSON *explanationOfBenefit_Item);
ExplanationOfBenefit_Item_Adjudication*
Deserialize_ExplanationOfBenefit_Item_Adjudication(Arena *arena, cJSON *explanationOfBenefit_Item_Adjudication);
ExplanationOfBenefit_Item_Detail*
Deserialize_ExplanationOfBenefit_Item_Detail(Arena *arena, cJSON *explanationOfBenefit_Item_Detail);
ExplanationOfBenefit_Item_Detail_SubDetail*
Deserialize_ExplanationOfBenefit_Item_Detail_SubDetail(Arena *arena, cJSON *explanationOfBenefit_Item_Detail_SubDetail);
ExplanationOfBenefit_AddItem*
Deserialize_ExplanationOfBenefit_AddItem(Arena *arena, cJSON *explanationOfBenefit_AddItem);
ExplanationOfBenefit_AddItem_Detail*
Deserialize_ExplanationOfBenefit_AddItem_Detail(Arena *arena, cJSON *explanationOfBenefit_AddItem_Detail);
ExplanationOfBenefit_AddItem_Detail_SubDetail*
Deserialize_ExplanationOfBenefit_AddItem_Detail_SubDetail(Arena *arena, cJSON *explanationOfBenefit_AddItem_Detail_SubDetail);
ExplanationOfBenefit_Total*
Deserialize_ExplanationOfBenefit_Total(Arena *arena, cJSON *explanationOfBenefit_Total);
ExplanationOfBenefit_Payment*
Deserialize_ExplanationOfBenefit_Payment(Arena *arena, cJSON *explanationOfBenefit_Payment);
ExplanationOfBenefit_ProcessNote*
Deserialize_ExplanationOfBenefit_ProcessNote(Arena *arena, cJSON *explanationOfBenefit_ProcessNote);
ExplanationOfBenefit_BenefitBalance*
Deserialize_ExplanationOfBenefit_BenefitBalance(Arena *arena, cJSON *explanationOfBenefit_BenefitBalance);
ExplanationOfBenefit_BenefitBalance_Financial*
Deserialize_ExplanationOfBenefit_BenefitBalance_Financial(Arena *arena, cJSON *explanationOfBenefit_BenefitBalance_Financial);
FamilyMemberHistory*
Deserialize_FamilyMemberHistory(Arena *arena, cJSON *familyMemberHistory);
FamilyMemberHistory_Condition*
Deserialize_FamilyMemberHistory_Condition(Arena *arena, cJSON *familyMemberHistory_Condition);
Flag*
Deserialize_Flag(Arena *arena, cJSON *flag);
Goal*
Deserialize_Goal(Arena *arena, cJSON *goal);
Goal_Target*
Deserialize_Goal_Target(Arena *arena, cJSON *goal_Target);
GraphDefinition*
Deserialize_GraphDefinition(Arena *arena, cJSON *graphDefinition);
GraphDefinition_Link*
Deserialize_GraphDefinition_Link(Arena *arena, cJSON *graphDefinition_Link);
GraphDefinition_Link_Target*
Deserialize_GraphDefinition_Link_Target(Arena *arena, cJSON *graphDefinition_Link_Target);
GraphDefinition_Link_Target_Compartment*
Deserialize_GraphDefinition_Link_Target_Compartment(Arena *arena, cJSON *graphDefinition_Link_Target_Compartment);
Group*
Deserialize_Group(Arena *arena, cJSON *group);
Group_Characteristic*
Deserialize_Group_Characteristic(Arena *arena, cJSON *group_Characteristic);
Group_Member*
Deserialize_Group_Member(Arena *arena, cJSON *group_Member);
GuidanceResponse*
Deserialize_GuidanceResponse(Arena *arena, cJSON *guidanceResponse);
HealthcareService*
Deserialize_HealthcareService(Arena *arena, cJSON *healthcareService);
HealthcareService_Eligibility*
Deserialize_HealthcareService_Eligibility(Arena *arena, cJSON *healthcareService_Eligibility);
HealthcareService_AvailableTime*
Deserialize_HealthcareService_AvailableTime(Arena *arena, cJSON *healthcareService_AvailableTime);
HealthcareService_NotAvailable*
Deserialize_HealthcareService_NotAvailable(Arena *arena, cJSON *healthcareService_NotAvailable);
ImagingStudy*
Deserialize_ImagingStudy(Arena *arena, cJSON *imagingStudy);
ImagingStudy_Series*
Deserialize_ImagingStudy_Series(Arena *arena, cJSON *imagingStudy_Series);
ImagingStudy_Series_Performer*
Deserialize_ImagingStudy_Series_Performer(Arena *arena, cJSON *imagingStudy_Series_Performer);
ImagingStudy_Series_Instance*
Deserialize_ImagingStudy_Series_Instance(Arena *arena, cJSON *imagingStudy_Series_Instance);
Immunization*
Deserialize_Immunization(Arena *arena, cJSON *immunization);
Immunization_Performer*
Deserialize_Immunization_Performer(Arena *arena, cJSON *immunization_Performer);
Immunization_Education*
Deserialize_Immunization_Education(Arena *arena, cJSON *immunization_Education);
Immunization_Reaction*
Deserialize_Immunization_Reaction(Arena *arena, cJSON *immunization_Reaction);
Immunization_ProtocolApplied*
Deserialize_Immunization_ProtocolApplied(Arena *arena, cJSON *immunization_ProtocolApplied);
ImmunizationEvaluation*
Deserialize_ImmunizationEvaluation(Arena *arena, cJSON *immunizationEvaluation);
ImmunizationRecommendation*
Deserialize_ImmunizationRecommendation(Arena *arena, cJSON *immunizationRecommendation);
ImmunizationRecommendation_Recommendation*
Deserialize_ImmunizationRecommendation_Recommendation(Arena *arena, cJSON *immunizationRecommendation_Recommendation);
ImmunizationRecommendation_Recommendation_DateCriterion*
Deserialize_ImmunizationRecommendation_Recommendation_DateCriterion(Arena *arena, cJSON *immunizationRecommendation_Recommendation_DateCriterion);
ImplementationGuide*
Deserialize_ImplementationGuide(Arena *arena, cJSON *implementationGuide);
ImplementationGuide_DependsOn*
Deserialize_ImplementationGuide_DependsOn(Arena *arena, cJSON *implementationGuide_DependsOn);
ImplementationGuide_Global*
Deserialize_ImplementationGuide_Global(Arena *arena, cJSON *implementationGuide_Global);
ImplementationGuide_Definition*
Deserialize_ImplementationGuide_Definition(Arena *arena, cJSON *implementationGuide_Definition);
ImplementationGuide_Definition_Grouping*
Deserialize_ImplementationGuide_Definition_Grouping(Arena *arena, cJSON *implementationGuide_Definition_Grouping);
ImplementationGuide_Definition_Resource*
Deserialize_ImplementationGuide_Definition_Resource(Arena *arena, cJSON *implementationGuide_Definition_Resource);
ImplementationGuide_Definition_Page*
Deserialize_ImplementationGuide_Definition_Page(Arena *arena, cJSON *implementationGuide_Definition_Page);
ImplementationGuide_Definition_Parameter*
Deserialize_ImplementationGuide_Definition_Parameter(Arena *arena, cJSON *implementationGuide_Definition_Parameter);
ImplementationGuide_Definition_Template*
Deserialize_ImplementationGuide_Definition_Template(Arena *arena, cJSON *implementationGuide_Definition_Template);
ImplementationGuide_Manifest*
Deserialize_ImplementationGuide_Manifest(Arena *arena, cJSON *implementationGuide_Manifest);
ImplementationGuide_Manifest_Resource*
Deserialize_ImplementationGuide_Manifest_Resource(Arena *arena, cJSON *implementationGuide_Manifest_Resource);
ImplementationGuide_Manifest_Page*
Deserialize_ImplementationGuide_Manifest_Page(Arena *arena, cJSON *implementationGuide_Manifest_Page);
InsurancePlan*
Deserialize_InsurancePlan(Arena *arena, cJSON *insurancePlan);
InsurancePlan_Contact*
Deserialize_InsurancePlan_Contact(Arena *arena, cJSON *insurancePlan_Contact);
InsurancePlan_Coverage*
Deserialize_InsurancePlan_Coverage(Arena *arena, cJSON *insurancePlan_Coverage);
InsurancePlan_Coverage_Benefit*
Deserialize_InsurancePlan_Coverage_Benefit(Arena *arena, cJSON *insurancePlan_Coverage_Benefit);
InsurancePlan_Coverage_Benefit_Limit*
Deserialize_InsurancePlan_Coverage_Benefit_Limit(Arena *arena, cJSON *insurancePlan_Coverage_Benefit_Limit);
InsurancePlan_Plan*
Deserialize_InsurancePlan_Plan(Arena *arena, cJSON *insurancePlan_Plan);
InsurancePlan_Plan_GeneralCost*
Deserialize_InsurancePlan_Plan_GeneralCost(Arena *arena, cJSON *insurancePlan_Plan_GeneralCost);
InsurancePlan_Plan_SpecificCost*
Deserialize_InsurancePlan_Plan_SpecificCost(Arena *arena, cJSON *insurancePlan_Plan_SpecificCost);
InsurancePlan_Plan_SpecificCost_Benefit*
Deserialize_InsurancePlan_Plan_SpecificCost_Benefit(Arena *arena, cJSON *insurancePlan_Plan_SpecificCost_Benefit);
InsurancePlan_Plan_SpecificCost_Benefit_Cost*
Deserialize_InsurancePlan_Plan_SpecificCost_Benefit_Cost(Arena *arena, cJSON *insurancePlan_Plan_SpecificCost_Benefit_Cost);
Invoice*
Deserialize_Invoice(Arena *arena, cJSON *invoice);
Invoice_Participant*
Deserialize_Invoice_Participant(Arena *arena, cJSON *invoice_Participant);
Invoice_LineItem*
Deserialize_Invoice_LineItem(Arena *arena, cJSON *invoice_LineItem);
Invoice_LineItem_PriceComponent*
Deserialize_Invoice_LineItem_PriceComponent(Arena *arena, cJSON *invoice_LineItem_PriceComponent);
Library*
Deserialize_Library(Arena *arena, cJSON *library);
Linkage*
Deserialize_Linkage(Arena *arena, cJSON *linkage);
Linkage_Item*
Deserialize_Linkage_Item(Arena *arena, cJSON *linkage_Item);
List*
Deserialize_List(Arena *arena, cJSON *list);
List_Entry*
Deserialize_List_Entry(Arena *arena, cJSON *list_Entry);
Location*
Deserialize_Location(Arena *arena, cJSON *location);
Location_Position*
Deserialize_Location_Position(Arena *arena, cJSON *location_Position);
Location_HoursOfOperation*
Deserialize_Location_HoursOfOperation(Arena *arena, cJSON *location_HoursOfOperation);
Measure*
Deserialize_Measure(Arena *arena, cJSON *measure);
Measure_Group*
Deserialize_Measure_Group(Arena *arena, cJSON *measure_Group);
Measure_Group_Population*
Deserialize_Measure_Group_Population(Arena *arena, cJSON *measure_Group_Population);
Measure_Group_Stratifier*
Deserialize_Measure_Group_Stratifier(Arena *arena, cJSON *measure_Group_Stratifier);
Measure_Group_Stratifier_Component*
Deserialize_Measure_Group_Stratifier_Component(Arena *arena, cJSON *measure_Group_Stratifier_Component);
Measure_SupplementalData*
Deserialize_Measure_SupplementalData(Arena *arena, cJSON *measure_SupplementalData);
MeasureReport*
Deserialize_MeasureReport(Arena *arena, cJSON *measureReport);
MeasureReport_Group*
Deserialize_MeasureReport_Group(Arena *arena, cJSON *measureReport_Group);
MeasureReport_Group_Population*
Deserialize_MeasureReport_Group_Population(Arena *arena, cJSON *measureReport_Group_Population);
MeasureReport_Group_Stratifier*
Deserialize_MeasureReport_Group_Stratifier(Arena *arena, cJSON *measureReport_Group_Stratifier);
MeasureReport_Group_Stratifier_Stratum*
Deserialize_MeasureReport_Group_Stratifier_Stratum(Arena *arena, cJSON *measureReport_Group_Stratifier_Stratum);
MeasureReport_Group_Stratifier_Stratum_Component*
Deserialize_MeasureReport_Group_Stratifier_Stratum_Component(Arena *arena, cJSON *measureReport_Group_Stratifier_Stratum_Component);
MeasureReport_Group_Stratifier_Stratum_Population*
Deserialize_MeasureReport_Group_Stratifier_Stratum_Population(Arena *arena, cJSON *measureReport_Group_Stratifier_Stratum_Population);
Media*
Deserialize_Media(Arena *arena, cJSON *media);
Medication*
Deserialize_Medication(Arena *arena, cJSON *medication);
Medication_Ingredient*
Deserialize_Medication_Ingredient(Arena *arena, cJSON *medication_Ingredient);
Medication_Batch*
Deserialize_Medication_Batch(Arena *arena, cJSON *medication_Batch);
MedicationAdministration*
Deserialize_MedicationAdministration(Arena *arena, cJSON *medicationAdministration);
MedicationAdministration_Performer*
Deserialize_MedicationAdministration_Performer(Arena *arena, cJSON *medicationAdministration_Performer);
MedicationAdministration_Dosage*
Deserialize_MedicationAdministration_Dosage(Arena *arena, cJSON *medicationAdministration_Dosage);
MedicationDispense*
Deserialize_MedicationDispense(Arena *arena, cJSON *medicationDispense);
MedicationDispense_Performer*
Deserialize_MedicationDispense_Performer(Arena *arena, cJSON *medicationDispense_Performer);
MedicationDispense_Substitution*
Deserialize_MedicationDispense_Substitution(Arena *arena, cJSON *medicationDispense_Substitution);
MedicationKnowledge*
Deserialize_MedicationKnowledge(Arena *arena, cJSON *medicationKnowledge);
MedicationKnowledge_RelatedMedicationKnowledge*
Deserialize_MedicationKnowledge_RelatedMedicationKnowledge(Arena *arena, cJSON *medicationKnowledge_RelatedMedicationKnowledge);
MedicationKnowledge_Monograph*
Deserialize_MedicationKnowledge_Monograph(Arena *arena, cJSON *medicationKnowledge_Monograph);
MedicationKnowledge_Ingredient*
Deserialize_MedicationKnowledge_Ingredient(Arena *arena, cJSON *medicationKnowledge_Ingredient);
MedicationKnowledge_Cost*
Deserialize_MedicationKnowledge_Cost(Arena *arena, cJSON *medicationKnowledge_Cost);
MedicationKnowledge_MonitoringProgram*
Deserialize_MedicationKnowledge_MonitoringProgram(Arena *arena, cJSON *medicationKnowledge_MonitoringProgram);
MedicationKnowledge_AdministrationGuidelines*
Deserialize_MedicationKnowledge_AdministrationGuidelines(Arena *arena, cJSON *medicationKnowledge_AdministrationGuidelines);
MedicationKnowledge_AdministrationGuidelines_Dosage*
Deserialize_MedicationKnowledge_AdministrationGuidelines_Dosage(Arena *arena, cJSON *medicationKnowledge_AdministrationGuidelines_Dosage);
MedicationKnowledge_AdministrationGuidelines_PatientCharacteristics*
Deserialize_MedicationKnowledge_AdministrationGuidelines_PatientCharacteristics(Arena *arena, cJSON *medicationKnowledge_AdministrationGuidelines_PatientCharacteristics);
MedicationKnowledge_MedicineClassification*
Deserialize_MedicationKnowledge_MedicineClassification(Arena *arena, cJSON *medicationKnowledge_MedicineClassification);
MedicationKnowledge_Packaging*
Deserialize_MedicationKnowledge_Packaging(Arena *arena, cJSON *medicationKnowledge_Packaging);
MedicationKnowledge_DrugCharacteristic*
Deserialize_MedicationKnowledge_DrugCharacteristic(Arena *arena, cJSON *medicationKnowledge_DrugCharacteristic);
MedicationKnowledge_Regulatory*
Deserialize_MedicationKnowledge_Regulatory(Arena *arena, cJSON *medicationKnowledge_Regulatory);
MedicationKnowledge_Regulatory_Substitution*
Deserialize_MedicationKnowledge_Regulatory_Substitution(Arena *arena, cJSON *medicationKnowledge_Regulatory_Substitution);
MedicationKnowledge_Regulatory_Schedule*
Deserialize_MedicationKnowledge_Regulatory_Schedule(Arena *arena, cJSON *medicationKnowledge_Regulatory_Schedule);
MedicationKnowledge_Regulatory_MaxDispense*
Deserialize_MedicationKnowledge_Regulatory_MaxDispense(Arena *arena, cJSON *medicationKnowledge_Regulatory_MaxDispense);
MedicationKnowledge_Kinetics*
Deserialize_MedicationKnowledge_Kinetics(Arena *arena, cJSON *medicationKnowledge_Kinetics);
MedicationRequest*
Deserialize_MedicationRequest(Arena *arena, cJSON *medicationRequest);
MedicationRequest_DispenseRequest*
Deserialize_MedicationRequest_DispenseRequest(Arena *arena, cJSON *medicationRequest_DispenseRequest);
MedicationRequest_DispenseRequest_InitialFill*
Deserialize_MedicationRequest_DispenseRequest_InitialFill(Arena *arena, cJSON *medicationRequest_DispenseRequest_InitialFill);
MedicationRequest_Substitution*
Deserialize_MedicationRequest_Substitution(Arena *arena, cJSON *medicationRequest_Substitution);
MedicationStatement*
Deserialize_MedicationStatement(Arena *arena, cJSON *medicationStatement);
MedicinalProduct*
Deserialize_MedicinalProduct(Arena *arena, cJSON *medicinalProduct);
MedicinalProduct_Name*
Deserialize_MedicinalProduct_Name(Arena *arena, cJSON *medicinalProduct_Name);
MedicinalProduct_Name_NamePart*
Deserialize_MedicinalProduct_Name_NamePart(Arena *arena, cJSON *medicinalProduct_Name_NamePart);
MedicinalProduct_Name_CountryLanguage*
Deserialize_MedicinalProduct_Name_CountryLanguage(Arena *arena, cJSON *medicinalProduct_Name_CountryLanguage);
MedicinalProduct_ManufacturingBusinessOperation*
Deserialize_MedicinalProduct_ManufacturingBusinessOperation(Arena *arena, cJSON *medicinalProduct_ManufacturingBusinessOperation);
MedicinalProduct_SpecialDesignation*
Deserialize_MedicinalProduct_SpecialDesignation(Arena *arena, cJSON *medicinalProduct_SpecialDesignation);
MedicinalProductAuthorization*
Deserialize_MedicinalProductAuthorization(Arena *arena, cJSON *medicinalProductAuthorization);
MedicinalProductAuthorization_JurisdictionalAuthorization*
Deserialize_MedicinalProductAuthorization_JurisdictionalAuthorization(Arena *arena, cJSON *medicinalProductAuthorization_JurisdictionalAuthorization);
MedicinalProductAuthorization_Procedure*
Deserialize_MedicinalProductAuthorization_Procedure(Arena *arena, cJSON *medicinalProductAuthorization_Procedure);
MedicinalProductContraindication*
Deserialize_MedicinalProductContraindication(Arena *arena, cJSON *medicinalProductContraindication);
MedicinalProductContraindication_OtherTherapy*
Deserialize_MedicinalProductContraindication_OtherTherapy(Arena *arena, cJSON *medicinalProductContraindication_OtherTherapy);
MedicinalProductIndication*
Deserialize_MedicinalProductIndication(Arena *arena, cJSON *medicinalProductIndication);
MedicinalProductIndication_OtherTherapy*
Deserialize_MedicinalProductIndication_OtherTherapy(Arena *arena, cJSON *medicinalProductIndication_OtherTherapy);
MedicinalProductIngredient*
Deserialize_MedicinalProductIngredient(Arena *arena, cJSON *medicinalProductIngredient);
MedicinalProductIngredient_SpecifiedSubstance*
Deserialize_MedicinalProductIngredient_SpecifiedSubstance(Arena *arena, cJSON *medicinalProductIngredient_SpecifiedSubstance);
MedicinalProductIngredient_SpecifiedSubstance_Strength*
Deserialize_MedicinalProductIngredient_SpecifiedSubstance_Strength(Arena *arena, cJSON *medicinalProductIngredient_SpecifiedSubstance_Strength);
MedicinalProductIngredient_SpecifiedSubstance_Strength_ReferenceStrength*
Deserialize_MedicinalProductIngredient_SpecifiedSubstance_Strength_ReferenceStrength(Arena *arena, cJSON *medicinalProductIngredient_SpecifiedSubstance_Strength_ReferenceStrength);
MedicinalProductIngredient_Substance*
Deserialize_MedicinalProductIngredient_Substance(Arena *arena, cJSON *medicinalProductIngredient_Substance);
MedicinalProductInteraction*
Deserialize_MedicinalProductInteraction(Arena *arena, cJSON *medicinalProductInteraction);
MedicinalProductInteraction_Interactant*
Deserialize_MedicinalProductInteraction_Interactant(Arena *arena, cJSON *medicinalProductInteraction_Interactant);
MedicinalProductManufactured*
Deserialize_MedicinalProductManufactured(Arena *arena, cJSON *medicinalProductManufactured);
MedicinalProductPackaged*
Deserialize_MedicinalProductPackaged(Arena *arena, cJSON *medicinalProductPackaged);
MedicinalProductPackaged_BatchIdentifier*
Deserialize_MedicinalProductPackaged_BatchIdentifier(Arena *arena, cJSON *medicinalProductPackaged_BatchIdentifier);
MedicinalProductPackaged_PackageItem*
Deserialize_MedicinalProductPackaged_PackageItem(Arena *arena, cJSON *medicinalProductPackaged_PackageItem);
MedicinalProductPharmaceutical*
Deserialize_MedicinalProductPharmaceutical(Arena *arena, cJSON *medicinalProductPharmaceutical);
MedicinalProductPharmaceutical_Characteristics*
Deserialize_MedicinalProductPharmaceutical_Characteristics(Arena *arena, cJSON *medicinalProductPharmaceutical_Characteristics);
MedicinalProductPharmaceutical_RouteOfAdministration*
Deserialize_MedicinalProductPharmaceutical_RouteOfAdministration(Arena *arena, cJSON *medicinalProductPharmaceutical_RouteOfAdministration);
MedicinalProductPharmaceutical_RouteOfAdministration_TargetSpecies*
Deserialize_MedicinalProductPharmaceutical_RouteOfAdministration_TargetSpecies(Arena *arena, cJSON *medicinalProductPharmaceutical_RouteOfAdministration_TargetSpecies);
MedicinalProductPharmaceutical_RouteOfAdministration_TargetSpecies_WithdrawalPeriod*
Deserialize_MedicinalProductPharmaceutical_RouteOfAdministration_TargetSpecies_WithdrawalPeriod(Arena *arena, cJSON *medicinalProductPharmaceutical_RouteOfAdministration_TargetSpecies_WithdrawalPeriod);
MedicinalProductUndesirableEffect*
Deserialize_MedicinalProductUndesirableEffect(Arena *arena, cJSON *medicinalProductUndesirableEffect);
MessageDefinition*
Deserialize_MessageDefinition(Arena *arena, cJSON *messageDefinition);
MessageDefinition_Focus*
Deserialize_MessageDefinition_Focus(Arena *arena, cJSON *messageDefinition_Focus);
MessageDefinition_AllowedResponse*
Deserialize_MessageDefinition_AllowedResponse(Arena *arena, cJSON *messageDefinition_AllowedResponse);
MessageHeader*
Deserialize_MessageHeader(Arena *arena, cJSON *messageHeader);
MessageHeader_Destination*
Deserialize_MessageHeader_Destination(Arena *arena, cJSON *messageHeader_Destination);
MessageHeader_Source*
Deserialize_MessageHeader_Source(Arena *arena, cJSON *messageHeader_Source);
MessageHeader_Response*
Deserialize_MessageHeader_Response(Arena *arena, cJSON *messageHeader_Response);
MolecularSequence*
Deserialize_MolecularSequence(Arena *arena, cJSON *molecularSequence);
MolecularSequence_ReferenceSeq*
Deserialize_MolecularSequence_ReferenceSeq(Arena *arena, cJSON *molecularSequence_ReferenceSeq);
MolecularSequence_Variant*
Deserialize_MolecularSequence_Variant(Arena *arena, cJSON *molecularSequence_Variant);
MolecularSequence_Quality*
Deserialize_MolecularSequence_Quality(Arena *arena, cJSON *molecularSequence_Quality);
MolecularSequence_Quality_Roc*
Deserialize_MolecularSequence_Quality_Roc(Arena *arena, cJSON *molecularSequence_Quality_Roc);
MolecularSequence_Repository*
Deserialize_MolecularSequence_Repository(Arena *arena, cJSON *molecularSequence_Repository);
MolecularSequence_StructureVariant*
Deserialize_MolecularSequence_StructureVariant(Arena *arena, cJSON *molecularSequence_StructureVariant);
MolecularSequence_StructureVariant_Outer*
Deserialize_MolecularSequence_StructureVariant_Outer(Arena *arena, cJSON *molecularSequence_StructureVariant_Outer);
MolecularSequence_StructureVariant_Inner*
Deserialize_MolecularSequence_StructureVariant_Inner(Arena *arena, cJSON *molecularSequence_StructureVariant_Inner);
NamingSystem*
Deserialize_NamingSystem(Arena *arena, cJSON *namingSystem);
NamingSystem_UniqueId*
Deserialize_NamingSystem_UniqueId(Arena *arena, cJSON *namingSystem_UniqueId);
NutritionOrder*
Deserialize_NutritionOrder(Arena *arena, cJSON *nutritionOrder);
NutritionOrder_OralDiet*
Deserialize_NutritionOrder_OralDiet(Arena *arena, cJSON *nutritionOrder_OralDiet);
NutritionOrder_OralDiet_Nutrient*
Deserialize_NutritionOrder_OralDiet_Nutrient(Arena *arena, cJSON *nutritionOrder_OralDiet_Nutrient);
NutritionOrder_OralDiet_Texture*
Deserialize_NutritionOrder_OralDiet_Texture(Arena *arena, cJSON *nutritionOrder_OralDiet_Texture);
NutritionOrder_Supplement*
Deserialize_NutritionOrder_Supplement(Arena *arena, cJSON *nutritionOrder_Supplement);
NutritionOrder_EnteralFormula*
Deserialize_NutritionOrder_EnteralFormula(Arena *arena, cJSON *nutritionOrder_EnteralFormula);
NutritionOrder_EnteralFormula_Administration*
Deserialize_NutritionOrder_EnteralFormula_Administration(Arena *arena, cJSON *nutritionOrder_EnteralFormula_Administration);
Observation*
Deserialize_Observation(Arena *arena, cJSON *observation);
Observation_ReferenceRange*
Deserialize_Observation_ReferenceRange(Arena *arena, cJSON *observation_ReferenceRange);
Observation_Component*
Deserialize_Observation_Component(Arena *arena, cJSON *observation_Component);
ObservationDefinition*
Deserialize_ObservationDefinition(Arena *arena, cJSON *observationDefinition);
ObservationDefinition_QuantitativeDetails*
Deserialize_ObservationDefinition_QuantitativeDetails(Arena *arena, cJSON *observationDefinition_QuantitativeDetails);
ObservationDefinition_QualifiedInterval*
Deserialize_ObservationDefinition_QualifiedInterval(Arena *arena, cJSON *observationDefinition_QualifiedInterval);
OperationDefinition*
Deserialize_OperationDefinition(Arena *arena, cJSON *operationDefinition);
OperationDefinition_Parameter*
Deserialize_OperationDefinition_Parameter(Arena *arena, cJSON *operationDefinition_Parameter);
OperationDefinition_Parameter_Binding*
Deserialize_OperationDefinition_Parameter_Binding(Arena *arena, cJSON *operationDefinition_Parameter_Binding);
OperationDefinition_Parameter_ReferencedFrom*
Deserialize_OperationDefinition_Parameter_ReferencedFrom(Arena *arena, cJSON *operationDefinition_Parameter_ReferencedFrom);
OperationDefinition_Overload*
Deserialize_OperationDefinition_Overload(Arena *arena, cJSON *operationDefinition_Overload);
OperationOutcome*
Deserialize_OperationOutcome(Arena *arena, cJSON *operationOutcome);
OperationOutcome_Issue*
Deserialize_OperationOutcome_Issue(Arena *arena, cJSON *operationOutcome_Issue);
Organization*
Deserialize_Organization(Arena *arena, cJSON *organization);
Organization_Contact*
Deserialize_Organization_Contact(Arena *arena, cJSON *organization_Contact);
OrganizationAffiliation*
Deserialize_OrganizationAffiliation(Arena *arena, cJSON *organizationAffiliation);
Parameters*
Deserialize_Parameters(Arena *arena, cJSON *parameters);
Parameters_Parameter*
Deserialize_Parameters_Parameter(Arena *arena, cJSON *parameters_Parameter);
Patient*
Deserialize_Patient(Arena *arena, cJSON *patient);
Patient_Contact*
Deserialize_Patient_Contact(Arena *arena, cJSON *patient_Contact);
Patient_Communication*
Deserialize_Patient_Communication(Arena *arena, cJSON *patient_Communication);
Patient_Link*
Deserialize_Patient_Link(Arena *arena, cJSON *patient_Link);
PaymentNotice*
Deserialize_PaymentNotice(Arena *arena, cJSON *paymentNotice);
PaymentReconciliation*
Deserialize_PaymentReconciliation(Arena *arena, cJSON *paymentReconciliation);
PaymentReconciliation_Detail*
Deserialize_PaymentReconciliation_Detail(Arena *arena, cJSON *paymentReconciliation_Detail);
PaymentReconciliation_ProcessNote*
Deserialize_PaymentReconciliation_ProcessNote(Arena *arena, cJSON *paymentReconciliation_ProcessNote);
Person*
Deserialize_Person(Arena *arena, cJSON *person);
Person_Link*
Deserialize_Person_Link(Arena *arena, cJSON *person_Link);
PlanDefinition*
Deserialize_PlanDefinition(Arena *arena, cJSON *planDefinition);
PlanDefinition_Goal*
Deserialize_PlanDefinition_Goal(Arena *arena, cJSON *planDefinition_Goal);
PlanDefinition_Goal_Target*
Deserialize_PlanDefinition_Goal_Target(Arena *arena, cJSON *planDefinition_Goal_Target);
PlanDefinition_Action*
Deserialize_PlanDefinition_Action(Arena *arena, cJSON *planDefinition_Action);
PlanDefinition_Action_Condition*
Deserialize_PlanDefinition_Action_Condition(Arena *arena, cJSON *planDefinition_Action_Condition);
PlanDefinition_Action_RelatedAction*
Deserialize_PlanDefinition_Action_RelatedAction(Arena *arena, cJSON *planDefinition_Action_RelatedAction);
PlanDefinition_Action_Participant*
Deserialize_PlanDefinition_Action_Participant(Arena *arena, cJSON *planDefinition_Action_Participant);
PlanDefinition_Action_DynamicValue*
Deserialize_PlanDefinition_Action_DynamicValue(Arena *arena, cJSON *planDefinition_Action_DynamicValue);
Practitioner*
Deserialize_Practitioner(Arena *arena, cJSON *practitioner);
Practitioner_Qualification*
Deserialize_Practitioner_Qualification(Arena *arena, cJSON *practitioner_Qualification);
PractitionerRole*
Deserialize_PractitionerRole(Arena *arena, cJSON *practitionerRole);
PractitionerRole_AvailableTime*
Deserialize_PractitionerRole_AvailableTime(Arena *arena, cJSON *practitionerRole_AvailableTime);
PractitionerRole_NotAvailable*
Deserialize_PractitionerRole_NotAvailable(Arena *arena, cJSON *practitionerRole_NotAvailable);
Procedure*
Deserialize_Procedure(Arena *arena, cJSON *procedure);
Procedure_Performer*
Deserialize_Procedure_Performer(Arena *arena, cJSON *procedure_Performer);
Procedure_FocalDevice*
Deserialize_Procedure_FocalDevice(Arena *arena, cJSON *procedure_FocalDevice);
Provenance*
Deserialize_Provenance(Arena *arena, cJSON *provenance);
Provenance_Agent*
Deserialize_Provenance_Agent(Arena *arena, cJSON *provenance_Agent);
Provenance_Entity*
Deserialize_Provenance_Entity(Arena *arena, cJSON *provenance_Entity);
Questionnaire*
Deserialize_Questionnaire(Arena *arena, cJSON *questionnaire);
Questionnaire_Item*
Deserialize_Questionnaire_Item(Arena *arena, cJSON *questionnaire_Item);
Questionnaire_Item_EnableWhen*
Deserialize_Questionnaire_Item_EnableWhen(Arena *arena, cJSON *questionnaire_Item_EnableWhen);
Questionnaire_Item_AnswerOption*
Deserialize_Questionnaire_Item_AnswerOption(Arena *arena, cJSON *questionnaire_Item_AnswerOption);
Questionnaire_Item_Initial*
Deserialize_Questionnaire_Item_Initial(Arena *arena, cJSON *questionnaire_Item_Initial);
QuestionnaireResponse*
Deserialize_QuestionnaireResponse(Arena *arena, cJSON *questionnaireResponse);
QuestionnaireResponse_Item*
Deserialize_QuestionnaireResponse_Item(Arena *arena, cJSON *questionnaireResponse_Item);
QuestionnaireResponse_Item_Answer*
Deserialize_QuestionnaireResponse_Item_Answer(Arena *arena, cJSON *questionnaireResponse_Item_Answer);
RelatedPerson*
Deserialize_RelatedPerson(Arena *arena, cJSON *relatedPerson);
RelatedPerson_Communication*
Deserialize_RelatedPerson_Communication(Arena *arena, cJSON *relatedPerson_Communication);
RequestGroup*
Deserialize_RequestGroup(Arena *arena, cJSON *requestGroup);
RequestGroup_Action*
Deserialize_RequestGroup_Action(Arena *arena, cJSON *requestGroup_Action);
RequestGroup_Action_Condition*
Deserialize_RequestGroup_Action_Condition(Arena *arena, cJSON *requestGroup_Action_Condition);
RequestGroup_Action_RelatedAction*
Deserialize_RequestGroup_Action_RelatedAction(Arena *arena, cJSON *requestGroup_Action_RelatedAction);
ResearchDefinition*
Deserialize_ResearchDefinition(Arena *arena, cJSON *researchDefinition);
ResearchElementDefinition*
Deserialize_ResearchElementDefinition(Arena *arena, cJSON *researchElementDefinition);
ResearchElementDefinition_Characteristic*
Deserialize_ResearchElementDefinition_Characteristic(Arena *arena, cJSON *researchElementDefinition_Characteristic);
ResearchStudy*
Deserialize_ResearchStudy(Arena *arena, cJSON *researchStudy);
ResearchStudy_Arm*
Deserialize_ResearchStudy_Arm(Arena *arena, cJSON *researchStudy_Arm);
ResearchStudy_Objective*
Deserialize_ResearchStudy_Objective(Arena *arena, cJSON *researchStudy_Objective);
ResearchSubject*
Deserialize_ResearchSubject(Arena *arena, cJSON *researchSubject);
RiskAssessment*
Deserialize_RiskAssessment(Arena *arena, cJSON *riskAssessment);
RiskAssessment_Prediction*
Deserialize_RiskAssessment_Prediction(Arena *arena, cJSON *riskAssessment_Prediction);
RiskEvidenceSynthesis*
Deserialize_RiskEvidenceSynthesis(Arena *arena, cJSON *riskEvidenceSynthesis);
RiskEvidenceSynthesis_SampleSize*
Deserialize_RiskEvidenceSynthesis_SampleSize(Arena *arena, cJSON *riskEvidenceSynthesis_SampleSize);
RiskEvidenceSynthesis_RiskEstimate*
Deserialize_RiskEvidenceSynthesis_RiskEstimate(Arena *arena, cJSON *riskEvidenceSynthesis_RiskEstimate);
RiskEvidenceSynthesis_RiskEstimate_PrecisionEstimate*
Deserialize_RiskEvidenceSynthesis_RiskEstimate_PrecisionEstimate(Arena *arena, cJSON *riskEvidenceSynthesis_RiskEstimate_PrecisionEstimate);
RiskEvidenceSynthesis_Certainty*
Deserialize_RiskEvidenceSynthesis_Certainty(Arena *arena, cJSON *riskEvidenceSynthesis_Certainty);
RiskEvidenceSynthesis_Certainty_CertaintySubcomponent*
Deserialize_RiskEvidenceSynthesis_Certainty_CertaintySubcomponent(Arena *arena, cJSON *riskEvidenceSynthesis_Certainty_CertaintySubcomponent);
Schedule*
Deserialize_Schedule(Arena *arena, cJSON *schedule);
SearchParameter*
Deserialize_SearchParameter(Arena *arena, cJSON *searchParameter);
SearchParameter_Component*
Deserialize_SearchParameter_Component(Arena *arena, cJSON *searchParameter_Component);
ServiceRequest*
Deserialize_ServiceRequest(Arena *arena, cJSON *serviceRequest);
Slot*
Deserialize_Slot(Arena *arena, cJSON *slot);
Specimen*
Deserialize_Specimen(Arena *arena, cJSON *specimen);
Specimen_Collection*
Deserialize_Specimen_Collection(Arena *arena, cJSON *specimen_Collection);
Specimen_Processing*
Deserialize_Specimen_Processing(Arena *arena, cJSON *specimen_Processing);
Specimen_Container*
Deserialize_Specimen_Container(Arena *arena, cJSON *specimen_Container);
SpecimenDefinition*
Deserialize_SpecimenDefinition(Arena *arena, cJSON *specimenDefinition);
SpecimenDefinition_TypeTested*
Deserialize_SpecimenDefinition_TypeTested(Arena *arena, cJSON *specimenDefinition_TypeTested);
SpecimenDefinition_TypeTested_Container*
Deserialize_SpecimenDefinition_TypeTested_Container(Arena *arena, cJSON *specimenDefinition_TypeTested_Container);
SpecimenDefinition_TypeTested_Container_Additive*
Deserialize_SpecimenDefinition_TypeTested_Container_Additive(Arena *arena, cJSON *specimenDefinition_TypeTested_Container_Additive);
SpecimenDefinition_TypeTested_Handling*
Deserialize_SpecimenDefinition_TypeTested_Handling(Arena *arena, cJSON *specimenDefinition_TypeTested_Handling);
StructureDefinition*
Deserialize_StructureDefinition(Arena *arena, cJSON *structureDefinition);
StructureDefinition_Mapping*
Deserialize_StructureDefinition_Mapping(Arena *arena, cJSON *structureDefinition_Mapping);
StructureDefinition_Context*
Deserialize_StructureDefinition_Context(Arena *arena, cJSON *structureDefinition_Context);
StructureDefinition_Snapshot*
Deserialize_StructureDefinition_Snapshot(Arena *arena, cJSON *structureDefinition_Snapshot);
StructureDefinition_Differential*
Deserialize_StructureDefinition_Differential(Arena *arena, cJSON *structureDefinition_Differential);
StructureMap*
Deserialize_StructureMap(Arena *arena, cJSON *structureMap);
StructureMap_Structure*
Deserialize_StructureMap_Structure(Arena *arena, cJSON *structureMap_Structure);
StructureMap_Group*
Deserialize_StructureMap_Group(Arena *arena, cJSON *structureMap_Group);
StructureMap_Group_Input*
Deserialize_StructureMap_Group_Input(Arena *arena, cJSON *structureMap_Group_Input);
StructureMap_Group_Rule*
Deserialize_StructureMap_Group_Rule(Arena *arena, cJSON *structureMap_Group_Rule);
StructureMap_Group_Rule_Source*
Deserialize_StructureMap_Group_Rule_Source(Arena *arena, cJSON *structureMap_Group_Rule_Source);
StructureMap_Group_Rule_Target*
Deserialize_StructureMap_Group_Rule_Target(Arena *arena, cJSON *structureMap_Group_Rule_Target);
StructureMap_Group_Rule_Target_Parameter*
Deserialize_StructureMap_Group_Rule_Target_Parameter(Arena *arena, cJSON *structureMap_Group_Rule_Target_Parameter);
StructureMap_Group_Rule_Dependent*
Deserialize_StructureMap_Group_Rule_Dependent(Arena *arena, cJSON *structureMap_Group_Rule_Dependent);
Subscription*
Deserialize_Subscription(Arena *arena, cJSON *subscription);
Subscription_Channel*
Deserialize_Subscription_Channel(Arena *arena, cJSON *subscription_Channel);
Substance*
Deserialize_Substance(Arena *arena, cJSON *substance);
Substance_Instance*
Deserialize_Substance_Instance(Arena *arena, cJSON *substance_Instance);
Substance_Ingredient*
Deserialize_Substance_Ingredient(Arena *arena, cJSON *substance_Ingredient);
SubstanceNucleicAcid*
Deserialize_SubstanceNucleicAcid(Arena *arena, cJSON *substanceNucleicAcid);
SubstanceNucleicAcid_Subunit*
Deserialize_SubstanceNucleicAcid_Subunit(Arena *arena, cJSON *substanceNucleicAcid_Subunit);
SubstanceNucleicAcid_Subunit_Linkage*
Deserialize_SubstanceNucleicAcid_Subunit_Linkage(Arena *arena, cJSON *substanceNucleicAcid_Subunit_Linkage);
SubstanceNucleicAcid_Subunit_Sugar*
Deserialize_SubstanceNucleicAcid_Subunit_Sugar(Arena *arena, cJSON *substanceNucleicAcid_Subunit_Sugar);
SubstancePolymer*
Deserialize_SubstancePolymer(Arena *arena, cJSON *substancePolymer);
SubstancePolymer_MonomerSet*
Deserialize_SubstancePolymer_MonomerSet(Arena *arena, cJSON *substancePolymer_MonomerSet);
SubstancePolymer_MonomerSet_StartingMaterial*
Deserialize_SubstancePolymer_MonomerSet_StartingMaterial(Arena *arena, cJSON *substancePolymer_MonomerSet_StartingMaterial);
SubstancePolymer_Repeat*
Deserialize_SubstancePolymer_Repeat(Arena *arena, cJSON *substancePolymer_Repeat);
SubstancePolymer_Repeat_RepeatUnit*
Deserialize_SubstancePolymer_Repeat_RepeatUnit(Arena *arena, cJSON *substancePolymer_Repeat_RepeatUnit);
SubstancePolymer_Repeat_RepeatUnit_DegreeOfPolymerisation*
Deserialize_SubstancePolymer_Repeat_RepeatUnit_DegreeOfPolymerisation(Arena *arena, cJSON *substancePolymer_Repeat_RepeatUnit_DegreeOfPolymerisation);
SubstancePolymer_Repeat_RepeatUnit_StructuralRepresentation*
Deserialize_SubstancePolymer_Repeat_RepeatUnit_StructuralRepresentation(Arena *arena, cJSON *substancePolymer_Repeat_RepeatUnit_StructuralRepresentation);
SubstanceProtein*
Deserialize_SubstanceProtein(Arena *arena, cJSON *substanceProtein);
SubstanceProtein_Subunit*
Deserialize_SubstanceProtein_Subunit(Arena *arena, cJSON *substanceProtein_Subunit);
SubstanceReferenceInformation*
Deserialize_SubstanceReferenceInformation(Arena *arena, cJSON *substanceReferenceInformation);
SubstanceReferenceInformation_Gene*
Deserialize_SubstanceReferenceInformation_Gene(Arena *arena, cJSON *substanceReferenceInformation_Gene);
SubstanceReferenceInformation_GeneElement*
Deserialize_SubstanceReferenceInformation_GeneElement(Arena *arena, cJSON *substanceReferenceInformation_GeneElement);
SubstanceReferenceInformation_Classification*
Deserialize_SubstanceReferenceInformation_Classification(Arena *arena, cJSON *substanceReferenceInformation_Classification);
SubstanceReferenceInformation_Target*
Deserialize_SubstanceReferenceInformation_Target(Arena *arena, cJSON *substanceReferenceInformation_Target);
SubstanceSourceMaterial*
Deserialize_SubstanceSourceMaterial(Arena *arena, cJSON *substanceSourceMaterial);
SubstanceSourceMaterial_FractionDescription*
Deserialize_SubstanceSourceMaterial_FractionDescription(Arena *arena, cJSON *substanceSourceMaterial_FractionDescription);
SubstanceSourceMaterial_Organism*
Deserialize_SubstanceSourceMaterial_Organism(Arena *arena, cJSON *substanceSourceMaterial_Organism);
SubstanceSourceMaterial_Organism_Author*
Deserialize_SubstanceSourceMaterial_Organism_Author(Arena *arena, cJSON *substanceSourceMaterial_Organism_Author);
SubstanceSourceMaterial_Organism_Hybrid*
Deserialize_SubstanceSourceMaterial_Organism_Hybrid(Arena *arena, cJSON *substanceSourceMaterial_Organism_Hybrid);
SubstanceSourceMaterial_Organism_OrganismGeneral*
Deserialize_SubstanceSourceMaterial_Organism_OrganismGeneral(Arena *arena, cJSON *substanceSourceMaterial_Organism_OrganismGeneral);
SubstanceSourceMaterial_PartDescription*
Deserialize_SubstanceSourceMaterial_PartDescription(Arena *arena, cJSON *substanceSourceMaterial_PartDescription);
SubstanceSpecification*
Deserialize_SubstanceSpecification(Arena *arena, cJSON *substanceSpecification);
SubstanceSpecification_Moiety*
Deserialize_SubstanceSpecification_Moiety(Arena *arena, cJSON *substanceSpecification_Moiety);
SubstanceSpecification_Property*
Deserialize_SubstanceSpecification_Property(Arena *arena, cJSON *substanceSpecification_Property);
SubstanceSpecification_Structure*
Deserialize_SubstanceSpecification_Structure(Arena *arena, cJSON *substanceSpecification_Structure);
SubstanceSpecification_Structure_Isotope*
Deserialize_SubstanceSpecification_Structure_Isotope(Arena *arena, cJSON *substanceSpecification_Structure_Isotope);
SubstanceSpecification_Structure_Isotope_MolecularWeight*
Deserialize_SubstanceSpecification_Structure_Isotope_MolecularWeight(Arena *arena, cJSON *substanceSpecification_Structure_Isotope_MolecularWeight);
SubstanceSpecification_Structure_Representation*
Deserialize_SubstanceSpecification_Structure_Representation(Arena *arena, cJSON *substanceSpecification_Structure_Representation);
SubstanceSpecification_Code*
Deserialize_SubstanceSpecification_Code(Arena *arena, cJSON *substanceSpecification_Code);
SubstanceSpecification_Name*
Deserialize_SubstanceSpecification_Name(Arena *arena, cJSON *substanceSpecification_Name);
SubstanceSpecification_Name_Official*
Deserialize_SubstanceSpecification_Name_Official(Arena *arena, cJSON *substanceSpecification_Name_Official);
SubstanceSpecification_Relationship*
Deserialize_SubstanceSpecification_Relationship(Arena *arena, cJSON *substanceSpecification_Relationship);
SupplyDelivery*
Deserialize_SupplyDelivery(Arena *arena, cJSON *supplyDelivery);
SupplyDelivery_SuppliedItem*
Deserialize_SupplyDelivery_SuppliedItem(Arena *arena, cJSON *supplyDelivery_SuppliedItem);
SupplyRequest*
Deserialize_SupplyRequest(Arena *arena, cJSON *supplyRequest);
SupplyRequest_Parameter*
Deserialize_SupplyRequest_Parameter(Arena *arena, cJSON *supplyRequest_Parameter);
Task*
Deserialize_Task(Arena *arena, cJSON *task);
Task_Restriction*
Deserialize_Task_Restriction(Arena *arena, cJSON *task_Restriction);
Task_Input*
Deserialize_Task_Input(Arena *arena, cJSON *task_Input);
Task_Output*
Deserialize_Task_Output(Arena *arena, cJSON *task_Output);
TerminologyCapabilities*
Deserialize_TerminologyCapabilities(Arena *arena, cJSON *terminologyCapabilities);
TerminologyCapabilities_Software*
Deserialize_TerminologyCapabilities_Software(Arena *arena, cJSON *terminologyCapabilities_Software);
TerminologyCapabilities_Implementation*
Deserialize_TerminologyCapabilities_Implementation(Arena *arena, cJSON *terminologyCapabilities_Implementation);
TerminologyCapabilities_CodeSystem*
Deserialize_TerminologyCapabilities_CodeSystem(Arena *arena, cJSON *terminologyCapabilities_CodeSystem);
TerminologyCapabilities_CodeSystem_Version*
Deserialize_TerminologyCapabilities_CodeSystem_Version(Arena *arena, cJSON *terminologyCapabilities_CodeSystem_Version);
TerminologyCapabilities_CodeSystem_Version_Filter*
Deserialize_TerminologyCapabilities_CodeSystem_Version_Filter(Arena *arena, cJSON *terminologyCapabilities_CodeSystem_Version_Filter);
TerminologyCapabilities_Expansion*
Deserialize_TerminologyCapabilities_Expansion(Arena *arena, cJSON *terminologyCapabilities_Expansion);
TerminologyCapabilities_Expansion_Parameter*
Deserialize_TerminologyCapabilities_Expansion_Parameter(Arena *arena, cJSON *terminologyCapabilities_Expansion_Parameter);
TerminologyCapabilities_ValidateCode*
Deserialize_TerminologyCapabilities_ValidateCode(Arena *arena, cJSON *terminologyCapabilities_ValidateCode);
TerminologyCapabilities_Translation*
Deserialize_TerminologyCapabilities_Translation(Arena *arena, cJSON *terminologyCapabilities_Translation);
TerminologyCapabilities_Closure*
Deserialize_TerminologyCapabilities_Closure(Arena *arena, cJSON *terminologyCapabilities_Closure);
TestReport*
Deserialize_TestReport(Arena *arena, cJSON *testReport);
TestReport_Participant*
Deserialize_TestReport_Participant(Arena *arena, cJSON *testReport_Participant);
TestReport_Setup*
Deserialize_TestReport_Setup(Arena *arena, cJSON *testReport_Setup);
TestReport_Setup_Action*
Deserialize_TestReport_Setup_Action(Arena *arena, cJSON *testReport_Setup_Action);
TestReport_Setup_Action_Operation*
Deserialize_TestReport_Setup_Action_Operation(Arena *arena, cJSON *testReport_Setup_Action_Operation);
TestReport_Setup_Action_Assert*
Deserialize_TestReport_Setup_Action_Assert(Arena *arena, cJSON *testReport_Setup_Action_Assert);
TestReport_Test*
Deserialize_TestReport_Test(Arena *arena, cJSON *testReport_Test);
TestReport_Test_Action*
Deserialize_TestReport_Test_Action(Arena *arena, cJSON *testReport_Test_Action);
TestReport_Teardown*
Deserialize_TestReport_Teardown(Arena *arena, cJSON *testReport_Teardown);
TestReport_Teardown_Action*
Deserialize_TestReport_Teardown_Action(Arena *arena, cJSON *testReport_Teardown_Action);
TestScript*
Deserialize_TestScript(Arena *arena, cJSON *testScript);
TestScript_Origin*
Deserialize_TestScript_Origin(Arena *arena, cJSON *testScript_Origin);
TestScript_Destination*
Deserialize_TestScript_Destination(Arena *arena, cJSON *testScript_Destination);
TestScript_Metadata*
Deserialize_TestScript_Metadata(Arena *arena, cJSON *testScript_Metadata);
TestScript_Metadata_Link*
Deserialize_TestScript_Metadata_Link(Arena *arena, cJSON *testScript_Metadata_Link);
TestScript_Metadata_Capability*
Deserialize_TestScript_Metadata_Capability(Arena *arena, cJSON *testScript_Metadata_Capability);
TestScript_Fixture*
Deserialize_TestScript_Fixture(Arena *arena, cJSON *testScript_Fixture);
TestScript_Variable*
Deserialize_TestScript_Variable(Arena *arena, cJSON *testScript_Variable);
TestScript_Setup*
Deserialize_TestScript_Setup(Arena *arena, cJSON *testScript_Setup);
TestScript_Setup_Action*
Deserialize_TestScript_Setup_Action(Arena *arena, cJSON *testScript_Setup_Action);
TestScript_Setup_Action_Operation*
Deserialize_TestScript_Setup_Action_Operation(Arena *arena, cJSON *testScript_Setup_Action_Operation);
TestScript_Setup_Action_Operation_RequestHeader*
Deserialize_TestScript_Setup_Action_Operation_RequestHeader(Arena *arena, cJSON *testScript_Setup_Action_Operation_RequestHeader);
TestScript_Setup_Action_Assert*
Deserialize_TestScript_Setup_Action_Assert(Arena *arena, cJSON *testScript_Setup_Action_Assert);
TestScript_Test*
Deserialize_TestScript_Test(Arena *arena, cJSON *testScript_Test);
TestScript_Test_Action*
Deserialize_TestScript_Test_Action(Arena *arena, cJSON *testScript_Test_Action);
TestScript_Teardown*
Deserialize_TestScript_Teardown(Arena *arena, cJSON *testScript_Teardown);
TestScript_Teardown_Action*
Deserialize_TestScript_Teardown_Action(Arena *arena, cJSON *testScript_Teardown_Action);
ValueSet*
Deserialize_ValueSet(Arena *arena, cJSON *valueSet);
ValueSet_Compose*
Deserialize_ValueSet_Compose(Arena *arena, cJSON *valueSet_Compose);
ValueSet_Compose_Include*
Deserialize_ValueSet_Compose_Include(Arena *arena, cJSON *valueSet_Compose_Include);
ValueSet_Compose_Include_Concept*
Deserialize_ValueSet_Compose_Include_Concept(Arena *arena, cJSON *valueSet_Compose_Include_Concept);
ValueSet_Compose_Include_Concept_Designation*
Deserialize_ValueSet_Compose_Include_Concept_Designation(Arena *arena, cJSON *valueSet_Compose_Include_Concept_Designation);
ValueSet_Compose_Include_Filter*
Deserialize_ValueSet_Compose_Include_Filter(Arena *arena, cJSON *valueSet_Compose_Include_Filter);
ValueSet_Expansion*
Deserialize_ValueSet_Expansion(Arena *arena, cJSON *valueSet_Expansion);
ValueSet_Expansion_Parameter*
Deserialize_ValueSet_Expansion_Parameter(Arena *arena, cJSON *valueSet_Expansion_Parameter);
ValueSet_Expansion_Contains*
Deserialize_ValueSet_Expansion_Contains(Arena *arena, cJSON *valueSet_Expansion_Contains);
VerificationResult*
Deserialize_VerificationResult(Arena *arena, cJSON *verificationResult);
VerificationResult_PrimarySource*
Deserialize_VerificationResult_PrimarySource(Arena *arena, cJSON *verificationResult_PrimarySource);
VerificationResult_Attestation*
Deserialize_VerificationResult_Attestation(Arena *arena, cJSON *verificationResult_Attestation);
VerificationResult_Validator*
Deserialize_VerificationResult_Validator(Arena *arena, cJSON *verificationResult_Validator);
VisionPrescription*
Deserialize_VisionPrescription(Arena *arena, cJSON *visionPrescription);
VisionPrescription_LensSpecification*
Deserialize_VisionPrescription_LensSpecification(Arena *arena, cJSON *visionPrescription_LensSpecification);
VisionPrescription_LensSpecification_Prism*
Deserialize_VisionPrescription_LensSpecification_Prism(Arena *arena, cJSON *visionPrescription_LensSpecification_Prism);
MetadataResource*
Deserialize_MetadataResource(Arena *arena, cJSON *metadataResource);
Element*
Deserialize_Element(Arena *arena, cJSON *element);
BackboneElement*
Deserialize_BackboneElement(Arena *arena, cJSON *backboneElement);
Integer*
Deserialize_Integer(Arena *arena, cJSON *integer);
Xhtml*
Deserialize_Xhtml(Arena *arena, cJSON *xhtml);
Address*
Deserialize_Address(Arena *arena, cJSON *address);
Age*
Deserialize_Age(Arena *arena, cJSON *age);
Annotation*
Deserialize_Annotation(Arena *arena, cJSON *annotation);
Attachment*
Deserialize_Attachment(Arena *arena, cJSON *attachment);
CodeableConcept*
Deserialize_CodeableConcept(Arena *arena, cJSON *codeableConcept);
Coding*
Deserialize_Coding(Arena *arena, cJSON *coding);
ContactDetail*
Deserialize_ContactDetail(Arena *arena, cJSON *contactDetail);
ContactPoint*
Deserialize_ContactPoint(Arena *arena, cJSON *contactPoint);
Contributor*
Deserialize_Contributor(Arena *arena, cJSON *contributor);
Count*
Deserialize_Count(Arena *arena, cJSON *count);
DataRequirement*
Deserialize_DataRequirement(Arena *arena, cJSON *dataRequirement);
DataRequirement_CodeFilter*
Deserialize_DataRequirement_CodeFilter(Arena *arena, cJSON *dataRequirement_CodeFilter);
DataRequirement_DateFilter*
Deserialize_DataRequirement_DateFilter(Arena *arena, cJSON *dataRequirement_DateFilter);
DataRequirement_Sort*
Deserialize_DataRequirement_Sort(Arena *arena, cJSON *dataRequirement_Sort);
Distance*
Deserialize_Distance(Arena *arena, cJSON *distance);
Dosage*
Deserialize_Dosage(Arena *arena, cJSON *dosage);
Dosage_DoseAndRate*
Deserialize_Dosage_DoseAndRate(Arena *arena, cJSON *dosage_DoseAndRate);
Duration*
Deserialize_Duration(Arena *arena, cJSON *duration);
ElementDefinition*
Deserialize_ElementDefinition(Arena *arena, cJSON *elementDefinition);
ElementDefinition_Slicing*
Deserialize_ElementDefinition_Slicing(Arena *arena, cJSON *elementDefinition_Slicing);
ElementDefinition_Slicing_Discriminator*
Deserialize_ElementDefinition_Slicing_Discriminator(Arena *arena, cJSON *elementDefinition_Slicing_Discriminator);
ElementDefinition_Base*
Deserialize_ElementDefinition_Base(Arena *arena, cJSON *elementDefinition_Base);
ElementDefinition_Type*
Deserialize_ElementDefinition_Type(Arena *arena, cJSON *elementDefinition_Type);
ElementDefinition_Example*
Deserialize_ElementDefinition_Example(Arena *arena, cJSON *elementDefinition_Example);
ElementDefinition_Constraint*
Deserialize_ElementDefinition_Constraint(Arena *arena, cJSON *elementDefinition_Constraint);
ElementDefinition_Binding*
Deserialize_ElementDefinition_Binding(Arena *arena, cJSON *elementDefinition_Binding);
ElementDefinition_Mapping*
Deserialize_ElementDefinition_Mapping(Arena *arena, cJSON *elementDefinition_Mapping);
Expression*
Deserialize_Expression(Arena *arena, cJSON *expression);
Extension*
Deserialize_Extension(Arena *arena, cJSON *extension);
HumanName*
Deserialize_HumanName(Arena *arena, cJSON *humanName);
Identifier*
Deserialize_Identifier(Arena *arena, cJSON *identifier);
MarketingStatus*
Deserialize_MarketingStatus(Arena *arena, cJSON *marketingStatus);
Meta*
Deserialize_Meta(Arena *arena, cJSON *meta);
Money*
Deserialize_Money(Arena *arena, cJSON *money);
Narrative*
Deserialize_Narrative(Arena *arena, cJSON *narrative);
ParameterDefinition*
Deserialize_ParameterDefinition(Arena *arena, cJSON *parameterDefinition);
Period*
Deserialize_Period(Arena *arena, cJSON *period);
Population*
Deserialize_Population(Arena *arena, cJSON *population);
ProdCharacteristic*
Deserialize_ProdCharacteristic(Arena *arena, cJSON *prodCharacteristic);
ProductShelfLife*
Deserialize_ProductShelfLife(Arena *arena, cJSON *productShelfLife);
Quantity*
Deserialize_Quantity(Arena *arena, cJSON *quantity);
Range*
Deserialize_Range(Arena *arena, cJSON *range);
Ratio*
Deserialize_Ratio(Arena *arena, cJSON *ratio);
Reference*
Deserialize_Reference(Arena *arena, cJSON *reference);
RelatedArtifact*
Deserialize_RelatedArtifact(Arena *arena, cJSON *relatedArtifact);
SampledData*
Deserialize_SampledData(Arena *arena, cJSON *sampledData);
Signature*
Deserialize_Signature(Arena *arena, cJSON *signature);
SubstanceAmount*
Deserialize_SubstanceAmount(Arena *arena, cJSON *substanceAmount);
SubstanceAmount_ReferenceRange*
Deserialize_SubstanceAmount_ReferenceRange(Arena *arena, cJSON *substanceAmount_ReferenceRange);
Timing*
Deserialize_Timing(Arena *arena, cJSON *timing);
Timing_Repeat*
Deserialize_Timing_Repeat(Arena *arena, cJSON *timing_Repeat);
TriggerDefinition*
Deserialize_TriggerDefinition(Arena *arena, cJSON *triggerDefinition);
UsageContext*
Deserialize_UsageContext(Arena *arena, cJSON *usageContext);
MoneyQuantity*
Deserialize_MoneyQuantity(Arena *arena, cJSON *moneyQuantity);
SimpleQuantity*
Deserialize_SimpleQuantity(Arena *arena, cJSON *simpleQuantity);
Shareablemeasure*
Deserialize_Shareablemeasure(Arena *arena, cJSON *shareablemeasure);
Servicerequest_genetics*
Deserialize_Servicerequest_genetics(Arena *arena, cJSON *servicerequest_genetics);
Groupdefinition*
Deserialize_Groupdefinition(Arena *arena, cJSON *groupdefinition);
Actualgroup*
Deserialize_Actualgroup(Arena *arena, cJSON *actualgroup);
Familymemberhistory_genetic*
Deserialize_Familymemberhistory_genetic(Arena *arena, cJSON *familymemberhistory_genetic);
Shareableactivitydefinition*
Deserialize_Shareableactivitydefinition(Arena *arena, cJSON *shareableactivitydefinition);
Cdshooksrequestgroup*
Deserialize_Cdshooksrequestgroup(Arena *arena, cJSON *cdshooksrequestgroup);
Provenance_relevant_history*
Deserialize_Provenance_relevant_history(Arena *arena, cJSON *provenance_relevant_history);
Cqf_questionnaire*
Deserialize_Cqf_questionnaire(Arena *arena, cJSON *cqf_questionnaire);
Shareablevalueset*
Deserialize_Shareablevalueset(Arena *arena, cJSON *shareablevalueset);
Picoelement*
Deserialize_Picoelement(Arena *arena, cJSON *picoelement);
Shareablecodesystem*
Deserialize_Shareablecodesystem(Arena *arena, cJSON *shareablecodesystem);
Cdshooksguidanceresponse*
Deserialize_Cdshooksguidanceresponse(Arena *arena, cJSON *cdshooksguidanceresponse);
Devicemetricobservation*
Deserialize_Devicemetricobservation(Arena *arena, cJSON *devicemetricobservation);
Observation_genetics*
Deserialize_Observation_genetics(Arena *arena, cJSON *observation_genetics);
Vitalsigns*
Deserialize_Vitalsigns(Arena *arena, cJSON *vitalsigns);
Bodyweight*
Deserialize_Bodyweight(Arena *arena, cJSON *bodyweight);
Vitalspanel*
Deserialize_Vitalspanel(Arena *arena, cJSON *vitalspanel);
Bodyheight*
Deserialize_Bodyheight(Arena *arena, cJSON *bodyheight);
Resprate*
Deserialize_Resprate(Arena *arena, cJSON *resprate);
Heartrate*
Deserialize_Heartrate(Arena *arena, cJSON *heartrate);
Bodytemp*
Deserialize_Bodytemp(Arena *arena, cJSON *bodytemp);
Headcircum*
Deserialize_Headcircum(Arena *arena, cJSON *headcircum);
Oxygensat*
Deserialize_Oxygensat(Arena *arena, cJSON *oxygensat);
Bmi*
Deserialize_Bmi(Arena *arena, cJSON *bmi);
Bp*
Deserialize_Bp(Arena *arena, cJSON *bp);
Shareablelibrary*
Deserialize_Shareablelibrary(Arena *arena, cJSON *shareablelibrary);
Cqllibrary*
Deserialize_Cqllibrary(Arena *arena, cJSON *cqllibrary);
Lipidprofile*
Deserialize_Lipidprofile(Arena *arena, cJSON *lipidprofile);
Cholesterol*
Deserialize_Cholesterol(Arena *arena, cJSON *cholesterol);
Triglyceride*
Deserialize_Triglyceride(Arena *arena, cJSON *triglyceride);
Hdlcholesterol*
Deserialize_Hdlcholesterol(Arena *arena, cJSON *hdlcholesterol);
Ldlcholesterol*
Deserialize_Ldlcholesterol(Arena *arena, cJSON *ldlcholesterol);
Diagnosticreport_genetics*
Deserialize_Diagnosticreport_genetics(Arena *arena, cJSON *diagnosticreport_genetics);
Hlaresult*
Deserialize_Hlaresult(Arena *arena, cJSON *hlaresult);
Synthesis*
Deserialize_Synthesis(Arena *arena, cJSON *synthesis);
Clinicaldocument*
Deserialize_Clinicaldocument(Arena *arena, cJSON *clinicaldocument);
Catalog*
Deserialize_Catalog(Arena *arena, cJSON *catalog);
Shareableplandefinition*
Deserialize_Shareableplandefinition(Arena *arena, cJSON *shareableplandefinition);
Computableplandefinition*
Deserialize_Computableplandefinition(Arena *arena, cJSON *computableplandefinition);
Cdshooksserviceplandefinition*
Deserialize_Cdshooksserviceplandefinition(Arena *arena, cJSON *cdshooksserviceplandefinition);
Elementdefinition_de*
Deserialize_Elementdefinition_de(Arena *arena, cJSON *elementdefinition_de);
Ehrsrle_auditevent*
Deserialize_Ehrsrle_auditevent(Arena *arena, cJSON *ehrsrle_auditevent);
Ehrsrle_provenance*
Deserialize_Ehrsrle_provenance(Arena *arena, cJSON *ehrsrle_provenance);
#endif