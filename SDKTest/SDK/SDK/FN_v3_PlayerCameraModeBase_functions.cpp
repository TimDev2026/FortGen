#include "pch.h"

#include "FN_v3_PlayerCameraModeBase_classes.h"

UClass* Uv3_PlayerCameraModeBase_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Blueprints/Camera/v3_MPR/v3_PlayerCameraModeBase.v3_PlayerCameraModeBase_C");

	return Class;
}

