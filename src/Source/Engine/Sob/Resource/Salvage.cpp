#if 0
/* ---------- headers */

#include "decomp.h"
#include <HyperspaceManager.h>
#include <assist\stlexsmallvector.h>
#include <SquadronList.h>
#include <SoundManager\SoundEntityHandle.h>
#include <commandtype.h>
#include <xstring>
#include <xmemory0>
#include <Mathlib\matrix4.h>
#include <pch.h>
#include <TeamColourRegistry.h>
#include <savegame.h>
#include <task.h>
#include <stack>
#include <Universe.h>
#include <SobWithMeshStatic.h>
#include <Waypoint.h>
#include <platform\timer.h>
#include <Mathlib\matrix3.h>
#include <SobUnmoveable.h>
#include <platform\platformexports.h>
#include <new>
#include <SobRigidBodyStatic.h>
#include <exception>
#include <xstddef>
#include <type_traits>
#include <MeshAnimation.h>
#include <fixedpoint.h>
#include <util\fixed.h>
#include <Collision\Primitives\obb.h>
#include <Collision\BVH\octree.h>
#include <Player.h>
#include <xutility>
#include <Collision\BVH\span.h>
#include <ResearchManager.h>
#include <utility>
#include <iosfwd>
#include <Collision\BVH\Internal\span_i.h>
#include <vector>
#include <Collision\BVH\proxy.h>
#include <fileio\bytestream.h>
#include <xmemory>
#include <Collision\intersect.h>
#include <fileio\fileioexports.h>
#include <Collision\primitivesfwd.h>
#include <abilities.h>
#include <list>
#include <Interpolation.h>
#include <Collision\Primitives\aabb.h>
#include <Mathlib\vector3.h>
#include <Mathlib\vector4.h>
#include <sobid.h>
#include <xtree>
#include <boost\scoped_ptr.hpp>
#include <Mathlib\vector2.h>
#include <util\types.h>
#include <boost\cstdint.hpp>
#include <seInterface2\PatchID.h>
#include <SelTarg.h>
#include <weaponinfo.h>
#include <seInterface2\PatchBase.h>
#include <prim.h>
#include <gameRandom.h>
#include <seInterface2\SoundParams.h>
#include <random.h>
#include <Mathlib\quat.h>
#include <Ship\FormationTargetInfo.h>
#include <Modifiers\ModifierTargetCache.h>
#include <DockCommand.h>
#include <Collision\Primitives\capsule.h>
#include <Collision\Primitives\segment.h>
#include <Collision\BVH\profiling.h>
#include <dbdefines.h>
#include <UnitCaps\UnitCaps.h>
#include <DynamicPoint.h>
#include <savegameimpl.h>
#include <SOBGroupManager.h>
#include <resourceCommand.h>
#include <pathpoints.h>
#include <hash_map>
#include <command.h>
#include <xhash>
#include <debug\db.h>
#include <ship.h>
#include <fileio\filestream.h>
#include <ShieldTypes.h>
#include <boost\shared_ptr.hpp>
#include <util\colour.h>
#include <Sob\Resource\SalvageStatic.h>
#include <sobtypes.h>
#include <boost\throw_exception.hpp>
#include <selection.h>
#include <Subsystems\HardPointManager.h>
#include <savegamedef.h>
#include <Subsystems\HardPoint.h>
#include <Ship\Formation.h>
#include <MultiplierContainer.h>
#include <visibility.h>
#include <boost\detail\shared_count.hpp>
#include <Subsystems\HardPointStatic.h>
#include <Ship\FormationPattern.h>
#include <MultiplierTypes.h>
#include <Subsystems\SubSystemType.h>
#include <boost\detail\lwm_win32.hpp>
#include <Collision\BVH\bvh.h>
#include <Sob\Resource\ResourceStatic.h>
#include <Race.h>
#include <Sob\Resource\Salvage.h>
#include <Sob\Resource\Resource.h>
#include <wchar.h>
#include <SobWithMesh.h>
#include <SobRigidBody.h>
#include <playerresourcetype.h>
#include <sob.h>
#include <sobstatic.h>
#include <Collision\Primitives\sphere.h>
#include <BuildManager.h>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

extern Salvage *SpawnSalvage(char const *resourcename, vector3 const &position, vector3 const &speed, matrix3 const &orientation, vector3 const &angularspeed, __int32 resourceValue, bool RUpercentage, bool modifiedByRF);
extern Salvage *SpawnSalvageRandomRotationSpeed(char const *resourcename, vector3 const &position, vector3 const &speed, matrix3 const &orientation, __int32 resourceValue, bool modifiedByRF);

/* ---------- globals */

extern char const Salvage::m_saveToken[0]; // 0x790178
extern SaveData const Salvage::m_saveData[1]; // 0x790180

