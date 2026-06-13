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

_extern SteamTracker &_sub_100045A7(SteamTracker *const, SteamTracker const &);
_inline SteamTracker &SteamTracker::operator=(SteamTracker const &) // 0x100045A7
{
    mangled_assert("??4SteamTracker@@QAEAAV0@ABV0@@Z");
    compiler_generated();
    todo("implement");
    SteamTracker & __result = _sub_100045A7(this, arg);
    return __result;
}

_extern void _sub_100045AC(__int32, char const *, __int32);
void SteamTracker::TrackUsage(__int32 productID, char const *versionUniqueID, __int32 distributionID) // 0x100045AC
{
    mangled_assert("?TrackUsage@SteamTracker@@SGXHPBDH@Z");
    todo("implement");
    _sub_100045AC(productID, versionUniqueID, distributionID);
}

/* ---------- private code */
#endif
