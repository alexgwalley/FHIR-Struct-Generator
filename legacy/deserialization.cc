

String8
GetParameterNameFromClassName(Arena *arena, String8 class_name)
{
	String8 parameter_name = PushStr8Copy(arena, class_name);
	parameter_name.str[0] = CharToLower(parameter_name.str[0]);
	return parameter_name;
}

String8
GetDeserializationFunctionHead(Arena *arena, ClassDefinition *def)
{
	Temp scratch = ScratchBegin(&arena, 1);
	String8List result_list = { 0 };

	Str8ListPushF(scratch.arena, &result_list, "%.*s*\n", def->name.size, def->name.str);
	Str8ListPushF(scratch.arena, &result_list, "Deserialize_%.*s", def->name.size, def->name.str);

	Str8ListPush(scratch.arena, &result_list, Str8Lit("("));

	Str8ListPush(scratch.arena, &result_list, Str8Lit("Arena *arena")); 
	Str8ListPush(scratch.arena, &result_list, Str8Lit(", "));

	String8 parameter_name = GetParameterNameFromClassName(scratch.arena, def->name);

	Str8ListPushF(scratch.arena, &result_list,
	              "cJSON *%.*s",
	              parameter_name.size, parameter_name.str);

	Str8ListPush(scratch.arena, &result_list, Str8Lit(")"));

	String8 result = Str8ListJoin(arena, result_list, 0);
	ScratchEnd(scratch);
	return result;
}

String8
GetDeserializationCall(Arena *arena,
                       ValueType type,
                       String8 class_name,
                       String8 cjson_member_name)
{
	Temp scratch = ScratchBegin(&arena, 1);
	String8List result_list = { 0 };
	switch (type)
	{
		case ValueType::Base64Binary:
		case ValueType::Canonical:
		case ValueType::Code:
		case ValueType::Id:
		case ValueType::Markdown:
		case ValueType::Oid:
		case ValueType::String:
		case ValueType::Uri:
		case ValueType::Url:
		case ValueType::Uuid:
		case ValueType::Date:
		case ValueType::DateTime:
		case ValueType::Time:
		case ValueType::Instant:
		{
			Str8ListPushF(scratch.arena, 
						&result_list,
						"Str8C(cJSON_GetStringValue(%.*s))",
						cjson_member_name.size,
						cjson_member_name.str);
		} break;
		case ValueType::Decimal:
		{
			Str8ListPushF(scratch.arena, 
						&result_list,
						"cJSON_GetNumberValue(%.*s)",
						cjson_member_name.size,
						cjson_member_name.str);
		} break;
		case ValueType::UnsignedInt:
		case ValueType::PositiveInt:
		{
			Str8ListPushF(scratch.arena, 
						&result_list,
						"(int)cJSON_GetNumberValue(%.*s)",
						cjson_member_name.size,
						cjson_member_name.str);
		} break;
		case ValueType::Boolean:
		{
			Str8ListPushF(scratch.arena, 
						&result_list,
						"(boolean)cJSON_IsTrue(%.*s)",
						cjson_member_name.size,
						cjson_member_name.str);
		} break;
		case ValueType::Class_Reference:
		{
			Str8ListPushF(arena,
			              &result_list,
				"Deserialize_%.*s(arena, %.*s)",
				class_name.size,
				class_name.str,
				cjson_member_name.size,
				cjson_member_name.str);
		} break;
	}

	String8 result = Str8ListJoin(arena, result_list, 0);
	ScratchEnd(scratch);
	return result;
}

