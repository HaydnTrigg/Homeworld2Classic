#if 0
/* ---------- headers */

#include "decomp.h"
#include <assist\stlexsmallvector.h>
#include <xstring>
#include <MultiplierContainer.h>
#include <visibility.h>
#include <xmemory0>
#include <MultiplierTypes.h>
#include <pch.h>
#include <Collision\BVH\bvh.h>
#include <AxisAlignBox.h>
#include <Mathlib\matrix3.h>
#include <HyperspaceManager.h>
#include <new>
#include <SquadronList.h>
#include <xstddef>
#include <type_traits>
#include <Collision\Primitives\obb.h>
#include <xutility>
#include <utility>
#include <iosfwd>
#include <vector>
#include <platform\timer.h>
#include <xmemory>
#include <platform\platformexports.h>
#include <Sphere.h>
#include <boost\noncopyable.hpp>
#include <list>
#include <Mathlib\vector3.h>
#include <xtree>
#include <Collision\BVH\octree.h>
#include <boost\scoped_ptr.hpp>
#include <Collision\BVH\span.h>
#include <Collision\BVH\Internal\span_i.h>
#include <Collision\BVH\proxy.h>
#include <Collision\intersect.h>
#include <Collision\primitivesfwd.h>
#include <Mathlib\vector2.h>
#include <util\types.h>
#include <boost\cstdint.hpp>
#include <Interpolation.h>
#include <seInterface2\PatchID.h>
#include <Mathlib\mathutil.h>
#include <seInterface2\PatchBase.h>
#include <seInterface2\SoundParams.h>
#include <Collision\Primitives\aabb.h>
#include <SobUnmoveable.h>
#include <Mathlib\quat.h>
#include <sob.h>
#include <sobid.h>
#include <Point.h>
#include <savegameimpl.h>
#include <pathpoints.h>
#include <debug\db.h>
#include <Universe.h>
#include <Waypoint.h>
#include <SelTarg.h>
#include <prim.h>
#include <fixedpoint.h>
#include <util\fixed.h>
#include <boost\shared_ptr.hpp>
#include <util\colour.h>
#include <sobtypes.h>
#include <boost\throw_exception.hpp>
#include <selection.h>
#include <savegamedef.h>
#include <dbdefines.h>
#include <boost\detail\shared_count.hpp>
#include <Collision\Primitives\capsule.h>
#include <UnitCaps\UnitCaps.h>
#include <Collision\Primitives\segment.h>
#include <boost\detail\lwm_win32.hpp>
#include <Collision\BVH\profiling.h>
#include <SOBGroupManager.h>
#include <hash_map>
#include <xhash>
#include <Volume.h>
#include <VolumeStatic.h>
#include <wchar.h>
#include <SobUnmoveableStatic.h>
#include <sobstatic.h>
#include <Collision\Primitives\sphere.h>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

extern bool volSphereAABoxIntersection(Sphere const &s, AxisAlignBox const &b);
extern bool volAABoxAABoxIntersection(AxisAlignBox const &b1, AxisAlignBox const &b2);
extern bool volPointSphereIntersection(vector3 const &pointpos, Sphere const &s);
extern bool volPointAABoxIntersection(vector3 const &pointpos, AxisAlignBox const &b);
extern bool volSphereSphereIntersection(Sphere const &s1, Sphere const &s2);

/* ---------- globals */

extern char const Volume::m_saveToken[0]; // 0x790740
extern SaveData const Volume::m_saveData[3]; // 0x790748

/* ---------- private variables */

/* ---------- public code */

_extern bool _sub_4B28E9(Sphere const &, AxisAlignBox const &);
bool volSphereAABoxIntersection(Sphere const &s, AxisAlignBox const &b) // 0x4B28E9
{
    mangled_assert("?volSphereAABoxIntersection@@YG_NABVSphere@@ABVAxisAlignBox@@@Z");
    todo("implement");
    bool __result = _sub_4B28E9(s, b);
    return __result;
}

_extern bool _sub_4B275E(AxisAlignBox const &, AxisAlignBox const &);
bool volAABoxAABoxIntersection(AxisAlignBox const &b1, AxisAlignBox const &b2) // 0x4B275E
{
    mangled_assert("?volAABoxAABoxIntersection@@YG_NABVAxisAlignBox@@0@Z");
    todo("implement");
    bool __result = _sub_4B275E(b1, b2);
    return __result;
}

