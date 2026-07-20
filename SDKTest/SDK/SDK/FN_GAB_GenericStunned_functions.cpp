#include "pch.h"

#include "FN_GAB_GenericStunned_classes.h"

UClass* UGAB_GenericStunned_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/NPC/Generic/GAB_GenericStunned.GAB_GenericStunned_C");

	return Class;
}

// Function /Game/Abilities/NPC/Generic/GAB_GenericStunned.GAB_GenericStunned_C:K2_OnEndAbility
void UGAB_GenericStunned_C::K2_OnEndAbility()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/NPC/Generic/GAB_GenericStunned.GAB_GenericStunned_C:K2_OnEndAbility");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/NPC/Generic/GAB_GenericStunned.GAB_GenericStunned_C:K2_ActivateAbility
void UGAB_GenericStunned_C::K2_ActivateAbility()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/NPC/Generic/GAB_GenericStunned.GAB_GenericStunned_C:K2_ActivateAbility");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/NPC/Generic/GAB_GenericStunned.GAB_GenericStunned_C:ExecuteUbergraph_GAB_GenericStunned
void UGAB_GenericStunned_C::ExecuteUbergraph_GAB_GenericStunned(int32_t EntryPoint)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/NPC/Generic/GAB_GenericStunned.GAB_GenericStunned_C:ExecuteUbergraph_GAB_GenericStunned");

	FUGAB_GenericStunned_C_ExecuteUbergraph_GAB_GenericStunned_Params Parms;

	Parms.EntryPoint = EntryPoint;

	ProcessEvent(FN, &Parms);
}