String8
TypeAndCardinalityDeserialization(Arena *arena,
                                  ValueType type,
                                  Cardinality cardinality,
                                  String8 in_type_name,
                                  String8 member_name,
                                  String8 class_var_name,
                                  String8 cjson_member_name)
{
	Temp scratch = ScratchBegin(&arena, 1);
	String8List result_list = { 0 };
	String8 type_name = String8FromValueType(type, in_type_name);

	if (type == ValueType::ResourceType)
	{
		ScratchEnd(scratch);
		return Str8Lit("");
	}
	if (cardinality == Cardinality::ZeroToInf ||
		cardinality == Cardinality::OneToInf)
	{
		Str8ListPushF(scratch.arena,
					&result_list,
					"\t\t%.*s->%.*s_count = cJSON_GetArraySize(%.*s);\n",
					class_var_name.size, class_var_name.str,
					member_name.size, member_name.str,
					cjson_member_name.size, cjson_member_name.str);

		Str8ListPushF(scratch.arena,
					&result_list,
					"\t\t%.*s->%.*s = PushArray(arena, %.*s, %.*s->%.*s_count);\n",
					class_var_name.size, class_var_name.str,
					member_name.size, member_name.str,
					type_name.size, type_name.str,
					class_var_name.size, class_var_name.str,
					member_name.size, member_name.str);

		Str8ListPushF(scratch.arena,
					&result_list,
					"\t\tfor(int i = 0; i < %.*s->%.*s_count; i++)\n",
					class_var_name.size, class_var_name.str,
					  member_name.size, member_name.str);

		Str8ListPush(scratch.arena,
					&result_list,
					Str8Lit("\t\t{\n"));

		Str8ListPushF(scratch.arena,
					&result_list,
					"\t\t\tcJSON *internal = cJSON_GetArrayItem(%.*s, i);\n",
					cjson_member_name.size, cjson_member_name.str);

		Str8ListPushF(scratch.arena,
					&result_list,
					"\t\t\t%.*s->%.*s[i] = ",
					class_var_name.size, class_var_name.str,
					member_name.size, member_name.str);

		if (type == ValueType::Class_Reference)
		{
			Str8ListPush(scratch.arena, &result_list, Str8Lit("*"));
		}

		String8 deserialization_call = GetDeserializationCall(scratch.arena,
															type,
															type_name,
															Str8Lit("internal"));
		Str8ListPush(scratch.arena, &result_list, deserialization_call);
		Str8ListPush(scratch.arena, &result_list, Str8Lit(";\n"));
		Str8ListPush(scratch.arena, &result_list, Str8Lit("\t\t}\n"));
	} 
	else 
	{
		String8 deserialization_call = GetDeserializationCall(scratch.arena,
															type,
															type_name,
															cjson_member_name);
		Str8ListPushF(scratch.arena,
					&result_list,
					"\t\t%.*s->%.*s = %.*s;",
					class_var_name.size, class_var_name.str,
					member_name.size, member_name.str,
					deserialization_call.size, deserialization_call.str);
	}

	String8 result = Str8ListJoin(arena, result_list, 0);
	ScratchEnd(scratch);
	return result;
}


