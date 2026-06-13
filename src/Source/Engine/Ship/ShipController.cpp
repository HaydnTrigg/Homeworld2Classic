#if 0
/* ---------- headers */

#include "decomp.h"
#include <xstring>
#include <seInterface2\PatchID.h>
#include <xmemory0>
#include <pch.h>
#include <seInterface2\PatchBase.h>
#include <seInterface2\SoundParams.h>
#include <Mathlib\matrix3.h>
#include <profile\profile.h>
#include <MultiplierContainer.h>
#include <iostream>
#include <new>
#include <exception>
#include <xstddef>
#include <type_traits>
#include <xutility>
#include <utility>
#include <iosfwd>
#include <vector>
#include <fileio\bytestream.h>
#include <xmemory>
#include <Collision\BVH\octree.h>
#include <ITweak.h>
#include <Collision\BVH\span.h>
#include <Tactics.h>
#include <Collision\BVH\Internal\span_i.h>
#include <Collision\BVH\proxy.h>
#include <Collision\intersect.h>
#include <math.h>
#include <list>
#include <Mathlib\vector3.h>
#include <map>
#include <xtree>
#include <Collision\Primitives\aabb.h>
#include <boost\scoped_ptr.hpp>
#include <Avoidance\PathFinder.h>
#include <Collision\primitivesfwd.h>
#include <DynamicPoint.h>
#include <MultiplierTypes.h>
#include <sob.h>
#include <sobid.h>
#include <Physics\RigidBody.h>
#include <Mathlib\vector2.h>
#include <sobstatic.h>
#include <Physics\PhysicsObject.h>
#include <Collision\Primitives\sphere.h>
#include <Ship\FlightManeuver.h>
#include <Ship\FlightManeuverManager.h>
#include <boost\cstdint.hpp>
#include <Mathlib\quat.h>
#include <Collision\BVH\profiling.h>
#include <Interpolation.h>
#include <Collision\Primitives\capsule.h>
#include <Collision\Primitives\segment.h>
#include <Collision\Primitives\obb.h>
#include <savestream.h>
#include <debug\db.h>
#include <Mathlib\mathutil.h>
#include <boost\shared_ptr.hpp>
#include <util\colour.h>
#include <sobtypes.h>
#include <boost\throw_exception.hpp>
#include <savegamedef.h>
#include <boost\detail\shared_count.hpp>
#include <Collision\BVH\bvh.h>
#include <boost\detail\lwm_win32.hpp>
#include <SelTarg.h>
#include <visibility.h>
#include <prim.h>
#include <Ship\ShipController.h>
#include <Ship\AdvRigidBodyController.h>
#include <wchar.h>
#include <Physics\RigidBodyController.h>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

extern char const ShipController::m_saveToken[0]; // 0x78DED0
extern SaveData const ShipController::m_saveData[22]; // 0x78DC10

/* ---------- private variables */

_static
{
    extern float const HeadingEpsilon; // 0x78DC08
}

/* ---------- public code */

_extern _sub_4993B9(ShipController *const, SaveGameData *);
ShipController::ShipController(SaveGameData *) // 0x4993B9
{
    mangled_assert("??0ShipController@@QAE@PAVSaveGameData@@@Z");
    todo("implement");
    _sub_4993B9(this, arg);
}

_extern void _sub_499773(ShipController *const);
void ShipController::defaultSettings() // 0x499773
{
    mangled_assert("?defaultSettings@ShipController@@QAEXXZ");
    todo("implement");
    _sub_499773(this);
}

_extern void _sub_49AF5A(ShipController *const);
void ShipController::postRestore() // 0x49AF5A
{
    mangled_assert("?postRestore@ShipController@@UAEXXZ");
    todo("implement");
    _sub_49AF5A(this);
}

_extern bool _sub_49B145(ShipController *const, SaveGameData *);
bool ShipController::restore(SaveGameData *) // 0x49B145
{
    mangled_assert("?restore@ShipController@@UAE_NPAVSaveGameData@@@Z");
    todo("implement");
    bool __result = _sub_49B145(this, arg);
    return __result;
}

_extern bool _sub_49B192(ShipController *const, SaveGameData *, SaveType);
bool ShipController::save(SaveGameData *, SaveType) // 0x49B192
{
    mangled_assert("?save@ShipController@@UAE_NPAVSaveGameData@@W4SaveType@@@Z");
    todo("implement");
    bool __result = _sub_49B192(this, arg, arg);
    return __result;
}

_extern _sub_499421(ShipController *const);
ShipController::ShipController() // 0x499421
{
    mangled_assert("??0ShipController@@QAE@XZ");
    todo("implement");
    _sub_499421(this);
}

