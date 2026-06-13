#if 0
/* ---------- headers */

#include "decomp.h"
#include <hash_map>
#include <xhash>
#include <assist\stlexsmallvector.h>
#include <weaponinfo.h>
#include <platform\timer.h>
#include <xstring>
#include <platform\platformexports.h>
#include <xmemory0>
#include <Mathlib\matrix4.h>
#include <pch.h>
#include <Render\gl\r_defines.h>
#include <Render\gl\glext.h>
#include <playerresourcetype.h>
#include <TeamColourRegistry.h>
#include <savegame.h>
#include <task.h>
#include <Mathlib\matrix3.h>
#include <stack>
#include <SobWithMeshStatic.h>
#include <SoundManager\SoundEntityHandle.h>
#include <ship.h>
#include <SobWithMesh.h>
#include <SobRigidBody.h>
#include <new>
#include <sob.h>
#include <exception>
#include <sobstatic.h>
#include <xstddef>
#include <Collision\Primitives\sphere.h>
#include <type_traits>
#include <SobRigidBodyStatic.h>
#include <MeshAnimation.h>
#include <ShieldTypes.h>
#include <xutility>
#include <utility>
#include <iosfwd>
#include <Universe.h>
#include <vector>
#include <fileio\bytestream.h>
#include <Waypoint.h>
#include <xmemory>
#include <fileio\fileioexports.h>
#include <SobUnmoveable.h>
#include <Collision\BVH\octree.h>
#include <Collision\BVH\span.h>
#include <Subsystems\HardPointManager.h>
#include <CPUPlayer\CpuFleetCommand.h>
#include <Collision\BVH\Internal\span_i.h>
#include <Subsystems\HardPoint.h>
#include <luaconfig\luabinding.h>
#include <Collision\BVH\proxy.h>
#include <Subsystems\HardPointStatic.h>
#include <luaconfig\luaconfig.h>
#include <Collision\intersect.h>
#include <Subsystems\SubSystemType.h>
#include <lua.h>
#include <Collision\primitivesfwd.h>
#include <math.h>
#include <list>
#include <Race.h>
#include <assist\fixedstring.h>
#include <ParadeCommand.h>
#include <Interpolation.h>
#include <Mathlib\vector3.h>
#include <commandtype.h>
#include <Mathlib\vector4.h>
#include <OrderFeedback.h>
#include <SquadronList.h>
#include <HyperspaceManager.h>
#include <Collision\Primitives\aabb.h>
#include <xtree>
#include <Collision\Primitives\obb.h>
#include <BuildManager.h>
#include <fileio\logfile.h>
#include <boost\scoped_ptr.hpp>
#include <abilities.h>
#include <CPUPlayer\CpuResourceManager.h>
#include <Mathlib\vector2.h>
#include <util\types.h>
#include <boost\cstdint.hpp>
#include <ShipQuery.h>
#include <Mathlib\mathutil.h>
#include <Mathlib\quat.h>
#include <dbdefines.h>
#include <SelTarg.h>
#include <UnitCaps\UnitCaps.h>
#include <prim.h>
#include <platform\osdef.h>
#include <Player.h>
#include <ResearchManager.h>
#include <Collision\Primitives\capsule.h>
#include <Mathlib\mathlibdll.h>
#include <Collision\Primitives\segment.h>
#include <Mathlib\fastmath.h>
#include <Collision\BVH\profiling.h>
#include <DynamicPoint.h>
#include <Render\objects\debugrender.h>
#include <Modifiers\ModifierTargetCache.h>
#include <Render\objects\core.h>
#include <savegamedata.h>
#include <Render\objects\objects.h>
#include <pathpoints.h>
#include <Render\gl\types.h>
#include <Mathlib\matvec.h>
#include <debug\db.h>
#include <cstdarg>
#include <seInterface2\PatchID.h>
#include <stdarg.h>
#include <deque>
#include <seInterface2\PatchBase.h>
#include <seInterface2\SoundParams.h>
#include <Render\gl\lotypes.h>
#include <fixedpoint.h>
#include <util\fixed.h>
#include <boost\shared_ptr.hpp>
#include <util\colour.h>
#include <sobtypes.h>
#include <boost\throw_exception.hpp>
#include <selection.h>
#include <savegamedef.h>
#include <boost\detail\shared_count.hpp>
#include <Render\gl\r_types.h>
#include <boost\detail\lwm_win32.hpp>
#include <SOBGroupManager.h>
#include <MultiplierContainer.h>
#include <visibility.h>
#include <MultiplierTypes.h>
#include <Collision\BVH\bvh.h>
#include <CPUPlayer\CpuCommon.h>
#include <CPUPlayer\CpuTarget.h>
#include <wchar.h>
#include <Squadron.h>
#include <command.h>
#include <sobid.h>
#include <queue>
#include <Parade.h>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

