#include "pch.h"

#include "FN_TVPostProcessBP_classes.h"

UClass* ATVPostProcessBP_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Environments/Homebase/Blueprints/TVPostProcessBP.TVPostProcessBP_C");

	return Class;
}

// Function /Game/Environments/Homebase/Blueprints/TVPostProcessBP.TVPostProcessBP_C:RandomizeTheColor
void ATVPostProcessBP_C::RandomizeTheColor(float Use_Bluescreen, float Probablility_modulator, float Use_Flat_Blue, float MaxColorPerChannelValue, bool Control_replacement_alpha)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Environments/Homebase/Blueprints/TVPostProcessBP.TVPostProcessBP_C:RandomizeTheColor");

	FATVPostProcessBP_C_RandomizeTheColor_Params Parms;

	Parms.Use_Bluescreen = Use_Bluescreen;
	Parms.Probablility_modulator = Probablility_modulator;
	Parms.Use_Flat_Blue = Use_Flat_Blue;
	Parms.MaxColorPerChannelValue = MaxColorPerChannelValue;
	Parms.Control_replacement_alpha = Control_replacement_alpha;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Environments/Homebase/Blueprints/TVPostProcessBP.TVPostProcessBP_C:UserConstructionScript
void ATVPostProcessBP_C::UserConstructionScript()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Environments/Homebase/Blueprints/TVPostProcessBP.TVPostProcessBP_C:UserConstructionScript");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Environments/Homebase/Blueprints/TVPostProcessBP.TVPostProcessBP_C:StartScreen__FinishedFunc
void ATVPostProcessBP_C::StartScreen__FinishedFunc()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Environments/Homebase/Blueprints/TVPostProcessBP.TVPostProcessBP_C:StartScreen__FinishedFunc");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Environments/Homebase/Blueprints/TVPostProcessBP.TVPostProcessBP_C:StartScreen__UpdateFunc
void ATVPostProcessBP_C::StartScreen__UpdateFunc()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Environments/Homebase/Blueprints/TVPostProcessBP.TVPostProcessBP_C:StartScreen__UpdateFunc");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Environments/Homebase/Blueprints/TVPostProcessBP.TVPostProcessBP_C:Switch to static__FinishedFunc
void ATVPostProcessBP_C::Switch_to_static__FinishedFunc()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Environments/Homebase/Blueprints/TVPostProcessBP.TVPostProcessBP_C:Switch to static__FinishedFunc");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Environments/Homebase/Blueprints/TVPostProcessBP.TVPostProcessBP_C:Switch to static__UpdateFunc
void ATVPostProcessBP_C::Switch_to_static__UpdateFunc()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Environments/Homebase/Blueprints/TVPostProcessBP.TVPostProcessBP_C:Switch to static__UpdateFunc");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Environments/Homebase/Blueprints/TVPostProcessBP.TVPostProcessBP_C:Switch between cameras__FinishedFunc
void ATVPostProcessBP_C::Switch_between_cameras__FinishedFunc()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Environments/Homebase/Blueprints/TVPostProcessBP.TVPostProcessBP_C:Switch between cameras__FinishedFunc");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Environments/Homebase/Blueprints/TVPostProcessBP.TVPostProcessBP_C:Switch between cameras__UpdateFunc
void ATVPostProcessBP_C::Switch_between_cameras__UpdateFunc()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Environments/Homebase/Blueprints/TVPostProcessBP.TVPostProcessBP_C:Switch between cameras__UpdateFunc");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Environments/Homebase/Blueprints/TVPostProcessBP.TVPostProcessBP_C:Switch between cameras__Switch Camera Position__EventFunc
void ATVPostProcessBP_C::Switch_between_cameras__Switch_Camera_Position__EventFunc()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Environments/Homebase/Blueprints/TVPostProcessBP.TVPostProcessBP_C:Switch between cameras__Switch Camera Position__EventFunc");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Environments/Homebase/Blueprints/TVPostProcessBP.TVPostProcessBP_C:Show the troll__FinishedFunc
void ATVPostProcessBP_C::Show_the_troll__FinishedFunc()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Environments/Homebase/Blueprints/TVPostProcessBP.TVPostProcessBP_C:Show the troll__FinishedFunc");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Environments/Homebase/Blueprints/TVPostProcessBP.TVPostProcessBP_C:Show the troll__UpdateFunc
void ATVPostProcessBP_C::Show_the_troll__UpdateFunc()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Environments/Homebase/Blueprints/TVPostProcessBP.TVPostProcessBP_C:Show the troll__UpdateFunc");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Environments/Homebase/Blueprints/TVPostProcessBP.TVPostProcessBP_C:Switch to live__FinishedFunc
void ATVPostProcessBP_C::Switch_to_live__FinishedFunc()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Environments/Homebase/Blueprints/TVPostProcessBP.TVPostProcessBP_C:Switch to live__FinishedFunc");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Environments/Homebase/Blueprints/TVPostProcessBP.TVPostProcessBP_C:Switch to live__UpdateFunc
void ATVPostProcessBP_C::Switch_to_live__UpdateFunc()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Environments/Homebase/Blueprints/TVPostProcessBP.TVPostProcessBP_C:Switch to live__UpdateFunc");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Environments/Homebase/Blueprints/TVPostProcessBP.TVPostProcessBP_C:FadeOut__FinishedFunc
void ATVPostProcessBP_C::FadeOut__FinishedFunc()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Environments/Homebase/Blueprints/TVPostProcessBP.TVPostProcessBP_C:FadeOut__FinishedFunc");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Environments/Homebase/Blueprints/TVPostProcessBP.TVPostProcessBP_C:FadeOut__UpdateFunc
void ATVPostProcessBP_C::FadeOut__UpdateFunc()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Environments/Homebase/Blueprints/TVPostProcessBP.TVPostProcessBP_C:FadeOut__UpdateFunc");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Environments/Homebase/Blueprints/TVPostProcessBP.TVPostProcessBP_C:Camera_StartTheMonitor_Text_Timeline__FinishedFunc
void ATVPostProcessBP_C::Camera_StartTheMonitor_Text_Timeline__FinishedFunc()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Environments/Homebase/Blueprints/TVPostProcessBP.TVPostProcessBP_C:Camera_StartTheMonitor_Text_Timeline__FinishedFunc");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Environments/Homebase/Blueprints/TVPostProcessBP.TVPostProcessBP_C:Camera_StartTheMonitor_Text_Timeline__UpdateFunc
void ATVPostProcessBP_C::Camera_StartTheMonitor_Text_Timeline__UpdateFunc()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Environments/Homebase/Blueprints/TVPostProcessBP.TVPostProcessBP_C:Camera_StartTheMonitor_Text_Timeline__UpdateFunc");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Environments/Homebase/Blueprints/TVPostProcessBP.TVPostProcessBP_C:Timeline_0__FinishedFunc
void ATVPostProcessBP_C::Timeline_0__FinishedFunc()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Environments/Homebase/Blueprints/TVPostProcessBP.TVPostProcessBP_C:Timeline_0__FinishedFunc");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Environments/Homebase/Blueprints/TVPostProcessBP.TVPostProcessBP_C:Timeline_0__UpdateFunc
void ATVPostProcessBP_C::Timeline_0__UpdateFunc()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Environments/Homebase/Blueprints/TVPostProcessBP.TVPostProcessBP_C:Timeline_0__UpdateFunc");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Environments/Homebase/Blueprints/TVPostProcessBP.TVPostProcessBP_C:Timeline_0__Switch Camera Position__EventFunc
void ATVPostProcessBP_C::Timeline_0__Switch_Camera_Position__EventFunc()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Environments/Homebase/Blueprints/TVPostProcessBP.TVPostProcessBP_C:Timeline_0__Switch Camera Position__EventFunc");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Environments/Homebase/Blueprints/TVPostProcessBP.TVPostProcessBP_C:Jitter Timeline__FinishedFunc
void ATVPostProcessBP_C::Jitter_Timeline__FinishedFunc()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Environments/Homebase/Blueprints/TVPostProcessBP.TVPostProcessBP_C:Jitter Timeline__FinishedFunc");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Environments/Homebase/Blueprints/TVPostProcessBP.TVPostProcessBP_C:Jitter Timeline__UpdateFunc
void ATVPostProcessBP_C::Jitter_Timeline__UpdateFunc()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Environments/Homebase/Blueprints/TVPostProcessBP.TVPostProcessBP_C:Jitter Timeline__UpdateFunc");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Environments/Homebase/Blueprints/TVPostProcessBP.TVPostProcessBP_C:Jitter Timeline__Switch Camera Position__EventFunc
void ATVPostProcessBP_C::Jitter_Timeline__Switch_Camera_Position__EventFunc()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Environments/Homebase/Blueprints/TVPostProcessBP.TVPostProcessBP_C:Jitter Timeline__Switch Camera Position__EventFunc");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Environments/Homebase/Blueprints/TVPostProcessBP.TVPostProcessBP_C:ReceiveBeginPlay
void ATVPostProcessBP_C::ReceiveBeginPlay()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Environments/Homebase/Blueprints/TVPostProcessBP.TVPostProcessBP_C:ReceiveBeginPlay");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Environments/Homebase/Blueprints/TVPostProcessBP.TVPostProcessBP_C:ReceiveTick
void ATVPostProcessBP_C::ReceiveTick(float DeltaSeconds)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Environments/Homebase/Blueprints/TVPostProcessBP.TVPostProcessBP_C:ReceiveTick");

	FATVPostProcessBP_C_ReceiveTick_Params Parms;

	Parms.DeltaSeconds = DeltaSeconds;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Environments/Homebase/Blueprints/TVPostProcessBP.TVPostProcessBP_C:Camera_TransitionToLiveVideo
