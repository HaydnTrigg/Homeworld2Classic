#if 0
/* ---------- headers */

#include "decomp.h"
#include <Modifiers\ModifierEffect.h>
#include <assist\stlexsmallvector.h>
#include <xstring>
#include <xmemory0>
#include <Mathlib\matrix4.h>
#include <pch.h>
#include <TeamColourRegistry.h>
#include <config.h>
#include <savegame.h>
#include <Modifiers\ModifierApplier.h>
#include <task.h>
#include <Universe.h>
#include <stack>
#include <Waypoint.h>
#include <platform\timer.h>
#include <SobUnmoveable.h>
#include <platform\platformexports.h>
#include <SobWithMeshStatic.h>
#include <Mathlib\matrix3.h>
#include <weaponstaticinfo.h>
#include <GunBinding.h>
#include <new>
#include <SobRigidBodyStatic.h>
#include <exception>
#include <xstddef>
#include <type_traits>
#include <MeshAnimation.h>
#include <fixedpoint.h>
#include <abilities.h>
#include <util\fixed.h>
#include <Collision\Primitives\obb.h>
#include <Collision\BVH\octree.h>
#include <xutility>
#include <Collision\BVH\span.h>
#include <utility>
#include <iosfwd>
#include <Collision\BVH\Internal\span_i.h>
#include <vector>
#include <Collision\BVH\proxy.h>
#include <fileio\bytestream.h>
#include <WeaponClassSpecificInfo.h>
#include <xmemory>
#include <Collision\intersect.h>
#include <fileio\fileioexports.h>
#include <Collision\primitivesfwd.h>
#include <list>
#include <Interpolation.h>
#include <Collision\Primitives\aabb.h>
#include <Mathlib\vector3.h>
#include <Mathlib\vector4.h>
#include <sobid.h>
#include <xtree>
#include <boost\scoped_ptr.hpp>
#include <weaponinfo.h>
#include <playerresourcetype.h>
#include <Modifiers\ModifierTargetCache.h>
#include <Mathlib\vector2.h>
#include <util\types.h>
#include <Modifiers\ModifierAbility.h>
#include <shipstatic.h>
#include <commandtype.h>
#include <Race.h>
#include <boost\cstdint.hpp>
#include <BuildManager.h>
#include <gameRandom.h>
#include <seInterface2\PatchID.h>
#include <SelTarg.h>
#include <random.h>
#include <seInterface2\PatchBase.h>
#include <prim.h>
#include <seInterface2\SoundParams.h>
#include <Mathlib\quat.h>
#include <ship.h>
#include <ShieldTypes.h>
#include <Collision\Primitives\capsule.h>
#include <Collision\Primitives\segment.h>
#include <Collision\BVH\profiling.h>
#include <dbdefines.h>
#include <UnitCaps\UnitCaps.h>
#include <Tactics.h>
#include <Subsystems\HardPointManager.h>
#include <Subsystems\HardPoint.h>
#include <SOBGroupManager.h>
#include <Subsystems\HardPointStatic.h>
#include <hash_map>
#include <Subsystems\SubSystemType.h>
#include <xhash>
#include <pathpoints.h>
#include <debug\db.h>
#include <Player.h>
#include <fileio\filestream.h>
#include <ResearchManager.h>
#include <boost\shared_ptr.hpp>
#include <util\colour.h>
#include <Sob\Resource\AsteroidStatic.h>
#include <sobtypes.h>
#include <boost\throw_exception.hpp>
#include <selection.h>
#include <savegamedef.h>
#include <SoundManager\SoundEntityHandle.h>
#include <MultiplierContainer.h>
#include <visibility.h>
#include <boost\detail\shared_count.hpp>
#include <MultiplierTypes.h>
#include <boost\detail\lwm_win32.hpp>
#include <Collision\BVH\bvh.h>
#include <Sob\Resource\ResourceStatic.h>
#include <DynamicPoint.h>
#include <Sob\Resource\Asteroid.h>
#include <Sob\Resource\Resource.h>
#include <wchar.h>
#include <SobWithMesh.h>
#include <resourceCommand.h>
#include <SobRigidBody.h>
#include <command.h>
#include <sob.h>
#include <sobstatic.h>
#include <Collision\Primitives\sphere.h>
#include <HyperspaceManager.h>
#include <Modifiers\ModifierUIInfo.h>
#include <SquadronList.h>
#include <Modifiers\ModifierMultiplier.h>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

extern Asteroid *SpawnAsteroid(char const *resourcename, vector3 const &position, vector3 const &speed, matrix3 const &orientation, vector3 const &angularspeed, __int32 resourceValue, bool modifiedByRF);
extern Asteroid *SpawnAsteroidRandomRotationSpeed(char const *resourcename, vector3 const &position, vector3 const &speed, matrix3 const &orientation, __int32 resourceValue, bool modifiedByRF);

/* ---------- globals */

