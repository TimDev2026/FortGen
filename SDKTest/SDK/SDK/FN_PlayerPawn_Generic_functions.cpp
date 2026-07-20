#include "pch.h"

#include "FN_PlayerPawn_Generic_classes.h"

UClass* APlayerPawn_Generic_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/Player/Pawns/PlayerPawn_Generic.PlayerPawn_Generic_C");

	return Class;
}

// Function /Game/Abilities/Player/Pawns/PlayerPawn_Generic.PlayerPawn_Generic_C:Melee_Effect_Color
void APlayerPawn_Generic_C::Melee_Effect_Color(FVector Melee_Color_Set)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Pawns/PlayerPawn_Generic.PlayerPawn_Generic_C:Melee_Effect_Color");

	FAPlayerPawn_Generic_C_Melee_Effect_Color_Params Parms;

	Parms.Melee_Color_Set = Melee_Color_Set;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Pawns/PlayerPawn_Generic.PlayerPawn_Generic_C:Setup FX Mesh Duplicates
void APlayerPawn_Generic_C::Setup_FX_Mesh_Duplicates(class UMaterialInterface* Material_to_Apply, TArray<class UMaterialInstanceDynamic*> Charm_MID_Array, class USkeletalMeshComponent* Charm_Mesh, TArray<class UMaterialInstanceDynamic*> Head_MID_Array, class USkeletalMeshComponent* Head_Mesh, TArray<class UMaterialInstanceDynamic*> Body_MID_Array, class USkeletalMeshComponent* Body_Mesh, int32_t Translucent_Sort_Order)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Pawns/PlayerPawn_Generic.PlayerPawn_Generic_C:Setup FX Mesh Duplicates");

	FAPlayerPawn_Generic_C_Setup_FX_Mesh_Duplicates_Params Parms;

	Parms.Material_to_Apply = Material_to_Apply;
	Parms.Charm_MID_Array = Charm_MID_Array;
	Parms.Charm_Mesh = Charm_Mesh;
	Parms.Head_MID_Array = Head_MID_Array;
	Parms.Head_Mesh = Head_Mesh;
	Parms.Body_MID_Array = Body_MID_Array;
	Parms.Body_Mesh = Body_Mesh;
	Parms.Translucent_Sort_Order = Translucent_Sort_Order;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Pawns/PlayerPawn_Generic.PlayerPawn_Generic_C:Create and Duplicate Effect Poseable Skeletal Mesh
void APlayerPawn_Generic_C::Create_and_Duplicate_Effect_Poseable_Skeletal_Mesh(EFortCustomPartType BodyType, class UMaterialInterface* Material_to_Apply, TArray<class UMaterialInstanceDynamic*> Empty_MID_Array, int32_t TranslucentSortPriority, class UPoseableMeshComponent* PoseableMesh)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Pawns/PlayerPawn_Generic.PlayerPawn_Generic_C:Create and Duplicate Effect Poseable Skeletal Mesh");

	FAPlayerPawn_Generic_C_Create_and_Duplicate_Effect_Poseable_Skeletal_Mesh_Params Parms;

	Parms.BodyType = BodyType;
	Parms.Material_to_Apply = Material_to_Apply;
	Parms.Empty_MID_Array = Empty_MID_Array;
	Parms.TranslucentSortPriority = TranslucentSortPriority;
	Parms.PoseableMesh = PoseableMesh;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Pawns/PlayerPawn_Generic.PlayerPawn_Generic_C:ToggleShieldVisibility
void APlayerPawn_Generic_C::ToggleShieldVisibility()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Pawns/PlayerPawn_Generic.PlayerPawn_Generic_C:ToggleShieldVisibility");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/Player/Pawns/PlayerPawn_Generic.PlayerPawn_Generic_C:SlaveAMeshToTheBody
void APlayerPawn_Generic_C::SlaveAMeshToTheBody(class USkeletalMeshComponent* Mesh, class USkeletalMeshComponent* Master)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Pawns/PlayerPawn_Generic.PlayerPawn_Generic_C:SlaveAMeshToTheBody");

	FAPlayerPawn_Generic_C_SlaveAMeshToTheBody_Params Parms;

	Parms.Mesh = Mesh;
	Parms.Master = Master;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Pawns/PlayerPawn_Generic.PlayerPawn_Generic_C:SetShieldMids_InternalLoop
