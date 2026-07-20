#include "pch.h"

#include "FN_Lobby_classes.h"

UClass* ALobbyBeaconHost::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/Lobby.LobbyBeaconHost");

	return Class;
}

UClass* ALobbyBeaconClient::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/Lobby.LobbyBeaconClient");

	return Class;
}

// Function /Script/Lobby.LobbyBeaconClient:ServerSetPartyOwner
void ALobbyBeaconClient::ServerSetPartyOwner(FUniqueNetIdRepl InUniqueId, FUniqueNetIdRepl InPartyOwnerId)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/Lobby.LobbyBeaconClient:ServerSetPartyOwner");

	FALobbyBeaconClient_ServerSetPartyOwner_Params Parms;

	Parms.InUniqueId = InUniqueId;
	Parms.InPartyOwnerId = InPartyOwnerId;

	ProcessEvent(FN, &Parms);
}

// Function /Script/Lobby.LobbyBeaconClient:ServerNotifyJoiningServer
void ALobbyBeaconClient::ServerNotifyJoiningServer()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/Lobby.LobbyBeaconClient:ServerNotifyJoiningServer");

	ProcessEvent(FN, nullptr);
}

// Function /Script/Lobby.LobbyBeaconClient:ServerLoginPlayer
void ALobbyBeaconClient::ServerLoginPlayer(FString InSessionId, FUniqueNetIdRepl InUniqueId, FString UrlString)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/Lobby.LobbyBeaconClient:ServerLoginPlayer");

	FALobbyBeaconClient_ServerLoginPlayer_Params Parms;

	Parms.InSessionId = InSessionId;
	Parms.InUniqueId = InUniqueId;
	Parms.UrlString = UrlString;

	ProcessEvent(FN, &Parms);
}

// Function /Script/Lobby.LobbyBeaconClient:ServerKickPlayer
void ALobbyBeaconClient::ServerKickPlayer(FUniqueNetIdRepl PlayerToKick, FText Reason)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/Lobby.LobbyBeaconClient:ServerKickPlayer");

	FALobbyBeaconClient_ServerKickPlayer_Params Parms;

	Parms.PlayerToKick = PlayerToKick;
	Parms.Reason = Reason;

	ProcessEvent(FN, &Parms);
}

// Function /Script/Lobby.LobbyBeaconClient:ServerDisconnectFromLobby
void ALobbyBeaconClient::ServerDisconnectFromLobby()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/Lobby.LobbyBeaconClient:ServerDisconnectFromLobby");

	ProcessEvent(FN, nullptr);
}

// Function /Script/Lobby.LobbyBeaconClient:ServerCheat
void ALobbyBeaconClient::ServerCheat(FString Msg)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/Lobby.LobbyBeaconClient:ServerCheat");

	FALobbyBeaconClient_ServerCheat_Params Parms;

	Parms.Msg = Msg;

	ProcessEvent(FN, &Parms);
}

// Function /Script/Lobby.LobbyBeaconClient:ClientWasKicked
void ALobbyBeaconClient::ClientWasKicked(FText KickReason)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/Lobby.LobbyBeaconClient:ClientWasKicked");

	FALobbyBeaconClient_ClientWasKicked_Params Parms;

	Parms.KickReason = KickReason;

	ProcessEvent(FN, &Parms);
}

// Function /Script/Lobby.LobbyBeaconClient:ClientSetInviteFlags
void ALobbyBeaconClient::ClientSetInviteFlags(FJoinabilitySettings Settings)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/Lobby.LobbyBeaconClient:ClientSetInviteFlags");

	FALobbyBeaconClient_ClientSetInviteFlags_Params Parms;

	Parms.Settings = Settings;

	ProcessEvent(FN, &Parms);
}

