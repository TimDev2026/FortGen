#include "pch.h"

#include "FN_AOE_Ninja_SmokeBomb_Cloud_classes.h"

UClass* AAOE_Ninja_SmokeBomb_Cloud_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/Player/Ninja/Gadgets/SmokeBomb/AOE_Ninja_SmokeBomb_Cloud.AOE_Ninja_SmokeBomb_Cloud_C");

	return Class;
}

// Function /Game/Abilities/Player/Ninja/Gadgets/SmokeBomb/AOE_Ninja_SmokeBomb_Cloud.AOE_Ninja_SmokeBomb_Cloud_C:OnRep_AOELifespan
void AAOE_Ninja_SmokeBomb_Cloud_C::OnRep_AOELifespan()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Ninja/Gadgets/SmokeBomb/AOE_Ninja_SmokeBomb_Cloud.AOE_Ninja_SmokeBomb_Cloud_C:OnRep_AOELifespan");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/Player/Ninja/Gadgets/SmokeBomb/AOE_Ninja_SmokeBomb_Cloud.AOE_Ninja_SmokeBomb_Cloud_C:OnRep_Lifespan
void AAOE_Ninja_SmokeBomb_Cloud_C::OnRep_Lifespan()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Ninja/Gadgets/SmokeBomb/AOE_Ninja_SmokeBomb_Cloud.AOE_Ninja_SmokeBomb_Cloud_C:OnRep_Lifespan");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/Player/Ninja/Gadgets/SmokeBomb/AOE_Ninja_SmokeBomb_Cloud.AOE_Ninja_SmokeBomb_Cloud_C:UserConstructionScript
void AAOE_Ninja_SmokeBomb_Cloud_C::UserConstructionScript()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Ninja/Gadgets/SmokeBomb/AOE_Ninja_SmokeBomb_Cloud.AOE_Ninja_SmokeBomb_Cloud_C:UserConstructionScript");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/Player/Ninja/Gadgets/SmokeBomb/AOE_Ninja_SmokeBomb_Cloud.AOE_Ninja_SmokeBomb_Cloud_C:FadeIn__FinishedFunc
void AAOE_Ninja_SmokeBomb_Cloud_C::FadeIn__FinishedFunc()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Ninja/Gadgets/SmokeBomb/AOE_Ninja_SmokeBomb_Cloud.AOE_Ninja_SmokeBomb_Cloud_C:FadeIn__FinishedFunc");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/Player/Ninja/Gadgets/SmokeBomb/AOE_Ninja_SmokeBomb_Cloud.AOE_Ninja_SmokeBomb_Cloud_C:FadeIn__UpdateFunc
void AAOE_Ninja_SmokeBomb_Cloud_C::FadeIn__UpdateFunc()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Ninja/Gadgets/SmokeBomb/AOE_Ninja_SmokeBomb_Cloud.AOE_Ninja_SmokeBomb_Cloud_C:FadeIn__UpdateFunc");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/Player/Ninja/Gadgets/SmokeBomb/AOE_Ninja_SmokeBomb_Cloud.AOE_Ninja_SmokeBomb_Cloud_C:PPFade__FinishedFunc
void AAOE_Ninja_SmokeBomb_Cloud_C::PPFade__FinishedFunc()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Ninja/Gadgets/SmokeBomb/AOE_Ninja_SmokeBomb_Cloud.AOE_Ninja_SmokeBomb_Cloud_C:PPFade__FinishedFunc");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/Player/Ninja/Gadgets/SmokeBomb/AOE_Ninja_SmokeBomb_Cloud.AOE_Ninja_SmokeBomb_Cloud_C:PPFade__UpdateFunc
void AAOE_Ninja_SmokeBomb_Cloud_C::PPFade__UpdateFunc()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Ninja/Gadgets/SmokeBomb/AOE_Ninja_SmokeBomb_Cloud.AOE_Ninja_SmokeBomb_Cloud_C:PPFade__UpdateFunc");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/Player/Ninja/Gadgets/SmokeBomb/AOE_Ninja_SmokeBomb_Cloud.AOE_Ninja_SmokeBomb_Cloud_C:ReceiveBeginPlay
void AAOE_Ninja_SmokeBomb_Cloud_C::ReceiveBeginPlay()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Ninja/Gadgets/SmokeBomb/AOE_Ninja_SmokeBomb_Cloud.AOE_Ninja_SmokeBomb_Cloud_C:ReceiveBeginPlay");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/Player/Ninja/Gadgets/SmokeBomb/AOE_Ninja_SmokeBomb_Cloud.AOE_Ninja_SmokeBomb_Cloud_C:BndEvt__Capsule1_K2Node_ComponentBoundEvent_425_ComponentBeginOverlapSignature__DelegateSignature
void AAOE_Ninja_SmokeBomb_Cloud_C::BndEvt__Capsule1_K2Node_ComponentBoundEvent_425_ComponentBeginOverlapSignature__DelegateSignature(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult SweepResult)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Ninja/Gadgets/SmokeBomb/AOE_Ninja_SmokeBomb_Cloud.AOE_Ninja_SmokeBomb_Cloud_C:BndEvt__Capsule1_K2Node_ComponentBoundEvent_425_ComponentBeginOverlapSignature__DelegateSignature");

	FAAOE_Ninja_SmokeBomb_Cloud_C_BndEvt__Capsule1_K2Node_ComponentBoundEvent_425_ComponentBeginOverlapSignature__DelegateSignature_Params Parms;

	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;
	Parms.bFromSweep = bFromSweep;
	Parms.SweepResult = SweepResult;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Ninja/Gadgets/SmokeBomb/AOE_Ninja_SmokeBomb_Cloud.AOE_Ninja_SmokeBomb_Cloud_C:BndEvt__Capsule1_K2Node_ComponentBoundEvent_445_ComponentEndOverlapSignature__DelegateSignature