_extern void _sub_49948D(std::_List_buy<vector3,std::allocator<vector3> > *const);
_inline std::_List_buy<vector3,std::allocator<vector3> >::~_List_buy<vector3,std::allocator<vector3> >() // 0x49948D
{
    mangled_assert("??1?$_List_buy@Vvector3@@V?$allocator@Vvector3@@@std@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_49948D(this);
}

_extern void _sub_4994A8(ShipController *const);
ShipController::~ShipController() // 0x4994A8
{
    mangled_assert("??1ShipController@@UAE@XZ");
    todo("implement");
    _sub_4994A8(this);
}

_extern void _sub_49B1DF(ShipController *const, DynamicPoint const &);
void ShipController::setGoal(DynamicPoint const &) // 0x49B1DF
{
    mangled_assert("?setGoal@ShipController@@QAEXABVDynamicPoint@@@Z");
    todo("implement");
    _sub_49B1DF(this, arg);
}

_extern void _sub_499DCD(ShipController *const, float);
void ShipController::doBehaviour(float) // 0x499DCD
{
    mangled_assert("?doBehaviour@ShipController@@UAEXM@Z");
    todo("implement");
    _sub_499DCD(this, arg);
}

_extern void _sub_49AB5E(ShipController *const);
void ShipController::doFrameCleanup() // 0x49AB5E
{
    mangled_assert("?doFrameCleanup@ShipController@@UAEXXZ");
    todo("implement");
    _sub_49AB5E(this);
}

_extern void _sub_49AE26(ShipController *const, float);
void ShipController::doNormalBehaviour(float) // 0x49AE26
{
    mangled_assert("?doNormalBehaviour@ShipController@@MAEXM@Z");
    todo("implement");
    _sub_49AE26(this, arg);
}

_extern void _sub_49A5B9(ShipController *const, float);
void ShipController::doFlightManeuver(float) // 0x49A5B9
{
    mangled_assert("?doFlightManeuver@ShipController@@IAEXM@Z");
    todo("implement");
    _sub_49A5B9(this, arg);
}

_extern bool _sub_49AF5F(ShipController *const, float);
bool ShipController::reachedFlightManeuverPoint(float) // 0x49AF5F
{
    mangled_assert("?reachedFlightManeuverPoint@ShipController@@IAE_NM@Z");
    todo("implement");
    bool __result = _sub_49AF5F(this, arg);
    return __result;
}

_extern void _sub_49AF13(ShipController *const, unsigned __int32, float);
void ShipController::performFlightManeuver(unsigned __int32, float) // 0x49AF13
{
    mangled_assert("?performFlightManeuver@ShipController@@QAEXIM@Z");
    todo("implement");
    _sub_49AF13(this, arg, arg);
}

_extern void _sub_49B1EA(ShipController *const);
void ShipController::stop() // 0x49B1EA
{
    mangled_assert("?stop@ShipController@@QAEXXZ");
    todo("implement");
    _sub_49B1EA(this);
}

_extern void _sub_499853(ShipController *const, vector3 &, vector3 &);
void ShipController::doAngleToTarget(vector3 &, vector3 &) // 0x499853
{
    mangled_assert("?doAngleToTarget@ShipController@@IAEXAAVvector3@@0@Z");
    todo("implement");
    _sub_499853(this, arg, arg);
}

_extern void _sub_499E09(ShipController *const, float);
void ShipController::doCloseToDestinationBehaviour(float) // 0x499E09
{
    mangled_assert("?doCloseToDestinationBehaviour@ShipController@@IAEXM@Z");
    todo("implement");
    _sub_499E09(this, arg);
}

_extern void _sub_49A078(ShipController *const, float);
void ShipController::doFarFromDestinationBehaviour(float) // 0x49A078
{
    mangled_assert("?doFarFromDestinationBehaviour@ShipController@@IAEXM@Z");
    todo("implement");
    _sub_49A078(this, arg);
}

_extern void _sub_49AB69(ShipController *const, vector3 const &, vector3 const &, bool);
void ShipController::doHeading(vector3 const &, vector3 const &, bool) // 0x49AB69
{
    mangled_assert("?doHeading@ShipController@@MAEXABVvector3@@0_N@Z");
    todo("implement");
    _sub_49AB69(this, arg, arg, arg);
}

_extern void _sub_49A8A5(ShipController *const, vector3 const &, vector3 const &);
void ShipController::doFlightManeuverHeading(vector3 const &, vector3 const &) // 0x49A8A5
{
    mangled_assert("?doFlightManeuverHeading@ShipController@@IAEXABVvector3@@0@Z");
    todo("implement");
    _sub_49A8A5(this, arg, arg);
}

_extern void _sub_49963A(ShipController *const, Sob const *);
void ShipController::avoid(Sob const *) // 0x49963A
{
    mangled_assert("?avoid@ShipController@@QAEXPBVSob@@@Z");
    todo("implement");
    _sub_49963A(this, arg);
}

_extern void _sub_499B96(ShipController *const);
void ShipController::doAvoidance() // 0x499B96
{
    mangled_assert("?doAvoidance@ShipController@@IAEXXZ");
    todo("implement");
    _sub_499B96(this);
}

_extern bool _sub_499716(ShipController const *const);
bool ShipController::avoidingForALongTime() const // 0x499716
{
    mangled_assert("?avoidingForALongTime@ShipController@@QBE_NXZ");
    todo("implement");
    bool __result = _sub_499716(this);
    return __result;
}

/* ---------- private code */
#endif
