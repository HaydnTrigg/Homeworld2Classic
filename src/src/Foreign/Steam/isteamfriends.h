#if 0
#ifndef __ISTEAMFRIENDS_H__
#define __ISTEAMFRIENDS_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

enum EFriendRelationship
{
    k_EFriendRelationshipNone = 0,
    k_EFriendRelationshipBlocked,
    k_EFriendRelationshipRequestRecipient,
    k_EFriendRelationshipFriend,
    k_EFriendRelationshipRequestInitiator,
    k_EFriendRelationshipIgnored,
    k_EFriendRelationshipIgnoredFriend,
    k_EFriendRelationshipSuggested,
    k_EFriendRelationshipMax,
};

enum EPersonaState
{
    k_EPersonaStateOffline = 0,
    k_EPersonaStateOnline,
    k_EPersonaStateBusy,
    k_EPersonaStateAway,
    k_EPersonaStateSnooze,
    k_EPersonaStateLookingToTrade,
    k_EPersonaStateLookingToPlay,
    k_EPersonaStateMax,
};

enum
{
    k_cchMaxRichPresenceValueLength = 256, // 0x0100
};

enum EOverlayToStoreFlag
{
    k_EOverlayToStoreFlag_None = 0,
    k_EOverlayToStoreFlag_AddToCart,
    k_EOverlayToStoreFlag_AddToCartAndShow,
};

/* ---------- definitions */

struct FriendGameInfo_t
{
    CGameID m_gameID; // 0x0
    unsigned __int32 m_unGameIP; // 0x8
    unsigned short m_usGamePort; // 0xC
    unsigned short m_usQueryPort; // 0xE
    CSteamID m_steamIDLobby; // 0x10
    FriendGameInfo_t(); /* compiler_generated() */
};
static_assert(sizeof(FriendGameInfo_t) == 24, "Invalid FriendGameInfo_t size");

