#include "pch.h"

#include "FN_BP_AssaultRifle_FrontClip_SideAction_classes.h"

UClass* UBP_AssaultRifle_FrontClip_SideAction_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Weapons/Skeleton_Templates/BP_AssaultRifle_FrontClip_SideAction.BP_AssaultRifle_FrontClip_SideAction_C");

	return Class;
}

// Function /Game/Weapons/Skeleton_Templates/BP_AssaultRifle_FrontClip_SideAction.BP_AssaultRifle_FrontClip_SideAction_C:ExecuteUbergraph_BP_AssaultRifle_FrontClip_SideAction
void UBP_AssaultRifle_FrontClip_SideAction_C::ExecuteUbergraph_BP_AssaultRifle_FrontClip_SideAction(int32_t EntryPoint)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Weapons/Skeleton_Templates/BP_AssaultRifle_FrontClip_SideAction.BP_AssaultRifle_FrontClip_SideAction_C:ExecuteUbergraph_BP_AssaultRifle_FrontClip_SideAction");

	FUBP_AssaultRifle_FrontClip_SideAction_C_ExecuteUbergraph_BP_AssaultRifle_FrontClip_SideAction_Params Parms;

	Parms.EntryPoint = EntryPoint;

	ProcessEvent(FN, &Parms);
}

