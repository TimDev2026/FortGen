#include "pch.h"

#include "FN_GE_Ninja_NinjaTraining4_classes.h"

UClass* UGE_Ninja_NinjaTraining4_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/Player/Ninja/Packages/GE_Ninja_NinjaTraining4.GE_Ninja_NinjaTraining4_C");

	return Class;
}

