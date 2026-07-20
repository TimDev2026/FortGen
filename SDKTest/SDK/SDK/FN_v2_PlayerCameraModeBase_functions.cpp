#include "pch.h"

#include "FN_v2_PlayerCameraModeBase_classes.h"

UClass* Uv2_PlayerCameraModeBase_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Blueprints/Camera/v2_OverShoulder/v2_PlayerCameraModeBase.v2_PlayerCameraModeBase_C");

	return Class;
}

