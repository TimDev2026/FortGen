#include "pch.h"

#include "FN_AnimNotify_Reload_ClipEject_classes.h"

UClass* UAnimNotify_Reload_ClipEject_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Animation/AnimNotifies/AnimNotifyEvent/AnimNotify_Reload_ClipEject.AnimNotify_Reload_ClipEject_C");

	return Class;
}

// Function /Game/Animation/AnimNotifies/AnimNotifyEvent/AnimNotify_Reload_ClipEject.AnimNotify_Reload_ClipEject_C:Received_Notify
bool UAnimNotify_Reload_ClipEject_C::Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation) const
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Animation/AnimNotifies/AnimNotifyEvent/AnimNotify_Reload_ClipEject.AnimNotify_Reload_ClipEject_C:Received_Notify");

	FUAnimNotify_Reload_ClipEject_C_Received_Notify_Params Parms;

	Parms.MeshComp = MeshComp;
	Parms.Animation = Animation;

	ProcessEvent(FN, &Parms);
}

