#include "pch.h"

#include "FN_HB_Keep_5_classes.h"

UClass* AHB_Keep_5_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Environments/Homebase/Blueprints/HB_Keep_5.HB_Keep_5_C");

	return Class;
}

