#include "pch.h"

#include "FN_SmasherStrength04_classes.h"

UClass* USmasherStrength04_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Building/NavigationAreas/SmasherStrength04.SmasherStrength04_C");

	return Class;
}

