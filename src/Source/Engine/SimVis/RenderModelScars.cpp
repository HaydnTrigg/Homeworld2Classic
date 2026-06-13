#if 0
/* ---------- headers */

#include "decomp.h"
#include <assist\stlexsmallvector.h>
#include <Render\gl\r_types.h>
#include <xstring>
#include <Mathlib\matvec.h>
#include <BattleScar\BattleScarOption.h>
#include <xmemory0>
#include <Mathlib\matrix4.h>
#include <sobid.h>
#include <pch.h>
#include <memory\memorylib.h>
#include <hw2box\hw2box.h>
#include <Render\gl\r_defines.h>
#include <Render\gl\glext.h>
#include <Mathlib\matrix3.h>
#include <boost\checked_delete.hpp>
#include <Render\FxGL\FXManager.h>
#include <Render\FxGL\VarMulti.h>
#include <new>
#include <ResearchManager.h>
#include <RenderAnim\RenderModelInstance.h>
#include <exception>
#include <xstddef>
#include <RenderAnim\EffectAnimationList.h>
#include <type_traits>
#include <RenderAnim\AnimEventContext.h>
#include <SelTarg.h>
#include <assist\callback.h>
#include <dbdefines.h>
#include <seInterface2\PatchID.h>
#include <prim.h>
#include <memory\memorysmall.h>
#include <UnitCaps\UnitCaps.h>
#include <seInterface2\PatchBase.h>
#include <BattleScar\BattleScarStats.h>
#include <seInterface2\SoundParams.h>
#include <Collision\BVH\profiling.h>
#include <Collision\Primitives\mesh.h>
#include <Collision\Primitives\triangle.h>
#include <Modifiers\ModifierTargetCache.h>
#include <xutility>
#include <utility>
#include <iosfwd>
#include <gameRandom.h>
#include <vector>
#include <savegame.h>
#include <Collision\Primitives\capsule.h>
#include <fileio\bytestream.h>
#include <random.h>
#include <xmemory>
#include <task.h>
#include <Collision\Primitives\segment.h>
#include <stack>
#include <debug\ctassert.h>
#include <fixedpoint.h>
#include <util\fixed.h>
#include <math.h>
#include <SOBGroupManager.h>
#include <hash_map>
#include <list>
#include <xhash>
#include <Mathlib\mathutil.h>
#include <Mathlib\vector3.h>
#include <Mathlib\vector4.h>
#include <map>
#include <Collision\BVH\bvh.h>
#include <xtree>
#include <boost\scoped_ptr.hpp>
#include <profile\profile.h>
#include <iostream>
#include <MultiplierContainer.h>
#include <visibility.h>
#include <MultiplierTypes.h>
#include <Mathlib\vector2.h>
#include <util\types.h>
#include <boost\cstdint.hpp>
#include <TeamColourRegistry.h>
#include <weaponinfo.h>
#include <SobWithMeshStatic.h>
#include <SobWithMesh.h>
#include <Mathlib\quat.h>
#include <SobRigidBody.h>
#include <playerresourcetype.h>
#include <RenderAnim\MarkerInstance.h>
#include <SobRigidBodyStatic.h>
#include <platform\timer.h>
#include <platform\platformexports.h>
#include <Collision\primitivesfwd.h>
#include <SoundManager\SoundEntityHandle.h>
#include <Mathlib\mathlibdll.h>
#include <Player.h>
#include <Mathlib\fastmath.h>
#include <SquadronList.h>
#include <SimVis\SobVis.h>
#include <Universe.h>
#include <Waypoint.h>
#include <savegamedata.h>
#include <SobUnmoveable.h>
#include <pathpoints.h>
#include <Collision\Primitives\sphere.h>
#include <MeshAnimation.h>
#include <ship.h>
#include <debug\db.h>
#include <ShieldTypes.h>
#include <Subsystems\HardPointManager.h>
#include <util\colour.h>
#include <boost\shared_ptr.hpp>
#include <Subsystems\HardPoint.h>
#include <sobtypes.h>
#include <boost\throw_exception.hpp>
#include <Subsystems\HardPointStatic.h>
#include <Subsystems\SubSystemType.h>
#include <selection.h>
#include <savegamedef.h>
#include <Collision\BVH\octree.h>
#include <SimVis\RenderModelVis.h>
#include <boost\detail\shared_count.hpp>
#include <Collision\BVH\span.h>
#include <Mathlib\LinearInterp.h>
#include <Race.h>
#include <sob.h>
#include <Collision\BVH\Internal\span_i.h>
#include <sobstatic.h>
#include <boost\detail\lwm_win32.hpp>
#include <Collision\BVH\proxy.h>
#include <Collision\Primitives\obb.h>
#include <Collision\intersect.h>
#include <BuildManager.h>
#include <memory\memoryalloc.h>
#include <HierarchyDynamic.h>
#include <SimVis\RenderModelScars.h>
#include <HierarchyStatic.h>
#include <BattleScar\BattleScarManager.h>
#include <wchar.h>
#include <Decal\DecalRefMesh.h>
#include <savestream.h>
#include <Decal\DecalManager.h>
#include <Interpolation.h>
#include <Decal\VertexPool.h>
#include <abilities.h>
#include <Collision\Primitives\aabb.h>
#include <HyperspaceManager.h>

