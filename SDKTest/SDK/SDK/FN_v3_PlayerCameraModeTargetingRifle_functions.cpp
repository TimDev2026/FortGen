#include "pch.h"

#include "FN_v3_PlayerCameraModeTargetingRifle_classes.h"

UClass* Uv3_PlayerCameraModeTargetingRifle_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Blueprints/Camera/v3_MPR/v3_PlayerCameraModeTargetingRifle.v3_PlayerCameraModeTargetingRifle_C");

	return Class;
}

