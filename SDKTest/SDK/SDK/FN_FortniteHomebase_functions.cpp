#include "pch.h"

#include "FN_FortniteHomebase_classes.h"

UClass* AFortniteHomebase_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Maps/FortniteHomebase.FortniteHomebase_C");

	return Class;
}

