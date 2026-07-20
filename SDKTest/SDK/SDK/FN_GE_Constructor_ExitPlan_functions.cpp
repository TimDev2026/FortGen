#include "pch.h"

#include "FN_GE_Constructor_ExitPlan_classes.h"

UClass* UGE_Constructor_ExitPlan_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/Player/Constructor/Traits/CreativeEngineering/GE_Constructor_ExitPlan.GE_Constructor_ExitPlan_C");

	return Class;
}

