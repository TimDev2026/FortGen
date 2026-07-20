#include "pch.h"

#include "FN_B_Prj_Banner_classes.h"

UClass* AB_Prj_Banner_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/Player/Generic/Gadgets/Banner/B_Prj_Banner.B_Prj_Banner_C");

	return Class;
}

// Function /Game/Abilities/Player/Generic/Gadgets/Banner/B_Prj_Banner.B_Prj_Banner_C:OnRep_TeamMemberInfo
void AB_Prj_Banner_C::OnRep_TeamMemberInfo()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Generic/Gadgets/Banner/B_Prj_Banner.B_Prj_Banner_C:OnRep_TeamMemberInfo");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/Player/Generic/Gadgets/Banner/B_Prj_Banner.B_Prj_Banner_C:OnRep_bHasShockwave
void AB_Prj_Banner_C::OnRep_bHasShockwave()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Generic/Gadgets/Banner/B_Prj_Banner.B_Prj_Banner_C:OnRep_bHasShockwave");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/Player/Generic/Gadgets/Banner/B_Prj_Banner.B_Prj_Banner_C:UserConstructionScript
void AB_Prj_Banner_C::UserConstructionScript()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Generic/Gadgets/Banner/B_Prj_Banner.B_Prj_Banner_C:UserConstructionScript");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/Player/Generic/Gadgets/Banner/B_Prj_Banner.B_Prj_Banner_C:FlashShield
void AB_Prj_Banner_C::FlashShield()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Generic/Gadgets/Banner/B_Prj_Banner.B_Prj_Banner_C:FlashShield");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/Player/Generic/Gadgets/Banner/B_Prj_Banner.B_Prj_Banner_C:OnStop
void AB_Prj_Banner_C::OnStop(FHitResult Hit)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Generic/Gadgets/Banner/B_Prj_Banner.B_Prj_Banner_C:OnStop");

	FAB_Prj_Banner_C_OnStop_Params Parms;

	Parms.Hit = Hit;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Generic/Gadgets/Banner/B_Prj_Banner.B_Prj_Banner_C:ReceiveBeginPlay
void AB_Prj_Banner_C::ReceiveBeginPlay()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Generic/Gadgets/Banner/B_Prj_Banner.B_Prj_Banner_C:ReceiveBeginPlay");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/Player/Generic/Gadgets/Banner/B_Prj_Banner.B_Prj_Banner_C:ReceiveEndPlay
void AB_Prj_Banner_C::ReceiveEndPlay(EEndPlayReason EndPlayReason)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Generic/Gadgets/Banner/B_Prj_Banner.B_Prj_Banner_C:ReceiveEndPlay");

	FAB_Prj_Banner_C_ReceiveEndPlay_Params Parms;

	Parms.EndPlayReason = EndPlayReason;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Generic/Gadgets/Banner/B_Prj_Banner.B_Prj_Banner_C:ReceiveHit
void AB_Prj_Banner_C::ReceiveHit(class UPrimitiveComponent* MyComp, class AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, FVector HitLocation, FVector HitNormal, FVector NormalImpulse, FHitResult Hit)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Generic/Gadgets/Banner/B_Prj_Banner.B_Prj_Banner_C:ReceiveHit");

	FAB_Prj_Banner_C_ReceiveHit_Params Parms;

	Parms.MyComp = MyComp;
	Parms.Other = Other;
	Parms.OtherComp = OtherComp;
	Parms.bSelfMoved = bSelfMoved;
	Parms.HitLocation = HitLocation;
	Parms.HitNormal = HitNormal;
	Parms.NormalImpulse = NormalImpulse;
	Parms.Hit = Hit;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Generic/Gadgets/Banner/B_Prj_Banner.B_Prj_Banner_C:Pass_Info
void AB_Prj_Banner_C::Pass_Info(bool Shockwave, float Radius, FRotator PlayerRotation)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Generic/Gadgets/Banner/B_Prj_Banner.B_Prj_Banner_C:Pass_Info");

	FAB_Prj_Banner_C_Pass_Info_Params Parms;

	Parms.Shockwave = Shockwave;
	Parms.Radius = Radius;
	Parms.PlayerRotation = PlayerRotation;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Generic/Gadgets/Banner/B_Prj_Banner.B_Prj_Banner_C:DestroyBanner
void AB_Prj_Banner_C::DestroyBanner()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Generic/Gadgets/Banner/B_Prj_Banner.B_Prj_Banner_C:DestroyBanner");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/Player/Generic/Gadgets/Banner/B_Prj_Banner.B_Prj_Banner_C:ExecuteUbergraph_B_Prj_Banner
void AB_Prj_Banner_C::ExecuteUbergraph_B_Prj_Banner(int32_t EntryPoint)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Generic/Gadgets/Banner/B_Prj_Banner.B_Prj_Banner_C:ExecuteUbergraph_B_Prj_Banner");

	FAB_Prj_Banner_C_ExecuteUbergraph_B_Prj_Banner_Params Parms;

	Parms.EntryPoint = EntryPoint;

	ProcessEvent(FN, &Parms);
}

