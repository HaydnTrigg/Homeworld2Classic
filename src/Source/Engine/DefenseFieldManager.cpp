#if 0
/* ---------- headers */

#include "decomp.h"
#include <Subsystems\SubSystemType.h>
#include <luaconfig\luabinding.h>
#include <assist\stlexsmallvector.h>
#include <luaconfig\luaconfig.h>
#include <lua.h>
#include <xstring>
#include <xmemory0>
#include <Mathlib\matrix4.h>
#include <pch.h>
#include <BuildManager.h>
#include <Interpolation.h>
#include <profile\profile.h>
#include <GameEventDefs.h>
#include <iostream>
#include <GameEventSys.h>
#include <Collision\Primitives\aabb.h>
#include <Modifiers\ModifierApplier.h>
#include <Collision\Primitives\obb.h>
#include <shipstatic.h>
#include <commandtype.h>
#include <Mathlib\matrix3.h>
#include <abilities.h>
#include <new>
#include <exception>
#include <xstddef>
#include <Modifiers\ModifierAbility.h>
#include <type_traits>
#include <Render\FxGL\FXManager.h>
#include <Render\FxGL\VarMulti.h>
#include <dbdefines.h>
#include <UnitCaps\UnitCaps.h>
#include <xutility>
#include <utility>
#include <iosfwd>
#include <vector>
#include <xmemory>
#include <SOBGroupManager.h>
#include <hash_map>
#include <debug\ctassert.h>
#include <xhash>
#include <Player.h>
#include <SelTarg.h>
#include <ResearchManager.h>
#include <prim.h>
#include <list>
#include <EffectCreate.h>
#include <Collision\Primitives\capsule.h>
#include <Collision\Primitives\segment.h>
#include <Tactics.h>
#include <Mathlib\vector3.h>
#include <Collision\BVH\profiling.h>
#include <Mathlib\vector4.h>
#include <map>
#include <xtree>
#include <Modifiers\ModifierTargetCache.h>
#include <boost\scoped_ptr.hpp>
#include <seInterface2\PatchID.h>
#include <seInterface2\PatchBase.h>
#include <seInterface2\SoundParams.h>
#include <SobFactory.h>
#include <Mathlib\vector2.h>
#include <util\types.h>
#include <fixedpoint.h>
#include <util\fixed.h>
#include <boost\cstdint.hpp>
#include <HyperspaceManager.h>
#include <SquadronList.h>
#include <MultiplierContainer.h>
#include <visibility.h>
#include <MultiplierTypes.h>
#include <Collision\BVH\bvh.h>
#include <Mathlib\quat.h>
#include <Universe.h>
#include <platform\timer.h>
#include <Waypoint.h>
#include <platform\platformexports.h>
#include <SobUnmoveable.h>
#include <config.h>
#include <Modifiers\ModifierUIInfo.h>
#include <Modifiers\ModifierMultiplier.h>
#include <Modifiers\ModifierEffect.h>
#include <pathpoints.h>
#include <weaponinfo.h>
#include <weaponstaticinfo.h>
#include <debug\db.h>
#include <GunBinding.h>
#include <playerresourcetype.h>
#include <boost\shared_ptr.hpp>
#include <util\colour.h>
#include <TeamColourRegistry.h>
#include <Sob\DefenseField\DefenseField.h>
#include <sobtypes.h>
#include <boost\throw_exception.hpp>
#include <savegame.h>
#include <Sob\DefenseField\DefenseFieldStatic.h>
#include <task.h>
#include <selection.h>
#include <savegamedef.h>
#include <stack>
#include <boost\detail\shared_count.hpp>
#include <SobWithMeshStatic.h>
#include <SoundManager\SoundEntityHandle.h>
#include <sob.h>
#include <boost\detail\lwm_win32.hpp>
#include <sobstatic.h>
#include <ship.h>
#include <WeaponClassSpecificInfo.h>
#include <Collision\Primitives\sphere.h>
#include <SobWithMesh.h>
#include <SobRigidBody.h>
#include <SobRigidBodyStatic.h>
#include <MeshAnimation.h>
#include <ShieldTypes.h>
#include <DefenseFieldManager.h>
#include <sobid.h>
#include <wchar.h>
#include <Collision\BVH\octree.h>
#include <Collision\BVH\span.h>
#include <Collision\BVH\Internal\span_i.h>
#include <Race.h>
#include <Collision\BVH\proxy.h>
#include <Collision\intersect.h>
#include <Subsystems\HardPointManager.h>
#include <Collision\primitivesfwd.h>
#include <Subsystems\HardPoint.h>
#include <Subsystems\HardPointStatic.h>
#include <MADState.h>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

