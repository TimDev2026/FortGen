#include "pch.h"

#include "FN_McpProfileSys_classes.h"

UClass* UMcpProfile::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/McpProfileSys.McpProfile");

	return Class;
}

// Function /Script/McpProfileSys.McpProfile:QueryProfile
void UMcpProfile::QueryProfile(FBaseUrlContext Context)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/McpProfileSys.McpProfile:QueryProfile");

	FUMcpProfile_QueryProfile_Params Parms;

	Parms.Context = Context;

	ProcessEvent(FN, &Parms);
}

// Function /Script/McpProfileSys.McpProfile:DeleteProfile
void UMcpProfile::DeleteProfile(FClientUrlContext Context)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/McpProfileSys.McpProfile:DeleteProfile");

	FUMcpProfile_DeleteProfile_Params Parms;

	Parms.Context = Context;

	ProcessEvent(FN, &Parms);
}

// Function /Script/McpProfileSys.McpProfile:DeleteAllProfiles
void UMcpProfile::DeleteAllProfiles(FClientUrlContext Context)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/McpProfileSys.McpProfile:DeleteAllProfiles");

	FUMcpProfile_DeleteAllProfiles_Params Parms;

	Parms.Context = Context;

	ProcessEvent(FN, &Parms);
}

UClass* UMcpItemAware::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/McpProfileSys.McpItemAware");

	return Class;
}

UClass* UMcpProfileGroup::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/McpProfileSys.McpProfileGroup");

	return Class;
}

UClass* UMcpProfileManager::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/McpProfileSys.McpProfileManager");

	return Class;
}

UScriptStruct* FMcpLootResult::StaticStruct()
{
	static UScriptStruct* Struct = nullptr;
	if (!Struct)
		Struct = UObject::StaticFindObject<UScriptStruct>("/Script/McpProfileSys.McpLootResult");

	return Struct;
}

UScriptStruct* FMcpLootEntry::StaticStruct()
{
	static UScriptStruct* Struct = nullptr;
	if (!Struct)
		Struct = UObject::StaticFindObject<UScriptStruct>("/Script/McpProfileSys.McpLootEntry");

	return Struct;
}

UScriptStruct* FProfilePendingHttpRequest::StaticStruct()
{
	static UScriptStruct* Struct = nullptr;
	if (!Struct)
		Struct = UObject::StaticFindObject<UScriptStruct>("/Script/McpProfileSys.ProfilePendingHttpRequest");

	return Struct;
}

UScriptStruct* FProfileEntry::StaticStruct()
{
	static UScriptStruct* Struct = nullptr;
	if (!Struct)
		Struct = UObject::StaticFindObject<UScriptStruct>("/Script/McpProfileSys.ProfileEntry");

	return Struct;
}

UScriptStruct* FClientUrlContext::StaticStruct()
{
	static UScriptStruct* Struct = nullptr;
	if (!Struct)
		Struct = UObject::StaticFindObject<UScriptStruct>("/Script/McpProfileSys.ClientUrlContext");

	return Struct;
}

UScriptStruct* FBaseUrlContext::StaticStruct()
{
	static UScriptStruct* Struct = nullptr;
	if (!Struct)
		Struct = UObject::StaticFindObject<UScriptStruct>("/Script/McpProfileSys.BaseUrlContext");

	return Struct;
}

UScriptStruct* FDedicatedServerUrlContext::StaticStruct()
{
	static UScriptStruct* Struct = nullptr;
	if (!Struct)
		Struct = UObject::StaticFindObject<UScriptStruct>("/Script/McpProfileSys.DedicatedServerUrlContext");

	return Struct;
}

UScriptStruct* FMcpProfileChangeRequest::StaticStruct()
{
	static UScriptStruct* Struct = nullptr;
	if (!Struct)
		Struct = UObject::StaticFindObject<UScriptStruct>("/Script/McpProfileSys.McpProfileChangeRequest");

	return Struct;
}

UScriptStruct* FMcpChangeAttributesRequest::StaticStruct()
{
	static UScriptStruct* Struct = nullptr;
	if (!Struct)
		Struct = UObject::StaticFindObject<UScriptStruct>("/Script/McpProfileSys.McpChangeAttributesRequest");

	return Struct;
}

UScriptStruct* FMcpChangeQuantityRequest::StaticStruct()
{
	static UScriptStruct* Struct = nullptr;
	if (!Struct)
		Struct = UObject::StaticFindObject<UScriptStruct>("/Script/McpProfileSys.McpChangeQuantityRequest");

	return Struct;
}

UScriptStruct* FMcpRemoveItemRequest::StaticStruct()
{
	static UScriptStruct* Struct = nullptr;
	if (!Struct)
		Struct = UObject::StaticFindObject<UScriptStruct>("/Script/McpProfileSys.McpRemoveItemRequest");

	return Struct;
}

UScriptStruct* FMcpAddItemRequest::StaticStruct()
{
	static UScriptStruct* Struct = nullptr;
	if (!Struct)
		Struct = UObject::StaticFindObject<UScriptStruct>("/Script/McpProfileSys.McpAddItemRequest");

	return Struct;
}

UScriptStruct* FProfileGroupEntry::StaticStruct()
{
	static UScriptStruct* Struct = nullptr;
	if (!Struct)
		Struct = UObject::StaticFindObject<UScriptStruct>("/Script/McpProfileSys.ProfileGroupEntry");

	return Struct;
}

