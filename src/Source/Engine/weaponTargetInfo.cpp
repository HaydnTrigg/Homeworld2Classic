#if 0
/* ---------- headers */

#include "decomp.h"
#include <Collision\Primitives\aabb.h>
#include <Collision\Primitives\obb.h>
#include <xstring>
#include <xmemory0>
#include <pch.h>
#include <SobZeroMassBody.h>
#include <sobzeromassbodystatic.h>
#include <Mathlib\matrix3.h>
#include <new>
#include <xstddef>
#include <config.h>
#include <type_traits>
#include <SelTarg.h>
#include <prim.h>
#include <xutility>
#include <utility>
#include <iosfwd>
#include <vector>
#include <xmemory>
#include <Collision\Primitives\capsule.h>
#include <Collision\Primitives\segment.h>
#include <Collision\BVH\profiling.h>
#include <math.h>
#include <seInterface2\PatchID.h>
#include <seInterface2\PatchBase.h>
#include <Mathlib\vector3.h>
#include <seInterface2\SoundParams.h>
#include <boost\scoped_ptr.hpp>
#include <Mathlib\vector2.h>
#include <MultiplierContainer.h>
#include <visibility.h>
#include <MultiplierTypes.h>
#include <Collision\BVH\bvh.h>
#include <boost\cstdint.hpp>
#include <Mathlib\quat.h>
#include <WeaponClassSpecificInfo.h>
#include <debug\db.h>
#include <WeaponStatic.h>
#include <sob.h>
#include <sobstatic.h>
#include <Collision\Primitives\sphere.h>
#include <weapon.h>
#include <WeaponFire\WeaponFire.h>
#include <boost\shared_ptr.hpp>
#include <util\colour.h>
#include <weaponfiretypes.h>
#include <sobtypes.h>
#include <boost\throw_exception.hpp>
#include <selection.h>
#include <savegamedef.h>
#include <boost\detail\shared_count.hpp>
#include <boost\detail\lwm_win32.hpp>
#include <Collision\BVH\octree.h>
#include <Collision\BVH\span.h>
#include <Collision\BVH\Internal\span_i.h>
#include <Collision\Collision.h>
#include <Collision\BVH\proxy.h>
#include <Collision\intersect.h>
#include <Collision\primitivesfwd.h>
#include <weaponTargetInfo.h>
#include <sobid.h>
#include <wchar.h>
#include <Interpolation.h>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

extern WeaponTargetInfo WeaponTargetInfo::zero; // 0x843E18
extern char const WeaponTargetInfo::m_saveToken[17]; // 0x78EC18
extern SaveData const WeaponTargetInfo::m_saveData[4]; // 0x78EC30

/* ---------- private variables */

/* ---------- public code */

_extern _sub_4A49FC(WeaponTargetInfo *const);
WeaponTargetInfo::WeaponTargetInfo() // 0x4A49FC
{
    mangled_assert("??0WeaponTargetInfo@@QAE@XZ");
    todo("implement");
    _sub_4A49FC(this);
}

_extern _sub_4A4968(WeaponTargetInfo *const, Sob *, vector3 const &, vector3 const &, vector3 const &);
WeaponTargetInfo::WeaponTargetInfo(Sob *, vector3 const &, vector3 const &, vector3 const &) // 0x4A4968
{
    mangled_assert("??0WeaponTargetInfo@@QAE@PAVSob@@ABVvector3@@11@Z");
    todo("implement");
    _sub_4A4968(this, arg, arg, arg, arg);
}

_extern _sub_4A4924(WeaponTargetInfo *const, WeaponTargetInfo const &);
WeaponTargetInfo::WeaponTargetInfo(WeaponTargetInfo const &) // 0x4A4924
{
    mangled_assert("??0WeaponTargetInfo@@QAE@ABV0@@Z");
    todo("implement");
    _sub_4A4924(this, arg);
}

