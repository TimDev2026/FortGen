#include "pch.h"

#include "FN_Targeting3PCamera_LongRange_classes.h"

UClass* UTargeting3PCamera_LongRange_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Blueprints/Camera/Original/Targeting3PCamera_LongRange.Targeting3PCamera_LongRange_C");

	return Class;
}

