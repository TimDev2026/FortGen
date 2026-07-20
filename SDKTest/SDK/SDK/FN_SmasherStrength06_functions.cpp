#include "pch.h"

#include "FN_SmasherStrength06_classes.h"

UClass* USmasherStrength06_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Building/NavigationAreas/SmasherStrength06.SmasherStrength06_C");

	return Class;
}