String8
GetMemberJSONDeserialization(Arena *arena,
                             ClassMember *mem,
                             String8 class_name,
                             String8 class_var_name,
                             String8 cjson_member_name)
{
	Temp scratch = ScratchBegin(&arena, 1);
	String8List result_list = { 0 };

	if (mem->types.num_types == 1)
	{
		String8 deserializtion = TypeAndCardinalityDeserialization(scratch.arena, 
		                                  mem->types.types[0],
		                                  mem->cardinality,
		                                  mem->types.type_names[0],
		                                  mem->name,
		                                  class_var_name,
		                                  cjson_member_name);
		Str8ListPush(scratch.arena,
		             &result_list,
		             deserializtion);
	}
	else
	{
		// need to check the child type
		// need to check the possible choices, 
		// if match, do serialization code,
		// else try another
		for (int i = 0; i < mem->types.num_types; i++)
		{
			if (i > 0)
			{
				Str8ListPush(scratch.arena, &result_list, Str8Lit("\telse "));
			} else {
				Str8ListPush(scratch.arena, &result_list, Str8Lit("\t"));
			}

			/*
			(else) if (cJSON_HasObjectItem(resource, internal_type_name))
			*/
			String8 internal_type_name = GetUnionInternalTypeName(scratch.arena, 
			                                                      mem->types.types[i],
			                                                      mem->types.type_names[i]);
			String8 parameter_name = GetParameterNameFromClassName(scratch.arena, class_name);

			Str8ListPushF(scratch.arena, &result_list,
			              "if((bool)cJSON_HasObjectItem(%.*s, \"%.*s\"))\t\n\t{\n",
			              parameter_name.size, parameter_name.str,
			              internal_type_name.size, internal_type_name.str);

			/*
			cJSON *item = cJSON_GetObjectItem(resource, internal_type_name);
			*/
			Str8ListPushF(scratch.arena, &result_list,
			              "\t\tcJSON *item = cJSON_GetObjectItem(%.*s, \"%.*s\");\n",
			              parameter_name.size, parameter_name.str,
			              internal_type_name.size, internal_type_name.str);

			String8 member_name_and_union = PushStr8F(scratch.arena, "%.*s.%.*s",
			                                mem->name.size, mem->name.str,
			                                internal_type_name.size, internal_type_name.str);


			// TODO(alex): this call should not insert so many indents
			String8 deserializtion = TypeAndCardinalityDeserialization(scratch.arena, 
									mem->types.types[i],
									mem->cardinality,
									mem->types.type_names[i],
									member_name_and_union,
									class_var_name,
									Str8Lit("item"));

			Str8ListPushF(scratch.arena, &result_list,
			              "%.*s\n",
			              deserializtion.size, deserializtion.str);

			String8 enum_name = EnumNameFromMemberName(scratch.arena, mem->name);
			String8 enum_value = String8FromValueType(mem->types.types[i], mem->types.type_names[i]);
			String8 enum_scoped_value = PushStr8F(scratch.arena, "%.*s::%.*s::%.*s;",
			                                    class_name.size, class_name.str,
												enum_name.size, enum_name.str,
												enum_value.size, enum_value.str);
			// TODO(alex): this _type stuff should be in shared function
			Str8ListPushF(scratch.arena, &result_list,
			              "\t\t%.*s->%.*s_type = %.*s\n",
			              class_var_name.size, class_var_name.str,
			              mem->name.size, mem->name.str,
			              enum_scoped_value.size, enum_scoped_value.str);

			/*
			}
			*/
			Str8ListPush(scratch.arena, &result_list, Str8Lit("\t}\n"));
		}
	}

	Str8ListPush(scratch.arena, 
				&result_list,
				 Str8Lit("\n"));
	String8 result = Str8ListJoin(arena, result_list, 0);
	ScratchEnd(scratch);
	return result;
}

String8
GetMemberDeserialization(Arena *arena, ClassMember *mem, String8 class_var_name, String8 class_name)
{
	Temp scratch = ScratchBegin(&arena, 1);
	String8List result_list = { 0 };

	String8 cjson_member_name = PushStr8F(scratch.arena,
	                                      "cjson_%.*s",
	                                      mem->name.size,
	                                      mem->name.str);

	String8 parameter_name = GetParameterNameFromClassName(scratch.arena, class_name);
	String8 actual_member_deserialization = GetMemberJSONDeserialization(scratch.arena,
	                                                                      mem,
	                                                                      class_name,
	                                                                      class_var_name,
	                                                                      cjson_member_name);
	if (actual_member_deserialization.size == 0)
	{
		ScratchEnd(scratch);
		return Str8Lit("");
	}



	if (mem->types.num_types == 1)
	{

		Str8ListPushF(scratch.arena,
		              &result_list,
		              "\tcJSON *%.*s = ",
		              cjson_member_name.size,
		              cjson_member_name.str);

		Str8ListPushF(scratch.arena,
		              &result_list,
		              " cJSON_GetObjectItem(%.*s, \"%.*s\");\n",
		              parameter_name.size,
		              parameter_name.str,
		              mem->name.size,
		              mem->name.str);

		Str8ListPushF(scratch.arena,
		              &result_list,
		              "\tif(%.*s)\n",
		              cjson_member_name.size,
		              cjson_member_name.str);


		Str8ListPushF(scratch.arena,
		              &result_list,
		              "\t{\n");

	}

	Str8ListPush(scratch.arena, &result_list, actual_member_deserialization);

	if (mem->types.num_types == 1)
	{
		Str8ListPushF(scratch.arena,
		              &result_list,
		              "\t}");
	}

	String8 result = Str8ListJoin(arena, result_list, 0);
	ScratchEnd(scratch);
	return result;
}


String8
DeserializationCodeHeaderFrom(Arena *arena,
                        DeserializationOptions options,
                        ClassDefinition *def)
{
	Temp scratch = ScratchBegin(&arena, 1);
	String8List result_list = { 0 };

	String8 class_constructor = GetDeserializationFunctionHead(scratch.arena, def);
	Str8ListPush(scratch.arena, &result_list, class_constructor);
	Str8ListPush(scratch.arena, &result_list, Str8Lit(";\n"));
	String8 result = Str8ListJoin(arena, result_list, 0);
	ScratchEnd(scratch);
	return result;
}

