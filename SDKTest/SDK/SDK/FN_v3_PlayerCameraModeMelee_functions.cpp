#include "pch.h"

#include "FN_v3_PlayerCameraModeMelee_classes.h"

UClass* Uv3_PlayerCameraModeMelee_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Blueprints/Camera/v3_MPR/v3_PlayerCameraModeMelee.v3_PlayerCameraModeMelee_C");

	return Class;
}

