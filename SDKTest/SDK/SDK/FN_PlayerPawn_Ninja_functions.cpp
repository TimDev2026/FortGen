#include "pch.h"

#include "FN_PlayerPawn_Ninja_classes.h"

UClass* APlayerPawn_Ninja_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/Player/Pawns/PlayerPawn_Ninja.PlayerPawn_Ninja_C");

	return Class;
}

// Function /Game/Abilities/Player/Pawns/PlayerPawn_Ninja.PlayerPawn_Ninja_C:VFX_RedistributePointsAlongSpline_TOTD
void APlayerPawn_Ninja_C::VFX_RedistributePointsAlongSpline_TOTD()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Pawns/PlayerPawn_Ninja.PlayerPawn_Ninja_C:VFX_RedistributePointsAlongSpline_TOTD");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/Player/Pawns/PlayerPawn_Ninja.PlayerPawn_Ninja_C:VFX_CreateMIDs_TOTD
void APlayerPawn_Ninja_C::VFX_CreateMIDs_TOTD()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Pawns/PlayerPawn_Ninja.PlayerPawn_Ninja_C:VFX_CreateMIDs_TOTD");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/Player/Pawns/PlayerPawn_Ninja.PlayerPawn_Ninja_C:VFX_DestroySplines_TOTD
void APlayerPawn_Ninja_C::VFX_DestroySplines_TOTD()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Pawns/PlayerPawn_Ninja.PlayerPawn_Ninja_C:VFX_DestroySplines_TOTD");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/Player/Pawns/PlayerPawn_Ninja.PlayerPawn_Ninja_C:VFX_AddSplinePointAndMesh_TOTD
void APlayerPawn_Ninja_C::VFX_AddSplinePointAndMesh_TOTD()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Pawns/PlayerPawn_Ninja.PlayerPawn_Ninja_C:VFX_AddSplinePointAndMesh_TOTD");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/Player/Pawns/PlayerPawn_Ninja.PlayerPawn_Ninja_C:VFX_UpdateSplinePoints_TOTD
void APlayerPawn_Ninja_C::VFX_UpdateSplinePoints_TOTD()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Pawns/PlayerPawn_Ninja.PlayerPawn_Ninja_C:VFX_UpdateSplinePoints_TOTD");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/Player/Pawns/PlayerPawn_Ninja.PlayerPawn_Ninja_C:VFX_InitializeSpline_TOTD
void APlayerPawn_Ninja_C::VFX_InitializeSpline_TOTD()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Pawns/PlayerPawn_Ninja.PlayerPawn_Ninja_C:VFX_InitializeSpline_TOTD");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/Player/Pawns/PlayerPawn_Ninja.PlayerPawn_Ninja_C:CreateAndAttachDuplicateEffectSkeletalMeshes
void APlayerPawn_Ninja_C::CreateAndAttachDuplicateEffectSkeletalMeshes(EFortCustomPartType BodyType, class USkeletalMeshComponent* DuplicatedSkeletalMeshComponent, class UMaterialInterface* Material_to_Apply, TArray<class UMaterialInstanceDynamic*> Empty_MID_Array, int32_t TranslucentSortPriority)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Pawns/PlayerPawn_Ninja.PlayerPawn_Ninja_C:CreateAndAttachDuplicateEffectSkeletalMeshes");

	FAPlayerPawn_Ninja_C_CreateAndAttachDuplicateEffectSkeletalMeshes_Params Parms;

	Parms.BodyType = BodyType;
	Parms.DuplicatedSkeletalMeshComponent = DuplicatedSkeletalMeshComponent;
	Parms.Material_to_Apply = Material_to_Apply;
	Parms.Empty_MID_Array = Empty_MID_Array;
	Parms.TranslucentSortPriority = TranslucentSortPriority;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Pawns/PlayerPawn_Ninja.PlayerPawn_Ninja_C:UserConstructionScript
