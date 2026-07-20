#include "pch.h"

#include "FN_SmasherStrength00_classes.h"

UClass* USmasherStrength00_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Building/NavigationAreas/SmasherStrength00.SmasherStrength00_C");

	return Class;
}

