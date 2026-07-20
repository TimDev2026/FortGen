#include "pch.h"

#include "FN_GE_Constructor_ExitPlanApplied_classes.h"

UClass* UGE_Constructor_ExitPlanApplied_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/Player/Constructor/Traits/CreativeEngineering/GE_Constructor_ExitPlanApplied.GE_Constructor_ExitPlanApplied_C");

	return Class;
}

