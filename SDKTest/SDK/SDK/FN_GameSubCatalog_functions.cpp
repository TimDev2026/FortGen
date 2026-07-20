#include "pch.h"

UScriptStruct* FCatalogPurchaseNotification::StaticStruct()
{
	static UScriptStruct* Struct = nullptr;
	if (!Struct)
		Struct = UObject::StaticFindObject<UScriptStruct>("/Script/GameSubCatalog.CatalogPurchaseNotification");

	return Struct;
}

UScriptStruct* FCatalogDownload::StaticStruct()
{
	static UScriptStruct* Struct = nullptr;
	if (!Struct)
		Struct = UObject::StaticFindObject<UScriptStruct>("/Script/GameSubCatalog.CatalogDownload");

	return Struct;
}

UScriptStruct* FStorefront::StaticStruct()
{
	static UScriptStruct* Struct = nullptr;
	if (!Struct)
		Struct = UObject::StaticFindObject<UScriptStruct>("/Script/GameSubCatalog.Storefront");

	return Struct;
}

UScriptStruct* FCatalogOffer::StaticStruct()
{
	static UScriptStruct* Struct = nullptr;
	if (!Struct)
		Struct = UObject::StaticFindObject<UScriptStruct>("/Script/GameSubCatalog.CatalogOffer");

	return Struct;
}

UScriptStruct* FCatalogMetaAssetInfo::StaticStruct()
{
	static UScriptStruct* Struct = nullptr;
	if (!Struct)
		Struct = UObject::StaticFindObject<UScriptStruct>("/Script/GameSubCatalog.CatalogMetaAssetInfo");

	return Struct;
}

UScriptStruct* FCatalogItemPrice::StaticStruct()
{
	static UScriptStruct* Struct = nullptr;
	if (!Struct)
		Struct = UObject::StaticFindObject<UScriptStruct>("/Script/GameSubCatalog.CatalogItemPrice");

	return Struct;
}

UScriptStruct* FCatalogKeyValue::StaticStruct()
{
	static UScriptStruct* Struct = nullptr;
	if (!Struct)
		Struct = UObject::StaticFindObject<UScriptStruct>("/Script/GameSubCatalog.CatalogKeyValue");

	return Struct;
}

UScriptStruct* FServicePrice::StaticStruct()
{
	static UScriptStruct* Struct = nullptr;
	if (!Struct)
		Struct = UObject::StaticFindObject<UScriptStruct>("/Script/GameSubCatalog.ServicePrice");

	return Struct;
}

UScriptStruct* FCatalogPurchaseInfo::StaticStruct()
{
	static UScriptStruct* Struct = nullptr;
	if (!Struct)
		Struct = UObject::StaticFindObject<UScriptStruct>("/Script/GameSubCatalog.CatalogPurchaseInfo");

	return Struct;
}

UScriptStruct* FCatalogReceiptInfo::StaticStruct()
{
	static UScriptStruct* Struct = nullptr;
	if (!Struct)
		Struct = UObject::StaticFindObject<UScriptStruct>("/Script/GameSubCatalog.CatalogReceiptInfo");

	return Struct;
}

