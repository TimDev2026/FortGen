#include "pch.h"

#include "FN_FlingerPawn_classes.h"

UClass* AFlingerPawn_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Characters/Enemies/Flinger/Blueprints/FlingerPawn.FlingerPawn_C");

	return Class;
}

// Function /Game/Characters/Enemies/Flinger/Blueprints/FlingerPawn.FlingerPawn_C:IsReadyToReceiveNewSpawnGroup
bool AFlingerPawn_C::IsReadyToReceiveNewSpawnGroup()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Characters/Enemies/Flinger/Blueprints/FlingerPawn.FlingerPawn_C:IsReadyToReceiveNewSpawnGroup");

	FAFlingerPawn_C_IsReadyToReceiveNewSpawnGroup_Params Parms;


	ProcessEvent(FN, &Parms);
}

// Function /Game/Characters/Enemies/Flinger/Blueprints/FlingerPawn.FlingerPawn_C:OnReceiveSpawnGroup
bool AFlingerPawn_C::OnReceiveSpawnGroup()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Characters/Enemies/Flinger/Blueprints/FlingerPawn.FlingerPawn_C:OnReceiveSpawnGroup");

	FAFlingerPawn_C_OnReceiveSpawnGroup_Params Parms;


	ProcessEvent(FN, &Parms);
}

// Function /Game/Characters/Enemies/Flinger/Blueprints/FlingerPawn.FlingerPawn_C:UserConstructionScript
void AFlingerPawn_C::UserConstructionScript()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Characters/Enemies/Flinger/Blueprints/FlingerPawn.FlingerPawn_C:UserConstructionScript");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Characters/Enemies/Flinger/Blueprints/FlingerPawn.FlingerPawn_C:Timeline_0__FinishedFunc
void AFlingerPawn_C::Timeline_0__FinishedFunc()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Characters/Enemies/Flinger/Blueprints/FlingerPawn.FlingerPawn_C:Timeline_0__FinishedFunc");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Characters/Enemies/Flinger/Blueprints/FlingerPawn.FlingerPawn_C:Timeline_0__UpdateFunc
void AFlingerPawn_C::Timeline_0__UpdateFunc()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Characters/Enemies/Flinger/Blueprints/FlingerPawn.FlingerPawn_C:Timeline_0__UpdateFunc");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Characters/Enemies/Flinger/Blueprints/FlingerPawn.FlingerPawn_C:Timeline_0__Spawn__EventFunc
void AFlingerPawn_C::Timeline_0__Spawn__EventFunc()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Characters/Enemies/Flinger/Blueprints/FlingerPawn.FlingerPawn_C:Timeline_0__Spawn__EventFunc");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Characters/Enemies/Flinger/Blueprints/FlingerPawn.FlingerPawn_C:Disolve & Particle Trigger__FinishedFunc
void AFlingerPawn_C::Disolve___Particle_Trigger__FinishedFunc()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Characters/Enemies/Flinger/Blueprints/FlingerPawn.FlingerPawn_C:Disolve & Particle Trigger__FinishedFunc");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Characters/Enemies/Flinger/Blueprints/FlingerPawn.FlingerPawn_C:Disolve & Particle Trigger__UpdateFunc
void AFlingerPawn_C::Disolve___Particle_Trigger__UpdateFunc()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Characters/Enemies/Flinger/Blueprints/FlingerPawn.FlingerPawn_C:Disolve & Particle Trigger__UpdateFunc");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Characters/Enemies/Flinger/Blueprints/FlingerPawn.FlingerPawn_C:Disolve & Particle Trigger__Spawn Death FX__EventFunc
void AFlingerPawn_C::Disolve___Particle_Trigger__Spawn_Death_FX__EventFunc()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Characters/Enemies/Flinger/Blueprints/FlingerPawn.FlingerPawn_C:Disolve & Particle Trigger__Spawn Death FX__EventFunc");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Characters/Enemies/Flinger/Blueprints/FlingerPawn.FlingerPawn_C:FlingerSpawnedAnEnemy
void AFlingerPawn_C::FlingerSpawnedAnEnemy(class AFortAIPawn* EnemySpawned, class AFortProjectileBase* ProjectileThatSpawnedThisEnemy)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Characters/Enemies/Flinger/Blueprints/FlingerPawn.FlingerPawn_C:FlingerSpawnedAnEnemy");

	FAFlingerPawn_C_FlingerSpawnedAnEnemy_Params Parms;

	Parms.EnemySpawned = EnemySpawned;
	Parms.ProjectileThatSpawnedThisEnemy = ProjectileThatSpawnedThisEnemy;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Characters/Enemies/Flinger/Blueprints/FlingerPawn.FlingerPawn_C:CanFlingerSpawnAnEnemy
