#include "pch.h"

#include "FN_B_Melee_Generic_classes.h"

UClass* AB_Melee_Generic_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Weapons/FORT_Melee/Blueprints/B_Melee_Generic.B_Melee_Generic_C");

	return Class;
}

// Function /Game/Weapons/FORT_Melee/Blueprints/B_Melee_Generic.B_Melee_Generic_C:Melee_Effect_Color
void AB_Melee_Generic_C::Melee_Effect_Color(FVector Melee_Color_Set)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Weapons/FORT_Melee/Blueprints/B_Melee_Generic.B_Melee_Generic_C:Melee_Effect_Color");

	FAB_Melee_Generic_C_Melee_Effect_Color_Params Parms;

	Parms.Melee_Color_Set = Melee_Color_Set;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Weapons/FORT_Melee/Blueprints/B_Melee_Generic.B_Melee_Generic_C:SetWpnRarity
void AB_Melee_Generic_C::SetWpnRarity()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Weapons/FORT_Melee/Blueprints/B_Melee_Generic.B_Melee_Generic_C:SetWpnRarity");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Weapons/FORT_Melee/Blueprints/B_Melee_Generic.B_Melee_Generic_C:UserConstructionScript
void AB_Melee_Generic_C::UserConstructionScript()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Weapons/FORT_Melee/Blueprints/B_Melee_Generic.B_Melee_Generic_C:UserConstructionScript");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Weapons/FORT_Melee/Blueprints/B_Melee_Generic.B_Melee_Generic_C:MeleeSwingRight
void AB_Melee_Generic_C::MeleeSwingRight()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Weapons/FORT_Melee/Blueprints/B_Melee_Generic.B_Melee_Generic_C:MeleeSwingRight");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Weapons/FORT_Melee/Blueprints/B_Melee_Generic.B_Melee_Generic_C:MeleeSwingLeft
void AB_Melee_Generic_C::MeleeSwingLeft()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Weapons/FORT_Melee/Blueprints/B_Melee_Generic.B_Melee_Generic_C:MeleeSwingLeft");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Weapons/FORT_Melee/Blueprints/B_Melee_Generic.B_Melee_Generic_C:FootStepLeft
void AB_Melee_Generic_C::FootStepLeft()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Weapons/FORT_Melee/Blueprints/B_Melee_Generic.B_Melee_Generic_C:FootStepLeft");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Weapons/FORT_Melee/Blueprints/B_Melee_Generic.B_Melee_Generic_C:FootStepRight
void AB_Melee_Generic_C::FootStepRight()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Weapons/FORT_Melee/Blueprints/B_Melee_Generic.B_Melee_Generic_C:FootStepRight");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Weapons/FORT_Melee/Blueprints/B_Melee_Generic.B_Melee_Generic_C:ReceiveBeginPlay
void AB_Melee_Generic_C::ReceiveBeginPlay()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Weapons/FORT_Melee/Blueprints/B_Melee_Generic.B_Melee_Generic_C:ReceiveBeginPlay");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Weapons/FORT_Melee/Blueprints/B_Melee_Generic.B_Melee_Generic_C:OnPlayWeaponFireFX
void AB_Melee_Generic_C::OnPlayWeaponFireFX(bool bPersistentFire)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Weapons/FORT_Melee/Blueprints/B_Melee_Generic.B_Melee_Generic_C:OnPlayWeaponFireFX");

	FAB_Melee_Generic_C_OnPlayWeaponFireFX_Params Parms;

	Parms.bPersistentFire = bPersistentFire;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Weapons/FORT_Melee/Blueprints/B_Melee_Generic.B_Melee_Generic_C:PlayRClickImpacts
void AB_Melee_Generic_C::PlayRClickImpacts()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Weapons/FORT_Melee/Blueprints/B_Melee_Generic.B_Melee_Generic_C:PlayRClickImpacts");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Weapons/FORT_Melee/Blueprints/B_Melee_Generic.B_Melee_Generic_C:ExecuteUbergraph_B_Melee_Generic
void AB_Melee_Generic_C::ExecuteUbergraph_B_Melee_Generic(int32_t EntryPoint)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Weapons/FORT_Melee/Blueprints/B_Melee_Generic.B_Melee_Generic_C:ExecuteUbergraph_B_Melee_Generic");

	FAB_Melee_Generic_C_ExecuteUbergraph_B_Melee_Generic_Params Parms;

	Parms.EntryPoint = EntryPoint;

	ProcessEvent(FN, &Parms);
}

