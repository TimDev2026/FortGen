#include "pch.h"

#include "FN_GA_Constructor_BASE_classes.h"

UClass* UGA_Constructor_BASE_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/Player/Constructor/Gadgets/BASE/GA_Constructor_BASE.GA_Constructor_BASE_C");

	return Class;
}

// Function /Game/Abilities/Player/Constructor/Gadgets/BASE/GA_Constructor_BASE.GA_Constructor_BASE_C:OnCancelled_448313A941E0C180B5FAED9820171140
void UGA_Constructor_BASE_C::OnCancelled_448313A941E0C180B5FAED9820171140()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Constructor/Gadgets/BASE/GA_Constructor_BASE.GA_Constructor_BASE_C:OnCancelled_448313A941E0C180B5FAED9820171140");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/Player/Constructor/Gadgets/BASE/GA_Constructor_BASE.GA_Constructor_BASE_C:OnInterrupted_448313A941E0C180B5FAED9820171140
void UGA_Constructor_BASE_C::OnInterrupted_448313A941E0C180B5FAED9820171140()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Constructor/Gadgets/BASE/GA_Constructor_BASE.GA_Constructor_BASE_C:OnInterrupted_448313A941E0C180B5FAED9820171140");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/Player/Constructor/Gadgets/BASE/GA_Constructor_BASE.GA_Constructor_BASE_C:OnComplete_448313A941E0C180B5FAED9820171140
void UGA_Constructor_BASE_C::OnComplete_448313A941E0C180B5FAED9820171140()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Constructor/Gadgets/BASE/GA_Constructor_BASE.GA_Constructor_BASE_C:OnComplete_448313A941E0C180B5FAED9820171140");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/Player/Constructor/Gadgets/BASE/GA_Constructor_BASE.GA_Constructor_BASE_C:K2_ActivateAbility
void UGA_Constructor_BASE_C::K2_ActivateAbility()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Constructor/Gadgets/BASE/GA_Constructor_BASE.GA_Constructor_BASE_C:K2_ActivateAbility");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/Player/Constructor/Gadgets/BASE/GA_Constructor_BASE.GA_Constructor_BASE_C:ExecuteUbergraph_GA_Constructor_BASE
void UGA_Constructor_BASE_C::ExecuteUbergraph_GA_Constructor_BASE(int32_t EntryPoint)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Constructor/Gadgets/BASE/GA_Constructor_BASE.GA_Constructor_BASE_C:ExecuteUbergraph_GA_Constructor_BASE");

	FUGA_Constructor_BASE_C_ExecuteUbergraph_GA_Constructor_BASE_Params Parms;

	Parms.EntryPoint = EntryPoint;

	ProcessEvent(FN, &Parms);
}

