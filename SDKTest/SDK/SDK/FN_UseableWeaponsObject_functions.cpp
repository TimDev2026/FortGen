#include "pch.h"

#include "FN_UseableWeaponsObject_classes.h"

UClass* UUseableWeaponsObject_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/FrontEnd/Store/Weapons/Blueprints/Master/Children/UseableWeaponsObject.UseableWeaponsObject_C");

	return Class;
}

// Function /Game/FrontEnd/Store/Weapons/Blueprints/Master/Children/UseableWeaponsObject.UseableWeaponsObject_C:ExecuteUbergraph_UseableWeaponsObject
void UUseableWeaponsObject_C::ExecuteUbergraph_UseableWeaponsObject(int32_t EntryPoint)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/FrontEnd/Store/Weapons/Blueprints/Master/Children/UseableWeaponsObject.UseableWeaponsObject_C:ExecuteUbergraph_UseableWeaponsObject");

	FUUseableWeaponsObject_C_ExecuteUbergraph_UseableWeaponsObject_Params Parms;

	Parms.EntryPoint = EntryPoint;

	ProcessEvent(FN, &Parms);
}

UClass* PLACEHOLDER_CLASS__StoreWeaponMaster_BP_C_173::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/FrontEnd/Store/Weapons/Blueprints/Master/Children/UseableWeaponsObject.PLACEHOLDER-CLASS__StoreWeaponMaster_BP_C_173");

	return Class;
}

