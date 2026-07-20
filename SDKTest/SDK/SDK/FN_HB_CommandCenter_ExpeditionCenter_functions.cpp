#include "pch.h"

#include "FN_HB_CommandCenter_ExpeditionCenter_classes.h"

UClass* AHB_CommandCenter_ExpeditionCenter_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Environments/Homebase/Blueprints/HB_CommandCenter_ExpeditionCenter.HB_CommandCenter_ExpeditionCenter_C");

	return Class;
}

// Function /Game/Environments/Homebase/Blueprints/HB_CommandCenter_ExpeditionCenter.HB_CommandCenter_ExpeditionCenter_C:UserConstructionScript
void AHB_CommandCenter_ExpeditionCenter_C::UserConstructionScript()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Environments/Homebase/Blueprints/HB_CommandCenter_ExpeditionCenter.HB_CommandCenter_ExpeditionCenter_C:UserConstructionScript");

	ProcessEvent(FN, nullptr);
}

