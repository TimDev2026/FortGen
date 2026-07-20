#include "pch.h"

#include "FN_GE_Ninja_NinjaTraining5_classes.h"

UClass* UGE_Ninja_NinjaTraining5_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/Player/Ninja/Packages/GE_Ninja_NinjaTraining5.GE_Ninja_NinjaTraining5_C");

	return Class;
}

