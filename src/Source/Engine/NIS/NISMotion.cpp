#if 0
/* ---------- headers */

#include "decomp.h"
#include <assist\stlexsmallvector.h>
#include <SoundManager\SoundEntityHandle.h>
#include <xstring>
#include <xmemory0>
#include <Mathlib\matrix4.h>
#include <pch.h>
#include <Universe.h>
#include <Waypoint.h>
#include <platform\timer.h>
#include <SobUnmoveable.h>
#include <platform\platformexports.h>
#include <Sob\Pebble\Pebble.h>
#include <Sob\Pebble\PebbleStatic.h>
#include <platform\windowinterface.h>
#include <Render\FxGL\FXManager.h>
#include <Render\FxGL\VarMulti.h>
#include <Mathlib\matrix3.h>
#include <Collision\BVH\octree.h>
#include <Collision\BVH\span.h>
#include <Collision\BVH\Internal\span_i.h>
#include <new>
#include <Collision\BVH\proxy.h>
#include <Collision\intersect.h>
#include <NURBSCurve.h>
#include <exception>
#include <xstddef>
#include <Collision\primitivesfwd.h>
#include <curve.h>
#include <type_traits>
#include <DynamicPoint.h>
#include <Sob\DustCloud\DustCloud.h>
#include <Sob\DustCloud\DustCloudStatic.h>
#include <Parade.h>
#include <xutility>
#include <utility>
#include <iosfwd>
#include <Interpolation.h>
#include <vector>
#include <seInterface2\PatchID.h>
#include <Race.h>
#include <xmemory>
#include <seInterface2\PatchBase.h>
#include <debug\ctassert.h>
#include <seInterface2\SoundParams.h>
#include <Collision\Primitives\aabb.h>
#include <Sob\Resource\Asteroid.h>
#include <Sob\Resource\Resource.h>
#include <Sob\Resource\ResourceStatic.h>
#include <math.h>
#include <abilities.h>
#include <BuildManager.h>
#include <list>
#include <SobFactory.h>
#include <EngineTrailSystem.h>
#include <SobWithMeshStatic.h>
#include <Mathlib\vector3.h>
#include <SobRigidBodyStatic.h>
#include <Mathlib\vector4.h>
#include <xtree>
#include <BillboardRender.h>
#include <Animation.h>
#include <Graphics\meshrenderproxy.h>
#include <boost\scoped_ptr.hpp>
#include <Sob\Resource\Salvage.h>
#include <Sob\Resource\SalvageStatic.h>
#include <Mathlib\vector2.h>
#include <SelTarg.h>
#include <util\types.h>
#include <platform\osdef.h>
#include <prim.h>
#include <boost\cstdint.hpp>
#include <Collision\Primitives\capsule.h>
#include <Point.h>
#include <Collision\Primitives\segment.h>
#include <Volume.h>
#include <Collision\BVH\profiling.h>
#include <renderer.h>
#include <VolumeStatic.h>
#include <Render\gl\types.h>
#include <weaponinfo.h>
#include <SobUnmoveableStatic.h>
#include <Player.h>
#include <Mathlib\matvec.h>
#include <ResearchManager.h>
#include <Mathlib\quat.h>
#include <fixedpoint.h>
#include <util\fixed.h>
#include <AnimCurve.h>
#include <Modifiers\ModifierTargetCache.h>
#include <ParadeCommand.h>
#include <commandtype.h>
#include <Render\gl\lotypes.h>
#include <Squadron.h>
#include <command.h>
#include <dbdefines.h>
#include <UnitCaps\UnitCaps.h>
#include <sob.h>
#include <sobstatic.h>
#include <TeamColourRegistry.h>
#include <Collision\Primitives\sphere.h>
#include <SOBGroupManager.h>
#include <savegame.h>
#include <hash_map>
#include <Mathlib\mathlibdll.h>
#include <Render\gl\r_types.h>
#include <task.h>
#include <xhash>
#include <Mathlib\fastmath.h>
#include <stack>
#include <Sob\Resource\AsteroidStatic.h>
#include <Interface.h>
#include <pathpoints.h>
#include <debug\db.h>
#include <MultiplierContainer.h>
#include <visibility.h>
#include <MultiplierTypes.h>
#include <assist\array2d.h>
#include <Collision\BVH\bvh.h>
#include <Mathlib\mathutil.h>
#include <ShieldTypes.h>
#include <deque>
#include <MeshAnimation.h>
#include <boost\shared_ptr.hpp>
#include <util\colour.h>
#include <sobtypes.h>
#include <boost\throw_exception.hpp>
#include <selection.h>
#include <Subsystems\HardPointManager.h>
#include <savegamedef.h>
#include <Subsystems\HardPoint.h>
#include <boost\detail\shared_count.hpp>
#include <Subsystems\HardPointStatic.h>
#include <ship.h>
#include <Subsystems\SubSystemType.h>
#include <boost\detail\lwm_win32.hpp>
#include <SobWithMesh.h>
#include <SobRigidBody.h>
#include <OrderFeedback.h>
#include <Render\gl\r_defines.h>
#include <Render\gl\glext.h>
#include <Collision\Primitives\obb.h>
#include <CoordSysUtilities.h>
#include <Tactics.h>
#include <NIS\NISMotion.h>
#include <sobid.h>
#include <wchar.h>
#include <string>
#include <HyperspaceManager.h>
#include <playerresourcetype.h>
#include <SquadronList.h>
#include <queue>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */


