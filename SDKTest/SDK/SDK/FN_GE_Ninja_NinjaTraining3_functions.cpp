#include "pch.h"

#include "FN_GE_Ninja_NinjaTraining3_classes.h"

UClass* UGE_Ninja_NinjaTraining3_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/Player/Ninja/Packages/GE_Ninja_NinjaTraining3.GE_Ninja_NinjaTraining3_C");

	return Class;
}

