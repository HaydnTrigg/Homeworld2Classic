#if 0
/* ---------- headers */

#include "decomp.h"
#include <xstring>
#include <Render\objects\textureregistry.h>
#include <Mathlib\matrix4.h>
#include <hash_map>
#include <xmemory0>
#include <pch.h>
#include <xhash>
#include <ITweak.h>
#include <Tactics.h>
#include <Mathlib\matrix3.h>
#include <new>
#include <EngineTrail.h>
#include <exception>
#include <xstddef>
#include <type_traits>
#include <xutility>
#include <Player.h>
#include <utility>
#include <SquadronList.h>
#include <vector>
#include <xmemory>
#include <sobid.h>
#include <MultiplierTypes.h>
#include <list>
#include <Mathlib\mathutil.h>
#include <platform\osdef.h>
#include <Mathlib\vector3.h>
#include <Mathlib\vector4.h>
#include <map>
#include <Race.h>
#include <xtree>
#include <TeamColourRegistry.h>
#include <savegame.h>
#include <Render\objects\texture.h>
#include <task.h>
#include <Render\objects\objects.h>
#include <stack>
#include <Render\objects\core.h>
#include <Render\gl\types.h>
#include <Mathlib\vector2.h>
#include <Mathlib\matvec.h>
#include <util\types.h>
#include <profile\profile.h>
#include <BuildManager.h>
#include <iostream>
#include <Render\gl\lotypes.h>
#include <playerresourcetype.h>
#include <Graphics\TeamColour.h>
#include <Render\gl\r_types.h>
#include <fixedpoint.h>
#include <util\fixed.h>
#include <Mathlib\mathlibdll.h>
#include <Mathlib\fastmath.h>
#include <ResearchManager.h>
#include <Render\gl\r_defines.h>
#include <Render\gl\glext.h>
#include <util\colour.h>
#include <boost\shared_ptr.hpp>
#include <sobtypes.h>
#include <selection.h>
#include <savegamedef.h>
#include <boost\detail\shared_count.hpp>
#include <boost\detail\lwm_win32.hpp>
#include <EngineTrailFrame.h>
#include <EngineTrailManager.h>
#include <EngineTrailFrameList.h>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

extern EngineTrailManager *EngineTrailManager::s_instance; // 0x843908

/* ---------- private variables */

_static
{
    extern float twkTrailDetail; // 0x833078
    extern unsigned __int32 twkMinTrails; // 0x83307C
    extern unsigned __int32 twkMaxTrails; // 0x833080
}

/* ---------- public code */

_extern _sub_44769B(EngineTrailManager *const);
EngineTrailManager::EngineTrailManager() // 0x44769B
{
    mangled_assert("??0EngineTrailManager@@IAE@XZ");
    todo("implement");
    _sub_44769B(this);
}

