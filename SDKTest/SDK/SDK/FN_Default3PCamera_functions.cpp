#include "pch.h"

#include "FN_Default3PCamera_classes.h"

UClass* UDefault3PCamera_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Blueprints/Camera/Original/Default3PCamera.Default3PCamera_C");

	return Class;
}