_static void GetRotateMatrix(vector3 const &angles, MotionNode::RotateOrder ro, matrix3 &output);
_static Sob *createShip(char const *shipName, Player *pPlayer);
_static Sob *createAsteroid(char const *resourceName);
_static Sob *createSalvage(char const *resourceName);
_static Sob *createPebble(char const *resourceName);
_static Sob *createPoint(char const *name);

/* ---------- globals */

/* ---------- private variables */

/* ---------- public code */

_extern _sub_5537AE(MotionPath *const);
MotionPath::MotionPath() // 0x5537AE
{
    mangled_assert("??0MotionPath@@QAE@XZ");
    todo("implement");
    _sub_5537AE(this);
}

_extern void _sub_553931(MotionPath *const);
MotionPath::~MotionPath() // 0x553931
{
    mangled_assert("??1MotionPath@@QAE@XZ");
    todo("implement");
    _sub_553931(this);
}

_extern void _sub_5547EA(MotionPath *const, Curve3D *);
void MotionPath::setCurve3D(Curve3D *) // 0x5547EA
{
    mangled_assert("?setCurve3D@MotionPath@@QAEXPAVCurve3D@@@Z");
    todo("implement");
    _sub_5547EA(this, arg);
}

_extern void _sub_554C07(MotionPath *const, float, float);
void MotionPath::setTimes(float, float) // 0x554C07
{
    mangled_assert("?setTimes@MotionPath@@QAEXMM@Z");
    todo("implement");
    _sub_554C07(this, arg, arg);
}

_extern bool _sub_5549CB(MotionPath *const, std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &, AnimCurve *);
bool MotionPath::setMayaCurve(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &, AnimCurve *) // 0x5549CB
{
    mangled_assert("?setMayaCurve@MotionPath@@QAE_NABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVAnimCurve@@@Z");
    todo("implement");
    bool __result = _sub_5549CB(this, arg, arg);
    return __result;
}

_extern void _sub_553BE0(MotionPath *const, float);
void MotionPath::addSegment(float) // 0x553BE0
{
    mangled_assert("?addSegment@MotionPath@@QAEXM@Z");
    todo("implement");
    _sub_553BE0(this, arg);
}

_extern __int32 _sub_5541B5(MotionPath *const, float);
__int32 MotionPath::findSegment(float) // 0x5541B5
{
    mangled_assert("?findSegment@MotionPath@@AAEHM@Z");
    todo("implement");
    __int32 __result = _sub_5541B5(this, arg);
    return __result;
}

_extern void _sub_554197(MotionPath *const, float, vector3 &, vector3 &);
void MotionPath::evaluateParametric(float, vector3 &, vector3 &) // 0x554197
{
    mangled_assert("?evaluateParametric@MotionPath@@AAEXMAAVvector3@@0@Z");
    todo("implement");
    _sub_554197(this, arg, arg, arg);
}

_extern void _sub_554152(MotionPath *const, float, vector3 &, vector3 &);
void MotionPath::evaluateArcLength(float, vector3 &, vector3 &) // 0x554152
{
    mangled_assert("?evaluateArcLength@MotionPath@@AAEXMAAVvector3@@0@Z");
    todo("implement");
    _sub_554152(this, arg, arg, arg);
}

