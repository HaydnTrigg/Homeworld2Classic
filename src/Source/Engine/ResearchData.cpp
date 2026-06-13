#if 0
/* ---------- headers */

#include "decomp.h"
#include <Collision\BVH\Internal\span_i.h>
#include <SobWithMeshStatic.h>
#include <Collision\BVH\proxy.h>
#include <assist\stlexsmallvector.h>
#include <Collision\intersect.h>
#include <ship.h>
#include <xstring>
#include <Collision\primitivesfwd.h>
#include <SobWithMesh.h>
#include <Subsystems\HardPointManager.h>
#include <xmemory0>
#include <seInterface2\PatchID.h>
#include <SobRigidBody.h>
#include <Mathlib\matrix4.h>
#include <Subsystems\HardPoint.h>
#include <pch.h>
#include <seInterface2\PatchBase.h>
#include <Subsystems\HardPointStatic.h>
#include <seInterface2\SoundParams.h>
#include <SobRigidBodyStatic.h>
#include <Subsystems\SubSystemType.h>
#include <Player.h>
#include <GameEventSys.h>
#include <SquadronList.h>
#include <Mathlib\matrix3.h>
#include <Collision\Primitives\aabb.h>
#include <new>
#include <exception>
#include <SoundManager\SoundEntityHandle.h>
#include <xstddef>
#include <type_traits>
#include <App\Hw2Identify.h>
#include <xutility>
#include <utility>
#include <iosfwd>
#include <vector>
#include <xmemory>
#include <TeamColourRegistry.h>
#include <savegame.h>
#include <task.h>
#include <stack>
#include <math.h>
#include <fixedpoint.h>
#include <util\fixed.h>
#include <Modifiers\ModifierUIInfo.h>
#include <list>
#include <Modifiers\ModifierMultiplier.h>
#include <Modifiers\ModifierEffect.h>
#include <BuildManager.h>
#include <Interpolation.h>
#include <Mathlib\vector3.h>
#include <platform\timer.h>
#include <Mathlib\vector4.h>
#include <playerresourcetype.h>
#include <platform\platformexports.h>
#include <Collision\Primitives\capsule.h>
#include <Collision\Primitives\segment.h>
#include <config.h>
#include <xtree>
#include <Universe.h>
#include <Collision\BVH\profiling.h>
#include <Modifiers\ModifierApplier.h>
#include <boost\scoped_ptr.hpp>
#include <Waypoint.h>
#include <SobUnmoveable.h>
#include <sob.h>
#include <sobstatic.h>
#include <localizer\localizer.h>
#include <sobid.h>
#include <Collision\Primitives\sphere.h>
#include <weaponstaticinfo.h>
#include <Mathlib\vector2.h>
#include <SOBGroupManager.h>
#include <GunBinding.h>
#include <hash_map>
#include <util\types.h>
#include <xhash>
#include <boost\cstdint.hpp>
#include <abilities.h>
#include <ResearchManager.h>
#include <Mathlib\quat.h>
#include <WeaponClassSpecificInfo.h>
#include <SelTarg.h>
#include <visibility.h>
#include <prim.h>
#include <Collision\BVH\bvh.h>
#include <Race.h>
#include <assist\typemagic.h>
#include <Collision\Primitives\obb.h>
#include <savegameimpl.h>
#include <pathpoints.h>
#include <ITweak.h>
#include <debug\db.h>
#include <Tactics.h>
#include <HyperspaceManager.h>
#include <weaponinfo.h>
#include <util\colour.h>
#include <boost\shared_ptr.hpp>
#include <Modifiers\ModifierTargetCache.h>
#include <sobtypes.h>
#include <boost\throw_exception.hpp>
#include <selection.h>
#include <Modifiers\ModifierAbility.h>
#include <savegamedef.h>
#include <boost\detail\shared_count.hpp>
#include <shipstatic.h>
#include <FamilyListMgr.h>
#include <commandtype.h>
#include <FamilyList.h>
#include <boost\detail\lwm_win32.hpp>
#include <Family.h>
#include <MultiplierContainer.h>
#include <GameEventDefs.h>
#include <ResearchData.h>
#include <MultiplierTypes.h>
#include <DependencyData.h>
#include <wchar.h>
#include <string>
#include <dbdefines.h>
#include <UnitCaps\UnitCaps.h>
#include <MeshAnimation.h>
#include <luaconfig\luabinding.h>
#include <ShieldTypes.h>
#include <luaconfig\luaconfig.h>
#include <lua.h>
#include <Collision\BVH\octree.h>
#include <Collision\BVH\span.h>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

extern char const ResearchData::m_saveToken[0]; // 0x798748
extern SaveData const ResearchData::m_saveData[16]; // 0x798758

/* ---------- private variables */

/* ---------- public code */

_extern _sub_4ED051(ResearchData *const);
ResearchData::ResearchData() // 0x4ED051
{
    mangled_assert("??0ResearchData@@AAE@XZ");
    todo("implement");
    _sub_4ED051(this);
}

