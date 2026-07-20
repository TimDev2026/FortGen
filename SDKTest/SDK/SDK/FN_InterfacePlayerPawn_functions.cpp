#include "pch.h"

#include "FN_InterfacePlayerPawn_classes.h"

UClass* UInterfacePlayerPawn_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Blueprints/InterfacePlayerPawn.InterfacePlayerPawn_C");

	return Class;
}

// Function /Game/Blueprints/InterfacePlayerPawn.InterfacePlayerPawn_C:FootStepRight
void UInterfacePlayerPawn_C::FootStepRight()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Blueprints/InterfacePlayerPawn.InterfacePlayerPawn_C:FootStepRight");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Blueprints/InterfacePlayerPawn.InterfacePlayerPawn_C:FootStepLeft
void UInterfacePlayerPawn_C::FootStepLeft()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Blueprints/InterfacePlayerPawn.InterfacePlayerPawn_C:FootStepLeft");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Blueprints/InterfacePlayerPawn.InterfacePlayerPawn_C:Melee_Effect_Color
void UInterfacePlayerPawn_C::Melee_Effect_Color(FVector Melee_Color_Set)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Blueprints/InterfacePlayerPawn.InterfacePlayerPawn_C:Melee_Effect_Color");

	FUInterfacePlayerPawn_C_Melee_Effect_Color_Params Parms;

	Parms.Melee_Color_Set = Melee_Color_Set;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Blueprints/InterfacePlayerPawn.InterfacePlayerPawn_C:MeleeSwingLeft
void UInterfacePlayerPawn_C::MeleeSwingLeft()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Blueprints/InterfacePlayerPawn.InterfacePlayerPawn_C:MeleeSwingLeft");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Blueprints/InterfacePlayerPawn.InterfacePlayerPawn_C:MeleeSwingRight
void UInterfacePlayerPawn_C::MeleeSwingRight()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Blueprints/InterfacePlayerPawn.InterfacePlayerPawn_C:MeleeSwingRight");

	ProcessEvent(FN, nullptr);
}

