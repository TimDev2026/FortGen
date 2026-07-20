#include "pch.h"

#include "FN_B_GrenadeCameraShake_classes.h"

UClass* UB_GrenadeCameraShake_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/Player/Commando/Gadgets/FragGrenade/B_GrenadeCameraShake.B_GrenadeCameraShake_C");

	return Class;
}

