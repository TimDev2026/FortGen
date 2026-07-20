#include "pch.h"

#include "FN_B_PlasmaCameraShake_classes.h"

UClass* UB_PlasmaCameraShake_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/Player/Generic/Gadgets/PlasmaBomb/B_PlasmaCameraShake.B_PlasmaCameraShake_C");

	return Class;
}

