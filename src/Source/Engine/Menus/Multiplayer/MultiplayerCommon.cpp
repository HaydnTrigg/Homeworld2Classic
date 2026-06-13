#if 0
/* ---------- headers */

#include "decomp.h"
#include <xstring>
#include <xmemory0>
#include <pch.h>
#include <gameSettings.h>
#include <config.h>
#include <syncChecking.h>
#include <new>
#include <xstddef>
#include <type_traits>
#include <iosfwd>
#include <vector>
#include <fileio\fileioexports.h>
#include <gamestructimpl.h>
#include <Badge.h>
#include <boost\config.hpp>
#include <boost\static_assert.hpp>
#include <savegamedef.h>
#include <Menus\Multiplayer\MultiplayerCommon.h>
#include <LevelDesc.h>
#include <wchar.h>
#include <Hash.h>
#include <fileio\md5.h>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- private variables */

/* ---------- public code */

_extern void _sub_5B8935(MD5Hash const &);
void MultiplayerCommon::HostSetSettings(MD5Hash const &gameRules) // 0x5B8935
{
    mangled_assert("?HostSetSettings@MultiplayerCommon@@SGXABVMD5Hash@@@Z");
    todo("implement");
    _sub_5B8935(gameRules);
}

/* ---------- private code */
#endif
