#include "pch.h"

#include "FN_GCN_Commando_IncendiaryRoundsDOT_classes.h"

UClass* AGCN_Commando_IncendiaryRoundsDOT_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/Player/Commando/Gadgets/IncendiaryRounds/GCN_Commando_IncendiaryRoundsDOT.GCN_Commando_IncendiaryRoundsDOT_C");

	return Class;
}

// Function /Game/Abilities/Player/Commando/Gadgets/IncendiaryRounds/GCN_Commando_IncendiaryRoundsDOT.GCN_Commando_IncendiaryRoundsDOT_C:UserConstructionScript
void AGCN_Commando_IncendiaryRoundsDOT_C::UserConstructionScript()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Commando/Gadgets/IncendiaryRounds/GCN_Commando_IncendiaryRoundsDOT.GCN_Commando_IncendiaryRoundsDOT_C:UserConstructionScript");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/Player/Commando/Gadgets/IncendiaryRounds/GCN_Commando_IncendiaryRoundsDOT.GCN_Commando_IncendiaryRoundsDOT_C:ReceiveDestroyed
void AGCN_Commando_IncendiaryRoundsDOT_C::ReceiveDestroyed()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Commando/Gadgets/IncendiaryRounds/GCN_Commando_IncendiaryRoundsDOT.GCN_Commando_IncendiaryRoundsDOT_C:ReceiveDestroyed");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/Player/Commando/Gadgets/IncendiaryRounds/GCN_Commando_IncendiaryRoundsDOT.GCN_Commando_IncendiaryRoundsDOT_C:ExecuteUbergraph_GCN_Commando_IncendiaryRoundsDOT
void AGCN_Commando_IncendiaryRoundsDOT_C::ExecuteUbergraph_GCN_Commando_IncendiaryRoundsDOT(int32_t EntryPoint)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Commando/Gadgets/IncendiaryRounds/GCN_Commando_IncendiaryRoundsDOT.GCN_Commando_IncendiaryRoundsDOT_C:ExecuteUbergraph_GCN_Commando_IncendiaryRoundsDOT");

	FAGCN_Commando_IncendiaryRoundsDOT_C_ExecuteUbergraph_GCN_Commando_IncendiaryRoundsDOT_Params Parms;

	Parms.EntryPoint = EntryPoint;

	ProcessEvent(FN, &Parms);
}