void APlayerPawn_Generic_C::SetShieldMids_InternalLoop(float Highlight_Cracks, bool Set_Highlight_Cracks, float Push, bool Set_Push, TArray<class UMaterialInstanceDynamic*> NewParam1)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Pawns/PlayerPawn_Generic.PlayerPawn_Generic_C:SetShieldMids_InternalLoop");

	FAPlayerPawn_Generic_C_SetShieldMids_InternalLoop_Params Parms;

	Parms.Highlight_Cracks = Highlight_Cracks;
	Parms.Set_Highlight_Cracks = Set_Highlight_Cracks;
	Parms.Push = Push;
	Parms.Set_Push = Set_Push;
	Parms.NewParam1 = NewParam1;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Pawns/PlayerPawn_Generic.PlayerPawn_Generic_C:SetShieldMids
void APlayerPawn_Generic_C::SetShieldMids(float Highlight_Cracks, bool Set_Highlight_Cracks, float Push, bool Set_Push)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Pawns/PlayerPawn_Generic.PlayerPawn_Generic_C:SetShieldMids");

	FAPlayerPawn_Generic_C_SetShieldMids_Params Parms;

	Parms.Highlight_Cracks = Highlight_Cracks;
	Parms.Set_Highlight_Cracks = Set_Highlight_Cracks;
	Parms.Push = Push;
	Parms.Set_Push = Set_Push;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Pawns/PlayerPawn_Generic.PlayerPawn_Generic_C:FindShieldOpacity
void APlayerPawn_Generic_C::FindShieldOpacity()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Pawns/PlayerPawn_Generic.PlayerPawn_Generic_C:FindShieldOpacity");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/Player/Pawns/PlayerPawn_Generic.PlayerPawn_Generic_C:Create and Duplicate Effect Skeletal Meshes Parent
void APlayerPawn_Generic_C::Create_and_Duplicate_Effect_Skeletal_Meshes_Parent(EFortCustomPartType BodyType, class USkeletalMeshComponent* DuplicatedSkeletalMeshComponent, class UMaterialInterface* Material_to_Apply, TArray<class UMaterialInstanceDynamic*> Empty_MID_Array, int32_t TranslucentSortPriority)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Pawns/PlayerPawn_Generic.PlayerPawn_Generic_C:Create and Duplicate Effect Skeletal Meshes Parent");

	FAPlayerPawn_Generic_C_Create_and_Duplicate_Effect_Skeletal_Meshes_Parent_Params Parms;

	Parms.BodyType = BodyType;
	Parms.DuplicatedSkeletalMeshComponent = DuplicatedSkeletalMeshComponent;
	Parms.Material_to_Apply = Material_to_Apply;
	Parms.Empty_MID_Array = Empty_MID_Array;
	Parms.TranslucentSortPriority = TranslucentSortPriority;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Pawns/PlayerPawn_Generic.PlayerPawn_Generic_C:UserConstructionScript
