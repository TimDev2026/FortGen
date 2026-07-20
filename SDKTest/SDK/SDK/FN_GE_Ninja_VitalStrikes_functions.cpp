#include "pch.h"

#include "FN_GE_Ninja_VitalStrikes_classes.h"

UClass* UGE_Ninja_VitalStrikes_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/Player/Ninja/Traits/WayOfTheStar/GE_Ninja_VitalStrikes.GE_Ninja_VitalStrikes_C");

	return Class;
}

