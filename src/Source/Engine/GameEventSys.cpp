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

_inline GameEventSys::Data::Data() // 0x5EF563
{
    mangled_assert("??0Data@GameEventSys@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

GameEventSys::GameEventSys() // 0x5EF570
{
    mangled_assert("??0GameEventSys@@AAE@XZ");
    todo("implement");
}

_inline GameEventSys::Data::~Data() // 0x5EF5A0
{
    mangled_assert("??1Data@GameEventSys@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

GameEventSys::~GameEventSys() // 0x5EF5A5
{
    mangled_assert("??1GameEventSys@@AAE@XZ");
    todo("implement");
}

bool GameEventSys::Initialize() // 0x5EF613
{
    mangled_assert("?Initialize@GameEventSys@@SG_NXZ");
    todo("implement");
}

bool GameEventSys::Shutdown() // 0x5EF6A0
{
    mangled_assert("?Shutdown@GameEventSys@@SG_NXZ");
    todo("implement");
}

GameEventSys *GameEventSys::Instance() // 0x5EF64C
{
    mangled_assert("?Instance@GameEventSys@@SGPAV1@XZ");
    todo("implement");
}

void GameEventSys::PublishEvent(GameEventSys::Event const &) // 0x5EF670
{
    mangled_assert("?PublishEvent@GameEventSys@@QAEXABVEvent@1@@Z");
    todo("implement");
}

void GameEventSys::RegisterClient(GameEventSys::Listener *) // 0x5EF691
{
    mangled_assert("?RegisterClient@GameEventSys@@QAEXPAVListener@1@@Z");
    todo("implement");
}

void GameEventSys::UnregisterClient(GameEventSys::Listener *) // 0x5EF6C4
{
    mangled_assert("?UnregisterClient@GameEventSys@@QAEXPAVListener@1@@Z");
    todo("implement");
}

bool GameEventSys::IsClientRegistered(GameEventSys::Listener *) // 0x5EF652
{
    mangled_assert("?IsClientRegistered@GameEventSys@@QAE_NPAVListener@1@@Z");
    todo("implement");
}

/* ---------- private code */
#endif
