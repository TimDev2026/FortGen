#include "pch.h"

#include "FN_HuskPawn_classes.h"

UClass* AHuskPawn_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Characters/Enemies/Husk/Blueprints/HuskPawn.HuskPawn_C");

	return Class;
}

// Function /Game/Characters/Enemies/Husk/Blueprints/HuskPawn.HuskPawn_C:SetHuskRotationRate
void AHuskPawn_C::SetHuskRotationRate(float YawRate)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Characters/Enemies/Husk/Blueprints/HuskPawn.HuskPawn_C:SetHuskRotationRate");

	FAHuskPawn_C_SetHuskRotationRate_Params Parms;

	Parms.YawRate = YawRate;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Characters/Enemies/Husk/Blueprints/HuskPawn.HuskPawn_C:ResetHuskRotationRateToDefault
void AHuskPawn_C::ResetHuskRotationRateToDefault()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Characters/Enemies/Husk/Blueprints/HuskPawn.HuskPawn_C:ResetHuskRotationRateToDefault");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Characters/Enemies/Husk/Blueprints/HuskPawn.HuskPawn_C:PlayAdditiveHitReacts
void AHuskPawn_C::PlayAdditiveHitReacts(FVector HitDirection)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Characters/Enemies/Husk/Blueprints/HuskPawn.HuskPawn_C:PlayAdditiveHitReacts");

	FAHuskPawn_C_PlayAdditiveHitReacts_Params Parms;

	Parms.HitDirection = HitDirection;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Characters/Enemies/Husk/Blueprints/HuskPawn.HuskPawn_C:PickColorFromAnArrayOfColors
void AHuskPawn_C::PickColorFromAnArrayOfColors(TArray<FLinearColor> ArrayOfColors, FLinearColor Color)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Characters/Enemies/Husk/Blueprints/HuskPawn.HuskPawn_C:PickColorFromAnArrayOfColors");

	FAHuskPawn_C_PickColorFromAnArrayOfColors_Params Parms;

	Parms.ArrayOfColors = ArrayOfColors;
	Parms.Color = Color;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Characters/Enemies/Husk/Blueprints/HuskPawn.HuskPawn_C:UserConstructionScript
void AHuskPawn_C::UserConstructionScript()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Characters/Enemies/Husk/Blueprints/HuskPawn.HuskPawn_C:UserConstructionScript");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Characters/Enemies/Husk/Blueprints/HuskPawn.HuskPawn_C:Dissolve__FinishedFunc
void AHuskPawn_C::Dissolve__FinishedFunc()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Characters/Enemies/Husk/Blueprints/HuskPawn.HuskPawn_C:Dissolve__FinishedFunc");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Characters/Enemies/Husk/Blueprints/HuskPawn.HuskPawn_C:Dissolve__UpdateFunc
void AHuskPawn_C::Dissolve__UpdateFunc()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Characters/Enemies/Husk/Blueprints/HuskPawn.HuskPawn_C:Dissolve__UpdateFunc");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Characters/Enemies/Husk/Blueprints/HuskPawn.HuskPawn_C:Timeline_1__FinishedFunc
void AHuskPawn_C::Timeline_1__FinishedFunc()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Characters/Enemies/Husk/Blueprints/HuskPawn.HuskPawn_C:Timeline_1__FinishedFunc");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Characters/Enemies/Husk/Blueprints/HuskPawn.HuskPawn_C:Timeline_1__UpdateFunc
void AHuskPawn_C::Timeline_1__UpdateFunc()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Characters/Enemies/Husk/Blueprints/HuskPawn.HuskPawn_C:Timeline_1__UpdateFunc");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Characters/Enemies/Husk/Blueprints/HuskPawn.HuskPawn_C:Timeline_1__Spawn__EventFunc
void AHuskPawn_C::Timeline_1__Spawn__EventFunc()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Characters/Enemies/Husk/Blueprints/HuskPawn.HuskPawn_C:Timeline_1__Spawn__EventFunc");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Characters/Enemies/Husk/Blueprints/HuskPawn.HuskPawn_C:FlingerSpawnedAnEnemy
void AHuskPawn_C::FlingerSpawnedAnEnemy(class AFortAIPawn* EnemySpawned, class AFortProjectileBase* ProjectileThatSpawnedThisEnemy)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Characters/Enemies/Husk/Blueprints/HuskPawn.HuskPawn_C:FlingerSpawnedAnEnemy");

	FAHuskPawn_C_FlingerSpawnedAnEnemy_Params Parms;

	Parms.EnemySpawned = EnemySpawned;
	Parms.ProjectileThatSpawnedThisEnemy = ProjectileThatSpawnedThisEnemy;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Characters/Enemies/Husk/Blueprints/HuskPawn.HuskPawn_C:CanFlingerSpawnAnEnemy
