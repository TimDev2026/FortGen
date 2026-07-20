#include "pch.h"

#include "FN_GA_Outlander_InTheZone_classes.h"

UClass* UGA_Outlander_InTheZone_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/Player/Outlander/Traits/FocusedAcquisition/GA_Outlander_InTheZone.GA_Outlander_InTheZone_C");

	return Class;
}

// Function /Game/Abilities/Player/Outlander/Traits/FocusedAcquisition/GA_Outlander_InTheZone.GA_Outlander_InTheZone_C:K2_ActivateAbilityFromEvent
void UGA_Outlander_InTheZone_C::K2_ActivateAbilityFromEvent(FGameplayEventData EventData)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Outlander/Traits/FocusedAcquisition/GA_Outlander_InTheZone.GA_Outlander_InTheZone_C:K2_ActivateAbilityFromEvent");

	FUGA_Outlander_InTheZone_C_K2_ActivateAbilityFromEvent_Params Parms;

	Parms.EventData = EventData;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Outlander/Traits/FocusedAcquisition/GA_Outlander_InTheZone.GA_Outlander_InTheZone_C:ExecuteUbergraph_GA_Outlander_InTheZone
void UGA_Outlander_InTheZone_C::ExecuteUbergraph_GA_Outlander_InTheZone(int32_t EntryPoint)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Outlander/Traits/FocusedAcquisition/GA_Outlander_InTheZone.GA_Outlander_InTheZone_C:ExecuteUbergraph_GA_Outlander_InTheZone");

	FUGA_Outlander_InTheZone_C_ExecuteUbergraph_GA_Outlander_InTheZone_Params Parms;

	Parms.EntryPoint = EntryPoint;

	ProcessEvent(FN, &Parms);
}

