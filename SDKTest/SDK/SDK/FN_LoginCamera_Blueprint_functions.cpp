#include "pch.h"

#include "FN_LoginCamera_Blueprint_classes.h"

UClass* ALoginCamera_Blueprint_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/FrontEnd/Cameras/LoginCamera_Blueprint.LoginCamera_Blueprint_C");

	return Class;
}

// Function /Game/FrontEnd/Cameras/LoginCamera_Blueprint.LoginCamera_Blueprint_C:UserConstructionScript
void ALoginCamera_Blueprint_C::UserConstructionScript()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/FrontEnd/Cameras/LoginCamera_Blueprint.LoginCamera_Blueprint_C:UserConstructionScript");

	ProcessEvent(FN, nullptr);
}

// Function /Game/FrontEnd/Cameras/LoginCamera_Blueprint.LoginCamera_Blueprint_C:OnActivated
void ALoginCamera_Blueprint_C::OnActivated()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/FrontEnd/Cameras/LoginCamera_Blueprint.LoginCamera_Blueprint_C:OnActivated");

	ProcessEvent(FN, nullptr);
}

// Function /Game/FrontEnd/Cameras/LoginCamera_Blueprint.LoginCamera_Blueprint_C:ExecuteUbergraph_LoginCamera_Blueprint
void ALoginCamera_Blueprint_C::ExecuteUbergraph_LoginCamera_Blueprint(int32_t EntryPoint)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/FrontEnd/Cameras/LoginCamera_Blueprint.LoginCamera_Blueprint_C:ExecuteUbergraph_LoginCamera_Blueprint");

	FALoginCamera_Blueprint_C_ExecuteUbergraph_LoginCamera_Blueprint_Params Parms;

	Parms.EntryPoint = EntryPoint;

	ProcessEvent(FN, &Parms);
}

