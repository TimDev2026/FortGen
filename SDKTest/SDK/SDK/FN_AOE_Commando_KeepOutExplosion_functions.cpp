#include "pch.h"

#include "FN_AOE_Commando_KeepOutExplosion_classes.h"

UClass* AAOE_Commando_KeepOutExplosion_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/Player/Commando/Gadgets/FragGrenade/AOE_Commando_KeepOutExplosion.AOE_Commando_KeepOutExplosion_C");

	return Class;
}

// Function /Game/Abilities/Player/Commando/Gadgets/FragGrenade/AOE_Commando_KeepOutExplosion.AOE_Commando_KeepOutExplosion_C:OnRep_Radius
void AAOE_Commando_KeepOutExplosion_C::OnRep_Radius()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Commando/Gadgets/FragGrenade/AOE_Commando_KeepOutExplosion.AOE_Commando_KeepOutExplosion_C:OnRep_Radius");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/Player/Commando/Gadgets/FragGrenade/AOE_Commando_KeepOutExplosion.AOE_Commando_KeepOutExplosion_C:UserConstructionScript
void AAOE_Commando_KeepOutExplosion_C::UserConstructionScript()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Commando/Gadgets/FragGrenade/AOE_Commando_KeepOutExplosion.AOE_Commando_KeepOutExplosion_C:UserConstructionScript");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/Player/Commando/Gadgets/FragGrenade/AOE_Commando_KeepOutExplosion.AOE_Commando_KeepOutExplosion_C:ReceiveBeginPlay
void AAOE_Commando_KeepOutExplosion_C::ReceiveBeginPlay()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Commando/Gadgets/FragGrenade/AOE_Commando_KeepOutExplosion.AOE_Commando_KeepOutExplosion_C:ReceiveBeginPlay");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/Player/Commando/Gadgets/FragGrenade/AOE_Commando_KeepOutExplosion.AOE_Commando_KeepOutExplosion_C:Send_Info
void AAOE_Commando_KeepOutExplosion_C::Send_Info(float Radius)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Commando/Gadgets/FragGrenade/AOE_Commando_KeepOutExplosion.AOE_Commando_KeepOutExplosion_C:Send_Info");

	FAAOE_Commando_KeepOutExplosion_C_Send_Info_Params Parms;

	Parms.Radius = Radius;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Commando/Gadgets/FragGrenade/AOE_Commando_KeepOutExplosion.AOE_Commando_KeepOutExplosion_C:ExecuteUbergraph_AOE_Commando_KeepOutExplosion
void AAOE_Commando_KeepOutExplosion_C::ExecuteUbergraph_AOE_Commando_KeepOutExplosion(int32_t EntryPoint)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Commando/Gadgets/FragGrenade/AOE_Commando_KeepOutExplosion.AOE_Commando_KeepOutExplosion_C:ExecuteUbergraph_AOE_Commando_KeepOutExplosion");

	FAAOE_Commando_KeepOutExplosion_C_ExecuteUbergraph_AOE_Commando_KeepOutExplosion_Params Parms;

	Parms.EntryPoint = EntryPoint;

	ProcessEvent(FN, &Parms);
}

