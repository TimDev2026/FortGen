#include "pch.h"

#include "FN_v1_PlayerCameraModeTargetingScope_classes.h"

UClass* Uv1_PlayerCameraModeTargetingScope_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Blueprints/Camera/Laurent_v1/v1_PlayerCameraModeTargetingScope.v1_PlayerCameraModeTargetingScope_C");

	return Class;
}

