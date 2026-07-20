#include "pch.h"

#include "FN_GE_Ninja_ReturnOfTheDragonSnare_classes.h"

UClass* UGE_Ninja_ReturnOfTheDragonSnare_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/Player/Ninja/Traits/Mobility/GE_Ninja_ReturnOfTheDragonSnare.GE_Ninja_ReturnOfTheDragonSnare_C");

	return Class;
}