void ATVPostProcessBP_C::Camera_TransitionToLiveVideo()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Environments/Homebase/Blueprints/TVPostProcessBP.TVPostProcessBP_C:Camera_TransitionToLiveVideo");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Environments/Homebase/Blueprints/TVPostProcessBP.TVPostProcessBP_C:Camera_SwitchBetweenLocations
void ATVPostProcessBP_C::Camera_SwitchBetweenLocations()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Environments/Homebase/Blueprints/TVPostProcessBP.TVPostProcessBP_C:Camera_SwitchBetweenLocations");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Environments/Homebase/Blueprints/TVPostProcessBP.TVPostProcessBP_C:Camera_InitializePost
void ATVPostProcessBP_C::Camera_InitializePost()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Environments/Homebase/Blueprints/TVPostProcessBP.TVPostProcessBP_C:Camera_InitializePost");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Environments/Homebase/Blueprints/TVPostProcessBP.TVPostProcessBP_C:Camera_TriggerTheTroll
void ATVPostProcessBP_C::Camera_TriggerTheTroll()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Environments/Homebase/Blueprints/TVPostProcessBP.TVPostProcessBP_C:Camera_TriggerTheTroll");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Environments/Homebase/Blueprints/TVPostProcessBP.TVPostProcessBP_C:Camera_TransitionToLiveStatic
void ATVPostProcessBP_C::Camera_TransitionToLiveStatic()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Environments/Homebase/Blueprints/TVPostProcessBP.TVPostProcessBP_C:Camera_TransitionToLiveStatic");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Environments/Homebase/Blueprints/TVPostProcessBP.TVPostProcessBP_C:Camera_TurnOffThePostProcess
void ATVPostProcessBP_C::Camera_TurnOffThePostProcess()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Environments/Homebase/Blueprints/TVPostProcessBP.TVPostProcessBP_C:Camera_TurnOffThePostProcess");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Environments/Homebase/Blueprints/TVPostProcessBP.TVPostProcessBP_C:Camera_DebugEvents
void ATVPostProcessBP_C::Camera_DebugEvents()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Environments/Homebase/Blueprints/TVPostProcessBP.TVPostProcessBP_C:Camera_DebugEvents");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Environments/Homebase/Blueprints/TVPostProcessBP.TVPostProcessBP_C:Camera_StartTheMonitor_Text
void ATVPostProcessBP_C::Camera_StartTheMonitor_Text()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Environments/Homebase/Blueprints/TVPostProcessBP.TVPostProcessBP_C:Camera_StartTheMonitor_Text");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Environments/Homebase/Blueprints/TVPostProcessBP.TVPostProcessBP_C:Camera_DosTextFinished
void ATVPostProcessBP_C::Camera_DosTextFinished()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Environments/Homebase/Blueprints/TVPostProcessBP.TVPostProcessBP_C:Camera_DosTextFinished");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Environments/Homebase/Blueprints/TVPostProcessBP.TVPostProcessBP_C:Camera_ReturningPlayerInitializeWithLiveVideo
void ATVPostProcessBP_C::Camera_ReturningPlayerInitializeWithLiveVideo()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Environments/Homebase/Blueprints/TVPostProcessBP.TVPostProcessBP_C:Camera_ReturningPlayerInitializeWithLiveVideo");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Environments/Homebase/Blueprints/TVPostProcessBP.TVPostProcessBP_C:Camera_SwitchBetweenLocations_AfterPostProcessDisappears
void ATVPostProcessBP_C::Camera_SwitchBetweenLocations_AfterPostProcessDisappears()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Environments/Homebase/Blueprints/TVPostProcessBP.TVPostProcessBP_C:Camera_SwitchBetweenLocations_AfterPostProcessDisappears");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Environments/Homebase/Blueprints/TVPostProcessBP.TVPostProcessBP_C:Camera_LoadAndWait
void ATVPostProcessBP_C::Camera_LoadAndWait()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Environments/Homebase/Blueprints/TVPostProcessBP.TVPostProcessBP_C:Camera_LoadAndWait");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Environments/Homebase/Blueprints/TVPostProcessBP.TVPostProcessBP_C:Camera_Sequence_Start_StaticWhoomp
void ATVPostProcessBP_C::Camera_Sequence_Start_StaticWhoomp()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Environments/Homebase/Blueprints/TVPostProcessBP.TVPostProcessBP_C:Camera_Sequence_Start_StaticWhoomp");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Environments/Homebase/Blueprints/TVPostProcessBP.TVPostProcessBP_C:WriteOutLoading
void ATVPostProcessBP_C::WriteOutLoading()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Environments/Homebase/Blueprints/TVPostProcessBP.TVPostProcessBP_C:WriteOutLoading");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Environments/Homebase/Blueprints/TVPostProcessBP.TVPostProcessBP_C:SequenceFinished
void ATVPostProcessBP_C::SequenceFinished(FString SequenceName)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Environments/Homebase/Blueprints/TVPostProcessBP.TVPostProcessBP_C:SequenceFinished");

	FATVPostProcessBP_C_SequenceFinished_Params Parms;

	Parms.SequenceName = SequenceName;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Environments/Homebase/Blueprints/TVPostProcessBP.TVPostProcessBP_C:Camera_DisableEffects
