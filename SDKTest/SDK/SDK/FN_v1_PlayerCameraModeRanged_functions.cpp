#include "pch.h"

#include "FN_v1_PlayerCameraModeRanged_classes.h"

UClass* Uv1_PlayerCameraModeRanged_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Blueprints/Camera/Laurent_v1/v1_PlayerCameraModeRanged.v1_PlayerCameraModeRanged_C");

	return Class;
}

