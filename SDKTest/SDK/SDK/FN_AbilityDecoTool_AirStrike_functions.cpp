#include "pch.h"

#include "FN_AbilityDecoTool_AirStrike_classes.h"

UClass* AAbilityDecoTool_AirStrike_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Weapons/FORT_BuildingTools/AbilityDecoTool_AirStrike.AbilityDecoTool_AirStrike_C");

	return Class;
}

// Function /Game/Weapons/FORT_BuildingTools/AbilityDecoTool_AirStrike.AbilityDecoTool_AirStrike_C:PopulatePositionArrays
void AAbilityDecoTool_AirStrike_C::PopulatePositionArrays()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Weapons/FORT_BuildingTools/AbilityDecoTool_AirStrike.AbilityDecoTool_AirStrike_C:PopulatePositionArrays");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Weapons/FORT_BuildingTools/AbilityDecoTool_AirStrike.AbilityDecoTool_AirStrike_C:UserConstructionScript
void AAbilityDecoTool_AirStrike_C::UserConstructionScript()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Weapons/FORT_BuildingTools/AbilityDecoTool_AirStrike.AbilityDecoTool_AirStrike_C:UserConstructionScript");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Weapons/FORT_BuildingTools/AbilityDecoTool_AirStrike.AbilityDecoTool_AirStrike_C:BPPressSecondaryFire
void AAbilityDecoTool_AirStrike_C::BPPressSecondaryFire(class AFortDecoHelper* FortDecoHelper)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Weapons/FORT_BuildingTools/AbilityDecoTool_AirStrike.AbilityDecoTool_AirStrike_C:BPPressSecondaryFire");

	FAAbilityDecoTool_AirStrike_C_BPPressSecondaryFire_Params Parms;

	Parms.FortDecoHelper = FortDecoHelper;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Weapons/FORT_BuildingTools/AbilityDecoTool_AirStrike.AbilityDecoTool_AirStrike_C:BPPressTrigger
void AAbilityDecoTool_AirStrike_C::BPPressTrigger(class AFortDecoHelper* FortDecoHelper)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Weapons/FORT_BuildingTools/AbilityDecoTool_AirStrike.AbilityDecoTool_AirStrike_C:BPPressTrigger");

	FAAbilityDecoTool_AirStrike_C_BPPressTrigger_Params Parms;

	Parms.FortDecoHelper = FortDecoHelper;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Weapons/FORT_BuildingTools/AbilityDecoTool_AirStrike.AbilityDecoTool_AirStrike_C:ReceiveBeginPlay
void AAbilityDecoTool_AirStrike_C::ReceiveBeginPlay()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Weapons/FORT_BuildingTools/AbilityDecoTool_AirStrike.AbilityDecoTool_AirStrike_C:ReceiveBeginPlay");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Weapons/FORT_BuildingTools/AbilityDecoTool_AirStrike.AbilityDecoTool_AirStrike_C:BPOnEquip
void AAbilityDecoTool_AirStrike_C::BPOnEquip(class AFortWeapon* OldWeapon)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Weapons/FORT_BuildingTools/AbilityDecoTool_AirStrike.AbilityDecoTool_AirStrike_C:BPOnEquip");

	FAAbilityDecoTool_AirStrike_C_BPOnEquip_Params Parms;

	Parms.OldWeapon = OldWeapon;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Weapons/FORT_BuildingTools/AbilityDecoTool_AirStrike.AbilityDecoTool_AirStrike_C:BPOnUnEquip
void AAbilityDecoTool_AirStrike_C::BPOnUnEquip()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Weapons/FORT_BuildingTools/AbilityDecoTool_AirStrike.AbilityDecoTool_AirStrike_C:BPOnUnEquip");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Weapons/FORT_BuildingTools/AbilityDecoTool_AirStrike.AbilityDecoTool_AirStrike_C:BPOnSetDecoObjectPreview
void AAbilityDecoTool_AirStrike_C::BPOnSetDecoObjectPreview(class AFortDecoHelper* FortDecoHelper)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Weapons/FORT_BuildingTools/AbilityDecoTool_AirStrike.AbilityDecoTool_AirStrike_C:BPOnSetDecoObjectPreview");

	FAAbilityDecoTool_AirStrike_C_BPOnSetDecoObjectPreview_Params Parms;

	Parms.FortDecoHelper = FortDecoHelper;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Weapons/FORT_BuildingTools/AbilityDecoTool_AirStrike.AbilityDecoTool_AirStrike_C:ExecuteUbergraph_AbilityDecoTool_AirStrike
void AAbilityDecoTool_AirStrike_C::ExecuteUbergraph_AbilityDecoTool_AirStrike(int32_t EntryPoint)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Weapons/FORT_BuildingTools/AbilityDecoTool_AirStrike.AbilityDecoTool_AirStrike_C:ExecuteUbergraph_AbilityDecoTool_AirStrike");

	FAAbilityDecoTool_AirStrike_C_ExecuteUbergraph_AbilityDecoTool_AirStrike_Params Parms;

	Parms.EntryPoint = EntryPoint;

	ProcessEvent(FN, &Parms);
}

