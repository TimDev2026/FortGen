#include "pch.h"

#include "FN_HB_Keep_1_classes.h"

UClass* AHB_Keep_1_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Environments/Homebase/Blueprints/HB_Keep_1.HB_Keep_1_C");

	return Class;
}

