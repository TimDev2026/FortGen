#include "pch.h"

#include "FN_v2_PlayerCameraModeTargetingScope_classes.h"

UClass* Uv2_PlayerCameraModeTargetingScope_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Blueprints/Camera/v2_OverShoulder/v2_PlayerCameraModeTargetingScope.v2_PlayerCameraModeTargetingScope_C");

	return Class;
}

