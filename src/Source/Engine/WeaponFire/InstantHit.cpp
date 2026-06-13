#if 0
/* ---------- headers */

#include "decomp.h"
#include <assist\stlexsmallvector.h>
#include <ship.h>
#include <SobWithMesh.h>
#include <xstring>
#include <SobRigidBody.h>
#include <xmemory0>
#include <Mathlib\matrix4.h>
#include <pch.h>
#include <SobRigidBodyStatic.h>
#include <memory\memorylib.h>
#include <crtdefs.h>
#include <ShieldTypes.h>
#include <MeshAnimation.h>
#include <weaponTargetInfo.h>
#include <Mathlib\matrix3.h>
#include <Subsystems\HardPointManager.h>
#include <weaponfiretypes.h>
#include <Subsystems\HardPoint.h>
#include <Subsystems\HardPointStatic.h>
#include <Subsystems\SubSystemType.h>
#include <new>
#include <exception>
#include <xstddef>
#include <type_traits>
#include <weapon.h>
#include <config.h>
#include <Collision\Primitives\obb.h>
#include <Collision\BVH\octree.h>
#include <Collision\Collision.h>
#include <Collision\BVH\span.h>
#include <Collision\BVH\Internal\span_i.h>
#include <xutility>
#include <Collision\BVH\proxy.h>
#include <utility>
#include <iosfwd>
#include <Collision\intersect.h>
#include <fixedpoint.h>
#include <vector>
#include <Collision\primitivesfwd.h>
#include <util\fixed.h>
#include <xmemory>
#include <playerresourcetype.h>
#include <dbdefines.h>
#include <UnitCaps\UnitCaps.h>
#include <math.h>
#include <Interpolation.h>
#include <SoundManager\SoundEntityHandle.h>
#include <list>
#include <Collision\Primitives\aabb.h>
#include <Mathlib\vector3.h>
#include <ITweak.h>
#include <profile\profile.h>
#include <SobZeroMassBody.h>
#include <Mathlib\vector4.h>
#include <Tactics.h>
#include <iostream>
#include <sobid.h>
#include <sobzeromassbodystatic.h>
#include <map>
#include <xtree>
#include <WeaponStatic.h>
#include <boost\scoped_ptr.hpp>
#include <Modifiers\ModifierUIInfo.h>
#include <Modifiers\ModifierMultiplier.h>
#include <Mathlib\vector2.h>
#include <Modifiers\ModifierEffect.h>
#include <util\types.h>
#include <boost\cstdint.hpp>
#include <boost\config.hpp>
#include <Modifiers\ModifierApplier.h>
#include <assert.h>
#include <seInterface2\PatchID.h>
#include <SelTarg.h>
#include <seInterface2\PatchBase.h>
#include <prim.h>
#include <seInterface2\SoundParams.h>
#include <Subsystems\Subsystem.h>
#include <Mathlib\mathutil.h>
#include <Mathlib\quat.h>
#include <Subsystems\SubsystemStatic.h>
#include <SOBGroupManager.h>
#include <weaponstaticinfo.h>
#include <hash_map>
#include <GunBinding.h>
#include <xhash>
#include <HyperspaceManager.h>
#include <Collision\Primitives\capsule.h>
#include <SquadronList.h>
#include <HierarchyDynamic.h>
#include <Collision\Primitives\segment.h>
#include <HierarchyStatic.h>
#include <Collision\BVH\profiling.h>
#include <abilities.h>
#include <Decal\DecalRefMesh.h>
#include <gameRandom.h>
#include <random.h>
#include <platform\timer.h>
#include <pathpoints.h>
#include <platform\platformexports.h>
#include <WeaponClassSpecificInfo.h>
#include <Sob\DefenseField\DefenseField.h>
#include <Sob\DefenseField\DefenseFieldStatic.h>
#include <debug\db.h>
#include <Collision\Primitives\mesh.h>
#include <Collision\Primitives\triangle.h>
#include <boost\shared_ptr.hpp>
#include <util\colour.h>
#include <sobtypes.h>
#include <boost\throw_exception.hpp>
#include <MultiplierContainer.h>
#include <visibility.h>
#include <selection.h>
#include <savegamedef.h>
#include <MultiplierTypes.h>
#include <boost\detail\shared_count.hpp>
#include <Collision\BVH\bvh.h>
#include <GameObj.h>
#include <boost\detail\lwm_win32.hpp>
#include <WeaponResult.h>
#include <util\statmonitor.h>
#include <util\utilexports.h>
#include <weaponinfo.h>
#include <CoordSysUtilities.h>
#include <Modifiers\ModifierTargetCache.h>
#include <WeaponFire\InstantHit.h>
#include <WeaponFire\WeaponFire.h>
#include <wchar.h>
#include <Modifiers\ModifierAbility.h>
#include <sob.h>
#include <sobstatic.h>
#include <TeamColourRegistry.h>
#include <Collision\Primitives\sphere.h>
#include <savegame.h>
#include <task.h>
#include <memory\mmfixedpool.h>
#include <Universe.h>
#include <stack>
#include <EffectCreate.h>
#include <boost\static_assert.hpp>
#include <Waypoint.h>
#include <SobUnmoveable.h>
#include <SobWithMeshStatic.h>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

