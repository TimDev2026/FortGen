#include "pch.h"

#include "FN_StoreWeaponMaster_BP_classes.h"

UClass* AStoreWeaponMaster_BP_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/FrontEnd/Store/Weapons/Blueprints/Master/StoreWeaponMaster_BP.StoreWeaponMaster_BP_C");

	return Class;
}

// Function /Game/FrontEnd/Store/Weapons/Blueprints/Master/StoreWeaponMaster_BP.StoreWeaponMaster_BP_C:UserConstructionScript
void AStoreWeaponMaster_BP_C::UserConstructionScript()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/FrontEnd/Store/Weapons/Blueprints/Master/StoreWeaponMaster_BP.StoreWeaponMaster_BP_C:UserConstructionScript");

	ProcessEvent(FN, nullptr);
}

// Function /Game/FrontEnd/Store/Weapons/Blueprints/Master/StoreWeaponMaster_BP.StoreWeaponMaster_BP_C:ReceiveBeginPlay
void AStoreWeaponMaster_BP_C::ReceiveBeginPlay()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/FrontEnd/Store/Weapons/Blueprints/Master/StoreWeaponMaster_BP.StoreWeaponMaster_BP_C:ReceiveBeginPlay");

	ProcessEvent(FN, nullptr);
}

// Function /Game/FrontEnd/Store/Weapons/Blueprints/Master/StoreWeaponMaster_BP.StoreWeaponMaster_BP_C:ReceiveTick
void AStoreWeaponMaster_BP_C::ReceiveTick(float DeltaSeconds)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/FrontEnd/Store/Weapons/Blueprints/Master/StoreWeaponMaster_BP.StoreWeaponMaster_BP_C:ReceiveTick");

	FAStoreWeaponMaster_BP_C_ReceiveTick_Params Parms;

	Parms.DeltaSeconds = DeltaSeconds;

	ProcessEvent(FN, &Parms);
}

// Function /Game/FrontEnd/Store/Weapons/Blueprints/Master/StoreWeaponMaster_BP.StoreWeaponMaster_BP_C:ExecuteUbergraph_StoreWeaponMaster_BP
void AStoreWeaponMaster_BP_C::ExecuteUbergraph_StoreWeaponMaster_BP(int32_t EntryPoint)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/FrontEnd/Store/Weapons/Blueprints/Master/StoreWeaponMaster_BP.StoreWeaponMaster_BP_C:ExecuteUbergraph_StoreWeaponMaster_BP");

	FAStoreWeaponMaster_BP_C_ExecuteUbergraph_StoreWeaponMaster_BP_Params Parms;

	Parms.EntryPoint = EntryPoint;

	ProcessEvent(FN, &Parms);
}

