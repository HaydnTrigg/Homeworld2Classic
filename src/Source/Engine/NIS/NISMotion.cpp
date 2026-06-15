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

MotionPath::MotionPath() // 0x5537AE
{
    mangled_assert("??0MotionPath@@QAE@XZ");
    todo("implement");
}

MotionPath::~MotionPath() // 0x553931
{
    mangled_assert("??1MotionPath@@QAE@XZ");
    todo("implement");
}

void MotionPath::setCurve3D(Curve3D *) // 0x5547EA
{
    mangled_assert("?setCurve3D@MotionPath@@QAEXPAVCurve3D@@@Z");
    todo("implement");
}

void MotionPath::setTimes(float, float) // 0x554C07
{
    mangled_assert("?setTimes@MotionPath@@QAEXMM@Z");
    todo("implement");
}

bool MotionPath::setMayaCurve(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &, AnimCurve *) // 0x5549CB
{
    mangled_assert("?setMayaCurve@MotionPath@@QAE_NABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVAnimCurve@@@Z");
    todo("implement");
}

void MotionPath::addSegment(float) // 0x553BE0
{
    mangled_assert("?addSegment@MotionPath@@QAEXM@Z");
    todo("implement");
}

__int32 MotionPath::findSegment(float) // 0x5541B5
{
    mangled_assert("?findSegment@MotionPath@@AAEHM@Z");
    todo("implement");
}

void MotionPath::evaluateParametric(float, vector3 &, vector3 &) // 0x554197
{
    mangled_assert("?evaluateParametric@MotionPath@@AAEXMAAVvector3@@0@Z");
    todo("implement");
}

void MotionPath::evaluateArcLength(float, vector3 &, vector3 &) // 0x554152
{
    mangled_assert("?evaluateArcLength@MotionPath@@AAEXMAAVvector3@@0@Z");
    todo("implement");
}

void MotionPath::evaluate(float, vector3 &, matrix3 &) // 0x553F6C
{
    mangled_assert("?evaluate@MotionPath@@QAEXMAAVvector3@@AAVmatrix3@@@Z");
    todo("implement");
}

MotionNode::MotionNode() // 0x553744
{
    mangled_assert("??0MotionNode@@QAE@XZ");
    todo("implement");
}

MotionNode::~MotionNode() // 0x5538BA
{
    mangled_assert("??1MotionNode@@UAE@XZ");
    todo("implement");
}

void MotionNode::reverseAxis(__int32) // 0x5547DE
{
    mangled_assert("?reverseAxis@MotionNode@@QAEXH@Z");
    todo("implement");
}

std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &MotionNode::getNodeName() // 0x55452E
{
    mangled_assert("?getNodeName@MotionNode@@QAEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ");
    todo("implement");
}

vector3 const &MotionNode::getNodeTranslation() // 0x554547
{
    mangled_assert("?getNodeTranslation@MotionNode@@QAEABVvector3@@XZ");
    todo("implement");
}

vector3 const &MotionNode::getNodeRotation() // 0x554532
{
    mangled_assert("?getNodeRotation@MotionNode@@QAEABVvector3@@XZ");
    todo("implement");
}

matrix3 const &MotionNode::getNodeCoordSys() // 0x55452A
{
    mangled_assert("?getNodeCoordSys@MotionNode@@QAEABVmatrix3@@XZ");
    todo("implement");
}

AnimCurve *MotionNode::getNodeTranslationCurve(unsigned __int32) // 0x55454B
{
    mangled_assert("?getNodeTranslationCurve@MotionNode@@QAEPAVAnimCurve@@I@Z");
    todo("implement");
}

AnimCurve *MotionNode::getNodeRotationCurve(unsigned __int32) // 0x554536
{
    mangled_assert("?getNodeRotationCurve@MotionNode@@QAEPAVAnimCurve@@I@Z");
    todo("implement");
}

Sob *MotionNode::getSob() // 0x554560
{
    mangled_assert("?getSob@MotionNode@@QAEPAVSob@@XZ");
    todo("implement");
}

Sob const *MotionNode::getSob() const // 0x554579
{
    mangled_assert("?getSob@MotionNode@@QBEPBVSob@@XZ");
    todo("implement");
}

vector3 const &MotionNode::getSobPosition() // 0x5545E0
{
    mangled_assert("?getSobPosition@MotionNode@@QAEABVvector3@@XZ");
    todo("implement");
}

matrix3 const &MotionNode::getSobCoordSys() // 0x55457E
{
    mangled_assert("?getSobCoordSys@MotionNode@@QAEABVmatrix3@@XZ");
    todo("implement");
}

