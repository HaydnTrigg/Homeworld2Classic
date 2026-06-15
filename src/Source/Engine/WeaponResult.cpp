#if 0
/* ---------- headers */

#include "decomp.h"
#include <platform\osdef.h>
#include <Collision\intersect.h>
#include <Mathlib\mathutil.h>
#include <Collision\primitivesfwd.h>
#include <assist\stlexsmallvector.h>
#include <scripting.h>
#include <xstring>
#include <scriptaccess.h>
#include <Mathlib\matrix4.h>
#include <xmemory0>
#include <scripttypedef.h>
#include <pch.h>
#include <lua.h>
#include <WeaponStatic.h>
#include <Physics\RigidBody.h>
#include <Physics\RigidBodyController.h>
#include <BillboardRender.h>
#include <renderer.h>
#include <Interpolation.h>
#include <Graphics\meshrenderproxy.h>
#include <Render\gl\types.h>
#include <Mathlib\matvec.h>
#include <Modifiers\ModifierUIInfo.h>
#include <Mathlib\matrix3.h>
#include <Collision\Primitives\aabb.h>
#include <weapon.h>
#include <Modifiers\ModifierMultiplier.h>
#include <WeaponFire\WeaponFire.h>
#include <ShieldTypes.h>
#include <Modifiers\ModifierEffect.h>
#include <weaponfiretypes.h>
#include <MeshAnimation.h>
#include <Render\gl\lotypes.h>
#include <Race.h>
#include <new>
#include <profile\profile.h>
#include <sobid.h>
#include <EffectCreate.h>
#include <exception>
#include <iostream>
#include <xstddef>
#include <type_traits>
#include <Subsystems\HardPointManager.h>
#include <Subsystems\HardPoint.h>
#include <EngineTrailSystem.h>
#include <Subsystems\HardPointStatic.h>
#include <Modifiers\ModifierApplier.h>
#include <Render\gl\r_types.h>
#include <Collision\Collision.h>
#include <Subsystems\SubSystemType.h>
#include <config.h>
#include <BuildManager.h>
#include <xutility>
#include <utility>
#include <iosfwd>
#include <MADState.h>
#include <vector>
#include <weaponTargetInfo.h>
#include <alliance.h>
#include <luaconfig\luabinding.h>
#include <xmemory>
#include <weaponstaticinfo.h>
#include <luaconfig\luaconfig.h>
#include <GunBinding.h>
#include <math.h>
#include <seInterface2\PatchID.h>
#include <SelTarg.h>
#include <playerresourcetype.h>
#include <seInterface2\PatchBase.h>
#include <prim.h>
#include <list>
#include <seInterface2\SoundParams.h>
#include <TeamColourRegistry.h>
#include <savegame.h>
#include <task.h>
#include <CoordSysUtilities.h>
#include <Mathlib\vector3.h>
#include <SobZeroMassBody.h>
#include <Mathlib\vector4.h>
#include <Collision\Primitives\capsule.h>
#include <SoundManager\SoundEntityHandle.h>
#include <WeaponClassSpecificInfo.h>
#include <Collision\Primitives\segment.h>
#include <fixedpoint.h>
#include <sobzeromassbodystatic.h>
#include <SobWithMeshStatic.h>
#include <Collision\BVH\profiling.h>
#include <util\fixed.h>
#include <map>
#include <ship.h>
#include <xtree>
#include <Render\gl\r_defines.h>
#include <SobWithMesh.h>
#include <Render\gl\glext.h>
#include <SobRigidBody.h>
#include <boost\scoped_ptr.hpp>
#include <dbdefines.h>
#include <SobRigidBodyStatic.h>
#include <UnitCaps\UnitCaps.h>
#include <Player.h>
#include <Mathlib\vector2.h>
#include <SOBGroupManager.h>
#include <ResearchManager.h>
#include <util\types.h>
#include <hash_map>
#include <stack>
#include <xhash>
#include <boost\cstdint.hpp>
#include <MultiplierContainer.h>
#include <visibility.h>
#include <Physics\PhysicsObject.h>
#include <Mathlib\quat.h>
#include <MultiplierTypes.h>
#include <Collision\BVH\bvh.h>
#include <Modifiers\ModifierAbility.h>
#include <shipstatic.h>
#include <commandtype.h>
#include <Mathlib\mathlibdll.h>
#include <Mathlib\fastmath.h>
#include <abilities.h>
#include <Universe.h>
#include <Waypoint.h>
#include <SobUnmoveable.h>
#include <sob.h>
#include <pathpoints.h>
#include <sobstatic.h>
#include <Collision\Primitives\sphere.h>
#include <debug\db.h>
#include <Missile.h>
#include <MissileStatic.h>
#include <HyperspaceManager.h>
#include <deque>
#include <SquadronList.h>
#include <Tactics.h>
#include <util\colour.h>
#include <boost\shared_ptr.hpp>
#include <sobtypes.h>
#include <boost\throw_exception.hpp>
#include <selection.h>
#include <savegamedef.h>
#include <boost\detail\shared_count.hpp>
#include <boost\detail\lwm_win32.hpp>
#include <Interface.h>
#include <platform\timer.h>
#include <platform\platformexports.h>
#include <ITweak.h>
#include <Sob\DustCloud\DustCloud.h>
#include <Sob\DustCloud\DustCloudStatic.h>
#include <gameRandom.h>
#include <weaponinfo.h>
#include <WeaponResult.h>
#include <random.h>
#include <wchar.h>
#include <Modifiers\ModifierTargetCache.h>
#include <Collision\Primitives\obb.h>
#include <Collision\BVH\octree.h>
#include <Collision\BVH\span.h>
#include <Collision\BVH\Internal\span_i.h>
#include <Collision\BVH\proxy.h>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