extern char const InstantHit::m_saveToken[0]; // 0x78EE78
extern SaveData const InstantHit::m_saveData[3]; // 0x78EE88

/* ---------- private variables */

_static
{
    extern FixedSizeObjAllocator<InstantHit,500> s_InstantHitAllocator; // 0x843E80
}

/* ---------- public code */

_extern void *_sub_4A69E3(unsigned __int32);
void *InstantHit::operator new(unsigned __int32 size) // 0x4A69E3
{
    mangled_assert("??2InstantHit@@SGPAXI@Z");
    todo("implement");
    void * __result = _sub_4A69E3(size);
    return __result;
}

_extern void _sub_4A69F0(void *, unsigned __int32);
void InstantHit::operator delete(void *p, unsigned __int32 size) // 0x4A69F0
{
    mangled_assert("??3InstantHit@@SGXPAXI@Z");
    todo("implement");
    _sub_4A69F0(p, size);
}

_extern _sub_4A67BA(InstantHit *const, SaveGameData *);
InstantHit::InstantHit(SaveGameData *) // 0x4A67BA
{
    mangled_assert("??0InstantHit@@QAE@PAVSaveGameData@@@Z");
    todo("implement");
    _sub_4A67BA(this, arg);
}

_extern void _sub_4A77E9(InstantHit *const);
void InstantHit::defaultSettings() // 0x4A77E9
{
    mangled_assert("?defaultSettings@InstantHit@@QAEXXZ");
    todo("implement");
    _sub_4A77E9(this);
}

_extern bool _sub_4A7CA7(InstantHit *const, SaveGameData *);
bool InstantHit::restore(SaveGameData *) // 0x4A7CA7
{
    mangled_assert("?restore@InstantHit@@UAE_NPAVSaveGameData@@@Z");
    todo("implement");
    bool __result = _sub_4A7CA7(this, arg);
    return __result;
}

_extern bool _sub_4A7CF4(InstantHit *const, SaveGameData *, SaveType);
bool InstantHit::save(SaveGameData *, SaveType) // 0x4A7CF4
{
    mangled_assert("?save@InstantHit@@UAE_NPAVSaveGameData@@W4SaveType@@@Z");
    todo("implement");
    bool __result = _sub_4A7CF4(this, arg, arg);
    return __result;
}

_extern void _sub_4A7C33(InstantHit *const);
void InstantHit::postRestore() // 0x4A7C33
{
    mangled_assert("?postRestore@InstantHit@@UAEXXZ");
    todo("implement");
    _sub_4A7C33(this);
}

