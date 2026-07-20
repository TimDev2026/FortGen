#include "pch.h"

#include "FN_SmasherStrength02_classes.h"

UClass* USmasherStrength02_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Building/NavigationAreas/SmasherStrength02.SmasherStrength02_C");

	return Class;
}

