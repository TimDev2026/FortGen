#include "pch.h"

#include "FN_GE_Outlander_AntiMaterialChargeDamagePawn_classes.h"

UClass* UGE_Outlander_AntiMaterialChargeDamagePawn_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/Player/Outlander/Gadgets/AntiMaterialCharge/GE_Outlander_AntiMaterialChargeDamagePawn.GE_Outlander_AntiMaterialChargeDamagePawn_C");

	return Class;
}

