#include "pch.h"

#include "FN_B_AirstrikeCameraShake_classes.h"

UClass* UB_AirstrikeCameraShake_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/Player/Generic/Gadgets/AirStrike/B_AirstrikeCameraShake.B_AirstrikeCameraShake_C");

	return Class;
}

