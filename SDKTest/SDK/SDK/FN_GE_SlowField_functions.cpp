#include "pch.h"

#include "FN_GE_SlowField_classes.h"

UClass* UGE_SlowField_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/Player/Generic/Gadgets/SlowField/GE_SlowField.GE_SlowField_C");

	return Class;
}