vector3 const &MotionNode::getSobInterpolPosition() // 0x5545BF
{
    mangled_assert("?getSobInterpolPosition@MotionNode@@QAEABVvector3@@XZ");
    todo("implement");
}

matrix3 const &MotionNode::getSobInterpolCoordSys() // 0x55459C
{
    mangled_assert("?getSobInterpolCoordSys@MotionNode@@QAEABVmatrix3@@XZ");
    todo("implement");
}

void MotionNode::setNodeName(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &) // 0x554AF2
{
    mangled_assert("?setNodeName@MotionNode@@QAEXABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z");
    todo("implement");
}

void MotionNode::setNodeTranslation(vector3 const &) // 0x554B61
{
    mangled_assert("?setNodeTranslation@MotionNode@@QAEXABVvector3@@@Z");
    todo("implement");
}

void MotionNode::setNodeRotation(vector3 const &) // 0x554AFA
{
    mangled_assert("?setNodeRotation@MotionNode@@QAEXABVvector3@@@Z");
    todo("implement");
}

void MotionNode::setNodeTranslationCurve(unsigned __int32, AnimCurve *) // 0x554B72
{
    mangled_assert("?setNodeTranslationCurve@MotionNode@@UAEXIPAVAnimCurve@@@Z");
    todo("implement");
}

void MotionNode::setNodeRotationCurve(unsigned __int32, AnimCurve *) // 0x554B0B
{
    mangled_assert("?setNodeRotationCurve@MotionNode@@UAEXIPAVAnimCurve@@@Z");
    todo("implement");
}

bool MotionNode::setNodeMayaCurve(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &, AnimCurve *) // 0x554A3E
{
    mangled_assert("?setNodeMayaCurve@MotionNode@@UAE_NABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVAnimCurve@@@Z");
    todo("implement");
}

void MotionNode::setLastTranslationKeyframe(vector3 const &) // 0x554966
{
    mangled_assert("?setLastTranslationKeyframe@MotionNode@@UAEXABVvector3@@@Z");
    todo("implement");
}

void MotionNode::getLastTranslationKeyframe(vector3 &) // 0x5544D6
{
    mangled_assert("?getLastTranslationKeyframe@MotionNode@@UAEXAAVvector3@@@Z");
    todo("implement");
}

void MotionNode::getLastOrientationKeyframe(matrix3 &) // 0x554346
{
    mangled_assert("?getLastOrientationKeyframe@MotionNode@@UAEXAAVmatrix3@@@Z");
    todo("implement");
}

void MotionNode::nodeUpdate(float) // 0x554693
{
    mangled_assert("?nodeUpdate@MotionNode@@UAEXM@Z");
    todo("implement");
}

MotionFollower::MotionFollower() // 0x55362F
{
    mangled_assert("??0MotionFollower@@QAE@XZ");
    todo("implement");
}

MotionFollower::~MotionFollower() // 0x55382A
{
    mangled_assert("??1MotionFollower@@UAE@XZ");
    todo("implement");
}

void MotionFollower::setLeader(MotionLeader *) // 0x5549BE
{
    mangled_assert("?setLeader@MotionFollower@@QAEXPAVMotionLeader@@@Z");
    todo("implement");
}

char const *MotionFollower::getName() // 0x55451E
{
    mangled_assert("?getName@MotionFollower@@QAEPBDXZ");
    todo("implement");
}

unsigned __int32 MotionFollower::getInstance() // 0x554323
{
    mangled_assert("?getInstance@MotionFollower@@QAEIXZ");
    todo("implement");
}

void MotionFollower::setType(SobType, char const *, unsigned __int32) // 0x554C20
{
    mangled_assert("?setType@MotionFollower@@QAEXW4SobType@@PBDI@Z");
    todo("implement");
}

void MotionFollower::setSobGroupName(char const *) // 0x554BC8
{
    mangled_assert("?setSobGroupName@MotionFollower@@QAEXPBD@Z");
    todo("implement");
}

char const *MotionFollower::getSobGroupName() // 0x55458D
{
    mangled_assert("?getSobGroupName@MotionFollower@@QAEPBDXZ");
    todo("implement");
}

void MotionFollower::setKeepMovingTarget(char const *) // 0x55485D
{
    mangled_assert("?setKeepMovingTarget@MotionFollower@@QAEXPBD@Z");
    todo("implement");
}

