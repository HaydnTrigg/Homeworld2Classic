#if 0
/* ---------- headers */

#include "decomp.h"
#include <Collision\BVH\Internal\span_i.h>
#include <Collision\BVH\proxy.h>
#include <Collision\intersect.h>
#include <xstring>
#include <Collision\primitivesfwd.h>
#include <xmemory0>
#include <pch.h>
#include <Interpolation.h>
#include <Mathlib\matrix3.h>
#include <Collision\Primitives\aabb.h>
#include <new>
#include <xstddef>
#include <type_traits>
#include <sobid.h>
#include <xutility>
#include <utility>
#include <iosfwd>
#include <vector>
#include <xmemory>
#include <SelTarg.h>
#include <prim.h>
#include <seInterface2\PatchID.h>
#include <seInterface2\PatchBase.h>
#include <seInterface2\SoundParams.h>
#include <Mathlib\vector3.h>
#include <Collision\Primitives\capsule.h>
#include <Collision\Primitives\segment.h>
#include <Collision\BVH\profiling.h>
#include <boost\scoped_ptr.hpp>
#include <Mathlib\vector2.h>
#include <boost\cstdint.hpp>
#include <Mathlib\quat.h>
#include <MultiplierContainer.h>
#include <visibility.h>
#include <MultiplierTypes.h>
#include <Collision\BVH\bvh.h>
#include <assist\typemagic.h>
#include <debug\db.h>
#include <sob.h>
#include <sobstatic.h>
#include <Collision\Primitives\sphere.h>
#include <boost\shared_ptr.hpp>
#include <util\colour.h>
#include <sobtypes.h>
#include <boost\throw_exception.hpp>
#include <savegamedef.h>
#include <boost\detail\shared_count.hpp>
#include <boost\detail\lwm_win32.hpp>
#include <localizer\localizer.h>
#include <GameEventDefs.h>
#include <GameEventSys.h>
#include <wchar.h>
#include <Collision\BVH\octree.h>
#include <Collision\Primitives\obb.h>
#include <Collision\BVH\span.h>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- private variables */

/* ---------- public code */

bool GameEvent_BuildUnitComplete::GetString(wchar_t *, unsigned __int32) const // 0x5EF22E
{
    mangled_assert("?GetString@GameEvent_BuildUnitComplete@@UBE_NPA_WI@Z");
    todo("implement");
}

bool GameEvent_BuildSubSystemComplete::GetString(wchar_t *, unsigned __int32) const // 0x5EF216
{
    mangled_assert("?GetString@GameEvent_BuildSubSystemComplete@@UBE_NPA_WI@Z");
    todo("implement");
}

bool GameEvent_Research::GetString(wchar_t *, unsigned __int32) const // 0x5EF2A8
{
    mangled_assert("?GetString@GameEvent_Research@@UBE_NPA_WI@Z");
    todo("implement");
}

bool GameEvent_PlayerKilled::GetString(wchar_t *, unsigned __int32) const // 0x5EF290
{
    mangled_assert("?GetString@GameEvent_PlayerKilled@@UBE_NPA_WI@Z");
    todo("implement");
}

bool GameEvent_PlayerAlliance::GetString(wchar_t *, unsigned __int32) const // 0x5EF268
{
    mangled_assert("?GetString@GameEvent_PlayerAlliance@@UBE_NPA_WI@Z");
    todo("implement");
}

bool GameEvent_ShipRemoved::GetString(wchar_t *, unsigned __int32) const // 0x5EF2EC
{
    mangled_assert("?GetString@GameEvent_ShipRemoved@@UBE_NPA_WI@Z");
    todo("implement");
}

bool GameEvent_Combat::GetString(wchar_t *, unsigned __int32) const // 0x5EF246
{
    mangled_assert("?GetString@GameEvent_Combat@@UBE_NPA_WI@Z");
    todo("implement");
}

bool GameEvent_ResourceCollection::GetString(wchar_t *, unsigned __int32) const // 0x5EF2CA
{
    mangled_assert("?GetString@GameEvent_ResourceCollection@@UBE_NPA_WI@Z");
    todo("implement");
}

bool NDGameEvent_Objectives::GetString(wchar_t *, unsigned __int32) const // 0x5EF30E
{
    mangled_assert("?GetString@NDGameEvent_Objectives@@UBE_NPA_WI@Z");
    todo("implement");
}

/* ---------- private code */
#endif
