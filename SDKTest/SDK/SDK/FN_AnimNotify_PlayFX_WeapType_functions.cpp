#include "pch.h"

#include "FN_AnimNotify_PlayFX_WeapType_classes.h"

UClass* UAnimNotify_PlayFX_WeapType_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Animation/AnimNotifies/AnimNotifyEvent/AnimNotify_PlayFX_WeapType.AnimNotify_PlayFX_WeapType_C");

	return Class;
}

// Function /Game/Animation/AnimNotifies/AnimNotifyEvent/AnimNotify_PlayFX_WeapType.AnimNotify_PlayFX_WeapType_C:Received_Notify
bool UAnimNotify_PlayFX_WeapType_C::Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Animation/AnimNotifies/AnimNotifyEvent/AnimNotify_PlayFX_WeapType.AnimNotify_PlayFX_WeapType_C:Received_Notify");

	FUAnimNotify_PlayFX_WeapType_C_Received_Notify_Params Parms;

	Parms.MeshComp = MeshComp;
	Parms.Animation = Animation;

	ProcessEvent(FN, &Parms);
}

