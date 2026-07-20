#include "pch.h"

#include "FN_NewsScreenWidget_classes.h"

UClass* UNewsScreenWidget_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/UI/NewsScreen/NewsScreenWidget.NewsScreenWidget_C");

	return Class;
}

// Function /Game/UI/NewsScreen/NewsScreenWidget.NewsScreenWidget_C:BndEvt__NewsCloseButton_K2Node_ComponentBoundEvent_44_FortBaseButtonClicked__DelegateSignature
void UNewsScreenWidget_C::BndEvt__NewsCloseButton_K2Node_ComponentBoundEvent_44_FortBaseButtonClicked__DelegateSignature(class UFortBaseButton* Button)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/NewsScreen/NewsScreenWidget.NewsScreenWidget_C:BndEvt__NewsCloseButton_K2Node_ComponentBoundEvent_44_FortBaseButtonClicked__DelegateSignature");

	FUNewsScreenWidget_C_BndEvt__NewsCloseButton_K2Node_ComponentBoundEvent_44_FortBaseButtonClicked__DelegateSignature_Params Parms;

	Parms.Button = Button;

	ProcessEvent(FN, &Parms);
}

// Function /Game/UI/NewsScreen/NewsScreenWidget.NewsScreenWidget_C:BndEvt__ButtonIconText_K2Node_ComponentBoundEvent_580_FortBaseButtonClicked__DelegateSignature
void UNewsScreenWidget_C::BndEvt__ButtonIconText_K2Node_ComponentBoundEvent_580_FortBaseButtonClicked__DelegateSignature(class UFortBaseButton* Button)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/NewsScreen/NewsScreenWidget.NewsScreenWidget_C:BndEvt__ButtonIconText_K2Node_ComponentBoundEvent_580_FortBaseButtonClicked__DelegateSignature");

	FUNewsScreenWidget_C_BndEvt__ButtonIconText_K2Node_ComponentBoundEvent_580_FortBaseButtonClicked__DelegateSignature_Params Parms;

	Parms.Button = Button;

	ProcessEvent(FN, &Parms);
}

// Function /Game/UI/NewsScreen/NewsScreenWidget.NewsScreenWidget_C:ExecuteUbergraph_NewsScreenWidget
void UNewsScreenWidget_C::ExecuteUbergraph_NewsScreenWidget(int32_t EntryPoint)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/NewsScreen/NewsScreenWidget.NewsScreenWidget_C:ExecuteUbergraph_NewsScreenWidget");

	FUNewsScreenWidget_C_ExecuteUbergraph_NewsScreenWidget_Params Parms;

	Parms.EntryPoint = EntryPoint;

	ProcessEvent(FN, &Parms);
}

