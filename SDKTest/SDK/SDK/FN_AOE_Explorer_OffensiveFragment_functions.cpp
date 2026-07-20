#include "pch.h"

#include "FN_AOE_Explorer_OffensiveFragment_classes.h"

UClass* AAOE_Explorer_OffensiveFragment_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/Player/Outlander/Gadgets/Fragment/AOE_Explorer_OffensiveFragment.AOE_Explorer_OffensiveFragment_C");

	return Class;
}

// Function /Game/Abilities/Player/Outlander/Gadgets/Fragment/AOE_Explorer_OffensiveFragment.AOE_Explorer_OffensiveFragment_C:UserConstructionScript
void AAOE_Explorer_OffensiveFragment_C::UserConstructionScript()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Outlander/Gadgets/Fragment/AOE_Explorer_OffensiveFragment.AOE_Explorer_OffensiveFragment_C:UserConstructionScript");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/Player/Outlander/Gadgets/Fragment/AOE_Explorer_OffensiveFragment.AOE_Explorer_OffensiveFragment_C:ReceiveBeginPlay
void AAOE_Explorer_OffensiveFragment_C::ReceiveBeginPlay()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Outlander/Gadgets/Fragment/AOE_Explorer_OffensiveFragment.AOE_Explorer_OffensiveFragment_C:ReceiveBeginPlay");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/Player/Outlander/Gadgets/Fragment/AOE_Explorer_OffensiveFragment.AOE_Explorer_OffensiveFragment_C:DiamondsFragment
void AAOE_Explorer_OffensiveFragment_C::DiamondsFragment()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Outlander/Gadgets/Fragment/AOE_Explorer_OffensiveFragment.AOE_Explorer_OffensiveFragment_C:DiamondsFragment");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/Player/Outlander/Gadgets/Fragment/AOE_Explorer_OffensiveFragment.AOE_Explorer_OffensiveFragment_C:ExecuteUbergraph_AOE_Explorer_OffensiveFragment
void AAOE_Explorer_OffensiveFragment_C::ExecuteUbergraph_AOE_Explorer_OffensiveFragment(int32_t EntryPoint)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Outlander/Gadgets/Fragment/AOE_Explorer_OffensiveFragment.AOE_Explorer_OffensiveFragment_C:ExecuteUbergraph_AOE_Explorer_OffensiveFragment");

	FAAOE_Explorer_OffensiveFragment_C_ExecuteUbergraph_AOE_Explorer_OffensiveFragment_Params Parms;

	Parms.EntryPoint = EntryPoint;

	ProcessEvent(FN, &Parms);
}

