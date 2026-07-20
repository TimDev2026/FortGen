#include "pch.h"

#include "FN_Ranged3PCamera_classes.h"

UClass* URanged3PCamera_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Blueprints/Camera/Original/Ranged3PCamera.Ranged3PCamera_C");

	return Class;
}

