#include "pch.h"

#include "FN_HB_Slot_classes.h"

UClass* AHB_Slot_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Environments/Homebase/Blueprints/HB_Slot.HB_Slot_C");

	return Class;
}

