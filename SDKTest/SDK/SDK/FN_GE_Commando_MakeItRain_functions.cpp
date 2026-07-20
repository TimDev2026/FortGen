#include "pch.h"

#include "FN_GE_Commando_MakeItRain_classes.h"

UClass* UGE_Commando_MakeItRain_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/Player/Commando/Traits/AdvancedTactics/GE_Commando_MakeItRain.GE_Commando_MakeItRain_C");

	return Class;
}