void AFlingerPawn_C::CanFlingerSpawnAnEnemy(class AActor* ActorWhoAsked)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Characters/Enemies/Flinger/Blueprints/FlingerPawn.FlingerPawn_C:CanFlingerSpawnAnEnemy");

	FAFlingerPawn_C_CanFlingerSpawnAnEnemy_Params Parms;

	Parms.ActorWhoAsked = ActorWhoAsked;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Characters/Enemies/Flinger/Blueprints/FlingerPawn.FlingerPawn_C:FlingerCanSpawnAnEnemy
void AFlingerPawn_C::FlingerCanSpawnAnEnemy()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Characters/Enemies/Flinger/Blueprints/FlingerPawn.FlingerPawn_C:FlingerCanSpawnAnEnemy");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Characters/Enemies/Flinger/Blueprints/FlingerPawn.FlingerPawn_C:FlingerCan'tSpawnAnEnemy
void AFlingerPawn_C::FlingerCan_tSpawnAnEnemy()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Characters/Enemies/Flinger/Blueprints/FlingerPawn.FlingerPawn_C:FlingerCan'tSpawnAnEnemy");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Characters/Enemies/Flinger/Blueprints/FlingerPawn.FlingerPawn_C:FlingerThrewAProjectileContainingAnEnemy
void AFlingerPawn_C::FlingerThrewAProjectileContainingAnEnemy(class AFortProjectileBase* Projectile)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Characters/Enemies/Flinger/Blueprints/FlingerPawn.FlingerPawn_C:FlingerThrewAProjectileContainingAnEnemy");

	FAFlingerPawn_C_FlingerThrewAProjectileContainingAnEnemy_Params Parms;

	Parms.Projectile = Projectile;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Characters/Enemies/Flinger/Blueprints/FlingerPawn.FlingerPawn_C:FlingerEnemyFailedToSpawn
void AFlingerPawn_C::FlingerEnemyFailedToSpawn(class AFortProjectileBase* FailedProjectile)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Characters/Enemies/Flinger/Blueprints/FlingerPawn.FlingerPawn_C:FlingerEnemyFailedToSpawn");

	FAFlingerPawn_C_FlingerEnemyFailedToSpawn_Params Parms;

	Parms.FailedProjectile = FailedProjectile;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Characters/Enemies/Flinger/Blueprints/FlingerPawn.FlingerPawn_C:AlertEnemySpawnedByFlinger
void AFlingerPawn_C::AlertEnemySpawnedByFlinger(FVector PushMomentum, float PushDuration, class APawn* OwningFlinger)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Characters/Enemies/Flinger/Blueprints/FlingerPawn.FlingerPawn_C:AlertEnemySpawnedByFlinger");

	FAFlingerPawn_C_AlertEnemySpawnedByFlinger_Params Parms;

	Parms.PushMomentum = PushMomentum;
	Parms.PushDuration = PushDuration;
	Parms.OwningFlinger = OwningFlinger;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Characters/Enemies/Flinger/Blueprints/FlingerPawn.FlingerPawn_C:FlingerEnemyDied
