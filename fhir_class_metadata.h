namespace fhir_deserialize {
ClassMetadata class_metadata[] =
{
{
	Str8Lit("Unknown"),
	0,
	0,
	{
	}
}
,{
	Str8Lit("Resource"),
	64,
	5,
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("Resource") },
			}
		},
		{
			Str8LitComp("id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("meta"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			24,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Meta") },
			}
		},
		{
			Str8LitComp("implicitRules"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			32,
			16,
			{
				{ ValueType::Uri, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("language"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			48,
			16,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		}
	}
}
,{
	Str8Lit("Account"),
	264,
	27,
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("Account") },
			}
		},
		{
			Str8LitComp("id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("meta"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			24,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Meta") },
			}
		},
		{
			Str8LitComp("implicitRules"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			32,
			16,
			{
				{ ValueType::Uri, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("language"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			48,
			16,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("text"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			64,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Narrative") },
			}
		},
		{
			Str8LitComp("contained_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			72,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("contained"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			80,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Resource") },
			}
		},
		{
			Str8LitComp("extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			88,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			96,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			104,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			112,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("identifier_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			120,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("identifier"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			128,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Identifier") },
			}
		},
		{
			Str8LitComp("status"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			136,
			16,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("type"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			152,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("name"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			160,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("subject_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			176,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("subject"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			184,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("servicePeriod"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			192,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Period") },
			}
		},
		{
			Str8LitComp("coverage_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			200,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("coverage"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			208,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Account_Coverage") },
			}
		},
		{
			Str8LitComp("owner"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			216,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("description"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			224,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("guarantor_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			240,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("guarantor"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			248,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Account_Guarantor") },
			}
		},
		{
			Str8LitComp("partOf"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			256,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		}
	}
}
,{
	Str8Lit("Account_Coverage"),
	72,
	8,
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("Account_Coverage") },
			}
		},
		{
			Str8LitComp("id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			24,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("coverage"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			56,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("priority"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			64,
			8,
			{
				{ ValueType::PositiveInt, Str8LitComp("") },
			}
		}
	}
}
,{
	Str8Lit("Account_Guarantor"),
	80,
	9,
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("Account_Guarantor") },
			}
		},
		{
			Str8LitComp("id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			24,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("party"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			56,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("onHold"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			64,
			4,
			{
				{ ValueType::Boolean, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("period"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			72,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Period") },
			}
		}
	}
}
,{
	Str8Lit("ActivityDefinition"),
	800,
	79,
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("ActivityDefinition") },
			}
		},
		{
			Str8LitComp("id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("meta"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			24,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Meta") },
			}
		},
		{
			Str8LitComp("implicitRules"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			32,
			16,
			{
				{ ValueType::Uri, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("language"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			48,
			16,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("text"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			64,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Narrative") },
			}
		},
		{
			Str8LitComp("contained_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			72,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("contained"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			80,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Resource") },
			}
		},
		{
			Str8LitComp("extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			88,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			96,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			104,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			112,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("url"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			120,
			16,
			{
				{ ValueType::Uri, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("identifier_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			136,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("identifier"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			144,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Identifier") },
			}
		},
		{
			Str8LitComp("version"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			152,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("name"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			168,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("title"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			184,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("subtitle"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			200,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("status"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			216,
			16,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("experimental"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			232,
			4,
			{
				{ ValueType::Boolean, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("subject_type"),
			Cardinality::OneToOne,
			ClassMemberType::Enum,
			236,
			4,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("subject"),
			Cardinality::ZeroToOne,
			ClassMemberType::Union,
			240,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("subjectCodeableConcept") },
				{ ValueType::Class_Reference, Str8LitComp("subjectReference") },
			}
		},
		{
			Str8LitComp("date"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			248,
			16,
			{
				{ ValueType::DateTime, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("publisher"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			264,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("contact_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			280,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("contact"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			288,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("ContactDetail") },
			}
		},
		{
			Str8LitComp("description"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			296,
			16,
			{
				{ ValueType::Markdown, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("useContext_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			312,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("useContext"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			320,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("UsageContext") },
			}
		},
		{
			Str8LitComp("jurisdiction_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			328,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("jurisdiction"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			336,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("purpose"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			344,
			16,
			{
				{ ValueType::Markdown, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("usage"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			360,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("copyright"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			376,
			16,
			{
				{ ValueType::Markdown, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("approvalDate"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			392,
			16,
			{
				{ ValueType::Date, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("lastReviewDate"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			408,
			16,
			{
				{ ValueType::Date, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("effectivePeriod"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			424,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Period") },
			}
		},
		{
			Str8LitComp("topic_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			432,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("topic"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			440,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("author_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			448,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("author"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			456,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("ContactDetail") },
			}
		},
		{
			Str8LitComp("editor_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			464,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("editor"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			472,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("ContactDetail") },
			}
		},
		{
			Str8LitComp("reviewer_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			480,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("reviewer"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			488,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("ContactDetail") },
			}
		},
		{
			Str8LitComp("endorser_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			496,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("endorser"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			504,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("ContactDetail") },
			}
		},
		{
			Str8LitComp("relatedArtifact_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			512,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("relatedArtifact"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			520,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("RelatedArtifact") },
			}
		},
		{
			Str8LitComp("library_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			528,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("library"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			536,
			8,
			{
				{ ValueType::Canonical, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("kind"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			544,
			16,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("profile"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			560,
			16,
			{
				{ ValueType::Canonical, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("code"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			576,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("intent"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			584,
			16,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("priority"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			600,
			16,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("doNotPerform"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			616,
			4,
			{
				{ ValueType::Boolean, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("timing_type"),
			Cardinality::OneToOne,
			ClassMemberType::Enum,
			620,
			4,
			{
				{ ValueType::Class_Reference, Str8LitComp("Timing") },
				{ ValueType::DateTime, Str8LitComp("") },
				{ ValueType::Class_Reference, Str8LitComp("Age") },
				{ ValueType::Class_Reference, Str8LitComp("Period") },
				{ ValueType::Class_Reference, Str8LitComp("Range") },
				{ ValueType::Class_Reference, Str8LitComp("Duration") },
			}
		},
		{
			Str8LitComp("timing"),
			Cardinality::ZeroToOne,
			ClassMemberType::Union,
			624,
			16,
			{
				{ ValueType::Class_Reference, Str8LitComp("timingTiming") },
				{ ValueType::DateTime, Str8LitComp("timingDateTime") },
				{ ValueType::Class_Reference, Str8LitComp("timingAge") },
				{ ValueType::Class_Reference, Str8LitComp("timingPeriod") },
				{ ValueType::Class_Reference, Str8LitComp("timingRange") },
				{ ValueType::Class_Reference, Str8LitComp("timingDuration") },
			}
		},
		{
			Str8LitComp("location"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			640,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("participant_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			648,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("participant"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			656,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("ActivityDefinition_Participant") },
			}
		},
		{
			Str8LitComp("product_type"),
			Cardinality::OneToOne,
			ClassMemberType::Enum,
			664,
			4,
			{
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("product"),
			Cardinality::ZeroToOne,
			ClassMemberType::Union,
			672,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("productReference") },
				{ ValueType::Class_Reference, Str8LitComp("productCodeableConcept") },
			}
		},
		{
			Str8LitComp("quantity"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			680,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Quantity") },
			}
		},
		{
			Str8LitComp("dosage_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			688,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("dosage"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			696,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Dosage") },
			}
		},
		{
			Str8LitComp("bodySite_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			704,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("bodySite"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			712,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("specimenRequirement_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			720,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("specimenRequirement"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			728,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("observationRequirement_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			736,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("observationRequirement"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			744,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("observationResultRequirement_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			752,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("observationResultRequirement"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			760,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("transform"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			768,
			16,
			{
				{ ValueType::Canonical, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("dynamicValue_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			784,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("dynamicValue"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			792,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("ActivityDefinition_DynamicValue") },
			}
		}
	}
}
,{
	Str8Lit("ActivityDefinition_Participant"),
	80,
	8,
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("ActivityDefinition_Participant") },
			}
		},
		{
			Str8LitComp("id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			24,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("type"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			56,
			16,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("role"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			72,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		}
	}
}
,{
	Str8Lit("ActivityDefinition_DynamicValue"),
	80,
	8,
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("ActivityDefinition_DynamicValue") },
			}
		},
		{
			Str8LitComp("id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			24,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("path"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			56,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("expression"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			72,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Expression") },
			}
		}
	}
}
,{
	Str8Lit("AdverseEvent"),
	368,
	39,
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("AdverseEvent") },
			}
		},
		{
			Str8LitComp("id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("meta"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			24,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Meta") },
			}
		},
		{
			Str8LitComp("implicitRules"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			32,
			16,
			{
				{ ValueType::Uri, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("language"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			48,
			16,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("text"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			64,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Narrative") },
			}
		},
		{
			Str8LitComp("contained_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			72,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("contained"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			80,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Resource") },
			}
		},
		{
			Str8LitComp("extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			88,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			96,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			104,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			112,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("identifier"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			120,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Identifier") },
			}
		},
		{
			Str8LitComp("actuality"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			128,
			16,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("category_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			144,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("category"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			152,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("event"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			160,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("subject"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			168,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("encounter"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			176,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("date"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			184,
			16,
			{
				{ ValueType::DateTime, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("detected"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			200,
			16,
			{
				{ ValueType::DateTime, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("recordedDate"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			216,
			16,
			{
				{ ValueType::DateTime, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("resultingCondition_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			232,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("resultingCondition"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			240,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("location"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			248,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("seriousness"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			256,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("severity"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			264,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("outcome"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			272,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("recorder"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			280,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("contributor_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			288,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("contributor"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			296,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("suspectEntity_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			304,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("suspectEntity"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			312,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("AdverseEvent_SuspectEntity") },
			}
		},
		{
			Str8LitComp("subjectMedicalHistory_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			320,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("subjectMedicalHistory"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			328,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("referenceDocument_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			336,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("referenceDocument"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			344,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("study_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			352,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("study"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			360,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		}
	}
}
,{
	Str8Lit("AdverseEvent_SuspectEntity"),
	80,
	9,
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("AdverseEvent_SuspectEntity") },
			}
		},
		{
			Str8LitComp("id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			24,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("instance"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			56,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("causality_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			64,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("causality"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			72,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("AdverseEvent_SuspectEntity_Causality") },
			}
		}
	}
}
,{
	Str8Lit("AdverseEvent_SuspectEntity_Causality"),
	96,
	10,
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("AdverseEvent_SuspectEntity_Causality") },
			}
		},
		{
			Str8LitComp("id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			24,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("assessment"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			56,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("productRelatedness"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			64,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("author"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			80,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("method"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			88,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		}
	}
}
,{
	Str8Lit("AllergyIntolerance"),
	328,
	33,
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("AllergyIntolerance") },
			}
		},
		{
			Str8LitComp("id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("meta"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			24,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Meta") },
			}
		},
		{
			Str8LitComp("implicitRules"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			32,
			16,
			{
				{ ValueType::Uri, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("language"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			48,
			16,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("text"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			64,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Narrative") },
			}
		},
		{
			Str8LitComp("contained_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			72,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("contained"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			80,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Resource") },
			}
		},
		{
			Str8LitComp("extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			88,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			96,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			104,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			112,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("identifier_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			120,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("identifier"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			128,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Identifier") },
			}
		},
		{
			Str8LitComp("clinicalStatus"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			136,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("verificationStatus"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			144,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("type"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			152,
			16,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("category_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			168,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("category"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			176,
			8,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("criticality"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			184,
			16,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("code"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			200,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("patient"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			208,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("encounter"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			216,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("onset_type"),
			Cardinality::OneToOne,
			ClassMemberType::Enum,
			224,
			4,
			{
				{ ValueType::DateTime, Str8LitComp("") },
				{ ValueType::Class_Reference, Str8LitComp("Age") },
				{ ValueType::Class_Reference, Str8LitComp("Period") },
				{ ValueType::Class_Reference, Str8LitComp("Range") },
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("onset"),
			Cardinality::ZeroToOne,
			ClassMemberType::Union,
			232,
			16,
			{
				{ ValueType::DateTime, Str8LitComp("onsetDateTime") },
				{ ValueType::Class_Reference, Str8LitComp("onsetAge") },
				{ ValueType::Class_Reference, Str8LitComp("onsetPeriod") },
				{ ValueType::Class_Reference, Str8LitComp("onsetRange") },
				{ ValueType::String, Str8LitComp("onsetString") },
			}
		},
		{
			Str8LitComp("recordedDate"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			248,
			16,
			{
				{ ValueType::DateTime, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("recorder"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			264,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("asserter"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			272,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("lastOccurrence"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			280,
			16,
			{
				{ ValueType::DateTime, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("note_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			296,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("note"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			304,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Annotation") },
			}
		},
		{
			Str8LitComp("reaction_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			312,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("reaction"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			320,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("AllergyIntolerance_Reaction") },
			}
		}
	}
}
,{
	Str8Lit("AllergyIntolerance_Reaction"),
	152,
	15,
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("AllergyIntolerance_Reaction") },
			}
		},
		{
			Str8LitComp("id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			24,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("substance"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			56,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("manifestation_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			64,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("manifestation"),
			Cardinality::OneToInf,
			ClassMemberType::Single,
			72,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("description"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			80,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("onset"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			96,
			16,
			{
				{ ValueType::DateTime, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("severity"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			112,
			16,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("exposureRoute"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			128,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("note_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			136,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("note"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			144,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Annotation") },
			}
		}
	}
}
,{
	Str8Lit("Appointment"),
	440,
	45,
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("Appointment") },
			}
		},
		{
			Str8LitComp("id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("meta"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			24,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Meta") },
			}
		},
		{
			Str8LitComp("implicitRules"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			32,
			16,
			{
				{ ValueType::Uri, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("language"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			48,
			16,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("text"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			64,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Narrative") },
			}
		},
		{
			Str8LitComp("contained_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			72,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("contained"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			80,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Resource") },
			}
		},
		{
			Str8LitComp("extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			88,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			96,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			104,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			112,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("identifier_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			120,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("identifier"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			128,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Identifier") },
			}
		},
		{
			Str8LitComp("status"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			136,
			16,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("cancelationReason"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			152,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("serviceCategory_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			160,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("serviceCategory"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			168,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("serviceType_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			176,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("serviceType"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			184,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("specialty_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			192,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("specialty"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			200,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("appointmentType"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			208,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("reasonCode_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			216,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("reasonCode"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			224,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("reasonReference_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			232,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("reasonReference"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			240,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("priority"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			248,
			8,
			{
				{ ValueType::UnsignedInt, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("description"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			256,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("supportingInformation_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			272,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("supportingInformation"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			280,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("start"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			288,
			16,
			{
				{ ValueType::Instant, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("end"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			304,
			16,
			{
				{ ValueType::Instant, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("minutesDuration"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			320,
			8,
			{
				{ ValueType::PositiveInt, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("slot_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			328,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("slot"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			336,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("created"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			344,
			16,
			{
				{ ValueType::DateTime, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("comment"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			360,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("patientInstruction"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			376,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("basedOn_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			392,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("basedOn"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			400,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("participant_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			408,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("participant"),
			Cardinality::OneToInf,
			ClassMemberType::Single,
			416,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Appointment_Participant") },
			}
		},
		{
			Str8LitComp("requestedPeriod_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			424,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("requestedPeriod"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			432,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Period") },
			}
		}
	}
}
,{
	Str8Lit("Appointment_Participant"),
	120,
	12,
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("Appointment_Participant") },
			}
		},
		{
			Str8LitComp("id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			24,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("type_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			56,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("type"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			64,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("actor"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			72,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("required"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			80,
			16,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("status"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			96,
			16,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("period"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			112,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Period") },
			}
		}
	}
}
,{
	Str8Lit("AppointmentResponse"),
	232,
	22,
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("AppointmentResponse") },
			}
		},
		{
			Str8LitComp("id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("meta"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			24,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Meta") },
			}
		},
		{
			Str8LitComp("implicitRules"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			32,
			16,
			{
				{ ValueType::Uri, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("language"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			48,
			16,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("text"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			64,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Narrative") },
			}
		},
		{
			Str8LitComp("contained_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			72,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("contained"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			80,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Resource") },
			}
		},
		{
			Str8LitComp("extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			88,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			96,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			104,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			112,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("identifier_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			120,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("identifier"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			128,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Identifier") },
			}
		},
		{
			Str8LitComp("appointment"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			136,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("start"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			144,
			16,
			{
				{ ValueType::Instant, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("end"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			160,
			16,
			{
				{ ValueType::Instant, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("participantType_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			176,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("participantType"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			184,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("actor"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			192,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("participantStatus"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			200,
			16,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("comment"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			216,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		}
	}
}
,{
	Str8Lit("AuditEvent"),
	272,
	27,
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("AuditEvent") },
			}
		},
		{
			Str8LitComp("id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("meta"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			24,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Meta") },
			}
		},
		{
			Str8LitComp("implicitRules"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			32,
			16,
			{
				{ ValueType::Uri, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("language"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			48,
			16,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("text"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			64,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Narrative") },
			}
		},
		{
			Str8LitComp("contained_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			72,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("contained"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			80,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Resource") },
			}
		},
		{
			Str8LitComp("extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			88,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			96,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			104,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			112,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("type"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			120,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Coding") },
			}
		},
		{
			Str8LitComp("subtype_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			128,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("subtype"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			136,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Coding") },
			}
		},
		{
			Str8LitComp("action"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			144,
			16,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("period"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			160,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Period") },
			}
		},
		{
			Str8LitComp("recorded"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			168,
			16,
			{
				{ ValueType::Instant, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("outcome"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			184,
			16,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("outcomeDesc"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			200,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("purposeOfEvent_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			216,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("purposeOfEvent"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			224,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("agent_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			232,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("agent"),
			Cardinality::OneToInf,
			ClassMemberType::Single,
			240,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("AuditEvent_Agent") },
			}
		},
		{
			Str8LitComp("source"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			248,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("AuditEvent_Source") },
			}
		},
		{
			Str8LitComp("entity_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			256,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("entity"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			264,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("AuditEvent_Entity") },
			}
		}
	}
}
,{
	Str8Lit("AuditEvent_Agent"),
	184,
	20,
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("AuditEvent_Agent") },
			}
		},
		{
			Str8LitComp("id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			24,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("type"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			56,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("role_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			64,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("role"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			72,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("who"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			80,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("altId"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			88,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("name"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			104,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("requestor"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			120,
			4,
			{
				{ ValueType::Boolean, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("location"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			128,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("policy_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			136,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("policy"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			144,
			8,
			{
				{ ValueType::Uri, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("media"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			152,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Coding") },
			}
		},
		{
			Str8LitComp("network"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			160,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("AuditEvent_Agent_Network") },
			}
		},
		{
			Str8LitComp("purposeOfUse_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			168,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("purposeOfUse"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			176,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		}
	}
}
,{
	Str8Lit("AuditEvent_Agent_Network"),
	88,
	8,
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("AuditEvent_Agent_Network") },
			}
		},
		{
			Str8LitComp("id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			24,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("address"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			56,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("type"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			72,
			16,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		}
	}
}
,{
	Str8Lit("AuditEvent_Source"),
	96,
	10,
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("AuditEvent_Source") },
			}
		},
		{
			Str8LitComp("id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			24,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("site"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			56,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("observer"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			72,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("type_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			80,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("type"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			88,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Coding") },
			}
		}
	}
}
,{
	Str8Lit("AuditEvent_Entity"),
	168,
	17,
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("AuditEvent_Entity") },
			}
		},
		{
			Str8LitComp("id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			24,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("what"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			56,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("type"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			64,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Coding") },
			}
		},
		{
			Str8LitComp("role"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			72,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Coding") },
			}
		},
		{
			Str8LitComp("lifecycle"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			80,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Coding") },
			}
		},
		{
			Str8LitComp("securityLabel_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			88,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("securityLabel"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			96,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Coding") },
			}
		},
		{
			Str8LitComp("name"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			104,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("description"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			120,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("query"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			136,
			16,
			{
				{ ValueType::Base64Binary, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("detail_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			152,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("detail"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			160,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("AuditEvent_Entity_Detail") },
			}
		}
	}
}
,{
	Str8Lit("AuditEvent_Entity_Detail"),
	96,
	9,
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("AuditEvent_Entity_Detail") },
			}
		},
		{
			Str8LitComp("id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			24,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("type"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			56,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("value_type"),
			Cardinality::OneToOne,
			ClassMemberType::Enum,
			72,
			4,
			{
				{ ValueType::String, Str8LitComp("") },
				{ ValueType::Base64Binary, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("value"),
			Cardinality::OneToOne,
			ClassMemberType::Union,
			80,
			16,
			{
				{ ValueType::String, Str8LitComp("valueString") },
				{ ValueType::Base64Binary, Str8LitComp("valueBase64Binary") },
			}
		}
	}
}
,{
	Str8Lit("Basic"),
	176,
	18,
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("Basic") },
			}
		},
		{
			Str8LitComp("id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("meta"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			24,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Meta") },
			}
		},
		{
			Str8LitComp("implicitRules"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			32,
			16,
			{
				{ ValueType::Uri, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("language"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			48,
			16,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("text"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			64,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Narrative") },
			}
		},
		{
			Str8LitComp("contained_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			72,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("contained"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			80,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Resource") },
			}
		},
		{
			Str8LitComp("extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			88,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			96,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			104,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			112,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("identifier_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			120,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("identifier"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			128,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Identifier") },
			}
		},
		{
			Str8LitComp("code"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			136,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("subject"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			144,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("created"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			152,
			16,
			{
				{ ValueType::Date, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("author"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			168,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		}
	}
}
,{
	Str8Lit("Binary"),
	104,
	8,
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("Binary") },
			}
		},
		{
			Str8LitComp("id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("meta"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			24,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Meta") },
			}
		},
		{
			Str8LitComp("implicitRules"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			32,
			16,
			{
				{ ValueType::Uri, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("language"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			48,
			16,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("contentType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			64,
			16,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("securityContext"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			80,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("data"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			88,
			16,
			{
				{ ValueType::Base64Binary, Str8LitComp("") },
			}
		}
	}
}
,{
	Str8Lit("BiologicallyDerivedProduct"),
	264,
	28,
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("BiologicallyDerivedProduct") },
			}
		},
		{
			Str8LitComp("id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("meta"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			24,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Meta") },
			}
		},
		{
			Str8LitComp("implicitRules"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			32,
			16,
			{
				{ ValueType::Uri, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("language"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			48,
			16,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("text"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			64,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Narrative") },
			}
		},
		{
			Str8LitComp("contained_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			72,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("contained"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			80,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Resource") },
			}
		},
		{
			Str8LitComp("extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			88,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			96,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			104,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			112,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("identifier_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			120,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("identifier"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			128,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Identifier") },
			}
		},
		{
			Str8LitComp("productCategory"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			136,
			16,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("productCode"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			152,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("status"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			160,
			16,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("request_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			176,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("request"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			184,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("quantity"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			192,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Integer") },
			}
		},
		{
			Str8LitComp("parent_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			200,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("parent"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			208,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("collection"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			216,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("BiologicallyDerivedProduct_Collection") },
			}
		},
		{
			Str8LitComp("processing_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			224,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("processing"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			232,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("BiologicallyDerivedProduct_Processing") },
			}
		},
		{
			Str8LitComp("manipulation"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			240,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("BiologicallyDerivedProduct_Manipulation") },
			}
		},
		{
			Str8LitComp("storage_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			248,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("storage"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			256,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("BiologicallyDerivedProduct_Storage") },
			}
		}
	}
}
,{
	Str8Lit("BiologicallyDerivedProduct_Collection"),
	96,
	10,
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("BiologicallyDerivedProduct_Collection") },
			}
		},
		{
			Str8LitComp("id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			24,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("collector"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			56,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("source"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			64,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("collected_type"),
			Cardinality::OneToOne,
			ClassMemberType::Enum,
			72,
			4,
			{
				{ ValueType::DateTime, Str8LitComp("") },
				{ ValueType::Class_Reference, Str8LitComp("Period") },
			}
		},
		{
			Str8LitComp("collected"),
			Cardinality::ZeroToOne,
			ClassMemberType::Union,
			80,
			16,
			{
				{ ValueType::DateTime, Str8LitComp("collectedDateTime") },
				{ ValueType::Class_Reference, Str8LitComp("collectedPeriod") },
			}
		}
	}
}
,{
	Str8Lit("BiologicallyDerivedProduct_Processing"),
	112,
	11,
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("BiologicallyDerivedProduct_Processing") },
			}
		},
		{
			Str8LitComp("id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			24,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("description"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			56,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("procedure"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			72,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("additive"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			80,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("time_type"),
			Cardinality::OneToOne,
			ClassMemberType::Enum,
			88,
			4,
			{
				{ ValueType::DateTime, Str8LitComp("") },
				{ ValueType::Class_Reference, Str8LitComp("Period") },
			}
		},
		{
			Str8LitComp("time"),
			Cardinality::ZeroToOne,
			ClassMemberType::Union,
			96,
			16,
			{
				{ ValueType::DateTime, Str8LitComp("timeDateTime") },
				{ ValueType::Class_Reference, Str8LitComp("timePeriod") },
			}
		}
	}
}
,{
	Str8Lit("BiologicallyDerivedProduct_Manipulation"),
	96,
	9,
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("BiologicallyDerivedProduct_Manipulation") },
			}
		},
		{
			Str8LitComp("id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			24,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("description"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			56,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("time_type"),
			Cardinality::OneToOne,
			ClassMemberType::Enum,
			72,
			4,
			{
				{ ValueType::DateTime, Str8LitComp("") },
				{ ValueType::Class_Reference, Str8LitComp("Period") },
			}
		},
		{
			Str8LitComp("time"),
			Cardinality::ZeroToOne,
			ClassMemberType::Union,
			80,
			16,
			{
				{ ValueType::DateTime, Str8LitComp("timeDateTime") },
				{ ValueType::Class_Reference, Str8LitComp("timePeriod") },
			}
		}
	}
}
,{
	Str8Lit("BiologicallyDerivedProduct_Storage"),
	104,
	10,
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("BiologicallyDerivedProduct_Storage") },
			}
		},
		{
			Str8LitComp("id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			24,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("description"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			56,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("temperature"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			72,
			8,
			{
				{ ValueType::Decimal, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("scale"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			80,
			16,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("duration"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			96,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Period") },
			}
		}
	}
}
,{
	Str8Lit("BodyStructure"),
	216,
	23,
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("BodyStructure") },
			}
		},
		{
			Str8LitComp("id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("meta"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			24,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Meta") },
			}
		},
		{
			Str8LitComp("implicitRules"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			32,
			16,
			{
				{ ValueType::Uri, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("language"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			48,
			16,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("text"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			64,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Narrative") },
			}
		},
		{
			Str8LitComp("contained_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			72,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("contained"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			80,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Resource") },
			}
		},
		{
			Str8LitComp("extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			88,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			96,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			104,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			112,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("identifier_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			120,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("identifier"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			128,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Identifier") },
			}
		},
		{
			Str8LitComp("active"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			136,
			4,
			{
				{ ValueType::Boolean, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("morphology"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			144,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("location"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			152,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("locationQualifier_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			160,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("locationQualifier"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			168,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("description"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			176,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("image_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			192,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("image"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			200,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Attachment") },
			}
		},
		{
			Str8LitComp("patient"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			208,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		}
	}
}
,{
	Str8Lit("Bundle"),
	152,
	14,
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("Bundle") },
			}
		},
		{
			Str8LitComp("id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("meta"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			24,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Meta") },
			}
		},
		{
			Str8LitComp("implicitRules"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			32,
			16,
			{
				{ ValueType::Uri, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("language"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			48,
			16,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("identifier"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			64,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Identifier") },
			}
		},
		{
			Str8LitComp("type"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			72,
			16,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("timestamp"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			88,
			16,
			{
				{ ValueType::Instant, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("total"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			104,
			8,
			{
				{ ValueType::UnsignedInt, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("link_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			112,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("link"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			120,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Bundle_Link") },
			}
		},
		{
			Str8LitComp("entry_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			128,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("entry"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			136,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Bundle_Entry") },
			}
		},
		{
			Str8LitComp("signature"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			144,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Signature") },
			}
		}
	}
}
,{
	Str8Lit("Bundle_Link"),
	88,
	8,
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("Bundle_Link") },
			}
		},
		{
			Str8LitComp("id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			24,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("relation"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			56,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("url"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			72,
			16,
			{
				{ ValueType::Uri, Str8LitComp("") },
			}
		}
	}
}
,{
	Str8Lit("Bundle_Entry"),
	120,
	13,
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("Bundle_Entry") },
			}
		},
		{
			Str8LitComp("id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			24,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("link_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			56,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("link"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			64,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Bundle_Link") },
			}
		},
		{
			Str8LitComp("fullUrl"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			72,
			16,
			{
				{ ValueType::Uri, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("resource"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			88,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Resource") },
			}
		},
		{
			Str8LitComp("search"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			96,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Bundle_Entry_Search") },
			}
		},
		{
			Str8LitComp("request"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			104,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Bundle_Entry_Request") },
			}
		},
		{
			Str8LitComp("response"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			112,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Bundle_Entry_Response") },
			}
		}
	}
}
,{
	Str8Lit("Bundle_Entry_Search"),
	80,
	8,
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("Bundle_Entry_Search") },
			}
		},
		{
			Str8LitComp("id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			24,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("mode"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			56,
			16,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("score"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			72,
			8,
			{
				{ ValueType::Decimal, Str8LitComp("") },
			}
		}
	}
}
,{
	Str8Lit("Bundle_Entry_Request"),
	152,
	12,
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("Bundle_Entry_Request") },
			}
		},
		{
			Str8LitComp("id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			24,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("method"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			56,
			16,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("url"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			72,
			16,
			{
				{ ValueType::Uri, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("ifNoneMatch"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			88,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("ifModifiedSince"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			104,
			16,
			{
				{ ValueType::Instant, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("ifMatch"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			120,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("ifNoneExist"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			136,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		}
	}
}
,{
	Str8Lit("Bundle_Entry_Response"),
	128,
	11,
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("Bundle_Entry_Response") },
			}
		},
		{
			Str8LitComp("id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			24,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("status"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			56,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("location"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			72,
			16,
			{
				{ ValueType::Uri, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("etag"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			88,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("lastModified"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			104,
			16,
			{
				{ ValueType::Instant, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("outcome"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			120,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Resource") },
			}
		}
	}
}
,{
	Str8Lit("CapabilityStatement"),
	512,
	49,
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("CapabilityStatement") },
			}
		},
		{
			Str8LitComp("id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("meta"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			24,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Meta") },
			}
		},
		{
			Str8LitComp("implicitRules"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			32,
			16,
			{
				{ ValueType::Uri, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("language"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			48,
			16,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("text"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			64,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Narrative") },
			}
		},
		{
			Str8LitComp("contained_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			72,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("contained"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			80,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Resource") },
			}
		},
		{
			Str8LitComp("extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			88,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			96,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			104,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			112,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("url"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			120,
			16,
			{
				{ ValueType::Uri, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("version"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			136,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("name"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			152,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("title"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			168,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("status"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			184,
			16,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("experimental"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			200,
			4,
			{
				{ ValueType::Boolean, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("date"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			208,
			16,
			{
				{ ValueType::DateTime, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("publisher"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			224,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("contact_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			240,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("contact"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			248,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("ContactDetail") },
			}
		},
		{
			Str8LitComp("description"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			256,
			16,
			{
				{ ValueType::Markdown, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("useContext_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			272,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("useContext"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			280,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("UsageContext") },
			}
		},
		{
			Str8LitComp("jurisdiction_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			288,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("jurisdiction"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			296,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("purpose"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			304,
			16,
			{
				{ ValueType::Markdown, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("copyright"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			320,
			16,
			{
				{ ValueType::Markdown, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("kind"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			336,
			16,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("instantiates_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			352,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("instantiates"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			360,
			8,
			{
				{ ValueType::Canonical, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("imports_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			368,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("imports"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			376,
			8,
			{
				{ ValueType::Canonical, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("software"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			384,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CapabilityStatement_Software") },
			}
		},
		{
			Str8LitComp("implementation"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			392,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CapabilityStatement_Implementation") },
			}
		},
		{
			Str8LitComp("fhirVersion"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			400,
			16,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("format_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			416,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("format"),
			Cardinality::OneToInf,
			ClassMemberType::Single,
			424,
			8,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("patchFormat_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			432,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("patchFormat"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			440,
			8,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("implementationGuide_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			448,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("implementationGuide"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			456,
			8,
			{
				{ ValueType::Canonical, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("rest_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			464,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("rest"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			472,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CapabilityStatement_Rest") },
			}
		},
		{
			Str8LitComp("messaging_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			480,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("messaging"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			488,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CapabilityStatement_Messaging") },
			}
		},
		{
			Str8LitComp("document_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			496,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("document"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			504,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CapabilityStatement_Document") },
			}
		}
	}
}
,{
	Str8Lit("CapabilityStatement_Software"),
	104,
	9,
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("CapabilityStatement_Software") },
			}
		},
		{
			Str8LitComp("id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			24,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("name"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			56,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("version"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			72,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("releaseDate"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			88,
			16,
			{
				{ ValueType::DateTime, Str8LitComp("") },
			}
		}
	}
}
,{
	Str8Lit("CapabilityStatement_Implementation"),
	96,
	9,
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("CapabilityStatement_Implementation") },
			}
		},
		{
			Str8LitComp("id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			24,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("description"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			56,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("url"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			72,
			16,
			{
				{ ValueType::Url, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("custodian"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			88,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		}
	}
}
,{
	Str8Lit("CapabilityStatement_Rest"),
	176,
	19,
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("CapabilityStatement_Rest") },
			}
		},
		{
			Str8LitComp("id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			24,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("mode"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			56,
			16,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("documentation"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			72,
			16,
			{
				{ ValueType::Markdown, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("security"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			88,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CapabilityStatement_Rest_Security") },
			}
		},
		{
			Str8LitComp("resource_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			96,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("resource"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			104,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CapabilityStatement_Rest_Resource") },
			}
		},
		{
			Str8LitComp("interaction_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			112,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("interaction"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			120,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CapabilityStatement_Rest_Interaction") },
			}
		},
		{
			Str8LitComp("searchParam_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			128,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("searchParam"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			136,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CapabilityStatement_Rest_Resource_SearchParam") },
			}
		},
		{
			Str8LitComp("operation_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			144,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("operation"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			152,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CapabilityStatement_Rest_Resource_Operation") },
			}
		},
		{
			Str8LitComp("compartment_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			160,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("compartment"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			168,
			8,
			{
				{ ValueType::Canonical, Str8LitComp("") },
			}
		}
	}
}
,{
	Str8Lit("CapabilityStatement_Rest_Security"),
	96,
	10,
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("CapabilityStatement_Rest_Security") },
			}
		},
		{
			Str8LitComp("id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			24,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("cors"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			56,
			4,
			{
				{ ValueType::Boolean, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("service_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			64,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("service"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			72,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("description"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			80,
			16,
			{
				{ ValueType::Markdown, Str8LitComp("") },
			}
		}
	}
}
,{
	Str8Lit("CapabilityStatement_Rest_Resource"),
	288,
	30,
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("CapabilityStatement_Rest_Resource") },
			}
		},
		{
			Str8LitComp("id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			24,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("type"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			56,
			16,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("profile"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			72,
			16,
			{
				{ ValueType::Canonical, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("supportedProfile_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			88,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("supportedProfile"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			96,
			8,
			{
				{ ValueType::Canonical, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("documentation"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			104,
			16,
			{
				{ ValueType::Markdown, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("interaction_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			120,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("interaction"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			128,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CapabilityStatement_Rest_Resource_Interaction") },
			}
		},
		{
			Str8LitComp("versioning"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			136,
			16,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("readHistory"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			152,
			4,
			{
				{ ValueType::Boolean, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("updateCreate"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			156,
			4,
			{
				{ ValueType::Boolean, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("conditionalCreate"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			160,
			4,
			{
				{ ValueType::Boolean, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("conditionalRead"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			168,
			16,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("conditionalUpdate"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			184,
			4,
			{
				{ ValueType::Boolean, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("conditionalDelete"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			192,
			16,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("referencePolicy_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			208,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("referencePolicy"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			216,
			8,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("searchInclude_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			224,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("searchInclude"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			232,
			8,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("searchRevInclude_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			240,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("searchRevInclude"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			248,
			8,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("searchParam_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			256,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("searchParam"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			264,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CapabilityStatement_Rest_Resource_SearchParam") },
			}
		},
		{
			Str8LitComp("operation_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			272,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("operation"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			280,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CapabilityStatement_Rest_Resource_Operation") },
			}
		}
	}
}
,{
	Str8Lit("CapabilityStatement_Rest_Resource_Interaction"),
	88,
	8,
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("CapabilityStatement_Rest_Resource_Interaction") },
			}
		},
		{
			Str8LitComp("id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			24,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("code"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			56,
			16,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("documentation"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			72,
			16,
			{
				{ ValueType::Markdown, Str8LitComp("") },
			}
		}
	}
}
,{
	Str8Lit("CapabilityStatement_Rest_Resource_SearchParam"),
	120,
	10,
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("CapabilityStatement_Rest_Resource_SearchParam") },
			}
		},
		{
			Str8LitComp("id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			24,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("name"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			56,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("definition"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			72,
			16,
			{
				{ ValueType::Canonical, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("type"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			88,
			16,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("documentation"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			104,
			16,
			{
				{ ValueType::Markdown, Str8LitComp("") },
			}
		}
	}
}
,{
	Str8Lit("CapabilityStatement_Rest_Resource_Operation"),
	104,
	9,
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("CapabilityStatement_Rest_Resource_Operation") },
			}
		},
		{
			Str8LitComp("id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			24,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("name"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			56,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("definition"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			72,
			16,
			{
				{ ValueType::Canonical, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("documentation"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			88,
			16,
			{
				{ ValueType::Markdown, Str8LitComp("") },
			}
		}
	}
}
,{
	Str8Lit("CapabilityStatement_Rest_Interaction"),
	88,
	8,
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("CapabilityStatement_Rest_Interaction") },
			}
		},
		{
			Str8LitComp("id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			24,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("code"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			56,
			16,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("documentation"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			72,
			16,
			{
				{ ValueType::Markdown, Str8LitComp("") },
			}
		}
	}
}
,{
	Str8Lit("CapabilityStatement_Messaging"),
	112,
	12,
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("CapabilityStatement_Messaging") },
			}
		},
		{
			Str8LitComp("id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			24,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("endpoint_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			56,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("endpoint"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			64,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CapabilityStatement_Messaging_Endpoint") },
			}
		},
		{
			Str8LitComp("reliableCache"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			72,
			8,
			{
				{ ValueType::UnsignedInt, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("documentation"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			80,
			16,
			{
				{ ValueType::Markdown, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("supportedMessage_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			96,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("supportedMessage"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			104,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CapabilityStatement_Messaging_SupportedMessage") },
			}
		}
	}
}
,{
	Str8Lit("CapabilityStatement_Messaging_Endpoint"),
	80,
	8,
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("CapabilityStatement_Messaging_Endpoint") },
			}
		},
		{
			Str8LitComp("id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			24,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("protocol"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			56,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Coding") },
			}
		},
		{
			Str8LitComp("address"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			64,
			16,
			{
				{ ValueType::Url, Str8LitComp("") },
			}
		}
	}
}
,{
	Str8Lit("CapabilityStatement_Messaging_SupportedMessage"),
	88,
	8,
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("CapabilityStatement_Messaging_SupportedMessage") },
			}
		},
		{
			Str8LitComp("id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			24,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("mode"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			56,
			16,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("definition"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			72,
			16,
			{
				{ ValueType::Canonical, Str8LitComp("") },
			}
		}
	}
}
,{
	Str8Lit("CapabilityStatement_Document"),
	104,
	9,
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("CapabilityStatement_Document") },
			}
		},
		{
			Str8LitComp("id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			24,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("mode"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			56,
			16,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("documentation"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			72,
			16,
			{
				{ ValueType::Markdown, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("profile"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			88,
			16,
			{
				{ ValueType::Canonical, Str8LitComp("") },
			}
		}
	}
}
,{
	Str8Lit("CarePlan"),
	456,
	49,
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("CarePlan") },
			}
		},
		{
			Str8LitComp("id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("meta"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			24,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Meta") },
			}
		},
		{
			Str8LitComp("implicitRules"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			32,
			16,
			{
				{ ValueType::Uri, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("language"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			48,
			16,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("text"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			64,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Narrative") },
			}
		},
		{
			Str8LitComp("contained_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			72,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("contained"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			80,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Resource") },
			}
		},
		{
			Str8LitComp("extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			88,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			96,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			104,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			112,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("identifier_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			120,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("identifier"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			128,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Identifier") },
			}
		},
		{
			Str8LitComp("instantiatesCanonical_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			136,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("instantiatesCanonical"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			144,
			8,
			{
				{ ValueType::Canonical, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("instantiatesUri_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			152,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("instantiatesUri"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			160,
			8,
			{
				{ ValueType::Uri, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("basedOn_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			168,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("basedOn"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			176,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("replaces_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			184,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("replaces"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			192,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("partOf_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			200,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("partOf"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			208,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("status"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			216,
			16,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("intent"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			232,
			16,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("category_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			248,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("category"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			256,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("title"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			264,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("description"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			280,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("subject"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			296,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("encounter"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			304,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("period"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			312,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Period") },
			}
		},
		{
			Str8LitComp("created"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			320,
			16,
			{
				{ ValueType::DateTime, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("author"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			336,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("contributor_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			344,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("contributor"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			352,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("careTeam_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			360,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("careTeam"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			368,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("addresses_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			376,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("addresses"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			384,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("supportingInfo_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			392,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("supportingInfo"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			400,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("goal_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			408,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("goal"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			416,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("activity_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			424,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("activity"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			432,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CarePlan_Activity") },
			}
		},
		{
			Str8LitComp("note_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			440,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("note"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			448,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Annotation") },
			}
		}
	}
}
,{
	Str8Lit("CarePlan_Activity"),
	120,
	14,
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("CarePlan_Activity") },
			}
		},
		{
			Str8LitComp("id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			24,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("outcomeCodeableConcept_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			56,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("outcomeCodeableConcept"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			64,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("outcomeReference_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			72,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("outcomeReference"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			80,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("progress_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			88,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("progress"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			96,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Annotation") },
			}
		},
		{
			Str8LitComp("reference"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			104,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("detail"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			112,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CarePlan_Activity_Detail") },
			}
		}
	}
}
,{
	Str8Lit("CarePlan_Activity_Detail"),
	280,
	31,
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("CarePlan_Activity_Detail") },
			}
		},
		{
			Str8LitComp("id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			24,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("kind"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			56,
			16,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("instantiatesCanonical_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			72,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("instantiatesCanonical"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			80,
			8,
			{
				{ ValueType::Canonical, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("instantiatesUri_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			88,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("instantiatesUri"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			96,
			8,
			{
				{ ValueType::Uri, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("code"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			104,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("reasonCode_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			112,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("reasonCode"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			120,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("reasonReference_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			128,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("reasonReference"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			136,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("goal_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			144,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("goal"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			152,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("status"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			160,
			16,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("statusReason"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			176,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("doNotPerform"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			184,
			4,
			{
				{ ValueType::Boolean, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("scheduled_type"),
			Cardinality::OneToOne,
			ClassMemberType::Enum,
			188,
			4,
			{
				{ ValueType::Class_Reference, Str8LitComp("Timing") },
				{ ValueType::Class_Reference, Str8LitComp("Period") },
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("scheduled"),
			Cardinality::ZeroToOne,
			ClassMemberType::Union,
			192,
			16,
			{
				{ ValueType::Class_Reference, Str8LitComp("scheduledTiming") },
				{ ValueType::Class_Reference, Str8LitComp("scheduledPeriod") },
				{ ValueType::String, Str8LitComp("scheduledString") },
			}
		},
		{
			Str8LitComp("location"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			208,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("performer_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			216,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("performer"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			224,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("product_type"),
			Cardinality::OneToOne,
			ClassMemberType::Enum,
			232,
			4,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("product"),
			Cardinality::ZeroToOne,
			ClassMemberType::Union,
			240,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("productCodeableConcept") },
				{ ValueType::Class_Reference, Str8LitComp("productReference") },
			}
		},
		{
			Str8LitComp("dailyAmount"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			248,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Quantity") },
			}
		},
		{
			Str8LitComp("quantity"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			256,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Quantity") },
			}
		},
		{
			Str8LitComp("description"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			264,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		}
	}
}
,{
	Str8Lit("CareTeam"),
	304,
	33,
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("CareTeam") },
			}
		},
		{
			Str8LitComp("id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("meta"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			24,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Meta") },
			}
		},
		{
			Str8LitComp("implicitRules"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			32,
			16,
			{
				{ ValueType::Uri, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("language"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			48,
			16,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("text"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			64,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Narrative") },
			}
		},
		{
			Str8LitComp("contained_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			72,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("contained"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			80,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Resource") },
			}
		},
		{
			Str8LitComp("extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			88,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			96,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			104,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			112,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("identifier_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			120,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("identifier"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			128,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Identifier") },
			}
		},
		{
			Str8LitComp("status"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			136,
			16,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("category_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			152,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("category"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			160,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("name"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			168,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("subject"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			184,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("encounter"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			192,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("period"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			200,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Period") },
			}
		},
		{
			Str8LitComp("participant_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			208,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("participant"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			216,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CareTeam_Participant") },
			}
		},
		{
			Str8LitComp("reasonCode_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			224,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("reasonCode"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			232,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("reasonReference_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			240,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("reasonReference"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			248,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("managingOrganization_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			256,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("managingOrganization"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			264,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("telecom_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			272,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("telecom"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			280,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("ContactPoint") },
			}
		},
		{
			Str8LitComp("note_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			288,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("note"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			296,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Annotation") },
			}
		}
	}
}
,{
	Str8Lit("CareTeam_Participant"),
	96,
	11,
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("CareTeam_Participant") },
			}
		},
		{
			Str8LitComp("id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			24,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("role_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			56,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("role"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			64,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("member"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			72,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("onBehalfOf"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			80,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("period"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			88,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Period") },
			}
		}
	}
}
,{
	Str8Lit("CatalogEntry"),
	296,
	31,
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("CatalogEntry") },
			}
		},
		{
			Str8LitComp("id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("meta"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			24,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Meta") },
			}
		},
		{
			Str8LitComp("implicitRules"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			32,
			16,
			{
				{ ValueType::Uri, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("language"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			48,
			16,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("text"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			64,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Narrative") },
			}
		},
		{
			Str8LitComp("contained_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			72,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("contained"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			80,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Resource") },
			}
		},
		{
			Str8LitComp("extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			88,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			96,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			104,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			112,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("identifier_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			120,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("identifier"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			128,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Identifier") },
			}
		},
		{
			Str8LitComp("type"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			136,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("orderable"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			144,
			4,
			{
				{ ValueType::Boolean, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("referencedItem"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			152,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("additionalIdentifier_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			160,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("additionalIdentifier"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			168,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Identifier") },
			}
		},
		{
			Str8LitComp("classification_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			176,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("classification"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			184,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("status"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			192,
			16,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("validityPeriod"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			208,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Period") },
			}
		},
		{
			Str8LitComp("validTo"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			216,
			16,
			{
				{ ValueType::DateTime, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("lastUpdated"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			232,
			16,
			{
				{ ValueType::DateTime, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("additionalCharacteristic_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			248,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("additionalCharacteristic"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			256,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("additionalClassification_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			264,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("additionalClassification"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			272,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("relatedEntry_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			280,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("relatedEntry"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			288,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CatalogEntry_RelatedEntry") },
			}
		}
	}
}
,{
	Str8Lit("CatalogEntry_RelatedEntry"),
	80,
	8,
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("CatalogEntry_RelatedEntry") },
			}
		},
		{
			Str8LitComp("id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			24,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("relationtype"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			56,
			16,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("item"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			72,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		}
	}
}
,{
	Str8Lit("ChargeItem"),
	464,
	51,
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("ChargeItem") },
			}
		},
		{
			Str8LitComp("id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("meta"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			24,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Meta") },
			}
		},
		{
			Str8LitComp("implicitRules"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			32,
			16,
			{
				{ ValueType::Uri, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("language"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			48,
			16,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("text"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			64,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Narrative") },
			}
		},
		{
			Str8LitComp("contained_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			72,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("contained"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			80,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Resource") },
			}
		},
		{
			Str8LitComp("extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			88,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			96,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			104,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			112,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("identifier_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			120,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("identifier"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			128,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Identifier") },
			}
		},
		{
			Str8LitComp("definitionUri_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			136,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("definitionUri"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			144,
			8,
			{
				{ ValueType::Uri, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("definitionCanonical_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			152,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("definitionCanonical"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			160,
			8,
			{
				{ ValueType::Canonical, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("status"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			168,
			16,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("partOf_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			184,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("partOf"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			192,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("code"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			200,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("subject"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			208,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("context"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			216,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("occurrence_type"),
			Cardinality::OneToOne,
			ClassMemberType::Enum,
			224,
			4,
			{
				{ ValueType::DateTime, Str8LitComp("") },
				{ ValueType::Class_Reference, Str8LitComp("Period") },
				{ ValueType::Class_Reference, Str8LitComp("Timing") },
			}
		},
		{
			Str8LitComp("occurrence"),
			Cardinality::ZeroToOne,
			ClassMemberType::Union,
			232,
			16,
			{
				{ ValueType::DateTime, Str8LitComp("occurrenceDateTime") },
				{ ValueType::Class_Reference, Str8LitComp("occurrencePeriod") },
				{ ValueType::Class_Reference, Str8LitComp("occurrenceTiming") },
			}
		},
		{
			Str8LitComp("performer_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			248,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("performer"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			256,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("ChargeItem_Performer") },
			}
		},
		{
			Str8LitComp("performingOrganization"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			264,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("requestingOrganization"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			272,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("costCenter"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			280,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("quantity"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			288,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Quantity") },
			}
		},
		{
			Str8LitComp("bodysite_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			296,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("bodysite"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			304,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("factorOverride"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			312,
			8,
			{
				{ ValueType::Decimal, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("priceOverride"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			320,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Money") },
			}
		},
		{
			Str8LitComp("overrideReason"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			328,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("enterer"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			344,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("enteredDate"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			352,
			16,
			{
				{ ValueType::DateTime, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("reason_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			368,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("reason"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			376,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("service_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			384,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("service"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			392,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("product_type"),
			Cardinality::OneToOne,
			ClassMemberType::Enum,
			400,
			4,
			{
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("product"),
			Cardinality::ZeroToOne,
			ClassMemberType::Union,
			408,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("productReference") },
				{ ValueType::Class_Reference, Str8LitComp("productCodeableConcept") },
			}
		},
		{
			Str8LitComp("account_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			416,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("account"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			424,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("note_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			432,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("note"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			440,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Annotation") },
			}
		},
		{
			Str8LitComp("supportingInformation_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			448,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("supportingInformation"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			456,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		}
	}
}
,{
	Str8Lit("ChargeItem_Performer"),
	72,
	8,
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("ChargeItem_Performer") },
			}
		},
		{
			Str8LitComp("id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			24,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("function_"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			56,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("actor"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			64,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		}
	}
}
,{
	Str8Lit("ChargeItemDefinition"),
	464,
	45,
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("ChargeItemDefinition") },
			}
		},
		{
			Str8LitComp("id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("meta"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			24,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Meta") },
			}
		},
		{
			Str8LitComp("implicitRules"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			32,
			16,
			{
				{ ValueType::Uri, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("language"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			48,
			16,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("text"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			64,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Narrative") },
			}
		},
		{
			Str8LitComp("contained_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			72,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("contained"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			80,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Resource") },
			}
		},
		{
			Str8LitComp("extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			88,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			96,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			104,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			112,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("url"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			120,
			16,
			{
				{ ValueType::Uri, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("identifier_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			136,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("identifier"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			144,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Identifier") },
			}
		},
		{
			Str8LitComp("version"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			152,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("title"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			168,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("derivedFromUri_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			184,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("derivedFromUri"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			192,
			8,
			{
				{ ValueType::Uri, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("partOf_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			200,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("partOf"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			208,
			8,
			{
				{ ValueType::Canonical, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("replaces_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			216,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("replaces"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			224,
			8,
			{
				{ ValueType::Canonical, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("status"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			232,
			16,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("experimental"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			248,
			4,
			{
				{ ValueType::Boolean, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("date"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			256,
			16,
			{
				{ ValueType::DateTime, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("publisher"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			272,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("contact_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			288,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("contact"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			296,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("ContactDetail") },
			}
		},
		{
			Str8LitComp("description"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			304,
			16,
			{
				{ ValueType::Markdown, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("useContext_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			320,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("useContext"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			328,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("UsageContext") },
			}
		},
		{
			Str8LitComp("jurisdiction_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			336,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("jurisdiction"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			344,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("copyright"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			352,
			16,
			{
				{ ValueType::Markdown, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("approvalDate"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			368,
			16,
			{
				{ ValueType::Date, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("lastReviewDate"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			384,
			16,
			{
				{ ValueType::Date, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("effectivePeriod"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			400,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Period") },
			}
		},
		{
			Str8LitComp("code"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			408,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("instance_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			416,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("instance"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			424,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("applicability_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			432,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("applicability"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			440,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("ChargeItemDefinition_Applicability") },
			}
		},
		{
			Str8LitComp("propertyGroup_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			448,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("propertyGroup"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			456,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("ChargeItemDefinition_PropertyGroup") },
			}
		}
	}
}
,{
	Str8Lit("ChargeItemDefinition_Applicability"),
	104,
	9,
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("ChargeItemDefinition_Applicability") },
			}
		},
		{
			Str8LitComp("id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			24,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("description"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			56,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("language"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			72,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("expression"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			88,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		}
	}
}
,{
	Str8Lit("ChargeItemDefinition_PropertyGroup"),
	88,
	10,
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("ChargeItemDefinition_PropertyGroup") },
			}
		},
		{
			Str8LitComp("id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			24,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("applicability_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			56,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("applicability"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			64,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("ChargeItemDefinition_Applicability") },
			}
		},
		{
			Str8LitComp("priceComponent_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			72,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("priceComponent"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			80,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("ChargeItemDefinition_PropertyGroup_PriceComponent") },
			}
		}
	}
}
,{
	Str8Lit("ChargeItemDefinition_PropertyGroup_PriceComponent"),
	96,
	10,
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("ChargeItemDefinition_PropertyGroup_PriceComponent") },
			}
		},
		{
			Str8LitComp("id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			24,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("type"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			56,
			16,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("code"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			72,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("factor"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			80,
			8,
			{
				{ ValueType::Decimal, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("amount"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			88,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Money") },
			}
		}
	}
}
,{
	Str8Lit("Claim"),
	424,
	47,
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("Claim") },
			}
		},
		{
			Str8LitComp("id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("meta"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			24,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Meta") },
			}
		},
		{
			Str8LitComp("implicitRules"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			32,
			16,
			{
				{ ValueType::Uri, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("language"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			48,
			16,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("text"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			64,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Narrative") },
			}
		},
		{
			Str8LitComp("contained_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			72,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("contained"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			80,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Resource") },
			}
		},
		{
			Str8LitComp("extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			88,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			96,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			104,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			112,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("identifier_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			120,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("identifier"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			128,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Identifier") },
			}
		},
		{
			Str8LitComp("status"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			136,
			16,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("type"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			152,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("subType"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			160,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("use"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			168,
			16,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("patient"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			184,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("billablePeriod"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			192,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Period") },
			}
		},
		{
			Str8LitComp("created"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			200,
			16,
			{
				{ ValueType::DateTime, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("enterer"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			216,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("insurer"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			224,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("provider"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			232,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("priority"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			240,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("fundsReserve"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			248,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("related_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			256,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("related"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			264,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Claim_Related") },
			}
		},
		{
			Str8LitComp("prescription"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			272,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("originalPrescription"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			280,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("payee"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			288,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Claim_Payee") },
			}
		},
		{
			Str8LitComp("referral"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			296,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("facility"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			304,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("careTeam_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			312,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("careTeam"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			320,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Claim_CareTeam") },
			}
		},
		{
			Str8LitComp("supportingInfo_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			328,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("supportingInfo"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			336,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Claim_SupportingInfo") },
			}
		},
		{
			Str8LitComp("diagnosis_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			344,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("diagnosis"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			352,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Claim_Diagnosis") },
			}
		},
		{
			Str8LitComp("procedure_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			360,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("procedure"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			368,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Claim_Procedure") },
			}
		},
		{
			Str8LitComp("insurance_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			376,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("insurance"),
			Cardinality::OneToInf,
			ClassMemberType::Single,
			384,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Claim_Insurance") },
			}
		},
		{
			Str8LitComp("accident"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			392,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Claim_Accident") },
			}
		},
		{
			Str8LitComp("item_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			400,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("item"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			408,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Claim_Item") },
			}
		},
		{
			Str8LitComp("total"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			416,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Money") },
			}
		}
	}
}
,{
	Str8Lit("Claim_Related"),
	80,
	9,
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("Claim_Related") },
			}
		},
		{
			Str8LitComp("id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			24,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("claim"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			56,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("relationship"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			64,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("reference"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			72,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Identifier") },
			}
		}
	}
}
,{
	Str8Lit("Claim_Payee"),
	72,
	8,
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("Claim_Payee") },
			}
		},
		{
			Str8LitComp("id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			24,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("type"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			56,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("party"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			64,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		}
	}
}
,{
	Str8Lit("Claim_CareTeam"),
	96,
	11,
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("Claim_CareTeam") },
			}
		},
		{
			Str8LitComp("id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			24,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("sequence"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			56,
			8,
			{
				{ ValueType::PositiveInt, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("provider"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			64,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("responsible"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			72,
			4,
			{
				{ ValueType::Boolean, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("role"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			80,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("qualification"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			88,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		}
	}
}
,{
	Str8Lit("Claim_SupportingInfo"),
	136,
	14,
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("Claim_SupportingInfo") },
			}
		},
		{
			Str8LitComp("id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			24,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("sequence"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			56,
			8,
			{
				{ ValueType::PositiveInt, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("category"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			64,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("code"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			72,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("timing_type"),
			Cardinality::OneToOne,
			ClassMemberType::Enum,
			80,
			4,
			{
				{ ValueType::Date, Str8LitComp("") },
				{ ValueType::Class_Reference, Str8LitComp("Period") },
			}
		},
		{
			Str8LitComp("timing"),
			Cardinality::ZeroToOne,
			ClassMemberType::Union,
			88,
			16,
			{
				{ ValueType::Date, Str8LitComp("timingDate") },
				{ ValueType::Class_Reference, Str8LitComp("timingPeriod") },
			}
		},
		{
			Str8LitComp("value_type"),
			Cardinality::OneToOne,
			ClassMemberType::Enum,
			104,
			4,
			{
				{ ValueType::Boolean, Str8LitComp("") },
				{ ValueType::String, Str8LitComp("") },
				{ ValueType::Class_Reference, Str8LitComp("Quantity") },
				{ ValueType::Class_Reference, Str8LitComp("Attachment") },
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("value"),
			Cardinality::ZeroToOne,
			ClassMemberType::Union,
			112,
			16,
			{
				{ ValueType::Boolean, Str8LitComp("valueBoolean") },
				{ ValueType::String, Str8LitComp("valueString") },
				{ ValueType::Class_Reference, Str8LitComp("valueQuantity") },
				{ ValueType::Class_Reference, Str8LitComp("valueAttachment") },
				{ ValueType::Class_Reference, Str8LitComp("valueReference") },
			}
		},
		{
			Str8LitComp("reason"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			128,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		}
	}
}
,{
	Str8Lit("Claim_Diagnosis"),
	112,
	13,
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("Claim_Diagnosis") },
			}
		},
		{
			Str8LitComp("id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			24,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("sequence"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			56,
			8,
			{
				{ ValueType::PositiveInt, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("diagnosis_type"),
			Cardinality::OneToOne,
			ClassMemberType::Enum,
			64,
			4,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("diagnosis"),
			Cardinality::OneToOne,
			ClassMemberType::Union,
			72,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("diagnosisCodeableConcept") },
				{ ValueType::Class_Reference, Str8LitComp("diagnosisReference") },
			}
		},
		{
			Str8LitComp("type_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			80,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("type"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			88,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("onAdmission"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			96,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("packageCode"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			104,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		}
	}
}
,{
	Str8Lit("Claim_Procedure"),
	128,
	14,
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("Claim_Procedure") },
			}
		},
		{
			Str8LitComp("id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			24,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("sequence"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			56,
			8,
			{
				{ ValueType::PositiveInt, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("type_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			64,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("type"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			72,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("date"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			80,
			16,
			{
				{ ValueType::DateTime, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("procedure_type"),
			Cardinality::OneToOne,
			ClassMemberType::Enum,
			96,
			4,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("procedure"),
			Cardinality::OneToOne,
			ClassMemberType::Union,
			104,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("procedureCodeableConcept") },
				{ ValueType::Class_Reference, Str8LitComp("procedureReference") },
			}
		},
		{
			Str8LitComp("udi_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			112,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("udi"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			120,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		}
	}
}
,{
	Str8Lit("Claim_Insurance"),
	128,
	14,
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("Claim_Insurance") },
			}
		},
		{
			Str8LitComp("id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			24,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("sequence"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			56,
			8,
			{
				{ ValueType::PositiveInt, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("focal"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			64,
			4,
			{
				{ ValueType::Boolean, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("identifier"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			72,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Identifier") },
			}
		},
		{
			Str8LitComp("coverage"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			80,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("businessArrangement"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			88,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("preAuthRef_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			104,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("preAuthRef"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			112,
			8,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("claimResponse"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			120,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		}
	}
}
,{
	Str8Lit("Claim_Accident"),
	96,
	10,
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("Claim_Accident") },
			}
		},
		{
			Str8LitComp("id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			24,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("date"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			56,
			16,
			{
				{ ValueType::Date, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("type"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			72,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("location_type"),
			Cardinality::OneToOne,
			ClassMemberType::Enum,
			80,
			4,
			{
				{ ValueType::Class_Reference, Str8LitComp("Address") },
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("location"),
			Cardinality::ZeroToOne,
			ClassMemberType::Union,
			88,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("locationAddress") },
				{ ValueType::Class_Reference, Str8LitComp("locationReference") },
			}
		}
	}
}
,{
	Str8Lit("Claim_Item"),
	328,
	39,
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("Claim_Item") },
			}
		},
		{
			Str8LitComp("id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			24,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("sequence"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			56,
			8,
			{
				{ ValueType::PositiveInt, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("careTeamSequence_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			64,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("careTeamSequence"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			72,
			8,
			{
				{ ValueType::PositiveInt, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("diagnosisSequence_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			80,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("diagnosisSequence"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			88,
			8,
			{
				{ ValueType::PositiveInt, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("procedureSequence_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			96,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("procedureSequence"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			104,
			8,
			{
				{ ValueType::PositiveInt, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("informationSequence_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			112,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("informationSequence"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			120,
			8,
			{
				{ ValueType::PositiveInt, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("revenue"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			128,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("category"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			136,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("productOrService"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			144,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("modifier_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			152,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("modifier"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			160,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("programCode_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			168,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("programCode"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			176,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("serviced_type"),
			Cardinality::OneToOne,
			ClassMemberType::Enum,
			184,
			4,
			{
				{ ValueType::Date, Str8LitComp("") },
				{ ValueType::Class_Reference, Str8LitComp("Period") },
			}
		},
		{
			Str8LitComp("serviced"),
			Cardinality::ZeroToOne,
			ClassMemberType::Union,
			192,
			16,
			{
				{ ValueType::Date, Str8LitComp("servicedDate") },
				{ ValueType::Class_Reference, Str8LitComp("servicedPeriod") },
			}
		},
		{
			Str8LitComp("location_type"),
			Cardinality::OneToOne,
			ClassMemberType::Enum,
			208,
			4,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
				{ ValueType::Class_Reference, Str8LitComp("Address") },
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("location"),
			Cardinality::ZeroToOne,
			ClassMemberType::Union,
			216,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("locationCodeableConcept") },
				{ ValueType::Class_Reference, Str8LitComp("locationAddress") },
				{ ValueType::Class_Reference, Str8LitComp("locationReference") },
			}
		},
		{
			Str8LitComp("quantity"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			224,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Quantity") },
			}
		},
		{
			Str8LitComp("unitPrice"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			232,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Money") },
			}
		},
		{
			Str8LitComp("factor"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			240,
			8,
			{
				{ ValueType::Decimal, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("net"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			248,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Money") },
			}
		},
		{
			Str8LitComp("udi_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			256,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("udi"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			264,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("bodySite"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			272,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("subSite_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			280,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("subSite"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			288,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("encounter_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			296,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("encounter"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			304,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("detail_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			312,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("detail"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			320,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Claim_Item_Detail") },
			}
		}
	}
}
,{
	Str8Lit("Claim_Item_Detail"),
	184,
	22,
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("Claim_Item_Detail") },
			}
		},
		{
			Str8LitComp("id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			24,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("sequence"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			56,
			8,
			{
				{ ValueType::PositiveInt, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("revenue"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			64,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("category"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			72,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("productOrService"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			80,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("modifier_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			88,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("modifier"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			96,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("programCode_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			104,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("programCode"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			112,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("quantity"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			120,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Quantity") },
			}
		},
		{
			Str8LitComp("unitPrice"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			128,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Money") },
			}
		},
		{
			Str8LitComp("factor"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			136,
			8,
			{
				{ ValueType::Decimal, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("net"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			144,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Money") },
			}
		},
		{
			Str8LitComp("udi_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			152,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("udi"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			160,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("subDetail_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			168,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("subDetail"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			176,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Claim_Item_Detail_SubDetail") },
			}
		}
	}
}
,{
	Str8Lit("Claim_Item_Detail_SubDetail"),
	168,
	20,
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("Claim_Item_Detail_SubDetail") },
			}
		},
		{
			Str8LitComp("id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			24,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("sequence"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			56,
			8,
			{
				{ ValueType::PositiveInt, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("revenue"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			64,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("category"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			72,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("productOrService"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			80,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("modifier_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			88,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("modifier"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			96,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("programCode_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			104,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("programCode"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			112,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("quantity"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			120,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Quantity") },
			}
		},
		{
			Str8LitComp("unitPrice"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			128,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Money") },
			}
		},
		{
			Str8LitComp("factor"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			136,
			8,
			{
				{ ValueType::Decimal, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("net"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			144,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Money") },
			}
		},
		{
			Str8LitComp("udi_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			152,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("udi"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			160,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		}
	}
}
,{
	Str8Lit("ClaimResponse"),
	456,
	48,
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("ClaimResponse") },
			}
		},
		{
			Str8LitComp("id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("meta"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			24,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Meta") },
			}
		},
		{
			Str8LitComp("implicitRules"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			32,
			16,
			{
				{ ValueType::Uri, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("language"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			48,
			16,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("text"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			64,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Narrative") },
			}
		},
		{
			Str8LitComp("contained_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			72,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("contained"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			80,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Resource") },
			}
		},
		{
			Str8LitComp("extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			88,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			96,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			104,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			112,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("identifier_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			120,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("identifier"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			128,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Identifier") },
			}
		},
		{
			Str8LitComp("status"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			136,
			16,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("type"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			152,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("subType"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			160,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("use"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			168,
			16,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("patient"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			184,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("created"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			192,
			16,
			{
				{ ValueType::DateTime, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("insurer"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			208,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("requestor"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			216,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("request"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			224,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("outcome"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			232,
			16,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("disposition"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			248,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("preAuthRef"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			264,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("preAuthPeriod"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			280,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Period") },
			}
		},
		{
			Str8LitComp("payeeType"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			288,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("item_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			296,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("item"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			304,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("ClaimResponse_Item") },
			}
		},
		{
			Str8LitComp("addItem_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			312,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("addItem"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			320,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("ClaimResponse_AddItem") },
			}
		},
		{
			Str8LitComp("adjudication_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			328,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("adjudication"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			336,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("ClaimResponse_Item_Adjudication") },
			}
		},
		{
			Str8LitComp("total_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			344,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("total"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			352,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("ClaimResponse_Total") },
			}
		},
		{
			Str8LitComp("payment"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			360,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("ClaimResponse_Payment") },
			}
		},
		{
			Str8LitComp("fundsReserve"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			368,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("formCode"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			376,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("form"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			384,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Attachment") },
			}
		},
		{
			Str8LitComp("processNote_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			392,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("processNote"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			400,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("ClaimResponse_ProcessNote") },
			}
		},
		{
			Str8LitComp("communicationRequest_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			408,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("communicationRequest"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			416,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("insurance_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			424,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("insurance"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			432,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("ClaimResponse_Insurance") },
			}
		},
		{
			Str8LitComp("error_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			440,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("error"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			448,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("ClaimResponse_Error") },
			}
		}
	}
}
,{
	Str8Lit("ClaimResponse_Item"),
	112,
	13,
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("ClaimResponse_Item") },
			}
		},
		{
			Str8LitComp("id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			24,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("itemSequence"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			56,
			8,
			{
				{ ValueType::PositiveInt, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("noteNumber_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			64,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("noteNumber"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			72,
			8,
			{
				{ ValueType::PositiveInt, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("adjudication_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			80,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("adjudication"),
			Cardinality::OneToInf,
			ClassMemberType::Single,
			88,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("ClaimResponse_Item_Adjudication") },
			}
		},
		{
			Str8LitComp("detail_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			96,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("detail"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			104,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("ClaimResponse_Item_Detail") },
			}
		}
	}
}
,{
	Str8Lit("ClaimResponse_Item_Adjudication"),
	88,
	10,
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("ClaimResponse_Item_Adjudication") },
			}
		},
		{
			Str8LitComp("id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			24,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("category"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			56,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("reason"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			64,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("amount"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			72,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Money") },
			}
		},
		{
			Str8LitComp("value"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			80,
			8,
			{
				{ ValueType::Decimal, Str8LitComp("") },
			}
		}
	}
}
,{
	Str8Lit("ClaimResponse_Item_Detail"),
	112,
	13,
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("ClaimResponse_Item_Detail") },
			}
		},
		{
			Str8LitComp("id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			24,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("detailSequence"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			56,
			8,
			{
				{ ValueType::PositiveInt, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("noteNumber_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			64,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("noteNumber"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			72,
			8,
			{
				{ ValueType::PositiveInt, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("adjudication_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			80,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("adjudication"),
			Cardinality::OneToInf,
			ClassMemberType::Single,
			88,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("ClaimResponse_Item_Adjudication") },
			}
		},
		{
			Str8LitComp("subDetail_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			96,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("subDetail"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			104,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("ClaimResponse_Item_Detail_SubDetail") },
			}
		}
	}
}
,{
	Str8Lit("ClaimResponse_Item_Detail_SubDetail"),
	96,
	11,
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("ClaimResponse_Item_Detail_SubDetail") },
			}
		},
		{
			Str8LitComp("id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			24,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("subDetailSequence"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			56,
			8,
			{
				{ ValueType::PositiveInt, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("noteNumber_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			64,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("noteNumber"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			72,
			8,
			{
				{ ValueType::PositiveInt, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("adjudication_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			80,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("adjudication"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			88,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("ClaimResponse_Item_Adjudication") },
			}
		}
	}
}
,{
	Str8Lit("ClaimResponse_AddItem"),
	304,
	36,
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("ClaimResponse_AddItem") },
			}
		},
		{
			Str8LitComp("id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			24,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("itemSequence_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			56,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("itemSequence"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			64,
			8,
			{
				{ ValueType::PositiveInt, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("detailSequence_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			72,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("detailSequence"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			80,
			8,
			{
				{ ValueType::PositiveInt, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("subdetailSequence_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			88,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("subdetailSequence"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			96,
			8,
			{
				{ ValueType::PositiveInt, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("provider_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			104,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("provider"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			112,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("productOrService"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			120,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("modifier_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			128,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("modifier"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			136,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("programCode_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			144,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("programCode"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			152,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("serviced_type"),
			Cardinality::OneToOne,
			ClassMemberType::Enum,
			160,
			4,
			{
				{ ValueType::Date, Str8LitComp("") },
				{ ValueType::Class_Reference, Str8LitComp("Period") },
			}
		},
		{
			Str8LitComp("serviced"),
			Cardinality::ZeroToOne,
			ClassMemberType::Union,
			168,
			16,
			{
				{ ValueType::Date, Str8LitComp("servicedDate") },
				{ ValueType::Class_Reference, Str8LitComp("servicedPeriod") },
			}
		},
		{
			Str8LitComp("location_type"),
			Cardinality::OneToOne,
			ClassMemberType::Enum,
			184,
			4,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
				{ ValueType::Class_Reference, Str8LitComp("Address") },
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("location"),
			Cardinality::ZeroToOne,
			ClassMemberType::Union,
			192,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("locationCodeableConcept") },
				{ ValueType::Class_Reference, Str8LitComp("locationAddress") },
				{ ValueType::Class_Reference, Str8LitComp("locationReference") },
			}
		},
		{
			Str8LitComp("quantity"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			200,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Quantity") },
			}
		},
		{
			Str8LitComp("unitPrice"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			208,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Money") },
			}
		},
		{
			Str8LitComp("factor"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			216,
			8,
			{
				{ ValueType::Decimal, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("net"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			224,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Money") },
			}
		},
		{
			Str8LitComp("bodySite"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			232,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("subSite_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			240,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("subSite"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			248,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("noteNumber_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			256,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("noteNumber"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			264,
			8,
			{
				{ ValueType::PositiveInt, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("adjudication_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			272,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("adjudication"),
			Cardinality::OneToInf,
			ClassMemberType::Single,
			280,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("ClaimResponse_Item_Adjudication") },
			}
		},
		{
			Str8LitComp("detail_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			288,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("detail"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			296,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("ClaimResponse_AddItem_Detail") },
			}
		}
	}
}
,{
	Str8Lit("ClaimResponse_AddItem_Detail"),
	160,
	19,
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("ClaimResponse_AddItem_Detail") },
			}
		},
		{
			Str8LitComp("id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			24,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("productOrService"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			56,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("modifier_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			64,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("modifier"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			72,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("quantity"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			80,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Quantity") },
			}
		},
		{
			Str8LitComp("unitPrice"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			88,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Money") },
			}
		},
		{
			Str8LitComp("factor"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			96,
			8,
			{
				{ ValueType::Decimal, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("net"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			104,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Money") },
			}
		},
		{
			Str8LitComp("noteNumber_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			112,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("noteNumber"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			120,
			8,
			{
				{ ValueType::PositiveInt, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("adjudication_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			128,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("adjudication"),
			Cardinality::OneToInf,
			ClassMemberType::Single,
			136,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("ClaimResponse_Item_Adjudication") },
			}
		},
		{
			Str8LitComp("subDetail_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			144,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("subDetail"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			152,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("ClaimResponse_AddItem_Detail_SubDetail") },
			}
		}
	}
}
,{
	Str8Lit("ClaimResponse_AddItem_Detail_SubDetail"),
	144,
	17,
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("ClaimResponse_AddItem_Detail_SubDetail") },
			}
		},
		{
			Str8LitComp("id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			24,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("productOrService"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			56,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("modifier_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			64,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("modifier"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			72,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("quantity"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			80,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Quantity") },
			}
		},
		{
			Str8LitComp("unitPrice"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			88,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Money") },
			}
		},
		{
			Str8LitComp("factor"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			96,
			8,
			{
				{ ValueType::Decimal, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("net"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			104,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Money") },
			}
		},
		{
			Str8LitComp("noteNumber_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			112,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("noteNumber"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			120,
			8,
			{
				{ ValueType::PositiveInt, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("adjudication_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			128,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("adjudication"),
			Cardinality::OneToInf,
			ClassMemberType::Single,
			136,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("ClaimResponse_Item_Adjudication") },
			}
		}
	}
}
,{
	Str8Lit("ClaimResponse_Total"),
	72,
	8,
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("ClaimResponse_Total") },
			}
		},
		{
			Str8LitComp("id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			24,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("category"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			56,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("amount"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			64,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Money") },
			}
		}
	}
}
,{
	Str8Lit("ClaimResponse_Payment"),
	112,
	12,
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("ClaimResponse_Payment") },
			}
		},
		{
			Str8LitComp("id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			24,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("type"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			56,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("adjustment"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			64,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Money") },
			}
		},
		{
			Str8LitComp("adjustmentReason"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			72,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("date"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			80,
			16,
			{
				{ ValueType::Date, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("amount"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			96,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Money") },
			}
		},
		{
			Str8LitComp("identifier"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			104,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Identifier") },
			}
		}
	}
}
,{
	Str8Lit("ClaimResponse_ProcessNote"),
	104,
	10,
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("ClaimResponse_ProcessNote") },
			}
		},
		{
			Str8LitComp("id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			24,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("number"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			56,
			8,
			{
				{ ValueType::PositiveInt, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("type"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			64,
			16,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("text"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			80,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("language"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			96,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		}
	}
}
,{
	Str8Lit("ClaimResponse_Insurance"),
	104,
	11,
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("ClaimResponse_Insurance") },
			}
		},
		{
			Str8LitComp("id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			24,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("sequence"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			56,
			8,
			{
				{ ValueType::PositiveInt, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("focal"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			64,
			4,
			{
				{ ValueType::Boolean, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("coverage"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			72,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("businessArrangement"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			80,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("claimResponse"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			96,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		}
	}
}
,{
	Str8Lit("ClaimResponse_Error"),
	88,
	10,
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("ClaimResponse_Error") },
			}
		},
		{
			Str8LitComp("id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			24,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("itemSequence"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			56,
			8,
			{
				{ ValueType::PositiveInt, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("detailSequence"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			64,
			8,
			{
				{ ValueType::PositiveInt, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("subDetailSequence"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			72,
			8,
			{
				{ ValueType::PositiveInt, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("code"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			80,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		}
	}
}
,{
	Str8Lit("ClinicalImpression"),
	400,
	42,
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("ClinicalImpression") },
			}
		},
		{
			Str8LitComp("id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("meta"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			24,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Meta") },
			}
		},
		{
			Str8LitComp("implicitRules"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			32,
			16,
			{
				{ ValueType::Uri, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("language"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			48,
			16,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("text"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			64,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Narrative") },
			}
		},
		{
			Str8LitComp("contained_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			72,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("contained"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			80,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Resource") },
			}
		},
		{
			Str8LitComp("extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			88,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			96,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			104,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			112,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("identifier_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			120,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("identifier"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			128,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Identifier") },
			}
		},
		{
			Str8LitComp("status"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			136,
			16,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("statusReason"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			152,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("code"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			160,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("description"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			168,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("subject"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			184,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("encounter"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			192,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("effective_type"),
			Cardinality::OneToOne,
			ClassMemberType::Enum,
			200,
			4,
			{
				{ ValueType::DateTime, Str8LitComp("") },
				{ ValueType::Class_Reference, Str8LitComp("Period") },
			}
		},
		{
			Str8LitComp("effective"),
			Cardinality::ZeroToOne,
			ClassMemberType::Union,
			208,
			16,
			{
				{ ValueType::DateTime, Str8LitComp("effectiveDateTime") },
				{ ValueType::Class_Reference, Str8LitComp("effectivePeriod") },
			}
		},
		{
			Str8LitComp("date"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			224,
			16,
			{
				{ ValueType::DateTime, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("assessor"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			240,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("previous"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			248,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("problem_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			256,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("problem"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			264,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("investigation_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			272,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("investigation"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			280,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("ClinicalImpression_Investigation") },
			}
		},
		{
			Str8LitComp("protocol_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			288,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("protocol"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			296,
			8,
			{
				{ ValueType::Uri, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("summary"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			304,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("finding_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			320,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("finding"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			328,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("ClinicalImpression_Finding") },
			}
		},
		{
			Str8LitComp("prognosisCodeableConcept_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			336,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("prognosisCodeableConcept"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			344,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("prognosisReference_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			352,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("prognosisReference"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			360,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("supportingInfo_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			368,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("supportingInfo"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			376,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("note_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			384,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("note"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			392,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Annotation") },
			}
		}
	}
}
,{
	Str8Lit("ClinicalImpression_Investigation"),
	80,
	9,
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("ClinicalImpression_Investigation") },
			}
		},
		{
			Str8LitComp("id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			24,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("code"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			56,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("item_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			64,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("item"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			72,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		}
	}
}
,{
	Str8Lit("ClinicalImpression_Finding"),
	88,
	9,
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("ClinicalImpression_Finding") },
			}
		},
		{
			Str8LitComp("id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			24,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("itemCodeableConcept"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			56,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("itemReference"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			64,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("basis"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			72,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		}
	}
}
,{
	Str8Lit("CodeSystem"),
	488,
	45,
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("CodeSystem") },
			}
		},
		{
			Str8LitComp("id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("meta"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			24,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Meta") },
			}
		},
		{
			Str8LitComp("implicitRules"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			32,
			16,
			{
				{ ValueType::Uri, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("language"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			48,
			16,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("text"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			64,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Narrative") },
			}
		},
		{
			Str8LitComp("contained_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			72,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("contained"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			80,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Resource") },
			}
		},
		{
			Str8LitComp("extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			88,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			96,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			104,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			112,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("url"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			120,
			16,
			{
				{ ValueType::Uri, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("identifier_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			136,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("identifier"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			144,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Identifier") },
			}
		},
		{
			Str8LitComp("version"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			152,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("name"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			168,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("title"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			184,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("status"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			200,
			16,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("experimental"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			216,
			4,
			{
				{ ValueType::Boolean, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("date"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			224,
			16,
			{
				{ ValueType::DateTime, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("publisher"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			240,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("contact_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			256,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("contact"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			264,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("ContactDetail") },
			}
		},
		{
			Str8LitComp("description"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			272,
			16,
			{
				{ ValueType::Markdown, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("useContext_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			288,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("useContext"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			296,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("UsageContext") },
			}
		},
		{
			Str8LitComp("jurisdiction_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			304,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("jurisdiction"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			312,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("purpose"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			320,
			16,
			{
				{ ValueType::Markdown, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("copyright"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			336,
			16,
			{
				{ ValueType::Markdown, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("caseSensitive"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			352,
			4,
			{
				{ ValueType::Boolean, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("valueSet"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			360,
			16,
			{
				{ ValueType::Canonical, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("hierarchyMeaning"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			376,
			16,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("compositional"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			392,
			4,
			{
				{ ValueType::Boolean, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("versionNeeded"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			396,
			4,
			{
				{ ValueType::Boolean, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("content"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			400,
			16,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("supplements"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			416,
			16,
			{
				{ ValueType::Canonical, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("count"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			432,
			8,
			{
				{ ValueType::UnsignedInt, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("filter_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			440,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("filter"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			448,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeSystem_Filter") },
			}
		},
		{
			Str8LitComp("property_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			456,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("property"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			464,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeSystem_Property") },
			}
		},
		{
			Str8LitComp("concept_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			472,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("concept"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			480,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeSystem_Concept") },
			}
		}
	}
}
,{
	Str8Lit("CodeSystem_Filter"),
	120,
	11,
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("CodeSystem_Filter") },
			}
		},
		{
			Str8LitComp("id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			24,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("code"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			56,
			16,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("description"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			72,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("operator__count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			88,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("operator_"),
			Cardinality::OneToInf,
			ClassMemberType::Single,
			96,
			8,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("value"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			104,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		}
	}
}
,{
	Str8Lit("CodeSystem_Property"),
	120,
	10,
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("CodeSystem_Property") },
			}
		},
		{
			Str8LitComp("id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			24,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("code"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			56,
			16,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("uri"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			72,
			16,
			{
				{ ValueType::Uri, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("description"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			88,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("type"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			104,
			16,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		}
	}
}
,{
	Str8Lit("CodeSystem_Concept"),
	152,
	15,
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("CodeSystem_Concept") },
			}
		},
		{
			Str8LitComp("id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			24,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("code"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			56,
			16,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("display"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			72,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("definition"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			88,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("designation_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			104,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("designation"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			112,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeSystem_Concept_Designation") },
			}
		},
		{
			Str8LitComp("property_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			120,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("property"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			128,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeSystem_Concept_Property") },
			}
		},
		{
			Str8LitComp("concept_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			136,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("concept"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			144,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeSystem_Concept") },
			}
		}
	}
}
,{
	Str8Lit("CodeSystem_Concept_Designation"),
	96,
	9,
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("CodeSystem_Concept_Designation") },
			}
		},
		{
			Str8LitComp("id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			24,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("language"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			56,
			16,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("use"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			72,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Coding") },
			}
		},
		{
			Str8LitComp("value"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			80,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		}
	}
}
,{
	Str8Lit("CodeSystem_Concept_Property"),
	96,
	9,
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("CodeSystem_Concept_Property") },
			}
		},
		{
			Str8LitComp("id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			24,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("code"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			56,
			16,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("value_type"),
			Cardinality::OneToOne,
			ClassMemberType::Enum,
			72,
			4,
			{
				{ ValueType::Code, Str8LitComp("") },
				{ ValueType::Class_Reference, Str8LitComp("Coding") },
				{ ValueType::String, Str8LitComp("") },
				{ ValueType::Class_Reference, Str8LitComp("Integer") },
				{ ValueType::Boolean, Str8LitComp("") },
				{ ValueType::DateTime, Str8LitComp("") },
				{ ValueType::Decimal, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("value"),
			Cardinality::OneToOne,
			ClassMemberType::Union,
			80,
			16,
			{
				{ ValueType::Code, Str8LitComp("valueCode") },
				{ ValueType::Class_Reference, Str8LitComp("valueCoding") },
				{ ValueType::String, Str8LitComp("valueString") },
				{ ValueType::Class_Reference, Str8LitComp("valueInteger") },
				{ ValueType::Boolean, Str8LitComp("valueBoolean") },
				{ ValueType::DateTime, Str8LitComp("valueDateTime") },
				{ ValueType::Decimal, Str8LitComp("valueDecimal") },
			}
		}
	}
}
,{
	Str8Lit("Communication"),
	448,
	49,
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("Communication") },
			}
		},
		{
			Str8LitComp("id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("meta"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			24,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Meta") },
			}
		},
		{
			Str8LitComp("implicitRules"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			32,
			16,
			{
				{ ValueType::Uri, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("language"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			48,
			16,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("text"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			64,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Narrative") },
			}
		},
		{
			Str8LitComp("contained_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			72,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("contained"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			80,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Resource") },
			}
		},
		{
			Str8LitComp("extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			88,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			96,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			104,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			112,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("identifier_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			120,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("identifier"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			128,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Identifier") },
			}
		},
		{
			Str8LitComp("instantiatesCanonical_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			136,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("instantiatesCanonical"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			144,
			8,
			{
				{ ValueType::Canonical, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("instantiatesUri_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			152,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("instantiatesUri"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			160,
			8,
			{
				{ ValueType::Uri, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("basedOn_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			168,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("basedOn"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			176,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("partOf_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			184,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("partOf"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			192,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("inResponseTo_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			200,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("inResponseTo"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			208,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("status"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			216,
			16,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("statusReason"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			232,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("category_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			240,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("category"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			248,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("priority"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			256,
			16,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("medium_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			272,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("medium"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			280,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("subject"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			288,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("topic"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			296,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("about_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			304,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("about"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			312,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("encounter"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			320,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("sent"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			328,
			16,
			{
				{ ValueType::DateTime, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("received"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			344,
			16,
			{
				{ ValueType::DateTime, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("recipient_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			360,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("recipient"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			368,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("sender"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			376,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("reasonCode_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			384,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("reasonCode"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			392,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("reasonReference_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			400,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("reasonReference"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			408,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("payload_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			416,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("payload"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			424,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Communication_Payload") },
			}
		},
		{
			Str8LitComp("note_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			432,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("note"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			440,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Annotation") },
			}
		}
	}
}
,{
	Str8Lit("Communication_Payload"),
	80,
	8,
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("Communication_Payload") },
			}
		},
		{
			Str8LitComp("id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			24,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("content_type"),
			Cardinality::OneToOne,
			ClassMemberType::Enum,
			56,
			4,
			{
				{ ValueType::String, Str8LitComp("") },
				{ ValueType::Class_Reference, Str8LitComp("Attachment") },
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("content"),
			Cardinality::OneToOne,
			ClassMemberType::Union,
			64,
			16,
			{
				{ ValueType::String, Str8LitComp("contentString") },
				{ ValueType::Class_Reference, Str8LitComp("contentAttachment") },
				{ ValueType::Class_Reference, Str8LitComp("contentReference") },
			}
		}
	}
}
,{
	Str8Lit("CommunicationRequest"),
	424,
	46,
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("CommunicationRequest") },
			}
		},
		{
			Str8LitComp("id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("meta"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			24,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Meta") },
			}
		},
		{
			Str8LitComp("implicitRules"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			32,
			16,
			{
				{ ValueType::Uri, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("language"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			48,
			16,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("text"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			64,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Narrative") },
			}
		},
		{
			Str8LitComp("contained_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			72,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("contained"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			80,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Resource") },
			}
		},
		{
			Str8LitComp("extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			88,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			96,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			104,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			112,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("identifier_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			120,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("identifier"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			128,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Identifier") },
			}
		},
		{
			Str8LitComp("basedOn_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			136,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("basedOn"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			144,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("replaces_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			152,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("replaces"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			160,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("groupIdentifier"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			168,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Identifier") },
			}
		},
		{
			Str8LitComp("status"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			176,
			16,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("statusReason"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			192,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("category_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			200,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("category"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			208,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("priority"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			216,
			16,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("doNotPerform"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			232,
			4,
			{
				{ ValueType::Boolean, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("medium_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			240,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("medium"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			248,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("subject"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			256,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("about_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			264,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("about"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			272,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("encounter"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			280,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("payload_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			288,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("payload"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			296,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CommunicationRequest_Payload") },
			}
		},
		{
			Str8LitComp("occurrence_type"),
			Cardinality::OneToOne,
			ClassMemberType::Enum,
			304,
			4,
			{
				{ ValueType::DateTime, Str8LitComp("") },
				{ ValueType::Class_Reference, Str8LitComp("Period") },
			}
		},
		{
			Str8LitComp("occurrence"),
			Cardinality::ZeroToOne,
			ClassMemberType::Union,
			312,
			16,
			{
				{ ValueType::DateTime, Str8LitComp("occurrenceDateTime") },
				{ ValueType::Class_Reference, Str8LitComp("occurrencePeriod") },
			}
		},
		{
			Str8LitComp("authoredOn"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			328,
			16,
			{
				{ ValueType::DateTime, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("requester"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			344,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("recipient_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			352,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("recipient"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			360,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("sender"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			368,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("reasonCode_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			376,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("reasonCode"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			384,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("reasonReference_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			392,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("reasonReference"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			400,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("note_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			408,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("note"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			416,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Annotation") },
			}
		}
	}
}
,{
	Str8Lit("CommunicationRequest_Payload"),
	80,
	8,
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("CommunicationRequest_Payload") },
			}
		},
		{
			Str8LitComp("id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			24,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("content_type"),
			Cardinality::OneToOne,
			ClassMemberType::Enum,
			56,
			4,
			{
				{ ValueType::String, Str8LitComp("") },
				{ ValueType::Class_Reference, Str8LitComp("Attachment") },
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("content"),
			Cardinality::OneToOne,
			ClassMemberType::Union,
			64,
			16,
			{
				{ ValueType::String, Str8LitComp("contentString") },
				{ ValueType::Class_Reference, Str8LitComp("contentAttachment") },
				{ ValueType::Class_Reference, Str8LitComp("contentReference") },
			}
		}
	}
}
,{
	Str8Lit("CompartmentDefinition"),
	328,
	29,
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("CompartmentDefinition") },
			}
		},
		{
			Str8LitComp("id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("meta"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			24,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Meta") },
			}
		},
		{
			Str8LitComp("implicitRules"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			32,
			16,
			{
				{ ValueType::Uri, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("language"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			48,
			16,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("text"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			64,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Narrative") },
			}
		},
		{
			Str8LitComp("contained_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			72,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("contained"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			80,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Resource") },
			}
		},
		{
			Str8LitComp("extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			88,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			96,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			104,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			112,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("url"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			120,
			16,
			{
				{ ValueType::Uri, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("version"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			136,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("name"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			152,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("status"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			168,
			16,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("experimental"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			184,
			4,
			{
				{ ValueType::Boolean, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("date"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			192,
			16,
			{
				{ ValueType::DateTime, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("publisher"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			208,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("contact_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			224,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("contact"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			232,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("ContactDetail") },
			}
		},
		{
			Str8LitComp("description"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			240,
			16,
			{
				{ ValueType::Markdown, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("useContext_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			256,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("useContext"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			264,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("UsageContext") },
			}
		},
		{
			Str8LitComp("purpose"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			272,
			16,
			{
				{ ValueType::Markdown, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("code"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			288,
			16,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("search"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			304,
			4,
			{
				{ ValueType::Boolean, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("resource_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			312,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("resource"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			320,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CompartmentDefinition_Resource") },
			}
		}
	}
}
,{
	Str8Lit("CompartmentDefinition_Resource"),
	104,
	10,
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("CompartmentDefinition_Resource") },
			}
		},
		{
			Str8LitComp("id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			24,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("code"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			56,
			16,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("param_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			72,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("param"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			80,
			8,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("documentation"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			88,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		}
	}
}
,{
	Str8Lit("Composition"),
	320,
	33,
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("Composition") },
			}
		},
		{
			Str8LitComp("id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("meta"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			24,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Meta") },
			}
		},
		{
			Str8LitComp("implicitRules"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			32,
			16,
			{
				{ ValueType::Uri, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("language"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			48,
			16,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("text"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			64,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Narrative") },
			}
		},
		{
			Str8LitComp("contained_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			72,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("contained"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			80,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Resource") },
			}
		},
		{
			Str8LitComp("extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			88,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			96,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			104,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			112,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("identifier"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			120,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Identifier") },
			}
		},
		{
			Str8LitComp("status"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			128,
			16,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("type"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			144,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("category_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			152,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("category"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			160,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("subject"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			168,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("encounter"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			176,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("date"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			184,
			16,
			{
				{ ValueType::DateTime, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("author_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			200,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("author"),
			Cardinality::OneToInf,
			ClassMemberType::Single,
			208,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("title"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			216,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("confidentiality"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			232,
			16,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("attester_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			248,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("attester"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			256,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Composition_Attester") },
			}
		},
		{
			Str8LitComp("custodian"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			264,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("relatesTo_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			272,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("relatesTo"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			280,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Composition_RelatesTo") },
			}
		},
		{
			Str8LitComp("event_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			288,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("event"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			296,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Composition_Event") },
			}
		},
		{
			Str8LitComp("section_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			304,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("section"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			312,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Composition_Section") },
			}
		}
	}
}
,{
	Str8Lit("Composition_Attester"),
	96,
	9,
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("Composition_Attester") },
			}
		},
		{
			Str8LitComp("id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			24,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("mode"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			56,
			16,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("time"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			72,
			16,
			{
				{ ValueType::DateTime, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("party"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			88,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		}
	}
}
,{
	Str8Lit("Composition_RelatesTo"),
	88,
	9,
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("Composition_RelatesTo") },
			}
		},
		{
			Str8LitComp("id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			24,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("code"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			56,
			16,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("target_type"),
			Cardinality::OneToOne,
			ClassMemberType::Enum,
			72,
			4,
			{
				{ ValueType::Class_Reference, Str8LitComp("Identifier") },
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("target"),
			Cardinality::OneToOne,
			ClassMemberType::Union,
			80,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("targetIdentifier") },
				{ ValueType::Class_Reference, Str8LitComp("targetReference") },
			}
		}
	}
}
,{
	Str8Lit("Composition_Event"),
	96,
	11,
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("Composition_Event") },
			}
		},
		{
			Str8LitComp("id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			24,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("code_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			56,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("code"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			64,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("period"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			72,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Period") },
			}
		},
		{
			Str8LitComp("detail_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			80,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("detail"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			88,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		}
	}
}
,{
	Str8Lit("Composition_Section"),
	176,
	19,
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("Composition_Section") },
			}
		},
		{
			Str8LitComp("id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			24,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("title"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			56,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("code"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			72,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("author_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			80,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("author"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			88,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("focus"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			96,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("text"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			104,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Narrative") },
			}
		},
		{
			Str8LitComp("mode"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			112,
			16,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("orderedBy"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			128,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("entry_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			136,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("entry"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			144,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("emptyReason"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			152,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("section_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			160,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("section"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			168,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Composition_Section") },
			}
		}
	}
}
,{
	Str8Lit("ConceptMap"),
	408,
	36,
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("ConceptMap") },
			}
		},
		{
			Str8LitComp("id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("meta"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			24,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Meta") },
			}
		},
		{
			Str8LitComp("implicitRules"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			32,
			16,
			{
				{ ValueType::Uri, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("language"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			48,
			16,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("text"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			64,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Narrative") },
			}
		},
		{
			Str8LitComp("contained_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			72,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("contained"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			80,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Resource") },
			}
		},
		{
			Str8LitComp("extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			88,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			96,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			104,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			112,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("url"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			120,
			16,
			{
				{ ValueType::Uri, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("identifier"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			136,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Identifier") },
			}
		},
		{
			Str8LitComp("version"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			144,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("name"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			160,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("title"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			176,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("status"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			192,
			16,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("experimental"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			208,
			4,
			{
				{ ValueType::Boolean, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("date"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			216,
			16,
			{
				{ ValueType::DateTime, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("publisher"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			232,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("contact_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			248,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("contact"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			256,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("ContactDetail") },
			}
		},
		{
			Str8LitComp("description"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			264,
			16,
			{
				{ ValueType::Markdown, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("useContext_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			280,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("useContext"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			288,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("UsageContext") },
			}
		},
		{
			Str8LitComp("jurisdiction_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			296,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("jurisdiction"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			304,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("purpose"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			312,
			16,
			{
				{ ValueType::Markdown, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("copyright"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			328,
			16,
			{
				{ ValueType::Markdown, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("source_type"),
			Cardinality::OneToOne,
			ClassMemberType::Enum,
			344,
			4,
			{
				{ ValueType::Uri, Str8LitComp("") },
				{ ValueType::Canonical, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("source"),
			Cardinality::ZeroToOne,
			ClassMemberType::Union,
			352,
			16,
			{
				{ ValueType::Uri, Str8LitComp("sourceUri") },
				{ ValueType::Canonical, Str8LitComp("sourceCanonical") },
			}
		},
		{
			Str8LitComp("target_type"),
			Cardinality::OneToOne,
			ClassMemberType::Enum,
			368,
			4,
			{
				{ ValueType::Uri, Str8LitComp("") },
				{ ValueType::Canonical, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("target"),
			Cardinality::ZeroToOne,
			ClassMemberType::Union,
			376,
			16,
			{
				{ ValueType::Uri, Str8LitComp("targetUri") },
				{ ValueType::Canonical, Str8LitComp("targetCanonical") },
			}
		},
		{
			Str8LitComp("group_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			392,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("group"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			400,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("ConceptMap_Group") },
			}
		}
	}
}
,{
	Str8Lit("ConceptMap_Group"),
	144,
	13,
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("ConceptMap_Group") },
			}
		},
		{
			Str8LitComp("id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			24,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("source"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			56,
			16,
			{
				{ ValueType::Uri, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("sourceVersion"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			72,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("target"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			88,
			16,
			{
				{ ValueType::Uri, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("targetVersion"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			104,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("element_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			120,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("element"),
			Cardinality::OneToInf,
			ClassMemberType::Single,
			128,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("ConceptMap_Group_Element") },
			}
		},
		{
			Str8LitComp("unmapped"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			136,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("ConceptMap_Group_Unmapped") },
			}
		}
	}
}
,{
	Str8Lit("ConceptMap_Group_Element"),
	104,
	10,
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("ConceptMap_Group_Element") },
			}
		},
		{
			Str8LitComp("id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			24,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("code"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			56,
			16,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("display"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			72,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("target_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			88,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("target"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			96,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("ConceptMap_Group_Element_Target") },
			}
		}
	}
}
,{
	Str8Lit("ConceptMap_Group_Element_Target"),
	152,
	14,
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("ConceptMap_Group_Element_Target") },
			}
		},
		{
			Str8LitComp("id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			24,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("code"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			56,
			16,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("display"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			72,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("equivalence"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			88,
			16,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("comment"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			104,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("dependsOn_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			120,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("dependsOn"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			128,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("ConceptMap_Group_Element_Target_DependsOn") },
			}
		},
		{
			Str8LitComp("product_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			136,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("product"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			144,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("ConceptMap_Group_Element_Target_DependsOn") },
			}
		}
	}
}
,{
	Str8Lit("ConceptMap_Group_Element_Target_DependsOn"),
	120,
	10,
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("ConceptMap_Group_Element_Target_DependsOn") },
			}
		},
		{
			Str8LitComp("id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			24,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("property"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			56,
			16,
			{
				{ ValueType::Uri, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("system"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			72,
			16,
			{
				{ ValueType::Canonical, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("value"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			88,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("display"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			104,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		}
	}
}
,{
	Str8Lit("ConceptMap_Group_Unmapped"),
	120,
	10,
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("ConceptMap_Group_Unmapped") },
			}
		},
		{
			Str8LitComp("id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			24,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("mode"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			56,
			16,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("code"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			72,
			16,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("display"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			88,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("url"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			104,
			16,
			{
				{ ValueType::Canonical, Str8LitComp("") },
			}
		}
	}
}
,{
	Str8Lit("Condition"),
	344,
	37,
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("Condition") },
			}
		},
		{
			Str8LitComp("id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("meta"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			24,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Meta") },
			}
		},
		{
			Str8LitComp("implicitRules"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			32,
			16,
			{
				{ ValueType::Uri, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("language"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			48,
			16,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("text"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			64,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Narrative") },
			}
		},
		{
			Str8LitComp("contained_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			72,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("contained"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			80,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Resource") },
			}
		},
		{
			Str8LitComp("extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			88,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			96,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			104,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			112,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("identifier_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			120,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("identifier"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			128,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Identifier") },
			}
		},
		{
			Str8LitComp("clinicalStatus"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			136,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("verificationStatus"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			144,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("category_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			152,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("category"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			160,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("severity"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			168,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("code"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			176,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("bodySite_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			184,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("bodySite"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			192,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("subject"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			200,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("encounter"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			208,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("onset_type"),
			Cardinality::OneToOne,
			ClassMemberType::Enum,
			216,
			4,
			{
				{ ValueType::DateTime, Str8LitComp("") },
				{ ValueType::Class_Reference, Str8LitComp("Age") },
				{ ValueType::Class_Reference, Str8LitComp("Period") },
				{ ValueType::Class_Reference, Str8LitComp("Range") },
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("onset"),
			Cardinality::ZeroToOne,
			ClassMemberType::Union,
			224,
			16,
			{
				{ ValueType::DateTime, Str8LitComp("onsetDateTime") },
				{ ValueType::Class_Reference, Str8LitComp("onsetAge") },
				{ ValueType::Class_Reference, Str8LitComp("onsetPeriod") },
				{ ValueType::Class_Reference, Str8LitComp("onsetRange") },
				{ ValueType::String, Str8LitComp("onsetString") },
			}
		},
		{
			Str8LitComp("abatement_type"),
			Cardinality::OneToOne,
			ClassMemberType::Enum,
			240,
			4,
			{
				{ ValueType::DateTime, Str8LitComp("") },
				{ ValueType::Class_Reference, Str8LitComp("Age") },
				{ ValueType::Class_Reference, Str8LitComp("Period") },
				{ ValueType::Class_Reference, Str8LitComp("Range") },
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("abatement"),
			Cardinality::ZeroToOne,
			ClassMemberType::Union,
			248,
			16,
			{
				{ ValueType::DateTime, Str8LitComp("abatementDateTime") },
				{ ValueType::Class_Reference, Str8LitComp("abatementAge") },
				{ ValueType::Class_Reference, Str8LitComp("abatementPeriod") },
				{ ValueType::Class_Reference, Str8LitComp("abatementRange") },
				{ ValueType::String, Str8LitComp("abatementString") },
			}
		},
		{
			Str8LitComp("recordedDate"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			264,
			16,
			{
				{ ValueType::DateTime, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("recorder"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			280,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("asserter"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			288,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("stage_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			296,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("stage"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			304,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Condition_Stage") },
			}
		},
		{
			Str8LitComp("evidence_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			312,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("evidence"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			320,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Condition_Evidence") },
			}
		},
		{
			Str8LitComp("note_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			328,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("note"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			336,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Annotation") },
			}
		}
	}
}
,{
	Str8Lit("Condition_Stage"),
	88,
	10,
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("Condition_Stage") },
			}
		},
		{
			Str8LitComp("id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			24,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("summary"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			56,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("assessment_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			64,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("assessment"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			72,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("type"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			80,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		}
	}
}
,{
	Str8Lit("Condition_Evidence"),
	88,
	10,
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("Condition_Evidence") },
			}
		},
		{
			Str8LitComp("id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			24,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("code_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			56,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("code"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			64,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("detail_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			72,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("detail"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			80,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		}
	}
}
,{
	Str8Lit("Consent"),
	296,
	32,
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("Consent") },
			}
		},
		{
			Str8LitComp("id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("meta"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			24,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Meta") },
			}
		},
		{
			Str8LitComp("implicitRules"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			32,
			16,
			{
				{ ValueType::Uri, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("language"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			48,
			16,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("text"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			64,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Narrative") },
			}
		},
		{
			Str8LitComp("contained_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			72,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("contained"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			80,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Resource") },
			}
		},
		{
			Str8LitComp("extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			88,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			96,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			104,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			112,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("identifier_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			120,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("identifier"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			128,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Identifier") },
			}
		},
		{
			Str8LitComp("status"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			136,
			16,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("scope"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			152,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("category_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			160,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("category"),
			Cardinality::OneToInf,
			ClassMemberType::Single,
			168,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("patient"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			176,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("dateTime"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			184,
			16,
			{
				{ ValueType::DateTime, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("performer_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			200,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("performer"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			208,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("organization_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			216,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("organization"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			224,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("source_type"),
			Cardinality::OneToOne,
			ClassMemberType::Enum,
			232,
			4,
			{
				{ ValueType::Class_Reference, Str8LitComp("Attachment") },
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("source"),
			Cardinality::ZeroToOne,
			ClassMemberType::Union,
			240,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("sourceAttachment") },
				{ ValueType::Class_Reference, Str8LitComp("sourceReference") },
			}
		},
		{
			Str8LitComp("policy_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			248,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("policy"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			256,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Consent_Policy") },
			}
		},
		{
			Str8LitComp("policyRule"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			264,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("verification_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			272,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("verification"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			280,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Consent_Verification") },
			}
		},
		{
			Str8LitComp("provision"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			288,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Consent_Provision") },
			}
		}
	}
}
,{
	Str8Lit("Consent_Policy"),
	88,
	8,
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("Consent_Policy") },
			}
		},
		{
			Str8LitComp("id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			24,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("authority"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			56,
			16,
			{
				{ ValueType::Uri, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("uri"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			72,
			16,
			{
				{ ValueType::Uri, Str8LitComp("") },
			}
		}
	}
}
,{
	Str8Lit("Consent_Verification"),
	88,
	9,
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("Consent_Verification") },
			}
		},
		{
			Str8LitComp("id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			24,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("verified"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			56,
			4,
			{
				{ ValueType::Boolean, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("verifiedWith"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			64,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("verificationDate"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			72,
			16,
			{
				{ ValueType::DateTime, Str8LitComp("") },
			}
		}
	}
}
,{
	Str8Lit("Consent_Provision"),
	216,
	25,
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("Consent_Provision") },
			}
		},
		{
			Str8LitComp("id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			24,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("type"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			56,
			16,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("period"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			72,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Period") },
			}
		},
		{
			Str8LitComp("actor_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			80,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("actor"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			88,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Consent_Provision_Actor") },
			}
		},
		{
			Str8LitComp("action_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			96,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("action"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			104,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("securityLabel_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			112,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("securityLabel"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			120,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Coding") },
			}
		},
		{
			Str8LitComp("purpose_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			128,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("purpose"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			136,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Coding") },
			}
		},
		{
			Str8LitComp("class__count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			144,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("class_"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			152,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Coding") },
			}
		},
		{
			Str8LitComp("code_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			160,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("code"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			168,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("dataPeriod"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			176,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Period") },
			}
		},
		{
			Str8LitComp("data_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			184,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("data"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			192,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Consent_Provision_Data") },
			}
		},
		{
			Str8LitComp("provision_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			200,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("provision"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			208,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Consent_Provision") },
			}
		}
	}
}
,{
	Str8Lit("Consent_Provision_Actor"),
	72,
	8,
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("Consent_Provision_Actor") },
			}
		},
		{
			Str8LitComp("id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			24,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("role"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			56,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("reference"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			64,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		}
	}
}
,{
	Str8Lit("Consent_Provision_Data"),
	80,
	8,
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("Consent_Provision_Data") },
			}
		},
		{
			Str8LitComp("id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			24,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("meaning"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			56,
			16,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("reference"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			72,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		}
	}
}
,{
	Str8Lit("Contract"),
	576,
	61,
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("Contract") },
			}
		},
		{
			Str8LitComp("id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("meta"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			24,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Meta") },
			}
		},
		{
			Str8LitComp("implicitRules"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			32,
			16,
			{
				{ ValueType::Uri, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("language"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			48,
			16,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("text"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			64,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Narrative") },
			}
		},
		{
			Str8LitComp("contained_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			72,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("contained"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			80,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Resource") },
			}
		},
		{
			Str8LitComp("extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			88,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			96,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			104,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			112,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("identifier_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			120,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("identifier"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			128,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Identifier") },
			}
		},
		{
			Str8LitComp("url"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			136,
			16,
			{
				{ ValueType::Uri, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("version"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			152,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("status"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			168,
			16,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("legalState"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			184,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("instantiatesCanonical"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			192,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("instantiatesUri"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			200,
			16,
			{
				{ ValueType::Uri, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("contentDerivative"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			216,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("issued"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			224,
			16,
			{
				{ ValueType::DateTime, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("applies"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			240,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Period") },
			}
		},
		{
			Str8LitComp("expirationType"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			248,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("subject_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			256,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("subject"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			264,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("authority_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			272,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("authority"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			280,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("domain_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			288,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("domain"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			296,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("site_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			304,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("site"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			312,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("name"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			320,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("title"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			336,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("subtitle"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			352,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("alias_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			368,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("alias"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			376,
			8,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("author"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			384,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("scope"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			392,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("topic_type"),
			Cardinality::OneToOne,
			ClassMemberType::Enum,
			400,
			4,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("topic"),
			Cardinality::ZeroToOne,
			ClassMemberType::Union,
			408,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("topicCodeableConcept") },
				{ ValueType::Class_Reference, Str8LitComp("topicReference") },
			}
		},
		{
			Str8LitComp("type"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			416,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("subType_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			424,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("subType"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			432,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("contentDefinition"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			440,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Contract_ContentDefinition") },
			}
		},
		{
			Str8LitComp("term_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			448,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("term"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			456,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Contract_Term") },
			}
		},
		{
			Str8LitComp("supportingInfo_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			464,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("supportingInfo"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			472,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("relevantHistory_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			480,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("relevantHistory"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			488,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("signer_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			496,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("signer"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			504,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Contract_Signer") },
			}
		},
		{
			Str8LitComp("friendly_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			512,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("friendly"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			520,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Contract_Friendly") },
			}
		},
		{
			Str8LitComp("legal_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			528,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("legal"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			536,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Contract_Legal") },
			}
		},
		{
			Str8LitComp("rule_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			544,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("rule"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			552,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Contract_Rule") },
			}
		},
		{
			Str8LitComp("legallyBinding_type"),
			Cardinality::OneToOne,
			ClassMemberType::Enum,
			560,
			4,
			{
				{ ValueType::Class_Reference, Str8LitComp("Attachment") },
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("legallyBinding"),
			Cardinality::ZeroToOne,
			ClassMemberType::Union,
			568,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("legallyBindingAttachment") },
				{ ValueType::Class_Reference, Str8LitComp("legallyBindingReference") },
			}
		}
	}
}
,{
	Str8Lit("Contract_ContentDefinition"),
	128,
	12,
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("Contract_ContentDefinition") },
			}
		},
		{
			Str8LitComp("id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			24,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("type"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			56,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("subType"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			64,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("publisher"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			72,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("publicationDate"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			80,
			16,
			{
				{ ValueType::DateTime, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("publicationStatus"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			96,
			16,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("copyright"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			112,
			16,
			{
				{ ValueType::Markdown, Str8LitComp("") },
			}
		}
	}
}
,{
	Str8Lit("Contract_Term"),
	208,
	23,
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("Contract_Term") },
			}
		},
		{
			Str8LitComp("id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			24,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("identifier"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			56,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Identifier") },
			}
		},
		{
			Str8LitComp("issued"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			64,
			16,
			{
				{ ValueType::DateTime, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("applies"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			80,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Period") },
			}
		},
		{
			Str8LitComp("topic_type"),
			Cardinality::OneToOne,
			ClassMemberType::Enum,
			88,
			4,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("topic"),
			Cardinality::ZeroToOne,
			ClassMemberType::Union,
			96,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("topicCodeableConcept") },
				{ ValueType::Class_Reference, Str8LitComp("topicReference") },
			}
		},
		{
			Str8LitComp("type"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			104,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("subType"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			112,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("text"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			120,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("securityLabel_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			136,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("securityLabel"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			144,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Contract_Term_SecurityLabel") },
			}
		},
		{
			Str8LitComp("offer"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			152,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Contract_Term_Offer") },
			}
		},
		{
			Str8LitComp("asset_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			160,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("asset"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			168,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Contract_Term_Asset") },
			}
		},
		{
			Str8LitComp("action_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			176,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("action"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			184,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Contract_Term_Action") },
			}
		},
		{
			Str8LitComp("group_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			192,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("group"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			200,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Contract_Term") },
			}
		}
	}
}
,{
	Str8Lit("Contract_Term_SecurityLabel"),
	112,
	13,
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("Contract_Term_SecurityLabel") },
			}
		},
		{
			Str8LitComp("id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			24,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("number_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			56,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("number"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			64,
			8,
			{
				{ ValueType::UnsignedInt, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("classification"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			72,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Coding") },
			}
		},
		{
			Str8LitComp("category_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			80,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("category"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			88,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Coding") },
			}
		},
		{
			Str8LitComp("control_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			96,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("control"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			104,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Coding") },
			}
		}
	}
}
,{
	Str8Lit("Contract_Term_Offer"),
	192,
	22,
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("Contract_Term_Offer") },
			}
		},
		{
			Str8LitComp("id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			24,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("identifier_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			56,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("identifier"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			64,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Identifier") },
			}
		},
		{
			Str8LitComp("party_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			72,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("party"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			80,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Contract_Term_Offer_Party") },
			}
		},
		{
			Str8LitComp("topic"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			88,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("type"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			96,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("decision"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			104,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("decisionMode_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			112,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("decisionMode"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			120,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("answer_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			128,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("answer"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			136,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Contract_Term_Offer_Answer") },
			}
		},
		{
			Str8LitComp("text"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			144,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("linkId_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			160,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("linkId"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			168,
			8,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("securityLabelNumber_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			176,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("securityLabelNumber"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			184,
			8,
			{
				{ ValueType::UnsignedInt, Str8LitComp("") },
			}
		}
	}
}
,{
	Str8Lit("Contract_Term_Offer_Party"),
	80,
	9,
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("Contract_Term_Offer_Party") },
			}
		},
		{
			Str8LitComp("id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			24,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("reference_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			56,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("reference"),
			Cardinality::OneToInf,
			ClassMemberType::Single,
			64,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("role"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			72,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		}
	}
}
,{
	Str8Lit("Contract_Term_Offer_Answer"),
	80,
	8,
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("Contract_Term_Offer_Answer") },
			}
		},
		{
			Str8LitComp("id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			24,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("value_type"),
			Cardinality::OneToOne,
			ClassMemberType::Enum,
			56,
			4,
			{
				{ ValueType::Boolean, Str8LitComp("") },
				{ ValueType::Decimal, Str8LitComp("") },
				{ ValueType::Class_Reference, Str8LitComp("Integer") },
				{ ValueType::Date, Str8LitComp("") },
				{ ValueType::DateTime, Str8LitComp("") },
				{ ValueType::Time, Str8LitComp("") },
				{ ValueType::String, Str8LitComp("") },
				{ ValueType::Uri, Str8LitComp("") },
				{ ValueType::Class_Reference, Str8LitComp("Attachment") },
				{ ValueType::Class_Reference, Str8LitComp("Coding") },
				{ ValueType::Class_Reference, Str8LitComp("Quantity") },
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("value"),
			Cardinality::OneToOne,
			ClassMemberType::Union,
			64,
			16,
			{
				{ ValueType::Boolean, Str8LitComp("valueBoolean") },
				{ ValueType::Decimal, Str8LitComp("valueDecimal") },
				{ ValueType::Class_Reference, Str8LitComp("valueInteger") },
				{ ValueType::Date, Str8LitComp("valueDate") },
				{ ValueType::DateTime, Str8LitComp("valueDateTime") },
				{ ValueType::Time, Str8LitComp("valueTime") },
				{ ValueType::String, Str8LitComp("valueString") },
				{ ValueType::Uri, Str8LitComp("valueUri") },
				{ ValueType::Class_Reference, Str8LitComp("valueAttachment") },
				{ ValueType::Class_Reference, Str8LitComp("valueCoding") },
				{ ValueType::Class_Reference, Str8LitComp("valueQuantity") },
				{ ValueType::Class_Reference, Str8LitComp("valueReference") },
			}
		}
	}
}
,{
	Str8Lit("Contract_Term_Asset"),
	280,
	32,
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("Contract_Term_Asset") },
			}
		},
		{
			Str8LitComp("id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			24,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("scope"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			56,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("type_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			64,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("type"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			72,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("typeReference_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			80,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("typeReference"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			88,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("subtype_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			96,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("subtype"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			104,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("relationship"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			112,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Coding") },
			}
		},
		{
			Str8LitComp("context_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			120,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("context"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			128,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Contract_Term_Asset_Context") },
			}
		},
		{
			Str8LitComp("condition"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			136,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("periodType_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			152,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("periodType"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			160,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("period_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			168,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("period"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			176,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Period") },
			}
		},
		{
			Str8LitComp("usePeriod_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			184,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("usePeriod"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			192,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Period") },
			}
		},
		{
			Str8LitComp("text"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			200,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("linkId_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			216,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("linkId"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			224,
			8,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("answer_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			232,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("answer"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			240,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Contract_Term_Offer_Answer") },
			}
		},
		{
			Str8LitComp("securityLabelNumber_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			248,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("securityLabelNumber"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			256,
			8,
			{
				{ ValueType::UnsignedInt, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("valuedItem_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			264,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("valuedItem"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			272,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Contract_Term_Asset_ValuedItem") },
			}
		}
	}
}
,{
	Str8Lit("Contract_Term_Asset_Context"),
	96,
	10,
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("Contract_Term_Asset_Context") },
			}
		},
		{
			Str8LitComp("id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			24,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("reference"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			56,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("code_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			64,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("code"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			72,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("text"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			80,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		}
	}
}
,{
	Str8Lit("Contract_Term_Asset_ValuedItem"),
	216,
	23,
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("Contract_Term_Asset_ValuedItem") },
			}
		},
		{
			Str8LitComp("id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			24,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("entity_type"),
			Cardinality::OneToOne,
			ClassMemberType::Enum,
			56,
			4,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("entity"),
			Cardinality::ZeroToOne,
			ClassMemberType::Union,
			64,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("entityCodeableConcept") },
				{ ValueType::Class_Reference, Str8LitComp("entityReference") },
			}
		},
		{
			Str8LitComp("identifier"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			72,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Identifier") },
			}
		},
		{
			Str8LitComp("effectiveTime"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			80,
			16,
			{
				{ ValueType::DateTime, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("quantity"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			96,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Quantity") },
			}
		},
		{
			Str8LitComp("unitPrice"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			104,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Money") },
			}
		},
		{
			Str8LitComp("factor"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			112,
			8,
			{
				{ ValueType::Decimal, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("points"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			120,
			8,
			{
				{ ValueType::Decimal, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("net"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			128,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Money") },
			}
		},
		{
			Str8LitComp("payment"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			136,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("paymentDate"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			152,
			16,
			{
				{ ValueType::DateTime, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("responsible"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			168,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("recipient"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			176,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("linkId_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			184,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("linkId"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			192,
			8,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("securityLabelNumber_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			200,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("securityLabelNumber"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			208,
			8,
			{
				{ ValueType::UnsignedInt, Str8LitComp("") },
			}
		}
	}
}
,{
	Str8Lit("Contract_Term_Action"),
	344,
	41,
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("Contract_Term_Action") },
			}
		},
		{
			Str8LitComp("id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			24,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("doNotPerform"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			56,
			4,
			{
				{ ValueType::Boolean, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("type"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			64,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("subject_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			72,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("subject"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			80,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Contract_Term_Action_Subject") },
			}
		},
		{
			Str8LitComp("intent"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			88,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("linkId_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			96,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("linkId"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			104,
			8,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("status"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			112,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("context"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			120,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("contextLinkId_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			128,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("contextLinkId"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			136,
			8,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("occurrence_type"),
			Cardinality::OneToOne,
			ClassMemberType::Enum,
			144,
			4,
			{
				{ ValueType::DateTime, Str8LitComp("") },
				{ ValueType::Class_Reference, Str8LitComp("Period") },
				{ ValueType::Class_Reference, Str8LitComp("Timing") },
			}
		},
		{
			Str8LitComp("occurrence"),
			Cardinality::ZeroToOne,
			ClassMemberType::Union,
			152,
			16,
			{
				{ ValueType::DateTime, Str8LitComp("occurrenceDateTime") },
				{ ValueType::Class_Reference, Str8LitComp("occurrencePeriod") },
				{ ValueType::Class_Reference, Str8LitComp("occurrenceTiming") },
			}
		},
		{
			Str8LitComp("requester_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			168,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("requester"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			176,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("requesterLinkId_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			184,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("requesterLinkId"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			192,
			8,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("performerType_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			200,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("performerType"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			208,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("performerRole"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			216,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("performer"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			224,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("performerLinkId_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			232,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("performerLinkId"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			240,
			8,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("reasonCode_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			248,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("reasonCode"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			256,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("reasonReference_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			264,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("reasonReference"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			272,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("reason_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			280,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("reason"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			288,
			8,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("reasonLinkId_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			296,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("reasonLinkId"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			304,
			8,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("note_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			312,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("note"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			320,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Annotation") },
			}
		},
		{
			Str8LitComp("securityLabelNumber_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			328,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("securityLabelNumber"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			336,
			8,
			{
				{ ValueType::UnsignedInt, Str8LitComp("") },
			}
		}
	}
}
,{
	Str8Lit("Contract_Term_Action_Subject"),
	80,
	9,
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("Contract_Term_Action_Subject") },
			}
		},
		{
			Str8LitComp("id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			24,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("reference_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			56,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("reference"),
			Cardinality::OneToInf,
			ClassMemberType::Single,
			64,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("role"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			72,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		}
	}
}
,{
	Str8Lit("Contract_Signer"),
	88,
	10,
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("Contract_Signer") },
			}
		},
		{
			Str8LitComp("id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			24,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("type"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			56,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Coding") },
			}
		},
		{
			Str8LitComp("party"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			64,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("signature_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			72,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("signature"),
			Cardinality::OneToInf,
			ClassMemberType::Single,
			80,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Signature") },
			}
		}
	}
}
,{
	Str8Lit("Contract_Friendly"),
	72,
	8,
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("Contract_Friendly") },
			}
		},
		{
			Str8LitComp("id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			24,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("content_type"),
			Cardinality::OneToOne,
			ClassMemberType::Enum,
			56,
			4,
			{
				{ ValueType::Class_Reference, Str8LitComp("Attachment") },
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("content"),
			Cardinality::OneToOne,
			ClassMemberType::Union,
			64,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("contentAttachment") },
				{ ValueType::Class_Reference, Str8LitComp("contentReference") },
			}
		}
	}
}
,{
	Str8Lit("Contract_Legal"),
	72,
	8,
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("Contract_Legal") },
			}
		},
		{
			Str8LitComp("id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			24,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("content_type"),
			Cardinality::OneToOne,
			ClassMemberType::Enum,
			56,
			4,
			{
				{ ValueType::Class_Reference, Str8LitComp("Attachment") },
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("content"),
			Cardinality::OneToOne,
			ClassMemberType::Union,
			64,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("contentAttachment") },
				{ ValueType::Class_Reference, Str8LitComp("contentReference") },
			}
		}
	}
}
,{
	Str8Lit("Contract_Rule"),
	72,
	8,
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("Contract_Rule") },
			}
		},
		{
			Str8LitComp("id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			24,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("content_type"),
			Cardinality::OneToOne,
			ClassMemberType::Enum,
			56,
			4,
			{
				{ ValueType::Class_Reference, Str8LitComp("Attachment") },
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("content"),
			Cardinality::OneToOne,
			ClassMemberType::Union,
			64,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("contentAttachment") },
				{ ValueType::Class_Reference, Str8LitComp("contentReference") },
			}
		}
	}
}
,{
	Str8Lit("Coverage"),
	328,
	34,
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("Coverage") },
			}
		},
		{
			Str8LitComp("id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("meta"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			24,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Meta") },
			}
		},
		{
			Str8LitComp("implicitRules"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			32,
			16,
			{
				{ ValueType::Uri, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("language"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			48,
			16,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("text"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			64,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Narrative") },
			}
		},
		{
			Str8LitComp("contained_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			72,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("contained"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			80,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Resource") },
			}
		},
		{
			Str8LitComp("extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			88,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			96,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			104,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			112,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("identifier_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			120,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("identifier"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			128,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Identifier") },
			}
		},
		{
			Str8LitComp("status"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			136,
			16,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("type"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			152,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("policyHolder"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			160,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("subscriber"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			168,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("subscriberId"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			176,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("beneficiary"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			192,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("dependent"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			200,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("relationship"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			216,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("period"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			224,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Period") },
			}
		},
		{
			Str8LitComp("payor_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			232,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("payor"),
			Cardinality::OneToInf,
			ClassMemberType::Single,
			240,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("class__count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			248,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("class_"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			256,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Coverage_Class") },
			}
		},
		{
			Str8LitComp("order"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			264,
			8,
			{
				{ ValueType::PositiveInt, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("network"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			272,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("costToBeneficiary_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			288,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("costToBeneficiary"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			296,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Coverage_CostToBeneficiary") },
			}
		},
		{
			Str8LitComp("subrogation"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			304,
			4,
			{
				{ ValueType::Boolean, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("contract_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			312,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("contract"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			320,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		}
	}
}
,{
	Str8Lit("Coverage_Class"),
	96,
	9,
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("Coverage_Class") },
			}
		},
		{
			Str8LitComp("id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			24,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("type"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			56,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("value"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			64,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("name"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			80,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		}
	}
}
,{
	Str8Lit("Coverage_CostToBeneficiary"),
	96,
	11,
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("Coverage_CostToBeneficiary") },
			}
		},
		{
			Str8LitComp("id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			24,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("type"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			56,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("value_type"),
			Cardinality::OneToOne,
			ClassMemberType::Enum,
			64,
			4,
			{
				{ ValueType::Class_Reference, Str8LitComp("Quantity") },
				{ ValueType::Class_Reference, Str8LitComp("Money") },
			}
		},
		{
			Str8LitComp("value"),
			Cardinality::OneToOne,
			ClassMemberType::Union,
			72,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("valueQuantity") },
				{ ValueType::Class_Reference, Str8LitComp("valueMoney") },
			}
		},
		{
			Str8LitComp("exception_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			80,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("exception"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			88,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Coverage_CostToBeneficiary_Exception") },
			}
		}
	}
}
,{
	Str8Lit("Coverage_CostToBeneficiary_Exception"),
	72,
	8,
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("Coverage_CostToBeneficiary_Exception") },
			}
		},
		{
			Str8LitComp("id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			24,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("type"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			56,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("period"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			64,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Period") },
			}
		}
	}
}
,{
	Str8Lit("CoverageEligibilityRequest"),
	304,
	32,
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("CoverageEligibilityRequest") },
			}
		},
		{
			Str8LitComp("id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("meta"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			24,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Meta") },
			}
		},
		{
			Str8LitComp("implicitRules"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			32,
			16,
			{
				{ ValueType::Uri, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("language"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			48,
			16,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("text"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			64,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Narrative") },
			}
		},
		{
			Str8LitComp("contained_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			72,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("contained"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			80,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Resource") },
			}
		},
		{
			Str8LitComp("extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			88,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			96,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			104,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			112,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("identifier_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			120,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("identifier"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			128,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Identifier") },
			}
		},
		{
			Str8LitComp("status"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			136,
			16,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("priority"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			152,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("purpose_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			160,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("purpose"),
			Cardinality::OneToInf,
			ClassMemberType::Single,
			168,
			8,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("patient"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			176,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("serviced_type"),
			Cardinality::OneToOne,
			ClassMemberType::Enum,
			184,
			4,
			{
				{ ValueType::Date, Str8LitComp("") },
				{ ValueType::Class_Reference, Str8LitComp("Period") },
			}
		},
		{
			Str8LitComp("serviced"),
			Cardinality::ZeroToOne,
			ClassMemberType::Union,
			192,
			16,
			{
				{ ValueType::Date, Str8LitComp("servicedDate") },
				{ ValueType::Class_Reference, Str8LitComp("servicedPeriod") },
			}
		},
		{
			Str8LitComp("created"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			208,
			16,
			{
				{ ValueType::DateTime, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("enterer"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			224,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("provider"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			232,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("insurer"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			240,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("facility"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			248,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("supportingInfo_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			256,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("supportingInfo"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			264,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CoverageEligibilityRequest_SupportingInfo") },
			}
		},
		{
			Str8LitComp("insurance_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			272,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("insurance"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			280,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CoverageEligibilityRequest_Insurance") },
			}
		},
		{
			Str8LitComp("item_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			288,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("item"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			296,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CoverageEligibilityRequest_Item") },
			}
		}
	}
}
,{
	Str8Lit("CoverageEligibilityRequest_SupportingInfo"),
	80,
	9,
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("CoverageEligibilityRequest_SupportingInfo") },
			}
		},
		{
			Str8LitComp("id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			24,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("sequence"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			56,
			8,
			{
				{ ValueType::PositiveInt, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("information"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			64,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("appliesToAll"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			72,
			4,
			{
				{ ValueType::Boolean, Str8LitComp("") },
			}
		}
	}
}
,{
	Str8Lit("CoverageEligibilityRequest_Insurance"),
	88,
	9,
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("CoverageEligibilityRequest_Insurance") },
			}
		},
		{
			Str8LitComp("id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			24,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("focal"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			56,
			4,
			{
				{ ValueType::Boolean, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("coverage"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			64,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("businessArrangement"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			72,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		}
	}
}
,{
	Str8Lit("CoverageEligibilityRequest_Item"),
	168,
	20,
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("CoverageEligibilityRequest_Item") },
			}
		},
		{
			Str8LitComp("id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			24,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("supportingInfoSequence_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			56,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("supportingInfoSequence"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			64,
			8,
			{
				{ ValueType::PositiveInt, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("category"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			72,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("productOrService"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			80,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("modifier_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			88,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("modifier"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			96,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("provider"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			104,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("quantity"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			112,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Quantity") },
			}
		},
		{
			Str8LitComp("unitPrice"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			120,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Money") },
			}
		},
		{
			Str8LitComp("facility"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			128,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("diagnosis_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			136,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("diagnosis"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			144,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CoverageEligibilityRequest_Item_Diagnosis") },
			}
		},
		{
			Str8LitComp("detail_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			152,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("detail"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			160,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		}
	}
}
,{
	Str8Lit("CoverageEligibilityRequest_Item_Diagnosis"),
	72,
	8,
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("CoverageEligibilityRequest_Item_Diagnosis") },
			}
		},
		{
			Str8LitComp("id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			24,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("diagnosis_type"),
			Cardinality::OneToOne,
			ClassMemberType::Enum,
			56,
			4,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("diagnosis"),
			Cardinality::ZeroToOne,
			ClassMemberType::Union,
			64,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("diagnosisCodeableConcept") },
				{ ValueType::Class_Reference, Str8LitComp("diagnosisReference") },
			}
		}
	}
}
,{
	Str8Lit("CoverageEligibilityResponse"),
	328,
	32,
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("CoverageEligibilityResponse") },
			}
		},
		{
			Str8LitComp("id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("meta"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			24,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Meta") },
			}
		},
		{
			Str8LitComp("implicitRules"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			32,
			16,
			{
				{ ValueType::Uri, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("language"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			48,
			16,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("text"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			64,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Narrative") },
			}
		},
		{
			Str8LitComp("contained_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			72,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("contained"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			80,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Resource") },
			}
		},
		{
			Str8LitComp("extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			88,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			96,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			104,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			112,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("identifier_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			120,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("identifier"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			128,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Identifier") },
			}
		},
		{
			Str8LitComp("status"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			136,
			16,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("purpose_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			152,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("purpose"),
			Cardinality::OneToInf,
			ClassMemberType::Single,
			160,
			8,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("patient"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			168,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("serviced_type"),
			Cardinality::OneToOne,
			ClassMemberType::Enum,
			176,
			4,
			{
				{ ValueType::Date, Str8LitComp("") },
				{ ValueType::Class_Reference, Str8LitComp("Period") },
			}
		},
		{
			Str8LitComp("serviced"),
			Cardinality::ZeroToOne,
			ClassMemberType::Union,
			184,
			16,
			{
				{ ValueType::Date, Str8LitComp("servicedDate") },
				{ ValueType::Class_Reference, Str8LitComp("servicedPeriod") },
			}
		},
		{
			Str8LitComp("created"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			200,
			16,
			{
				{ ValueType::DateTime, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("requestor"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			216,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("request"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			224,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("outcome"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			232,
			16,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("disposition"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			248,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("insurer"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			264,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("insurance_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			272,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("insurance"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			280,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CoverageEligibilityResponse_Insurance") },
			}
		},
		{
			Str8LitComp("preAuthRef"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			288,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("form"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			304,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("error_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			312,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("error"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			320,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CoverageEligibilityResponse_Error") },
			}
		}
	}
}
,{
	Str8Lit("CoverageEligibilityResponse_Insurance"),
	96,
	11,
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("CoverageEligibilityResponse_Insurance") },
			}
		},
		{
			Str8LitComp("id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			24,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("coverage"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			56,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("inforce"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			64,
			4,
			{
				{ ValueType::Boolean, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("benefitPeriod"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			72,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Period") },
			}
		},
		{
			Str8LitComp("item_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			80,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("item"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			88,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CoverageEligibilityResponse_Insurance_Item") },
			}
		}
	}
}
,{
	Str8Lit("CoverageEligibilityResponse_Insurance_Item"),
	216,
	23,
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("CoverageEligibilityResponse_Insurance_Item") },
			}
		},
		{
			Str8LitComp("id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			24,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("category"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			56,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("productOrService"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			64,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("modifier_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			72,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("modifier"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			80,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("provider"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			88,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("excluded"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			96,
			4,
			{
				{ ValueType::Boolean, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("name"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			104,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("description"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			120,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("network"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			136,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("unit"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			144,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("term"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			152,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("benefit_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			160,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("benefit"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			168,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CoverageEligibilityResponse_Insurance_Item_Benefit") },
			}
		},
		{
			Str8LitComp("authorizationRequired"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			176,
			4,
			{
				{ ValueType::Boolean, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("authorizationSupporting_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			184,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("authorizationSupporting"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			192,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("authorizationUrl"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			200,
			16,
			{
				{ ValueType::Uri, Str8LitComp("") },
			}
		}
	}
}
,{
	Str8Lit("CoverageEligibilityResponse_Insurance_Item_Benefit"),
	112,
	11,
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("CoverageEligibilityResponse_Insurance_Item_Benefit") },
			}
		},
		{
			Str8LitComp("id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			24,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("type"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			56,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("allowed_type"),
			Cardinality::OneToOne,
			ClassMemberType::Enum,
			64,
			4,
			{
				{ ValueType::UnsignedInt, Str8LitComp("") },
				{ ValueType::String, Str8LitComp("") },
				{ ValueType::Class_Reference, Str8LitComp("Money") },
			}
		},
		{
			Str8LitComp("allowed"),
			Cardinality::ZeroToOne,
			ClassMemberType::Union,
			72,
			16,
			{
				{ ValueType::UnsignedInt, Str8LitComp("allowedUnsignedInt") },
				{ ValueType::String, Str8LitComp("allowedString") },
				{ ValueType::Class_Reference, Str8LitComp("allowedMoney") },
			}
		},
		{
			Str8LitComp("used_type"),
			Cardinality::OneToOne,
			ClassMemberType::Enum,
			88,
			4,
			{
				{ ValueType::UnsignedInt, Str8LitComp("") },
				{ ValueType::String, Str8LitComp("") },
				{ ValueType::Class_Reference, Str8LitComp("Money") },
			}
		},
		{
			Str8LitComp("used"),
			Cardinality::ZeroToOne,
			ClassMemberType::Union,
			96,
			16,
			{
				{ ValueType::UnsignedInt, Str8LitComp("usedUnsignedInt") },
				{ ValueType::String, Str8LitComp("usedString") },
				{ ValueType::Class_Reference, Str8LitComp("usedMoney") },
			}
		}
	}
}
,{
	Str8Lit("CoverageEligibilityResponse_Error"),
	64,
	7,
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("CoverageEligibilityResponse_Error") },
			}
		},
		{
			Str8LitComp("id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			24,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("code"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			56,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		}
	}
}
,{
	Str8Lit("DetectedIssue"),
	296,
	29,
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("DetectedIssue") },
			}
		},
		{
			Str8LitComp("id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("meta"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			24,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Meta") },
			}
		},
		{
			Str8LitComp("implicitRules"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			32,
			16,
			{
				{ ValueType::Uri, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("language"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			48,
			16,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("text"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			64,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Narrative") },
			}
		},
		{
			Str8LitComp("contained_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			72,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("contained"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			80,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Resource") },
			}
		},
		{
			Str8LitComp("extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			88,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			96,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			104,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			112,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("identifier_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			120,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("identifier"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			128,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Identifier") },
			}
		},
		{
			Str8LitComp("status"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			136,
			16,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("code"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			152,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("severity"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			160,
			16,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("patient"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			176,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("identified_type"),
			Cardinality::OneToOne,
			ClassMemberType::Enum,
			184,
			4,
			{
				{ ValueType::DateTime, Str8LitComp("") },
				{ ValueType::Class_Reference, Str8LitComp("Period") },
			}
		},
		{
			Str8LitComp("identified"),
			Cardinality::ZeroToOne,
			ClassMemberType::Union,
			192,
			16,
			{
				{ ValueType::DateTime, Str8LitComp("identifiedDateTime") },
				{ ValueType::Class_Reference, Str8LitComp("identifiedPeriod") },
			}
		},
		{
			Str8LitComp("author"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			208,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("implicated_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			216,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("implicated"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			224,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("evidence_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			232,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("evidence"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			240,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("DetectedIssue_Evidence") },
			}
		},
		{
			Str8LitComp("detail"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			248,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("reference"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			264,
			16,
			{
				{ ValueType::Uri, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("mitigation_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			280,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("mitigation"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			288,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("DetectedIssue_Mitigation") },
			}
		}
	}
}
,{
	Str8Lit("DetectedIssue_Evidence"),
	88,
	10,
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("DetectedIssue_Evidence") },
			}
		},
		{
			Str8LitComp("id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			24,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("code_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			56,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("code"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			64,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("detail_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			72,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("detail"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			80,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		}
	}
}
,{
	Str8Lit("DetectedIssue_Mitigation"),
	88,
	9,
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("DetectedIssue_Mitigation") },
			}
		},
		{
			Str8LitComp("id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			24,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("action"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			56,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("date"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			64,
			16,
			{
				{ ValueType::DateTime, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("author"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			80,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		}
	}
}
,{
	Str8Lit("Device"),
	488,
	48,
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("Device") },
			}
		},
		{
			Str8LitComp("id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("meta"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			24,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Meta") },
			}
		},
		{
			Str8LitComp("implicitRules"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			32,
			16,
			{
				{ ValueType::Uri, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("language"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			48,
			16,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("text"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			64,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Narrative") },
			}
		},
		{
			Str8LitComp("contained_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			72,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("contained"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			80,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Resource") },
			}
		},
		{
			Str8LitComp("extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			88,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			96,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			104,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			112,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("identifier_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			120,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("identifier"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			128,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Identifier") },
			}
		},
		{
			Str8LitComp("definition"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			136,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("udiCarrier_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			144,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("udiCarrier"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			152,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Device_UdiCarrier") },
			}
		},
		{
			Str8LitComp("status"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			160,
			16,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("statusReason_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			176,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("statusReason"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			184,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("distinctIdentifier"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			192,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("manufacturer"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			208,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("manufactureDate"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			224,
			16,
			{
				{ ValueType::DateTime, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("expirationDate"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			240,
			16,
			{
				{ ValueType::DateTime, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("lotNumber"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			256,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("serialNumber"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			272,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("deviceName_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			288,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("deviceName"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			296,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Device_DeviceName") },
			}
		},
		{
			Str8LitComp("modelNumber"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			304,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("partNumber"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			320,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("type"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			336,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("specialization_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			344,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("specialization"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			352,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Device_Specialization") },
			}
		},
		{
			Str8LitComp("version_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			360,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("version"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			368,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Device_Version") },
			}
		},
		{
			Str8LitComp("property_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			376,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("property"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			384,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Device_Property") },
			}
		},
		{
			Str8LitComp("patient"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			392,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("owner"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			400,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("contact_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			408,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("contact"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			416,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("ContactPoint") },
			}
		},
		{
			Str8LitComp("location"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			424,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("url"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			432,
			16,
			{
				{ ValueType::Uri, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("note_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			448,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("note"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			456,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Annotation") },
			}
		},
		{
			Str8LitComp("safety_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			464,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("safety"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			472,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("parent"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			480,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		}
	}
}
,{
	Str8Lit("Device_UdiCarrier"),
	152,
	12,
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("Device_UdiCarrier") },
			}
		},
		{
			Str8LitComp("id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			24,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("deviceIdentifier"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			56,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("issuer"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			72,
			16,
			{
				{ ValueType::Uri, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("jurisdiction"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			88,
			16,
			{
				{ ValueType::Uri, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("carrierAIDC"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			104,
			16,
			{
				{ ValueType::Base64Binary, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("carrierHRF"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			120,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("entryType"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			136,
			16,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		}
	}
}
,{
	Str8Lit("Device_DeviceName"),
	88,
	8,
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("Device_DeviceName") },
			}
		},
		{
			Str8LitComp("id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			24,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("name"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			56,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("type"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			72,
			16,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		}
	}
}
,{
	Str8Lit("Device_Specialization"),
	80,
	8,
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("Device_Specialization") },
			}
		},
		{
			Str8LitComp("id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			24,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("systemType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			56,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("version"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			64,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		}
	}
}
,{
	Str8Lit("Device_Version"),
	88,
	9,
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("Device_Version") },
			}
		},
		{
			Str8LitComp("id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			24,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("type"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			56,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("component"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			64,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Identifier") },
			}
		},
		{
			Str8LitComp("value"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			72,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		}
	}
}
,{
	Str8Lit("Device_Property"),
	96,
	11,
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("Device_Property") },
			}
		},
		{
			Str8LitComp("id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			24,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("type"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			56,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("valueQuantity_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			64,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("valueQuantity"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			72,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Quantity") },
			}
		},
		{
			Str8LitComp("valueCode_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			80,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("valueCode"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			88,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		}
	}
}
,{
	Str8Lit("DeviceDefinition"),
	440,
	48,
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("DeviceDefinition") },
			}
		},
		{
			Str8LitComp("id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("meta"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			24,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Meta") },
			}
		},
		{
			Str8LitComp("implicitRules"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			32,
			16,
			{
				{ ValueType::Uri, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("language"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			48,
			16,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("text"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			64,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Narrative") },
			}
		},
		{
			Str8LitComp("contained_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			72,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("contained"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			80,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Resource") },
			}
		},
		{
			Str8LitComp("extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			88,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			96,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			104,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			112,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("identifier_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			120,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("identifier"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			128,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Identifier") },
			}
		},
		{
			Str8LitComp("udiDeviceIdentifier_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			136,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("udiDeviceIdentifier"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			144,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("DeviceDefinition_UdiDeviceIdentifier") },
			}
		},
		{
			Str8LitComp("manufacturer_type"),
			Cardinality::OneToOne,
			ClassMemberType::Enum,
			152,
			4,
			{
				{ ValueType::String, Str8LitComp("") },
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("manufacturer"),
			Cardinality::ZeroToOne,
			ClassMemberType::Union,
			160,
			16,
			{
				{ ValueType::String, Str8LitComp("manufacturerString") },
				{ ValueType::Class_Reference, Str8LitComp("manufacturerReference") },
			}
		},
		{
			Str8LitComp("deviceName_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			176,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("deviceName"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			184,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("DeviceDefinition_DeviceName") },
			}
		},
		{
			Str8LitComp("modelNumber"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			192,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("type"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			208,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("specialization_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			216,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("specialization"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			224,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("DeviceDefinition_Specialization") },
			}
		},
		{
			Str8LitComp("version_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			232,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("version"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			240,
			8,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("safety_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			248,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("safety"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			256,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("shelfLifeStorage_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			264,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("shelfLifeStorage"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			272,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("ProductShelfLife") },
			}
		},
		{
			Str8LitComp("physicalCharacteristics"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			280,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("ProdCharacteristic") },
			}
		},
		{
			Str8LitComp("languageCode_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			288,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("languageCode"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			296,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("capability_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			304,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("capability"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			312,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("DeviceDefinition_Capability") },
			}
		},
		{
			Str8LitComp("property_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			320,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("property"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			328,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("DeviceDefinition_Property") },
			}
		},
		{
			Str8LitComp("owner"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			336,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("contact_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			344,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("contact"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			352,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("ContactPoint") },
			}
		},
		{
			Str8LitComp("url"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			360,
			16,
			{
				{ ValueType::Uri, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("onlineInformation"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			376,
			16,
			{
				{ ValueType::Uri, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("note_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			392,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("note"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			400,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Annotation") },
			}
		},
		{
			Str8LitComp("quantity"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			408,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Quantity") },
			}
		},
		{
			Str8LitComp("parentDevice"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			416,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("material_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			424,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("material"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			432,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("DeviceDefinition_Material") },
			}
		}
	}
}
,{
	Str8Lit("DeviceDefinition_UdiDeviceIdentifier"),
	104,
	9,
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("DeviceDefinition_UdiDeviceIdentifier") },
			}
		},
		{
			Str8LitComp("id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			24,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("deviceIdentifier"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			56,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("issuer"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			72,
			16,
			{
				{ ValueType::Uri, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("jurisdiction"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			88,
			16,
			{
				{ ValueType::Uri, Str8LitComp("") },
			}
		}
	}
}
,{
	Str8Lit("DeviceDefinition_DeviceName"),
	88,
	8,
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("DeviceDefinition_DeviceName") },
			}
		},
		{
			Str8LitComp("id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			24,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("name"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			56,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("type"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			72,
			16,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		}
	}
}
,{
	Str8Lit("DeviceDefinition_Specialization"),
	88,
	8,
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("DeviceDefinition_Specialization") },
			}
		},
		{
			Str8LitComp("id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			24,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("systemType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			56,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("version"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			72,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		}
	}
}
,{
	Str8Lit("DeviceDefinition_Capability"),
	80,
	9,
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("DeviceDefinition_Capability") },
			}
		},
		{
			Str8LitComp("id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			24,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("type"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			56,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("description_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			64,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("description"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			72,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		}
	}
}
,{
	Str8Lit("DeviceDefinition_Property"),
	96,
	11,
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("DeviceDefinition_Property") },
			}
		},
		{
			Str8LitComp("id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			24,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("type"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			56,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("valueQuantity_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			64,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("valueQuantity"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			72,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Quantity") },
			}
		},
		{
			Str8LitComp("valueCode_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			80,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("valueCode"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			88,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		}
	}
}
,{
	Str8Lit("DeviceDefinition_Material"),
	72,
	9,
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("DeviceDefinition_Material") },
			}
		},
		{
			Str8LitComp("id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			24,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("substance"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			56,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("alternate"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			64,
			4,
			{
				{ ValueType::Boolean, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("allergenicIndicator"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			68,
			4,
			{
				{ ValueType::Boolean, Str8LitComp("") },
			}
		}
	}
}
,{
	Str8Lit("DeviceMetric"),
	240,
	24,
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("DeviceMetric") },
			}
		},
		{
			Str8LitComp("id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("meta"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			24,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Meta") },
			}
		},
		{
			Str8LitComp("implicitRules"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			32,
			16,
			{
				{ ValueType::Uri, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("language"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			48,
			16,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("text"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			64,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Narrative") },
			}
		},
		{
			Str8LitComp("contained_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			72,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("contained"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			80,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Resource") },
			}
		},
		{
			Str8LitComp("extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			88,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			96,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			104,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			112,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("identifier_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			120,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("identifier"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			128,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Identifier") },
			}
		},
		{
			Str8LitComp("type"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			136,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("unit"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			144,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("source"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			152,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("parent"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			160,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("operationalStatus"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			168,
			16,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("color"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			184,
			16,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("category"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			200,
			16,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("measurementPeriod"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			216,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Timing") },
			}
		},
		{
			Str8LitComp("calibration_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			224,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("calibration"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			232,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("DeviceMetric_Calibration") },
			}
		}
	}
}
,{
	Str8Lit("DeviceMetric_Calibration"),
	104,
	9,
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("DeviceMetric_Calibration") },
			}
		},
		{
			Str8LitComp("id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			24,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("type"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			56,
			16,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("state"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			72,
			16,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("time"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			88,
			16,
			{
				{ ValueType::Instant, Str8LitComp("") },
			}
		}
	}
}
,{
	Str8Lit("DeviceRequest"),
	464,
	50,
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("DeviceRequest") },
			}
		},
		{
			Str8LitComp("id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("meta"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			24,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Meta") },
			}
		},
		{
			Str8LitComp("implicitRules"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			32,
			16,
			{
				{ ValueType::Uri, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("language"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			48,
			16,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("text"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			64,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Narrative") },
			}
		},
		{
			Str8LitComp("contained_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			72,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("contained"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			80,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Resource") },
			}
		},
		{
			Str8LitComp("extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			88,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			96,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			104,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			112,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("identifier_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			120,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("identifier"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			128,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Identifier") },
			}
		},
		{
			Str8LitComp("instantiatesCanonical_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			136,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("instantiatesCanonical"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			144,
			8,
			{
				{ ValueType::Canonical, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("instantiatesUri_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			152,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("instantiatesUri"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			160,
			8,
			{
				{ ValueType::Uri, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("basedOn_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			168,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("basedOn"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			176,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("priorRequest_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			184,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("priorRequest"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			192,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("groupIdentifier"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			200,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Identifier") },
			}
		},
		{
			Str8LitComp("status"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			208,
			16,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("intent"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			224,
			16,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("priority"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			240,
			16,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("code_type"),
			Cardinality::OneToOne,
			ClassMemberType::Enum,
			256,
			4,
			{
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("code"),
			Cardinality::OneToOne,
			ClassMemberType::Union,
			264,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("codeReference") },
				{ ValueType::Class_Reference, Str8LitComp("codeCodeableConcept") },
			}
		},
		{
			Str8LitComp("parameter_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			272,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("parameter"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			280,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("DeviceRequest_Parameter") },
			}
		},
		{
			Str8LitComp("subject"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			288,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("encounter"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			296,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("occurrence_type"),
			Cardinality::OneToOne,
			ClassMemberType::Enum,
			304,
			4,
			{
				{ ValueType::DateTime, Str8LitComp("") },
				{ ValueType::Class_Reference, Str8LitComp("Period") },
				{ ValueType::Class_Reference, Str8LitComp("Timing") },
			}
		},
		{
			Str8LitComp("occurrence"),
			Cardinality::ZeroToOne,
			ClassMemberType::Union,
			312,
			16,
			{
				{ ValueType::DateTime, Str8LitComp("occurrenceDateTime") },
				{ ValueType::Class_Reference, Str8LitComp("occurrencePeriod") },
				{ ValueType::Class_Reference, Str8LitComp("occurrenceTiming") },
			}
		},
		{
			Str8LitComp("authoredOn"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			328,
			16,
			{
				{ ValueType::DateTime, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("requester"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			344,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("performerType"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			352,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("performer"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			360,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("reasonCode_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			368,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("reasonCode"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			376,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("reasonReference_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			384,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("reasonReference"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			392,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("insurance_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			400,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("insurance"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			408,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("supportingInfo_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			416,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("supportingInfo"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			424,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("note_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			432,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("note"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			440,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Annotation") },
			}
		},
		{
			Str8LitComp("relevantHistory_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			448,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("relevantHistory"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			456,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		}
	}
}
,{
	Str8Lit("DeviceRequest_Parameter"),
	80,
	9,
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("DeviceRequest_Parameter") },
			}
		},
		{
			Str8LitComp("id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			24,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("code"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			56,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("value_type"),
			Cardinality::OneToOne,
			ClassMemberType::Enum,
			64,
			4,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
				{ ValueType::Class_Reference, Str8LitComp("Quantity") },
				{ ValueType::Class_Reference, Str8LitComp("Range") },
				{ ValueType::Boolean, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("value"),
			Cardinality::ZeroToOne,
			ClassMemberType::Union,
			72,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("valueCodeableConcept") },
				{ ValueType::Class_Reference, Str8LitComp("valueQuantity") },
				{ ValueType::Class_Reference, Str8LitComp("valueRange") },
				{ ValueType::Boolean, Str8LitComp("valueBoolean") },
			}
		}
	}
}
,{
	Str8Lit("DeviceUseStatement"),
	304,
	32,
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("DeviceUseStatement") },
			}
		},
		{
			Str8LitComp("id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("meta"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			24,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Meta") },
			}
		},
		{
			Str8LitComp("implicitRules"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			32,
			16,
			{
				{ ValueType::Uri, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("language"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			48,
			16,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("text"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			64,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Narrative") },
			}
		},
		{
			Str8LitComp("contained_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			72,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("contained"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			80,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Resource") },
			}
		},
		{
			Str8LitComp("extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			88,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			96,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			104,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			112,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("identifier_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			120,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("identifier"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			128,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Identifier") },
			}
		},
		{
			Str8LitComp("basedOn_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			136,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("basedOn"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			144,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("status"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			152,
			16,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("subject"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			168,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("derivedFrom_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			176,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("derivedFrom"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			184,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("timing_type"),
			Cardinality::OneToOne,
			ClassMemberType::Enum,
			192,
			4,
			{
				{ ValueType::Class_Reference, Str8LitComp("Timing") },
				{ ValueType::Class_Reference, Str8LitComp("Period") },
				{ ValueType::DateTime, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("timing"),
			Cardinality::ZeroToOne,
			ClassMemberType::Union,
			200,
			16,
			{
				{ ValueType::Class_Reference, Str8LitComp("timingTiming") },
				{ ValueType::Class_Reference, Str8LitComp("timingPeriod") },
				{ ValueType::DateTime, Str8LitComp("timingDateTime") },
			}
		},
		{
			Str8LitComp("recordedOn"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			216,
			16,
			{
				{ ValueType::DateTime, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("source"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			232,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("device"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			240,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("reasonCode_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			248,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("reasonCode"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			256,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("reasonReference_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			264,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("reasonReference"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			272,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("bodySite"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			280,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("note_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			288,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("note"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			296,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Annotation") },
			}
		}
	}
}
,{
	Str8Lit("DiagnosticReport"),
	392,
	42,
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("DiagnosticReport") },
			}
		},
		{
			Str8LitComp("id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("meta"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			24,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Meta") },
			}
		},
		{
			Str8LitComp("implicitRules"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			32,
			16,
			{
				{ ValueType::Uri, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("language"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			48,
			16,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("text"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			64,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Narrative") },
			}
		},
		{
			Str8LitComp("contained_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			72,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("contained"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			80,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Resource") },
			}
		},
		{
			Str8LitComp("extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			88,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			96,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			104,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			112,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("identifier_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			120,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("identifier"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			128,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Identifier") },
			}
		},
		{
			Str8LitComp("basedOn_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			136,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("basedOn"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			144,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("status"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			152,
			16,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("category_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			168,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("category"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			176,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("code"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			184,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("subject"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			192,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("encounter"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			200,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("effective_type"),
			Cardinality::OneToOne,
			ClassMemberType::Enum,
			208,
			4,
			{
				{ ValueType::DateTime, Str8LitComp("") },
				{ ValueType::Class_Reference, Str8LitComp("Period") },
			}
		},
		{
			Str8LitComp("effective"),
			Cardinality::ZeroToOne,
			ClassMemberType::Union,
			216,
			16,
			{
				{ ValueType::DateTime, Str8LitComp("effectiveDateTime") },
				{ ValueType::Class_Reference, Str8LitComp("effectivePeriod") },
			}
		},
		{
			Str8LitComp("issued"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			232,
			16,
			{
				{ ValueType::Instant, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("performer_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			248,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("performer"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			256,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("resultsInterpreter_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			264,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("resultsInterpreter"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			272,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("specimen_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			280,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("specimen"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			288,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("result_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			296,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("result"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			304,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("imagingStudy_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			312,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("imagingStudy"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			320,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("media_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			328,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("media"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			336,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("DiagnosticReport_Media") },
			}
		},
		{
			Str8LitComp("conclusion"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			344,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("conclusionCode_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			360,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("conclusionCode"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			368,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("presentedForm_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			376,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("presentedForm"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			384,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Attachment") },
			}
		}
	}
}
,{
	Str8Lit("DiagnosticReport_Media"),
	80,
	8,
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("DiagnosticReport_Media") },
			}
		},
		{
			Str8LitComp("id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			24,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("comment"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			56,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("link"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			72,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		}
	}
}
,{
	Str8Lit("DocumentManifest"),
	288,
	29,
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("DocumentManifest") },
			}
		},
		{
			Str8LitComp("id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("meta"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			24,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Meta") },
			}
		},
		{
			Str8LitComp("implicitRules"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			32,
			16,
			{
				{ ValueType::Uri, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("language"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			48,
			16,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("text"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			64,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Narrative") },
			}
		},
		{
			Str8LitComp("contained_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			72,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("contained"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			80,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Resource") },
			}
		},
		{
			Str8LitComp("extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			88,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			96,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			104,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			112,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("masterIdentifier"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			120,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Identifier") },
			}
		},
		{
			Str8LitComp("identifier_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			128,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("identifier"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			136,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Identifier") },
			}
		},
		{
			Str8LitComp("status"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			144,
			16,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("type"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			160,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("subject"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			168,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("created"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			176,
			16,
			{
				{ ValueType::DateTime, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("author_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			192,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("author"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			200,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("recipient_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			208,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("recipient"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			216,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("source"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			224,
			16,
			{
				{ ValueType::Uri, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("description"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			240,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("content_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			256,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("content"),
			Cardinality::OneToInf,
			ClassMemberType::Single,
			264,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("related_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			272,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("related"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			280,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("DocumentManifest_Related") },
			}
		}
	}
}
,{
	Str8Lit("DocumentManifest_Related"),
	72,
	8,
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("DocumentManifest_Related") },
			}
		},
		{
			Str8LitComp("id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			24,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("identifier"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			56,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Identifier") },
			}
		},
		{
			Str8LitComp("ref"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			64,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		}
	}
}
,{
	Str8Lit("DocumentReference"),
	328,
	34,
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("DocumentReference") },
			}
		},
		{
			Str8LitComp("id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("meta"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			24,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Meta") },
			}
		},
		{
			Str8LitComp("implicitRules"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			32,
			16,
			{
				{ ValueType::Uri, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("language"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			48,
			16,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("text"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			64,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Narrative") },
			}
		},
		{
			Str8LitComp("contained_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			72,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("contained"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			80,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Resource") },
			}
		},
		{
			Str8LitComp("extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			88,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			96,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			104,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			112,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("masterIdentifier"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			120,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Identifier") },
			}
		},
		{
			Str8LitComp("identifier_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			128,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("identifier"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			136,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Identifier") },
			}
		},
		{
			Str8LitComp("status"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			144,
			16,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("docStatus"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			160,
			16,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("type"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			176,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("category_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			184,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("category"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			192,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("subject"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			200,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("date"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			208,
			16,
			{
				{ ValueType::Instant, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("author_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			224,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("author"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			232,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("authenticator"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			240,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("custodian"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			248,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("relatesTo_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			256,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("relatesTo"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			264,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("DocumentReference_RelatesTo") },
			}
		},
		{
			Str8LitComp("description"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			272,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("securityLabel_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			288,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("securityLabel"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			296,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("content_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			304,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("content"),
			Cardinality::OneToInf,
			ClassMemberType::Single,
			312,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("DocumentReference_Content") },
			}
		},
		{
			Str8LitComp("context"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			320,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("DocumentReference_Context") },
			}
		}
	}
}
,{
	Str8Lit("DocumentReference_RelatesTo"),
	80,
	8,
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("DocumentReference_RelatesTo") },
			}
		},
		{
			Str8LitComp("id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			24,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("code"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			56,
			16,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("target"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			72,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		}
	}
}
,{
	Str8Lit("DocumentReference_Content"),
	72,
	8,
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("DocumentReference_Content") },
			}
		},
		{
			Str8LitComp("id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			24,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("attachment"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			56,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Attachment") },
			}
		},
		{
			Str8LitComp("format"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			64,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Coding") },
			}
		}
	}
}
,{
	Str8Lit("DocumentReference_Context"),
	136,
	16,
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("DocumentReference_Context") },
			}
		},
		{
			Str8LitComp("id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			24,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("encounter_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			56,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("encounter"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			64,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("event_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			72,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("event"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			80,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("period"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			88,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Period") },
			}
		},
		{
			Str8LitComp("facilityType"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			96,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("practiceSetting"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			104,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("sourcePatientInfo"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			112,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("related_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			120,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("related"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			128,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		}
	}
}
,{
	Str8Lit("DomainResource"),
	120,
	12,
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("DomainResource") },
			}
		},
		{
			Str8LitComp("id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("meta"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			24,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Meta") },
			}
		},
		{
			Str8LitComp("implicitRules"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			32,
			16,
			{
				{ ValueType::Uri, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("language"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			48,
			16,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("text"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			64,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Narrative") },
			}
		},
		{
			Str8LitComp("contained_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			72,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("contained"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			80,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Resource") },
			}
		},
		{
			Str8LitComp("extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			88,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			96,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			104,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			112,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		}
	}
}
,{
	Str8Lit("EffectEvidenceSynthesis"),
	584,
	59,
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("EffectEvidenceSynthesis") },
			}
		},
		{
			Str8LitComp("id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("meta"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			24,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Meta") },
			}
		},
		{
			Str8LitComp("implicitRules"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			32,
			16,
			{
				{ ValueType::Uri, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("language"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			48,
			16,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("text"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			64,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Narrative") },
			}
		},
		{
			Str8LitComp("contained_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			72,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("contained"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			80,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Resource") },
			}
		},
		{
			Str8LitComp("extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			88,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			96,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			104,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			112,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("url"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			120,
			16,
			{
				{ ValueType::Uri, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("identifier_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			136,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("identifier"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			144,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Identifier") },
			}
		},
		{
			Str8LitComp("version"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			152,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("name"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			168,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("title"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			184,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("status"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			200,
			16,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("date"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			216,
			16,
			{
				{ ValueType::DateTime, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("publisher"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			232,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("contact_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			248,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("contact"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			256,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("ContactDetail") },
			}
		},
		{
			Str8LitComp("description"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			264,
			16,
			{
				{ ValueType::Markdown, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("note_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			280,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("note"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			288,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Annotation") },
			}
		},
		{
			Str8LitComp("useContext_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			296,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("useContext"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			304,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("UsageContext") },
			}
		},
		{
			Str8LitComp("jurisdiction_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			312,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("jurisdiction"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			320,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("copyright"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			328,
			16,
			{
				{ ValueType::Markdown, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("approvalDate"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			344,
			16,
			{
				{ ValueType::Date, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("lastReviewDate"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			360,
			16,
			{
				{ ValueType::Date, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("effectivePeriod"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			376,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Period") },
			}
		},
		{
			Str8LitComp("topic_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			384,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("topic"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			392,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("author_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			400,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("author"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			408,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("ContactDetail") },
			}
		},
		{
			Str8LitComp("editor_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			416,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("editor"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			424,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("ContactDetail") },
			}
		},
		{
			Str8LitComp("reviewer_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			432,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("reviewer"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			440,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("ContactDetail") },
			}
		},
		{
			Str8LitComp("endorser_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			448,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("endorser"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			456,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("ContactDetail") },
			}
		},
		{
			Str8LitComp("relatedArtifact_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			464,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("relatedArtifact"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			472,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("RelatedArtifact") },
			}
		},
		{
			Str8LitComp("synthesisType"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			480,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("studyType"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			488,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("population"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			496,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("exposure"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			504,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("exposureAlternative"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			512,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("outcome"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			520,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("sampleSize"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			528,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("EffectEvidenceSynthesis_SampleSize") },
			}
		},
		{
			Str8LitComp("resultsByExposure_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			536,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("resultsByExposure"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			544,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("EffectEvidenceSynthesis_ResultsByExposure") },
			}
		},
		{
			Str8LitComp("effectEstimate_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			552,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("effectEstimate"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			560,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("EffectEvidenceSynthesis_EffectEstimate") },
			}
		},
		{
			Str8LitComp("certainty_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			568,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("certainty"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			576,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("EffectEvidenceSynthesis_Certainty") },
			}
		}
	}
}
,{
	Str8Lit("EffectEvidenceSynthesis_SampleSize"),
	88,
	9,
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("EffectEvidenceSynthesis_SampleSize") },
			}
		},
		{
			Str8LitComp("id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			24,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("description"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			56,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("numberOfStudies"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			72,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Integer") },
			}
		},
		{
			Str8LitComp("numberOfParticipants"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			80,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Integer") },
			}
		}
	}
}
,{
	Str8Lit("EffectEvidenceSynthesis_ResultsByExposure"),
	104,
	10,
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("EffectEvidenceSynthesis_ResultsByExposure") },
			}
		},
		{
			Str8LitComp("id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			24,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("description"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			56,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("exposureState"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			72,
			16,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("variantState"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			88,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("riskEvidenceSynthesis"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			96,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		}
	}
}
,{
	Str8Lit("EffectEvidenceSynthesis_EffectEstimate"),
	120,
	13,
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("EffectEvidenceSynthesis_EffectEstimate") },
			}
		},
		{
			Str8LitComp("id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			24,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("description"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			56,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("type"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			72,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("variantState"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			80,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("value"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			88,
			8,
			{
				{ ValueType::Decimal, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("unitOfMeasure"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			96,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("precisionEstimate_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			104,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("precisionEstimate"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			112,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("EffectEvidenceSynthesis_EffectEstimate_PrecisionEstimate") },
			}
		}
	}
}
,{
	Str8Lit("EffectEvidenceSynthesis_EffectEstimate_PrecisionEstimate"),
	88,
	10,
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("EffectEvidenceSynthesis_EffectEstimate_PrecisionEstimate") },
			}
		},
		{
			Str8LitComp("id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			24,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("type"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			56,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("level"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			64,
			8,
			{
				{ ValueType::Decimal, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("from"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			72,
			8,
			{
				{ ValueType::Decimal, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("to"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			80,
			8,
			{
				{ ValueType::Decimal, Str8LitComp("") },
			}
		}
	}
}
,{
	Str8Lit("EffectEvidenceSynthesis_Certainty"),
	104,
	12,
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("EffectEvidenceSynthesis_Certainty") },
			}
		},
		{
			Str8LitComp("id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			24,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("rating_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			56,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("rating"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			64,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("note_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			72,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("note"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			80,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Annotation") },
			}
		},
		{
			Str8LitComp("certaintySubcomponent_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			88,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("certaintySubcomponent"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			96,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("EffectEvidenceSynthesis_Certainty_CertaintySubcomponent") },
			}
		}
	}
}
,{
	Str8Lit("EffectEvidenceSynthesis_Certainty_CertaintySubcomponent"),
	96,
	11,
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("EffectEvidenceSynthesis_Certainty_CertaintySubcomponent") },
			}
		},
		{
			Str8LitComp("id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			24,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("type"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			56,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("rating_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			64,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("rating"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			72,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("note_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			80,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("note"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			88,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Annotation") },
			}
		}
	}
}
,{
	Str8Lit("Encounter"),
	416,
	48,
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("Encounter") },
			}
		},
		{
			Str8LitComp("id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("meta"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			24,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Meta") },
			}
		},
		{
			Str8LitComp("implicitRules"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			32,
			16,
			{
				{ ValueType::Uri, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("language"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			48,
			16,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("text"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			64,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Narrative") },
			}
		},
		{
			Str8LitComp("contained_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			72,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("contained"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			80,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Resource") },
			}
		},
		{
			Str8LitComp("extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			88,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			96,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			104,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			112,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("identifier_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			120,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("identifier"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			128,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Identifier") },
			}
		},
		{
			Str8LitComp("status"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			136,
			16,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("statusHistory_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			152,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("statusHistory"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			160,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Encounter_StatusHistory") },
			}
		},
		{
			Str8LitComp("class_"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			168,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Coding") },
			}
		},
		{
			Str8LitComp("classHistory_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			176,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("classHistory"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			184,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Encounter_ClassHistory") },
			}
		},
		{
			Str8LitComp("type_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			192,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("type"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			200,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("serviceType"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			208,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("priority"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			216,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("subject"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			224,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("episodeOfCare_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			232,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("episodeOfCare"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			240,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("basedOn_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			248,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("basedOn"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			256,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("participant_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			264,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("participant"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			272,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Encounter_Participant") },
			}
		},
		{
			Str8LitComp("appointment_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			280,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("appointment"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			288,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("period"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			296,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Period") },
			}
		},
		{
			Str8LitComp("length"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			304,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Duration") },
			}
		},
		{
			Str8LitComp("reasonCode_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			312,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("reasonCode"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			320,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("reasonReference_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			328,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("reasonReference"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			336,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("diagnosis_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			344,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("diagnosis"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			352,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Encounter_Diagnosis") },
			}
		},
		{
			Str8LitComp("account_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			360,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("account"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			368,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("hospitalization"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			376,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Encounter_Hospitalization") },
			}
		},
		{
			Str8LitComp("location_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			384,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("location"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			392,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Encounter_Location") },
			}
		},
		{
			Str8LitComp("serviceProvider"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			400,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("partOf"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			408,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		}
	}
}
,{
	Str8Lit("Encounter_StatusHistory"),
	80,
	8,
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("Encounter_StatusHistory") },
			}
		},
		{
			Str8LitComp("id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			24,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("status"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			56,
			16,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("period"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			72,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Period") },
			}
		}
	}
}
,{
	Str8Lit("Encounter_ClassHistory"),
	72,
	8,
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("Encounter_ClassHistory") },
			}
		},
		{
			Str8LitComp("id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			24,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("class_"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			56,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Coding") },
			}
		},
		{
			Str8LitComp("period"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			64,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Period") },
			}
		}
	}
}
,{
	Str8Lit("Encounter_Participant"),
	88,
	10,
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("Encounter_Participant") },
			}
		},
		{
			Str8LitComp("id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			24,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("type_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			56,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("type"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			64,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("period"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			72,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Period") },
			}
		},
		{
			Str8LitComp("individual"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			80,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		}
	}
}
,{
	Str8Lit("Encounter_Diagnosis"),
	80,
	9,
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("Encounter_Diagnosis") },
			}
		},
		{
			Str8LitComp("id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			24,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("condition"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			56,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("use"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			64,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("rank"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			72,
			8,
			{
				{ ValueType::PositiveInt, Str8LitComp("") },
			}
		}
	}
}
,{
	Str8Lit("Encounter_Hospitalization"),
	152,
	18,
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("Encounter_Hospitalization") },
			}
		},
		{
			Str8LitComp("id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			24,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("preAdmissionIdentifier"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			56,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Identifier") },
			}
		},
		{
			Str8LitComp("origin"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			64,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("admitSource"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			72,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("reAdmission"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			80,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("dietPreference_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			88,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("dietPreference"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			96,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("specialCourtesy_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			104,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("specialCourtesy"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			112,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("specialArrangement_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			120,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("specialArrangement"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			128,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("destination"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			136,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("dischargeDisposition"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			144,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		}
	}
}
,{
	Str8Lit("Encounter_Location"),
	96,
	10,
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("Encounter_Location") },
			}
		},
		{
			Str8LitComp("id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			24,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("location"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			56,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("status"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			64,
			16,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("physicalType"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			80,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("period"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			88,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Period") },
			}
		}
	}
}
,{
	Str8Lit("Endpoint"),
	272,
	28,
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("Endpoint") },
			}
		},
		{
			Str8LitComp("id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("meta"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			24,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Meta") },
			}
		},
		{
			Str8LitComp("implicitRules"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			32,
			16,
			{
				{ ValueType::Uri, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("language"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			48,
			16,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("text"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			64,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Narrative") },
			}
		},
		{
			Str8LitComp("contained_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			72,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("contained"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			80,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Resource") },
			}
		},
		{
			Str8LitComp("extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			88,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			96,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			104,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			112,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("identifier_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			120,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("identifier"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			128,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Identifier") },
			}
		},
		{
			Str8LitComp("status"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			136,
			16,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("connectionType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			152,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Coding") },
			}
		},
		{
			Str8LitComp("name"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			160,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("managingOrganization"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			176,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("contact_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			184,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("contact"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			192,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("ContactPoint") },
			}
		},
		{
			Str8LitComp("period"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			200,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Period") },
			}
		},
		{
			Str8LitComp("payloadType_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			208,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("payloadType"),
			Cardinality::OneToInf,
			ClassMemberType::Single,
			216,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("payloadMimeType_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			224,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("payloadMimeType"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			232,
			8,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("address"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			240,
			16,
			{
				{ ValueType::Url, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("header_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			256,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("header"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			264,
			8,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		}
	}
}
,{
	Str8Lit("EnrollmentRequest"),
	200,
	20,
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("EnrollmentRequest") },
			}
		},
		{
			Str8LitComp("id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("meta"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			24,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Meta") },
			}
		},
		{
			Str8LitComp("implicitRules"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			32,
			16,
			{
				{ ValueType::Uri, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("language"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			48,
			16,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("text"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			64,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Narrative") },
			}
		},
		{
			Str8LitComp("contained_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			72,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("contained"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			80,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Resource") },
			}
		},
		{
			Str8LitComp("extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			88,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			96,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			104,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			112,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("identifier_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			120,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("identifier"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			128,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Identifier") },
			}
		},
		{
			Str8LitComp("status"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			136,
			16,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("created"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			152,
			16,
			{
				{ ValueType::DateTime, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("insurer"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			168,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("provider"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			176,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("candidate"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			184,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("coverage"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			192,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		}
	}
}
,{
	Str8Lit("EnrollmentResponse"),
	224,
	21,
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("EnrollmentResponse") },
			}
		},
		{
			Str8LitComp("id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("meta"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			24,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Meta") },
			}
		},
		{
			Str8LitComp("implicitRules"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			32,
			16,
			{
				{ ValueType::Uri, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("language"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			48,
			16,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("text"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			64,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Narrative") },
			}
		},
		{
			Str8LitComp("contained_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			72,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("contained"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			80,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Resource") },
			}
		},
		{
			Str8LitComp("extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			88,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			96,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			104,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			112,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("identifier_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			120,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("identifier"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			128,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Identifier") },
			}
		},
		{
			Str8LitComp("status"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			136,
			16,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("request"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			152,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("outcome"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			160,
			16,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("disposition"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			176,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("created"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			192,
			16,
			{
				{ ValueType::DateTime, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("organization"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			208,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("requestProvider"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			216,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		}
	}
}
,{
	Str8Lit("EpisodeOfCare"),
	280,
	31,
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("EpisodeOfCare") },
			}
		},
		{
			Str8LitComp("id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("meta"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			24,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Meta") },
			}
		},
		{
			Str8LitComp("implicitRules"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			32,
			16,
			{
				{ ValueType::Uri, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("language"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			48,
			16,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("text"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			64,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Narrative") },
			}
		},
		{
			Str8LitComp("contained_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			72,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("contained"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			80,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Resource") },
			}
		},
		{
			Str8LitComp("extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			88,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			96,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			104,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			112,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("identifier_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			120,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("identifier"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			128,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Identifier") },
			}
		},
		{
			Str8LitComp("status"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			136,
			16,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("statusHistory_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			152,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("statusHistory"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			160,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("EpisodeOfCare_StatusHistory") },
			}
		},
		{
			Str8LitComp("type_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			168,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("type"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			176,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("diagnosis_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			184,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("diagnosis"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			192,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("EpisodeOfCare_Diagnosis") },
			}
		},
		{
			Str8LitComp("patient"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			200,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("managingOrganization"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			208,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("period"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			216,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Period") },
			}
		},
		{
			Str8LitComp("referralRequest_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			224,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("referralRequest"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			232,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("careManager"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			240,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("team_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			248,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("team"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			256,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("account_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			264,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("account"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			272,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		}
	}
}
,{
	Str8Lit("EpisodeOfCare_StatusHistory"),
	80,
	8,
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("EpisodeOfCare_StatusHistory") },
			}
		},
		{
			Str8LitComp("id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			24,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("status"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			56,
			16,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("period"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			72,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Period") },
			}
		}
	}
}
,{
	Str8Lit("EpisodeOfCare_Diagnosis"),
	80,
	9,
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("EpisodeOfCare_Diagnosis") },
			}
		},
		{
			Str8LitComp("id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			24,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("condition"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			56,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("role"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			64,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("rank"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			72,
			8,
			{
				{ ValueType::PositiveInt, Str8LitComp("") },
			}
		}
	}
}
,{
	Str8Lit("EventDefinition"),
	544,
	52,
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("EventDefinition") },
			}
		},
		{
			Str8LitComp("id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("meta"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			24,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Meta") },
			}
		},
		{
			Str8LitComp("implicitRules"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			32,
			16,
			{
				{ ValueType::Uri, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("language"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			48,
			16,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("text"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			64,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Narrative") },
			}
		},
		{
			Str8LitComp("contained_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			72,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("contained"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			80,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Resource") },
			}
		},
		{
			Str8LitComp("extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			88,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			96,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			104,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			112,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("url"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			120,
			16,
			{
				{ ValueType::Uri, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("identifier_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			136,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("identifier"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			144,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Identifier") },
			}
		},
		{
			Str8LitComp("version"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			152,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("name"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			168,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("title"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			184,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("subtitle"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			200,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("status"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			216,
			16,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("experimental"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			232,
			4,
			{
				{ ValueType::Boolean, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("subject_type"),
			Cardinality::OneToOne,
			ClassMemberType::Enum,
			236,
			4,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("subject"),
			Cardinality::ZeroToOne,
			ClassMemberType::Union,
			240,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("subjectCodeableConcept") },
				{ ValueType::Class_Reference, Str8LitComp("subjectReference") },
			}
		},
		{
			Str8LitComp("date"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			248,
			16,
			{
				{ ValueType::DateTime, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("publisher"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			264,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("contact_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			280,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("contact"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			288,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("ContactDetail") },
			}
		},
		{
			Str8LitComp("description"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			296,
			16,
			{
				{ ValueType::Markdown, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("useContext_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			312,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("useContext"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			320,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("UsageContext") },
			}
		},
		{
			Str8LitComp("jurisdiction_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			328,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("jurisdiction"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			336,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("purpose"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			344,
			16,
			{
				{ ValueType::Markdown, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("usage"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			360,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("copyright"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			376,
			16,
			{
				{ ValueType::Markdown, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("approvalDate"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			392,
			16,
			{
				{ ValueType::Date, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("lastReviewDate"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			408,
			16,
			{
				{ ValueType::Date, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("effectivePeriod"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			424,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Period") },
			}
		},
		{
			Str8LitComp("topic_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			432,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("topic"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			440,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("author_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			448,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("author"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			456,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("ContactDetail") },
			}
		},
		{
			Str8LitComp("editor_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			464,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("editor"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			472,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("ContactDetail") },
			}
		},
		{
			Str8LitComp("reviewer_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			480,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("reviewer"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			488,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("ContactDetail") },
			}
		},
		{
			Str8LitComp("endorser_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			496,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("endorser"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			504,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("ContactDetail") },
			}
		},
		{
			Str8LitComp("relatedArtifact_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			512,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("relatedArtifact"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			520,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("RelatedArtifact") },
			}
		},
		{
			Str8LitComp("trigger_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			528,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("trigger"),
			Cardinality::OneToInf,
			ClassMemberType::Single,
			536,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("TriggerDefinition") },
			}
		}
	}
}
,{
	Str8Lit("Evidence"),
	552,
	53,
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("Evidence") },
			}
		},
		{
			Str8LitComp("id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("meta"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			24,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Meta") },
			}
		},
		{
			Str8LitComp("implicitRules"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			32,
			16,
			{
				{ ValueType::Uri, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("language"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			48,
			16,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("text"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			64,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Narrative") },
			}
		},
		{
			Str8LitComp("contained_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			72,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("contained"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			80,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Resource") },
			}
		},
		{
			Str8LitComp("extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			88,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			96,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			104,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			112,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("url"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			120,
			16,
			{
				{ ValueType::Uri, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("identifier_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			136,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("identifier"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			144,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Identifier") },
			}
		},
		{
			Str8LitComp("version"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			152,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("name"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			168,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("title"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			184,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("shortTitle"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			200,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("subtitle"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			216,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("status"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			232,
			16,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("date"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			248,
			16,
			{
				{ ValueType::DateTime, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("publisher"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			264,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("contact_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			280,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("contact"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			288,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("ContactDetail") },
			}
		},
		{
			Str8LitComp("description"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			296,
			16,
			{
				{ ValueType::Markdown, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("note_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			312,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("note"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			320,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Annotation") },
			}
		},
		{
			Str8LitComp("useContext_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			328,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("useContext"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			336,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("UsageContext") },
			}
		},
		{
			Str8LitComp("jurisdiction_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			344,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("jurisdiction"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			352,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("copyright"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			360,
			16,
			{
				{ ValueType::Markdown, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("approvalDate"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			376,
			16,
			{
				{ ValueType::Date, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("lastReviewDate"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			392,
			16,
			{
				{ ValueType::Date, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("effectivePeriod"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			408,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Period") },
			}
		},
		{
			Str8LitComp("topic_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			416,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("topic"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			424,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("author_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			432,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("author"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			440,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("ContactDetail") },
			}
		},
		{
			Str8LitComp("editor_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			448,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("editor"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			456,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("ContactDetail") },
			}
		},
		{
			Str8LitComp("reviewer_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			464,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("reviewer"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			472,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("ContactDetail") },
			}
		},
		{
			Str8LitComp("endorser_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			480,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("endorser"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			488,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("ContactDetail") },
			}
		},
		{
			Str8LitComp("relatedArtifact_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			496,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("relatedArtifact"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			504,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("RelatedArtifact") },
			}
		},
		{
			Str8LitComp("exposureBackground"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			512,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("exposureVariant_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			520,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("exposureVariant"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			528,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("outcome_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			536,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("outcome"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			544,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		}
	}
}
,{
	Str8Lit("EvidenceVariable"),
	544,
	51,
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("EvidenceVariable") },
			}
		},
		{
			Str8LitComp("id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("meta"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			24,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Meta") },
			}
		},
		{
			Str8LitComp("implicitRules"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			32,
			16,
			{
				{ ValueType::Uri, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("language"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			48,
			16,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("text"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			64,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Narrative") },
			}
		},
		{
			Str8LitComp("contained_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			72,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("contained"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			80,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Resource") },
			}
		},
		{
			Str8LitComp("extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			88,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			96,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			104,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			112,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("url"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			120,
			16,
			{
				{ ValueType::Uri, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("identifier_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			136,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("identifier"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			144,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Identifier") },
			}
		},
		{
			Str8LitComp("version"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			152,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("name"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			168,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("title"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			184,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("shortTitle"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			200,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("subtitle"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			216,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("status"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			232,
			16,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("date"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			248,
			16,
			{
				{ ValueType::DateTime, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("publisher"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			264,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("contact_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			280,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("contact"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			288,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("ContactDetail") },
			}
		},
		{
			Str8LitComp("description"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			296,
			16,
			{
				{ ValueType::Markdown, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("note_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			312,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("note"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			320,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Annotation") },
			}
		},
		{
			Str8LitComp("useContext_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			328,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("useContext"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			336,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("UsageContext") },
			}
		},
		{
			Str8LitComp("jurisdiction_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			344,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("jurisdiction"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			352,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("copyright"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			360,
			16,
			{
				{ ValueType::Markdown, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("approvalDate"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			376,
			16,
			{
				{ ValueType::Date, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("lastReviewDate"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			392,
			16,
			{
				{ ValueType::Date, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("effectivePeriod"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			408,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Period") },
			}
		},
		{
			Str8LitComp("topic_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			416,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("topic"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			424,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("author_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			432,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("author"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			440,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("ContactDetail") },
			}
		},
		{
			Str8LitComp("editor_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			448,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("editor"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			456,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("ContactDetail") },
			}
		},
		{
			Str8LitComp("reviewer_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			464,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("reviewer"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			472,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("ContactDetail") },
			}
		},
		{
			Str8LitComp("endorser_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			480,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("endorser"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			488,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("ContactDetail") },
			}
		},
		{
			Str8LitComp("relatedArtifact_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			496,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("relatedArtifact"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			504,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("RelatedArtifact") },
			}
		},
		{
			Str8LitComp("type"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			512,
			16,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("characteristic_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			528,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("characteristic"),
			Cardinality::OneToInf,
			ClassMemberType::Single,
			536,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("EvidenceVariable_Characteristic") },
			}
		}
	}
}
,{
	Str8Lit("EvidenceVariable_Characteristic"),
	160,
	16,
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("EvidenceVariable_Characteristic") },
			}
		},
		{
			Str8LitComp("id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			24,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("description"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			56,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("definition_type"),
			Cardinality::OneToOne,
			ClassMemberType::Enum,
			72,
			4,
			{
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
				{ ValueType::Canonical, Str8LitComp("") },
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
				{ ValueType::Class_Reference, Str8LitComp("Expression") },
				{ ValueType::Class_Reference, Str8LitComp("DataRequirement") },
				{ ValueType::Class_Reference, Str8LitComp("TriggerDefinition") },
			}
		},
		{
			Str8LitComp("definition"),
			Cardinality::OneToOne,
			ClassMemberType::Union,
			80,
			16,
			{
				{ ValueType::Class_Reference, Str8LitComp("definitionReference") },
				{ ValueType::Canonical, Str8LitComp("definitionCanonical") },
				{ ValueType::Class_Reference, Str8LitComp("definitionCodeableConcept") },
				{ ValueType::Class_Reference, Str8LitComp("definitionExpression") },
				{ ValueType::Class_Reference, Str8LitComp("definitionDataRequirement") },
				{ ValueType::Class_Reference, Str8LitComp("definitionTriggerDefinition") },
			}
		},
		{
			Str8LitComp("usageContext_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			96,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("usageContext"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			104,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("UsageContext") },
			}
		},
		{
			Str8LitComp("exclude"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			112,
			4,
			{
				{ ValueType::Boolean, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("participantEffective_type"),
			Cardinality::OneToOne,
			ClassMemberType::Enum,
			116,
			4,
			{
				{ ValueType::DateTime, Str8LitComp("") },
				{ ValueType::Class_Reference, Str8LitComp("Period") },
				{ ValueType::Class_Reference, Str8LitComp("Duration") },
				{ ValueType::Class_Reference, Str8LitComp("Timing") },
			}
		},
		{
			Str8LitComp("participantEffective"),
			Cardinality::ZeroToOne,
			ClassMemberType::Union,
			120,
			16,
			{
				{ ValueType::DateTime, Str8LitComp("participantEffectiveDateTime") },
				{ ValueType::Class_Reference, Str8LitComp("participantEffectivePeriod") },
				{ ValueType::Class_Reference, Str8LitComp("participantEffectiveDuration") },
				{ ValueType::Class_Reference, Str8LitComp("participantEffectiveTiming") },
			}
		},
		{
			Str8LitComp("timeFromStart"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			136,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Duration") },
			}
		},
		{
			Str8LitComp("groupMeasure"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			144,
			16,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		}
	}
}
,{
	Str8Lit("ExampleScenario"),
	384,
	37,
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("ExampleScenario") },
			}
		},
		{
			Str8LitComp("id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("meta"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			24,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Meta") },
			}
		},
		{
			Str8LitComp("implicitRules"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			32,
			16,
			{
				{ ValueType::Uri, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("language"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			48,
			16,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("text"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			64,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Narrative") },
			}
		},
		{
			Str8LitComp("contained_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			72,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("contained"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			80,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Resource") },
			}
		},
		{
			Str8LitComp("extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			88,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			96,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			104,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			112,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("url"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			120,
			16,
			{
				{ ValueType::Uri, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("identifier_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			136,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("identifier"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			144,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Identifier") },
			}
		},
		{
			Str8LitComp("version"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			152,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("name"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			168,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("status"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			184,
			16,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("experimental"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			200,
			4,
			{
				{ ValueType::Boolean, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("date"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			208,
			16,
			{
				{ ValueType::DateTime, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("publisher"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			224,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("contact_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			240,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("contact"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			248,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("ContactDetail") },
			}
		},
		{
			Str8LitComp("useContext_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			256,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("useContext"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			264,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("UsageContext") },
			}
		},
		{
			Str8LitComp("jurisdiction_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			272,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("jurisdiction"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			280,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("copyright"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			288,
			16,
			{
				{ ValueType::Markdown, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("purpose"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			304,
			16,
			{
				{ ValueType::Markdown, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("actor_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			320,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("actor"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			328,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("ExampleScenario_Actor") },
			}
		},
		{
			Str8LitComp("instance_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			336,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("instance"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			344,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("ExampleScenario_Instance") },
			}
		},
		{
			Str8LitComp("process_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			352,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("process"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			360,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("ExampleScenario_Process") },
			}
		},
		{
			Str8LitComp("workflow_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			368,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("workflow"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			376,
			8,
			{
				{ ValueType::Canonical, Str8LitComp("") },
			}
		}
	}
}
,{
	Str8Lit("ExampleScenario_Actor"),
	120,
	10,
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("ExampleScenario_Actor") },
			}
		},
		{
			Str8LitComp("id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			24,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("actorId"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			56,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("type"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			72,
			16,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("name"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			88,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("description"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			104,
			16,
			{
				{ ValueType::Markdown, Str8LitComp("") },
			}
		}
	}
}
,{
	Str8Lit("ExampleScenario_Instance"),
	152,
	14,
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("ExampleScenario_Instance") },
			}
		},
		{
			Str8LitComp("id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			24,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("resourceId"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			56,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("resourceType_"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			72,
			16,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("name"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			88,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("description"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			104,
			16,
			{
				{ ValueType::Markdown, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("version_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			120,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("version"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			128,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("ExampleScenario_Instance_Version") },
			}
		},
		{
			Str8LitComp("containedInstance_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			136,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("containedInstance"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			144,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("ExampleScenario_Instance_ContainedInstance") },
			}
		}
	}
}
,{
	Str8Lit("ExampleScenario_Instance_Version"),
	88,
	8,
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("ExampleScenario_Instance_Version") },
			}
		},
		{
			Str8LitComp("id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			24,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("versionId"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			56,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("description"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			72,
			16,
			{
				{ ValueType::Markdown, Str8LitComp("") },
			}
		}
	}
}
,{
	Str8Lit("ExampleScenario_Instance_ContainedInstance"),
	88,
	8,
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("ExampleScenario_Instance_ContainedInstance") },
			}
		},
		{
			Str8LitComp("id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			24,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("resourceId"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			56,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("versionId"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			72,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		}
	}
}
,{
	Str8Lit("ExampleScenario_Process"),
	136,
	12,
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("ExampleScenario_Process") },
			}
		},
		{
			Str8LitComp("id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			24,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("title"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			56,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("description"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			72,
			16,
			{
				{ ValueType::Markdown, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("preConditions"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			88,
			16,
			{
				{ ValueType::Markdown, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("postConditions"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			104,
			16,
			{
				{ ValueType::Markdown, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("step_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			120,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("step"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			128,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("ExampleScenario_Process_Step") },
			}
		}
	}
}
,{
	Str8Lit("ExampleScenario_Process_Step"),
	104,
	12,
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("ExampleScenario_Process_Step") },
			}
		},
		{
			Str8LitComp("id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			24,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("process_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			56,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("process"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			64,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("ExampleScenario_Process") },
			}
		},
		{
			Str8LitComp("pause"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			72,
			4,
			{
				{ ValueType::Boolean, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("operation"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			80,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("ExampleScenario_Process_Step_Operation") },
			}
		},
		{
			Str8LitComp("alternative_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			88,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("alternative"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			96,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("ExampleScenario_Process_Step_Alternative") },
			}
		}
	}
}
,{
	Str8Lit("ExampleScenario_Process_Step_Operation"),
	176,
	16,
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("ExampleScenario_Process_Step_Operation") },
			}
		},
		{
			Str8LitComp("id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			24,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("number"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			56,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("type"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			72,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("name"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			88,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("initiator"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			104,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("receiver"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			120,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("description"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			136,
			16,
			{
				{ ValueType::Markdown, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("initiatorActive"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			152,
			4,
			{
				{ ValueType::Boolean, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("receiverActive"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			156,
			4,
			{
				{ ValueType::Boolean, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("request"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			160,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("ExampleScenario_Instance_ContainedInstance") },
			}
		},
		{
			Str8LitComp("response"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			168,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("ExampleScenario_Instance_ContainedInstance") },
			}
		}
	}
}
,{
	Str8Lit("ExampleScenario_Process_Step_Alternative"),
	104,
	10,
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("ExampleScenario_Process_Step_Alternative") },
			}
		},
		{
			Str8LitComp("id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			24,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("title"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			56,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("description"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			72,
			16,
			{
				{ ValueType::Markdown, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("step_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			88,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("step"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			96,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("ExampleScenario_Process_Step") },
			}
		}
	}
}
,{
	Str8Lit("ExplanationOfBenefit"),
	624,
	70,
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("ExplanationOfBenefit") },
			}
		},
		{
			Str8LitComp("id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("meta"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			24,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Meta") },
			}
		},
		{
			Str8LitComp("implicitRules"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			32,
			16,
			{
				{ ValueType::Uri, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("language"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			48,
			16,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("text"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			64,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Narrative") },
			}
		},
		{
			Str8LitComp("contained_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			72,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("contained"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			80,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Resource") },
			}
		},
		{
			Str8LitComp("extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			88,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			96,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			104,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			112,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("identifier_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			120,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("identifier"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			128,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Identifier") },
			}
		},
		{
			Str8LitComp("status"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			136,
			16,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("type"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			152,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("subType"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			160,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("use"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			168,
			16,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("patient"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			184,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("billablePeriod"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			192,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Period") },
			}
		},
		{
			Str8LitComp("created"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			200,
			16,
			{
				{ ValueType::DateTime, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("enterer"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			216,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("insurer"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			224,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("provider"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			232,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("priority"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			240,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("fundsReserveRequested"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			248,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("fundsReserve"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			256,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("related_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			264,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("related"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			272,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("ExplanationOfBenefit_Related") },
			}
		},
		{
			Str8LitComp("prescription"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			280,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("originalPrescription"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			288,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("payee"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			296,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("ExplanationOfBenefit_Payee") },
			}
		},
		{
			Str8LitComp("referral"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			304,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("facility"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			312,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("claim"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			320,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("claimResponse"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			328,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("outcome"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			336,
			16,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("disposition"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			352,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("preAuthRef_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			368,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("preAuthRef"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			376,
			8,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("preAuthRefPeriod_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			384,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("preAuthRefPeriod"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			392,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Period") },
			}
		},
		{
			Str8LitComp("careTeam_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			400,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("careTeam"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			408,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("ExplanationOfBenefit_CareTeam") },
			}
		},
		{
			Str8LitComp("supportingInfo_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			416,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("supportingInfo"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			424,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("ExplanationOfBenefit_SupportingInfo") },
			}
		},
		{
			Str8LitComp("diagnosis_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			432,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("diagnosis"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			440,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("ExplanationOfBenefit_Diagnosis") },
			}
		},
		{
			Str8LitComp("procedure_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			448,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("procedure"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			456,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("ExplanationOfBenefit_Procedure") },
			}
		},
		{
			Str8LitComp("precedence"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			464,
			8,
			{
				{ ValueType::PositiveInt, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("insurance_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			472,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("insurance"),
			Cardinality::OneToInf,
			ClassMemberType::Single,
			480,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("ExplanationOfBenefit_Insurance") },
			}
		},
		{
			Str8LitComp("accident"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			488,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("ExplanationOfBenefit_Accident") },
			}
		},
		{
			Str8LitComp("item_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			496,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("item"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			504,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("ExplanationOfBenefit_Item") },
			}
		},
		{
			Str8LitComp("addItem_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			512,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("addItem"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			520,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("ExplanationOfBenefit_AddItem") },
			}
		},
		{
			Str8LitComp("adjudication_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			528,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("adjudication"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			536,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("ExplanationOfBenefit_Item_Adjudication") },
			}
		},
		{
			Str8LitComp("total_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			544,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("total"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			552,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("ExplanationOfBenefit_Total") },
			}
		},
		{
			Str8LitComp("payment"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			560,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("ExplanationOfBenefit_Payment") },
			}
		},
		{
			Str8LitComp("formCode"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			568,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("form"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			576,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Attachment") },
			}
		},
		{
			Str8LitComp("processNote_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			584,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("processNote"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			592,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("ExplanationOfBenefit_ProcessNote") },
			}
		},
		{
			Str8LitComp("benefitPeriod"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			600,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Period") },
			}
		},
		{
			Str8LitComp("benefitBalance_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			608,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("benefitBalance"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			616,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("ExplanationOfBenefit_BenefitBalance") },
			}
		}
	}
}
,{
	Str8Lit("ExplanationOfBenefit_Related"),
	80,
	9,
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("ExplanationOfBenefit_Related") },
			}
		},
		{
			Str8LitComp("id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			24,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("claim"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			56,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("relationship"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			64,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("reference"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			72,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Identifier") },
			}
		}
	}
}
,{
	Str8Lit("ExplanationOfBenefit_Payee"),
	72,
	8,
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("ExplanationOfBenefit_Payee") },
			}
		},
		{
			Str8LitComp("id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			24,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("type"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			56,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("party"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			64,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		}
	}
}
,{
	Str8Lit("ExplanationOfBenefit_CareTeam"),
	96,
	11,
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("ExplanationOfBenefit_CareTeam") },
			}
		},
		{
			Str8LitComp("id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			24,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("sequence"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			56,
			8,
			{
				{ ValueType::PositiveInt, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("provider"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			64,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("responsible"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			72,
			4,
			{
				{ ValueType::Boolean, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("role"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			80,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("qualification"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			88,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		}
	}
}
,{
	Str8Lit("ExplanationOfBenefit_SupportingInfo"),
	136,
	14,
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("ExplanationOfBenefit_SupportingInfo") },
			}
		},
		{
			Str8LitComp("id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			24,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("sequence"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			56,
			8,
			{
				{ ValueType::PositiveInt, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("category"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			64,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("code"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			72,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("timing_type"),
			Cardinality::OneToOne,
			ClassMemberType::Enum,
			80,
			4,
			{
				{ ValueType::Date, Str8LitComp("") },
				{ ValueType::Class_Reference, Str8LitComp("Period") },
			}
		},
		{
			Str8LitComp("timing"),
			Cardinality::ZeroToOne,
			ClassMemberType::Union,
			88,
			16,
			{
				{ ValueType::Date, Str8LitComp("timingDate") },
				{ ValueType::Class_Reference, Str8LitComp("timingPeriod") },
			}
		},
		{
			Str8LitComp("value_type"),
			Cardinality::OneToOne,
			ClassMemberType::Enum,
			104,
			4,
			{
				{ ValueType::Boolean, Str8LitComp("") },
				{ ValueType::String, Str8LitComp("") },
				{ ValueType::Class_Reference, Str8LitComp("Quantity") },
				{ ValueType::Class_Reference, Str8LitComp("Attachment") },
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("value"),
			Cardinality::ZeroToOne,
			ClassMemberType::Union,
			112,
			16,
			{
				{ ValueType::Boolean, Str8LitComp("valueBoolean") },
				{ ValueType::String, Str8LitComp("valueString") },
				{ ValueType::Class_Reference, Str8LitComp("valueQuantity") },
				{ ValueType::Class_Reference, Str8LitComp("valueAttachment") },
				{ ValueType::Class_Reference, Str8LitComp("valueReference") },
			}
		},
		{
			Str8LitComp("reason"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			128,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Coding") },
			}
		}
	}
}
,{
	Str8Lit("ExplanationOfBenefit_Diagnosis"),
	112,
	13,
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("ExplanationOfBenefit_Diagnosis") },
			}
		},
		{
			Str8LitComp("id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			24,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("sequence"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			56,
			8,
			{
				{ ValueType::PositiveInt, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("diagnosis_type"),
			Cardinality::OneToOne,
			ClassMemberType::Enum,
			64,
			4,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("diagnosis"),
			Cardinality::OneToOne,
			ClassMemberType::Union,
			72,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("diagnosisCodeableConcept") },
				{ ValueType::Class_Reference, Str8LitComp("diagnosisReference") },
			}
		},
		{
			Str8LitComp("type_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			80,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("type"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			88,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("onAdmission"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			96,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("packageCode"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			104,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		}
	}
}
,{
	Str8Lit("ExplanationOfBenefit_Procedure"),
	128,
	14,
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("ExplanationOfBenefit_Procedure") },
			}
		},
		{
			Str8LitComp("id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			24,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("sequence"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			56,
			8,
			{
				{ ValueType::PositiveInt, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("type_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			64,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("type"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			72,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("date"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			80,
			16,
			{
				{ ValueType::DateTime, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("procedure_type"),
			Cardinality::OneToOne,
			ClassMemberType::Enum,
			96,
			4,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("procedure"),
			Cardinality::OneToOne,
			ClassMemberType::Union,
			104,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("procedureCodeableConcept") },
				{ ValueType::Class_Reference, Str8LitComp("procedureReference") },
			}
		},
		{
			Str8LitComp("udi_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			112,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("udi"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			120,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		}
	}
}
,{
	Str8Lit("ExplanationOfBenefit_Insurance"),
	88,
	10,
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("ExplanationOfBenefit_Insurance") },
			}
		},
		{
			Str8LitComp("id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			24,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("focal"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			56,
			4,
			{
				{ ValueType::Boolean, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("coverage"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			64,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("preAuthRef_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			72,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("preAuthRef"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			80,
			8,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		}
	}
}
,{
	Str8Lit("ExplanationOfBenefit_Accident"),
	96,
	10,
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("ExplanationOfBenefit_Accident") },
			}
		},
		{
			Str8LitComp("id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			24,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("date"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			56,
			16,
			{
				{ ValueType::Date, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("type"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			72,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("location_type"),
			Cardinality::OneToOne,
			ClassMemberType::Enum,
			80,
			4,
			{
				{ ValueType::Class_Reference, Str8LitComp("Address") },
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("location"),
			Cardinality::ZeroToOne,
			ClassMemberType::Union,
			88,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("locationAddress") },
				{ ValueType::Class_Reference, Str8LitComp("locationReference") },
			}
		}
	}
}
,{
	Str8Lit("ExplanationOfBenefit_Item"),
	360,
	43,
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("ExplanationOfBenefit_Item") },
			}
		},
		{
			Str8LitComp("id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			24,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("sequence"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			56,
			8,
			{
				{ ValueType::PositiveInt, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("careTeamSequence_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			64,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("careTeamSequence"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			72,
			8,
			{
				{ ValueType::PositiveInt, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("diagnosisSequence_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			80,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("diagnosisSequence"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			88,
			8,
			{
				{ ValueType::PositiveInt, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("procedureSequence_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			96,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("procedureSequence"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			104,
			8,
			{
				{ ValueType::PositiveInt, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("informationSequence_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			112,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("informationSequence"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			120,
			8,
			{
				{ ValueType::PositiveInt, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("revenue"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			128,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("category"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			136,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("productOrService"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			144,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("modifier_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			152,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("modifier"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			160,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("programCode_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			168,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("programCode"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			176,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("serviced_type"),
			Cardinality::OneToOne,
			ClassMemberType::Enum,
			184,
			4,
			{
				{ ValueType::Date, Str8LitComp("") },
				{ ValueType::Class_Reference, Str8LitComp("Period") },
			}
		},
		{
			Str8LitComp("serviced"),
			Cardinality::ZeroToOne,
			ClassMemberType::Union,
			192,
			16,
			{
				{ ValueType::Date, Str8LitComp("servicedDate") },
				{ ValueType::Class_Reference, Str8LitComp("servicedPeriod") },
			}
		},
		{
			Str8LitComp("location_type"),
			Cardinality::OneToOne,
			ClassMemberType::Enum,
			208,
			4,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
				{ ValueType::Class_Reference, Str8LitComp("Address") },
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("location"),
			Cardinality::ZeroToOne,
			ClassMemberType::Union,
			216,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("locationCodeableConcept") },
				{ ValueType::Class_Reference, Str8LitComp("locationAddress") },
				{ ValueType::Class_Reference, Str8LitComp("locationReference") },
			}
		},
		{
			Str8LitComp("quantity"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			224,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Quantity") },
			}
		},
		{
			Str8LitComp("unitPrice"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			232,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Money") },
			}
		},
		{
			Str8LitComp("factor"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			240,
			8,
			{
				{ ValueType::Decimal, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("net"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			248,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Money") },
			}
		},
		{
			Str8LitComp("udi_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			256,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("udi"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			264,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("bodySite"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			272,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("subSite_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			280,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("subSite"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			288,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("encounter_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			296,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("encounter"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			304,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("noteNumber_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			312,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("noteNumber"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			320,
			8,
			{
				{ ValueType::PositiveInt, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("adjudication_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			328,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("adjudication"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			336,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("ExplanationOfBenefit_Item_Adjudication") },
			}
		},
		{
			Str8LitComp("detail_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			344,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("detail"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			352,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("ExplanationOfBenefit_Item_Detail") },
			}
		}
	}
}
,{
	Str8Lit("ExplanationOfBenefit_Item_Adjudication"),
	88,
	10,
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("ExplanationOfBenefit_Item_Adjudication") },
			}
		},
		{
			Str8LitComp("id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			24,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("category"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			56,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("reason"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			64,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("amount"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			72,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Money") },
			}
		},
		{
			Str8LitComp("value"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			80,
			8,
			{
				{ ValueType::Decimal, Str8LitComp("") },
			}
		}
	}
}
,{
	Str8Lit("ExplanationOfBenefit_Item_Detail"),
	216,
	26,
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("ExplanationOfBenefit_Item_Detail") },
			}
		},
		{
			Str8LitComp("id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			24,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("sequence"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			56,
			8,
			{
				{ ValueType::PositiveInt, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("revenue"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			64,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("category"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			72,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("productOrService"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			80,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("modifier_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			88,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("modifier"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			96,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("programCode_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			104,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("programCode"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			112,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("quantity"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			120,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Quantity") },
			}
		},
		{
			Str8LitComp("unitPrice"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			128,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Money") },
			}
		},
		{
			Str8LitComp("factor"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			136,
			8,
			{
				{ ValueType::Decimal, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("net"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			144,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Money") },
			}
		},
		{
			Str8LitComp("udi_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			152,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("udi"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			160,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("noteNumber_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			168,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("noteNumber"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			176,
			8,
			{
				{ ValueType::PositiveInt, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("adjudication_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			184,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("adjudication"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			192,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("ExplanationOfBenefit_Item_Adjudication") },
			}
		},
		{
			Str8LitComp("subDetail_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			200,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("subDetail"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			208,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("ExplanationOfBenefit_Item_Detail_SubDetail") },
			}
		}
	}
}
,{
	Str8Lit("ExplanationOfBenefit_Item_Detail_SubDetail"),
	200,
	24,
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("ExplanationOfBenefit_Item_Detail_SubDetail") },
			}
		},
		{
			Str8LitComp("id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			24,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("sequence"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			56,
			8,
			{
				{ ValueType::PositiveInt, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("revenue"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			64,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("category"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			72,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("productOrService"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			80,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("modifier_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			88,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("modifier"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			96,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("programCode_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			104,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("programCode"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			112,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("quantity"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			120,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Quantity") },
			}
		},
		{
			Str8LitComp("unitPrice"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			128,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Money") },
			}
		},
		{
			Str8LitComp("factor"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			136,
			8,
			{
				{ ValueType::Decimal, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("net"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			144,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Money") },
			}
		},
		{
			Str8LitComp("udi_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			152,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("udi"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			160,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("noteNumber_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			168,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("noteNumber"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			176,
			8,
			{
				{ ValueType::PositiveInt, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("adjudication_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			184,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("adjudication"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			192,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("ExplanationOfBenefit_Item_Adjudication") },
			}
		}
	}
}
,{
	Str8Lit("ExplanationOfBenefit_AddItem"),
	304,
	36,
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("ExplanationOfBenefit_AddItem") },
			}
		},
		{
			Str8LitComp("id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			24,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("itemSequence_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			56,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("itemSequence"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			64,
			8,
			{
				{ ValueType::PositiveInt, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("detailSequence_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			72,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("detailSequence"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			80,
			8,
			{
				{ ValueType::PositiveInt, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("subDetailSequence_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			88,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("subDetailSequence"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			96,
			8,
			{
				{ ValueType::PositiveInt, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("provider_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			104,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("provider"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			112,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("productOrService"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			120,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("modifier_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			128,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("modifier"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			136,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("programCode_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			144,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("programCode"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			152,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("serviced_type"),
			Cardinality::OneToOne,
			ClassMemberType::Enum,
			160,
			4,
			{
				{ ValueType::Date, Str8LitComp("") },
				{ ValueType::Class_Reference, Str8LitComp("Period") },
			}
		},
		{
			Str8LitComp("serviced"),
			Cardinality::ZeroToOne,
			ClassMemberType::Union,
			168,
			16,
			{
				{ ValueType::Date, Str8LitComp("servicedDate") },
				{ ValueType::Class_Reference, Str8LitComp("servicedPeriod") },
			}
		},
		{
			Str8LitComp("location_type"),
			Cardinality::OneToOne,
			ClassMemberType::Enum,
			184,
			4,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
				{ ValueType::Class_Reference, Str8LitComp("Address") },
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("location"),
			Cardinality::ZeroToOne,
			ClassMemberType::Union,
			192,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("locationCodeableConcept") },
				{ ValueType::Class_Reference, Str8LitComp("locationAddress") },
				{ ValueType::Class_Reference, Str8LitComp("locationReference") },
			}
		},
		{
			Str8LitComp("quantity"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			200,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Quantity") },
			}
		},
		{
			Str8LitComp("unitPrice"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			208,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Money") },
			}
		},
		{
			Str8LitComp("factor"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			216,
			8,
			{
				{ ValueType::Decimal, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("net"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			224,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Money") },
			}
		},
		{
			Str8LitComp("bodySite"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			232,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("subSite_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			240,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("subSite"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			248,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("noteNumber_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			256,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("noteNumber"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			264,
			8,
			{
				{ ValueType::PositiveInt, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("adjudication_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			272,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("adjudication"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			280,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("ExplanationOfBenefit_Item_Adjudication") },
			}
		},
		{
			Str8LitComp("detail_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			288,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("detail"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			296,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("ExplanationOfBenefit_AddItem_Detail") },
			}
		}
	}
}
,{
	Str8Lit("ExplanationOfBenefit_AddItem_Detail"),
	160,
	19,
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("ExplanationOfBenefit_AddItem_Detail") },
			}
		},
		{
			Str8LitComp("id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			24,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("productOrService"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			56,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("modifier_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			64,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("modifier"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			72,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("quantity"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			80,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Quantity") },
			}
		},
		{
			Str8LitComp("unitPrice"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			88,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Money") },
			}
		},
		{
			Str8LitComp("factor"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			96,
			8,
			{
				{ ValueType::Decimal, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("net"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			104,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Money") },
			}
		},
		{
			Str8LitComp("noteNumber_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			112,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("noteNumber"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			120,
			8,
			{
				{ ValueType::PositiveInt, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("adjudication_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			128,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("adjudication"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			136,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("ExplanationOfBenefit_Item_Adjudication") },
			}
		},
		{
			Str8LitComp("subDetail_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			144,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("subDetail"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			152,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("ExplanationOfBenefit_AddItem_Detail_SubDetail") },
			}
		}
	}
}
,{
	Str8Lit("ExplanationOfBenefit_AddItem_Detail_SubDetail"),
	144,
	17,
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("ExplanationOfBenefit_AddItem_Detail_SubDetail") },
			}
		},
		{
			Str8LitComp("id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			24,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("productOrService"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			56,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("modifier_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			64,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("modifier"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			72,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("quantity"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			80,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Quantity") },
			}
		},
		{
			Str8LitComp("unitPrice"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			88,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Money") },
			}
		},
		{
			Str8LitComp("factor"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			96,
			8,
			{
				{ ValueType::Decimal, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("net"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			104,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Money") },
			}
		},
		{
			Str8LitComp("noteNumber_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			112,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("noteNumber"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			120,
			8,
			{
				{ ValueType::PositiveInt, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("adjudication_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			128,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("adjudication"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			136,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("ExplanationOfBenefit_Item_Adjudication") },
			}
		}
	}
}
,{
	Str8Lit("ExplanationOfBenefit_Total"),
	72,
	8,
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("ExplanationOfBenefit_Total") },
			}
		},
		{
			Str8LitComp("id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			24,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("category"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			56,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("amount"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			64,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Money") },
			}
		}
	}
}
,{
	Str8Lit("ExplanationOfBenefit_Payment"),
	112,
	12,
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("ExplanationOfBenefit_Payment") },
			}
		},
		{
			Str8LitComp("id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			24,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("type"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			56,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("adjustment"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			64,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Money") },
			}
		},
		{
			Str8LitComp("adjustmentReason"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			72,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("date"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			80,
			16,
			{
				{ ValueType::Date, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("amount"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			96,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Money") },
			}
		},
		{
			Str8LitComp("identifier"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			104,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Identifier") },
			}
		}
	}
}
,{
	Str8Lit("ExplanationOfBenefit_ProcessNote"),
	104,
	10,
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("ExplanationOfBenefit_ProcessNote") },
			}
		},
		{
			Str8LitComp("id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			24,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("number"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			56,
			8,
			{
				{ ValueType::PositiveInt, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("type"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			64,
			16,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("text"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			80,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("language"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			96,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		}
	}
}
,{
	Str8Lit("ExplanationOfBenefit_BenefitBalance"),
	144,
	15,
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("ExplanationOfBenefit_BenefitBalance") },
			}
		},
		{
			Str8LitComp("id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			24,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("category"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			56,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("excluded"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			64,
			4,
			{
				{ ValueType::Boolean, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("name"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			72,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("description"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			88,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("network"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			104,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("unit"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			112,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("term"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			120,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("financial_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			128,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("financial"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			136,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("ExplanationOfBenefit_BenefitBalance_Financial") },
			}
		}
	}
}
,{
	Str8Lit("ExplanationOfBenefit_BenefitBalance_Financial"),
	104,
	11,
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("ExplanationOfBenefit_BenefitBalance_Financial") },
			}
		},
		{
			Str8LitComp("id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			24,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("type"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			56,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("allowed_type"),
			Cardinality::OneToOne,
			ClassMemberType::Enum,
			64,
			4,
			{
				{ ValueType::UnsignedInt, Str8LitComp("") },
				{ ValueType::String, Str8LitComp("") },
				{ ValueType::Class_Reference, Str8LitComp("Money") },
			}
		},
		{
			Str8LitComp("allowed"),
			Cardinality::ZeroToOne,
			ClassMemberType::Union,
			72,
			16,
			{
				{ ValueType::UnsignedInt, Str8LitComp("allowedUnsignedInt") },
				{ ValueType::String, Str8LitComp("allowedString") },
				{ ValueType::Class_Reference, Str8LitComp("allowedMoney") },
			}
		},
		{
			Str8LitComp("used_type"),
			Cardinality::OneToOne,
			ClassMemberType::Enum,
			88,
			4,
			{
				{ ValueType::UnsignedInt, Str8LitComp("") },
				{ ValueType::Class_Reference, Str8LitComp("Money") },
			}
		},
		{
			Str8LitComp("used"),
			Cardinality::ZeroToOne,
			ClassMemberType::Union,
			96,
			8,
			{
				{ ValueType::UnsignedInt, Str8LitComp("usedUnsignedInt") },
				{ ValueType::Class_Reference, Str8LitComp("usedMoney") },
			}
		}
	}
}
,{
	Str8Lit("FamilyMemberHistory"),
	384,
	40,
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("FamilyMemberHistory") },
			}
		},
		{
			Str8LitComp("id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("meta"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			24,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Meta") },
			}
		},
		{
			Str8LitComp("implicitRules"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			32,
			16,
			{
				{ ValueType::Uri, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("language"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			48,
			16,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("text"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			64,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Narrative") },
			}
		},
		{
			Str8LitComp("contained_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			72,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("contained"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			80,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Resource") },
			}
		},
		{
			Str8LitComp("extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			88,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			96,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			104,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			112,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("identifier_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			120,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("identifier"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			128,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Identifier") },
			}
		},
		{
			Str8LitComp("instantiatesCanonical_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			136,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("instantiatesCanonical"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			144,
			8,
			{
				{ ValueType::Canonical, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("instantiatesUri_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			152,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("instantiatesUri"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			160,
			8,
			{
				{ ValueType::Uri, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("status"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			168,
			16,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("dataAbsentReason"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			184,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("patient"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			192,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("date"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			200,
			16,
			{
				{ ValueType::DateTime, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("name"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			216,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("relationship"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			232,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("sex"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			240,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("born_type"),
			Cardinality::OneToOne,
			ClassMemberType::Enum,
			248,
			4,
			{
				{ ValueType::Class_Reference, Str8LitComp("Period") },
				{ ValueType::Date, Str8LitComp("") },
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("born"),
			Cardinality::ZeroToOne,
			ClassMemberType::Union,
			256,
			16,
			{
				{ ValueType::Class_Reference, Str8LitComp("bornPeriod") },
				{ ValueType::Date, Str8LitComp("bornDate") },
				{ ValueType::String, Str8LitComp("bornString") },
			}
		},
		{
			Str8LitComp("age_type"),
			Cardinality::OneToOne,
			ClassMemberType::Enum,
			272,
			4,
			{
				{ ValueType::Class_Reference, Str8LitComp("Age") },
				{ ValueType::Class_Reference, Str8LitComp("Range") },
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("age"),
			Cardinality::ZeroToOne,
			ClassMemberType::Union,
			280,
			16,
			{
				{ ValueType::Class_Reference, Str8LitComp("ageAge") },
				{ ValueType::Class_Reference, Str8LitComp("ageRange") },
				{ ValueType::String, Str8LitComp("ageString") },
			}
		},
		{
			Str8LitComp("estimatedAge"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			296,
			4,
			{
				{ ValueType::Boolean, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("deceased_type"),
			Cardinality::OneToOne,
			ClassMemberType::Enum,
			300,
			4,
			{
				{ ValueType::Boolean, Str8LitComp("") },
				{ ValueType::Class_Reference, Str8LitComp("Age") },
				{ ValueType::Class_Reference, Str8LitComp("Range") },
				{ ValueType::Date, Str8LitComp("") },
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("deceased"),
			Cardinality::ZeroToOne,
			ClassMemberType::Union,
			304,
			16,
			{
				{ ValueType::Boolean, Str8LitComp("deceasedBoolean") },
				{ ValueType::Class_Reference, Str8LitComp("deceasedAge") },
				{ ValueType::Class_Reference, Str8LitComp("deceasedRange") },
				{ ValueType::Date, Str8LitComp("deceasedDate") },
				{ ValueType::String, Str8LitComp("deceasedString") },
			}
		},
		{
			Str8LitComp("reasonCode_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			320,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("reasonCode"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			328,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("reasonReference_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			336,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("reasonReference"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			344,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("note_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			352,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("note"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			360,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Annotation") },
			}
		},
		{
			Str8LitComp("condition_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			368,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("condition"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			376,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("FamilyMemberHistory_Condition") },
			}
		}
	}
}
,{
	Str8Lit("FamilyMemberHistory_Condition"),
	112,
	13,
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("FamilyMemberHistory_Condition") },
			}
		},
		{
			Str8LitComp("id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			24,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("code"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			56,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("outcome"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			64,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("contributedToDeath"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			72,
			4,
			{
				{ ValueType::Boolean, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("onset_type"),
			Cardinality::OneToOne,
			ClassMemberType::Enum,
			76,
			4,
			{
				{ ValueType::Class_Reference, Str8LitComp("Age") },
				{ ValueType::Class_Reference, Str8LitComp("Range") },
				{ ValueType::Class_Reference, Str8LitComp("Period") },
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("onset"),
			Cardinality::ZeroToOne,
			ClassMemberType::Union,
			80,
			16,
			{
				{ ValueType::Class_Reference, Str8LitComp("onsetAge") },
				{ ValueType::Class_Reference, Str8LitComp("onsetRange") },
				{ ValueType::Class_Reference, Str8LitComp("onsetPeriod") },
				{ ValueType::String, Str8LitComp("onsetString") },
			}
		},
		{
			Str8LitComp("note_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			96,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("note"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			104,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Annotation") },
			}
		}
	}
}
,{
	Str8Lit("Flag"),
	208,
	22,
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("Flag") },
			}
		},
		{
			Str8LitComp("id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("meta"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			24,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Meta") },
			}
		},
		{
			Str8LitComp("implicitRules"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			32,
			16,
			{
				{ ValueType::Uri, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("language"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			48,
			16,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("text"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			64,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Narrative") },
			}
		},
		{
			Str8LitComp("contained_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			72,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("contained"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			80,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Resource") },
			}
		},
		{
			Str8LitComp("extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			88,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			96,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			104,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			112,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("identifier_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			120,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("identifier"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			128,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Identifier") },
			}
		},
		{
			Str8LitComp("status"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			136,
			16,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("category_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			152,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("category"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			160,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("code"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			168,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("subject"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			176,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("period"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			184,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Period") },
			}
		},
		{
			Str8LitComp("encounter"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			192,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("author"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			200,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		}
	}
}
,{
	Str8Lit("Goal"),
	344,
	36,
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("Goal") },
			}
		},
		{
			Str8LitComp("id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("meta"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			24,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Meta") },
			}
		},
		{
			Str8LitComp("implicitRules"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			32,
			16,
			{
				{ ValueType::Uri, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("language"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			48,
			16,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("text"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			64,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Narrative") },
			}
		},
		{
			Str8LitComp("contained_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			72,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("contained"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			80,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Resource") },
			}
		},
		{
			Str8LitComp("extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			88,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			96,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			104,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			112,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("identifier_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			120,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("identifier"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			128,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Identifier") },
			}
		},
		{
			Str8LitComp("lifecycleStatus"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			136,
			16,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("achievementStatus"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			152,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("category_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			160,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("category"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			168,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("priority"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			176,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("description"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			184,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("subject"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			192,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("start_type"),
			Cardinality::OneToOne,
			ClassMemberType::Enum,
			200,
			4,
			{
				{ ValueType::Date, Str8LitComp("") },
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("start"),
			Cardinality::ZeroToOne,
			ClassMemberType::Union,
			208,
			16,
			{
				{ ValueType::Date, Str8LitComp("startDate") },
				{ ValueType::Class_Reference, Str8LitComp("startCodeableConcept") },
			}
		},
		{
			Str8LitComp("target_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			224,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("target"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			232,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Goal_Target") },
			}
		},
		{
			Str8LitComp("statusDate"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			240,
			16,
			{
				{ ValueType::Date, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("statusReason"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			256,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("expressedBy"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			272,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("addresses_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			280,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("addresses"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			288,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("note_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			296,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("note"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			304,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Annotation") },
			}
		},
		{
			Str8LitComp("outcomeCode_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			312,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("outcomeCode"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			320,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("outcomeReference_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			328,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("outcomeReference"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			336,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		}
	}
}
,{
	Str8Lit("Goal_Target"),
	112,
	11,
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("Goal_Target") },
			}
		},
		{
			Str8LitComp("id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			24,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("measure"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			56,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("detail_type"),
			Cardinality::OneToOne,
			ClassMemberType::Enum,
			64,
			4,
			{
				{ ValueType::Class_Reference, Str8LitComp("Quantity") },
				{ ValueType::Class_Reference, Str8LitComp("Range") },
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
				{ ValueType::String, Str8LitComp("") },
				{ ValueType::Boolean, Str8LitComp("") },
				{ ValueType::Class_Reference, Str8LitComp("Integer") },
				{ ValueType::Class_Reference, Str8LitComp("Ratio") },
			}
		},
		{
			Str8LitComp("detail"),
			Cardinality::ZeroToOne,
			ClassMemberType::Union,
			72,
			16,
			{
				{ ValueType::Class_Reference, Str8LitComp("detailQuantity") },
				{ ValueType::Class_Reference, Str8LitComp("detailRange") },
				{ ValueType::Class_Reference, Str8LitComp("detailCodeableConcept") },
				{ ValueType::String, Str8LitComp("detailString") },
				{ ValueType::Boolean, Str8LitComp("detailBoolean") },
				{ ValueType::Class_Reference, Str8LitComp("detailInteger") },
				{ ValueType::Class_Reference, Str8LitComp("detailRatio") },
			}
		},
		{
			Str8LitComp("due_type"),
			Cardinality::OneToOne,
			ClassMemberType::Enum,
			88,
			4,
			{
				{ ValueType::Date, Str8LitComp("") },
				{ ValueType::Class_Reference, Str8LitComp("Duration") },
			}
		},
		{
			Str8LitComp("due"),
			Cardinality::ZeroToOne,
			ClassMemberType::Union,
			96,
			16,
			{
				{ ValueType::Date, Str8LitComp("dueDate") },
				{ ValueType::Class_Reference, Str8LitComp("dueDuration") },
			}
		}
	}
}
,{
	Str8Lit("GraphDefinition"),
	352,
	31,
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("GraphDefinition") },
			}
		},
		{
			Str8LitComp("id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("meta"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			24,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Meta") },
			}
		},
		{
			Str8LitComp("implicitRules"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			32,
			16,
			{
				{ ValueType::Uri, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("language"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			48,
			16,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("text"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			64,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Narrative") },
			}
		},
		{
			Str8LitComp("contained_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			72,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("contained"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			80,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Resource") },
			}
		},
		{
			Str8LitComp("extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			88,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			96,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			104,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			112,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("url"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			120,
			16,
			{
				{ ValueType::Uri, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("version"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			136,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("name"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			152,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("status"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			168,
			16,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("experimental"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			184,
			4,
			{
				{ ValueType::Boolean, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("date"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			192,
			16,
			{
				{ ValueType::DateTime, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("publisher"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			208,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("contact_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			224,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("contact"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			232,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("ContactDetail") },
			}
		},
		{
			Str8LitComp("description"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			240,
			16,
			{
				{ ValueType::Markdown, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("useContext_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			256,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("useContext"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			264,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("UsageContext") },
			}
		},
		{
			Str8LitComp("jurisdiction_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			272,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("jurisdiction"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			280,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("purpose"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			288,
			16,
			{
				{ ValueType::Markdown, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("start"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			304,
			16,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("profile"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			320,
			16,
			{
				{ ValueType::Canonical, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("link_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			336,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("link"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			344,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("GraphDefinition_Link") },
			}
		}
	}
}
,{
	Str8Lit("GraphDefinition_Link"),
	144,
	13,
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("GraphDefinition_Link") },
			}
		},
		{
			Str8LitComp("id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			24,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("path"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			56,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("sliceName"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			72,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("min"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			88,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Integer") },
			}
		},
		{
			Str8LitComp("max"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			96,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("description"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			112,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("target_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			128,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("target"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			136,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("GraphDefinition_Link_Target") },
			}
		}
	}
}
,{
	Str8Lit("GraphDefinition_Link_Target"),
	136,
	13,
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("GraphDefinition_Link_Target") },
			}
		},
		{
			Str8LitComp("id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			24,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("type"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			56,
			16,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("params"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			72,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("profile"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			88,
			16,
			{
				{ ValueType::Canonical, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("compartment_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			104,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("compartment"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			112,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("GraphDefinition_Link_Target_Compartment") },
			}
		},
		{
			Str8LitComp("link_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			120,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("link"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			128,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("GraphDefinition_Link") },
			}
		}
	}
}
,{
	Str8Lit("GraphDefinition_Link_Target_Compartment"),
	136,
	11,
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("GraphDefinition_Link_Target_Compartment") },
			}
		},
		{
			Str8LitComp("id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			24,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("use"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			56,
			16,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("code"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			72,
			16,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("rule"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			88,
			16,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("expression"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			104,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("description"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			120,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		}
	}
}
,{
	Str8Lit("Group"),
	240,
	25,
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("Group") },
			}
		},
		{
			Str8LitComp("id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("meta"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			24,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Meta") },
			}
		},
		{
			Str8LitComp("implicitRules"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			32,
			16,
			{
				{ ValueType::Uri, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("language"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			48,
			16,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("text"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			64,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Narrative") },
			}
		},
		{
			Str8LitComp("contained_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			72,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("contained"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			80,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Resource") },
			}
		},
		{
			Str8LitComp("extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			88,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			96,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			104,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			112,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("identifier_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			120,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("identifier"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			128,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Identifier") },
			}
		},
		{
			Str8LitComp("active"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			136,
			4,
			{
				{ ValueType::Boolean, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("type"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			144,
			16,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("actual"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			160,
			4,
			{
				{ ValueType::Boolean, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("code"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			168,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("name"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			176,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("quantity"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			192,
			8,
			{
				{ ValueType::UnsignedInt, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("managingEntity"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			200,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("characteristic_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			208,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("characteristic"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			216,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Group_Characteristic") },
			}
		},
		{
			Str8LitComp("member_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			224,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("member"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			232,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Group_Member") },
			}
		}
	}
}
,{
	Str8Lit("Group_Characteristic"),
	96,
	11,
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("Group_Characteristic") },
			}
		},
		{
			Str8LitComp("id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			24,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("code"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			56,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("value_type"),
			Cardinality::OneToOne,
			ClassMemberType::Enum,
			64,
			4,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
				{ ValueType::Boolean, Str8LitComp("") },
				{ ValueType::Class_Reference, Str8LitComp("Quantity") },
				{ ValueType::Class_Reference, Str8LitComp("Range") },
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("value"),
			Cardinality::OneToOne,
			ClassMemberType::Union,
			72,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("valueCodeableConcept") },
				{ ValueType::Boolean, Str8LitComp("valueBoolean") },
				{ ValueType::Class_Reference, Str8LitComp("valueQuantity") },
				{ ValueType::Class_Reference, Str8LitComp("valueRange") },
				{ ValueType::Class_Reference, Str8LitComp("valueReference") },
			}
		},
		{
			Str8LitComp("exclude"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			80,
			4,
			{
				{ ValueType::Boolean, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("period"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			88,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Period") },
			}
		}
	}
}
,{
	Str8Lit("Group_Member"),
	80,
	9,
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("Group_Member") },
			}
		},
		{
			Str8LitComp("id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			24,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("entity"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			56,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("period"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			64,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Period") },
			}
		},
		{
			Str8LitComp("inactive"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			72,
			4,
			{
				{ ValueType::Boolean, Str8LitComp("") },
			}
		}
	}
}
,{
	Str8Lit("GuidanceResponse"),
	320,
	34,
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("GuidanceResponse") },
			}
		},
		{
			Str8LitComp("id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("meta"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			24,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Meta") },
			}
		},
		{
			Str8LitComp("implicitRules"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			32,
			16,
			{
				{ ValueType::Uri, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("language"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			48,
			16,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("text"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			64,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Narrative") },
			}
		},
		{
			Str8LitComp("contained_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			72,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("contained"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			80,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Resource") },
			}
		},
		{
			Str8LitComp("extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			88,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			96,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			104,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			112,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("requestIdentifier"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			120,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Identifier") },
			}
		},
		{
			Str8LitComp("identifier_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			128,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("identifier"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			136,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Identifier") },
			}
		},
		{
			Str8LitComp("module_type"),
			Cardinality::OneToOne,
			ClassMemberType::Enum,
			144,
			4,
			{
				{ ValueType::Uri, Str8LitComp("") },
				{ ValueType::Canonical, Str8LitComp("") },
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("module"),
			Cardinality::OneToOne,
			ClassMemberType::Union,
			152,
			16,
			{
				{ ValueType::Uri, Str8LitComp("moduleUri") },
				{ ValueType::Canonical, Str8LitComp("moduleCanonical") },
				{ ValueType::Class_Reference, Str8LitComp("moduleCodeableConcept") },
			}
		},
		{
			Str8LitComp("status"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			168,
			16,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("subject"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			184,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("encounter"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			192,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("occurrenceDateTime"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			200,
			16,
			{
				{ ValueType::DateTime, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("performer"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			216,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("reasonCode_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			224,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("reasonCode"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			232,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("reasonReference_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			240,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("reasonReference"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			248,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("note_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			256,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("note"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			264,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Annotation") },
			}
		},
		{
			Str8LitComp("evaluationMessage_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			272,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("evaluationMessage"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			280,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("outputParameters"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			288,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("result"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			296,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("dataRequirement_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			304,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("dataRequirement"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			312,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("DataRequirement") },
			}
		}
	}
}
,{
	Str8Lit("HealthcareService"),
	472,
	52,
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("HealthcareService") },
			}
		},
		{
			Str8LitComp("id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("meta"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			24,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Meta") },
			}
		},
		{
			Str8LitComp("implicitRules"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			32,
			16,
			{
				{ ValueType::Uri, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("language"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			48,
			16,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("text"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			64,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Narrative") },
			}
		},
		{
			Str8LitComp("contained_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			72,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("contained"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			80,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Resource") },
			}
		},
		{
			Str8LitComp("extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			88,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			96,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			104,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			112,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("identifier_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			120,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("identifier"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			128,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Identifier") },
			}
		},
		{
			Str8LitComp("active"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			136,
			4,
			{
				{ ValueType::Boolean, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("providedBy"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			144,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("category_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			152,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("category"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			160,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("type_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			168,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("type"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			176,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("specialty_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			184,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("specialty"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			192,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("location_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			200,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("location"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			208,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("name"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			216,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("comment"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			232,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extraDetails"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			248,
			16,
			{
				{ ValueType::Markdown, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("photo"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			264,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Attachment") },
			}
		},
		{
			Str8LitComp("telecom_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			272,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("telecom"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			280,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("ContactPoint") },
			}
		},
		{
			Str8LitComp("coverageArea_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			288,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("coverageArea"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			296,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("serviceProvisionCode_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			304,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("serviceProvisionCode"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			312,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("eligibility_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			320,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("eligibility"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			328,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("HealthcareService_Eligibility") },
			}
		},
		{
			Str8LitComp("program_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			336,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("program"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			344,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("characteristic_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			352,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("characteristic"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			360,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("communication_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			368,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("communication"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			376,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("referralMethod_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			384,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("referralMethod"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			392,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("appointmentRequired"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			400,
			4,
			{
				{ ValueType::Boolean, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("availableTime_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			408,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("availableTime"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			416,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("HealthcareService_AvailableTime") },
			}
		},
		{
			Str8LitComp("notAvailable_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			424,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("notAvailable"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			432,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("HealthcareService_NotAvailable") },
			}
		},
		{
			Str8LitComp("availabilityExceptions"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			440,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("endpoint_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			456,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("endpoint"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			464,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		}
	}
}
,{
	Str8Lit("HealthcareService_Eligibility"),
	80,
	8,
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("HealthcareService_Eligibility") },
			}
		},
		{
			Str8LitComp("id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			24,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("code"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			56,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("comment"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			64,
			16,
			{
				{ ValueType::Markdown, Str8LitComp("") },
			}
		}
	}
}
,{
	Str8Lit("HealthcareService_AvailableTime"),
	112,
	11,
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("HealthcareService_AvailableTime") },
			}
		},
		{
			Str8LitComp("id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			24,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("daysOfWeek_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			56,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("daysOfWeek"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			64,
			8,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("allDay"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			72,
			4,
			{
				{ ValueType::Boolean, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("availableStartTime"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			80,
			16,
			{
				{ ValueType::Time, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("availableEndTime"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			96,
			16,
			{
				{ ValueType::Time, Str8LitComp("") },
			}
		}
	}
}
,{
	Str8Lit("HealthcareService_NotAvailable"),
	80,
	8,
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("HealthcareService_NotAvailable") },
			}
		},
		{
			Str8LitComp("id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			24,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("description"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			56,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("during"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			72,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Period") },
			}
		}
	}
}
,{
	Str8Lit("ImagingStudy"),
	384,
	42,
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("ImagingStudy") },
			}
		},
		{
			Str8LitComp("id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("meta"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			24,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Meta") },
			}
		},
		{
			Str8LitComp("implicitRules"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			32,
			16,
			{
				{ ValueType::Uri, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("language"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			48,
			16,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("text"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			64,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Narrative") },
			}
		},
		{
			Str8LitComp("contained_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			72,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("contained"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			80,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Resource") },
			}
		},
		{
			Str8LitComp("extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			88,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			96,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			104,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			112,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("identifier_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			120,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("identifier"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			128,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Identifier") },
			}
		},
		{
			Str8LitComp("status"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			136,
			16,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("modality_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			152,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("modality"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			160,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Coding") },
			}
		},
		{
			Str8LitComp("subject"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			168,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("encounter"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			176,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("started"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			184,
			16,
			{
				{ ValueType::DateTime, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("basedOn_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			200,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("basedOn"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			208,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("referrer"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			216,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("interpreter_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			224,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("interpreter"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			232,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("endpoint_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			240,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("endpoint"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			248,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("numberOfSeries"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			256,
			8,
			{
				{ ValueType::UnsignedInt, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("numberOfInstances"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			264,
			8,
			{
				{ ValueType::UnsignedInt, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("procedureReference"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			272,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("procedureCode_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			280,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("procedureCode"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			288,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("location"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			296,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("reasonCode_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			304,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("reasonCode"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			312,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("reasonReference_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			320,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("reasonReference"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			328,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("note_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			336,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("note"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			344,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Annotation") },
			}
		},
		{
			Str8LitComp("description"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			352,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("series_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			368,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("series"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			376,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("ImagingStudy_Series") },
			}
		}
	}
}
,{
	Str8Lit("ImagingStudy_Series"),
	208,
	22,
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("ImagingStudy_Series") },
			}
		},
		{
			Str8LitComp("id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			24,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("uid"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			56,
			16,
			{
				{ ValueType::Id, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("number"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			72,
			8,
			{
				{ ValueType::UnsignedInt, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("modality"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			80,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Coding") },
			}
		},
		{
			Str8LitComp("description"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			88,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("numberOfInstances"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			104,
			8,
			{
				{ ValueType::UnsignedInt, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("endpoint_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			112,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("endpoint"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			120,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("bodySite"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			128,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Coding") },
			}
		},
		{
			Str8LitComp("laterality"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			136,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Coding") },
			}
		},
		{
			Str8LitComp("specimen_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			144,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("specimen"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			152,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("started"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			160,
			16,
			{
				{ ValueType::DateTime, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("performer_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			176,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("performer"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			184,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("ImagingStudy_Series_Performer") },
			}
		},
		{
			Str8LitComp("instance_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			192,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("instance"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			200,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("ImagingStudy_Series_Instance") },
			}
		}
	}
}
,{
	Str8Lit("ImagingStudy_Series_Performer"),
	72,
	8,
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("ImagingStudy_Series_Performer") },
			}
		},
		{
			Str8LitComp("id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			24,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("function_"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			56,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("actor"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			64,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		}
	}
}
,{
	Str8Lit("ImagingStudy_Series_Instance"),
	104,
	10,
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("ImagingStudy_Series_Instance") },
			}
		},
		{
			Str8LitComp("id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			24,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("uid"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			56,
			16,
			{
				{ ValueType::Id, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("sopClass"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			72,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Coding") },
			}
		},
		{
			Str8LitComp("number"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			80,
			8,
			{
				{ ValueType::UnsignedInt, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("title"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			88,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		}
	}
}
,{
	Str8Lit("Immunization"),
	472,
	51,
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("Immunization") },
			}
		},
		{
			Str8LitComp("id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("meta"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			24,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Meta") },
			}
		},
		{
			Str8LitComp("implicitRules"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			32,
			16,
			{
				{ ValueType::Uri, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("language"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			48,
			16,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("text"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			64,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Narrative") },
			}
		},
		{
			Str8LitComp("contained_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			72,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("contained"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			80,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Resource") },
			}
		},
		{
			Str8LitComp("extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			88,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			96,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			104,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			112,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("identifier_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			120,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("identifier"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			128,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Identifier") },
			}
		},
		{
			Str8LitComp("status"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			136,
			16,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("statusReason"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			152,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("vaccineCode"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			160,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("patient"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			168,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("encounter"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			176,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("occurrence_type"),
			Cardinality::OneToOne,
			ClassMemberType::Enum,
			184,
			4,
			{
				{ ValueType::DateTime, Str8LitComp("") },
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("occurrence"),
			Cardinality::OneToOne,
			ClassMemberType::Union,
			192,
			16,
			{
				{ ValueType::DateTime, Str8LitComp("occurrenceDateTime") },
				{ ValueType::String, Str8LitComp("occurrenceString") },
			}
		},
		{
			Str8LitComp("recorded"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			208,
			16,
			{
				{ ValueType::DateTime, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("primarySource"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			224,
			4,
			{
				{ ValueType::Boolean, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("reportOrigin"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			232,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("location"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			240,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("manufacturer"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			248,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("lotNumber"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			256,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("expirationDate"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			272,
			16,
			{
				{ ValueType::Date, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("site"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			288,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("route"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			296,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("doseQuantity"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			304,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Quantity") },
			}
		},
		{
			Str8LitComp("performer_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			312,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("performer"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			320,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Immunization_Performer") },
			}
		},
		{
			Str8LitComp("note_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			328,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("note"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			336,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Annotation") },
			}
		},
		{
			Str8LitComp("reasonCode_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			344,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("reasonCode"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			352,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("reasonReference_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			360,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("reasonReference"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			368,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("isSubpotent"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			376,
			4,
			{
				{ ValueType::Boolean, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("subpotentReason_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			384,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("subpotentReason"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			392,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("education_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			400,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("education"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			408,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Immunization_Education") },
			}
		},
		{
			Str8LitComp("programEligibility_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			416,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("programEligibility"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			424,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("fundingSource"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			432,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("reaction_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			440,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("reaction"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			448,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Immunization_Reaction") },
			}
		},
		{
			Str8LitComp("protocolApplied_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			456,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("protocolApplied"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			464,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Immunization_ProtocolApplied") },
			}
		}
	}
}
,{
	Str8Lit("Immunization_Performer"),
	72,
	8,
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("Immunization_Performer") },
			}
		},
		{
			Str8LitComp("id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			24,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("function_"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			56,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("actor"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			64,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		}
	}
}
,{
	Str8Lit("Immunization_Education"),
	120,
	10,
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("Immunization_Education") },
			}
		},
		{
			Str8LitComp("id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			24,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("documentType"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			56,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("reference"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			72,
			16,
			{
				{ ValueType::Uri, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("publicationDate"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			88,
			16,
			{
				{ ValueType::DateTime, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("presentationDate"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			104,
			16,
			{
				{ ValueType::DateTime, Str8LitComp("") },
			}
		}
	}
}
,{
	Str8Lit("Immunization_Reaction"),
	88,
	9,
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("Immunization_Reaction") },
			}
		},
		{
			Str8LitComp("id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			24,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("date"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			56,
			16,
			{
				{ ValueType::DateTime, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("detail"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			72,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("reported"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			80,
			4,
			{
				{ ValueType::Boolean, Str8LitComp("") },
			}
		}
	}
}
,{
	Str8Lit("Immunization_ProtocolApplied"),
	144,
	14,
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("Immunization_ProtocolApplied") },
			}
		},
		{
			Str8LitComp("id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			24,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("series"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			56,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("authority"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			72,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("targetDisease_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			80,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("targetDisease"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			88,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("doseNumber_type"),
			Cardinality::OneToOne,
			ClassMemberType::Enum,
			96,
			4,
			{
				{ ValueType::PositiveInt, Str8LitComp("") },
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("doseNumber"),
			Cardinality::OneToOne,
			ClassMemberType::Union,
			104,
			16,
			{
				{ ValueType::PositiveInt, Str8LitComp("doseNumberPositiveInt") },
				{ ValueType::String, Str8LitComp("doseNumberString") },
			}
		},
		{
			Str8LitComp("seriesDoses_type"),
			Cardinality::OneToOne,
			ClassMemberType::Enum,
			120,
			4,
			{
				{ ValueType::PositiveInt, Str8LitComp("") },
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("seriesDoses"),
			Cardinality::ZeroToOne,
			ClassMemberType::Union,
			128,
			16,
			{
				{ ValueType::PositiveInt, Str8LitComp("seriesDosesPositiveInt") },
				{ ValueType::String, Str8LitComp("seriesDosesString") },
			}
		}
	}
}
,{
	Str8Lit("ImmunizationEvaluation"),
	304,
	29,
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("ImmunizationEvaluation") },
			}
		},
		{
			Str8LitComp("id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("meta"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			24,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Meta") },
			}
		},
		{
			Str8LitComp("implicitRules"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			32,
			16,
			{
				{ ValueType::Uri, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("language"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			48,
			16,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("text"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			64,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Narrative") },
			}
		},
		{
			Str8LitComp("contained_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			72,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("contained"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			80,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Resource") },
			}
		},
		{
			Str8LitComp("extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			88,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			96,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			104,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			112,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("identifier_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			120,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("identifier"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			128,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Identifier") },
			}
		},
		{
			Str8LitComp("status"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			136,
			16,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("patient"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			152,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("date"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			160,
			16,
			{
				{ ValueType::DateTime, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("authority"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			176,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("targetDisease"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			184,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("immunizationEvent"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			192,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("doseStatus"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			200,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("doseStatusReason_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			208,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("doseStatusReason"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			216,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("description"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			224,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("series"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			240,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("doseNumber_type"),
			Cardinality::OneToOne,
			ClassMemberType::Enum,
			256,
			4,
			{
				{ ValueType::PositiveInt, Str8LitComp("") },
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("doseNumber"),
			Cardinality::ZeroToOne,
			ClassMemberType::Union,
			264,
			16,
			{
				{ ValueType::PositiveInt, Str8LitComp("doseNumberPositiveInt") },
				{ ValueType::String, Str8LitComp("doseNumberString") },
			}
		},
		{
			Str8LitComp("seriesDoses_type"),
			Cardinality::OneToOne,
			ClassMemberType::Enum,
			280,
			4,
			{
				{ ValueType::PositiveInt, Str8LitComp("") },
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("seriesDoses"),
			Cardinality::ZeroToOne,
			ClassMemberType::Union,
			288,
			16,
			{
				{ ValueType::PositiveInt, Str8LitComp("seriesDosesPositiveInt") },
				{ ValueType::String, Str8LitComp("seriesDosesString") },
			}
		}
	}
}
,{
	Str8Lit("ImmunizationRecommendation"),
	184,
	19,
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("ImmunizationRecommendation") },
			}
		},
		{
			Str8LitComp("id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("meta"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			24,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Meta") },
			}
		},
		{
			Str8LitComp("implicitRules"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			32,
			16,
			{
				{ ValueType::Uri, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("language"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			48,
			16,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("text"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			64,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Narrative") },
			}
		},
		{
			Str8LitComp("contained_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			72,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("contained"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			80,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Resource") },
			}
		},
		{
			Str8LitComp("extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			88,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			96,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			104,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			112,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("identifier_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			120,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("identifier"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			128,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Identifier") },
			}
		},
		{
			Str8LitComp("patient"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			136,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("date"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			144,
			16,
			{
				{ ValueType::DateTime, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("authority"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			160,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("recommendation_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			168,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("recommendation"),
			Cardinality::OneToInf,
			ClassMemberType::Single,
			176,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("ImmunizationRecommendation_Recommendation") },
			}
		}
	}
}
,{
	Str8Lit("ImmunizationRecommendation_Recommendation"),
	248,
	26,
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("ImmunizationRecommendation_Recommendation") },
			}
		},
		{
			Str8LitComp("id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			24,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("vaccineCode_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			56,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("vaccineCode"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			64,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("targetDisease"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			72,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("contraindicatedVaccineCode_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			80,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("contraindicatedVaccineCode"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			88,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("forecastStatus"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			96,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("forecastReason_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			104,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("forecastReason"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			112,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("dateCriterion_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			120,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("dateCriterion"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			128,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("ImmunizationRecommendation_Recommendation_DateCriterion") },
			}
		},
		{
			Str8LitComp("description"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			136,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("series"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			152,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("doseNumber_type"),
			Cardinality::OneToOne,
			ClassMemberType::Enum,
			168,
			4,
			{
				{ ValueType::PositiveInt, Str8LitComp("") },
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("doseNumber"),
			Cardinality::ZeroToOne,
			ClassMemberType::Union,
			176,
			16,
			{
				{ ValueType::PositiveInt, Str8LitComp("doseNumberPositiveInt") },
				{ ValueType::String, Str8LitComp("doseNumberString") },
			}
		},
		{
			Str8LitComp("seriesDoses_type"),
			Cardinality::OneToOne,
			ClassMemberType::Enum,
			192,
			4,
			{
				{ ValueType::PositiveInt, Str8LitComp("") },
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("seriesDoses"),
			Cardinality::ZeroToOne,
			ClassMemberType::Union,
			200,
			16,
			{
				{ ValueType::PositiveInt, Str8LitComp("seriesDosesPositiveInt") },
				{ ValueType::String, Str8LitComp("seriesDosesString") },
			}
		},
		{
			Str8LitComp("supportingImmunization_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			216,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("supportingImmunization"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			224,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("supportingPatientInformation_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			232,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("supportingPatientInformation"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			240,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		}
	}
}
,{
	Str8Lit("ImmunizationRecommendation_Recommendation_DateCriterion"),
	80,
	8,
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("ImmunizationRecommendation_Recommendation_DateCriterion") },
			}
		},
		{
			Str8LitComp("id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			24,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("code"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			56,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("value"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			64,
			16,
			{
				{ ValueType::DateTime, Str8LitComp("") },
			}
		}
	}
}
,{
	Str8Lit("ImplementationGuide"),
	416,
	38,
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("ImplementationGuide") },
			}
		},
		{
			Str8LitComp("id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("meta"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			24,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Meta") },
			}
		},
		{
			Str8LitComp("implicitRules"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			32,
			16,
			{
				{ ValueType::Uri, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("language"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			48,
			16,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("text"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			64,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Narrative") },
			}
		},
		{
			Str8LitComp("contained_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			72,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("contained"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			80,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Resource") },
			}
		},
		{
			Str8LitComp("extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			88,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			96,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			104,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			112,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("url"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			120,
			16,
			{
				{ ValueType::Uri, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("version"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			136,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("name"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			152,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("title"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			168,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("status"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			184,
			16,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("experimental"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			200,
			4,
			{
				{ ValueType::Boolean, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("date"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			208,
			16,
			{
				{ ValueType::DateTime, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("publisher"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			224,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("contact_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			240,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("contact"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			248,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("ContactDetail") },
			}
		},
		{
			Str8LitComp("description"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			256,
			16,
			{
				{ ValueType::Markdown, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("useContext_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			272,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("useContext"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			280,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("UsageContext") },
			}
		},
		{
			Str8LitComp("jurisdiction_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			288,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("jurisdiction"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			296,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("copyright"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			304,
			16,
			{
				{ ValueType::Markdown, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("packageId"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			320,
			16,
			{
				{ ValueType::Id, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("license"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			336,
			16,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("fhirVersion_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			352,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("fhirVersion"),
			Cardinality::OneToInf,
			ClassMemberType::Single,
			360,
			8,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("dependsOn_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			368,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("dependsOn"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			376,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("ImplementationGuide_DependsOn") },
			}
		},
		{
			Str8LitComp("global__count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			384,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("global_"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			392,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("ImplementationGuide_Global") },
			}
		},
		{
			Str8LitComp("definition"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			400,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("ImplementationGuide_Definition") },
			}
		},
		{
			Str8LitComp("manifest"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			408,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("ImplementationGuide_Manifest") },
			}
		}
	}
}
,{
	Str8Lit("ImplementationGuide_DependsOn"),
	104,
	9,
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("ImplementationGuide_DependsOn") },
			}
		},
		{
			Str8LitComp("id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			24,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("uri"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			56,
			16,
			{
				{ ValueType::Canonical, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("packageId"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			72,
			16,
			{
				{ ValueType::Id, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("version"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			88,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		}
	}
}
,{
	Str8Lit("ImplementationGuide_Global"),
	88,
	8,
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("ImplementationGuide_Global") },
			}
		},
		{
			Str8LitComp("id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			24,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("type"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			56,
			16,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("profile"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			72,
			16,
			{
				{ ValueType::Canonical, Str8LitComp("") },
			}
		}
	}
}
,{
	Str8Lit("ImplementationGuide_Definition"),
	128,
	15,
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("ImplementationGuide_Definition") },
			}
		},
		{
			Str8LitComp("id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			24,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("grouping_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			56,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("grouping"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			64,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("ImplementationGuide_Definition_Grouping") },
			}
		},
		{
			Str8LitComp("resource_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			72,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("resource"),
			Cardinality::OneToInf,
			ClassMemberType::Single,
			80,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("ImplementationGuide_Definition_Resource") },
			}
		},
		{
			Str8LitComp("page"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			88,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("ImplementationGuide_Definition_Page") },
			}
		},
		{
			Str8LitComp("parameter_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			96,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("parameter"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			104,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("ImplementationGuide_Definition_Parameter") },
			}
		},
		{
			Str8LitComp("template__count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			112,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("template_"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			120,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("ImplementationGuide_Definition_Template") },
			}
		}
	}
}
,{
	Str8Lit("ImplementationGuide_Definition_Grouping"),
	88,
	8,
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("ImplementationGuide_Definition_Grouping") },
			}
		},
		{
			Str8LitComp("id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			24,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("name"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			56,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("description"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			72,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		}
	}
}
,{
	Str8Lit("ImplementationGuide_Definition_Resource"),
	152,
	14,
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("ImplementationGuide_Definition_Resource") },
			}
		},
		{
			Str8LitComp("id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			24,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("reference"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			56,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("fhirVersion_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			64,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("fhirVersion"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			72,
			8,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("name"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			80,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("description"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			96,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("example_type"),
			Cardinality::OneToOne,
			ClassMemberType::Enum,
			112,
			4,
			{
				{ ValueType::Boolean, Str8LitComp("") },
				{ ValueType::Canonical, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("example"),
			Cardinality::ZeroToOne,
			ClassMemberType::Union,
			120,
			16,
			{
				{ ValueType::Boolean, Str8LitComp("exampleBoolean") },
				{ ValueType::Canonical, Str8LitComp("exampleCanonical") },
			}
		},
		{
			Str8LitComp("groupingId"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			136,
			16,
			{
				{ ValueType::Id, Str8LitComp("") },
			}
		}
	}
}
,{
	Str8Lit("ImplementationGuide_Definition_Page"),
	128,
	12,
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("ImplementationGuide_Definition_Page") },
			}
		},
		{
			Str8LitComp("id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			24,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("name_type"),
			Cardinality::OneToOne,
			ClassMemberType::Enum,
			56,
			4,
			{
				{ ValueType::Url, Str8LitComp("") },
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("name"),
			Cardinality::OneToOne,
			ClassMemberType::Union,
			64,
			16,
			{
				{ ValueType::Url, Str8LitComp("nameUrl") },
				{ ValueType::Class_Reference, Str8LitComp("nameReference") },
			}
		},
		{
			Str8LitComp("title"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			80,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("generation"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			96,
			16,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("page_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			112,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("page"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			120,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("ImplementationGuide_Definition_Page") },
			}
		}
	}
}
,{
	Str8Lit("ImplementationGuide_Definition_Parameter"),
	88,
	8,
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("ImplementationGuide_Definition_Parameter") },
			}
		},
		{
			Str8LitComp("id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			24,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("code"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			56,
			16,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("value"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			72,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		}
	}
}
,{
	Str8Lit("ImplementationGuide_Definition_Template"),
	104,
	9,
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("ImplementationGuide_Definition_Template") },
			}
		},
		{
			Str8LitComp("id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			24,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("code"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			56,
			16,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("source"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			72,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("scope"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			88,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		}
	}
}
,{
	Str8Lit("ImplementationGuide_Manifest"),
	136,
	15,
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("ImplementationGuide_Manifest") },
			}
		},
		{
			Str8LitComp("id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			24,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("rendering"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			56,
			16,
			{
				{ ValueType::Url, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("resource_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			72,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("resource"),
			Cardinality::OneToInf,
			ClassMemberType::Single,
			80,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("ImplementationGuide_Manifest_Resource") },
			}
		},
		{
			Str8LitComp("page_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			88,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("page"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			96,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("ImplementationGuide_Manifest_Page") },
			}
		},
		{
			Str8LitComp("image_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			104,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("image"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			112,
			8,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("other_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			120,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("other"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			128,
			8,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		}
	}
}
,{
	Str8Lit("ImplementationGuide_Manifest_Resource"),
	104,
	10,
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("ImplementationGuide_Manifest_Resource") },
			}
		},
		{
			Str8LitComp("id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			24,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("reference"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			56,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("example_type"),
			Cardinality::OneToOne,
			ClassMemberType::Enum,
			64,
			4,
			{
				{ ValueType::Boolean, Str8LitComp("") },
				{ ValueType::Canonical, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("example"),
			Cardinality::ZeroToOne,
			ClassMemberType::Union,
			72,
			16,
			{
				{ ValueType::Boolean, Str8LitComp("exampleBoolean") },
				{ ValueType::Canonical, Str8LitComp("exampleCanonical") },
			}
		},
		{
			Str8LitComp("relativePath"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			88,
			16,
			{
				{ ValueType::Url, Str8LitComp("") },
			}
		}
	}
}
,{
	Str8Lit("ImplementationGuide_Manifest_Page"),
	104,
	10,
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("ImplementationGuide_Manifest_Page") },
			}
		},
		{
			Str8LitComp("id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			24,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("name"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			56,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("title"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			72,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("anchor_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			88,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("anchor"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			96,
			8,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		}
	}
}
,{
	Str8Lit("InsurancePlan"),
	320,
	35,
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("InsurancePlan") },
			}
		},
		{
			Str8LitComp("id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("meta"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			24,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Meta") },
			}
		},
		{
			Str8LitComp("implicitRules"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			32,
			16,
			{
				{ ValueType::Uri, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("language"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			48,
			16,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("text"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			64,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Narrative") },
			}
		},
		{
			Str8LitComp("contained_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			72,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("contained"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			80,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Resource") },
			}
		},
		{
			Str8LitComp("extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			88,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			96,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			104,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			112,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("identifier_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			120,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("identifier"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			128,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Identifier") },
			}
		},
		{
			Str8LitComp("status"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			136,
			16,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("type_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			152,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("type"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			160,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("name"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			168,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("alias_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			184,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("alias"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			192,
			8,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("period"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			200,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Period") },
			}
		},
		{
			Str8LitComp("ownedBy"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			208,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("administeredBy"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			216,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("coverageArea_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			224,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("coverageArea"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			232,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("contact_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			240,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("contact"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			248,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("InsurancePlan_Contact") },
			}
		},
		{
			Str8LitComp("endpoint_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			256,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("endpoint"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			264,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("network_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			272,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("network"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			280,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("coverage_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			288,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("coverage"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			296,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("InsurancePlan_Coverage") },
			}
		},
		{
			Str8LitComp("plan_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			304,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("plan"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			312,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("InsurancePlan_Plan") },
			}
		}
	}
}
,{
	Str8Lit("InsurancePlan_Contact"),
	96,
	11,
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("InsurancePlan_Contact") },
			}
		},
		{
			Str8LitComp("id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			24,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("purpose"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			56,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("name"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			64,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("HumanName") },
			}
		},
		{
			Str8LitComp("telecom_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			72,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("telecom"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			80,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("ContactPoint") },
			}
		},
		{
			Str8LitComp("address"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			88,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Address") },
			}
		}
	}
}
,{
	Str8Lit("InsurancePlan_Coverage"),
	96,
	11,
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("InsurancePlan_Coverage") },
			}
		},
		{
			Str8LitComp("id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			24,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("type"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			56,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("network_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			64,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("network"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			72,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("benefit_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			80,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("benefit"),
			Cardinality::OneToInf,
			ClassMemberType::Single,
			88,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("InsurancePlan_Coverage_Benefit") },
			}
		}
	}
}
,{
	Str8Lit("InsurancePlan_Coverage_Benefit"),
	96,
	10,
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("InsurancePlan_Coverage_Benefit") },
			}
		},
		{
			Str8LitComp("id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			24,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("type"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			56,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("requirement"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			64,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("limit_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			80,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("limit"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			88,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("InsurancePlan_Coverage_Benefit_Limit") },
			}
		}
	}
}
,{
	Str8Lit("InsurancePlan_Coverage_Benefit_Limit"),
	72,
	8,
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("InsurancePlan_Coverage_Benefit_Limit") },
			}
		},
		{
			Str8LitComp("id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			24,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("value"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			56,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Quantity") },
			}
		},
		{
			Str8LitComp("code"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			64,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		}
	}
}
,{
	Str8Lit("InsurancePlan_Plan"),
	144,
	17,
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("InsurancePlan_Plan") },
			}
		},
		{
			Str8LitComp("id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			24,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("identifier_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			56,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("identifier"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			64,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Identifier") },
			}
		},
		{
			Str8LitComp("type"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			72,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("coverageArea_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			80,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("coverageArea"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			88,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("network_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			96,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("network"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			104,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("generalCost_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			112,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("generalCost"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			120,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("InsurancePlan_Plan_GeneralCost") },
			}
		},
		{
			Str8LitComp("specificCost_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			128,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("specificCost"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			136,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("InsurancePlan_Plan_SpecificCost") },
			}
		}
	}
}
,{
	Str8Lit("InsurancePlan_Plan_GeneralCost"),
	96,
	10,
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("InsurancePlan_Plan_GeneralCost") },
			}
		},
		{
			Str8LitComp("id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			24,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("type"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			56,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("groupSize"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			64,
			8,
			{
				{ ValueType::PositiveInt, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("cost"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			72,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Money") },
			}
		},
		{
			Str8LitComp("comment"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			80,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		}
	}
}
,{
	Str8Lit("InsurancePlan_Plan_SpecificCost"),
	80,
	9,
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("InsurancePlan_Plan_SpecificCost") },
			}
		},
		{
			Str8LitComp("id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			24,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("category"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			56,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("benefit_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			64,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("benefit"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			72,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("InsurancePlan_Plan_SpecificCost_Benefit") },
			}
		}
	}
}
,{
	Str8Lit("InsurancePlan_Plan_SpecificCost_Benefit"),
	80,
	9,
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("InsurancePlan_Plan_SpecificCost_Benefit") },
			}
		},
		{
			Str8LitComp("id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			24,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("type"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			56,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("cost_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			64,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("cost"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			72,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("InsurancePlan_Plan_SpecificCost_Benefit_Cost") },
			}
		}
	}
}
,{
	Str8Lit("InsurancePlan_Plan_SpecificCost_Benefit_Cost"),
	96,
	11,
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("InsurancePlan_Plan_SpecificCost_Benefit_Cost") },
			}
		},
		{
			Str8LitComp("id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			24,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("type"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			56,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("applicability"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			64,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("qualifiers_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			72,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("qualifiers"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			80,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("value"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			88,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Quantity") },
			}
		}
	}
}
,{
	Str8Lit("Invoice"),
	320,
	33,
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("Invoice") },
			}
		},
		{
			Str8LitComp("id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("meta"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			24,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Meta") },
			}
		},
		{
			Str8LitComp("implicitRules"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			32,
			16,
			{
				{ ValueType::Uri, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("language"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			48,
			16,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("text"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			64,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Narrative") },
			}
		},
		{
			Str8LitComp("contained_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			72,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("contained"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			80,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Resource") },
			}
		},
		{
			Str8LitComp("extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			88,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			96,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			104,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			112,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("identifier_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			120,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("identifier"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			128,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Identifier") },
			}
		},
		{
			Str8LitComp("status"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			136,
			16,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("cancelledReason"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			152,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("type"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			168,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("subject"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			176,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("recipient"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			184,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("date"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			192,
			16,
			{
				{ ValueType::DateTime, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("participant_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			208,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("participant"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			216,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Invoice_Participant") },
			}
		},
		{
			Str8LitComp("issuer"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			224,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("account"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			232,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("lineItem_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			240,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("lineItem"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			248,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Invoice_LineItem") },
			}
		},
		{
			Str8LitComp("totalPriceComponent_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			256,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("totalPriceComponent"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			264,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Invoice_LineItem_PriceComponent") },
			}
		},
		{
			Str8LitComp("totalNet"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			272,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Money") },
			}
		},
		{
			Str8LitComp("totalGross"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			280,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Money") },
			}
		},
		{
			Str8LitComp("paymentTerms"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			288,
			16,
			{
				{ ValueType::Markdown, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("note_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			304,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("note"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			312,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Annotation") },
			}
		}
	}
}
,{
	Str8Lit("Invoice_Participant"),
	72,
	8,
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("Invoice_Participant") },
			}
		},
		{
			Str8LitComp("id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			24,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("role"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			56,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("actor"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			64,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		}
	}
}
,{
	Str8Lit("Invoice_LineItem"),
	96,
	11,
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("Invoice_LineItem") },
			}
		},
		{
			Str8LitComp("id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			24,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("sequence"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			56,
			8,
			{
				{ ValueType::PositiveInt, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("chargeItem_type"),
			Cardinality::OneToOne,
			ClassMemberType::Enum,
			64,
			4,
			{
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("chargeItem"),
			Cardinality::OneToOne,
			ClassMemberType::Union,
			72,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("chargeItemReference") },
				{ ValueType::Class_Reference, Str8LitComp("chargeItemCodeableConcept") },
			}
		},
		{
			Str8LitComp("priceComponent_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			80,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("priceComponent"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			88,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Invoice_LineItem_PriceComponent") },
			}
		}
	}
}
,{
	Str8Lit("Invoice_LineItem_PriceComponent"),
	96,
	10,
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("Invoice_LineItem_PriceComponent") },
			}
		},
		{
			Str8LitComp("id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			24,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("type"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			56,
			16,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("code"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			72,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("factor"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			80,
			8,
			{
				{ ValueType::Decimal, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("amount"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			88,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Money") },
			}
		}
	}
}
,{
	Str8Lit("Library"),
	592,
	57,
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("Library") },
			}
		},
		{
			Str8LitComp("id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("meta"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			24,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Meta") },
			}
		},
		{
			Str8LitComp("implicitRules"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			32,
			16,
			{
				{ ValueType::Uri, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("language"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			48,
			16,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("text"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			64,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Narrative") },
			}
		},
		{
			Str8LitComp("contained_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			72,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("contained"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			80,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Resource") },
			}
		},
		{
			Str8LitComp("extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			88,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			96,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			104,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			112,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("url"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			120,
			16,
			{
				{ ValueType::Uri, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("identifier_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			136,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("identifier"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			144,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Identifier") },
			}
		},
		{
			Str8LitComp("version"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			152,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("name"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			168,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("title"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			184,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("subtitle"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			200,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("status"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			216,
			16,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("experimental"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			232,
			4,
			{
				{ ValueType::Boolean, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("type"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			240,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("subject_type"),
			Cardinality::OneToOne,
			ClassMemberType::Enum,
			248,
			4,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("subject"),
			Cardinality::ZeroToOne,
			ClassMemberType::Union,
			256,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("subjectCodeableConcept") },
				{ ValueType::Class_Reference, Str8LitComp("subjectReference") },
			}
		},
		{
			Str8LitComp("date"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			264,
			16,
			{
				{ ValueType::DateTime, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("publisher"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			280,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("contact_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			296,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("contact"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			304,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("ContactDetail") },
			}
		},
		{
			Str8LitComp("description"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			312,
			16,
			{
				{ ValueType::Markdown, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("useContext_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			328,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("useContext"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			336,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("UsageContext") },
			}
		},
		{
			Str8LitComp("jurisdiction_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			344,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("jurisdiction"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			352,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("purpose"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			360,
			16,
			{
				{ ValueType::Markdown, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("usage"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			376,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("copyright"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			392,
			16,
			{
				{ ValueType::Markdown, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("approvalDate"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			408,
			16,
			{
				{ ValueType::Date, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("lastReviewDate"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			424,
			16,
			{
				{ ValueType::Date, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("effectivePeriod"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			440,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Period") },
			}
		},
		{
			Str8LitComp("topic_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			448,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("topic"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			456,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("author_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			464,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("author"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			472,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("ContactDetail") },
			}
		},
		{
			Str8LitComp("editor_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			480,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("editor"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			488,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("ContactDetail") },
			}
		},
		{
			Str8LitComp("reviewer_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			496,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("reviewer"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			504,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("ContactDetail") },
			}
		},
		{
			Str8LitComp("endorser_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			512,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("endorser"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			520,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("ContactDetail") },
			}
		},
		{
			Str8LitComp("relatedArtifact_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			528,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("relatedArtifact"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			536,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("RelatedArtifact") },
			}
		},
		{
			Str8LitComp("parameter_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			544,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("parameter"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			552,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("ParameterDefinition") },
			}
		},
		{
			Str8LitComp("dataRequirement_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			560,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("dataRequirement"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			568,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("DataRequirement") },
			}
		},
		{
			Str8LitComp("content_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			576,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("content"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			584,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Attachment") },
			}
		}
	}
}
,{
	Str8Lit("Linkage"),
	152,
	16,
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("Linkage") },
			}
		},
		{
			Str8LitComp("id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("meta"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			24,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Meta") },
			}
		},
		{
			Str8LitComp("implicitRules"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			32,
			16,
			{
				{ ValueType::Uri, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("language"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			48,
			16,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("text"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			64,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Narrative") },
			}
		},
		{
			Str8LitComp("contained_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			72,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("contained"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			80,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Resource") },
			}
		},
		{
			Str8LitComp("extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			88,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			96,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			104,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			112,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("active"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			120,
			4,
			{
				{ ValueType::Boolean, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("author"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			128,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("item_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			136,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("item"),
			Cardinality::OneToInf,
			ClassMemberType::Single,
			144,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Linkage_Item") },
			}
		}
	}
}
,{
	Str8Lit("Linkage_Item"),
	80,
	8,
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("Linkage_Item") },
			}
		},
		{
			Str8LitComp("id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			24,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("type"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			56,
			16,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("resource"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			72,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		}
	}
}
,{
	Str8Lit("List"),
	280,
	28,
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("List") },
			}
		},
		{
			Str8LitComp("id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("meta"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			24,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Meta") },
			}
		},
		{
			Str8LitComp("implicitRules"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			32,
			16,
			{
				{ ValueType::Uri, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("language"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			48,
			16,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("text"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			64,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Narrative") },
			}
		},
		{
			Str8LitComp("contained_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			72,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("contained"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			80,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Resource") },
			}
		},
		{
			Str8LitComp("extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			88,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			96,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			104,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			112,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("identifier_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			120,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("identifier"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			128,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Identifier") },
			}
		},
		{
			Str8LitComp("status"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			136,
			16,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("mode"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			152,
			16,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("title"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			168,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("code"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			184,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("subject"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			192,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("encounter"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			200,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("date"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			208,
			16,
			{
				{ ValueType::DateTime, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("source"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			224,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("orderedBy"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			232,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("note_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			240,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("note"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			248,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Annotation") },
			}
		},
		{
			Str8LitComp("entry_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			256,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("entry"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			264,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("List_Entry") },
			}
		},
		{
			Str8LitComp("emptyReason"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			272,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		}
	}
}
,{
	Str8Lit("List_Entry"),
	96,
	10,
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("List_Entry") },
			}
		},
		{
			Str8LitComp("id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			24,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("flag"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			56,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("deleted"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			64,
			4,
			{
				{ ValueType::Boolean, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("date"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			72,
			16,
			{
				{ ValueType::DateTime, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("item"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			88,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		}
	}
}
,{
	Str8Lit("Location"),
	344,
	35,
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("Location") },
			}
		},
		{
			Str8LitComp("id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("meta"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			24,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Meta") },
			}
		},
		{
			Str8LitComp("implicitRules"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			32,
			16,
			{
				{ ValueType::Uri, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("language"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			48,
			16,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("text"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			64,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Narrative") },
			}
		},
		{
			Str8LitComp("contained_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			72,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("contained"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			80,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Resource") },
			}
		},
		{
			Str8LitComp("extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			88,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			96,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			104,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			112,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("identifier_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			120,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("identifier"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			128,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Identifier") },
			}
		},
		{
			Str8LitComp("status"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			136,
			16,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("operationalStatus"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			152,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Coding") },
			}
		},
		{
			Str8LitComp("name"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			160,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("alias_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			176,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("alias"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			184,
			8,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("description"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			192,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("mode"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			208,
			16,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("type_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			224,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("type"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			232,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("telecom_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			240,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("telecom"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			248,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("ContactPoint") },
			}
		},
		{
			Str8LitComp("address"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			256,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Address") },
			}
		},
		{
			Str8LitComp("physicalType"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			264,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("position"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			272,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Location_Position") },
			}
		},
		{
			Str8LitComp("managingOrganization"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			280,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("partOf"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			288,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("hoursOfOperation_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			296,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("hoursOfOperation"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			304,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Location_HoursOfOperation") },
			}
		},
		{
			Str8LitComp("availabilityExceptions"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			312,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("endpoint_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			328,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("endpoint"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			336,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		}
	}
}
,{
	Str8Lit("Location_Position"),
	80,
	9,
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("Location_Position") },
			}
		},
		{
			Str8LitComp("id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			24,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("longitude"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			56,
			8,
			{
				{ ValueType::Decimal, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("latitude"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			64,
			8,
			{
				{ ValueType::Decimal, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("altitude"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			72,
			8,
			{
				{ ValueType::Decimal, Str8LitComp("") },
			}
		}
	}
}
,{
	Str8Lit("Location_HoursOfOperation"),
	112,
	11,
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("Location_HoursOfOperation") },
			}
		},
		{
			Str8LitComp("id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			24,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("daysOfWeek_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			56,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("daysOfWeek"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			64,
			8,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("allDay"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			72,
			4,
			{
				{ ValueType::Boolean, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("openingTime"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			80,
			16,
			{
				{ ValueType::Time, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("closingTime"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			96,
			16,
			{
				{ ValueType::Time, Str8LitComp("") },
			}
		}
	}
}
,{
	Str8Lit("Measure"),
	728,
	69,
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("Measure") },
			}
		},
		{
			Str8LitComp("id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("meta"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			24,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Meta") },
			}
		},
		{
			Str8LitComp("implicitRules"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			32,
			16,
			{
				{ ValueType::Uri, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("language"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			48,
			16,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("text"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			64,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Narrative") },
			}
		},
		{
			Str8LitComp("contained_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			72,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("contained"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			80,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Resource") },
			}
		},
		{
			Str8LitComp("extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			88,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			96,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			104,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			112,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("url"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			120,
			16,
			{
				{ ValueType::Uri, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("identifier_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			136,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("identifier"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			144,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Identifier") },
			}
		},
		{
			Str8LitComp("version"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			152,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("name"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			168,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("title"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			184,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("subtitle"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			200,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("status"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			216,
			16,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("experimental"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			232,
			4,
			{
				{ ValueType::Boolean, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("subject_type"),
			Cardinality::OneToOne,
			ClassMemberType::Enum,
			236,
			4,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
				{ ValueType::Class_Reference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("subject"),
			Cardinality::ZeroToOne,
			ClassMemberType::Union,
			240,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("subjectCodeableConcept") },
				{ ValueType::Class_Reference, Str8LitComp("subjectReference") },
			}
		},
		{
			Str8LitComp("date"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			248,
			16,
			{
				{ ValueType::DateTime, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("publisher"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			264,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("contact_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			280,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("contact"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			288,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("ContactDetail") },
			}
		},
		{
			Str8LitComp("description"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			296,
			16,
			{
				{ ValueType::Markdown, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("useContext_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			312,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("useContext"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			320,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("UsageContext") },
			}
		},
		{
			Str8LitComp("jurisdiction_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			328,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("jurisdiction"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			336,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("purpose"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			344,
			16,
			{
				{ ValueType::Markdown, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("usage"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			360,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("copyright"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			376,
			16,
			{
				{ ValueType::Markdown, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("approvalDate"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			392,
			16,
			{
				{ ValueType::Date, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("lastReviewDate"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			408,
			16,
			{
				{ ValueType::Date, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("effectivePeriod"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			424,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Period") },
			}
		},
		{
			Str8LitComp("topic_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			432,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("topic"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			440,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("author_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			448,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("author"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			456,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("ContactDetail") },
			}
		},
		{
			Str8LitComp("editor_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			464,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("editor"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			472,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("ContactDetail") },
			}
		},
		{
			Str8LitComp("reviewer_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			480,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("reviewer"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			488,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("ContactDetail") },
			}
		},
		{
			Str8LitComp("endorser_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			496,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("endorser"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			504,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("ContactDetail") },
			}
		},
		{
			Str8LitComp("relatedArtifact_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			512,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("relatedArtifact"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			520,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("RelatedArtifact") },
			}
		},
		{
			Str8LitComp("library_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			528,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("library"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			536,
			8,
			{
				{ ValueType::Canonical, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("disclaimer"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			544,
			16,
			{
				{ ValueType::Markdown, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("scoring"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			560,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("compositeScoring"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			568,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("type_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			576,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("type"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			584,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("riskAdjustment"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			592,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("rateAggregation"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			608,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("rationale"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			624,
			16,
			{
				{ ValueType::Markdown, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("clinicalRecommendationStatement"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			640,
			16,
			{
				{ ValueType::Markdown, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("improvementNotation"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			656,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("definition_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			664,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("definition"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			672,
			8,
			{
				{ ValueType::Markdown, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("guidance"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			680,
			16,
			{
				{ ValueType::Markdown, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("group_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			696,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("group"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			704,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Measure_Group") },
			}
		},
		{
			Str8LitComp("supplementalData_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			712,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("supplementalData"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			720,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Measure_SupplementalData") },
			}
		}
	}
}
,{
	Str8Lit("Measure_Group"),
	112,
	12,
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("Measure_Group") },
			}
		},
		{
			Str8LitComp("id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			24,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("code"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			56,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("description"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			64,
			16,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("population_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			80,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("population"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			88,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Measure_Group_Population") },
			}
		},
		{
			Str8LitComp("stratifier_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			96,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("stratifier"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			104,
			8,
			{
				{ ValueType::Class_Reference, Str8LitComp("Measure_Group_Stratifier") },
			}
		}
	}
}
,{
	Str8Lit("Measure_Group_Population"),
	88,
	9,
	{
		{
			Str8LitComp("resourceType"),
			0,
			4,
}