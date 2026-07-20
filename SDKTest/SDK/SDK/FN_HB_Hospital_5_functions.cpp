#include "pch.h"

#include "FN_HB_Hospital_5_classes.h"

UClass* AHB_Hospital_5_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Environments/Homebase/Blueprints/HB_Hospital_5.HB_Hospital_5_C");

	return Class;
}

