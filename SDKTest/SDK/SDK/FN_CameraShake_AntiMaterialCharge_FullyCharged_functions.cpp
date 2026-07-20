#include "pch.h"

#include "FN_CameraShake_AntiMaterialCharge_FullyCharged_classes.h"

UClass* UCameraShake_AntiMaterialCharge_FullyCharged_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/Player/Outlander/Gadgets/AntiMaterialCharge/CameraShake_AntiMaterialCharge_FullyCharged.CameraShake_AntiMaterialCharge_FullyCharged_C");

	return Class;
}

