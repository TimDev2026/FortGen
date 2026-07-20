#include "pch.h"

#include "FN_AnimNotify_PlayFeedbackLine_classes.h"

UClass* UAnimNotify_PlayFeedbackLine_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Characters/Feedback/AnimNotify_PlayFeedbackLine.AnimNotify_PlayFeedbackLine_C");

	return Class;
}

// Function /Game/Characters/Feedback/AnimNotify_PlayFeedbackLine.AnimNotify_PlayFeedbackLine_C:Received_Notify
bool UAnimNotify_PlayFeedbackLine_C::Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Characters/Feedback/AnimNotify_PlayFeedbackLine.AnimNotify_PlayFeedbackLine_C:Received_Notify");

	FUAnimNotify_PlayFeedbackLine_C_Received_Notify_Params Parms;

	Parms.MeshComp = MeshComp;
	Parms.Animation = Animation;

	ProcessEvent(FN, &Parms);
}

