#if 0
/* ---------- headers */

#include "decomp.h"
#include <playerresourcetype.h>
#include <assist\stlexsmallvector.h>
#include <OrderFeedback.h>
#include <xstring>
#include <seInterface2\PatchID.h>
#include <xmemory0>
#include <Mathlib\matrix4.h>
#include <pch.h>
#include <seInterface2\PatchBase.h>
#include <seInterface2\SoundParams.h>
#include <fixedpoint.h>
#include <util\fixed.h>
#include <platform\timer.h>
#include <ResearchManager.h>
#include <platform\platformexports.h>
#include <Mathlib\matrix3.h>
#include <MultiplierContainer.h>
#include <visibility.h>
#include <new>
#include <MultiplierTypes.h>
#include <Collision\BVH\bvh.h>
#include <exception>
#include <weaponinfo.h>
#include <xstddef>
#include <Modifiers\ModifierAbility.h>
#include <type_traits>
#include <shipstatic.h>
#include <Modifiers\ModifierTargetCache.h>
#include <commandtype.h>
#include <xutility>
#include <utility>
#include <iosfwd>
#include <vector>
#include <xmemory>
#include <Universe.h>
#include <Waypoint.h>
#include <SobUnmoveable.h>
#include <list>
#include <DynamicPoint.h>
#include <MeshAnimation.h>
#include <ShieldTypes.h>
#include <Tactics.h>
#include <Mathlib\vector3.h>
#include <Mathlib\vector4.h>
#include <SobWithMeshStatic.h>
#include <map>
#include <xtree>
#include <ship.h>
#include <Subsystems\HardPointManager.h>
#include <SobWithMesh.h>
#include <Subsystems\HardPoint.h>
#include <boost\scoped_ptr.hpp>
#include <SobRigidBody.h>
#include <Subsystems\HardPointStatic.h>
#include <sob.h>
#include <SobRigidBodyStatic.h>
#include <Subsystems\SubSystemType.h>
#include <sobstatic.h>
#include <HyperspaceManager.h>
#include <Collision\Primitives\sphere.h>
#include <Mathlib\vector2.h>
#include <util\types.h>
#include <boost\cstdint.hpp>
#include <Collision\BVH\octree.h>
#include <Ship\ShipController.h>
#include <Collision\BVH\span.h>
#include <Ship\AdvRigidBodyController.h>
#include <Collision\BVH\Internal\span_i.h>
#include <SoundManager\SoundEntityHandle.h>
#include <Physics\RigidBodyController.h>
#include <Collision\BVH\proxy.h>
#include <Collision\intersect.h>
#include <Collision\primitivesfwd.h>
#include <Mathlib\quat.h>
#include <Player.h>
#include <SquadronList.h>
#include <Squadron.h>
#include <ParadeCommand.h>
#include <Parade.h>
#include <Interpolation.h>
#include <hash_map>
#include <dbdefines.h>
#include <xhash>
#include <UnitCaps\UnitCaps.h>
#include <Collision\Primitives\aabb.h>
#include <Modifiers\ModifierUIInfo.h>
#include <Collision\Primitives\obb.h>
#include <Modifiers\ModifierMultiplier.h>
#include <Modifiers\ModifierEffect.h>
#include <profile\profile.h>
#include <ITweak.h>
#include <iostream>
#include <LatchManager.h>
#include <Race.h>
#include <pathpoints.h>
#include <debug\db.h>
#include <config.h>
#include <deque>
#include <Modifiers\ModifierApplier.h>
#include <TeamColourRegistry.h>
#include <boost\shared_ptr.hpp>
#include <util\colour.h>
#include <sobtypes.h>
#include <boost\throw_exception.hpp>
#include <selection.h>
#include <weaponstaticinfo.h>
#include <savegamedef.h>
#include <GunBinding.h>
#include <CaptureCommand.h>
#include <boost\detail\shared_count.hpp>
#include <sobid.h>
#include <command.h>
#include <boost\detail\lwm_win32.hpp>
#include <BuildManager.h>
#include <SelTarg.h>
#include <prim.h>
#include <SOBGroupManager.h>
#include <abilities.h>
#include <CaptureManager.h>
#include <savegame.h>
#include <wchar.h>
#include <WeaponClassSpecificInfo.h>
#include <task.h>
#include <Collision\Primitives\capsule.h>
#include <stack>
#include <Collision\Primitives\segment.h>
#include <Collision\BVH\profiling.h>
#include <queue>
#include <GameEventDefs.h>
#include <GameEventSys.h>
#include <LatchPointManager.h>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