extern char const DefenseFieldManager::m_saveToken[0]; // 0x78C1D0
extern SaveData const DefenseFieldManager::m_saveData[3]; // 0x78C1E8

/* ---------- private variables */

/* ---------- public code */

_inline DefenseFieldManager::Data::Data() // 0x485411
{
    mangled_assert("??0Data@DefenseFieldManager@@QAE@XZ");
    todo("implement");
}

_inline DefenseFieldManager::Data::~Data() // 0x485597
{
    mangled_assert("??1Data@DefenseFieldManager@@QAE@XZ");
    todo("implement");
}

DefenseFieldManager::DefenseFieldManager(SobID const &) // 0x48542A
{
    mangled_assert("??0DefenseFieldManager@@QAE@ABVSobID@@@Z");
    todo("implement");
}

DefenseFieldManager::~DefenseFieldManager() // 0x4855C6
{
    mangled_assert("??1DefenseFieldManager@@UAE@XZ");
    todo("implement");
}

_inline GameEvent_DefenseFieldStatusChange::~GameEvent_DefenseFieldStatusChange() // 0x48563C
{
    mangled_assert("??1GameEvent_DefenseFieldStatusChange@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

void DefenseFieldManager::killFieldObject() // 0x485997
{
    mangled_assert("?killFieldObject@DefenseFieldManager@@AAEXXZ");
    todo("implement");
}

DefenseFieldManagerStatic const *DefenseFieldManager::getStatic() const // 0x48596F
{
    mangled_assert("?getStatic@DefenseFieldManager@@QBEPBVDefenseFieldManagerStatic@@XZ");
    todo("implement");
}

void DefenseFieldManager::activateField() // 0x4856B9
{
    mangled_assert("?activateField@DefenseFieldManager@@QAEXXZ");
    todo("implement");
}

void DefenseFieldManager::displayField() // 0x4857FD
{
    mangled_assert("?displayField@DefenseFieldManager@@QAEXXZ");
    todo("implement");
}

void DefenseFieldManager::shutDownField() // 0x485A5B
{
    mangled_assert("?shutDownField@DefenseFieldManager@@QAEXXZ");
    todo("implement");
}

bool DefenseFieldManager::canShutDown() // 0x4857D1
{
    mangled_assert("?canShutDown@DefenseFieldManager@@QAE_NXZ");
    todo("implement");
}

bool DefenseFieldManager::canActivate() // 0x48579B
{
    mangled_assert("?canActivate@DefenseFieldManager@@QAE_NXZ");
    todo("implement");
}

DefenseFieldManager::DefenseFieldManager(SaveGameData *) // 0x4854C7
{
    mangled_assert("??0DefenseFieldManager@@QAE@PAVSaveGameData@@@Z");
    todo("implement");
}

void DefenseFieldManager::update(float) // 0x485B4C
{
    mangled_assert("?update@DefenseFieldManager@@QAEXM@Z");
    todo("implement");
}

bool DefenseFieldManager::fieldActive() const // 0x4858FF
{
    mangled_assert("?fieldActive@DefenseFieldManager@@QBE_NXZ");
    todo("implement");
}

Sob const *DefenseFieldManager::getField() const // 0x485958
{
    mangled_assert("?getField@DefenseFieldManager@@QBEPBVSob@@XZ");
    todo("implement");
}

void DefenseFieldManager::defaultSettings() // 0x4857F8
{
    mangled_assert("?defaultSettings@DefenseFieldManager@@QAEXXZ");
    todo("implement");
}

void DefenseFieldManager::postRestore() // 0x4859C2
{
    mangled_assert("?postRestore@DefenseFieldManager@@UAEXXZ");
    todo("implement");
}

float DefenseFieldManager::getCurrentUsage() // 0x485927
{
    mangled_assert("?getCurrentUsage@DefenseFieldManager@@QAEMXZ");
    todo("implement");
}

bool DefenseFieldManager::restore(SaveGameData *) // 0x4859E2
{
    mangled_assert("?restore@DefenseFieldManager@@UAE_NPAVSaveGameData@@@Z");
    todo("implement");
}

bool DefenseFieldManager::save(SaveGameData *, SaveType) // 0x485A20
{
    mangled_assert("?save@DefenseFieldManager@@UAE_NPAVSaveGameData@@W4SaveType@@@Z");
    todo("implement");
}

DefenseFieldManagerStatic::DefenseFieldManagerStatic() // 0x485544
{
    mangled_assert("??0DefenseFieldManagerStatic@@QAE@XZ");
    todo("implement");
}

/* ---------- private code */
#endif
