#if 0
/* ---------- headers */

#include "decomp.h"
#include <assist\stlexsmallvector.h>
#include <xstring>
#include <xmemory0>
#include <Mathlib\matrix4.h>
#include <playerresourcetype.h>
#include <pch.h>
#include <TeamColourRegistry.h>
#include <WeaponStatic.h>
#include <savegame.h>
#include <dbdefines.h>
#include <task.h>
#include <UnitCaps\UnitCaps.h>
#include <stack>
#include <SobWithMeshStatic.h>
#include <SoundManager\SoundEntityHandle.h>
#include <SOBGroupManager.h>
#include <WeaponAnimatedTurret.h>
#include <HierarchyDynamic.h>
#include <Mathlib\matrix3.h>
#include <ship.h>
#include <hash_map>
#include <weapon.h>
#include <HierarchyStatic.h>
#include <Decal\DecalRefMesh.h>
#include <SobWithMesh.h>
#include <xhash>
#include <WeaponFire\WeaponFire.h>
#include <Collision\Primitives\mesh.h>
#include <SobRigidBody.h>
#include <AnimCurve.h>
#include <weaponfiretypes.h>
#include <Collision\Primitives\triangle.h>
#include <SobRigidBodyStatic.h>
#include <new>
#include <exception>
#include <xstddef>
#include <type_traits>
#include <MeshAnimation.h>
#include <Collision\Primitives\obb.h>
#include <ShieldTypes.h>
#include <Collision\BVH\octree.h>
#include <Collision\BVH\span.h>
#include <Collision\BVH\Internal\span_i.h>
#include <Collision\Collision.h>
#include <config.h>
#include <Collision\BVH\proxy.h>
#include <Collision\intersect.h>
#include <xutility>
#include <Collision\primitivesfwd.h>
#include <weaponTargetInfo.h>
#include <utility>
#include <iosfwd>
#include <Subsystems\HardPointManager.h>
#include <vector>
#include <Subsystems\HardPoint.h>
#include <fileio\bytestream.h>
#include <xmemory>
#include <Subsystems\HardPointStatic.h>
#include <fileio\fileioexports.h>
#include <Subsystems\SubSystemType.h>
#include <Interpolation.h>
#include <math.h>
#include <list>
#include <Collision\Primitives\aabb.h>
#include <sobid.h>
#include <Mathlib\vector3.h>
#include <GunBinding.h>
#include <Mathlib\vector4.h>
#include <SobZeroMassBody.h>
#include <HyperspaceManager.h>
#include <SquadronList.h>
#include <sobzeromassbodystatic.h>
#include <abilities.h>
#include <xtree>
#include <boost\scoped_ptr.hpp>
#include <Mathlib\vector2.h>
#include <util\types.h>
#include <Universe.h>
#include <platform\timer.h>
#include <Waypoint.h>
#include <platform\platformexports.h>
#include <SobUnmoveable.h>
#include <boost\cstdint.hpp>
#include <seInterface2\PatchID.h>
#include <SelTarg.h>
#include <seInterface2\PatchBase.h>
#include <prim.h>
#include <seInterface2\SoundParams.h>
#include <Mathlib\quat.h>
#include <Collision\Primitives\capsule.h>
#include <Collision\Primitives\segment.h>
#include <Collision\BVH\profiling.h>
#include <fileio\filestream.h>
#include <Modifiers\ModifierTargetCache.h>
#include <savegamedata.h>
#include <pathpoints.h>
#include <debug\db.h>
#include <fixedpoint.h>
#include <util\fixed.h>
#include <boost\shared_ptr.hpp>
#include <MultiplierContainer.h>
#include <visibility.h>
#include <util\colour.h>
#include <sobtypes.h>
#include <MultiplierTypes.h>
#include <boost\throw_exception.hpp>
#include <Collision\BVH\bvh.h>
#include <selection.h>
#include <savegamedef.h>
#include <boost\detail\shared_count.hpp>
#include <boost\detail\lwm_win32.hpp>
#include <savestream.h>
#include <sob.h>
#include <sobstatic.h>
#include <wchar.h>
#include <Collision\Primitives\sphere.h>
#include <Mathlib\mathutil.h>
#include <fileio\iff.h>
#include <weaponinfo.h>

/* ---------- constants */

/* ---------- definitions */

typedef float (*SetParamCB)(SobWithMesh *, AnimatorParam *);

