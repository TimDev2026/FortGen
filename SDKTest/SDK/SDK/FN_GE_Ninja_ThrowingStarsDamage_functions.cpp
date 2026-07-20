#include "pch.h"

#include "FN_GE_Ninja_ThrowingStarsDamage_classes.h"

UClass* UGE_Ninja_ThrowingStarsDamage_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/Player/Ninja/Gadgets/ThrowingStars/GE_Ninja_ThrowingStarsDamage.GE_Ninja_ThrowingStarsDamage_C");

	return Class;
}

