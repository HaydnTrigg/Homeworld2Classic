#if 0
/* ---------- headers */

#include "decomp.h"
#include <Collision\BVH\Internal\span_i.h>
#include <Collision\BVH\proxy.h>
#include <assist\stlexsmallvector.h>
#include <Collision\intersect.h>
#include <xstring>
#include <Collision\primitivesfwd.h>
#include <xmemory0>
#include <pch.h>
#include <Interpolation.h>
#include <Mathlib\matrix3.h>
#include <Collision\Primitives\aabb.h>
#include <new>
#include <numeric>
#include <xstddef>
#include <sobid.h>
#include <type_traits>
#include <xutility>
#include <utility>
#include <iosfwd>
#include <vector>
#include <xmemory>
#include <Universe.h>
#include <Waypoint.h>
#include <SelTarg.h>
#include <list>
#include <SobUnmoveable.h>
#include <prim.h>
#include <sob.h>
#include <sobstatic.h>
#include <Collision\Primitives\sphere.h>
#include <Mathlib\vector3.h>
#include <Mathlib\vector4.h>
#include <util\statmonitor.h>
#include <Collision\Primitives\capsule.h>
#include <util\utilexports.h>
#include <Collision\Primitives\segment.h>
#include <xtree>
#include <platform\timer.h>
#include <Collision\BVH\profiling.h>
#include <platform\platformexports.h>
#include <boost\scoped_ptr.hpp>
#include <dbdefines.h>
#include <UnitCaps\UnitCaps.h>
#include <Mathlib\vector2.h>
#include <util\types.h>
#include <SOBGroupManager.h>
#include <hash_map>
#include <xhash>
#include <boost\cstdint.hpp>
#include <Mathlib\quat.h>
#include <Collision\Primitives\obb.h>
#include <MultiplierContainer.h>
#include <visibility.h>
#include <MultiplierTypes.h>
#include <Collision\BVH\bvh.h>
#include <pathpoints.h>
#include <debug\db.h>
#include <HyperspaceManager.h>
#include <SquadronList.h>
#include <util\colour.h>
#include <boost\shared_ptr.hpp>
#include <sobtypes.h>
#include <boost\throw_exception.hpp>
#include <selection.h>
#include <savegamedef.h>
#include <boost\detail\shared_count.hpp>
#include <boost\detail\lwm_win32.hpp>
#include <fixedpoint.h>
#include <util\fixed.h>
#include <Network\SimSpeedController.h>
#include <Network\LagLogic.h>
#include <seInterface2\PatchID.h>
#include <wchar.h>
#include <seInterface2\PatchBase.h>
#include <GameObj.h>
#include <seInterface2\SoundParams.h>
#include <config.h>
#include <task.h>
#include <stack>
#include <Collision\BVH\octree.h>
#include <Collision\BVH\span.h>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- private variables */

_static
{
    extern float PERIOD_MIN; // 0x846D8C
    extern float PERIOD_MAX; // 0x846D90
}

/* ---------- public code */

SimSpeedController::SimSpeedController() // 0x5BFCFF
{
    mangled_assert("??0SimSpeedController@@QAE@XZ");
    todo("implement");
}

SimSpeedController::~SimSpeedController() // 0x5BFD42
{
    mangled_assert("??1SimSpeedController@@QAE@XZ");
    todo("implement");
}

void SimSpeedController::CalculateTargetQueueSize(__int32) // 0x5BFD43
{
    mangled_assert("?CalculateTargetQueueSize@SimSpeedController@@AAEXH@Z");
    todo("implement");
}

void SimSpeedController::ResetHistory() // 0x5BFD96
{
    mangled_assert("?ResetHistory@SimSpeedController@@AAEXXZ");
    todo("implement");
}

void SimSpeedController::Update(__int32, __int32) // 0x5BFDA6
{
    mangled_assert("?Update@SimSpeedController@@QAEXHH@Z");
    todo("implement");
}

/* ---------- private code */
#endif
