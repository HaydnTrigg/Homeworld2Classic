#if 0
/* ---------- headers */

#include "decomp.h"
#include <xstring>
#include <xmemory0>
#include <pch.h>
#include <Mathlib\matrix3.h>
#include <SelTarg.h>
#include <prim.h>
#include <sob.h>
#include <new>
#include <sobstatic.h>
#include <Collision\Primitives\sphere.h>
#include <exception>
#include <xstddef>
#include <type_traits>
#include <Collision\Primitives\capsule.h>
#include <Collision\Primitives\segment.h>
#include <Collision\BVH\profiling.h>
#include <xutility>
#include <utility>
#include <iosfwd>
#include <Interface.h>
#include <vector>
#include <xmemory>
#include <profile\profile.h>
#include <math.h>
#include <iostream>
#include <list>
#include <Mathlib\vector3.h>
#include <Mathlib\vector4.h>
#include <Collision\Primitives\obb.h>
#include <MultiplierContainer.h>
#include <visibility.h>
#include <map>
#include <MultiplierTypes.h>
#include <xtree>
#include <Collision\BVH\bvh.h>
#include <boost\scoped_ptr.hpp>
#include <Mathlib\vector2.h>
#include <util\types.h>
#include <boost\cstdint.hpp>
#include <Mathlib\quat.h>
#include <savegameimpl.h>
#include <platform\timer.h>
#include <platform\platformexports.h>
#include <debug\db.h>
#include <seInterface2\PatchID.h>
#include <seInterface2\PatchBase.h>
#include <seInterface2\SoundParams.h>
#include <Collision\BVH\octree.h>
#include <boost\shared_ptr.hpp>
#include <Collision\BVH\span.h>
#include <util\colour.h>
#include <sobtypes.h>
#include <boost\throw_exception.hpp>
#include <Collision\BVH\Internal\span_i.h>
#include <Collision\BVH\proxy.h>
#include <savegamedef.h>
#include <Collision\intersect.h>
#include <boost\detail\shared_count.hpp>
#include <Collision\primitivesfwd.h>
#include <boost\detail\lwm_win32.hpp>
#include <Interpolation.h>
#include <ECG.h>
#include <Collision\Primitives\aabb.h>
#include <wchar.h>
#include <sobid.h>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

extern bool intStartup();
extern bool intShutdown();
extern bool intRestore(SaveGameData *saveGameData);
extern bool intSave(SaveGameData *saveGameData, SaveType saveType);
extern float getInterpolDistanceSqr();

/* ---------- globals */

extern float Interpolator::m_renderTime; // 0x848A94
extern float Interpolator::m_oldTime; // 0x848A98
extern float Interpolator::m_timeDistortion; // 0x848AA0
extern float Interpolator::m_realTimeDistortion; // 0x83C208
extern bool Interpolator::m_bPaused; // 0x848AB0
extern float Interpolator::m_lastTime; // 0x848AA4
extern float Interpolator::m_realRenderTime; // 0x848AA8
extern float Interpolator::m_totalTime; // 0x848A8C
extern float Interpolator::m_deltaTime; // 0x848A90
extern float Interpolator::m_simulationFraction; // 0x848A9C
extern SaveData const Interpolator::m_saveData[10]; // 0x7AADF0
extern char const Interpolator::m_saveToken[13]; // 0x7AAF30
extern __int32 Interpolator::m_nRenderedFrames; // 0x848AAC
extern SaveData const InterpolSobData::m_saveData[14]; // 0x7AAF48
extern char const InterpolSobData::m_saveToken[16]; // 0x7AB108
extern ElectroCardioGraph *intECG; // 0x848AB4
extern bool intRenderECG; // 0x848AB1
extern Interpolator *g_interpolator; // 0x848AB8

/* ---------- private variables */

_static
{
    extern float const kInterpolDistanceSqr; // 0x7AAF40
}

/* ---------- public code */

_extern bool _sub_5FB3AB();
bool intStartup() // 0x5FB3AB
{
    mangled_assert("?intStartup@@YG_NXZ");
    todo("implement");
    bool __result = _sub_5FB3AB();
    return __result;
}

_extern bool _sub_5FB391();
bool intShutdown() // 0x5FB391
{
    mangled_assert("?intShutdown@@YG_NXZ");
    todo("implement");
    bool __result = _sub_5FB391();
    return __result;
}

_extern bool _sub_5FB360(SaveGameData *);
bool intRestore(SaveGameData *saveGameData) // 0x5FB360
{
    mangled_assert("?intRestore@@YG_NPAVSaveGameData@@@Z");
    todo("implement");
    bool __result = _sub_5FB360(saveGameData);
    return __result;
}

_extern bool _sub_5FB379(SaveGameData *, SaveType);
bool intSave(SaveGameData *saveGameData, SaveType saveType) // 0x5FB379
{
    mangled_assert("?intSave@@YG_NPAVSaveGameData@@W4SaveType@@@Z");
    todo("implement");
    bool __result = _sub_5FB379(saveGameData, saveType);
    return __result;
}

_extern _sub_5FB311(Interpolator *const);
Interpolator::Interpolator() // 0x5FB311
{
    mangled_assert("??0Interpolator@@QAE@XZ");
    todo("implement");
    _sub_5FB311(this);
}