void APlayerPawn_Generic_C::UserConstructionScript()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Pawns/PlayerPawn_Generic.PlayerPawn_Generic_C:UserConstructionScript");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/Player/Pawns/PlayerPawn_Generic.PlayerPawn_Generic_C:HealthSweep__FinishedFunc
void APlayerPawn_Generic_C::HealthSweep__FinishedFunc()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Pawns/PlayerPawn_Generic.PlayerPawn_Generic_C:HealthSweep__FinishedFunc");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/Player/Pawns/PlayerPawn_Generic.PlayerPawn_Generic_C:HealthSweep__UpdateFunc
void APlayerPawn_Generic_C::HealthSweep__UpdateFunc()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Pawns/PlayerPawn_Generic.PlayerPawn_Generic_C:HealthSweep__UpdateFunc");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/Player/Pawns/PlayerPawn_Generic.PlayerPawn_Generic_C:Shield Regen Timeline__FinishedFunc
void APlayerPawn_Generic_C::Shield_Regen_Timeline__FinishedFunc()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Pawns/PlayerPawn_Generic.PlayerPawn_Generic_C:Shield Regen Timeline__FinishedFunc");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/Player/Pawns/PlayerPawn_Generic.PlayerPawn_Generic_C:Shield Regen Timeline__UpdateFunc
void APlayerPawn_Generic_C::Shield_Regen_Timeline__UpdateFunc()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Pawns/PlayerPawn_Generic.PlayerPawn_Generic_C:Shield Regen Timeline__UpdateFunc");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/Player/Pawns/PlayerPawn_Generic.PlayerPawn_Generic_C:Shield_ShatterTimeline__FinishedFunc
void APlayerPawn_Generic_C::Shield_ShatterTimeline__FinishedFunc()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Pawns/PlayerPawn_Generic.PlayerPawn_Generic_C:Shield_ShatterTimeline__FinishedFunc");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/Player/Pawns/PlayerPawn_Generic.PlayerPawn_Generic_C:Shield_ShatterTimeline__UpdateFunc
void APlayerPawn_Generic_C::Shield_ShatterTimeline__UpdateFunc()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Pawns/PlayerPawn_Generic.PlayerPawn_Generic_C:Shield_ShatterTimeline__UpdateFunc");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/Player/Pawns/PlayerPawn_Generic.PlayerPawn_Generic_C:Shield_DamageTimeline__FinishedFunc
void APlayerPawn_Generic_C::Shield_DamageTimeline__FinishedFunc()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Pawns/PlayerPawn_Generic.PlayerPawn_Generic_C:Shield_DamageTimeline__FinishedFunc");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/Player/Pawns/PlayerPawn_Generic.PlayerPawn_Generic_C:Shield_DamageTimeline__UpdateFunc
void APlayerPawn_Generic_C::Shield_DamageTimeline__UpdateFunc()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Pawns/PlayerPawn_Generic.PlayerPawn_Generic_C:Shield_DamageTimeline__UpdateFunc");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/Player/Pawns/PlayerPawn_Generic.PlayerPawn_Generic_C:Full Shield Health__FinishedFunc
void APlayerPawn_Generic_C::Full_Shield_Health__FinishedFunc()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Pawns/PlayerPawn_Generic.PlayerPawn_Generic_C:Full Shield Health__FinishedFunc");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/Player/Pawns/PlayerPawn_Generic.PlayerPawn_Generic_C:Full Shield Health__UpdateFunc
void APlayerPawn_Generic_C::Full_Shield_Health__UpdateFunc()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Pawns/PlayerPawn_Generic.PlayerPawn_Generic_C:Full Shield Health__UpdateFunc");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/Player/Pawns/PlayerPawn_Generic.PlayerPawn_Generic_C:MeleeSwingRight
void APlayerPawn_Generic_C::MeleeSwingRight()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Pawns/PlayerPawn_Generic.PlayerPawn_Generic_C:MeleeSwingRight");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/Player/Pawns/PlayerPawn_Generic.PlayerPawn_Generic_C:MeleeSwingLeft
void APlayerPawn_Generic_C::MeleeSwingLeft()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Pawns/PlayerPawn_Generic.PlayerPawn_Generic_C:MeleeSwingLeft");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/Player/Pawns/PlayerPawn_Generic.PlayerPawn_Generic_C:OnDamagePlayEffects
void APlayerPawn_Generic_C::OnDamagePlayEffects(float Damage, FGameplayTagContainer DamageTags, FVector Momentum, FHitResult HitInfo, class AFortPawn* InstigatedBy, class AActor* DamageCauser, FGameplayEffectContextHandle EffectContext)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Pawns/PlayerPawn_Generic.PlayerPawn_Generic_C:OnDamagePlayEffects");

	FAPlayerPawn_Generic_C_OnDamagePlayEffects_Params Parms;

	Parms.Damage = Damage;
	Parms.DamageTags = DamageTags;
	Parms.Momentum = Momentum;
	Parms.HitInfo = HitInfo;
	Parms.InstigatedBy = InstigatedBy;
	Parms.DamageCauser = DamageCauser;
	Parms.EffectContext = EffectContext;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Pawns/PlayerPawn_Generic.PlayerPawn_Generic_C:OnLanded
