#include "pch.h"

#include "FN_AIModule_classes.h"

UClass* UAISense::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/AIModule.AISense");

	return Class;
}

UClass* UAISense_Sight::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/AIModule.AISense_Sight");

	return Class;
}

UClass* UAISense_Hearing::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/AIModule.AISense_Hearing");

	return Class;
}

// Function /Script/AIModule.AISense_Hearing:ReportNoiseEvent
void UAISense_Hearing::ReportNoiseEvent(class UObject* WorldContext, FVector NoiseLocation, float Loudness, class AActor* Instigator, float MaxRange, FName Tag)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/AIModule.AISense_Hearing:ReportNoiseEvent");

	FUAISense_Hearing_ReportNoiseEvent_Params Parms;

	Parms.WorldContext = WorldContext;
	Parms.NoiseLocation = NoiseLocation;
	Parms.Loudness = Loudness;
	Parms.Instigator = Instigator;
	Parms.MaxRange = MaxRange;
	Parms.Tag = Tag;

	StaticClass()->ProcessEvent(FN, &Parms);
}

UClass* UAISense_Damage::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/AIModule.AISense_Damage");

	return Class;
}

// Function /Script/AIModule.AISense_Damage:ReportDamageEvent
void UAISense_Damage::ReportDamageEvent(class UObject* WorldContext, class AActor* DamagedActor, class AActor* Instigator, float DamageAmount, FVector EventLocation, FVector HitLocation)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/AIModule.AISense_Damage:ReportDamageEvent");

	FUAISense_Damage_ReportDamageEvent_Params Parms;

	Parms.WorldContext = WorldContext;
	Parms.DamagedActor = DamagedActor;
	Parms.Instigator = Instigator;
	Parms.DamageAmount = DamageAmount;
	Parms.EventLocation = EventLocation;
	Parms.HitLocation = HitLocation;

	StaticClass()->ProcessEvent(FN, &Parms);
}

UClass* UAISense_Touch::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/AIModule.AISense_Touch");

	return Class;
}

UClass* UAISense_Team::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/AIModule.AISense_Team");

	return Class;
}

UClass* UAISense_Prediction::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/AIModule.AISense_Prediction");

	return Class;
}

// Function /Script/AIModule.AISense_Prediction:RequestPawnPredictionEvent
void UAISense_Prediction::RequestPawnPredictionEvent(class APawn* Requestor, class AActor* PredictedActor, float PredictionTime)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/AIModule.AISense_Prediction:RequestPawnPredictionEvent");

	FUAISense_Prediction_RequestPawnPredictionEvent_Params Parms;

	Parms.Requestor = Requestor;
	Parms.PredictedActor = PredictedActor;
	Parms.PredictionTime = PredictionTime;

	StaticClass()->ProcessEvent(FN, &Parms);
}

// Function /Script/AIModule.AISense_Prediction:RequestControllerPredictionEvent
void UAISense_Prediction::RequestControllerPredictionEvent(class AAIController* Requestor, class AActor* PredictedActor, float PredictionTime)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/AIModule.AISense_Prediction:RequestControllerPredictionEvent");

	FUAISense_Prediction_RequestControllerPredictionEvent_Params Parms;

	Parms.Requestor = Requestor;
	Parms.PredictedActor = PredictedActor;
	Parms.PredictionTime = PredictionTime;

	StaticClass()->ProcessEvent(FN, &Parms);
}

UClass* UAIHotSpotManager::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/AIModule.AIHotSpotManager");

	return Class;
}

UClass* UGenericTeamAgentInterface::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/AIModule.GenericTeamAgentInterface");

	return Class;
}

UClass* UPathFollowingComponent::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/AIModule.PathFollowingComponent");

	return Class;
}

// Function /Script/AIModule.PathFollowingComponent:OnActorBump
void UPathFollowingComponent::OnActorBump(class AActor* SelfActor, class AActor* OtherActor, FVector NormalImpulse, FHitResult Hit)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/AIModule.PathFollowingComponent:OnActorBump");

	FUPathFollowingComponent_OnActorBump_Params Parms;

	Parms.SelfActor = SelfActor;
	Parms.OtherActor = OtherActor;
	Parms.NormalImpulse = NormalImpulse;
	Parms.Hit = Hit;

	ProcessEvent(FN, &Parms);
}

// Function /Script/AIModule.PathFollowingComponent:GetPathDestination
FVector UPathFollowingComponent::GetPathDestination() const
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/AIModule.PathFollowingComponent:GetPathDestination");

	FUPathFollowingComponent_GetPathDestination_Params Parms;


	ProcessEvent(FN, &Parms);
}

// Function /Script/AIModule.PathFollowingComponent:GetPathActionType
EPathFollowingAction UPathFollowingComponent::GetPathActionType() const
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/AIModule.PathFollowingComponent:GetPathActionType");

	FUPathFollowingComponent_GetPathActionType_Params Parms;


	ProcessEvent(FN, &Parms);
}

UClass* UCrowdFollowingComponent::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/AIModule.CrowdFollowingComponent");

	return Class;
}

// Function /Script/AIModule.CrowdFollowingComponent:SuspendCrowdSteering
void UCrowdFollowingComponent::SuspendCrowdSteering(bool bSuspend)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/AIModule.CrowdFollowingComponent:SuspendCrowdSteering");

	FUCrowdFollowingComponent_SuspendCrowdSteering_Params Parms;

	Parms.bSuspend = bSuspend;

	ProcessEvent(FN, &Parms);
}

UClass* AAIController::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/AIModule.AIController");

	return Class;
}

// Function /Script/AIModule.AIController:UseBlackboard
bool AAIController::UseBlackboard(class UBlackboardData* BlackboardAsset, class UBlackboardComponent* BlackboardComponent)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/AIModule.AIController:UseBlackboard");

	FAAIController_UseBlackboard_Params Parms;

	Parms.BlackboardAsset = BlackboardAsset;
	Parms.BlackboardComponent = BlackboardComponent;

	ProcessEvent(FN, &Parms);
}

// Function /Script/AIModule.AIController:SetMoveBlockDetection
void AAIController::SetMoveBlockDetection(bool bEnable)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/AIModule.AIController:SetMoveBlockDetection");

	FAAIController_SetMoveBlockDetection_Params Parms;

	Parms.bEnable = bEnable;

	ProcessEvent(FN, &Parms);
}

// Function /Script/AIModule.AIController:RunBehaviorTree
bool AAIController::RunBehaviorTree(class UBehaviorTree* BTAsset)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/AIModule.AIController:RunBehaviorTree");

	FAAIController_RunBehaviorTree_Params Parms;

	Parms.BTAsset = BTAsset;

	ProcessEvent(FN, &Parms);
}

// Function /Script/AIModule.AIController:OnUsingBlackBoard
void AAIController::OnUsingBlackBoard(class UBlackboardComponent* BlackboardComp, class UBlackboardData* BlackboardAsset)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/AIModule.AIController:OnUsingBlackBoard");

	FAAIController_OnUsingBlackBoard_Params Parms;

	Parms.BlackboardComp = BlackboardComp;
	Parms.BlackboardAsset = BlackboardAsset;

	ProcessEvent(FN, &Parms);
}

// Function /Script/AIModule.AIController:OnUnpossess
void AAIController::OnUnpossess(class APawn* UnpossessedPawn)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/AIModule.AIController:OnUnpossess");

	FAAIController_OnUnpossess_Params Parms;

	Parms.UnpossessedPawn = UnpossessedPawn;

	ProcessEvent(FN, &Parms);
}

// Function /Script/AIModule.AIController:OnPossess
void AAIController::OnPossess(class APawn* PossessedPawn)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/AIModule.AIController:OnPossess");

	FAAIController_OnPossess_Params Parms;

	Parms.PossessedPawn = PossessedPawn;

	ProcessEvent(FN, &Parms);
}

// Function /Script/AIModule.AIController:OnGameplayTaskResourcesClaimed
void AAIController::OnGameplayTaskResourcesClaimed(FGameplayResourceSet NewlyClaimed, FGameplayResourceSet FreshlyReleased)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/AIModule.AIController:OnGameplayTaskResourcesClaimed");

	FAAIController_OnGameplayTaskResourcesClaimed_Params Parms;

	Parms.NewlyClaimed = NewlyClaimed;
	Parms.FreshlyReleased = FreshlyReleased;

	ProcessEvent(FN, &Parms);
}

// Function /Script/AIModule.AIController:MoveToLocation
EPathFollowingRequestResult AAIController::MoveToLocation(FVector Dest, float AcceptanceRadius, bool bStopOnOverlap, bool bUsePathfinding, bool bProjectDestinationToNavigation, bool bCanStrafe, class UClass* FilterClass, bool bAllowPartialPath)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/AIModule.AIController:MoveToLocation");

	FAAIController_MoveToLocation_Params Parms;

	Parms.Dest = Dest;
	Parms.AcceptanceRadius = AcceptanceRadius;
	Parms.bStopOnOverlap = bStopOnOverlap;
	Parms.bUsePathfinding = bUsePathfinding;
	Parms.bProjectDestinationToNavigation = bProjectDestinationToNavigation;
	Parms.bCanStrafe = bCanStrafe;
	Parms.FilterClass = FilterClass;
	Parms.bAllowPartialPath = bAllowPartialPath;

	ProcessEvent(FN, &Parms);
}

// Function /Script/AIModule.AIController:MoveToActor
EPathFollowingRequestResult AAIController::MoveToActor(class AActor* Goal, float AcceptanceRadius, bool bStopOnOverlap, bool bUsePathfinding, bool bCanStrafe, class UClass* FilterClass, bool bAllowPartialPath)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/AIModule.AIController:MoveToActor");

	FAAIController_MoveToActor_Params Parms;

	Parms.Goal = Goal;
	Parms.AcceptanceRadius = AcceptanceRadius;
	Parms.bStopOnOverlap = bStopOnOverlap;
	Parms.bUsePathfinding = bUsePathfinding;
	Parms.bCanStrafe = bCanStrafe;
	Parms.FilterClass = FilterClass;
	Parms.bAllowPartialPath = bAllowPartialPath;

	ProcessEvent(FN, &Parms);
}

// Function /Script/AIModule.AIController:K2_SetFocus
void AAIController::K2_SetFocus(class AActor* NewFocus)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/AIModule.AIController:K2_SetFocus");

	FAAIController_K2_SetFocus_Params Parms;

	Parms.NewFocus = NewFocus;

	ProcessEvent(FN, &Parms);
}

// Function /Script/AIModule.AIController:K2_SetFocalPoint
void AAIController::K2_SetFocalPoint(FVector FP)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/AIModule.AIController:K2_SetFocalPoint");

	FAAIController_K2_SetFocalPoint_Params Parms;

	Parms.FP = FP;

	ProcessEvent(FN, &Parms);
}

// Function /Script/AIModule.AIController:K2_ClearFocus
void AAIController::K2_ClearFocus()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/AIModule.AIController:K2_ClearFocus");

	ProcessEvent(FN, nullptr);
}

// Function /Script/AIModule.AIController:HasPartialPath
bool AAIController::HasPartialPath() const
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/AIModule.AIController:HasPartialPath");

	FAAIController_HasPartialPath_Params Parms;


	ProcessEvent(FN, &Parms);
}

// Function /Script/AIModule.AIController:GetPathFollowingComponent
class UPathFollowingComponent* AAIController::GetPathFollowingComponent() const
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/AIModule.AIController:GetPathFollowingComponent");

	FAAIController_GetPathFollowingComponent_Params Parms;


	ProcessEvent(FN, &Parms);
}

// Function /Script/AIModule.AIController:GetMoveStatus
EPathFollowingStatus AAIController::GetMoveStatus() const
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/AIModule.AIController:GetMoveStatus");

	FAAIController_GetMoveStatus_Params Parms;


	ProcessEvent(FN, &Parms);
}

// Function /Script/AIModule.AIController:GetImmediateMoveDestination
FVector AAIController::GetImmediateMoveDestination() const
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/AIModule.AIController:GetImmediateMoveDestination");

	FAAIController_GetImmediateMoveDestination_Params Parms;


	ProcessEvent(FN, &Parms);
}

// Function /Script/AIModule.AIController:GetFocusActor
class AActor* AAIController::GetFocusActor() const
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/AIModule.AIController:GetFocusActor");

	FAAIController_GetFocusActor_Params Parms;


	ProcessEvent(FN, &Parms);
}

// Function /Script/AIModule.AIController:GetFocalPointOnActor
FVector AAIController::GetFocalPointOnActor(class AActor* Actor) const
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/AIModule.AIController:GetFocalPointOnActor");

	FAAIController_GetFocalPointOnActor_Params Parms;

	Parms.Actor = Actor;

	ProcessEvent(FN, &Parms);
}

// Function /Script/AIModule.AIController:GetFocalPoint
FVector AAIController::GetFocalPoint() const
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/AIModule.AIController:GetFocalPoint");

	FAAIController_GetFocalPoint_Params Parms;


	ProcessEvent(FN, &Parms);
}

// Function /Script/AIModule.AIController:GetAIPerceptionComponent
class UAIPerceptionComponent* AAIController::GetAIPerceptionComponent()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/AIModule.AIController:GetAIPerceptionComponent");

	FAAIController_GetAIPerceptionComponent_Params Parms;


	ProcessEvent(FN, &Parms);
}

UClass* UAIDataProvider::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/AIModule.AIDataProvider");

	return Class;
}

UClass* UAIPerceptionComponent::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/AIModule.AIPerceptionComponent");

	return Class;
}

// Function /Script/AIModule.AIPerceptionComponent:RequestStimuliListenerUpdate
void UAIPerceptionComponent::RequestStimuliListenerUpdate()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/AIModule.AIPerceptionComponent:RequestStimuliListenerUpdate");

	ProcessEvent(FN, nullptr);
}

// Function /Script/AIModule.AIPerceptionComponent:OnOwnerEndPlay
void UAIPerceptionComponent::OnOwnerEndPlay(EEndPlayReason EndPlayReason)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/AIModule.AIPerceptionComponent:OnOwnerEndPlay");

	FUAIPerceptionComponent_OnOwnerEndPlay_Params Parms;

	Parms.EndPlayReason = EndPlayReason;

	ProcessEvent(FN, &Parms);
}

// Function /Script/AIModule.AIPerceptionComponent:GetPerceivedHostileActors
void UAIPerceptionComponent::GetPerceivedHostileActors(TArray<class AActor*> OutActors) const
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/AIModule.AIPerceptionComponent:GetPerceivedHostileActors");

	FUAIPerceptionComponent_GetPerceivedHostileActors_Params Parms;

	Parms.OutActors = OutActors;

	ProcessEvent(FN, &Parms);
}

// Function /Script/AIModule.AIPerceptionComponent:GetPerceivedActors
void UAIPerceptionComponent::GetPerceivedActors(class UClass* SenseToUse, TArray<class AActor*> OutActors) const
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/AIModule.AIPerceptionComponent:GetPerceivedActors");

	FUAIPerceptionComponent_GetPerceivedActors_Params Parms;

	Parms.SenseToUse = SenseToUse;
	Parms.OutActors = OutActors;

	ProcessEvent(FN, &Parms);
}

