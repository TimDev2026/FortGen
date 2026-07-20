#include "pch.h"

#include "FN_PlayerPawn_Commando_classes.h"

UClass* APlayerPawn_Commando_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/Player/Pawns/PlayerPawn_Commando.PlayerPawn_Commando_C");

	return Class;
}

// Function /Game/Abilities/Player/Pawns/PlayerPawn_Commando.PlayerPawn_Commando_C:UserConstructionScript
void APlayerPawn_Commando_C::UserConstructionScript()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Pawns/PlayerPawn_Commando.PlayerPawn_Commando_C:UserConstructionScript");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/Player/Pawns/PlayerPawn_Commando.PlayerPawn_Commando_C:GameplayCue.Abilities.Applied.Commando.IncendiaryRounds
void APlayerPawn_Commando_C::GameplayCue_Abilities_Applied_Commando_IncendiaryRounds(EGameplayCueEvent EventType, FGameplayCueParameters Parameters)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Pawns/PlayerPawn_Commando.PlayerPawn_Commando_C:GameplayCue.Abilities.Applied.Commando.IncendiaryRounds");

	FAPlayerPawn_Commando_C_GameplayCue_Abilities_Applied_Commando_IncendiaryRounds_Params Parms;

	Parms.EventType = EventType;
	Parms.Parameters = Parameters;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Pawns/PlayerPawn_Commando.PlayerPawn_Commando_C:GameplayCue.Abilities.Applied.Commando.MakeItRain
void APlayerPawn_Commando_C::GameplayCue_Abilities_Applied_Commando_MakeItRain(EGameplayCueEvent EventType, FGameplayCueParameters Parameters)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Pawns/PlayerPawn_Commando.PlayerPawn_Commando_C:GameplayCue.Abilities.Applied.Commando.MakeItRain");

	FAPlayerPawn_Commando_C_GameplayCue_Abilities_Applied_Commando_MakeItRain_Params Parms;

	Parms.EventType = EventType;
	Parms.Parameters = Parameters;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Pawns/PlayerPawn_Commando.PlayerPawn_Commando_C:GameplayCue.Abilities.Activation.Generic.HarvestBuff.Tier1
void APlayerPawn_Commando_C::GameplayCue_Abilities_Activation_Generic_HarvestBuff_Tier1(EGameplayCueEvent EventType, FGameplayCueParameters Parameters)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Pawns/PlayerPawn_Commando.PlayerPawn_Commando_C:GameplayCue.Abilities.Activation.Generic.HarvestBuff.Tier1");

	FAPlayerPawn_Commando_C_GameplayCue_Abilities_Activation_Generic_HarvestBuff_Tier1_Params Parms;

	Parms.EventType = EventType;
	Parms.Parameters = Parameters;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Pawns/PlayerPawn_Commando.PlayerPawn_Commando_C:GameplayCue.Abilities.Activation.Generic.HarvestBuff.Tier2
void APlayerPawn_Commando_C::GameplayCue_Abilities_Activation_Generic_HarvestBuff_Tier2(EGameplayCueEvent EventType, FGameplayCueParameters Parameters)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Pawns/PlayerPawn_Commando.PlayerPawn_Commando_C:GameplayCue.Abilities.Activation.Generic.HarvestBuff.Tier2");

	FAPlayerPawn_Commando_C_GameplayCue_Abilities_Activation_Generic_HarvestBuff_Tier2_Params Parms;

	Parms.EventType = EventType;
	Parms.Parameters = Parameters;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Pawns/PlayerPawn_Commando.PlayerPawn_Commando_C:ReceivePossessed
void APlayerPawn_Commando_C::ReceivePossessed(class AController* NewController)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Pawns/PlayerPawn_Commando.PlayerPawn_Commando_C:ReceivePossessed");

	FAPlayerPawn_Commando_C_ReceivePossessed_Params Parms;

	Parms.NewController = NewController;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Pawns/PlayerPawn_Commando.PlayerPawn_Commando_C:GameplayCue.Abilities.Activation.Commando.Shockwave
void APlayerPawn_Commando_C::GameplayCue_Abilities_Activation_Commando_Shockwave(EGameplayCueEvent EventType, FGameplayCueParameters Parameters)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Pawns/PlayerPawn_Commando.PlayerPawn_Commando_C:GameplayCue.Abilities.Activation.Commando.Shockwave");

	FAPlayerPawn_Commando_C_GameplayCue_Abilities_Activation_Commando_Shockwave_Params Parms;

	Parms.EventType = EventType;
	Parms.Parameters = Parameters;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Pawns/PlayerPawn_Commando.PlayerPawn_Commando_C:ExecuteUbergraph_PlayerPawn_Commando
void APlayerPawn_Commando_C::ExecuteUbergraph_PlayerPawn_Commando(int32_t EntryPoint)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Pawns/PlayerPawn_Commando.PlayerPawn_Commando_C:ExecuteUbergraph_PlayerPawn_Commando");

	FAPlayerPawn_Commando_C_ExecuteUbergraph_PlayerPawn_Commando_Params Parms;

	Parms.EntryPoint = EntryPoint;

	ProcessEvent(FN, &Parms);
}

