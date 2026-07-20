#include "pch.h"

#include "FN_HB_Dojo_1_classes.h"

UClass* AHB_Dojo_1_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Environments/Homebase/Blueprints/HB_Dojo_1.HB_Dojo_1_C");

	return Class;
}

// Function /Game/Environments/Homebase/Blueprints/HB_Dojo_1.HB_Dojo_1_C:UserConstructionScript
void AHB_Dojo_1_C::UserConstructionScript()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Environments/Homebase/Blueprints/HB_Dojo_1.HB_Dojo_1_C:UserConstructionScript");

	ProcessEvent(FN, nullptr);
}

