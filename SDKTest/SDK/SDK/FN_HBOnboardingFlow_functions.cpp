#include "pch.h"

#include "FN_HBOnboardingFlow_classes.h"

UClass* AHBOnboardingFlow_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/FrontEnd/HomebaseOnboarding/HBOnboardingFlow.HBOnboardingFlow_C");

	return Class;
}

// Function /Game/FrontEnd/HomebaseOnboarding/HBOnboardingFlow.HBOnboardingFlow_C:HandleMcpFailure
void AHBOnboardingFlow_C::HandleMcpFailure()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/FrontEnd/HomebaseOnboarding/HBOnboardingFlow.HBOnboardingFlow_C:HandleMcpFailure");

	ProcessEvent(FN, nullptr);
}

// Function /Game/FrontEnd/HomebaseOnboarding/HBOnboardingFlow.HBOnboardingFlow_C:UpdateVariableCache
void AHBOnboardingFlow_C::UpdateVariableCache(bool Success)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/FrontEnd/HomebaseOnboarding/HBOnboardingFlow.HBOnboardingFlow_C:UpdateVariableCache");

	FAHBOnboardingFlow_C_UpdateVariableCache_Params Parms;

	Parms.Success = Success;

	ProcessEvent(FN, &Parms);
}

// Function /Game/FrontEnd/HomebaseOnboarding/HBOnboardingFlow.HBOnboardingFlow_C:UserConstructionScript
void AHBOnboardingFlow_C::UserConstructionScript()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/FrontEnd/HomebaseOnboarding/HBOnboardingFlow.HBOnboardingFlow_C:UserConstructionScript");

	ProcessEvent(FN, nullptr);
}

// Function /Game/FrontEnd/HomebaseOnboarding/HBOnboardingFlow.HBOnboardingFlow_C:OnFailure_0A5ABC9C483947108FD9FB9980E7C62F
void AHBOnboardingFlow_C::OnFailure_0A5ABC9C483947108FD9FB9980E7C62F()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/FrontEnd/HomebaseOnboarding/HBOnboardingFlow.HBOnboardingFlow_C:OnFailure_0A5ABC9C483947108FD9FB9980E7C62F");

	ProcessEvent(FN, nullptr);
}

// Function /Game/FrontEnd/HomebaseOnboarding/HBOnboardingFlow.HBOnboardingFlow_C:OnIgnored_0A5ABC9C483947108FD9FB9980E7C62F
void AHBOnboardingFlow_C::OnIgnored_0A5ABC9C483947108FD9FB9980E7C62F()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/FrontEnd/HomebaseOnboarding/HBOnboardingFlow.HBOnboardingFlow_C:OnIgnored_0A5ABC9C483947108FD9FB9980E7C62F");

	ProcessEvent(FN, nullptr);
}

// Function /Game/FrontEnd/HomebaseOnboarding/HBOnboardingFlow.HBOnboardingFlow_C:OnSuccess_0A5ABC9C483947108FD9FB9980E7C62F
void AHBOnboardingFlow_C::OnSuccess_0A5ABC9C483947108FD9FB9980E7C62F()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/FrontEnd/HomebaseOnboarding/HBOnboardingFlow.HBOnboardingFlow_C:OnSuccess_0A5ABC9C483947108FD9FB9980E7C62F");

	ProcessEvent(FN, nullptr);
}

// Function /Game/FrontEnd/HomebaseOnboarding/HBOnboardingFlow.HBOnboardingFlow_C:OnFailure_94AB314F4BAAB3CAC0FA5E83D4318BDC
void AHBOnboardingFlow_C::OnFailure_94AB314F4BAAB3CAC0FA5E83D4318BDC()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/FrontEnd/HomebaseOnboarding/HBOnboardingFlow.HBOnboardingFlow_C:OnFailure_94AB314F4BAAB3CAC0FA5E83D4318BDC");

	ProcessEvent(FN, nullptr);
}

