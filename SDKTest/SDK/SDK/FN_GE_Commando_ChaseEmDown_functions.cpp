#include "pch.h"

#include "FN_GE_Commando_ChaseEmDown_classes.h"

UClass* UGE_Commando_ChaseEmDown_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/Player/Commando/Traits/Perserverence/GE_Commando_ChaseEmDown.GE_Commando_ChaseEmDown_C");

	return Class;
}

