#include "pch.h"

#include "FN_v1_PlayerCameraModeBase_classes.h"

UClass* Uv1_PlayerCameraModeBase_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Blueprints/Camera/Laurent_v1/v1_PlayerCameraModeBase.v1_PlayerCameraModeBase_C");

	return Class;
}

