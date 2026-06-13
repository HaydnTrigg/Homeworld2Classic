#if 0
#ifndef __CHATCALLBACKS_H__
#define __CHATCALLBACKS_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

enum
{
    CALLBACK_RAW = 0,
    CALLBACK_DISCONNECTED,
    CALLBACK_PRIVATE_MESSAGE,
    CALLBACK_INVITED,
    CALLBACK_CHANNEL_MESSAGE,
    CALLBACK_KICKED,
    CALLBACK_USER_JOINED,
    CALLBACK_USER_PARTED,
    CALLBACK_USER_CHANGED_NICK,
    CALLBACK_TOPIC_CHANGED,
    CALLBACK_CHANNEL_MODE_CHANGED,
    CALLBACK_USER_MODE_CHANGED,
    CALLBACK_USER_LIST_UPDATED,
    CALLBACK_CONNECT,
    CALLBACK_ENUM_CHANNELS_EACH,
    CALLBACK_ENUM_CHANNELS_ALL,
    CALLBACK_ENTER_CHANNEL,
    CALLBACK_GET_CHANNEL_TOPIC,
    CALLBACK_GET_CHANNEL_MODE,
    CALLBACK_GET_CHANNEL_PASSWORD,
    CALLBACK_ENUM_USERS,
    CALLBACK_GET_USER_INFO,
    CALLBACK_GET_BASIC_USER_INFO,
    CALLBACK_GET_CHANNEL_BASIC_USER_INFO,
    CALLBACK_GET_USER_MODE,
    CALLBACK_ENUM_CHANNEL_BANS,
    CALLBACK_NICK_ERROR,
    CALLBACK_CHANGE_NICK,
    CALLBACK_NEW_USER_LIST,
    CALLBACK_BROADCAST_KEY_CHANGED,
    CALLBACK_GET_GLOBAL_KEYS,
    CALLBACK_GET_CHANNEL_KEYS,
    CALLBACK_AUTHENTICATE_CDKEY,
    CALLBACK_NUM,
};

/* ---------- definitions */

struct ciCallbackRawParams
{
    char *raw; // 0x0
};
static_assert(sizeof(ciCallbackRawParams) == 4, "Invalid ciCallbackRawParams size");

struct ciCallbackDisconnectedParams
{
    char *reason; // 0x0
};
static_assert(sizeof(ciCallbackDisconnectedParams) == 4, "Invalid ciCallbackDisconnectedParams size");

struct ciCallbackPrivateMessageParams
{
    char *user; // 0x0
    char *message; // 0x4
    __int32 type; // 0x8
};
static_assert(sizeof(ciCallbackPrivateMessageParams) == 12, "Invalid ciCallbackPrivateMessageParams size");

struct ciCallbackInvitedParams
{
    char *channel; // 0x0
    char *user; // 0x4
};
static_assert(sizeof(ciCallbackInvitedParams) == 8, "Invalid ciCallbackInvitedParams size");

struct ciCallbackChannelMessageParams
{
    char *channel; // 0x0
    char *user; // 0x4
    char *message; // 0x8
    __int32 type; // 0xC
};
static_assert(sizeof(ciCallbackChannelMessageParams) == 16, "Invalid ciCallbackChannelMessageParams size");

struct ciCallbackKickedParams
{
    char *channel; // 0x0
    char *user; // 0x4
    char *reason; // 0x8
};
static_assert(sizeof(ciCallbackKickedParams) == 12, "Invalid ciCallbackKickedParams size");

struct ciCallbackUserJoinedParams
{
    char *channel; // 0x0
    char *user; // 0x4
    __int32 mode; // 0x8
};
static_assert(sizeof(ciCallbackUserJoinedParams) == 12, "Invalid ciCallbackUserJoinedParams size");

struct ciCallbackUserPartedParams
{
    char *channel; // 0x0
    char *user; // 0x4
    __int32 why; // 0x8
    char *reason; // 0xC
    char *kicker; // 0x10
};
static_assert(sizeof(ciCallbackUserPartedParams) == 20, "Invalid ciCallbackUserPartedParams size");

