#include "pch.h"

#include "FN_v3_PlayerCameraModeTargetingPistol_classes.h"

UClass* Uv3_PlayerCameraModeTargetingPistol_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Blueprints/Camera/v3_MPR/v3_PlayerCameraModeTargetingPistol.v3_PlayerCameraModeTargetingPistol_C");

	return Class;
}