_extern void _sub_553F6C(MotionPath *const, float, vector3 &, matrix3 &);
void MotionPath::evaluate(float, vector3 &, matrix3 &) // 0x553F6C
{
    mangled_assert("?evaluate@MotionPath@@QAEXMAAVvector3@@AAVmatrix3@@@Z");
    todo("implement");
    _sub_553F6C(this, arg, arg, arg);
}

_extern _sub_553744(MotionNode *const);
MotionNode::MotionNode() // 0x553744
{
    mangled_assert("??0MotionNode@@QAE@XZ");
    todo("implement");
    _sub_553744(this);
}

_extern void _sub_5538BA(MotionNode *const);
MotionNode::~MotionNode() // 0x5538BA
{
    mangled_assert("??1MotionNode@@UAE@XZ");
    todo("implement");
    _sub_5538BA(this);
}

_extern void _sub_5547DE(MotionNode *const, __int32);
void MotionNode::reverseAxis(__int32) // 0x5547DE
{
    mangled_assert("?reverseAxis@MotionNode@@QAEXH@Z");
    todo("implement");
    _sub_5547DE(this, arg);
}

_extern std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &_sub_55452E(MotionNode *const);
std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &MotionNode::getNodeName() // 0x55452E
{
    mangled_assert("?getNodeName@MotionNode@@QAEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ");
    todo("implement");
    std::basic_string<char,std::char_traits<char>,std::allocator<char> > const & __result = _sub_55452E(this);
    return __result;
}

_extern vector3 const &_sub_554547(MotionNode *const);
vector3 const &MotionNode::getNodeTranslation() // 0x554547
{
    mangled_assert("?getNodeTranslation@MotionNode@@QAEABVvector3@@XZ");
    todo("implement");
    vector3 const & __result = _sub_554547(this);
    return __result;
}

_extern vector3 const &_sub_554532(MotionNode *const);
vector3 const &MotionNode::getNodeRotation() // 0x554532
{
    mangled_assert("?getNodeRotation@MotionNode@@QAEABVvector3@@XZ");
    todo("implement");
    vector3 const & __result = _sub_554532(this);
    return __result;
}

_extern matrix3 const &_sub_55452A(MotionNode *const);
matrix3 const &MotionNode::getNodeCoordSys() // 0x55452A
{
    mangled_assert("?getNodeCoordSys@MotionNode@@QAEABVmatrix3@@XZ");
    todo("implement");
    matrix3 const & __result = _sub_55452A(this);
    return __result;
}

_extern AnimCurve *_sub_55454B(MotionNode *const, unsigned __int32);
AnimCurve *MotionNode::getNodeTranslationCurve(unsigned __int32) // 0x55454B
{
    mangled_assert("?getNodeTranslationCurve@MotionNode@@QAEPAVAnimCurve@@I@Z");
    todo("implement");
    AnimCurve * __result = _sub_55454B(this, arg);
    return __result;
}

_extern AnimCurve *_sub_554536(MotionNode *const, unsigned __int32);
AnimCurve *MotionNode::getNodeRotationCurve(unsigned __int32) // 0x554536
{
    mangled_assert("?getNodeRotationCurve@MotionNode@@QAEPAVAnimCurve@@I@Z");
    todo("implement");
    AnimCurve * __result = _sub_554536(this, arg);
    return __result;
}

_extern Sob *_sub_554560(MotionNode *const);
Sob *MotionNode::getSob() // 0x554560
{
    mangled_assert("?getSob@MotionNode@@QAEPAVSob@@XZ");
    todo("implement");
    Sob * __result = _sub_554560(this);
    return __result;
}

_extern Sob const *_sub_554579(MotionNode const *const);
Sob const *MotionNode::getSob() const // 0x554579
{
    mangled_assert("?getSob@MotionNode@@QBEPBVSob@@XZ");
    todo("implement");
    Sob const * __result = _sub_554579(this);
    return __result;
}

_extern vector3 const &_sub_5545E0(MotionNode *const);
vector3 const &MotionNode::getSobPosition() // 0x5545E0
{
    mangled_assert("?getSobPosition@MotionNode@@QAEABVvector3@@XZ");
    todo("implement");
    vector3 const & __result = _sub_5545E0(this);
    return __result;
}

