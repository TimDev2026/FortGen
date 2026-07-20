#include "pch.h"

#include "FN_GE_InsideSlowField_classes.h"

UClass* UGE_InsideSlowField_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/Player/Generic/Gadgets/SlowField/GE_InsideSlowField.GE_InsideSlowField_C");

	return Class;
}

