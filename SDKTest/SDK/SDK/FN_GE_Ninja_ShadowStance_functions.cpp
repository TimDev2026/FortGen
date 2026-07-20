#include "pch.h"

#include "FN_GE_Ninja_ShadowStance_classes.h"

UClass* UGE_Ninja_ShadowStance_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/Player/Ninja/Traits/Shinobi/GE_Ninja_ShadowStance.GE_Ninja_ShadowStance_C");

	return Class;
}