_extern matrix3 const &_sub_55457E(MotionNode *const);
matrix3 const &MotionNode::getSobCoordSys() // 0x55457E
{
    mangled_assert("?getSobCoordSys@MotionNode@@QAEABVmatrix3@@XZ");
    todo("implement");
    matrix3 const & __result = _sub_55457E(this);
    return __result;
}

_extern vector3 const &_sub_5545BF(MotionNode *const);
vector3 const &MotionNode::getSobInterpolPosition() // 0x5545BF
{
    mangled_assert("?getSobInterpolPosition@MotionNode@@QAEABVvector3@@XZ");
    todo("implement");
    vector3 const & __result = _sub_5545BF(this);
    return __result;
}

_extern matrix3 const &_sub_55459C(MotionNode *const);
matrix3 const &MotionNode::getSobInterpolCoordSys() // 0x55459C
{
    mangled_assert("?getSobInterpolCoordSys@MotionNode@@QAEABVmatrix3@@XZ");
    todo("implement");
    matrix3 const & __result = _sub_55459C(this);
    return __result;
}

_extern void _sub_554AF2(MotionNode *const, std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &);
void MotionNode::setNodeName(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &) // 0x554AF2
{
    mangled_assert("?setNodeName@MotionNode@@QAEXABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z");
    todo("implement");
    _sub_554AF2(this, arg);
}

_extern void _sub_554B61(MotionNode *const, vector3 const &);
void MotionNode::setNodeTranslation(vector3 const &) // 0x554B61
{
    mangled_assert("?setNodeTranslation@MotionNode@@QAEXABVvector3@@@Z");
    todo("implement");
    _sub_554B61(this, arg);
}

_extern void _sub_554AFA(MotionNode *const, vector3 const &);
void MotionNode::setNodeRotation(vector3 const &) // 0x554AFA
{
    mangled_assert("?setNodeRotation@MotionNode@@QAEXABVvector3@@@Z");
    todo("implement");
    _sub_554AFA(this, arg);
}

_extern void _sub_554B72(MotionNode *const, unsigned __int32, AnimCurve *);
void MotionNode::setNodeTranslationCurve(unsigned __int32, AnimCurve *) // 0x554B72
{
    mangled_assert("?setNodeTranslationCurve@MotionNode@@UAEXIPAVAnimCurve@@@Z");
    todo("implement");
    _sub_554B72(this, arg, arg);
}

_extern void _sub_554B0B(MotionNode *const, unsigned __int32, AnimCurve *);
void MotionNode::setNodeRotationCurve(unsigned __int32, AnimCurve *) // 0x554B0B
{
    mangled_assert("?setNodeRotationCurve@MotionNode@@UAEXIPAVAnimCurve@@@Z");
    todo("implement");
    _sub_554B0B(this, arg, arg);
}

_extern bool _sub_554A3E(MotionNode *const, std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &, AnimCurve *);
bool MotionNode::setNodeMayaCurve(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &, AnimCurve *) // 0x554A3E
{
    mangled_assert("?setNodeMayaCurve@MotionNode@@UAE_NABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVAnimCurve@@@Z");
    todo("implement");
    bool __result = _sub_554A3E(this, arg, arg);
    return __result;
}

_extern void _sub_554966(MotionNode *const, vector3 const &);
void MotionNode::setLastTranslationKeyframe(vector3 const &) // 0x554966
{
    mangled_assert("?setLastTranslationKeyframe@MotionNode@@UAEXABVvector3@@@Z");
    todo("implement");
    _sub_554966(this, arg);
}

_extern void _sub_5544D6(MotionNode *const, vector3 &);
void MotionNode::getLastTranslationKeyframe(vector3 &) // 0x5544D6
{
    mangled_assert("?getLastTranslationKeyframe@MotionNode@@UAEXAAVvector3@@@Z");
    todo("implement");
    _sub_5544D6(this, arg);
}

_extern void _sub_554346(MotionNode *const, matrix3 &);
void MotionNode::getLastOrientationKeyframe(matrix3 &) // 0x554346
{
    mangled_assert("?getLastOrientationKeyframe@MotionNode@@UAEXAAVmatrix3@@@Z");
    todo("implement");
    _sub_554346(this, arg);
}

