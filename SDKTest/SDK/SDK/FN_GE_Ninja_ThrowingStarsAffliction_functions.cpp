#include "pch.h"

#include "FN_GE_Ninja_ThrowingStarsAffliction_classes.h"

UClass* UGE_Ninja_ThrowingStarsAffliction_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/Player/Ninja/Gadgets/ThrowingStars/GE_Ninja_ThrowingStarsAffliction.GE_Ninja_ThrowingStarsAffliction_C");

	return Class;
}

