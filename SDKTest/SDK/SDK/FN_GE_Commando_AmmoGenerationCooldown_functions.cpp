#include "pch.h"

#include "FN_GE_Commando_AmmoGenerationCooldown_classes.h"

UClass* UGE_Commando_AmmoGenerationCooldown_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/Player/Commando/Traits/Assault/GE_Commando_AmmoGenerationCooldown.GE_Commando_AmmoGenerationCooldown_C");

	return Class;
}

