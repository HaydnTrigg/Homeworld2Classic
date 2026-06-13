#if 0
/* ---------- headers */

#include "decomp.h"
#include <lua.h>
#include <assist\stlexsmallvector.h>
#include <ResearchManager.h>
#include <xstring>
#include <xmemory0>
#include <Mathlib\matrix4.h>
#include <pch.h>
#include <ResearchData.h>
#include <DependencyData.h>
#include <Parade.h>
#include <hash_map>
#include <xhash>
#include <Mathlib\matrix3.h>
#include <Tactics.h>
#include <SelTarg.h>
#include <prim.h>
#include <new>
#include <Universe.h>
#include <exception>
#include <abilities.h>
#include <Waypoint.h>
#include <xstddef>
#include <SobUnmoveable.h>
#include <type_traits>
#include <Collision\Primitives\capsule.h>
#include <Collision\Primitives\segment.h>
#include <Collision\BVH\profiling.h>
#include <sobid.h>
#include <xutility>
#include <utility>
#include <iosfwd>
#include <vector>
#include <fileio\bytestream.h>
#include <xmemory>
#include <fileio\fileioexports.h>
#include <seInterface2\PatchID.h>
#include <seInterface2\PatchBase.h>
#include <seInterface2\SoundParams.h>
#include <Stats\StatLogging.h>
#include <HyperspaceManager.h>
#include <list>
#include <assist\fixedstring.h>
#include <App\Hw2Identify.h>
#include <Mathlib\vector3.h>
#include <Race.h>
#include <visibility.h>
#include <Mathlib\vector4.h>
#include <MultiplierContainer.h>
#include <Collision\BVH\bvh.h>
#include <MultiplierTypes.h>
#include <weaponinfo.h>
#include <map>
#include <xtree>
#include <stack>
#include <boost\scoped_ptr.hpp>
#include <Modifiers\ModifierTargetCache.h>
#include <Modifiers\ModifierUIInfo.h>
#include <Modifiers\ModifierMultiplier.h>
#include <ParadeCommand.h>
#include <Modifiers\ModifierEffect.h>
#include <commandtype.h>
#include <OrderFeedback.h>
#include <Mathlib\vector2.h>
#include <Squadron.h>
#include <command.h>
#include <util\types.h>
#include <playerresourcetype.h>
#include <dbdefines.h>
#include <config.h>
#include <boost\cstdint.hpp>
#include <UnitCaps\UnitCaps.h>
#include <Modifiers\ModifierApplier.h>
#include <Player.h>
#include <SquadronList.h>
#include <shipstatic.h>
#include <fixedpoint.h>
#include <weaponstaticinfo.h>
#include <util\fixed.h>
#include <GunBinding.h>
#include <Mathlib\quat.h>
#include <MeshAnimation.h>
#include <ShieldTypes.h>
#include <SobWithMeshStatic.h>
#include <Subsystems\HardPointManager.h>
#include <ship.h>
#include <Subsystems\HardPoint.h>
#include <SobWithMesh.h>
#include <Subsystems\HardPointStatic.h>
#include <fileio\logfile.h>
#include <SobRigidBody.h>
#include <SobRigidBodyStatic.h>
#include <Subsystems\SubSystemType.h>
#include <sob.h>
#include <sobstatic.h>
#include <WeaponClassSpecificInfo.h>
#include <Collision\Primitives\sphere.h>
#include <pathpoints.h>
#include <TeamColourRegistry.h>
#include <savegame.h>
#include <debug\db.h>
#include <task.h>
#include <deque>
#include <SOBGroupManager.h>
#include <Collision\BVH\octree.h>
#include <DynamicPoint.h>
#include <Collision\BVH\span.h>
#include <luaconfig\luabinding.h>
#include <Collision\BVH\Internal\span_i.h>
#include <SoundManager\SoundEntityHandle.h>
#include <util\colour.h>
#include <luaconfig\luaconfig.h>
#include <boost\shared_ptr.hpp>
#include <Collision\BVH\proxy.h>
#include <sobtypes.h>
#include <BuildManager.h>
#include <boost\throw_exception.hpp>
#include <Collision\intersect.h>
#include <selection.h>
#include <Collision\primitivesfwd.h>
#include <savegamedef.h>
#include <boost\detail\shared_count.hpp>
#include <boost\detail\lwm_win32.hpp>
#include <Interpolation.h>
#include <Collision\Primitives\aabb.h>
#include <Modifiers\ModifierAbility.h>
#include <platform\cmdline.h>
#include <PlayBalanceStats.h>
#include <Collision\Primitives\obb.h>
#include <platform\timer.h>
#include <wchar.h>
#include <platform\platformexports.h>
#include <string>
#include <campaign.h>
#include <fileio\filepath.h>
#include <scripting.h>
#include <scriptaccess.h>
#include <queue>
#include <scripttypedef.h>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

extern bool PlayBalanceStats::Dump();

/* ---------- globals */

extern char const *PlayBalanceStats::CmdLineOption; // 0x837048

/* ---------- private variables */

/* ---------- public code */

_extern bool _sub_500AF8();
bool PlayBalanceStats::Dump() // 0x500AF8
{
    mangled_assert("?Dump@PlayBalanceStats@@YG_NXZ");
    todo("implement");
    bool __result = _sub_500AF8();
    return __result;
}

/* ---------- private code */
#endif
