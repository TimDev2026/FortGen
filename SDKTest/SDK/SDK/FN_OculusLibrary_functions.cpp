#include "pch.h"

#include "FN_OculusLibrary_classes.h"

UClass* UOculusFunctionLibrary::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/OculusLibrary.OculusFunctionLibrary");

	return Class;
}

// Function /Script/OculusLibrary.OculusFunctionLibrary:SetPositionScale3D
void UOculusFunctionLibrary::SetPositionScale3D(FVector PosScale3D)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/OculusLibrary.OculusFunctionLibrary:SetPositionScale3D");

	FUOculusFunctionLibrary_SetPositionScale3D_Params Parms;

	Parms.PosScale3D = PosScale3D;

	StaticClass()->ProcessEvent(FN, &Parms);
}

// Function /Script/OculusLibrary.OculusFunctionLibrary:SetBaseRotationAndPositionOffset
void UOculusFunctionLibrary::SetBaseRotationAndPositionOffset(FRotator BaseRot, FVector PosOffset, EOrientPositionSelector Options)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/OculusLibrary.OculusFunctionLibrary:SetBaseRotationAndPositionOffset");

	FUOculusFunctionLibrary_SetBaseRotationAndPositionOffset_Params Parms;

	Parms.BaseRot = BaseRot;
	Parms.PosOffset = PosOffset;
	Parms.Options = Options;

	StaticClass()->ProcessEvent(FN, &Parms);
}

// Function /Script/OculusLibrary.OculusFunctionLibrary:SetBaseRotationAndBaseOffsetInMeters
void UOculusFunctionLibrary::SetBaseRotationAndBaseOffsetInMeters(FRotator Rotation, FVector BaseOffsetInMeters, EOrientPositionSelector Options)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/OculusLibrary.OculusFunctionLibrary:SetBaseRotationAndBaseOffsetInMeters");

	FUOculusFunctionLibrary_SetBaseRotationAndBaseOffsetInMeters_Params Parms;

	Parms.Rotation = Rotation;
	Parms.BaseOffsetInMeters = BaseOffsetInMeters;
	Parms.Options = Options;

	StaticClass()->ProcessEvent(FN, &Parms);
}

// Function /Script/OculusLibrary.OculusFunctionLibrary:IsPlayerControllerFollowHmdEnabled
bool UOculusFunctionLibrary::IsPlayerControllerFollowHmdEnabled()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/OculusLibrary.OculusFunctionLibrary:IsPlayerControllerFollowHmdEnabled");

	FUOculusFunctionLibrary_IsPlayerControllerFollowHmdEnabled_Params Parms;


	StaticClass()->ProcessEvent(FN, &Parms);
}

// Function /Script/OculusLibrary.OculusFunctionLibrary:GetUserProfile
bool UOculusFunctionLibrary::GetUserProfile(FHmdUserProfile Profile)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/OculusLibrary.OculusFunctionLibrary:GetUserProfile");

	FUOculusFunctionLibrary_GetUserProfile_Params Parms;

	Parms.Profile = Profile;

	StaticClass()->ProcessEvent(FN, &Parms);
}

// Function /Script/OculusLibrary.OculusFunctionLibrary:GetRawSensorData
void UOculusFunctionLibrary::GetRawSensorData(FVector Accelerometer, FVector Gyro, FVector Magnetometer, float Temperature, float TimeInSeconds)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/OculusLibrary.OculusFunctionLibrary:GetRawSensorData");

	FUOculusFunctionLibrary_GetRawSensorData_Params Parms;

	Parms.Accelerometer = Accelerometer;
	Parms.Gyro = Gyro;
	Parms.Magnetometer = Magnetometer;
	Parms.Temperature = Temperature;
	Parms.TimeInSeconds = TimeInSeconds;

	StaticClass()->ProcessEvent(FN, &Parms);
}

