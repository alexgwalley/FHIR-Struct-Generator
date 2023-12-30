
struct OffsetContext
{
	U16 offset;
	U8 max_data_size;
	U32 total_size;
};

U16
OffsetContext_Increase(OffsetContext *context, U8 size)
{

	U8 alignment = (size < 8) ? size : 8;
	while (context->offset % alignment != 0)
	{
		context->offset++;
	}

	U16 offset_start = context->offset;

	if (alignment > context->max_data_size)
	{
		context->max_data_size = alignment;
	}

	context->offset += size;

	return offset_start;
}

void
OffsetContext_Finish(OffsetContext *context)
{
	while (context->offset % context->max_data_size != 0)
	{
		context->offset++;
	}
	context->total_size = context->offset;
}

String8
SerializeClassMetadata(Arena *arena, ClassMetadata *metadata)
{
	Temp scratch = ScratchBegin(&arena, 1);
	String8List result_list = { 0 };
	Str8ListPushF(scratch.arena, &result_list,
	              "{\n");
	Str8ListPushF(scratch.arena, &result_list,
	              "\tStr8Lit(\"%.*s\"),\n",
	              metadata->name.size, metadata->name.str);
	Str8ListPushF(scratch.arena, &result_list,
	              "\t%d,\n",
	              metadata->size);
	Str8ListPushF(scratch.arena, &result_list,
	              "\t%d,\n",
	              metadata->members_count);
	Str8ListPushF(scratch.arena, &result_list, "\t{\n");


	for (int i = 0; i < metadata->members_count; i++)
	{

		Str8ListPushF(scratch.arena, &result_list, "\t\t{\n");
		ClassMemberMetadata mem = metadata->members[i];
		Str8ListPushF(scratch.arena, &result_list, "\t\t\t{\n");

		Str8ListPushF(scratch.arena, &result_list,
		              "\t\t\t\tStr8Lit(\"%.*s\"),\n",
					mem.mem.name.size, mem.mem.name.str);
		// TODO(agw): replace with cardinality name 
		Str8ListPushF(scratch.arena, &result_list,
		              "\t\t\t\t%d,\n",
					mem.mem.cardinality);

		Str8ListPushF(scratch.arena, &result_list,
		              "\t\t\t\t{},\n",
					mem.mem.cardinality);

		// TODO(agw): replace with ClassMemberType name
		Str8ListPushF(scratch.arena, &result_list,
		              "\t\t\t\t%d\n",
					mem.mem.type);

		Str8ListPushF(scratch.arena, &result_list, "\t\t\t},\n" );

		Str8ListPushF(scratch.arena, &result_list,
					"\t\t\t%d\n",
					mem.offset, mem.offset);
		Str8ListPushF(scratch.arena, &result_list, "\t\t}");
		if (i != metadata->members_count - 1)
		{
			Str8ListPushF(scratch.arena, &result_list, ",");
		}
		Str8ListPushF(scratch.arena, &result_list, "\n");
	}
	Str8ListPushF(scratch.arena, &result_list, "\t}\n");

	Str8ListPushF(scratch.arena, &result_list,
	              "}\n");
	String8 result = Str8ListJoin(arena, result_list, 0);
	ScratchEnd(scratch);
	return result;
}

U8
MemberSize(ClassMember *mem)
{
	if (mem->type == ClassMemberType::Single)
	{
		return value_type_to_size[(int)mem->value_type.single.type].size;
	}

	if (mem->type == ClassMemberType::Enum)
	{
		return ENUM_SIZE;
	}

	if (mem->type == ClassMemberType::Union)
	{
		U8 max_size = 0;
		for (int i = 0; i < mem->value_type.types.num_types; i++)
		{
			ValueType type = mem->value_type.types.types[i];
			U8 size = value_type_to_size[(int)type].size;
			if (size > max_size) max_size = size;
		}
		return max_size;
	}

	Assert(false);
}


ClassMetadata*
ClassMetadataFromClassDefinition(Arena *arena, ClassDefinition *def)
{
	ClassMetadata *meta = PushStruct(arena, ClassMetadata);
	meta->name = def->name;
	meta->members_count = def->members.count;
	meta->members = PushArray(arena, ClassMemberMetadata, def->members.count);

	OffsetContext offset_context = { 0 };

	int index = 0;
	for (ClassMemberNode *node = def->members.first;
		node;
		node = node->next, index++)
	{
		U8 size = MemberSize(&node->mem);
		U16 offset = OffsetContext_Increase(&offset_context, size);
		meta->members[index] = {
			node->mem,
			offset
		};
	}

	OffsetContext_Finish(&offset_context);
	meta->size = offset_context.total_size;

	return meta;
}