void ATVPostProcessBP_C::Camera_DisableEffects()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Environments/Homebase/Blueprints/TVPostProcessBP.TVPostProcessBP_C:Camera_DisableEffects");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Environments/Homebase/Blueprints/TVPostProcessBP.TVPostProcessBP_C:FastForwardPostProcess
void ATVPostProcessBP_C::FastForwardPostProcess()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Environments/Homebase/Blueprints/TVPostProcessBP.TVPostProcessBP_C:FastForwardPostProcess");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Environments/Homebase/Blueprints/TVPostProcessBP.TVPostProcessBP_C:JitterTheScreen
void ATVPostProcessBP_C::JitterTheScreen()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Environments/Homebase/Blueprints/TVPostProcessBP.TVPostProcessBP_C:JitterTheScreen");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Environments/Homebase/Blueprints/TVPostProcessBP.TVPostProcessBP_C:ExecuteUbergraph_TVPostProcessBP
void ATVPostProcessBP_C::ExecuteUbergraph_TVPostProcessBP(int32_t EntryPoint)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Environments/Homebase/Blueprints/TVPostProcessBP.TVPostProcessBP_C:ExecuteUbergraph_TVPostProcessBP");

	FATVPostProcessBP_C_ExecuteUbergraph_TVPostProcessBP_Params Parms;

	Parms.EntryPoint = EntryPoint;

	ProcessEvent(FN, &Parms);
}

