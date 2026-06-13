#if 0
/* ---------- headers */

#include "decomp.h"
#include <Modifiers\ModifierEffect.h>
#include <Race.h>
#include <Collision\Primitives\aabb.h>
#include <abilities.h>
#include <assist\stlexsmallvector.h>
#include <Collision\Primitives\obb.h>
#include <xstring>
#include <xmemory0>
#include <Mathlib\matrix4.h>
#include <pch.h>
#include <memory\memorylib.h>
#include <config.h>
#include <HyperspaceManager.h>
#include <Modifiers\ModifierApplier.h>
#include <fileio\filestream.h>
#include <BuildManager.h>
#include <Mathlib\LinearInterp.h>
#include <BattleScar\BattleScarStats.h>
#include <Missile.h>
#include <BattleScar\BattleScarManager.h>
#include <Mathlib\matrix3.h>
#include <shipstatic.h>
#include <MissileStatic.h>
#include <Decal\DecalManager.h>
#include <weaponstaticinfo.h>
#include <Decal\VertexPool.h>
#include <GunBinding.h>
#include <new>
#include <exception>
#include <xstddef>
#include <type_traits>
#include <SimVis\RenderModelVis.h>
#include <SimVis\ShipVis.h>
#include <SelTarg.h>
#include <Subsystems\Subsystem.h>
#include <SimVis\SobVis.h>
#include <prim.h>
#include <Subsystems\SubsystemStatic.h>
#include <xutility>
#include <utility>
#include <iosfwd>
#include <vector>
#include <WeaponClassSpecificInfo.h>
#include <fileio\bytestream.h>
#include <xmemory>
#include <fileio\fileioexports.h>
#include <DynamicPoint.h>
#include <WeaponFire\Bullet.h>
#include <debug\ctassert.h>
#include <dbdefines.h>
#include <WeaponFire\WeaponFire.h>
#include <Collision\Primitives\capsule.h>
#include <Modifiers\ModifierTargetCache.h>
#include <UnitCaps\UnitCaps.h>
#include <weaponfiretypes.h>
#include <Collision\Primitives\segment.h>
#include <Collision\BVH\profiling.h>
#include <Player.h>
#include <ResearchManager.h>
#include <list>
#include <fixedpoint.h>
#include <Collision\Collision.h>
#include <seInterface2\PatchID.h>
#include <util\fixed.h>
#include <WeaponFire\SphereBurst.h>
#include <seInterface2\PatchBase.h>
#include <Mathlib\vector3.h>
#include <seInterface2\SoundParams.h>
#include <Mathlib\vector4.h>
#include <map>
#include <xtree>
#include <boost\scoped_ptr.hpp>
#include <weaponTargetInfo.h>
#include <memory\memoryalloc.h>
#include <Mathlib\vector2.h>
#include <SimVis\WeaponFireVis.h>
#include <MultiplierContainer.h>
#include <visibility.h>
#include <Modifiers\ModifierAbility.h>
#include <util\types.h>
#include <SimVis\effectcontainervisupdate.h>
#include <profile\profile.h>
#include <MultiplierTypes.h>
#include <iostream>
#include <Collision\BVH\bvh.h>
#include <RenderAnim\MarkerInstance.h>
#include <boost\cstdint.hpp>
#include <SOBGroupManager.h>
#include <SobZeroMassBody.h>
#include <sobzeromassbodystatic.h>
#include <Parade.h>
#include <Sob\DefenseField\DefenseField.h>
#include <hash_map>
#include <Sob\DefenseField\DefenseFieldStatic.h>
#include <Squadron.h>
#include <xhash>
#include <command.h>
#include <Mathlib\quat.h>
#include <sobid.h>
#include <weaponinfo.h>
#include <EffectCreate.h>
#include <playerresourcetype.h>
#include <Render\gl\r_types.h>
#include <Mathlib\matvec.h>
#include <TeamColourRegistry.h>
#include <savegame.h>
#include <Tactics.h>
#include <Mathlib\mathlibdll.h>
#include <task.h>
#include <WeaponFire\InstantHit.h>
#include <RenderAnim\RenderModelInstance.h>
#include <Mathlib\fastmath.h>
#include <stack>
#include <Collision\Primitives\mesh.h>
#include <RenderAnim\EffectAnimationList.h>
#include <platform\timer.h>
#include <Collision\Primitives\triangle.h>
#include <RenderAnim\AnimEventContext.h>
#include <SobWithMeshStatic.h>
#include <SoundManager\SoundEntityHandle.h>
#include <platform\platformexports.h>
#include <assist\callback.h>
#include <Render\gl\r_defines.h>
#include <memory\memorysmall.h>
#include <Render\gl\glext.h>
#include <pathpoints.h>
#include <debug\db.h>
#include <ship.h>
#include <SobWithMesh.h>
#include <SobRigidBodyStatic.h>
#include <SobRigidBody.h>
#include <deque>
#include <sob.h>
#include <sobstatic.h>
#include <Collision\Primitives\sphere.h>
#include <MeshAnimation.h>
#include <ShieldTypes.h>
#include <Render\FxGL\FXManager.h>
#include <boost\shared_ptr.hpp>
#include <util\colour.h>
#include <Render\FxGL\VarMulti.h>
#include <sobtypes.h>
#include <boost\throw_exception.hpp>
#include <selection.h>
#include <savegamedef.h>
#include <boost\detail\shared_count.hpp>
#include <boost\detail\lwm_win32.hpp>
#include <Subsystems\HardPointManager.h>
#include <Subsystems\HardPoint.h>
#include <Subsystems\HardPointStatic.h>
#include <Collision\BVH\octree.h>
#include <Subsystems\SubSystemType.h>
#include <Collision\BVH\span.h>
#include <Collision\BVH\Internal\span_i.h>
#include <Collision\BVH\proxy.h>
#include <Collision\intersect.h>
#include <Collision\primitivesfwd.h>
#include <Universe.h>
#include <SobFactory.h>
#include <ParadeCommand.h>
#include <Waypoint.h>
#include <wchar.h>
#include <commandtype.h>
#include <SobUnmoveable.h>
#include <OrderFeedback.h>
#include <SquadronList.h>
#include <queue>
#include <Interpolation.h>
#include <Modifiers\ModifierUIInfo.h>
#include <Modifiers\ModifierMultiplier.h>

