#if 0
/* ---------- headers */

#include "decomp.h"
#include <assist\stlexsmallvector.h>
#include <HyperspaceManager.h>
#include <xstring>
#include <SquadronList.h>
#include <xmemory0>
#include <pch.h>
#include <Mathlib\matrix3.h>
#include <platform\timer.h>
#include <platform\platformexports.h>
#include <new>
#include <exception>
#include <xstddef>
#include <type_traits>
#include <Collision\Primitives\obb.h>
#include <Collision\BVH\octree.h>
#include <Collision\BVH\span.h>
#include <Collision\BVH\Internal\span_i.h>
#include <Collision\BVH\proxy.h>
#include <xutility>
#include <Collision\intersect.h>
#include <utility>
#include <iosfwd>
#include <Collision\primitivesfwd.h>
#include <vector>
#include <xmemory>
#include <Interpolation.h>
#include <math.h>
#include <list>
#include <Collision\Primitives\aabb.h>
#include <Mathlib\vector3.h>
#include <sobid.h>
#include <map>
#include <xtree>
#include <profile\profile.h>
#include <boost\scoped_ptr.hpp>
#include <iostream>
#include <Mathlib\vector2.h>
#include <util\types.h>
#include <boost\cstdint.hpp>
#include <seInterface2\PatchID.h>
#include <SelTarg.h>
#include <seInterface2\PatchBase.h>
#include <prim.h>
#include <seInterface2\SoundParams.h>
#include <Mathlib\quat.h>
#include <Collision\Primitives\capsule.h>
#include <Universe.h>
#include <Collision\Primitives\segment.h>
#include <Waypoint.h>
#include <Collision\BVH\profiling.h>
#include <fixedpoint.h>
#include <util\fixed.h>
#include <dbdefines.h>
#include <UnitCaps\UnitCaps.h>
#include <savegameimpl.h>
#include <pathpoints.h>
#include <SOBGroupManager.h>
#include <debug\db.h>
#include <hash_map>
#include <xhash>
#include <boost\shared_ptr.hpp>
#include <util\colour.h>
#include <sobtypes.h>
#include <MultiplierContainer.h>
#include <visibility.h>
#include <boost\throw_exception.hpp>
#include <MultiplierTypes.h>
#include <selection.h>
#include <savegamedef.h>
#include <Collision\BVH\bvh.h>
#include <boost\detail\shared_count.hpp>
#include <boost\detail\lwm_win32.hpp>
#include <SobUnmoveable.h>
#include <sob.h>
#include <wchar.h>
#include <sobstatic.h>
#include <Collision\Primitives\sphere.h>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

extern SaveData const SobUnmoveable::m_saveData[4]; // 0x790900
extern char const SobUnmoveable::m_saveToken[14]; // 0x790980

/* ---------- private variables */

/* ---------- public code */

_extern _sub_4B2A49(SobUnmoveable *const, SobType, SaveGameData *);
SobUnmoveable::SobUnmoveable(SobType, SaveGameData *) // 0x4B2A49
{
    mangled_assert("??0SobUnmoveable@@QAE@W4SobType@@PAVSaveGameData@@@Z");
    todo("implement");
    _sub_4B2A49(this, arg, arg);
}

_extern void _sub_4B2AC0(SobUnmoveable *const);
void SobUnmoveable::defaultSettings() // 0x4B2AC0
{
    mangled_assert("?defaultSettings@SobUnmoveable@@IAEXXZ");
    todo("implement");
    _sub_4B2AC0(this);
}

_extern void _sub_4B2B84(SobUnmoveable *const);
void SobUnmoveable::postRestore() // 0x4B2B84
{
    mangled_assert("?postRestore@SobUnmoveable@@MAEXXZ");
    todo("implement");
    _sub_4B2B84(this);
}

_extern bool _sub_4B2B89(SobUnmoveable *const, SaveGameData *);
bool SobUnmoveable::restore(SaveGameData *) // 0x4B2B89
{
    mangled_assert("?restore@SobUnmoveable@@MAE_NPAVSaveGameData@@@Z");
    todo("implement");
    bool __result = _sub_4B2B89(this, arg);
    return __result;
}