// Function /Script/AIModule.AIPerceptionComponent:GetActorsPerception
bool UAIPerceptionComponent::GetActorsPerception(class AActor* Actor, FActorPerceptionBlueprintInfo Info)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/AIModule.AIPerceptionComponent:GetActorsPerception");

	FUAIPerceptionComponent_GetActorsPerception_Params Parms;

	Parms.Actor = Actor;
	Parms.Info = Info;

	ProcessEvent(FN, &Parms);
}

UClass* UAIPerceptionSystem::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/AIModule.AIPerceptionSystem");

	return Class;
}

// Function /Script/AIModule.AIPerceptionSystem:ReportPerceptionEvent
void UAIPerceptionSystem::ReportPerceptionEvent(class UObject* WorldContext, class UAISenseEvent* PerceptionEvent)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/AIModule.AIPerceptionSystem:ReportPerceptionEvent");

	FUAIPerceptionSystem_ReportPerceptionEvent_Params Parms;

	Parms.WorldContext = WorldContext;
	Parms.PerceptionEvent = PerceptionEvent;

	StaticClass()->ProcessEvent(FN, &Parms);
}

// Function /Script/AIModule.AIPerceptionSystem:ReportEvent
void UAIPerceptionSystem::ReportEvent(class UAISenseEvent* PerceptionEvent)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/AIModule.AIPerceptionSystem:ReportEvent");

	FUAIPerceptionSystem_ReportEvent_Params Parms;

	Parms.PerceptionEvent = PerceptionEvent;

	ProcessEvent(FN, &Parms);
}

// Function /Script/AIModule.AIPerceptionSystem:RegisterPerceptionStimuliSource
bool UAIPerceptionSystem::RegisterPerceptionStimuliSource(class UObject* WorldContext, class UClass* Sense, class AActor* Target)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/AIModule.AIPerceptionSystem:RegisterPerceptionStimuliSource");

	FUAIPerceptionSystem_RegisterPerceptionStimuliSource_Params Parms;

	Parms.WorldContext = WorldContext;
	Parms.Sense = Sense;
	Parms.Target = Target;

	StaticClass()->ProcessEvent(FN, &Parms);
}

// Function /Script/AIModule.AIPerceptionSystem:OnPerceptionStimuliSourceEndPlay
void UAIPerceptionSystem::OnPerceptionStimuliSourceEndPlay(EEndPlayReason EndPlayReason)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/AIModule.AIPerceptionSystem:OnPerceptionStimuliSourceEndPlay");

	FUAIPerceptionSystem_OnPerceptionStimuliSourceEndPlay_Params Parms;

	Parms.EndPlayReason = EndPlayReason;

	ProcessEvent(FN, &Parms);
}

// Function /Script/AIModule.AIPerceptionSystem:GetSenseClassForStimulus
class UClass* UAIPerceptionSystem::GetSenseClassForStimulus(class UObject* WorldContext, FAIStimulus Stimulus)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/AIModule.AIPerceptionSystem:GetSenseClassForStimulus");

	FUAIPerceptionSystem_GetSenseClassForStimulus_Params Parms;

	Parms.WorldContext = WorldContext;
	Parms.Stimulus = Stimulus;

	StaticClass()->ProcessEvent(FN, &Parms);
}

UClass* UAISystem::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/AIModule.AISystem");

	return Class;
}

// Function /Script/AIModule.AISystem:AILoggingVerbose
void UAISystem::AILoggingVerbose()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/AIModule.AISystem:AILoggingVerbose");

	ProcessEvent(FN, nullptr);
}

// Function /Script/AIModule.AISystem:AIIgnorePlayers
void UAISystem::AIIgnorePlayers()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/AIModule.AISystem:AIIgnorePlayers");

	ProcessEvent(FN, nullptr);
}

UClass* UBrainComponent::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/AIModule.BrainComponent");

	return Class;
}

// Function /Script/AIModule.BrainComponent:StopLogic
void UBrainComponent::StopLogic(FString Reason)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/AIModule.BrainComponent:StopLogic");

	FUBrainComponent_StopLogic_Params Parms;

	Parms.Reason = Reason;

	ProcessEvent(FN, &Parms);
}

// Function /Script/AIModule.BrainComponent:RestartLogic
void UBrainComponent::RestartLogic()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/AIModule.BrainComponent:RestartLogic");

	ProcessEvent(FN, nullptr);
}

UClass* UBehaviorTreeComponent::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/AIModule.BehaviorTreeComponent");

	return Class;
}

// Function /Script/AIModule.BehaviorTreeComponent:SetDynamicSubtree
void UBehaviorTreeComponent::SetDynamicSubtree(FGameplayTag InjectTag, class UBehaviorTree* BehaviorAsset)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/AIModule.BehaviorTreeComponent:SetDynamicSubtree");

	FUBehaviorTreeComponent_SetDynamicSubtree_Params Parms;

	Parms.InjectTag = InjectTag;
	Parms.BehaviorAsset = BehaviorAsset;

	ProcessEvent(FN, &Parms);
}

// Function /Script/AIModule.BehaviorTreeComponent:GetTagCooldownEndTime
float UBehaviorTreeComponent::GetTagCooldownEndTime(FGameplayTag CooldownTag) const
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/AIModule.BehaviorTreeComponent:GetTagCooldownEndTime");

	FUBehaviorTreeComponent_GetTagCooldownEndTime_Params Parms;

	Parms.CooldownTag = CooldownTag;

	ProcessEvent(FN, &Parms);
}

// Function /Script/AIModule.BehaviorTreeComponent:AddCooldownTagDuration
void UBehaviorTreeComponent::AddCooldownTagDuration(FGameplayTag CooldownTag, float CooldownDuration, bool bAddToExistingDuration)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/AIModule.BehaviorTreeComponent:AddCooldownTagDuration");

	FUBehaviorTreeComponent_AddCooldownTagDuration_Params Parms;

	Parms.CooldownTag = CooldownTag;
	Parms.CooldownDuration = CooldownDuration;
	Parms.bAddToExistingDuration = bAddToExistingDuration;

	ProcessEvent(FN, &Parms);
}

UClass* UBTNode::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/AIModule.BTNode");

	return Class;
}

UClass* UBTAuxiliaryNode::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/AIModule.BTAuxiliaryNode");

	return Class;
}

UClass* UBTDecorator::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/AIModule.BTDecorator");

	return Class;
}

UClass* UBTService::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/AIModule.BTService");

	return Class;
}

UClass* UBTTaskNode::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/AIModule.BTTaskNode");

	return Class;
}

UClass* UBTTask_PawnActionBase::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/AIModule.BTTask_PawnActionBase");

	return Class;
}

UClass* UBTTask_BlackboardBase::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/AIModule.BTTask_BlackboardBase");

	return Class;
}

UClass* UBTTask_MoveDirectlyToward::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/AIModule.BTTask_MoveDirectlyToward");

	return Class;
}

UClass* UBTTask_MoveTo::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/AIModule.BTTask_MoveTo");

	return Class;
}

UClass* UCrowdManager::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/AIModule.CrowdManager");

	return Class;
}

UClass* UPawnAction::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/AIModule.PawnAction");

	return Class;
}

// Function /Script/AIModule.PawnAction:GetActionPriority
EAIRequestPriority UPawnAction::GetActionPriority()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/AIModule.PawnAction:GetActionPriority");

	FUPawnAction_GetActionPriority_Params Parms;


	ProcessEvent(FN, &Parms);
}

// Function /Script/AIModule.PawnAction:Finish
void UPawnAction::Finish(EPawnActionResult WithResult)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/AIModule.PawnAction:Finish");

	FUPawnAction_Finish_Params Parms;

	Parms.WithResult = WithResult;

	ProcessEvent(FN, &Parms);
}

// Function /Script/AIModule.PawnAction:CreateActionInstance
class UPawnAction* UPawnAction::CreateActionInstance(class UObject* WorldContextObject, class UClass* ActionClass)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/AIModule.PawnAction:CreateActionInstance");

	FUPawnAction_CreateActionInstance_Params Parms;

	Parms.WorldContextObject = WorldContextObject;
	Parms.ActionClass = ActionClass;

	StaticClass()->ProcessEvent(FN, &Parms);
}

UClass* UPawnAction_Move::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/AIModule.PawnAction_Move");

	return Class;
}

UClass* UEnvQueryContext::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/AIModule.EnvQueryContext");

	return Class;
}

UClass* UEnvQueryNode::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/AIModule.EnvQueryNode");

	return Class;
}

UClass* UEnvQueryGenerator::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/AIModule.EnvQueryGenerator");

	return Class;
}

UClass* UEnvQueryGenerator_ProjectedPoints::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/AIModule.EnvQueryGenerator_ProjectedPoints");

	return Class;
}

UClass* UEnvQueryGenerator_OnCircle::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/AIModule.EnvQueryGenerator_OnCircle");

	return Class;
}

UClass* UEnvQueryItemType::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/AIModule.EnvQueryItemType");

	return Class;
}

UClass* UEnvQueryItemType_VectorBase::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/AIModule.EnvQueryItemType_VectorBase");

	return Class;
}

UClass* UEnvQueryItemType_ActorBase::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/AIModule.EnvQueryItemType_ActorBase");

	return Class;
}

UClass* UEnvQueryItemType_Point::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/AIModule.EnvQueryItemType_Point");

	return Class;
}

UClass* UEnvQueryTest::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/AIModule.EnvQueryTest");

	return Class;
}

UClass* UAIResourceInterface::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/AIModule.AIResourceInterface");

	return Class;
}

UClass* UAIAsyncTaskBlueprintProxy::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/AIModule.AIAsyncTaskBlueprintProxy");

	return Class;
}

// Function /Script/AIModule.AIAsyncTaskBlueprintProxy:OnMoveCompleted
void UAIAsyncTaskBlueprintProxy::OnMoveCompleted(FAIRequestID RequestID, EPathFollowingResult MovementResult)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/AIModule.AIAsyncTaskBlueprintProxy:OnMoveCompleted");

	FUAIAsyncTaskBlueprintProxy_OnMoveCompleted_Params Parms;

	Parms.RequestID = RequestID;
	Parms.MovementResult = MovementResult;

	ProcessEvent(FN, &Parms);
}

UClass* UAIBlueprintHelperLibrary::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/AIModule.AIBlueprintHelperLibrary");

	return Class;
}

// Function /Script/AIModule.AIBlueprintHelperLibrary:UnlockAIResourcesWithAnimation
void UAIBlueprintHelperLibrary::UnlockAIResourcesWithAnimation(class UAnimInstance* AnimInstance, bool bUnlockMovement, bool UnlockAILogic)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/AIModule.AIBlueprintHelperLibrary:UnlockAIResourcesWithAnimation");

	FUAIBlueprintHelperLibrary_UnlockAIResourcesWithAnimation_Params Parms;

	Parms.AnimInstance = AnimInstance;
	Parms.bUnlockMovement = bUnlockMovement;
	Parms.UnlockAILogic = UnlockAILogic;

	StaticClass()->ProcessEvent(FN, &Parms);
}

// Function /Script/AIModule.AIBlueprintHelperLibrary:SpawnAIFromClass
class APawn* UAIBlueprintHelperLibrary::SpawnAIFromClass(class UObject* WorldContextObject, class UClass* PawnClass, class UBehaviorTree* BehaviorTree, FVector Location, FRotator Rotation, bool bNoCollisionFail)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/AIModule.AIBlueprintHelperLibrary:SpawnAIFromClass");

	FUAIBlueprintHelperLibrary_SpawnAIFromClass_Params Parms;

	Parms.WorldContextObject = WorldContextObject;
	Parms.PawnClass = PawnClass;
	Parms.BehaviorTree = BehaviorTree;
	Parms.Location = Location;
	Parms.Rotation = Rotation;
	Parms.bNoCollisionFail = bNoCollisionFail;

	StaticClass()->ProcessEvent(FN, &Parms);
}

// Function /Script/AIModule.AIBlueprintHelperLibrary:SendAIMessage
void UAIBlueprintHelperLibrary::SendAIMessage(class APawn* Target, FName Message, class UObject* MessageSource, bool bSuccess)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/AIModule.AIBlueprintHelperLibrary:SendAIMessage");

	FUAIBlueprintHelperLibrary_SendAIMessage_Params Parms;

	Parms.Target = Target;
	Parms.Message = Message;
	Parms.MessageSource = MessageSource;
	Parms.bSuccess = bSuccess;

	StaticClass()->ProcessEvent(FN, &Parms);
}

// Function /Script/AIModule.AIBlueprintHelperLibrary:LockAIResourcesWithAnimation
void UAIBlueprintHelperLibrary::LockAIResourcesWithAnimation(class UAnimInstance* AnimInstance, bool bLockMovement, bool LockAILogic)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/AIModule.AIBlueprintHelperLibrary:LockAIResourcesWithAnimation");

	FUAIBlueprintHelperLibrary_LockAIResourcesWithAnimation_Params Parms;

	Parms.AnimInstance = AnimInstance;
	Parms.bLockMovement = bLockMovement;
	Parms.LockAILogic = LockAILogic;

	StaticClass()->ProcessEvent(FN, &Parms);
}

// Function /Script/AIModule.AIBlueprintHelperLibrary:IsValidAIRotation
bool UAIBlueprintHelperLibrary::IsValidAIRotation(FRotator Rotation)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/AIModule.AIBlueprintHelperLibrary:IsValidAIRotation");

	FUAIBlueprintHelperLibrary_IsValidAIRotation_Params Parms;

	Parms.Rotation = Rotation;

	StaticClass()->ProcessEvent(FN, &Parms);
}

// Function /Script/AIModule.AIBlueprintHelperLibrary:IsValidAILocation
bool UAIBlueprintHelperLibrary::IsValidAILocation(FVector Location)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/AIModule.AIBlueprintHelperLibrary:IsValidAILocation");

	FUAIBlueprintHelperLibrary_IsValidAILocation_Params Parms;

	Parms.Location = Location;

	StaticClass()->ProcessEvent(FN, &Parms);
}

// Function /Script/AIModule.AIBlueprintHelperLibrary:IsValidAIDirection
bool UAIBlueprintHelperLibrary::IsValidAIDirection(FVector DirectionVector)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/AIModule.AIBlueprintHelperLibrary:IsValidAIDirection");

	FUAIBlueprintHelperLibrary_IsValidAIDirection_Params Parms;

	Parms.DirectionVector = DirectionVector;

	StaticClass()->ProcessEvent(FN, &Parms);
}

// Function /Script/AIModule.AIBlueprintHelperLibrary:GetBlackboard
class UBlackboardComponent* UAIBlueprintHelperLibrary::GetBlackboard(class AActor* Target)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/AIModule.AIBlueprintHelperLibrary:GetBlackboard");

	FUAIBlueprintHelperLibrary_GetBlackboard_Params Parms;

	Parms.Target = Target;

	StaticClass()->ProcessEvent(FN, &Parms);
}