void APlayerPawn_Ninja_C::UserConstructionScript()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Pawns/PlayerPawn_Ninja.PlayerPawn_Ninja_C:UserConstructionScript");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/Player/Pawns/PlayerPawn_Ninja.PlayerPawn_Ninja_C:Animate Ninja ShadowStance Dissolve__FinishedFunc
void APlayerPawn_Ninja_C::Animate_Ninja_ShadowStance_Dissolve__FinishedFunc()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Pawns/PlayerPawn_Ninja.PlayerPawn_Ninja_C:Animate Ninja ShadowStance Dissolve__FinishedFunc");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/Player/Pawns/PlayerPawn_Ninja.PlayerPawn_Ninja_C:Animate Ninja ShadowStance Dissolve__UpdateFunc
void APlayerPawn_Ninja_C::Animate_Ninja_ShadowStance_Dissolve__UpdateFunc()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Pawns/PlayerPawn_Ninja.PlayerPawn_Ninja_C:Animate Ninja ShadowStance Dissolve__UpdateFunc");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/Player/Pawns/PlayerPawn_Ninja.PlayerPawn_Ninja_C:FadeRibbonTOTD__FinishedFunc
void APlayerPawn_Ninja_C::FadeRibbonTOTD__FinishedFunc()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Pawns/PlayerPawn_Ninja.PlayerPawn_Ninja_C:FadeRibbonTOTD__FinishedFunc");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/Player/Pawns/PlayerPawn_Ninja.PlayerPawn_Ninja_C:FadeRibbonTOTD__UpdateFunc
void APlayerPawn_Ninja_C::FadeRibbonTOTD__UpdateFunc()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Pawns/PlayerPawn_Ninja.PlayerPawn_Ninja_C:FadeRibbonTOTD__UpdateFunc");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/Player/Pawns/PlayerPawn_Ninja.PlayerPawn_Ninja_C:GameplayCue.Ninja.SmokeBomb.ImpactFX
void APlayerPawn_Ninja_C::GameplayCue_Ninja_SmokeBomb_ImpactFX(EGameplayCueEvent EventType, FGameplayCueParameters Parameters)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Pawns/PlayerPawn_Ninja.PlayerPawn_Ninja_C:GameplayCue.Ninja.SmokeBomb.ImpactFX");

	FAPlayerPawn_Ninja_C_GameplayCue_Ninja_SmokeBomb_ImpactFX_Params Parms;

	Parms.EventType = EventType;
	Parms.Parameters = Parameters;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Pawns/PlayerPawn_Ninja.PlayerPawn_Ninja_C:OnLanded
void APlayerPawn_Ninja_C::OnLanded(FHitResult Hit)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Pawns/PlayerPawn_Ninja.PlayerPawn_Ninja_C:OnLanded");

	FAPlayerPawn_Ninja_C_OnLanded_Params Parms;

	Parms.Hit = Hit;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Pawns/PlayerPawn_Ninja.PlayerPawn_Ninja_C:GameplayCue.Abilities.Activation.Ninja.ShadowStance
void APlayerPawn_Ninja_C::GameplayCue_Abilities_Activation_Ninja_ShadowStance(EGameplayCueEvent EventType, FGameplayCueParameters Parameters)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Pawns/PlayerPawn_Ninja.PlayerPawn_Ninja_C:GameplayCue.Abilities.Activation.Ninja.ShadowStance");

	FAPlayerPawn_Ninja_C_GameplayCue_Abilities_Activation_Ninja_ShadowStance_Params Parms;

	Parms.EventType = EventType;
	Parms.Parameters = Parameters;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Pawns/PlayerPawn_Ninja.PlayerPawn_Ninja_C:GameplayCue.Ninja.Assassination.ActiveFX
void APlayerPawn_Ninja_C::GameplayCue_Ninja_Assassination_ActiveFX(EGameplayCueEvent EventType, FGameplayCueParameters Parameters)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Pawns/PlayerPawn_Ninja.PlayerPawn_Ninja_C:GameplayCue.Ninja.Assassination.ActiveFX");

	FAPlayerPawn_Ninja_C_GameplayCue_Ninja_Assassination_ActiveFX_Params Parms;

	Parms.EventType = EventType;
	Parms.Parameters = Parameters;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Pawns/PlayerPawn_Ninja.PlayerPawn_Ninja_C:GameplayCue.Ninja.DimMak.ActiveFX
