#if 0
#ifndef __STEAMEVENT_H__
#define __STEAMEVENT_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class SteamEvent
{
public:
    virtual _inline ~SteamEvent();
    virtual void OnServerAdded(unsigned long long) = 0;
    virtual void OnServerUpdated(unsigned long long) = 0;
    virtual void OnChat(SteamLobbyChatType, char const *, char const *) = 0;
    SteamEvent(SteamEvent const &); /* compiler_generated() */
    _inline SteamEvent(); /* compiler_generated() */
    SteamEvent &operator=(SteamEvent const &); /* compiler_generated() */
};
static_assert(sizeof(SteamEvent) == 4, "Invalid SteamEvent size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_inline SteamEvent::~SteamEvent() // 0x44B19B
{
    mangled_assert("??1SteamEvent@@UAE@XZ");
    todo("implement");
}

/* ---------- private code */

#endif // __STEAMEVENT_H__
/* combined */
#ifndef __STEAMEVENT_H__
#define __STEAMEVENT_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class SteamEvent
{
public:
    virtual ~SteamEvent();
    virtual void OnServerAdded(unsigned long long) = 0;
    virtual void OnServerUpdated(unsigned long long) = 0;
    virtual void OnChat(SteamLobbyChatType, char const *, char const *) = 0;
    SteamEvent(SteamEvent const &); /* compiler_generated() */
    SteamEvent(); /* compiler_generated() */
    SteamEvent &operator=(SteamEvent const &); /* compiler_generated() */
};
static_assert(sizeof(SteamEvent) == 4, "Invalid SteamEvent size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __STEAMEVENT_H__
#endif
