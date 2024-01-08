String8 output_string_prefix = Str8Lit("cout << \"");
String8 output_string_postfix = Str8Lit("\";\n");

String8
String8FromValueType(Arena *arena, ValueType type, String8 class_reference_name)
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
EnumMemberNameFromMemberName(Arena *arena, String8 member_name)
{
	return PushStr8F(arena, "%S_type", member_name);
}

String8
MemberNameFromEnumMemberName(Arena *arena, String8 enum_member_name)
{
	return Str8Chop(enum_member_name, enum_member_name.size - 5);
}

String8
EnumNameFromMemberName(Arena *arena, String8 member_name)
{
	// TODO(agw): add scratch
	Temp scratch = ScratchBegin(&arena, 1);
    
	// member_name will likely have [x] suffix
	// ex. incoming camelCase[x] => CamelCase
	String8 result = PushStr8F(arena, "%SType", MemberNameFromEnumMemberName(scratch.arena, member_name));
	result.str[0] = CharToUpper(result.str[0]);
    
	ScratchEnd(scratch);
	return result;
}

String8
EnumFromClassMember(Arena *arena, ClassMember *mem)
{
	Temp scratch = ScratchBegin(&arena, 1);
	String8List result_list = { 0 };
	String8 enum_name = EnumNameFromMemberName(arena, mem->name);
	Str8ListPushF(scratch.arena, 
	              &result_list,
	              "\tenum class %.*s {\n",
	              enum_name.size, enum_name.str);
    
	ValueTypes types = mem->value_type.types;
    
	Str8ListPush(scratch.arena, &result_list, Str8Lit("\t\tUnknown,\n"));
    
	for (int i = 0; i < types.num_types; i++)
	{
		Str8ListPush(scratch.arena, &result_list, Str8Lit("\t\t"));
		String8 value_type = String8FromValueType(scratch.arena,
                                                  types.types[i],
                                                  types.type_names[i]);
        
		Str8ListPush(scratch.arena, &result_list, value_type);
        
		if (i != types.num_types - 1) {
			Str8ListPush(scratch.arena, &result_list, Str8Lit(","));
		}
        
		Str8ListPush(scratch.arena, &result_list, Str8Lit("\n"));
	}
    
    
	Str8ListPushF(scratch.arena, 
	              &result_list,
	              "\t};\n");
	String8 enum_member_name = EnumMemberNameFromMemberName(arena, mem->name);
	Str8ListPushF(scratch.arena,
	              &result_list,
	              "\t%S %S;\n",
	              enum_name,
	              enum_member_name);
	String8 result = Str8ListJoin(arena, result_list, 0);
	ScratchEnd(scratch);
	return result;
}

String8
GetUnionInternalTypeName(Arena *arena, ValueType type, String8 type_name, String8 member_name)
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
                               "%S%S",
                               member_name,
                               str);
	ScratchEnd(scratch);
	return result;
}

String8
GetClassNameFromUnionName(Arena* arena, String8 union_name, String8 member_name)
{
	String8 str = PushStr8Copy(arena, union_name);
	String8 result = Str8Skip(str, member_name.size);
	result.str[0] = CharToUpper(result.str[0]);
	return result;
}

String8
UnionFromClassMember(Arena *arena, ClassMember *mem)
{
	Temp scratch = ScratchBegin(&arena, 1);
	String8List result_list = { 0 };
    
	ValueTypes types = mem->value_type.types;
    
	Str8ListPush(scratch.arena, &result_list, Str8Lit("\tunion {\n"));
	for (int i = 0; i < types.num_types; i++)
	{
		Str8ListPush(scratch.arena, &result_list, Str8Lit("\t\t"));
		String8 value_type = String8FromValueType(scratch.arena,
                                                  types.types[i], types.type_names[i]);
		Str8ListPush(scratch.arena, &result_list, value_type);
		if (types.types[i] == ValueType::Class_Reference)
		{
			Str8ListPush(scratch.arena, &result_list, Str8Lit("*"));
		}
        
		String8 internal_name = GetUnionInternalTypeName(scratch.arena,
		                                                 types.types[i],
		                                                 types.type_names[i],
		                                                 mem->name);
        
		Str8ListPush(scratch.arena, &result_list, Str8Lit(" "));
		Str8ListPush(scratch.arena, &result_list, internal_name);
        
		Str8ListPush(scratch.arena, &result_list, Str8Lit(";"));
        
		Str8ListPush(scratch.arena, &result_list, Str8Lit("\n"));
	}
	Str8ListPushF(scratch.arena, &result_list, "\t} %.*s;\n", mem->name.size, mem->name.str);
    
	String8 result = Str8ListJoin(arena, result_list, 0);
	ScratchEnd(scratch);
	return result;
}

String8 
String8FromClassMember(Arena *arena, ClassMember *mem)
{
    
    
	switch(mem->type)
	{
		case ClassMemberType::Single:
		{
            
			bool is_pointer = (mem->cardinality == Cardinality::ZeroToInf ||
                               mem->cardinality == Cardinality::OneToInf
                               );
			bool is_class_ref = mem->value_type.single.type == ValueType::Class_Reference;
            
			String8 ptr = is_pointer ? Str8Lit("*") : Str8Lit("");
			String8 class_ref = is_class_ref ? Str8Lit("*") : Str8Lit("");
            
			String8 value_type = String8FromValueType(arena,
                                                      mem->value_type.single.type,
                                                      mem->value_type.single.name);
			String8 result = PushStr8F(arena,
                                       "\t%S %S%S%S;",
                                       value_type,
                                       ptr,
                                       class_ref,
                                       mem->name);
			return result;
		}
		case ClassMemberType::Enum:
		{
			return EnumFromClassMember(arena, mem);
		}
		case ClassMemberType::Union:
		{
			return UnionFromClassMember(arena, mem);
		}
	}
    
	// TODO(agw): not sure if can put on stack 
	return Str8Lit("");
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
    
	Str8ListPush(scratch.arena, &result_list, Str8Lit(" {\n"
	                                                  "public: \n"));
    
	for (ClassMemberNode *node = def->members.first;
         node;
         node = node->next)
	{
		String8 member_str = String8FromClassMember(scratch.arena, &node->mem);
		Str8ListPushF(scratch.arena, &result_list, "%.*s\n",
		              member_str.size, member_str.str);
	}
    
	Str8ListPush(scratch.arena, &result_list, Str8Lit("};\n"));
	String8 result = Str8ListJoin(arena, result_list, 0);
	ScratchEnd(scratch);
    
	return result;
}