#include "pch.h"

#include "FN_v2_PlayerCameraModeTargetingRifle_classes.h"

UClass* Uv2_PlayerCameraModeTargetingRifle_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Blueprints/Camera/v2_OverShoulder/v2_PlayerCameraModeTargetingRifle.v2_PlayerCameraModeTargetingRifle_C");

	return Class;
}

