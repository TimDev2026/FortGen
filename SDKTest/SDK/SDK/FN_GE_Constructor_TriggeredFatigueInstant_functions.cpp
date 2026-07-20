#include "pch.h"

#include "FN_GE_Constructor_TriggeredFatigueInstant_classes.h"

UClass* UGE_Constructor_TriggeredFatigueInstant_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/Player/Constructor/Packages/GE_Constructor_TriggeredFatigueInstant.GE_Constructor_TriggeredFatigueInstant_C");

	return Class;
}

