#include "pch.h"

#include "FN_v1_PlayerCameraModeTargetingPistol_classes.h"

UClass* Uv1_PlayerCameraModeTargetingPistol_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Blueprints/Camera/Laurent_v1/v1_PlayerCameraModeTargetingPistol.v1_PlayerCameraModeTargetingPistol_C");

	return Class;
}

