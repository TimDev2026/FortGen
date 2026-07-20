#include "pch.h"

#include "FN_HB_Keep_4_classes.h"

UClass* AHB_Keep_4_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Environments/Homebase/Blueprints/HB_Keep_4.HB_Keep_4_C");

	return Class;
}

