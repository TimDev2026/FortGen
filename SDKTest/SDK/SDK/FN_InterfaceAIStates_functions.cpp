#include "pch.h"

#include "FN_InterfaceAIStates_classes.h"

UClass* UInterfaceAIStates_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Blueprints/InterfaceAIStates.InterfaceAIStates_C");

	return Class;
}

// Function /Game/Blueprints/InterfaceAIStates.InterfaceAIStates_C:PortalCollision
void UInterfaceAIStates_C::PortalCollision(bool Collide_)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Blueprints/InterfaceAIStates.InterfaceAIStates_C:PortalCollision");

	FUInterfaceAIStates_C_PortalCollision_Params Parms;

	Parms.Collide_ = Collide_;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Blueprints/InterfaceAIStates.InterfaceAIStates_C:PortalFX
void UInterfaceAIStates_C::PortalFX()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Blueprints/InterfaceAIStates.InterfaceAIStates_C:PortalFX");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Blueprints/InterfaceAIStates.InterfaceAIStates_C:PortalGet
void UInterfaceAIStates_C::PortalGet(class ABuildingActor* BuildingActor, TArray<class ABuildingActor*> BuildingActorList, class AActor* BT)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Blueprints/InterfaceAIStates.InterfaceAIStates_C:PortalGet");

	FUInterfaceAIStates_C_PortalGet_Params Parms;

	Parms.BuildingActor = BuildingActor;
	Parms.BuildingActorList = BuildingActorList;
	Parms.BT = BT;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Blueprints/InterfaceAIStates.InterfaceAIStates_C:TakerSoulSuckInterrupted
void UInterfaceAIStates_C::TakerSoulSuckInterrupted()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Blueprints/InterfaceAIStates.InterfaceAIStates_C:TakerSoulSuckInterrupted");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Blueprints/InterfaceAIStates.InterfaceAIStates_C:PortalClear
void UInterfaceAIStates_C::PortalClear()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Blueprints/InterfaceAIStates.InterfaceAIStates_C:PortalClear");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Blueprints/InterfaceAIStates.InterfaceAIStates_C:PortalAdd
void UInterfaceAIStates_C::PortalAdd(class ABuildingActor* BuildingActor, TArray<class ABuildingActor*> BuildingActorList)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Blueprints/InterfaceAIStates.InterfaceAIStates_C:PortalAdd");

	FUInterfaceAIStates_C_PortalAdd_Params Parms;

	Parms.BuildingActor = BuildingActor;
	Parms.BuildingActorList = BuildingActorList;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Blueprints/InterfaceAIStates.InterfaceAIStates_C:TakerSoulSuckSoundEnd
void UInterfaceAIStates_C::TakerSoulSuckSoundEnd()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Blueprints/InterfaceAIStates.InterfaceAIStates_C:TakerSoulSuckSoundEnd");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Blueprints/InterfaceAIStates.InterfaceAIStates_C:TakerSoulSuckSoundBegin
void UInterfaceAIStates_C::TakerSoulSuckSoundBegin(bool Success)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Blueprints/InterfaceAIStates.InterfaceAIStates_C:TakerSoulSuckSoundBegin");

	FUInterfaceAIStates_C_TakerSoulSuckSoundBegin_Params Parms;

	Parms.Success = Success;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Blueprints/InterfaceAIStates.InterfaceAIStates_C:TakerAttackFSM
void UInterfaceAIStates_C::TakerAttackFSM(bool SuccessfulHit)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Blueprints/InterfaceAIStates.InterfaceAIStates_C:TakerAttackFSM");

	FUInterfaceAIStates_C_TakerAttackFSM_Params Parms;

	Parms.SuccessfulHit = SuccessfulHit;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Blueprints/InterfaceAIStates.InterfaceAIStates_C:IsTakerWallPortalAvailable
