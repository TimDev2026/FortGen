#include "pch.h"

#include "FN_GE_Outlander_AntiMaterialChargeDamageBoost_classes.h"

UClass* UGE_Outlander_AntiMaterialChargeDamageBoost_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/Player/Outlander/Gadgets/AntiMaterialCharge/GE_Outlander_AntiMaterialChargeDamageBoost.GE_Outlander_AntiMaterialChargeDamageBoost_C");

	return Class;
}

