#include "pch.h"

#include "FN_v3_PlayerCameraModeTargetingVeryShortRange_classes.h"

UClass* Uv3_PlayerCameraModeTargetingVeryShortRange_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Blueprints/Camera/v3_MPR/v3_PlayerCameraModeTargetingVeryShortRange.v3_PlayerCameraModeTargetingVeryShortRange_C");

	return Class;
}

