#include "pch.h"

#include "FN_ShieldHitGround_CameraShake_classes.h"

UClass* UShieldHitGround_CameraShake_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/Player/Constructor/Gadgets/BullRush/ShieldHitGround_CameraShake.ShieldHitGround_CameraShake_C");

	return Class;
}