_extern void _sub_44771D(std::_List_buy<EngineTrail *,std::allocator<EngineTrail *> > *const);
_inline std::_List_buy<EngineTrail *,std::allocator<EngineTrail *> >::~_List_buy<EngineTrail *,std::allocator<EngineTrail *> >() // 0x44771D
{
    mangled_assert("??1?$_List_buy@PAVEngineTrail@@V?$allocator@PAVEngineTrail@@@std@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_44771D(this);
}

_extern void _sub_447726(std::_List_buy<EngineTrailManager::Orphan,std::allocator<EngineTrailManager::Orphan> > *const);
_inline std::_List_buy<EngineTrailManager::Orphan,std::allocator<EngineTrailManager::Orphan> >::~_List_buy<EngineTrailManager::Orphan,std::allocator<EngineTrailManager::Orphan> >() // 0x447726
{
    mangled_assert("??1?$_List_buy@VOrphan@EngineTrailManager@@V?$allocator@VOrphan@EngineTrailManager@@@std@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_447726(this);
}

_extern void _sub_447753(EngineTrailManager *const);
EngineTrailManager::~EngineTrailManager() // 0x447753
{
    mangled_assert("??1EngineTrailManager@@IAE@XZ");
    todo("implement");
    _sub_447753(this);
}

_extern bool _sub_447C8F();
bool EngineTrailManager::startup() // 0x447C8F
{
    mangled_assert("?startup@EngineTrailManager@@SG_NXZ");
    todo("implement");
    bool __result = _sub_447C8F();
    return __result;
}

_extern bool _sub_447C31();
bool EngineTrailManager::shutdown() // 0x447C31
{
    mangled_assert("?shutdown@EngineTrailManager@@SG_NXZ");
    todo("implement");
    bool __result = _sub_447C31();
    return __result;
}

_extern EngineTrailManager *_sub_447B62();
EngineTrailManager *EngineTrailManager::i() // 0x447B62
{
    mangled_assert("?i@EngineTrailManager@@SGPAV1@XZ");
    todo("implement");
    EngineTrailManager * __result = _sub_447B62();
    return __result;
}

_extern FatVertex *_sub_447B17(EngineTrailManager *const, unsigned __int32);
FatVertex *EngineTrailManager::getFats(unsigned __int32) // 0x447B17
{
    mangled_assert("?getFats@EngineTrailManager@@QAEPAUFatVertex@@I@Z");
    todo("implement");
    FatVertex * __result = _sub_447B17(this, arg);
    return __result;
}

_extern EngineTrail *_sub_447B10(EngineTrailManager *const, unsigned __int32);
EngineTrail *EngineTrailManager::getEngineTrailFromID(unsigned __int32) // 0x447B10
{
    mangled_assert("?getEngineTrailFromID@EngineTrailManager@@AAEPAVEngineTrail@@I@Z");
    todo("implement");
    EngineTrail * __result = _sub_447B10(this, arg);
    return __result;
}

_extern unsigned __int32 _sub_447B3D(EngineTrailManager *const, EngineTrail *);
unsigned __int32 EngineTrailManager::getIDFromEngineTrail(EngineTrail *) // 0x447B3D
{
    mangled_assert("?getIDFromEngineTrail@EngineTrailManager@@AAEIPAVEngineTrail@@@Z");
    todo("implement");
    unsigned __int32 __result = _sub_447B3D(this, arg);
    return __result;
}

_extern EngineTrail *_sub_447C55(EngineTrailManager *const, unsigned __int32, EngineTrailStatic const *);
EngineTrail *EngineTrailManager::startTrail(unsigned __int32, EngineTrailStatic const *) // 0x447C55
{
    mangled_assert("?startTrail@EngineTrailManager@@QAEPAVEngineTrail@@IPBVEngineTrailStatic@@@Z");
    todo("implement");
    EngineTrail * __result = _sub_447C55(this, arg, arg);
    return __result;
}

_extern void _sub_447A85(EngineTrailManager *const, TeamColour const *, EngineTrail *, float);
void EngineTrailManager::endTrail(TeamColour const *, EngineTrail *, float) // 0x447A85
{
    mangled_assert("?endTrail@EngineTrailManager@@QAEXPBVTeamColour@@PAVEngineTrail@@M@Z");
    todo("implement");
    _sub_447A85(this, arg, arg, arg);
}

_extern void _sub_447CD5(EngineTrailManager *const, float);
void EngineTrailManager::updateAllOrphans(float) // 0x447CD5
{
    mangled_assert("?updateAllOrphans@EngineTrailManager@@QAEXM@Z");
    todo("implement");
    _sub_447CD5(this, arg);
}

_extern void _sub_447B97(EngineTrailManager *const, Camera const *, float);
void EngineTrailManager::renderAllOrphans(Camera const *, float) // 0x447B97
{
    mangled_assert("?renderAllOrphans@EngineTrailManager@@QAEXPBVCamera@@M@Z");
    todo("implement");
    _sub_447B97(this, arg, arg);
}

_extern void _sub_447B44(EngineTrailManager *const, unsigned __int32 &, unsigned __int32 &);
void EngineTrailManager::getPoolStats(unsigned __int32 &, unsigned __int32 &) // 0x447B44
{
    mangled_assert("?getPoolStats@EngineTrailManager@@QAEXAAI0@Z");
    todo("implement");
    _sub_447B44(this, arg, arg);
}

/* ---------- private code */
#endif
