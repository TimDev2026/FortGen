#include "pch.h"

#include "FN_GE_Consumable_Heal_classes.h"

UClass* UGE_Consumable_Heal_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Loot/Consumables/GameplayEffects/GE_Consumable_Heal.GE_Consumable_Heal_C");

	return Class;
}

