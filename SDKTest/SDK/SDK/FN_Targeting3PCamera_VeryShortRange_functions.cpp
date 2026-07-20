#include "pch.h"

#include "FN_Targeting3PCamera_VeryShortRange_classes.h"

UClass* UTargeting3PCamera_VeryShortRange_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Blueprints/Camera/Original/Targeting3PCamera_VeryShortRange.Targeting3PCamera_VeryShortRange_C");

	return Class;
}