// Function /Game/FrontEnd/HomebaseOnboarding/HBOnboardingFlow.HBOnboardingFlow_C:OnIgnored_94AB314F4BAAB3CAC0FA5E83D4318BDC
void AHBOnboardingFlow_C::OnIgnored_94AB314F4BAAB3CAC0FA5E83D4318BDC()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/FrontEnd/HomebaseOnboarding/HBOnboardingFlow.HBOnboardingFlow_C:OnIgnored_94AB314F4BAAB3CAC0FA5E83D4318BDC");

	ProcessEvent(FN, nullptr);
}

// Function /Game/FrontEnd/HomebaseOnboarding/HBOnboardingFlow.HBOnboardingFlow_C:OnSuccess_94AB314F4BAAB3CAC0FA5E83D4318BDC
void AHBOnboardingFlow_C::OnSuccess_94AB314F4BAAB3CAC0FA5E83D4318BDC()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/FrontEnd/HomebaseOnboarding/HBOnboardingFlow.HBOnboardingFlow_C:OnSuccess_94AB314F4BAAB3CAC0FA5E83D4318BDC");

	ProcessEvent(FN, nullptr);
}

// Function /Game/FrontEnd/HomebaseOnboarding/HBOnboardingFlow.HBOnboardingFlow_C:OnFailure_921F8E7C425863C1CDDED09C7FC5034D
void AHBOnboardingFlow_C::OnFailure_921F8E7C425863C1CDDED09C7FC5034D()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/FrontEnd/HomebaseOnboarding/HBOnboardingFlow.HBOnboardingFlow_C:OnFailure_921F8E7C425863C1CDDED09C7FC5034D");

	ProcessEvent(FN, nullptr);
}

// Function /Game/FrontEnd/HomebaseOnboarding/HBOnboardingFlow.HBOnboardingFlow_C:OnIgnored_921F8E7C425863C1CDDED09C7FC5034D
void AHBOnboardingFlow_C::OnIgnored_921F8E7C425863C1CDDED09C7FC5034D()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/FrontEnd/HomebaseOnboarding/HBOnboardingFlow.HBOnboardingFlow_C:OnIgnored_921F8E7C425863C1CDDED09C7FC5034D");

	ProcessEvent(FN, nullptr);
}

// Function /Game/FrontEnd/HomebaseOnboarding/HBOnboardingFlow.HBOnboardingFlow_C:OnSuccess_921F8E7C425863C1CDDED09C7FC5034D
void AHBOnboardingFlow_C::OnSuccess_921F8E7C425863C1CDDED09C7FC5034D()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/FrontEnd/HomebaseOnboarding/HBOnboardingFlow.HBOnboardingFlow_C:OnSuccess_921F8E7C425863C1CDDED09C7FC5034D");

	ProcessEvent(FN, nullptr);
}

// Function /Game/FrontEnd/HomebaseOnboarding/HBOnboardingFlow.HBOnboardingFlow_C:OnFailure_F17CF9054AFDDDAF314AC4911BC9818F
void AHBOnboardingFlow_C::OnFailure_F17CF9054AFDDDAF314AC4911BC9818F()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/FrontEnd/HomebaseOnboarding/HBOnboardingFlow.HBOnboardingFlow_C:OnFailure_F17CF9054AFDDDAF314AC4911BC9818F");

	ProcessEvent(FN, nullptr);
}

// Function /Game/FrontEnd/HomebaseOnboarding/HBOnboardingFlow.HBOnboardingFlow_C:OnIgnored_F17CF9054AFDDDAF314AC4911BC9818F
void AHBOnboardingFlow_C::OnIgnored_F17CF9054AFDDDAF314AC4911BC9818F()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/FrontEnd/HomebaseOnboarding/HBOnboardingFlow.HBOnboardingFlow_C:OnIgnored_F17CF9054AFDDDAF314AC4911BC9818F");

	ProcessEvent(FN, nullptr);
}

