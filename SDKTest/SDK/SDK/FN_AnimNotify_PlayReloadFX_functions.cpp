#include "pch.h"

#include "FN_AnimNotify_PlayReloadFX_classes.h"

UClass* UAnimNotify_PlayReloadFX_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Animation/AnimNotifies/AnimNotifyEvent/AnimNotify_PlayReloadFX.AnimNotify_PlayReloadFX_C");

	return Class;
}

// Function /Game/Animation/AnimNotifies/AnimNotifyEvent/AnimNotify_PlayReloadFX.AnimNotify_PlayReloadFX_C:Received_Notify
bool UAnimNotify_PlayReloadFX_C::Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Animation/AnimNotifies/AnimNotifyEvent/AnimNotify_PlayReloadFX.AnimNotify_PlayReloadFX_C:Received_Notify");

	FUAnimNotify_PlayReloadFX_C_Received_Notify_Params Parms;

	Parms.MeshComp = MeshComp;
	Parms.Animation = Animation;

	ProcessEvent(FN, &Parms);
}

