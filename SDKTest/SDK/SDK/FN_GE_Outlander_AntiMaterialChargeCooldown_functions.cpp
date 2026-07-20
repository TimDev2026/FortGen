#include "pch.h"

#include "FN_GE_Outlander_AntiMaterialChargeCooldown_classes.h"

UClass* UGE_Outlander_AntiMaterialChargeCooldown_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/Player/Outlander/Gadgets/AntiMaterialCharge/GE_Outlander_AntiMaterialChargeCooldown.GE_Outlander_AntiMaterialChargeCooldown_C");

	return Class;
}