_extern bool _sub_4B2BD6(SobUnmoveable *const, SaveGameData *, SaveType);
bool SobUnmoveable::save(SaveGameData *, SaveType) // 0x4B2BD6
{
    mangled_assert("?save@SobUnmoveable@@MAE_NPAVSaveGameData@@W4SaveType@@@Z");
    todo("implement");
    bool __result = _sub_4B2BD6(this, arg, arg);
    return __result;
}

_extern _sub_4B2A6C(SobUnmoveable *const, SobType, char const *, bool);
SobUnmoveable::SobUnmoveable(SobType, char const *, bool) // 0x4B2A6C
{
    mangled_assert("??0SobUnmoveable@@QAE@W4SobType@@PBD_N@Z");
    todo("implement");
    _sub_4B2A6C(this, arg, arg, arg);
}

_extern void _sub_4B2A93(SobUnmoveable *const);
SobUnmoveable::~SobUnmoveable() // 0x4B2A93
{
    mangled_assert("??1SobUnmoveable@@UAE@XZ");
    todo("implement");
    _sub_4B2A93(this);
}

_extern vector3 const &_sub_4B2B74(SobUnmoveable const *const);
vector3 const &SobUnmoveable::getPosition() const // 0x4B2B74
{
    mangled_assert("?getPosition@SobUnmoveable@@UBEABVvector3@@XZ");
    todo("implement");
    vector3 const & __result = _sub_4B2B74(this);
    return __result;
}

_extern void _sub_4B2C75(SobUnmoveable *const, vector3 const &);
void SobUnmoveable::setPosition(vector3 const &) // 0x4B2C75
{
    mangled_assert("?setPosition@SobUnmoveable@@UAEXABVvector3@@@Z");
    todo("implement");
    _sub_4B2C75(this, arg);
}

_extern void _sub_4B2C8E(SobUnmoveable *const, vector3 const &, matrix3 const &);
void SobUnmoveable::setTransform(vector3 const &, matrix3 const &) // 0x4B2C8E
{
    mangled_assert("?setTransform@SobUnmoveable@@UAEXABVvector3@@ABVmatrix3@@@Z");
    todo("implement");
    _sub_4B2C8E(this, arg, arg);
}

_extern quat const &_sub_4B2B1E(SobUnmoveable const *const);
quat const &SobUnmoveable::getCoordSysQuat() const // 0x4B2B1E
{
    mangled_assert("?getCoordSysQuat@SobUnmoveable@@UBEABVquat@@XZ");
    todo("implement");
    quat const & __result = _sub_4B2B1E(this);
    return __result;
}

_extern matrix3 const &_sub_4B2B17(SobUnmoveable const *const);
matrix3 const &SobUnmoveable::getCoordSys() const // 0x4B2B17
{
    mangled_assert("?getCoordSys@SobUnmoveable@@UBEABVmatrix3@@XZ");
    todo("implement");
    matrix3 const & __result = _sub_4B2B17(this);
    return __result;
}

_extern void _sub_4B2C42(SobUnmoveable *const, quat const &);
void SobUnmoveable::setCoordSys(quat const &) // 0x4B2C42
{
    mangled_assert("?setCoordSys@SobUnmoveable@@UAEXABVquat@@@Z");
    todo("implement");
    _sub_4B2C42(this, arg);
}

_extern void _sub_4B2C23(SobUnmoveable *const, matrix3 const &);
void SobUnmoveable::setCoordSys(matrix3 const &) // 0x4B2C23
{
    mangled_assert("?setCoordSys@SobUnmoveable@@UAEXABVmatrix3@@@Z");
    todo("implement");
    _sub_4B2C23(this, arg);
}

_extern bool _sub_4B2B7E(SobUnmoveable const *const);
bool SobUnmoveable::isMoving() const // 0x4B2B7E
{
    mangled_assert("?isMoving@SobUnmoveable@@UBE_NXZ");
    todo("implement");
    bool __result = _sub_4B2B7E(this);
    return __result;
}

_extern bool _sub_4B2B81(SobUnmoveable const *const);
bool SobUnmoveable::isRotating() const // 0x4B2B81
{
    mangled_assert("?isRotating@SobUnmoveable@@UBE_NXZ");
    todo("implement");
    bool __result = _sub_4B2B81(this);
    return __result;
}

/* ---------- private code */
#endif