char const *MotionFollower::getKeepMovingTarget() // 0x55432A
{
    mangled_assert("?getKeepMovingTarget@MotionFollower@@QAEPBDXZ");
    todo("implement");
}

void MotionFollower::setLastTranslationKeyframe(vector3 const &) // 0x55487E
{
    mangled_assert("?setLastTranslationKeyframe@MotionFollower@@UAEXABVvector3@@@Z");
    todo("implement");
}

void MotionFollower::getLastTranslationKeyframe(vector3 &) // 0x5543DA
{
    mangled_assert("?getLastTranslationKeyframe@MotionFollower@@UAEXAAVvector3@@@Z");
    todo("implement");
}

void MotionFollower::setDynamicFlag(unsigned __int32, bool) // 0x5547F3
{
    mangled_assert("?setDynamicFlag@MotionFollower@@QAEXI_N@Z");
    todo("implement");
}

bool MotionFollower::isDynamicFlagSet(unsigned __int32) // 0x554680
{
    mangled_assert("?isDynamicFlagSet@MotionFollower@@QAE_NI@Z");
    todo("implement");
}

bool MotionFollower::precacheObject(SobType, std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &) // 0x554745
{
    mangled_assert("?precacheObject@MotionFollower@@AAE_NW4SobType@@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z");
    todo("implement");
}

Sob *MotionFollower::createObject(SobType, std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &) // 0x553C77
{
    mangled_assert("?createObject@MotionFollower@@AAEPAVSob@@W4SobType@@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z");
    todo("implement");
}

void MotionFollower::deleteObject(Sob *) // 0x553F15
{
    mangled_assert("?deleteObject@MotionFollower@@AAEXPAVSob@@@Z");
    todo("implement");
}

void MotionFollower::precache() // 0x554738
{
    mangled_assert("?precache@MotionFollower@@QAEXXZ");
    todo("implement");
}

void MotionFollower::start() // 0x554C4F
{
    mangled_assert("?start@MotionFollower@@QAEXXZ");
    todo("implement");
}

void MotionFollower::stop() // 0x554CB8
{
    mangled_assert("?stop@MotionFollower@@QAEXXZ");
    todo("implement");
}

void MotionFollower::update(float, vector3 const &, matrix3 const &) // 0x554D1A
{
    mangled_assert("?update@MotionFollower@@QAEXMABVvector3@@ABVmatrix3@@@Z");
    todo("implement");
}

void MotionFollower::renderTimeUpdate(float) // 0x55479C
{
    mangled_assert("?renderTimeUpdate@MotionFollower@@QAEXM@Z");
    todo("implement");
}

void MotionFollower::addEffect(FXManager::Handle const &) // 0x553B6E
{
    mangled_assert("?addEffect@MotionFollower@@QAEXABUHandle@FXManager@@@Z");
    todo("implement");
}

void MotionFollower::stopEffects() // 0x554CE9
{
    mangled_assert("?stopEffects@MotionFollower@@QAEXXZ");
    todo("implement");
}

void MotionFollower::destroyEffects() // 0x553F3B
{
    mangled_assert("?destroyEffects@MotionFollower@@QAEXXZ");
    todo("implement");
}

MotionLeader::MotionLeader() // 0x5536C4
{
    mangled_assert("??0MotionLeader@@QAE@XZ");
    todo("implement");
}

MotionLeader::~MotionLeader() // 0x553859
{
    mangled_assert("??1MotionLeader@@UAE@XZ");
    todo("implement");
}

void MotionLeader::attachToMotionPath(MotionPath *) // 0x553C00
{
    mangled_assert("?attachToMotionPath@MotionLeader@@QAEXPAVMotionPath@@@Z");
    todo("implement");
}

void MotionLeader::setLastTranslationKeyframe(vector3 const &) // 0x554959
{
    mangled_assert("?setLastTranslationKeyframe@MotionLeader@@UAEXABVvector3@@@Z");
    todo("implement");
}

void MotionLeader::getLastTranslationKeyframe(vector3 &) // 0x5544C9
{
    mangled_assert("?getLastTranslationKeyframe@MotionLeader@@UAEXAAVvector3@@@Z");
    todo("implement");
}

void MotionLeader::getLastOrientationKeyframe(matrix3 &) // 0x554339
{
    mangled_assert("?getLastOrientationKeyframe@MotionLeader@@UAEXAAVmatrix3@@@Z");
    todo("implement");
}

void MotionLeader::update(float, vector3 const &, matrix3 const &) // 0x555078
{
    mangled_assert("?update@MotionLeader@@QAEXMABVvector3@@ABVmatrix3@@@Z");
    todo("implement");
}

