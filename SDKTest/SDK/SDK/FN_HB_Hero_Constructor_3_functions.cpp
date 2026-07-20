#include "pch.h"

#include "FN_HB_Hero_Constructor_3_classes.h"

UClass* AHB_Hero_Constructor_3_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Environments/Homebase/Blueprints/HB_Hero_Constructor_3.HB_Hero_Constructor_3_C");

	return Class;
}

