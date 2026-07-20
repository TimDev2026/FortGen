#include "pch.h"

#include "FN_GE_Commando_CleanLiving_classes.h"

UClass* UGE_Commando_CleanLiving_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/Player/Commando/Traits/Perserverence/GE_Commando_CleanLiving.GE_Commando_CleanLiving_C");

	return Class;
}

