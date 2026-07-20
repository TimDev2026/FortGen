#include "pch.h"

#include "FN_Targeting3PCamera_MidRange_classes.h"

UClass* UTargeting3PCamera_MidRange_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Blueprints/Camera/Original/Targeting3PCamera_MidRange.Targeting3PCamera_MidRange_C");

	return Class;
}

