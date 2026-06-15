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

SquadronQueue::SquadronQueue() // 0x6BB09A
{
    mangled_assert("??0SquadronQueue@@QAE@XZ");
    todo("implement");
}

void SquadronQueue::addToQueue(Squadron *) // 0x6BB0F6
{
    mangled_assert("?addToQueue@SquadronQueue@@UAEXPAVSquadron@@@Z");
    todo("implement");
}

void SquadronQueue::removeFromQueue(Squadron *) // 0x6BB141
{
    mangled_assert("?removeFromQueue@SquadronQueue@@UAEXPAVSquadron@@@Z");
    todo("implement");
}

bool SquadronQueue::atFrontOfQueue(Squadron *) // 0x6BB108
{
    mangled_assert("?atFrontOfQueue@SquadronQueue@@QAE_NPAVSquadron@@@Z");
    todo("implement");
}

bool SquadronQueue::isSquadInQueue(Squadron *) // 0x6BB11F
{
    mangled_assert("?isSquadInQueue@SquadronQueue@@QAE_NPAVSquadron@@@Z");
    todo("implement");
}

void SquadronQueue::postRestore() // 0x6BB140
{
    mangled_assert("?postRestore@SquadronQueue@@UAEXXZ");
    todo("implement");
}

bool SquadronQueue::restore(SaveGameData *) // 0x6BB151
{
    mangled_assert("?restore@SquadronQueue@@UAE_NPAVSaveGameData@@@Z");
    todo("implement");
}

bool SquadronQueue::save(SaveGameData *, SaveType) // 0x6BB18F
{
    mangled_assert("?save@SquadronQueue@@UAE_NPAVSaveGameData@@W4SaveType@@@Z");
    todo("implement");
}

/* ---------- private code */
#endif
