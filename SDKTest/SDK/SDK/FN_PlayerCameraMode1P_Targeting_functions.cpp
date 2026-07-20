#include "pch.h"

#include "FN_PlayerCameraMode1P_Targeting_classes.h"

UClass* UPlayerCameraMode1P_Targeting_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Blueprints/Camera/FirstPerson/PlayerCameraMode1P_Targeting.PlayerCameraMode1P_Targeting_C");

	return Class;
}

