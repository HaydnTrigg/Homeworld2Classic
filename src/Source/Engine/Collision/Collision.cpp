#if 0
/* ---------- headers */

#include "decomp.h"
#include <playerresourcetype.h>
#include <ITweak.h>
#include <assist\stlexsmallvector.h>
#include <profile\profile.h>
#include <iostream>
#include <xstring>
#include <Race.h>
#include <Render\objects\core.h>
#include <Ship\Formation.h>
#include <AttackCommand.h>
#include <xmemory0>
#include <Mathlib\matrix4.h>
#include <HyperspaceManager.h>
#include <Render\gl\types.h>
#include <Ship\FormationPattern.h>
#include <AttackStyle.h>
#include <pch.h>
#include <Mathlib\matvec.h>
#include <sob.h>
#include <sobstatic.h>
#include <Collision\Primitives\sphere.h>
#include <SoundManager\SoundEntityHandle.h>
#include <OrderFeedback.h>
#include <fixedpoint.h>
#include <WeaponClassSpecificInfo.h>
#include <util\fixed.h>
#include <Render\gl\lotypes.h>
#include <BuildManager.h>
#include <Mathlib\matrix3.h>
#include <Universe.h>
#include <Waypoint.h>
#include <Render\gl\r_types.h>
#include <new>
#include <SobUnmoveable.h>
#include <exception>
#include <gameRenderDebug.h>
#include <xstddef>
#include <TeamColourRegistry.h>
#include <Render\objects\fontsystem.h>
#include <type_traits>
#include <savegame.h>
#include <Render\objects\objects.h>
#include <task.h>
#include <Render\objects\bitmapfont.h>
#include <stack>
#include <Collision\Primitives\mesh.h>
#include <SobWithMeshStatic.h>
#include <Collision\Primitives\triangle.h>
#include <Render\objects\cliprect.h>
#include <Missile.h>
#include <xutility>
#include <SobWithMesh.h>
#include <utility>
#include <iosfwd>
#include <SobRigidBody.h>
#include <dbdefines.h>
#include <vector>
#include <UnitCaps\UnitCaps.h>
#include <xmemory>
#include <SobRigidBodyStatic.h>
#include <Sob\Nebula\Nebula.h>
#include <MeshAnimation.h>
#include <Sob\Nebula\NebulaStatic.h>
#include <MissileStatic.h>
#include <Modifiers\ModifierApplier.h>
#include <DockCommand.h>
#include <Collision\Primitives\obb.h>
#include <command.h>
#include <Collision\BVH\octree.h>
#include <math.h>
#include <Collision\BVH\span.h>
#include <weaponinfo.h>
#include <Collision\BVH\Internal\span_i.h>
#include <shipstatic.h>
#include <list>
#include <Collision\BVH\proxy.h>
#include <commandtype.h>
#include <Collision\intersect.h>
#include <Squadron.h>
#include <Collision\primitivesfwd.h>
#include <ResearchManager.h>
#include <ParadeCommand.h>
#include <Render\gl\r_defines.h>
#include <Parade.h>
#include <Render\gl\glext.h>
#include <Mathlib\vector3.h>
#include <Modifiers\ModifierTargetCache.h>
#include <Mathlib\vector4.h>
#include <Modifiers\ModifierAbility.h>
#include <map>
#include <alliance.h>
#include <xtree>
#include <Sob\DustCloud\DustCloud.h>
#include <Interpolation.h>
#include <Sob\DustCloud\DustCloudStatic.h>
#include <boost\scoped_ptr.hpp>
#include <Physics\RigidBody.h>
#include <Collision\Primitives\aabb.h>
#include <Physics\RigidBodyController.h>
#include <Mathlib\vector2.h>
#include <util\types.h>
#include <sobid.h>
#include <ship.h>
#include <boost\cstdint.hpp>
#include <ShieldTypes.h>
#include <Subsystems\HardPointManager.h>
#include <Subsystems\HardPoint.h>
#include <Mathlib\quat.h>
#include <Subsystems\HardPointStatic.h>
#include <Subsystems\SubSystemType.h>
#include <Tactics.h>
#include <BillboardRender.h>
#include <Render\objects\compiledtext.h>
#include <FormationCommands\FormationCommand.h>
#include <Graphics\meshrenderproxy.h>
#include <weaponTargetInfo.h>
#include <seInterface2\PatchID.h>
#include <SelTarg.h>
#include <seInterface2\PatchBase.h>
#include <prim.h>
#include <seInterface2\SoundParams.h>
#include <platform\timer.h>
#include <platform\platformexports.h>
#include <Mathlib\mathlibdll.h>
#include <Mathlib\fastmath.h>
#include <Ship\FormationTargetInfo.h>
#include <Collision\Primitives\capsule.h>
#include <pathpoints.h>
#include <Collision\Primitives\segment.h>
#include <Collision\BVH\profiling.h>
#include <debug\db.h>
#include <abilities.h>
#include <FamilyListMgr.h>
#include <Sob\DefenseField\DefenseField.h>
#include <SOBGroupManager.h>
#include <FamilyList.h>
#include <Sob\DefenseField\DefenseFieldStatic.h>
#include <hash_map>
#include <deque>
#include <xhash>
#include <DynamicPoint.h>
#include <boost\shared_ptr.hpp>
#include <util\colour.h>
#include <sobtypes.h>
#include <boost\throw_exception.hpp>
#include <selection.h>
#include <savegamedef.h>
#include <boost\detail\shared_count.hpp>
#include <Family.h>
#include <boost\detail\lwm_win32.hpp>
#include <Player.h>
#include <SquadronList.h>
#include <LaunchCommand.h>
#include <config.h>
#include <Modifiers\ModifierUIInfo.h>
#include <MultiplierContainer.h>
#include <visibility.h>
#include <Modifiers\ModifierMultiplier.h>
#include <MultiplierTypes.h>
#include <Collision\BVH\bvh.h>
#include <Modifiers\ModifierEffect.h>
#include <Collision\Collision.h>
#include <wchar.h>
#include <platform\osdef.h>
#include <weaponstaticinfo.h>
#include <Physics\PhysicsObject.h>
#include <GunBinding.h>
#include <queue>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

