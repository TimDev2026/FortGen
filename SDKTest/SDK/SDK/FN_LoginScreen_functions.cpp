#include "pch.h"

#include "FN_LoginScreen_classes.h"

UClass* ULoginScreen_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/UI/Master_Layouts/LoginScreen.LoginScreen_C");

	return Class;
}

// Function /Game/UI/Master_Layouts/LoginScreen.LoginScreen_C:OnEnterState
void ULoginScreen_C::OnEnterState(EFortUIState PreviousUIState)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Master_Layouts/LoginScreen.LoginScreen_C:OnEnterState");

	FULoginScreen_C_OnEnterState_Params Parms;

	Parms.PreviousUIState = PreviousUIState;

	ProcessEvent(FN, &Parms);
}

// Function /Game/UI/Master_Layouts/LoginScreen.LoginScreen_C:Construct
void ULoginScreen_C::Construct()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Master_Layouts/LoginScreen.LoginScreen_C:Construct");

	ProcessEvent(FN, nullptr);
}

// Function /Game/UI/Master_Layouts/LoginScreen.LoginScreen_C:OnExitState
void ULoginScreen_C::OnExitState(EFortUIState NextUIState)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Master_Layouts/LoginScreen.LoginScreen_C:OnExitState");

	FULoginScreen_C_OnExitState_Params Parms;

	Parms.NextUIState = NextUIState;

	ProcessEvent(FN, &Parms);
}

// Function /Game/UI/Master_Layouts/LoginScreen.LoginScreen_C:ExecuteUbergraph_LoginScreen
void ULoginScreen_C::ExecuteUbergraph_LoginScreen(int32_t EntryPoint)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Master_Layouts/LoginScreen.LoginScreen_C:ExecuteUbergraph_LoginScreen");

	FULoginScreen_C_ExecuteUbergraph_LoginScreen_Params Parms;

	Parms.EntryPoint = EntryPoint;

	ProcessEvent(FN, &Parms);
}

