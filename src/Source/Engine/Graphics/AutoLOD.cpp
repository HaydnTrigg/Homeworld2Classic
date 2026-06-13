#if 0
/* ---------- headers */

#include "decomp.h"
#include <MeshAnimation.h>
#include <Collision\Primitives\obb.h>
#include <ShieldTypes.h>
#include <Collision\BVH\octree.h>
#include <xstring>
#include <Collision\BVH\span.h>
#include <xmemory0>
#include <Collision\BVH\Internal\span_i.h>
#include <Mathlib\matrix4.h>
#include <pch.h>
#include <Collision\BVH\proxy.h>
#include <Collision\intersect.h>
#include <Collision\primitivesfwd.h>
#include <Subsystems\HardPointManager.h>
#include <Subsystems\HardPoint.h>
#include <Subsystems\HardPointStatic.h>
#include <Subsystems\SubSystemType.h>
#include <Mathlib\matrix3.h>
#include <Interpolation.h>
#include <new>
#include <Collision\Primitives\aabb.h>
#include <exception>
#include <xstddef>
#include <type_traits>
#include <Modifiers\ModifierAbility.h>
#include <sobid.h>
#include <shipstatic.h>
#include <fileio\filestream.h>
#include <commandtype.h>
#include <xutility>
#include <abilities.h>
#include <utility>
#include <iosfwd>
#include <vector>
#include <fileio\bytestream.h>
#include <xmemory>
#include <fileio\fileioexports.h>
#include <Graphics\AutoLODState.h>
#include <seInterface2\PatchID.h>
#include <SelTarg.h>
#include <seInterface2\PatchBase.h>
#include <prim.h>
#include <seInterface2\SoundParams.h>
#include <Mathlib\vector3.h>
#include <Mathlib\vector4.h>
#include <Tactics.h>
#include <boost\scoped_ptr.hpp>
#include <Collision\Primitives\capsule.h>
#include <Collision\Primitives\segment.h>
#include <Collision\BVH\profiling.h>
#include <Mathlib\vector2.h>
#include <util\types.h>
#include <Modifiers\ModifierTargetCache.h>
#include <boost\cstdint.hpp>
#include <fixedpoint.h>
#include <Mathlib\quat.h>
#include <util\fixed.h>
#include <MultiplierContainer.h>
#include <visibility.h>
#include <MultiplierTypes.h>
#include <Collision\BVH\bvh.h>
#include <ITweak.h>
#include <platform\timer.h>
#include <platform\platformexports.h>
#include <Modifiers\ModifierUIInfo.h>
#include <Graphics\AutoLODOption.h>
#include <Modifiers\ModifierMultiplier.h>
#include <Modifiers\ModifierEffect.h>
#include <debug\db.h>
#include <sob.h>
#include <sobstatic.h>
#include <Collision\Primitives\sphere.h>
#include <config.h>
#include <Modifiers\ModifierApplier.h>
#include <boost\shared_ptr.hpp>
#include <util\colour.h>
#include <sobtypes.h>
#include <boost\throw_exception.hpp>
#include <weaponinfo.h>
#include <savegamedef.h>
#include <boost\detail\shared_count.hpp>
#include <weaponstaticinfo.h>
#include <GunBinding.h>
#include <boost\detail\lwm_win32.hpp>
#include <playerresourcetype.h>
#include <TeamColourRegistry.h>
#include <savegame.h>
#include <task.h>
#include <stack>
#include <SobWithMeshStatic.h>
#include <SoundManager\SoundEntityHandle.h>
#include <Graphics\AutoLOD.h>
#include <wchar.h>
#include <ship.h>
#include <SobWithMesh.h>
#include <SobRigidBody.h>
#include <WeaponClassSpecificInfo.h>
#include <SobRigidBodyStatic.h>

/* ---------- constants */

enum `anonymous-namespace'::LODState
{
    LS_Stable = 0,
    LS_DecreasingDetail,
    LS_IncreasingDetail,
    LS_LowestDetail,
    LS_MaximumDetail,
};

/* ---------- definitions */

typedef `anonymous-namespace'::LODState ?A0x97a1d1e3::LODState;

/* ---------- prototypes */

/* ---------- globals */

extern AutoLOD *AutoLOD::s_instance; // 0x84664C

/* ---------- private variables */

_static
{
    extern float const k_AbsurdRenderTime; // 0x79FFBC
}

/* ---------- public code */

_extern bool _sub_56AE72();
bool AutoLOD::Startup() // 0x56AE72
{
    mangled_assert("?Startup@AutoLOD@@SG_NXZ");
    todo("implement");
    bool __result = _sub_56AE72();
    return __result;
}

_extern bool _sub_56AE4E();
bool AutoLOD::Shutdown() // 0x56AE4E
{
    mangled_assert("?Shutdown@AutoLOD@@SG_NXZ");
    todo("implement");
    bool __result = _sub_56AE4E();
    return __result;
}

