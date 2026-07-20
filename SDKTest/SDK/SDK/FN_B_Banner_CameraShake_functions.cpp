#include "pch.h"

#include "FN_B_Banner_CameraShake_classes.h"

UClass* UB_Banner_CameraShake_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/Player/Generic/Gadgets/Banner/B_Banner_CameraShake.B_Banner_CameraShake_C");

	return Class;
}

