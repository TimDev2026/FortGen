#include "pch.h"

#include "FN_GE_Commando_MakeItRainUpgraded_classes.h"

UClass* UGE_Commando_MakeItRainUpgraded_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/Player/Commando/Traits/AdvancedTactics/GE_Commando_MakeItRainUpgraded.GE_Commando_MakeItRainUpgraded_C");

	return Class;
}

