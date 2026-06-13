#if 0
/* ---------- headers */

#include "decomp.h"
#include <xstring>
#include <xmemory0>
#include <pch.h>
#include <new>
#include <xstddef>
#include <type_traits>
#include <xutility>
#include <utility>
#include <vector>
#include <iosfwd>
#include <xmemory>
#include <map>
#include <xtree>
#include <util\types.h>
#include <Menus\Multiplayer\LobbyScreenDoc.h>
#include <FrontEnd\LobbySessionDesc.h>
#include <wchar.h>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- private variables */

/* ---------- public code */

_extern _sub_5B6FCD(UI::LobbyScreenDoc *const);
UI::LobbyScreenDoc::LobbyScreenDoc() // 0x5B6FCD
{
    mangled_assert("??0LobbyScreenDoc@UI@@QAE@XZ");
    todo("implement");
    _sub_5B6FCD(this);
}

_extern _sub_5B7013(LobbySessionDesc *const, LobbySessionDesc const &);
_inline LobbySessionDesc::LobbySessionDesc(LobbySessionDesc const &) // 0x5B7013
{
    mangled_assert("??0LobbySessionDesc@@QAE@ABV0@@Z");
    compiler_generated();
    todo("implement");
    _sub_5B7013(this, arg);
}

_extern void _sub_5B7025(std::pair<unsigned __int64,LobbySessionDesc> *const);
_inline std::pair<unsigned __int64,LobbySessionDesc>::~pair<unsigned __int64,LobbySessionDesc>() // 0x5B7025
{
    mangled_assert("??1?$pair@_KVLobbySessionDesc@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_5B7025(this);
}

_extern void _sub_5B716A(UI::LobbyScreenDoc *const);
void UI::LobbyScreenDoc::Clear() // 0x5B716A
{
    mangled_assert("?Clear@LobbyScreenDoc@UI@@QAEXXZ");
    todo("implement");
    _sub_5B716A(this);
}

_extern void _sub_5B717B(UI::LobbyScreenDoc *const, unsigned long long, LobbySessionDesc const &);
void UI::LobbyScreenDoc::OnSessionAdded(unsigned long long, LobbySessionDesc const &) // 0x5B717B
{
    mangled_assert("?OnSessionAdded@LobbyScreenDoc@UI@@QAEX_KABVLobbySessionDesc@@@Z");
    todo("implement");
    _sub_5B717B(this, arg, arg);
}

_extern void _sub_5B71CC(UI::LobbyScreenDoc *const, unsigned long long, LobbySessionDesc const &);
void UI::LobbyScreenDoc::OnSessionAddedDirect(unsigned long long, LobbySessionDesc const &) // 0x5B71CC
{
    mangled_assert("?OnSessionAddedDirect@LobbyScreenDoc@UI@@QAEX_KABVLobbySessionDesc@@@Z");
    todo("implement");
    _sub_5B71CC(this, arg, arg);
}

_extern void _sub_5B7279(UI::LobbyScreenDoc *const, unsigned long long, LobbySessionDesc const &);
void UI::LobbyScreenDoc::OnSessionUpdated(unsigned long long, LobbySessionDesc const &) // 0x5B7279
{
    mangled_assert("?OnSessionUpdated@LobbyScreenDoc@UI@@QAEX_KABVLobbySessionDesc@@@Z");
    todo("implement");
    _sub_5B7279(this, arg, arg);
}

_extern void _sub_5B7229(UI::LobbyScreenDoc *const, unsigned long long);
void UI::LobbyScreenDoc::OnSessionDeleted(unsigned long long) // 0x5B7229
{
    mangled_assert("?OnSessionDeleted@LobbyScreenDoc@UI@@QAEX_K@Z");
    todo("implement");
    _sub_5B7229(this, arg);
}

/* ---------- private code */
#endif
