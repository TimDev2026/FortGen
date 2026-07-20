#include "pch.h"

#include "FN_AbilityDecoTool_SupplyDrop_classes.h"

UClass* AAbilityDecoTool_SupplyDrop_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Weapons/FORT_BuildingTools/AbilityDecoTool_SupplyDrop.AbilityDecoTool_SupplyDrop_C");

	return Class;
}

// Function /Game/Weapons/FORT_BuildingTools/AbilityDecoTool_SupplyDrop.AbilityDecoTool_SupplyDrop_C:UserConstructionScript
void AAbilityDecoTool_SupplyDrop_C::UserConstructionScript()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Weapons/FORT_BuildingTools/AbilityDecoTool_SupplyDrop.AbilityDecoTool_SupplyDrop_C:UserConstructionScript");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Weapons/FORT_BuildingTools/AbilityDecoTool_SupplyDrop.AbilityDecoTool_SupplyDrop_C:BPPressSecondaryFire
void AAbilityDecoTool_SupplyDrop_C::BPPressSecondaryFire(class AFortDecoHelper* FortDecoHelper)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Weapons/FORT_BuildingTools/AbilityDecoTool_SupplyDrop.AbilityDecoTool_SupplyDrop_C:BPPressSecondaryFire");

	FAAbilityDecoTool_SupplyDrop_C_BPPressSecondaryFire_Params Parms;

	Parms.FortDecoHelper = FortDecoHelper;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Weapons/FORT_BuildingTools/AbilityDecoTool_SupplyDrop.AbilityDecoTool_SupplyDrop_C:ExecuteUbergraph_AbilityDecoTool_SupplyDrop
void AAbilityDecoTool_SupplyDrop_C::ExecuteUbergraph_AbilityDecoTool_SupplyDrop(int32_t EntryPoint)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Weapons/FORT_BuildingTools/AbilityDecoTool_SupplyDrop.AbilityDecoTool_SupplyDrop_C:ExecuteUbergraph_AbilityDecoTool_SupplyDrop");

	FAAbilityDecoTool_SupplyDrop_C_ExecuteUbergraph_AbilityDecoTool_SupplyDrop_Params Parms;

	Parms.EntryPoint = EntryPoint;

	ProcessEvent(FN, &Parms);
}

