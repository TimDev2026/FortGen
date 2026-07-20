#include "pch.h"

#include "FN_AnimNotifyState_AttachAsset_classes.h"

UClass* UAnimNotifyState_AttachAsset_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Animation/AnimNotifies/AnimNotifyState/AnimNotifyState_AttachAsset.AnimNotifyState_AttachAsset_C");

	return Class;
}

// Function /Game/Animation/AnimNotifies/AnimNotifyState/AnimNotifyState_AttachAsset.AnimNotifyState_AttachAsset_C:Received_NotifyEnd
bool UAnimNotifyState_AttachAsset_C::Received_NotifyEnd(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation) const
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Animation/AnimNotifies/AnimNotifyState/AnimNotifyState_AttachAsset.AnimNotifyState_AttachAsset_C:Received_NotifyEnd");

	FUAnimNotifyState_AttachAsset_C_Received_NotifyEnd_Params Parms;

	Parms.MeshComp = MeshComp;
	Parms.Animation = Animation;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Animation/AnimNotifies/AnimNotifyState/AnimNotifyState_AttachAsset.AnimNotifyState_AttachAsset_C:Received_NotifyBegin
bool UAnimNotifyState_AttachAsset_C::Received_NotifyBegin(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, float TotalDuration) const
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Animation/AnimNotifies/AnimNotifyState/AnimNotifyState_AttachAsset.AnimNotifyState_AttachAsset_C:Received_NotifyBegin");

	FUAnimNotifyState_AttachAsset_C_Received_NotifyBegin_Params Parms;

	Parms.MeshComp = MeshComp;
	Parms.Animation = Animation;
	Parms.TotalDuration = TotalDuration;

	ProcessEvent(FN, &Parms);
}

