#include "pch.h"

#include "FN_VaultCamera_Blueprint_classes.h"

UClass* AVaultCamera_Blueprint_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/FrontEnd/Cameras/VaultCamera_Blueprint.VaultCamera_Blueprint_C");

	return Class;
}

// Function /Game/FrontEnd/Cameras/VaultCamera_Blueprint.VaultCamera_Blueprint_C:UserConstructionScript
void AVaultCamera_Blueprint_C::UserConstructionScript()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/FrontEnd/Cameras/VaultCamera_Blueprint.VaultCamera_Blueprint_C:UserConstructionScript");

	ProcessEvent(FN, nullptr);
}

// Function /Game/FrontEnd/Cameras/VaultCamera_Blueprint.VaultCamera_Blueprint_C:InpActEvt_RightMouseButton_UniqueObjectNameForCooking_39
void AVaultCamera_Blueprint_C::InpActEvt_RightMouseButton_UniqueObjectNameForCooking_39(FKey Key)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/FrontEnd/Cameras/VaultCamera_Blueprint.VaultCamera_Blueprint_C:InpActEvt_RightMouseButton_UniqueObjectNameForCooking_39");

	FAVaultCamera_Blueprint_C_InpActEvt_RightMouseButton_UniqueObjectNameForCooking_39_Params Parms;

	Parms.Key = Key;

	ProcessEvent(FN, &Parms);
}

// Function /Game/FrontEnd/Cameras/VaultCamera_Blueprint.VaultCamera_Blueprint_C:InpActEvt_RightMouseButton_UniqueObjectNameForCooking_38
void AVaultCamera_Blueprint_C::InpActEvt_RightMouseButton_UniqueObjectNameForCooking_38(FKey Key)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/FrontEnd/Cameras/VaultCamera_Blueprint.VaultCamera_Blueprint_C:InpActEvt_RightMouseButton_UniqueObjectNameForCooking_38");

	FAVaultCamera_Blueprint_C_InpActEvt_RightMouseButton_UniqueObjectNameForCooking_38_Params Parms;

	Parms.Key = Key;

	ProcessEvent(FN, &Parms);
}

// Function /Game/FrontEnd/Cameras/VaultCamera_Blueprint.VaultCamera_Blueprint_C:InpActEvt_LeftMouseButton_UniqueObjectNameForCooking_37
void AVaultCamera_Blueprint_C::InpActEvt_LeftMouseButton_UniqueObjectNameForCooking_37(FKey Key)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/FrontEnd/Cameras/VaultCamera_Blueprint.VaultCamera_Blueprint_C:InpActEvt_LeftMouseButton_UniqueObjectNameForCooking_37");

	FAVaultCamera_Blueprint_C_InpActEvt_LeftMouseButton_UniqueObjectNameForCooking_37_Params Parms;

	Parms.Key = Key;

	ProcessEvent(FN, &Parms);
}

// Function /Game/FrontEnd/Cameras/VaultCamera_Blueprint.VaultCamera_Blueprint_C:InpActEvt_LeftMouseButton_UniqueObjectNameForCooking_36
void AVaultCamera_Blueprint_C::InpActEvt_LeftMouseButton_UniqueObjectNameForCooking_36(FKey Key)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/FrontEnd/Cameras/VaultCamera_Blueprint.VaultCamera_Blueprint_C:InpActEvt_LeftMouseButton_UniqueObjectNameForCooking_36");

	FAVaultCamera_Blueprint_C_InpActEvt_LeftMouseButton_UniqueObjectNameForCooking_36_Params Parms;

	Parms.Key = Key;

	ProcessEvent(FN, &Parms);
}

// Function /Game/FrontEnd/Cameras/VaultCamera_Blueprint.VaultCamera_Blueprint_C:ReceiveTick
void AVaultCamera_Blueprint_C::ReceiveTick(float DeltaSeconds)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/FrontEnd/Cameras/VaultCamera_Blueprint.VaultCamera_Blueprint_C:ReceiveTick");

	FAVaultCamera_Blueprint_C_ReceiveTick_Params Parms;

	Parms.DeltaSeconds = DeltaSeconds;

	ProcessEvent(FN, &Parms);
}

// Function /Game/FrontEnd/Cameras/VaultCamera_Blueprint.VaultCamera_Blueprint_C:OnActivated
void AVaultCamera_Blueprint_C::OnActivated()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/FrontEnd/Cameras/VaultCamera_Blueprint.VaultCamera_Blueprint_C:OnActivated");

	ProcessEvent(FN, nullptr);
}

// Function /Game/FrontEnd/Cameras/VaultCamera_Blueprint.VaultCamera_Blueprint_C:OnDeactivated
void AVaultCamera_Blueprint_C::OnDeactivated()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/FrontEnd/Cameras/VaultCamera_Blueprint.VaultCamera_Blueprint_C:OnDeactivated");

	ProcessEvent(FN, nullptr);
}

// Function /Game/FrontEnd/Cameras/VaultCamera_Blueprint.VaultCamera_Blueprint_C:ExecuteUbergraph_VaultCamera_Blueprint
void AVaultCamera_Blueprint_C::ExecuteUbergraph_VaultCamera_Blueprint(int32_t EntryPoint)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/FrontEnd/Cameras/VaultCamera_Blueprint.VaultCamera_Blueprint_C:ExecuteUbergraph_VaultCamera_Blueprint");

	FAVaultCamera_Blueprint_C_ExecuteUbergraph_VaultCamera_Blueprint_Params Parms;

	Parms.EntryPoint = EntryPoint;

	ProcessEvent(FN, &Parms);
}

UClass* PLACEHOLDER_CLASS__B_Pickups_C_174::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/FrontEnd/Cameras/VaultCamera_Blueprint.PLACEHOLDER-CLASS__B_Pickups_C_174");

	return Class;
}

UClass* PLACEHOLDER_CLASS__TVPostProcessBP_C_175::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/FrontEnd/Cameras/VaultCamera_Blueprint.PLACEHOLDER-CLASS__TVPostProcessBP_C_175");

	return Class;
}

UClass* PLACEHOLDER_CLASS__PartyCharacterPlacementHelper_C_176::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/FrontEnd/Cameras/VaultCamera_Blueprint.PLACEHOLDER-CLASS__PartyCharacterPlacementHelper_C_176");

	return Class;
}