// Function /Script/AIModule.AIBlueprintHelperLibrary:GetAIController
class AAIController* UAIBlueprintHelperLibrary::GetAIController(class AActor* ControlledActor)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/AIModule.AIBlueprintHelperLibrary:GetAIController");

	FUAIBlueprintHelperLibrary_GetAIController_Params Parms;

	Parms.ControlledActor = ControlledActor;

	StaticClass()->ProcessEvent(FN, &Parms);
}

// Function /Script/AIModule.AIBlueprintHelperLibrary:CreateMoveToProxyObject
class UAIAsyncTaskBlueprintProxy* UAIBlueprintHelperLibrary::CreateMoveToProxyObject(class UObject* WorldContextObject, class APawn* Pawn, FVector Destination, class AActor* TargetActor, float AcceptanceRadius, bool bStopOnOverlap)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/AIModule.AIBlueprintHelperLibrary:CreateMoveToProxyObject");

	FUAIBlueprintHelperLibrary_CreateMoveToProxyObject_Params Parms;

	Parms.WorldContextObject = WorldContextObject;
	Parms.Pawn = Pawn;
	Parms.Destination = Destination;
	Parms.TargetActor = TargetActor;
	Parms.AcceptanceRadius = AcceptanceRadius;
	Parms.bStopOnOverlap = bStopOnOverlap;

	StaticClass()->ProcessEvent(FN, &Parms);
}

UClass* UPawnActionsComponent::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/AIModule.PawnActionsComponent");

	return Class;
}

// Function /Script/AIModule.PawnActionsComponent:K2_PushAction
bool UPawnActionsComponent::K2_PushAction(class UPawnAction* NewAction, EAIRequestPriority Priority, class UObject* Instigator)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/AIModule.PawnActionsComponent:K2_PushAction");

	FUPawnActionsComponent_K2_PushAction_Params Parms;

	Parms.NewAction = NewAction;
	Parms.Priority = Priority;
	Parms.Instigator = Instigator;

	ProcessEvent(FN, &Parms);
}

// Function /Script/AIModule.PawnActionsComponent:K2_PerformAction
bool UPawnActionsComponent::K2_PerformAction(class APawn* Pawn, class UPawnAction* Action, EAIRequestPriority Priority)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/AIModule.PawnActionsComponent:K2_PerformAction");

	FUPawnActionsComponent_K2_PerformAction_Params Parms;

	Parms.Pawn = Pawn;
	Parms.Action = Action;
	Parms.Priority = Priority;

	StaticClass()->ProcessEvent(FN, &Parms);
}

// Function /Script/AIModule.PawnActionsComponent:K2_ForceAbortAction
EPawnActionAbortState UPawnActionsComponent::K2_ForceAbortAction(class UPawnAction* ActionToAbort)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/AIModule.PawnActionsComponent:K2_ForceAbortAction");

	FUPawnActionsComponent_K2_ForceAbortAction_Params Parms;

	Parms.ActionToAbort = ActionToAbort;

	ProcessEvent(FN, &Parms);
}

// Function /Script/AIModule.PawnActionsComponent:K2_AbortAction
EPawnActionAbortState UPawnActionsComponent::K2_AbortAction(class UPawnAction* ActionToAbort)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/AIModule.PawnActionsComponent:K2_AbortAction");

	FUPawnActionsComponent_K2_AbortAction_Params Parms;

	Parms.ActionToAbort = ActionToAbort;

	ProcessEvent(FN, &Parms);
}

UClass* UAIPerceptionListenerInterface::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/AIModule.AIPerceptionListenerInterface");

	return Class;
}

UClass* UBehaviorTreeTypes::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/AIModule.BehaviorTreeTypes");

	return Class;
}

UClass* ADetourCrowdAIController::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/AIModule.DetourCrowdAIController");

	return Class;
}

UClass* UAIDataProvider_QueryParams::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/AIModule.AIDataProvider_QueryParams");

	return Class;
}

UClass* UAIModuleBasicGameplayDebuggerObject::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/AIModule.AIModuleBasicGameplayDebuggerObject");

	return Class;
}

UClass* UAIPerceptionStimuliSourceComponent::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/AIModule.AIPerceptionStimuliSourceComponent");

	return Class;
}

// Function /Script/AIModule.AIPerceptionStimuliSourceComponent:UnregisterFromSense
void UAIPerceptionStimuliSourceComponent::UnregisterFromSense(class UClass* SenseClass)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/AIModule.AIPerceptionStimuliSourceComponent:UnregisterFromSense");

	FUAIPerceptionStimuliSourceComponent_UnregisterFromSense_Params Parms;

	Parms.SenseClass = SenseClass;

	ProcessEvent(FN, &Parms);
}

// Function /Script/AIModule.AIPerceptionStimuliSourceComponent:UnregisterFromPerceptionSystem
void UAIPerceptionStimuliSourceComponent::UnregisterFromPerceptionSystem()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/AIModule.AIPerceptionStimuliSourceComponent:UnregisterFromPerceptionSystem");

	ProcessEvent(FN, nullptr);
}

// Function /Script/AIModule.AIPerceptionStimuliSourceComponent:RegisterWithPerceptionSystem
void UAIPerceptionStimuliSourceComponent::RegisterWithPerceptionSystem()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/AIModule.AIPerceptionStimuliSourceComponent:RegisterWithPerceptionSystem");

	ProcessEvent(FN, nullptr);
}

// Function /Script/AIModule.AIPerceptionStimuliSourceComponent:RegisterForSense
void UAIPerceptionStimuliSourceComponent::RegisterForSense(class UClass* SenseClass)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/AIModule.AIPerceptionStimuliSourceComponent:RegisterForSense");

	FUAIPerceptionStimuliSourceComponent_RegisterForSense_Params Parms;

	Parms.SenseClass = SenseClass;

	ProcessEvent(FN, &Parms);
}

UClass* UAIResource_Movement::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/AIModule.AIResource_Movement");

	return Class;
}

UClass* UAIResource_Logic::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/AIModule.AIResource_Logic");

	return Class;
}

UClass* UAISense_Blueprint::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/AIModule.AISense_Blueprint");

	return Class;
}

// Function /Script/AIModule.AISense_Blueprint:OnUpdate
float UAISense_Blueprint::OnUpdate(TArray<class UAISenseEvent*> EventsToProcess)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/AIModule.AISense_Blueprint:OnUpdate");

	FUAISense_Blueprint_OnUpdate_Params Parms;

	Parms.EventsToProcess = EventsToProcess;

	ProcessEvent(FN, &Parms);
}

// Function /Script/AIModule.AISense_Blueprint:OnListenerUpdated
void UAISense_Blueprint::OnListenerUpdated(class AActor* ActorListener, class UAIPerceptionComponent* PerceptionComponent)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/AIModule.AISense_Blueprint:OnListenerUpdated");

	FUAISense_Blueprint_OnListenerUpdated_Params Parms;

	Parms.ActorListener = ActorListener;
	Parms.PerceptionComponent = PerceptionComponent;

	ProcessEvent(FN, &Parms);
}

// Function /Script/AIModule.AISense_Blueprint:OnListenerUnregistered
void UAISense_Blueprint::OnListenerUnregistered(class AActor* ActorListener, class UAIPerceptionComponent* PerceptionComponent)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/AIModule.AISense_Blueprint:OnListenerUnregistered");

	FUAISense_Blueprint_OnListenerUnregistered_Params Parms;

	Parms.ActorListener = ActorListener;
	Parms.PerceptionComponent = PerceptionComponent;

	ProcessEvent(FN, &Parms);
}

// Function /Script/AIModule.AISense_Blueprint:OnListenerRegistered
void UAISense_Blueprint::OnListenerRegistered(class AActor* ActorListener, class UAIPerceptionComponent* PerceptionComponent)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/AIModule.AISense_Blueprint:OnListenerRegistered");

	FUAISense_Blueprint_OnListenerRegistered_Params Parms;

	Parms.ActorListener = ActorListener;
	Parms.PerceptionComponent = PerceptionComponent;

	ProcessEvent(FN, &Parms);
}

// Function /Script/AIModule.AISense_Blueprint:K2_OnNewPawn
void UAISense_Blueprint::K2_OnNewPawn(class APawn* NewPawn)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/AIModule.AISense_Blueprint:K2_OnNewPawn");

	FUAISense_Blueprint_K2_OnNewPawn_Params Parms;

	Parms.NewPawn = NewPawn;

	ProcessEvent(FN, &Parms);
}

// Function /Script/AIModule.AISense_Blueprint:GetAllListenerComponents
void UAISense_Blueprint::GetAllListenerComponents(TArray<class UAIPerceptionComponent*> ListenerComponents) const
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/AIModule.AISense_Blueprint:GetAllListenerComponents");

	FUAISense_Blueprint_GetAllListenerComponents_Params Parms;

	Parms.ListenerComponents = ListenerComponents;

	ProcessEvent(FN, &Parms);
}

// Function /Script/AIModule.AISense_Blueprint:GetAllListenerActors
void UAISense_Blueprint::GetAllListenerActors(TArray<class AActor*> ListenerActors) const
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/AIModule.AISense_Blueprint:GetAllListenerActors");

	FUAISense_Blueprint_GetAllListenerActors_Params Parms;

	Parms.ListenerActors = ListenerActors;

	ProcessEvent(FN, &Parms);
}

UClass* UAISenseBlueprintListener::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/AIModule.AISenseBlueprintListener");

	return Class;
}

UClass* UAISenseConfig::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/AIModule.AISenseConfig");

	return Class;
}

UClass* UAISenseConfig_Blueprint::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/AIModule.AISenseConfig_Blueprint");

	return Class;
}

UClass* UAISenseConfig_Damage::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/AIModule.AISenseConfig_Damage");

	return Class;
}

UClass* UAISenseConfig_Hearing::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/AIModule.AISenseConfig_Hearing");

	return Class;
}

UClass* UAISenseConfig_Prediction::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/AIModule.AISenseConfig_Prediction");

	return Class;
}

UClass* UAISenseConfig_Sight::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/AIModule.AISenseConfig_Sight");

	return Class;
}

UClass* UAISenseConfig_Team::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/AIModule.AISenseConfig_Team");

	return Class;
}

UClass* UAISenseConfig_Touch::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/AIModule.AISenseConfig_Touch");

	return Class;
}

UClass* UAISenseEvent::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/AIModule.AISenseEvent");

	return Class;
}

UClass* UAISenseEvent_Damage::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/AIModule.AISenseEvent_Damage");

	return Class;
}

UClass* UAISenseEvent_Hearing::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/AIModule.AISenseEvent_Hearing");

	return Class;
}

UClass* UAISightTargetInterface::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/AIModule.AISightTargetInterface");

	return Class;
}

UClass* UAITask::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/AIModule.AITask");

	return Class;
}

UClass* UAITask_MoveTo::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/AIModule.AITask_MoveTo");

	return Class;
}

// Function /Script/AIModule.AITask_MoveTo:AIMoveTo
class UAITask_MoveTo* UAITask_MoveTo::AIMoveTo(class AAIController* Controller, FVector GoalLocation, class AActor* GoalActor, float AcceptanceRadius, EAIOptionFlag StopOnOverlap, EAIOptionFlag AcceptPartialPath, bool bUsePathfinding, bool bLockAILogic)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/AIModule.AITask_MoveTo:AIMoveTo");

	FUAITask_MoveTo_AIMoveTo_Params Parms;

	Parms.Controller = Controller;
	Parms.GoalLocation = GoalLocation;
	Parms.GoalActor = GoalActor;
	Parms.AcceptanceRadius = AcceptanceRadius;
	Parms.StopOnOverlap = StopOnOverlap;
	Parms.AcceptPartialPath = AcceptPartialPath;
	Parms.bUsePathfinding = bUsePathfinding;
	Parms.bLockAILogic = bLockAILogic;

	StaticClass()->ProcessEvent(FN, &Parms);
}

UClass* UBTCompositeNode::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/AIModule.BTCompositeNode");

	return Class;
}

UClass* UBehaviorTree::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/AIModule.BehaviorTree");

	return Class;
}

UClass* UBehaviorTreeManager::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/AIModule.BehaviorTreeManager");

	return Class;
}

UClass* UBlackboardKeyType::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/AIModule.BlackboardKeyType");

	return Class;
}

UClass* UBlackboardKeyType_Enum::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/AIModule.BlackboardKeyType_Enum");

	return Class;
}

UClass* UBlackboardKeyType_NativeEnum::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/AIModule.BlackboardKeyType_NativeEnum");

	return Class;
}

UClass* UBlackboardData::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/AIModule.BlackboardData");

	return Class;
}

UClass* UBlackboardComponent::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/AIModule.BlackboardComponent");

	return Class;
}

// Function /Script/AIModule.BlackboardComponent:SetValueAsVector
void UBlackboardComponent::SetValueAsVector(FName KeyName, FVector VectorValue)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/AIModule.BlackboardComponent:SetValueAsVector");

	FUBlackboardComponent_SetValueAsVector_Params Parms;

	Parms.KeyName = KeyName;
	Parms.VectorValue = VectorValue;

	ProcessEvent(FN, &Parms);
}

// Function /Script/AIModule.BlackboardComponent:SetValueAsString
void UBlackboardComponent::SetValueAsString(FName KeyName, FString StringValue)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/AIModule.BlackboardComponent:SetValueAsString");

	FUBlackboardComponent_SetValueAsString_Params Parms;

	Parms.KeyName = KeyName;
	Parms.StringValue = StringValue;

	ProcessEvent(FN, &Parms);
}

// Function /Script/AIModule.BlackboardComponent:SetValueAsRotator
void UBlackboardComponent::SetValueAsRotator(FName KeyName, FRotator VectorValue)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/AIModule.BlackboardComponent:SetValueAsRotator");

	FUBlackboardComponent_SetValueAsRotator_Params Parms;

	Parms.KeyName = KeyName;
	Parms.VectorValue = VectorValue;

	ProcessEvent(FN, &Parms);
}

// Function /Script/AIModule.BlackboardComponent:SetValueAsObject
void UBlackboardComponent::SetValueAsObject(FName KeyName, class UObject* ObjectValue)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/AIModule.BlackboardComponent:SetValueAsObject");

	FUBlackboardComponent_SetValueAsObject_Params Parms;

	Parms.KeyName = KeyName;
	Parms.ObjectValue = ObjectValue;

	ProcessEvent(FN, &Parms);
}

// Function /Script/AIModule.BlackboardComponent:SetValueAsName
void UBlackboardComponent::SetValueAsName(FName KeyName, FName NameValue)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/AIModule.BlackboardComponent:SetValueAsName");

	FUBlackboardComponent_SetValueAsName_Params Parms;

	Parms.KeyName = KeyName;
	Parms.NameValue = NameValue;

	ProcessEvent(FN, &Parms);
}

// Function /Script/AIModule.BlackboardComponent:SetValueAsInt
void UBlackboardComponent::SetValueAsInt(FName KeyName, int32_t IntValue)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/AIModule.BlackboardComponent:SetValueAsInt");

	FUBlackboardComponent_SetValueAsInt_Params Parms;

	Parms.KeyName = KeyName;
	Parms.IntValue = IntValue;

	ProcessEvent(FN, &Parms);
}

