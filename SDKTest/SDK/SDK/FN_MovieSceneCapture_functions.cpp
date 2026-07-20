#include "pch.h"

#include "FN_MovieSceneCapture_classes.h"

UClass* UCompositionGraphCaptureSettings::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/MovieSceneCapture.CompositionGraphCaptureSettings");

	return Class;
}

UClass* UFrameGrabberProtocolSettings::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/MovieSceneCapture.FrameGrabberProtocolSettings");

	return Class;
}

UClass* UImageCaptureSettings::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/MovieSceneCapture.ImageCaptureSettings");

	return Class;
}

UClass* UVideoCaptureSettings::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/MovieSceneCapture.VideoCaptureSettings");

	return Class;
}

UClass* UMovieSceneCaptureInterface::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/MovieSceneCapture.MovieSceneCaptureInterface");

	return Class;
}

UClass* UMovieSceneCapture::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/MovieSceneCapture.MovieSceneCapture");

	return Class;
}

UClass* UAutomatedLevelSequenceCapture::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/MovieSceneCapture.AutomatedLevelSequenceCapture");

	return Class;
}

UClass* ULevelCapture::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/MovieSceneCapture.LevelCapture");

	return Class;
}

UClass* UMovieSceneCaptureEnvironment::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/MovieSceneCapture.MovieSceneCaptureEnvironment");

	return Class;
}

// Function /Script/MovieSceneCapture.MovieSceneCaptureEnvironment:GetCaptureFrameNumber
int32_t UMovieSceneCaptureEnvironment::GetCaptureFrameNumber()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/MovieSceneCapture.MovieSceneCaptureEnvironment:GetCaptureFrameNumber");

	FUMovieSceneCaptureEnvironment_GetCaptureFrameNumber_Params Parms;


	StaticClass()->ProcessEvent(FN, &Parms);
}

// Function /Script/MovieSceneCapture.MovieSceneCaptureEnvironment:GetCaptureElapsedTime
float UMovieSceneCaptureEnvironment::GetCaptureElapsedTime()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/MovieSceneCapture.MovieSceneCaptureEnvironment:GetCaptureElapsedTime");

	FUMovieSceneCaptureEnvironment_GetCaptureElapsedTime_Params Parms;


	StaticClass()->ProcessEvent(FN, &Parms);
}

UScriptStruct* FCompositionGraphCapturePasses::StaticStruct()
{
	static UScriptStruct* Struct = nullptr;
	if (!Struct)
		Struct = UObject::StaticFindObject<UScriptStruct>("/Script/MovieSceneCapture.CompositionGraphCapturePasses");

	return Struct;
}

UScriptStruct* FMovieSceneCaptureSettings::StaticStruct()
{
	static UScriptStruct* Struct = nullptr;
	if (!Struct)
		Struct = UObject::StaticFindObject<UScriptStruct>("/Script/MovieSceneCapture.MovieSceneCaptureSettings");

	return Struct;
}

UScriptStruct* FCaptureResolution::StaticStruct()
{
	static UScriptStruct* Struct = nullptr;
	if (!Struct)
		Struct = UObject::StaticFindObject<UScriptStruct>("/Script/MovieSceneCapture.CaptureResolution");

	return Struct;
}

UScriptStruct* FCaptureProtocolID::StaticStruct()
{
	static UScriptStruct* Struct = nullptr;
	if (!Struct)
		Struct = UObject::StaticFindObject<UScriptStruct>("/Script/MovieSceneCapture.CaptureProtocolID");

	return Struct;
}

