#if 0
#ifndef __LOBBYDEFINES_H__
#define __LOBBYDEFINES_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

enum LobbyMessagesEnum
{
    MESS_Invalid = 0,
    MESS_ServerAdded,
    MESS_ServerDeleted,
    MESS_ServerUpdated,
    MESS_PlayerJoined,
    MESS_PlayerLeft,
    MESS_PlayerChanged,
    MESS_ChatConnectResult,
    MESS_ChatMessage,
    MESS_RoomAdded,
    MESS_RoomJoinedResult,
    MESS_CDAuthenticate,
    MESS_Disconnected,
};

enum LobbyChatType
{
    CHAT_Broadcast = 0,
    CHAT_Whisper,
    CHAT_Team,
};

enum LobbyChatStatus
{
    STATUS_None = 0,
    STATUS_Enabled,
    STATUS_Disabled,
};

enum LobbyRoomType
{
    ROOM_Title = 0,
    ROOM_Group,
    ROOM_Staging,
};

enum LobbyChatConnectResult
{
    CCR_NameInUse = 1, // 0x0001
    CCR_NameBadChars = 2, // 0x0002
};

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __LOBBYDEFINES_H__
#endif
