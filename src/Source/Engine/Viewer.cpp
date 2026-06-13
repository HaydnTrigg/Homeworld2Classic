#if 0
/* ---------- headers */

#include "decomp.h"
#include <playerresourcetype.h>
#include <assist\stlexsmallvector.h>
#include <xstring>
#include <xmemory0>
#include <SelTarg.h>
#include <Mathlib\matrix4.h>
#include <boost\shared_array.hpp>
#include <pch.h>
#include <prim.h>
#include <SoundManager\SoundEntityHandle.h>
#include <gameSettings.h>
#include <config.h>
#include <syncChecking.h>
#include <Collision\Primitives\capsule.h>
#include <TeamColourRegistry.h>
#include <Mathlib\matrix3.h>
#include <Collision\Primitives\segment.h>
#include <savegame.h>
#include <Collision\BVH\profiling.h>
#include <fixedpoint.h>
#include <util\fixed.h>
#include <new>
#include <SoundManager\SoundManager.h>
#include <exception>
#include <seInterface2\SEInterface.h>
#include <seInterface2\SoundParamManager.h>
#include <xstddef>
#include <dbdefines.h>
#include <seInterface2\seinterfacefunc.h>
#include <assist\gbitset.h>
#include <type_traits>
#include <UnitCaps\UnitCaps.h>
#include <seInterface2\PatchID.h>
#include <seInterface2\PatchBase.h>
#include <SOBGroupManager.h>
#include <seInterface2\SoundParams.h>
#include <hash_map>
#include <Modifiers\ModifierUIInfo.h>
#include <xhash>
#include <Modifiers\ModifierMultiplier.h>
#include <Modifiers\ModifierEffect.h>
#include <xutility>
#include <utility>
#include <iosfwd>
#include <vector>
#include <xmemory>
#include <fileio\fileioexports.h>
#include <ship.h>
#include <SobWithMesh.h>
#include <Modifiers\ModifierApplier.h>
#include <MultiplierContainer.h>
#include <visibility.h>
#include <SobRigidBody.h>
#include <LevelDesc.h>
#include <MultiplierTypes.h>
#include <Hash.h>
#include <math.h>
#include <Collision\BVH\bvh.h>
#include <fileio\md5.h>
#include <Subsystems\Subsystem.h>
#include <list>
#include <SimVis\FogOfWarVis.h>
#include <Subsystems\SubsystemStatic.h>
#include <sobid.h>
#include <weaponstaticinfo.h>
#include <GunBinding.h>
#include <gamestructimpl.h>
#include <Badge.h>
#include <Mathlib\vector3.h>
#include <abilities.h>
#include <Mathlib\vector4.h>
#include <WeaponFire\WeaponFire.h>
#include <map>
#include <weaponfiretypes.h>
#include <xtree>
#include <seInterface2\SampleID.h>
#include <boost\smart_ptr.hpp>
#include <boost\scoped_ptr.hpp>
#include <seInterface2\SampleBase.h>
#include <Mathlib\vector2.h>
#include <util\types.h>
#include <WeaponClassSpecificInfo.h>
#include <Collision\Collision.h>
#include <HyperspaceManager.h>
#include <SquadronList.h>
#include <SensorsManager.h>
#include <boost\cstdint.hpp>
#include <Render\gl\r_types.h>
#include <Mathlib\matvec.h>
#include <boost\static_assert.hpp>
#include <boost\config.hpp>
#include <profile\profile.h>
#include <iostream>
#include <boost\scoped_array.hpp>
#include <Universe.h>
#include <Render\gl\r_defines.h>
#include <Waypoint.h>
#include <Render\gl\glext.h>
#include <SobUnmoveable.h>
#include <Mathlib\quat.h>
#include <sob.h>
#include <platform\timer.h>
#include <sobstatic.h>
#include <platform\platformexports.h>
#include <Collision\Primitives\sphere.h>
#include <weaponinfo.h>
#include <Modifiers\ModifierTargetCache.h>
#include <seInterface2\sedefinesshared.h>
#include <SobZeroMassBody.h>
#include <Mathlib\mathlibdll.h>
#include <sobzeromassbodystatic.h>
#include <Mathlib\fastmath.h>
#include <Collision\BVH\octree.h>
#include <Modifiers\ModifierAbility.h>
#include <Collision\BVH\span.h>
#include <savegameimpl.h>
#include <EngineTrailSystem.h>
#include <Collision\BVH\Internal\span_i.h>
#include <Camera\OrbitParameters.h>
#include <SobWithMeshStatic.h>
#include <Collision\BVH\proxy.h>
#include <pathpoints.h>
#include <SobRigidBodyStatic.h>
#include <Collision\intersect.h>
#include <debug\db.h>
#include <Collision\primitivesfwd.h>
#include <boost\shared_ptr.hpp>
#include <util\colour.h>
#include <sobtypes.h>
#include <Interpolation.h>
#include <boost\throw_exception.hpp>
#include <ShieldTypes.h>
#include <selection.h>
#include <MeshAnimation.h>
#include <savegamedef.h>
#include <boost\detail\shared_count.hpp>
#include <bitset>
#include <Collision\Primitives\aabb.h>
#include <Collision\Primitives\obb.h>
#include <boost\detail\lwm_win32.hpp>
#include <Subsystems\HardPointManager.h>
#include <Subsystems\HardPoint.h>
#include <Subsystems\HardPointStatic.h>
#include <Subsystems\SubSystemType.h>
#include <CameraCommand.h>
#include <CameraHW.h>
#include <Camera\CameraOrbitTarget.h>
#include <MetaSelTarg.h>
#include <Camera\Camera.h>
#include <Camera\Frustum.h>
#include <Viewer.h>
#include <Camera\Plane3.h>
#include <CameraTuning.h>
#include <task.h>
#include <wchar.h>
#include <MainUI.h>
#include <stack>
#include <Selector.h>