// Function /Game/FrontEnd/HomebaseOnboarding/HBOnboardingFlow.HBOnboardingFlow_C:OnSuccess_F17CF9054AFDDDAF314AC4911BC9818F
void AHBOnboardingFlow_C::OnSuccess_F17CF9054AFDDDAF314AC4911BC9818F()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/FrontEnd/HomebaseOnboarding/HBOnboardingFlow.HBOnboardingFlow_C:OnSuccess_F17CF9054AFDDDAF314AC4911BC9818F");

	ProcessEvent(FN, nullptr);
}

// Function /Game/FrontEnd/HomebaseOnboarding/HBOnboardingFlow.HBOnboardingFlow_C:OnStateEntered_6973C4804831A19E4BDA22AFFEE0F251
void AHBOnboardingFlow_C::OnStateEntered_6973C4804831A19E4BDA22AFFEE0F251()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/FrontEnd/HomebaseOnboarding/HBOnboardingFlow.HBOnboardingFlow_C:OnStateEntered_6973C4804831A19E4BDA22AFFEE0F251");

	ProcessEvent(FN, nullptr);
}

// Function /Game/FrontEnd/HomebaseOnboarding/HBOnboardingFlow.HBOnboardingFlow_C:OnStateEntered_FEE56B7E40F9EBA0E7D44DBF3391C2D6
void AHBOnboardingFlow_C::OnStateEntered_FEE56B7E40F9EBA0E7D44DBF3391C2D6()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/FrontEnd/HomebaseOnboarding/HBOnboardingFlow.HBOnboardingFlow_C:OnStateEntered_FEE56B7E40F9EBA0E7D44DBF3391C2D6");

	ProcessEvent(FN, nullptr);
}

// Function /Game/FrontEnd/HomebaseOnboarding/HBOnboardingFlow.HBOnboardingFlow_C:OnStateEntered_E61814764FB8ECDF4EEF2091C594F00F
void AHBOnboardingFlow_C::OnStateEntered_E61814764FB8ECDF4EEF2091C594F00F()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/FrontEnd/HomebaseOnboarding/HBOnboardingFlow.HBOnboardingFlow_C:OnStateEntered_E61814764FB8ECDF4EEF2091C594F00F");

	ProcessEvent(FN, nullptr);
}

// Function /Game/FrontEnd/HomebaseOnboarding/HBOnboardingFlow.HBOnboardingFlow_C:OnStateEntered_674FF9564D47F83BDED1938B23B03D50
void AHBOnboardingFlow_C::OnStateEntered_674FF9564D47F83BDED1938B23B03D50()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/FrontEnd/HomebaseOnboarding/HBOnboardingFlow.HBOnboardingFlow_C:OnStateEntered_674FF9564D47F83BDED1938B23B03D50");

	ProcessEvent(FN, nullptr);
}

// Function /Game/FrontEnd/HomebaseOnboarding/HBOnboardingFlow.HBOnboardingFlow_C:OnStateEntered_13927B524921691ACA0068A46DD375D3
void AHBOnboardingFlow_C::OnStateEntered_13927B524921691ACA0068A46DD375D3()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/FrontEnd/HomebaseOnboarding/HBOnboardingFlow.HBOnboardingFlow_C:OnStateEntered_13927B524921691ACA0068A46DD375D3");

	ProcessEvent(FN, nullptr);
}

// Function /Game/FrontEnd/HomebaseOnboarding/HBOnboardingFlow.HBOnboardingFlow_C:StartPlaySatelliteCine
void AHBOnboardingFlow_C::StartPlaySatelliteCine()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/FrontEnd/HomebaseOnboarding/HBOnboardingFlow.HBOnboardingFlow_C:StartPlaySatelliteCine");

	ProcessEvent(FN, nullptr);
}

