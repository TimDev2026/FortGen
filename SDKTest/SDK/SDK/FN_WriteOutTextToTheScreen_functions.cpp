#include "pch.h"

#include "FN_WriteOutTextToTheScreen_classes.h"

UClass* AWriteOutTextToTheScreen_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Blueprints/Adventures/HomebaseTutorial/WriteOutTextToTheScreen.WriteOutTextToTheScreen_C");

	return Class;
}

// Function /Game/Blueprints/Adventures/HomebaseTutorial/WriteOutTextToTheScreen.WriteOutTextToTheScreen_C:Line
void AWriteOutTextToTheScreen_C::Line()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Blueprints/Adventures/HomebaseTutorial/WriteOutTextToTheScreen.WriteOutTextToTheScreen_C:Line");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Blueprints/Adventures/HomebaseTutorial/WriteOutTextToTheScreen.WriteOutTextToTheScreen_C:UserConstructionScript
void AWriteOutTextToTheScreen_C::UserConstructionScript()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Blueprints/Adventures/HomebaseTutorial/WriteOutTextToTheScreen.WriteOutTextToTheScreen_C:UserConstructionScript");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Blueprints/Adventures/HomebaseTutorial/WriteOutTextToTheScreen.WriteOutTextToTheScreen_C:ReceiveTick
void AWriteOutTextToTheScreen_C::ReceiveTick(float DeltaSeconds)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Blueprints/Adventures/HomebaseTutorial/WriteOutTextToTheScreen.WriteOutTextToTheScreen_C:ReceiveTick");

	FAWriteOutTextToTheScreen_C_ReceiveTick_Params Parms;

	Parms.DeltaSeconds = DeltaSeconds;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Blueprints/Adventures/HomebaseTutorial/WriteOutTextToTheScreen.WriteOutTextToTheScreen_C:WriteOutText
void AWriteOutTextToTheScreen_C::WriteOutText(FString String, float TimePerCharacter, int32_t Anim_Start_String_Index__Length_Based_, int32_t Anim_End_String_Index__default___length_, bool Init_New_Line_, FLinearColor Color, bool Bold_, int32_t AdditionalLines)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Blueprints/Adventures/HomebaseTutorial/WriteOutTextToTheScreen.WriteOutTextToTheScreen_C:WriteOutText");

	FAWriteOutTextToTheScreen_C_WriteOutText_Params Parms;

	Parms.String = String;
	Parms.TimePerCharacter = TimePerCharacter;
	Parms.Anim_Start_String_Index__Length_Based_ = Anim_Start_String_Index__Length_Based_;
	Parms.Anim_End_String_Index__default___length_ = Anim_End_String_Index__default___length_;
	Parms.Init_New_Line_ = Init_New_Line_;
	Parms.Color = Color;
	Parms.Bold_ = Bold_;
	Parms.AdditionalLines = AdditionalLines;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Blueprints/Adventures/HomebaseTutorial/WriteOutTextToTheScreen.WriteOutTextToTheScreen_C:ReceiveBeginPlay
void AWriteOutTextToTheScreen_C::ReceiveBeginPlay()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Blueprints/Adventures/HomebaseTutorial/WriteOutTextToTheScreen.WriteOutTextToTheScreen_C:ReceiveBeginPlay");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Blueprints/Adventures/HomebaseTutorial/WriteOutTextToTheScreen.WriteOutTextToTheScreen_C:ErasePage
void AWriteOutTextToTheScreen_C::ErasePage()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Blueprints/Adventures/HomebaseTutorial/WriteOutTextToTheScreen.WriteOutTextToTheScreen_C:ErasePage");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Blueprints/Adventures/HomebaseTutorial/WriteOutTextToTheScreen.WriteOutTextToTheScreen_C:MoveText
void AWriteOutTextToTheScreen_C::MoveText(float NewHeight)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Blueprints/Adventures/HomebaseTutorial/WriteOutTextToTheScreen.WriteOutTextToTheScreen_C:MoveText");

	FAWriteOutTextToTheScreen_C_MoveText_Params Parms;

	Parms.NewHeight = NewHeight;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Blueprints/Adventures/HomebaseTutorial/WriteOutTextToTheScreen.WriteOutTextToTheScreen_C:ExecuteUbergraph_WriteOutTextToTheScreen
void AWriteOutTextToTheScreen_C::ExecuteUbergraph_WriteOutTextToTheScreen(int32_t EntryPoint)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Blueprints/Adventures/HomebaseTutorial/WriteOutTextToTheScreen.WriteOutTextToTheScreen_C:ExecuteUbergraph_WriteOutTextToTheScreen");

	FAWriteOutTextToTheScreen_C_ExecuteUbergraph_WriteOutTextToTheScreen_Params Parms;

	Parms.EntryPoint = EntryPoint;

	ProcessEvent(FN, &Parms);
}

