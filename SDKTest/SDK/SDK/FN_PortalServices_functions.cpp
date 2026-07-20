#include "pch.h"

UScriptStruct* FPortalUserIsEntitledToItemResult::StaticStruct()
{
	static UScriptStruct* Struct = nullptr;
	if (!Struct)
		Struct = UObject::StaticFindObject<UScriptStruct>("/Script/PortalServices.PortalUserIsEntitledToItemResult");

	return Struct;
}

UScriptStruct* FPortalUserDetails::StaticStruct()
{
	static UScriptStruct* Struct = nullptr;
	if (!Struct)
		Struct = UObject::StaticFindObject<UScriptStruct>("/Script/PortalServices.PortalUserDetails");

	return Struct;
}

