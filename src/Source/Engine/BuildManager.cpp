#if 0
/* ---------- headers */

#include "decomp.h"
#include <BuildQueue.h>
#include <assist\stlexsmallvector.h>
#include <xstring>
#include <xmemory0>
#include <Mathlib\matrix4.h>
#include <pch.h>
#include <Mathlib\matrix3.h>
#include <Race.h>
#include <TeamColourRegistry.h>
#include <savegame.h>
#include <MeshAnimation.h>
#include <task.h>
#include <ShieldTypes.h>
#include <stack>
#include <new>
#include <exception>
#include <xstddef>
#include <type_traits>
#include <SobWithMeshStatic.h>
#include <luaconfig\luabinding.h>
#include <ship.h>
#include <luaconfig\luaconfig.h>
#include <SobWithMesh.h>
#include <Subsystems\HardPointManager.h>
#include <lua.h>
#include <SobRigidBody.h>
#include <Subsystems\HardPoint.h>
#include <sob.h>
#include <Subsystems\HardPointStatic.h>
#include <sobstatic.h>
#include <SobRigidBodyStatic.h>
#include <Subsystems\SubSystemType.h>
#include <xutility>
#include <Collision\Primitives\sphere.h>
#include <HyperspaceManager.h>
#include <utility>
#include <iosfwd>
#include <vector>
#include <playerresourcetype.h>
#include <xmemory>
#include <scripting.h>
#include <scriptaccess.h>
#include <scripttypedef.h>
#include <fixedpoint.h>
#include <util\fixed.h>
#include <Collision\BVH\octree.h>
#include <Collision\BVH\span.h>
#include <list>
#include <Collision\BVH\Internal\span_i.h>
#include <SoundManager\SoundEntityHandle.h>
#include <Universe.h>
#include <Collision\BVH\proxy.h>
#include <Waypoint.h>
#include <ResearchManager.h>
#include <Collision\intersect.h>
#include <SobUnmoveable.h>
#include <Collision\primitivesfwd.h>
#include <Mathlib\vector3.h>
#include <Mathlib\vector4.h>
#include <map>
#include <xtree>
#include <boost\scoped_ptr.hpp>
#include <Interpolation.h>
#include <dbdefines.h>
#include <UnitCaps\UnitCaps.h>
#include <Collision\Primitives\aabb.h>
#include <Mathlib\vector2.h>
#include <Collision\Primitives\obb.h>
#include <util\types.h>
#include <platform\cmdline.h>
#include <boost\cstdint.hpp>
#include <Mathlib\quat.h>
#include <SelTarg.h>
#include <prim.h>
#include <abilities.h>
#include <savegameimpl.h>
#include <pathpoints.h>
#include <Collision\Primitives\capsule.h>
#include <debug\db.h>
#include <Collision\Primitives\segment.h>
#include <Collision\BVH\profiling.h>
#include <profile\profile.h>
#include <iostream>
#include <util\colour.h>
#include <boost\shared_ptr.hpp>
#include <sobtypes.h>
#include <boost\throw_exception.hpp>
#include <selection.h>
#include <BuildData.h>
#include <seInterface2\PatchID.h>
#include <savegamedef.h>
#include <DependencyData.h>
#include <seInterface2\PatchBase.h>
#include <seInterface2\SoundParams.h>
#include <boost\detail\shared_count.hpp>
#include <boost\detail\lwm_win32.hpp>
#include <Player.h>
#include <platform\timer.h>
#include <SquadronList.h>
#include <platform\platformexports.h>
#include <MultiplierContainer.h>
#include <visibility.h>
#include <BuildManager.h>
#include <MultiplierTypes.h>
#include <Collision\BVH\bvh.h>
#include <wchar.h>
#include <weaponinfo.h>
#include <string>
#include <SOBGroupManager.h>
#include <hash_map>
#include <sobid.h>
#include <xhash>
#include <Modifiers\ModifierTargetCache.h>
#include <algorithm>

/* ---------- constants */

/* ---------- definitions */

class ByIDSearch
{
public:
    _inline ByIDSearch(unsigned __int32);
    bool operator()(BuildData *);
private:
    unsigned __int32 m_unitId; // 0x0
};
static_assert(sizeof(ByIDSearch) == 4, "Invalid ByIDSearch size");

/* ---------- prototypes */

/* ---------- globals */

extern char const BuildManager::m_saveToken[13]; // 0x7A7830
extern SaveData const BuildManager::m_saveData[3]; // 0x7A7840

/* ---------- private variables */

/* ---------- public code */

_extern bool _sub_5CCE09(ByIDSearch *const, BuildData *);
_inline bool ByIDSearch::operator()(BuildData *) // 0x5CCE09
{
    mangled_assert("??RByIDSearch@@QAE_NPAVBuildData@@@Z");
    todo("implement");
    bool __result = _sub_5CCE09(this, arg);
    return __result;
}

_extern _sub_5CCC73(BuildManager *const, Player *);
BuildManager::BuildManager(Player *) // 0x5CCC73
{
    mangled_assert("??0BuildManager@@QAE@PAVPlayer@@@Z");
    todo("implement");
    _sub_5CCC73(this, arg);
}

