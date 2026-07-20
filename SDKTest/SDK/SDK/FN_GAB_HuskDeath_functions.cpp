#include "pch.h"

#include "FN_GAB_HuskDeath_classes.h"

UClass* UGAB_HuskDeath_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/NPC/Husk/Base/GAB_HuskDeath.GAB_HuskDeath_C");

	return Class;
}

// Function /Game/Abilities/NPC/Husk/Base/GAB_HuskDeath.GAB_HuskDeath_C:PickDeathMontageSection
void UGAB_HuskDeath_C::PickDeathMontageSection()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/NPC/Husk/Base/GAB_HuskDeath.GAB_HuskDeath_C:PickDeathMontageSection");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/NPC/Husk/Base/GAB_HuskDeath.GAB_HuskDeath_C:ExecuteUbergraph_GAB_HuskDeath
void UGAB_HuskDeath_C::ExecuteUbergraph_GAB_HuskDeath(int32_t EntryPoint)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/NPC/Husk/Base/GAB_HuskDeath.GAB_HuskDeath_C:ExecuteUbergraph_GAB_HuskDeath");

	FUGAB_HuskDeath_C_ExecuteUbergraph_GAB_HuskDeath_Params Parms;

	Parms.EntryPoint = EntryPoint;

	ProcessEvent(FN, &Parms);
}

