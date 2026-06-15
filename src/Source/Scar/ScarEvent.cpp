#if 0
/* ---------- headers */

#include "decomp.h"
#include <xstring>
#include <xmemory0>
#include <Scar\pch.h>
#include <new>
#include <xstddef>
#include <type_traits>
#include <xutility>
#include <iosfwd>
#include <xmemory>
#include <Scar\ScarEvent.h>
#include <vector>

/* ---------- constants */

/* ---------- definitions */

typedef std::vector<ScarEvent::EventBlock *,std::allocator<ScarEvent::EventBlock *> > EventBlockList;
typedef std::vector<ScarEvent::EventBlock::EventEntry *,std::allocator<ScarEvent::EventBlock::EventEntry *> > EventEntryList;

/* ---------- prototypes */

/* ---------- globals */

/* ---------- private variables */

/* ---------- public code */

void ScarEvent::Load(LuaConfig *, char const *) // 0x72D626
{
    mangled_assert("?Load@ScarEvent@@QAEXPAVLuaConfig@@PBD@Z");
    todo("implement");
}

void ScarEvent::EventBlock::Load(LuaConfig *, char const *) // 0x72D4AB
{
    mangled_assert("?Load@EventBlock@ScarEvent@@QAEXPAVLuaConfig@@PBD@Z");
    todo("implement");
}

void ScarEvent::Play() // 0x72D701
{
    mangled_assert("?Play@ScarEvent@@QAEXXZ");
    todo("implement");
}

void ScarEvent::Stop() // 0x72D72C
{
    mangled_assert("?Stop@ScarEvent@@QAEXXZ");
    todo("implement");
}

bool ScarEvent::IsDone() const // 0x72D49F
{
    mangled_assert("?IsDone@ScarEvent@@QBE_NXZ");
    todo("implement");
}

void ScarEvent::Reset() // 0x72D716
{
    mangled_assert("?Reset@ScarEvent@@QAEXXZ");
    todo("implement");
}

bool ScarEvent::Update(LuaConfig &) // 0x72D769
{
    mangled_assert("?Update@ScarEvent@@QAE_NAAVLuaConfig@@@Z");
    todo("implement");
}

void ScarEvent::EventBlock::Update(LuaConfig &) // 0x72D733
{
    mangled_assert("?Update@EventBlock@ScarEvent@@QAEXAAVLuaConfig@@@Z");
    todo("implement");
}

bool ScarEvent::EventBlock::IsDone(LuaConfig &) // 0x72D444
{
    mangled_assert("?IsDone@EventBlock@ScarEvent@@QAE_NAAVLuaConfig@@@Z");
    todo("implement");
}

ScarEvent::ScarEvent() // 0x72D2C8
{
    mangled_assert("??0ScarEvent@@QAE@XZ");
    todo("implement");
}

ScarEvent::~ScarEvent() // 0x72D347
{
    mangled_assert("??1ScarEvent@@QAE@XZ");
    todo("implement");
}

ScarEvent::EventBlock::EventBlock() // 0x72D292
{
    mangled_assert("??0EventBlock@ScarEvent@@QAE@XZ");
    todo("implement");
}

_inline ScarEvent::EventBlock::EventEntry::EventEntry() // 0x72D2AF
{
    mangled_assert("??0EventEntry@EventBlock@ScarEvent@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

ScarEvent::EventBlock::~EventBlock() // 0x72D2F5
{
    mangled_assert("??1EventBlock@ScarEvent@@QAE@XZ");
    todo("implement");
}

_inline ScarEvent::EventBlock::EventEntry::~EventEntry() // 0x72D334
{
    mangled_assert("??1EventEntry@EventBlock@ScarEvent@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

/* ---------- private code */
#endif