/* ---------- private variables */

/* ---------- public code */

_extern _sub_4B1851(Salvage *const, char const *, bool);
Salvage::Salvage(char const *, bool) // 0x4B1851
{
    mangled_assert("??0Salvage@@QAE@PBD_N@Z");
    todo("implement");
    _sub_4B1851(this, arg, arg);
}

_extern _sub_4B182D(Salvage *const, SaveGameData *);
Salvage::Salvage(SaveGameData *) // 0x4B182D
{
    mangled_assert("??0Salvage@@QAE@PAVSaveGameData@@@Z");
    todo("implement");
    _sub_4B182D(this, arg);
}

_extern void _sub_4B1879(Salvage *const);
Salvage::~Salvage() // 0x4B1879
{
    mangled_assert("??1Salvage@@UAE@XZ");
    todo("implement");
    _sub_4B1879(this);
}

_extern void _sub_4B18AB(Salvage *const);
void Salvage::RemoveFromSimulation() // 0x4B18AB
{
    mangled_assert("?RemoveFromSimulation@Salvage@@UAEXXZ");
    todo("implement");
    _sub_4B18AB(this);
}

_extern void _sub_4B18AA(Salvage *const);
void Salvage::RemoveAllSimData() // 0x4B18AA
{
    mangled_assert("?RemoveAllSimData@Salvage@@IAEXXZ");
    todo("implement");
    _sub_4B18AA(this);
}

_extern bool _sub_4B19C3(Salvage *const, Ship *);
bool Salvage::latchShip(Ship *) // 0x4B19C3
{
    mangled_assert("?latchShip@Salvage@@UAE_NPAVShip@@@Z");
    todo("implement");
    bool __result = _sub_4B19C3(this, arg);
    return __result;
}

_extern bool _sub_4B1AD1(Salvage *const, float);
bool Salvage::update(float) // 0x4B1AD1
{
    mangled_assert("?update@Salvage@@UAE_NM@Z");
    todo("implement");
    bool __result = _sub_4B1AD1(this, arg);
    return __result;
}

_extern void _sub_4B1A32(Salvage *const);
void Salvage::postRestore() // 0x4B1A32
{
    mangled_assert("?postRestore@Salvage@@UAEXXZ");
    todo("implement");
    _sub_4B1A32(this);
}

_extern void _sub_4B19B2(Salvage *const);
void Salvage::defaultSettings() // 0x4B19B2
{
    mangled_assert("?defaultSettings@Salvage@@QAEXXZ");
    todo("implement");
    _sub_4B19B2(this);
}

_extern bool _sub_4B1A37(Salvage *const, SaveGameData *);
bool Salvage::restore(SaveGameData *) // 0x4B1A37
{
    mangled_assert("?restore@Salvage@@UAE_NPAVSaveGameData@@@Z");
    todo("implement");
    bool __result = _sub_4B1A37(this, arg);
    return __result;
}

_extern bool _sub_4B1A84(Salvage *const, SaveGameData *, SaveType);
bool Salvage::save(SaveGameData *, SaveType) // 0x4B1A84
{
    mangled_assert("?save@Salvage@@UAE_NPAVSaveGameData@@W4SaveType@@@Z");
    todo("implement");
    bool __result = _sub_4B1A84(this, arg, arg);
    return __result;
}

_extern Salvage *_sub_4B18B0(char const *, vector3 const &, vector3 const &, matrix3 const &, vector3 const &, __int32, bool, bool);
Salvage *SpawnSalvage(char const *resourcename, vector3 const &position, vector3 const &speed, matrix3 const &orientation, vector3 const &angularspeed, __int32 resourceValue, bool RUpercentage, bool modifiedByRF) // 0x4B18B0
{
    mangled_assert("?SpawnSalvage@@YGPAVSalvage@@PBDABVvector3@@1ABVmatrix3@@1H_N3@Z");
    todo("implement");
    Salvage * __result = _sub_4B18B0(resourcename, position, speed, orientation, angularspeed, resourceValue, RUpercentage, modifiedByRF);
    return __result;
}

_extern Salvage *_sub_4B1965(char const *, vector3 const &, vector3 const &, matrix3 const &, __int32, bool);
Salvage *SpawnSalvageRandomRotationSpeed(char const *resourcename, vector3 const &position, vector3 const &speed, matrix3 const &orientation, __int32 resourceValue, bool modifiedByRF) // 0x4B1965
{
    mangled_assert("?SpawnSalvageRandomRotationSpeed@@YGPAVSalvage@@PBDABVvector3@@1ABVmatrix3@@H_N@Z");
    todo("implement");
    Salvage * __result = _sub_4B1965(resourcename, position, speed, orientation, resourceValue, modifiedByRF);
    return __result;
}

/* ---------- private code */
#endif