// Function /Script/AIModule.BlackboardComponent:SetValueAsFloat
void UBlackboardComponent::SetValueAsFloat(FName KeyName, float FloatValue)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/AIModule.BlackboardComponent:SetValueAsFloat");

	FUBlackboardComponent_SetValueAsFloat_Params Parms;

	Parms.KeyName = KeyName;
	Parms.FloatValue = FloatValue;

	ProcessEvent(FN, &Parms);
}

// Function /Script/AIModule.BlackboardComponent:SetValueAsEnum
void UBlackboardComponent::SetValueAsEnum(FName KeyName, uint8_t EnumValue)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/AIModule.BlackboardComponent:SetValueAsEnum");

	FUBlackboardComponent_SetValueAsEnum_Params Parms;

	Parms.KeyName = KeyName;
	Parms.EnumValue = EnumValue;

	ProcessEvent(FN, &Parms);
}

// Function /Script/AIModule.BlackboardComponent:SetValueAsClass
void UBlackboardComponent::SetValueAsClass(FName KeyName, class UClass* ClassValue)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/AIModule.BlackboardComponent:SetValueAsClass");

	FUBlackboardComponent_SetValueAsClass_Params Parms;

	Parms.KeyName = KeyName;
	Parms.ClassValue = ClassValue;

	ProcessEvent(FN, &Parms);
}

// Function /Script/AIModule.BlackboardComponent:SetValueAsBool
void UBlackboardComponent::SetValueAsBool(FName KeyName, bool BoolValue)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/AIModule.BlackboardComponent:SetValueAsBool");

	FUBlackboardComponent_SetValueAsBool_Params Parms;

	Parms.KeyName = KeyName;
	Parms.BoolValue = BoolValue;

	ProcessEvent(FN, &Parms);
}

// Function /Script/AIModule.BlackboardComponent:IsVectorValueSet
bool UBlackboardComponent::IsVectorValueSet(FName KeyName) const
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/AIModule.BlackboardComponent:IsVectorValueSet");

	FUBlackboardComponent_IsVectorValueSet_Params Parms;

	Parms.KeyName = KeyName;

	ProcessEvent(FN, &Parms);
}

// Function /Script/AIModule.BlackboardComponent:GetValueAsVector
FVector UBlackboardComponent::GetValueAsVector(FName KeyName) const
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/AIModule.BlackboardComponent:GetValueAsVector");

	FUBlackboardComponent_GetValueAsVector_Params Parms;

	Parms.KeyName = KeyName;

	ProcessEvent(FN, &Parms);
}

// Function /Script/AIModule.BlackboardComponent:GetValueAsString
FString UBlackboardComponent::GetValueAsString(FName KeyName) const
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/AIModule.BlackboardComponent:GetValueAsString");

	FUBlackboardComponent_GetValueAsString_Params Parms;

	Parms.KeyName = KeyName;

	ProcessEvent(FN, &Parms);
}

// Function /Script/AIModule.BlackboardComponent:GetValueAsRotator
FRotator UBlackboardComponent::GetValueAsRotator(FName KeyName) const
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/AIModule.BlackboardComponent:GetValueAsRotator");

	FUBlackboardComponent_GetValueAsRotator_Params Parms;

	Parms.KeyName = KeyName;

	ProcessEvent(FN, &Parms);
}

// Function /Script/AIModule.BlackboardComponent:GetValueAsObject
class UObject* UBlackboardComponent::GetValueAsObject(FName KeyName) const
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/AIModule.BlackboardComponent:GetValueAsObject");

	FUBlackboardComponent_GetValueAsObject_Params Parms;

	Parms.KeyName = KeyName;

	ProcessEvent(FN, &Parms);
}

// Function /Script/AIModule.BlackboardComponent:GetValueAsName
FName UBlackboardComponent::GetValueAsName(FName KeyName) const
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/AIModule.BlackboardComponent:GetValueAsName");

	FUBlackboardComponent_GetValueAsName_Params Parms;

	Parms.KeyName = KeyName;

	ProcessEvent(FN, &Parms);
}

// Function /Script/AIModule.BlackboardComponent:GetValueAsInt
int32_t UBlackboardComponent::GetValueAsInt(FName KeyName) const
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/AIModule.BlackboardComponent:GetValueAsInt");

	FUBlackboardComponent_GetValueAsInt_Params Parms;

	Parms.KeyName = KeyName;

	ProcessEvent(FN, &Parms);
}

// Function /Script/AIModule.BlackboardComponent:GetValueAsFloat
float UBlackboardComponent::GetValueAsFloat(FName KeyName) const
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/AIModule.BlackboardComponent:GetValueAsFloat");

	FUBlackboardComponent_GetValueAsFloat_Params Parms;

	Parms.KeyName = KeyName;

	ProcessEvent(FN, &Parms);
}

// Function /Script/AIModule.BlackboardComponent:GetValueAsEnum
uint8_t UBlackboardComponent::GetValueAsEnum(FName KeyName) const
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/AIModule.BlackboardComponent:GetValueAsEnum");

	FUBlackboardComponent_GetValueAsEnum_Params Parms;

	Parms.KeyName = KeyName;

	ProcessEvent(FN, &Parms);
}

// Function /Script/AIModule.BlackboardComponent:GetValueAsClass
class UClass* UBlackboardComponent::GetValueAsClass(FName KeyName) const
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/AIModule.BlackboardComponent:GetValueAsClass");

	FUBlackboardComponent_GetValueAsClass_Params Parms;

	Parms.KeyName = KeyName;

	ProcessEvent(FN, &Parms);
}

// Function /Script/AIModule.BlackboardComponent:GetValueAsBool
bool UBlackboardComponent::GetValueAsBool(FName KeyName) const
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/AIModule.BlackboardComponent:GetValueAsBool");

	FUBlackboardComponent_GetValueAsBool_Params Parms;

	Parms.KeyName = KeyName;

	ProcessEvent(FN, &Parms);
}

// Function /Script/AIModule.BlackboardComponent:GetRotationFromEntry
bool UBlackboardComponent::GetRotationFromEntry(FName KeyName, FRotator ResultRotation) const
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/AIModule.BlackboardComponent:GetRotationFromEntry");

	FUBlackboardComponent_GetRotationFromEntry_Params Parms;

	Parms.KeyName = KeyName;
	Parms.ResultRotation = ResultRotation;

	ProcessEvent(FN, &Parms);
}

// Function /Script/AIModule.BlackboardComponent:GetLocationFromEntry
bool UBlackboardComponent::GetLocationFromEntry(FName KeyName, FVector ResultLocation) const
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/AIModule.BlackboardComponent:GetLocationFromEntry");

	FUBlackboardComponent_GetLocationFromEntry_Params Parms;

	Parms.KeyName = KeyName;
	Parms.ResultLocation = ResultLocation;

	ProcessEvent(FN, &Parms);
}

// Function /Script/AIModule.BlackboardComponent:ClearValue
void UBlackboardComponent::ClearValue(FName KeyName)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/AIModule.BlackboardComponent:ClearValue");

	FUBlackboardComponent_ClearValue_Params Parms;

	Parms.KeyName = KeyName;

	ProcessEvent(FN, &Parms);
}

UClass* UBlackboardKeyType_Bool::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/AIModule.BlackboardKeyType_Bool");

	return Class;
}

UClass* UBlackboardKeyType_Class::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/AIModule.BlackboardKeyType_Class");

	return Class;
}

UClass* UBlackboardKeyType_Float::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/AIModule.BlackboardKeyType_Float");

	return Class;
}

UClass* UBlackboardKeyType_Int::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/AIModule.BlackboardKeyType_Int");

	return Class;
}

UClass* UBlackboardKeyType_Name::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/AIModule.BlackboardKeyType_Name");

	return Class;
}

UClass* UBlackboardKeyType_Object::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/AIModule.BlackboardKeyType_Object");

	return Class;
}

UClass* UBlackboardKeyType_Rotator::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/AIModule.BlackboardKeyType_Rotator");

	return Class;
}

UClass* UBlackboardKeyType_String::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/AIModule.BlackboardKeyType_String");

	return Class;
}

UClass* UBlackboardKeyType_Vector::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/AIModule.BlackboardKeyType_Vector");

	return Class;
}

UClass* UBTFunctionLibrary::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/AIModule.BTFunctionLibrary");

	return Class;
}

// Function /Script/AIModule.BTFunctionLibrary:StopUsingExternalEvent
void UBTFunctionLibrary::StopUsingExternalEvent(class UBTNode* NodeOwner)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/AIModule.BTFunctionLibrary:StopUsingExternalEvent");

	FUBTFunctionLibrary_StopUsingExternalEvent_Params Parms;

	Parms.NodeOwner = NodeOwner;

	StaticClass()->ProcessEvent(FN, &Parms);
}

// Function /Script/AIModule.BTFunctionLibrary:StartUsingExternalEvent
void UBTFunctionLibrary::StartUsingExternalEvent(class UBTNode* NodeOwner, class AActor* OwningActor)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/AIModule.BTFunctionLibrary:StartUsingExternalEvent");

	FUBTFunctionLibrary_StartUsingExternalEvent_Params Parms;

	Parms.NodeOwner = NodeOwner;
	Parms.OwningActor = OwningActor;

	StaticClass()->ProcessEvent(FN, &Parms);
}

// Function /Script/AIModule.BTFunctionLibrary:SetBlackboardValueAsVector
void UBTFunctionLibrary::SetBlackboardValueAsVector(class UBTNode* NodeOwner, FBlackboardKeySelector Key, FVector Value)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/AIModule.BTFunctionLibrary:SetBlackboardValueAsVector");

	FUBTFunctionLibrary_SetBlackboardValueAsVector_Params Parms;

	Parms.NodeOwner = NodeOwner;
	Parms.Key = Key;
	Parms.Value = Value;

	StaticClass()->ProcessEvent(FN, &Parms);
}

// Function /Script/AIModule.BTFunctionLibrary:SetBlackboardValueAsString
void UBTFunctionLibrary::SetBlackboardValueAsString(class UBTNode* NodeOwner, FBlackboardKeySelector Key, FString Value)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/AIModule.BTFunctionLibrary:SetBlackboardValueAsString");

	FUBTFunctionLibrary_SetBlackboardValueAsString_Params Parms;

	Parms.NodeOwner = NodeOwner;
	Parms.Key = Key;
	Parms.Value = Value;

	StaticClass()->ProcessEvent(FN, &Parms);
}

// Function /Script/AIModule.BTFunctionLibrary:SetBlackboardValueAsRotator
void UBTFunctionLibrary::SetBlackboardValueAsRotator(class UBTNode* NodeOwner, FBlackboardKeySelector Key, FRotator Value)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/AIModule.BTFunctionLibrary:SetBlackboardValueAsRotator");

	FUBTFunctionLibrary_SetBlackboardValueAsRotator_Params Parms;

	Parms.NodeOwner = NodeOwner;
	Parms.Key = Key;
	Parms.Value = Value;

	StaticClass()->ProcessEvent(FN, &Parms);
}

// Function /Script/AIModule.BTFunctionLibrary:SetBlackboardValueAsObject
void UBTFunctionLibrary::SetBlackboardValueAsObject(class UBTNode* NodeOwner, FBlackboardKeySelector Key, class UObject* Value)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/AIModule.BTFunctionLibrary:SetBlackboardValueAsObject");

	FUBTFunctionLibrary_SetBlackboardValueAsObject_Params Parms;

	Parms.NodeOwner = NodeOwner;
	Parms.Key = Key;
	Parms.Value = Value;

	StaticClass()->ProcessEvent(FN, &Parms);
}

// Function /Script/AIModule.BTFunctionLibrary:SetBlackboardValueAsName
void UBTFunctionLibrary::SetBlackboardValueAsName(class UBTNode* NodeOwner, FBlackboardKeySelector Key, FName Value)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/AIModule.BTFunctionLibrary:SetBlackboardValueAsName");

	FUBTFunctionLibrary_SetBlackboardValueAsName_Params Parms;

	Parms.NodeOwner = NodeOwner;
	Parms.Key = Key;
	Parms.Value = Value;

	StaticClass()->ProcessEvent(FN, &Parms);
}

// Function /Script/AIModule.BTFunctionLibrary:SetBlackboardValueAsInt
void UBTFunctionLibrary::SetBlackboardValueAsInt(class UBTNode* NodeOwner, FBlackboardKeySelector Key, int32_t Value)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/AIModule.BTFunctionLibrary:SetBlackboardValueAsInt");

	FUBTFunctionLibrary_SetBlackboardValueAsInt_Params Parms;

	Parms.NodeOwner = NodeOwner;
	Parms.Key = Key;
	Parms.Value = Value;

	StaticClass()->ProcessEvent(FN, &Parms);
}

// Function /Script/AIModule.BTFunctionLibrary:SetBlackboardValueAsFloat
void UBTFunctionLibrary::SetBlackboardValueAsFloat(class UBTNode* NodeOwner, FBlackboardKeySelector Key, float Value)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/AIModule.BTFunctionLibrary:SetBlackboardValueAsFloat");

	FUBTFunctionLibrary_SetBlackboardValueAsFloat_Params Parms;

	Parms.NodeOwner = NodeOwner;
	Parms.Key = Key;
	Parms.Value = Value;

	StaticClass()->ProcessEvent(FN, &Parms);
}

// Function /Script/AIModule.BTFunctionLibrary:SetBlackboardValueAsEnum
void UBTFunctionLibrary::SetBlackboardValueAsEnum(class UBTNode* NodeOwner, FBlackboardKeySelector Key, uint8_t Value)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/AIModule.BTFunctionLibrary:SetBlackboardValueAsEnum");

	FUBTFunctionLibrary_SetBlackboardValueAsEnum_Params Parms;

	Parms.NodeOwner = NodeOwner;
	Parms.Key = Key;
	Parms.Value = Value;

	StaticClass()->ProcessEvent(FN, &Parms);
}

// Function /Script/AIModule.BTFunctionLibrary:SetBlackboardValueAsClass
void UBTFunctionLibrary::SetBlackboardValueAsClass(class UBTNode* NodeOwner, FBlackboardKeySelector Key, class UClass* Value)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/AIModule.BTFunctionLibrary:SetBlackboardValueAsClass");

	FUBTFunctionLibrary_SetBlackboardValueAsClass_Params Parms;

	Parms.NodeOwner = NodeOwner;
	Parms.Key = Key;
	Parms.Value = Value;

	StaticClass()->ProcessEvent(FN, &Parms);
}

// Function /Script/AIModule.BTFunctionLibrary:SetBlackboardValueAsBool
void UBTFunctionLibrary::SetBlackboardValueAsBool(class UBTNode* NodeOwner, FBlackboardKeySelector Key, bool Value)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/AIModule.BTFunctionLibrary:SetBlackboardValueAsBool");

	FUBTFunctionLibrary_SetBlackboardValueAsBool_Params Parms;

	Parms.NodeOwner = NodeOwner;
	Parms.Key = Key;
	Parms.Value = Value;

	StaticClass()->ProcessEvent(FN, &Parms);
}

