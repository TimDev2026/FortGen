#include "pch.h"

#include "FN_HB_Keep_0_classes.h"

UClass* AHB_Keep_0_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Environments/Homebase/Blueprints/HB_Keep_0.HB_Keep_0_C");

	return Class;
}

// Function /Game/Environments/Homebase/Blueprints/HB_Keep_0.HB_Keep_0_C:GetCustomDisplayActors
TArray<class ABuildingActor*> AHB_Keep_0_C::GetCustomDisplayActors() const
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Environments/Homebase/Blueprints/HB_Keep_0.HB_Keep_0_C:GetCustomDisplayActors");

	FAHB_Keep_0_C_GetCustomDisplayActors_Params Parms;


	ProcessEvent(FN, &Parms);
}

// Function /Game/Environments/Homebase/Blueprints/HB_Keep_0.HB_Keep_0_C:Set Unbuilt Components Hidden
void AHB_Keep_0_C::Set_Unbuilt_Components_Hidden(bool Hidden)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Environments/Homebase/Blueprints/HB_Keep_0.HB_Keep_0_C:Set Unbuilt Components Hidden");

	FAHB_Keep_0_C_Set_Unbuilt_Components_Hidden_Params Parms;

	Parms.Hidden = Hidden;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Environments/Homebase/Blueprints/HB_Keep_0.HB_Keep_0_C:Set Custom Display Hidden 
void AHB_Keep_0_C::Set_Custom_Display_Hidden_(bool Hidden)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Environments/Homebase/Blueprints/HB_Keep_0.HB_Keep_0_C:Set Custom Display Hidden ");

	FAHB_Keep_0_C_Set_Custom_Display_Hidden__Params Parms;

	Parms.Hidden = Hidden;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Environments/Homebase/Blueprints/HB_Keep_0.HB_Keep_0_C:IsKeepMiniatureBuilding
void AHB_Keep_0_C::IsKeepMiniatureBuilding(class ABuildingSMActor* Building, bool Is_Miniature)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Environments/Homebase/Blueprints/HB_Keep_0.HB_Keep_0_C:IsKeepMiniatureBuilding");

	FAHB_Keep_0_C_IsKeepMiniatureBuilding_Params Parms;

	Parms.Building = Building;
	Parms.Is_Miniature = Is_Miniature;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Environments/Homebase/Blueprints/HB_Keep_0.HB_Keep_0_C:UserConstructionScript
void AHB_Keep_0_C::UserConstructionScript()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Environments/Homebase/Blueprints/HB_Keep_0.HB_Keep_0_C:UserConstructionScript");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Environments/Homebase/Blueprints/HB_Keep_0.HB_Keep_0_C:OnMyTownBuildingCustomDisplayChanged
void AHB_Keep_0_C::OnMyTownBuildingCustomDisplayChanged(EMyTownBuildingActorDisplayState NewDisplayState)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Environments/Homebase/Blueprints/HB_Keep_0.HB_Keep_0_C:OnMyTownBuildingCustomDisplayChanged");

	FAHB_Keep_0_C_OnMyTownBuildingCustomDisplayChanged_Params Parms;

	Parms.NewDisplayState = NewDisplayState;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Environments/Homebase/Blueprints/HB_Keep_0.HB_Keep_0_C:ExecuteUbergraph_HB_Keep_0
void AHB_Keep_0_C::ExecuteUbergraph_HB_Keep_0(int32_t EntryPoint)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Environments/Homebase/Blueprints/HB_Keep_0.HB_Keep_0_C:ExecuteUbergraph_HB_Keep_0");

	FAHB_Keep_0_C_ExecuteUbergraph_HB_Keep_0_Params Parms;

	Parms.EntryPoint = EntryPoint;

	ProcessEvent(FN, &Parms);
}

