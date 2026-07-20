#include "pch.h"

#include "FN_FortniteTownmap_classes.h"

UClass* AFortniteTownmap_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Maps/FortniteTownmap.FortniteTownmap_C");

	return Class;
}

