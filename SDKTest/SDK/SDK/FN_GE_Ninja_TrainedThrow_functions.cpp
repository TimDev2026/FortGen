#include "pch.h"

#include "FN_GE_Ninja_TrainedThrow_classes.h"

UClass* UGE_Ninja_TrainedThrow_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/Player/Ninja/Traits/WayOfTheStar/GE_Ninja_TrainedThrow.GE_Ninja_TrainedThrow_C");

	return Class;
}