_extern void _sub_554693(MotionNode *const, float);
void MotionNode::nodeUpdate(float) // 0x554693
{
    mangled_assert("?nodeUpdate@MotionNode@@UAEXM@Z");
    todo("implement");
    _sub_554693(this, arg);
}

_extern _sub_55362F(MotionFollower *const);
MotionFollower::MotionFollower() // 0x55362F
{
    mangled_assert("??0MotionFollower@@QAE@XZ");
    todo("implement");
    _sub_55362F(this);
}

_extern void _sub_55382A(MotionFollower *const);
MotionFollower::~MotionFollower() // 0x55382A
{
    mangled_assert("??1MotionFollower@@UAE@XZ");
    todo("implement");
    _sub_55382A(this);
}

_extern void _sub_5549BE(MotionFollower *const, MotionLeader *);
void MotionFollower::setLeader(MotionLeader *) // 0x5549BE
{
    mangled_assert("?setLeader@MotionFollower@@QAEXPAVMotionLeader@@@Z");
    todo("implement");
    _sub_5549BE(this, arg);
}

_extern char const *_sub_55451E(MotionFollower *const);
char const *MotionFollower::getName() // 0x55451E
{
    mangled_assert("?getName@MotionFollower@@QAEPBDXZ");
    todo("implement");
    char const * __result = _sub_55451E(this);
    return __result;
}

_extern unsigned __int32 _sub_554323(MotionFollower *const);
unsigned __int32 MotionFollower::getInstance() // 0x554323
{
    mangled_assert("?getInstance@MotionFollower@@QAEIXZ");
    todo("implement");
    unsigned __int32 __result = _sub_554323(this);
    return __result;
}

_extern void _sub_554C20(MotionFollower *const, SobType, char const *, unsigned __int32);
void MotionFollower::setType(SobType, char const *, unsigned __int32) // 0x554C20
{
    mangled_assert("?setType@MotionFollower@@QAEXW4SobType@@PBDI@Z");
    todo("implement");
    _sub_554C20(this, arg, arg, arg);
}

_extern void _sub_554BC8(MotionFollower *const, char const *);
void MotionFollower::setSobGroupName(char const *) // 0x554BC8
{
    mangled_assert("?setSobGroupName@MotionFollower@@QAEXPBD@Z");
    todo("implement");
    _sub_554BC8(this, arg);
}

_extern char const *_sub_55458D(MotionFollower *const);
char const *MotionFollower::getSobGroupName() // 0x55458D
{
    mangled_assert("?getSobGroupName@MotionFollower@@QAEPBDXZ");
    todo("implement");
    char const * __result = _sub_55458D(this);
    return __result;
}

_extern void _sub_55485D(MotionFollower *const, char const *);
void MotionFollower::setKeepMovingTarget(char const *) // 0x55485D
{
    mangled_assert("?setKeepMovingTarget@MotionFollower@@QAEXPBD@Z");
    todo("implement");
    _sub_55485D(this, arg);
}

_extern char const *_sub_55432A(MotionFollower *const);
char const *MotionFollower::getKeepMovingTarget() // 0x55432A
{
    mangled_assert("?getKeepMovingTarget@MotionFollower@@QAEPBDXZ");
    todo("implement");
    char const * __result = _sub_55432A(this);
    return __result;
}

_extern void _sub_55487E(MotionFollower *const, vector3 const &);
void MotionFollower::setLastTranslationKeyframe(vector3 const &) // 0x55487E
{
    mangled_assert("?setLastTranslationKeyframe@MotionFollower@@UAEXABVvector3@@@Z");
    todo("implement");
    _sub_55487E(this, arg);
}

_extern void _sub_5543DA(MotionFollower *const, vector3 &);
void MotionFollower::getLastTranslationKeyframe(vector3 &) // 0x5543DA
{
    mangled_assert("?getLastTranslationKeyframe@MotionFollower@@UAEXAAVvector3@@@Z");
    todo("implement");
    _sub_5543DA(this, arg);
}

_extern void _sub_5547F3(MotionFollower *const, unsigned __int32, bool);
void MotionFollower::setDynamicFlag(unsigned __int32, bool) // 0x5547F3
{
    mangled_assert("?setDynamicFlag@MotionFollower@@QAEXI_N@Z");
    todo("implement");
    _sub_5547F3(this, arg, arg);
}

