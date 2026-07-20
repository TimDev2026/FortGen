#include "pch.h"

#include "FN_GE_SupplyDrop_Cooldown_classes.h"

UClass* UGE_SupplyDrop_Cooldown_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/Player/Generic/Gadgets/SupplyDrop/GE_SupplyDrop_Cooldown.GE_SupplyDrop_Cooldown_C");

	return Class;
}

