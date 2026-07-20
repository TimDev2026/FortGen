#include "pch.h"

#include "FN_GA_Outlander_KeenEyes_classes.h"

UClass* UGA_Outlander_KeenEyes_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/Player/Outlander/Traits/FocusedAcquisition/GA_Outlander_KeenEyes.GA_Outlander_KeenEyes_C");

	return Class;
}

// Function /Game/Abilities/Player/Outlander/Traits/FocusedAcquisition/GA_Outlander_KeenEyes.GA_Outlander_KeenEyes_C:Setup Post Fades
void UGA_Outlander_KeenEyes_C::Setup_Post_Fades(bool Activating__T__Or_Deactivating__F_)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Outlander/Traits/FocusedAcquisition/GA_Outlander_KeenEyes.GA_Outlander_KeenEyes_C:Setup Post Fades");

	FUGA_Outlander_KeenEyes_C_Setup_Post_Fades_Params Parms;

	Parms.Activating__T__Or_Deactivating__F_ = Activating__T__Or_Deactivating__F_;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Outlander/Traits/FocusedAcquisition/GA_Outlander_KeenEyes.GA_Outlander_KeenEyes_C:Activate Deactivate Outline Post Process
void UGA_Outlander_KeenEyes_C::Activate_Deactivate_Outline_Post_Process(float Outline_Weight)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Outlander/Traits/FocusedAcquisition/GA_Outlander_KeenEyes.GA_Outlander_KeenEyes_C:Activate Deactivate Outline Post Process");

	FUGA_Outlander_KeenEyes_C_Activate_Deactivate_Outline_Post_Process_Params Parms;

	Parms.Outline_Weight = Outline_Weight;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Outlander/Traits/FocusedAcquisition/GA_Outlander_KeenEyes.GA_Outlander_KeenEyes_C:Deactivate Keen Eye Particles as Objects Leave the Overlap Region
void UGA_Outlander_KeenEyes_C::Deactivate_Keen_Eye_Particles_as_Objects_Leave_the_Overlap_Region(class ABuildingContainer* Building_Container, class AFortPawn* Fort_Pawn, bool Fort_Pawn_True_Building_container_False)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Outlander/Traits/FocusedAcquisition/GA_Outlander_KeenEyes.GA_Outlander_KeenEyes_C:Deactivate Keen Eye Particles as Objects Leave the Overlap Region");

	FUGA_Outlander_KeenEyes_C_Deactivate_Keen_Eye_Particles_as_Objects_Leave_the_Overlap_Region_Params Parms;

	Parms.Building_Container = Building_Container;
	Parms.Fort_Pawn = Fort_Pawn;
	Parms.Fort_Pawn_True_Building_container_False = Fort_Pawn_True_Building_container_False;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Outlander/Traits/FocusedAcquisition/GA_Outlander_KeenEyes.GA_Outlander_KeenEyes_C:Set Or Remove Keen Eyes Custom Depth
void UGA_Outlander_KeenEyes_C::Set_Or_Remove_Keen_Eyes_Custom_Depth(class AFortPawn* Character_Mesh, bool Render_CustomDepth)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Outlander/Traits/FocusedAcquisition/GA_Outlander_KeenEyes.GA_Outlander_KeenEyes_C:Set Or Remove Keen Eyes Custom Depth");

	FUGA_Outlander_KeenEyes_C_Set_Or_Remove_Keen_Eyes_Custom_Depth_Params Parms;

	Parms.Character_Mesh = Character_Mesh;
	Parms.Render_CustomDepth = Render_CustomDepth;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Outlander/Traits/FocusedAcquisition/GA_Outlander_KeenEyes.GA_Outlander_KeenEyes_C:GetNearbyLoot