struct ciCallbackUserChangedNickParams
{
    char *channel; // 0x0
    char *oldNick; // 0x4
    char *newNick; // 0x8
};
static_assert(sizeof(ciCallbackUserChangedNickParams) == 12, "Invalid ciCallbackUserChangedNickParams size");

struct ciCallbackTopicChangedParams
{
    char *channel; // 0x0
    char *topic; // 0x4
};
static_assert(sizeof(ciCallbackTopicChangedParams) == 8, "Invalid ciCallbackTopicChangedParams size");

struct ciCallbackChannelModeChangedParams
{
    char *channel; // 0x0
    CHATChannelMode *mode; // 0x4
};
static_assert(sizeof(ciCallbackChannelModeChangedParams) == 8, "Invalid ciCallbackChannelModeChangedParams size");

struct ciCallbackUserModeChangedParams
{
    char *channel; // 0x0
    char *user; // 0x4
    __int32 mode; // 0x8
};
static_assert(sizeof(ciCallbackUserModeChangedParams) == 12, "Invalid ciCallbackUserModeChangedParams size");

struct ciCallbackUserListUpdatedParams
{
    char *channel; // 0x0
};
static_assert(sizeof(ciCallbackUserListUpdatedParams) == 4, "Invalid ciCallbackUserListUpdatedParams size");

struct ciCallbackConnectParams
{
    CHATBool success; // 0x0
};
static_assert(sizeof(ciCallbackConnectParams) == 4, "Invalid ciCallbackConnectParams size");

struct ciCallbackEnumChannelsEachParams
{
    CHATBool success; // 0x0
    __int32 index; // 0x4
    char *channel; // 0x8
    char *topic; // 0xC
    __int32 numUsers; // 0x10
    void *param; // 0x14
};
static_assert(sizeof(ciCallbackEnumChannelsEachParams) == 24, "Invalid ciCallbackEnumChannelsEachParams size");

struct ciCallbackEnumChannelsAllParams
{
    CHATBool success; // 0x0
    __int32 numChannels; // 0x4
    char **channels; // 0x8
    char **topics; // 0xC
    __int32 *numUsers; // 0x10
};
static_assert(sizeof(ciCallbackEnumChannelsAllParams) == 20, "Invalid ciCallbackEnumChannelsAllParams size");

struct ciCallbackEnterChannelParams
{
    CHATBool success; // 0x0
    CHATEnterResult result; // 0x4
    char *channel; // 0x8
};
static_assert(sizeof(ciCallbackEnterChannelParams) == 12, "Invalid ciCallbackEnterChannelParams size");

struct ciCallbackGetChannelTopicParams
{
    CHATBool success; // 0x0
    char *channel; // 0x4
    char *topic; // 0x8
};
static_assert(sizeof(ciCallbackGetChannelTopicParams) == 12, "Invalid ciCallbackGetChannelTopicParams size");

struct ciCallbackGetChannelModeParams
{
    CHATBool success; // 0x0
    char *channel; // 0x4
    CHATChannelMode *mode; // 0x8
};
static_assert(sizeof(ciCallbackGetChannelModeParams) == 12, "Invalid ciCallbackGetChannelModeParams size");

struct ciCallbackGetChannelPasswordParams
{
    CHATBool success; // 0x0
    char *channel; // 0x4
    CHATBool enabled; // 0x8
    char *password; // 0xC
};
static_assert(sizeof(ciCallbackGetChannelPasswordParams) == 16, "Invalid ciCallbackGetChannelPasswordParams size");

struct ciCallbackEnumUsersParams
{
    CHATBool success; // 0x0
    char *channel; // 0x4
    __int32 numUsers; // 0x8
    char **users; // 0xC
    __int32 *modes; // 0x10
};
static_assert(sizeof(ciCallbackEnumUsersParams) == 20, "Invalid ciCallbackEnumUsersParams size");

