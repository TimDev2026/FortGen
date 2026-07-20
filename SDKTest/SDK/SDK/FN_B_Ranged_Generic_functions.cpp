#include "pch.h"

#include "FN_B_Ranged_Generic_classes.h"

UClass* AB_Ranged_Generic_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C");

	return Class;
}

// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C:IsUsingFirstPersonCamera
void AB_Ranged_Generic_C::IsUsingFirstPersonCamera(bool UsingFirstPerson)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C:IsUsingFirstPersonCamera");

	FAB_Ranged_Generic_C_IsUsingFirstPersonCamera_Params Parms;

	Parms.UsingFirstPerson = UsingFirstPerson;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C:Shell FX On Fire Update
void AB_Ranged_Generic_C::Shell_FX_On_Fire_Update()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C:Shell FX On Fire Update");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C:IsUsingScope
void AB_Ranged_Generic_C::IsUsingScope(bool UsingScope)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C:IsUsingScope");

	FAB_Ranged_Generic_C_IsUsingScope_Params Parms;

	Parms.UsingScope = UsingScope;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C:GetMuzzleLocation
FVector AB_Ranged_Generic_C::GetMuzzleLocation() const
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C:GetMuzzleLocation");

	FAB_Ranged_Generic_C_GetMuzzleLocation_Params Parms;


	ProcessEvent(FN, &Parms);
}

// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C:Muzzle Play Reload FX
void AB_Ranged_Generic_C::Muzzle_Play_Reload_FX(EFortReloadFXState Selection)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C:Muzzle Play Reload FX");

	FAB_Ranged_Generic_C_Muzzle_Play_Reload_FX_Params Parms;

	Parms.Selection = Selection;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C:Muzzle Flash FX
void AB_Ranged_Generic_C::Muzzle_Flash_FX(bool Condition)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C:Muzzle Flash FX");

	FAB_Ranged_Generic_C_Muzzle_Flash_FX_Params Parms;

	Parms.Condition = Condition;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C:SetWpnRarity
void AB_Ranged_Generic_C::SetWpnRarity()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C:SetWpnRarity");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C:AddRandomScale
void AB_Ranged_Generic_C::AddRandomScale()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C:AddRandomScale");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C:UserConstructionScript
void AB_Ranged_Generic_C::UserConstructionScript()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C:UserConstructionScript");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C:AnimateScopePostProcess__FinishedFunc
void AB_Ranged_Generic_C::AnimateScopePostProcess__FinishedFunc()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C:AnimateScopePostProcess__FinishedFunc");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C:AnimateScopePostProcess__UpdateFunc
void AB_Ranged_Generic_C::AnimateScopePostProcess__UpdateFunc()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C:AnimateScopePostProcess__UpdateFunc");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C:OnPlayWeaponFireFX
void AB_Ranged_Generic_C::OnPlayWeaponFireFX(bool bPersistentFire)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C:OnPlayWeaponFireFX");

	FAB_Ranged_Generic_C_OnPlayWeaponFireFX_Params Parms;

	Parms.bPersistentFire = bPersistentFire;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C:OnStopWeaponFireFX
void AB_Ranged_Generic_C::OnStopWeaponFireFX()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C:OnStopWeaponFireFX");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C:GameplayCue.Impact
void AB_Ranged_Generic_C::GameplayCue_Impact(EGameplayCueEvent EventType, FGameplayCueParameters Parameters)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C:GameplayCue.Impact");

	FAB_Ranged_Generic_C_GameplayCue_Impact_Params Parms;

	Parms.EventType = EventType;
	Parms.Parameters = Parameters;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C:OnPlayReloadFX
void AB_Ranged_Generic_C::OnPlayReloadFX(EFortReloadFXState ReloadStage)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C:OnPlayReloadFX");

	FAB_Ranged_Generic_C_OnPlayReloadFX_Params Parms;

	Parms.ReloadStage = ReloadStage;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C:ShellsON_(onFire)
void AB_Ranged_Generic_C::ShellsON__onFire_()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C:ShellsON_(onFire)");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C:ShellsOFF_(onFire)
void AB_Ranged_Generic_C::ShellsOFF__onFire_()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C:ShellsOFF_(onFire)");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C:OnSetTargeting
void AB_Ranged_Generic_C::OnSetTargeting(bool bNewIsTargeting)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C:OnSetTargeting");

	FAB_Ranged_Generic_C_OnSetTargeting_Params Parms;

	Parms.bNewIsTargeting = bNewIsTargeting;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C:K2_OnUnEquip
void AB_Ranged_Generic_C::K2_OnUnEquip()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C:K2_OnUnEquip");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C:InitializeScopeVariables
void AB_Ranged_Generic_C::InitializeScopeVariables()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C:InitializeScopeVariables");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C:Update Enemy Custom Depths
void AB_Ranged_Generic_C::Update_Enemy_Custom_Depths(bool Enable_Or_Disable, int32_t StencilBufferValue)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C:Update Enemy Custom Depths");

	FAB_Ranged_Generic_C_Update_Enemy_Custom_Depths_Params Parms;

	Parms.Enable_Or_Disable = Enable_Or_Disable;
	Parms.StencilBufferValue = StencilBufferValue;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C:OnPlayImpactFX
void AB_Ranged_Generic_C::OnPlayImpactFX(FHitResult HitResult, EPhysicalSurface ImpactPhysicalSurface, class UParticleSystemComponent* SpawnedPSC)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C:OnPlayImpactFX");

	FAB_Ranged_Generic_C_OnPlayImpactFX_Params Parms;

	Parms.HitResult = HitResult;
	Parms.ImpactPhysicalSurface = ImpactPhysicalSurface;
	Parms.SpawnedPSC = SpawnedPSC;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C:OnAmmoCountChanged
void AB_Ranged_Generic_C::OnAmmoCountChanged()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C:OnAmmoCountChanged");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C:OnWeaponAttached
void AB_Ranged_Generic_C::OnWeaponAttached()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C:OnWeaponAttached");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C:OnInitAlteration
void AB_Ranged_Generic_C::OnInitAlteration(class UFortAlterationItemDefinition* NewAlteration)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C:OnInitAlteration");

	FAB_Ranged_Generic_C_OnInitAlteration_Params Parms;

	Parms.NewAlteration = NewAlteration;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C:OnInitCosmeticAlterations
void AB_Ranged_Generic_C::OnInitCosmeticAlterations(FFortCosmeticModification CosmeticMod, class UMaterialInstanceDynamic* DynamicMaterialInstance)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C:OnInitCosmeticAlterations");

	FAB_Ranged_Generic_C_OnInitCosmeticAlterations_Params Parms;

	Parms.CosmeticMod = CosmeticMod;
	Parms.DynamicMaterialInstance = DynamicMaterialInstance;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C:ExecuteUbergraph_B_Ranged_Generic
void AB_Ranged_Generic_C::ExecuteUbergraph_B_Ranged_Generic(int32_t EntryPoint)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C:ExecuteUbergraph_B_Ranged_Generic");

	FAB_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic_Params Parms;

	Parms.EntryPoint = EntryPoint;

	ProcessEvent(FN, &Parms);
}

