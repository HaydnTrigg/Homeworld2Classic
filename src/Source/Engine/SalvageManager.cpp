#if 0
/* ---------- headers */

#include "decomp.h"
#include <assist\stlexsmallvector.h>
#include <fixedpoint.h>
#include <util\fixed.h>
#include <xstring>
#include <ResearchManager.h>
#include <xmemory0>
#include <Mathlib\matrix4.h>
#include <boost\shared_array.hpp>
#include <pch.h>
#include <MultiplierContainer.h>
#include <visibility.h>
#include <MultiplierTypes.h>
#include <Collision\BVH\bvh.h>
#include <Mathlib\matrix3.h>
#include <weaponinfo.h>
#include <seInterface2\SampleID.h>
#include <seInterface2\SampleBase.h>
#include <new>
#include <Modifiers\ModifierTargetCache.h>
#include <exception>
#include <Modifiers\ModifierAbility.h>
#include <xstddef>
#include <type_traits>
#include <shipstatic.h>
#include <commandtype.h>
#include <SensorsManager.h>
#include <Render\gl\r_types.h>
#include <xutility>
#include <Mathlib\matvec.h>
#include <utility>
#include <iosfwd>
#include <vector>
#include <xmemory>
#include <MainUI.h>
#include <Selector.h>
#include <Render\gl\r_defines.h>
#include <MetaSelTarg.h>
#include <Render\gl\glext.h>
#include <DynamicPoint.h>
#include <MeshAnimation.h>
#include <ShieldTypes.h>
#include <list>
#include <SobWithMeshStatic.h>
#include <ship.h>
#include <Tactics.h>
#include <seInterface2\sedefinesshared.h>
#include <SobWithMesh.h>
#include <SobRigidBody.h>
#include <Mathlib\vector3.h>
#include <Subsystems\HardPointManager.h>
#include <sob.h>
#include <Mathlib\vector4.h>
#include <Subsystems\HardPoint.h>
#include <sobstatic.h>
#include <Subsystems\HardPointStatic.h>
#include <Collision\Primitives\sphere.h>
#include <SobRigidBodyStatic.h>
#include <Subsystems\SubSystemType.h>
#include <map>
#include <xtree>
#include <boost\smart_ptr.hpp>
#include <boost\scoped_ptr.hpp>
#include <Mathlib\vector2.h>
#include <Viewer.h>
#include <util\types.h>
#include <Collision\BVH\octree.h>
#include <Collision\BVH\span.h>
#include <Ship\ShipController.h>
#include <Collision\BVH\Internal\span_i.h>
#include <Ship\AdvRigidBodyController.h>
#include <Collision\BVH\proxy.h>
#include <Physics\RigidBodyController.h>
#include <boost\cstdint.hpp>
#include <Collision\intersect.h>
#include <SoundManager\SoundEntityHandle.h>
#include <Collision\primitivesfwd.h>
#include <profile\profile.h>
#include <Player.h>
#include <iostream>
#include <SquadronList.h>
#include <boost\scoped_array.hpp>
#include <Mathlib\quat.h>
#include <Interpolation.h>
#include <ParadeCommand.h>
#include <Parade.h>
#include <hash_map>
#include <xhash>
#include <Collision\Primitives\aabb.h>
#include <Squadron.h>
#include <Collision\Primitives\obb.h>
#include <command.h>
#include <DockCommand.h>
#include <Race.h>
#include <LatchManager.h>
#include <Camera\OrbitParameters.h>
#include <Modifiers\ModifierUIInfo.h>
#include <Mathlib\mathlibdll.h>
#include <Modifiers\ModifierMultiplier.h>
#include <Mathlib\fastmath.h>
#include <Modifiers\ModifierEffect.h>
#include <TeamColourRegistry.h>
#include <debug\db.h>
#include <config.h>
#include <Modifiers\ModifierApplier.h>
#include <deque>
#include <boost\shared_ptr.hpp>
#include <util\colour.h>
#include <sobtypes.h>
#include <BuildManager.h>
#include <boost\throw_exception.hpp>
#include <weaponstaticinfo.h>
#include <selection.h>
#include <GunBinding.h>
#include <savegamedef.h>
#include <SelTarg.h>
#include <prim.h>
#include <boost\detail\shared_count.hpp>
#include <bitset>
#include <sobid.h>
#include <boost\detail\lwm_win32.hpp>
#include <SoundManager\SoundManager.h>
#include <seInterface2\SEInterface.h>
#include <seInterface2\SoundParamManager.h>
#include <seInterface2\seinterfacefunc.h>
#include <assist\gbitset.h>
#include <abilities.h>
#include <Collision\Primitives\capsule.h>
#include <Collision\Primitives\segment.h>
#include <Collision\BVH\profiling.h>
#include <GameEventDefs.h>
#include <platform\timer.h>
#include <SalvageManager.h>
#include <WeaponClassSpecificInfo.h>
#include <GameEventSys.h>
#include <platform\platformexports.h>
#include <savegame.h>
#include <wchar.h>
#include <task.h>
#include <playerresourcetype.h>
#include <stack>
#include <queue>
#include <seInterface2\PatchID.h>
#include <OrderFeedback.h>
#include <seInterface2\PatchBase.h>
#include <LatchPointManager.h>
#include <seInterface2\SoundParams.h>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

