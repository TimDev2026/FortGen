#include "pch.h"

#include "FN_SK_MachineGun_Clip_Skeleton_AnimBlueprint_classes.h"

UClass* USK_MachineGun_Clip_Skeleton_AnimBlueprint_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Weapons/FORT_Rifles/Mesh/SK_MachineGun_Clip_Skeleton_AnimBlueprint.SK_MachineGun_Clip_Skeleton_AnimBlueprint_C");

	return Class;
}

// Function /Game/Weapons/FORT_Rifles/Mesh/SK_MachineGun_Clip_Skeleton_AnimBlueprint.SK_MachineGun_Clip_Skeleton_AnimBlueprint_C:ExecuteUbergraph_SK_MachineGun_Clip_Skeleton_AnimBlueprint
void USK_MachineGun_Clip_Skeleton_AnimBlueprint_C::ExecuteUbergraph_SK_MachineGun_Clip_Skeleton_AnimBlueprint(int32_t EntryPoint)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Weapons/FORT_Rifles/Mesh/SK_MachineGun_Clip_Skeleton_AnimBlueprint.SK_MachineGun_Clip_Skeleton_AnimBlueprint_C:ExecuteUbergraph_SK_MachineGun_Clip_Skeleton_AnimBlueprint");

	FUSK_MachineGun_Clip_Skeleton_AnimBlueprint_C_ExecuteUbergraph_SK_MachineGun_Clip_Skeleton_AnimBlueprint_Params Parms;

	Parms.EntryPoint = EntryPoint;

	ProcessEvent(FN, &Parms);
}

