#include "pch.h"

#include "FN_v1_PlayerCameraModeTargetingRifle_classes.h"

UClass* Uv1_PlayerCameraModeTargetingRifle_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Blueprints/Camera/Laurent_v1/v1_PlayerCameraModeTargetingRifle.v1_PlayerCameraModeTargetingRifle_C");

	return Class;
}

