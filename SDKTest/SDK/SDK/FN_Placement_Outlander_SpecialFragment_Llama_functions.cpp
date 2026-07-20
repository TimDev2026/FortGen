#include "pch.h"

#include "FN_Placement_Outlander_SpecialFragment_Llama_classes.h"

UClass* APlacement_Outlander_SpecialFragment_Llama_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/Player/Generic/Gadgets/Llama/Placement_Outlander_SpecialFragment_Llama.Placement_Outlander_SpecialFragment_Llama_C");

	return Class;
}

// Function /Game/Abilities/Player/Generic/Gadgets/Llama/Placement_Outlander_SpecialFragment_Llama.Placement_Outlander_SpecialFragment_Llama_C:IsAcceptablePositionForPlacement
bool APlacement_Outlander_SpecialFragment_Llama_C::IsAcceptablePositionForPlacement(FVector InLocation, FRotator InRotation, class AFortDecoTool* DecoTool, bool bIsCDO, FText OutFailureReason) const
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Generic/Gadgets/Llama/Placement_Outlander_SpecialFragment_Llama.Placement_Outlander_SpecialFragment_Llama_C:IsAcceptablePositionForPlacement");

	FAPlacement_Outlander_SpecialFragment_Llama_C_IsAcceptablePositionForPlacement_Params Parms;

	Parms.InLocation = InLocation;
	Parms.InRotation = InRotation;
	Parms.DecoTool = DecoTool;
	Parms.bIsCDO = bIsCDO;
	Parms.OutFailureReason = OutFailureReason;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Generic/Gadgets/Llama/Placement_Outlander_SpecialFragment_Llama.Placement_Outlander_SpecialFragment_Llama_C:UserConstructionScript
void APlacement_Outlander_SpecialFragment_Llama_C::UserConstructionScript()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Generic/Gadgets/Llama/Placement_Outlander_SpecialFragment_Llama.Placement_Outlander_SpecialFragment_Llama_C:UserConstructionScript");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/Player/Generic/Gadgets/Llama/Placement_Outlander_SpecialFragment_Llama.Placement_Outlander_SpecialFragment_Llama_C:ReceiveBeginPlay
void APlacement_Outlander_SpecialFragment_Llama_C::ReceiveBeginPlay()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Generic/Gadgets/Llama/Placement_Outlander_SpecialFragment_Llama.Placement_Outlander_SpecialFragment_Llama_C:ReceiveBeginPlay");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/Player/Generic/Gadgets/Llama/Placement_Outlander_SpecialFragment_Llama.Placement_Outlander_SpecialFragment_Llama_C:PlacedByPlacementTool
void APlacement_Outlander_SpecialFragment_Llama_C::PlacedByPlacementTool()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Generic/Gadgets/Llama/Placement_Outlander_SpecialFragment_Llama.Placement_Outlander_SpecialFragment_Llama_C:PlacedByPlacementTool");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/Player/Generic/Gadgets/Llama/Placement_Outlander_SpecialFragment_Llama.Placement_Outlander_SpecialFragment_Llama_C:ExecuteUbergraph_Placement_Outlander_SpecialFragment_Llama
void APlacement_Outlander_SpecialFragment_Llama_C::ExecuteUbergraph_Placement_Outlander_SpecialFragment_Llama(int32_t EntryPoint)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Generic/Gadgets/Llama/Placement_Outlander_SpecialFragment_Llama.Placement_Outlander_SpecialFragment_Llama_C:ExecuteUbergraph_Placement_Outlander_SpecialFragment_Llama");

	FAPlacement_Outlander_SpecialFragment_Llama_C_ExecuteUbergraph_Placement_Outlander_SpecialFragment_Llama_Params Parms;

	Parms.EntryPoint = EntryPoint;

	ProcessEvent(FN, &Parms);
}

