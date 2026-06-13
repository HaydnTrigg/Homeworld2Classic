#if 0
/* ---------- headers */

#include "decomp.h"
#include <Subsystems\HardPointManager.h>
#include <GameEventDefs.h>
#include <Subsystems\HardPoint.h>
#include <assist\stlexsmallvector.h>
#include <GameEventSys.h>
#include <Subsystems\HardPointStatic.h>
#include <xstring>
#include <Subsystems\SubSystemType.h>
#include <xmemory0>
#include <Mathlib\matrix4.h>
#include <pch.h>
#include <Interpolation.h>
#include <Collision\Primitives\aabb.h>
#include <Collision\Primitives\obb.h>
#include <Modifiers\ModifierAbility.h>
#include <Mathlib\matrix3.h>
#include <shipstatic.h>
#include <commandtype.h>
#include <new>
#include <dbdefines.h>
#include <exception>
#include <UnitCaps\UnitCaps.h>
#include <xstddef>
#include <abilities.h>
#include <type_traits>
#include <SOBGroupManager.h>
#include <hash_map>
#include <xhash>
#include <Player.h>
#include <ResearchManager.h>
#include <xutility>
#include <utility>
#include <iosfwd>
#include <vector>
#include <xmemory>
#include <SelTarg.h>
#include <prim.h>
#include <Tactics.h>
#include <list>
#include <MADState.h>
#include <luaconfig\luabinding.h>
#include <luaconfig\luaconfig.h>
#include <lua.h>
#include <Collision\Primitives\capsule.h>
#include <Collision\Primitives\segment.h>
#include <Mathlib\vector3.h>
#include <Collision\BVH\profiling.h>
#include <Mathlib\vector4.h>
#include <map>
#include <xtree>
#include <boost\scoped_ptr.hpp>
#include <Modifiers\ModifierTargetCache.h>
#include <seInterface2\PatchID.h>
#include <seInterface2\PatchBase.h>
#include <seInterface2\SoundParams.h>
#include <Mathlib\vector2.h>
#include <HyperspaceManager.h>
#include <util\types.h>
#include <SquadronList.h>
#include <boost\cstdint.hpp>
#include <fixedpoint.h>
#include <util\fixed.h>
#include <MultiplierContainer.h>
#include <visibility.h>
#include <MultiplierTypes.h>
#include <Collision\BVH\bvh.h>
#include <Universe.h>
#include <platform\timer.h>
#include <Mathlib\quat.h>
#include <Waypoint.h>
#include <platform\platformexports.h>
#include <SobUnmoveable.h>
#include <Modifiers\ModifierUIInfo.h>
#include <Modifiers\ModifierMultiplier.h>
#include <Modifiers\ModifierEffect.h>
#include <EffectCreate.h>
#include <config.h>
#include <Modifiers\ModifierApplier.h>
#include <pathpoints.h>
#include <debug\db.h>
#include <profile\profile.h>
#include <iostream>
#include <weaponinfo.h>
#include <weaponstaticinfo.h>
#include <GunBinding.h>
#include <boost\shared_ptr.hpp>
#include <util\colour.h>
#include <playerresourcetype.h>
#include <sobtypes.h>
#include <boost\throw_exception.hpp>
#include <selection.h>
#include <savegamedef.h>
#include <TeamColourRegistry.h>
#include <boost\detail\shared_count.hpp>
#include <savegame.h>
#include <task.h>
#include <boost\detail\lwm_win32.hpp>
#include <stack>
#include <sob.h>
#include <sobstatic.h>
#include <SobWithMeshStatic.h>
#include <SoundManager\SoundEntityHandle.h>
#include <Collision\Primitives\sphere.h>
#include <ship.h>
#include <WeaponClassSpecificInfo.h>
#include <SobWithMesh.h>
#include <SobRigidBody.h>
#include <Race.h>
#include <SobRigidBodyStatic.h>
#include <CloakManager.h>
#include <sobid.h>
#include <wchar.h>
#include <MeshAnimation.h>
#include <ShieldTypes.h>
#include <Collision\BVH\octree.h>
#include <Collision\BVH\span.h>
#include <Collision\BVH\Internal\span_i.h>
#include <Collision\BVH\proxy.h>
#include <BuildManager.h>
#include <Collision\intersect.h>
#include <Collision\primitivesfwd.h>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

extern char const CloakManager::m_saveToken[0]; // 0x78C130
extern SaveData const CloakManager::m_saveData[2]; // 0x78C140

/* ---------- private variables */

/* ---------- public code */

_extern _sub_484D01(CloakManager *const, SobID const &);
CloakManager::CloakManager(SobID const &) // 0x484D01
{
    mangled_assert("??0CloakManager@@QAE@ABVSobID@@@Z");
    todo("implement");
    _sub_484D01(this, arg);
}

_extern void _sub_484E09(CloakManager *const);
CloakManager::~CloakManager() // 0x484E09
{
    mangled_assert("??1CloakManager@@UAE@XZ");
    todo("implement");
    _sub_484E09(this);
}

