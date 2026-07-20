#include "pch.h"

#include "FN_AOE_Ninja_DragonSlashTrail_classes.h"

UClass* AAOE_Ninja_DragonSlashTrail_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/Player/Ninja/Gadgets/DragonSlash/AOE_Ninja_DragonSlashTrail.AOE_Ninja_DragonSlashTrail_C");

	return Class;
}

// Function /Game/Abilities/Player/Ninja/Gadgets/DragonSlash/AOE_Ninja_DragonSlashTrail.AOE_Ninja_DragonSlashTrail_C:OnSetAOEExtentXY
void AAOE_Ninja_DragonSlashTrail_C::OnSetAOEExtentXY()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Ninja/Gadgets/DragonSlash/AOE_Ninja_DragonSlashTrail.AOE_Ninja_DragonSlashTrail_C:OnSetAOEExtentXY");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/Player/Ninja/Gadgets/DragonSlash/AOE_Ninja_DragonSlashTrail.AOE_Ninja_DragonSlashTrail_C:OnRep_AOEExtentXY
void AAOE_Ninja_DragonSlashTrail_C::OnRep_AOEExtentXY()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Ninja/Gadgets/DragonSlash/AOE_Ninja_DragonSlashTrail.AOE_Ninja_DragonSlashTrail_C:OnRep_AOEExtentXY");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/Player/Ninja/Gadgets/DragonSlash/AOE_Ninja_DragonSlashTrail.AOE_Ninja_DragonSlashTrail_C:UserConstructionScript
void AAOE_Ninja_DragonSlashTrail_C::UserConstructionScript()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Ninja/Gadgets/DragonSlash/AOE_Ninja_DragonSlashTrail.AOE_Ninja_DragonSlashTrail_C:UserConstructionScript");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/Player/Ninja/Gadgets/DragonSlash/AOE_Ninja_DragonSlashTrail.AOE_Ninja_DragonSlashTrail_C:ReceiveBeginPlay
void AAOE_Ninja_DragonSlashTrail_C::ReceiveBeginPlay()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Ninja/Gadgets/DragonSlash/AOE_Ninja_DragonSlashTrail.AOE_Ninja_DragonSlashTrail_C:ReceiveBeginPlay");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/Player/Ninja/Gadgets/DragonSlash/AOE_Ninja_DragonSlashTrail.AOE_Ninja_DragonSlashTrail_C:EndAOE
void AAOE_Ninja_DragonSlashTrail_C::EndAOE()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Ninja/Gadgets/DragonSlash/AOE_Ninja_DragonSlashTrail.AOE_Ninja_DragonSlashTrail_C:EndAOE");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/Player/Ninja/Gadgets/DragonSlash/AOE_Ninja_DragonSlashTrail.AOE_Ninja_DragonSlashTrail_C:BndEvt__BeeArea_K2Node_ComponentBoundEvent_249_ComponentEndOverlapSignature__DelegateSignature
void AAOE_Ninja_DragonSlashTrail_C::BndEvt__BeeArea_K2Node_ComponentBoundEvent_249_ComponentEndOverlapSignature__DelegateSignature(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Ninja/Gadgets/DragonSlash/AOE_Ninja_DragonSlashTrail.AOE_Ninja_DragonSlashTrail_C:BndEvt__BeeArea_K2Node_ComponentBoundEvent_249_ComponentEndOverlapSignature__DelegateSignature");

	FAAOE_Ninja_DragonSlashTrail_C_BndEvt__BeeArea_K2Node_ComponentBoundEvent_249_ComponentEndOverlapSignature__DelegateSignature_Params Parms;

	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Ninja/Gadgets/DragonSlash/AOE_Ninja_DragonSlashTrail.AOE_Ninja_DragonSlashTrail_C:ExecuteUbergraph_AOE_Ninja_DragonSlashTrail
void AAOE_Ninja_DragonSlashTrail_C::ExecuteUbergraph_AOE_Ninja_DragonSlashTrail(int32_t EntryPoint)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Ninja/Gadgets/DragonSlash/AOE_Ninja_DragonSlashTrail.AOE_Ninja_DragonSlashTrail_C:ExecuteUbergraph_AOE_Ninja_DragonSlashTrail");

	FAAOE_Ninja_DragonSlashTrail_C_ExecuteUbergraph_AOE_Ninja_DragonSlashTrail_Params Parms;

	Parms.EntryPoint = EntryPoint;

	ProcessEvent(FN, &Parms);
}