_extern bool _sub_554680(MotionFollower *const, unsigned __int32);
bool MotionFollower::isDynamicFlagSet(unsigned __int32) // 0x554680
{
    mangled_assert("?isDynamicFlagSet@MotionFollower@@QAE_NI@Z");
    todo("implement");
    bool __result = _sub_554680(this, arg);
    return __result;
}

_extern bool _sub_554745(MotionFollower *const, SobType, std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &);
bool MotionFollower::precacheObject(SobType, std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &) // 0x554745
{
    mangled_assert("?precacheObject@MotionFollower@@AAE_NW4SobType@@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z");
    todo("implement");
    bool __result = _sub_554745(this, arg, arg);
    return __result;
}

_extern Sob *_sub_553C77(MotionFollower *const, SobType, std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &);
Sob *MotionFollower::createObject(SobType, std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &) // 0x553C77
{
    mangled_assert("?createObject@MotionFollower@@AAEPAVSob@@W4SobType@@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z");
    todo("implement");
    Sob * __result = _sub_553C77(this, arg, arg);
    return __result;
}

_extern void _sub_553F15(MotionFollower *const, Sob *);
void MotionFollower::deleteObject(Sob *) // 0x553F15
{
    mangled_assert("?deleteObject@MotionFollower@@AAEXPAVSob@@@Z");
    todo("implement");
    _sub_553F15(this, arg);
}

_extern void _sub_554738(MotionFollower *const);
void MotionFollower::precache() // 0x554738
{
    mangled_assert("?precache@MotionFollower@@QAEXXZ");
    todo("implement");
    _sub_554738(this);
}

_extern void _sub_554C4F(MotionFollower *const);
void MotionFollower::start() // 0x554C4F
{
    mangled_assert("?start@MotionFollower@@QAEXXZ");
    todo("implement");
    _sub_554C4F(this);
}

_extern void _sub_554CB8(MotionFollower *const);
void MotionFollower::stop() // 0x554CB8
{
    mangled_assert("?stop@MotionFollower@@QAEXXZ");
    todo("implement");
    _sub_554CB8(this);
}

_extern void _sub_554D1A(MotionFollower *const, float, vector3 const &, matrix3 const &);
void MotionFollower::update(float, vector3 const &, matrix3 const &) // 0x554D1A
{
    mangled_assert("?update@MotionFollower@@QAEXMABVvector3@@ABVmatrix3@@@Z");
    todo("implement");
    _sub_554D1A(this, arg, arg, arg);
}

_extern void _sub_55479C(MotionFollower *const, float);
void MotionFollower::renderTimeUpdate(float) // 0x55479C
{
    mangled_assert("?renderTimeUpdate@MotionFollower@@QAEXM@Z");
    todo("implement");
    _sub_55479C(this, arg);
}

_extern void _sub_553B6E(MotionFollower *const, FXManager::Handle const &);
void MotionFollower::addEffect(FXManager::Handle const &) // 0x553B6E
{
    mangled_assert("?addEffect@MotionFollower@@QAEXABUHandle@FXManager@@@Z");
    todo("implement");
    _sub_553B6E(this, arg);
}

_extern void _sub_554CE9(MotionFollower *const);
void MotionFollower::stopEffects() // 0x554CE9
{
    mangled_assert("?stopEffects@MotionFollower@@QAEXXZ");
    todo("implement");
    _sub_554CE9(this);
}

_extern void _sub_553F3B(MotionFollower *const);
void MotionFollower::destroyEffects() // 0x553F3B
{
    mangled_assert("?destroyEffects@MotionFollower@@QAEXXZ");
    todo("implement");
    _sub_553F3B(this);
}

_extern _sub_5536C4(MotionLeader *const);
MotionLeader::MotionLeader() // 0x5536C4
{
    mangled_assert("??0MotionLeader@@QAE@XZ");
    todo("implement");
    _sub_5536C4(this);
}

_extern void _sub_553859(MotionLeader *const);
MotionLeader::~MotionLeader() // 0x553859
{
    mangled_assert("??1MotionLeader@@UAE@XZ");
    todo("implement");
    _sub_553859(this);
}

_extern void _sub_553C00(MotionLeader *const, MotionPath *);
void MotionLeader::attachToMotionPath(MotionPath *) // 0x553C00
{
    mangled_assert("?attachToMotionPath@MotionLeader@@QAEXPAVMotionPath@@@Z");
    todo("implement");
    _sub_553C00(this, arg);
}