// Function /Script/AIModule.BTFunctionLibrary:GetOwnersBlackboard
class UBlackboardComponent* UBTFunctionLibrary::GetOwnersBlackboard(class UBTNode* NodeOwner)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/AIModule.BTFunctionLibrary:GetOwnersBlackboard");

	FUBTFunctionLibrary_GetOwnersBlackboard_Params Parms;

	Parms.NodeOwner = NodeOwner;

	StaticClass()->ProcessEvent(FN, &Parms);
}

// Function /Script/AIModule.BTFunctionLibrary:GetOwnerComponent
class UBehaviorTreeComponent* UBTFunctionLibrary::GetOwnerComponent(class UBTNode* NodeOwner)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/AIModule.BTFunctionLibrary:GetOwnerComponent");

	FUBTFunctionLibrary_GetOwnerComponent_Params Parms;

	Parms.NodeOwner = NodeOwner;

	StaticClass()->ProcessEvent(FN, &Parms);
}

// Function /Script/AIModule.BTFunctionLibrary:GetBlackboardValueAsVector
FVector UBTFunctionLibrary::GetBlackboardValueAsVector(class UBTNode* NodeOwner, FBlackboardKeySelector Key)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/AIModule.BTFunctionLibrary:GetBlackboardValueAsVector");

	FUBTFunctionLibrary_GetBlackboardValueAsVector_Params Parms;

	Parms.NodeOwner = NodeOwner;
	Parms.Key = Key;

	StaticClass()->ProcessEvent(FN, &Parms);
}

// Function /Script/AIModule.BTFunctionLibrary:GetBlackboardValueAsString
FString UBTFunctionLibrary::GetBlackboardValueAsString(class UBTNode* NodeOwner, FBlackboardKeySelector Key)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/AIModule.BTFunctionLibrary:GetBlackboardValueAsString");

	FUBTFunctionLibrary_GetBlackboardValueAsString_Params Parms;

	Parms.NodeOwner = NodeOwner;
	Parms.Key = Key;

	StaticClass()->ProcessEvent(FN, &Parms);
}

// Function /Script/AIModule.BTFunctionLibrary:GetBlackboardValueAsRotator
FRotator UBTFunctionLibrary::GetBlackboardValueAsRotator(class UBTNode* NodeOwner, FBlackboardKeySelector Key)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/AIModule.BTFunctionLibrary:GetBlackboardValueAsRotator");

	FUBTFunctionLibrary_GetBlackboardValueAsRotator_Params Parms;

	Parms.NodeOwner = NodeOwner;
	Parms.Key = Key;

	StaticClass()->ProcessEvent(FN, &Parms);
}

// Function /Script/AIModule.BTFunctionLibrary:GetBlackboardValueAsObject
class UObject* UBTFunctionLibrary::GetBlackboardValueAsObject(class UBTNode* NodeOwner, FBlackboardKeySelector Key)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/AIModule.BTFunctionLibrary:GetBlackboardValueAsObject");

	FUBTFunctionLibrary_GetBlackboardValueAsObject_Params Parms;

	Parms.NodeOwner = NodeOwner;
	Parms.Key = Key;

	StaticClass()->ProcessEvent(FN, &Parms);
}

// Function /Script/AIModule.BTFunctionLibrary:GetBlackboardValueAsName
FName UBTFunctionLibrary::GetBlackboardValueAsName(class UBTNode* NodeOwner, FBlackboardKeySelector Key)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/AIModule.BTFunctionLibrary:GetBlackboardValueAsName");

	FUBTFunctionLibrary_GetBlackboardValueAsName_Params Parms;

	Parms.NodeOwner = NodeOwner;
	Parms.Key = Key;

	StaticClass()->ProcessEvent(FN, &Parms);
}

// Function /Script/AIModule.BTFunctionLibrary:GetBlackboardValueAsInt
int32_t UBTFunctionLibrary::GetBlackboardValueAsInt(class UBTNode* NodeOwner, FBlackboardKeySelector Key)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/AIModule.BTFunctionLibrary:GetBlackboardValueAsInt");

	FUBTFunctionLibrary_GetBlackboardValueAsInt_Params Parms;

	Parms.NodeOwner = NodeOwner;
	Parms.Key = Key;

	StaticClass()->ProcessEvent(FN, &Parms);
}

// Function /Script/AIModule.BTFunctionLibrary:GetBlackboardValueAsFloat
float UBTFunctionLibrary::GetBlackboardValueAsFloat(class UBTNode* NodeOwner, FBlackboardKeySelector Key)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/AIModule.BTFunctionLibrary:GetBlackboardValueAsFloat");

	FUBTFunctionLibrary_GetBlackboardValueAsFloat_Params Parms;

	Parms.NodeOwner = NodeOwner;
	Parms.Key = Key;

	StaticClass()->ProcessEvent(FN, &Parms);
}

// Function /Script/AIModule.BTFunctionLibrary:GetBlackboardValueAsEnum
uint8_t UBTFunctionLibrary::GetBlackboardValueAsEnum(class UBTNode* NodeOwner, FBlackboardKeySelector Key)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/AIModule.BTFunctionLibrary:GetBlackboardValueAsEnum");

	FUBTFunctionLibrary_GetBlackboardValueAsEnum_Params Parms;

	Parms.NodeOwner = NodeOwner;
	Parms.Key = Key;

	StaticClass()->ProcessEvent(FN, &Parms);
}

// Function /Script/AIModule.BTFunctionLibrary:GetBlackboardValueAsClass
class UClass* UBTFunctionLibrary::GetBlackboardValueAsClass(class UBTNode* NodeOwner, FBlackboardKeySelector Key)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/AIModule.BTFunctionLibrary:GetBlackboardValueAsClass");

	FUBTFunctionLibrary_GetBlackboardValueAsClass_Params Parms;

	Parms.NodeOwner = NodeOwner;
	Parms.Key = Key;

	StaticClass()->ProcessEvent(FN, &Parms);
}

// Function /Script/AIModule.BTFunctionLibrary:GetBlackboardValueAsBool
bool UBTFunctionLibrary::GetBlackboardValueAsBool(class UBTNode* NodeOwner, FBlackboardKeySelector Key)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/AIModule.BTFunctionLibrary:GetBlackboardValueAsBool");

	FUBTFunctionLibrary_GetBlackboardValueAsBool_Params Parms;

	Parms.NodeOwner = NodeOwner;
	Parms.Key = Key;

	StaticClass()->ProcessEvent(FN, &Parms);
}

// Function /Script/AIModule.BTFunctionLibrary:GetBlackboardValueAsActor
class AActor* UBTFunctionLibrary::GetBlackboardValueAsActor(class UBTNode* NodeOwner, FBlackboardKeySelector Key)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/AIModule.BTFunctionLibrary:GetBlackboardValueAsActor");

	FUBTFunctionLibrary_GetBlackboardValueAsActor_Params Parms;

	Parms.NodeOwner = NodeOwner;
	Parms.Key = Key;

	StaticClass()->ProcessEvent(FN, &Parms);
}

// Function /Script/AIModule.BTFunctionLibrary:ClearBlackboardValueAsVector
void UBTFunctionLibrary::ClearBlackboardValueAsVector(class UBTNode* NodeOwner, FBlackboardKeySelector Key)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/AIModule.BTFunctionLibrary:ClearBlackboardValueAsVector");

	FUBTFunctionLibrary_ClearBlackboardValueAsVector_Params Parms;

	Parms.NodeOwner = NodeOwner;
	Parms.Key = Key;

	StaticClass()->ProcessEvent(FN, &Parms);
}

// Function /Script/AIModule.BTFunctionLibrary:ClearBlackboardValue
void UBTFunctionLibrary::ClearBlackboardValue(class UBTNode* NodeOwner, FBlackboardKeySelector Key)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/AIModule.BTFunctionLibrary:ClearBlackboardValue");

	FUBTFunctionLibrary_ClearBlackboardValue_Params Parms;

	Parms.NodeOwner = NodeOwner;
	Parms.Key = Key;

	StaticClass()->ProcessEvent(FN, &Parms);
}

UClass* UBTGameplayDebuggerObject::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/AIModule.BTGameplayDebuggerObject");

	return Class;
}

UClass* UBTDecorator_BlackboardBase::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/AIModule.BTDecorator_BlackboardBase");

	return Class;
}

UClass* UBTDecorator_Blackboard::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/AIModule.BTDecorator_Blackboard");

	return Class;
}

UClass* UBTDecorator_ConditionalLoop::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/AIModule.BTDecorator_ConditionalLoop");

	return Class;
}

UClass* UBTDecorator_IsAtLocation::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/AIModule.BTDecorator_IsAtLocation");

	return Class;
}

UClass* UBTDecorator_IsBBEntryOfClass::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/AIModule.BTDecorator_IsBBEntryOfClass");

	return Class;
}

UClass* UBTDecorator_BlueprintBase::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/AIModule.BTDecorator_BlueprintBase");

	return Class;
}

// Function /Script/AIModule.BTDecorator_BlueprintBase:ReceiveTickAI
void UBTDecorator_BlueprintBase::ReceiveTickAI(class AAIController* OwnerController, class APawn* ControlledPawn, float DeltaSeconds)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/AIModule.BTDecorator_BlueprintBase:ReceiveTickAI");

	FUBTDecorator_BlueprintBase_ReceiveTickAI_Params Parms;

	Parms.OwnerController = OwnerController;
	Parms.ControlledPawn = ControlledPawn;
	Parms.DeltaSeconds = DeltaSeconds;

	ProcessEvent(FN, &Parms);
}

// Function /Script/AIModule.BTDecorator_BlueprintBase:ReceiveTick
void UBTDecorator_BlueprintBase::ReceiveTick(class AActor* OwnerActor, float DeltaSeconds)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/AIModule.BTDecorator_BlueprintBase:ReceiveTick");

	FUBTDecorator_BlueprintBase_ReceiveTick_Params Parms;

	Parms.OwnerActor = OwnerActor;
	Parms.DeltaSeconds = DeltaSeconds;

	ProcessEvent(FN, &Parms);
}

// Function /Script/AIModule.BTDecorator_BlueprintBase:ReceiveObserverDeactivatedAI
void UBTDecorator_BlueprintBase::ReceiveObserverDeactivatedAI(class AAIController* OwnerController, class APawn* ControlledPawn)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/AIModule.BTDecorator_BlueprintBase:ReceiveObserverDeactivatedAI");

	FUBTDecorator_BlueprintBase_ReceiveObserverDeactivatedAI_Params Parms;

	Parms.OwnerController = OwnerController;
	Parms.ControlledPawn = ControlledPawn;

	ProcessEvent(FN, &Parms);
}

// Function /Script/AIModule.BTDecorator_BlueprintBase:ReceiveObserverDeactivated
void UBTDecorator_BlueprintBase::ReceiveObserverDeactivated(class AActor* OwnerActor)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/AIModule.BTDecorator_BlueprintBase:ReceiveObserverDeactivated");

	FUBTDecorator_BlueprintBase_ReceiveObserverDeactivated_Params Parms;

	Parms.OwnerActor = OwnerActor;

	ProcessEvent(FN, &Parms);
}

// Function /Script/AIModule.BTDecorator_BlueprintBase:ReceiveObserverActivatedAI
void UBTDecorator_BlueprintBase::ReceiveObserverActivatedAI(class AAIController* OwnerController, class APawn* ControlledPawn)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/AIModule.BTDecorator_BlueprintBase:ReceiveObserverActivatedAI");

	FUBTDecorator_BlueprintBase_ReceiveObserverActivatedAI_Params Parms;

	Parms.OwnerController = OwnerController;
	Parms.ControlledPawn = ControlledPawn;

	ProcessEvent(FN, &Parms);
}

// Function /Script/AIModule.BTDecorator_BlueprintBase:ReceiveObserverActivated
void UBTDecorator_BlueprintBase::ReceiveObserverActivated(class AActor* OwnerActor)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/AIModule.BTDecorator_BlueprintBase:ReceiveObserverActivated");

	FUBTDecorator_BlueprintBase_ReceiveObserverActivated_Params Parms;

	Parms.OwnerActor = OwnerActor;

	ProcessEvent(FN, &Parms);
}

// Function /Script/AIModule.BTDecorator_BlueprintBase:ReceiveExecutionStartAI
void UBTDecorator_BlueprintBase::ReceiveExecutionStartAI(class AAIController* OwnerController, class APawn* ControlledPawn)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/AIModule.BTDecorator_BlueprintBase:ReceiveExecutionStartAI");

	FUBTDecorator_BlueprintBase_ReceiveExecutionStartAI_Params Parms;

	Parms.OwnerController = OwnerController;
	Parms.ControlledPawn = ControlledPawn;

	ProcessEvent(FN, &Parms);
}

// Function /Script/AIModule.BTDecorator_BlueprintBase:ReceiveExecutionStart
void UBTDecorator_BlueprintBase::ReceiveExecutionStart(class AActor* OwnerActor)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/AIModule.BTDecorator_BlueprintBase:ReceiveExecutionStart");

	FUBTDecorator_BlueprintBase_ReceiveExecutionStart_Params Parms;

	Parms.OwnerActor = OwnerActor;

	ProcessEvent(FN, &Parms);
}

// Function /Script/AIModule.BTDecorator_BlueprintBase:ReceiveExecutionFinishAI
void UBTDecorator_BlueprintBase::ReceiveExecutionFinishAI(class AAIController* OwnerController, class APawn* ControlledPawn, EBTNodeResult NodeResult)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/AIModule.BTDecorator_BlueprintBase:ReceiveExecutionFinishAI");

	FUBTDecorator_BlueprintBase_ReceiveExecutionFinishAI_Params Parms;

	Parms.OwnerController = OwnerController;
	Parms.ControlledPawn = ControlledPawn;
	Parms.NodeResult = NodeResult;

	ProcessEvent(FN, &Parms);
}

// Function /Script/AIModule.BTDecorator_BlueprintBase:ReceiveExecutionFinish
void UBTDecorator_BlueprintBase::ReceiveExecutionFinish(class AActor* OwnerActor, EBTNodeResult NodeResult)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/AIModule.BTDecorator_BlueprintBase:ReceiveExecutionFinish");

	FUBTDecorator_BlueprintBase_ReceiveExecutionFinish_Params Parms;

	Parms.OwnerActor = OwnerActor;
	Parms.NodeResult = NodeResult;

	ProcessEvent(FN, &Parms);
}

// Function /Script/AIModule.BTDecorator_BlueprintBase:ReceiveConditionCheck
void UBTDecorator_BlueprintBase::ReceiveConditionCheck(class AActor* OwnerActor)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/AIModule.BTDecorator_BlueprintBase:ReceiveConditionCheck");

	FUBTDecorator_BlueprintBase_ReceiveConditionCheck_Params Parms;

	Parms.OwnerActor = OwnerActor;

	ProcessEvent(FN, &Parms);
}

