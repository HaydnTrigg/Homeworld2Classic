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

_extern bool _sub_60839B();
bool madStartup() // 0x60839B
{
    mangled_assert("?madStartup@@YG_NXZ");
    todo("implement");
    bool __result = _sub_60839B();
    return __result;
}

_extern bool _sub_608398();
bool madShutdown() // 0x608398
{
    mangled_assert("?madShutdown@@YG_NXZ");
    todo("implement");
    bool __result = _sub_608398();
    return __result;
}

_extern MadHeader *_sub_6082E7(char const *, HierarchyStatic *);
MadHeader *MadHeader::import(char const *fileName, HierarchyStatic *hierarchy) // 0x6082E7
{
    mangled_assert("?import@MadHeader@@SGPAV1@PBDPAVHierarchyStatic@@@Z");
    todo("implement");
    MadHeader * __result = _sub_6082E7(fileName, hierarchy);
    return __result;
}

_extern __int32 _sub_608722(__int32, __int32, __int32, __int32, __int32 *, __int32 *, __int32 *, __int32 *);
__int32 MadHeader::totalSize(__int32 nAnimations, __int32 nCurves, __int32 nIndices, __int32 nJointMaps, __int32 *animationOffset, __int32 *curveOffset, __int32 *indicesOffset, __int32 *jointMapOffset) // 0x608722
{
    mangled_assert("?totalSize@MadHeader@@SGHHHHHPAH000@Z");
    todo("implement");
    __int32 __result = _sub_608722(nAnimations, nCurves, nIndices, nJointMaps, animationOffset, curveOffset, indicesOffset, jointMapOffset);
    return __result;
}

_extern _sub_607735(MadHeader *const);
MadHeader::MadHeader() // 0x607735
{
    mangled_assert("??0MadHeader@@QAE@XZ");
    todo("implement");
    _sub_607735(this);
}

_extern void _sub_607819(MadHeader *const);
MadHeader::~MadHeader() // 0x607819
{
    mangled_assert("??1MadHeader@@QAE@XZ");
    todo("implement");
    _sub_607819(this);
}

_extern MadAnimation *_sub_607D87(MadHeader const *const, char const *);
MadAnimation *MadHeader::findAnimationByName(char const *) const // 0x607D87
{
    mangled_assert("?findAnimationByName@MadHeader@@QBEPAUMadAnimation@@PBD@Z");
    todo("implement");
    MadAnimation * __result = _sub_607D87(this, arg);
    return __result;
}

_extern matrix4 const &_sub_608AC2(AnimJointHold *const, HierarchyJoint const *);
matrix4 const &AnimJointHold::updateCoordSys(HierarchyJoint const *) // 0x608AC2
{
    mangled_assert("?updateCoordSys@AnimJointHold@@UAEABVmatrix4@@PBVHierarchyJoint@@@Z");
    todo("implement");
    matrix4 const & __result = _sub_608AC2(this, arg);
    return __result;
}

_extern void _sub_6086B7(AnimJointHold *const, matrix3 const &, vector3 const &);
void AnimJointHold::setMatrixToHold(matrix3 const &, vector3 const &) // 0x6086B7
{
    mangled_assert("?setMatrixToHold@AnimJointHold@@QAEXABVmatrix3@@ABVvector3@@@Z");
    todo("implement");
    _sub_6086B7(this, arg, arg);
}

_extern _sub_6075A7(AnimatorGun *const, GunBinding const *, Weapon *, HierarchyDynamic *);
AnimatorGun::AnimatorGun(GunBinding const *, Weapon *, HierarchyDynamic *) // 0x6075A7
{
    mangled_assert("??0AnimatorGun@@QAE@PBVGunBinding@@PAVWeapon@@PAVHierarchyDynamic@@@Z");
    todo("implement");
    _sub_6075A7(this, arg, arg, arg);
}

