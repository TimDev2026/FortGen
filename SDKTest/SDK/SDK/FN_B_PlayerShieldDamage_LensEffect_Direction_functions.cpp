#include "pch.h"

#include "FN_B_PlayerShieldDamage_LensEffect_Direction_classes.h"

UClass* AB_PlayerShieldDamage_LensEffect_Direction_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Effects/Fort_Effects/Camera_Effects/B_PlayerShieldDamage_LensEffect_Direction.B_PlayerShieldDamage_LensEffect_Direction_C");

	return Class;
}

// Function /Game/Effects/Fort_Effects/Camera_Effects/B_PlayerShieldDamage_LensEffect_Direction.B_PlayerShieldDamage_LensEffect_Direction_C:UserConstructionScript
void AB_PlayerShieldDamage_LensEffect_Direction_C::UserConstructionScript()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Effects/Fort_Effects/Camera_Effects/B_PlayerShieldDamage_LensEffect_Direction.B_PlayerShieldDamage_LensEffect_Direction_C:UserConstructionScript");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Effects/Fort_Effects/Camera_Effects/B_PlayerShieldDamage_LensEffect_Direction.B_PlayerShieldDamage_LensEffect_Direction_C:PassParticle_Parameter
void AB_PlayerShieldDamage_LensEffect_Direction_C::PassParticle_Parameter(float Shield_percent)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Effects/Fort_Effects/Camera_Effects/B_PlayerShieldDamage_LensEffect_Direction.B_PlayerShieldDamage_LensEffect_Direction_C:PassParticle_Parameter");

	FAB_PlayerShieldDamage_LensEffect_Direction_C_PassParticle_Parameter_Params Parms;

	Parms.Shield_percent = Shield_percent;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Effects/Fort_Effects/Camera_Effects/B_PlayerShieldDamage_LensEffect_Direction.B_PlayerShieldDamage_LensEffect_Direction_C:ExecuteUbergraph_B_PlayerShieldDamage_LensEffect_Direction
void AB_PlayerShieldDamage_LensEffect_Direction_C::ExecuteUbergraph_B_PlayerShieldDamage_LensEffect_Direction(int32_t EntryPoint)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Effects/Fort_Effects/Camera_Effects/B_PlayerShieldDamage_LensEffect_Direction.B_PlayerShieldDamage_LensEffect_Direction_C:ExecuteUbergraph_B_PlayerShieldDamage_LensEffect_Direction");

	FAB_PlayerShieldDamage_LensEffect_Direction_C_ExecuteUbergraph_B_PlayerShieldDamage_LensEffect_Direction_Params Parms;

	Parms.EntryPoint = EntryPoint;

	ProcessEvent(FN, &Parms);
}

