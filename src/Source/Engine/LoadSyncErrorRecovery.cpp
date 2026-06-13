#if 0
/* ---------- headers */

#include "decomp.h"
#include <platform\timer.h>
#include <assist\stlexsmallvector.h>
#include <platform\platformexports.h>
#include <xstring>
#include <xmemory0>
#include <Mathlib\matrix4.h>
#include <pch.h>
#include <savestream.h>
#include <Collision\Primitives\obb.h>
#include <Collision\BVH\octree.h>
#include <CameraCommand.h>
#include <Collision\BVH\span.h>
#include <CameraHW.h>
#include <Mathlib\matrix3.h>
#include <Collision\BVH\Internal\span_i.h>
#include <Camera\CameraOrbitTarget.h>
#include <Collision\BVH\proxy.h>
#include <Camera\Camera.h>
#include <Collision\intersect.h>
#include <Camera\Frustum.h>
#include <Collision\primitivesfwd.h>
#include <Camera\Plane3.h>
#include <new>
#include <xstddef>
#include <type_traits>
#include <Interpolation.h>
#include <xutility>
#include <utility>
#include <iosfwd>
#include <Collision\Primitives\aabb.h>
#include <vector>
#include <fileio\bytestream.h>
#include <xmemory>
#include <sobid.h>
#include <GameObj.h>
#include <config.h>
#include <list>
#include <util\statmonitor.h>
#include <util\utilexports.h>
#include <Mathlib\vector3.h>
#include <Mathlib\vector4.h>
#include <map>
#include <xtree>
#include <boost\scoped_ptr.hpp>
#include <seInterface2\PatchID.h>
#include <SelTarg.h>
#include <seInterface2\PatchBase.h>
#include <prim.h>
#include <seInterface2\SoundParams.h>
#include <Mathlib\vector2.h>
#include <util\types.h>
#include <Collision\Primitives\capsule.h>
#include <Collision\Primitives\segment.h>
#include <boost\cstdint.hpp>
#include <Collision\BVH\profiling.h>
#include <fixedpoint.h>
#include <util\fixed.h>
#include <savegame.h>
#include <profile\profile.h>
#include <dbdefines.h>
#include <iostream>
#include <Mathlib\quat.h>
#include <UnitCaps\UnitCaps.h>
#include <SOBGroupManager.h>
#include <hash_map>
#include <xhash>
#include <MultiplierContainer.h>
#include <visibility.h>
#include <savegamedata.h>
#include <MultiplierTypes.h>
#include <Collision\BVH\bvh.h>
#include <pathpoints.h>
#include <debug\db.h>
#include <boost\shared_ptr.hpp>
#include <util\colour.h>
#include <sobtypes.h>
#include <boost\throw_exception.hpp>
#include <Universe.h>
#include <selection.h>
#include <savegamedef.h>
#include <Waypoint.h>
#include <SobUnmoveable.h>
#include <boost\detail\shared_count.hpp>
#include <sob.h>
#include <sobstatic.h>
#include <boost\detail\lwm_win32.hpp>
#include <Collision\Primitives\sphere.h>
#include <HyperspaceManager.h>
#include <SquadronList.h>
#include <Camera\OrbitParameters.h>
#include <Stats\StatLogging.h>
#include <LoadSyncErrorRecovery.h>
#include <task.h>
#include <wchar.h>
#include <stack>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

extern LoadSyncErrorRecovery *LoadSyncErrorRecovery::ms_instance; // 0x848B20

/* ---------- private variables */

/* ---------- public code */

_extern _sub_604585(LoadSyncErrorRecovery *const);
LoadSyncErrorRecovery::LoadSyncErrorRecovery() // 0x604585
{
    mangled_assert("??0LoadSyncErrorRecovery@@QAE@XZ");
    todo("implement");
    _sub_604585(this);
}

_extern void _sub_6045D3(LoadSyncErrorRecovery *const);
LoadSyncErrorRecovery::~LoadSyncErrorRecovery() // 0x6045D3
{
    mangled_assert("??1LoadSyncErrorRecovery@@UAE@XZ");
    todo("implement");
    _sub_6045D3(this);
}

_extern LoadSyncErrorRecovery *_sub_6046A1();
LoadSyncErrorRecovery *LoadSyncErrorRecovery::instance() // 0x6046A1
{
    mangled_assert("?instance@LoadSyncErrorRecovery@@SGPAV1@XZ");
    todo("implement");
    LoadSyncErrorRecovery * __result = _sub_6046A1();
    return __result;
}

_extern void _sub_6046E5();
void LoadSyncErrorRecovery::release() // 0x6046E5
{
    mangled_assert("?release@LoadSyncErrorRecovery@@SGXXZ");
    todo("implement");
    _sub_6046E5();
}

_extern SaveGameData *_sub_604655(LoadSyncErrorRecovery *const);
SaveGameData *LoadSyncErrorRecovery::createSaveGameData() // 0x604655
{
    mangled_assert("?createSaveGameData@LoadSyncErrorRecovery@@QAEPAVSaveGameData@@XZ");
    todo("implement");
    SaveGameData * __result = _sub_604655(this);
    return __result;
}

_extern bool _sub_6046E1(LoadSyncErrorRecovery *const);
bool LoadSyncErrorRecovery::isFinished() // 0x6046E1
{
    mangled_assert("?isFinished@LoadSyncErrorRecovery@@QAE_NXZ");
    todo("implement");
    bool __result = _sub_6046E1(this);
    return __result;
}

_extern __int32 _sub_6046FD(LoadSyncErrorRecovery *const, float);
__int32 LoadSyncErrorRecovery::taskFunction(float) // 0x6046FD
{
    mangled_assert("?taskFunction@LoadSyncErrorRecovery@@UAEHM@Z");
    todo("implement");
    __int32 __result = _sub_6046FD(this, arg);
    return __result;
}

/* ---------- private code */
#endif
