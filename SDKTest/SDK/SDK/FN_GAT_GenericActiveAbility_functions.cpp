#include "pch.h"

#include "FN_GAT_GenericActiveAbility_classes.h"

UClass* UGAT_GenericActiveAbility_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/Player/Parents/GAT_GenericActiveAbility.GAT_GenericActiveAbility_C");

	return Class;
}

// Function /Game/Abilities/Player/Parents/GAT_GenericActiveAbility.GAT_GenericActiveAbility_C:K2_ActivateAbility
void UGAT_GenericActiveAbility_C::K2_ActivateAbility()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Parents/GAT_GenericActiveAbility.GAT_GenericActiveAbility_C:K2_ActivateAbility");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/Player/Parents/GAT_GenericActiveAbility.GAT_GenericActiveAbility_C:ExecuteUbergraph_GAT_GenericActiveAbility
void UGAT_GenericActiveAbility_C::ExecuteUbergraph_GAT_GenericActiveAbility(int32_t EntryPoint)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Parents/GAT_GenericActiveAbility.GAT_GenericActiveAbility_C:ExecuteUbergraph_GAT_GenericActiveAbility");

	FUGAT_GenericActiveAbility_C_ExecuteUbergraph_GAT_GenericActiveAbility_Params Parms;

	Parms.EntryPoint = EntryPoint;

	ProcessEvent(FN, &Parms);
}