/* ---------- constants */

/* ---------- definitions */

class ShipMissileUpdate
{
public:
    _inline bool Do(Sob *, Camera const &, float, bool);
};
static_assert(sizeof(ShipMissileUpdate) == 1, "Invalid ShipMissileUpdate size");

class SubSystemUpdate
{
public:
    _inline bool Do(Sob *, Camera const &, float, bool);
};
static_assert(sizeof(SubSystemUpdate) == 1, "Invalid SubSystemUpdate size");

class SobWithMeshUpdate
{
public:
    _inline bool Do(Sob *, Camera const &, float, bool);
};
static_assert(sizeof(SobWithMeshUpdate) == 1, "Invalid SobWithMeshUpdate size");

class WeaponFireUpdate
{
public:
    _inline bool Do(Sob *, Camera const &, float, bool);
};
static_assert(sizeof(WeaponFireUpdate) == 1, "Invalid WeaponFireUpdate size");

class GenericUpdate
{
public:
    _inline bool Do(Sob *, Camera const &, float, bool);
};
static_assert(sizeof(GenericUpdate) == 1, "Invalid GenericUpdate size");

typedef std::vector<EngineTrailStatic::Tweaks *,std::allocator<EngineTrailStatic::Tweaks *> > TweakCont;
typedef std::vector<JointAnimStack const *,std::allocator<JointAnimStack const *> > NozzleCont;
typedef std::vector<EngineTrail *,std::allocator<EngineTrail *> > EngineTrailCont;
typedef std::deque<SyncCheckObj *,std::allocator<SyncCheckObj *> > SyncCheckObjList;
typedef std::vector<int,std::allocator<int> > OutOfSyncFrameList;
typedef std::vector<SyncCheckUser *,std::allocator<SyncCheckUser *> > SyncCheckUserList;
typedef unsigned __int32 (*ProcessSyncCheck)(bool);
typedef MD5Hash Guid;

/* ---------- prototypes */

extern bool viewStartup();
extern bool viewSetup();
extern bool viewShutdown();
extern _inline void DoFrustumTest(Sob *sob, Frustum const &frustum);
extern bool viewSave(SaveGameData *saveGameData, SaveType saveType);
extern bool viewRestore(SaveGameData *saveGameData);

