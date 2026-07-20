#include "pch.h"

#include "FN_BP_AnimNotifyState_CameraAnim_classes.h"

UClass* UBP_AnimNotifyState_CameraAnim_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Animation/Game/BP_AnimNotifyState_CameraAnim.BP_AnimNotifyState_CameraAnim_C");

	return Class;
}

// Function /Game/Animation/Game/BP_AnimNotifyState_CameraAnim.BP_AnimNotifyState_CameraAnim_C:Received_NotifyEnd
bool UBP_AnimNotifyState_CameraAnim_C::Received_NotifyEnd(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation) const
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Animation/Game/BP_AnimNotifyState_CameraAnim.BP_AnimNotifyState_CameraAnim_C:Received_NotifyEnd");

	FUBP_AnimNotifyState_CameraAnim_C_Received_NotifyEnd_Params Parms;

	Parms.MeshComp = MeshComp;
	Parms.Animation = Animation;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Animation/Game/BP_AnimNotifyState_CameraAnim.BP_AnimNotifyState_CameraAnim_C:Received_NotifyBegin
bool UBP_AnimNotifyState_CameraAnim_C::Received_NotifyBegin(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, float TotalDuration) const
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Animation/Game/BP_AnimNotifyState_CameraAnim.BP_AnimNotifyState_CameraAnim_C:Received_NotifyBegin");

	FUBP_AnimNotifyState_CameraAnim_C_Received_NotifyBegin_Params Parms;

	Parms.MeshComp = MeshComp;
	Parms.Animation = Animation;
	Parms.TotalDuration = TotalDuration;

	ProcessEvent(FN, &Parms);
}