void AFlingerPawn_C::FlingerEnemyDied(class APawn* PawnThatDied)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Characters/Enemies/Flinger/Blueprints/FlingerPawn.FlingerPawn_C:FlingerEnemyDied");

	FAFlingerPawn_C_FlingerEnemyDied_Params Parms;

	Parms.PawnThatDied = PawnThatDied;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Characters/Enemies/Flinger/Blueprints/FlingerPawn.FlingerPawn_C:MantleStart
void AFlingerPawn_C::MantleStart(FVector StartPos, FVector MidPos, FVector EndPos, bool LowWall, bool MidWall, bool FullWall, bool WindowWall)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Characters/Enemies/Flinger/Blueprints/FlingerPawn.FlingerPawn_C:MantleStart");

	FAFlingerPawn_C_MantleStart_Params Parms;

	Parms.StartPos = StartPos;
	Parms.MidPos = MidPos;
	Parms.EndPos = EndPos;
	Parms.LowWall = LowWall;
	Parms.MidWall = MidWall;
	Parms.FullWall = FullWall;
	Parms.WindowWall = WindowWall;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Characters/Enemies/Flinger/Blueprints/FlingerPawn.FlingerPawn_C:MantleEnd
void AFlingerPawn_C::MantleEnd()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Characters/Enemies/Flinger/Blueprints/FlingerPawn.FlingerPawn_C:MantleEnd");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Characters/Enemies/Flinger/Blueprints/FlingerPawn.FlingerPawn_C:HuskEvadeStart
void AFlingerPawn_C::HuskEvadeStart()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Characters/Enemies/Flinger/Blueprints/FlingerPawn.FlingerPawn_C:HuskEvadeStart");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Characters/Enemies/Flinger/Blueprints/FlingerPawn.FlingerPawn_C:VerifyTakerAttack
void AFlingerPawn_C::VerifyTakerAttack(bool SpecialAttack, bool Swoop, bool Soul_Suck, bool Portal)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Characters/Enemies/Flinger/Blueprints/FlingerPawn.FlingerPawn_C:VerifyTakerAttack");

	FAFlingerPawn_C_VerifyTakerAttack_Params Parms;

	Parms.SpecialAttack = SpecialAttack;
	Parms.Swoop = Swoop;
	Parms.Soul_Suck = Soul_Suck;
	Parms.Portal = Portal;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Characters/Enemies/Flinger/Blueprints/FlingerPawn.FlingerPawn_C:ResetTakerSpecialAttackTimer
void AFlingerPawn_C::ResetTakerSpecialAttackTimer(bool Swoop, bool SoulSuckMelee, bool Portal)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Characters/Enemies/Flinger/Blueprints/FlingerPawn.FlingerPawn_C:ResetTakerSpecialAttackTimer");

	FAFlingerPawn_C_ResetTakerSpecialAttackTimer_Params Parms;

	Parms.Swoop = Swoop;
	Parms.SoulSuckMelee = SoulSuckMelee;
	Parms.Portal = Portal;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Characters/Enemies/Flinger/Blueprints/FlingerPawn.FlingerPawn_C:BeginTakerSwoopAttack
void AFlingerPawn_C::BeginTakerSwoopAttack()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Characters/Enemies/Flinger/Blueprints/FlingerPawn.FlingerPawn_C:BeginTakerSwoopAttack");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Characters/Enemies/Flinger/Blueprints/FlingerPawn.FlingerPawn_C:EndTakerSwoopAttack
void AFlingerPawn_C::EndTakerSwoopAttack()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Characters/Enemies/Flinger/Blueprints/FlingerPawn.FlingerPawn_C:EndTakerSwoopAttack");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Characters/Enemies/Flinger/Blueprints/FlingerPawn.FlingerPawn_C:TakerWallPortalBehavior
void AFlingerPawn_C::TakerWallPortalBehavior(class AActor* BuildingPart, class UBTTask_BlueprintBase* Task, FVector DesiredMoveLocation, bool Debug)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Characters/Enemies/Flinger/Blueprints/FlingerPawn.FlingerPawn_C:TakerWallPortalBehavior");

	FAFlingerPawn_C_TakerWallPortalBehavior_Params Parms;

	Parms.BuildingPart = BuildingPart;
	Parms.Task = Task;
	Parms.DesiredMoveLocation = DesiredMoveLocation;
	Parms.Debug = Debug;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Characters/Enemies/Flinger/Blueprints/FlingerPawn.FlingerPawn_C:IsTakerWallPortalAvailable
