#include "pch.h"

#include "FN_GE_Ninja_ThrowingStarsDamageApplyPoison_classes.h"

UClass* UGE_Ninja_ThrowingStarsDamageApplyPoison_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/Player/Ninja/Gadgets/ThrowingStars/GE_Ninja_ThrowingStarsDamageApplyPoison.GE_Ninja_ThrowingStarsDamageApplyPoison_C");

	return Class;
}