_extern _sub_4A680A(InstantHit *const, char const *, Sob *, WeaponTargetInfo const &);
InstantHit::InstantHit(char const *, Sob *, WeaponTargetInfo const &) // 0x4A680A
{
    mangled_assert("??0InstantHit@@QAE@PBDPAVSob@@ABVWeaponTargetInfo@@@Z");
    todo("implement");
    _sub_4A680A(this, arg, arg, arg);
}

_extern void _sub_4A6960(std::_Tree_buy<std::pair<float const ,InstantHit::CollisionInfo>,std::allocator<std::pair<float const ,InstantHit::CollisionInfo> > > *const);
_inline std::_Tree_buy<std::pair<float const ,InstantHit::CollisionInfo>,std::allocator<std::pair<float const ,InstantHit::CollisionInfo> > >::~_Tree_buy<std::pair<float const ,InstantHit::CollisionInfo>,std::allocator<std::pair<float const ,InstantHit::CollisionInfo> > >() // 0x4A6960
{
    mangled_assert("??1?$_Tree_buy@U?$pair@$$CBMUCollisionInfo@InstantHit@@@std@@V?$allocator@U?$pair@$$CBMUCollisionInfo@InstantHit@@@std@@@2@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_4A6960(this);
}

_extern void _sub_4A6969(std::_Tree_comp<0,std::_Tmap_traits<float,InstantHit::CollisionInfo,std::less<float>,std::allocator<std::pair<float const ,InstantHit::CollisionInfo> >,0> > *const);
_inline std::_Tree_comp<0,std::_Tmap_traits<float,InstantHit::CollisionInfo,std::less<float>,std::allocator<std::pair<float const ,InstantHit::CollisionInfo> >,0> >::~_Tree_comp<0,std::_Tmap_traits<float,InstantHit::CollisionInfo,std::less<float>,std::allocator<std::pair<float const ,InstantHit::CollisionInfo> >,0> >() // 0x4A6969
{
    mangled_assert("??1?$_Tree_comp@$0A@V?$_Tmap_traits@MUCollisionInfo@InstantHit@@U?$less@M@std@@V?$allocator@U?$pair@$$CBMUCollisionInfo@InstantHit@@@std@@@4@$0A@@std@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_4A6969(this);
}

_extern void _sub_4A6972(std::map<float,InstantHit::CollisionInfo,std::less<float>,std::allocator<std::pair<float const ,InstantHit::CollisionInfo> > > *const);
_inline std::map<float,InstantHit::CollisionInfo,std::less<float>,std::allocator<std::pair<float const ,InstantHit::CollisionInfo> > >::~map<float,InstantHit::CollisionInfo,std::less<float>,std::allocator<std::pair<float const ,InstantHit::CollisionInfo> > >() // 0x4A6972
{
    mangled_assert("??1?$map@MUCollisionInfo@InstantHit@@U?$less@M@std@@V?$allocator@U?$pair@$$CBMUCollisionInfo@InstantHit@@@std@@@4@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_4A6972(this);
}

_extern void _sub_4A697C(InstantHit *const);
InstantHit::~InstantHit() // 0x4A697C
{
    mangled_assert("??1InstantHit@@UAE@XZ");
    todo("implement");
    _sub_4A697C(this);
}

_extern void _sub_4A734C(InstantHit *const);
void InstantHit::RemoveFromSimulation() // 0x4A734C
{
    mangled_assert("?RemoveFromSimulation@InstantHit@@MAEXXZ");
    todo("implement");
    _sub_4A734C(this);
}

_extern void _sub_4A734B(InstantHit *const);
void InstantHit::RemoveAllSimData() // 0x4A734B
{
    mangled_assert("?RemoveAllSimData@InstantHit@@IAEXXZ");
    todo("implement");
    _sub_4A734B(this);
}

_extern void _sub_4A7BC8(InstantHit *const, WeaponStatic const *);
void InstantHit::initialize(WeaponStatic const *) // 0x4A7BC8
{
    mangled_assert("?initialize@InstantHit@@UAEXPBVWeaponStatic@@@Z");
    todo("implement");
    _sub_4A7BC8(this, arg);
}

_extern bool _sub_4A7EE5(InstantHit *const, float);
bool InstantHit::update(float) // 0x4A7EE5
{
    mangled_assert("?update@InstantHit@@UAE_NM@Z");
    todo("implement");
    bool __result = _sub_4A7EE5(this, arg);
    return __result;
}

_extern void _sub_4A7D41(InstantHit *const, bool);
void InstantHit::setAccurate(bool) // 0x4A7D41
{
    mangled_assert("?setAccurate@InstantHit@@UAEX_N@Z");
    todo("implement");
    _sub_4A7D41(this, arg);
}

_extern bool _sub_4A7AF0(InstantHit *const, Sob *, vector3 const &, vector3 const &);
bool InstantHit::hitsSob(Sob *, vector3 const &, vector3 const &) // 0x4A7AF0
{
    mangled_assert("?hitsSob@InstantHit@@UAE_NPAVSob@@ABVvector3@@1@Z");
    todo("implement");
    bool __result = _sub_4A7AF0(this, arg, arg, arg);
    return __result;
}

_extern void _sub_4A7CA2(InstantHit *const, matrix4 &);
void InstantHit::render(matrix4 &) // 0x4A7CA2
{
    mangled_assert("?render@InstantHit@@UAEXAAVmatrix4@@@Z");
    todo("implement");
    _sub_4A7CA2(this, arg);
}

_extern bool _sub_4A7351(InstantHit *const, Sob *);
bool InstantHit::ShouldIgnore(Sob *) // 0x4A7351
{
    mangled_assert("?ShouldIgnore@InstantHit@@MAE_NPAVSob@@@Z");
    todo("implement");
    bool __result = _sub_4A7351(this, arg);
    return __result;
}

_extern void _sub_4A6E2E(InstantHit *const);
void InstantHit::PerformCollisionDetection() // 0x4A6E2E
{
    mangled_assert("?PerformCollisionDetection@InstantHit@@UAEXXZ");
    todo("implement");
    _sub_4A6E2E(this);
}

_extern void _sub_4A6C92(InstantHit *const, std::vector<InstantHit::CollisionInfo,std::allocator<InstantHit::CollisionInfo> > const &);
void InstantHit::CollisionResponse(std::vector<InstantHit::CollisionInfo,std::allocator<InstantHit::CollisionInfo> > const &) // 0x4A6C92
{
    mangled_assert("?CollisionResponse@InstantHit@@AAEXABV?$vector@UCollisionInfo@InstantHit@@V?$allocator@UCollisionInfo@InstantHit@@@std@@@std@@@Z");
    todo("implement");
    _sub_4A6C92(this, arg);
}

_extern bool _sub_4A7BD0(InstantHit const *const);
bool InstantHit::isMoving() const // 0x4A7BD0
{
    mangled_assert("?isMoving@InstantHit@@UBE_NXZ");
    todo("implement");
    bool __result = _sub_4A7BD0(this);
    return __result;
}

_extern bool _sub_4A7BD3(InstantHit const *const);
bool InstantHit::isRotating() const // 0x4A7BD3
{
    mangled_assert("?isRotating@InstantHit@@UBE_NXZ");
    todo("implement");
    bool __result = _sub_4A7BD3(this);
    return __result;
}

_extern float _sub_4A7A94(InstantHit const *const);
float InstantHit::getDamageMultiplier() const // 0x4A7A94
{
    mangled_assert("?getDamageMultiplier@InstantHit@@UBEMXZ");
    todo("implement");
    float __result = _sub_4A7A94(this);
    return __result;
}

/* ---------- private code */
#endif