/* ---------- constants */

/* ---------- definitions */

typedef Callback::Obj0nRetInternal Type;
typedef std::list<EffectAnimationList::AnimationInstance,mempool_alloc<EffectAnimationList::AnimationInstance> > EffectAnimationCont;
typedef std::vector<EffectAnimationList::StateUpdate *,std::allocator<EffectAnimationList::StateUpdate *> > StateUpdateCont;
typedef Callback::Obj1wRet<bool,enum AnimEventContext::ModeChange> CBFunc;
typedef std::vector<Callback::Obj1wRet<bool,enum AnimEventContext::ModeChange>,std::allocator<Callback::Obj1wRet<bool,enum AnimEventContext::ModeChange> > > CallbackCont;
typedef __int32 MarkerID;
typedef std::vector<MarkerInstance,std::allocator<MarkerInstance> > MarkerInstanceCont;
typedef unsigned short VertIndex;
typedef std::list<BattleScarManager::Object::Decal *,std::allocator<BattleScarManager::Object::Decal *> > DecalList;
typedef std::list<Collision::Sphere,std::allocator<Collision::Sphere> > BoundingSphereList;
typedef std::list<BattleScarManager::Object::FXInstance,std::allocator<BattleScarManager::Object::FXInstance> > FXInstanceList;

/* ---------- prototypes */

/* ---------- globals */

/* ---------- private variables */

_static
{
    extern SobFactory *s_instance; // 0x84AF70
}

/* ---------- public code */

_extern SobFactory *_sub_639015();
SobFactory *SobFactory::instance() // 0x639015
{
    mangled_assert("?instance@SobFactory@@SGPAV1@XZ");
    todo("implement");
    SobFactory * __result = _sub_639015();
    return __result;
}

_extern bool _sub_63902C();
bool SobFactory::shutdown() // 0x63902C
{
    mangled_assert("?shutdown@SobFactory@@SG_NXZ");
    todo("implement");
    bool __result = _sub_63902C();
    return __result;
}

_extern _sub_63897E(SobFactory *const);
SobFactory::SobFactory() // 0x63897E
{
    mangled_assert("??0SobFactory@@AAE@XZ");
    todo("implement");
    _sub_63897E(this);
}

_extern Ship *_sub_638B8A(SobFactory *const, char const *, __int32);
Ship *SobFactory::createShip(char const *, __int32) // 0x638B8A
{
    mangled_assert("?createShip@SobFactory@@QAEPAVShip@@PBDH@Z");
    todo("implement");
    Ship * __result = _sub_638B8A(this, arg, arg);
    return __result;
}

_extern Squadron *_sub_638DEB(SobFactory *const, char const *, char const *, __int32, unsigned __int32);
Squadron *SobFactory::createSquadron(char const *, char const *, __int32, unsigned __int32) // 0x638DEB
{
    mangled_assert("?createSquadron@SobFactory@@QAEPAVSquadron@@PBD0HI@Z");
    todo("implement");
    Squadron * __result = _sub_638DEB(this, arg, arg, arg, arg);
    return __result;
}

_extern SubSystem *_sub_638F51(SobFactory *const, char const *, Player *);
SubSystem *SobFactory::createSubSystem(char const *, Player *) // 0x638F51
{
    mangled_assert("?createSubSystem@SobFactory@@QAEPAVSubSystem@@PBDPAVPlayer@@@Z");
    todo("implement");
    SubSystem * __result = _sub_638F51(this, arg, arg);
    return __result;
}