void AHuskPawn_C::CanFlingerSpawnAnEnemy(class AActor* ActorWhoAsked)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Characters/Enemies/Husk/Blueprints/HuskPawn.HuskPawn_C:CanFlingerSpawnAnEnemy");

	FAHuskPawn_C_CanFlingerSpawnAnEnemy_Params Parms;

	Parms.ActorWhoAsked = ActorWhoAsked;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Characters/Enemies/Husk/Blueprints/HuskPawn.HuskPawn_C:FlingerCanSpawnAnEnemy
void AHuskPawn_C::FlingerCanSpawnAnEnemy()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Characters/Enemies/Husk/Blueprints/HuskPawn.HuskPawn_C:FlingerCanSpawnAnEnemy");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Characters/Enemies/Husk/Blueprints/HuskPawn.HuskPawn_C:FlingerCan'tSpawnAnEnemy
void AHuskPawn_C::FlingerCan_tSpawnAnEnemy()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Characters/Enemies/Husk/Blueprints/HuskPawn.HuskPawn_C:FlingerCan'tSpawnAnEnemy");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Characters/Enemies/Husk/Blueprints/HuskPawn.HuskPawn_C:FlingerThrewAProjectileContainingAnEnemy
void AHuskPawn_C::FlingerThrewAProjectileContainingAnEnemy(class AFortProjectileBase* Projectile)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Characters/Enemies/Husk/Blueprints/HuskPawn.HuskPawn_C:FlingerThrewAProjectileContainingAnEnemy");

	FAHuskPawn_C_FlingerThrewAProjectileContainingAnEnemy_Params Parms;

	Parms.Projectile = Projectile;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Characters/Enemies/Husk/Blueprints/HuskPawn.HuskPawn_C:FlingerEnemyFailedToSpawn
void AHuskPawn_C::FlingerEnemyFailedToSpawn(class AFortProjectileBase* FailedProjectile)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Characters/Enemies/Husk/Blueprints/HuskPawn.HuskPawn_C:FlingerEnemyFailedToSpawn");

	FAHuskPawn_C_FlingerEnemyFailedToSpawn_Params Parms;

	Parms.FailedProjectile = FailedProjectile;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Characters/Enemies/Husk/Blueprints/HuskPawn.HuskPawn_C:AlertEnemySpawnedByFlinger
void AHuskPawn_C::AlertEnemySpawnedByFlinger(FVector PushMomentum, float PushDuration, class APawn* OwningFlinger)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Characters/Enemies/Husk/Blueprints/HuskPawn.HuskPawn_C:AlertEnemySpawnedByFlinger");

	FAHuskPawn_C_AlertEnemySpawnedByFlinger_Params Parms;

	Parms.PushMomentum = PushMomentum;
	Parms.PushDuration = PushDuration;
	Parms.OwningFlinger = OwningFlinger;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Characters/Enemies/Husk/Blueprints/HuskPawn.HuskPawn_C:FlingerEnemyDied
void AHuskPawn_C::FlingerEnemyDied(class APawn* PawnThatDied)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Characters/Enemies/Husk/Blueprints/HuskPawn.HuskPawn_C:FlingerEnemyDied");

	FAHuskPawn_C_FlingerEnemyDied_Params Parms;

	Parms.PawnThatDied = PawnThatDied;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Characters/Enemies/Husk/Blueprints/HuskPawn.HuskPawn_C:HuskEvadeStart
void AHuskPawn_C::HuskEvadeStart()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Characters/Enemies/Husk/Blueprints/HuskPawn.HuskPawn_C:HuskEvadeStart");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Characters/Enemies/Husk/Blueprints/HuskPawn.HuskPawn_C:VerifyTakerAttack
void AHuskPawn_C::VerifyTakerAttack(bool SpecialAttack, bool Swoop, bool Soul_Suck, bool Portal)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Characters/Enemies/Husk/Blueprints/HuskPawn.HuskPawn_C:VerifyTakerAttack");

	FAHuskPawn_C_VerifyTakerAttack_Params Parms;

	Parms.SpecialAttack = SpecialAttack;
	Parms.Swoop = Swoop;
	Parms.Soul_Suck = Soul_Suck;
	Parms.Portal = Portal;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Characters/Enemies/Husk/Blueprints/HuskPawn.HuskPawn_C:ResetTakerSpecialAttackTimer
