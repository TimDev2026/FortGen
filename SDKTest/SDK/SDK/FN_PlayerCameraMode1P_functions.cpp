#include "pch.h"

#include "FN_PlayerCameraMode1P_classes.h"

UClass* UPlayerCameraMode1P_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Blueprints/Camera/FirstPerson/PlayerCameraMode1P.PlayerCameraMode1P_C");

	return Class;
}

