#include "pch.h"

#include "FN_GE_Outlander_GravitySphereCooldown_classes.h"

UClass* UGE_Outlander_GravitySphereCooldown_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/Player/Outlander/Gadgets/GravitySphere/GE_Outlander_GravitySphereCooldown.GE_Outlander_GravitySphereCooldown_C");

	return Class;
}

