#include "pch.h"

#include "FN_GCN_TakerMarkedForDeath_classes.h"

UClass* AGCN_TakerMarkedForDeath_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/NPC/Taker/GCN_TakerMarkedForDeath.GCN_TakerMarkedForDeath_C");

	return Class;
}

// Function /Game/Abilities/NPC/Taker/GCN_TakerMarkedForDeath.GCN_TakerMarkedForDeath_C:UserConstructionScript
void AGCN_TakerMarkedForDeath_C::UserConstructionScript()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/NPC/Taker/GCN_TakerMarkedForDeath.GCN_TakerMarkedForDeath_C:UserConstructionScript");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/NPC/Taker/GCN_TakerMarkedForDeath.GCN_TakerMarkedForDeath_C:ReceiveBeginPlay
void AGCN_TakerMarkedForDeath_C::ReceiveBeginPlay()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/NPC/Taker/GCN_TakerMarkedForDeath.GCN_TakerMarkedForDeath_C:ReceiveBeginPlay");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/NPC/Taker/GCN_TakerMarkedForDeath.GCN_TakerMarkedForDeath_C:SoulSuckCheck
void AGCN_TakerMarkedForDeath_C::SoulSuckCheck()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/NPC/Taker/GCN_TakerMarkedForDeath.GCN_TakerMarkedForDeath_C:SoulSuckCheck");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/NPC/Taker/GCN_TakerMarkedForDeath.GCN_TakerMarkedForDeath_C:ExecuteUbergraph_GCN_TakerMarkedForDeath
void AGCN_TakerMarkedForDeath_C::ExecuteUbergraph_GCN_TakerMarkedForDeath(int32_t EntryPoint)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/NPC/Taker/GCN_TakerMarkedForDeath.GCN_TakerMarkedForDeath_C:ExecuteUbergraph_GCN_TakerMarkedForDeath");

	FAGCN_TakerMarkedForDeath_C_ExecuteUbergraph_GCN_TakerMarkedForDeath_Params Parms;

	Parms.EntryPoint = EntryPoint;

	ProcessEvent(FN, &Parms);
}

