#include "pch.h"

#include "FN_GA_TrapGeneric_classes.h"

UClass* UGA_TrapGeneric_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/Traps/Generic/GA_TrapGeneric.GA_TrapGeneric_C");

	return Class;
}

// Function /Game/Abilities/Traps/Generic/GA_TrapGeneric.GA_TrapGeneric_C:K2_ActivateAbility
void UGA_TrapGeneric_C::K2_ActivateAbility()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Traps/Generic/GA_TrapGeneric.GA_TrapGeneric_C:K2_ActivateAbility");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/Traps/Generic/GA_TrapGeneric.GA_TrapGeneric_C:ExecuteUbergraph_GA_TrapGeneric
void UGA_TrapGeneric_C::ExecuteUbergraph_GA_TrapGeneric(int32_t EntryPoint)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Traps/Generic/GA_TrapGeneric.GA_TrapGeneric_C:ExecuteUbergraph_GA_TrapGeneric");

	FUGA_TrapGeneric_C_ExecuteUbergraph_GA_TrapGeneric_Params Parms;

	Parms.EntryPoint = EntryPoint;

	ProcessEvent(FN, &Parms);
}

