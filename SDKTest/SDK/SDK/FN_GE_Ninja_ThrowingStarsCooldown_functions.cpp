#include "pch.h"

#include "FN_GE_Ninja_ThrowingStarsCooldown_classes.h"

UClass* UGE_Ninja_ThrowingStarsCooldown_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/Player/Ninja/Gadgets/ThrowingStars/GE_Ninja_ThrowingStarsCooldown.GE_Ninja_ThrowingStarsCooldown_C");

	return Class;
}

