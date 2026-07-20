#include "pch.h"

#include "FN_GA_Ninja_WeaponSwitch_classes.h"

UClass* UGA_Ninja_WeaponSwitch_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/Player/Ninja/Traits/Shinobi/GA_Ninja_WeaponSwitch.GA_Ninja_WeaponSwitch_C");

	return Class;
}

// Function /Game/Abilities/Player/Ninja/Traits/Shinobi/GA_Ninja_WeaponSwitch.GA_Ninja_WeaponSwitch_C:K2_ActivateAbilityFromEvent
void UGA_Ninja_WeaponSwitch_C::K2_ActivateAbilityFromEvent(FGameplayEventData EventData)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Ninja/Traits/Shinobi/GA_Ninja_WeaponSwitch.GA_Ninja_WeaponSwitch_C:K2_ActivateAbilityFromEvent");

	FUGA_Ninja_WeaponSwitch_C_K2_ActivateAbilityFromEvent_Params Parms;

	Parms.EventData = EventData;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Ninja/Traits/Shinobi/GA_Ninja_WeaponSwitch.GA_Ninja_WeaponSwitch_C:ExecuteUbergraph_GA_Ninja_WeaponSwitch
void UGA_Ninja_WeaponSwitch_C::ExecuteUbergraph_GA_Ninja_WeaponSwitch(int32_t EntryPoint)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Ninja/Traits/Shinobi/GA_Ninja_WeaponSwitch.GA_Ninja_WeaponSwitch_C:ExecuteUbergraph_GA_Ninja_WeaponSwitch");

	FUGA_Ninja_WeaponSwitch_C_ExecuteUbergraph_GA_Ninja_WeaponSwitch_Params Parms;

	Parms.EntryPoint = EntryPoint;

	ProcessEvent(FN, &Parms);
}