void APlayerPawn_Ninja_C::GameplayCue_Ninja_DimMak_ActiveFX(EGameplayCueEvent EventType, FGameplayCueParameters Parameters)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Pawns/PlayerPawn_Ninja.PlayerPawn_Ninja_C:GameplayCue.Ninja.DimMak.ActiveFX");

	FAPlayerPawn_Ninja_C_GameplayCue_Ninja_DimMak_ActiveFX_Params Parms;

	Parms.EventType = EventType;
	Parms.Parameters = Parameters;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Pawns/PlayerPawn_Ninja.PlayerPawn_Ninja_C:GameplayCue.Ninja.MantisLeap.ActivationFX
void APlayerPawn_Ninja_C::GameplayCue_Ninja_MantisLeap_ActivationFX(EGameplayCueEvent EventType, FGameplayCueParameters Parameters)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Pawns/PlayerPawn_Ninja.PlayerPawn_Ninja_C:GameplayCue.Ninja.MantisLeap.ActivationFX");

	FAPlayerPawn_Ninja_C_GameplayCue_Ninja_MantisLeap_ActivationFX_Params Parms;

	Parms.EventType = EventType;
	Parms.Parameters = Parameters;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Pawns/PlayerPawn_Ninja.PlayerPawn_Ninja_C:OnWeaponEquipped
void APlayerPawn_Ninja_C::OnWeaponEquipped(class AFortWeapon* NewWeapon, class AFortWeapon* PrevWeapon)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Pawns/PlayerPawn_Ninja.PlayerPawn_Ninja_C:OnWeaponEquipped");

	FAPlayerPawn_Ninja_C_OnWeaponEquipped_Params Parms;

	Parms.NewWeapon = NewWeapon;
	Parms.PrevWeapon = PrevWeapon;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Pawns/PlayerPawn_Ninja.PlayerPawn_Ninja_C:UpdateWeaponShadowStance
void APlayerPawn_Ninja_C::UpdateWeaponShadowStance()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Pawns/PlayerPawn_Ninja.PlayerPawn_Ninja_C:UpdateWeaponShadowStance");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/Player/Pawns/PlayerPawn_Ninja.PlayerPawn_Ninja_C:DragonSlashActivatedOrDeactivated
void APlayerPawn_Ninja_C::DragonSlashActivatedOrDeactivated(bool Active_)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Pawns/PlayerPawn_Ninja.PlayerPawn_Ninja_C:DragonSlashActivatedOrDeactivated");

	FAPlayerPawn_Ninja_C_DragonSlashActivatedOrDeactivated_Params Parms;

	Parms.Active_ = Active_;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Pawns/PlayerPawn_Ninja.PlayerPawn_Ninja_C:ReceiveBeginPlay
void APlayerPawn_Ninja_C::ReceiveBeginPlay()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Pawns/PlayerPawn_Ninja.PlayerPawn_Ninja_C:ReceiveBeginPlay");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/Player/Pawns/PlayerPawn_Ninja.PlayerPawn_Ninja_C:Toggle Shadow Stance
void APlayerPawn_Ninja_C::Toggle_Shadow_Stance()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Pawns/PlayerPawn_Ninja.PlayerPawn_Ninja_C:Toggle Shadow Stance");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/Player/Pawns/PlayerPawn_Ninja.PlayerPawn_Ninja_C:OnCharacterPartsReinitialized
void APlayerPawn_Ninja_C::OnCharacterPartsReinitialized()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Pawns/PlayerPawn_Ninja.PlayerPawn_Ninja_C:OnCharacterPartsReinitialized");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/Player/Pawns/PlayerPawn_Ninja.PlayerPawn_Ninja_C:GameplayCue.Abilities.Activation.Generic.HarvestBuff.Tier1
void APlayerPawn_Ninja_C::GameplayCue_Abilities_Activation_Generic_HarvestBuff_Tier1(EGameplayCueEvent EventType, FGameplayCueParameters Parameters)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Pawns/PlayerPawn_Ninja.PlayerPawn_Ninja_C:GameplayCue.Abilities.Activation.Generic.HarvestBuff.Tier1");

	FAPlayerPawn_Ninja_C_GameplayCue_Abilities_Activation_Generic_HarvestBuff_Tier1_Params Parms;

	Parms.EventType = EventType;
	Parms.Parameters = Parameters;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Pawns/PlayerPawn_Ninja.PlayerPawn_Ninja_C:GameplayCue.Abilities.Activation.Generic.HarvestBuff.Tier2
