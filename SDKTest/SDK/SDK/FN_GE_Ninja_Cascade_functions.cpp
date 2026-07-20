#include "pch.h"

#include "FN_GE_Ninja_Cascade_classes.h"

UClass* UGE_Ninja_Cascade_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/Player/Ninja/Traits/WayOfTheStar/GE_Ninja_Cascade.GE_Ninja_Cascade_C");

	return Class;
}