_extern WeaponTargetInfo &_sub_4A4A54(WeaponTargetInfo *const, WeaponTargetInfo const &);
WeaponTargetInfo &WeaponTargetInfo::operator=(WeaponTargetInfo const &) // 0x4A4A54
{
    mangled_assert("??4WeaponTargetInfo@@QAEAAV0@ABV0@@Z");
    todo("implement");
    WeaponTargetInfo & __result = _sub_4A4A54(this, arg);
    return __result;
}

_extern vector3 _sub_4A4CBE(WeaponTargetInfo const *const);
vector3 WeaponTargetInfo::getWSTargetPosition() const // 0x4A4CBE
{
    mangled_assert("?getWSTargetPosition@WeaponTargetInfo@@QBE?AVvector3@@XZ");
    todo("implement");
    vector3 __result = _sub_4A4CBE(this);
    return __result;
}

_extern vector3 _sub_4A4DAD(WeaponTargetInfo const *const, vector3 const &, float);
vector3 WeaponTargetInfo::getWSTargetPositionPredicted(vector3 const &, float) const // 0x4A4DAD
{
    mangled_assert("?getWSTargetPositionPredicted@WeaponTargetInfo@@QBE?AVvector3@@ABV2@M@Z");
    todo("implement");
    vector3 __result = _sub_4A4DAD(this, arg, arg);
    return __result;
}

_extern vector3 _sub_4A4B8C(WeaponTargetInfo const *const, Weapon const *);
vector3 WeaponTargetInfo::getWSTargetPosition(Weapon const *) const // 0x4A4B8C
{
    mangled_assert("?getWSTargetPosition@WeaponTargetInfo@@QBE?AVvector3@@PBVWeapon@@@Z");
    todo("implement");
    vector3 __result = _sub_4A4B8C(this, arg);
    return __result;
}

_extern vector3 _sub_4A4AD7(WeaponTargetInfo const *const);
vector3 WeaponTargetInfo::getWSTargetNormal() const // 0x4A4AD7
{
    mangled_assert("?getWSTargetNormal@WeaponTargetInfo@@QBE?AVvector3@@XZ");
    todo("implement");
    vector3 __result = _sub_4A4AD7(this);
    return __result;
}

_extern void _sub_4A4FAA(WeaponTargetInfo *const, Sob *, vector3 const &, vector3 const &, vector3 const &);
void WeaponTargetInfo::reset(Sob *, vector3 const &, vector3 const &, vector3 const &) // 0x4A4FAA
{
    mangled_assert("?reset@WeaponTargetInfo@@QAEXPAVSob@@ABVvector3@@11@Z");
    todo("implement");
    _sub_4A4FAA(this, arg, arg, arg, arg);
}

_extern void _sub_4A4FA9(WeaponTargetInfo *const);
void WeaponTargetInfo::postRestore() // 0x4A4FA9
{
    mangled_assert("?postRestore@WeaponTargetInfo@@UAEXXZ");
    todo("implement");
    _sub_4A4FA9(this);
}

_extern bool _sub_4A4FF4(WeaponTargetInfo *const, SaveGameData *);
bool WeaponTargetInfo::restore(SaveGameData *) // 0x4A4FF4
{
    mangled_assert("?restore@WeaponTargetInfo@@UAE_NPAVSaveGameData@@@Z");
    todo("implement");
    bool __result = _sub_4A4FF4(this, arg);
    return __result;
}

_extern bool _sub_4A5032(WeaponTargetInfo *const, SaveGameData *, SaveType);
bool WeaponTargetInfo::save(SaveGameData *, SaveType) // 0x4A5032
{
    mangled_assert("?save@WeaponTargetInfo@@UAE_NPAVSaveGameData@@W4SaveType@@@Z");
    todo("implement");
    bool __result = _sub_4A5032(this, arg, arg);
    return __result;
}

/* ---------- private code */
#endif
