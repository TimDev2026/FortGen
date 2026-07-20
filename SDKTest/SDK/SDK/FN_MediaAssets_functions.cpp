#include "pch.h"

#include "FN_MediaAssets_classes.h"

UClass* UMediaPlayer::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/MediaAssets.MediaPlayer");

	return Class;
}

// Function /Script/MediaAssets.MediaPlayer:SupportsSeeking
bool UMediaPlayer::SupportsSeeking() const
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/MediaAssets.MediaPlayer:SupportsSeeking");

	FUMediaPlayer_SupportsSeeking_Params Parms;


	ProcessEvent(FN, &Parms);
}

// Function /Script/MediaAssets.MediaPlayer:SupportsScrubbing
bool UMediaPlayer::SupportsScrubbing() const
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/MediaAssets.MediaPlayer:SupportsScrubbing");

	FUMediaPlayer_SupportsScrubbing_Params Parms;


	ProcessEvent(FN, &Parms);
}

// Function /Script/MediaAssets.MediaPlayer:SupportsRate
bool UMediaPlayer::SupportsRate(float Rate, bool Unthinned) const
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/MediaAssets.MediaPlayer:SupportsRate");

	FUMediaPlayer_SupportsRate_Params Parms;

	Parms.Rate = Rate;
	Parms.Unthinned = Unthinned;

	ProcessEvent(FN, &Parms);
}

// Function /Script/MediaAssets.MediaPlayer:SetRate
bool UMediaPlayer::SetRate(float Rate)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/MediaAssets.MediaPlayer:SetRate");

	FUMediaPlayer_SetRate_Params Parms;

	Parms.Rate = Rate;

	ProcessEvent(FN, &Parms);
}

// Function /Script/MediaAssets.MediaPlayer:SetLooping
bool UMediaPlayer::SetLooping(bool InLooping)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/MediaAssets.MediaPlayer:SetLooping");

	FUMediaPlayer_SetLooping_Params Parms;

	Parms.InLooping = InLooping;

	ProcessEvent(FN, &Parms);
}

// Function /Script/MediaAssets.MediaPlayer:Seek
bool UMediaPlayer::Seek(FTimespan InTime)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/MediaAssets.MediaPlayer:Seek");

	FUMediaPlayer_Seek_Params Parms;

	Parms.InTime = InTime;

	ProcessEvent(FN, &Parms);
}

// Function /Script/MediaAssets.MediaPlayer:Rewind
bool UMediaPlayer::Rewind()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/MediaAssets.MediaPlayer:Rewind");

	FUMediaPlayer_Rewind_Params Parms;


	ProcessEvent(FN, &Parms);
}

// Function /Script/MediaAssets.MediaPlayer:Play
bool UMediaPlayer::Play()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/MediaAssets.MediaPlayer:Play");

	FUMediaPlayer_Play_Params Parms;


	ProcessEvent(FN, &Parms);
}

// Function /Script/MediaAssets.MediaPlayer:Pause
bool UMediaPlayer::Pause()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/MediaAssets.MediaPlayer:Pause");

	FUMediaPlayer_Pause_Params Parms;


	ProcessEvent(FN, &Parms);
}

// Function /Script/MediaAssets.MediaPlayer:OpenUrl
bool UMediaPlayer::OpenUrl(FString NewUrl)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/MediaAssets.MediaPlayer:OpenUrl");

	FUMediaPlayer_OpenUrl_Params Parms;

	Parms.NewUrl = NewUrl;

	ProcessEvent(FN, &Parms);
}

// Function /Script/MediaAssets.MediaPlayer:IsReady
bool UMediaPlayer::IsReady() const
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/MediaAssets.MediaPlayer:IsReady");

	FUMediaPlayer_IsReady_Params Parms;


	ProcessEvent(FN, &Parms);
}

// Function /Script/MediaAssets.MediaPlayer:IsPlaying
bool UMediaPlayer::IsPlaying() const
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/MediaAssets.MediaPlayer:IsPlaying");

	FUMediaPlayer_IsPlaying_Params Parms;


	ProcessEvent(FN, &Parms);
}

// Function /Script/MediaAssets.MediaPlayer:IsPaused
bool UMediaPlayer::IsPaused() const
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/MediaAssets.MediaPlayer:IsPaused");

	FUMediaPlayer_IsPaused_Params Parms;


	ProcessEvent(FN, &Parms);
}

// Function /Script/MediaAssets.MediaPlayer:IsLooping
bool UMediaPlayer::IsLooping() const
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/MediaAssets.MediaPlayer:IsLooping");

	FUMediaPlayer_IsLooping_Params Parms;


	ProcessEvent(FN, &Parms);
}

// Function /Script/MediaAssets.MediaPlayer:GetUrl
FString UMediaPlayer::GetUrl() const
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/MediaAssets.MediaPlayer:GetUrl");

	FUMediaPlayer_GetUrl_Params Parms;


	ProcessEvent(FN, &Parms);
}

// Function /Script/MediaAssets.MediaPlayer:GetTime
FTimespan UMediaPlayer::GetTime() const
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/MediaAssets.MediaPlayer:GetTime");

	FUMediaPlayer_GetTime_Params Parms;


	ProcessEvent(FN, &Parms);
}

// Function /Script/MediaAssets.MediaPlayer:GetRate
float UMediaPlayer::GetRate() const
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/MediaAssets.MediaPlayer:GetRate");

	FUMediaPlayer_GetRate_Params Parms;


	ProcessEvent(FN, &Parms);
}

// Function /Script/MediaAssets.MediaPlayer:GetDuration
FTimespan UMediaPlayer::GetDuration() const
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/MediaAssets.MediaPlayer:GetDuration");

	FUMediaPlayer_GetDuration_Params Parms;


	ProcessEvent(FN, &Parms);
}

// Function /Script/MediaAssets.MediaPlayer:Close
void UMediaPlayer::Close()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/MediaAssets.MediaPlayer:Close");

	ProcessEvent(FN, nullptr);
}

// Function /Script/MediaAssets.MediaPlayer:CanPlay
bool UMediaPlayer::CanPlay() const
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/MediaAssets.MediaPlayer:CanPlay");

	FUMediaPlayer_CanPlay_Params Parms;


	ProcessEvent(FN, &Parms);
}

// Function /Script/MediaAssets.MediaPlayer:CanPause
bool UMediaPlayer::CanPause() const
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/MediaAssets.MediaPlayer:CanPause");

	FUMediaPlayer_CanPause_Params Parms;


	ProcessEvent(FN, &Parms);
}

UClass* UMediaSoundWave::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/MediaAssets.MediaSoundWave");

	return Class;
}

// Function /Script/MediaAssets.MediaSoundWave:SetMediaPlayer
void UMediaSoundWave::SetMediaPlayer(class UMediaPlayer* InMediaPlayer)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/MediaAssets.MediaSoundWave:SetMediaPlayer");

	FUMediaSoundWave_SetMediaPlayer_Params Parms;

	Parms.InMediaPlayer = InMediaPlayer;

	ProcessEvent(FN, &Parms);
}

UClass* UMediaTexture::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/MediaAssets.MediaTexture");

	return Class;
}

// Function /Script/MediaAssets.MediaTexture:SetMediaPlayer
void UMediaTexture::SetMediaPlayer(class UMediaPlayer* InMediaPlayer)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/MediaAssets.MediaTexture:SetMediaPlayer");

	FUMediaTexture_SetMediaPlayer_Params Parms;

	Parms.InMediaPlayer = InMediaPlayer;

	ProcessEvent(FN, &Parms);
}

