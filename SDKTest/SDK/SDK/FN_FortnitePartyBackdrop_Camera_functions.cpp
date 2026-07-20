#include "pch.h"

#include "FN_FortnitePartyBackdrop_Camera_classes.h"

UClass* AFortnitePartyBackdrop_Camera_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Environments/FrontEnd/Blueprints/FortnitePartyBackdrop_Camera.FortnitePartyBackdrop_Camera_C");

	return Class;
}

// Function /Game/Environments/FrontEnd/Blueprints/FortnitePartyBackdrop_Camera.FortnitePartyBackdrop_Camera_C:UserConstructionScript
void AFortnitePartyBackdrop_Camera_C::UserConstructionScript()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Environments/FrontEnd/Blueprints/FortnitePartyBackdrop_Camera.FortnitePartyBackdrop_Camera_C:UserConstructionScript");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Environments/FrontEnd/Blueprints/FortnitePartyBackdrop_Camera.FortnitePartyBackdrop_Camera_C:OnActivated
void AFortnitePartyBackdrop_Camera_C::OnActivated()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Environments/FrontEnd/Blueprints/FortnitePartyBackdrop_Camera.FortnitePartyBackdrop_Camera_C:OnActivated");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Environments/FrontEnd/Blueprints/FortnitePartyBackdrop_Camera.FortnitePartyBackdrop_Camera_C:ExecuteUbergraph_FortnitePartyBackdrop_Camera
void AFortnitePartyBackdrop_Camera_C::ExecuteUbergraph_FortnitePartyBackdrop_Camera(int32_t EntryPoint)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Environments/FrontEnd/Blueprints/FortnitePartyBackdrop_Camera.FortnitePartyBackdrop_Camera_C:ExecuteUbergraph_FortnitePartyBackdrop_Camera");

	FAFortnitePartyBackdrop_Camera_C_ExecuteUbergraph_FortnitePartyBackdrop_Camera_Params Parms;

	Parms.EntryPoint = EntryPoint;

	ProcessEvent(FN, &Parms);
}

UClass* PLACEHOLDER_CLASS__TVPostProcessBP_C_139::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Environments/FrontEnd/Blueprints/FortnitePartyBackdrop_Camera.PLACEHOLDER-CLASS__TVPostProcessBP_C_139");

	return Class;
}

