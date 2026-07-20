#include "pch.h"

#include "FN_B_PlayerHealthDamage_LensEffect_Direction_classes.h"

UClass* AB_PlayerHealthDamage_LensEffect_Direction_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Effects/Fort_Effects/Camera_Effects/B_PlayerHealthDamage_LensEffect_Direction.B_PlayerHealthDamage_LensEffect_Direction_C");

	return Class;
}

// Function /Game/Effects/Fort_Effects/Camera_Effects/B_PlayerHealthDamage_LensEffect_Direction.B_PlayerHealthDamage_LensEffect_Direction_C:UserConstructionScript
void AB_PlayerHealthDamage_LensEffect_Direction_C::UserConstructionScript()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Effects/Fort_Effects/Camera_Effects/B_PlayerHealthDamage_LensEffect_Direction.B_PlayerHealthDamage_LensEffect_Direction_C:UserConstructionScript");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Effects/Fort_Effects/Camera_Effects/B_PlayerHealthDamage_LensEffect_Direction.B_PlayerHealthDamage_LensEffect_Direction_C:PassParticle_Parameter
void AB_PlayerHealthDamage_LensEffect_Direction_C::PassParticle_Parameter(float Health_Percent)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Effects/Fort_Effects/Camera_Effects/B_PlayerHealthDamage_LensEffect_Direction.B_PlayerHealthDamage_LensEffect_Direction_C:PassParticle_Parameter");

	FAB_PlayerHealthDamage_LensEffect_Direction_C_PassParticle_Parameter_Params Parms;

	Parms.Health_Percent = Health_Percent;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Effects/Fort_Effects/Camera_Effects/B_PlayerHealthDamage_LensEffect_Direction.B_PlayerHealthDamage_LensEffect_Direction_C:ExecuteUbergraph_B_PlayerHealthDamage_LensEffect_Direction
void AB_PlayerHealthDamage_LensEffect_Direction_C::ExecuteUbergraph_B_PlayerHealthDamage_LensEffect_Direction(int32_t EntryPoint)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Effects/Fort_Effects/Camera_Effects/B_PlayerHealthDamage_LensEffect_Direction.B_PlayerHealthDamage_LensEffect_Direction_C:ExecuteUbergraph_B_PlayerHealthDamage_LensEffect_Direction");

	FAB_PlayerHealthDamage_LensEffect_Direction_C_ExecuteUbergraph_B_PlayerHealthDamage_LensEffect_Direction_Params Parms;

	Parms.EntryPoint = EntryPoint;

	ProcessEvent(FN, &Parms);
}

