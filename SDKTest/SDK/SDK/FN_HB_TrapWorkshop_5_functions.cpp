#include "pch.h"

#include "FN_HB_TrapWorkshop_5_classes.h"

UClass* AHB_TrapWorkshop_5_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Environments/Homebase/Blueprints/HB_TrapWorkshop_5.HB_TrapWorkshop_5_C");

	return Class;
}

