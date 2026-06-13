#if 0
#ifndef __MULTIPLAYERCOMMON_H__
#define __MULTIPLAYERCOMMON_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class MultiplayerCommon
{
public:
    static void HostSetSettings(MD5Hash const &gameRules);
};
static_assert(sizeof(MultiplayerCommon) == 1, "Invalid MultiplayerCommon size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __MULTIPLAYERCOMMON_H__
#endif
