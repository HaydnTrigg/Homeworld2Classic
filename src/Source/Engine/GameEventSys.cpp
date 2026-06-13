#if 0
/* ---------- headers */

#include "decomp.h"
#include <xmemory0>
#include <pch.h>
#include <boost\checked_delete.hpp>
#include <new>
#include <xstddef>
#include <type_traits>
#include <xutility>
#include <utility>
#include <vector>
#include <xmemory>
#include <list>
#include <map>
#include <xtree>
#include <boost\scoped_ptr.hpp>
#include <profile\profile.h>
#include <iostream>
#include <GameEventSys.h>

/* ---------- constants */

/* ---------- definitions */

typedef std::vector<GameEventSys::Listener *,std::allocator<GameEventSys::Listener *> > ListenerList;

/* ---------- prototypes */

/* ---------- globals */

/* ---------- private variables */

_static
{
    extern GameEventSys *s_instance; // 0x848770
}

/* ---------- public code */

_extern _sub_5EF563(GameEventSys::Data *const);
_inline GameEventSys::Data::Data() // 0x5EF563
{
    mangled_assert("??0Data@GameEventSys@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_5EF563(this);
}

_extern _sub_5EF570(GameEventSys *const);
GameEventSys::GameEventSys() // 0x5EF570
{
    mangled_assert("??0GameEventSys@@AAE@XZ");
    todo("implement");
    _sub_5EF570(this);
}

_extern void _sub_5EF5A0(GameEventSys::Data *const);
_inline GameEventSys::Data::~Data() // 0x5EF5A0
{
    mangled_assert("??1Data@GameEventSys@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_5EF5A0(this);
}

_extern void _sub_5EF5A5(GameEventSys *const);
GameEventSys::~GameEventSys() // 0x5EF5A5
{
    mangled_assert("??1GameEventSys@@AAE@XZ");
    todo("implement");
    _sub_5EF5A5(this);
}

_extern bool _sub_5EF613();
bool GameEventSys::Initialize() // 0x5EF613
{
    mangled_assert("?Initialize@GameEventSys@@SG_NXZ");
    todo("implement");
    bool __result = _sub_5EF613();
    return __result;
}

_extern bool _sub_5EF6A0();
bool GameEventSys::Shutdown() // 0x5EF6A0
{
    mangled_assert("?Shutdown@GameEventSys@@SG_NXZ");
    todo("implement");
    bool __result = _sub_5EF6A0();
    return __result;
}

_extern GameEventSys *_sub_5EF64C();
GameEventSys *GameEventSys::Instance() // 0x5EF64C
{
    mangled_assert("?Instance@GameEventSys@@SGPAV1@XZ");
    todo("implement");
    GameEventSys * __result = _sub_5EF64C();
    return __result;
}

_extern void _sub_5EF670(GameEventSys *const, GameEventSys::Event const &);
void GameEventSys::PublishEvent(GameEventSys::Event const &) // 0x5EF670
{
    mangled_assert("?PublishEvent@GameEventSys@@QAEXABVEvent@1@@Z");
    todo("implement");
    _sub_5EF670(this, arg);
}

_extern void _sub_5EF691(GameEventSys *const, GameEventSys::Listener *);
void GameEventSys::RegisterClient(GameEventSys::Listener *) // 0x5EF691
{
    mangled_assert("?RegisterClient@GameEventSys@@QAEXPAVListener@1@@Z");
    todo("implement");
    _sub_5EF691(this, arg);
}

_extern void _sub_5EF6C4(GameEventSys *const, GameEventSys::Listener *);
void GameEventSys::UnregisterClient(GameEventSys::Listener *) // 0x5EF6C4
{
    mangled_assert("?UnregisterClient@GameEventSys@@QAEXPAVListener@1@@Z");
    todo("implement");
    _sub_5EF6C4(this, arg);
}

_extern bool _sub_5EF652(GameEventSys *const, GameEventSys::Listener *);
bool GameEventSys::IsClientRegistered(GameEventSys::Listener *) // 0x5EF652
{
    mangled_assert("?IsClientRegistered@GameEventSys@@QAE_NPAVListener@1@@Z");
    todo("implement");
    bool __result = _sub_5EF652(this, arg);
    return __result;
}

/* ---------- private code */
#endif
