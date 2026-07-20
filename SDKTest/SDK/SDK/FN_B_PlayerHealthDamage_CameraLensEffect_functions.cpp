#include "pch.h"

#include "FN_B_PlayerHealthDamage_CameraLensEffect_classes.h"

UClass* AB_PlayerHealthDamage_CameraLensEffect_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Effects/Fort_Effects/Camera_Effects/B_PlayerHealthDamage_CameraLensEffect.B_PlayerHealthDamage_CameraLensEffect_C");

	return Class;
}

// Function /Game/Effects/Fort_Effects/Camera_Effects/B_PlayerHealthDamage_CameraLensEffect.B_PlayerHealthDamage_CameraLensEffect_C:UserConstructionScript
void AB_PlayerHealthDamage_CameraLensEffect_C::UserConstructionScript()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Effects/Fort_Effects/Camera_Effects/B_PlayerHealthDamage_CameraLensEffect.B_PlayerHealthDamage_CameraLensEffect_C:UserConstructionScript");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Effects/Fort_Effects/Camera_Effects/B_PlayerHealthDamage_CameraLensEffect.B_PlayerHealthDamage_CameraLensEffect_C:PassParticle_Parameter
void AB_PlayerHealthDamage_CameraLensEffect_C::PassParticle_Parameter(float NewParam, bool First_Hit)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Effects/Fort_Effects/Camera_Effects/B_PlayerHealthDamage_CameraLensEffect.B_PlayerHealthDamage_CameraLensEffect_C:PassParticle_Parameter");

	FAB_PlayerHealthDamage_CameraLensEffect_C_PassParticle_Parameter_Params Parms;

	Parms.NewParam = NewParam;
	Parms.First_Hit = First_Hit;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Effects/Fort_Effects/Camera_Effects/B_PlayerHealthDamage_CameraLensEffect.B_PlayerHealthDamage_CameraLensEffect_C:ExecuteUbergraph_B_PlayerHealthDamage_CameraLensEffect
void AB_PlayerHealthDamage_CameraLensEffect_C::ExecuteUbergraph_B_PlayerHealthDamage_CameraLensEffect(int32_t EntryPoint)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Effects/Fort_Effects/Camera_Effects/B_PlayerHealthDamage_CameraLensEffect.B_PlayerHealthDamage_CameraLensEffect_C:ExecuteUbergraph_B_PlayerHealthDamage_CameraLensEffect");

	FAB_PlayerHealthDamage_CameraLensEffect_C_ExecuteUbergraph_B_PlayerHealthDamage_CameraLensEffect_Params Parms;

	Parms.EntryPoint = EntryPoint;

	ProcessEvent(FN, &Parms);
}

