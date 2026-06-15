#if 0
/* ---------- headers */

#include "decomp.h"
#include <xstring>
#include <xmemory0>
#include <MultiplierContainer.h>
#include <visibility.h>
#include <pch.h>
#include <MultiplierTypes.h>
#include <Collision\BVH\bvh.h>
#include <Mathlib\matrix3.h>
#include <new>
#include <xstddef>
#include <type_traits>
#include <Collision\Primitives\obb.h>
#include <xutility>
#include <utility>
#include <iosfwd>
#include <vector>
#include <xmemory>
#include <boost\noncopyable.hpp>
#include <Mathlib\vector3.h>
#include <boost\scoped_ptr.hpp>
#include <Collision\BVH\octree.h>
#include <Collision\BVH\span.h>
#include <Collision\BVH\Internal\span_i.h>
#include <Collision\BVH\proxy.h>
#include <Collision\intersect.h>
#include <Mathlib\vector2.h>
#include <Collision\primitivesfwd.h>
#include <boost\cstdint.hpp>
#include <Interpolation.h>
#include <seInterface2\PatchID.h>
#include <seInterface2\PatchBase.h>
#include <seInterface2\SoundParams.h>
#include <Collision\Primitives\aabb.h>
#include <Mathlib\quat.h>
#include <SobUnmoveable.h>
#include <sob.h>
#include <sobid.h>
#include <savegameimpl.h>
#include <debug\db.h>
#include <SelTarg.h>
#include <prim.h>
#include <boost\shared_ptr.hpp>
#include <util\colour.h>
#include <sobtypes.h>
#include <boost\throw_exception.hpp>
#include <savegamedef.h>
#include <boost\detail\shared_count.hpp>
#include <Collision\Primitives\capsule.h>
#include <boost\detail\lwm_win32.hpp>
#include <Collision\Primitives\segment.h>
#include <Collision\BVH\profiling.h>
#include <Point.h>
#include <Volume.h>
#include <wchar.h>
#include <VolumeStatic.h>
#include <SobUnmoveableStatic.h>
#include <sobstatic.h>
#include <Collision\Primitives\sphere.h>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

extern char const Point::m_saveToken[0]; // 0x790500
extern SaveData const Point::m_saveData[1]; // 0x790508

/* ---------- private variables */

/* ---------- public code */

Point::Point(char const *, vector3 &, bool) // 0x4B1EF5
{
    mangled_assert("??0Point@@QAE@PBDAAVvector3@@_N@Z");
    todo("implement");
}

_inline Point::~Point() // 0x4B1F3F
{
    mangled_assert("??1Point@@UAE@XZ");
    compiler_generated();
    todo("implement");
}

void Point::defaultSettings() // 0x4B1F60
{
    mangled_assert("?defaultSettings@Point@@QAEXXZ");
    todo("implement");
}

Point::Point(SaveGameData *) // 0x4B1ED6
{
    mangled_assert("??0Point@@QAE@PAVSaveGameData@@@Z");
    todo("implement");
}

void Point::postRestore() // 0x4B1F6B
{
    mangled_assert("?postRestore@Point@@UAEXXZ");
    todo("implement");
}

void Point::staticInit() // 0x4B200A
{
    mangled_assert("?staticInit@Point@@QAEXXZ");
    todo("implement");
}

bool Point::restore(SaveGameData *) // 0x4B1F70
{
    mangled_assert("?restore@Point@@UAE_NPAVSaveGameData@@@Z");
    todo("implement");
}

bool Point::save(SaveGameData *, SaveType) // 0x4B1FBD
{
    mangled_assert("?save@Point@@UAE_NPAVSaveGameData@@W4SaveType@@@Z");
    todo("implement");
}

/* ---------- private code */
#endif