void APlayerPawn_Generic_C::OnLanded(FHitResult Hit)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Pawns/PlayerPawn_Generic.PlayerPawn_Generic_C:OnLanded");

	FAPlayerPawn_Generic_C_OnLanded_Params Parms;

	Parms.Hit = Hit;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Pawns/PlayerPawn_Generic.PlayerPawn_Generic_C:Distance
void APlayerPawn_Generic_C::Distance()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Pawns/PlayerPawn_Generic.PlayerPawn_Generic_C:Distance");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/Player/Pawns/PlayerPawn_Generic.PlayerPawn_Generic_C:OnDeathPlayEffects
void APlayerPawn_Generic_C::OnDeathPlayEffects(float Damage, FGameplayTagContainer DamageTags, FVector Momentum, FHitResult HitInfo, class AFortPawn* InstigatedBy, class AActor* DamageCauser, FGameplayEffectContextHandle EffectContext)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Pawns/PlayerPawn_Generic.PlayerPawn_Generic_C:OnDeathPlayEffects");

	FAPlayerPawn_Generic_C_OnDeathPlayEffects_Params Parms;

	Parms.Damage = Damage;
	Parms.DamageTags = DamageTags;
	Parms.Momentum = Momentum;
	Parms.HitInfo = HitInfo;
	Parms.InstigatedBy = InstigatedBy;
	Parms.DamageCauser = DamageCauser;
	Parms.EffectContext = EffectContext;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Pawns/PlayerPawn_Generic.PlayerPawn_Generic_C:OnWeaponEquipped
void APlayerPawn_Generic_C::OnWeaponEquipped(class AFortWeapon* NewWeapon, class AFortWeapon* PrevWeapon)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Pawns/PlayerPawn_Generic.PlayerPawn_Generic_C:OnWeaponEquipped");

	FAPlayerPawn_Generic_C_OnWeaponEquipped_Params Parms;

	Parms.NewWeapon = NewWeapon;
	Parms.PrevWeapon = PrevWeapon;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Pawns/PlayerPawn_Generic.PlayerPawn_Generic_C:ReceiveTick
void APlayerPawn_Generic_C::ReceiveTick(float DeltaSeconds)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Pawns/PlayerPawn_Generic.PlayerPawn_Generic_C:ReceiveTick");

	FAPlayerPawn_Generic_C_ReceiveTick_Params Parms;

	Parms.DeltaSeconds = DeltaSeconds;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Pawns/PlayerPawn_Generic.PlayerPawn_Generic_C:FootStepLeft
void APlayerPawn_Generic_C::FootStepLeft()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Pawns/PlayerPawn_Generic.PlayerPawn_Generic_C:FootStepLeft");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/Player/Pawns/PlayerPawn_Generic.PlayerPawn_Generic_C:FootStepRight
void APlayerPawn_Generic_C::FootStepRight()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Pawns/PlayerPawn_Generic.PlayerPawn_Generic_C:FootStepRight");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/Player/Pawns/PlayerPawn_Generic.PlayerPawn_Generic_C:OnCharacterPartsReinitialized
void APlayerPawn_Generic_C::OnCharacterPartsReinitialized()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Pawns/PlayerPawn_Generic.PlayerPawn_Generic_C:OnCharacterPartsReinitialized");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/Player/Pawns/PlayerPawn_Generic.PlayerPawn_Generic_C:GameplayCue.Abilities.Activation.Generic.HarvestBuff.Tier1
void APlayerPawn_Generic_C::GameplayCue_Abilities_Activation_Generic_HarvestBuff_Tier1(EGameplayCueEvent EventType, FGameplayCueParameters Parameters)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Pawns/PlayerPawn_Generic.PlayerPawn_Generic_C:GameplayCue.Abilities.Activation.Generic.HarvestBuff.Tier1");

	FAPlayerPawn_Generic_C_GameplayCue_Abilities_Activation_Generic_HarvestBuff_Tier1_Params Parms;

	Parms.EventType = EventType;
	Parms.Parameters = Parameters;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Pawns/PlayerPawn_Generic.PlayerPawn_Generic_C:GameplayCue.Abilities.Activation.Generic.HarvestBuff.Tier2
