String8 output_string_prefix = Str8Lit("cout << \"");
String8 output_string_postfix = Str8Lit("\";\n");

String8
CallToExportString(Arena *arena, char *fmt, ...)
{
	Temp scratch = ScratchBegin(&arena, 1);
	String8List result_list = { 0 };
	va_list args;
	va_start(args, fmt);
	Str8ListPush(scratch.arena, &result_list, PushStr8FV(arena, fmt, args));
	va_end(args);

	StringJoin join_opts = { 0 };
	join_opts.pre = output_string_prefix;
	join_opts.post = output_string_postfix;

	String8 result = Str8ListJoin(arena, result_list, &join_opts);
	ScratchEnd(scratch);
	return result;
}

String8
SerializeValueType(ValueType type, String8 class_reference_name)
{

	for (int i = 0; i < ArrayCount(str_type_pairs_export); i++)
	{
		if (type == str_type_pairs_export[i].type)
		{
			return str_type_pairs_export[i].str;
		}
	}

	return class_reference_name;
}

String8
EnumNameFromMemberName(Arena *arena, String8 member_name)
{
	// member_name will likely have [x] suffix
	// ex. incoming camelCase[x] => CamelCase
	String8 result = PushStr8F(arena, "%.*sType", member_name.size, member_name.str);
	result.str[0] = CharToUpper(result.str[0]);

	return result;
}

String8
SerializeEnumFromValueTypes(Arena *arena, ValueTypes types, String8 member_name)
{
	Temp scratch = ScratchBegin(&arena, 1);
	String8List result_list = { 0 };
	String8 enum_name = EnumNameFromMemberName(arena, member_name);
	Str8ListPushF(scratch.arena, &result_list, "enum class %.*s {\n", enum_name.size, enum_name.str);

	for (int i = 0; i < types.num_types; i++)
	{
		Str8ListPush(scratch.arena, &result_list, Str8Lit("\t\t"));
		String8 value_type = SerializeValueType(types.types[i], types.type_name[i]);
		Str8ListPush(scratch.arena, &result_list, value_type);

		if (i != types.num_types - 1) {
			Str8ListPush(scratch.arena, &result_list, Str8Lit(","));
		}



		Str8ListPush(scratch.arena, &result_list, Str8Lit("\n"));
	}


	Str8ListPushF(scratch.arena, &result_list, "\t};\n", member_name.size, member_name.str);
	Str8ListPushF(scratch.arena,
	              &result_list,
	              "\t%.*s %.*s_type;\n",
	              enum_name.size, enum_name.str,
	              member_name.size, member_name.str);
	String8 result = Str8ListJoin(arena, result_list, 0);
	ScratchEnd(scratch);
	return result;
}

String8
GetUnionInternalTypeName(Arena *arena, ValueType type, String8 type_name)
{
	Temp scratch = ScratchBegin(&arena, 1);
	String8 str = PushStr8Copy(scratch.arena, type_name);
	for (int i = 0; i < ArrayCount(str_type_pairs); i++)
	{
		if (type == str_type_pairs[i].type)
		{
			str = PushStr8Copy(scratch.arena, str_type_pairs[i].str);
			break;
		}
	}

	str.str[0] = CharToUpper(str.str[0]);
	String8 result = PushStr8F(arena, 
	                 "value%.*s",
	                 str.size, str.str);
	ScratchEnd(scratch);
	return result;
}

String8
SerializeUnionFromValueTypes(Arena *arena, ValueTypes types, String8 member_name)
{
	Assert(types.num_types > 0);
	Temp scratch = ScratchBegin(&arena, 1);
	String8List result_list = { 0 };
	Str8ListPush(scratch.arena, &result_list, Str8Lit("union {\n"));
	for (int i = 0; i < types.num_types; i++)
	{
		Str8ListPush(scratch.arena, &result_list, Str8Lit("\t\t"));
		String8 value_type = SerializeValueType(types.types[i], types.type_name[i]);
		Str8ListPush(scratch.arena, &result_list, value_type);
		if (types.types[i] == ValueType::Class_Reference)
		{
			Str8ListPush(scratch.arena, &result_list, Str8Lit("*"));
		}

		String8 internal_name = GetUnionInternalTypeName(scratch.arena, types.types[i], types.type_name[i]);

		Str8ListPush(scratch.arena, &result_list, Str8Lit(" "));
		Str8ListPush(scratch.arena, &result_list, internal_name);

		Str8ListPush(scratch.arena, &result_list, Str8Lit(";"));

		Str8ListPush(scratch.arena, &result_list, Str8Lit("\n"));
	}
	Str8ListPushF(scratch.arena, &result_list, "\t} %.*s;\n", member_name.size, member_name.str);

	String8 result = Str8ListJoin(arena, result_list, 0);
	ScratchEnd(scratch);
	return result;
}