_extern AutoLOD *_sub_56ADE0();
AutoLOD *AutoLOD::Instance() // 0x56ADE0
{
    mangled_assert("?Instance@AutoLOD@@SGPAV1@XZ");
    todo("implement");
    AutoLOD * __result = _sub_56ADE0();
    return __result;
}

_extern _sub_56A981(AutoLOD *const);
AutoLOD::AutoLOD() // 0x56A981
{
    mangled_assert("??0AutoLOD@@QAE@XZ");
    todo("implement");
    _sub_56A981(this);
}

_extern _sub_56AA6A(AutoLOD::Data *const);
_inline AutoLOD::Data::Data() // 0x56AA6A
{
    mangled_assert("??0Data@AutoLOD@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_56AA6A(this);
}

_extern void _sub_56AA87(AutoLOD *const);
AutoLOD::~AutoLOD() // 0x56AA87
{
    mangled_assert("??1AutoLOD@@QAE@XZ");
    todo("implement");
    _sub_56AA87(this);
}

_extern void _sub_56AAA9(AutoLOD::Data *const);
_inline AutoLOD::Data::~Data() // 0x56AAA9
{
    mangled_assert("??1Data@AutoLOD@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_56AAA9(this);
}

_extern void _sub_56ADF8(AutoLOD *const, float);
void AutoLOD::SetDesiredFPS(float) // 0x56ADF8
{
    mangled_assert("?SetDesiredFPS@AutoLOD@@QAEXM@Z");
    todo("implement");
    _sub_56ADF8(this, arg);
}

_extern bool _sub_56ADE6(AutoLOD const *const);
bool AutoLOD::IsEnabled() const // 0x56ADE6
{
    mangled_assert("?IsEnabled@AutoLOD@@QBE_NXZ");
    todo("implement");
    bool __result = _sub_56ADE6(this);
    return __result;
}

_extern void _sub_56AE42(AutoLOD *const, bool);
void AutoLOD::SetEnabled(bool) // 0x56AE42
{
    mangled_assert("?SetEnabled@AutoLOD@@QAEX_N@Z");
    todo("implement");
    _sub_56AE42(this, arg);
}

_extern void _sub_56ADEC(AutoLOD *const, bool);
void AutoLOD::SetAllowGoblins(bool) // 0x56ADEC
{
    mangled_assert("?SetAllowGoblins@AutoLOD@@QAEX_N@Z");
    todo("implement");
    _sub_56ADEC(this, arg);
}

_extern float _sub_56ADDB(AutoLOD const *const);
float AutoLOD::GetScaleFactor() const // 0x56ADDB
{
    mangled_assert("?GetScaleFactor@AutoLOD@@QBEMXZ");
    todo("implement");
    float __result = _sub_56ADDB(this);
    return __result;
}

_extern float _sub_56ADD5(AutoLOD const *const);
float AutoLOD::GetRenderTime() const // 0x56ADD5
{
    mangled_assert("?GetRenderTime@AutoLOD@@QBEMXZ");
    todo("implement");
    float __result = _sub_56ADD5(this);
    return __result;
}

_extern void _sub_56AC93(AutoLOD *const, char *, unsigned __int32);
void AutoLOD::GetDebugString(char *, unsigned __int32) // 0x56AC93
{
    mangled_assert("?GetDebugString@AutoLOD@@QAEXPADI@Z");
    todo("implement");
    _sub_56AC93(this, arg, arg);
}

_extern unsigned __int32 _sub_56ACF7(AutoLOD *const, Sob const &, float, unsigned __int32 const);
unsigned __int32 AutoLOD::GetLOD(Sob const &, float, unsigned __int32 const) // 0x56ACF7
{
    mangled_assert("?GetLOD@AutoLOD@@QAEIABVSob@@MI@Z");
    todo("implement");
    unsigned __int32 __result = _sub_56ACF7(this, arg, arg, arg);
    return __result;
}

_extern void _sub_56AD47(AutoLOD const *const, Ship const &, float, float &, float &);
void AutoLOD::GetRenderAlphas(Ship const &, float, float &, float &) const // 0x56AD47
{
    mangled_assert("?GetRenderAlphas@AutoLOD@@QBEXABVShip@@MAAM1@Z");
    todo("implement");
    _sub_56AD47(this, arg, arg, arg, arg);
}

_extern void _sub_56AC37(AutoLOD *const);
void AutoLOD::EndFrame() // 0x56AC37
{
    mangled_assert("?EndFrame@AutoLOD@@QAEXXZ");
    todo("implement");
    _sub_56AC37(this);
}

_extern float _sub_56ABAD(AutoLOD *const, float);
float AutoLOD::AverageFrame(float) // 0x56ABAD
{
    mangled_assert("?AverageFrame@AutoLOD@@AAEMM@Z");
    todo("implement");
    float __result = _sub_56ABAD(this, arg);
    return __result;
}

_extern void _sub_56AAF2(AutoLOD *const, float);
void AutoLOD::Adjust(float) // 0x56AAF2
{
    mangled_assert("?Adjust@AutoLOD@@AAEXM@Z");
    todo("implement");
    _sub_56AAF2(this, arg);
}

/* ---------- private code */
#endif