extern float ApplyWeaponResultTemplate<Missile>(Missile &wf, Sob *target, vector3 const &hitPosition, vector3 const &hitNormal, WeaponResult const &wr, bool const instantHit);
extern float ApplyWeaponResultTemplate<WeaponFire>(WeaponFire &wf, Sob *target, vector3 const &hitPosition, vector3 const &hitNormal, WeaponResult const &wr, bool const instantHit);
extern float ApplyWeaponResult(WeaponFire &wf, Sob *target, vector3 const &hitPosition, vector3 const &hitNormal, WeaponResult const &wr, bool const instantHit);
extern float ApplyWeaponResult(Missile &wf, Sob *target, vector3 const &hitPosition, vector3 const &hitNormal, WeaponResult const &wr, bool const instantHit);

/* ---------- globals */

/* ---------- private variables */

/* ---------- public code */

float ApplyWeaponResultTemplate<Missile>(Missile &wf, Sob *target, vector3 const &hitPosition, vector3 const &hitNormal, WeaponResult const &wr, bool const instantHit) // 0x4A1B2A
{
    mangled_assert("??$ApplyWeaponResultTemplate@VMissile@@@@YGMAAVMissile@@PAVSob@@ABVvector3@@2ABVWeaponResult@@_N@Z");
    todo("implement");
}

float ApplyWeaponResultTemplate<WeaponFire>(WeaponFire &wf, Sob *target, vector3 const &hitPosition, vector3 const &hitNormal, WeaponResult const &wr, bool const instantHit) // 0x4A26CE
{
    mangled_assert("??$ApplyWeaponResultTemplate@VWeaponFire@@@@YGMAAVWeaponFire@@PAVSob@@ABVvector3@@2ABVWeaponResult@@_N@Z");
    todo("implement");
}

float ApplyWeaponResult(WeaponFire &wf, Sob *target, vector3 const &hitPosition, vector3 const &hitNormal, WeaponResult const &wr, bool const instantHit) // 0x4A2EBF
{
    mangled_assert("?ApplyWeaponResult@@YGMAAVWeaponFire@@PAVSob@@ABVvector3@@2ABVWeaponResult@@_N@Z");
    todo("implement");
}

float ApplyWeaponResult(Missile &wf, Sob *target, vector3 const &hitPosition, vector3 const &hitNormal, WeaponResult const &wr, bool const instantHit) // 0x4A2EB6
{
    mangled_assert("?ApplyWeaponResult@@YGMAAVMissile@@PAVSob@@ABVvector3@@2ABVWeaponResult@@_N@Z");
    todo("implement");
}

/* ---------- private code */
#endif
