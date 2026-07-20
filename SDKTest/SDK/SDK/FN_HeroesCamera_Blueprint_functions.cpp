#include "pch.h"

#include "FN_HeroesCamera_Blueprint_classes.h"

UClass* AHeroesCamera_Blueprint_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/FrontEnd/Cameras/HeroesCamera_Blueprint.HeroesCamera_Blueprint_C");

	return Class;
}

// Function /Game/FrontEnd/Cameras/HeroesCamera_Blueprint.HeroesCamera_Blueprint_C:HandleMousePress
void AHeroesCamera_Blueprint_C::HandleMousePress()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/FrontEnd/Cameras/HeroesCamera_Blueprint.HeroesCamera_Blueprint_C:HandleMousePress");

	ProcessEvent(FN, nullptr);
}

// Function /Game/FrontEnd/Cameras/HeroesCamera_Blueprint.HeroesCamera_Blueprint_C:HandleMouseRelease
void AHeroesCamera_Blueprint_C::HandleMouseRelease()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/FrontEnd/Cameras/HeroesCamera_Blueprint.HeroesCamera_Blueprint_C:HandleMouseRelease");

	ProcessEvent(FN, nullptr);
}

// Function /Game/FrontEnd/Cameras/HeroesCamera_Blueprint.HeroesCamera_Blueprint_C:UserConstructionScript
void AHeroesCamera_Blueprint_C::UserConstructionScript()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/FrontEnd/Cameras/HeroesCamera_Blueprint.HeroesCamera_Blueprint_C:UserConstructionScript");

	ProcessEvent(FN, nullptr);
}

// Function /Game/FrontEnd/Cameras/HeroesCamera_Blueprint.HeroesCamera_Blueprint_C:InpActEvt_LeftMouseButton_UniqueObjectNameForCooking_27
void AHeroesCamera_Blueprint_C::InpActEvt_LeftMouseButton_UniqueObjectNameForCooking_27(FKey Key)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/FrontEnd/Cameras/HeroesCamera_Blueprint.HeroesCamera_Blueprint_C:InpActEvt_LeftMouseButton_UniqueObjectNameForCooking_27");

	FAHeroesCamera_Blueprint_C_InpActEvt_LeftMouseButton_UniqueObjectNameForCooking_27_Params Parms;

	Parms.Key = Key;

	ProcessEvent(FN, &Parms);
}

// Function /Game/FrontEnd/Cameras/HeroesCamera_Blueprint.HeroesCamera_Blueprint_C:InpActEvt_LeftMouseButton_UniqueObjectNameForCooking_26
void AHeroesCamera_Blueprint_C::InpActEvt_LeftMouseButton_UniqueObjectNameForCooking_26(FKey Key)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/FrontEnd/Cameras/HeroesCamera_Blueprint.HeroesCamera_Blueprint_C:InpActEvt_LeftMouseButton_UniqueObjectNameForCooking_26");

	FAHeroesCamera_Blueprint_C_InpActEvt_LeftMouseButton_UniqueObjectNameForCooking_26_Params Parms;

	Parms.Key = Key;

	ProcessEvent(FN, &Parms);
}

// Function /Game/FrontEnd/Cameras/HeroesCamera_Blueprint.HeroesCamera_Blueprint_C:InpActEvt_RightMouseButton_UniqueObjectNameForCooking_25
void AHeroesCamera_Blueprint_C::InpActEvt_RightMouseButton_UniqueObjectNameForCooking_25(FKey Key)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/FrontEnd/Cameras/HeroesCamera_Blueprint.HeroesCamera_Blueprint_C:InpActEvt_RightMouseButton_UniqueObjectNameForCooking_25");

	FAHeroesCamera_Blueprint_C_InpActEvt_RightMouseButton_UniqueObjectNameForCooking_25_Params Parms;

	Parms.Key = Key;

	ProcessEvent(FN, &Parms);
}

// Function /Game/FrontEnd/Cameras/HeroesCamera_Blueprint.HeroesCamera_Blueprint_C:InpActEvt_RightMouseButton_UniqueObjectNameForCooking_24
void AHeroesCamera_Blueprint_C::InpActEvt_RightMouseButton_UniqueObjectNameForCooking_24(FKey Key)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/FrontEnd/Cameras/HeroesCamera_Blueprint.HeroesCamera_Blueprint_C:InpActEvt_RightMouseButton_UniqueObjectNameForCooking_24");

	FAHeroesCamera_Blueprint_C_InpActEvt_RightMouseButton_UniqueObjectNameForCooking_24_Params Parms;

	Parms.Key = Key;

	ProcessEvent(FN, &Parms);
}

// Function /Game/FrontEnd/Cameras/HeroesCamera_Blueprint.HeroesCamera_Blueprint_C:OnActivated
void AHeroesCamera_Blueprint_C::OnActivated()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/FrontEnd/Cameras/HeroesCamera_Blueprint.HeroesCamera_Blueprint_C:OnActivated");

	ProcessEvent(FN, nullptr);
}

// Function /Game/FrontEnd/Cameras/HeroesCamera_Blueprint.HeroesCamera_Blueprint_C:OnDeactivated
void AHeroesCamera_Blueprint_C::OnDeactivated()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/FrontEnd/Cameras/HeroesCamera_Blueprint.HeroesCamera_Blueprint_C:OnDeactivated");

	ProcessEvent(FN, nullptr);
}

// Function /Game/FrontEnd/Cameras/HeroesCamera_Blueprint.HeroesCamera_Blueprint_C:ReceiveTick
void AHeroesCamera_Blueprint_C::ReceiveTick(float DeltaSeconds)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/FrontEnd/Cameras/HeroesCamera_Blueprint.HeroesCamera_Blueprint_C:ReceiveTick");

	FAHeroesCamera_Blueprint_C_ReceiveTick_Params Parms;

	Parms.DeltaSeconds = DeltaSeconds;

	ProcessEvent(FN, &Parms);
}

// Function /Game/FrontEnd/Cameras/HeroesCamera_Blueprint.HeroesCamera_Blueprint_C:ExecuteUbergraph_HeroesCamera_Blueprint
void AHeroesCamera_Blueprint_C::ExecuteUbergraph_HeroesCamera_Blueprint(int32_t EntryPoint)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/FrontEnd/Cameras/HeroesCamera_Blueprint.HeroesCamera_Blueprint_C:ExecuteUbergraph_HeroesCamera_Blueprint");

	FAHeroesCamera_Blueprint_C_ExecuteUbergraph_HeroesCamera_Blueprint_Params Parms;

	Parms.EntryPoint = EntryPoint;

	ProcessEvent(FN, &Parms);
}

UClass* PLACEHOLDER_CLASS__TVPostProcessBP_C_157::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/FrontEnd/Cameras/HeroesCamera_Blueprint.PLACEHOLDER-CLASS__TVPostProcessBP_C_157");

	return Class;
}