void AAOE_Ninja_SmokeBomb_Cloud_C::BndEvt__Capsule1_K2Node_ComponentBoundEvent_445_ComponentEndOverlapSignature__DelegateSignature(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Ninja/Gadgets/SmokeBomb/AOE_Ninja_SmokeBomb_Cloud.AOE_Ninja_SmokeBomb_Cloud_C:BndEvt__Capsule1_K2Node_ComponentBoundEvent_445_ComponentEndOverlapSignature__DelegateSignature");

	FAAOE_Ninja_SmokeBomb_Cloud_C_BndEvt__Capsule1_K2Node_ComponentBoundEvent_445_ComponentEndOverlapSignature__DelegateSignature_Params Parms;

	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Ninja/Gadgets/SmokeBomb/AOE_Ninja_SmokeBomb_Cloud.AOE_Ninja_SmokeBomb_Cloud_C:ExtraLifespan
void AAOE_Ninja_SmokeBomb_Cloud_C::ExtraLifespan(float AOELifespan)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Ninja/Gadgets/SmokeBomb/AOE_Ninja_SmokeBomb_Cloud.AOE_Ninja_SmokeBomb_Cloud_C:ExtraLifespan");

	FAAOE_Ninja_SmokeBomb_Cloud_C_ExtraLifespan_Params Parms;

	Parms.AOELifespan = AOELifespan;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Ninja/Gadgets/SmokeBomb/AOE_Ninja_SmokeBomb_Cloud.AOE_Ninja_SmokeBomb_Cloud_C:ExecuteUbergraph_AOE_Ninja_SmokeBomb_Cloud
void AAOE_Ninja_SmokeBomb_Cloud_C::ExecuteUbergraph_AOE_Ninja_SmokeBomb_Cloud(int32_t EntryPoint)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Ninja/Gadgets/SmokeBomb/AOE_Ninja_SmokeBomb_Cloud.AOE_Ninja_SmokeBomb_Cloud_C:ExecuteUbergraph_AOE_Ninja_SmokeBomb_Cloud");

	FAAOE_Ninja_SmokeBomb_Cloud_C_ExecuteUbergraph_AOE_Ninja_SmokeBomb_Cloud_Params Parms;

	Parms.EntryPoint = EntryPoint;

	ProcessEvent(FN, &Parms);
}

