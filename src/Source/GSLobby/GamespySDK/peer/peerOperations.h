#if 0
#ifndef __PEEROPERATIONS_H__
#define __PEEROPERATIONS_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

enum piOperationType
{
    PI_CONNECT_OPERATION = 0,
    PI_CREATE_ROOM_OPERATION,
    PI_JOIN_ROOM_OPERATION,
    PI_ENUM_PLAYERS_OPERATION,
    PI_LIST_GROUP_ROOMS_OPERATION,
    PI_LIST_STAGING_ROOMS_OPERATION,
    PI_GET_PROFILE_ID_OPERATION,
    PI_GET_IP_OPERATION,
    PI_CHANGE_NICK_OPERATION,
    PI_GET_GLOBAL_KEYS_OPERATION,
    PI_GET_ROOM_KEYS_OPERATION,
    PI_AUTHENTICATE_CDKEY_OPERATION,
    PI_NUM_OPERATION_TYPES,
};

/* ---------- definitions */

struct piOperation
{
    void *peer; // 0x0
    piOperationType type; // 0x4
    void *data; // 0x8
    __int32 ID; // 0xC
    void *callback; // 0x10
    void *callbackParam; // 0x14
    RoomType roomType; // 0x18
    char *name; // 0x1C
    __int32 num; // 0x20
    unsigned __int32 socket; // 0x24
    unsigned short port; // 0x28
    PEERBool cancel; // 0x2C
};
static_assert(sizeof(piOperation) == 48, "Invalid piOperation size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __PEEROPERATIONS_H__
#endif
