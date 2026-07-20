#include "pch.h"

#include "FN_GE_Commando_GoinAgain_classes.h"

UClass* UGE_Commando_GoinAgain_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/Player/Commando/Traits/Commando/GE_Commando_GoinAgain.GE_Commando_GoinAgain_C");

	return Class;
}

