#include "pch.h"

#include "FN_v1_PlayerCameraModeMelee_classes.h"

UClass* Uv1_PlayerCameraModeMelee_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Blueprints/Camera/Laurent_v1/v1_PlayerCameraModeMelee.v1_PlayerCameraModeMelee_C");

	return Class;
}

