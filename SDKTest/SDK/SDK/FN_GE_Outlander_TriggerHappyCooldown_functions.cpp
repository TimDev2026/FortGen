#include "pch.h"

#include "FN_GE_Outlander_TriggerHappyCooldown_classes.h"

UClass* UGE_Outlander_TriggerHappyCooldown_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/Player/Outlander/Default/GE_Outlander_TriggerHappyCooldown.GE_Outlander_TriggerHappyCooldown_C");

	return Class;
}

