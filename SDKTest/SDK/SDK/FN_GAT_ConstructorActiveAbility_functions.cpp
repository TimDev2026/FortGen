#include "pch.h"

#include "FN_GAT_ConstructorActiveAbility_classes.h"

UClass* UGAT_ConstructorActiveAbility_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/Player/Parents/GAT_ConstructorActiveAbility.GAT_ConstructorActiveAbility_C");

	return Class;
}

// Function /Game/Abilities/Player/Parents/GAT_ConstructorActiveAbility.GAT_ConstructorActiveAbility_C:K2_ActivateAbility
void UGAT_ConstructorActiveAbility_C::K2_ActivateAbility()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Parents/GAT_ConstructorActiveAbility.GAT_ConstructorActiveAbility_C:K2_ActivateAbility");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/Player/Parents/GAT_ConstructorActiveAbility.GAT_ConstructorActiveAbility_C:ExecuteUbergraph_GAT_ConstructorActiveAbility
void UGAT_ConstructorActiveAbility_C::ExecuteUbergraph_GAT_ConstructorActiveAbility(int32_t EntryPoint)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Parents/GAT_ConstructorActiveAbility.GAT_ConstructorActiveAbility_C:ExecuteUbergraph_GAT_ConstructorActiveAbility");

	FUGAT_ConstructorActiveAbility_C_ExecuteUbergraph_GAT_ConstructorActiveAbility_Params Parms;

	Parms.EntryPoint = EntryPoint;

	ProcessEvent(FN, &Parms);
}

