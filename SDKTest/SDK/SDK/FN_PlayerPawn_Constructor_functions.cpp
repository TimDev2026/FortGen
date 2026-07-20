#include "pch.h"

#include "FN_PlayerPawn_Constructor_classes.h"

UClass* APlayerPawn_Constructor_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/Player/Pawns/PlayerPawn_Constructor.PlayerPawn_Constructor_C");

	return Class;
}

// Function /Game/Abilities/Player/Pawns/PlayerPawn_Constructor.PlayerPawn_Constructor_C:UserConstructionScript
void APlayerPawn_Constructor_C::UserConstructionScript()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Pawns/PlayerPawn_Constructor.PlayerPawn_Constructor_C:UserConstructionScript");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/Player/Pawns/PlayerPawn_Constructor.PlayerPawn_Constructor_C:TakeDamageTimeline__FinishedFunc
void APlayerPawn_Constructor_C::TakeDamageTimeline__FinishedFunc()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Pawns/PlayerPawn_Constructor.PlayerPawn_Constructor_C:TakeDamageTimeline__FinishedFunc");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/Player/Pawns/PlayerPawn_Constructor.PlayerPawn_Constructor_C:TakeDamageTimeline__UpdateFunc
void APlayerPawn_Constructor_C::TakeDamageTimeline__UpdateFunc()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Pawns/PlayerPawn_Constructor.PlayerPawn_Constructor_C:TakeDamageTimeline__UpdateFunc");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/Player/Pawns/PlayerPawn_Constructor.PlayerPawn_Constructor_C:GameplayCue.Constructor.PlasmaPulse.IFFCoding
void APlayerPawn_Constructor_C::GameplayCue_Constructor_PlasmaPulse_IFFCoding(EGameplayCueEvent EventType, FGameplayCueParameters Parameters)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Pawns/PlayerPawn_Constructor.PlayerPawn_Constructor_C:GameplayCue.Constructor.PlasmaPulse.IFFCoding");

	FAPlayerPawn_Constructor_C_GameplayCue_Constructor_PlasmaPulse_IFFCoding_Params Parms;

	Parms.EventType = EventType;
	Parms.Parameters = Parameters;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Pawns/PlayerPawn_Constructor.PlayerPawn_Constructor_C:GameplayCue.Damage
void APlayerPawn_Constructor_C::GameplayCue_Damage(EGameplayCueEvent EventType, FGameplayCueParameters Parameters)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Pawns/PlayerPawn_Constructor.PlayerPawn_Constructor_C:GameplayCue.Damage");

	FAPlayerPawn_Constructor_C_GameplayCue_Damage_Params Parms;

	Parms.EventType = EventType;
	Parms.Parameters = Parameters;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Pawns/PlayerPawn_Constructor.PlayerPawn_Constructor_C:GameplayCue.Constructor.ToInfinityAndBeyond.ActiveFX
void APlayerPawn_Constructor_C::GameplayCue_Constructor_ToInfinityAndBeyond_ActiveFX(EGameplayCueEvent EventType, FGameplayCueParameters Parameters)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Pawns/PlayerPawn_Constructor.PlayerPawn_Constructor_C:GameplayCue.Constructor.ToInfinityAndBeyond.ActiveFX");

	FAPlayerPawn_Constructor_C_GameplayCue_Constructor_ToInfinityAndBeyond_ActiveFX_Params Parms;

	Parms.EventType = EventType;
	Parms.Parameters = Parameters;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Pawns/PlayerPawn_Constructor.PlayerPawn_Constructor_C:GameplayCue.Constructor.KineticOverload.ActiveFX
