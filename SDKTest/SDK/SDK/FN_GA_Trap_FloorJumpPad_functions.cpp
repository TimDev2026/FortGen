#include "pch.h"

#include "FN_GA_Trap_FloorJumpPad_classes.h"

UClass* UGA_Trap_FloorJumpPad_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/Traps/FloorJumpPad/GA_Trap_FloorJumpPad.GA_Trap_FloorJumpPad_C");

	return Class;
}

// Function /Game/Abilities/Traps/FloorJumpPad/GA_Trap_FloorJumpPad.GA_Trap_FloorJumpPad_C:K2_ActivateAbility
void UGA_Trap_FloorJumpPad_C::K2_ActivateAbility()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Traps/FloorJumpPad/GA_Trap_FloorJumpPad.GA_Trap_FloorJumpPad_C:K2_ActivateAbility");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/Traps/FloorJumpPad/GA_Trap_FloorJumpPad.GA_Trap_FloorJumpPad_C:ExecuteUbergraph_GA_Trap_FloorJumpPad
void UGA_Trap_FloorJumpPad_C::ExecuteUbergraph_GA_Trap_FloorJumpPad(int32_t EntryPoint)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Traps/FloorJumpPad/GA_Trap_FloorJumpPad.GA_Trap_FloorJumpPad_C:ExecuteUbergraph_GA_Trap_FloorJumpPad");

	FUGA_Trap_FloorJumpPad_C_ExecuteUbergraph_GA_Trap_FloorJumpPad_Params Parms;

	Parms.EntryPoint = EntryPoint;

	ProcessEvent(FN, &Parms);
}