extern char const CaptureManager::m_saveToken[0]; // 0x78C030
extern SaveData const CaptureManager::m_saveData[4]; // 0x78C040

/* ---------- private variables */

/* ---------- public code */

_extern _sub_484494(CaptureManager *const, Ship *);
CaptureManager::CaptureManager(Ship *) // 0x484494
{
    mangled_assert("??0CaptureManager@@QAE@PAVShip@@@Z");
    todo("implement");
    _sub_484494(this, arg);
}

_extern void _sub_48455E(CaptureManager *const);
CaptureManager::~CaptureManager() // 0x48455E
{
    mangled_assert("??1CaptureManager@@UAE@XZ");
    todo("implement");
    _sub_48455E(this);
}

_extern void _sub_484570(GameEvent_ShipCaptured *const);
_inline GameEvent_ShipCaptured::~GameEvent_ShipCaptured() // 0x484570
{
    mangled_assert("??1GameEvent_ShipCaptured@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_484570(this);
}

_extern void _sub_484577(GameEvent_SpecialSpeech *const);
_inline GameEvent_SpecialSpeech::~GameEvent_SpecialSpeech() // 0x484577
{
    mangled_assert("??1GameEvent_SpecialSpeech@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_484577(this);
}

_extern void _sub_4845A1(CaptureManager *const);
void CaptureManager::applyCaptureSlowDown() // 0x4845A1
{
    mangled_assert("?applyCaptureSlowDown@CaptureManager@@QAEXXZ");
    todo("implement");
    _sub_4845A1(this);
}

_extern void _sub_4847BF(CaptureManager *const, float);
void CaptureManager::update(float) // 0x4847BF
{
    mangled_assert("?update@CaptureManager@@UAEXM@Z");
    todo("implement");
    _sub_4847BF(this, arg);
}

_extern void _sub_484773(CaptureManager *const, Player const *);
void CaptureManager::setSquadronOwner(Player const *) // 0x484773
{
    mangled_assert("?setSquadronOwner@CaptureManager@@AAEXPBVPlayer@@@Z");
    todo("implement");
    _sub_484773(this, arg);
}

_extern LatchPointManagerStatic *_sub_4846A7(CaptureManager *const);
LatchPointManagerStatic *CaptureManager::getStaticData() // 0x4846A7
{
    mangled_assert("?getStaticData@CaptureManager@@MAEPAVLatchPointManagerStatic@@XZ");
    todo("implement");
    LatchPointManagerStatic * __result = _sub_4846A7(this);
    return __result;
}

_extern _sub_484462(CaptureManager *const, SaveGameData *);
CaptureManager::CaptureManager(SaveGameData *) // 0x484462
{
    mangled_assert("??0CaptureManager@@QAE@PAVSaveGameData@@@Z");
    todo("implement");
    _sub_484462(this, arg);
}

_extern void _sub_484646(CaptureManager *const);
void CaptureManager::defaultSettings() // 0x484646
{
    mangled_assert("?defaultSettings@CaptureManager@@QAEXXZ");
    todo("implement");
    _sub_484646(this);
}

_extern void _sub_4846C0(CaptureManager *const);
void CaptureManager::postRestore() // 0x4846C0
{
    mangled_assert("?postRestore@CaptureManager@@UAEXXZ");
    todo("implement");
    _sub_4846C0(this);
}

_extern bool _sub_4846C5(CaptureManager *const, SaveGameData *);
bool CaptureManager::restore(SaveGameData *) // 0x4846C5
{
    mangled_assert("?restore@CaptureManager@@UAE_NPAVSaveGameData@@@Z");
    todo("implement");
    bool __result = _sub_4846C5(this, arg);
    return __result;
}

_extern bool _sub_484712(CaptureManager *const, SaveGameData *, SaveType);
bool CaptureManager::save(SaveGameData *, SaveType) // 0x484712
{
    mangled_assert("?save@CaptureManager@@UAE_NPAVSaveGameData@@W4SaveType@@@Z");
    todo("implement");
    bool __result = _sub_484712(this, arg, arg);
    return __result;
}

_extern _sub_4844D7(CaptureStatic *const, float, float);
CaptureStatic::CaptureStatic(float, float) // 0x4844D7
{
    mangled_assert("??0CaptureStatic@@QAE@MM@Z");
    todo("implement");
    _sub_4844D7(this, arg, arg);
}

/* ---------- private code */
#endif
