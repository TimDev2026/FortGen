#include "pch.h"

#include "FN_HB_TrapWorkshop_1_classes.h"

UClass* AHB_TrapWorkshop_1_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Environments/Homebase/Blueprints/HB_TrapWorkshop_1.HB_TrapWorkshop_1_C");

	return Class;
}