void UGA_Outlander_KeenEyes_C::GetNearbyLoot(class AActor* NewIncomingActor)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Outlander/Traits/FocusedAcquisition/GA_Outlander_KeenEyes.GA_Outlander_KeenEyes_C:GetNearbyLoot");

	FUGA_Outlander_KeenEyes_C_GetNearbyLoot_Params Parms;

	Parms.NewIncomingActor = NewIncomingActor;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Outlander/Traits/FocusedAcquisition/GA_Outlander_KeenEyes.GA_Outlander_KeenEyes_C:PulseKeenEyes
void UGA_Outlander_KeenEyes_C::PulseKeenEyes()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Outlander/Traits/FocusedAcquisition/GA_Outlander_KeenEyes.GA_Outlander_KeenEyes_C:PulseKeenEyes");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/Player/Outlander/Traits/FocusedAcquisition/GA_Outlander_KeenEyes.GA_Outlander_KeenEyes_C:K2_ActivateAbilityFromEvent
void UGA_Outlander_KeenEyes_C::K2_ActivateAbilityFromEvent(FGameplayEventData EventData)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Outlander/Traits/FocusedAcquisition/GA_Outlander_KeenEyes.GA_Outlander_KeenEyes_C:K2_ActivateAbilityFromEvent");

	FUGA_Outlander_KeenEyes_C_K2_ActivateAbilityFromEvent_Params Parms;

	Parms.EventData = EventData;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Outlander/Traits/FocusedAcquisition/GA_Outlander_KeenEyes.GA_Outlander_KeenEyes_C:OverlapTreasure
void UGA_Outlander_KeenEyes_C::OverlapTreasure(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult SweepResult)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Outlander/Traits/FocusedAcquisition/GA_Outlander_KeenEyes.GA_Outlander_KeenEyes_C:OverlapTreasure");

	FUGA_Outlander_KeenEyes_C_OverlapTreasure_Params Parms;

	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;
	Parms.bFromSweep = bFromSweep;
	Parms.SweepResult = SweepResult;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Outlander/Traits/FocusedAcquisition/GA_Outlander_KeenEyes.GA_Outlander_KeenEyes_C:EndOverlap
void UGA_Outlander_KeenEyes_C::EndOverlap(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Outlander/Traits/FocusedAcquisition/GA_Outlander_KeenEyes.GA_Outlander_KeenEyes_C:EndOverlap");

	FUGA_Outlander_KeenEyes_C_EndOverlap_Params Parms;

	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Outlander/Traits/FocusedAcquisition/GA_Outlander_KeenEyes.GA_Outlander_KeenEyes_C:K2_OnEndAbility
void UGA_Outlander_KeenEyes_C::K2_OnEndAbility()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Outlander/Traits/FocusedAcquisition/GA_Outlander_KeenEyes.GA_Outlander_KeenEyes_C:K2_OnEndAbility");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/Player/Outlander/Traits/FocusedAcquisition/GA_Outlander_KeenEyes.GA_Outlander_KeenEyes_C:TestTurnOffKeenEyes
void UGA_Outlander_KeenEyes_C::TestTurnOffKeenEyes()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Outlander/Traits/FocusedAcquisition/GA_Outlander_KeenEyes.GA_Outlander_KeenEyes_C:TestTurnOffKeenEyes");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/Player/Outlander/Traits/FocusedAcquisition/GA_Outlander_KeenEyes.GA_Outlander_KeenEyes_C:ExecuteUbergraph_GA_Outlander_KeenEyes
void UGA_Outlander_KeenEyes_C::ExecuteUbergraph_GA_Outlander_KeenEyes(int32_t EntryPoint)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Outlander/Traits/FocusedAcquisition/GA_Outlander_KeenEyes.GA_Outlander_KeenEyes_C:ExecuteUbergraph_GA_Outlander_KeenEyes");

	FUGA_Outlander_KeenEyes_C_ExecuteUbergraph_GA_Outlander_KeenEyes_Params Parms;

	Parms.EntryPoint = EntryPoint;

	ProcessEvent(FN, &Parms);
}

