#include "pch.h"

#include "FN_v2_PlayerCameraModeTargetingPistol_classes.h"

UClass* Uv2_PlayerCameraModeTargetingPistol_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Blueprints/Camera/v2_OverShoulder/v2_PlayerCameraModeTargetingPistol.v2_PlayerCameraModeTargetingPistol_C");

	return Class;
}