// Function /Script/AIModule.BTDecorator_BlueprintBase:PerformConditionCheckAI
bool UBTDecorator_BlueprintBase::PerformConditionCheckAI(class AAIController* OwnerController, class APawn* ControlledPawn)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/AIModule.BTDecorator_BlueprintBase:PerformConditionCheckAI");

	FUBTDecorator_BlueprintBase_PerformConditionCheckAI_Params Parms;

	Parms.OwnerController = OwnerController;
	Parms.ControlledPawn = ControlledPawn;

	ProcessEvent(FN, &Parms);
}

// Function /Script/AIModule.BTDecorator_BlueprintBase:PerformConditionCheck
bool UBTDecorator_BlueprintBase::PerformConditionCheck(class AActor* OwnerActor)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/AIModule.BTDecorator_BlueprintBase:PerformConditionCheck");

	FUBTDecorator_BlueprintBase_PerformConditionCheck_Params Parms;

	Parms.OwnerActor = OwnerActor;

	ProcessEvent(FN, &Parms);
}

// Function /Script/AIModule.BTDecorator_BlueprintBase:IsDecoratorObserverActive
bool UBTDecorator_BlueprintBase::IsDecoratorObserverActive() const
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/AIModule.BTDecorator_BlueprintBase:IsDecoratorObserverActive");

	FUBTDecorator_BlueprintBase_IsDecoratorObserverActive_Params Parms;


	ProcessEvent(FN, &Parms);
}

// Function /Script/AIModule.BTDecorator_BlueprintBase:IsDecoratorExecutionActive
bool UBTDecorator_BlueprintBase::IsDecoratorExecutionActive() const
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/AIModule.BTDecorator_BlueprintBase:IsDecoratorExecutionActive");

	FUBTDecorator_BlueprintBase_IsDecoratorExecutionActive_Params Parms;


	ProcessEvent(FN, &Parms);
}

// Function /Script/AIModule.BTDecorator_BlueprintBase:FinishConditionCheck
void UBTDecorator_BlueprintBase::FinishConditionCheck(bool bAllowExecution)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/AIModule.BTDecorator_BlueprintBase:FinishConditionCheck");

	FUBTDecorator_BlueprintBase_FinishConditionCheck_Params Parms;

	Parms.bAllowExecution = bAllowExecution;

	ProcessEvent(FN, &Parms);
}

UClass* UBTDecorator_CheckGameplayTagsOnActor::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/AIModule.BTDecorator_CheckGameplayTagsOnActor");

	return Class;
}

UClass* UBTDecorator_CompareBBEntries::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/AIModule.BTDecorator_CompareBBEntries");

	return Class;
}

UClass* UBTDecorator_ConeCheck::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/AIModule.BTDecorator_ConeCheck");

	return Class;
}

UClass* UBTDecorator_Cooldown::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/AIModule.BTDecorator_Cooldown");

	return Class;
}

UClass* UBTDecorator_DoesPathExist::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/AIModule.BTDecorator_DoesPathExist");

	return Class;
}

UClass* UBTDecorator_ForceSuccess::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/AIModule.BTDecorator_ForceSuccess");

	return Class;
}

UClass* UBTDecorator_KeepInCone::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/AIModule.BTDecorator_KeepInCone");

	return Class;
}

UClass* UBTDecorator_Loop::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/AIModule.BTDecorator_Loop");

	return Class;
}

UClass* UBTDecorator_ReachedMoveGoal::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/AIModule.BTDecorator_ReachedMoveGoal");

	return Class;
}

UClass* UBTDecorator_SetTagCooldown::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/AIModule.BTDecorator_SetTagCooldown");

	return Class;
}

UClass* UBTDecorator_TagCooldown::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/AIModule.BTDecorator_TagCooldown");

	return Class;
}

UClass* UBTDecorator_TimeLimit::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/AIModule.BTDecorator_TimeLimit");

	return Class;
}

UClass* UBTService_BlackboardBase::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/AIModule.BTService_BlackboardBase");

	return Class;
}

UClass* UBTService_DefaultFocus::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/AIModule.BTService_DefaultFocus");

	return Class;
}

UClass* UEnvQueryTypes::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/AIModule.EnvQueryTypes");

	return Class;
}

UClass* UBTService_RunEQS::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/AIModule.BTService_RunEQS");

	return Class;
}

UClass* UBTService_BlueprintBase::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/AIModule.BTService_BlueprintBase");

	return Class;
}

// Function /Script/AIModule.BTService_BlueprintBase:ReceiveTickAI
void UBTService_BlueprintBase::ReceiveTickAI(class AAIController* OwnerController, class APawn* ControlledPawn, float DeltaSeconds)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/AIModule.BTService_BlueprintBase:ReceiveTickAI");

	FUBTService_BlueprintBase_ReceiveTickAI_Params Parms;

	Parms.OwnerController = OwnerController;
	Parms.ControlledPawn = ControlledPawn;
	Parms.DeltaSeconds = DeltaSeconds;

	ProcessEvent(FN, &Parms);
}

// Function /Script/AIModule.BTService_BlueprintBase:ReceiveTick
void UBTService_BlueprintBase::ReceiveTick(class AActor* OwnerActor, float DeltaSeconds)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/AIModule.BTService_BlueprintBase:ReceiveTick");

	FUBTService_BlueprintBase_ReceiveTick_Params Parms;

	Parms.OwnerActor = OwnerActor;
	Parms.DeltaSeconds = DeltaSeconds;

	ProcessEvent(FN, &Parms);
}

// Function /Script/AIModule.BTService_BlueprintBase:ReceiveSearchStartAI
void UBTService_BlueprintBase::ReceiveSearchStartAI(class AAIController* OwnerController, class APawn* ControlledPawn)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/AIModule.BTService_BlueprintBase:ReceiveSearchStartAI");

	FUBTService_BlueprintBase_ReceiveSearchStartAI_Params Parms;

	Parms.OwnerController = OwnerController;
	Parms.ControlledPawn = ControlledPawn;

	ProcessEvent(FN, &Parms);
}

// Function /Script/AIModule.BTService_BlueprintBase:ReceiveSearchStart
void UBTService_BlueprintBase::ReceiveSearchStart(class AActor* OwnerActor)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/AIModule.BTService_BlueprintBase:ReceiveSearchStart");

	FUBTService_BlueprintBase_ReceiveSearchStart_Params Parms;

	Parms.OwnerActor = OwnerActor;

	ProcessEvent(FN, &Parms);
}

// Function /Script/AIModule.BTService_BlueprintBase:ReceiveDeactivationAI
void UBTService_BlueprintBase::ReceiveDeactivationAI(class AAIController* OwnerController, class APawn* ControlledPawn)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/AIModule.BTService_BlueprintBase:ReceiveDeactivationAI");

	FUBTService_BlueprintBase_ReceiveDeactivationAI_Params Parms;

	Parms.OwnerController = OwnerController;
	Parms.ControlledPawn = ControlledPawn;

	ProcessEvent(FN, &Parms);
}

// Function /Script/AIModule.BTService_BlueprintBase:ReceiveDeactivation
void UBTService_BlueprintBase::ReceiveDeactivation(class AActor* OwnerActor)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/AIModule.BTService_BlueprintBase:ReceiveDeactivation");

	FUBTService_BlueprintBase_ReceiveDeactivation_Params Parms;

	Parms.OwnerActor = OwnerActor;

	ProcessEvent(FN, &Parms);
}

// Function /Script/AIModule.BTService_BlueprintBase:ReceiveActivationAI
void UBTService_BlueprintBase::ReceiveActivationAI(class AAIController* OwnerController, class APawn* ControlledPawn)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/AIModule.BTService_BlueprintBase:ReceiveActivationAI");

	FUBTService_BlueprintBase_ReceiveActivationAI_Params Parms;

	Parms.OwnerController = OwnerController;
	Parms.ControlledPawn = ControlledPawn;

	ProcessEvent(FN, &Parms);
}

// Function /Script/AIModule.BTService_BlueprintBase:ReceiveActivation
void UBTService_BlueprintBase::ReceiveActivation(class AActor* OwnerActor)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/AIModule.BTService_BlueprintBase:ReceiveActivation");

	FUBTService_BlueprintBase_ReceiveActivation_Params Parms;

	Parms.OwnerActor = OwnerActor;

	ProcessEvent(FN, &Parms);
}

// Function /Script/AIModule.BTService_BlueprintBase:IsServiceActive
bool UBTService_BlueprintBase::IsServiceActive() const
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/AIModule.BTService_BlueprintBase:IsServiceActive");

	FUBTService_BlueprintBase_IsServiceActive_Params Parms;


	ProcessEvent(FN, &Parms);
}

UClass* UBTComposite_Selector::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/AIModule.BTComposite_Selector");

	return Class;
}

UClass* UBTComposite_Sequence::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/AIModule.BTComposite_Sequence");

	return Class;
}

UClass* UBTComposite_SimpleParallel::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/AIModule.BTComposite_SimpleParallel");

	return Class;
}

UClass* UBTTask_RotateToFaceBBEntry::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/AIModule.BTTask_RotateToFaceBBEntry");

	return Class;
}

UClass* UBTTask_RunEQSQuery::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/AIModule.BTTask_RunEQSQuery");

	return Class;
}

UClass* UBTTask_BlueprintBase::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/AIModule.BTTask_BlueprintBase");

	return Class;
}

// Function /Script/AIModule.BTTask_BlueprintBase:SetFinishOnMessageWithId
void UBTTask_BlueprintBase::SetFinishOnMessageWithId(FName MessageName, int32_t RequestID)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/AIModule.BTTask_BlueprintBase:SetFinishOnMessageWithId");

	FUBTTask_BlueprintBase_SetFinishOnMessageWithId_Params Parms;

	Parms.MessageName = MessageName;
	Parms.RequestID = RequestID;

	ProcessEvent(FN, &Parms);
}

// Function /Script/AIModule.BTTask_BlueprintBase:SetFinishOnMessage
void UBTTask_BlueprintBase::SetFinishOnMessage(FName MessageName)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/AIModule.BTTask_BlueprintBase:SetFinishOnMessage");

	FUBTTask_BlueprintBase_SetFinishOnMessage_Params Parms;

	Parms.MessageName = MessageName;

	ProcessEvent(FN, &Parms);
}

// Function /Script/AIModule.BTTask_BlueprintBase:ReceiveTickAI
void UBTTask_BlueprintBase::ReceiveTickAI(class AAIController* OwnerController, class APawn* ControlledPawn, float DeltaSeconds)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/AIModule.BTTask_BlueprintBase:ReceiveTickAI");

	FUBTTask_BlueprintBase_ReceiveTickAI_Params Parms;

	Parms.OwnerController = OwnerController;
	Parms.ControlledPawn = ControlledPawn;
	Parms.DeltaSeconds = DeltaSeconds;

	ProcessEvent(FN, &Parms);
}

// Function /Script/AIModule.BTTask_BlueprintBase:ReceiveTick
void UBTTask_BlueprintBase::ReceiveTick(class AActor* OwnerActor, float DeltaSeconds)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/AIModule.BTTask_BlueprintBase:ReceiveTick");

	FUBTTask_BlueprintBase_ReceiveTick_Params Parms;

	Parms.OwnerActor = OwnerActor;
	Parms.DeltaSeconds = DeltaSeconds;

	ProcessEvent(FN, &Parms);
}

// Function /Script/AIModule.BTTask_BlueprintBase:ReceiveExecuteAI
void UBTTask_BlueprintBase::ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/AIModule.BTTask_BlueprintBase:ReceiveExecuteAI");

	FUBTTask_BlueprintBase_ReceiveExecuteAI_Params Parms;

	Parms.OwnerController = OwnerController;
	Parms.ControlledPawn = ControlledPawn;

	ProcessEvent(FN, &Parms);
}

// Function /Script/AIModule.BTTask_BlueprintBase:ReceiveExecute
void UBTTask_BlueprintBase::ReceiveExecute(class AActor* OwnerActor)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/AIModule.BTTask_BlueprintBase:ReceiveExecute");

	FUBTTask_BlueprintBase_ReceiveExecute_Params Parms;

	Parms.OwnerActor = OwnerActor;

	ProcessEvent(FN, &Parms);
}

// Function /Script/AIModule.BTTask_BlueprintBase:ReceiveAbortAI
void UBTTask_BlueprintBase::ReceiveAbortAI(class AAIController* OwnerController, class APawn* ControlledPawn)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/AIModule.BTTask_BlueprintBase:ReceiveAbortAI");

	FUBTTask_BlueprintBase_ReceiveAbortAI_Params Parms;

	Parms.OwnerController = OwnerController;
	Parms.ControlledPawn = ControlledPawn;

	ProcessEvent(FN, &Parms);
}

// Function /Script/AIModule.BTTask_BlueprintBase:ReceiveAbort
void UBTTask_BlueprintBase::ReceiveAbort(class AActor* OwnerActor)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/AIModule.BTTask_BlueprintBase:ReceiveAbort");

	FUBTTask_BlueprintBase_ReceiveAbort_Params Parms;

	Parms.OwnerActor = OwnerActor;

	ProcessEvent(FN, &Parms);
}

// Function /Script/AIModule.BTTask_BlueprintBase:IsTaskExecuting
bool UBTTask_BlueprintBase::IsTaskExecuting() const
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/AIModule.BTTask_BlueprintBase:IsTaskExecuting");

	FUBTTask_BlueprintBase_IsTaskExecuting_Params Parms;


	ProcessEvent(FN, &Parms);
}

// Function /Script/AIModule.BTTask_BlueprintBase:IsTaskAborting
bool UBTTask_BlueprintBase::IsTaskAborting() const
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/AIModule.BTTask_BlueprintBase:IsTaskAborting");

	FUBTTask_BlueprintBase_IsTaskAborting_Params Parms;


	ProcessEvent(FN, &Parms);
}

// Function /Script/AIModule.BTTask_BlueprintBase:FinishExecute
void UBTTask_BlueprintBase::FinishExecute(bool bSuccess)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/AIModule.BTTask_BlueprintBase:FinishExecute");

	FUBTTask_BlueprintBase_FinishExecute_Params Parms;

	Parms.bSuccess = bSuccess;

	ProcessEvent(FN, &Parms);
}

// Function /Script/AIModule.BTTask_BlueprintBase:FinishAbort
void UBTTask_BlueprintBase::FinishAbort()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/AIModule.BTTask_BlueprintBase:FinishAbort");

	ProcessEvent(FN, nullptr);
}

UClass* UBTTask_MakeNoise::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/AIModule.BTTask_MakeNoise");

	return Class;
}

UClass* UBTTask_PushPawnAction::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/AIModule.BTTask_PushPawnAction");

	return Class;
}

UClass* UBTTask_PlayAnimation::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/AIModule.BTTask_PlayAnimation");

	return Class;
}

UClass* UBTTask_PlaySound::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/AIModule.BTTask_PlaySound");

	return Class;
}

UClass* UBTTask_RunBehavior::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/AIModule.BTTask_RunBehavior");

	return Class;
}

UClass* UBTTask_RunBehaviorDynamic::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/AIModule.BTTask_RunBehaviorDynamic");

	return Class;
}

