#include "pch.h"

#include "FN_GameLiveStreaming_classes.h"

UClass* UGameLiveStreamingFunctionLibrary::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/GameLiveStreaming.GameLiveStreamingFunctionLibrary");

	return Class;
}

// Function /Script/GameLiveStreaming.GameLiveStreamingFunctionLibrary:StopWebCam
void UGameLiveStreamingFunctionLibrary::StopWebCam()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/GameLiveStreaming.GameLiveStreamingFunctionLibrary:StopWebCam");

	StaticClass()->ProcessEvent(FN, nullptr);
}

// Function /Script/GameLiveStreaming.GameLiveStreamingFunctionLibrary:StopBroadcastingGame
void UGameLiveStreamingFunctionLibrary::StopBroadcastingGame()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/GameLiveStreaming.GameLiveStreamingFunctionLibrary:StopBroadcastingGame");

	StaticClass()->ProcessEvent(FN, nullptr);
}

// Function /Script/GameLiveStreaming.GameLiveStreamingFunctionLibrary:StartWebCam
void UGameLiveStreamingFunctionLibrary::StartWebCam(int32_t DesiredWebCamWidth, int32_t DesiredWebCamHeight, bool bMirrorWebCamImage, bool bDrawSimpleWebCamVideo)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/GameLiveStreaming.GameLiveStreamingFunctionLibrary:StartWebCam");

	FUGameLiveStreamingFunctionLibrary_StartWebCam_Params Parms;

	Parms.DesiredWebCamWidth = DesiredWebCamWidth;
	Parms.DesiredWebCamHeight = DesiredWebCamHeight;
	Parms.bMirrorWebCamImage = bMirrorWebCamImage;
	Parms.bDrawSimpleWebCamVideo = bDrawSimpleWebCamVideo;

	StaticClass()->ProcessEvent(FN, &Parms);
}

// Function /Script/GameLiveStreaming.GameLiveStreamingFunctionLibrary:StartBroadcastingGame
void UGameLiveStreamingFunctionLibrary::StartBroadcastingGame(FString LoginUserName, FString LoginPassword, int32_t FrameRate, float ScreenScaling, bool bStartWebCam, int32_t DesiredWebCamWidth, int32_t DesiredWebCamHeight, bool bMirrorWebCamImage, bool bDrawSimpleWebCamVideo, bool bCaptureAudioFromComputer, bool bCaptureAudioFromMicrophone, class UTexture2D* CoverUpImage)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/GameLiveStreaming.GameLiveStreamingFunctionLibrary:StartBroadcastingGame");

	FUGameLiveStreamingFunctionLibrary_StartBroadcastingGame_Params Parms;

	Parms.LoginUserName = LoginUserName;
	Parms.LoginPassword = LoginPassword;
	Parms.FrameRate = FrameRate;
	Parms.ScreenScaling = ScreenScaling;
	Parms.bStartWebCam = bStartWebCam;
	Parms.DesiredWebCamWidth = DesiredWebCamWidth;
	Parms.DesiredWebCamHeight = DesiredWebCamHeight;
	Parms.bMirrorWebCamImage = bMirrorWebCamImage;
	Parms.bDrawSimpleWebCamVideo = bDrawSimpleWebCamVideo;
	Parms.bCaptureAudioFromComputer = bCaptureAudioFromComputer;
	Parms.bCaptureAudioFromMicrophone = bCaptureAudioFromMicrophone;
	Parms.CoverUpImage = CoverUpImage;

	StaticClass()->ProcessEvent(FN, &Parms);
}

// Function /Script/GameLiveStreaming.GameLiveStreamingFunctionLibrary:IsWebCamEnabled
bool UGameLiveStreamingFunctionLibrary::IsWebCamEnabled()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/GameLiveStreaming.GameLiveStreamingFunctionLibrary:IsWebCamEnabled");

	FUGameLiveStreamingFunctionLibrary_IsWebCamEnabled_Params Parms;


	StaticClass()->ProcessEvent(FN, &Parms);
}

// Function /Script/GameLiveStreaming.GameLiveStreamingFunctionLibrary:IsBroadcastingGame
bool UGameLiveStreamingFunctionLibrary::IsBroadcastingGame()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/GameLiveStreaming.GameLiveStreamingFunctionLibrary:IsBroadcastingGame");

	FUGameLiveStreamingFunctionLibrary_IsBroadcastingGame_Params Parms;


	StaticClass()->ProcessEvent(FN, &Parms);
}

UClass* UQueryLiveStreamsCallbackProxy::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/GameLiveStreaming.QueryLiveStreamsCallbackProxy");

	return Class;
}

// Function /Script/GameLiveStreaming.QueryLiveStreamsCallbackProxy:QueryLiveStreams
class UQueryLiveStreamsCallbackProxy* UQueryLiveStreamsCallbackProxy::QueryLiveStreams(FString GameName)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/GameLiveStreaming.QueryLiveStreamsCallbackProxy:QueryLiveStreams");

	FUQueryLiveStreamsCallbackProxy_QueryLiveStreams_Params Parms;

	Parms.GameName = GameName;

	StaticClass()->ProcessEvent(FN, &Parms);
}

UScriptStruct* FBlueprintLiveStreamInfo::StaticStruct()
{
	static UScriptStruct* Struct = nullptr;
	if (!Struct)
		Struct = UObject::StaticFindObject<UScriptStruct>("/Script/GameLiveStreaming.BlueprintLiveStreamInfo");

	return Struct;
}