void APlayerPawn_Ninja_C::GameplayCue_Abilities_Activation_Generic_HarvestBuff_Tier2(EGameplayCueEvent EventType, FGameplayCueParameters Parameters)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Pawns/PlayerPawn_Ninja.PlayerPawn_Ninja_C:GameplayCue.Abilities.Activation.Generic.HarvestBuff.Tier2");

	FAPlayerPawn_Ninja_C_GameplayCue_Abilities_Activation_Generic_HarvestBuff_Tier2_Params Parms;

	Parms.EventType = EventType;
	Parms.Parameters = Parameters;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Pawns/PlayerPawn_Ninja.PlayerPawn_Ninja_C:TailOfDragonStart
void APlayerPawn_Ninja_C::TailOfDragonStart(float AoeCloudTimeToLive)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Pawns/PlayerPawn_Ninja.PlayerPawn_Ninja_C:TailOfDragonStart");

	FAPlayerPawn_Ninja_C_TailOfDragonStart_Params Parms;

	Parms.AoeCloudTimeToLive = AoeCloudTimeToLive;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Pawns/PlayerPawn_Ninja.PlayerPawn_Ninja_C:TailOfDragonEnd
void APlayerPawn_Ninja_C::TailOfDragonEnd()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Pawns/PlayerPawn_Ninja.PlayerPawn_Ninja_C:TailOfDragonEnd");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/Player/Pawns/PlayerPawn_Ninja.PlayerPawn_Ninja_C:ReceiveTick
void APlayerPawn_Ninja_C::ReceiveTick(float DeltaSeconds)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Pawns/PlayerPawn_Ninja.PlayerPawn_Ninja_C:ReceiveTick");

	FAPlayerPawn_Ninja_C_ReceiveTick_Params Parms;

	Parms.DeltaSeconds = DeltaSeconds;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Pawns/PlayerPawn_Ninja.PlayerPawn_Ninja_C:TOTDTimerExpired
void APlayerPawn_Ninja_C::TOTDTimerExpired()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Pawns/PlayerPawn_Ninja.PlayerPawn_Ninja_C:TOTDTimerExpired");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/Player/Pawns/PlayerPawn_Ninja.PlayerPawn_Ninja_C:GameplayCue.Ninja.MantisLeap.MantisStrikeFX
void APlayerPawn_Ninja_C::GameplayCue_Ninja_MantisLeap_MantisStrikeFX(EGameplayCueEvent EventType, FGameplayCueParameters Parameters)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Pawns/PlayerPawn_Ninja.PlayerPawn_Ninja_C:GameplayCue.Ninja.MantisLeap.MantisStrikeFX");

	FAPlayerPawn_Ninja_C_GameplayCue_Ninja_MantisLeap_MantisStrikeFX_Params Parms;

	Parms.EventType = EventType;
	Parms.Parameters = Parameters;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Pawns/PlayerPawn_Ninja.PlayerPawn_Ninja_C:ExecuteUbergraph_PlayerPawn_Ninja
void APlayerPawn_Ninja_C::ExecuteUbergraph_PlayerPawn_Ninja(int32_t EntryPoint)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Pawns/PlayerPawn_Ninja.PlayerPawn_Ninja_C:ExecuteUbergraph_PlayerPawn_Ninja");

	FAPlayerPawn_Ninja_C_ExecuteUbergraph_PlayerPawn_Ninja_Params Parms;

	Parms.EntryPoint = EntryPoint;

	ProcessEvent(FN, &Parms);
}

