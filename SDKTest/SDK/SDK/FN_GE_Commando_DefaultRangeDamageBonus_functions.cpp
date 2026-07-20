#include "pch.h"

#include "FN_GE_Commando_DefaultRangeDamageBonus_classes.h"

UClass* UGE_Commando_DefaultRangeDamageBonus_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/Player/Commando/Default/GE_Commando_DefaultRangeDamageBonus.GE_Commando_DefaultRangeDamageBonus_C");

	return Class;
}