_extern void _sub_554959(MotionLeader *const, vector3 const &);
void MotionLeader::setLastTranslationKeyframe(vector3 const &) // 0x554959
{
    mangled_assert("?setLastTranslationKeyframe@MotionLeader@@UAEXABVvector3@@@Z");
    todo("implement");
    _sub_554959(this, arg);
}

_extern void _sub_5544C9(MotionLeader *const, vector3 &);
void MotionLeader::getLastTranslationKeyframe(vector3 &) // 0x5544C9
{
    mangled_assert("?getLastTranslationKeyframe@MotionLeader@@UAEXAAVvector3@@@Z");
    todo("implement");
    _sub_5544C9(this, arg);
}

_extern void _sub_554339(MotionLeader *const, matrix3 &);
void MotionLeader::getLastOrientationKeyframe(matrix3 &) // 0x554339
{
    mangled_assert("?getLastOrientationKeyframe@MotionLeader@@UAEXAAVmatrix3@@@Z");
    todo("implement");
    _sub_554339(this, arg);
}

_extern void _sub_555078(MotionLeader *const, float, vector3 const &, matrix3 const &);
void MotionLeader::update(float, vector3 const &, matrix3 const &) // 0x555078
{
    mangled_assert("?update@MotionLeader@@QAEXMABVvector3@@ABVmatrix3@@@Z");
    todo("implement");
    _sub_555078(this, arg, arg, arg);
}

_extern void _sub_5547BD(MotionLeader *const, float);
void MotionLeader::renderTimeUpdate(float) // 0x5547BD
{
    mangled_assert("?renderTimeUpdate@MotionLeader@@QAEXM@Z");
    todo("implement");
    _sub_5547BD(this, arg);
}

_extern _sub_55360E(MotionCamera *const);
MotionCamera::MotionCamera() // 0x55360E
{
    mangled_assert("??0MotionCamera@@QAE@XZ");
    todo("implement");
    _sub_55360E(this);
}

_extern void _sub_5537E6(MotionCamera *const);
MotionCamera::~MotionCamera() // 0x5537E6
{
    mangled_assert("??1MotionCamera@@QAE@XZ");
    todo("implement");
    _sub_5537E6(this);
}

_extern void _sub_554BE9(MotionCamera *const, MotionFollower *);
void MotionCamera::setTarget(MotionFollower *) // 0x554BE9
{
    mangled_assert("?setTarget@MotionCamera@@QAEXPAVMotionFollower@@@Z");
    todo("implement");
    _sub_554BE9(this, arg);
}

_extern void _sub_554811(MotionCamera *const, MotionFollower *);
void MotionCamera::setEye(MotionFollower *) // 0x554811
{
    mangled_assert("?setEye@MotionCamera@@QAEXPAVMotionFollower@@@Z");
    todo("implement");
    _sub_554811(this, arg);
}

_extern void _sub_55482F(MotionCamera *const, float, float, float);
void MotionCamera::setFocalLength(float, float, float) // 0x55482F
{
    mangled_assert("?setFocalLength@MotionCamera@@QAEXMMM@Z");
    todo("implement");
    _sub_55482F(this, arg, arg, arg);
}

_extern void _sub_554853(MotionCamera *const, AnimCurve *);
void MotionCamera::setFocalLengthCurve(AnimCurve *) // 0x554853
{
    mangled_assert("?setFocalLengthCurve@MotionCamera@@QAEXPAVAnimCurve@@@Z");
    todo("implement");
    _sub_554853(this, arg);
}

_extern MotionFollower *_sub_5545EF(MotionCamera *const);
MotionFollower *MotionCamera::getTarget() // 0x5545EF
{
    mangled_assert("?getTarget@MotionCamera@@QAEPAVMotionFollower@@XZ");
    todo("implement");
    MotionFollower * __result = _sub_5545EF(this);
    return __result;
}

_extern MotionFollower *_sub_5541F5(MotionCamera *const);
MotionFollower *MotionCamera::getEye() // 0x5541F5
{
    mangled_assert("?getEye@MotionCamera@@QAEPAVMotionFollower@@XZ");
    todo("implement");
    MotionFollower * __result = _sub_5541F5(this);
    return __result;
}