String8
ResourceDeserializationCode(Arena *arena,
                            DeserializationOptions options,
                            ClassDefinition *def,
                            ClassDefinitionList *all_defs)
{

	/*
	ResourceType resourceType;
	cJSON *cjson_resourceType = cJSON_GetObjectItem(resource, "resourceType");
	if (cjson_resourceType)
	{
		resourceType = Str8C(cJSON_GetStringValue(cjson_resourceType));
	}

	switch (resourceType) {
		case ResourceType::Bundle:
			return (Resource*)Deserialize_Bundle(arena, resource);
		...
	}
	Assert(false);
	*/

	Temp scratch = ScratchBegin(&arena, 1);
	String8List result_list = { 0 };
	Str8ListPush(scratch.arena, &result_list, Str8Lit("\tResourceType resourceType;\n"));
	Str8ListPush(scratch.arena, &result_list, Str8Lit("\tcJSON *cjson_resourceType = cJSON_GetObjectItem(resource, \"resourceType\");\n"));
	Str8ListPush(scratch.arena, &result_list, Str8Lit("\tif (cjson_resourceType)\n"));
	Str8ListPush(scratch.arena, &result_list, Str8Lit("\t{\n"));
	Str8ListPush(scratch.arena, &result_list, Str8Lit("\t\tresourceType = ResourceTypeFromString8(Str8C(cJSON_GetStringValue(cjson_resourceType)));\n"));
	Str8ListPush(scratch.arena, &result_list, Str8Lit("\t}\n"));

	Str8ListPush(scratch.arena, &result_list, Str8Lit("\tswitch (resourceType) {\n"));
	for (ClassDefinitionNode *node = all_defs->first; node; node = node->next)
	{
		Str8ListPushF(scratch.arena,
					&result_list,
					"\t\tcase ResourceType::%.*s:\n",
					node->def.name.size, node->def.name.str);


		String8 function_call = GetDeserializationCall(scratch.arena,
													ValueType::Class_Reference,
													node->def.name,
													Str8Lit("resource"));
		Str8ListPush(scratch.arena, &result_list, Str8Lit("\t\t\treturn (Resource*)"));
		Str8ListPush(scratch.arena, &result_list, function_call);
		Str8ListPush(scratch.arena, &result_list, Str8Lit(";\n"));
	}

	Str8ListPush(scratch.arena, &result_list, Str8Lit("\t}\n"));
	Str8ListPush(scratch.arena, &result_list, Str8Lit("\tAssert(false);\n"));
	Str8ListPush(scratch.arena, &result_list, Str8Lit("\treturn nullptr;\n"));
	String8 result = Str8ListJoin(arena, result_list, 0);
	ScratchEnd(scratch);
	return result;
}


String8
DeserializationResourceTypeFromString8Table(Arena *arena,
                                       DeserializationOptions options,
                                       ClassDefinitionList *all_defs)
{
	Temp scratch = ScratchBegin(&arena, 1);
	String8List result_list = { 0 };

	Str8ListPush(scratch.arena,
	             &result_list,
	             Str8Lit("typedef struct ResourceTypeString8Pair {\n"));
	Str8ListPush(scratch.arena,
	             &result_list,
	             Str8Lit("\tResourceType type;\n"));
	Str8ListPush(scratch.arena,
	             &result_list,
	             Str8Lit("\tString8 str;\n"));
	Str8ListPush(scratch.arena,
	             &result_list,
	             Str8Lit("} ResourceTypeString8Pair;\n\n"));

	Str8ListPush(scratch.arena,
	             &result_list,
	             Str8Lit("ResourceTypeString8Pair resource_type_pairs[] = {\n"));

	for (ClassDefinitionNode *node = all_defs->first; node; node = node->next)
	{
		Str8ListPushF(scratch.arena,
		              &result_list,
		              "\t{ResourceType::%.*s, Str8Lit(\"%.*s\")},\n",
		              node->def.name.size,
		              node->def.name.str,
		              node->def.name.size,
		              node->def.name.str);
	}

	Str8ListPush(scratch.arena,
	             &result_list,
	             Str8Lit("};\n"));

	String8 result = Str8ListJoin(arena, result_list, 0);
	ScratchEnd(scratch);
	return result;
}

