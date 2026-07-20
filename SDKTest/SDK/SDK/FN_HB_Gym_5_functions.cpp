#include "pch.h"

#include "FN_HB_Gym_5_classes.h"

UClass* AHB_Gym_5_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Environments/Homebase/Blueprints/HB_Gym_5.HB_Gym_5_C");

	return Class;
}