_extern void _sub_5CCCFC(std::_List_buy<BuildData *,std::allocator<BuildData *> > *const);
_inline std::_List_buy<BuildData *,std::allocator<BuildData *> >::~_List_buy<BuildData *,std::allocator<BuildData *> >() // 0x5CCCFC
{
    mangled_assert("??1?$_List_buy@PAVBuildData@@V?$allocator@PAVBuildData@@@std@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_5CCCFC(this);
}

_extern void _sub_5CCD17(BuildManager *const);
BuildManager::~BuildManager() // 0x5CCD17
{
    mangled_assert("??1BuildManager@@UAE@XZ");
    todo("implement");
    _sub_5CCD17(this);
}

_extern void _sub_5CCEBA(BuildManager *const, char *);
void BuildManager::LoadScripts(char *) // 0x5CCEBA
{
    mangled_assert("?LoadScripts@BuildManager@@QAEXPAD@Z");
    todo("implement");
    _sub_5CCEBA(this, arg);
}

_extern void _sub_5CCE37(BuildManager *const, BuildData *);
void BuildManager::AddBuildItem(BuildData *) // 0x5CCE37
{
    mangled_assert("?AddBuildItem@BuildManager@@QAEXPAVBuildData@@@Z");
    todo("implement");
    _sub_5CCE37(this, arg);
}

_extern bool _sub_5CD18E(BuildManager const *const, BuildData *);
bool BuildManager::canBuild(BuildData *) const // 0x5CD18E
{
    mangled_assert("?canBuild@BuildManager@@QBE_NPAVBuildData@@@Z");
    todo("implement");
    bool __result = _sub_5CD18E(this, arg);
    return __result;
}

_extern bool _sub_5CCE98(BuildManager *const, unsigned __int32);
bool BuildManager::IsRestricted(unsigned __int32) // 0x5CCE98
{
    mangled_assert("?IsRestricted@BuildManager@@QAE_NI@Z");
    todo("implement");
    bool __result = _sub_5CCE98(this, arg);
    return __result;
}

_extern bool _sub_5CD1B6(BuildManager const *const, unsigned __int32);
bool BuildManager::canBuildDisplayFamily(unsigned __int32) const // 0x5CD1B6
{
    mangled_assert("?canBuildDisplayFamily@BuildManager@@QBE_NI@Z");
    todo("implement");
    bool __result = _sub_5CD1B6(this, arg);
    return __result;
}

_extern bool _sub_5CCFE1(BuildManager *const, unsigned __int32);
bool BuildManager::Restrict(unsigned __int32) // 0x5CCFE1
{
    mangled_assert("?Restrict@BuildManager@@QAE_NI@Z");
    todo("implement");
    bool __result = _sub_5CCFE1(this, arg);
    return __result;
}

_extern bool _sub_5CD044(BuildManager *const, unsigned __int32);
bool BuildManager::Unrestrict(unsigned __int32) // 0x5CD044
{
    mangled_assert("?Unrestrict@BuildManager@@QAE_NI@Z");
    todo("implement");
    bool __result = _sub_5CD044(this, arg);
    return __result;
}

_extern bool _sub_5CD034(BuildManager *const);
bool BuildManager::UIBuildListChangedSinceLastCheck() // 0x5CD034
{
    mangled_assert("?UIBuildListChangedSinceLastCheck@BuildManager@@QAE_NXZ");
    todo("implement");
    bool __result = _sub_5CD034(this);
    return __result;
}

_extern void _sub_5CCE6B(BuildManager *const);
void BuildManager::BuildListsChanged() // 0x5CCE6B
{
    mangled_assert("?BuildListsChanged@BuildManager@@AAEXXZ");
    todo("implement");
    _sub_5CCE6B(this);
}

_extern BuildData const *_sub_5CCE70(BuildManager *const, unsigned __int32);
BuildData const *BuildManager::GetBuildData(unsigned __int32) // 0x5CCE70
{
    mangled_assert("?GetBuildData@BuildManager@@QAEPBVBuildData@@I@Z");
    todo("implement");
    BuildData const * __result = _sub_5CCE70(this, arg);
    return __result;
}

_extern void _sub_5CD28B(BuildManager *const);
void BuildManager::postRestore() // 0x5CD28B
{
    mangled_assert("?postRestore@BuildManager@@UAEXXZ");
    todo("implement");
    _sub_5CD28B(this);
}

_extern bool _sub_5CD29E(BuildManager *const, SaveGameData *);
bool BuildManager::restore(SaveGameData *) // 0x5CD29E
{
    mangled_assert("?restore@BuildManager@@UAE_NPAVSaveGameData@@@Z");
    todo("implement");
    bool __result = _sub_5CD29E(this, arg);
    return __result;
}

_extern bool _sub_5CD2DC(BuildManager *const, SaveGameData *, SaveType);
bool BuildManager::save(SaveGameData *, SaveType) // 0x5CD2DC
{
    mangled_assert("?save@BuildManager@@UAE_NPAVSaveGameData@@W4SaveType@@@Z");
    todo("implement");
    bool __result = _sub_5CD2DC(this, arg, arg);
    return __result;
}

/* ---------- private code */
#endif