void AHuskPawn_C::ResetTakerSpecialAttackTimer(bool Swoop, bool SoulSuckMelee, bool Portal)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Characters/Enemies/Husk/Blueprints/HuskPawn.HuskPawn_C:ResetTakerSpecialAttackTimer");

	FAHuskPawn_C_ResetTakerSpecialAttackTimer_Params Parms;

	Parms.Swoop = Swoop;
	Parms.SoulSuckMelee = SoulSuckMelee;
	Parms.Portal = Portal;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Characters/Enemies/Husk/Blueprints/HuskPawn.HuskPawn_C:BeginTakerSwoopAttack
void AHuskPawn_C::BeginTakerSwoopAttack()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Characters/Enemies/Husk/Blueprints/HuskPawn.HuskPawn_C:BeginTakerSwoopAttack");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Characters/Enemies/Husk/Blueprints/HuskPawn.HuskPawn_C:EndTakerSwoopAttack
void AHuskPawn_C::EndTakerSwoopAttack()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Characters/Enemies/Husk/Blueprints/HuskPawn.HuskPawn_C:EndTakerSwoopAttack");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Characters/Enemies/Husk/Blueprints/HuskPawn.HuskPawn_C:TakerWallPortalBehavior
void AHuskPawn_C::TakerWallPortalBehavior(class AActor* BuildingPart, class UBTTask_BlueprintBase* Task, FVector DesiredMoveLocation, bool Debug)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Characters/Enemies/Husk/Blueprints/HuskPawn.HuskPawn_C:TakerWallPortalBehavior");

	FAHuskPawn_C_TakerWallPortalBehavior_Params Parms;

	Parms.BuildingPart = BuildingPart;
	Parms.Task = Task;
	Parms.DesiredMoveLocation = DesiredMoveLocation;
	Parms.Debug = Debug;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Characters/Enemies/Husk/Blueprints/HuskPawn.HuskPawn_C:IsTakerWallPortalAvailable
void AHuskPawn_C::IsTakerWallPortalAvailable(bool Portal_Available_)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Characters/Enemies/Husk/Blueprints/HuskPawn.HuskPawn_C:IsTakerWallPortalAvailable");

	FAHuskPawn_C_IsTakerWallPortalAvailable_Params Parms;

	Parms.Portal_Available_ = Portal_Available_;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Characters/Enemies/Husk/Blueprints/HuskPawn.HuskPawn_C:TakerAttackFSM
void AHuskPawn_C::TakerAttackFSM(bool SuccessfulHit)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Characters/Enemies/Husk/Blueprints/HuskPawn.HuskPawn_C:TakerAttackFSM");

	FAHuskPawn_C_TakerAttackFSM_Params Parms;

	Parms.SuccessfulHit = SuccessfulHit;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Characters/Enemies/Husk/Blueprints/HuskPawn.HuskPawn_C:TakerSoulSuckSoundBegin
void AHuskPawn_C::TakerSoulSuckSoundBegin(bool Success)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Characters/Enemies/Husk/Blueprints/HuskPawn.HuskPawn_C:TakerSoulSuckSoundBegin");

	FAHuskPawn_C_TakerSoulSuckSoundBegin_Params Parms;

	Parms.Success = Success;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Characters/Enemies/Husk/Blueprints/HuskPawn.HuskPawn_C:TakerSoulSuckSoundEnd
void AHuskPawn_C::TakerSoulSuckSoundEnd()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Characters/Enemies/Husk/Blueprints/HuskPawn.HuskPawn_C:TakerSoulSuckSoundEnd");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Characters/Enemies/Husk/Blueprints/HuskPawn.HuskPawn_C:PortalAdd
void AHuskPawn_C::PortalAdd(class ABuildingActor* BuildingActor, TArray<class ABuildingActor*> BuildingActorList)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Characters/Enemies/Husk/Blueprints/HuskPawn.HuskPawn_C:PortalAdd");

	FAHuskPawn_C_PortalAdd_Params Parms;

	Parms.BuildingActor = BuildingActor;
	Parms.BuildingActorList = BuildingActorList;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Characters/Enemies/Husk/Blueprints/HuskPawn.HuskPawn_C:PortalClear
