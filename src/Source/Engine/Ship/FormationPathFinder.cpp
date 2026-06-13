#if 0
/* ---------- headers */

#include "decomp.h"
#include <Collision\BVH\octree.h>
#include <GunBinding.h>
#include <Collision\BVH\span.h>
#include <assist\stlexsmallvector.h>
#include <Collision\Primitives\obb.h>
#include <Collision\BVH\Internal\span_i.h>
#include <xstring>
#include <Collision\BVH\proxy.h>
#include <xmemory0>
#include <Collision\intersect.h>
#include <Mathlib\matrix4.h>
#include <pch.h>
#include <playerresourcetype.h>
#include <Avoidance\PathFinder.h>
#include <Collision\primitivesfwd.h>
#include <Avoidance\PathFinderObstacleOBB.h>
#include <Collision\util\smallobj.h>
#include <ITweak.h>
#include <Mathlib\matrix3.h>
#include <SoundManager\SoundEntityHandle.h>
#include <ParadeCommand.h>
#include <profile\profile.h>
#include <WeaponClassSpecificInfo.h>
#include <Parade.h>
#include <iostream>
#include <Interpolation.h>
#include <Squadron.h>
#include <new>
#include <command.h>
#include <Collision\Primitives\aabb.h>
#include <exception>
#include <xstddef>
#include <FamilyListMgr.h>
#include <type_traits>
#include <FamilyList.h>
#include <Family.h>
#include <sobid.h>
#include <xutility>
#include <utility>
#include <iosfwd>
#include <vector>
#include <xmemory>
#include <Avoidance\AvoidanceBoxes.h>
#include <math.h>
#include <list>
#include <Modifiers\ModifierAbility.h>
#include <seInterface2\PatchID.h>
#include <SelTarg.h>
#include <seInterface2\PatchBase.h>
#include <prim.h>
#include <shipstatic.h>
#include <Mathlib\vector3.h>
#include <seInterface2\SoundParams.h>
#include <commandtype.h>
#include <Mathlib\vector4.h>
#include <Collision\BVH\profiling.h>
#include <fixedpoint.h>
#include <map>
#include <util\fixed.h>
#include <xtree>
#include <abilities.h>
#include <boost\scoped_ptr.hpp>
#include <Collision\Primitives\capsule.h>
#include <Collision\Primitives\segment.h>
#include <dbdefines.h>
#include <UnitCaps\UnitCaps.h>
#include <Mathlib\vector2.h>
#include <SOBGroupManager.h>
#include <util\types.h>
#include <hash_map>
#include <xhash>
#include <Ship\FormationTargetInfo.h>
#include <boost\cstdint.hpp>
#include <FormationCommands\FormationCommand.h>
#include <Tactics.h>
#include <Mathlib\quat.h>
#include <Collision\BVH\bvh.h>
#include <DynamicPoint.h>
#include <MultiplierContainer.h>
#include <visibility.h>
#include <MultiplierTypes.h>
#include <weaponinfo.h>
#include <Modifiers\ModifierTargetCache.h>
#include <FormationCommands\FormationDockCommand.h>
#include <pathpoints.h>
#include <TeamColourRegistry.h>
#include <debug\db.h>
#include <savegame.h>
#include <task.h>
#include <stack>
#include <Universe.h>
#include <deque>
#include <Waypoint.h>
#include <HyperspaceManager.h>
#include <SobWithMeshStatic.h>
#include <SobUnmoveable.h>
#include <SquadronList.h>
#include <sob.h>
#include <ship.h>
#include <sobstatic.h>
#include <SobWithMesh.h>
#include <Collision\Primitives\sphere.h>
#include <boost\shared_ptr.hpp>
#include <util\colour.h>
#include <SobRigidBody.h>
#include <sobtypes.h>
#include <boost\throw_exception.hpp>
#include <selection.h>
#include <SobRigidBodyStatic.h>
#include <savegamedef.h>
#include <boost\detail\shared_count.hpp>
#include <Ship\Formation.h>
#include <Ship\FormationPattern.h>
#include <OrderFeedback.h>
#include <boost\detail\lwm_win32.hpp>
#include <MeshAnimation.h>
#include <ShieldTypes.h>
#include <Modifiers\ModifierUIInfo.h>
#include <platform\timer.h>
#include <Modifiers\ModifierMultiplier.h>
#include <platform\platformexports.h>
#include <Modifiers\ModifierEffect.h>
#include <Subsystems\HardPointManager.h>
#include <Subsystems\HardPoint.h>
#include <Subsystems\HardPointStatic.h>
#include <Ship\FormationPathFinder.h>
#include <Subsystems\SubSystemType.h>
#include <wchar.h>
#include <config.h>
#include <Modifiers\ModifierApplier.h>
#include <queue>
#include <weaponstaticinfo.h>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