void UInterfaceAIStates_C::IsTakerWallPortalAvailable(bool Portal_Available_)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Blueprints/InterfaceAIStates.InterfaceAIStates_C:IsTakerWallPortalAvailable");

	FUInterfaceAIStates_C_IsTakerWallPortalAvailable_Params Parms;

	Parms.Portal_Available_ = Portal_Available_;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Blueprints/InterfaceAIStates.InterfaceAIStates_C:TakerWallPortalBehavior
void UInterfaceAIStates_C::TakerWallPortalBehavior(class AActor* BuildingPart, class UBTTask_BlueprintBase* Task, FVector DesiredMoveLocation, bool Debug)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Blueprints/InterfaceAIStates.InterfaceAIStates_C:TakerWallPortalBehavior");

	FUInterfaceAIStates_C_TakerWallPortalBehavior_Params Parms;

	Parms.BuildingPart = BuildingPart;
	Parms.Task = Task;
	Parms.DesiredMoveLocation = DesiredMoveLocation;
	Parms.Debug = Debug;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Blueprints/InterfaceAIStates.InterfaceAIStates_C:EndTakerSwoopAttack
void UInterfaceAIStates_C::EndTakerSwoopAttack()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Blueprints/InterfaceAIStates.InterfaceAIStates_C:EndTakerSwoopAttack");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Blueprints/InterfaceAIStates.InterfaceAIStates_C:BeginTakerSwoopAttack
void UInterfaceAIStates_C::BeginTakerSwoopAttack()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Blueprints/InterfaceAIStates.InterfaceAIStates_C:BeginTakerSwoopAttack");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Blueprints/InterfaceAIStates.InterfaceAIStates_C:ResetTakerSpecialAttackTimer
void UInterfaceAIStates_C::ResetTakerSpecialAttackTimer(bool Swoop, bool SoulSuckMelee, bool Portal)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Blueprints/InterfaceAIStates.InterfaceAIStates_C:ResetTakerSpecialAttackTimer");

	FUInterfaceAIStates_C_ResetTakerSpecialAttackTimer_Params Parms;

	Parms.Swoop = Swoop;
	Parms.SoulSuckMelee = SoulSuckMelee;
	Parms.Portal = Portal;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Blueprints/InterfaceAIStates.InterfaceAIStates_C:VerifyTakerAttack
void UInterfaceAIStates_C::VerifyTakerAttack(bool SpecialAttack, bool Swoop, bool Soul_Suck, bool Portal)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Blueprints/InterfaceAIStates.InterfaceAIStates_C:VerifyTakerAttack");

	FUInterfaceAIStates_C_VerifyTakerAttack_Params Parms;

	Parms.SpecialAttack = SpecialAttack;
	Parms.Swoop = Swoop;
	Parms.Soul_Suck = Soul_Suck;
	Parms.Portal = Portal;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Blueprints/InterfaceAIStates.InterfaceAIStates_C:HuskEvadeStart
void UInterfaceAIStates_C::HuskEvadeStart()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Blueprints/InterfaceAIStates.InterfaceAIStates_C:HuskEvadeStart");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Blueprints/InterfaceAIStates.InterfaceAIStates_C:MantleEnd
void UInterfaceAIStates_C::MantleEnd()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Blueprints/InterfaceAIStates.InterfaceAIStates_C:MantleEnd");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Blueprints/InterfaceAIStates.InterfaceAIStates_C:MantleStart
void UInterfaceAIStates_C::MantleStart(FVector StartPos, FVector MidPos, FVector EndPos, bool LowWall, bool MidWall, bool FullWall, bool WindowWall)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Blueprints/InterfaceAIStates.InterfaceAIStates_C:MantleStart");

	FUInterfaceAIStates_C_MantleStart_Params Parms;

	Parms.StartPos = StartPos;
	Parms.MidPos = MidPos;
	Parms.EndPos = EndPos;
	Parms.LowWall = LowWall;
	Parms.MidWall = MidWall;
	Parms.FullWall = FullWall;
	Parms.WindowWall = WindowWall;

	ProcessEvent(FN, &Parms);
}