_extern void _sub_607746(AnimatorGun *const);
AnimatorGun::~AnimatorGun() // 0x607746
{
    mangled_assert("??1AnimatorGun@@UAE@XZ");
    todo("implement");
    _sub_607746(this);
}

_extern bool _sub_608760(AnimatorGun *const, float);
bool AnimatorGun::update(float) // 0x608760
{
    mangled_assert("?update@AnimatorGun@@UAE_NM@Z");
    todo("implement");
    bool __result = _sub_608760(this, arg);
    return __result;
}

_extern void _sub_60854F();
void AnimatorGun::recoilTableCompute() // 0x60854F
{
    mangled_assert("?recoilTableCompute@AnimatorGun@@SGXXZ");
    todo("implement");
    _sub_60854F();
}

_extern float _sub_607DE4(float);
float AnimatorGun::gunRecoilValue(float fraction) // 0x607DE4
{
    mangled_assert("?gunRecoilValue@AnimatorGun@@SGMM@Z");
    todo("implement");
    float __result = _sub_607DE4(fraction);
    return __result;
}

_extern _sub_60757D(AnimJointGun *const);
AnimJointGun::AnimJointGun() // 0x60757D
{
    mangled_assert("??0AnimJointGun@@QAE@XZ");
    todo("implement");
    _sub_60757D(this);
}

_extern void _sub_607738(AnimJointGun *const);
AnimJointGun::~AnimJointGun() // 0x607738
{
    mangled_assert("??1AnimJointGun@@UAE@XZ");
    todo("implement");
    _sub_607738(this);
}

_extern matrix4 const &_sub_6088EF(AnimJointGun *const, HierarchyJoint const *);
matrix4 const &AnimJointGun::updateCoordSys(HierarchyJoint const *) // 0x6088EF
{
    mangled_assert("?updateCoordSys@AnimJointGun@@UAEABVmatrix4@@PBVHierarchyJoint@@@Z");
    todo("implement");
    matrix4 const & __result = _sub_6088EF(this, arg);
    return __result;
}

_extern matrix4 const &_sub_607B76(AnimJointGun *const, HierarchyJoint const *);
matrix4 const &AnimJointGun::GetDeterministicMatrix(HierarchyJoint const *) // 0x607B76
{
    mangled_assert("?GetDeterministicMatrix@AnimJointGun@@UAEABVmatrix4@@PBVHierarchyJoint@@@Z");
    todo("implement");
    matrix4 const & __result = _sub_607B76(this, arg);
    return __result;
}

_extern void _sub_608B15(AnimJointGun *const, HierarchyJoint const *);
void AnimJointGun::updateQuaternions(HierarchyJoint const *) // 0x608B15
{
    mangled_assert("?updateQuaternions@AnimJointGun@@AAEXPBVHierarchyJoint@@@Z");
    todo("implement");
    _sub_608B15(this, arg);
}

_extern float _sub_60851F(AnimJointGun *const, float);
float AnimJointGun::recoil(float) // 0x60851F
{
    mangled_assert("?recoil@AnimJointGun@@AAEMM@Z");
    todo("implement");
    float __result = _sub_60851F(this, arg);
    return __result;
}

_extern _sub_607620(AnimatorMad *const, MadAnimation *, SobWithMesh *, void (*)(SobWithMesh *, AnimatorMad *, AnimatorMad::CallbackEvent));
AnimatorMad::AnimatorMad(MadAnimation *, SobWithMesh *, void (*)(SobWithMesh *, AnimatorMad *, AnimatorMad::CallbackEvent)) // 0x607620
{
    mangled_assert("??0AnimatorMad@@QAE@PAUMadAnimation@@PAVSobWithMesh@@P6GX1PAV0@W4CallbackEvent@0@@Z@Z");
    todo("implement");
    _sub_607620(this, arg, arg, arg);
}

_extern void _sub_607BF5(AnimatorMad *const);
void AnimatorMad::createJointsFromJointMap() // 0x607BF5
{
    mangled_assert("?createJointsFromJointMap@AnimatorMad@@IAEXXZ");
    todo("implement");
    _sub_607BF5(this);
}

