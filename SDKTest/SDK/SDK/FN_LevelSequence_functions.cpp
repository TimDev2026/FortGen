#include "pch.h"

#include "FN_LevelSequence_classes.h"

UClass* ULevelSequence::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/LevelSequence.LevelSequence");

	return Class;
}

UClass* ULevelSequencePlayer::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/LevelSequence.LevelSequencePlayer");

	return Class;
}

// Function /Script/LevelSequence.LevelSequencePlayer:Stop
void ULevelSequencePlayer::Stop()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/LevelSequence.LevelSequencePlayer:Stop");

	ProcessEvent(FN, nullptr);
}

// Function /Script/LevelSequence.LevelSequencePlayer:SetPlayRate
void ULevelSequencePlayer::SetPlayRate(float PlayRate)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/LevelSequence.LevelSequencePlayer:SetPlayRate");

	FULevelSequencePlayer_SetPlayRate_Params Parms;

	Parms.PlayRate = PlayRate;

	ProcessEvent(FN, &Parms);
}

// Function /Script/LevelSequence.LevelSequencePlayer:SetPlaybackRange
void ULevelSequencePlayer::SetPlaybackRange(float NewStartTime, float NewEndTime)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/LevelSequence.LevelSequencePlayer:SetPlaybackRange");

	FULevelSequencePlayer_SetPlaybackRange_Params Parms;

	Parms.NewStartTime = NewStartTime;
	Parms.NewEndTime = NewEndTime;

	ProcessEvent(FN, &Parms);
}

// Function /Script/LevelSequence.LevelSequencePlayer:SetPlaybackPosition
void ULevelSequencePlayer::SetPlaybackPosition(float NewPlaybackPosition)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/LevelSequence.LevelSequencePlayer:SetPlaybackPosition");

	FULevelSequencePlayer_SetPlaybackPosition_Params Parms;

	Parms.NewPlaybackPosition = NewPlaybackPosition;

	ProcessEvent(FN, &Parms);
}

// Function /Script/LevelSequence.LevelSequencePlayer:PlayLooping
void ULevelSequencePlayer::PlayLooping(int32_t NumLoops)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/LevelSequence.LevelSequencePlayer:PlayLooping");

	FULevelSequencePlayer_PlayLooping_Params Parms;

	Parms.NumLoops = NumLoops;

	ProcessEvent(FN, &Parms);
}

// Function /Script/LevelSequence.LevelSequencePlayer:Play
void ULevelSequencePlayer::Play()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/LevelSequence.LevelSequencePlayer:Play");

	ProcessEvent(FN, nullptr);
}

// Function /Script/LevelSequence.LevelSequencePlayer:Pause
void ULevelSequencePlayer::Pause()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/LevelSequence.LevelSequencePlayer:Pause");

	ProcessEvent(FN, nullptr);
}

// Function /Script/LevelSequence.LevelSequencePlayer:IsPlaying
bool ULevelSequencePlayer::IsPlaying() const
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/LevelSequence.LevelSequencePlayer:IsPlaying");

	FULevelSequencePlayer_IsPlaying_Params Parms;


	ProcessEvent(FN, &Parms);
}

// Function /Script/LevelSequence.LevelSequencePlayer:GetPlayRate
float ULevelSequencePlayer::GetPlayRate() const
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/LevelSequence.LevelSequencePlayer:GetPlayRate");

	FULevelSequencePlayer_GetPlayRate_Params Parms;


	ProcessEvent(FN, &Parms);
}

// Function /Script/LevelSequence.LevelSequencePlayer:GetPlaybackPosition
float ULevelSequencePlayer::GetPlaybackPosition() const
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/LevelSequence.LevelSequencePlayer:GetPlaybackPosition");

	FULevelSequencePlayer_GetPlaybackPosition_Params Parms;


	ProcessEvent(FN, &Parms);
}

// Function /Script/LevelSequence.LevelSequencePlayer:GetLength
float ULevelSequencePlayer::GetLength() const
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/LevelSequence.LevelSequencePlayer:GetLength");

	FULevelSequencePlayer_GetLength_Params Parms;


	ProcessEvent(FN, &Parms);
}

// Function /Script/LevelSequence.LevelSequencePlayer:CreateLevelSequencePlayer
class ULevelSequencePlayer* ULevelSequencePlayer::CreateLevelSequencePlayer(class UObject* WorldContextObject, class ULevelSequence* LevelSequence, FLevelSequencePlaybackSettings Settings)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/LevelSequence.LevelSequencePlayer:CreateLevelSequencePlayer");

	FULevelSequencePlayer_CreateLevelSequencePlayer_Params Parms;

	Parms.WorldContextObject = WorldContextObject;
	Parms.LevelSequence = LevelSequence;
	Parms.Settings = Settings;

	StaticClass()->ProcessEvent(FN, &Parms);
}

UClass* ALevelSequenceActor::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/LevelSequence.LevelSequenceActor");

	return Class;
}

// Function /Script/LevelSequence.LevelSequenceActor:SetSequence
void ALevelSequenceActor::SetSequence(class ULevelSequence* InSequence)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/LevelSequence.LevelSequenceActor:SetSequence");

	FALevelSequenceActor_SetSequence_Params Parms;

	Parms.InSequence = InSequence;

	ProcessEvent(FN, &Parms);
}

UScriptStruct* FLevelSequenceObject::StaticStruct()
{
	static UScriptStruct* Struct = nullptr;
	if (!Struct)
		Struct = UObject::StaticFindObject<UScriptStruct>("/Script/LevelSequence.LevelSequenceObject");

	return Struct;
}

UScriptStruct* FLevelSequenceObjectReferenceMap::StaticStruct()
{
	static UScriptStruct* Struct = nullptr;
	if (!Struct)
		Struct = UObject::StaticFindObject<UScriptStruct>("/Script/LevelSequence.LevelSequenceObjectReferenceMap");

	return Struct;
}

UScriptStruct* FLevelSequenceObjectReference::StaticStruct()
{
	static UScriptStruct* Struct = nullptr;
	if (!Struct)
		Struct = UObject::StaticFindObject<UScriptStruct>("/Script/LevelSequence.LevelSequenceObjectReference");

	return Struct;
}

UScriptStruct* FLevelSequencePlaybackSettings::StaticStruct()
{
	static UScriptStruct* Struct = nullptr;
	if (!Struct)
		Struct = UObject::StaticFindObject<UScriptStruct>("/Script/LevelSequence.LevelSequencePlaybackSettings");

	return Struct;
}