extern char const Asteroid::m_saveToken[0]; // 0x78FFD0
extern SaveData const Asteroid::m_saveData[1]; // 0x78FFDC

/* ---------- private variables */

/* ---------- public code */

_extern _sub_4B12C9(Asteroid *const, char const *, bool);
Asteroid::Asteroid(char const *, bool) // 0x4B12C9
{
    mangled_assert("??0Asteroid@@QAE@PBD_N@Z");
    todo("implement");
    _sub_4B12C9(this, arg, arg);
}

_extern _sub_4B12A5(Asteroid *const, SaveGameData *);
Asteroid::Asteroid(SaveGameData *) // 0x4B12A5
{
    mangled_assert("??0Asteroid@@QAE@PAVSaveGameData@@@Z");
    todo("implement");
    _sub_4B12A5(this, arg);
}

_extern void _sub_4B12F1(Asteroid *const);
Asteroid::~Asteroid() // 0x4B12F1
{
    mangled_assert("??1Asteroid@@UAE@XZ");
    todo("implement");
    _sub_4B12F1(this);
}

_extern void _sub_4B1547(Asteroid *const);
void Asteroid::postRestore() // 0x4B1547
{
    mangled_assert("?postRestore@Asteroid@@UAEXXZ");
    todo("implement");
    _sub_4B1547(this);
}

_extern void _sub_4B1438(Asteroid *const);
void Asteroid::defaultSettings() // 0x4B1438
{
    mangled_assert("?defaultSettings@Asteroid@@QAEXXZ");
    todo("implement");
    _sub_4B1438(this);
}

_extern void _sub_4B1347(Asteroid *const);
void Asteroid::RemoveFromSimulation() // 0x4B1347
{
    mangled_assert("?RemoveFromSimulation@Asteroid@@UAEXXZ");
    todo("implement");
    _sub_4B1347(this);
}

_extern void _sub_4B1346(Asteroid *const);
void Asteroid::RemoveAllSimData() // 0x4B1346
{
    mangled_assert("?RemoveAllSimData@Asteroid@@IAEXXZ");
    todo("implement");
    _sub_4B1346(this);
}

_extern bool _sub_4B15E6(Asteroid *const, float);
bool Asteroid::update(float) // 0x4B15E6
{
    mangled_assert("?update@Asteroid@@UAE_NM@Z");
    todo("implement");
    bool __result = _sub_4B15E6(this, arg);
    return __result;
}

_extern bool _sub_4B154C(Asteroid *const, SaveGameData *);
bool Asteroid::restore(SaveGameData *) // 0x4B154C
{
    mangled_assert("?restore@Asteroid@@UAE_NPAVSaveGameData@@@Z");
    todo("implement");
    bool __result = _sub_4B154C(this, arg);
    return __result;
}

_extern bool _sub_4B1599(Asteroid *const, SaveGameData *, SaveType);
bool Asteroid::save(SaveGameData *, SaveType) // 0x4B1599
{
    mangled_assert("?save@Asteroid@@UAE_NPAVSaveGameData@@W4SaveType@@@Z");
    todo("implement");
    bool __result = _sub_4B1599(this, arg, arg);
    return __result;
}

_extern bool _sub_4B1451(Asteroid *const, Ship *);
bool Asteroid::latchShip(Ship *) // 0x4B1451
{
    mangled_assert("?latchShip@Asteroid@@UAE_NPAVShip@@@Z");
    todo("implement");
    bool __result = _sub_4B1451(this, arg);
    return __result;
}

_extern Asteroid *_sub_4B134C(char const *, vector3 const &, vector3 const &, matrix3 const &, vector3 const &, __int32, bool);
Asteroid *SpawnAsteroid(char const *resourcename, vector3 const &position, vector3 const &speed, matrix3 const &orientation, vector3 const &angularspeed, __int32 resourceValue, bool modifiedByRF) // 0x4B134C
{
    mangled_assert("?SpawnAsteroid@@YGPAVAsteroid@@PBDABVvector3@@1ABVmatrix3@@1H_N@Z");
    todo("implement");
    Asteroid * __result = _sub_4B134C(resourcename, position, speed, orientation, angularspeed, resourceValue, modifiedByRF);
    return __result;
}

_extern Asteroid *_sub_4B13ED(char const *, vector3 const &, vector3 const &, matrix3 const &, __int32, bool);
Asteroid *SpawnAsteroidRandomRotationSpeed(char const *resourcename, vector3 const &position, vector3 const &speed, matrix3 const &orientation, __int32 resourceValue, bool modifiedByRF) // 0x4B13ED
{
    mangled_assert("?SpawnAsteroidRandomRotationSpeed@@YGPAVAsteroid@@PBDABVvector3@@1ABVmatrix3@@H_N@Z");
    todo("implement");
    Asteroid * __result = _sub_4B13ED(resourcename, position, speed, orientation, resourceValue, modifiedByRF);
    return __result;
}

/* ---------- private code */
#endif
