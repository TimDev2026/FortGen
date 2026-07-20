#include "pch.h"

#include "FN_v3_PlayerCameraModeTargetingScope_classes.h"

UClass* Uv3_PlayerCameraModeTargetingScope_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Blueprints/Camera/v3_MPR/v3_PlayerCameraModeTargetingScope.v3_PlayerCameraModeTargetingScope_C");

	return Class;
}

