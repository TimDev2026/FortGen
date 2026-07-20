#include "pch.h"

#include "FN_GE_Ninja_ReturnOfTheDragon_classes.h"

UClass* UGE_Ninja_ReturnOfTheDragon_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/Player/Ninja/Traits/WayOfTheDragon/GE_Ninja_ReturnOfTheDragon.GE_Ninja_ReturnOfTheDragon_C");

	return Class;
}