extern void CollisionCallback(Sob *sobA, Sob *sobB, Collision::Point const &hitPoint);
extern void CollisionCallbackMissileSob(Missile *missile, Sob *obj2, Collision::Point const &hitPoint);
extern bool triviallyRejectShipCollision(Ship *collider, Ship *collidee);
extern void CollisionBigShipBigShip(Ship *shipA, Ship *shipB);
extern void CollisionShipUnmoveable(Ship *ship, Ship *shipUnmoveable);
extern void GetClosestPointOnOBB(Collision::OBB const &obb, vector3 const &inPosition, vector3 &outClosestPoint, vector3 &outNormal);
extern void CollisionBigShipSmallShip(Ship *bigShip, Ship *smallShip);
extern void CollisionSmallShipSmallShip(Ship *shipA, Ship *shipB);
extern void CollisionCallbackShipShip(Ship *shipA, Ship *shipB);
extern void calculateCollisionDamage(Ship *shipA, Ship *shipB);

/* ---------- globals */

extern bool g_shipCollision; // 0x836368

/* ---------- private variables */

_static
{
    extern vector3 const facenormals[6]; // 0x836370
}

/* ---------- public code */

void CollisionCallback(Sob *sobA, Sob *sobB, Collision::Point const &hitPoint) // 0x4E3345
{
    mangled_assert("?CollisionCallback@@YGXPAVSob@@0ABUPoint@Collision@@@Z");
    todo("implement");
}

void CollisionCallbackMissileSob(Missile *missile, Sob *obj2, Collision::Point const &hitPoint) // 0x4E33F2
{
    mangled_assert("?CollisionCallbackMissileSob@@YGXPAVMissile@@PAVSob@@ABUPoint@Collision@@@Z");
    todo("implement");
}

bool triviallyRejectShipCollision(Ship *collider, Ship *collidee) // 0x4E40AD
{
    mangled_assert("?triviallyRejectShipCollision@@YG_NPAVShip@@0@Z");
    todo("implement");
}

void CollisionBigShipBigShip(Ship *shipA, Ship *shipB) // 0x4E2D99
{
    mangled_assert("?CollisionBigShipBigShip@@YGXPAVShip@@0@Z");
    todo("implement");
}

void CollisionShipUnmoveable(Ship *ship, Ship *shipUnmoveable) // 0x4E35CF
{
    mangled_assert("?CollisionShipUnmoveable@@YGXPAVShip@@0@Z");
    todo("implement");
}

void GetClosestPointOnOBB(Collision::OBB const &obb, vector3 const &inPosition, vector3 &outClosestPoint, vector3 &outNormal) // 0x4E3DB6
{
    mangled_assert("?GetClosestPointOnOBB@@YGXABVOBB@Collision@@ABVvector3@@AAV3@2@Z");
    todo("implement");
}

void CollisionBigShipSmallShip(Ship *bigShip, Ship *smallShip) // 0x4E30BB
{
    mangled_assert("?CollisionBigShipSmallShip@@YGXPAVShip@@0@Z");
    todo("implement");
}

void CollisionSmallShipSmallShip(Ship *shipA, Ship *shipB) // 0x4E37C7
{
    mangled_assert("?CollisionSmallShipSmallShip@@YGXPAVShip@@0@Z");
    todo("implement");
}

void CollisionCallbackShipShip(Ship *shipA, Ship *shipB) // 0x4E3431
{
    mangled_assert("?CollisionCallbackShipShip@@YGXPAVShip@@0@Z");
    todo("implement");
}

void calculateCollisionDamage(Ship *shipA, Ship *shipB) // 0x4E3F5B
{
    mangled_assert("?calculateCollisionDamage@@YGXPAVShip@@0@Z");
    todo("implement");
}

/* ---------- private code */
#endif
