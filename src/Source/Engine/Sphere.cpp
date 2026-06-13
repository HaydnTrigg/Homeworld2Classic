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
#include <Sphere.h>
#include <Volume.h>
#include <wchar.h>
#include <VolumeStatic.h>
#include <SobUnmoveableStatic.h>
#include <sobstatic.h>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

extern char const Sphere::m_saveToken[0]; // 0x790608
extern SaveData const Sphere::m_saveData[1]; // 0x790610

/* ---------- private variables */

/* ---------- public code */

_extern _sub_4B2023(Sphere *const, char const *, vector3 const &, float, bool);
Sphere::Sphere(char const *, vector3 const &, float, bool) // 0x4B2023
{
    mangled_assert("??0Sphere@@QAE@PBDABVvector3@@M_N@Z");
    todo("implement");
    _sub_4B2023(this, arg, arg, arg, arg);
}

_extern void _sub_4B2073(Sphere *const);
_inline Sphere::~Sphere() // 0x4B2073
{
    mangled_assert("??1Sphere@@UAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_4B2073(this);
}

_extern void _sub_4B2094(Sphere *const);
void Sphere::defaultSettings() // 0x4B2094
{
    mangled_assert("?defaultSettings@Sphere@@QAEXXZ");
    todo("implement");
    _sub_4B2094(this);
}

_extern _sub_4B200B(Sphere *const, SaveGameData *);
Sphere::Sphere(SaveGameData *) // 0x4B200B
{
    mangled_assert("??0Sphere@@QAE@PAVSaveGameData@@@Z");
    todo("implement");
    _sub_4B200B(this, arg);
}

_extern void _sub_4B2098(Sphere *const);
void Sphere::postRestore() // 0x4B2098
{
    mangled_assert("?postRestore@Sphere@@UAEXXZ");
    todo("implement");
    _sub_4B2098(this);
}

_extern void _sub_4B2137(Sphere *const);
void Sphere::staticInit() // 0x4B2137
{
    mangled_assert("?staticInit@Sphere@@QAEXXZ");
    todo("implement");
    _sub_4B2137(this);
}

_extern bool _sub_4B209D(Sphere *const, SaveGameData *);
bool Sphere::restore(SaveGameData *) // 0x4B209D
{
    mangled_assert("?restore@Sphere@@UAE_NPAVSaveGameData@@@Z");
    todo("implement");
    bool __result = _sub_4B209D(this, arg);
    return __result;
}

_extern bool _sub_4B20EA(Sphere *const, SaveGameData *, SaveType);
bool Sphere::save(SaveGameData *, SaveType) // 0x4B20EA
{
    mangled_assert("?save@Sphere@@UAE_NPAVSaveGameData@@W4SaveType@@@Z");
    todo("implement");
    bool __result = _sub_4B20EA(this, arg, arg);
    return __result;
}

/* ---------- private code */
#endif
