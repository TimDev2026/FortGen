#include "pch.h"

#include "FN_WorldLightingMenu_classes.h"

UClass* AWorldLightingMenu_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Maps/WorldLightingMenu.WorldLightingMenu_C");

	return Class;
}