String8
DeserializationResourceTypeFromString8(Arena *arena, 
                        DeserializationOptions options)
{
	Temp scratch = ScratchBegin(&arena, 1);
	String8List result_list = { 0 };

	Str8ListPush(scratch.arena, &result_list, Str8Lit("//TODO(agw): this really needs to be hashed\n"));
	Str8ListPush(scratch.arena, &result_list, Str8Lit("ResourceType\n"));
	Str8ListPush(scratch.arena, &result_list, Str8Lit("ResourceTypeFromString8(String8 str)\n"));
	Str8ListPush(scratch.arena, &result_list, Str8Lit("{\n"));


	Str8ListPush(scratch.arena,
	             &result_list,
	             Str8Lit("\tfor(int i = 0; i < ArrayCount(resource_type_pairs); i++){\n"));
	Str8ListPush(scratch.arena,
	             &result_list,
	             Str8Lit("\t\tif(Str8Match(str, resource_type_pairs[i].str, 0))\n"));

	Str8ListPush(scratch.arena, &result_list, Str8Lit("\t\t{\n"));

	Str8ListPush(scratch.arena,
				&result_list,
				 Str8Lit("\t\t\treturn resource_type_pairs[i].type;\n"));

	Str8ListPush(scratch.arena, &result_list, Str8Lit("\t\t}\n"));

	Str8ListPush(scratch.arena, &result_list, Str8Lit("\t}\n"));
	Str8ListPush(scratch.arena, &result_list, Str8Lit("\treturn ResourceType::Unknown;\n"));
	Str8ListPush(scratch.arena, &result_list, Str8Lit("}\n"));
	String8 result = Str8ListJoin(arena, result_list, 0);
	ScratchEnd(scratch);
	return result;
}

String8
DeserializationCodeFrom(Arena *arena, 
                        DeserializationOptions options,
                        ClassDefinition *def,
                        ClassDefinitionList *all_defs)
{
	Temp scratch = ScratchBegin(&arena, 1);
	String8List result_list = { 0 };

	String8 class_constructor = GetDeserializationFunctionHead(scratch.arena, def);
	Str8ListPush(scratch.arena, &result_list, class_constructor);
	Str8ListPush(scratch.arena, &result_list, Str8Lit("\n{\n"));

	if (Str8Match(def->name, Str8Lit("Resource"), 0))
	{
		String8 interior = ResourceDeserializationCode(arena, options, def, all_defs);
		Str8ListPush(scratch.arena, &result_list, interior);
	} else
	{
		String8 class_var_name = PushStr8F(scratch.arena, "result_%.*s",
		                                   def->name.size, def->name.str);

		Str8ListPushF(scratch.arena,
		              &result_list,
		              "\t%.*s *%.*s = PushArray(arena, %.*s, 1);\n",
		              def->name.size, def->name.str,
		              class_var_name.size, class_var_name.str,
		              def->name.size, def->name.str);
	             
		Str8ListPushF(scratch.arena,
		              &result_list,
		              "\t%.*s->resourceType = ResourceType::%.*s;\n",
		              class_var_name.size, class_var_name.str,
		              def->name.size, def->name.str);

		ClassMemberNode *node = def->members.first;
		for (int i = 0; i < def->members.count; i++, node = node->next)
		{
			if (node->mem.cardinality == Cardinality::ZeroToZero) continue;
			String8 member_deserialization = GetMemberDeserialization(scratch.arena,
			                                                          &node->mem,
			                                                          class_var_name,
			                                                          def->name);
			Str8ListPush(scratch.arena, &result_list, member_deserialization);
			Str8ListPush(scratch.arena, &result_list, Str8Lit("\n"));
		}

		Str8ListPushF(scratch.arena,
		              &result_list,
		              "\treturn %.*s;\n",
		              class_var_name.size, class_var_name.str);
	}
	Str8ListPush(scratch.arena, &result_list, Str8Lit("}\n\n"));
	String8 result = Str8ListJoin(arena, result_list, 0);
	ScratchEnd(scratch);
	return result;
}