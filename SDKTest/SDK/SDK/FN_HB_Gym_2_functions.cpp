#include "pch.h"

#include "FN_HB_Gym_2_classes.h"

UClass* AHB_Gym_2_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Environments/Homebase/Blueprints/HB_Gym_2.HB_Gym_2_C");

	return Class;
}

