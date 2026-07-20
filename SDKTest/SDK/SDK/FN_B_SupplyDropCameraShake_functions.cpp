#include "pch.h"

#include "FN_B_SupplyDropCameraShake_classes.h"

UClass* UB_SupplyDropCameraShake_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/Player/Generic/Gadgets/SupplyDrop/B_SupplyDropCameraShake.B_SupplyDropCameraShake_C");

	return Class;
}

