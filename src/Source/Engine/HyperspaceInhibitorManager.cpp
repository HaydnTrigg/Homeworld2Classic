#if 0
/* ---------- headers */

#include "decomp.h"
#include <assist\stlexsmallvector.h>
#include <xstring>
#include <xmemory0>
#include <Mathlib\matrix4.h>
#include <pch.h>
#include <Collision\Primitives\capsule.h>
#include <Collision\Primitives\segment.h>
#include <Collision\BVH\profiling.h>
#include <Mathlib\matrix3.h>
#include <Modifiers\ModifierTargetCache.h>
#include <seInterface2\PatchID.h>
#include <Race.h>
#include <seInterface2\PatchBase.h>
#include <seInterface2\SoundParams.h>
#include <new>
#include <exception>
#include <xstddef>
#include <type_traits>
#include <fixedpoint.h>
#include <util\fixed.h>
#include <BuildManager.h>
#include <xutility>
#include <utility>
#include <iosfwd>
#include <MultiplierContainer.h>
#include <visibility.h>
#include <GameEventDefs.h>
#include <vector>
#include <MultiplierTypes.h>
#include <GameEventSys.h>
#include <xmemory>
#include <Collision\BVH\bvh.h>
#include <list>
#include <Mathlib\vector3.h>
#include <Mathlib\vector4.h>
#include <dbdefines.h>
#include <UnitCaps\UnitCaps.h>
#include <xtree>
#include <SOBGroupManager.h>
#include <boost\scoped_ptr.hpp>
#include <weaponinfo.h>
#include <hash_map>
#include <xhash>
#include <Player.h>
#include <ResearchManager.h>
#include <Mathlib\vector2.h>
#include <playerresourcetype.h>
#include <util\types.h>
#include <TeamColourRegistry.h>
#include <savegame.h>
#include <boost\cstdint.hpp>
#include <task.h>
#include <stack>
#include <sob.h>
#include <sobstatic.h>
#include <SobWithMeshStatic.h>
#include <SoundManager\SoundEntityHandle.h>
#include <Collision\Primitives\sphere.h>
#include <ship.h>
#include <SobWithMesh.h>
#include <SobRigidBody.h>
#include <Mathlib\quat.h>
#include <SobRigidBodyStatic.h>
#include <MeshAnimation.h>
#include <ShieldTypes.h>
#include <Collision\BVH\octree.h>
#include <Collision\BVH\span.h>
#include <Collision\BVH\Internal\span_i.h>
#include <Collision\BVH\proxy.h>
#include <Collision\intersect.h>
#include <Collision\primitivesfwd.h>
#include <Subsystems\HardPointManager.h>
#include <Subsystems\HardPoint.h>
#include <Subsystems\HardPointStatic.h>
#include <Subsystems\SubSystemType.h>
#include <HyperspaceManager.h>
#include <SquadronList.h>
#include <pathpoints.h>
#include <debug\db.h>
#include <Interpolation.h>
#include <Collision\Primitives\aabb.h>
#include <Collision\Primitives\obb.h>
#include <boost\shared_ptr.hpp>
#include <util\colour.h>
#include <sobtypes.h>
#include <boost\throw_exception.hpp>
#include <Universe.h>
#include <platform\timer.h>
#include <selection.h>
#include <Waypoint.h>
#include <platform\platformexports.h>
#include <savegamedef.h>
#include <SobUnmoveable.h>
#include <boost\detail\shared_count.hpp>
#include <boost\detail\lwm_win32.hpp>
#include <abilities.h>
#include <HyperspaceInhibitorManager.h>
#include <sobid.h>
#include <wchar.h>
#include <SelTarg.h>
#include <prim.h>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

extern char const HyperspaceInhibitorManager::m_saveToken[0]; // 0x78C280
extern SaveData const HyperspaceInhibitorManager::m_saveData[1]; // 0x78C29C

/* ---------- private variables */

/* ---------- public code */

_extern _sub_485CCF(HyperspaceInhibitorManager *const, SobID const &);
HyperspaceInhibitorManager::HyperspaceInhibitorManager(SobID const &) // 0x485CCF
{
    mangled_assert("??0HyperspaceInhibitorManager@@QAE@ABVSobID@@@Z");
    todo("implement");
    _sub_485CCF(this, arg);
}

_extern void _sub_485D69(HyperspaceInhibitorManager *const);
HyperspaceInhibitorManager::~HyperspaceInhibitorManager() // 0x485D69
{
    mangled_assert("??1HyperspaceInhibitorManager@@UAE@XZ");
    todo("implement");
    _sub_485D69(this);
}

_extern _sub_485D1D(HyperspaceInhibitorManager *const, SaveGameData *);
HyperspaceInhibitorManager::HyperspaceInhibitorManager(SaveGameData *) // 0x485D1D
{
    mangled_assert("??0HyperspaceInhibitorManager@@QAE@PAVSaveGameData@@@Z");
    todo("implement");
    _sub_485D1D(this, arg);
}

_extern void _sub_485DC5(HyperspaceInhibitorManager *const);
void HyperspaceInhibitorManager::applyHyperspaceModifiers() // 0x485DC5
{
    mangled_assert("?applyHyperspaceModifiers@HyperspaceInhibitorManager@@QAEXXZ");
    todo("implement");
    _sub_485DC5(this);
}

_extern void _sub_485DC6(HyperspaceInhibitorManager *const);
void HyperspaceInhibitorManager::defaultSettings() // 0x485DC6
{
    mangled_assert("?defaultSettings@HyperspaceInhibitorManager@@QAEXXZ");
    todo("implement");
    _sub_485DC6(this);
}

_extern void _sub_485DCA(HyperspaceInhibitorManager *const);
void HyperspaceInhibitorManager::postRestore() // 0x485DCA
{
    mangled_assert("?postRestore@HyperspaceInhibitorManager@@UAEXXZ");
    todo("implement");
    _sub_485DCA(this);
}

_extern bool _sub_485DCB(HyperspaceInhibitorManager *const, SaveGameData *);
bool HyperspaceInhibitorManager::restore(SaveGameData *) // 0x485DCB
{
    mangled_assert("?restore@HyperspaceInhibitorManager@@UAE_NPAVSaveGameData@@@Z");
    todo("implement");
    bool __result = _sub_485DCB(this, arg);
    return __result;
}

_extern bool _sub_485E09(HyperspaceInhibitorManager *const, SaveGameData *, SaveType);
bool HyperspaceInhibitorManager::save(SaveGameData *, SaveType) // 0x485E09
{
    mangled_assert("?save@HyperspaceInhibitorManager@@UAE_NPAVSaveGameData@@W4SaveType@@@Z");
    todo("implement");
    bool __result = _sub_485E09(this, arg, arg);
    return __result;
}

_extern _sub_485D5A(HyperspaceInhibitorStatic *const, float);
HyperspaceInhibitorStatic::HyperspaceInhibitorStatic(float) // 0x485D5A
{
    mangled_assert("??0HyperspaceInhibitorStatic@@QAE@M@Z");
    todo("implement");
    _sub_485D5A(this, arg);
}

_extern void _sub_485DA8(HyperspaceInhibitorStatic *const);
HyperspaceInhibitorStatic::~HyperspaceInhibitorStatic() // 0x485DA8
{
    mangled_assert("??1HyperspaceInhibitorStatic@@QAE@XZ");
    todo("implement");
    _sub_485DA8(this);
}

/* ---------- private code */
#endif
