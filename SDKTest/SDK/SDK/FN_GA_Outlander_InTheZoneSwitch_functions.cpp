#include "pch.h"

#include "FN_GA_Outlander_InTheZoneSwitch_classes.h"

UClass* UGA_Outlander_InTheZoneSwitch_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/Player/Outlander/Traits/FocusedAcquisition/GA_Outlander_InTheZoneSwitch.GA_Outlander_InTheZoneSwitch_C");

	return Class;
}

// Function /Game/Abilities/Player/Outlander/Traits/FocusedAcquisition/GA_Outlander_InTheZoneSwitch.GA_Outlander_InTheZoneSwitch_C:K2_ActivateAbilityFromEvent
void UGA_Outlander_InTheZoneSwitch_C::K2_ActivateAbilityFromEvent(FGameplayEventData EventData)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Outlander/Traits/FocusedAcquisition/GA_Outlander_InTheZoneSwitch.GA_Outlander_InTheZoneSwitch_C:K2_ActivateAbilityFromEvent");

	FUGA_Outlander_InTheZoneSwitch_C_K2_ActivateAbilityFromEvent_Params Parms;

	Parms.EventData = EventData;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Outlander/Traits/FocusedAcquisition/GA_Outlander_InTheZoneSwitch.GA_Outlander_InTheZoneSwitch_C:FadeOutPostProcess
void UGA_Outlander_InTheZoneSwitch_C::FadeOutPostProcess()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Outlander/Traits/FocusedAcquisition/GA_Outlander_InTheZoneSwitch.GA_Outlander_InTheZoneSwitch_C:FadeOutPostProcess");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/Player/Outlander/Traits/FocusedAcquisition/GA_Outlander_InTheZoneSwitch.GA_Outlander_InTheZoneSwitch_C:ExecuteUbergraph_GA_Outlander_InTheZoneSwitch
void UGA_Outlander_InTheZoneSwitch_C::ExecuteUbergraph_GA_Outlander_InTheZoneSwitch(int32_t EntryPoint)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Outlander/Traits/FocusedAcquisition/GA_Outlander_InTheZoneSwitch.GA_Outlander_InTheZoneSwitch_C:ExecuteUbergraph_GA_Outlander_InTheZoneSwitch");

	FUGA_Outlander_InTheZoneSwitch_C_ExecuteUbergraph_GA_Outlander_InTheZoneSwitch_Params Parms;

	Parms.EntryPoint = EntryPoint;

	ProcessEvent(FN, &Parms);
}