/* ---------- globals */

extern char const Viewer::m_saveToken[7]; // 0x7B1E70
extern SaveData const Viewer::m_saveData[4]; // 0x7B1E78
extern Viewer *g_pViewer; // 0x84B860
extern CameraDistanceTask *g_pCameraDistanceTask; // 0x84B864

/* ---------- private variables */

_static
{
    extern float const ViewerUpdateRate; // 0x7B1E68
    extern float const ViewerUpdatePeriod; // 0x83D8E0
    extern float const CameraDistanceUpdateRate; // 0x7B1E6C
    extern float const CameraDistanceUpdatePeriod; // 0x83D8E4
}

/* ---------- public code */

_extern bool _sub_653120();
bool viewStartup() // 0x653120
{
    mangled_assert("?viewStartup@@YG_NXZ");
    todo("implement");
    bool __result = _sub_653120();
    return __result;
}

_extern bool _sub_653030();
bool viewSetup() // 0x653030
{
    mangled_assert("?viewSetup@@YG_NXZ");
    todo("implement");
    bool __result = _sub_653030();
    return __result;
}

_extern bool _sub_6530E0();
bool viewShutdown() // 0x6530E0
{
    mangled_assert("?viewShutdown@@YG_NXZ");
    todo("implement");
    bool __result = _sub_6530E0();
    return __result;
}

_extern _sub_652470(Viewer *const);
Viewer::Viewer() // 0x652470
{
    mangled_assert("??0Viewer@@QAE@XZ");
    todo("implement");
    _sub_652470(this);
}

_extern void _sub_652520(Viewer *const);
Viewer::~Viewer() // 0x652520
{
    mangled_assert("??1Viewer@@UAE@XZ");
    todo("implement");
    _sub_652520(this);
}

_extern void _sub_652A00(Viewer *const);
void Viewer::clearRenderList() // 0x652A00
{
    mangled_assert("?clearRenderList@Viewer@@AAEXXZ");
    todo("implement");
    _sub_652A00(this);
}

_extern Selection &_sub_652B50(Viewer *const, SobType);
Selection &Viewer::getRenderListType(SobType) // 0x652B50
{
    mangled_assert("?getRenderListType@Viewer@@QAEAAVSelection@@W4SobType@@@Z");
    todo("implement");
    Selection & __result = _sub_652B50(this, arg);
    return __result;
}

_extern void _sub_652B70(Viewer *const, unsigned __int32 *, unsigned __int32 *);
void Viewer::getUpdateStats(unsigned __int32 *, unsigned __int32 *) // 0x652B70
{
    mangled_assert("?getUpdateStats@Viewer@@QAEXPAI0@Z");
    todo("implement");
    _sub_652B70(this, arg, arg);
}

_extern void _sub_652F10(Viewer *const, Sob *, bool);
void Viewer::updateRenderListSob(Sob *, bool) // 0x652F10
{
    mangled_assert("?updateRenderListSob@Viewer@@AAEXPAVSob@@_N@Z");
    todo("implement");
    _sub_652F10(this, arg, arg);
}

_extern void _sub_6529A0(Sob *, Frustum const &);
_inline void DoFrustumTest(Sob *sob, Frustum const &frustum) // 0x6529A0
{
    mangled_assert("?DoFrustumTest@@YGXPAVSob@@ABVFrustum@@@Z");
    todo("implement");
    _sub_6529A0(sob, frustum);
}

_extern bool _sub_652780(ShipMissileUpdate *const, Sob *, Camera const &, float, bool);
_inline bool ShipMissileUpdate::Do(Sob *, Camera const &, float, bool) // 0x652780
{
    mangled_assert("?Do@ShipMissileUpdate@@QAE_NPAVSob@@ABVCamera@@M_N@Z");
    todo("implement");
    bool __result = _sub_652780(this, arg, arg, arg, arg);
    return __result;
}

_extern bool _sub_6528E0(SubSystemUpdate *const, Sob *, Camera const &, float, bool);
_inline bool SubSystemUpdate::Do(Sob *, Camera const &, float, bool) // 0x6528E0
{
    mangled_assert("?Do@SubSystemUpdate@@QAE_NPAVSob@@ABVCamera@@M_N@Z");
    todo("implement");
    bool __result = _sub_6528E0(this, arg, arg, arg, arg);
    return __result;
}