// Function /Script/OculusLibrary.OculusFunctionLibrary:GetPose
void UOculusFunctionLibrary::GetPose(FRotator DeviceRotation, FVector DevicePosition, FVector NeckPosition, bool bUseOrienationForPlayerCamera, bool bUsePositionForPlayerCamera, FVector PositionScale)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/OculusLibrary.OculusFunctionLibrary:GetPose");

	FUOculusFunctionLibrary_GetPose_Params Parms;

	Parms.DeviceRotation = DeviceRotation;
	Parms.DevicePosition = DevicePosition;
	Parms.NeckPosition = NeckPosition;
	Parms.bUseOrienationForPlayerCamera = bUseOrienationForPlayerCamera;
	Parms.bUsePositionForPlayerCamera = bUsePositionForPlayerCamera;
	Parms.PositionScale = PositionScale;

	StaticClass()->ProcessEvent(FN, &Parms);
}

// Function /Script/OculusLibrary.OculusFunctionLibrary:GetPlayerCameraManagerFollowHmd
void UOculusFunctionLibrary::GetPlayerCameraManagerFollowHmd(bool bFollowHmdOrientation, bool bFollowHmdPosition)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/OculusLibrary.OculusFunctionLibrary:GetPlayerCameraManagerFollowHmd");

	FUOculusFunctionLibrary_GetPlayerCameraManagerFollowHmd_Params Parms;

	Parms.bFollowHmdOrientation = bFollowHmdOrientation;
	Parms.bFollowHmdPosition = bFollowHmdPosition;

	StaticClass()->ProcessEvent(FN, &Parms);
}

// Function /Script/OculusLibrary.OculusFunctionLibrary:GetBaseRotationAndPositionOffset
void UOculusFunctionLibrary::GetBaseRotationAndPositionOffset(FRotator OutRot, FVector OutPosOffset)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/OculusLibrary.OculusFunctionLibrary:GetBaseRotationAndPositionOffset");

	FUOculusFunctionLibrary_GetBaseRotationAndPositionOffset_Params Parms;

	Parms.OutRot = OutRot;
	Parms.OutPosOffset = OutPosOffset;

	StaticClass()->ProcessEvent(FN, &Parms);
}

// Function /Script/OculusLibrary.OculusFunctionLibrary:GetBaseRotationAndBaseOffsetInMeters
void UOculusFunctionLibrary::GetBaseRotationAndBaseOffsetInMeters(FRotator OutRotation, FVector OutBaseOffsetInMeters)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/OculusLibrary.OculusFunctionLibrary:GetBaseRotationAndBaseOffsetInMeters");

	FUOculusFunctionLibrary_GetBaseRotationAndBaseOffsetInMeters_Params Parms;

	Parms.OutRotation = OutRotation;
	Parms.OutBaseOffsetInMeters = OutBaseOffsetInMeters;

	StaticClass()->ProcessEvent(FN, &Parms);
}

// Function /Script/OculusLibrary.OculusFunctionLibrary:EnablePlayerControllerFollowHmd
void UOculusFunctionLibrary::EnablePlayerControllerFollowHmd(bool bEnable)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/OculusLibrary.OculusFunctionLibrary:EnablePlayerControllerFollowHmd");

	FUOculusFunctionLibrary_EnablePlayerControllerFollowHmd_Params Parms;

	Parms.bEnable = bEnable;

	StaticClass()->ProcessEvent(FN, &Parms);
}

// Function /Script/OculusLibrary.OculusFunctionLibrary:EnablePlayerCameraManagerFollowHmd
void UOculusFunctionLibrary::EnablePlayerCameraManagerFollowHmd(bool bFollowHmdOrientation, bool bFollowHmdPosition)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/OculusLibrary.OculusFunctionLibrary:EnablePlayerCameraManagerFollowHmd");

	FUOculusFunctionLibrary_EnablePlayerCameraManagerFollowHmd_Params Parms;

	Parms.bFollowHmdOrientation = bFollowHmdOrientation;
	Parms.bFollowHmdPosition = bFollowHmdPosition;

	StaticClass()->ProcessEvent(FN, &Parms);
}

UScriptStruct* FHmdUserProfile::StaticStruct()
{
	static UScriptStruct* Struct = nullptr;
	if (!Struct)
		Struct = UObject::StaticFindObject<UScriptStruct>("/Script/OculusLibrary.HmdUserProfile");

	return Struct;
}

UScriptStruct* FHmdUserProfileField::StaticStruct()
{
	static UScriptStruct* Struct = nullptr;
	if (!Struct)
		Struct = UObject::StaticFindObject<UScriptStruct>("/Script/OculusLibrary.HmdUserProfileField");

	return Struct;
}