/* ---------- prototypes */

extern bool madStartup();
extern bool madShutdown();

_static __int32 handle_VERS(IFF *iff, IFFChunk *chunk, void *ppHeader, void *pHierarchy);
_static __int32 handle_INFO(IFF *iff, IFFChunk *chunk, void *ppHeader, void *pHierarchy);
_static __int32 handle_CURV(IFF *iff, IFFChunk *chunk, void *ppHeader, void *pHierarchy);
_static __int32 handle_MARK(IFF *iff, IFFChunk *chunk, void *ppHeader, void *pHierarchy);
_static __int32 handle_STRI(IFF *iff, IFFChunk *chunk, void *ppHeader, void *pHierarchy);
_static __int32 handle_MAD(IFF *iff, IFFChunk *chunk, void *ppHeader, void *pHierarchy);

/* ---------- globals */

extern float AnimatorGun::m_weaponRecoilTable[256]; // 0x8493F0
extern char const AnimatorMad::m_saveToken[12]; // 0x7AD4E0
extern SaveData const AnimatorMad::m_saveData[8]; // 0x7AD4F0

/* ---------- private variables */

/* ---------- public code */

bool madStartup() // 0x60839B
{
    mangled_assert("?madStartup@@YG_NXZ");
    todo("implement");
}

bool madShutdown() // 0x608398
{
    mangled_assert("?madShutdown@@YG_NXZ");
    todo("implement");
}

MadHeader *MadHeader::import(char const *fileName, HierarchyStatic *hierarchy) // 0x6082E7
{
    mangled_assert("?import@MadHeader@@SGPAV1@PBDPAVHierarchyStatic@@@Z");
    todo("implement");
}

__int32 MadHeader::totalSize(__int32 nAnimations, __int32 nCurves, __int32 nIndices, __int32 nJointMaps, __int32 *animationOffset, __int32 *curveOffset, __int32 *indicesOffset, __int32 *jointMapOffset) // 0x608722
{
    mangled_assert("?totalSize@MadHeader@@SGHHHHHPAH000@Z");
    todo("implement");
}

MadHeader::MadHeader() // 0x607735
{
    mangled_assert("??0MadHeader@@QAE@XZ");
    todo("implement");
}

MadHeader::~MadHeader() // 0x607819
{
    mangled_assert("??1MadHeader@@QAE@XZ");
    todo("implement");
}

MadAnimation *MadHeader::findAnimationByName(char const *) const // 0x607D87
{
    mangled_assert("?findAnimationByName@MadHeader@@QBEPAUMadAnimation@@PBD@Z");
    todo("implement");
}

matrix4 const &AnimJointHold::updateCoordSys(HierarchyJoint const *) // 0x608AC2
{
    mangled_assert("?updateCoordSys@AnimJointHold@@UAEABVmatrix4@@PBVHierarchyJoint@@@Z");
    todo("implement");
}

void AnimJointHold::setMatrixToHold(matrix3 const &, vector3 const &) // 0x6086B7
{
    mangled_assert("?setMatrixToHold@AnimJointHold@@QAEXABVmatrix3@@ABVvector3@@@Z");
    todo("implement");
}

AnimatorGun::AnimatorGun(GunBinding const *, Weapon *, HierarchyDynamic *) // 0x6075A7
{
    mangled_assert("??0AnimatorGun@@QAE@PBVGunBinding@@PAVWeapon@@PAVHierarchyDynamic@@@Z");
    todo("implement");
}

AnimatorGun::~AnimatorGun() // 0x607746
{
    mangled_assert("??1AnimatorGun@@UAE@XZ");
    todo("implement");
}

bool AnimatorGun::update(float) // 0x608760
{
    mangled_assert("?update@AnimatorGun@@UAE_NM@Z");
    todo("implement");
}

void AnimatorGun::recoilTableCompute() // 0x60854F
{
    mangled_assert("?recoilTableCompute@AnimatorGun@@SGXXZ");
    todo("implement");
}

float AnimatorGun::gunRecoilValue(float fraction) // 0x607DE4
{
    mangled_assert("?gunRecoilValue@AnimatorGun@@SGMM@Z");
    todo("implement");
}

AnimJointGun::AnimJointGun() // 0x60757D
{
    mangled_assert("??0AnimJointGun@@QAE@XZ");
    todo("implement");
}

AnimJointGun::~AnimJointGun() // 0x607738
{
    mangled_assert("??1AnimJointGun@@UAE@XZ");
    todo("implement");
}