_extern bool _sub_652850(SobWithMeshUpdate *const, Sob *, Camera const &, float, bool);
_inline bool SobWithMeshUpdate::Do(Sob *, Camera const &, float, bool) // 0x652850
{
    mangled_assert("?Do@SobWithMeshUpdate@@QAE_NPAVSob@@ABVCamera@@M_N@Z");
    todo("implement");
    bool __result = _sub_652850(this, arg, arg, arg, arg);
    return __result;
}

_extern bool _sub_652980(WeaponFireUpdate *const, Sob *, Camera const &, float, bool);
_inline bool WeaponFireUpdate::Do(Sob *, Camera const &, float, bool) // 0x652980
{
    mangled_assert("?Do@WeaponFireUpdate@@QAE_NPAVSob@@ABVCamera@@M_N@Z");
    todo("implement");
    bool __result = _sub_652980(this, arg, arg, arg, arg);
    return __result;
}

_extern bool _sub_652680(GenericUpdate *const, Sob *, Camera const &, float, bool);
_inline bool GenericUpdate::Do(Sob *, Camera const &, float, bool) // 0x652680
{
    mangled_assert("?Do@GenericUpdate@@QAE_NPAVSob@@ABVCamera@@M_N@Z");
    todo("implement");
    bool __result = _sub_652680(this, arg, arg, arg, arg);
    return __result;
}

_extern void _sub_651BA0(Viewer *const, Selection const &, float, GenericUpdate &);
void Viewer::updateRenderListStatus<Selection,GenericUpdate>(Selection const &, float, GenericUpdate &) // 0x651BA0
{
    mangled_assert("??$updateRenderListStatus@VSelection@@VGenericUpdate@@@Viewer@@AAEXABVSelection@@MAAVGenericUpdate@@@Z");
    todo("implement");
    _sub_651BA0(this, arg, arg, arg);
}

_extern void _sub_651D30(Viewer *const, Selection const &, float, ShipMissileUpdate &);
void Viewer::updateRenderListStatus<Selection,ShipMissileUpdate>(Selection const &, float, ShipMissileUpdate &) // 0x651D30
{
    mangled_assert("??$updateRenderListStatus@VSelection@@VShipMissileUpdate@@@Viewer@@AAEXABVSelection@@MAAVShipMissileUpdate@@@Z");
    todo("implement");
    _sub_651D30(this, arg, arg, arg);
}

_extern void _sub_651EC0(Viewer *const, Selection const &, float, SobWithMeshUpdate &);
void Viewer::updateRenderListStatus<Selection,SobWithMeshUpdate>(Selection const &, float, SobWithMeshUpdate &) // 0x651EC0
{
    mangled_assert("??$updateRenderListStatus@VSelection@@VSobWithMeshUpdate@@@Viewer@@AAEXABVSelection@@MAAVSobWithMeshUpdate@@@Z");
    todo("implement");
    _sub_651EC0(this, arg, arg, arg);
}

_extern void _sub_6520A0(Viewer *const, Selection const &, float, SubSystemUpdate &);
void Viewer::updateRenderListStatus<Selection,SubSystemUpdate>(Selection const &, float, SubSystemUpdate &) // 0x6520A0
{
    mangled_assert("??$updateRenderListStatus@VSelection@@VSubSystemUpdate@@@Viewer@@AAEXABVSelection@@MAAVSubSystemUpdate@@@Z");
    todo("implement");
    _sub_6520A0(this, arg, arg, arg);
}

_extern void _sub_652230(Viewer *const, Selection const &, float, WeaponFireUpdate &);
void Viewer::updateRenderListStatus<Selection,WeaponFireUpdate>(Selection const &, float, WeaponFireUpdate &) // 0x652230
{
    mangled_assert("??$updateRenderListStatus@VSelection@@VWeaponFireUpdate@@@Viewer@@AAEXABVSelection@@MAAVWeaponFireUpdate@@@Z");
    todo("implement");
    _sub_652230(this, arg, arg, arg);
}

