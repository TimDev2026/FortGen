#include "pch.h"

UScriptStruct* FFriendsFontStyle::StaticStruct()
{
	static UScriptStruct* Struct = nullptr;
	if (!Struct)
		Struct = UObject::StaticFindObject<UScriptStruct>("/Script/FriendsAndChat.FriendsFontStyle");

	return Struct;
}

UScriptStruct* FFriendsListStyle::StaticStruct()
{
	static UScriptStruct* Struct = nullptr;
	if (!Struct)
		Struct = UObject::StaticFindObject<UScriptStruct>("/Script/FriendsAndChat.FriendsListStyle");

	return Struct;
}

UScriptStruct* FFriendsComboStyle::StaticStruct()
{
	static UScriptStruct* Struct = nullptr;
	if (!Struct)
		Struct = UObject::StaticFindObject<UScriptStruct>("/Script/FriendsAndChat.FriendsComboStyle");

	return Struct;
}

UScriptStruct* FFriendsChatStyle::StaticStruct()
{
	static UScriptStruct* Struct = nullptr;
	if (!Struct)
		Struct = UObject::StaticFindObject<UScriptStruct>("/Script/FriendsAndChat.FriendsChatStyle");

	return Struct;
}

UScriptStruct* FFriendsChatChromeStyle::StaticStruct()
{
	static UScriptStruct* Struct = nullptr;
	if (!Struct)
		Struct = UObject::StaticFindObject<UScriptStruct>("/Script/FriendsAndChat.FriendsChatChromeStyle");

	return Struct;
}

UScriptStruct* FFriendsMarkupStyle::StaticStruct()
{
	static UScriptStruct* Struct = nullptr;
	if (!Struct)
		Struct = UObject::StaticFindObject<UScriptStruct>("/Script/FriendsAndChat.FriendsMarkupStyle");

	return Struct;
}

UScriptStruct* FFriendsAndChatStyle::StaticStruct()
{
	static UScriptStruct* Struct = nullptr;
	if (!Struct)
		Struct = UObject::StaticFindObject<UScriptStruct>("/Script/FriendsAndChat.FriendsAndChatStyle");

	return Struct;
}