matrix4 const &AnimJointGun::updateCoordSys(HierarchyJoint const *) // 0x6088EF
{
    mangled_assert("?updateCoordSys@AnimJointGun@@UAEABVmatrix4@@PBVHierarchyJoint@@@Z");
    todo("implement");
}

matrix4 const &AnimJointGun::GetDeterministicMatrix(HierarchyJoint const *) // 0x607B76
{
    mangled_assert("?GetDeterministicMatrix@AnimJointGun@@UAEABVmatrix4@@PBVHierarchyJoint@@@Z");
    todo("implement");
}

void AnimJointGun::updateQuaternions(HierarchyJoint const *) // 0x608B15
{
    mangled_assert("?updateQuaternions@AnimJointGun@@AAEXPBVHierarchyJoint@@@Z");
    todo("implement");
}

float AnimJointGun::recoil(float) // 0x60851F
{
    mangled_assert("?recoil@AnimJointGun@@AAEMM@Z");
    todo("implement");
}

AnimatorMad::AnimatorMad(MadAnimation *, SobWithMesh *, void (*)(SobWithMesh *, AnimatorMad *, AnimatorMad::CallbackEvent)) // 0x607620
{
    mangled_assert("??0AnimatorMad@@QAE@PAUMadAnimation@@PAVSobWithMesh@@P6GX1PAV0@W4CallbackEvent@0@@Z@Z");
    todo("implement");
}

void AnimatorMad::createJointsFromJointMap() // 0x607BF5
{
    mangled_assert("?createJointsFromJointMap@AnimatorMad@@IAEXXZ");
    todo("implement");
}

AnimatorMad::~AnimatorMad() // 0x607754
{
    mangled_assert("??1AnimatorMad@@UAE@XZ");
    todo("implement");
}

bool AnimatorMad::update(float) // 0x608765
{
    mangled_assert("?update@AnimatorMad@@UAE_NM@Z");
    todo("implement");
}

void AnimatorMad::pause(bool) // 0x6083A3
{
    mangled_assert("?pause@AnimatorMad@@QAEX_N@Z");
    todo("implement");
}

float AnimatorMad::setCurrentTime(float) // 0x60868E
{
    mangled_assert("?setCurrentTime@AnimatorMad@@QAEMM@Z");
    todo("implement");
}

void AnimatorMad::setPauseTime(float) // 0x60870D
{
    mangled_assert("?setPauseTime@AnimatorMad@@QAEXM@Z");
    todo("implement");
}

void AnimatorMad::setLoopCount(__int32) // 0x6086AD
{
    mangled_assert("?setLoopCount@AnimatorMad@@QAEXH@Z");
    todo("implement");
}

bool AnimatorMad::restore(SaveGameData *) // 0x608646
{
    mangled_assert("?restore@AnimatorMad@@QAE_NPAVSaveGameData@@@Z");
    todo("implement");
}

bool AnimatorMad::save(SaveGameData *, SaveType) // 0x608671
{
    mangled_assert("?save@AnimatorMad@@QAE_NPAVSaveGameData@@W4SaveType@@@Z");
    todo("implement");
}

void AnimatorMad::saveAnimation(void *objectPtr, SaveGameData *saveGameData, SaveType savetype) // 0x60752E
{
    mangled_assert("?saveAnimation@AnimatorMad@@KGXPAXPAVSaveGameData@@W4SaveType@@@Z");
    todo("implement");
}

void AnimatorMad::restoreAnimation(void *objectPtr, SaveGameData *saveGameData) // 0x607545
{
    mangled_assert("?restoreAnimation@AnimatorMad@@KGXPAXPAVSaveGameData@@@Z");
    todo("implement");
}

AnimatorMad::AnimatorMad(SaveGameData *) // 0x60767A
{
    mangled_assert("??0AnimatorMad@@QAE@PAVSaveGameData@@@Z");
    todo("implement");
}

void AnimatorMad::postRestore() // 0x6083BE
{
    mangled_assert("?postRestore@AnimatorMad@@QAEXXZ");
    todo("implement");
}

AnimJointMad::AnimJointMad() // 0x607594
{
    mangled_assert("??0AnimJointMad@@QAE@XZ");
    todo("implement");
}

AnimJointMad::~AnimJointMad() // 0x60773F
{
    mangled_assert("??1AnimJointMad@@UAE@XZ");
    todo("implement");
}

