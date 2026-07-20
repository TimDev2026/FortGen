#include "pch.h"

#include "FN_HB_Keep_2_classes.h"

UClass* AHB_Keep_2_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Environments/Homebase/Blueprints/HB_Keep_2.HB_Keep_2_C");

	return Class;
}