_extern __int32 _sub_652CF0(Viewer *const, float);
__int32 Viewer::taskFunction(float) // 0x652CF0
{
    mangled_assert("?taskFunction@Viewer@@UAEHM@Z");
    todo("implement");
    __int32 __result = _sub_652CF0(this, arg);
    return __result;
}

_extern void _sub_652BB0(Viewer *const, Sob *);
void Viewer::removeFromRenderList(Sob *) // 0x652BB0
{
    mangled_assert("?removeFromRenderList@Viewer@@QAEXPAVSob@@@Z");
    todo("implement");
    _sub_652BB0(this, arg);
}

_extern bool _sub_653020(SaveGameData *, SaveType);
bool viewSave(SaveGameData *saveGameData, SaveType saveType) // 0x653020
{
    mangled_assert("?viewSave@@YG_NPAVSaveGameData@@W4SaveType@@@Z");
    todo("implement");
    bool __result = _sub_653020(saveGameData, saveType);
    return __result;
}

_extern bool _sub_652FA0(SaveGameData *);
bool viewRestore(SaveGameData *saveGameData) // 0x652FA0
{
    mangled_assert("?viewRestore@@YG_NPAVSaveGameData@@@Z");
    todo("implement");
    bool __result = _sub_652FA0(saveGameData);
    return __result;
}

_extern void _sub_652BA0(Saveable * const);
void Viewer::postRestore() // 0x652BA0
{
    mangled_assert("?postRestore@Viewer@@EAEXXZ");
    // __shifted(Viewer, 48);
    todo("implement");
    _sub_652BA0(this);
}

_extern _sub_6523C0(Viewer *const, SaveGameData *);
Viewer::Viewer(SaveGameData *) // 0x6523C0
{
    mangled_assert("??0Viewer@@AAE@PAVSaveGameData@@@Z");
    todo("implement");
    _sub_6523C0(this, arg);
}

_extern void _sub_6531A0(Viewer *const);
void Viewer::viewerDefaults() // 0x6531A0
{
    mangled_assert("?viewerDefaults@Viewer@@AAEXXZ");
    todo("implement");
    _sub_6531A0(this);
}

_extern bool _sub_652BF0(Saveable * const, SaveGameData *);
bool Viewer::restore(SaveGameData *) // 0x652BF0
{
    mangled_assert("?restore@Viewer@@UAE_NPAVSaveGameData@@@Z");
    // __shifted(Viewer, 48);
    todo("implement");
    bool __result = _sub_652BF0(this, arg);
    return __result;
}

_extern bool _sub_652C40(Saveable * const, SaveGameData *, SaveType);
bool Viewer::save(SaveGameData *, SaveType) // 0x652C40
{
    mangled_assert("?save@Viewer@@UAE_NPAVSaveGameData@@W4SaveType@@@Z");
    // __shifted(Viewer, 48);
    todo("implement");
    bool __result = _sub_652C40(this, arg, arg);
    return __result;
}

_extern _sub_6523A0(CameraDistanceTask *const);
CameraDistanceTask::CameraDistanceTask() // 0x6523A0
{
    mangled_assert("??0CameraDistanceTask@@QAE@XZ");
    todo("implement");
    _sub_6523A0(this);
}

_extern void _sub_652A80(CameraDistanceTask *const, Selection const &);
void CameraDistanceTask::computeDistanceToCamera(Selection const &) // 0x652A80
{
    mangled_assert("?computeDistanceToCamera@CameraDistanceTask@@AAEXABVSelection@@@Z");
    todo("implement");
    _sub_652A80(this, arg);
}

_extern __int32 _sub_652C90(CameraDistanceTask *const, float);
__int32 CameraDistanceTask::taskFunction(float) // 0x652C90
{
    mangled_assert("?taskFunction@CameraDistanceTask@@UAEHM@Z");
    todo("implement");
    __int32 __result = _sub_652C90(this, arg);
    return __result;
}

/* ---------- private code */
#endif