void AHuskPawn_C::PortalClear()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Characters/Enemies/Husk/Blueprints/HuskPawn.HuskPawn_C:PortalClear");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Characters/Enemies/Husk/Blueprints/HuskPawn.HuskPawn_C:TakerSoulSuckInterrupted
void AHuskPawn_C::TakerSoulSuckInterrupted()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Characters/Enemies/Husk/Blueprints/HuskPawn.HuskPawn_C:TakerSoulSuckInterrupted");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Characters/Enemies/Husk/Blueprints/HuskPawn.HuskPawn_C:PortalGet
void AHuskPawn_C::PortalGet(class ABuildingActor* BuildingActor, TArray<class ABuildingActor*> BuildingActorList, class AActor* BT)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Characters/Enemies/Husk/Blueprints/HuskPawn.HuskPawn_C:PortalGet");

	FAHuskPawn_C_PortalGet_Params Parms;

	Parms.BuildingActor = BuildingActor;
	Parms.BuildingActorList = BuildingActorList;
	Parms.BT = BT;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Characters/Enemies/Husk/Blueprints/HuskPawn.HuskPawn_C:PortalFX
void AHuskPawn_C::PortalFX()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Characters/Enemies/Husk/Blueprints/HuskPawn.HuskPawn_C:PortalFX");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Characters/Enemies/Husk/Blueprints/HuskPawn.HuskPawn_C:PortalCollision
void AHuskPawn_C::PortalCollision(bool Collide_)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Characters/Enemies/Husk/Blueprints/HuskPawn.HuskPawn_C:PortalCollision");

	FAHuskPawn_C_PortalCollision_Params Parms;

	Parms.Collide_ = Collide_;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Characters/Enemies/Husk/Blueprints/HuskPawn.HuskPawn_C:OnStunnedEffectBegin
void AHuskPawn_C::OnStunnedEffectBegin()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Characters/Enemies/Husk/Blueprints/HuskPawn.HuskPawn_C:OnStunnedEffectBegin");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Characters/Enemies/Husk/Blueprints/HuskPawn.HuskPawn_C:OnStunnedEffectEnd
void AHuskPawn_C::OnStunnedEffectEnd()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Characters/Enemies/Husk/Blueprints/HuskPawn.HuskPawn_C:OnStunnedEffectEnd");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Characters/Enemies/Husk/Blueprints/HuskPawn.HuskPawn_C:PawnUniqueIDSet
void AHuskPawn_C::PawnUniqueIDSet()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Characters/Enemies/Husk/Blueprints/HuskPawn.HuskPawn_C:PawnUniqueIDSet");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Characters/Enemies/Husk/Blueprints/HuskPawn.HuskPawn_C:OnBeginSleepEffects
void AHuskPawn_C::OnBeginSleepEffects()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Characters/Enemies/Husk/Blueprints/HuskPawn.HuskPawn_C:OnBeginSleepEffects");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Characters/Enemies/Husk/Blueprints/HuskPawn.HuskPawn_C:OnEndSleepEffects
void AHuskPawn_C::OnEndSleepEffects()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Characters/Enemies/Husk/Blueprints/HuskPawn.HuskPawn_C:OnEndSleepEffects");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Characters/Enemies/Husk/Blueprints/HuskPawn.HuskPawn_C:OnLanded
void AHuskPawn_C::OnLanded(FHitResult Hit)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Characters/Enemies/Husk/Blueprints/HuskPawn.HuskPawn_C:OnLanded");

	FAHuskPawn_C_OnLanded_Params Parms;

	Parms.Hit = Hit;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Characters/Enemies/Husk/Blueprints/HuskPawn.HuskPawn_C:OnDeathPlayEffects
void AHuskPawn_C::OnDeathPlayEffects(float Damage, FGameplayTagContainer DamageTags, FVector Momentum, FHitResult HitInfo, class AFortPawn* InstigatedBy, class AActor* DamageCauser, FGameplayEffectContextHandle EffectContext)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Characters/Enemies/Husk/Blueprints/HuskPawn.HuskPawn_C:OnDeathPlayEffects");

	FAHuskPawn_C_OnDeathPlayEffects_Params Parms;

	Parms.Damage = Damage;
	Parms.DamageTags = DamageTags;
	Parms.Momentum = Momentum;
	Parms.HitInfo = HitInfo;
	Parms.InstigatedBy = InstigatedBy;
	Parms.DamageCauser = DamageCauser;
	Parms.EffectContext = EffectContext;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Characters/Enemies/Husk/Blueprints/HuskPawn.HuskPawn_C:MantleStart
void AHuskPawn_C::MantleStart(FVector StartPos, FVector MidPos, FVector EndPos, bool LowWall, bool MidWall, bool FullWall, bool WindowWall)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Characters/Enemies/Husk/Blueprints/HuskPawn.HuskPawn_C:MantleStart");

	FAHuskPawn_C_MantleStart_Params Parms;

	Parms.StartPos = StartPos;
	Parms.MidPos = MidPos;
	Parms.EndPos = EndPos;
	Parms.LowWall = LowWall;
	Parms.MidWall = MidWall;
	Parms.FullWall = FullWall;
	Parms.WindowWall = WindowWall;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Characters/Enemies/Husk/Blueprints/HuskPawn.HuskPawn_C:MantleEnd