extern char const SalvageManager::m_saveToken[0]; // 0x78C920
extern SaveData const SalvageManager::m_saveData[1]; // 0x78C930

/* ---------- private variables */

_static
{
    extern float const ViewerUpdateRate; // 0x78C950
    extern float const ViewerUpdatePeriod; // 0x8351E0
    extern float const CameraDistanceUpdateRate; // 0x78C954
    extern float const CameraDistanceUpdatePeriod; // 0x8351E4
}

/* ---------- public code */

_extern _sub_48932F(SalvageManager *const, Ship *);
SalvageManager::SalvageManager(Ship *) // 0x48932F
{
    mangled_assert("??0SalvageManager@@QAE@PAVShip@@@Z");
    todo("implement");
    _sub_48932F(this, arg);
}

_extern void _sub_489371(SalvageManager *const);
SalvageManager::~SalvageManager() // 0x489371
{
    mangled_assert("??1SalvageManager@@UAE@XZ");
    todo("implement");
    _sub_489371(this);
}

_extern void _sub_489473(SalvageManager *const, float);
void SalvageManager::update(float) // 0x489473
{
    mangled_assert("?update@SalvageManager@@UAEXM@Z");
    todo("implement");
    _sub_489473(this, arg);
}

_extern LatchPointManagerStatic *_sub_4893B1(SalvageManager *const);
LatchPointManagerStatic *SalvageManager::getStaticData() // 0x4893B1
{
    mangled_assert("?getStaticData@SalvageManager@@MAEPAVLatchPointManagerStatic@@XZ");
    todo("implement");
    LatchPointManagerStatic * __result = _sub_4893B1(this);
    return __result;
}

_extern _sub_489310(SalvageManager *const, SaveGameData *);
SalvageManager::SalvageManager(SaveGameData *) // 0x489310
{
    mangled_assert("??0SalvageManager@@QAE@PAVSaveGameData@@@Z");
    todo("implement");
    _sub_489310(this, arg);
}

_extern void _sub_4893AA(SalvageManager *const);
void SalvageManager::defaultSettings() // 0x4893AA
{
    mangled_assert("?defaultSettings@SalvageManager@@QAEXXZ");
    todo("implement");
    _sub_4893AA(this);
}

_extern void _sub_4893D4(SalvageManager *const);
void SalvageManager::postRestore() // 0x4893D4
{
    mangled_assert("?postRestore@SalvageManager@@UAEXXZ");
    todo("implement");
    _sub_4893D4(this);
}

_extern bool _sub_4893D9(SalvageManager *const, SaveGameData *);
bool SalvageManager::restore(SaveGameData *) // 0x4893D9
{
    mangled_assert("?restore@SalvageManager@@UAE_NPAVSaveGameData@@@Z");
    todo("implement");
    bool __result = _sub_4893D9(this, arg);
    return __result;
}

_extern bool _sub_489426(SalvageManager *const, SaveGameData *, SaveType);
bool SalvageManager::save(SaveGameData *, SaveType) // 0x489426
{
    mangled_assert("?save@SalvageManager@@UAE_NPAVSaveGameData@@W4SaveType@@@Z");
    todo("implement");
    bool __result = _sub_489426(this, arg, arg);
    return __result;
}

_extern _sub_48935F(SalvageManagerStatic *const);
SalvageManagerStatic::SalvageManagerStatic() // 0x48935F
{
    mangled_assert("??0SalvageManagerStatic@@QAE@XZ");
    todo("implement");
    _sub_48935F(this);
}

_extern void _sub_489383(SalvageManagerStatic *const);
SalvageManagerStatic::~SalvageManagerStatic() // 0x489383
{
    mangled_assert("??1SalvageManagerStatic@@QAE@XZ");
    todo("implement");
    _sub_489383(this);
}

/* ---------- private code */
#endif
