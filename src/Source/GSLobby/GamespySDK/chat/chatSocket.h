#if 0
#ifndef __CHATSOCKET_H__
#define __CHATSOCKET_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

enum ciConnectState
{
    ciNotConnected = 0,
    ciConnected,
    ciDisconnected,
};

/* ---------- definitions */

struct ciBuffer
{
    char *buffer; // 0x0
    __int32 length; // 0x4
    __int32 size; // 0x8
};
static_assert(sizeof(ciBuffer) == 12, "Invalid ciBuffer size");

struct ciServerMessage
{
    char *message; // 0x0
    char *server; // 0x4
    char *nick; // 0x8
    char *user; // 0xC
    char *host; // 0x10
    char *command; // 0x14
    char *middle; // 0x18
    char *param; // 0x1C
    char **params; // 0x20
    __int32 numParams; // 0x24
};
static_assert(sizeof(ciServerMessage) == 40, "Invalid ciServerMessage size");

struct ciSocket
{
    unsigned __int32 sock; // 0x0
    ciConnectState connectState; // 0x4
    char serverAddress[256]; // 0x8
    ciBuffer inputQueue; // 0x108
    ciBuffer outputQueue; // 0x114
    CHATBool secure; // 0x120
    _gs_crypt_key inKey; // 0x124
    _gs_crypt_key outKey; // 0x226
    ciServerMessage lastMessage; // 0x328
};
static_assert(sizeof(ciSocket) == 848, "Invalid ciSocket size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __CHATSOCKET_H__
#endif
