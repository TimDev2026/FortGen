#include "pch.h"

#include "FN_B_Prj_AdrenalineRush_classes.h"

UClass* AB_Prj_AdrenalineRush_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/Player/Generic/Gadgets/AdrenalineRush/B_Prj_AdrenalineRush.B_Prj_AdrenalineRush_C");

	return Class;
}

// Function /Game/Abilities/Player/Generic/Gadgets/AdrenalineRush/B_Prj_AdrenalineRush.B_Prj_AdrenalineRush_C:DestroyPP
void AB_Prj_AdrenalineRush_C::DestroyPP()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Generic/Gadgets/AdrenalineRush/B_Prj_AdrenalineRush.B_Prj_AdrenalineRush_C:DestroyPP");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/Player/Generic/Gadgets/AdrenalineRush/B_Prj_AdrenalineRush.B_Prj_AdrenalineRush_C:UserConstructionScript
void AB_Prj_AdrenalineRush_C::UserConstructionScript()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Generic/Gadgets/AdrenalineRush/B_Prj_AdrenalineRush.B_Prj_AdrenalineRush_C:UserConstructionScript");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/Player/Generic/Gadgets/AdrenalineRush/B_Prj_AdrenalineRush.B_Prj_AdrenalineRush_C:PP Shockwave__FinishedFunc
void AB_Prj_AdrenalineRush_C::PP_Shockwave__FinishedFunc()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Generic/Gadgets/AdrenalineRush/B_Prj_AdrenalineRush.B_Prj_AdrenalineRush_C:PP Shockwave__FinishedFunc");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/Player/Generic/Gadgets/AdrenalineRush/B_Prj_AdrenalineRush.B_Prj_AdrenalineRush_C:PP Shockwave__UpdateFunc
void AB_Prj_AdrenalineRush_C::PP_Shockwave__UpdateFunc()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Generic/Gadgets/AdrenalineRush/B_Prj_AdrenalineRush.B_Prj_AdrenalineRush_C:PP Shockwave__UpdateFunc");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/Player/Generic/Gadgets/AdrenalineRush/B_Prj_AdrenalineRush.B_Prj_AdrenalineRush_C:PassInfo
void AB_Prj_AdrenalineRush_C::PassInfo(float Radius, class AFortPlayerPawn* Owner, int32_t Level)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Generic/Gadgets/AdrenalineRush/B_Prj_AdrenalineRush.B_Prj_AdrenalineRush_C:PassInfo");

	FAB_Prj_AdrenalineRush_C_PassInfo_Params Parms;

	Parms.Radius = Radius;
	Parms.Owner = Owner;
	Parms.Level = Level;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Generic/Gadgets/AdrenalineRush/B_Prj_AdrenalineRush.B_Prj_AdrenalineRush_C:ExecuteUbergraph_B_Prj_AdrenalineRush
void AB_Prj_AdrenalineRush_C::ExecuteUbergraph_B_Prj_AdrenalineRush(int32_t EntryPoint)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Generic/Gadgets/AdrenalineRush/B_Prj_AdrenalineRush.B_Prj_AdrenalineRush_C:ExecuteUbergraph_B_Prj_AdrenalineRush");

	FAB_Prj_AdrenalineRush_C_ExecuteUbergraph_B_Prj_AdrenalineRush_Params Parms;

	Parms.EntryPoint = EntryPoint;

	ProcessEvent(FN, &Parms);
}

