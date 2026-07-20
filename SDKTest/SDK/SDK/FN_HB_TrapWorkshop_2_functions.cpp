#include "pch.h"

#include "FN_HB_TrapWorkshop_2_classes.h"

UClass* AHB_TrapWorkshop_2_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Environments/Homebase/Blueprints/HB_TrapWorkshop_2.HB_TrapWorkshop_2_C");

	return Class;
}

