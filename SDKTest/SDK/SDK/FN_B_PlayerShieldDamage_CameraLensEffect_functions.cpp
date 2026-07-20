#include "pch.h"

#include "FN_B_PlayerShieldDamage_CameraLensEffect_classes.h"

UClass* AB_PlayerShieldDamage_CameraLensEffect_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Effects/Fort_Effects/Camera_Effects/B_PlayerShieldDamage_CameraLensEffect.B_PlayerShieldDamage_CameraLensEffect_C");

	return Class;
}

// Function /Game/Effects/Fort_Effects/Camera_Effects/B_PlayerShieldDamage_CameraLensEffect.B_PlayerShieldDamage_CameraLensEffect_C:UserConstructionScript
void AB_PlayerShieldDamage_CameraLensEffect_C::UserConstructionScript()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Effects/Fort_Effects/Camera_Effects/B_PlayerShieldDamage_CameraLensEffect.B_PlayerShieldDamage_CameraLensEffect_C:UserConstructionScript");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Effects/Fort_Effects/Camera_Effects/B_PlayerShieldDamage_CameraLensEffect.B_PlayerShieldDamage_CameraLensEffect_C:PassParticle_Parameter_Shield
void AB_PlayerShieldDamage_CameraLensEffect_C::PassParticle_Parameter_Shield(float NewParam)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Effects/Fort_Effects/Camera_Effects/B_PlayerShieldDamage_CameraLensEffect.B_PlayerShieldDamage_CameraLensEffect_C:PassParticle_Parameter_Shield");

	FAB_PlayerShieldDamage_CameraLensEffect_C_PassParticle_Parameter_Shield_Params Parms;

	Parms.NewParam = NewParam;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Effects/Fort_Effects/Camera_Effects/B_PlayerShieldDamage_CameraLensEffect.B_PlayerShieldDamage_CameraLensEffect_C:ExecuteUbergraph_B_PlayerShieldDamage_CameraLensEffect
void AB_PlayerShieldDamage_CameraLensEffect_C::ExecuteUbergraph_B_PlayerShieldDamage_CameraLensEffect(int32_t EntryPoint)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Effects/Fort_Effects/Camera_Effects/B_PlayerShieldDamage_CameraLensEffect.B_PlayerShieldDamage_CameraLensEffect_C:ExecuteUbergraph_B_PlayerShieldDamage_CameraLensEffect");

	FAB_PlayerShieldDamage_CameraLensEffect_C_ExecuteUbergraph_B_PlayerShieldDamage_CameraLensEffect_Params Parms;

	Parms.EntryPoint = EntryPoint;

	ProcessEvent(FN, &Parms);
}

