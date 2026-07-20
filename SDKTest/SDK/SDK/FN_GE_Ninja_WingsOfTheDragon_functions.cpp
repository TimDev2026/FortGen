#include "pch.h"

#include "FN_GE_Ninja_WingsOfTheDragon_classes.h"

UClass* UGE_Ninja_WingsOfTheDragon_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/Player/Ninja/Traits/WayOfTheDragon/GE_Ninja_WingsOfTheDragon.GE_Ninja_WingsOfTheDragon_C");

	return Class;
}

