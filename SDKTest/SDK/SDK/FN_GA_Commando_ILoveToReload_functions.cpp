#include "pch.h"

#include "FN_GA_Commando_ILoveToReload_classes.h"

UClass* UGA_Commando_ILoveToReload_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/Player/Commando/Traits/Assault/GA_Commando_ILoveToReload.GA_Commando_ILoveToReload_C");

	return Class;
}

// Function /Game/Abilities/Player/Commando/Traits/Assault/GA_Commando_ILoveToReload.GA_Commando_ILoveToReload_C:K2_ActivateAbilityFromEvent
void UGA_Commando_ILoveToReload_C::K2_ActivateAbilityFromEvent(FGameplayEventData EventData)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Commando/Traits/Assault/GA_Commando_ILoveToReload.GA_Commando_ILoveToReload_C:K2_ActivateAbilityFromEvent");

	FUGA_Commando_ILoveToReload_C_K2_ActivateAbilityFromEvent_Params Parms;

	Parms.EventData = EventData;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Commando/Traits/Assault/GA_Commando_ILoveToReload.GA_Commando_ILoveToReload_C:ExecuteUbergraph_GA_Commando_ILoveToReload
void UGA_Commando_ILoveToReload_C::ExecuteUbergraph_GA_Commando_ILoveToReload(int32_t EntryPoint)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Commando/Traits/Assault/GA_Commando_ILoveToReload.GA_Commando_ILoveToReload_C:ExecuteUbergraph_GA_Commando_ILoveToReload");

	FUGA_Commando_ILoveToReload_C_ExecuteUbergraph_GA_Commando_ILoveToReload_Params Parms;

	Parms.EntryPoint = EntryPoint;

	ProcessEvent(FN, &Parms);
}

