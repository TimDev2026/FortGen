#include "pch.h"

#include "FN_MainPlayerCamera_classes.h"

UClass* AMainPlayerCamera_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Blueprints/Camera/Original/MainPlayerCamera.MainPlayerCamera_C");

	return Class;
}

