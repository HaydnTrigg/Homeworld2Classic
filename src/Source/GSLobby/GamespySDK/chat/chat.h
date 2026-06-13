#if 0
#ifndef __CHAT_H__
#define __CHAT_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

enum CHATBool
{
    CHATFalse = 0,
    CHATTrue,
};

enum CHATEnterResult
{
    CHATEnterSuccess = 0,
    CHATBadChannelName,
    CHATChannelIsFull,
    CHATInviteOnlyChannel,
    CHATBannedFromChannel,
    CHATBadChannelPassword,
    CHATTooManyChannels,
    CHATEnterTimedOut,
    CHATBadChannelMask,
};

/* ---------- definitions */

struct CHATChannelMode
{
    CHATBool InviteOnly; // 0x0
    CHATBool Private; // 0x4
    CHATBool Secret; // 0x8
    CHATBool Moderated; // 0xC
    CHATBool NoExternalMessages; // 0x10
    CHATBool OnlyOpsChangeTopic; // 0x14
    __int32 Limit; // 0x18
};
static_assert(sizeof(CHATChannelMode) == 28, "Invalid CHATChannelMode size");

struct chatGlobalCallbacks
{
    void (*raw)(void *, char const *, void *); // 0x0
    void (*disconnected)(void *, char const *, void *); // 0x4
    void (*privateMessage)(void *, char const *, char const *, __int32, void *); // 0x8
    void (*invited)(void *, char const *, char const *, void *); // 0xC
    void *param; // 0x10
};
static_assert(sizeof(chatGlobalCallbacks) == 20, "Invalid chatGlobalCallbacks size");

struct chatChannelCallbacks
{
    void (*channelMessage)(void *, char const *, char const *, char const *, __int32, void *); // 0x0
    void (*kicked)(void *, char const *, char const *, char const *, void *); // 0x4
    void (*userJoined)(void *, char const *, char const *, __int32, void *); // 0x8
    void (*userParted)(void *, char const *, char const *, __int32, char const *, char const *, void *); // 0xC
    void (*userChangedNick)(void *, char const *, char const *, char const *, void *); // 0x10
    void (*topicChanged)(void *, char const *, char const *, void *); // 0x14
    void (*channelModeChanged)(void *, char const *, CHATChannelMode *, void *); // 0x18
    void (*userModeChanged)(void *, char const *, char const *, __int32, void *); // 0x1C
    void (*userListUpdated)(void *, char const *, void *); // 0x20
    void (*newUserList)(void *, char const *, __int32, char const **, __int32 *, void *); // 0x24
    void (*broadcastKeyChanged)(void *, char const *, char const *, char const *, char const *, void *); // 0x28
    void *param; // 0x2C
};
static_assert(sizeof(chatChannelCallbacks) == 48, "Invalid chatChannelCallbacks size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __CHAT_H__
#endif
