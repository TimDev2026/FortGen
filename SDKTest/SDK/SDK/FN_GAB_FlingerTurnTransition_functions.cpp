#include "pch.h"

#include "FN_GAB_FlingerTurnTransition_classes.h"

UClass* UGAB_FlingerTurnTransition_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/NPC/Flinger/GAB_FlingerTurnTransition.GAB_FlingerTurnTransition_C");

	return Class;
}

