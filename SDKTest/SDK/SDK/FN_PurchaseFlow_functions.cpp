#include "pch.h"

#include "FN_PurchaseFlow_classes.h"

UClass* UPurchaseFlowJSBridge::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/PurchaseFlow.PurchaseFlowJSBridge");

	return Class;
}

// Function /Script/PurchaseFlow.PurchaseFlowJSBridge:RequestClose
void UPurchaseFlowJSBridge::RequestClose(FString CloseInfo)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/PurchaseFlow.PurchaseFlowJSBridge:RequestClose");

	FUPurchaseFlowJSBridge_RequestClose_Params Parms;

	Parms.CloseInfo = CloseInfo;

	ProcessEvent(FN, &Parms);
}

// Function /Script/PurchaseFlow.PurchaseFlowJSBridge:Receipt
void UPurchaseFlowJSBridge::Receipt(FPurchaseFlowReceiptParam Receipt)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/PurchaseFlow.PurchaseFlowJSBridge:Receipt");

	FUPurchaseFlowJSBridge_Receipt_Params Parms;

	Parms.Receipt = Receipt;

	ProcessEvent(FN, &Parms);
}

UScriptStruct* FPurchaseFlowReceiptParam::StaticStruct()
{
	static UScriptStruct* Struct = nullptr;
	if (!Struct)
		Struct = UObject::StaticFindObject<UScriptStruct>("/Script/PurchaseFlow.PurchaseFlowReceiptParam");

	return Struct;
}

UScriptStruct* FPurchaseFlowOffer::StaticStruct()
{
	static UScriptStruct* Struct = nullptr;
	if (!Struct)
		Struct = UObject::StaticFindObject<UScriptStruct>("/Script/PurchaseFlow.PurchaseFlowOffer");

	return Struct;
}

UScriptStruct* FPurchaseFlowItem::StaticStruct()
{
	static UScriptStruct* Struct = nullptr;
	if (!Struct)
		Struct = UObject::StaticFindObject<UScriptStruct>("/Script/PurchaseFlow.PurchaseFlowItem");

	return Struct;
}