_extern void _sub_5FB324(Interpolator *const);
Interpolator::~Interpolator() // 0x5FB324
{
    mangled_assert("??1Interpolator@@QAE@XZ");
    todo("implement");
    _sub_5FB324(this);
}

_extern bool _sub_5FB65B(Interpolator *const, SaveGameData *);
bool Interpolator::restore(SaveGameData *) // 0x5FB65B
{
    mangled_assert("?restore@Interpolator@@QAE_NPAVSaveGameData@@@Z");
    todo("implement");
    bool __result = _sub_5FB65B(this, arg);
    return __result;
}

_extern bool _sub_5FB6C3(Interpolator *const, SaveGameData *, SaveType);
bool Interpolator::save(SaveGameData *, SaveType) // 0x5FB6C3
{
    mangled_assert("?save@Interpolator@@QAE_NPAVSaveGameData@@W4SaveType@@@Z");
    todo("implement");
    bool __result = _sub_5FB6C3(this, arg, arg);
    return __result;
}

_extern void _sub_5FB508(Interpolator *const);
void Interpolator::postRestore() // 0x5FB508
{
    mangled_assert("?postRestore@Interpolator@@QAEXXZ");
    todo("implement");
    _sub_5FB508(this);
}

_extern void _sub_5FB559();
void Interpolator::reset() // 0x5FB559
{
    mangled_assert("?reset@Interpolator@@SGXXZ");
    todo("implement");
    _sub_5FB559();
}

_extern void _sub_5FB4A0(float);
void Interpolator::nextSimulateFrame(float deltaTime) // 0x5FB4A0
{
    mangled_assert("?nextSimulateFrame@Interpolator@@SGXM@Z");
    todo("implement");
    _sub_5FB4A0(deltaTime);
}

_extern void _sub_5FB3D3(float);
void Interpolator::nextRenderFrame(float deltaTime) // 0x5FB3D3
{
    mangled_assert("?nextRenderFrame@Interpolator@@SGXM@Z");
    todo("implement");
    _sub_5FB3D3(deltaTime);
}

_extern _sub_5FB2D7(InterpolSobData *const, Sob *);
InterpolSobData::InterpolSobData(Sob *) // 0x5FB2D7
{
    mangled_assert("??0InterpolSobData@@QAE@PAVSob@@@Z");
    todo("implement");
    _sub_5FB2D7(this, arg);
}

_extern void _sub_5FB31D(InterpolSobData *const);
InterpolSobData::~InterpolSobData() // 0x5FB31D
{
    mangled_assert("??1InterpolSobData@@UAE@XZ");
    todo("implement");
    _sub_5FB31D(this);
}

_extern void _sub_5FB510(InterpolSobData *const);
void InterpolSobData::reset() // 0x5FB510
{
    mangled_assert("?reset@InterpolSobData@@QAEXXZ");
    todo("implement");
    _sub_5FB510(this);
}

_extern void _sub_5FB5A6(InterpolSobData *const, vector3 const &, matrix3 const &);
void InterpolSobData::resetTransform(vector3 const &, matrix3 const &) // 0x5FB5A6
{
    mangled_assert("?resetTransform@InterpolSobData@@QAEXABVvector3@@ABVmatrix3@@@Z");
    todo("implement");
    _sub_5FB5A6(this, arg, arg);
}

_extern bool _sub_5FB61D(InterpolSobData *const, SaveGameData *);
bool InterpolSobData::restore(SaveGameData *) // 0x5FB61D
{
    mangled_assert("?restore@InterpolSobData@@UAE_NPAVSaveGameData@@@Z");
    todo("implement");
    bool __result = _sub_5FB61D(this, arg);
    return __result;
}

_extern bool _sub_5FB68E(InterpolSobData *const, SaveGameData *, SaveType);
bool InterpolSobData::save(SaveGameData *, SaveType) // 0x5FB68E
{
    mangled_assert("?save@InterpolSobData@@UAE_NPAVSaveGameData@@W4SaveType@@@Z");
    todo("implement");
    bool __result = _sub_5FB68E(this, arg, arg);
    return __result;
}

_extern void _sub_5FB507(InterpolSobData *const);
void InterpolSobData::postRestore() // 0x5FB507
{
    mangled_assert("?postRestore@InterpolSobData@@UAEXXZ");
    todo("implement");
    _sub_5FB507(this);
}

_extern void _sub_5FB6F1(InterpolSobData *const, Sob *);
void InterpolSobData::setParent(Sob *) // 0x5FB6F1
{
    mangled_assert("?setParent@InterpolSobData@@QAEXPAVSob@@@Z");
    todo("implement");
    _sub_5FB6F1(this, arg);
}

_extern float _sub_5FB359();
float getInterpolDistanceSqr() // 0x5FB359
{
    mangled_assert("?getInterpolDistanceSqr@@YGMXZ");
    todo("implement");
    float __result = _sub_5FB359();
    return __result;
}

_extern void _sub_5FB743(InterpolSobData *const, bool, float);
void InterpolSobData::update(bool, float) // 0x5FB743
{
    mangled_assert("?update@InterpolSobData@@QAEX_NM@Z");
    todo("implement");
    _sub_5FB743(this, arg, arg);
}

/* ---------- private code */
#endif
