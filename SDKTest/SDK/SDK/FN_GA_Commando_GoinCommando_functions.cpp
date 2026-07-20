#include "pch.h"

#include "FN_GA_Commando_GoinCommando_classes.h"

UClass* UGA_Commando_GoinCommando_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/Player/Commando/Gadgets/GoinCommando/GA_Commando_GoinCommando.GA_Commando_GoinCommando_C");

	return Class;
}

// Function /Game/Abilities/Player/Commando/Gadgets/GoinCommando/GA_Commando_GoinCommando.GA_Commando_GoinCommando_C:K2_ActivateAbility
void UGA_Commando_GoinCommando_C::K2_ActivateAbility()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Commando/Gadgets/GoinCommando/GA_Commando_GoinCommando.GA_Commando_GoinCommando_C:K2_ActivateAbility");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/Player/Commando/Gadgets/GoinCommando/GA_Commando_GoinCommando.GA_Commando_GoinCommando_C:ExecuteUbergraph_GA_Commando_GoinCommando
void UGA_Commando_GoinCommando_C::ExecuteUbergraph_GA_Commando_GoinCommando(int32_t EntryPoint)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Commando/Gadgets/GoinCommando/GA_Commando_GoinCommando.GA_Commando_GoinCommando_C:ExecuteUbergraph_GA_Commando_GoinCommando");

	FUGA_Commando_GoinCommando_C_ExecuteUbergraph_GA_Commando_GoinCommando_Params Parms;

	Parms.EntryPoint = EntryPoint;

	ProcessEvent(FN, &Parms);
}