// Function /Game/FrontEnd/HomebaseOnboarding/HBOnboardingFlow.HBOnboardingFlow_C:UnloadCinHomebase
void AHBOnboardingFlow_C::UnloadCinHomebase()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/FrontEnd/HomebaseOnboarding/HBOnboardingFlow.HBOnboardingFlow_C:UnloadCinHomebase");

	ProcessEvent(FN, nullptr);
}

// Function /Game/FrontEnd/HomebaseOnboarding/HBOnboardingFlow.HBOnboardingFlow_C:StartRecruitHero
void AHBOnboardingFlow_C::StartRecruitHero()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/FrontEnd/HomebaseOnboarding/HBOnboardingFlow.HBOnboardingFlow_C:StartRecruitHero");

	ProcessEvent(FN, nullptr);
}

// Function /Game/FrontEnd/HomebaseOnboarding/HBOnboardingFlow.HBOnboardingFlow_C:StartBuildHeroBuilding
void AHBOnboardingFlow_C::StartBuildHeroBuilding()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/FrontEnd/HomebaseOnboarding/HBOnboardingFlow.HBOnboardingFlow_C:StartBuildHeroBuilding");

	ProcessEvent(FN, nullptr);
}

// Function /Game/FrontEnd/HomebaseOnboarding/HBOnboardingFlow.HBOnboardingFlow_C:StartNameHomebase
void AHBOnboardingFlow_C::StartNameHomebase()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/FrontEnd/HomebaseOnboarding/HBOnboardingFlow.HBOnboardingFlow_C:StartNameHomebase");

	ProcessEvent(FN, nullptr);
}

// Function /Game/FrontEnd/HomebaseOnboarding/HBOnboardingFlow.HBOnboardingFlow_C:HandleClientEvent_HomebasePersonalized
void AHBOnboardingFlow_C::HandleClientEvent_HomebasePersonalized(class UObject* EventSource, class UObject* EventFocus, FFortClientEvent ClientEvent)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/FrontEnd/HomebaseOnboarding/HBOnboardingFlow.HBOnboardingFlow_C:HandleClientEvent_HomebasePersonalized");

	FAHBOnboardingFlow_C_HandleClientEvent_HomebasePersonalized_Params Parms;

	Parms.EventSource = EventSource;
	Parms.EventFocus = EventFocus;
	Parms.ClientEvent = ClientEvent;

	ProcessEvent(FN, &Parms);
}

// Function /Game/FrontEnd/HomebaseOnboarding/HBOnboardingFlow.HBOnboardingFlow_C:StartOnboardingZone
void AHBOnboardingFlow_C::StartOnboardingZone()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/FrontEnd/HomebaseOnboarding/HBOnboardingFlow.HBOnboardingFlow_C:StartOnboardingZone");

	ProcessEvent(FN, nullptr);
}

// Function /Game/FrontEnd/HomebaseOnboarding/HBOnboardingFlow.HBOnboardingFlow_C:StartFlow
void AHBOnboardingFlow_C::StartFlow()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/FrontEnd/HomebaseOnboarding/HBOnboardingFlow.HBOnboardingFlow_C:StartFlow");

	ProcessEvent(FN, nullptr);
}

// Function /Game/FrontEnd/HomebaseOnboarding/HBOnboardingFlow.HBOnboardingFlow_C:ExecuteUbergraph_HBOnboardingFlow
void AHBOnboardingFlow_C::ExecuteUbergraph_HBOnboardingFlow(int32_t EntryPoint)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/FrontEnd/HomebaseOnboarding/HBOnboardingFlow.HBOnboardingFlow_C:ExecuteUbergraph_HBOnboardingFlow");

	FAHBOnboardingFlow_C_ExecuteUbergraph_HBOnboardingFlow_Params Parms;

	Parms.EntryPoint = EntryPoint;

	ProcessEvent(FN, &Parms);
}

