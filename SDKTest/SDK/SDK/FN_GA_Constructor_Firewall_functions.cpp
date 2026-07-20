#include "pch.h"

#include "FN_GA_Constructor_Firewall_classes.h"

UClass* UGA_Constructor_Firewall_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/Player/Constructor/Traits/Shielding/GA_Constructor_Firewall.GA_Constructor_Firewall_C");

	return Class;
}

// Function /Game/Abilities/Player/Constructor/Traits/Shielding/GA_Constructor_Firewall.GA_Constructor_Firewall_C:K2_ActivateAbilityFromEvent
void UGA_Constructor_Firewall_C::K2_ActivateAbilityFromEvent(FGameplayEventData EventData)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Constructor/Traits/Shielding/GA_Constructor_Firewall.GA_Constructor_Firewall_C:K2_ActivateAbilityFromEvent");

	FUGA_Constructor_Firewall_C_K2_ActivateAbilityFromEvent_Params Parms;

	Parms.EventData = EventData;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Constructor/Traits/Shielding/GA_Constructor_Firewall.GA_Constructor_Firewall_C:ExecuteUbergraph_GA_Constructor_Firewall
void UGA_Constructor_Firewall_C::ExecuteUbergraph_GA_Constructor_Firewall(int32_t EntryPoint)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Constructor/Traits/Shielding/GA_Constructor_Firewall.GA_Constructor_Firewall_C:ExecuteUbergraph_GA_Constructor_Firewall");

	FUGA_Constructor_Firewall_C_ExecuteUbergraph_GA_Constructor_Firewall_Params Parms;

	Parms.EntryPoint = EntryPoint;

	ProcessEvent(FN, &Parms);
}