void MotionLeader::renderTimeUpdate(float) // 0x5547BD
{
    mangled_assert("?renderTimeUpdate@MotionLeader@@QAEXM@Z");
    todo("implement");
}

MotionCamera::MotionCamera() // 0x55360E
{
    mangled_assert("??0MotionCamera@@QAE@XZ");
    todo("implement");
}

MotionCamera::~MotionCamera() // 0x5537E6
{
    mangled_assert("??1MotionCamera@@QAE@XZ");
    todo("implement");
}

void MotionCamera::setTarget(MotionFollower *) // 0x554BE9
{
    mangled_assert("?setTarget@MotionCamera@@QAEXPAVMotionFollower@@@Z");
    todo("implement");
}

void MotionCamera::setEye(MotionFollower *) // 0x554811
{
    mangled_assert("?setEye@MotionCamera@@QAEXPAVMotionFollower@@@Z");
    todo("implement");
}

void MotionCamera::setFocalLength(float, float, float) // 0x55482F
{
    mangled_assert("?setFocalLength@MotionCamera@@QAEXMMM@Z");
    todo("implement");
}

void MotionCamera::setFocalLengthCurve(AnimCurve *) // 0x554853
{
    mangled_assert("?setFocalLengthCurve@MotionCamera@@QAEXPAVAnimCurve@@@Z");
    todo("implement");
}

MotionFollower *MotionCamera::getTarget() // 0x5545EF
{
    mangled_assert("?getTarget@MotionCamera@@QAEPAVMotionFollower@@XZ");
    todo("implement");
}

MotionFollower *MotionCamera::getEye() // 0x5541F5
{
    mangled_assert("?getEye@MotionCamera@@QAEPAVMotionFollower@@XZ");
    todo("implement");
}

void MotionCamera::getEyeInterpolPosition(vector3 &) // 0x5542EB
{
    mangled_assert("?getEyeInterpolPosition@MotionCamera@@QAEXAAVvector3@@@Z");
    todo("implement");
}

bool MotionCamera::getTargetInterpolPosition(vector3 &) // 0x5545F3
{
    mangled_assert("?getTargetInterpolPosition@MotionCamera@@QAE_NAAVvector3@@@Z");
    todo("implement");
}

void MotionCamera::getEyeInterpolCoordSys(matrix3 &) // 0x554272
{
    mangled_assert("?getEyeInterpolCoordSys@MotionCamera@@QAEXAAVmatrix3@@@Z");
    todo("implement");
}

void MotionCamera::getEyePosition(vector3 &) // 0x554303
{
    mangled_assert("?getEyePosition@MotionCamera@@QAEXAAVvector3@@@Z");
    todo("implement");
}

void MotionCamera::getEyeCoordSys(matrix3 &) // 0x5541F9
{
    mangled_assert("?getEyeCoordSys@MotionCamera@@QAEXAAVmatrix3@@@Z");
    todo("implement");
}

float MotionCamera::getFocalLength() // 0x55431B
{
    mangled_assert("?getFocalLength@MotionCamera@@QAEMXZ");
    todo("implement");
}

float MotionCamera::getVerticalFOV() // 0x554615
{
    mangled_assert("?getVerticalFOV@MotionCamera@@QAEMXZ");
    todo("implement");
}

void MotionCamera::renderTimeUpdate(float, float) // 0x55477A
{
    mangled_assert("?renderTimeUpdate@MotionCamera@@QAEXMM@Z");
    todo("implement");
}

/* ---------- private code */

_static void GetRotateMatrix(vector3 const &angles, MotionNode::RotateOrder ro, matrix3 &output) // 0x553A03
{
    mangled_assert("GetRotateMatrix");
    todo("implement");
}

_static Sob *createShip(char const *shipName, Player *pPlayer) // 0x553EBA
{
    mangled_assert("createShip");
    todo("implement");
}

_static Sob *createAsteroid(char const *resourceName) // 0x553C14
{
    mangled_assert("createAsteroid");
    todo("implement");
}

_static Sob *createSalvage(char const *resourceName) // 0x553E57
{
    mangled_assert("createSalvage");
    todo("implement");
}

_static Sob *createPebble(char const *resourceName) // 0x553D9A
{
    mangled_assert("createPebble");
    todo("implement");
}

_static Sob *createPoint(char const *name) // 0x553DE7
{
    mangled_assert("createPoint");
    todo("implement");
}
#endif
