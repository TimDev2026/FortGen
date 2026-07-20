#include "pch.h"

#include "FN_B_SupplyDropPlacement_classes.h"

UClass* AB_SupplyDropPlacement_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/Player/Generic/Gadgets/SupplyDrop/B_SupplyDropPlacement.B_SupplyDropPlacement_C");

	return Class;
}

// Function /Game/Abilities/Player/Generic/Gadgets/SupplyDrop/B_SupplyDropPlacement.B_SupplyDropPlacement_C:Landed
void AB_SupplyDropPlacement_C::Landed()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Generic/Gadgets/SupplyDrop/B_SupplyDropPlacement.B_SupplyDropPlacement_C:Landed");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/Player/Generic/Gadgets/SupplyDrop/B_SupplyDropPlacement.B_SupplyDropPlacement_C:OnRep_bIsLooted
void AB_SupplyDropPlacement_C::OnRep_bIsLooted()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Generic/Gadgets/SupplyDrop/B_SupplyDropPlacement.B_SupplyDropPlacement_C:OnRep_bIsLooted");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/Player/Generic/Gadgets/SupplyDrop/B_SupplyDropPlacement.B_SupplyDropPlacement_C:IsAcceptablePositionForPlacement
bool AB_SupplyDropPlacement_C::IsAcceptablePositionForPlacement(FVector InLocation, FRotator InRotation, class AFortDecoTool* DecoTool, bool bIsCDO, FText OutFailureReason) const
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Generic/Gadgets/SupplyDrop/B_SupplyDropPlacement.B_SupplyDropPlacement_C:IsAcceptablePositionForPlacement");

	FAB_SupplyDropPlacement_C_IsAcceptablePositionForPlacement_Params Parms;

	Parms.InLocation = InLocation;
	Parms.InRotation = InRotation;
	Parms.DecoTool = DecoTool;
	Parms.bIsCDO = bIsCDO;
	Parms.OutFailureReason = OutFailureReason;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Generic/Gadgets/SupplyDrop/B_SupplyDropPlacement.B_SupplyDropPlacement_C:SetMatOnLevel
void AB_SupplyDropPlacement_C::SetMatOnLevel()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Generic/Gadgets/SupplyDrop/B_SupplyDropPlacement.B_SupplyDropPlacement_C:SetMatOnLevel");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/Player/Generic/Gadgets/SupplyDrop/B_SupplyDropPlacement.B_SupplyDropPlacement_C:UpdateLocation
void AB_SupplyDropPlacement_C::UpdateLocation(float Time)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Generic/Gadgets/SupplyDrop/B_SupplyDropPlacement.B_SupplyDropPlacement_C:UpdateLocation");

	FAB_SupplyDropPlacement_C_UpdateLocation_Params Parms;

	Parms.Time = Time;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Generic/Gadgets/SupplyDrop/B_SupplyDropPlacement.B_SupplyDropPlacement_C:BlueprintCanInteract
bool AB_SupplyDropPlacement_C::BlueprintCanInteract(class AFortPawn* InteractingPawn) const
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Generic/Gadgets/SupplyDrop/B_SupplyDropPlacement.B_SupplyDropPlacement_C:BlueprintCanInteract");

	FAB_SupplyDropPlacement_C_BlueprintCanInteract_Params Parms;

	Parms.InteractingPawn = InteractingPawn;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Generic/Gadgets/SupplyDrop/B_SupplyDropPlacement.B_SupplyDropPlacement_C:TurnOnInteract
