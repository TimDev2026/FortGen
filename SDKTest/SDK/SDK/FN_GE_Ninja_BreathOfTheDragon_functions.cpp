#include "pch.h"

#include "FN_GE_Ninja_BreathOfTheDragon_classes.h"

UClass* UGE_Ninja_BreathOfTheDragon_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/Player/Ninja/Traits/WayOfTheDragon/GE_Ninja_BreathOfTheDragon.GE_Ninja_BreathOfTheDragon_C");

	return Class;
}

