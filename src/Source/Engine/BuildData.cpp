#if 0
/* ---------- headers */

#include "decomp.h"
#include <xstring>
#include <xmemory0>
#include <Mathlib\matrix4.h>
#include <pch.h>
#include <Interpolation.h>
#include <Collision\Primitives\aabb.h>
#include <Collision\Primitives\obb.h>
#include <Mathlib\matrix3.h>
#include <new>
#include <ResearchManager.h>
#include <exception>
#include <xstddef>
#include <type_traits>
#include <FamilyListMgr.h>
#include <FamilyList.h>
#include <Family.h>
#include <xutility>
#include <utility>
#include <iosfwd>
#include <vector>
#include <xmemory>
#include <SelTarg.h>
#include <prim.h>
#include <stack>
#include <luaconfig\luabinding.h>
#include <luaconfig\luaconfig.h>
#include <abilities.h>
#include <list>
#include <lua.h>
#include <sobid.h>
#include <Collision\Primitives\capsule.h>
#include <Collision\Primitives\segment.h>
#include <Collision\BVH\profiling.h>
#include <Mathlib\vector3.h>
#include <Mathlib\vector4.h>
#include <map>
#include <xtree>
#include <boost\scoped_ptr.hpp>
#include <scripting.h>
#include <scriptaccess.h>
#include <scripttypedef.h>
#include <seInterface2\PatchID.h>
#include <seInterface2\PatchBase.h>
#include <seInterface2\SoundParams.h>
#include <Mathlib\vector2.h>
#include <Race.h>
#include <Modifiers\ModifierUIInfo.h>
#include <Modifiers\ModifierMultiplier.h>
#include <boost\cstdint.hpp>
#include <Modifiers\ModifierEffect.h>
#include <MultiplierContainer.h>
#include <visibility.h>
#include <MultiplierTypes.h>
#include <Collision\BVH\bvh.h>
#include <weaponinfo.h>
#include <Mathlib\quat.h>
#include <Modifiers\ModifierApplier.h>
#include <Modifiers\ModifierTargetCache.h>
#include <playerresourcetype.h>
#include <assist\typemagic.h>
#include <Subsystems\SubsystemStatic.h>
#include <weaponstaticinfo.h>
#include <GunBinding.h>
#include <Player.h>
#include <SquadronList.h>
#include <fixedpoint.h>
#include <util\fixed.h>
#include <savegameimpl.h>
#include <debug\db.h>
#include <MeshAnimation.h>
#include <ShieldTypes.h>
#include <WeaponClassSpecificInfo.h>
#include <util\colour.h>
#include <boost\shared_ptr.hpp>
#include <SobWithMeshStatic.h>
#include <sobtypes.h>
#include <boost\throw_exception.hpp>
#include <selection.h>
#include <savegamedef.h>
#include <ship.h>
#include <Subsystems\HardPointManager.h>
#include <SobWithMesh.h>
#include <boost\detail\shared_count.hpp>
#include <Subsystems\HardPoint.h>
#include <SobRigidBody.h>
#include <Subsystems\HardPointStatic.h>
#include <sob.h>
#include <boost\detail\lwm_win32.hpp>
#include <SobRigidBodyStatic.h>
#include <Subsystems\SubSystemType.h>
#include <localizer\localizer.h>
#include <TeamColourRegistry.h>
#include <sobstatic.h>
#include <savegame.h>
#include <Collision\Primitives\sphere.h>
#include <task.h>
#include <App\Hw2Identify.h>
#include <BuildData.h>
#include <DependencyData.h>
#include <BuildManager.h>
#include <wchar.h>
#include <Collision\BVH\octree.h>
#include <string>
#include <Collision\BVH\span.h>
#include <Collision\BVH\Internal\span_i.h>
#include <SoundManager\SoundEntityHandle.h>
#include <Collision\BVH\proxy.h>
#include <profile\profile.h>
#include <Collision\intersect.h>
#include <iostream>
#include <Collision\primitivesfwd.h>
#include <Modifiers\ModifierAbility.h>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