extern void drawcircleinspace(vector3 const &pos, float const radius, vector4 &col, unsigned __int32 const divs, char const *framename);
extern void drawXinspace(vector3 const &pos, float const radius, vector4 &col, char const *framename);

/* ---------- globals */

extern char const CpuCommon::m_saveToken[0]; // 0x79D918
extern SaveData const CpuCommon::m_saveData[1]; // 0x79D924

/* ---------- private variables */

/* ---------- public code */

_extern void _sub_52DBC7(CpuCommon *const, char const *);
void CpuCommon::aitrace(char const *) // 0x52DBC7
{
    mangled_assert("?aitrace@CpuCommon@@QAEXPBD@Z");
    todo("implement");
    _sub_52DBC7(this, arg);
}

_extern void _sub_52DB25(CpuCommon *const, char const *, ...);
void CpuCommon::aiprintf(char const *format, ...) // 0x52DB25
{
    mangled_assert("?aiprintf@CpuCommon@@QAAXPBDZZ");
    todo("implement");
    _sub_52DB25(this, format, chbuf);
}

_extern void _sub_52DCCF(vector3 const &, float const, vector4 &, unsigned __int32 const, char const *);
void drawcircleinspace(vector3 const &pos, float const radius, vector4 &col, unsigned __int32 const divs, char const *framename) // 0x52DCCF
{
    mangled_assert("?drawcircleinspace@@YGXABVvector3@@MAAVvector4@@IPBD@Z");
    todo("implement");
    _sub_52DCCF(pos, radius, col, divs, framename);
}

_extern void _sub_52DBD6(vector3 const &, float const, vector4 &, char const *);
void drawXinspace(vector3 const &pos, float const radius, vector4 &col, char const *framename) // 0x52DBD6
{
    mangled_assert("?drawXinspace@@YGXABVvector3@@MAAVvector4@@PBD@Z");
    todo("implement");
    _sub_52DBD6(pos, radius, col, framename);
}

_extern void _sub_52DAA3(void *, SaveGameData *, SaveType);
void CpuCommon::saveFleet(void *objectPtr, SaveGameData *saveGameData, SaveType savetype) // 0x52DAA3
{
    mangled_assert("?saveFleet@CpuCommon@@CGXPAXPAVSaveGameData@@W4SaveType@@@Z");
    todo("implement");
    _sub_52DAA3(objectPtr, saveGameData, savetype);
}

_extern void _sub_52DAD4(void *, SaveGameData *);
void CpuCommon::restoreFleet(void *objectPtr, SaveGameData *saveGameData) // 0x52DAD4
{
    mangled_assert("?restoreFleet@CpuCommon@@CGXPAXPAVSaveGameData@@@Z");
    todo("implement");
    _sub_52DAD4(objectPtr, saveGameData);
}

_extern void _sub_52DEC4(CpuCommon *const);
void CpuCommon::postRestore() // 0x52DEC4
{
    mangled_assert("?postRestore@CpuCommon@@UAEXXZ");
    todo("implement");
    _sub_52DEC4(this);
}

_extern bool _sub_52DEC5(CpuCommon *const, SaveGameData *);
bool CpuCommon::restore(SaveGameData *) // 0x52DEC5
{
    mangled_assert("?restore@CpuCommon@@UAE_NPAVSaveGameData@@@Z");
    todo("implement");
    bool __result = _sub_52DEC5(this, arg);
    return __result;
}

_extern bool _sub_52DF03(CpuCommon *const, SaveGameData *, SaveType);
bool CpuCommon::save(SaveGameData *, SaveType) // 0x52DF03
{
    mangled_assert("?save@CpuCommon@@UAE_NPAVSaveGameData@@W4SaveType@@@Z");
    todo("implement");
    bool __result = _sub_52DF03(this, arg, arg);
    return __result;
}

/* ---------- private code */
#endif