String8 SerializeValueTypes(Arena *arena, ClassMember mem)
{
	if (mem.types.num_types == 1)
	{
		String8 value_type = SerializeValueType(mem.types.types[0], mem.types.type_name[0]);
		String8 result = value_type;
		Temp scratch = ScratchBegin(&arena, 1);
	
		String8List res_list = { 0 };
		Str8ListPush(scratch.arena, &res_list, value_type);
		if (mem.cardinality == Cardinality::ZeroToInf ||
			mem.cardinality == Cardinality::OneToInf
			|| mem.types.types[0] == ValueType::Class_Reference)
		{
			Str8ListPush(scratch.arena, &res_list, Str8Lit("*"));
		}
		result = Str8ListJoin(arena, res_list, 0);
		ScratchEnd(scratch);
		return result;
	}

	// NOTE(agw): build union and enum
	Temp scratch = ScratchBegin(&arena, 1);
	String8 enum_str = SerializeEnumFromValueTypes(scratch.arena, mem.types, mem.name);
	String8 union_str = SerializeUnionFromValueTypes(scratch.arena, mem.types, mem.name);

	String8List res_list = { 0 };
	Str8ListPush(scratch.arena, &res_list, enum_str);
	Str8ListPush(scratch.arena, &res_list, Str8Lit("\t"));
	Str8ListPush(scratch.arena, &res_list, union_str);

	String8 result = Str8ListJoin(arena, res_list, 0);
	ScratchEnd(scratch);

	return result;
}

String8 
OutputClassMember(Arena *arena, ClassMember mem, String8 class_name)
{
	Temp scratch = ScratchBegin(&arena, 1);
	String8 type_def = SerializeValueTypes(arena, mem);
	String8List result_list = { 0 };

	Str8ListPush(scratch.arena, &result_list, Str8Lit("\t"));
	switch (mem.cardinality)
	{
		case Cardinality::ZeroToOne: 
		{
			Str8ListPush(scratch.arena, &result_list, type_def);
		} break;
		case Cardinality::OneToInf:
		case Cardinality::ZeroToInf: 
		{
			String8 array_count = PushStr8F(scratch.arena, "int %.*s_count;\n", mem.name.size, mem.name.str);
			Str8ListPush(scratch.arena, &result_list, array_count);
			Str8ListPush(scratch.arena, &result_list, Str8Lit("\t"));
			Str8ListPush(scratch.arena, &result_list, type_def);
		} break;
		case Cardinality::OneToOne: 
		{
			Str8ListPush(scratch.arena, &result_list, type_def);
		} break;
	}

	if (mem.types.num_types == 1 && 
		mem.cardinality != Cardinality::ZeroToZero)
	{
		Str8ListPush(scratch.arena, &result_list, Str8Lit(" "));
		Str8ListPush(scratch.arena, &result_list, mem.name);

		if (mem.types.types[0] == ValueType::ResourceType)
		{
			Str8ListPushF(scratch.arena,
			              &result_list,
			              " = ResourceType::%.*s",
			              class_name.size, 
			              class_name.str);
		}
		Str8ListPush(scratch.arena, &result_list, Str8Lit(";"));
	}

	String8 result = Str8ListJoin(arena, result_list, 0);
	ScratchEnd(scratch);
	return result;
}

String8
OutputClassDefinition(Arena *arena, ClassDefinition *def)
{
	Temp scratch = ScratchBegin(&arena, 1);
	String8List result_list = { 0 };
	Assert(def->name.size);

	Str8ListPushF(scratch.arena, &result_list, "class %.*s", def->name.size, def->name.str);
	if (def->inherits.node_count > 0)
	{
		String8 inherit = def->inherits.first->string;
		Str8ListPushF(scratch.arena, &result_list, " : %.*s", inherit.size, inherit.str);
	}
	Str8ListPush(scratch.arena, &result_list, Str8Lit(" {\n"));
	Str8ListPushF(scratch.arena, &result_list, "public:\n", def->name.size, def->name.str);
	ClassMemberNode *node = def->members.first;
	for (int i = 0; i < def->members.count; i++)
	{
		String8 member_str = OutputClassMember(scratch.arena, node->mem, def->name);
		Str8ListPush(scratch.arena, &result_list, member_str);
		Str8ListPush(scratch.arena, &result_list, Str8Lit("\n"));
		node = node->next;
	}

	Str8ListPush(scratch.arena, &result_list, Str8Lit("};\n"));

	String8 result = Str8ListJoin(arena, result_list, 0);
	ScratchEnd(scratch);

	return result;
}