UClass* UBTTask_SetTagCooldown::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/AIModule.BTTask_SetTagCooldown");

	return Class;
}

UClass* UBTTask_Wait::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/AIModule.BTTask_Wait");

	return Class;
}

UClass* UBTTask_WaitBlackboardTime::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/AIModule.BTTask_WaitBlackboardTime");

	return Class;
}

UClass* UCrowdAgentInterface::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/AIModule.CrowdAgentInterface");

	return Class;
}

UClass* UEnvQuery::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/AIModule.EnvQuery");

	return Class;
}

UClass* UEnvQueryContext_BlueprintBase::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/AIModule.EnvQueryContext_BlueprintBase");

	return Class;
}

// Function /Script/AIModule.EnvQueryContext_BlueprintBase:ProvideSingleLocation
void UEnvQueryContext_BlueprintBase::ProvideSingleLocation(class UObject* QuerierObject, class AActor* QuerierActor, FVector ResultingLocation) const
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/AIModule.EnvQueryContext_BlueprintBase:ProvideSingleLocation");

	FUEnvQueryContext_BlueprintBase_ProvideSingleLocation_Params Parms;

	Parms.QuerierObject = QuerierObject;
	Parms.QuerierActor = QuerierActor;
	Parms.ResultingLocation = ResultingLocation;

	ProcessEvent(FN, &Parms);
}

// Function /Script/AIModule.EnvQueryContext_BlueprintBase:ProvideSingleActor
void UEnvQueryContext_BlueprintBase::ProvideSingleActor(class UObject* QuerierObject, class AActor* QuerierActor, class AActor* ResultingActor) const
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/AIModule.EnvQueryContext_BlueprintBase:ProvideSingleActor");

	FUEnvQueryContext_BlueprintBase_ProvideSingleActor_Params Parms;

	Parms.QuerierObject = QuerierObject;
	Parms.QuerierActor = QuerierActor;
	Parms.ResultingActor = ResultingActor;

	ProcessEvent(FN, &Parms);
}

// Function /Script/AIModule.EnvQueryContext_BlueprintBase:ProvideLocationsSet
void UEnvQueryContext_BlueprintBase::ProvideLocationsSet(class UObject* QuerierObject, class AActor* QuerierActor, TArray<FVector> ResultingLocationSet) const
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/AIModule.EnvQueryContext_BlueprintBase:ProvideLocationsSet");

	FUEnvQueryContext_BlueprintBase_ProvideLocationsSet_Params Parms;

	Parms.QuerierObject = QuerierObject;
	Parms.QuerierActor = QuerierActor;
	Parms.ResultingLocationSet = ResultingLocationSet;

	ProcessEvent(FN, &Parms);
}

// Function /Script/AIModule.EnvQueryContext_BlueprintBase:ProvideActorsSet
void UEnvQueryContext_BlueprintBase::ProvideActorsSet(class UObject* QuerierObject, class AActor* QuerierActor, TArray<class AActor*> ResultingActorsSet) const
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/AIModule.EnvQueryContext_BlueprintBase:ProvideActorsSet");

	FUEnvQueryContext_BlueprintBase_ProvideActorsSet_Params Parms;

	Parms.QuerierObject = QuerierObject;
	Parms.QuerierActor = QuerierActor;
	Parms.ResultingActorsSet = ResultingActorsSet;

	ProcessEvent(FN, &Parms);
}

UClass* UEnvQueryContext_Item::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/AIModule.EnvQueryContext_Item");

	return Class;
}

UClass* UEnvQueryContext_Querier::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/AIModule.EnvQueryContext_Querier");

	return Class;
}

UClass* UVisualLoggerExtension::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/AIModule.VisualLoggerExtension");

	return Class;
}

UClass* UEnvQueryDebugHelpers::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/AIModule.EnvQueryDebugHelpers");

	return Class;
}

UClass* UEQSQueryResultSourceInterface::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/AIModule.EQSQueryResultSourceInterface");

	return Class;
}

UClass* UEnvQueryInstanceBlueprintWrapper::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/AIModule.EnvQueryInstanceBlueprintWrapper");

	return Class;
}

// Function /Script/AIModule.EnvQueryInstanceBlueprintWrapper:GetResultsAsLocations
TArray<FVector> UEnvQueryInstanceBlueprintWrapper::GetResultsAsLocations()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/AIModule.EnvQueryInstanceBlueprintWrapper:GetResultsAsLocations");

	FUEnvQueryInstanceBlueprintWrapper_GetResultsAsLocations_Params Parms;


	ProcessEvent(FN, &Parms);
}

// Function /Script/AIModule.EnvQueryInstanceBlueprintWrapper:GetResultsAsActors
TArray<class AActor*> UEnvQueryInstanceBlueprintWrapper::GetResultsAsActors()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/AIModule.EnvQueryInstanceBlueprintWrapper:GetResultsAsActors");

	FUEnvQueryInstanceBlueprintWrapper_GetResultsAsActors_Params Parms;


	ProcessEvent(FN, &Parms);
}

// Function /Script/AIModule.EnvQueryInstanceBlueprintWrapper:GetItemScore
float UEnvQueryInstanceBlueprintWrapper::GetItemScore(int32_t ItemIndex)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/AIModule.EnvQueryInstanceBlueprintWrapper:GetItemScore");

	FUEnvQueryInstanceBlueprintWrapper_GetItemScore_Params Parms;

	Parms.ItemIndex = ItemIndex;

	ProcessEvent(FN, &Parms);
}

// DelegateFunction /Script/AIModule.EnvQueryInstanceBlueprintWrapper:EQSQueryDoneSignature__DelegateSignature
void UEnvQueryInstanceBlueprintWrapper::EQSQueryDoneSignature__DelegateSignature(class UEnvQueryInstanceBlueprintWrapper* QueryInstance, EEnvQueryStatus QueryStatus)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/AIModule.EnvQueryInstanceBlueprintWrapper:EQSQueryDoneSignature__DelegateSignature");

	FUEnvQueryInstanceBlueprintWrapper_EQSQueryDoneSignature__DelegateSignature_Params Parms;

	Parms.QueryInstance = QueryInstance;
	Parms.QueryStatus = QueryStatus;

	ProcessEvent(FN, &Parms);
}

UClass* UEnvQueryItemType_Actor::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/AIModule.EnvQueryItemType_Actor");

	return Class;
}

UClass* UEnvQueryItemType_Direction::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/AIModule.EnvQueryItemType_Direction");

	return Class;
}

UClass* UEnvQueryManager::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/AIModule.EnvQueryManager");

	return Class;
}

// Function /Script/AIModule.EnvQueryManager:RunEQSQuery
class UEnvQueryInstanceBlueprintWrapper* UEnvQueryManager::RunEQSQuery(class UObject* WorldContext, class UEnvQuery* QueryTemplate, class UObject* Querier, EEnvQueryRunMode RunMode, class UClass* WrapperClass)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/AIModule.EnvQueryManager:RunEQSQuery");

	FUEnvQueryManager_RunEQSQuery_Params Parms;

	Parms.WorldContext = WorldContext;
	Parms.QueryTemplate = QueryTemplate;
	Parms.Querier = Querier;
	Parms.RunMode = RunMode;
	Parms.WrapperClass = WrapperClass;

	StaticClass()->ProcessEvent(FN, &Parms);
}

UClass* UEnvQueryGenerator_ActorsOfClass::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/AIModule.EnvQueryGenerator_ActorsOfClass");

	return Class;
}

UClass* UEnvQueryGenerator_BlueprintBase::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/AIModule.EnvQueryGenerator_BlueprintBase");

	return Class;
}

// Function /Script/AIModule.EnvQueryGenerator_BlueprintBase:GetQuerier
class UObject* UEnvQueryGenerator_BlueprintBase::GetQuerier() const
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/AIModule.EnvQueryGenerator_BlueprintBase:GetQuerier");

	FUEnvQueryGenerator_BlueprintBase_GetQuerier_Params Parms;


	ProcessEvent(FN, &Parms);
}

// Function /Script/AIModule.EnvQueryGenerator_BlueprintBase:DoItemGeneration
void UEnvQueryGenerator_BlueprintBase::DoItemGeneration(TArray<FVector> ContextLocations) const
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/AIModule.EnvQueryGenerator_BlueprintBase:DoItemGeneration");

	FUEnvQueryGenerator_BlueprintBase_DoItemGeneration_Params Parms;

	Parms.ContextLocations = ContextLocations;

	ProcessEvent(FN, &Parms);
}

// Function /Script/AIModule.EnvQueryGenerator_BlueprintBase:AddGeneratedVector
void UEnvQueryGenerator_BlueprintBase::AddGeneratedVector(FVector GeneratedVector) const
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/AIModule.EnvQueryGenerator_BlueprintBase:AddGeneratedVector");

	FUEnvQueryGenerator_BlueprintBase_AddGeneratedVector_Params Parms;

	Parms.GeneratedVector = GeneratedVector;

	ProcessEvent(FN, &Parms);
}

// Function /Script/AIModule.EnvQueryGenerator_BlueprintBase:AddGeneratedActor
void UEnvQueryGenerator_BlueprintBase::AddGeneratedActor(class AActor* GeneratedActor) const
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/AIModule.EnvQueryGenerator_BlueprintBase:AddGeneratedActor");

	FUEnvQueryGenerator_BlueprintBase_AddGeneratedActor_Params Parms;

	Parms.GeneratedActor = GeneratedActor;

	ProcessEvent(FN, &Parms);
}

UClass* UEnvQueryGenerator_Composite::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/AIModule.EnvQueryGenerator_Composite");

	return Class;
}

UClass* UEnvQueryGenerator_CurrentLocation::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/AIModule.EnvQueryGenerator_CurrentLocation");

	return Class;
}

UClass* UEnvQueryGenerator_Donut::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/AIModule.EnvQueryGenerator_Donut");

	return Class;
}

UClass* UEnvQueryGenerator_SimpleGrid::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/AIModule.EnvQueryGenerator_SimpleGrid");

	return Class;
}

UClass* UEnvQueryGenerator_PathingGrid::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/AIModule.EnvQueryGenerator_PathingGrid");

	return Class;
}

UClass* UEnvQueryTest_Distance::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/AIModule.EnvQueryTest_Distance");

	return Class;
}

UClass* UEnvQueryTest_Dot::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/AIModule.EnvQueryTest_Dot");

	return Class;
}

UClass* UEnvQueryTest_GameplayTags::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/AIModule.EnvQueryTest_GameplayTags");

	return Class;
}

UClass* UEnvQueryTest_Overlap::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/AIModule.EnvQueryTest_Overlap");

	return Class;
}

UClass* UEnvQueryTest_Pathfinding::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/AIModule.EnvQueryTest_Pathfinding");

	return Class;
}

UClass* UEnvQueryTest_PathfindingBatch::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/AIModule.EnvQueryTest_PathfindingBatch");

	return Class;
}

UClass* UEnvQueryTest_Project::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/AIModule.EnvQueryTest_Project");

	return Class;
}

UClass* UEnvQueryTest_Random::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/AIModule.EnvQueryTest_Random");

	return Class;
}

UClass* UEnvQueryTest_Trace::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/AIModule.EnvQueryTest_Trace");

	return Class;
}

UClass* UEnvQueryOption::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/AIModule.EnvQueryOption");

	return Class;
}

UClass* UEQSGameplayDebuggerObject::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/AIModule.EQSGameplayDebuggerObject");

	return Class;
}

// Function /Script/AIModule.EQSGameplayDebuggerObject:OnCycleDetailsView
void UEQSGameplayDebuggerObject::OnCycleDetailsView()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/AIModule.EQSGameplayDebuggerObject:OnCycleDetailsView");

	ProcessEvent(FN, nullptr);
}

UClass* UEQSRenderingComponent::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/AIModule.EQSRenderingComponent");

	return Class;
}

UClass* AEQSTestingPawn::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/AIModule.EQSTestingPawn");

	return Class;
}

UClass* UNavMeshGameplayDebuggerObject::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/AIModule.NavMeshGameplayDebuggerObject");

	return Class;
}

// Function /Script/AIModule.NavMeshGameplayDebuggerObject:ServerDiscardNavmeshData
void UNavMeshGameplayDebuggerObject::ServerDiscardNavmeshData()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/AIModule.NavMeshGameplayDebuggerObject:ServerDiscardNavmeshData");

	ProcessEvent(FN, nullptr);
}

UClass* UPawnAction_BlueprintBase::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/AIModule.PawnAction_BlueprintBase");

	return Class;
}

// Function /Script/AIModule.PawnAction_BlueprintBase:ActionTick
void UPawnAction_BlueprintBase::ActionTick(class APawn* ControlledPawn, float DeltaSeconds)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/AIModule.PawnAction_BlueprintBase:ActionTick");

	FUPawnAction_BlueprintBase_ActionTick_Params Parms;

	Parms.ControlledPawn = ControlledPawn;
	Parms.DeltaSeconds = DeltaSeconds;

	ProcessEvent(FN, &Parms);
}

// Function /Script/AIModule.PawnAction_BlueprintBase:ActionStart
void UPawnAction_BlueprintBase::ActionStart(class APawn* ControlledPawn)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/AIModule.PawnAction_BlueprintBase:ActionStart");

	FUPawnAction_BlueprintBase_ActionStart_Params Parms;

	Parms.ControlledPawn = ControlledPawn;

	ProcessEvent(FN, &Parms);
}

// Function /Script/AIModule.PawnAction_BlueprintBase:ActionResume
void UPawnAction_BlueprintBase::ActionResume(class APawn* ControlledPawn)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/AIModule.PawnAction_BlueprintBase:ActionResume");

	FUPawnAction_BlueprintBase_ActionResume_Params Parms;

	Parms.ControlledPawn = ControlledPawn;

	ProcessEvent(FN, &Parms);
}

// Function /Script/AIModule.PawnAction_BlueprintBase:ActionPause
void UPawnAction_BlueprintBase::ActionPause(class APawn* ControlledPawn)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/AIModule.PawnAction_BlueprintBase:ActionPause");

	FUPawnAction_BlueprintBase_ActionPause_Params Parms;

	Parms.ControlledPawn = ControlledPawn;

	ProcessEvent(FN, &Parms);
}

// Function /Script/AIModule.PawnAction_BlueprintBase:ActionFinished
void UPawnAction_BlueprintBase::ActionFinished(class APawn* ControlledPawn, EPawnActionResult WithResult)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/AIModule.PawnAction_BlueprintBase:ActionFinished");

	FUPawnAction_BlueprintBase_ActionFinished_Params Parms;

	Parms.ControlledPawn = ControlledPawn;
	Parms.WithResult = WithResult;

	ProcessEvent(FN, &Parms);
}

UClass* UPawnAction_Repeat::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/AIModule.PawnAction_Repeat");

	return Class;
}

UClass* UPawnAction_Sequence::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/AIModule.PawnAction_Sequence");

	return Class;
}

UClass* UPawnAction_Wait::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/AIModule.PawnAction_Wait");

	return Class;
}

UClass* UPawnSensingComponent::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/AIModule.PawnSensingComponent");

	return Class;
}

