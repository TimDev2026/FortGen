#include "pch.h"

#include "FN_v1_PlayerCameraModeTargetingVeryShortRange_classes.h"

UClass* Uv1_PlayerCameraModeTargetingVeryShortRange_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Blueprints/Camera/Laurent_v1/v1_PlayerCameraModeTargetingVeryShortRange.v1_PlayerCameraModeTargetingVeryShortRange_C");

	return Class;
}

