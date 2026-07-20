#include "pch.h"

#include "FN_B_AntiMatCharge_CameraShake_classes.h"

UClass* UB_AntiMatCharge_CameraShake_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Effects/Fort_Effects/BluePrints/CameraShakes/B_AntiMatCharge_CameraShake.B_AntiMatCharge_CameraShake_C");

	return Class;
}

