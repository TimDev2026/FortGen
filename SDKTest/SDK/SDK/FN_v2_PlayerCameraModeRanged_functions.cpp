#include "pch.h"

#include "FN_v2_PlayerCameraModeRanged_classes.h"

UClass* Uv2_PlayerCameraModeRanged_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Blueprints/Camera/v2_OverShoulder/v2_PlayerCameraModeRanged.v2_PlayerCameraModeRanged_C");

	return Class;
}