_extern void _sub_607754(AnimatorMad *const);
AnimatorMad::~AnimatorMad() // 0x607754
{
    mangled_assert("??1AnimatorMad@@UAE@XZ");
    todo("implement");
    _sub_607754(this);
}

_extern bool _sub_608765(AnimatorMad *const, float);
bool AnimatorMad::update(float) // 0x608765
{
    mangled_assert("?update@AnimatorMad@@UAE_NM@Z");
    todo("implement");
    bool __result = _sub_608765(this, arg);
    return __result;
}

_extern void _sub_6083A3(AnimatorMad *const, bool);
void AnimatorMad::pause(bool) // 0x6083A3
{
    mangled_assert("?pause@AnimatorMad@@QAEX_N@Z");
    todo("implement");
    _sub_6083A3(this, arg);
}

_extern float _sub_60868E(AnimatorMad *const, float);
float AnimatorMad::setCurrentTime(float) // 0x60868E
{
    mangled_assert("?setCurrentTime@AnimatorMad@@QAEMM@Z");
    todo("implement");
    float __result = _sub_60868E(this, arg);
    return __result;
}

_extern void _sub_60870D(AnimatorMad *const, float);
void AnimatorMad::setPauseTime(float) // 0x60870D
{
    mangled_assert("?setPauseTime@AnimatorMad@@QAEXM@Z");
    todo("implement");
    _sub_60870D(this, arg);
}

_extern void _sub_6086AD(AnimatorMad *const, __int32);
void AnimatorMad::setLoopCount(__int32) // 0x6086AD
{
    mangled_assert("?setLoopCount@AnimatorMad@@QAEXH@Z");
    todo("implement");
    _sub_6086AD(this, arg);
}

_extern bool _sub_608646(AnimatorMad *const, SaveGameData *);
bool AnimatorMad::restore(SaveGameData *) // 0x608646
{
    mangled_assert("?restore@AnimatorMad@@QAE_NPAVSaveGameData@@@Z");
    todo("implement");
    bool __result = _sub_608646(this, arg);
    return __result;
}

_extern bool _sub_608671(AnimatorMad *const, SaveGameData *, SaveType);
bool AnimatorMad::save(SaveGameData *, SaveType) // 0x608671
{
    mangled_assert("?save@AnimatorMad@@QAE_NPAVSaveGameData@@W4SaveType@@@Z");
    todo("implement");
    bool __result = _sub_608671(this, arg, arg);
    return __result;
}

_extern void _sub_60752E(void *, SaveGameData *, SaveType);
void AnimatorMad::saveAnimation(void *objectPtr, SaveGameData *saveGameData, SaveType savetype) // 0x60752E
{
    mangled_assert("?saveAnimation@AnimatorMad@@KGXPAXPAVSaveGameData@@W4SaveType@@@Z");
    todo("implement");
    _sub_60752E(objectPtr, saveGameData, savetype);
}

_extern void _sub_607545(void *, SaveGameData *);
void AnimatorMad::restoreAnimation(void *objectPtr, SaveGameData *saveGameData) // 0x607545
{
    mangled_assert("?restoreAnimation@AnimatorMad@@KGXPAXPAVSaveGameData@@@Z");
    todo("implement");
    _sub_607545(objectPtr, saveGameData);
}

_extern _sub_60767A(AnimatorMad *const, SaveGameData *);
AnimatorMad::AnimatorMad(SaveGameData *) // 0x60767A
{
    mangled_assert("??0AnimatorMad@@QAE@PAVSaveGameData@@@Z");
    todo("implement");
    _sub_60767A(this, arg);
}

_extern void _sub_6083BE(AnimatorMad *const);
void AnimatorMad::postRestore() // 0x6083BE
{
    mangled_assert("?postRestore@AnimatorMad@@QAEXXZ");
    todo("implement");
    _sub_6083BE(this);
}