class ISteamFriends
{
public:
    virtual char const *GetPersonaName() = 0;
    virtual unsigned long long SetPersonaName(char const *) = 0;
    virtual EPersonaState GetPersonaState() = 0;
    virtual __int32 GetFriendCount(__int32) = 0;
    virtual CSteamID GetFriendByIndex(__int32, __int32) = 0;
    virtual EFriendRelationship GetFriendRelationship(CSteamID) = 0;
    virtual EPersonaState GetFriendPersonaState(CSteamID) = 0;
    virtual char const *GetFriendPersonaName(CSteamID) = 0;
    virtual bool GetFriendGamePlayed(CSteamID, FriendGameInfo_t *) = 0;
    virtual char const *GetFriendPersonaNameHistory(CSteamID, __int32) = 0;
    virtual char const *GetPlayerNickname(CSteamID) = 0;
    virtual bool HasFriend(CSteamID, __int32) = 0;
    virtual __int32 GetClanCount() = 0;
    virtual CSteamID GetClanByIndex(__int32) = 0;
    virtual char const *GetClanName(CSteamID) = 0;
    virtual char const *GetClanTag(CSteamID) = 0;
    virtual bool GetClanActivityCounts(CSteamID, __int32 *, __int32 *, __int32 *) = 0;
    virtual unsigned long long DownloadClanActivityCounts(CSteamID *, __int32) = 0;
    virtual __int32 GetFriendCountFromSource(CSteamID) = 0;
    virtual CSteamID GetFriendFromSourceByIndex(CSteamID, __int32) = 0;
    virtual bool IsUserInSource(CSteamID, CSteamID) = 0;
    virtual void SetInGameVoiceSpeaking(CSteamID, bool) = 0;
    virtual void ActivateGameOverlay(char const *) = 0;
    virtual void ActivateGameOverlayToUser(char const *, CSteamID) = 0;
    virtual void ActivateGameOverlayToWebPage(char const *) = 0;
    virtual void ActivateGameOverlayToStore(unsigned __int32, EOverlayToStoreFlag) = 0;
    virtual void SetPlayedWith(CSteamID) = 0;
    virtual void ActivateGameOverlayInviteDialog(CSteamID) = 0;
    virtual __int32 GetSmallFriendAvatar(CSteamID) = 0;
    virtual __int32 GetMediumFriendAvatar(CSteamID) = 0;
    virtual __int32 GetLargeFriendAvatar(CSteamID) = 0;
    virtual bool RequestUserInformation(CSteamID, bool) = 0;
    virtual unsigned long long RequestClanOfficerList(CSteamID) = 0;
    virtual CSteamID GetClanOwner(CSteamID) = 0;
    virtual __int32 GetClanOfficerCount(CSteamID) = 0;
    virtual CSteamID GetClanOfficerByIndex(CSteamID, __int32) = 0;
    virtual unsigned __int32 GetUserRestrictions() = 0;
    virtual bool SetRichPresence(char const *, char const *) = 0;
    virtual void ClearRichPresence() = 0;
    virtual char const *GetFriendRichPresence(CSteamID, char const *) = 0;
    virtual __int32 GetFriendRichPresenceKeyCount(CSteamID) = 0;
    virtual char const *GetFriendRichPresenceKeyByIndex(CSteamID, __int32) = 0;
    virtual void RequestFriendRichPresence(CSteamID) = 0;
    virtual bool InviteUserToGame(CSteamID, char const *) = 0;
    virtual __int32 GetCoplayFriendCount() = 0;
    virtual CSteamID GetCoplayFriend(__int32) = 0;
    virtual __int32 GetFriendCoplayTime(CSteamID) = 0;
    virtual unsigned __int32 GetFriendCoplayGame(CSteamID) = 0;
    virtual unsigned long long JoinClanChatRoom(CSteamID) = 0;
    virtual bool LeaveClanChatRoom(CSteamID) = 0;
    virtual __int32 GetClanChatMemberCount(CSteamID) = 0;
    virtual CSteamID GetChatMemberByIndex(CSteamID, __int32) = 0;
    virtual bool SendClanChatMessage(CSteamID, char const *) = 0;
    virtual __int32 GetClanChatMessage(CSteamID, __int32, void *, __int32, EChatEntryType *, CSteamID *) = 0;
    virtual bool IsClanChatAdmin(CSteamID, CSteamID) = 0;
    virtual bool IsClanChatWindowOpenInSteam(CSteamID) = 0;
    virtual bool OpenClanChatWindowInSteam(CSteamID) = 0;
    virtual bool CloseClanChatWindowInSteam(CSteamID) = 0;
    virtual bool SetListenForFriendsMessages(bool) = 0;
    virtual bool ReplyToFriendMessage(CSteamID, char const *) = 0;
    virtual __int32 GetFriendMessage(CSteamID, __int32, void *, __int32, EChatEntryType *) = 0;
    virtual unsigned long long GetFollowerCount(CSteamID) = 0;
    virtual unsigned long long IsFollowing(CSteamID) = 0;
    virtual unsigned long long EnumerateFollowingList(unsigned __int32) = 0;
    ISteamFriends(ISteamFriends const &); /* compiler_generated() */
    ISteamFriends(); /* compiler_generated() */
    ISteamFriends &operator=(ISteamFriends const &); /* compiler_generated() */
};
static_assert(sizeof(ISteamFriends) == 4, "Invalid ISteamFriends size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __ISTEAMFRIENDS_H__
/* combined */
#ifndef __ISTEAMFRIENDS_H__
#define __ISTEAMFRIENDS_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

enum
{
    k_cchMaxRichPresenceValueLength = 256, // 0x0100
};

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __ISTEAMFRIENDS_H__
/* combined */
#ifndef __ISTEAMFRIENDS_H__
#define __ISTEAMFRIENDS_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

enum EFriendRelationship
{
    k_EFriendRelationshipNone = 0,
    k_EFriendRelationshipBlocked,
    k_EFriendRelationshipRequestRecipient,
    k_EFriendRelationshipFriend,
    k_EFriendRelationshipRequestInitiator,
    k_EFriendRelationshipIgnored,
    k_EFriendRelationshipIgnoredFriend,
    k_EFriendRelationshipSuggested,
    k_EFriendRelationshipMax,
};

enum EPersonaState
{
    k_EPersonaStateOffline = 0,
    k_EPersonaStateOnline,
    k_EPersonaStateBusy,
    k_EPersonaStateAway,
    k_EPersonaStateSnooze,
    k_EPersonaStateLookingToTrade,
    k_EPersonaStateLookingToPlay,
    k_EPersonaStateMax,
};

enum
{
    k_cchMaxRichPresenceValueLength = 256, // 0x0100
};

enum EOverlayToStoreFlag
{
    k_EOverlayToStoreFlag_None = 0,
    k_EOverlayToStoreFlag_AddToCart,
    k_EOverlayToStoreFlag_AddToCartAndShow,
};

/* ---------- definitions */

struct FriendGameInfo_t
{
    CGameID m_gameID; // 0x0
    unsigned __int32 m_unGameIP; // 0x8
    unsigned short m_usGamePort; // 0xC
    unsigned short m_usQueryPort; // 0xE
    CSteamID m_steamIDLobby; // 0x10
    FriendGameInfo_t(); /* compiler_generated() */
};
static_assert(sizeof(FriendGameInfo_t) == 24, "Invalid FriendGameInfo_t size");

class ISteamFriends
{
public:
    virtual char const *GetPersonaName() = 0;
    virtual unsigned long long SetPersonaName(char const *) = 0;
    virtual EPersonaState GetPersonaState() = 0;
    virtual __int32 GetFriendCount(__int32) = 0;
    virtual CSteamID GetFriendByIndex(__int32, __int32) = 0;
    virtual EFriendRelationship GetFriendRelationship(CSteamID) = 0;
    virtual EPersonaState GetFriendPersonaState(CSteamID) = 0;
    virtual char const *GetFriendPersonaName(CSteamID) = 0;
    virtual bool GetFriendGamePlayed(CSteamID, FriendGameInfo_t *) = 0;
    virtual char const *GetFriendPersonaNameHistory(CSteamID, __int32) = 0;
    virtual char const *GetPlayerNickname(CSteamID) = 0;
    virtual bool HasFriend(CSteamID, __int32) = 0;
    virtual __int32 GetClanCount() = 0;
    virtual CSteamID GetClanByIndex(__int32) = 0;
    virtual char const *GetClanName(CSteamID) = 0;
    virtual char const *GetClanTag(CSteamID) = 0;
    virtual bool GetClanActivityCounts(CSteamID, __int32 *, __int32 *, __int32 *) = 0;
    virtual unsigned long long DownloadClanActivityCounts(CSteamID *, __int32) = 0;
    virtual __int32 GetFriendCountFromSource(CSteamID) = 0;
    virtual CSteamID GetFriendFromSourceByIndex(CSteamID, __int32) = 0;
    virtual bool IsUserInSource(CSteamID, CSteamID) = 0;
    virtual void SetInGameVoiceSpeaking(CSteamID, bool) = 0;
    virtual void ActivateGameOverlay(char const *) = 0;
    virtual void ActivateGameOverlayToUser(char const *, CSteamID) = 0;
    virtual void ActivateGameOverlayToWebPage(char const *) = 0;
    virtual void ActivateGameOverlayToStore(unsigned __int32, EOverlayToStoreFlag) = 0;
    virtual void SetPlayedWith(CSteamID) = 0;
    virtual void ActivateGameOverlayInviteDialog(CSteamID) = 0;
    virtual __int32 GetSmallFriendAvatar(CSteamID) = 0;
    virtual __int32 GetMediumFriendAvatar(CSteamID) = 0;
    virtual __int32 GetLargeFriendAvatar(CSteamID) = 0;
    virtual bool RequestUserInformation(CSteamID, bool) = 0;
    virtual unsigned long long RequestClanOfficerList(CSteamID) = 0;
    virtual CSteamID GetClanOwner(CSteamID) = 0;
    virtual __int32 GetClanOfficerCount(CSteamID) = 0;
    virtual CSteamID GetClanOfficerByIndex(CSteamID, __int32) = 0;
    virtual unsigned __int32 GetUserRestrictions() = 0;
    virtual bool SetRichPresence(char const *, char const *) = 0;
    virtual void ClearRichPresence() = 0;
    virtual char const *GetFriendRichPresence(CSteamID, char const *) = 0;
    virtual __int32 GetFriendRichPresenceKeyCount(CSteamID) = 0;
    virtual char const *GetFriendRichPresenceKeyByIndex(CSteamID, __int32) = 0;
    virtual void RequestFriendRichPresence(CSteamID) = 0;
    virtual bool InviteUserToGame(CSteamID, char const *) = 0;
    virtual __int32 GetCoplayFriendCount() = 0;
    virtual CSteamID GetCoplayFriend(__int32) = 0;
    virtual __int32 GetFriendCoplayTime(CSteamID) = 0;
    virtual unsigned __int32 GetFriendCoplayGame(CSteamID) = 0;
    virtual unsigned long long JoinClanChatRoom(CSteamID) = 0;
    virtual bool LeaveClanChatRoom(CSteamID) = 0;
    virtual __int32 GetClanChatMemberCount(CSteamID) = 0;
    virtual CSteamID GetChatMemberByIndex(CSteamID, __int32) = 0;
    virtual bool SendClanChatMessage(CSteamID, char const *) = 0;
    virtual __int32 GetClanChatMessage(CSteamID, __int32, void *, __int32, EChatEntryType *, CSteamID *) = 0;
    virtual bool IsClanChatAdmin(CSteamID, CSteamID) = 0;
    virtual bool IsClanChatWindowOpenInSteam(CSteamID) = 0;
    virtual bool OpenClanChatWindowInSteam(CSteamID) = 0;
    virtual bool CloseClanChatWindowInSteam(CSteamID) = 0;
    virtual bool SetListenForFriendsMessages(bool) = 0;
    virtual bool ReplyToFriendMessage(CSteamID, char const *) = 0;
    virtual __int32 GetFriendMessage(CSteamID, __int32, void *, __int32, EChatEntryType *) = 0;
    virtual unsigned long long GetFollowerCount(CSteamID) = 0;
    virtual unsigned long long IsFollowing(CSteamID) = 0;
    virtual unsigned long long EnumerateFollowingList(unsigned __int32) = 0;
    ISteamFriends(ISteamFriends const &); /* compiler_generated() */
    ISteamFriends(); /* compiler_generated() */
    ISteamFriends &operator=(ISteamFriends const &); /* compiler_generated() */
};
static_assert(sizeof(ISteamFriends) == 4, "Invalid ISteamFriends size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __ISTEAMFRIENDS_H__
#endif