// Function /Script/AIModule.PawnSensingComponent:SetSensingUpdatesEnabled
void UPawnSensingComponent::SetSensingUpdatesEnabled(bool bEnabled)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/AIModule.PawnSensingComponent:SetSensingUpdatesEnabled");

	FUPawnSensingComponent_SetSensingUpdatesEnabled_Params Parms;

	Parms.bEnabled = bEnabled;

	ProcessEvent(FN, &Parms);
}

// Function /Script/AIModule.PawnSensingComponent:SetSensingInterval
void UPawnSensingComponent::SetSensingInterval(float NewSensingInterval)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/AIModule.PawnSensingComponent:SetSensingInterval");

	FUPawnSensingComponent_SetSensingInterval_Params Parms;

	Parms.NewSensingInterval = NewSensingInterval;

	ProcessEvent(FN, &Parms);
}

// Function /Script/AIModule.PawnSensingComponent:SetPeripheralVisionAngle
void UPawnSensingComponent::SetPeripheralVisionAngle(float NewPeripheralVisionAngle)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/AIModule.PawnSensingComponent:SetPeripheralVisionAngle");

	FUPawnSensingComponent_SetPeripheralVisionAngle_Params Parms;

	Parms.NewPeripheralVisionAngle = NewPeripheralVisionAngle;

	ProcessEvent(FN, &Parms);
}

// DelegateFunction /Script/AIModule.PawnSensingComponent:SeePawnDelegate__DelegateSignature
void UPawnSensingComponent::SeePawnDelegate__DelegateSignature(class APawn* Pawn)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/AIModule.PawnSensingComponent:SeePawnDelegate__DelegateSignature");

	FUPawnSensingComponent_SeePawnDelegate__DelegateSignature_Params Parms;

	Parms.Pawn = Pawn;

	ProcessEvent(FN, &Parms);
}

// DelegateFunction /Script/AIModule.PawnSensingComponent:HearNoiseDelegate__DelegateSignature
void UPawnSensingComponent::HearNoiseDelegate__DelegateSignature(class APawn* Instigator, FVector Location, float Volume)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/AIModule.PawnSensingComponent:HearNoiseDelegate__DelegateSignature");

	FUPawnSensingComponent_HearNoiseDelegate__DelegateSignature_Params Parms;

	Parms.Instigator = Instigator;
	Parms.Location = Location;
	Parms.Volume = Volume;

	ProcessEvent(FN, &Parms);
}

// Function /Script/AIModule.PawnSensingComponent:GetPeripheralVisionCosine
float UPawnSensingComponent::GetPeripheralVisionCosine() const
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/AIModule.PawnSensingComponent:GetPeripheralVisionCosine");

	FUPawnSensingComponent_GetPeripheralVisionCosine_Params Parms;


	ProcessEvent(FN, &Parms);
}

// Function /Script/AIModule.PawnSensingComponent:GetPeripheralVisionAngle
float UPawnSensingComponent::GetPeripheralVisionAngle() const
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/AIModule.PawnSensingComponent:GetPeripheralVisionAngle");

	FUPawnSensingComponent_GetPeripheralVisionAngle_Params Parms;


	ProcessEvent(FN, &Parms);
}

UClass* UPerceptionGameplayDebuggerObject::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/AIModule.PerceptionGameplayDebuggerObject");

	return Class;
}

UScriptStruct* FAIRequestID::StaticStruct()
{
	static UScriptStruct* Struct = nullptr;
	if (!Struct)
		Struct = UObject::StaticFindObject<UScriptStruct>("/Script/AIModule.AIRequestID");

	return Struct;
}

UScriptStruct* FAIStimulus::StaticStruct()
{
	static UScriptStruct* Struct = nullptr;
	if (!Struct)
		Struct = UObject::StaticFindObject<UScriptStruct>("/Script/AIModule.AIStimulus");

	return Struct;
}

UScriptStruct* FEnvNamedValue::StaticStruct()
{
	static UScriptStruct* Struct = nullptr;
	if (!Struct)
		Struct = UObject::StaticFindObject<UScriptStruct>("/Script/AIModule.EnvNamedValue");

	return Struct;
}

UScriptStruct* FAIDataProviderFloatValue::StaticStruct()
{
	static UScriptStruct* Struct = nullptr;
	if (!Struct)
		Struct = UObject::StaticFindObject<UScriptStruct>("/Script/AIModule.AIDataProviderFloatValue");

	return Struct;
}

UScriptStruct* FAIDataProviderTypedValue::StaticStruct()
{
	static UScriptStruct* Struct = nullptr;
	if (!Struct)
		Struct = UObject::StaticFindObject<UScriptStruct>("/Script/AIModule.AIDataProviderTypedValue");

	return Struct;
}

UScriptStruct* FAIDataProviderValue::StaticStruct()
{
	static UScriptStruct* Struct = nullptr;
	if (!Struct)
		Struct = UObject::StaticFindObject<UScriptStruct>("/Script/AIModule.AIDataProviderValue");

	return Struct;
}

UScriptStruct* FAIMoveRequest::StaticStruct()
{
	static UScriptStruct* Struct = nullptr;
	if (!Struct)
		Struct = UObject::StaticFindObject<UScriptStruct>("/Script/AIModule.AIMoveRequest");

	return Struct;
}

UScriptStruct* FPawnActionStack::StaticStruct()
{
	static UScriptStruct* Struct = nullptr;
	if (!Struct)
		Struct = UObject::StaticFindObject<UScriptStruct>("/Script/AIModule.PawnActionStack");

	return Struct;
}

UScriptStruct* FPawnActionEvent::StaticStruct()
{
	static UScriptStruct* Struct = nullptr;
	if (!Struct)
		Struct = UObject::StaticFindObject<UScriptStruct>("/Script/AIModule.PawnActionEvent");

	return Struct;
}

UScriptStruct* FBlackboardKeySelector::StaticStruct()
{
	static UScriptStruct* Struct = nullptr;
	if (!Struct)
		Struct = UObject::StaticFindObject<UScriptStruct>("/Script/AIModule.BlackboardKeySelector");

	return Struct;
}

UScriptStruct* FGenericTeamId::StaticStruct()
{
	static UScriptStruct* Struct = nullptr;
	if (!Struct)
		Struct = UObject::StaticFindObject<UScriptStruct>("/Script/AIModule.GenericTeamId");

	return Struct;
}

UScriptStruct* FAIDataProviderBoolValue::StaticStruct()
{
	static UScriptStruct* Struct = nullptr;
	if (!Struct)
		Struct = UObject::StaticFindObject<UScriptStruct>("/Script/AIModule.AIDataProviderBoolValue");

	return Struct;
}

UScriptStruct* FAIDataProviderIntValue::StaticStruct()
{
	static UScriptStruct* Struct = nullptr;
	if (!Struct)
		Struct = UObject::StaticFindObject<UScriptStruct>("/Script/AIModule.AIDataProviderIntValue");

	return Struct;
}

UScriptStruct* FAIDataProviderStructValue::StaticStruct()
{
	static UScriptStruct* Struct = nullptr;
	if (!Struct)
		Struct = UObject::StaticFindObject<UScriptStruct>("/Script/AIModule.AIDataProviderStructValue");

	return Struct;
}

UScriptStruct* FAISenseAffiliationFilter::StaticStruct()
{
	static UScriptStruct* Struct = nullptr;
	if (!Struct)
		Struct = UObject::StaticFindObject<UScriptStruct>("/Script/AIModule.AISenseAffiliationFilter");

	return Struct;
}

UScriptStruct* FActorPerceptionBlueprintInfo::StaticStruct()
{
	static UScriptStruct* Struct = nullptr;
	if (!Struct)
		Struct = UObject::StaticFindObject<UScriptStruct>("/Script/AIModule.ActorPerceptionBlueprintInfo");

	return Struct;
}

UScriptStruct* FAIDamageEvent::StaticStruct()
{
	static UScriptStruct* Struct = nullptr;
	if (!Struct)
		Struct = UObject::StaticFindObject<UScriptStruct>("/Script/AIModule.AIDamageEvent");

	return Struct;
}

UScriptStruct* FAINoiseEvent::StaticStruct()
{
	static UScriptStruct* Struct = nullptr;
	if (!Struct)
		Struct = UObject::StaticFindObject<UScriptStruct>("/Script/AIModule.AINoiseEvent");

	return Struct;
}

UScriptStruct* FAIPredictionEvent::StaticStruct()
{
	static UScriptStruct* Struct = nullptr;
	if (!Struct)
		Struct = UObject::StaticFindObject<UScriptStruct>("/Script/AIModule.AIPredictionEvent");

	return Struct;
}

UScriptStruct* FAISightEvent::StaticStruct()
{
	static UScriptStruct* Struct = nullptr;
	if (!Struct)
		Struct = UObject::StaticFindObject<UScriptStruct>("/Script/AIModule.AISightEvent");

	return Struct;
}

UScriptStruct* FAITeamStimulusEvent::StaticStruct()
{
	static UScriptStruct* Struct = nullptr;
	if (!Struct)
		Struct = UObject::StaticFindObject<UScriptStruct>("/Script/AIModule.AITeamStimulusEvent");

	return Struct;
}

UScriptStruct* FAITouchEvent::StaticStruct()
{
	static UScriptStruct* Struct = nullptr;
	if (!Struct)
		Struct = UObject::StaticFindObject<UScriptStruct>("/Script/AIModule.AITouchEvent");

	return Struct;
}

UScriptStruct* FBTCompositeChild::StaticStruct()
{
	static UScriptStruct* Struct = nullptr;
	if (!Struct)
		Struct = UObject::StaticFindObject<UScriptStruct>("/Script/AIModule.BTCompositeChild");

	return Struct;
}

UScriptStruct* FBTDecoratorLogic::StaticStruct()
{
	static UScriptStruct* Struct = nullptr;
	if (!Struct)
		Struct = UObject::StaticFindObject<UScriptStruct>("/Script/AIModule.BTDecoratorLogic");

	return Struct;
}

UScriptStruct* FBehaviorTreeTemplateInfo::StaticStruct()
{
	static UScriptStruct* Struct = nullptr;
	if (!Struct)
		Struct = UObject::StaticFindObject<UScriptStruct>("/Script/AIModule.BehaviorTreeTemplateInfo");

	return Struct;
}

UScriptStruct* FBlackboardEntry::StaticStruct()
{
	static UScriptStruct* Struct = nullptr;
	if (!Struct)
		Struct = UObject::StaticFindObject<UScriptStruct>("/Script/AIModule.BlackboardEntry");

	return Struct;
}

UScriptStruct* FEQSParametrizedQueryExecutionRequest::StaticStruct()
{
	static UScriptStruct* Struct = nullptr;
	if (!Struct)
		Struct = UObject::StaticFindObject<UScriptStruct>("/Script/AIModule.EQSParametrizedQueryExecutionRequest");

	return Struct;
}

UScriptStruct* FAIDynamicParam::StaticStruct()
{
	static UScriptStruct* Struct = nullptr;
	if (!Struct)
		Struct = UObject::StaticFindObject<UScriptStruct>("/Script/AIModule.AIDynamicParam");

	return Struct;
}

UScriptStruct* FEnvBoolParam::StaticStruct()
{
	static UScriptStruct* Struct = nullptr;
	if (!Struct)
		Struct = UObject::StaticFindObject<UScriptStruct>("/Script/AIModule.EnvBoolParam");

	return Struct;
}

UScriptStruct* FEnvBoolParam_DEPRECATED::StaticStruct()
{
	static UScriptStruct* Struct = nullptr;
	if (!Struct)
		Struct = UObject::StaticFindObject<UScriptStruct>("/Script/AIModule.EnvBoolParam_DEPRECATED");

	return Struct;
}

UScriptStruct* FEnvIntParam::StaticStruct()
{
	static UScriptStruct* Struct = nullptr;
	if (!Struct)
		Struct = UObject::StaticFindObject<UScriptStruct>("/Script/AIModule.EnvIntParam");

	return Struct;
}

UScriptStruct* FEnvIntParam_DEPRECATED::StaticStruct()
{
	static UScriptStruct* Struct = nullptr;
	if (!Struct)
		Struct = UObject::StaticFindObject<UScriptStruct>("/Script/AIModule.EnvIntParam_DEPRECATED");

	return Struct;
}

UScriptStruct* FEnvFloatParam::StaticStruct()
{
	static UScriptStruct* Struct = nullptr;
	if (!Struct)
		Struct = UObject::StaticFindObject<UScriptStruct>("/Script/AIModule.EnvFloatParam");

	return Struct;
}

UScriptStruct* FEnvFloatParam_DEPRECATED::StaticStruct()
{
	static UScriptStruct* Struct = nullptr;
	if (!Struct)
		Struct = UObject::StaticFindObject<UScriptStruct>("/Script/AIModule.EnvFloatParam_DEPRECATED");

	return Struct;
}

UScriptStruct* FEnvQueryResult::StaticStruct()
{
	static UScriptStruct* Struct = nullptr;
	if (!Struct)
		Struct = UObject::StaticFindObject<UScriptStruct>("/Script/AIModule.EnvQueryResult");

	return Struct;
}

UScriptStruct* FEnvOverlapData::StaticStruct()
{
	static UScriptStruct* Struct = nullptr;
	if (!Struct)
		Struct = UObject::StaticFindObject<UScriptStruct>("/Script/AIModule.EnvOverlapData");

	return Struct;
}

UScriptStruct* FEnvTraceData::StaticStruct()
{
	static UScriptStruct* Struct = nullptr;
	if (!Struct)
		Struct = UObject::StaticFindObject<UScriptStruct>("/Script/AIModule.EnvTraceData");

	return Struct;
}

UScriptStruct* FEnvDirection::StaticStruct()
{
	static UScriptStruct* Struct = nullptr;
	if (!Struct)
		Struct = UObject::StaticFindObject<UScriptStruct>("/Script/AIModule.EnvDirection");

	return Struct;
}

UScriptStruct* FCrowdAvoidanceSamplingPattern::StaticStruct()
{
	static UScriptStruct* Struct = nullptr;
	if (!Struct)
		Struct = UObject::StaticFindObject<UScriptStruct>("/Script/AIModule.CrowdAvoidanceSamplingPattern");

	return Struct;
}

UScriptStruct* FCrowdAvoidanceConfig::StaticStruct()
{
	static UScriptStruct* Struct = nullptr;
	if (!Struct)
		Struct = UObject::StaticFindObject<UScriptStruct>("/Script/AIModule.CrowdAvoidanceConfig");

	return Struct;
}

UScriptStruct* FEnvQueryInstanceCache::StaticStruct()
{
	static UScriptStruct* Struct = nullptr;
	if (!Struct)
		Struct = UObject::StaticFindObject<UScriptStruct>("/Script/AIModule.EnvQueryInstanceCache");

	return Struct;
}

UScriptStruct* FEnvQueryRequest::StaticStruct()
{
	static UScriptStruct* Struct = nullptr;
	if (!Struct)
		Struct = UObject::StaticFindObject<UScriptStruct>("/Script/AIModule.EnvQueryRequest");

	return Struct;
}

