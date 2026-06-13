#if 0
/* ---------- headers */

#include "decomp.h"
#include <xstring>
#include <Engine\HyperspaceManager.h>
#include <xmemory0>
#include <Engine\fixedpoint.h>
#include <Engine\Universe.h>
#include <Engine\Waypoint.h>
#include <Engine\SobUnmoveable.h>
#include <new>
#include <Engine\Squadron.h>
#include <Engine\ship.h>
#include <xstddef>
#include <type_traits>
#include <Engine\sob.h>
#include <Engine\shipHold.h>
#include <xutility>
#include <utility>
#include <vector>
#include <Engine\dbdefines.h>
#include <xmemory>
#include <Engine\UnitCaps\UnitCaps.h>
#include <xhash>
#include <list>
#include <xtree>
#include <util\types.h>
#include <Engine\pathpoints.h>
#include <Collision\BVH\octree.h>
#include <Collision\BVH\span.h>
#include <Engine\command.h>
#include <Engine\sobtypes.h>
#include <Engine\selection.h>
#include <Engine\savegamedef.h>
#include <Engine\pch.h>
#include <Engine\HyperSpaceBaseCommand.h>
#include <platform\timer.h>
#include <platform\platformexports.h>
#include <Engine\SquadronList.h>
#include <Engine\SOBGroupManager.h>
#include <assist\stlexsmallvector.h>
#include <Engine\sobid.h>
#include <set>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

extern char const HyperSpaceBaseCommand::m_saveToken[22]; // 0x7BA9A8
extern SaveData const HyperSpaceBaseCommand::m_saveData[1]; // 0x7BA9C0

/* ---------- private variables */

/* ---------- public code */

_extern _sub_6BD583(HyperSpaceBaseCommand *const, Squadron *, Command::CommandOrigin);
HyperSpaceBaseCommand::HyperSpaceBaseCommand(Squadron *, Command::CommandOrigin) // 0x6BD583
{
    mangled_assert("??0HyperSpaceBaseCommand@@QAE@PAVSquadron@@W4CommandOrigin@Command@@@Z");
    todo("implement");
    _sub_6BD583(this, arg, arg);
}

_extern void _sub_6BD59F(HyperSpaceBaseCommand *const);
HyperSpaceBaseCommand::~HyperSpaceBaseCommand() // 0x6BD59F
{
    mangled_assert("??1HyperSpaceBaseCommand@@UAE@XZ");
    todo("implement");
    _sub_6BD59F(this);
}

_extern bool _sub_6BD5AA(HyperSpaceBaseCommand const *const);
bool HyperSpaceBaseCommand::ableToEnterHyperspace() const // 0x6BD5AA
{
    mangled_assert("?ableToEnterHyperspace@HyperSpaceBaseCommand@@IBE_NXZ");
    todo("implement");
    bool __result = _sub_6BD5AA(this);
    return __result;
}

_extern void _sub_6BD5DF(HyperSpaceBaseCommand *const);
void HyperSpaceBaseCommand::cleanUpCommand() // 0x6BD5DF
{
    mangled_assert("?cleanUpCommand@HyperSpaceBaseCommand@@UAEXXZ");
    todo("implement");
    _sub_6BD5DF(this);
}

_extern void _sub_6BD5F3(HyperSpaceBaseCommand *const);
void HyperSpaceBaseCommand::emergencyCleanUp() // 0x6BD5F3
{
    mangled_assert("?emergencyCleanUp@HyperSpaceBaseCommand@@UAEXXZ");
    todo("implement");
    _sub_6BD5F3(this);
}

_extern void _sub_6BD621(HyperSpaceBaseCommand *const);
void HyperSpaceBaseCommand::jumpEffectToEnd() // 0x6BD621
{
    mangled_assert("?jumpEffectToEnd@HyperSpaceBaseCommand@@UAEXXZ");
    todo("implement");
    _sub_6BD621(this);
}

_extern _sub_6BD56B(HyperSpaceBaseCommand *const, SaveGameData *);
HyperSpaceBaseCommand::HyperSpaceBaseCommand(SaveGameData *) // 0x6BD56B
{
    mangled_assert("??0HyperSpaceBaseCommand@@QAE@PAVSaveGameData@@@Z");
    todo("implement");
    _sub_6BD56B(this, arg);
}

_extern void _sub_6BD5F2(HyperSpaceBaseCommand *const);
void HyperSpaceBaseCommand::defaultSettings() // 0x6BD5F2
{
    mangled_assert("?defaultSettings@HyperSpaceBaseCommand@@QAEXXZ");
    todo("implement");
    _sub_6BD5F2(this);
}

_extern void _sub_6BD62A(HyperSpaceBaseCommand *const);
void HyperSpaceBaseCommand::postRestore() // 0x6BD62A
{
    mangled_assert("?postRestore@HyperSpaceBaseCommand@@UAEXXZ");
    todo("implement");
    _sub_6BD62A(this);
}

_extern bool _sub_6BD62F(HyperSpaceBaseCommand *const, SaveGameData *);
bool HyperSpaceBaseCommand::restore(SaveGameData *) // 0x6BD62F
{
    mangled_assert("?restore@HyperSpaceBaseCommand@@UAE_NPAVSaveGameData@@@Z");
    todo("implement");
    bool __result = _sub_6BD62F(this, arg);
    return __result;
}

_extern bool _sub_6BD67C(HyperSpaceBaseCommand *const, SaveGameData *, SaveType);
bool HyperSpaceBaseCommand::save(SaveGameData *, SaveType) // 0x6BD67C
{
    mangled_assert("?save@HyperSpaceBaseCommand@@UAE_NPAVSaveGameData@@W4SaveType@@@Z");
    todo("implement");
    bool __result = _sub_6BD67C(this, arg, arg);
    return __result;
}

/* ---------- private code */
#endif
