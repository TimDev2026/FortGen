#include "pch.h"

#include "FN_GE_Outlander_TriggerHappy_classes.h"

UClass* UGE_Outlander_TriggerHappy_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/Player/Outlander/Default/GE_Outlander_TriggerHappy.GE_Outlander_TriggerHappy_C");

	return Class;
}