extern char const BuildData::m_saveToken[0]; // 0x7A7248
extern SaveData const BuildData::m_saveData[11]; // 0x7A7258

/* ---------- private variables */

/* ---------- public code */

_extern _sub_5CC1FF(BuildData *const);
BuildData::BuildData() // 0x5CC1FF
{
    mangled_assert("??0BuildData@@AAE@XZ");
    todo("implement");
    _sub_5CC1FF(this);
}

_extern void _sub_5CC28D(BuildData *const);
BuildData::~BuildData() // 0x5CC28D
{
    mangled_assert("??1BuildData@@UAE@XZ");
    todo("implement");
    _sub_5CC28D(this);
}

_extern bool _sub_5CC62F(BuildData const *const, Ship *);
bool BuildData::allDependenciesMetNoBuild(Ship *) const // 0x5CC62F
{
    mangled_assert("?allDependenciesMetNoBuild@BuildData@@QBE_NPAVShip@@@Z");
    todo("implement");
    bool __result = _sub_5CC62F(this, arg);
    return __result;
}

_extern bool _sub_5CC5D3(BuildData const *const, Ship *);
bool BuildData::allDependenciesMet(Ship *) const // 0x5CC5D3
{
    mangled_assert("?allDependenciesMet@BuildData@@UBE_NPAVShip@@@Z");
    todo("implement");
    bool __result = _sub_5CC5D3(this, arg);
    return __result;
}

_extern SubSystemType _sub_5CC65E(BuildData *const);
SubSystemType BuildData::getSubSystemType() // 0x5CC65E
{
    mangled_assert("?getSubSystemType@BuildData@@QAE?AW4SubSystemType@@XZ");
    todo("implement");
    SubSystemType __result = _sub_5CC65E(this);
    return __result;
}

_extern void _sub_5CC2DA(LuaConfig &, Player *);
void BuildData::CreateBuildData(LuaConfig &lc, Player *player) // 0x5CC2DA
{
    mangled_assert("?CreateBuildData@BuildData@@SGXAAVLuaConfig@@PAVPlayer@@@Z");
    todo("implement");
    _sub_5CC2DA(lc, player);
}

_extern _sub_5CC243(BuildData *const, SaveGameData *);
BuildData::BuildData(SaveGameData *) // 0x5CC243
{
    mangled_assert("??0BuildData@@QAE@PAVSaveGameData@@@Z");
    todo("implement");
    _sub_5CC243(this, arg);
}

_extern void _sub_5CC634(BuildData *const);
void BuildData::defaultSettings() // 0x5CC634
{
    mangled_assert("?defaultSettings@BuildData@@QAEXXZ");
    todo("implement");
    _sub_5CC634(this);
}

_extern void _sub_5CC69F(BuildData *const);
void BuildData::postRestore() // 0x5CC69F
{
    mangled_assert("?postRestore@BuildData@@UAEXXZ");
    todo("implement");
    _sub_5CC69F(this);
}

_extern bool _sub_5CC6E5(BuildData *const, SaveGameData *);
bool BuildData::restore(SaveGameData *) // 0x5CC6E5
{
    mangled_assert("?restore@BuildData@@UAE_NPAVSaveGameData@@@Z");
    todo("implement");
    bool __result = _sub_5CC6E5(this, arg);
    return __result;
}

_extern bool _sub_5CC732(BuildData *const, SaveGameData *, SaveType);
bool BuildData::save(SaveGameData *, SaveType) // 0x5CC732
{
    mangled_assert("?save@BuildData@@UAE_NPAVSaveGameData@@W4SaveType@@@Z");
    todo("implement");
    bool __result = _sub_5CC732(this, arg, arg);
    return __result;
}

/* ---------- private code */
#endif
