#if 0
/* ---------- headers */

#include "decomp.h"
#include <xstring>
#include <xmemory0>
#include <pch.h>
#include <new>
#include <xstddef>
#include <type_traits>
#include <iosfwd>
#include <string.h>
#include <FrontEnd\LobbySessionDesc.h>
#include <util\types.h>
#include <Menus\Multiplayer\GameFilter.h>
#include <wchar.h>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */


_static bool UI::StringFilterTest(wchar_t const *desc, wchar_t const *filter);

/* ---------- globals */

/* ---------- private variables */

/* ---------- public code */

UI::GameFilter::GameFilter() // 0x5B3AEC
{
    mangled_assert("??0GameFilter@UI@@QAE@XZ");
    todo("implement");
}

void UI::GameFilter::Clear() // 0x5B3B1E
{
    mangled_assert("?Clear@GameFilter@UI@@QAEXXZ");
    todo("implement");
}

void UI::GameFilter::SetNameFilter(wchar_t const *) // 0x5B3BA8
{
    mangled_assert("?SetNameFilter@GameFilter@UI@@QAEXPB_W@Z");
    todo("implement");
}

void UI::GameFilter::SetMapFilter(wchar_t const *) // 0x5B3B62
{
    mangled_assert("?SetMapFilter@GameFilter@UI@@QAEXPB_W@Z");
    todo("implement");
}

void UI::GameFilter::SetModeFilter(wchar_t const *) // 0x5B3B8A
{
    mangled_assert("?SetModeFilter@GameFilter@UI@@QAEXPB_W@Z");
    todo("implement");
}

void UI::GameFilter::SetMaxPlayersFilter(__int32) // 0x5B3B80
{
    mangled_assert("?SetMaxPlayersFilter@GameFilter@UI@@QAEXH@Z");
    todo("implement");
}

void UI::GameFilter::SetPingFilter(__int32) // 0x5B3BC5
{
    mangled_assert("?SetPingFilter@GameFilter@UI@@QAEXH@Z");
    todo("implement");
}

bool UI::GameFilter::Test(LobbySessionDesc const &) // 0x5B3C4A
{
    mangled_assert("?Test@GameFilter@UI@@QAE_NABVLobbySessionDesc@@@Z");
    todo("implement");
}

/* ---------- private code */

_static bool UI::StringFilterTest(wchar_t const *desc, wchar_t const *filter) // 0x5B3BCF
{
    mangled_assert("UI::StringFilterTest");
    todo("implement");
}
#endif