void APlayerPawn_Generic_C::GameplayCue_Abilities_Activation_Generic_HarvestBuff_Tier2(EGameplayCueEvent EventType, FGameplayCueParameters Parameters)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Pawns/PlayerPawn_Generic.PlayerPawn_Generic_C:GameplayCue.Abilities.Activation.Generic.HarvestBuff.Tier2");

	FAPlayerPawn_Generic_C_GameplayCue_Abilities_Activation_Generic_HarvestBuff_Tier2_Params Parms;

	Parms.EventType = EventType;
	Parms.Parameters = Parameters;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Pawns/PlayerPawn_Generic.PlayerPawn_Generic_C:SetFirstPersonCamera
void APlayerPawn_Generic_C::SetFirstPersonCamera(bool bNewUseFirstPersonCamera)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Pawns/PlayerPawn_Generic.PlayerPawn_Generic_C:SetFirstPersonCamera");

	FAPlayerPawn_Generic_C_SetFirstPersonCamera_Params Parms;

	Parms.bNewUseFirstPersonCamera = bNewUseFirstPersonCamera;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Pawns/PlayerPawn_Generic.PlayerPawn_Generic_C:GameplayCue.GravitySphere
void APlayerPawn_Generic_C::GameplayCue_GravitySphere(EGameplayCueEvent EventType, FGameplayCueParameters Parameters)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Pawns/PlayerPawn_Generic.PlayerPawn_Generic_C:GameplayCue.GravitySphere");

	FAPlayerPawn_Generic_C_GameplayCue_GravitySphere_Params Parms;

	Parms.EventType = EventType;
	Parms.Parameters = Parameters;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Pawns/PlayerPawn_Generic.PlayerPawn_Generic_C:Ninja Dust FX
void APlayerPawn_Generic_C::Ninja_Dust_FX()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Pawns/PlayerPawn_Generic.PlayerPawn_Generic_C:Ninja Dust FX");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/Player/Pawns/PlayerPawn_Generic.PlayerPawn_Generic_C:InternalSetFirstPersonCamera
void APlayerPawn_Generic_C::InternalSetFirstPersonCamera(bool NewUseFirstPersonCamera)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Pawns/PlayerPawn_Generic.PlayerPawn_Generic_C:InternalSetFirstPersonCamera");

	FAPlayerPawn_Generic_C_InternalSetFirstPersonCamera_Params Parms;

	Parms.NewUseFirstPersonCamera = NewUseFirstPersonCamera;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Pawns/PlayerPawn_Generic.PlayerPawn_Generic_C:OnLand_CE
void APlayerPawn_Generic_C::OnLand_CE()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Pawns/PlayerPawn_Generic.PlayerPawn_Generic_C:OnLand_CE");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/Player/Pawns/PlayerPawn_Generic.PlayerPawn_Generic_C:Test Adrenaline Rush
void APlayerPawn_Generic_C::Test_Adrenaline_Rush()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Pawns/PlayerPawn_Generic.PlayerPawn_Generic_C:Test Adrenaline Rush");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/Player/Pawns/PlayerPawn_Generic.PlayerPawn_Generic_C:GameplayCue.Generic.AdrenalineRush.PeriodicHeal
void APlayerPawn_Generic_C::GameplayCue_Generic_AdrenalineRush_PeriodicHeal(EGameplayCueEvent EventType, FGameplayCueParameters Parameters)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Pawns/PlayerPawn_Generic.PlayerPawn_Generic_C:GameplayCue.Generic.AdrenalineRush.PeriodicHeal");

	FAPlayerPawn_Generic_C_GameplayCue_Generic_AdrenalineRush_PeriodicHeal_Params Parms;

	Parms.EventType = EventType;
	Parms.Parameters = Parameters;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Pawns/PlayerPawn_Generic.PlayerPawn_Generic_C:GameplayCue.Generic.AdrenalineRush.DirectHeal
