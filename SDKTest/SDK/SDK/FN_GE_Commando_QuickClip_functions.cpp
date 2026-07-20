#include "pch.h"

#include "FN_GE_Commando_QuickClip_classes.h"

UClass* UGE_Commando_QuickClip_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/Player/Commando/Traits/Marksmanship/GE_Commando_QuickClip.GE_Commando_QuickClip_C");

	return Class;
}

