#include "pch.h"

#include "FN_GE_Constructor_TriggeredFatigue_classes.h"

UClass* UGE_Constructor_TriggeredFatigue_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/Player/Constructor/Packages/GE_Constructor_TriggeredFatigue.GE_Constructor_TriggeredFatigue_C");

	return Class;
}

