#include "pch.h"

#include "FN_GE_Commando_DopplerEffect_classes.h"

UClass* UGE_Commando_DopplerEffect_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/Player/Commando/Traits/Explosives/GE_Commando_DopplerEffect.GE_Commando_DopplerEffect_C");

	return Class;
}

