#if 0
/* ---------- headers */

#include "decomp.h"
#include <xstring>
#include <xmemory0>
#include <pch.h>
#include <GameObj.h>
#include <config.h>
#include <task.h>
#include <boost\static_assert.hpp>
#include <stack>
#include <new>
#include <xstddef>
#include <type_traits>
#include <xutility>
#include <iosfwd>
#include <vector>
#include <xmemory>
#include <fileio\fileioexports.h>
#include <Mathlib\vector3.h>
#include <Mathlib\vector4.h>
#include <boost\scoped_ptr.hpp>
#include <gameSettings.h>
#include <syncChecking.h>
#include <util\types.h>
#include <util\statmonitor.h>
#include <util\utilexports.h>
#include <platform\timer.h>
#include <boost\config.hpp>
#include <platform\platformexports.h>
#include <App\AppObj.h>
#include <platform\appinterface.h>
#include <FrontEnd\Lobby.h>
#include <util\colour.h>
#include <savegamedef.h>
#include <LevelDesc.h>
#include <Hash.h>
#include <fileio\md5.h>
#include <gamestructimpl.h>
#include <Badge.h>
#include <Menus\Multiplayer\InGameDisconnect.h>
#include <FrontEnd\lobbyevent.h>
#include <wchar.h>
#include <FrontEnd\lobbydefines.h>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- private variables */

/* ---------- public code */

void InGameDisconnect::OnLobbyDisconnected(wchar_t const *) // 0x5B4653
{
    mangled_assert("?OnLobbyDisconnected@InGameDisconnect@@UAEXPB_W@Z");
    todo("implement");
}

/* ---------- private code */
#endif