void AHuskPawn_C::MantleEnd()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Characters/Enemies/Husk/Blueprints/HuskPawn.HuskPawn_C:MantleEnd");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Characters/Enemies/Husk/Blueprints/HuskPawn.HuskPawn_C:PlayHuskAdditiveHitReacts
void AHuskPawn_C::PlayHuskAdditiveHitReacts(FVector HitDirection)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Characters/Enemies/Husk/Blueprints/HuskPawn.HuskPawn_C:PlayHuskAdditiveHitReacts");

	FAHuskPawn_C_PlayHuskAdditiveHitReacts_Params Parms;

	Parms.HitDirection = HitDirection;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Characters/Enemies/Husk/Blueprints/HuskPawn.HuskPawn_C:AdditiveHitReactDelay
void AHuskPawn_C::AdditiveHitReactDelay()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Characters/Enemies/Husk/Blueprints/HuskPawn.HuskPawn_C:AdditiveHitReactDelay");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Characters/Enemies/Husk/Blueprints/HuskPawn.HuskPawn_C:ReceiveTick
void AHuskPawn_C::ReceiveTick(float DeltaSeconds)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Characters/Enemies/Husk/Blueprints/HuskPawn.HuskPawn_C:ReceiveTick");

	FAHuskPawn_C_ReceiveTick_Params Parms;

	Parms.DeltaSeconds = DeltaSeconds;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Characters/Enemies/Husk/Blueprints/HuskPawn.HuskPawn_C:OnSpawnedFromRift
void AHuskPawn_C::OnSpawnedFromRift()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Characters/Enemies/Husk/Blueprints/HuskPawn.HuskPawn_C:OnSpawnedFromRift");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Characters/Enemies/Husk/Blueprints/HuskPawn.HuskPawn_C:OnForceSpawnEffectCompletion
void AHuskPawn_C::OnForceSpawnEffectCompletion()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Characters/Enemies/Husk/Blueprints/HuskPawn.HuskPawn_C:OnForceSpawnEffectCompletion");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Characters/Enemies/Husk/Blueprints/HuskPawn.HuskPawn_C:ReceiveBeginPlay
void AHuskPawn_C::ReceiveBeginPlay()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Characters/Enemies/Husk/Blueprints/HuskPawn.HuskPawn_C:ReceiveBeginPlay");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Characters/Enemies/Husk/Blueprints/HuskPawn.HuskPawn_C:OnDamagePlayEffects
void AHuskPawn_C::OnDamagePlayEffects(float Damage, FGameplayTagContainer DamageTags, FVector Momentum, FHitResult HitInfo, class AFortPawn* InstigatedBy, class AActor* DamageCauser, FGameplayEffectContextHandle EffectContext)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Characters/Enemies/Husk/Blueprints/HuskPawn.HuskPawn_C:OnDamagePlayEffects");

	FAHuskPawn_C_OnDamagePlayEffects_Params Parms;

	Parms.Damage = Damage;
	Parms.DamageTags = DamageTags;
	Parms.Momentum = Momentum;
	Parms.HitInfo = HitInfo;
	Parms.InstigatedBy = InstigatedBy;
	Parms.DamageCauser = DamageCauser;
	Parms.EffectContext = EffectContext;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Characters/Enemies/Husk/Blueprints/HuskPawn.HuskPawn_C:GameplayCue.Impact.Physical.Creature
void AHuskPawn_C::GameplayCue_Impact_Physical_Creature(EGameplayCueEvent EventType, FGameplayCueParameters Parameters)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Characters/Enemies/Husk/Blueprints/HuskPawn.HuskPawn_C:GameplayCue.Impact.Physical.Creature");

	FAHuskPawn_C_GameplayCue_Impact_Physical_Creature_Params Parms;

	Parms.EventType = EventType;
	Parms.Parameters = Parameters;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Characters/Enemies/Husk/Blueprints/HuskPawn.HuskPawn_C:ExecuteUbergraph_HuskPawn
void AHuskPawn_C::ExecuteUbergraph_HuskPawn(int32_t EntryPoint)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Characters/Enemies/Husk/Blueprints/HuskPawn.HuskPawn_C:ExecuteUbergraph_HuskPawn");

	FAHuskPawn_C_ExecuteUbergraph_HuskPawn_Params Parms;

	Parms.EntryPoint = EntryPoint;

	ProcessEvent(FN, &Parms);
}