void AFlingerPawn_C::IsTakerWallPortalAvailable(bool Portal_Available_)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Characters/Enemies/Flinger/Blueprints/FlingerPawn.FlingerPawn_C:IsTakerWallPortalAvailable");

	FAFlingerPawn_C_IsTakerWallPortalAvailable_Params Parms;

	Parms.Portal_Available_ = Portal_Available_;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Characters/Enemies/Flinger/Blueprints/FlingerPawn.FlingerPawn_C:TakerAttackFSM
void AFlingerPawn_C::TakerAttackFSM(bool SuccessfulHit)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Characters/Enemies/Flinger/Blueprints/FlingerPawn.FlingerPawn_C:TakerAttackFSM");

	FAFlingerPawn_C_TakerAttackFSM_Params Parms;

	Parms.SuccessfulHit = SuccessfulHit;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Characters/Enemies/Flinger/Blueprints/FlingerPawn.FlingerPawn_C:TakerSoulSuckSoundBegin
void AFlingerPawn_C::TakerSoulSuckSoundBegin(bool Success)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Characters/Enemies/Flinger/Blueprints/FlingerPawn.FlingerPawn_C:TakerSoulSuckSoundBegin");

	FAFlingerPawn_C_TakerSoulSuckSoundBegin_Params Parms;

	Parms.Success = Success;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Characters/Enemies/Flinger/Blueprints/FlingerPawn.FlingerPawn_C:TakerSoulSuckSoundEnd
void AFlingerPawn_C::TakerSoulSuckSoundEnd()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Characters/Enemies/Flinger/Blueprints/FlingerPawn.FlingerPawn_C:TakerSoulSuckSoundEnd");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Characters/Enemies/Flinger/Blueprints/FlingerPawn.FlingerPawn_C:PortalAdd
void AFlingerPawn_C::PortalAdd(class ABuildingActor* BuildingActor, TArray<class ABuildingActor*> BuildingActorList)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Characters/Enemies/Flinger/Blueprints/FlingerPawn.FlingerPawn_C:PortalAdd");

	FAFlingerPawn_C_PortalAdd_Params Parms;

	Parms.BuildingActor = BuildingActor;
	Parms.BuildingActorList = BuildingActorList;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Characters/Enemies/Flinger/Blueprints/FlingerPawn.FlingerPawn_C:PortalClear
void AFlingerPawn_C::PortalClear()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Characters/Enemies/Flinger/Blueprints/FlingerPawn.FlingerPawn_C:PortalClear");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Characters/Enemies/Flinger/Blueprints/FlingerPawn.FlingerPawn_C:TakerSoulSuckInterrupted
void AFlingerPawn_C::TakerSoulSuckInterrupted()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Characters/Enemies/Flinger/Blueprints/FlingerPawn.FlingerPawn_C:TakerSoulSuckInterrupted");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Characters/Enemies/Flinger/Blueprints/FlingerPawn.FlingerPawn_C:PortalGet
void AFlingerPawn_C::PortalGet(class ABuildingActor* BuildingActor, TArray<class ABuildingActor*> BuildingActorList, class AActor* BT)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Characters/Enemies/Flinger/Blueprints/FlingerPawn.FlingerPawn_C:PortalGet");

	FAFlingerPawn_C_PortalGet_Params Parms;

	Parms.BuildingActor = BuildingActor;
	Parms.BuildingActorList = BuildingActorList;
	Parms.BT = BT;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Characters/Enemies/Flinger/Blueprints/FlingerPawn.FlingerPawn_C:PortalFX
