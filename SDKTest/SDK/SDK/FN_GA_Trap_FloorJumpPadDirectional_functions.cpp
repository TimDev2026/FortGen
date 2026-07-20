#include "pch.h"

#include "FN_GA_Trap_FloorJumpPadDirectional_classes.h"

UClass* UGA_Trap_FloorJumpPadDirectional_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/Traps/FloorJumpPadDirectional/GA_Trap_FloorJumpPadDirectional.GA_Trap_FloorJumpPadDirectional_C");

	return Class;
}

// Function /Game/Abilities/Traps/FloorJumpPadDirectional/GA_Trap_FloorJumpPadDirectional.GA_Trap_FloorJumpPadDirectional_C:K2_ActivateAbility
void UGA_Trap_FloorJumpPadDirectional_C::K2_ActivateAbility()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Traps/FloorJumpPadDirectional/GA_Trap_FloorJumpPadDirectional.GA_Trap_FloorJumpPadDirectional_C:K2_ActivateAbility");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/Traps/FloorJumpPadDirectional/GA_Trap_FloorJumpPadDirectional.GA_Trap_FloorJumpPadDirectional_C:ExecuteUbergraph_GA_Trap_FloorJumpPadDirectional
void UGA_Trap_FloorJumpPadDirectional_C::ExecuteUbergraph_GA_Trap_FloorJumpPadDirectional(int32_t EntryPoint)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Traps/FloorJumpPadDirectional/GA_Trap_FloorJumpPadDirectional.GA_Trap_FloorJumpPadDirectional_C:ExecuteUbergraph_GA_Trap_FloorJumpPadDirectional");

	FUGA_Trap_FloorJumpPadDirectional_C_ExecuteUbergraph_GA_Trap_FloorJumpPadDirectional_Params Parms;

	Parms.EntryPoint = EntryPoint;

	ProcessEvent(FN, &Parms);
}

