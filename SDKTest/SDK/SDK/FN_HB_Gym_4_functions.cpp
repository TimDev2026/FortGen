#include "pch.h"

#include "FN_HB_Gym_4_classes.h"

UClass* AHB_Gym_4_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Environments/Homebase/Blueprints/HB_Gym_4.HB_Gym_4_C");

	return Class;
}