_extern Missile *_sub_638AD0(SobFactory *const, char const *, vector3 const &, matrix3 const &, __int32);
Missile *SobFactory::createMissile(char const *, vector3 const &, matrix3 const &, __int32) // 0x638AD0
{
    mangled_assert("?createMissile@SobFactory@@QAEPAVMissile@@PBDABVvector3@@ABVmatrix3@@H@Z");
    todo("implement");
    Missile * __result = _sub_638AD0(this, arg, arg, arg, arg);
    return __result;
}

_extern Missile *_sub_638B1B(SobFactory *const, char const *, vector3 const &, matrix3 const &, SobWithMesh *, WeaponStatic const *, WeaponTargetInfo const &, Player *);
Missile *SobFactory::createMissile(char const *, vector3 const &, matrix3 const &, SobWithMesh *, WeaponStatic const *, WeaponTargetInfo const &, Player *) // 0x638B1B
{
    mangled_assert("?createMissile@SobFactory@@QAEPAVMissile@@PBDABVvector3@@ABVmatrix3@@PAVSobWithMesh@@PBVWeaponStatic@@ABVWeaponTargetInfo@@PAVPlayer@@@Z");
    todo("implement");
    Missile * __result = _sub_638B1B(this, arg, arg, arg, arg, arg, arg, arg);
    return __result;
}

_extern Bullet *_sub_638999(SobFactory *const, char const *, Sob *, WeaponTargetInfo const &, vector3 const &, matrix3 const &);
Bullet *SobFactory::createBullet(char const *, Sob *, WeaponTargetInfo const &, vector3 const &, matrix3 const &) // 0x638999
{
    mangled_assert("?createBullet@SobFactory@@QAEPAVBullet@@PBDPAVSob@@ABVWeaponTargetInfo@@ABVvector3@@ABVmatrix3@@@Z");
    todo("implement");
    Bullet * __result = _sub_638999(this, arg, arg, arg, arg, arg);
    return __result;
}

_extern InstantHit *_sub_638A67(SobFactory *const, char const *, Sob *, WeaponTargetInfo const &, vector3 const &, matrix3 const &);
InstantHit *SobFactory::createInstantHit(char const *, Sob *, WeaponTargetInfo const &, vector3 const &, matrix3 const &) // 0x638A67
{
    mangled_assert("?createInstantHit@SobFactory@@QAEPAVInstantHit@@PBDPAVSob@@ABVWeaponTargetInfo@@ABVvector3@@ABVmatrix3@@@Z");
    todo("implement");
    InstantHit * __result = _sub_638A67(this, arg, arg, arg, arg, arg);
    return __result;
}

_extern SphereBurst *_sub_638D85(SobFactory *const, char const *, Sob *, vector3 const &, matrix3 const &);
SphereBurst *SobFactory::createSphereBurst(char const *, Sob *, vector3 const &, matrix3 const &) // 0x638D85
{
    mangled_assert("?createSphereBurst@SobFactory@@QAEPAVSphereBurst@@PBDPAVSob@@ABVvector3@@ABVmatrix3@@@Z");
    todo("implement");
    SphereBurst * __result = _sub_638D85(this, arg, arg, arg, arg);
    return __result;
}

_extern Waypoint *_sub_638FBE(SobFactory *const, vector3 const &);
Waypoint *SobFactory::createWayPoint(vector3 const &) // 0x638FBE
{
    mangled_assert("?createWayPoint@SobFactory@@QAEPAVWaypoint@@ABVvector3@@@Z");
    todo("implement");
    Waypoint * __result = _sub_638FBE(this, arg);
    return __result;
}

_extern DefenseField *_sub_638A02(SobFactory *const, vector3 const &, float, SobID const &);
DefenseField *SobFactory::createDefenseField(vector3 const &, float, SobID const &) // 0x638A02
{
    mangled_assert("?createDefenseField@SobFactory@@QAEPAVDefenseField@@ABVvector3@@MABVSobID@@@Z");
    todo("implement");
    DefenseField * __result = _sub_638A02(this, arg, arg, arg);
    return __result;
}

_extern SobVis *_sub_638BFB(SobFactory *const, Sob *);
SobVis *SobFactory::createSobVis(Sob *) // 0x638BFB
{
    mangled_assert("?createSobVis@SobFactory@@QAEPAVSobVis@@PAVSob@@@Z");
    todo("implement");
    SobVis * __result = _sub_638BFB(this, arg);
    return __result;
}

_extern SobVis *_sub_638CBA(SobFactory *const, Sob *, SaveGameData *);
SobVis *SobFactory::createSobVis(Sob *, SaveGameData *) // 0x638CBA
{
    mangled_assert("?createSobVis@SobFactory@@QAEPAVSobVis@@PAVSob@@PAVSaveGameData@@@Z");
    todo("implement");
    SobVis * __result = _sub_638CBA(this, arg, arg);
    return __result;
}

/* ---------- private code */
#endif
