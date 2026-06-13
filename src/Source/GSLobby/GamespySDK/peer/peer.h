#if 0
#ifndef __PEER_H__
#define __PEER_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

enum PEERBool
{
    PEERFalse = 0,
    PEERTrue,
};

enum RoomType
{
    TitleRoom = 0,
    GroupRoom,
    StagingRoom,
    NumRooms,
};

enum MessageType
{
    NormalMessage = 0,
    ActionMessage,
    NoticeMessage,
};

enum PEERJoinResult
{
    PEERJoinSuccess = 0,
    PEERFullRoom,
    PEERInviteOnlyRoom,
    PEERBannedFromRoom,
    PEERBadPassword,
    PEERAlreadyInRoom,
    PEERNoTitleSet,
    PEERNoConnection,
    PEERJoinFailed,
};

/* ---------- definitions */

struct PEERCallbacks
{
    void (*disconnected)(void *, char const *, void *); // 0x0
    void (*roomMessage)(void *, RoomType, char const *, char const *, MessageType, void *); // 0x4
    void (*roomUTM)(void *, RoomType, char const *, char const *, char const *, PEERBool, void *); // 0x8
    void (*roomNameChanged)(void *, RoomType, void *); // 0xC
    void (*roomModeChanged)(void *, RoomType, CHATChannelMode *, void *); // 0x10
    void (*playerMessage)(void *, char const *, char const *, MessageType, void *); // 0x14
    void (*playerUTM)(void *, char const *, char const *, char const *, PEERBool, void *); // 0x18
    void (*readyChanged)(void *, char const *, PEERBool, void *); // 0x1C
    void (*gameStarted)(void *, unsigned __int32, char const *, void *); // 0x20
    void (*playerJoined)(void *, RoomType, char const *, void *); // 0x24
    void (*playerLeft)(void *, RoomType, char const *, char const *, void *); // 0x28
    void (*kicked)(void *, RoomType, char const *, char const *, void *); // 0x2C
    void (*newPlayerList)(void *, RoomType, void *); // 0x30
    void (*playerChangedNick)(void *, RoomType, char const *, char const *, void *); // 0x34
    void (*playerInfo)(void *, RoomType, char const *, unsigned __int32, __int32, void *); // 0x38
    void (*playerFlagsChanged)(void *, RoomType, char const *, __int32, __int32, void *); // 0x3C
    void (*ping)(void *, char const *, __int32, void *); // 0x40
    void (*crossPing)(void *, char const *, char const *, __int32, void *); // 0x44
    void (*globalKeyChanged)(void *, char const *, char const *, char const *, void *); // 0x48
    void (*roomKeyChanged)(void *, RoomType, char const *, char const *, char const *, void *); // 0x4C
    void (*qrServerKey)(void *, __int32, qr2_buffer_s *, void *); // 0x50
    void (*qrPlayerKey)(void *, __int32, __int32, qr2_buffer_s *, void *); // 0x54
    void (*qrTeamKey)(void *, __int32, __int32, qr2_buffer_s *, void *); // 0x58
    void (*qrKeyList)(void *, qr2_key_type, qr2_keybuffer_s *, void *); // 0x5C
    __int32 (*qrCount)(void *, qr2_key_type, void *); // 0x60
    void (*qrAddError)(void *, qr2_error_t, char *, void *); // 0x64
    void (*qrNatNegotiateCallback)(void *, __int32, void *); // 0x68
    void *param; // 0x6C
};
static_assert(sizeof(PEERCallbacks) == 112, "Invalid PEERCallbacks size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __PEER_H__
#endif
