#include "pch.h"

#include "FN_v3_PlayerCameraModeRanged_classes.h"

UClass* Uv3_PlayerCameraModeRanged_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Blueprints/Camera/v3_MPR/v3_PlayerCameraModeRanged.v3_PlayerCameraModeRanged_C");

	return Class;
}