void AFlingerPawn_C::PortalFX()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Characters/Enemies/Flinger/Blueprints/FlingerPawn.FlingerPawn_C:PortalFX");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Characters/Enemies/Flinger/Blueprints/FlingerPawn.FlingerPawn_C:PortalCollision
void AFlingerPawn_C::PortalCollision(bool Collide_)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Characters/Enemies/Flinger/Blueprints/FlingerPawn.FlingerPawn_C:PortalCollision");

	FAFlingerPawn_C_PortalCollision_Params Parms;

	Parms.Collide_ = Collide_;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Characters/Enemies/Flinger/Blueprints/FlingerPawn.FlingerPawn_C:OnSpawnedFromRift
void AFlingerPawn_C::OnSpawnedFromRift()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Characters/Enemies/Flinger/Blueprints/FlingerPawn.FlingerPawn_C:OnSpawnedFromRift");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Characters/Enemies/Flinger/Blueprints/FlingerPawn.FlingerPawn_C:OnForceSpawnEffectCompletion
void AFlingerPawn_C::OnForceSpawnEffectCompletion()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Characters/Enemies/Flinger/Blueprints/FlingerPawn.FlingerPawn_C:OnForceSpawnEffectCompletion");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Characters/Enemies/Flinger/Blueprints/FlingerPawn.FlingerPawn_C:OnDamagePlayEffects
void AFlingerPawn_C::OnDamagePlayEffects(float Damage, FGameplayTagContainer DamageTags, FVector Momentum, FHitResult HitInfo, class AFortPawn* InstigatedBy, class AActor* DamageCauser, FGameplayEffectContextHandle EffectContext)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Characters/Enemies/Flinger/Blueprints/FlingerPawn.FlingerPawn_C:OnDamagePlayEffects");

	FAFlingerPawn_C_OnDamagePlayEffects_Params Parms;

	Parms.Damage = Damage;
	Parms.DamageTags = DamageTags;
	Parms.Momentum = Momentum;
	Parms.HitInfo = HitInfo;
	Parms.InstigatedBy = InstigatedBy;
	Parms.DamageCauser = DamageCauser;
	Parms.EffectContext = EffectContext;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Characters/Enemies/Flinger/Blueprints/FlingerPawn.FlingerPawn_C:AdditiveHitReactDelay
void AFlingerPawn_C::AdditiveHitReactDelay()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Characters/Enemies/Flinger/Blueprints/FlingerPawn.FlingerPawn_C:AdditiveHitReactDelay");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Characters/Enemies/Flinger/Blueprints/FlingerPawn.FlingerPawn_C:ReceiveBeginPlay
void AFlingerPawn_C::ReceiveBeginPlay()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Characters/Enemies/Flinger/Blueprints/FlingerPawn.FlingerPawn_C:ReceiveBeginPlay");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Characters/Enemies/Flinger/Blueprints/FlingerPawn.FlingerPawn_C:OnDeathServer
void AFlingerPawn_C::OnDeathServer(float Damage, FGameplayTagContainer DamageTags, FVector Momentum, FHitResult HitInfo, class AController* InstigatedBy, class AActor* DamageCauser, FGameplayEffectContextHandle EffectContext)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Characters/Enemies/Flinger/Blueprints/FlingerPawn.FlingerPawn_C:OnDeathServer");

	FAFlingerPawn_C_OnDeathServer_Params Parms;

	Parms.Damage = Damage;
	Parms.DamageTags = DamageTags;
	Parms.Momentum = Momentum;
	Parms.HitInfo = HitInfo;
	Parms.InstigatedBy = InstigatedBy;
	Parms.DamageCauser = DamageCauser;
	Parms.EffectContext = EffectContext;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Characters/Enemies/Flinger/Blueprints/FlingerPawn.FlingerPawn_C:GameplayCue.Impact.Physical.Creature
