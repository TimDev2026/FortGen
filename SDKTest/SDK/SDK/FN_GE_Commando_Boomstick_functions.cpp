#include "pch.h"

#include "FN_GE_Commando_Boomstick_classes.h"

UClass* UGE_Commando_Boomstick_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/Player/Commando/Traits/Commando/GE_Commando_Boomstick.GE_Commando_Boomstick_C");

	return Class;
}

