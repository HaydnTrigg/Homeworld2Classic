#if 0
/* ---------- headers */

#include "decomp.h"
#include <pch.h>
#include <SteamLobby\SteamTracker.h>
#include <SteamLobby\steamlobbyexport.h>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

extern unsigned __int32 SteamTracker::s_usagesTracked; // 0x100092F0

/* ---------- private variables */

/* ---------- public code */

_inline SteamTracker &SteamTracker::operator=(SteamTracker const &) // 0x100045A7
{
    mangled_assert("??4SteamTracker@@QAEAAV0@ABV0@@Z");
    compiler_generated();
    todo("implement");
}

void SteamTracker::TrackUsage(__int32 productID, char const *versionUniqueID, __int32 distributionID) // 0x100045AC
{
    mangled_assert("?TrackUsage@SteamTracker@@SGXHPBDH@Z");
    todo("implement");
}

/* ---------- private code */
#endif
