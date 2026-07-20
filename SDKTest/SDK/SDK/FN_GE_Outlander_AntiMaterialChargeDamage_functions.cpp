#include "pch.h"

#include "FN_GE_Outlander_AntiMaterialChargeDamage_classes.h"

UClass* UGE_Outlander_AntiMaterialChargeDamage_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/Player/Outlander/Gadgets/AntiMaterialCharge/GE_Outlander_AntiMaterialChargeDamage.GE_Outlander_AntiMaterialChargeDamage_C");

	return Class;
}

