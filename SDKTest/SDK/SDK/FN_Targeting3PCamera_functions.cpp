#include "pch.h"

#include "FN_Targeting3PCamera_classes.h"

UClass* UTargeting3PCamera_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Blueprints/Camera/Original/Targeting3PCamera.Targeting3PCamera_C");

	return Class;
}

