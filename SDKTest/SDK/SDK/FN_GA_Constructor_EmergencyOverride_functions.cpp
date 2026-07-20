#include "pch.h"

#include "FN_GA_Constructor_EmergencyOverride_classes.h"

UClass* UGA_Constructor_EmergencyOverride_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/Player/Constructor/Traits/EnergyFabrication/GA_Constructor_EmergencyOverride.GA_Constructor_EmergencyOverride_C");

	return Class;
}

// Function /Game/Abilities/Player/Constructor/Traits/EnergyFabrication/GA_Constructor_EmergencyOverride.GA_Constructor_EmergencyOverride_C:K2_ActivateAbilityFromEvent
void UGA_Constructor_EmergencyOverride_C::K2_ActivateAbilityFromEvent(FGameplayEventData EventData)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Constructor/Traits/EnergyFabrication/GA_Constructor_EmergencyOverride.GA_Constructor_EmergencyOverride_C:K2_ActivateAbilityFromEvent");

	FUGA_Constructor_EmergencyOverride_C_K2_ActivateAbilityFromEvent_Params Parms;

	Parms.EventData = EventData;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Constructor/Traits/EnergyFabrication/GA_Constructor_EmergencyOverride.GA_Constructor_EmergencyOverride_C:ExecuteUbergraph_GA_Constructor_EmergencyOverride
void UGA_Constructor_EmergencyOverride_C::ExecuteUbergraph_GA_Constructor_EmergencyOverride(int32_t EntryPoint)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Constructor/Traits/EnergyFabrication/GA_Constructor_EmergencyOverride.GA_Constructor_EmergencyOverride_C:ExecuteUbergraph_GA_Constructor_EmergencyOverride");

	FUGA_Constructor_EmergencyOverride_C_ExecuteUbergraph_GA_Constructor_EmergencyOverride_Params Parms;

	Parms.EntryPoint = EntryPoint;

	ProcessEvent(FN, &Parms);
}

