#if 0
/* ---------- headers */

#include "decomp.h"
#include <xstring>
#include <xmemory0>
#include <pch.h>
#include <WeaponStatic.h>
#include <Mathlib\matrix3.h>
#include <weaponfiretypes.h>
#include <new>
#include <CoordSysUtilities.h>
#include <xstddef>
#include <type_traits>
#include <Collision\Primitives\obb.h>
#include <Collision\BVH\octree.h>
#include <Collision\Collision.h>
#include <Collision\BVH\span.h>
#include <xutility>
#include <Collision\BVH\Internal\span_i.h>
#include <utility>
#include <iosfwd>
#include <Collision\BVH\proxy.h>
#include <vector>
#include <Collision\intersect.h>
#include <xmemory>
#include <Collision\primitivesfwd.h>
#include <WeaponClassSpecificInfo.h>
#include <math.h>
#include <Interpolation.h>
#include <list>
#include <Collision\Primitives\aabb.h>
#include <Mathlib\vector3.h>
#include <SobZeroMassBody.h>
#include <sobid.h>
#include <map>
#include <sobzeromassbodystatic.h>
#include <xtree>
#include <boost\scoped_ptr.hpp>
#include <profile\profile.h>
#include <Mathlib\vector2.h>
#include <iostream>
#include <boost\cstdint.hpp>
#include <config.h>
#include <weaponTargetInfo.h>
#include <seInterface2\PatchID.h>
#include <SelTarg.h>
#include <seInterface2\PatchBase.h>
#include <prim.h>
#include <seInterface2\SoundParams.h>
#include <Mathlib\quat.h>
#include <Collision\Primitives\capsule.h>
#include <Collision\Primitives\segment.h>
#include <Collision\BVH\profiling.h>
#include <savegameimpl.h>
#include <debug\db.h>
#include <boost\shared_ptr.hpp>
#include <util\colour.h>
#include <sobtypes.h>
#include <boost\throw_exception.hpp>
#include <selection.h>
#include <savegamedef.h>
#include <MultiplierContainer.h>
#include <visibility.h>
#include <MultiplierTypes.h>
#include <boost\detail\shared_count.hpp>
#include <Collision\BVH\bvh.h>
#include <boost\detail\lwm_win32.hpp>
#include <WeaponGimble.h>
#include <weapon.h>
#include <wchar.h>
#include <WeaponFire\WeaponFire.h>
#include <sob.h>
#include <sobstatic.h>
#include <Collision\Primitives\sphere.h>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

extern char const WeaponGimble::m_saveToken[0]; // 0x78EA84
extern SaveData const WeaponGimble::m_saveData[1]; // 0x78EA64

/* ---------- private variables */

/* ---------- public code */

WeaponGimble::WeaponGimble(Sob *) // 0x4A10AD
{
    mangled_assert("??0WeaponGimble@@QAE@PAVSob@@@Z");
    todo("implement");
}

WeaponGimble::WeaponGimble(SaveGameData *) // 0x4A1086
{
    mangled_assert("??0WeaponGimble@@QAE@PAVSaveGameData@@@Z");
    todo("implement");
}

void WeaponGimble::defaultSettings() // 0x4A12E3
{
    mangled_assert("?defaultSettings@WeaponGimble@@QAEXXZ");
    todo("implement");
}

void WeaponGimble::postRestore() // 0x4A1A79
{
    mangled_assert("?postRestore@WeaponGimble@@UAEXXZ");
    todo("implement");
}

bool WeaponGimble::restore(SaveGameData *) // 0x4A1A7E
{
    mangled_assert("?restore@WeaponGimble@@UAE_NPAVSaveGameData@@@Z");
    todo("implement");
}

bool WeaponGimble::save(SaveGameData *, SaveType) // 0x4A1ACB
{
    mangled_assert("?save@WeaponGimble@@UAE_NPAVSaveGameData@@W4SaveType@@@Z");
    todo("implement");
}

WeaponGimble::~WeaponGimble() // 0x4A10D4
{
    mangled_assert("??1WeaponGimble@@UAE@XZ");
    todo("implement");
}

void WeaponGimble::getWorldSpaceMuzzle(vector3 &, vector3 &) // 0x4A1782
{
    mangled_assert("?getWorldSpaceMuzzle@WeaponGimble@@UAEXAAVvector3@@0@Z");
    todo("implement");
}

void WeaponGimble::getWorldSpaceMuzzle(vector3 &, vector3 &, vector3 &) // 0x4A12F6
{
    mangled_assert("?getWorldSpaceMuzzle@WeaponGimble@@UAEXAAVvector3@@00@Z");
    todo("implement");
}

void WeaponGimble::aimAtCurrentTarget() // 0x4A1101
{
    mangled_assert("?aimAtCurrentTarget@WeaponGimble@@UAEXXZ");
    todo("implement");
}

bool WeaponGimble::canReachTarget(WeaponTargetInfo const &) // 0x4A11DF
{
    mangled_assert("?canReachTarget@WeaponGimble@@UAE_NABVWeaponTargetInfo@@@Z");
    todo("implement");
}

bool WeaponGimble::slave() // 0x4A1B18
{
    mangled_assert("?slave@WeaponGimble@@UAE_NXZ");
    todo("implement");
}

void WeaponGimble::bindData(WeaponStatic *, WeaponClassSpecificInfo *) // 0x4A11DA
{
    mangled_assert("?bindData@WeaponGimble@@UAEXPAVWeaponStatic@@PAVWeaponClassSpecificInfo@@@Z");
    todo("implement");
}

/* ---------- private code */
#endif
