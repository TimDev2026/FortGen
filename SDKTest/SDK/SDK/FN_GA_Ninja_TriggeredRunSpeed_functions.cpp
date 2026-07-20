#include "pch.h"

#include "FN_GA_Ninja_TriggeredRunSpeed_classes.h"

UClass* UGA_Ninja_TriggeredRunSpeed_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/Player/Ninja/Traits/Shinobi/GA_Ninja_TriggeredRunSpeed.GA_Ninja_TriggeredRunSpeed_C");

	return Class;
}

// Function /Game/Abilities/Player/Ninja/Traits/Shinobi/GA_Ninja_TriggeredRunSpeed.GA_Ninja_TriggeredRunSpeed_C:ApplyRunTrails
void UGA_Ninja_TriggeredRunSpeed_C::ApplyRunTrails(class UParticleSystem* Emitter_Template, class USceneComponent* Scene_Component)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Ninja/Traits/Shinobi/GA_Ninja_TriggeredRunSpeed.GA_Ninja_TriggeredRunSpeed_C:ApplyRunTrails");

	FUGA_Ninja_TriggeredRunSpeed_C_ApplyRunTrails_Params Parms;

	Parms.Emitter_Template = Emitter_Template;
	Parms.Scene_Component = Scene_Component;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Ninja/Traits/Shinobi/GA_Ninja_TriggeredRunSpeed.GA_Ninja_TriggeredRunSpeed_C:K2_ActivateAbilityFromEvent
void UGA_Ninja_TriggeredRunSpeed_C::K2_ActivateAbilityFromEvent(FGameplayEventData EventData)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Ninja/Traits/Shinobi/GA_Ninja_TriggeredRunSpeed.GA_Ninja_TriggeredRunSpeed_C:K2_ActivateAbilityFromEvent");

	FUGA_Ninja_TriggeredRunSpeed_C_K2_ActivateAbilityFromEvent_Params Parms;

	Parms.EventData = EventData;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Ninja/Traits/Shinobi/GA_Ninja_TriggeredRunSpeed.GA_Ninja_TriggeredRunSpeed_C:ExecuteUbergraph_GA_Ninja_TriggeredRunSpeed
void UGA_Ninja_TriggeredRunSpeed_C::ExecuteUbergraph_GA_Ninja_TriggeredRunSpeed(int32_t EntryPoint)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Ninja/Traits/Shinobi/GA_Ninja_TriggeredRunSpeed.GA_Ninja_TriggeredRunSpeed_C:ExecuteUbergraph_GA_Ninja_TriggeredRunSpeed");

	FUGA_Ninja_TriggeredRunSpeed_C_ExecuteUbergraph_GA_Ninja_TriggeredRunSpeed_Params Parms;

	Parms.EntryPoint = EntryPoint;

	ProcessEvent(FN, &Parms);
}

