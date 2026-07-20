#include "pch.h"

#include "FN_FrontEndSettingsBP_classes.h"

UClass* AFrontEndSettingsBP_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/FrontEnd/FrontEndSettingsBP.FrontEndSettingsBP_C");

	return Class;
}

// Function /Game/FrontEnd/FrontEndSettingsBP.FrontEndSettingsBP_C:UserConstructionScript
void AFrontEndSettingsBP_C::UserConstructionScript()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/FrontEnd/FrontEndSettingsBP.FrontEndSettingsBP_C:UserConstructionScript");

	ProcessEvent(FN, nullptr);
}

