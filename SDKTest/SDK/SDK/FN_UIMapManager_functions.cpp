#include "pch.h"

#include "FN_UIMapManager_classes.h"

UClass* AUIMapManager_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/UI/IngameMap/UIMapManager.UIMapManager_C");

	return Class;
}

// Function /Game/UI/IngameMap/UIMapManager.UIMapManager_C:UserConstructionScript
void AUIMapManager_C::UserConstructionScript()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/IngameMap/UIMapManager.UIMapManager_C:UserConstructionScript");

	ProcessEvent(FN, nullptr);
}

