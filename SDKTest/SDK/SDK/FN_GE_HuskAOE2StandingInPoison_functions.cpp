#include "pch.h"

#include "FN_GE_HuskAOE2StandingInPoison_classes.h"

UClass* UGE_HuskAOE2StandingInPoison_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/NPC/Husk/Base/GE_HuskAOE2StandingInPoison.GE_HuskAOE2StandingInPoison_C");

	return Class;
}

