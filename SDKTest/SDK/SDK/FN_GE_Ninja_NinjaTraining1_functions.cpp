#include "pch.h"

#include "FN_GE_Ninja_NinjaTraining1_classes.h"

UClass* UGE_Ninja_NinjaTraining1_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/Player/Ninja/Packages/GE_Ninja_NinjaTraining1.GE_Ninja_NinjaTraining1_C");

	return Class;
}

