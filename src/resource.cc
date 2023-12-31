
FhirPath
FhirPathFromString8(Arena *arena, String8 path) 
{
	String8 splits[] = {Str8Lit(".")};
	String8List strs = StrSplit8(arena, path, ArrayCount(splits), splits);
	FhirPath fhir_path;
	fhir_path.parts = strs;
	return fhir_path;
}

String8
Str8FromFhirPath(Arena* arena, FhirPath path)
{
	StringJoin params = { 0 };
	params.sep = Str8Lit(".");
	return Str8ListJoin(arena, path.parts, &params);
}

String8
FhirPathFinalPart(Arena *arena, FhirPath path)
{
	if (path.parts.node_count == 0) return Str8Lit("");
	return PushStr8Copy(arena, path.parts.last->string);
}

FhirPath
FhirPathWithoutFront(Arena *arena, FhirPath path)
{
	if (path.parts.node_count == 0) return path;
	FhirPath next_path;
	String8List *parts_array = PushArray(arena, String8List, 1);
	parts_array->node_count = path.parts.node_count - 1;
	parts_array->first = path.parts.first->next;
	next_path.parts = *parts_array;
	return next_path;
}

FhirPath
FhirPathWithoutEnd(Arena *arena, FhirPath path)
{
	if (path.parts.node_count <= 1) return path;
	FhirPath next_path;
	String8List *parts_array = PushArray(arena, String8List, 1);
	parts_array->node_count = path.parts.node_count - 1;
	parts_array->first = path.parts.first;
	String8Node *ptr = path.parts.first;
	for (int i = 0; i < parts_array->node_count-1; i++)
	{
		ptr = ptr->next;
	}
	parts_array->last = ptr;
	next_path.parts = *parts_array;
	return next_path;
}

Resource*
ResourceGetSubResource(Arena *arena, Resource *res, FhirPath resource_path, bool use_end)
{
	if (!res->sub_resources) return nullptr;
	Temp scratch = ScratchBegin(&arena, 1);
	FhirPath path_to_check = resource_path;
	if (!use_end)
	{
		path_to_check = FhirPathWithoutEnd(scratch.arena, path_to_check);
	}
	ResourceNode *ptr = res->sub_resources->first;
	for (int i = 0; i < res->sub_resources->count; i++, ptr = ptr->next)
	{
		Resource resource = ptr->resource;
		if (resource.sub_resources->count > 0) 
		{
			Resource *possible_sub = ResourceGetSubResource(arena, &resource, path_to_check, true);
			if (possible_sub)
			{
				return possible_sub;
			}
		}
        
		bool matches = true;
        
		FhirPath res_fhir_path = FhirPathFromString8(scratch.arena, resource.name);
        
		if (res_fhir_path.parts.node_count != path_to_check.parts.node_count)
		{
			continue;
		}
        
		String8Node *res_part = res_fhir_path.parts.first;
		String8Node *without_end_part = path_to_check.parts.first;
		for (int j = 0; j < res_fhir_path.parts.node_count; j++)
		{
			if (!Str8Match(res_part->string, without_end_part->string, 0))
			{
				matches = false;
				break;
			}
			res_part = res_part->next;
			without_end_part = without_end_part->next;
		}
        
        
		if (matches) {
			ScratchEnd(scratch);
			return &ptr->resource;
		}
        
	}
    
	ScratchEnd(scratch);
	return nullptr;
}

B32
ResourceHasInherited(Resource *res, String8 resource_name)
{
	String8Node *ptr = res->inherits.first;
	for (int i = 0; i < res->inherits.node_count; i++)
	{
		if (Str8Match(resource_name, ptr->string, 0)) {
			return true;
		}
		ptr = ptr->next;
	}
	return false;
}

void
ResourceAddInherited(Arena *arena, Resource *res, FhirPath path, String8 resource_name)
{
	Resource *to_modify = res; 
	Resource *subresource = ResourceGetSubResource(arena, res, path, false);
	if (ResourceHasInherited(res, resource_name)) {
		// NOTE(alex): we have already indicated that a resource depends on another, continue;
		return;
		//ResourceAddInherited(arena, subresource, FhirPathWithoutFront(arena, path), resource_name);
	}
    
	Str8ListPush(arena, &to_modify->inherits, resource_name);
}