void AFlingerPawn_C::GameplayCue_Impact_Physical_Creature(EGameplayCueEvent EventType, FGameplayCueParameters Parameters)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Characters/Enemies/Flinger/Blueprints/FlingerPawn.FlingerPawn_C:GameplayCue.Impact.Physical.Creature");

	FAFlingerPawn_C_GameplayCue_Impact_Physical_Creature_Params Parms;

	Parms.EventType = EventType;
	Parms.Parameters = Parameters;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Characters/Enemies/Flinger/Blueprints/FlingerPawn.FlingerPawn_C:OnDeathPlayEffects
void AFlingerPawn_C::OnDeathPlayEffects(float Damage, FGameplayTagContainer DamageTags, FVector Momentum, FHitResult HitInfo, class AFortPawn* InstigatedBy, class AActor* DamageCauser, FGameplayEffectContextHandle EffectContext)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Characters/Enemies/Flinger/Blueprints/FlingerPawn.FlingerPawn_C:OnDeathPlayEffects");

	FAFlingerPawn_C_OnDeathPlayEffects_Params Parms;

	Parms.Damage = Damage;
	Parms.DamageTags = DamageTags;
	Parms.Momentum = Momentum;
	Parms.HitInfo = HitInfo;
	Parms.InstigatedBy = InstigatedBy;
	Parms.DamageCauser = DamageCauser;
	Parms.EffectContext = EffectContext;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Characters/Enemies/Flinger/Blueprints/FlingerPawn.FlingerPawn_C:GameplayCue.NPC.Ranged.Grab
void AFlingerPawn_C::GameplayCue_NPC_Ranged_Grab(EGameplayCueEvent EventType, FGameplayCueParameters Parameters)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Characters/Enemies/Flinger/Blueprints/FlingerPawn.FlingerPawn_C:GameplayCue.NPC.Ranged.Grab");

	FAFlingerPawn_C_GameplayCue_NPC_Ranged_Grab_Params Parms;

	Parms.EventType = EventType;
	Parms.Parameters = Parameters;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Characters/Enemies/Flinger/Blueprints/FlingerPawn.FlingerPawn_C:GameplayCue.NPC.Ranged.Throw
void AFlingerPawn_C::GameplayCue_NPC_Ranged_Throw(EGameplayCueEvent EventType, FGameplayCueParameters Parameters)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Characters/Enemies/Flinger/Blueprints/FlingerPawn.FlingerPawn_C:GameplayCue.NPC.Ranged.Throw");

	FAFlingerPawn_C_GameplayCue_NPC_Ranged_Throw_Params Parms;

	Parms.EventType = EventType;
	Parms.Parameters = Parameters;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Characters/Enemies/Flinger/Blueprints/FlingerPawn.FlingerPawn_C:GameplayCue.NPC.Flinger.Ranged.Grab.NPC
void AFlingerPawn_C::GameplayCue_NPC_Flinger_Ranged_Grab_NPC(EGameplayCueEvent EventType, FGameplayCueParameters Parameters)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Characters/Enemies/Flinger/Blueprints/FlingerPawn.FlingerPawn_C:GameplayCue.NPC.Flinger.Ranged.Grab.NPC");

	FAFlingerPawn_C_GameplayCue_NPC_Flinger_Ranged_Grab_NPC_Params Parms;

	Parms.EventType = EventType;
	Parms.Parameters = Parameters;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Characters/Enemies/Flinger/Blueprints/FlingerPawn.FlingerPawn_C:ExecuteUbergraph_FlingerPawn
void AFlingerPawn_C::ExecuteUbergraph_FlingerPawn(int32_t EntryPoint)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Characters/Enemies/Flinger/Blueprints/FlingerPawn.FlingerPawn_C:ExecuteUbergraph_FlingerPawn");

	FAFlingerPawn_C_ExecuteUbergraph_FlingerPawn_Params Parms;

	Parms.EntryPoint = EntryPoint;

	ProcessEvent(FN, &Parms);
}