_extern CloakStatic const *_sub_485118(CloakManager const *const);
CloakStatic const *CloakManager::getStatic() const // 0x485118
{
    mangled_assert("?getStatic@CloakManager@@ABEPBVCloakStatic@@XZ");
    todo("implement");
    CloakStatic const * __result = _sub_485118(this);
    return __result;
}

_extern void _sub_484E78(CloakManager *const);
void CloakManager::activateCloaking() // 0x484E78
{
    mangled_assert("?activateCloaking@CloakManager@@QAEXXZ");
    todo("implement");
    _sub_484E78(this);
}

_extern bool _sub_485067(CloakManager *const);
bool CloakManager::canActivateCloaking() // 0x485067
{
    mangled_assert("?canActivateCloaking@CloakManager@@QAE_NXZ");
    todo("implement");
    bool __result = _sub_485067(this);
    return __result;
}

_extern void _sub_4851B4(CloakManager *const);
void CloakManager::shutDownCloaking() // 0x4851B4
{
    mangled_assert("?shutDownCloaking@CloakManager@@QAEXXZ");
    todo("implement");
    _sub_4851B4(this);
}

_extern bool _sub_485099(CloakManager *const);
bool CloakManager::canShutDownCloaking() // 0x485099
{
    mangled_assert("?canShutDownCloaking@CloakManager@@QAE_NXZ");
    todo("implement");
    bool __result = _sub_485099(this);
    return __result;
}

_extern void _sub_4852B5(CloakManager *const, float);
void CloakManager::update(float) // 0x4852B5
{
    mangled_assert("?update@CloakManager@@QAEXM@Z");
    todo("implement");
    _sub_4852B5(this, arg);
}

_extern void _sub_484F2D(CloakManager *const);
void CloakManager::applyCloakEffect() // 0x484F2D
{
    mangled_assert("?applyCloakEffect@CloakManager@@QAEXXZ");
    todo("implement");
    _sub_484F2D(this);
}

_extern float _sub_4850CE(CloakManager const *const);
float CloakManager::getCloakingUsage() const // 0x4850CE
{
    mangled_assert("?getCloakingUsage@CloakManager@@QBEMXZ");
    todo("implement");
    float __result = _sub_4850CE(this);
    return __result;
}

_extern bool _sub_48509E(CloakManager const *const);
bool CloakManager::cloakingActive() const // 0x48509E
{
    mangled_assert("?cloakingActive@CloakManager@@QBE_NXZ");
    todo("implement");
    bool __result = _sub_48509E(this);
    return __result;
}

_extern _sub_484D53(CloakManager *const, SaveGameData *);
CloakManager::CloakManager(SaveGameData *) // 0x484D53
{
    mangled_assert("??0CloakManager@@QAE@PAVSaveGameData@@@Z");
    todo("implement");
    _sub_484D53(this, arg);
}

_extern void _sub_4850C2(CloakManager *const);
void CloakManager::defaultSettings() // 0x4850C2
{
    mangled_assert("?defaultSettings@CloakManager@@QAEXXZ");
    todo("implement");
    _sub_4850C2(this);
}

_extern void _sub_48513A(CloakManager *const);
void CloakManager::postRestore() // 0x48513A
{
    mangled_assert("?postRestore@CloakManager@@UAEXXZ");
    todo("implement");
    _sub_48513A(this);
}

_extern bool _sub_48513B(CloakManager *const, SaveGameData *);
bool CloakManager::restore(SaveGameData *) // 0x48513B
{
    mangled_assert("?restore@CloakManager@@UAE_NPAVSaveGameData@@@Z");
    todo("implement");
    bool __result = _sub_48513B(this, arg);
    return __result;
}

_extern bool _sub_485179(CloakManager *const, SaveGameData *, SaveType);
bool CloakManager::save(SaveGameData *, SaveType) // 0x485179
{
    mangled_assert("?save@CloakManager@@UAE_NPAVSaveGameData@@W4SaveType@@@Z");
    todo("implement");
    bool __result = _sub_485179(this, arg, arg);
    return __result;
}

_extern _sub_484D94(CloakStatic *const, float, float, float, float, float, float, float);
CloakStatic::CloakStatic(float, float, float, float, float, float, float) // 0x484D94
{
    mangled_assert("??0CloakStatic@@QAE@MMMMMMM@Z");
    todo("implement");
    _sub_484D94(this, arg, arg, arg, arg, arg, arg, arg);
}

_extern void _sub_484E54(CloakStatic *const);
CloakStatic::~CloakStatic() // 0x484E54
{
    mangled_assert("??1CloakStatic@@QAE@XZ");
    todo("implement");
    _sub_484E54(this);
}

_extern void _sub_484E55(GameEvent_CloakingStatusChange *const);
_inline GameEvent_CloakingStatusChange::~GameEvent_CloakingStatusChange() // 0x484E55
{
    mangled_assert("??1GameEvent_CloakingStatusChange@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_484E55(this);
}

/* ---------- private code */
#endif
