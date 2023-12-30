#ifndef FHIR_SERIALIZATION_H
#define FHIR_SERIALIZATION_H
String8
Serialize_Resource(Arena *arena, Resource *resource);
String8
Serialize_Account(Arena *arena, Account *account);
String8
Serialize_Account_Coverage(Arena *arena, Account_Coverage *account_Coverage);
String8
Serialize_Account_Guarantor(Arena *arena, Account_Guarantor *account_Guarantor);
String8
Serialize_ActivityDefinition(Arena *arena, ActivityDefinition *activityDefinition);
String8
Serialize_ActivityDefinition_Participant(Arena *arena, ActivityDefinition_Participant *activityDefinition_Participant);
String8
Serialize_ActivityDefinition_DynamicValue(Arena *arena, ActivityDefinition_DynamicValue *activityDefinition_DynamicValue);
String8
Serialize_AdverseEvent(Arena *arena, AdverseEvent *adverseEvent);
String8
Serialize_AdverseEvent_SuspectEntity(Arena *arena, AdverseEvent_SuspectEntity *adverseEvent_SuspectEntity);
String8
Serialize_AdverseEvent_SuspectEntity_Causality(Arena *arena, AdverseEvent_SuspectEntity_Causality *adverseEvent_SuspectEntity_Causality);
String8
Serialize_AllergyIntolerance(Arena *arena, AllergyIntolerance *allergyIntolerance);
String8
Serialize_AllergyIntolerance_Reaction(Arena *arena, AllergyIntolerance_Reaction *allergyIntolerance_Reaction);
String8
Serialize_Appointment(Arena *arena, Appointment *appointment);
String8
Serialize_Appointment_Participant(Arena *arena, Appointment_Participant *appointment_Participant);
String8
Serialize_AppointmentResponse(Arena *arena, AppointmentResponse *appointmentResponse);
String8
Serialize_AuditEvent(Arena *arena, AuditEvent *auditEvent);
String8
Serialize_AuditEvent_Agent(Arena *arena, AuditEvent_Agent *auditEvent_Agent);
String8
Serialize_AuditEvent_Agent_Network(Arena *arena, AuditEvent_Agent_Network *auditEvent_Agent_Network);
String8
Serialize_AuditEvent_Source(Arena *arena, AuditEvent_Source *auditEvent_Source);
String8
Serialize_AuditEvent_Entity(Arena *arena, AuditEvent_Entity *auditEvent_Entity);
String8
Serialize_AuditEvent_Entity_Detail(Arena *arena, AuditEvent_Entity_Detail *auditEvent_Entity_Detail);
String8
Serialize_Basic(Arena *arena, Basic *basic);
String8
Serialize_Binary(Arena *arena, Binary *binary);
String8
Serialize_BiologicallyDerivedProduct(Arena *arena, BiologicallyDerivedProduct *biologicallyDerivedProduct);
String8
Serialize_BiologicallyDerivedProduct_Collection(Arena *arena, BiologicallyDerivedProduct_Collection *biologicallyDerivedProduct_Collection);
String8
Serialize_BiologicallyDerivedProduct_Processing(Arena *arena, BiologicallyDerivedProduct_Processing *biologicallyDerivedProduct_Processing);
String8
Serialize_BiologicallyDerivedProduct_Manipulation(Arena *arena, BiologicallyDerivedProduct_Manipulation *biologicallyDerivedProduct_Manipulation);
String8
Serialize_BiologicallyDerivedProduct_Storage(Arena *arena, BiologicallyDerivedProduct_Storage *biologicallyDerivedProduct_Storage);
String8
Serialize_BodyStructure(Arena *arena, BodyStructure *bodyStructure);
String8
Serialize_Bundle(Arena *arena, Bundle *bundle);
String8
Serialize_Bundle_Link(Arena *arena, Bundle_Link *bundle_Link);
String8
Serialize_Bundle_Entry(Arena *arena, Bundle_Entry *bundle_Entry);
String8
Serialize_Bundle_Entry_Search(Arena *arena, Bundle_Entry_Search *bundle_Entry_Search);
String8
Serialize_Bundle_Entry_Request(Arena *arena, Bundle_Entry_Request *bundle_Entry_Request);
String8
Serialize_Bundle_Entry_Response(Arena *arena, Bundle_Entry_Response *bundle_Entry_Response);
String8
Serialize_CapabilityStatement(Arena *arena, CapabilityStatement *capabilityStatement);
String8
Serialize_CapabilityStatement_Software(Arena *arena, CapabilityStatement_Software *capabilityStatement_Software);
String8
Serialize_CapabilityStatement_Implementation(Arena *arena, CapabilityStatement_Implementation *capabilityStatement_Implementation);
String8
Serialize_CapabilityStatement_Rest(Arena *arena, CapabilityStatement_Rest *capabilityStatement_Rest);
String8
Serialize_CapabilityStatement_Rest_Security(Arena *arena, CapabilityStatement_Rest_Security *capabilityStatement_Rest_Security);
String8
Serialize_CapabilityStatement_Rest_Resource(Arena *arena, CapabilityStatement_Rest_Resource *capabilityStatement_Rest_Resource);
String8
Serialize_CapabilityStatement_Rest_Resource_Interaction(Arena *arena, CapabilityStatement_Rest_Resource_Interaction *capabilityStatement_Rest_Resource_Interaction);
String8
Serialize_CapabilityStatement_Rest_Resource_SearchParam(Arena *arena, CapabilityStatement_Rest_Resource_SearchParam *capabilityStatement_Rest_Resource_SearchParam);
String8
Serialize_CapabilityStatement_Rest_Resource_Operation(Arena *arena, CapabilityStatement_Rest_Resource_Operation *capabilityStatement_Rest_Resource_Operation);
String8
Serialize_CapabilityStatement_Rest_Interaction(Arena *arena, CapabilityStatement_Rest_Interaction *capabilityStatement_Rest_Interaction);
String8
Serialize_CapabilityStatement_Messaging(Arena *arena, CapabilityStatement_Messaging *capabilityStatement_Messaging);
String8
Serialize_CapabilityStatement_Messaging_Endpoint(Arena *arena, CapabilityStatement_Messaging_Endpoint *capabilityStatement_Messaging_Endpoint);
String8
Serialize_CapabilityStatement_Messaging_SupportedMessage(Arena *arena, CapabilityStatement_Messaging_SupportedMessage *capabilityStatement_Messaging_SupportedMessage);
String8
Serialize_CapabilityStatement_Document(Arena *arena, CapabilityStatement_Document *capabilityStatement_Document);
String8
Serialize_CarePlan(Arena *arena, CarePlan *carePlan);
String8
Serialize_CarePlan_Activity(Arena *arena, CarePlan_Activity *carePlan_Activity);
String8
Serialize_CarePlan_Activity_Detail(Arena *arena, CarePlan_Activity_Detail *carePlan_Activity_Detail);
String8
Serialize_CareTeam(Arena *arena, CareTeam *careTeam);
String8
Serialize_CareTeam_Participant(Arena *arena, CareTeam_Participant *careTeam_Participant);
String8
Serialize_CatalogEntry(Arena *arena, CatalogEntry *catalogEntry);
String8
Serialize_CatalogEntry_RelatedEntry(Arena *arena, CatalogEntry_RelatedEntry *catalogEntry_RelatedEntry);
String8
Serialize_ChargeItem(Arena *arena, ChargeItem *chargeItem);
String8
Serialize_ChargeItem_Performer(Arena *arena, ChargeItem_Performer *chargeItem_Performer);
String8
Serialize_ChargeItemDefinition(Arena *arena, ChargeItemDefinition *chargeItemDefinition);
String8
Serialize_ChargeItemDefinition_Applicability(Arena *arena, ChargeItemDefinition_Applicability *chargeItemDefinition_Applicability);
String8
Serialize_ChargeItemDefinition_PropertyGroup(Arena *arena, ChargeItemDefinition_PropertyGroup *chargeItemDefinition_PropertyGroup);
String8
Serialize_ChargeItemDefinition_PropertyGroup_PriceComponent(Arena *arena, ChargeItemDefinition_PropertyGroup_PriceComponent *chargeItemDefinition_PropertyGroup_PriceComponent);
String8
Serialize_Claim(Arena *arena, Claim *claim);
String8
Serialize_Claim_Related(Arena *arena, Claim_Related *claim_Related);
String8
Serialize_Claim_Payee(Arena *arena, Claim_Payee *claim_Payee);
String8
Serialize_Claim_CareTeam(Arena *arena, Claim_CareTeam *claim_CareTeam);
String8
Serialize_Claim_SupportingInfo(Arena *arena, Claim_SupportingInfo *claim_SupportingInfo);
String8
Serialize_Claim_Diagnosis(Arena *arena, Claim_Diagnosis *claim_Diagnosis);
String8
Serialize_Claim_Procedure(Arena *arena, Claim_Procedure *claim_Procedure);
String8
Serialize_Claim_Insurance(Arena *arena, Claim_Insurance *claim_Insurance);
String8
Serialize_Claim_Accident(Arena *arena, Claim_Accident *claim_Accident);
String8
Serialize_Claim_Item(Arena *arena, Claim_Item *claim_Item);
String8
Serialize_Claim_Item_Detail(Arena *arena, Claim_Item_Detail *claim_Item_Detail);
String8
Serialize_Claim_Item_Detail_SubDetail(Arena *arena, Claim_Item_Detail_SubDetail *claim_Item_Detail_SubDetail);
String8
Serialize_ClaimResponse(Arena *arena, ClaimResponse *claimResponse);
String8
Serialize_ClaimResponse_Item(Arena *arena, ClaimResponse_Item *claimResponse_Item);
String8
Serialize_ClaimResponse_Item_Adjudication(Arena *arena, ClaimResponse_Item_Adjudication *claimResponse_Item_Adjudication);
String8
Serialize_ClaimResponse_Item_Detail(Arena *arena, ClaimResponse_Item_Detail *claimResponse_Item_Detail);
String8
Serialize_ClaimResponse_Item_Detail_SubDetail(Arena *arena, ClaimResponse_Item_Detail_SubDetail *claimResponse_Item_Detail_SubDetail);
String8
Serialize_ClaimResponse_AddItem(Arena *arena, ClaimResponse_AddItem *claimResponse_AddItem);
String8
Serialize_ClaimResponse_AddItem_Detail(Arena *arena, ClaimResponse_AddItem_Detail *claimResponse_AddItem_Detail);
String8
Serialize_ClaimResponse_AddItem_Detail_SubDetail(Arena *arena, ClaimResponse_AddItem_Detail_SubDetail *claimResponse_AddItem_Detail_SubDetail);
String8
Serialize_ClaimResponse_Total(Arena *arena, ClaimResponse_Total *claimResponse_Total);
String8
Serialize_ClaimResponse_Payment(Arena *arena, ClaimResponse_Payment *claimResponse_Payment);
String8
Serialize_ClaimResponse_ProcessNote(Arena *arena, ClaimResponse_ProcessNote *claimResponse_ProcessNote);
String8
Serialize_ClaimResponse_Insurance(Arena *arena, ClaimResponse_Insurance *claimResponse_Insurance);
String8
Serialize_ClaimResponse_Error(Arena *arena, ClaimResponse_Error *claimResponse_Error);
String8
Serialize_ClinicalImpression(Arena *arena, ClinicalImpression *clinicalImpression);
String8
Serialize_ClinicalImpression_Investigation(Arena *arena, ClinicalImpression_Investigation *clinicalImpression_Investigation);
String8
Serialize_ClinicalImpression_Finding(Arena *arena, ClinicalImpression_Finding *clinicalImpression_Finding);
String8
Serialize_CodeSystem(Arena *arena, CodeSystem *codeSystem);
String8
Serialize_CodeSystem_Filter(Arena *arena, CodeSystem_Filter *codeSystem_Filter);
String8
Serialize_CodeSystem_Property(Arena *arena, CodeSystem_Property *codeSystem_Property);
String8
Serialize_CodeSystem_Concept(Arena *arena, CodeSystem_Concept *codeSystem_Concept);
String8
Serialize_CodeSystem_Concept_Designation(Arena *arena, CodeSystem_Concept_Designation *codeSystem_Concept_Designation);
String8
Serialize_CodeSystem_Concept_Property(Arena *arena, CodeSystem_Concept_Property *codeSystem_Concept_Property);
String8
Serialize_Communication(Arena *arena, Communication *communication);
String8
Serialize_Communication_Payload(Arena *arena, Communication_Payload *communication_Payload);
String8
Serialize_CommunicationRequest(Arena *arena, CommunicationRequest *communicationRequest);
String8
Serialize_CommunicationRequest_Payload(Arena *arena, CommunicationRequest_Payload *communicationRequest_Payload);
String8
Serialize_CompartmentDefinition(Arena *arena, CompartmentDefinition *compartmentDefinition);
String8
Serialize_CompartmentDefinition_Resource(Arena *arena, CompartmentDefinition_Resource *compartmentDefinition_Resource);
String8
Serialize_Composition(Arena *arena, Composition *composition);
String8
Serialize_Composition_Attester(Arena *arena, Composition_Attester *composition_Attester);
String8
Serialize_Composition_RelatesTo(Arena *arena, Composition_RelatesTo *composition_RelatesTo);
String8
Serialize_Composition_Event(Arena *arena, Composition_Event *composition_Event);
String8
Serialize_Composition_Section(Arena *arena, Composition_Section *composition_Section);
String8
Serialize_ConceptMap(Arena *arena, ConceptMap *conceptMap);
String8
Serialize_ConceptMap_Group(Arena *arena, ConceptMap_Group *conceptMap_Group);
String8
Serialize_ConceptMap_Group_Element(Arena *arena, ConceptMap_Group_Element *conceptMap_Group_Element);
String8
Serialize_ConceptMap_Group_Element_Target(Arena *arena, ConceptMap_Group_Element_Target *conceptMap_Group_Element_Target);
String8
Serialize_ConceptMap_Group_Element_Target_DependsOn(Arena *arena, ConceptMap_Group_Element_Target_DependsOn *conceptMap_Group_Element_Target_DependsOn);
String8
Serialize_ConceptMap_Group_Unmapped(Arena *arena, ConceptMap_Group_Unmapped *conceptMap_Group_Unmapped);
String8
Serialize_Condition(Arena *arena, Condition *condition);
String8
Serialize_Condition_Stage(Arena *arena, Condition_Stage *condition_Stage);
String8
Serialize_Condition_Evidence(Arena *arena, Condition_Evidence *condition_Evidence);
String8
Serialize_Consent(Arena *arena, Consent *consent);
String8
Serialize_Consent_Policy(Arena *arena, Consent_Policy *consent_Policy);
String8
Serialize_Consent_Verification(Arena *arena, Consent_Verification *consent_Verification);
String8
Serialize_Consent_Provision(Arena *arena, Consent_Provision *consent_Provision);
String8
Serialize_Consent_Provision_Actor(Arena *arena, Consent_Provision_Actor *consent_Provision_Actor);
String8
Serialize_Consent_Provision_Data(Arena *arena, Consent_Provision_Data *consent_Provision_Data);
String8
Serialize_Contract(Arena *arena, Contract *contract);
String8
Serialize_Contract_ContentDefinition(Arena *arena, Contract_ContentDefinition *contract_ContentDefinition);
String8
Serialize_Contract_Term(Arena *arena, Contract_Term *contract_Term);
String8
Serialize_Contract_Term_SecurityLabel(Arena *arena, Contract_Term_SecurityLabel *contract_Term_SecurityLabel);
String8
Serialize_Contract_Term_Offer(Arena *arena, Contract_Term_Offer *contract_Term_Offer);
String8
Serialize_Contract_Term_Offer_Party(Arena *arena, Contract_Term_Offer_Party *contract_Term_Offer_Party);
String8
Serialize_Contract_Term_Offer_Answer(Arena *arena, Contract_Term_Offer_Answer *contract_Term_Offer_Answer);
String8
Serialize_Contract_Term_Asset(Arena *arena, Contract_Term_Asset *contract_Term_Asset);
String8
Serialize_Contract_Term_Asset_Context(Arena *arena, Contract_Term_Asset_Context *contract_Term_Asset_Context);
String8
Serialize_Contract_Term_Asset_ValuedItem(Arena *arena, Contract_Term_Asset_ValuedItem *contract_Term_Asset_ValuedItem);
String8
Serialize_Contract_Term_Action(Arena *arena, Contract_Term_Action *contract_Term_Action);
String8
Serialize_Contract_Term_Action_Subject(Arena *arena, Contract_Term_Action_Subject *contract_Term_Action_Subject);
String8
Serialize_Contract_Signer(Arena *arena, Contract_Signer *contract_Signer);
String8
Serialize_Contract_Friendly(Arena *arena, Contract_Friendly *contract_Friendly);
String8
Serialize_Contract_Legal(Arena *arena, Contract_Legal *contract_Legal);
String8
Serialize_Contract_Rule(Arena *arena, Contract_Rule *contract_Rule);
String8
Serialize_Coverage(Arena *arena, Coverage *coverage);
String8
Serialize_Coverage_Class(Arena *arena, Coverage_Class *coverage_Class);
String8
Serialize_Coverage_CostToBeneficiary(Arena *arena, Coverage_CostToBeneficiary *coverage_CostToBeneficiary);
String8
Serialize_Coverage_CostToBeneficiary_Exception(Arena *arena, Coverage_CostToBeneficiary_Exception *coverage_CostToBeneficiary_Exception);
String8
Serialize_CoverageEligibilityRequest(Arena *arena, CoverageEligibilityRequest *coverageEligibilityRequest);
String8
Serialize_CoverageEligibilityRequest_SupportingInfo(Arena *arena, CoverageEligibilityRequest_SupportingInfo *coverageEligibilityRequest_SupportingInfo);
String8
Serialize_CoverageEligibilityRequest_Insurance(Arena *arena, CoverageEligibilityRequest_Insurance *coverageEligibilityRequest_Insurance);
String8
Serialize_CoverageEligibilityRequest_Item(Arena *arena, CoverageEligibilityRequest_Item *coverageEligibilityRequest_Item);
String8
Serialize_CoverageEligibilityRequest_Item_Diagnosis(Arena *arena, CoverageEligibilityRequest_Item_Diagnosis *coverageEligibilityRequest_Item_Diagnosis);
String8
Serialize_CoverageEligibilityResponse(Arena *arena, CoverageEligibilityResponse *coverageEligibilityResponse);
String8
Serialize_CoverageEligibilityResponse_Insurance(Arena *arena, CoverageEligibilityResponse_Insurance *coverageEligibilityResponse_Insurance);
String8
Serialize_CoverageEligibilityResponse_Insurance_Item(Arena *arena, CoverageEligibilityResponse_Insurance_Item *coverageEligibilityResponse_Insurance_Item);
String8
Serialize_CoverageEligibilityResponse_Insurance_Item_Benefit(Arena *arena, CoverageEligibilityResponse_Insurance_Item_Benefit *coverageEligibilityResponse_Insurance_Item_Benefit);
String8
Serialize_CoverageEligibilityResponse_Error(Arena *arena, CoverageEligibilityResponse_Error *coverageEligibilityResponse_Error);
String8
Serialize_DetectedIssue(Arena *arena, DetectedIssue *detectedIssue);
String8
Serialize_DetectedIssue_Evidence(Arena *arena, DetectedIssue_Evidence *detectedIssue_Evidence);
String8
Serialize_DetectedIssue_Mitigation(Arena *arena, DetectedIssue_Mitigation *detectedIssue_Mitigation);
String8
Serialize_Device(Arena *arena, Device *device);
String8
Serialize_Device_UdiCarrier(Arena *arena, Device_UdiCarrier *device_UdiCarrier);
String8
Serialize_Device_DeviceName(Arena *arena, Device_DeviceName *device_DeviceName);
String8
Serialize_Device_Specialization(Arena *arena, Device_Specialization *device_Specialization);
String8
Serialize_Device_Version(Arena *arena, Device_Version *device_Version);
String8
Serialize_Device_Property(Arena *arena, Device_Property *device_Property);
String8
Serialize_DeviceDefinition(Arena *arena, DeviceDefinition *deviceDefinition);
String8
Serialize_DeviceDefinition_UdiDeviceIdentifier(Arena *arena, DeviceDefinition_UdiDeviceIdentifier *deviceDefinition_UdiDeviceIdentifier);
String8
Serialize_DeviceDefinition_DeviceName(Arena *arena, DeviceDefinition_DeviceName *deviceDefinition_DeviceName);
String8
Serialize_DeviceDefinition_Specialization(Arena *arena, DeviceDefinition_Specialization *deviceDefinition_Specialization);
String8
Serialize_DeviceDefinition_Capability(Arena *arena, DeviceDefinition_Capability *deviceDefinition_Capability);
String8
Serialize_DeviceDefinition_Property(Arena *arena, DeviceDefinition_Property *deviceDefinition_Property);
String8
Serialize_DeviceDefinition_Material(Arena *arena, DeviceDefinition_Material *deviceDefinition_Material);
String8
Serialize_DeviceMetric(Arena *arena, DeviceMetric *deviceMetric);
String8
Serialize_DeviceMetric_Calibration(Arena *arena, DeviceMetric_Calibration *deviceMetric_Calibration);
String8
Serialize_DeviceRequest(Arena *arena, DeviceRequest *deviceRequest);
String8
Serialize_DeviceRequest_Parameter(Arena *arena, DeviceRequest_Parameter *deviceRequest_Parameter);
String8
Serialize_DeviceUseStatement(Arena *arena, DeviceUseStatement *deviceUseStatement);
String8
Serialize_DiagnosticReport(Arena *arena, DiagnosticReport *diagnosticReport);
String8
Serialize_DiagnosticReport_Media(Arena *arena, DiagnosticReport_Media *diagnosticReport_Media);
String8
Serialize_DocumentManifest(Arena *arena, DocumentManifest *documentManifest);
String8
Serialize_DocumentManifest_Related(Arena *arena, DocumentManifest_Related *documentManifest_Related);
String8
Serialize_DocumentReference(Arena *arena, DocumentReference *documentReference);
String8
Serialize_DocumentReference_RelatesTo(Arena *arena, DocumentReference_RelatesTo *documentReference_RelatesTo);
String8
Serialize_DocumentReference_Content(Arena *arena, DocumentReference_Content *documentReference_Content);
String8
Serialize_DocumentReference_Context(Arena *arena, DocumentReference_Context *documentReference_Context);
String8
Serialize_DomainResource(Arena *arena, DomainResource *domainResource);
String8
Serialize_EffectEvidenceSynthesis(Arena *arena, EffectEvidenceSynthesis *effectEvidenceSynthesis);
String8
Serialize_EffectEvidenceSynthesis_SampleSize(Arena *arena, EffectEvidenceSynthesis_SampleSize *effectEvidenceSynthesis_SampleSize);
String8
Serialize_EffectEvidenceSynthesis_ResultsByExposure(Arena *arena, EffectEvidenceSynthesis_ResultsByExposure *effectEvidenceSynthesis_ResultsByExposure);
String8
Serialize_EffectEvidenceSynthesis_EffectEstimate(Arena *arena, EffectEvidenceSynthesis_EffectEstimate *effectEvidenceSynthesis_EffectEstimate);
String8
Serialize_EffectEvidenceSynthesis_EffectEstimate_PrecisionEstimate(Arena *arena, EffectEvidenceSynthesis_EffectEstimate_PrecisionEstimate *effectEvidenceSynthesis_EffectEstimate_PrecisionEstimate);
String8
Serialize_EffectEvidenceSynthesis_Certainty(Arena *arena, EffectEvidenceSynthesis_Certainty *effectEvidenceSynthesis_Certainty);
String8
Serialize_EffectEvidenceSynthesis_Certainty_CertaintySubcomponent(Arena *arena, EffectEvidenceSynthesis_Certainty_CertaintySubcomponent *effectEvidenceSynthesis_Certainty_CertaintySubcomponent);
String8
Serialize_Encounter(Arena *arena, Encounter *encounter);
String8
Serialize_Encounter_StatusHistory(Arena *arena, Encounter_StatusHistory *encounter_StatusHistory);
String8
Serialize_Encounter_ClassHistory(Arena *arena, Encounter_ClassHistory *encounter_ClassHistory);
String8
Serialize_Encounter_Participant(Arena *arena, Encounter_Participant *encounter_Participant);
String8
Serialize_Encounter_Diagnosis(Arena *arena, Encounter_Diagnosis *encounter_Diagnosis);
String8
Serialize_Encounter_Hospitalization(Arena *arena, Encounter_Hospitalization *encounter_Hospitalization);
String8
Serialize_Encounter_Location(Arena *arena, Encounter_Location *encounter_Location);
String8
Serialize_Endpoint(Arena *arena, Endpoint *endpoint);
String8
Serialize_EnrollmentRequest(Arena *arena, EnrollmentRequest *enrollmentRequest);
String8
Serialize_EnrollmentResponse(Arena *arena, EnrollmentResponse *enrollmentResponse);
String8
Serialize_EpisodeOfCare(Arena *arena, EpisodeOfCare *episodeOfCare);
String8
Serialize_EpisodeOfCare_StatusHistory(Arena *arena, EpisodeOfCare_StatusHistory *episodeOfCare_StatusHistory);
String8
Serialize_EpisodeOfCare_Diagnosis(Arena *arena, EpisodeOfCare_Diagnosis *episodeOfCare_Diagnosis);
String8
Serialize_EventDefinition(Arena *arena, EventDefinition *eventDefinition);
String8
Serialize_Evidence(Arena *arena, Evidence *evidence);
String8
Serialize_EvidenceVariable(Arena *arena, EvidenceVariable *evidenceVariable);
String8
Serialize_EvidenceVariable_Characteristic(Arena *arena, EvidenceVariable_Characteristic *evidenceVariable_Characteristic);
String8
Serialize_ExampleScenario(Arena *arena, ExampleScenario *exampleScenario);
String8
Serialize_ExampleScenario_Actor(Arena *arena, ExampleScenario_Actor *exampleScenario_Actor);
String8
Serialize_ExampleScenario_Instance(Arena *arena, ExampleScenario_Instance *exampleScenario_Instance);
String8
Serialize_ExampleScenario_Instance_Version(Arena *arena, ExampleScenario_Instance_Version *exampleScenario_Instance_Version);
String8
Serialize_ExampleScenario_Instance_ContainedInstance(Arena *arena, ExampleScenario_Instance_ContainedInstance *exampleScenario_Instance_ContainedInstance);
String8
Serialize_ExampleScenario_Process(Arena *arena, ExampleScenario_Process *exampleScenario_Process);
String8
Serialize_ExampleScenario_Process_Step(Arena *arena, ExampleScenario_Process_Step *exampleScenario_Process_Step);
String8
Serialize_ExampleScenario_Process_Step_Operation(Arena *arena, ExampleScenario_Process_Step_Operation *exampleScenario_Process_Step_Operation);
String8
Serialize_ExampleScenario_Process_Step_Alternative(Arena *arena, ExampleScenario_Process_Step_Alternative *exampleScenario_Process_Step_Alternative);
String8
Serialize_ExplanationOfBenefit(Arena *arena, ExplanationOfBenefit *explanationOfBenefit);
String8
Serialize_ExplanationOfBenefit_Related(Arena *arena, ExplanationOfBenefit_Related *explanationOfBenefit_Related);
String8
Serialize_ExplanationOfBenefit_Payee(Arena *arena, ExplanationOfBenefit_Payee *explanationOfBenefit_Payee);
String8
Serialize_ExplanationOfBenefit_CareTeam(Arena *arena, ExplanationOfBenefit_CareTeam *explanationOfBenefit_CareTeam);
String8
Serialize_ExplanationOfBenefit_SupportingInfo(Arena *arena, ExplanationOfBenefit_SupportingInfo *explanationOfBenefit_SupportingInfo);
String8
Serialize_ExplanationOfBenefit_Diagnosis(Arena *arena, ExplanationOfBenefit_Diagnosis *explanationOfBenefit_Diagnosis);
String8
Serialize_ExplanationOfBenefit_Procedure(Arena *arena, ExplanationOfBenefit_Procedure *explanationOfBenefit_Procedure);
String8
Serialize_ExplanationOfBenefit_Insurance(Arena *arena, ExplanationOfBenefit_Insurance *explanationOfBenefit_Insurance);
String8
Serialize_ExplanationOfBenefit_Accident(Arena *arena, ExplanationOfBenefit_Accident *explanationOfBenefit_Accident);
String8
Serialize_ExplanationOfBenefit_Item(Arena *arena, ExplanationOfBenefit_Item *explanationOfBenefit_Item);
String8
Serialize_ExplanationOfBenefit_Item_Adjudication(Arena *arena, ExplanationOfBenefit_Item_Adjudication *explanationOfBenefit_Item_Adjudication);
String8
Serialize_ExplanationOfBenefit_Item_Detail(Arena *arena, ExplanationOfBenefit_Item_Detail *explanationOfBenefit_Item_Detail);
String8
Serialize_ExplanationOfBenefit_Item_Detail_SubDetail(Arena *arena, ExplanationOfBenefit_Item_Detail_SubDetail *explanationOfBenefit_Item_Detail_SubDetail);
String8
Serialize_ExplanationOfBenefit_AddItem(Arena *arena, ExplanationOfBenefit_AddItem *explanationOfBenefit_AddItem);
String8
Serialize_ExplanationOfBenefit_AddItem_Detail(Arena *arena, ExplanationOfBenefit_AddItem_Detail *explanationOfBenefit_AddItem_Detail);
String8
Serialize_ExplanationOfBenefit_AddItem_Detail_SubDetail(Arena *arena, ExplanationOfBenefit_AddItem_Detail_SubDetail *explanationOfBenefit_AddItem_Detail_SubDetail);
String8
Serialize_ExplanationOfBenefit_Total(Arena *arena, ExplanationOfBenefit_Total *explanationOfBenefit_Total);
String8
Serialize_ExplanationOfBenefit_Payment(Arena *arena, ExplanationOfBenefit_Payment *explanationOfBenefit_Payment);
String8
Serialize_ExplanationOfBenefit_ProcessNote(Arena *arena, ExplanationOfBenefit_ProcessNote *explanationOfBenefit_ProcessNote);
String8
Serialize_ExplanationOfBenefit_BenefitBalance(Arena *arena, ExplanationOfBenefit_BenefitBalance *explanationOfBenefit_BenefitBalance);
String8
Serialize_ExplanationOfBenefit_BenefitBalance_Financial(Arena *arena, ExplanationOfBenefit_BenefitBalance_Financial *explanationOfBenefit_BenefitBalance_Financial);
String8
Serialize_FamilyMemberHistory(Arena *arena, FamilyMemberHistory *familyMemberHistory);
String8
Serialize_FamilyMemberHistory_Condition(Arena *arena, FamilyMemberHistory_Condition *familyMemberHistory_Condition);
String8
Serialize_Flag(Arena *arena, Flag *flag);
String8
Serialize_Goal(Arena *arena, Goal *goal);
String8
Serialize_Goal_Target(Arena *arena, Goal_Target *goal_Target);
String8
Serialize_GraphDefinition(Arena *arena, GraphDefinition *graphDefinition);
String8
Serialize_GraphDefinition_Link(Arena *arena, GraphDefinition_Link *graphDefinition_Link);
String8
Serialize_GraphDefinition_Link_Target(Arena *arena, GraphDefinition_Link_Target *graphDefinition_Link_Target);
String8
Serialize_GraphDefinition_Link_Target_Compartment(Arena *arena, GraphDefinition_Link_Target_Compartment *graphDefinition_Link_Target_Compartment);
String8
Serialize_Group(Arena *arena, Group *group);
String8
Serialize_Group_Characteristic(Arena *arena, Group_Characteristic *group_Characteristic);
String8
Serialize_Group_Member(Arena *arena, Group_Member *group_Member);
String8
Serialize_GuidanceResponse(Arena *arena, GuidanceResponse *guidanceResponse);
String8
Serialize_HealthcareService(Arena *arena, HealthcareService *healthcareService);
String8
Serialize_HealthcareService_Eligibility(Arena *arena, HealthcareService_Eligibility *healthcareService_Eligibility);
String8
Serialize_HealthcareService_AvailableTime(Arena *arena, HealthcareService_AvailableTime *healthcareService_AvailableTime);
String8
Serialize_HealthcareService_NotAvailable(Arena *arena, HealthcareService_NotAvailable *healthcareService_NotAvailable);
String8
Serialize_ImagingStudy(Arena *arena, ImagingStudy *imagingStudy);
String8
Serialize_ImagingStudy_Series(Arena *arena, ImagingStudy_Series *imagingStudy_Series);
String8
Serialize_ImagingStudy_Series_Performer(Arena *arena, ImagingStudy_Series_Performer *imagingStudy_Series_Performer);
String8
Serialize_ImagingStudy_Series_Instance(Arena *arena, ImagingStudy_Series_Instance *imagingStudy_Series_Instance);
String8
Serialize_Immunization(Arena *arena, Immunization *immunization);
String8
Serialize_Immunization_Performer(Arena *arena, Immunization_Performer *immunization_Performer);
String8
Serialize_Immunization_Education(Arena *arena, Immunization_Education *immunization_Education);
String8
Serialize_Immunization_Reaction(Arena *arena, Immunization_Reaction *immunization_Reaction);
String8
Serialize_Immunization_ProtocolApplied(Arena *arena, Immunization_ProtocolApplied *immunization_ProtocolApplied);
String8
Serialize_ImmunizationEvaluation(Arena *arena, ImmunizationEvaluation *immunizationEvaluation);
String8
Serialize_ImmunizationRecommendation(Arena *arena, ImmunizationRecommendation *immunizationRecommendation);
String8
Serialize_ImmunizationRecommendation_Recommendation(Arena *arena, ImmunizationRecommendation_Recommendation *immunizationRecommendation_Recommendation);
String8
Serialize_ImmunizationRecommendation_Recommendation_DateCriterion(Arena *arena, ImmunizationRecommendation_Recommendation_DateCriterion *immunizationRecommendation_Recommendation_DateCriterion);
String8
Serialize_ImplementationGuide(Arena *arena, ImplementationGuide *implementationGuide);
String8
Serialize_ImplementationGuide_DependsOn(Arena *arena, ImplementationGuide_DependsOn *implementationGuide_DependsOn);
String8
Serialize_ImplementationGuide_Global(Arena *arena, ImplementationGuide_Global *implementationGuide_Global);
String8
Serialize_ImplementationGuide_Definition(Arena *arena, ImplementationGuide_Definition *implementationGuide_Definition);
String8
Serialize_ImplementationGuide_Definition_Grouping(Arena *arena, ImplementationGuide_Definition_Grouping *implementationGuide_Definition_Grouping);
String8
Serialize_ImplementationGuide_Definition_Resource(Arena *arena, ImplementationGuide_Definition_Resource *implementationGuide_Definition_Resource);
String8
Serialize_ImplementationGuide_Definition_Page(Arena *arena, ImplementationGuide_Definition_Page *implementationGuide_Definition_Page);
String8
Serialize_ImplementationGuide_Definition_Parameter(Arena *arena, ImplementationGuide_Definition_Parameter *implementationGuide_Definition_Parameter);
String8
Serialize_ImplementationGuide_Definition_Template(Arena *arena, ImplementationGuide_Definition_Template *implementationGuide_Definition_Template);
String8
Serialize_ImplementationGuide_Manifest(Arena *arena, ImplementationGuide_Manifest *implementationGuide_Manifest);
String8
Serialize_ImplementationGuide_Manifest_Resource(Arena *arena, ImplementationGuide_Manifest_Resource *implementationGuide_Manifest_Resource);
String8
Serialize_ImplementationGuide_Manifest_Page(Arena *arena, ImplementationGuide_Manifest_Page *implementationGuide_Manifest_Page);
String8
Serialize_InsurancePlan(Arena *arena, InsurancePlan *insurancePlan);
String8
Serialize_InsurancePlan_Contact(Arena *arena, InsurancePlan_Contact *insurancePlan_Contact);
String8
Serialize_InsurancePlan_Coverage(Arena *arena, InsurancePlan_Coverage *insurancePlan_Coverage);
String8
Serialize_InsurancePlan_Coverage_Benefit(Arena *arena, InsurancePlan_Coverage_Benefit *insurancePlan_Coverage_Benefit);
String8
Serialize_InsurancePlan_Coverage_Benefit_Limit(Arena *arena, InsurancePlan_Coverage_Benefit_Limit *insurancePlan_Coverage_Benefit_Limit);
String8
Serialize_InsurancePlan_Plan(Arena *arena, InsurancePlan_Plan *insurancePlan_Plan);
String8
Serialize_InsurancePlan_Plan_GeneralCost(Arena *arena, InsurancePlan_Plan_GeneralCost *insurancePlan_Plan_GeneralCost);
String8
Serialize_InsurancePlan_Plan_SpecificCost(Arena *arena, InsurancePlan_Plan_SpecificCost *insurancePlan_Plan_SpecificCost);
String8
Serialize_InsurancePlan_Plan_SpecificCost_Benefit(Arena *arena, InsurancePlan_Plan_SpecificCost_Benefit *insurancePlan_Plan_SpecificCost_Benefit);
String8
Serialize_InsurancePlan_Plan_SpecificCost_Benefit_Cost(Arena *arena, InsurancePlan_Plan_SpecificCost_Benefit_Cost *insurancePlan_Plan_SpecificCost_Benefit_Cost);
String8
Serialize_Invoice(Arena *arena, Invoice *invoice);
String8
Serialize_Invoice_Participant(Arena *arena, Invoice_Participant *invoice_Participant);
String8
Serialize_Invoice_LineItem(Arena *arena, Invoice_LineItem *invoice_LineItem);
String8
Serialize_Invoice_LineItem_PriceComponent(Arena *arena, Invoice_LineItem_PriceComponent *invoice_LineItem_PriceComponent);
String8
Serialize_Library(Arena *arena, Library *library);
String8
Serialize_Linkage(Arena *arena, Linkage *linkage);
String8
Serialize_Linkage_Item(Arena *arena, Linkage_Item *linkage_Item);
String8
Serialize_List(Arena *arena, List *list);
String8
Serialize_List_Entry(Arena *arena, List_Entry *list_Entry);
String8
Serialize_Location(Arena *arena, Location *location);
String8
Serialize_Location_Position(Arena *arena, Location_Position *location_Position);
String8
Serialize_Location_HoursOfOperation(Arena *arena, Location_HoursOfOperation *location_HoursOfOperation);
String8
Serialize_Measure(Arena *arena, Measure *measure);
String8
Serialize_Measure_Group(Arena *arena, Measure_Group *measure_Group);
String8
Serialize_Measure_Group_Population(Arena *arena, Measure_Group_Population *measure_Group_Population);
String8
Serialize_Measure_Group_Stratifier(Arena *arena, Measure_Group_Stratifier *measure_Group_Stratifier);
String8
Serialize_Measure_Group_Stratifier_Component(Arena *arena, Measure_Group_Stratifier_Component *measure_Group_Stratifier_Component);
String8
Serialize_Measure_SupplementalData(Arena *arena, Measure_SupplementalData *measure_SupplementalData);
String8
Serialize_MeasureReport(Arena *arena, MeasureReport *measureReport);
String8
Serialize_MeasureReport_Group(Arena *arena, MeasureReport_Group *measureReport_Group);
String8
Serialize_MeasureReport_Group_Population(Arena *arena, MeasureReport_Group_Population *measureReport_Group_Population);
String8
Serialize_MeasureReport_Group_Stratifier(Arena *arena, MeasureReport_Group_Stratifier *measureReport_Group_Stratifier);
String8
Serialize_MeasureReport_Group_Stratifier_Stratum(Arena *arena, MeasureReport_Group_Stratifier_Stratum *measureReport_Group_Stratifier_Stratum);
String8
Serialize_MeasureReport_Group_Stratifier_Stratum_Component(Arena *arena, MeasureReport_Group_Stratifier_Stratum_Component *measureReport_Group_Stratifier_Stratum_Component);
String8
Serialize_MeasureReport_Group_Stratifier_Stratum_Population(Arena *arena, MeasureReport_Group_Stratifier_Stratum_Population *measureReport_Group_Stratifier_Stratum_Population);
String8
Serialize_Media(Arena *arena, Media *media);
String8
Serialize_Medication(Arena *arena, Medication *medication);
String8
Serialize_Medication_Ingredient(Arena *arena, Medication_Ingredient *medication_Ingredient);
String8
Serialize_Medication_Batch(Arena *arena, Medication_Batch *medication_Batch);
String8
Serialize_MedicationAdministration(Arena *arena, MedicationAdministration *medicationAdministration);
String8
Serialize_MedicationAdministration_Performer(Arena *arena, MedicationAdministration_Performer *medicationAdministration_Performer);
String8
Serialize_MedicationAdministration_Dosage(Arena *arena, MedicationAdministration_Dosage *medicationAdministration_Dosage);
String8
Serialize_MedicationDispense(Arena *arena, MedicationDispense *medicationDispense);
String8
Serialize_MedicationDispense_Performer(Arena *arena, MedicationDispense_Performer *medicationDispense_Performer);
String8
Serialize_MedicationDispense_Substitution(Arena *arena, MedicationDispense_Substitution *medicationDispense_Substitution);
String8
Serialize_MedicationKnowledge(Arena *arena, MedicationKnowledge *medicationKnowledge);
String8
Serialize_MedicationKnowledge_RelatedMedicationKnowledge(Arena *arena, MedicationKnowledge_RelatedMedicationKnowledge *medicationKnowledge_RelatedMedicationKnowledge);
String8
Serialize_MedicationKnowledge_Monograph(Arena *arena, MedicationKnowledge_Monograph *medicationKnowledge_Monograph);
String8
Serialize_MedicationKnowledge_Ingredient(Arena *arena, MedicationKnowledge_Ingredient *medicationKnowledge_Ingredient);
String8
Serialize_MedicationKnowledge_Cost(Arena *arena, MedicationKnowledge_Cost *medicationKnowledge_Cost);
String8
Serialize_MedicationKnowledge_MonitoringProgram(Arena *arena, MedicationKnowledge_MonitoringProgram *medicationKnowledge_MonitoringProgram);
String8
Serialize_MedicationKnowledge_AdministrationGuidelines(Arena *arena, MedicationKnowledge_AdministrationGuidelines *medicationKnowledge_AdministrationGuidelines);
String8
Serialize_MedicationKnowledge_AdministrationGuidelines_Dosage(Arena *arena, MedicationKnowledge_AdministrationGuidelines_Dosage *medicationKnowledge_AdministrationGuidelines_Dosage);
String8
Serialize_MedicationKnowledge_AdministrationGuidelines_PatientCharacteristics(Arena *arena, MedicationKnowledge_AdministrationGuidelines_PatientCharacteristics *medicationKnowledge_AdministrationGuidelines_PatientCharacteristics);
String8
Serialize_MedicationKnowledge_MedicineClassification(Arena *arena, MedicationKnowledge_MedicineClassification *medicationKnowledge_MedicineClassification);
String8
Serialize_MedicationKnowledge_Packaging(Arena *arena, MedicationKnowledge_Packaging *medicationKnowledge_Packaging);
String8
Serialize_MedicationKnowledge_DrugCharacteristic(Arena *arena, MedicationKnowledge_DrugCharacteristic *medicationKnowledge_DrugCharacteristic);
String8
Serialize_MedicationKnowledge_Regulatory(Arena *arena, MedicationKnowledge_Regulatory *medicationKnowledge_Regulatory);
String8
Serialize_MedicationKnowledge_Regulatory_Substitution(Arena *arena, MedicationKnowledge_Regulatory_Substitution *medicationKnowledge_Regulatory_Substitution);
String8
Serialize_MedicationKnowledge_Regulatory_Schedule(Arena *arena, MedicationKnowledge_Regulatory_Schedule *medicationKnowledge_Regulatory_Schedule);
String8
Serialize_MedicationKnowledge_Regulatory_MaxDispense(Arena *arena, MedicationKnowledge_Regulatory_MaxDispense *medicationKnowledge_Regulatory_MaxDispense);
String8
Serialize_MedicationKnowledge_Kinetics(Arena *arena, MedicationKnowledge_Kinetics *medicationKnowledge_Kinetics);
String8
Serialize_MedicationRequest(Arena *arena, MedicationRequest *medicationRequest);
String8
Serialize_MedicationRequest_DispenseRequest(Arena *arena, MedicationRequest_DispenseRequest *medicationRequest_DispenseRequest);
String8
Serialize_MedicationRequest_DispenseRequest_InitialFill(Arena *arena, MedicationRequest_DispenseRequest_InitialFill *medicationRequest_DispenseRequest_InitialFill);
String8
Serialize_MedicationRequest_Substitution(Arena *arena, MedicationRequest_Substitution *medicationRequest_Substitution);
String8
Serialize_MedicationStatement(Arena *arena, MedicationStatement *medicationStatement);
String8
Serialize_MedicinalProduct(Arena *arena, MedicinalProduct *medicinalProduct);
String8
Serialize_MedicinalProduct_Name(Arena *arena, MedicinalProduct_Name *medicinalProduct_Name);
String8
Serialize_MedicinalProduct_Name_NamePart(Arena *arena, MedicinalProduct_Name_NamePart *medicinalProduct_Name_NamePart);
String8
Serialize_MedicinalProduct_Name_CountryLanguage(Arena *arena, MedicinalProduct_Name_CountryLanguage *medicinalProduct_Name_CountryLanguage);
String8
Serialize_MedicinalProduct_ManufacturingBusinessOperation(Arena *arena, MedicinalProduct_ManufacturingBusinessOperation *medicinalProduct_ManufacturingBusinessOperation);
String8
Serialize_MedicinalProduct_SpecialDesignation(Arena *arena, MedicinalProduct_SpecialDesignation *medicinalProduct_SpecialDesignation);
String8
Serialize_MedicinalProductAuthorization(Arena *arena, MedicinalProductAuthorization *medicinalProductAuthorization);
String8
Serialize_MedicinalProductAuthorization_JurisdictionalAuthorization(Arena *arena, MedicinalProductAuthorization_JurisdictionalAuthorization *medicinalProductAuthorization_JurisdictionalAuthorization);
String8
Serialize_MedicinalProductAuthorization_Procedure(Arena *arena, MedicinalProductAuthorization_Procedure *medicinalProductAuthorization_Procedure);
String8
Serialize_MedicinalProductContraindication(Arena *arena, MedicinalProductContraindication *medicinalProductContraindication);
String8
Serialize_MedicinalProductContraindication_OtherTherapy(Arena *arena, MedicinalProductContraindication_OtherTherapy *medicinalProductContraindication_OtherTherapy);
String8
Serialize_MedicinalProductIndication(Arena *arena, MedicinalProductIndication *medicinalProductIndication);
String8
Serialize_MedicinalProductIndication_OtherTherapy(Arena *arena, MedicinalProductIndication_OtherTherapy *medicinalProductIndication_OtherTherapy);
String8
Serialize_MedicinalProductIngredient(Arena *arena, MedicinalProductIngredient *medicinalProductIngredient);
String8
Serialize_MedicinalProductIngredient_SpecifiedSubstance(Arena *arena, MedicinalProductIngredient_SpecifiedSubstance *medicinalProductIngredient_SpecifiedSubstance);
String8
Serialize_MedicinalProductIngredient_SpecifiedSubstance_Strength(Arena *arena, MedicinalProductIngredient_SpecifiedSubstance_Strength *medicinalProductIngredient_SpecifiedSubstance_Strength);
String8
Serialize_MedicinalProductIngredient_SpecifiedSubstance_Strength_ReferenceStrength(Arena *arena, MedicinalProductIngredient_SpecifiedSubstance_Strength_ReferenceStrength *medicinalProductIngredient_SpecifiedSubstance_Strength_ReferenceStrength);
String8
Serialize_MedicinalProductIngredient_Substance(Arena *arena, MedicinalProductIngredient_Substance *medicinalProductIngredient_Substance);
String8
Serialize_MedicinalProductInteraction(Arena *arena, MedicinalProductInteraction *medicinalProductInteraction);
String8
Serialize_MedicinalProductInteraction_Interactant(Arena *arena, MedicinalProductInteraction_Interactant *medicinalProductInteraction_Interactant);
String8
Serialize_MedicinalProductManufactured(Arena *arena, MedicinalProductManufactured *medicinalProductManufactured);
String8
Serialize_MedicinalProductPackaged(Arena *arena, MedicinalProductPackaged *medicinalProductPackaged);
String8
Serialize_MedicinalProductPackaged_BatchIdentifier(Arena *arena, MedicinalProductPackaged_BatchIdentifier *medicinalProductPackaged_BatchIdentifier);
String8
Serialize_MedicinalProductPackaged_PackageItem(Arena *arena, MedicinalProductPackaged_PackageItem *medicinalProductPackaged_PackageItem);
String8
Serialize_MedicinalProductPharmaceutical(Arena *arena, MedicinalProductPharmaceutical *medicinalProductPharmaceutical);
String8
Serialize_MedicinalProductPharmaceutical_Characteristics(Arena *arena, MedicinalProductPharmaceutical_Characteristics *medicinalProductPharmaceutical_Characteristics);
String8
Serialize_MedicinalProductPharmaceutical_RouteOfAdministration(Arena *arena, MedicinalProductPharmaceutical_RouteOfAdministration *medicinalProductPharmaceutical_RouteOfAdministration);
String8
Serialize_MedicinalProductPharmaceutical_RouteOfAdministration_TargetSpecies(Arena *arena, MedicinalProductPharmaceutical_RouteOfAdministration_TargetSpecies *medicinalProductPharmaceutical_RouteOfAdministration_TargetSpecies);
String8
Serialize_MedicinalProductPharmaceutical_RouteOfAdministration_TargetSpecies_WithdrawalPeriod(Arena *arena, MedicinalProductPharmaceutical_RouteOfAdministration_TargetSpecies_WithdrawalPeriod *medicinalProductPharmaceutical_RouteOfAdministration_TargetSpecies_WithdrawalPeriod);
String8
Serialize_MedicinalProductUndesirableEffect(Arena *arena, MedicinalProductUndesirableEffect *medicinalProductUndesirableEffect);
String8
Serialize_MessageDefinition(Arena *arena, MessageDefinition *messageDefinition);
String8
Serialize_MessageDefinition_Focus(Arena *arena, MessageDefinition_Focus *messageDefinition_Focus);
String8
Serialize_MessageDefinition_AllowedResponse(Arena *arena, MessageDefinition_AllowedResponse *messageDefinition_AllowedResponse);
String8
Serialize_MessageHeader(Arena *arena, MessageHeader *messageHeader);
String8
Serialize_MessageHeader_Destination(Arena *arena, MessageHeader_Destination *messageHeader_Destination);
String8
Serialize_MessageHeader_Source(Arena *arena, MessageHeader_Source *messageHeader_Source);
String8
Serialize_MessageHeader_Response(Arena *arena, MessageHeader_Response *messageHeader_Response);
String8
Serialize_MolecularSequence(Arena *arena, MolecularSequence *molecularSequence);
String8
Serialize_MolecularSequence_ReferenceSeq(Arena *arena, MolecularSequence_ReferenceSeq *molecularSequence_ReferenceSeq);
String8
Serialize_MolecularSequence_Variant(Arena *arena, MolecularSequence_Variant *molecularSequence_Variant);
String8
Serialize_MolecularSequence_Quality(Arena *arena, MolecularSequence_Quality *molecularSequence_Quality);
String8
Serialize_MolecularSequence_Quality_Roc(Arena *arena, MolecularSequence_Quality_Roc *molecularSequence_Quality_Roc);
String8
Serialize_MolecularSequence_Repository(Arena *arena, MolecularSequence_Repository *molecularSequence_Repository);
String8
Serialize_MolecularSequence_StructureVariant(Arena *arena, MolecularSequence_StructureVariant *molecularSequence_StructureVariant);
String8
Serialize_MolecularSequence_StructureVariant_Outer(Arena *arena, MolecularSequence_StructureVariant_Outer *molecularSequence_StructureVariant_Outer);
String8
Serialize_MolecularSequence_StructureVariant_Inner(Arena *arena, MolecularSequence_StructureVariant_Inner *molecularSequence_StructureVariant_Inner);
String8
Serialize_NamingSystem(Arena *arena, NamingSystem *namingSystem);
String8
Serialize_NamingSystem_UniqueId(Arena *arena, NamingSystem_UniqueId *namingSystem_UniqueId);
String8
Serialize_NutritionOrder(Arena *arena, NutritionOrder *nutritionOrder);
String8
Serialize_NutritionOrder_OralDiet(Arena *arena, NutritionOrder_OralDiet *nutritionOrder_OralDiet);
String8
Serialize_NutritionOrder_OralDiet_Nutrient(Arena *arena, NutritionOrder_OralDiet_Nutrient *nutritionOrder_OralDiet_Nutrient);
String8
Serialize_NutritionOrder_OralDiet_Texture(Arena *arena, NutritionOrder_OralDiet_Texture *nutritionOrder_OralDiet_Texture);
String8
Serialize_NutritionOrder_Supplement(Arena *arena, NutritionOrder_Supplement *nutritionOrder_Supplement);
String8
Serialize_NutritionOrder_EnteralFormula(Arena *arena, NutritionOrder_EnteralFormula *nutritionOrder_EnteralFormula);
String8
Serialize_NutritionOrder_EnteralFormula_Administration(Arena *arena, NutritionOrder_EnteralFormula_Administration *nutritionOrder_EnteralFormula_Administration);
String8
Serialize_Observation(Arena *arena, Observation *observation);
String8
Serialize_Observation_ReferenceRange(Arena *arena, Observation_ReferenceRange *observation_ReferenceRange);
String8
Serialize_Observation_Component(Arena *arena, Observation_Component *observation_Component);
String8
Serialize_ObservationDefinition(Arena *arena, ObservationDefinition *observationDefinition);
String8
Serialize_ObservationDefinition_QuantitativeDetails(Arena *arena, ObservationDefinition_QuantitativeDetails *observationDefinition_QuantitativeDetails);
String8
Serialize_ObservationDefinition_QualifiedInterval(Arena *arena, ObservationDefinition_QualifiedInterval *observationDefinition_QualifiedInterval);
String8
Serialize_OperationDefinition(Arena *arena, OperationDefinition *operationDefinition);
String8
Serialize_OperationDefinition_Parameter(Arena *arena, OperationDefinition_Parameter *operationDefinition_Parameter);
String8
Serialize_OperationDefinition_Parameter_Binding(Arena *arena, OperationDefinition_Parameter_Binding *operationDefinition_Parameter_Binding);
String8
Serialize_OperationDefinition_Parameter_ReferencedFrom(Arena *arena, OperationDefinition_Parameter_ReferencedFrom *operationDefinition_Parameter_ReferencedFrom);
String8
Serialize_OperationDefinition_Overload(Arena *arena, OperationDefinition_Overload *operationDefinition_Overload);
String8
Serialize_OperationOutcome(Arena *arena, OperationOutcome *operationOutcome);
String8
Serialize_OperationOutcome_Issue(Arena *arena, OperationOutcome_Issue *operationOutcome_Issue);
String8
Serialize_Organization(Arena *arena, Organization *organization);
String8
Serialize_Organization_Contact(Arena *arena, Organization_Contact *organization_Contact);
String8
Serialize_OrganizationAffiliation(Arena *arena, OrganizationAffiliation *organizationAffiliation);
String8
Serialize_Parameters(Arena *arena, Parameters *parameters);
String8
Serialize_Parameters_Parameter(Arena *arena, Parameters_Parameter *parameters_Parameter);
String8
Serialize_Patient(Arena *arena, Patient *patient);
String8
Serialize_Patient_Contact(Arena *arena, Patient_Contact *patient_Contact);
String8
Serialize_Patient_Communication(Arena *arena, Patient_Communication *patient_Communication);
String8
Serialize_Patient_Link(Arena *arena, Patient_Link *patient_Link);
String8
Serialize_PaymentNotice(Arena *arena, PaymentNotice *paymentNotice);
String8
Serialize_PaymentReconciliation(Arena *arena, PaymentReconciliation *paymentReconciliation);
String8
Serialize_PaymentReconciliation_Detail(Arena *arena, PaymentReconciliation_Detail *paymentReconciliation_Detail);
String8
Serialize_PaymentReconciliation_ProcessNote(Arena *arena, PaymentReconciliation_ProcessNote *paymentReconciliation_ProcessNote);
String8
Serialize_Person(Arena *arena, Person *person);
String8
Serialize_Person_Link(Arena *arena, Person_Link *person_Link);
String8
Serialize_PlanDefinition(Arena *arena, PlanDefinition *planDefinition);
String8
Serialize_PlanDefinition_Goal(Arena *arena, PlanDefinition_Goal *planDefinition_Goal);
String8
Serialize_PlanDefinition_Goal_Target(Arena *arena, PlanDefinition_Goal_Target *planDefinition_Goal_Target);
String8
Serialize_PlanDefinition_Action(Arena *arena, PlanDefinition_Action *planDefinition_Action);
String8
Serialize_PlanDefinition_Action_Condition(Arena *arena, PlanDefinition_Action_Condition *planDefinition_Action_Condition);
String8
Serialize_PlanDefinition_Action_RelatedAction(Arena *arena, PlanDefinition_Action_RelatedAction *planDefinition_Action_RelatedAction);
String8
Serialize_PlanDefinition_Action_Participant(Arena *arena, PlanDefinition_Action_Participant *planDefinition_Action_Participant);
String8
Serialize_PlanDefinition_Action_DynamicValue(Arena *arena, PlanDefinition_Action_DynamicValue *planDefinition_Action_DynamicValue);
String8
Serialize_Practitioner(Arena *arena, Practitioner *practitioner);
String8
Serialize_Practitioner_Qualification(Arena *arena, Practitioner_Qualification *practitioner_Qualification);
String8
Serialize_PractitionerRole(Arena *arena, PractitionerRole *practitionerRole);
String8
Serialize_PractitionerRole_AvailableTime(Arena *arena, PractitionerRole_AvailableTime *practitionerRole_AvailableTime);
String8
Serialize_PractitionerRole_NotAvailable(Arena *arena, PractitionerRole_NotAvailable *practitionerRole_NotAvailable);
String8
Serialize_Procedure(Arena *arena, Procedure *procedure);
String8
Serialize_Procedure_Performer(Arena *arena, Procedure_Performer *procedure_Performer);
String8
Serialize_Procedure_FocalDevice(Arena *arena, Procedure_FocalDevice *procedure_FocalDevice);
String8
Serialize_Provenance(Arena *arena, Provenance *provenance);
String8
Serialize_Provenance_Agent(Arena *arena, Provenance_Agent *provenance_Agent);
String8
Serialize_Provenance_Entity(Arena *arena, Provenance_Entity *provenance_Entity);
String8
Serialize_Questionnaire(Arena *arena, Questionnaire *questionnaire);
String8
Serialize_Questionnaire_Item(Arena *arena, Questionnaire_Item *questionnaire_Item);
String8
Serialize_Questionnaire_Item_EnableWhen(Arena *arena, Questionnaire_Item_EnableWhen *questionnaire_Item_EnableWhen);
String8
Serialize_Questionnaire_Item_AnswerOption(Arena *arena, Questionnaire_Item_AnswerOption *questionnaire_Item_AnswerOption);
String8
Serialize_Questionnaire_Item_Initial(Arena *arena, Questionnaire_Item_Initial *questionnaire_Item_Initial);
String8
Serialize_QuestionnaireResponse(Arena *arena, QuestionnaireResponse *questionnaireResponse);
String8
Serialize_QuestionnaireResponse_Item(Arena *arena, QuestionnaireResponse_Item *questionnaireResponse_Item);
String8
Serialize_QuestionnaireResponse_Item_Answer(Arena *arena, QuestionnaireResponse_Item_Answer *questionnaireResponse_Item_Answer);
String8
Serialize_RelatedPerson(Arena *arena, RelatedPerson *relatedPerson);
String8
Serialize_RelatedPerson_Communication(Arena *arena, RelatedPerson_Communication *relatedPerson_Communication);
String8
Serialize_RequestGroup(Arena *arena, RequestGroup *requestGroup);
String8
Serialize_RequestGroup_Action(Arena *arena, RequestGroup_Action *requestGroup_Action);
String8
Serialize_RequestGroup_Action_Condition(Arena *arena, RequestGroup_Action_Condition *requestGroup_Action_Condition);
String8
Serialize_RequestGroup_Action_RelatedAction(Arena *arena, RequestGroup_Action_RelatedAction *requestGroup_Action_RelatedAction);
String8
Serialize_ResearchDefinition(Arena *arena, ResearchDefinition *researchDefinition);
String8
Serialize_ResearchElementDefinition(Arena *arena, ResearchElementDefinition *researchElementDefinition);
String8
Serialize_ResearchElementDefinition_Characteristic(Arena *arena, ResearchElementDefinition_Characteristic *researchElementDefinition_Characteristic);
String8
Serialize_ResearchStudy(Arena *arena, ResearchStudy *researchStudy);
String8
Serialize_ResearchStudy_Arm(Arena *arena, ResearchStudy_Arm *researchStudy_Arm);
String8
Serialize_ResearchStudy_Objective(Arena *arena, ResearchStudy_Objective *researchStudy_Objective);
String8
Serialize_ResearchSubject(Arena *arena, ResearchSubject *researchSubject);
String8
Serialize_RiskAssessment(Arena *arena, RiskAssessment *riskAssessment);
String8
Serialize_RiskAssessment_Prediction(Arena *arena, RiskAssessment_Prediction *riskAssessment_Prediction);
String8
Serialize_RiskEvidenceSynthesis(Arena *arena, RiskEvidenceSynthesis *riskEvidenceSynthesis);
String8
Serialize_RiskEvidenceSynthesis_SampleSize(Arena *arena, RiskEvidenceSynthesis_SampleSize *riskEvidenceSynthesis_SampleSize);
String8
Serialize_RiskEvidenceSynthesis_RiskEstimate(Arena *arena, RiskEvidenceSynthesis_RiskEstimate *riskEvidenceSynthesis_RiskEstimate);
String8
Serialize_RiskEvidenceSynthesis_RiskEstimate_PrecisionEstimate(Arena *arena, RiskEvidenceSynthesis_RiskEstimate_PrecisionEstimate *riskEvidenceSynthesis_RiskEstimate_PrecisionEstimate);
String8
Serialize_RiskEvidenceSynthesis_Certainty(Arena *arena, RiskEvidenceSynthesis_Certainty *riskEvidenceSynthesis_Certainty);
String8
Serialize_RiskEvidenceSynthesis_Certainty_CertaintySubcomponent(Arena *arena, RiskEvidenceSynthesis_Certainty_CertaintySubcomponent *riskEvidenceSynthesis_Certainty_CertaintySubcomponent);
String8
Serialize_Schedule(Arena *arena, Schedule *schedule);
String8
Serialize_SearchParameter(Arena *arena, SearchParameter *searchParameter);
String8
Serialize_SearchParameter_Component(Arena *arena, SearchParameter_Component *searchParameter_Component);
String8
Serialize_ServiceRequest(Arena *arena, ServiceRequest *serviceRequest);
String8
Serialize_Slot(Arena *arena, Slot *slot);
String8
Serialize_Specimen(Arena *arena, Specimen *specimen);
String8
Serialize_Specimen_Collection(Arena *arena, Specimen_Collection *specimen_Collection);
String8
Serialize_Specimen_Processing(Arena *arena, Specimen_Processing *specimen_Processing);
String8
Serialize_Specimen_Container(Arena *arena, Specimen_Container *specimen_Container);
String8
Serialize_SpecimenDefinition(Arena *arena, SpecimenDefinition *specimenDefinition);
String8
Serialize_SpecimenDefinition_TypeTested(Arena *arena, SpecimenDefinition_TypeTested *specimenDefinition_TypeTested);
String8
Serialize_SpecimenDefinition_TypeTested_Container(Arena *arena, SpecimenDefinition_TypeTested_Container *specimenDefinition_TypeTested_Container);
String8
Serialize_SpecimenDefinition_TypeTested_Container_Additive(Arena *arena, SpecimenDefinition_TypeTested_Container_Additive *specimenDefinition_TypeTested_Container_Additive);
String8
Serialize_SpecimenDefinition_TypeTested_Handling(Arena *arena, SpecimenDefinition_TypeTested_Handling *specimenDefinition_TypeTested_Handling);
String8
Serialize_StructureDefinition(Arena *arena, StructureDefinition *structureDefinition);
String8
Serialize_StructureDefinition_Mapping(Arena *arena, StructureDefinition_Mapping *structureDefinition_Mapping);
String8
Serialize_StructureDefinition_Context(Arena *arena, StructureDefinition_Context *structureDefinition_Context);
String8
Serialize_StructureDefinition_Snapshot(Arena *arena, StructureDefinition_Snapshot *structureDefinition_Snapshot);
String8
Serialize_StructureDefinition_Differential(Arena *arena, StructureDefinition_Differential *structureDefinition_Differential);
String8
Serialize_StructureMap(Arena *arena, StructureMap *structureMap);
String8
Serialize_StructureMap_Structure(Arena *arena, StructureMap_Structure *structureMap_Structure);
String8
Serialize_StructureMap_Group(Arena *arena, StructureMap_Group *structureMap_Group);
String8
Serialize_StructureMap_Group_Input(Arena *arena, StructureMap_Group_Input *structureMap_Group_Input);
String8
Serialize_StructureMap_Group_Rule(Arena *arena, StructureMap_Group_Rule *structureMap_Group_Rule);
String8
Serialize_StructureMap_Group_Rule_Source(Arena *arena, StructureMap_Group_Rule_Source *structureMap_Group_Rule_Source);
String8
Serialize_StructureMap_Group_Rule_Target(Arena *arena, StructureMap_Group_Rule_Target *structureMap_Group_Rule_Target);
String8
Serialize_StructureMap_Group_Rule_Target_Parameter(Arena *arena, StructureMap_Group_Rule_Target_Parameter *structureMap_Group_Rule_Target_Parameter);
String8
Serialize_StructureMap_Group_Rule_Dependent(Arena *arena, StructureMap_Group_Rule_Dependent *structureMap_Group_Rule_Dependent);
String8
Serialize_Subscription(Arena *arena, Subscription *subscription);
String8
Serialize_Subscription_Channel(Arena *arena, Subscription_Channel *subscription_Channel);
String8
Serialize_Substance(Arena *arena, Substance *substance);
String8
Serialize_Substance_Instance(Arena *arena, Substance_Instance *substance_Instance);
String8
Serialize_Substance_Ingredient(Arena *arena, Substance_Ingredient *substance_Ingredient);
String8
Serialize_SubstanceNucleicAcid(Arena *arena, SubstanceNucleicAcid *substanceNucleicAcid);
String8
Serialize_SubstanceNucleicAcid_Subunit(Arena *arena, SubstanceNucleicAcid_Subunit *substanceNucleicAcid_Subunit);
String8
Serialize_SubstanceNucleicAcid_Subunit_Linkage(Arena *arena, SubstanceNucleicAcid_Subunit_Linkage *substanceNucleicAcid_Subunit_Linkage);
String8
Serialize_SubstanceNucleicAcid_Subunit_Sugar(Arena *arena, SubstanceNucleicAcid_Subunit_Sugar *substanceNucleicAcid_Subunit_Sugar);
String8
Serialize_SubstancePolymer(Arena *arena, SubstancePolymer *substancePolymer);
String8
Serialize_SubstancePolymer_MonomerSet(Arena *arena, SubstancePolymer_MonomerSet *substancePolymer_MonomerSet);
String8
Serialize_SubstancePolymer_MonomerSet_StartingMaterial(Arena *arena, SubstancePolymer_MonomerSet_StartingMaterial *substancePolymer_MonomerSet_StartingMaterial);
String8
Serialize_SubstancePolymer_Repeat(Arena *arena, SubstancePolymer_Repeat *substancePolymer_Repeat);
String8
Serialize_SubstancePolymer_Repeat_RepeatUnit(Arena *arena, SubstancePolymer_Repeat_RepeatUnit *substancePolymer_Repeat_RepeatUnit);
String8
Serialize_SubstancePolymer_Repeat_RepeatUnit_DegreeOfPolymerisation(Arena *arena, SubstancePolymer_Repeat_RepeatUnit_DegreeOfPolymerisation *substancePolymer_Repeat_RepeatUnit_DegreeOfPolymerisation);
String8
Serialize_SubstancePolymer_Repeat_RepeatUnit_StructuralRepresentation(Arena *arena, SubstancePolymer_Repeat_RepeatUnit_StructuralRepresentation *substancePolymer_Repeat_RepeatUnit_StructuralRepresentation);
String8
Serialize_SubstanceProtein(Arena *arena, SubstanceProtein *substanceProtein);
String8
Serialize_SubstanceProtein_Subunit(Arena *arena, SubstanceProtein_Subunit *substanceProtein_Subunit);
String8
Serialize_SubstanceReferenceInformation(Arena *arena, SubstanceReferenceInformation *substanceReferenceInformation);
String8
Serialize_SubstanceReferenceInformation_Gene(Arena *arena, SubstanceReferenceInformation_Gene *substanceReferenceInformation_Gene);
String8
Serialize_SubstanceReferenceInformation_GeneElement(Arena *arena, SubstanceReferenceInformation_GeneElement *substanceReferenceInformation_GeneElement);
String8
Serialize_SubstanceReferenceInformation_Classification(Arena *arena, SubstanceReferenceInformation_Classification *substanceReferenceInformation_Classification);
String8
Serialize_SubstanceReferenceInformation_Target(Arena *arena, SubstanceReferenceInformation_Target *substanceReferenceInformation_Target);
String8
Serialize_SubstanceSourceMaterial(Arena *arena, SubstanceSourceMaterial *substanceSourceMaterial);
String8
Serialize_SubstanceSourceMaterial_FractionDescription(Arena *arena, SubstanceSourceMaterial_FractionDescription *substanceSourceMaterial_FractionDescription);
String8
Serialize_SubstanceSourceMaterial_Organism(Arena *arena, SubstanceSourceMaterial_Organism *substanceSourceMaterial_Organism);
String8
Serialize_SubstanceSourceMaterial_Organism_Author(Arena *arena, SubstanceSourceMaterial_Organism_Author *substanceSourceMaterial_Organism_Author);
String8
Serialize_SubstanceSourceMaterial_Organism_Hybrid(Arena *arena, SubstanceSourceMaterial_Organism_Hybrid *substanceSourceMaterial_Organism_Hybrid);
String8
Serialize_SubstanceSourceMaterial_Organism_OrganismGeneral(Arena *arena, SubstanceSourceMaterial_Organism_OrganismGeneral *substanceSourceMaterial_Organism_OrganismGeneral);
String8
Serialize_SubstanceSourceMaterial_PartDescription(Arena *arena, SubstanceSourceMaterial_PartDescription *substanceSourceMaterial_PartDescription);
String8
Serialize_SubstanceSpecification(Arena *arena, SubstanceSpecification *substanceSpecification);
String8
Serialize_SubstanceSpecification_Moiety(Arena *arena, SubstanceSpecification_Moiety *substanceSpecification_Moiety);
String8
Serialize_SubstanceSpecification_Property(Arena *arena, SubstanceSpecification_Property *substanceSpecification_Property);
String8
Serialize_SubstanceSpecification_Structure(Arena *arena, SubstanceSpecification_Structure *substanceSpecification_Structure);
String8
Serialize_SubstanceSpecification_Structure_Isotope(Arena *arena, SubstanceSpecification_Structure_Isotope *substanceSpecification_Structure_Isotope);
String8
Serialize_SubstanceSpecification_Structure_Isotope_MolecularWeight(Arena *arena, SubstanceSpecification_Structure_Isotope_MolecularWeight *substanceSpecification_Structure_Isotope_MolecularWeight);
String8
Serialize_SubstanceSpecification_Structure_Representation(Arena *arena, SubstanceSpecification_Structure_Representation *substanceSpecification_Structure_Representation);
String8
Serialize_SubstanceSpecification_Code(Arena *arena, SubstanceSpecification_Code *substanceSpecification_Code);
String8
Serialize_SubstanceSpecification_Name(Arena *arena, SubstanceSpecification_Name *substanceSpecification_Name);
String8
Serialize_SubstanceSpecification_Name_Official(Arena *arena, SubstanceSpecification_Name_Official *substanceSpecification_Name_Official);
String8
Serialize_SubstanceSpecification_Relationship(Arena *arena, SubstanceSpecification_Relationship *substanceSpecification_Relationship);
String8
Serialize_SupplyDelivery(Arena *arena, SupplyDelivery *supplyDelivery);
String8
Serialize_SupplyDelivery_SuppliedItem(Arena *arena, SupplyDelivery_SuppliedItem *supplyDelivery_SuppliedItem);
String8
Serialize_SupplyRequest(Arena *arena, SupplyRequest *supplyRequest);
String8
Serialize_SupplyRequest_Parameter(Arena *arena, SupplyRequest_Parameter *supplyRequest_Parameter);
String8
Serialize_Task(Arena *arena, Task *task);
String8
Serialize_Task_Restriction(Arena *arena, Task_Restriction *task_Restriction);
String8
Serialize_Task_Input(Arena *arena, Task_Input *task_Input);
String8
Serialize_Task_Output(Arena *arena, Task_Output *task_Output);
String8
Serialize_TerminologyCapabilities(Arena *arena, TerminologyCapabilities *terminologyCapabilities);
String8
Serialize_TerminologyCapabilities_Software(Arena *arena, TerminologyCapabilities_Software *terminologyCapabilities_Software);
String8
Serialize_TerminologyCapabilities_Implementation(Arena *arena, TerminologyCapabilities_Implementation *terminologyCapabilities_Implementation);
String8
Serialize_TerminologyCapabilities_CodeSystem(Arena *arena, TerminologyCapabilities_CodeSystem *terminologyCapabilities_CodeSystem);
String8
Serialize_TerminologyCapabilities_CodeSystem_Version(Arena *arena, TerminologyCapabilities_CodeSystem_Version *terminologyCapabilities_CodeSystem_Version);
String8
Serialize_TerminologyCapabilities_CodeSystem_Version_Filter(Arena *arena, TerminologyCapabilities_CodeSystem_Version_Filter *terminologyCapabilities_CodeSystem_Version_Filter);
String8
Serialize_TerminologyCapabilities_Expansion(Arena *arena, TerminologyCapabilities_Expansion *terminologyCapabilities_Expansion);
String8
Serialize_TerminologyCapabilities_Expansion_Parameter(Arena *arena, TerminologyCapabilities_Expansion_Parameter *terminologyCapabilities_Expansion_Parameter);
String8
Serialize_TerminologyCapabilities_ValidateCode(Arena *arena, TerminologyCapabilities_ValidateCode *terminologyCapabilities_ValidateCode);
String8
Serialize_TerminologyCapabilities_Translation(Arena *arena, TerminologyCapabilities_Translation *terminologyCapabilities_Translation);
String8
Serialize_TerminologyCapabilities_Closure(Arena *arena, TerminologyCapabilities_Closure *terminologyCapabilities_Closure);
String8
Serialize_TestReport(Arena *arena, TestReport *testReport);
String8
Serialize_TestReport_Participant(Arena *arena, TestReport_Participant *testReport_Participant);
String8
Serialize_TestReport_Setup(Arena *arena, TestReport_Setup *testReport_Setup);
String8
Serialize_TestReport_Setup_Action(Arena *arena, TestReport_Setup_Action *testReport_Setup_Action);
String8
Serialize_TestReport_Setup_Action_Operation(Arena *arena, TestReport_Setup_Action_Operation *testReport_Setup_Action_Operation);
String8
Serialize_TestReport_Setup_Action_Assert(Arena *arena, TestReport_Setup_Action_Assert *testReport_Setup_Action_Assert);
String8
Serialize_TestReport_Test(Arena *arena, TestReport_Test *testReport_Test);
String8
Serialize_TestReport_Test_Action(Arena *arena, TestReport_Test_Action *testReport_Test_Action);
String8
Serialize_TestReport_Teardown(Arena *arena, TestReport_Teardown *testReport_Teardown);
String8
Serialize_TestReport_Teardown_Action(Arena *arena, TestReport_Teardown_Action *testReport_Teardown_Action);
String8
Serialize_TestScript(Arena *arena, TestScript *testScript);
String8
Serialize_TestScript_Origin(Arena *arena, TestScript_Origin *testScript_Origin);
String8
Serialize_TestScript_Destination(Arena *arena, TestScript_Destination *testScript_Destination);
String8
Serialize_TestScript_Metadata(Arena *arena, TestScript_Metadata *testScript_Metadata);
String8
Serialize_TestScript_Metadata_Link(Arena *arena, TestScript_Metadata_Link *testScript_Metadata_Link);
String8
Serialize_TestScript_Metadata_Capability(Arena *arena, TestScript_Metadata_Capability *testScript_Metadata_Capability);
String8
Serialize_TestScript_Fixture(Arena *arena, TestScript_Fixture *testScript_Fixture);
String8
Serialize_TestScript_Variable(Arena *arena, TestScript_Variable *testScript_Variable);
String8
Serialize_TestScript_Setup(Arena *arena, TestScript_Setup *testScript_Setup);
String8
Serialize_TestScript_Setup_Action(Arena *arena, TestScript_Setup_Action *testScript_Setup_Action);
String8
Serialize_TestScript_Setup_Action_Operation(Arena *arena, TestScript_Setup_Action_Operation *testScript_Setup_Action_Operation);
String8
Serialize_TestScript_Setup_Action_Operation_RequestHeader(Arena *arena, TestScript_Setup_Action_Operation_RequestHeader *testScript_Setup_Action_Operation_RequestHeader);
String8
Serialize_TestScript_Setup_Action_Assert(Arena *arena, TestScript_Setup_Action_Assert *testScript_Setup_Action_Assert);
String8
Serialize_TestScript_Test(Arena *arena, TestScript_Test *testScript_Test);
String8
Serialize_TestScript_Test_Action(Arena *arena, TestScript_Test_Action *testScript_Test_Action);
String8
Serialize_TestScript_Teardown(Arena *arena, TestScript_Teardown *testScript_Teardown);
String8
Serialize_TestScript_Teardown_Action(Arena *arena, TestScript_Teardown_Action *testScript_Teardown_Action);
String8
Serialize_ValueSet(Arena *arena, ValueSet *valueSet);
String8
Serialize_ValueSet_Compose(Arena *arena, ValueSet_Compose *valueSet_Compose);
String8
Serialize_ValueSet_Compose_Include(Arena *arena, ValueSet_Compose_Include *valueSet_Compose_Include);
String8
Serialize_ValueSet_Compose_Include_Concept(Arena *arena, ValueSet_Compose_Include_Concept *valueSet_Compose_Include_Concept);
String8
Serialize_ValueSet_Compose_Include_Concept_Designation(Arena *arena, ValueSet_Compose_Include_Concept_Designation *valueSet_Compose_Include_Concept_Designation);
String8
Serialize_ValueSet_Compose_Include_Filter(Arena *arena, ValueSet_Compose_Include_Filter *valueSet_Compose_Include_Filter);
String8
Serialize_ValueSet_Expansion(Arena *arena, ValueSet_Expansion *valueSet_Expansion);
String8
Serialize_ValueSet_Expansion_Parameter(Arena *arena, ValueSet_Expansion_Parameter *valueSet_Expansion_Parameter);
String8
Serialize_ValueSet_Expansion_Contains(Arena *arena, ValueSet_Expansion_Contains *valueSet_Expansion_Contains);
String8
Serialize_VerificationResult(Arena *arena, VerificationResult *verificationResult);
String8
Serialize_VerificationResult_PrimarySource(Arena *arena, VerificationResult_PrimarySource *verificationResult_PrimarySource);
String8
Serialize_VerificationResult_Attestation(Arena *arena, VerificationResult_Attestation *verificationResult_Attestation);
String8
Serialize_VerificationResult_Validator(Arena *arena, VerificationResult_Validator *verificationResult_Validator);
String8
Serialize_VisionPrescription(Arena *arena, VisionPrescription *visionPrescription);
String8
Serialize_VisionPrescription_LensSpecification(Arena *arena, VisionPrescription_LensSpecification *visionPrescription_LensSpecification);
String8
Serialize_VisionPrescription_LensSpecification_Prism(Arena *arena, VisionPrescription_LensSpecification_Prism *visionPrescription_LensSpecification_Prism);
String8
Serialize_MetadataResource(Arena *arena, MetadataResource *metadataResource);
String8
Serialize_Element(Arena *arena, Element *element);
String8
Serialize_BackboneElement(Arena *arena, BackboneElement *backboneElement);
String8
Serialize_Integer(Arena *arena, Integer *integer);
String8
Serialize_Xhtml(Arena *arena, Xhtml *xhtml);
String8
Serialize_Address(Arena *arena, Address *address);
String8
Serialize_Age(Arena *arena, Age *age);
String8
Serialize_Annotation(Arena *arena, Annotation *annotation);
String8
Serialize_Attachment(Arena *arena, Attachment *attachment);
String8
Serialize_CodeableConcept(Arena *arena, CodeableConcept *codeableConcept);
String8
Serialize_Coding(Arena *arena, Coding *coding);
String8
Serialize_ContactDetail(Arena *arena, ContactDetail *contactDetail);
String8
Serialize_ContactPoint(Arena *arena, ContactPoint *contactPoint);
String8
Serialize_Contributor(Arena *arena, Contributor *contributor);
String8
Serialize_Count(Arena *arena, Count *count);
String8
Serialize_DataRequirement(Arena *arena, DataRequirement *dataRequirement);
String8
Serialize_DataRequirement_CodeFilter(Arena *arena, DataRequirement_CodeFilter *dataRequirement_CodeFilter);
String8
Serialize_DataRequirement_DateFilter(Arena *arena, DataRequirement_DateFilter *dataRequirement_DateFilter);
String8
Serialize_DataRequirement_Sort(Arena *arena, DataRequirement_Sort *dataRequirement_Sort);
String8
Serialize_Distance(Arena *arena, Distance *distance);
String8
Serialize_Dosage(Arena *arena, Dosage *dosage);
String8
Serialize_Dosage_DoseAndRate(Arena *arena, Dosage_DoseAndRate *dosage_DoseAndRate);
String8
Serialize_Duration(Arena *arena, Duration *duration);
String8
Serialize_ElementDefinition(Arena *arena, ElementDefinition *elementDefinition);
String8
Serialize_ElementDefinition_Slicing(Arena *arena, ElementDefinition_Slicing *elementDefinition_Slicing);
String8
Serialize_ElementDefinition_Slicing_Discriminator(Arena *arena, ElementDefinition_Slicing_Discriminator *elementDefinition_Slicing_Discriminator);
String8
Serialize_ElementDefinition_Base(Arena *arena, ElementDefinition_Base *elementDefinition_Base);
String8
Serialize_ElementDefinition_Type(Arena *arena, ElementDefinition_Type *elementDefinition_Type);
String8
Serialize_ElementDefinition_Example(Arena *arena, ElementDefinition_Example *elementDefinition_Example);
String8
Serialize_ElementDefinition_Constraint(Arena *arena, ElementDefinition_Constraint *elementDefinition_Constraint);
String8
Serialize_ElementDefinition_Binding(Arena *arena, ElementDefinition_Binding *elementDefinition_Binding);
String8
Serialize_ElementDefinition_Mapping(Arena *arena, ElementDefinition_Mapping *elementDefinition_Mapping);
String8
Serialize_Expression(Arena *arena, Expression *expression);
String8
Serialize_Extension(Arena *arena, Extension *extension);
String8
Serialize_HumanName(Arena *arena, HumanName *humanName);
String8
Serialize_Identifier(Arena *arena, Identifier *identifier);
String8
Serialize_MarketingStatus(Arena *arena, MarketingStatus *marketingStatus);
String8
Serialize_Meta(Arena *arena, Meta *meta);
String8
Serialize_Money(Arena *arena, Money *money);
String8
Serialize_Narrative(Arena *arena, Narrative *narrative);
String8
Serialize_ParameterDefinition(Arena *arena, ParameterDefinition *parameterDefinition);
String8
Serialize_Period(Arena *arena, Period *period);
String8
Serialize_Population(Arena *arena, Population *population);
String8
Serialize_ProdCharacteristic(Arena *arena, ProdCharacteristic *prodCharacteristic);
String8
Serialize_ProductShelfLife(Arena *arena, ProductShelfLife *productShelfLife);
String8
Serialize_Quantity(Arena *arena, Quantity *quantity);
String8
Serialize_Range(Arena *arena, Range *range);
String8
Serialize_Ratio(Arena *arena, Ratio *ratio);
String8
Serialize_Reference(Arena *arena, Reference *reference);
String8
Serialize_RelatedArtifact(Arena *arena, RelatedArtifact *relatedArtifact);
String8
Serialize_SampledData(Arena *arena, SampledData *sampledData);
String8
Serialize_Signature(Arena *arena, Signature *signature);
String8
Serialize_SubstanceAmount(Arena *arena, SubstanceAmount *substanceAmount);
String8
Serialize_SubstanceAmount_ReferenceRange(Arena *arena, SubstanceAmount_ReferenceRange *substanceAmount_ReferenceRange);
String8
Serialize_Timing(Arena *arena, Timing *timing);
String8
Serialize_Timing_Repeat(Arena *arena, Timing_Repeat *timing_Repeat);
String8
Serialize_TriggerDefinition(Arena *arena, TriggerDefinition *triggerDefinition);
String8
Serialize_UsageContext(Arena *arena, UsageContext *usageContext);
String8
Serialize_MoneyQuantity(Arena *arena, MoneyQuantity *moneyQuantity);
String8
Serialize_SimpleQuantity(Arena *arena, SimpleQuantity *simpleQuantity);
String8
Serialize_Shareablemeasure(Arena *arena, Shareablemeasure *shareablemeasure);
String8
Serialize_Servicerequest_genetics(Arena *arena, Servicerequest_genetics *servicerequest_genetics);
String8
Serialize_Groupdefinition(Arena *arena, Groupdefinition *groupdefinition);
String8
Serialize_Actualgroup(Arena *arena, Actualgroup *actualgroup);
String8
Serialize_Familymemberhistory_genetic(Arena *arena, Familymemberhistory_genetic *familymemberhistory_genetic);
String8
Serialize_Shareableactivitydefinition(Arena *arena, Shareableactivitydefinition *shareableactivitydefinition);
String8
Serialize_Cdshooksrequestgroup(Arena *arena, Cdshooksrequestgroup *cdshooksrequestgroup);
String8
Serialize_Provenance_relevant_history(Arena *arena, Provenance_relevant_history *provenance_relevant_history);
String8
Serialize_Cqf_questionnaire(Arena *arena, Cqf_questionnaire *cqf_questionnaire);
String8
Serialize_Shareablevalueset(Arena *arena, Shareablevalueset *shareablevalueset);
String8
Serialize_Picoelement(Arena *arena, Picoelement *picoelement);
String8
Serialize_Shareablecodesystem(Arena *arena, Shareablecodesystem *shareablecodesystem);
String8
Serialize_Cdshooksguidanceresponse(Arena *arena, Cdshooksguidanceresponse *cdshooksguidanceresponse);
String8
Serialize_Devicemetricobservation(Arena *arena, Devicemetricobservation *devicemetricobservation);
String8
Serialize_Observation_genetics(Arena *arena, Observation_genetics *observation_genetics);
String8
Serialize_Vitalsigns(Arena *arena, Vitalsigns *vitalsigns);
String8
Serialize_Bodyweight(Arena *arena, Bodyweight *bodyweight);
String8
Serialize_Vitalspanel(Arena *arena, Vitalspanel *vitalspanel);
String8
Serialize_Bodyheight(Arena *arena, Bodyheight *bodyheight);
String8
Serialize_Resprate(Arena *arena, Resprate *resprate);
String8
Serialize_Heartrate(Arena *arena, Heartrate *heartrate);
String8
Serialize_Bodytemp(Arena *arena, Bodytemp *bodytemp);
String8
Serialize_Headcircum(Arena *arena, Headcircum *headcircum);
String8
Serialize_Oxygensat(Arena *arena, Oxygensat *oxygensat);
String8
Serialize_Bmi(Arena *arena, Bmi *bmi);
String8
Serialize_Bp(Arena *arena, Bp *bp);
String8
Serialize_Shareablelibrary(Arena *arena, Shareablelibrary *shareablelibrary);
String8
Serialize_Cqllibrary(Arena *arena, Cqllibrary *cqllibrary);
String8
Serialize_Lipidprofile(Arena *arena, Lipidprofile *lipidprofile);
String8
Serialize_Cholesterol(Arena *arena, Cholesterol *cholesterol);
String8
Serialize_Triglyceride(Arena *arena, Triglyceride *triglyceride);
String8
Serialize_Hdlcholesterol(Arena *arena, Hdlcholesterol *hdlcholesterol);
String8
Serialize_Ldlcholesterol(Arena *arena, Ldlcholesterol *ldlcholesterol);
String8
Serialize_Diagnosticreport_genetics(Arena *arena, Diagnosticreport_genetics *diagnosticreport_genetics);
String8
Serialize_Hlaresult(Arena *arena, Hlaresult *hlaresult);
String8
Serialize_Synthesis(Arena *arena, Synthesis *synthesis);
String8
Serialize_Clinicaldocument(Arena *arena, Clinicaldocument *clinicaldocument);
String8
Serialize_Catalog(Arena *arena, Catalog *catalog);
String8
Serialize_Shareableplandefinition(Arena *arena, Shareableplandefinition *shareableplandefinition);
String8
Serialize_Computableplandefinition(Arena *arena, Computableplandefinition *computableplandefinition);
String8
Serialize_Cdshooksserviceplandefinition(Arena *arena, Cdshooksserviceplandefinition *cdshooksserviceplandefinition);
String8
Serialize_Elementdefinition_de(Arena *arena, Elementdefinition_de *elementdefinition_de);
String8
Serialize_Ehrsrle_auditevent(Arena *arena, Ehrsrle_auditevent *ehrsrle_auditevent);
String8
Serialize_Ehrsrle_provenance(Arena *arena, Ehrsrle_provenance *ehrsrle_provenance);
#endif