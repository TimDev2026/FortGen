#include "pch.h"

#include "FN_HB_TrapWorkshop_4_classes.h"

UClass* AHB_TrapWorkshop_4_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Environments/Homebase/Blueprints/HB_TrapWorkshop_4.HB_TrapWorkshop_4_C");

	return Class;
}

