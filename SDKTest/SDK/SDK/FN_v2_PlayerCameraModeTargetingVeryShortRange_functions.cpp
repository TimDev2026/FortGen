#include "pch.h"

#include "FN_v2_PlayerCameraModeTargetingVeryShortRange_classes.h"

UClass* Uv2_PlayerCameraModeTargetingVeryShortRange_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Blueprints/Camera/v2_OverShoulder/v2_PlayerCameraModeTargetingVeryShortRange.v2_PlayerCameraModeTargetingVeryShortRange_C");

	return Class;
}

