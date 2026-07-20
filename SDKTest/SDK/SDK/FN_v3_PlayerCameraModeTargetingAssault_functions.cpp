#include "pch.h"

#include "FN_v3_PlayerCameraModeTargetingAssault_classes.h"

UClass* Uv3_PlayerCameraModeTargetingAssault_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Blueprints/Camera/v3_MPR/v3_PlayerCameraModeTargetingAssault.v3_PlayerCameraModeTargetingAssault_C");

	return Class;
}