void APlayerPawn_Generic_C::GameplayCue_Generic_AdrenalineRush_DirectHeal(EGameplayCueEvent EventType, FGameplayCueParameters Parameters)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Pawns/PlayerPawn_Generic.PlayerPawn_Generic_C:GameplayCue.Generic.AdrenalineRush.DirectHeal");

	FAPlayerPawn_Generic_C_GameplayCue_Generic_AdrenalineRush_DirectHeal_Params Parms;

	Parms.EventType = EventType;
	Parms.Parameters = Parameters;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Pawns/PlayerPawn_Generic.PlayerPawn_Generic_C:GameplayCue.Damage.Shielded
void APlayerPawn_Generic_C::GameplayCue_Damage_Shielded(EGameplayCueEvent EventType, FGameplayCueParameters Parameters)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Pawns/PlayerPawn_Generic.PlayerPawn_Generic_C:GameplayCue.Damage.Shielded");

	FAPlayerPawn_Generic_C_GameplayCue_Damage_Shielded_Params Parms;

	Parms.EventType = EventType;
	Parms.Parameters = Parameters;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Pawns/PlayerPawn_Generic.PlayerPawn_Generic_C:GameplayCue.Shield.Destroyed
void APlayerPawn_Generic_C::GameplayCue_Shield_Destroyed(EGameplayCueEvent EventType, FGameplayCueParameters Parameters)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Pawns/PlayerPawn_Generic.PlayerPawn_Generic_C:GameplayCue.Shield.Destroyed");

	FAPlayerPawn_Generic_C_GameplayCue_Shield_Destroyed_Params Parms;

	Parms.EventType = EventType;
	Parms.Parameters = Parameters;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Pawns/PlayerPawn_Generic.PlayerPawn_Generic_C:GameplayCue.Shield.FullyCharged
void APlayerPawn_Generic_C::GameplayCue_Shield_FullyCharged(EGameplayCueEvent EventType, FGameplayCueParameters Parameters)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Pawns/PlayerPawn_Generic.PlayerPawn_Generic_C:GameplayCue.Shield.FullyCharged");

	FAPlayerPawn_Generic_C_GameplayCue_Shield_FullyCharged_Params Parms;

	Parms.EventType = EventType;
	Parms.Parameters = Parameters;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Pawns/PlayerPawn_Generic.PlayerPawn_Generic_C:GameplayCue.Shield.Reapplied
void APlayerPawn_Generic_C::GameplayCue_Shield_Reapplied(EGameplayCueEvent EventType, FGameplayCueParameters Parameters)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Pawns/PlayerPawn_Generic.PlayerPawn_Generic_C:GameplayCue.Shield.Reapplied");

	FAPlayerPawn_Generic_C_GameplayCue_Shield_Reapplied_Params Parms;

	Parms.EventType = EventType;
	Parms.Parameters = Parameters;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Pawns/PlayerPawn_Generic.PlayerPawn_Generic_C:ExecuteUbergraph_PlayerPawn_Generic
void APlayerPawn_Generic_C::ExecuteUbergraph_PlayerPawn_Generic(int32_t EntryPoint)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Pawns/PlayerPawn_Generic.PlayerPawn_Generic_C:ExecuteUbergraph_PlayerPawn_Generic");

	FAPlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic_Params Parms;

	Parms.EntryPoint = EntryPoint;

	ProcessEvent(FN, &Parms);
}

