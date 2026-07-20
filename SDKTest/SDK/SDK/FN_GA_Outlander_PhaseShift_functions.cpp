#include "pch.h"

#include "FN_GA_Outlander_PhaseShift_classes.h"

UClass* UGA_Outlander_PhaseShift_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/Player/Outlander/Gadgets/PhaseShift/GA_Outlander_PhaseShift.GA_Outlander_PhaseShift_C");

	return Class;
}

// Function /Game/Abilities/Player/Outlander/Gadgets/PhaseShift/GA_Outlander_PhaseShift.GA_Outlander_PhaseShift_C:K2_ActivateAbilityFromEvent
void UGA_Outlander_PhaseShift_C::K2_ActivateAbilityFromEvent(FGameplayEventData EventData)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Outlander/Gadgets/PhaseShift/GA_Outlander_PhaseShift.GA_Outlander_PhaseShift_C:K2_ActivateAbilityFromEvent");

	FUGA_Outlander_PhaseShift_C_K2_ActivateAbilityFromEvent_Params Parms;

	Parms.EventData = EventData;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Outlander/Gadgets/PhaseShift/GA_Outlander_PhaseShift.GA_Outlander_PhaseShift_C:ExecuteUbergraph_GA_Outlander_PhaseShift
void UGA_Outlander_PhaseShift_C::ExecuteUbergraph_GA_Outlander_PhaseShift(int32_t EntryPoint)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Outlander/Gadgets/PhaseShift/GA_Outlander_PhaseShift.GA_Outlander_PhaseShift_C:ExecuteUbergraph_GA_Outlander_PhaseShift");

	FUGA_Outlander_PhaseShift_C_ExecuteUbergraph_GA_Outlander_PhaseShift_Params Parms;

	Parms.EntryPoint = EntryPoint;

	ProcessEvent(FN, &Parms);
}