_extern _sub_607594(AnimJointMad *const);
AnimJointMad::AnimJointMad() // 0x607594
{
    mangled_assert("??0AnimJointMad@@QAE@XZ");
    todo("implement");
    _sub_607594(this);
}

_extern void _sub_60773F(AnimJointMad *const);
AnimJointMad::~AnimJointMad() // 0x60773F
{
    mangled_assert("??1AnimJointMad@@UAE@XZ");
    todo("implement");
    _sub_60773F(this);
}

_extern void _sub_6079F3(AnimJointMad const *const, HierarchyJoint const *, float const, matrix4 &);
void AnimJointMad::Evaluate(HierarchyJoint const *, float const, matrix4 &) const // 0x6079F3
{
    mangled_assert("?Evaluate@AnimJointMad@@ABEXPBVHierarchyJoint@@MAAVmatrix4@@@Z");
    todo("implement");
    _sub_6079F3(this, arg, arg, arg);
}

_extern matrix4 const &_sub_608AC8(AnimJointMad *const, HierarchyJoint const *);
matrix4 const &AnimJointMad::updateCoordSys(HierarchyJoint const *) // 0x608AC8
{
    mangled_assert("?updateCoordSys@AnimJointMad@@UAEABVmatrix4@@PBVHierarchyJoint@@@Z");
    todo("implement");
    matrix4 const & __result = _sub_608AC8(this, arg);
    return __result;
}

_extern matrix4 const &_sub_607B9F(AnimJointMad *const, HierarchyJoint const *);
matrix4 const &AnimJointMad::GetDeterministicMatrix(HierarchyJoint const *) // 0x607B9F
{
    mangled_assert("?GetDeterministicMatrix@AnimJointMad@@UAEABVmatrix4@@PBVHierarchyJoint@@@Z");
    todo("implement");
    matrix4 const & __result = _sub_607B9F(this, arg);
    return __result;
}

_extern _sub_60768D(AnimatorParam *const, MadAnimation *, SobWithMesh *, void (*)(SobWithMesh *, AnimatorMad *, AnimatorMad::CallbackEvent));
AnimatorParam::AnimatorParam(MadAnimation *, SobWithMesh *, void (*)(SobWithMesh *, AnimatorMad *, AnimatorMad::CallbackEvent)) // 0x60768D
{
    mangled_assert("??0AnimatorParam@@QAE@PAUMadAnimation@@PAVSobWithMesh@@P6GX1PAVAnimatorMad@@W4CallbackEvent@3@@Z@Z");
    todo("implement");
    _sub_60768D(this, arg, arg, arg);
}

_extern void _sub_6077C4(AnimatorParam *const);
AnimatorParam::~AnimatorParam() // 0x6077C4
{
    mangled_assert("??1AnimatorParam@@UAE@XZ");
    todo("implement");
    _sub_6077C4(this);
}

_extern bool _sub_6087E5(AnimatorParam *const, float);
bool AnimatorParam::update(float) // 0x6087E5
{
    mangled_assert("?update@AnimatorParam@@UAE_NM@Z");
    todo("implement");
    bool __result = _sub_6087E5(this, arg);
    return __result;
}

_extern void _sub_6086FF(AnimatorParam *const, float);
void AnimatorParam::setParameter(float) // 0x6086FF
{
    mangled_assert("?setParameter@AnimatorParam@@QAEXM@Z");
    todo("implement");
    _sub_6086FF(this, arg);
}

_extern void _sub_6086F5(AnimatorParam *const, float (*)(SobWithMesh *, AnimatorParam *));
void AnimatorParam::setParamCallback(float (*)(SobWithMesh *, AnimatorParam *)) // 0x6086F5
{
    mangled_assert("?setParamCallback@AnimatorParam@@QAEXP6GMPAVSobWithMesh@@PAV1@@Z@Z");
    todo("implement");
    _sub_6086F5(this, arg);
}

