#include "pch.h"

#include "FN_HB_FiringRange_0_classes.h"

UClass* AHB_FiringRange_0_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Environments/Homebase/Blueprints/HB_FiringRange_0.HB_FiringRange_0_C");

	return Class;
}

// Function /Game/Environments/Homebase/Blueprints/HB_FiringRange_0.HB_FiringRange_0_C:UserConstructionScript
void AHB_FiringRange_0_C::UserConstructionScript()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Environments/Homebase/Blueprints/HB_FiringRange_0.HB_FiringRange_0_C:UserConstructionScript");

	ProcessEvent(FN, nullptr);
}

