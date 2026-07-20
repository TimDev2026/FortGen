#include "pch.h"

#include "FN_GA_Floor_Health_classes.h"

UClass* UGA_Floor_Health_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/Traps/Floor_Health/GA_Floor_Health.GA_Floor_Health_C");

	return Class;
}

// Function /Game/Abilities/Traps/Floor_Health/GA_Floor_Health.GA_Floor_Health_C:K2_ActivateAbilityFromEvent
void UGA_Floor_Health_C::K2_ActivateAbilityFromEvent(FGameplayEventData EventData)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Traps/Floor_Health/GA_Floor_Health.GA_Floor_Health_C:K2_ActivateAbilityFromEvent");

	FUGA_Floor_Health_C_K2_ActivateAbilityFromEvent_Params Parms;

	Parms.EventData = EventData;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Traps/Floor_Health/GA_Floor_Health.GA_Floor_Health_C:K2_ActivateAbility
void UGA_Floor_Health_C::K2_ActivateAbility()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Traps/Floor_Health/GA_Floor_Health.GA_Floor_Health_C:K2_ActivateAbility");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/Traps/Floor_Health/GA_Floor_Health.GA_Floor_Health_C:ExecuteUbergraph_GA_Floor_Health
void UGA_Floor_Health_C::ExecuteUbergraph_GA_Floor_Health(int32_t EntryPoint)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Traps/Floor_Health/GA_Floor_Health.GA_Floor_Health_C:ExecuteUbergraph_GA_Floor_Health");

	FUGA_Floor_Health_C_ExecuteUbergraph_GA_Floor_Health_Params Parms;

	Parms.EntryPoint = EntryPoint;

	ProcessEvent(FN, &Parms);
}