_extern _sub_6076C4(AnimatorWeaponTrack *const, HierarchyJoint *, SobWithMesh *, float, float, void (*)(SobWithMesh *, AnimatorWeaponTrack *, AnimatorWeaponTrack::CallbackEvent));
AnimatorWeaponTrack::AnimatorWeaponTrack(HierarchyJoint *, SobWithMesh *, float, float, void (*)(SobWithMesh *, AnimatorWeaponTrack *, AnimatorWeaponTrack::CallbackEvent)) // 0x6076C4
{
    mangled_assert("??0AnimatorWeaponTrack@@QAE@PAVHierarchyJoint@@PAVSobWithMesh@@MMP6GX1PAV0@W4CallbackEvent@0@@Z@Z");
    todo("implement");
    _sub_6076C4(this, arg, arg, arg, arg, arg);
}

_extern void _sub_6077CF(AnimatorWeaponTrack *const);
AnimatorWeaponTrack::~AnimatorWeaponTrack() // 0x6077CF
{
    mangled_assert("??1AnimatorWeaponTrack@@UAE@XZ");
    todo("implement");
    _sub_6077CF(this);
}

_extern bool _sub_6088EA(AnimatorWeaponTrack *const, float);
bool AnimatorWeaponTrack::update(float) // 0x6088EA
{
    mangled_assert("?update@AnimatorWeaponTrack@@UAE_NM@Z");
    todo("implement");
    bool __result = _sub_6088EA(this, arg);
    return __result;
}

/* ---------- private code */

_extern __int32 _sub_6082CC(IFF *, IFFChunk *, void *, void *);
_static __int32 handle_VERS(IFF *iff, IFFChunk *chunk, void *ppHeader, void *pHierarchy) // 0x6082CC
{
    mangled_assert("handle_VERS");
    todo("implement");
    __int32 __result = _sub_6082CC(iff, chunk, ppHeader, pHierarchy);
    return __result;
}

_extern __int32 _sub_607FD2(IFF *, IFFChunk *, void *, void *);
_static __int32 handle_INFO(IFF *iff, IFFChunk *chunk, void *ppHeader, void *pHierarchy) // 0x607FD2
{
    mangled_assert("handle_INFO");
    todo("implement");
    __int32 __result = _sub_607FD2(iff, chunk, ppHeader, pHierarchy);
    return __result;
}

_extern __int32 _sub_607E05(IFF *, IFFChunk *, void *, void *);
_static __int32 handle_CURV(IFF *iff, IFFChunk *chunk, void *ppHeader, void *pHierarchy) // 0x607E05
{
    mangled_assert("handle_CURV");
    todo("implement");
    __int32 __result = _sub_607E05(iff, chunk, ppHeader, pHierarchy);
    return __result;
}

_extern __int32 _sub_608144(IFF *, IFFChunk *, void *, void *);
_static __int32 handle_MARK(IFF *iff, IFFChunk *chunk, void *ppHeader, void *pHierarchy) // 0x608144
{
    mangled_assert("handle_MARK");
    todo("implement");
    __int32 __result = _sub_608144(iff, chunk, ppHeader, pHierarchy);
    return __result;
}

_extern __int32 _sub_60829D(IFF *, IFFChunk *, void *, void *);
_static __int32 handle_STRI(IFF *iff, IFFChunk *chunk, void *ppHeader, void *pHierarchy) // 0x60829D
{
    mangled_assert("handle_STRI");
    todo("implement");
    __int32 __result = _sub_60829D(iff, chunk, ppHeader, pHierarchy);
    return __result;
}

_extern __int32 _sub_6080C5(IFF *, IFFChunk *, void *, void *);
_static __int32 handle_MAD(IFF *iff, IFFChunk *chunk, void *ppHeader, void *pHierarchy) // 0x6080C5
{
    mangled_assert("handle_MAD");
    todo("implement");
    __int32 __result = _sub_6080C5(iff, chunk, ppHeader, pHierarchy);
    return __result;
}
#endif