_extern bool _sub_4B2889(vector3 const &, Sphere const &);
bool volPointSphereIntersection(vector3 const &pointpos, Sphere const &s) // 0x4B2889
{
    mangled_assert("?volPointSphereIntersection@@YG_NABVvector3@@ABVSphere@@@Z");
    todo("implement");
    bool __result = _sub_4B2889(pointpos, s);
    return __result;
}

_extern bool _sub_4B2827(vector3 const &, AxisAlignBox const &);
bool volPointAABoxIntersection(vector3 const &pointpos, AxisAlignBox const &b) // 0x4B2827
{
    mangled_assert("?volPointAABoxIntersection@@YG_NABVvector3@@ABVAxisAlignBox@@@Z");
    todo("implement");
    bool __result = _sub_4B2827(pointpos, b);
    return __result;
}

_extern bool _sub_4B29D4(Sphere const &, Sphere const &);
bool volSphereSphereIntersection(Sphere const &s1, Sphere const &s2) // 0x4B29D4
{
    mangled_assert("?volSphereSphereIntersection@@YG_NABVSphere@@0@Z");
    todo("implement");
    bool __result = _sub_4B29D4(s1, s2);
    return __result;
}

_extern _sub_4B220D(Volume *const, char const *, VolumeType, bool);
Volume::Volume(char const *, VolumeType, bool) // 0x4B220D
{
    mangled_assert("??0Volume@@QAE@PBDW4VolumeType@@_N@Z");
    todo("implement");
    _sub_4B220D(this, arg, arg, arg);
}

_extern void _sub_4B2603(Volume *const);
void Volume::defaultSettings() // 0x4B2603
{
    mangled_assert("?defaultSettings@Volume@@QAEXXZ");
    todo("implement");
    _sub_4B2603(this);
}

_extern _sub_4B21D4(Volume *const, SaveGameData *);
Volume::Volume(SaveGameData *) // 0x4B21D4
{
    mangled_assert("??0Volume@@QAE@PAVSaveGameData@@@Z");
    todo("implement");
    _sub_4B21D4(this, arg);
}

_extern void _sub_4B2681(Volume *const);
void Volume::postRestore() // 0x4B2681
{
    mangled_assert("?postRestore@Volume@@UAEXXZ");
    todo("implement");
    _sub_4B2681(this);
}

_extern bool _sub_4B249F(Volume const *const, Volume *);
bool Volume::Intersect(Volume *) const // 0x4B249F
{
    mangled_assert("?Intersect@Volume@@QBE_NPAV1@@Z");
    todo("implement");
    bool __result = _sub_4B249F(this, arg);
    return __result;
}

_extern bool _sub_4B22DF(Volume const *const, vector3 const &);
bool Volume::Inside(vector3 const &) const // 0x4B22DF
{
    mangled_assert("?Inside@Volume@@QBE_NABVvector3@@@Z");
    todo("implement");
    bool __result = _sub_4B22DF(this, arg);
    return __result;
}

_extern bool _sub_4B235D(Volume *const, vector3 const &, vector3 const &, __int32 &, vector3 *);
bool Volume::Intersect(vector3 const &, vector3 const &, __int32 &, vector3 *) // 0x4B235D
{
    mangled_assert("?Intersect@Volume@@QAE_NABVvector3@@0AAHQAV2@@Z");
    todo("implement");
    bool __result = _sub_4B235D(this, arg, arg, arg, arg);
    return __result;
}

_extern void _sub_4B2720(Volume *const, bool);
void Volume::setHyperspaceable(bool) // 0x4B2720
{
    mangled_assert("?setHyperspaceable@Volume@@QAEX_N@Z");
    todo("implement");
    _sub_4B2720(this, arg);
}

_extern bool _sub_4B2686(Volume *const, SaveGameData *);
bool Volume::restore(SaveGameData *) // 0x4B2686
{
    mangled_assert("?restore@Volume@@UAE_NPAVSaveGameData@@@Z");
    todo("implement");
    bool __result = _sub_4B2686(this, arg);
    return __result;
}

_extern bool _sub_4B26D3(Volume *const, SaveGameData *, SaveType);
bool Volume::save(SaveGameData *, SaveType) // 0x4B26D3
{
    mangled_assert("?save@Volume@@UAE_NPAVSaveGameData@@W4SaveType@@@Z");
    todo("implement");
    bool __result = _sub_4B26D3(this, arg, arg);
    return __result;
}

/* ---------- private code */
#endif