/* ---------- constants */

/* ---------- definitions */

struct `anonymous-namespace'::TargetDesc
{
    matrix4 m_rootTxfm; // 0x0
    std::vector<std::vector<BattleScarManager::Handle,std::allocator<BattleScarManager::Handle> >,std::allocator<std::vector<BattleScarManager::Handle,std::allocator<BattleScarManager::Handle> > > > *m_scarLists; // 0x40
    unsigned __int32 m_jointIndex; // 0x44
    std::vector<BattleScarManager::DamageTarget,std::allocator<BattleScarManager::DamageTarget> > m_targetList; // 0x48
    TargetDesc(`anonymous-namespace'::TargetDesc const &); /* compiler_generated() */
    TargetDesc(); /* compiler_generated() */
    ~TargetDesc(); /* compiler_generated() */
    `anonymous-namespace'::TargetDesc &operator=(`anonymous-namespace'::TargetDesc const &); /* compiler_generated() */
};
static_assert(sizeof(`anonymous-namespace'::TargetDesc) == 84, "Invalid `anonymous-namespace'::TargetDesc size");

typedef `anonymous-namespace'::TargetDesc ?A0x38ddc5a2::TargetDesc;

/* ---------- prototypes */

/* ---------- globals */

/* ---------- private variables */

/* ---------- public code */

_extern _sub_5209E3(BattleScarManager::DamageTarget *const);
_inline BattleScarManager::DamageTarget::DamageTarget() // 0x5209E3
{
    mangled_assert("??0DamageTarget@BattleScarManager@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_5209E3(this);
}

_extern _sub_5209E6(RenderModelScars::Data *const);
_inline RenderModelScars::Data::Data() // 0x5209E6
{
    mangled_assert("??0Data@RenderModelScars@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_5209E6(this);
}

_extern _sub_520A00(RenderModelScars *const, Sob const *);
RenderModelScars::RenderModelScars(Sob const *) // 0x520A00
{
    mangled_assert("??0RenderModelScars@@QAE@PBVSob@@@Z");
    todo("implement");
    _sub_520A00(this, arg);
}

_extern _sub_520A62(RenderModelScars *const, Sob const *, SaveGameData *);
RenderModelScars::RenderModelScars(Sob const *, SaveGameData *) // 0x520A62
{
    mangled_assert("??0RenderModelScars@@QAE@PBVSob@@PAVSaveGameData@@@Z");
    todo("implement");
    _sub_520A62(this, arg, arg);
}

_extern void _sub_520AF5(RenderModelScars::Data *const);
_inline RenderModelScars::Data::~Data() // 0x520AF5
{
    mangled_assert("??1Data@RenderModelScars@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_520AF5(this);
}

_extern void _sub_520B09(RenderModelScars *const);
RenderModelScars::~RenderModelScars() // 0x520B09
{
    mangled_assert("??1RenderModelScars@@QAE@XZ");
    todo("implement");
    _sub_520B09(this);
}

_extern void _sub_521F06(RenderModelScars *const);
void RenderModelScars::removeAllScars() // 0x521F06
{
    mangled_assert("?removeAllScars@RenderModelScars@@QAEXXZ");
    todo("implement");
    _sub_521F06(this);
}

_extern void _sub_521E23(RenderModelScars *const);
void RenderModelScars::postRestore() // 0x521E23
{
    mangled_assert("?postRestore@RenderModelScars@@QAEXXZ");
    todo("implement");
    _sub_521E23(this);
}

_extern void _sub_52214A(RenderModelScars *const, HierarchyDynamic const *);
void RenderModelScars::setHierarchy(HierarchyDynamic const *) // 0x52214A
{
    mangled_assert("?setHierarchy@RenderModelScars@@QAEXPBVHierarchyDynamic@@@Z");
    todo("implement");
    _sub_52214A(this, arg);
}

_extern void _sub_521CCF(RenderModelScars *const, char const *, BattleScarManager::DamageInfo const &, float, long, BattleScarManager::DamageResult &);
void RenderModelScars::onWeaponHit(char const *, BattleScarManager::DamageInfo const &, float, long, BattleScarManager::DamageResult &) // 0x521CCF
{
    mangled_assert("?onWeaponHit@RenderModelScars@@QAEXPBDABUDamageInfo@BattleScarManager@@MJAAW4DamageResult@3@@Z");
    todo("implement");
    _sub_521CCF(this, arg, arg, arg, arg, arg);
}

_extern void _sub_521C25(RenderModelScars *const);
void RenderModelScars::onHealthChange() // 0x521C25
{
    mangled_assert("?onHealthChange@RenderModelScars@@QAEXXZ");
    todo("implement");
    _sub_521C25(this);
}

_extern void _sub_5221ED(RenderModelScars *const, Camera const &, float);
void RenderModelScars::updateBattleScars(Camera const &, float) // 0x5221ED
{
    mangled_assert("?updateBattleScars@RenderModelScars@@QAEXABVCamera@@M@Z");
    todo("implement");
    _sub_5221ED(this, arg, arg);
}

_extern void _sub_521F67(RenderModelScars *const);
void RenderModelScars::removeBattleScarFX() // 0x521F67
{
    mangled_assert("?removeBattleScarFX@RenderModelScars@@QAEXXZ");
    todo("implement");
    _sub_521F67(this);
}

_extern void _sub_521486(RenderModelScars *const, Camera const &);
void RenderModelScars::directRender(Camera const &) // 0x521486
{
    mangled_assert("?directRender@RenderModelScars@@QAEXABVCamera@@@Z");
    todo("implement");
    _sub_521486(this, arg);
}

_extern void _sub_52156F(RenderModelScars *const, char const *, unsigned __int32);
void RenderModelScars::fillScar(char const *, unsigned __int32) // 0x52156F
{
    mangled_assert("?fillScar@RenderModelScars@@QAEXPBDI@Z");
    todo("implement");
    _sub_52156F(this, arg, arg);
}

_extern bool _sub_5220BD(RenderModelScars const *const, SaveGameData *);
bool RenderModelScars::save(SaveGameData *) const // 0x5220BD
{
    mangled_assert("?save@RenderModelScars@@QBE_NPAVSaveGameData@@@Z");
    todo("implement");
    bool __result = _sub_5220BD(this, arg);
    return __result;
}

_extern bool _sub_522034(RenderModelScars *const, SaveGameData *);
bool RenderModelScars::restore(SaveGameData *) // 0x522034
{
    mangled_assert("?restore@RenderModelScars@@QAE_NPAVSaveGameData@@@Z");
    todo("implement");
    bool __result = _sub_522034(this, arg);
    return __result;
}

_extern Sob const *_sub_521B72(RenderModelScars const *const);
Sob const *RenderModelScars::getSob() const // 0x521B72
{
    mangled_assert("?getSob@RenderModelScars@@ABEPBVSob@@XZ");
    todo("implement");
    Sob const * __result = _sub_521B72(this);
    return __result;
}

_extern __int32 _sub_521B24(RenderModelScars const *const);
__int32 RenderModelScars::getMaxScarTri() const // 0x521B24
{
    mangled_assert("?getMaxScarTri@RenderModelScars@@ABEHXZ");
    todo("implement");
    __int32 __result = _sub_521B24(this);
    return __result;
}

_extern bool _sub_521B7A(RenderModelScars const *const, Camera const &);
bool RenderModelScars::isVisible(Camera const &) const // 0x521B7A
{
    mangled_assert("?isVisible@RenderModelScars@@ABE_NABVCamera@@@Z");
    todo("implement");
    bool __result = _sub_521B7A(this, arg);
    return __result;
}

_extern void _sub_522250(RenderModelScars *const, SobWithMesh const *);
void RenderModelScars::updateTransformAndVis(SobWithMesh const *) // 0x522250
{
    mangled_assert("?updateTransformAndVis@RenderModelScars@@AAEXPBVSobWithMesh@@@Z");
    todo("implement");
    _sub_522250(this, arg);
}

_extern void _sub_52217F(RenderModelScars *const);
void RenderModelScars::setupInternal() // 0x52217F
{
    mangled_assert("?setupInternal@RenderModelScars@@AAEXXZ");
    todo("implement");
    _sub_52217F(this);
}

_extern void _sub_5215F3(RenderModelScars *const, BattleScarManager::DamageInfo &);
void RenderModelScars::genDamageEvent(BattleScarManager::DamageInfo &) // 0x5215F3
{
    mangled_assert("?genDamageEvent@RenderModelScars@@AAEXAAUDamageInfo@BattleScarManager@@@Z");
    todo("implement");
    _sub_5215F3(this, arg);
}

/* ---------- private code */
#endif
