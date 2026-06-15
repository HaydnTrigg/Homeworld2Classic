#if 0
#ifndef __GSEVENT_H__
#define __GSEVENT_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class GSEvent
{
public:
    virtual ~GSEvent();
    virtual void OnServerAdded(unsigned __int32) = 0;
    virtual void OnServerUpdated(unsigned __int32) = 0;
    virtual void OnServerDeleted(unsigned __int32) = 0;
    virtual void OnRoomAdded(char const *, unsigned __int32) = 0;
    virtual void OnPlayerJoined(char const *, bool) = 0;
    virtual void OnPlayerLeft(char const *) = 0;
    virtual void OnPlayerChanged(char const *) = 0;
    virtual void OnChatConnect(bool, unsigned __int32) = 0;
    virtual void OnChat(GSLobbyChatType, char const *, char const *) = 0;
    virtual void OnCDAuthenticate(bool, char const *) = 0;
    virtual void OnRoomJoined(GSLobbyRoomType, __int32, bool) = 0;
    virtual void OnDisconnected(char const *) = 0;
    GSEvent(GSEvent const &); /* compiler_generated() */
    GSEvent(); /* compiler_generated() */
    GSEvent &operator=(GSEvent const &); /* compiler_generated() */
};
static_assert(sizeof(GSEvent) == 4, "Invalid GSEvent size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __GSEVENT_H__
/* combined */
#ifndef __GSEVENT_H__
#define __GSEVENT_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class GSEvent
{
public:
    virtual _inline ~GSEvent();
    virtual void OnServerAdded(unsigned __int32) = 0;
    virtual void OnServerUpdated(unsigned __int32) = 0;
    virtual void OnServerDeleted(unsigned __int32) = 0;
    virtual void OnRoomAdded(char const *, unsigned __int32) = 0;
    virtual void OnPlayerJoined(char const *, bool) = 0;
    virtual void OnPlayerLeft(char const *) = 0;
    virtual void OnPlayerChanged(char const *) = 0;
    virtual void OnChatConnect(bool, unsigned __int32) = 0;
    virtual void OnChat(GSLobbyChatType, char const *, char const *) = 0;
    virtual void OnCDAuthenticate(bool, char const *) = 0;
    virtual void OnRoomJoined(GSLobbyRoomType, __int32, bool) = 0;
    virtual void OnDisconnected(char const *) = 0;
    GSEvent(GSEvent const &); /* compiler_generated() */
    _inline GSEvent(); /* compiler_generated() */
    GSEvent &operator=(GSEvent const &); /* compiler_generated() */
};
static_assert(sizeof(GSEvent) == 4, "Invalid GSEvent size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_inline GSEvent::~GSEvent() // 0x46F31A
{
    mangled_assert("??1GSEvent@@UAE@XZ");
    todo("implement");
}

/* ---------- private code */

#endif // __GSEVENT_H__
#endif
