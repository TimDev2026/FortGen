#include "pch.h"

#include "FN_GE_Ninja_ShroudOfTheDragon_classes.h"

UClass* UGE_Ninja_ShroudOfTheDragon_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/Player/Ninja/Traits/WayOfTheDragon/GE_Ninja_ShroudOfTheDragon.GE_Ninja_ShroudOfTheDragon_C");

	return Class;
}

