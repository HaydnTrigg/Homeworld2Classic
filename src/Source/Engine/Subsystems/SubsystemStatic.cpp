#if 0
/* ---------- headers */

#include "decomp.h"
#include <Player.h>
#include <SquadronList.h>
#include <assist\stlexsmallvector.h>
#include <xstring>
#include <Subsystems\HardPointManager.h>
#include <xmemory0>
#include <Mathlib\matrix4.h>
#include <Subsystems\HardPoint.h>
#include <pch.h>
#include <Subsystems\HardPointStatic.h>
#include <abilities.h>
#include <MultiplierContainer.h>
#include <WeaponClassSpecificInfo.h>
#include <Mathlib\matrix3.h>
#include <new>
#include <exception>
#include <Race.h>
#include <xstddef>
#include <type_traits>
#include <Collision\BVH\octree.h>
#include <HyperspaceManager.h>
#include <Collision\Primitives\obb.h>
#include <Collision\BVH\span.h>
#include <Collision\BVH\Internal\span_i.h>
#include <Collision\BVH\proxy.h>
#include <Collision\intersect.h>
#include <Collision\primitivesfwd.h>
#include <xutility>
#include <utility>
#include <iosfwd>
#include <BuildManager.h>
#include <vector>
#include <sctObjectLoad.h>
#include <fileio\bytestream.h>
#include <xmemory>
#include <fileio\fileioexports.h>
#include <Universe.h>
#include <Waypoint.h>
#include <SobUnmoveable.h>
#include <Modifiers\ModifierAbility.h>
#include <Modifiers\ModifierTargetCache.h>
#include <Collision\Primitives\aabb.h>
#include <list>
#include <SobWithMeshStatic.h>
#include <Mathlib\vector3.h>
#include <SobRigidBodyStatic.h>
#include <Mathlib\vector4.h>
#include <dbdefines.h>
#include <fixedpoint.h>
#include <UnitCaps\UnitCaps.h>
#include <util\fixed.h>
#include <map>
#include <xtree>
#include <boost\scoped_ptr.hpp>
#include <scripting.h>
#include <scriptaccess.h>
#include <scripttypedef.h>
#include <Mathlib\vector2.h>
#include <util\types.h>
#include <ResearchManager.h>
#include <lua.h>
#include <MultiplierTypes.h>
#include <boost\cstdint.hpp>
#include <seInterface2\PatchID.h>
#include <seInterface2\PatchBase.h>
#include <seInterface2\SoundParams.h>
#include <Interpolation.h>
#include <Mathlib\quat.h>
#include <Collision\Primitives\capsule.h>
#include <ship.h>
#include <Collision\Primitives\segment.h>
#include <SobWithMesh.h>
#include <Collision\BVH\profiling.h>
#include <SobRigidBody.h>
#include <sob.h>
#include <platform\sysutilinterface.h>
#include <sobid.h>
#include <weaponinfo.h>
#include <playerresourcetype.h>
#include <App\Hw2Identify.h>
#include <pathpoints.h>
#include <debug\db.h>
#include <SoundManager\SoundEntityHandle.h>
#include <Subsystems\SubSystemType.h>
#include <SelTarg.h>
#include <visibility.h>
#include <prim.h>
#include <util\colour.h>
#include <boost\shared_ptr.hpp>
#include <Collision\BVH\bvh.h>
#include <Modifiers\ModifierUIInfo.h>
#include <sobtypes.h>
#include <boost\throw_exception.hpp>
#include <platform\timer.h>
#include <selection.h>
#include <platform\platformexports.h>
#include <Modifiers\ModifierMultiplier.h>
#include <savegamedef.h>
#include <Modifiers\ModifierEffect.h>
#include <boost\detail\shared_count.hpp>
#include <boost\detail\lwm_win32.hpp>
#include <TeamColourRegistry.h>
#include <Modifiers\ModifierApplier.h>
#include <savegame.h>
#include <task.h>
#include <stack>
#include <SOBGroupManager.h>
#include <hash_map>
#include <fileio\filepath.h>
#include <xhash>
#include <weaponstaticinfo.h>
#include <GunBinding.h>
#include <MADState.h>
#include <Subsystems\SubsystemStatic.h>
#include <luaconfig\luabinding.h>
#include <sobstatic.h>
#include <wchar.h>
#include <luaconfig\luaconfig.h>
#include <Collision\Primitives\sphere.h>
#include <ShieldTypes.h>
#include <MeshAnimation.h>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

extern SubSystemStatic *gNewSubSystemStatic; // 0x8440EC

/* ---------- private variables */

/* ---------- public code */

_extern _sub_4F15C9(SubSystemStatic *const, std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &, SobType);
SubSystemStatic::SubSystemStatic(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &, SobType) // 0x4F15C9
{
    mangled_assert("??0SubSystemStatic@@IAE@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4SobType@@@Z");
    todo("implement");
    _sub_4F15C9(this, arg, arg);
}

_extern void _sub_4F16E1(SubSystemStatic *const);
SubSystemStatic::~SubSystemStatic() // 0x4F16E1
{
    mangled_assert("??1SubSystemStatic@@UAE@XZ");
    todo("implement");
    _sub_4F16E1(this);
}

_extern SobStatic *_sub_4F1767(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &, SobStatic *);
SobStatic *SubSystemStatic::Create(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &name, SobStatic *found) // 0x4F1767
{
    mangled_assert("?Create@SubSystemStatic@@SGPAVSobStatic@@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAV2@@Z");
    todo("implement");
    SobStatic * __result = _sub_4F1767(name, found);
    return __result;
}

_extern bool _sub_4F17D1(SubSystemStatic *const, std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &);
bool SubSystemStatic::Load(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &) // 0x4F17D1
{
    mangled_assert("?Load@SubSystemStatic@@QAE_NABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z");
    todo("implement");
    bool __result = _sub_4F17D1(this, arg);
    return __result;
}

_extern __int32 _sub_4F1936(lua_State *);
__int32 SubSystemStatic::StartSubSystemConfig(lua_State *lstate) // 0x4F1936
{
    mangled_assert("?StartSubSystemConfig@SubSystemStatic@@SGHPAUlua_State@@@Z");
    todo("implement");
    __int32 __result = _sub_4F1936(lstate);
    return __result;
}

/* ---------- private code */
#endif
