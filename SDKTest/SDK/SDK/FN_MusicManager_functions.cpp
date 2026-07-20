#include "pch.h"

#include "FN_MusicManager_classes.h"

UClass* AMusicManager_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Blueprints/MusicManager.MusicManager_C");

	return Class;
}

// Function /Game/Blueprints/MusicManager.MusicManager_C:ResetMusicBools
void AMusicManager_C::ResetMusicBools()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Blueprints/MusicManager.MusicManager_C:ResetMusicBools");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Blueprints/MusicManager.MusicManager_C:UserConstructionScript
void AMusicManager_C::UserConstructionScript()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Blueprints/MusicManager.MusicManager_C:UserConstructionScript");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Blueprints/MusicManager.MusicManager_C:OnDayPhaseChanged
void AMusicManager_C::OnDayPhaseChanged(EFortDayPhase CurrentDayPhase, EFortDayPhase PreviousDayPhase, bool bAtCreation)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Blueprints/MusicManager.MusicManager_C:OnDayPhaseChanged");

	FAMusicManager_C_OnDayPhaseChanged_Params Parms;

	Parms.CurrentDayPhase = CurrentDayPhase;
	Parms.PreviousDayPhase = PreviousDayPhase;
	Parms.bAtCreation = bAtCreation;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Blueprints/MusicManager.MusicManager_C:OnUpdateMusic
void AMusicManager_C::OnUpdateMusic()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Blueprints/MusicManager.MusicManager_C:OnUpdateMusic");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Blueprints/MusicManager.MusicManager_C:PlayDefaultMusic
void AMusicManager_C::PlayDefaultMusic()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Blueprints/MusicManager.MusicManager_C:PlayDefaultMusic");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Blueprints/MusicManager.MusicManager_C:ReceiveBeginPlay
void AMusicManager_C::ReceiveBeginPlay()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Blueprints/MusicManager.MusicManager_C:ReceiveBeginPlay");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Blueprints/MusicManager.MusicManager_C:ExecuteUbergraph_MusicManager
void AMusicManager_C::ExecuteUbergraph_MusicManager(int32_t EntryPoint)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Blueprints/MusicManager.MusicManager_C:ExecuteUbergraph_MusicManager");

	FAMusicManager_C_ExecuteUbergraph_MusicManager_Params Parms;

	Parms.EntryPoint = EntryPoint;

	ProcessEvent(FN, &Parms);
}

