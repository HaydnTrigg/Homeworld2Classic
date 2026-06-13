#if 0
/* ---------- headers */

#include "decomp.h"
#include <xstring>
#include <xmemory0>
#include <pch.h>
#include <WeaponStatic.h>
#include <Mathlib\matrix3.h>
#include <weaponfiretypes.h>
#include <WeaponClassSpecificInfo.h>
#include <new>
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
#include <math.h>
#include <Interpolation.h>
#include <list>
#include <profile\profile.h>
#include <iostream>
#include <Collision\Primitives\aabb.h>
#include <Mathlib\vector3.h>
#include <SobZeroMassBody.h>
#include <sobid.h>
#include <map>
#include <sobzeromassbodystatic.h>
#include <xtree>
#include <boost\scoped_ptr.hpp>
#include <Mathlib\vector2.h>
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
#include <WeaponFixed.h>
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

extern char const WeaponFixed::m_saveToken[0]; // 0x78E9F4
extern SaveData const WeaponFixed::m_saveData[1]; // 0x78E9D4

/* ---------- private variables */

/* ---------- public code */

_extern _sub_4A0808(WeaponFixed *const, Sob *);
WeaponFixed::WeaponFixed(Sob *) // 0x4A0808
{
    mangled_assert("??0WeaponFixed@@QAE@PAVSob@@@Z");
    todo("implement");
    _sub_4A0808(this, arg);
}

_extern _sub_4A07F0(WeaponFixed *const, SaveGameData *);
WeaponFixed::WeaponFixed(SaveGameData *) // 0x4A07F0
{
    mangled_assert("??0WeaponFixed@@QAE@PAVSaveGameData@@@Z");
    todo("implement");
    _sub_4A07F0(this, arg);
}

_extern void _sub_4A0A28(WeaponFixed *const);
void WeaponFixed::defaultSettings() // 0x4A0A28
{
    mangled_assert("?defaultSettings@WeaponFixed@@QAEXXZ");
    todo("implement");
    _sub_4A0A28(this);
}

_extern void _sub_4A0FE7(WeaponFixed *const);
void WeaponFixed::postRestore() // 0x4A0FE7
{
    mangled_assert("?postRestore@WeaponFixed@@UAEXXZ");
    todo("implement");
    _sub_4A0FE7(this);
}

_extern bool _sub_4A0FEC(WeaponFixed *const, SaveGameData *);
bool WeaponFixed::restore(SaveGameData *) // 0x4A0FEC
{
    mangled_assert("?restore@WeaponFixed@@UAE_NPAVSaveGameData@@@Z");
    todo("implement");
    bool __result = _sub_4A0FEC(this, arg);
    return __result;
}

_extern bool _sub_4A1039(WeaponFixed *const, SaveGameData *, SaveType);
bool WeaponFixed::save(SaveGameData *, SaveType) // 0x4A1039
{
    mangled_assert("?save@WeaponFixed@@UAE_NPAVSaveGameData@@W4SaveType@@@Z");
    todo("implement");
    bool __result = _sub_4A1039(this, arg, arg);
    return __result;
}

_extern void _sub_4A0820(WeaponFixed *const);
WeaponFixed::~WeaponFixed() // 0x4A0820
{
    mangled_assert("??1WeaponFixed@@UAE@XZ");
    todo("implement");
    _sub_4A0820(this);
}

_extern void _sub_4A084D(WeaponFixed *const);
void WeaponFixed::aimAtCurrentTarget() // 0x4A084D
{
    mangled_assert("?aimAtCurrentTarget@WeaponFixed@@UAEXXZ");
    todo("implement");
    _sub_4A084D(this);
}

_extern void _sub_4A0D66(WeaponFixed *const, vector3 &, vector3 &);
void WeaponFixed::getWorldSpaceMuzzle(vector3 &, vector3 &) // 0x4A0D66
{
    mangled_assert("?getWorldSpaceMuzzle@WeaponFixed@@UAEXAAVvector3@@0@Z");
    todo("implement");
    _sub_4A0D66(this, arg, arg);
}

_extern void _sub_4A0A2C(WeaponFixed *const, vector3 &, vector3 &, vector3 &);
void WeaponFixed::getWorldSpaceMuzzle(vector3 &, vector3 &, vector3 &) // 0x4A0A2C
{
    mangled_assert("?getWorldSpaceMuzzle@WeaponFixed@@UAEXAAVvector3@@00@Z");
    todo("implement");
    _sub_4A0A2C(this, arg, arg, arg);
}

_extern bool _sub_4A0924(WeaponFixed *const, WeaponTargetInfo const &);
bool WeaponFixed::canReachTarget(WeaponTargetInfo const &) // 0x4A0924
{
    mangled_assert("?canReachTarget@WeaponFixed@@UAE_NABVWeaponTargetInfo@@@Z");
    todo("implement");
    bool __result = _sub_4A0924(this, arg);
    return __result;
}

_extern void _sub_4A091F(WeaponFixed *const, WeaponStatic *, WeaponClassSpecificInfo *);
void WeaponFixed::bindData(WeaponStatic *, WeaponClassSpecificInfo *) // 0x4A091F
{
    mangled_assert("?bindData@WeaponFixed@@UAEXPAVWeaponStatic@@PAVWeaponClassSpecificInfo@@@Z");
    todo("implement");
    _sub_4A091F(this, arg, arg);
}

/* ---------- private code */
#endif
