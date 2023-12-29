
String8 illegal_member_names[] = {
	Str8Lit("class"),
	Str8Lit("operator"),
	Str8Lit("template"),
	Str8Lit("for"),
	Str8Lit("while"),
	Str8Lit("short")
};


void
CDListPush(Arena *arena, ClassDefinitionList *list, ClassDefinition def) 
{
	ClassDefinitionNode *node = PushArray(arena, ClassDefinitionNode, 1);
	node->def = def;
	QueuePush(list->first, list->last, node);
	list->count += 1;
}

ClassDefinitionList
CDListMerge(ClassDefinitionList a, ClassDefinitionList b)
{
	if (a.first && b.first)
	{
		ClassDefinitionList result = { 0 };
		result.first = a.first;
		result.last = b.last;
		a.last->next = b.first;
		result.count = a.count + b.count;
		return result;
	} else if(a.first)
	{
		return a;
	} else if (b.first)
	{
		return b;
	}
 
	Assert(false);
}

void
CMListPush(Arena *arena, ClassMemberList *list, ClassMember mem) 
{
	ClassMemberNode *node = PushArray(arena, ClassMemberNode, 1);
	node->mem = mem;
	QueuePush(list->first, list->last, node);
	list->count += 1;
}

String8
ClassNameFromResourceName(Arena *arena, String8 res_name)
{
	String8 result = { 0 };
	result.size = res_name.size;
	result.str = (U8*)ArenaPush(arena, result.size);

	for (int i = 0; i < res_name.size; i++)
	{
		//TODO(agw): this does not work with non-ascii
		char c = res_name.str[i];
		if (c == '.') {
			result.str[i] = '_';
			i++;
			if (i < res_name.size)
			{
				result.str[i] = CharToUpper(res_name.str[i]);
			}
		} else if (c == '-')
		{
			result.str[i] = '_';
		} 
		else 
		{
			result.str[i] = res_name.str[i];
		}
	}

	return result;
}

// TODO(agw): hash these into a table
ValueType
ValueTypeFromString8(String8 str)
{
	for (int i = 0; i < ArrayCount(str_type_pairs); i++)
	{
		if (Str8Match(str, str_type_pairs[i].str, 0))
		{
			return str_type_pairs[i].type;
		}
	}
	// TODO(agw): should probably check if a valid class
	return ValueType::Class_Reference;
}

ValueTypes
ValueTypesFromResourceMember(Arena *arena, ResourceMember *mem)
{
	ValueTypes types = { 0 };
	types.num_types = mem->value_types.node_count;
	types.types = PushArray(arena, ValueType, types.num_types);
	types.type_name = PushArray(arena, String8, types.num_types);

	String8Node *vt_node = mem->value_types.first;
	for (int i = 0; i < types.num_types; i++)
	{
		types.types[i] = ValueTypeFromString8(vt_node->string);

		if (types.types[i] == ValueType::Class_Reference)
		{
			types.type_name[i] = ClassNameFromResourceName(arena, vt_node->string);
		}
		vt_node = vt_node->next;
	}
	return types;
}

String8
CleanContentReference(Arena *arena, String8 content_reference)
{
	String8 result = PushStr8Copy(arena, content_reference);
	// TODO(alex): these need to be UTF-8 increments
	result.str++;
	result.size--;
	return result;
}

String8
CleanMemberName(Arena *arena, String8 member_name)
{
	if (FindSubstr8(member_name, Str8Lit("[x]"), 0, 0) != member_name.size) {
		String8 without_brackets = Prefix8(member_name, member_name.size - 3);
		return PushStr8Copy(arena, without_brackets);
	}

	for (int i = 0; i < ArrayCount(illegal_member_names); i++)
	{
		if (Str8Match(member_name, illegal_member_names[i], 0))
		{
			return PushStr8F(arena, "%.*s_", member_name.size, member_name.str);
		}
	}

	return member_name;
}

ClassMember*
ClassMemberFromResourceMember(Arena *arena, ResourceMember *mem)
{
	Temp scratch = ScratchBegin(&arena, 1);
	ClassMember *class_mem = PushArray(arena, ClassMember, 1);
	class_mem->name = CleanMemberName(arena, mem->name);

	class_mem->cardinality = mem->cardinality;
	if (mem->content_reference.size != 0)
	{
		String8 content_reference = CleanContentReference(scratch.arena, mem->content_reference);
		String8 class_name = ClassNameFromResourceName(arena, content_reference);
		ValueTypes types = { 0 };
		types.num_types = 1;
		types.types = PushArray(arena, ValueType, types.num_types);
		types.type_name = PushArray(arena, String8, types.num_types);
		types.types[0] = ValueType::Class_Reference;
		types.type_name[0] = class_name;
		class_mem->types = types;
	} else 
	{
		ValueTypes value_types = ValueTypesFromResourceMember(arena, mem);
		class_mem->types = value_types;
	}

	ScratchEnd(scratch);
	return class_mem;
}


ClassDefinitionList
GetClassDefinitionsFromResource(Arena *arena, Resource *res) 
{
	ClassDefinitionList result = { 0 };

	ClassDefinition *class_def = PushArray(arena, ClassDefinition, 1);

	class_def->name = ClassNameFromResourceName(arena, res->name);
	class_def->inherits = res->inherits;

	ResourceMemberNode *ptr = res->members.first;
	for (int i = 0; i < res->members.count; i++)
	{
		ClassMember *mem = ClassMemberFromResourceMember(arena, &ptr->member);
		CMListPush(arena, &class_def->members, *mem);
		ptr = ptr->next;
	}


	CDListPush(arena, &result, *class_def);

	if (res->sub_resources) 
	{
		ResourceNode *res_ptr = res->sub_resources->first;
		for (int i = 0; i < res->sub_resources->count; i++)
		{
			ClassDefinitionList sub_list = GetClassDefinitionsFromResource(arena, &res_ptr->resource);
	
			ClassDefinitionNode *sub_ptr = sub_list.first;
			for (int j = 0; j < sub_list.count; j++) {
				CDListPush(arena, &result, sub_ptr->def);
				sub_ptr = sub_ptr->next;
			}
	
			res_ptr = res_ptr->next;
		}
	}

	return result;
}


StringValueTypePair*
ValueTypesGetByType(Arena *arena, ValueTypes types, ValueType type) 
{

	for (int i = 0; i < types.num_types; i++)
	{
		if (types.types[i] == type)
		{
			StringValueTypePair *pair = PushArray(arena, StringValueTypePair, 1);
			pair->str = types.type_name[i];
			pair->type = types.types[i];
			return pair;
		}
	}

	return nullptr;
}