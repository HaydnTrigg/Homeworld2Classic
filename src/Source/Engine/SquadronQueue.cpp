#if 0
/* ---------- headers */

#include "decomp.h"
#include <xstring>
#include <xmemory0>
#include <new>
#include <Engine\Squadron.h>
#include <xstddef>
#include <type_traits>
#include <xutility>
#include <iosfwd>
#include <Engine\Parade.h>
#include <list>
#include <Engine\Family.h>
#include <Engine\savegameimpl.h>
#include <boost\cstdint.hpp>
#include <Engine\savegamedef.h>
#include <Engine\pch.h>
#include <Engine\SquadronQueue.h>
#include <wchar.h>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

extern char const SquadronQueue::m_saveToken[14]; // 0x7BA20C
extern SaveData const SquadronQueue::m_saveData[1]; // 0x7BA21C

/* ---------- private variables */

/* ---------- public code */

_extern _sub_6BB09A(SquadronQueue *const);
SquadronQueue::SquadronQueue() // 0x6BB09A
{
    mangled_assert("??0SquadronQueue@@QAE@XZ");
    todo("implement");
    _sub_6BB09A(this);
}

_extern void _sub_6BB0F6(SquadronQueue *const, Squadron *);
void SquadronQueue::addToQueue(Squadron *) // 0x6BB0F6
{
    mangled_assert("?addToQueue@SquadronQueue@@UAEXPAVSquadron@@@Z");
    todo("implement");
    _sub_6BB0F6(this, arg);
}

_extern void _sub_6BB141(SquadronQueue *const, Squadron *);
void SquadronQueue::removeFromQueue(Squadron *) // 0x6BB141
{
    mangled_assert("?removeFromQueue@SquadronQueue@@UAEXPAVSquadron@@@Z");
    todo("implement");
    _sub_6BB141(this, arg);
}

_extern bool _sub_6BB108(SquadronQueue *const, Squadron *);
bool SquadronQueue::atFrontOfQueue(Squadron *) // 0x6BB108
{
    mangled_assert("?atFrontOfQueue@SquadronQueue@@QAE_NPAVSquadron@@@Z");
    todo("implement");
    bool __result = _sub_6BB108(this, arg);
    return __result;
}

_extern bool _sub_6BB11F(SquadronQueue *const, Squadron *);
bool SquadronQueue::isSquadInQueue(Squadron *) // 0x6BB11F
{
    mangled_assert("?isSquadInQueue@SquadronQueue@@QAE_NPAVSquadron@@@Z");
    todo("implement");
    bool __result = _sub_6BB11F(this, arg);
    return __result;
}

_extern void _sub_6BB140(SquadronQueue *const);
void SquadronQueue::postRestore() // 0x6BB140
{
    mangled_assert("?postRestore@SquadronQueue@@UAEXXZ");
    todo("implement");
    _sub_6BB140(this);
}

_extern bool _sub_6BB151(SquadronQueue *const, SaveGameData *);
bool SquadronQueue::restore(SaveGameData *) // 0x6BB151
{
    mangled_assert("?restore@SquadronQueue@@UAE_NPAVSaveGameData@@@Z");
    todo("implement");
    bool __result = _sub_6BB151(this, arg);
    return __result;
}

_extern bool _sub_6BB18F(SquadronQueue *const, SaveGameData *, SaveType);
bool SquadronQueue::save(SaveGameData *, SaveType) // 0x6BB18F
{
    mangled_assert("?save@SquadronQueue@@UAE_NPAVSaveGameData@@W4SaveType@@@Z");
    todo("implement");
    bool __result = _sub_6BB18F(this, arg, arg);
    return __result;
}

/* ---------- private code */
#endif