extern void FormationPathFinder::addOBB(Collision::OBB const &obb, vector3 const &velocity, vector3 const &addedrad, float addedrad_length, vector3 const &position, vector3 const &target);
extern void FormationPathFinder::addShips(unsigned __int32 priority, Sob *formationSobNotToAvoid, Sob *squadronSobNotToAvoid, vector3 const &addedrad, float addedrad_length, vector3 const &position, vector3 const &target, Formation const *formation);
extern void FormationPathFinder::addAsteroids(unsigned __int32 priority, Sob *formationSobNotToAvoid, Sob *squadronSobNotToAvoid, vector3 const &addedrad, float addedrad_length, vector3 const &position, vector3 const &target);
extern void FormationPathFinder::addAvoidanceBoxes(vector3 const &addedrad, float addedrad_length, vector3 const &position, vector3 const &target);
extern void FormationPathFinder::findPath(float inXRadius, float inYRadius, __int32 familiesToDodge, vector3 const &position, vector3 const &target, std::list<vector3,std::allocator<vector3> > &outResult, Formation const *formation);

/* ---------- globals */

extern PathFinder FormationPathFinder::s_pathFinder; // 0x84408C
extern unsigned __int32 FormationPathFinder::s_avoidanceBoxPriority; // 0x844088

/* ---------- private variables */

/* ---------- public code */

_extern void _sub_4E429B(Collision::OBB const &, vector3 const &, vector3 const &, float, vector3 const &, vector3 const &);
void FormationPathFinder::addOBB(Collision::OBB const &obb, vector3 const &velocity, vector3 const &addedrad, float addedrad_length, vector3 const &position, vector3 const &target) // 0x4E429B
{
    mangled_assert("?addOBB@FormationPathFinder@@YGXABVOBB@Collision@@ABVvector3@@1M11@Z");
    todo("implement");
    _sub_4E429B(obb, velocity, addedrad, addedrad_length, position, target);
}

_extern void _sub_4E4392(unsigned __int32, Sob *, Sob *, vector3 const &, float, vector3 const &, vector3 const &, Formation const *);
void FormationPathFinder::addShips(unsigned __int32 priority, Sob *formationSobNotToAvoid, Sob *squadronSobNotToAvoid, vector3 const &addedrad, float addedrad_length, vector3 const &position, vector3 const &target, Formation const *formation) // 0x4E4392
{
    mangled_assert("?addShips@FormationPathFinder@@YGXIPAVSob@@0ABVvector3@@M11PBVFormation@@@Z");
    todo("implement");
    _sub_4E4392(priority, formationSobNotToAvoid, squadronSobNotToAvoid, addedrad, addedrad_length, position, target, formation);
}

_extern void _sub_4E41C3(unsigned __int32, Sob *, Sob *, vector3 const &, float, vector3 const &, vector3 const &);
void FormationPathFinder::addAsteroids(unsigned __int32 priority, Sob *formationSobNotToAvoid, Sob *squadronSobNotToAvoid, vector3 const &addedrad, float addedrad_length, vector3 const &position, vector3 const &target) // 0x4E41C3
{
    mangled_assert("?addAsteroids@FormationPathFinder@@YGXIPAVSob@@0ABVvector3@@M11@Z");
    todo("implement");
    _sub_4E41C3(priority, formationSobNotToAvoid, squadronSobNotToAvoid, addedrad, addedrad_length, position, target);
}

_extern void _sub_4E4259(vector3 const &, float, vector3 const &, vector3 const &);
void FormationPathFinder::addAvoidanceBoxes(vector3 const &addedrad, float addedrad_length, vector3 const &position, vector3 const &target) // 0x4E4259
{
    mangled_assert("?addAvoidanceBoxes@FormationPathFinder@@YGXABVvector3@@M00@Z");
    todo("implement");
    _sub_4E4259(addedrad, addedrad_length, position, target);
}

_extern void _sub_4E44D4(float, float, __int32, vector3 const &, vector3 const &, std::list<vector3,std::allocator<vector3> > &, Formation const *);
void FormationPathFinder::findPath(float inXRadius, float inYRadius, __int32 familiesToDodge, vector3 const &position, vector3 const &target, std::list<vector3,std::allocator<vector3> > &outResult, Formation const *formation) // 0x4E44D4
{
    mangled_assert("?findPath@FormationPathFinder@@YGXMMHABVvector3@@0AAV?$list@Vvector3@@V?$allocator@Vvector3@@@std@@@std@@PBVFormation@@@Z");
    todo("implement");
    _sub_4E44D4(inXRadius, inYRadius, familiesToDodge, position, target, outResult, formation);
}

/* ---------- private code */
#endif