// Function /Script/Lobby.LobbyBeaconClient:ClientPlayerLeft
void ALobbyBeaconClient::ClientPlayerLeft(FUniqueNetIdRepl InUniqueId)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/Lobby.LobbyBeaconClient:ClientPlayerLeft");

	FALobbyBeaconClient_ClientPlayerLeft_Params Parms;

	Parms.InUniqueId = InUniqueId;

	ProcessEvent(FN, &Parms);
}

// Function /Script/Lobby.LobbyBeaconClient:ClientPlayerJoined
void ALobbyBeaconClient::ClientPlayerJoined(FText NewPlayerName, FUniqueNetIdRepl InUniqueId)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/Lobby.LobbyBeaconClient:ClientPlayerJoined");

	FALobbyBeaconClient_ClientPlayerJoined_Params Parms;

	Parms.NewPlayerName = NewPlayerName;
	Parms.InUniqueId = InUniqueId;

	ProcessEvent(FN, &Parms);
}

// Function /Script/Lobby.LobbyBeaconClient:ClientLoginComplete
void ALobbyBeaconClient::ClientLoginComplete(FUniqueNetIdRepl InUniqueId, bool bWasSuccessful)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/Lobby.LobbyBeaconClient:ClientLoginComplete");

	FALobbyBeaconClient_ClientLoginComplete_Params Parms;

	Parms.InUniqueId = InUniqueId;
	Parms.bWasSuccessful = bWasSuccessful;

	ProcessEvent(FN, &Parms);
}

// Function /Script/Lobby.LobbyBeaconClient:ClientJoinGame
void ALobbyBeaconClient::ClientJoinGame()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/Lobby.LobbyBeaconClient:ClientJoinGame");

	ProcessEvent(FN, nullptr);
}

// Function /Script/Lobby.LobbyBeaconClient:ClientAckJoiningServer
void ALobbyBeaconClient::ClientAckJoiningServer()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/Lobby.LobbyBeaconClient:ClientAckJoiningServer");

	ProcessEvent(FN, nullptr);
}

UClass* ALobbyBeaconPlayerState::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/Lobby.LobbyBeaconPlayerState");

	return Class;
}

// Function /Script/Lobby.LobbyBeaconPlayerState:OnRep_PartyOwner
void ALobbyBeaconPlayerState::OnRep_PartyOwner()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/Lobby.LobbyBeaconPlayerState:OnRep_PartyOwner");

	ProcessEvent(FN, nullptr);
}

// Function /Script/Lobby.LobbyBeaconPlayerState:OnRep_InLobby
void ALobbyBeaconPlayerState::OnRep_InLobby()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/Lobby.LobbyBeaconPlayerState:OnRep_InLobby");

	ProcessEvent(FN, nullptr);
}

UClass* ALobbyBeaconState::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/Lobby.LobbyBeaconState");

	return Class;
}

// Function /Script/Lobby.LobbyBeaconState:OnRep_WaitForPlayersTimeRemaining
void ALobbyBeaconState::OnRep_WaitForPlayersTimeRemaining()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/Lobby.LobbyBeaconState:OnRep_WaitForPlayersTimeRemaining");

	ProcessEvent(FN, nullptr);
}

// Function /Script/Lobby.LobbyBeaconState:OnRep_LobbyStarted
void ALobbyBeaconState::OnRep_LobbyStarted()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/Lobby.LobbyBeaconState:OnRep_LobbyStarted");

	ProcessEvent(FN, nullptr);
}

UScriptStruct* FLobbyPlayerStateInfoArray::StaticStruct()
{
	static UScriptStruct* Struct = nullptr;
	if (!Struct)
		Struct = UObject::StaticFindObject<UScriptStruct>("/Script/Lobby.LobbyPlayerStateInfoArray");

	return Struct;
}

UScriptStruct* FLobbyPlayerStateActorInfo::StaticStruct()
{
	static UScriptStruct* Struct = nullptr;
	if (!Struct)
		Struct = UObject::StaticFindObject<UScriptStruct>("/Script/Lobby.LobbyPlayerStateActorInfo");

	return Struct;
}

