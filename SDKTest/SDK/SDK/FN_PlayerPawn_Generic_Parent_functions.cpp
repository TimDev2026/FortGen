#include "pch.h"

#include "FN_PlayerPawn_Generic_Parent_classes.h"

UClass* APlayerPawn_Generic_Parent_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/Player/Pawns/PlayerPawn_Generic_Parent.PlayerPawn_Generic_Parent_C");

	return Class;
}

// Function /Game/Abilities/Player/Pawns/PlayerPawn_Generic_Parent.PlayerPawn_Generic_Parent_C:UserConstructionScript
void APlayerPawn_Generic_Parent_C::UserConstructionScript()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Pawns/PlayerPawn_Generic_Parent.PlayerPawn_Generic_Parent_C:UserConstructionScript");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/Player/Pawns/PlayerPawn_Generic_Parent.PlayerPawn_Generic_Parent_C:ReceiveBeginPlay
void APlayerPawn_Generic_Parent_C::ReceiveBeginPlay()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Pawns/PlayerPawn_Generic_Parent.PlayerPawn_Generic_Parent_C:ReceiveBeginPlay");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/Player/Pawns/PlayerPawn_Generic_Parent.PlayerPawn_Generic_Parent_C:ExecuteUbergraph_PlayerPawn_Generic_Parent
void APlayerPawn_Generic_Parent_C::ExecuteUbergraph_PlayerPawn_Generic_Parent(int32_t EntryPoint)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Pawns/PlayerPawn_Generic_Parent.PlayerPawn_Generic_Parent_C:ExecuteUbergraph_PlayerPawn_Generic_Parent");

	FAPlayerPawn_Generic_Parent_C_ExecuteUbergraph_PlayerPawn_Generic_Parent_Params Parms;

	Parms.EntryPoint = EntryPoint;

	ProcessEvent(FN, &Parms);
}

