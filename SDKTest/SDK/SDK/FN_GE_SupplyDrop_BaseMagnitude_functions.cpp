#include "pch.h"

#include "FN_GE_SupplyDrop_BaseMagnitude_classes.h"

UClass* UGE_SupplyDrop_BaseMagnitude_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/Player/Generic/Gadgets/SupplyDrop/GE_SupplyDrop_BaseMagnitude.GE_SupplyDrop_BaseMagnitude_C");

	return Class;
}

