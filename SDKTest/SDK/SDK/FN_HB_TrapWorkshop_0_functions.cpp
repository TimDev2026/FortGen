#include "pch.h"

#include "FN_HB_TrapWorkshop_0_classes.h"

UClass* AHB_TrapWorkshop_0_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Environments/Homebase/Blueprints/HB_TrapWorkshop_0.HB_TrapWorkshop_0_C");

	return Class;
}

