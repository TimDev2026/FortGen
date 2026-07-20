#include "pch.h"

#include "FN_SaveFileBuildingInstructionsHandler_KeepCustomization_HomeBase_classes.h"

UClass* ASaveFileBuildingInstructionsHandler_KeepCustomization_HomeBase_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Maps/Test_Maps/TheKeep/SaveFileBuildingInstructionsHandler_KeepCustomization_HomeBase.SaveFileBuildingInstructionsHandler_KeepCustomization_HomeBase_C");

	return Class;
}

// Function /Game/Maps/Test_Maps/TheKeep/SaveFileBuildingInstructionsHandler_KeepCustomization_HomeBase.SaveFileBuildingInstructionsHandler_KeepCustomization_HomeBase_C:UserConstructionScript
void ASaveFileBuildingInstructionsHandler_KeepCustomization_HomeBase_C::UserConstructionScript()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Maps/Test_Maps/TheKeep/SaveFileBuildingInstructionsHandler_KeepCustomization_HomeBase.SaveFileBuildingInstructionsHandler_KeepCustomization_HomeBase_C:UserConstructionScript");

	ProcessEvent(FN, nullptr);
}