void AB_SupplyDropPlacement_C::TurnOnInteract()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Generic/Gadgets/SupplyDrop/B_SupplyDropPlacement.B_SupplyDropPlacement_C:TurnOnInteract");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/Player/Generic/Gadgets/SupplyDrop/B_SupplyDropPlacement.B_SupplyDropPlacement_C:SpawnLoot
void AB_SupplyDropPlacement_C::SpawnLoot()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Generic/Gadgets/SupplyDrop/B_SupplyDropPlacement.B_SupplyDropPlacement_C:SpawnLoot");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/Player/Generic/Gadgets/SupplyDrop/B_SupplyDropPlacement.B_SupplyDropPlacement_C:UserConstructionScript
void AB_SupplyDropPlacement_C::UserConstructionScript()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Generic/Gadgets/SupplyDrop/B_SupplyDropPlacement.B_SupplyDropPlacement_C:UserConstructionScript");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/Player/Generic/Gadgets/SupplyDrop/B_SupplyDropPlacement.B_SupplyDropPlacement_C:Timeline_0__FinishedFunc
void AB_SupplyDropPlacement_C::Timeline_0__FinishedFunc()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Generic/Gadgets/SupplyDrop/B_SupplyDropPlacement.B_SupplyDropPlacement_C:Timeline_0__FinishedFunc");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/Player/Generic/Gadgets/SupplyDrop/B_SupplyDropPlacement.B_SupplyDropPlacement_C:Timeline_0__UpdateFunc
void AB_SupplyDropPlacement_C::Timeline_0__UpdateFunc()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Generic/Gadgets/SupplyDrop/B_SupplyDropPlacement.B_SupplyDropPlacement_C:Timeline_0__UpdateFunc");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/Player/Generic/Gadgets/SupplyDrop/B_SupplyDropPlacement.B_SupplyDropPlacement_C:Timeline_0__StartTrail__EventFunc
void AB_SupplyDropPlacement_C::Timeline_0__StartTrail__EventFunc()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Generic/Gadgets/SupplyDrop/B_SupplyDropPlacement.B_SupplyDropPlacement_C:Timeline_0__StartTrail__EventFunc");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/Player/Generic/Gadgets/SupplyDrop/B_SupplyDropPlacement.B_SupplyDropPlacement_C:Timeline_0__Impact__EventFunc
void AB_SupplyDropPlacement_C::Timeline_0__Impact__EventFunc()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Generic/Gadgets/SupplyDrop/B_SupplyDropPlacement.B_SupplyDropPlacement_C:Timeline_0__Impact__EventFunc");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/Player/Generic/Gadgets/SupplyDrop/B_SupplyDropPlacement.B_SupplyDropPlacement_C:ReceiveBeginPlay
void AB_SupplyDropPlacement_C::ReceiveBeginPlay()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Generic/Gadgets/SupplyDrop/B_SupplyDropPlacement.B_SupplyDropPlacement_C:ReceiveBeginPlay");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/Player/Generic/Gadgets/SupplyDrop/B_SupplyDropPlacement.B_SupplyDropPlacement_C:BlueprintOnInteract
void AB_SupplyDropPlacement_C::BlueprintOnInteract(class AFortPawn* InteractingPawn)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Generic/Gadgets/SupplyDrop/B_SupplyDropPlacement.B_SupplyDropPlacement_C:BlueprintOnInteract");

	FAB_SupplyDropPlacement_C_BlueprintOnInteract_Params Parms;

	Parms.InteractingPawn = InteractingPawn;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Generic/Gadgets/SupplyDrop/B_SupplyDropPlacement.B_SupplyDropPlacement_C:SelfDestruct
void AB_SupplyDropPlacement_C::SelfDestruct()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Generic/Gadgets/SupplyDrop/B_SupplyDropPlacement.B_SupplyDropPlacement_C:SelfDestruct");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/Player/Generic/Gadgets/SupplyDrop/B_SupplyDropPlacement.B_SupplyDropPlacement_C:OnDeathServer
void AB_SupplyDropPlacement_C::OnDeathServer(float Damage, FGameplayTagContainer DamageTags, FVector Momentum, FHitResult HitInfo, class AController* InstigatedBy, class AActor* DamageCauser, FGameplayEffectContextHandle EffectContext)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Generic/Gadgets/SupplyDrop/B_SupplyDropPlacement.B_SupplyDropPlacement_C:OnDeathServer");

	FAB_SupplyDropPlacement_C_OnDeathServer_Params Parms;

	Parms.Damage = Damage;
	Parms.DamageTags = DamageTags;
	Parms.Momentum = Momentum;
	Parms.HitInfo = HitInfo;
	Parms.InstigatedBy = InstigatedBy;
	Parms.DamageCauser = DamageCauser;
	Parms.EffectContext = EffectContext;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Generic/Gadgets/SupplyDrop/B_SupplyDropPlacement.B_SupplyDropPlacement_C:ExecuteUbergraph_B_SupplyDropPlacement
void AB_SupplyDropPlacement_C::ExecuteUbergraph_B_SupplyDropPlacement(int32_t EntryPoint)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Generic/Gadgets/SupplyDrop/B_SupplyDropPlacement.B_SupplyDropPlacement_C:ExecuteUbergraph_B_SupplyDropPlacement");

	FAB_SupplyDropPlacement_C_ExecuteUbergraph_B_SupplyDropPlacement_Params Parms;

	Parms.EntryPoint = EntryPoint;

	ProcessEvent(FN, &Parms);
}