void AnimJointMad::Evaluate(HierarchyJoint const *, float const, matrix4 &) const // 0x6079F3
{
    mangled_assert("?Evaluate@AnimJointMad@@ABEXPBVHierarchyJoint@@MAAVmatrix4@@@Z");
    todo("implement");
}

matrix4 const &AnimJointMad::updateCoordSys(HierarchyJoint const *) // 0x608AC8
{
    mangled_assert("?updateCoordSys@AnimJointMad@@UAEABVmatrix4@@PBVHierarchyJoint@@@Z");
    todo("implement");
}

matrix4 const &AnimJointMad::GetDeterministicMatrix(HierarchyJoint const *) // 0x607B9F
{
    mangled_assert("?GetDeterministicMatrix@AnimJointMad@@UAEABVmatrix4@@PBVHierarchyJoint@@@Z");
    todo("implement");
}

AnimatorParam::AnimatorParam(MadAnimation *, SobWithMesh *, void (*)(SobWithMesh *, AnimatorMad *, AnimatorMad::CallbackEvent)) // 0x60768D
{
    mangled_assert("??0AnimatorParam@@QAE@PAUMadAnimation@@PAVSobWithMesh@@P6GX1PAVAnimatorMad@@W4CallbackEvent@3@@Z@Z");
    todo("implement");
}

AnimatorParam::~AnimatorParam() // 0x6077C4
{
    mangled_assert("??1AnimatorParam@@UAE@XZ");
    todo("implement");
}

bool AnimatorParam::update(float) // 0x6087E5
{
    mangled_assert("?update@AnimatorParam@@UAE_NM@Z");
    todo("implement");
}

void AnimatorParam::setParameter(float) // 0x6086FF
{
    mangled_assert("?setParameter@AnimatorParam@@QAEXM@Z");
    todo("implement");
}

void AnimatorParam::setParamCallback(float (*)(SobWithMesh *, AnimatorParam *)) // 0x6086F5
{
    mangled_assert("?setParamCallback@AnimatorParam@@QAEXP6GMPAVSobWithMesh@@PAV1@@Z@Z");
    todo("implement");
}

AnimatorWeaponTrack::AnimatorWeaponTrack(HierarchyJoint *, SobWithMesh *, float, float, void (*)(SobWithMesh *, AnimatorWeaponTrack *, AnimatorWeaponTrack::CallbackEvent)) // 0x6076C4
{
    mangled_assert("??0AnimatorWeaponTrack@@QAE@PAVHierarchyJoint@@PAVSobWithMesh@@MMP6GX1PAV0@W4CallbackEvent@0@@Z@Z");
    todo("implement");
}

AnimatorWeaponTrack::~AnimatorWeaponTrack() // 0x6077CF
{
    mangled_assert("??1AnimatorWeaponTrack@@UAE@XZ");
    todo("implement");
}

bool AnimatorWeaponTrack::update(float) // 0x6088EA
{
    mangled_assert("?update@AnimatorWeaponTrack@@UAE_NM@Z");
    todo("implement");
}

/* ---------- private code */

_static __int32 handle_VERS(IFF *iff, IFFChunk *chunk, void *ppHeader, void *pHierarchy) // 0x6082CC
{
    mangled_assert("handle_VERS");
    todo("implement");
}

_static __int32 handle_INFO(IFF *iff, IFFChunk *chunk, void *ppHeader, void *pHierarchy) // 0x607FD2
{
    mangled_assert("handle_INFO");
    todo("implement");
}

_static __int32 handle_CURV(IFF *iff, IFFChunk *chunk, void *ppHeader, void *pHierarchy) // 0x607E05
{
    mangled_assert("handle_CURV");
    todo("implement");
}

_static __int32 handle_MARK(IFF *iff, IFFChunk *chunk, void *ppHeader, void *pHierarchy) // 0x608144
{
    mangled_assert("handle_MARK");
    todo("implement");
}

_static __int32 handle_STRI(IFF *iff, IFFChunk *chunk, void *ppHeader, void *pHierarchy) // 0x60829D
{
    mangled_assert("handle_STRI");
    todo("implement");
}

_static __int32 handle_MAD(IFF *iff, IFFChunk *chunk, void *ppHeader, void *pHierarchy) // 0x6080C5
{
    mangled_assert("handle_MAD");
    todo("implement");
}
#endif
