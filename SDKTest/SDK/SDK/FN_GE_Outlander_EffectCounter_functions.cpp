#include "pch.h"

#include "FN_GE_Outlander_EffectCounter_classes.h"

UClass* UGE_Outlander_EffectCounter_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/Player/Outlander/Traits/DontAsk/GE_Outlander_EffectCounter.GE_Outlander_EffectCounter_C");

	return Class;
}

