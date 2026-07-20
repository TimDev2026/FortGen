#include "pch.h"

#include "FN_GA_Trap_FloorLauncher_classes.h"

UClass* UGA_Trap_FloorLauncher_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/Traps/FloorLauncher/GA_Trap_FloorLauncher.GA_Trap_FloorLauncher_C");

	return Class;
}

// Function /Game/Abilities/Traps/FloorLauncher/GA_Trap_FloorLauncher.GA_Trap_FloorLauncher_C:OnApplied_A7A2BC074785D273036EA19D186AC748
void UGA_Trap_FloorLauncher_C::OnApplied_A7A2BC074785D273036EA19D186AC748(class AActor* Target, FGameplayEffectSpecHandle SpecHandle, FActiveGameplayEffectHandle ActiveHandle)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Traps/FloorLauncher/GA_Trap_FloorLauncher.GA_Trap_FloorLauncher_C:OnApplied_A7A2BC074785D273036EA19D186AC748");

	FUGA_Trap_FloorLauncher_C_OnApplied_A7A2BC074785D273036EA19D186AC748_Params Parms;

	Parms.Target = Target;
	Parms.SpecHandle = SpecHandle;
	Parms.ActiveHandle = ActiveHandle;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Traps/FloorLauncher/GA_Trap_FloorLauncher.GA_Trap_FloorLauncher_C:K2_ActivateAbility
void UGA_Trap_FloorLauncher_C::K2_ActivateAbility()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Traps/FloorLauncher/GA_Trap_FloorLauncher.GA_Trap_FloorLauncher_C:K2_ActivateAbility");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/Traps/FloorLauncher/GA_Trap_FloorLauncher.GA_Trap_FloorLauncher_C:ExecuteUbergraph_GA_Trap_FloorLauncher
void UGA_Trap_FloorLauncher_C::ExecuteUbergraph_GA_Trap_FloorLauncher(int32_t EntryPoint)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Traps/FloorLauncher/GA_Trap_FloorLauncher.GA_Trap_FloorLauncher_C:ExecuteUbergraph_GA_Trap_FloorLauncher");

	FUGA_Trap_FloorLauncher_C_ExecuteUbergraph_GA_Trap_FloorLauncher_Params Parms;

	Parms.EntryPoint = EntryPoint;

	ProcessEvent(FN, &Parms);
}

