#include "pch.h"

#include "FN_ImpactNumbers_classes.h"

UClass* AImpactNumbers_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/UI/DamageText/Base/ImpactNumbers.ImpactNumbers_C");

	return Class;
}

// Function /Game/UI/DamageText/Base/ImpactNumbers.ImpactNumbers_C:Set Material Pararmeters
void AImpactNumbers_C::Set_Material_Pararmeters(FFortDamageNumberInfo NewDamageHitInfoStruct, FTransform CameraTransform, FVector NumberLocation)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/DamageText/Base/ImpactNumbers.ImpactNumbers_C:Set Material Pararmeters");

	FAImpactNumbers_C_Set_Material_Pararmeters_Params Parms;

	Parms.NewDamageHitInfoStruct = NewDamageHitInfoStruct;
	Parms.CameraTransform = CameraTransform;
	Parms.NumberLocation = NumberLocation;

	ProcessEvent(FN, &Parms);
}

// Function /Game/UI/DamageText/Base/ImpactNumbers.ImpactNumbers_C:init a new number set
void AImpactNumbers_C::init_a_new_number_set(FFortDamageNumberInfo NewDamageHitInfoStruct, FTransform OutCameraTransform, FVector OutNumberLocation)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/DamageText/Base/ImpactNumbers.ImpactNumbers_C:init a new number set");

	FAImpactNumbers_C_init_a_new_number_set_Params Parms;

	Parms.NewDamageHitInfoStruct = NewDamageHitInfoStruct;
	Parms.OutCameraTransform = OutCameraTransform;
	Parms.OutNumberLocation = OutNumberLocation;

	ProcessEvent(FN, &Parms);
}

// Function /Game/UI/DamageText/Base/ImpactNumbers.ImpactNumbers_C:UserConstructionScript
void AImpactNumbers_C::UserConstructionScript()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/DamageText/Base/ImpactNumbers.ImpactNumbers_C:UserConstructionScript");

	ProcessEvent(FN, nullptr);
}

// Function /Game/UI/DamageText/Base/ImpactNumbers.ImpactNumbers_C:OnNewDamageNumber
void AImpactNumbers_C::OnNewDamageNumber(FFortDamageNumberInfo NewDamageNumberInfo)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/DamageText/Base/ImpactNumbers.ImpactNumbers_C:OnNewDamageNumber");

	FAImpactNumbers_C_OnNewDamageNumber_Params Parms;

	Parms.NewDamageNumberInfo = NewDamageNumberInfo;

	ProcessEvent(FN, &Parms);
}

// Function /Game/UI/DamageText/Base/ImpactNumbers.ImpactNumbers_C:ExecuteUbergraph_ImpactNumbers
void AImpactNumbers_C::ExecuteUbergraph_ImpactNumbers(int32_t EntryPoint)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/DamageText/Base/ImpactNumbers.ImpactNumbers_C:ExecuteUbergraph_ImpactNumbers");

	FAImpactNumbers_C_ExecuteUbergraph_ImpactNumbers_Params Parms;

	Parms.EntryPoint = EntryPoint;

	ProcessEvent(FN, &Parms);
}

