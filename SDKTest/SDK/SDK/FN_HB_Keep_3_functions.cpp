#include "pch.h"

#include "FN_HB_Keep_3_classes.h"

UClass* AHB_Keep_3_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Environments/Homebase/Blueprints/HB_Keep_3.HB_Keep_3_C");

	return Class;
}

