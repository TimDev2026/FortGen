#include "pch.h"

#include "FN_HB_Placement_classes.h"

UClass* AHB_Placement_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Environments/Homebase/Blueprints/HB_Placement.HB_Placement_C");

	return Class;
}

// Function /Game/Environments/Homebase/Blueprints/HB_Placement.HB_Placement_C:UserConstructionScript
void AHB_Placement_C::UserConstructionScript()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Environments/Homebase/Blueprints/HB_Placement.HB_Placement_C:UserConstructionScript");

	ProcessEvent(FN, nullptr);
}