Cardinality
CardinalityFromElementDefinition(ElementDefinition *elem_def)
{
	if (elem_def->max.size == 0) return Cardinality::Unknown;
	B32 max_is_zero = Str8Match(elem_def->max, Str8Lit("0"), 0);
	B32 max_is_one = Str8Match(elem_def->max, Str8Lit("1"), 0);
	B32 max_is_inf = Str8Match(elem_def->max, Str8Lit("*"), 0);
    
	if (elem_def->min == 0.0 && max_is_zero)
	{
		return Cardinality::ZeroToZero;
	} else if (elem_def->min == 0.0 && max_is_inf)
	{
		return Cardinality::ZeroToInf;
	} 
	else if (elem_def->min == 1.0 && max_is_inf) 
	{
		return Cardinality::OneToInf;
	}
	else if (elem_def->min == 0.0 && max_is_one)
	{
		return Cardinality::ZeroToOne;
	}
	else if (elem_def->min == 1.0 && max_is_one)
	{
		return Cardinality::OneToOne;
	}
    
	return Cardinality::Unknown;
}

ResourceMember*
ResourceMemberFromElementDefinition(Arena *arena, ElementDefinition* elem_def)
{
	String8 member_name = FhirPathFinalPart(arena, elem_def->path);
	Cardinality member_card = CardinalityFromElementDefinition(elem_def);
    
	ResourceMember *member = PushArray(arena, ResourceMember, 1);
	member->name = member_name;
	// NOTE(alex): not sure if we want to copy these lists entirely...what happens if element definition is realeased?
	member->value_types = elem_def->value_types;
	member->content_reference = elem_def->content_reference;
	member->cardinality = member_card;
    
	return member;
}

void
ResourceAddSubResource(Arena *arena, Resource *res, FhirPath path, ElementDefinition *elem_def)
{
	Resource *to_modify = res; 
	Resource *subresource = ResourceGetSubResource(arena, res, path, false);
	if (subresource) {
		to_modify = subresource;
	}
    
	Resource *resource = PushArray(arena, Resource, 1);
	resource->name = Str8FromFhirPath(arena, FhirPathFromString8(arena, elem_def->id));
	resource->sub_resources = PushArray(arena, ResourceList, 1);
	ResourceListPush(arena, to_modify->sub_resources, resource);
    
	ResourceMember *member = ResourceMemberFromElementDefinition(arena, elem_def);
	String8 class_type_name = ClassNameFromResourceName(arena, elem_def->id);
    
	String8List member_value_types = { 0 };
	Str8ListPush(arena, &member_value_types, class_type_name);
	member->value_types = member_value_types;
    
	RMListPush(arena, &to_modify->members, member);
}

void
ResourceAddMemberOrSubresourceMember(Arena *arena, Resource *res, FhirPath path, ResourceMember *member)
{
	Resource *to_modify = res; 
	Resource *subresource = ResourceGetSubResource(arena, res, path, false);
	if (subresource) {
		to_modify = subresource;
	}
    
	RMListPush(arena, &to_modify->members, member);
}

Resource*
ResourceFromStructureDefinition(Arena *arena, StructureDefinition* def)
{
	Temp scratch = ScratchBegin(&arena, 1);
	for (int i = 0; i < ArrayCount(str_type_pairs); i++)
	{
		if (Str8Match(def->id.parts.first->string, str_type_pairs[i].str, 0))
		{
			ScratchEnd(scratch);
			return nullptr;
		}
	}
    
	Resource *result = PushArray(arena, Resource, 1);
	result->name = Str8FromFhirPath(arena, def->id);
	result->sub_resources = PushArray(arena, ResourceList, 1);
    
    
	for (int i = 0; i < def->elements.count; i++) {
		ElementDefinition elem = def->elements.v[i];
        
		if (Str8Match(elem.id, Str8FromFhirPath(scratch.arena, def->id), 0)) continue;
		if (elem.base_path.parts.node_count == 0) continue;
        
		String8 base_path = FhirPathFromString8(scratch.arena, elem.id).parts.first->string;
		if (!Str8Match(base_path, def->id.parts.first->string, 0) &&
			!ResourceGetSubResource(arena, result, FhirPathFromString8(scratch.arena, elem.id), true)) {
			ResourceAddInherited(arena, result, elem.path, base_path);
			continue;
		}
        
		if (ElementDefinitionIsResource(&elem)) {
			ResourceAddSubResource(arena, result, elem.path, &elem);
			continue;
		}
        
		// Regular element definition describing something...
		// could resource or sub resource
		String8 member_name = FhirPathFinalPart(arena, elem.path);
		Cardinality member_card = CardinalityFromElementDefinition(&elem);
        
		ResourceMember *member = ResourceMemberFromElementDefinition(arena, &elem);
		ResourceAddMemberOrSubresourceMember(arena, result, elem.path, member);
	}
    
	ScratchEnd(scratch);
	return result;
}