#include "pch.h"

#include "FN_GA_Outlander_ImpossibilityMatrix_classes.h"

UClass* UGA_Outlander_ImpossibilityMatrix_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/Player/Outlander/Traits/DontAsk/GA_Outlander_ImpossibilityMatrix.GA_Outlander_ImpossibilityMatrix_C");

	return Class;
}

// Function /Game/Abilities/Player/Outlander/Traits/DontAsk/GA_Outlander_ImpossibilityMatrix.GA_Outlander_ImpossibilityMatrix_C:K2_ActivateAbilityFromEvent
void UGA_Outlander_ImpossibilityMatrix_C::K2_ActivateAbilityFromEvent(FGameplayEventData EventData)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Outlander/Traits/DontAsk/GA_Outlander_ImpossibilityMatrix.GA_Outlander_ImpossibilityMatrix_C:K2_ActivateAbilityFromEvent");

	FUGA_Outlander_ImpossibilityMatrix_C_K2_ActivateAbilityFromEvent_Params Parms;

	Parms.EventData = EventData;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Outlander/Traits/DontAsk/GA_Outlander_ImpossibilityMatrix.GA_Outlander_ImpossibilityMatrix_C:ExecuteUbergraph_GA_Outlander_ImpossibilityMatrix
void UGA_Outlander_ImpossibilityMatrix_C::ExecuteUbergraph_GA_Outlander_ImpossibilityMatrix(int32_t EntryPoint)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Outlander/Traits/DontAsk/GA_Outlander_ImpossibilityMatrix.GA_Outlander_ImpossibilityMatrix_C:ExecuteUbergraph_GA_Outlander_ImpossibilityMatrix");

	FUGA_Outlander_ImpossibilityMatrix_C_ExecuteUbergraph_GA_Outlander_ImpossibilityMatrix_Params Parms;

	Parms.EntryPoint = EntryPoint;

	ProcessEvent(FN, &Parms);
}