_extern void _sub_5542EB(MotionCamera *const, vector3 &);
void MotionCamera::getEyeInterpolPosition(vector3 &) // 0x5542EB
{
    mangled_assert("?getEyeInterpolPosition@MotionCamera@@QAEXAAVvector3@@@Z");
    todo("implement");
    _sub_5542EB(this, arg);
}

_extern bool _sub_5545F3(MotionCamera *const, vector3 &);
bool MotionCamera::getTargetInterpolPosition(vector3 &) // 0x5545F3
{
    mangled_assert("?getTargetInterpolPosition@MotionCamera@@QAE_NAAVvector3@@@Z");
    todo("implement");
    bool __result = _sub_5545F3(this, arg);
    return __result;
}

_extern void _sub_554272(MotionCamera *const, matrix3 &);
void MotionCamera::getEyeInterpolCoordSys(matrix3 &) // 0x554272
{
    mangled_assert("?getEyeInterpolCoordSys@MotionCamera@@QAEXAAVmatrix3@@@Z");
    todo("implement");
    _sub_554272(this, arg);
}

_extern void _sub_554303(MotionCamera *const, vector3 &);
void MotionCamera::getEyePosition(vector3 &) // 0x554303
{
    mangled_assert("?getEyePosition@MotionCamera@@QAEXAAVvector3@@@Z");
    todo("implement");
    _sub_554303(this, arg);
}

_extern void _sub_5541F9(MotionCamera *const, matrix3 &);
void MotionCamera::getEyeCoordSys(matrix3 &) // 0x5541F9
{
    mangled_assert("?getEyeCoordSys@MotionCamera@@QAEXAAVmatrix3@@@Z");
    todo("implement");
    _sub_5541F9(this, arg);
}

_extern float _sub_55431B(MotionCamera *const);
float MotionCamera::getFocalLength() // 0x55431B
{
    mangled_assert("?getFocalLength@MotionCamera@@QAEMXZ");
    todo("implement");
    float __result = _sub_55431B(this);
    return __result;
}

_extern float _sub_554615(MotionCamera *const);
float MotionCamera::getVerticalFOV() // 0x554615
{
    mangled_assert("?getVerticalFOV@MotionCamera@@QAEMXZ");
    todo("implement");
    float __result = _sub_554615(this);
    return __result;
}

_extern void _sub_55477A(MotionCamera *const, float, float);
void MotionCamera::renderTimeUpdate(float, float) // 0x55477A
{
    mangled_assert("?renderTimeUpdate@MotionCamera@@QAEXMM@Z");
    todo("implement");
    _sub_55477A(this, arg, arg);
}

/* ---------- private code */

_extern void _sub_553A03(vector3 const &, MotionNode::RotateOrder, matrix3 &);
_static void GetRotateMatrix(vector3 const &angles, MotionNode::RotateOrder ro, matrix3 &output) // 0x553A03
{
    mangled_assert("GetRotateMatrix");
    todo("implement");
    _sub_553A03(angles, ro, output);
}

_extern Sob *_sub_553EBA(char const *, Player *);
_static Sob *createShip(char const *shipName, Player *pPlayer) // 0x553EBA
{
    mangled_assert("createShip");
    todo("implement");
    Sob * __result = _sub_553EBA(shipName, pPlayer);
    return __result;
}

_extern Sob *_sub_553C14(char const *);
_static Sob *createAsteroid(char const *resourceName) // 0x553C14
{
    mangled_assert("createAsteroid");
    todo("implement");
    Sob * __result = _sub_553C14(resourceName);
    return __result;
}

_extern Sob *_sub_553E57(char const *);
_static Sob *createSalvage(char const *resourceName) // 0x553E57
{
    mangled_assert("createSalvage");
    todo("implement");
    Sob * __result = _sub_553E57(resourceName);
    return __result;
}

_extern Sob *_sub_553D9A(char const *);
_static Sob *createPebble(char const *resourceName) // 0x553D9A
{
    mangled_assert("createPebble");
    todo("implement");
    Sob * __result = _sub_553D9A(resourceName);
    return __result;
}

_extern Sob *_sub_553DE7(char const *);
_static Sob *createPoint(char const *name) // 0x553DE7
{
    mangled_assert("createPoint");
    todo("implement");
    Sob * __result = _sub_553DE7(name);
    return __result;
}
#endif