struct ciCallbackGetUserInfoParams
{
    CHATBool success; // 0x0
    char *nick; // 0x4
    char *user; // 0x8
    char *name; // 0xC
    char *address; // 0x10
    __int32 numChannels; // 0x14
    char **channels; // 0x18
};
static_assert(sizeof(ciCallbackGetUserInfoParams) == 28, "Invalid ciCallbackGetUserInfoParams size");

struct ciCallbackGetBasicUserInfoParams
{
    CHATBool success; // 0x0
    char *nick; // 0x4
    char *user; // 0x8
    char *address; // 0xC
};
static_assert(sizeof(ciCallbackGetBasicUserInfoParams) == 16, "Invalid ciCallbackGetBasicUserInfoParams size");

struct ciCallbackGetChannelBasicUserInfoParams
{
    CHATBool success; // 0x0
    char *channel; // 0x4
    char *nick; // 0x8
    char *user; // 0xC
    char *address; // 0x10
};
static_assert(sizeof(ciCallbackGetChannelBasicUserInfoParams) == 20, "Invalid ciCallbackGetChannelBasicUserInfoParams size");

struct ciCallbackGetUserModeParams
{
    CHATBool success; // 0x0
    char *channel; // 0x4
    char *user; // 0x8
    __int32 mode; // 0xC
};
static_assert(sizeof(ciCallbackGetUserModeParams) == 16, "Invalid ciCallbackGetUserModeParams size");

struct ciCallbackEnumChannelBansParams
{
    CHATBool success; // 0x0
    char *channel; // 0x4
    __int32 numBans; // 0x8
    char **bans; // 0xC
};
static_assert(sizeof(ciCallbackEnumChannelBansParams) == 16, "Invalid ciCallbackEnumChannelBansParams size");

struct ciCallbackNickErrorParams
{
    __int32 type; // 0x0
    char *nick; // 0x4
};
static_assert(sizeof(ciCallbackNickErrorParams) == 8, "Invalid ciCallbackNickErrorParams size");

struct ciCallbackChangeNickParams
{
    CHATBool success; // 0x0
    char *oldNick; // 0x4
    char *newNick; // 0x8
};
static_assert(sizeof(ciCallbackChangeNickParams) == 12, "Invalid ciCallbackChangeNickParams size");

struct ciCallbackNewUserListParams
{
    char *channel; // 0x0
    __int32 numUsers; // 0x4
    char **users; // 0x8
    __int32 *modes; // 0xC
};
static_assert(sizeof(ciCallbackNewUserListParams) == 16, "Invalid ciCallbackNewUserListParams size");

struct ciCallbackBroadcastKeyChangedParams
{
    char *channel; // 0x0
    char *user; // 0x4
    char *key; // 0x8
    char *value; // 0xC
};
static_assert(sizeof(ciCallbackBroadcastKeyChangedParams) == 16, "Invalid ciCallbackBroadcastKeyChangedParams size");

struct ciCallbackGetGlobalKeysParams
{
    CHATBool success; // 0x0
    char *user; // 0x4
    __int32 num; // 0x8
    char **keys; // 0xC
    char **values; // 0x10
};
static_assert(sizeof(ciCallbackGetGlobalKeysParams) == 20, "Invalid ciCallbackGetGlobalKeysParams size");

struct ciCallbackGetChannelKeysParams
{
    CHATBool success; // 0x0
    char *channel; // 0x4
    char *user; // 0x8
    __int32 num; // 0xC
    char **keys; // 0x10
    char **values; // 0x14
};
static_assert(sizeof(ciCallbackGetChannelKeysParams) == 24, "Invalid ciCallbackGetChannelKeysParams size");

struct ciCallbackAuthenticateCDKeyParams
{
    __int32 result; // 0x0
    char *message; // 0x4
};
static_assert(sizeof(ciCallbackAuthenticateCDKeyParams) == 8, "Invalid ciCallbackAuthenticateCDKeyParams size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __CHATCALLBACKS_H__
#endif
