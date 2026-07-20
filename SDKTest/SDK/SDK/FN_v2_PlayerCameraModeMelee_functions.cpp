#include "pch.h"

#include "FN_v2_PlayerCameraModeMelee_classes.h"

UClass* Uv2_PlayerCameraModeMelee_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Blueprints/Camera/v2_OverShoulder/v2_PlayerCameraModeMelee.v2_PlayerCameraModeMelee_C");

	return Class;
}