_extern void _sub_4ED13A(ResearchData *const);
ResearchData::~ResearchData() // 0x4ED13A
{
    mangled_assert("??1ResearchData@@UAE@XZ");
    todo("implement");
    _sub_4ED13A(this);
}

_extern void _sub_4ED327(LuaConfig &, Player *);
void ResearchData::CreateResearchData(LuaConfig &lc, Player *pOwner) // 0x4ED327
{
    mangled_assert("?CreateResearchData@ResearchData@@SGXAAVLuaConfig@@PAVPlayer@@@Z");
    todo("implement");
    _sub_4ED327(lc, pOwner);
}

_extern bool _sub_4ED9F0(ResearchData *const, float);
bool ResearchData::update(float) // 0x4ED9F0
{
    mangled_assert("?update@ResearchData@@QAE_NM@Z");
    todo("implement");
    bool __result = _sub_4ED9F0(this, arg);
    return __result;
}

_extern void _sub_4ED9BC(ResearchData *const, float);
void ResearchData::startResearch(float) // 0x4ED9BC
{
    mangled_assert("?startResearch@ResearchData@@QAEXM@Z");
    todo("implement");
    _sub_4ED9BC(this, arg);
}

_extern void _sub_4ED7A5(ResearchData *const);
void ResearchData::cancelResearch() // 0x4ED7A5
{
    mangled_assert("?cancelResearch@ResearchData@@QAEXXZ");
    todo("implement");
    _sub_4ED7A5(this);
}

_extern void _sub_4ED8E8(ResearchData *const);
void ResearchData::instantlyCompleteResearch() // 0x4ED8E8
{
    mangled_assert("?instantlyCompleteResearch@ResearchData@@QAEXXZ");
    todo("implement");
    _sub_4ED8E8(this);
}

_extern bool _sub_4ED1CE(ResearchData *const);
bool ResearchData::ApplyUpgrade() // 0x4ED1CE
{
    mangled_assert("?ApplyUpgrade@ResearchData@@AAE_NXZ");
    todo("implement");
    bool __result = _sub_4ED1CE(this);
    return __result;
}

_extern void _sub_4ED267(ResearchData *const, Ship *);
void ResearchData::ApplyUpgradeToShip(Ship *) // 0x4ED267
{
    mangled_assert("?ApplyUpgradeToShip@ResearchData@@QAEXPAVShip@@@Z");
    todo("implement");
    _sub_4ED267(this, arg);
}

_extern bool _sub_4ED834(ResearchData *const, Ship *);
bool ResearchData::doWeUpgradeThisShip(Ship *) // 0x4ED834
{
    mangled_assert("?doWeUpgradeThisShip@ResearchData@@QAE_NPAVShip@@@Z");
    todo("implement");
    bool __result = _sub_4ED834(this, arg);
    return __result;
}

_extern bool _sub_4ED908(ResearchData const *const);
bool ResearchData::isRestricted() const // 0x4ED908
{
    mangled_assert("?isRestricted@ResearchData@@QBE_NXZ");
    todo("implement");
    bool __result = _sub_4ED908(this);
    return __result;
}

_extern _sub_4ED0BF(ResearchData *const, SaveGameData *);
ResearchData::ResearchData(SaveGameData *) // 0x4ED0BF
{
    mangled_assert("??0ResearchData@@QAE@PAVSaveGameData@@@Z");
    todo("implement");
    _sub_4ED0BF(this, arg);
}

_extern void _sub_4ED133(GameEvent_Research *const);
_inline GameEvent_Research::~GameEvent_Research() // 0x4ED133
{
    mangled_assert("??1GameEvent_Research@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_4ED133(this);
}

_extern void _sub_4ED7EE(ResearchData *const);
void ResearchData::defaultSettings() // 0x4ED7EE
{
    mangled_assert("?defaultSettings@ResearchData@@QAEXXZ");
    todo("implement");
    _sub_4ED7EE(this);
}

_extern void _sub_4ED90C(ResearchData *const);
void ResearchData::postRestore() // 0x4ED90C
{
    mangled_assert("?postRestore@ResearchData@@UAEXXZ");
    todo("implement");
    _sub_4ED90C(this);
}

_extern bool _sub_4ED922(ResearchData *const, SaveGameData *);
bool ResearchData::restore(SaveGameData *) // 0x4ED922
{
    mangled_assert("?restore@ResearchData@@UAE_NPAVSaveGameData@@@Z");
    todo("implement");
    bool __result = _sub_4ED922(this, arg);
    return __result;
}

_extern bool _sub_4ED96F(ResearchData *const, SaveGameData *, SaveType);
bool ResearchData::save(SaveGameData *, SaveType) // 0x4ED96F
{
    mangled_assert("?save@ResearchData@@UAE_NPAVSaveGameData@@W4SaveType@@@Z");
    todo("implement");
    bool __result = _sub_4ED96F(this, arg, arg);
    return __result;
}

/* ---------- private code */
#endif
