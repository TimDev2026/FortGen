#include "pch.h"

#include "FN_GE_Ninja_RainOfDeath_classes.h"

UClass* UGE_Ninja_RainOfDeath_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/Player/Ninja/Traits/WayOfTheStar/GE_Ninja_RainOfDeath.GE_Ninja_RainOfDeath_C");

	return Class;
}