void APlayerPawn_Constructor_C::GameplayCue_Constructor_KineticOverload_ActiveFX(EGameplayCueEvent EventType, FGameplayCueParameters Parameters)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Pawns/PlayerPawn_Constructor.PlayerPawn_Constructor_C:GameplayCue.Constructor.KineticOverload.ActiveFX");

	FAPlayerPawn_Constructor_C_GameplayCue_Constructor_KineticOverload_ActiveFX_Params Parms;

	Parms.EventType = EventType;
	Parms.Parameters = Parameters;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Pawns/PlayerPawn_Constructor.PlayerPawn_Constructor_C:ReceiveBeginPlay
void APlayerPawn_Constructor_C::ReceiveBeginPlay()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Pawns/PlayerPawn_Constructor.PlayerPawn_Constructor_C:ReceiveBeginPlay");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/Player/Pawns/PlayerPawn_Constructor.PlayerPawn_Constructor_C:testIFF
void APlayerPawn_Constructor_C::testIFF()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Pawns/PlayerPawn_Constructor.PlayerPawn_Constructor_C:testIFF");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/Player/Pawns/PlayerPawn_Constructor.PlayerPawn_Constructor_C:OnCharacterPartsReinitialized
void APlayerPawn_Constructor_C::OnCharacterPartsReinitialized()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Pawns/PlayerPawn_Constructor.PlayerPawn_Constructor_C:OnCharacterPartsReinitialized");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/Player/Pawns/PlayerPawn_Constructor.PlayerPawn_Constructor_C:GameplayCue.Abilities.Activation.Generic.HarvestBuff.Tier1
void APlayerPawn_Constructor_C::GameplayCue_Abilities_Activation_Generic_HarvestBuff_Tier1(EGameplayCueEvent EventType, FGameplayCueParameters Parameters)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Pawns/PlayerPawn_Constructor.PlayerPawn_Constructor_C:GameplayCue.Abilities.Activation.Generic.HarvestBuff.Tier1");

	FAPlayerPawn_Constructor_C_GameplayCue_Abilities_Activation_Generic_HarvestBuff_Tier1_Params Parms;

	Parms.EventType = EventType;
	Parms.Parameters = Parameters;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Pawns/PlayerPawn_Constructor.PlayerPawn_Constructor_C:GameplayCue.Abilities.Activation.Generic.HarvestBuff.Tier2
void APlayerPawn_Constructor_C::GameplayCue_Abilities_Activation_Generic_HarvestBuff_Tier2(EGameplayCueEvent EventType, FGameplayCueParameters Parameters)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Pawns/PlayerPawn_Constructor.PlayerPawn_Constructor_C:GameplayCue.Abilities.Activation.Generic.HarvestBuff.Tier2");

	FAPlayerPawn_Constructor_C_GameplayCue_Abilities_Activation_Generic_HarvestBuff_Tier2_Params Parms;

	Parms.EventType = EventType;
	Parms.Parameters = Parameters;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Pawns/PlayerPawn_Constructor.PlayerPawn_Constructor_C:PlayArm
void APlayerPawn_Constructor_C::PlayArm()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Pawns/PlayerPawn_Constructor.PlayerPawn_Constructor_C:PlayArm");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/Player/Pawns/PlayerPawn_Constructor.PlayerPawn_Constructor_C:ExecuteUbergraph_PlayerPawn_Constructor
void APlayerPawn_Constructor_C::ExecuteUbergraph_PlayerPawn_Constructor(int32_t EntryPoint)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Pawns/PlayerPawn_Constructor.PlayerPawn_Constructor_C:ExecuteUbergraph_PlayerPawn_Constructor");

	FAPlayerPawn_Constructor_C_ExecuteUbergraph_PlayerPawn_Constructor_Params Parms;

	Parms.EntryPoint = EntryPoint;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Pawns/PlayerPawn_Constructor.PlayerPawn_Constructor_C:PlayArmAnim__DelegateSignature
void APlayerPawn_Constructor_C::PlayArmAnim__DelegateSignature()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Pawns/PlayerPawn_Constructor.PlayerPawn_Constructor_C:PlayArmAnim__DelegateSignature");

	ProcessEvent(FN, nullptr);
}

