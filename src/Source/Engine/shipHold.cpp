#if 0
/* ---------- headers */

#include "decomp.h"
#include <Player.h>
#include <set>
#include <assist\stlexsmallvector.h>
#include <ResearchManager.h>
#include <xstring>
#include <SoundManager\SoundEntityHandle.h>
#include <WeaponClassSpecificInfo.h>
#include <fileio\iff.h>
#include <seInterface2\PatchID.h>
#include <xmemory0>
#include <HyperspaceManager.h>
#include <Mathlib\matrix4.h>
#include <boost\shared_array.hpp>
#include <pch.h>
#include <seInterface2\PatchBase.h>
#include <seInterface2\SoundParams.h>
#include <malloc.h>
#include <Ship\FormationTargetInfo.h>
#include <Mathlib\matrix3.h>
#include <boost\checked_delete.hpp>
#include <seInterface2\SampleID.h>
#include <new>
#include <seInterface2\SampleBase.h>
#include <exception>
#include <Camera\OrbitParameters.h>
#include <xstddef>
#include <type_traits>
#include <fixedpoint.h>
#include <HierarchyStatic.h>
#include <Decal\DecalRefMesh.h>
#include <util\fixed.h>
#include <Collision\Primitives\mesh.h>
#include <Collision\Primitives\triangle.h>
#include <xutility>
#include <MainUI.h>
#include <FormHyperspaceGateCommand.h>
#include <utility>
#include <iosfwd>
#include <dbdefines.h>
#include <SensorsManager.h>
#include <vector>
#include <Collision\BVH\octree.h>
#include <UnitCaps\UnitCaps.h>
#include <Render\gl\r_types.h>
#include <xmemory>
#include <Collision\BVH\span.h>
#include <Modifiers\ModifierAbility.h>
#include <Mathlib\matvec.h>
#include <fileio\fileioexports.h>
#include <Collision\BVH\Internal\span_i.h>
#include <debug\ctassert.h>
#include <Collision\BVH\proxy.h>
#include <TeamColourRegistry.h>
#include <shipstatic.h>
#include <Collision\intersect.h>
#include <savegame.h>
#include <commandtype.h>
#include <Collision\primitivesfwd.h>
#include <task.h>
#include <stack>
#include <Mathlib\mathutil.h>
#include <Render\gl\r_defines.h>
#include <SobWithMeshStatic.h>
#include <Render\gl\glext.h>
#include <Ship\Formation.h>
#include <math.h>
#include <Ship\FormationPattern.h>
#include <ship.h>
#include <list>
#include <SobWithMesh.h>
#include <abilities.h>
#include <OrderFeedback.h>
#include <SobRigidBody.h>
#include <DockCommand.h>
#include <Interpolation.h>
#include <SobRigidBodyStatic.h>
#include <Mathlib\vector3.h>
#include <Mathlib\vector4.h>
#include <seInterface2\sedefinesshared.h>
#include <Collision\Primitives\aabb.h>
#include <MeshAnimation.h>
#include <ShieldTypes.h>
#include <map>
#include <xtree>
#include <Universe.h>
#include <boost\smart_ptr.hpp>
#include <sobid.h>
#include <Waypoint.h>
#include <boost\scoped_ptr.hpp>
#include <ATITemplate.h>
#include <SobUnmoveable.h>
#include <ATI.h>
#include <sob.h>
#include <sobstatic.h>
#include <Subsystems\HardPointManager.h>
#include <Render\FxGL\FXManager.h>
#include <profile\profile.h>
#include <Collision\Primitives\sphere.h>
#include <Subsystems\HardPoint.h>
#include <Tactics.h>
#include <Render\FxGL\VarMulti.h>
#include <iostream>
#include <Subsystems\HardPointStatic.h>
#include <Mathlib\vector2.h>
#include <Subsystems\SubSystemType.h>
#include <util\types.h>
#include <MoveCommand.h>
#include <boost\cstdint.hpp>
#include <CameraCommand.h>
#include <CameraHW.h>
#include <boost\scoped_array.hpp>
#include <Camera\CameraOrbitTarget.h>
#include <weaponinfo.h>
#include <Camera\Camera.h>
#include <Camera\Frustum.h>
#include <SelTarg.h>
#include <Mathlib\quat.h>
#include <Camera\Plane3.h>
#include <prim.h>
#include <Modifiers\ModifierTargetCache.h>
#include <alliance.h>
#include <DynamicPoint.h>
#include <Collision\Primitives\capsule.h>
#include <Collision\Primitives\segment.h>
#include <platform\timer.h>
#include <Collision\BVH\profiling.h>
#include <platform\platformexports.h>
#include <Selector.h>
#include <Mathlib\mathlibdll.h>
#include <MetaSelTarg.h>
#include <Mathlib\fastmath.h>
#include <Collision\Primitives\obb.h>
#include <Race.h>
#include <ParadeCommand.h>
#include <savegameimpl.h>
#include <Parade.h>
#include <TacticalOverlay.h>
#include <pathpoints.h>
#include <Squadron.h>
#include <debug\db.h>
#include <command.h>
#include <SOBGroupManager.h>
#include <hash_map>
#include <deque>
#include <xhash>
#include <Modifiers\ModifierUIInfo.h>
#include <BuildManager.h>
#include <Modifiers\ModifierMultiplier.h>
#include <Modifiers\ModifierEffect.h>
#include <SobFactory.h>
#include <boost\shared_ptr.hpp>
#include <util\colour.h>
#include <sobtypes.h>
#include <boost\throw_exception.hpp>
#include <selection.h>
#include <savegamedef.h>
#include <boost\detail\shared_count.hpp>
#include <bitset>
#include <boost\detail\lwm_win32.hpp>
#include <config.h>
#include <MultiplierContainer.h>
#include <visibility.h>
#include <Modifiers\ModifierApplier.h>
#include <MultiplierTypes.h>
#include <Collision\BVH\bvh.h>
#include <SoundManager\SoundManager.h>
#include <seInterface2\SEInterface.h>
#include <seInterface2\SoundParamManager.h>
#include <weaponstaticinfo.h>
#include <seInterface2\seinterfacefunc.h>
#include <assist\gbitset.h>
#include <GunBinding.h>
#include <shipHold.h>
#include <SquadronList.h>
#include <wchar.h>
#include <ITweak.h>
#include <string>
#include <GameEventDefs.h>
#include <RallyParadeCommand.h>
#include <GameEventSys.h>
#include <DockLaunch.h>
#include <playerresourcetype.h>
#include <Viewer.h>
#include <queue>
#include <DockQueue.h>
#include <SquadronQueue.h>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

extern void skipData(IFFChunk *chunk, __int32 size);

_static bool readyForLaunch(Squadron *s);

/* ---------- globals */

extern char const ShipHold::m_saveToken[0]; // 0x78F868
extern SaveData const ShipHold::m_saveData[9]; // 0x78F878

/* ---------- private variables */

_static
{
    extern float const ViewerUpdateRate; // 0x78F860
    extern float const ViewerUpdatePeriod; // 0x83564C
    extern float const CameraDistanceUpdateRate; // 0x78F864
    extern float const CameraDistanceUpdatePeriod; // 0x835650
}

/* ---------- public code */

ShipHoldStatic::ShipHoldStatic() // 0x4AC3BC
{
    mangled_assert("??0ShipHoldStatic@@QAE@XZ");
    todo("implement");
}

_inline std::_List_buy<Ship *,std::allocator<Ship *> >::~_List_buy<Ship *,std::allocator<Ship *> >() // 0x4AC43B
{
    mangled_assert("??1?$_List_buy@PAVShip@@V?$allocator@PAVShip@@@std@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline std::_List_buy<Squadron *,std::allocator<Squadron *> >::~_List_buy<Squadron *,std::allocator<Squadron *> >() // 0x4AC444
{
    mangled_assert("??1?$_List_buy@PAVSquadron@@V?$allocator@PAVSquadron@@@std@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline std::_Tree_buy<unsigned int,std::allocator<unsigned int> >::~_Tree_buy<unsigned int,std::allocator<unsigned int> >() // 0x4AC49B
{
    mangled_assert("??1?$_Tree_buy@IV?$allocator@I@std@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline std::_Tree_buy<std::pair<unsigned int const ,float>,std::allocator<std::pair<unsigned int const ,float> > >::~_Tree_buy<std::pair<unsigned int const ,float>,std::allocator<std::pair<unsigned int const ,float> > >() // 0x4AC4A4
{
    mangled_assert("??1?$_Tree_buy@U?$pair@$$CBIM@std@@V?$allocator@U?$pair@$$CBIM@std@@@2@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline std::_Tree_comp<0,std::_Tmap_traits<unsigned int,float,std::less<unsigned int>,std::allocator<std::pair<unsigned int const ,float> >,0> >::~_Tree_comp<0,std::_Tmap_traits<unsigned int,float,std::less<unsigned int>,std::allocator<std::pair<unsigned int const ,float> >,0> >() // 0x4AC4AD
{
    mangled_assert("??1?$_Tree_comp@$0A@V?$_Tmap_traits@IMU?$less@I@std@@V?$allocator@U?$pair@$$CBIM@std@@@2@$0A@@std@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline std::_Tree_comp<0,std::_Tset_traits<unsigned int,std::less<unsigned int>,std::allocator<unsigned int>,0> >::~_Tree_comp<0,std::_Tset_traits<unsigned int,std::less<unsigned int>,std::allocator<unsigned int>,0> >() // 0x4AC4B6
{
    mangled_assert("??1?$_Tree_comp@$0A@V?$_Tset_traits@IU?$less@I@std@@V?$allocator@I@2@$0A@@std@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline std::map<unsigned int,float,std::less<unsigned int>,std::allocator<std::pair<unsigned int const ,float> > >::~map<unsigned int,float,std::less<unsigned int>,std::allocator<std::pair<unsigned int const ,float> > >() // 0x4AC4E3
{
    mangled_assert("??1?$map@IMU?$less@I@std@@V?$allocator@U?$pair@$$CBIM@std@@@2@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline std::set<unsigned int,std::less<unsigned int>,std::allocator<unsigned int> >::~set<unsigned int,std::less<unsigned int>,std::allocator<unsigned int> >() // 0x4AC4F1
{
    mangled_assert("??1?$set@IU?$less@I@std@@V?$allocator@I@2@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline GameEvent_ShipDocked::~GameEvent_ShipDocked() // 0x4AC505
{
    mangled_assert("??1GameEvent_ShipDocked@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

ShipHoldStatic::~ShipHoldStatic() // 0x4AC705
{
    mangled_assert("??1ShipHoldStatic@@QAE@XZ");
    todo("implement");
}

float ShipHoldStatic::getRepairRateFor(unsigned __int32) const // 0x4AE6CA
{
    mangled_assert("?getRepairRateFor@ShipHoldStatic@@QBEMI@Z");
    todo("implement");
}

ShipHold::ShipHold(Ship *, unsigned __int32) // 0x4AC19F
{
    mangled_assert("??0ShipHold@@QAE@PAVShip@@I@Z");
    todo("implement");
}

_inline ShipHold::Data::Data() // 0x4AC0AF
{
    mangled_assert("??0Data@ShipHold@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

bool ShipHold::restore(SaveGameData *) // 0x4AFAA7
{
    mangled_assert("?restore@ShipHold@@UAE_NPAVSaveGameData@@@Z");
    todo("implement");
}

bool ShipHold::save(SaveGameData *, SaveType) // 0x4AFAE5
{
    mangled_assert("?save@ShipHold@@UAE_NPAVSaveGameData@@W4SaveType@@@Z");
    todo("implement");
}

ShipHold::ShipHold(SaveGameData *) // 0x4AC0E0
{
    mangled_assert("??0ShipHold@@QAE@PAVSaveGameData@@@Z");
    todo("implement");
}

void ShipHold::postRestore() // 0x4AF42E
{
    mangled_assert("?postRestore@ShipHold@@UAEXXZ");
    todo("implement");
}

ShipHold::~ShipHold() // 0x4AC50C
{
    mangled_assert("??1ShipHold@@UAE@XZ");
    todo("implement");
}

void ShipHold::addToHold(Squadron *) // 0x4AD725
{
    mangled_assert("?addToHold@ShipHold@@QAEXPAVSquadron@@@Z");
    todo("implement");
}

void ShipHold::refreshShipsDocking() // 0x4AF787
{
    mangled_assert("?refreshShipsDocking@ShipHold@@AAEXXZ");
    todo("implement");
}

DockPath *ShipHold::getDockLaunchPath(unsigned __int32) const // 0x4AE46A
{
    mangled_assert("?getDockLaunchPath@ShipHold@@QBEPAVDockPath@@I@Z");
    todo("implement");
}

unsigned __int32 ShipHold::getNumPathsFor(Sob const *, bool) const // 0x4AE4D8
{
    mangled_assert("?getNumPathsFor@ShipHold@@QBEIPBVSob@@_N@Z");
    todo("implement");
}

ShipHoldStatic const *ShipHold::getShipHoldStatic() const // 0x4AE6FF
{
    mangled_assert("?getShipHoldStatic@ShipHold@@QBEPBVShipHoldStatic@@XZ");
    todo("implement");
}

void ShipHold::registerDockingSquadron(Squadron *) // 0x4AF80F
{
    mangled_assert("?registerDockingSquadron@ShipHold@@QAEXPAVSquadron@@@Z");
    todo("implement");
}

unsigned __int32 ShipHold::getParkingUsage() const // 0x4AE57E
{
    mangled_assert("?getParkingUsage@ShipHold@@QBEIXZ");
    todo("implement");
}

void ShipHold::update(float) // 0x4AFEE4
{
    mangled_assert("?update@ShipHold@@QAEXM@Z");
    todo("implement");
}

void ShipHold::unloadResources(Squadron *, float) // 0x4AFDE9
{
    mangled_assert("?unloadResources@ShipHold@@AAEXPAVSquadron@@M@Z");
    todo("implement");
}

void ShipHold::repairSquadron(Squadron *, float) // 0x4AF886
{
    mangled_assert("?repairSquadron@ShipHold@@AAEXPAVSquadron@@M@Z");
    todo("implement");
}

Squadron *ShipHold::createSquadron(char const *, unsigned __int32) // 0x4ADBC6
{
    mangled_assert("?createSquadron@ShipHold@@QAEPAVSquadron@@PBDI@Z");
    todo("implement");
}

void ShipHold::instantlyAndDestructivelyDockSquadron(Squadron *, bool) // 0x4AF166
{
    mangled_assert("?instantlyAndDestructivelyDockSquadron@ShipHold@@QAEXPAVSquadron@@_N@Z");
    todo("implement");
}

DockPathStatic *ShipHold::getPathFor(Squadron *, PathType, bool) const // 0x4AE625
{
    mangled_assert("?getPathFor@ShipHold@@ABEPAVDockPathStatic@@PAVSquadron@@W4PathType@@_N@Z");
    todo("implement");
}

void ShipHold::forceDock(Squadron *, unsigned __int32, bool) // 0x4AE438
{
    mangled_assert("?forceDock@ShipHold@@AAEXPAVSquadron@@I_N@Z");
    todo("implement");
}

void ShipHold::hyperspaceInSquadron(Squadron *) // 0x4AF127
{
    mangled_assert("?hyperspaceInSquadron@ShipHold@@AAEXPAVSquadron@@@Z");
    todo("implement");
}

void ShipHold::removeLaunchingSquadronFromHold(Squadron *) // 0x4AF851
{
    mangled_assert("?removeLaunchingSquadronFromHold@ShipHold@@QAEXPAVSquadron@@@Z");
    todo("implement");
}

unsigned __int32 ShipHold::getNumberOfSleepingShipsHeld() const // 0x4AE53F
{
    mangled_assert("?getNumberOfSleepingShipsHeld@ShipHold@@QBEIXZ");
    todo("implement");
}

bool ShipHold::canHoldShipsInside() const // 0x4AD9B7
{
    mangled_assert("?canHoldShipsInside@ShipHold@@QBE_NXZ");
    todo("implement");
}

void skipData(IFFChunk *chunk, __int32 size) // 0x4AFD08
{
    mangled_assert("?skipData@@YGXPAVIFFChunk@@H@Z");
    todo("implement");
}

__int32 ShipHoldStatic::handle_DockingChunk(IFF *iff, IFFChunk *chunk, void *user0, void *user1) // 0x4AE712
{
    mangled_assert("?handle_DockingChunk@ShipHoldStatic@@SGHPAVIFF@@PAVIFFChunk@@PAX2@Z");
    todo("implement");
}

void ShipHoldStatic::copyDockingChunk(ShipHoldStatic *) // 0x4ADB89
{
    mangled_assert("?copyDockingChunk@ShipHoldStatic@@QAEXPAV1@@Z");
    todo("implement");
}

bool ShipHold::UIChangedSinceLastView() // 0x4ACA9E
{
    mangled_assert("?UIChangedSinceLastView@ShipHold@@QAE_NXZ");
    todo("implement");
}

void ShipHold::ShipHoldChanged() // 0x4ACA96
{
    mangled_assert("?ShipHoldChanged@ShipHold@@AAEXXZ");
    todo("implement");
}

bool ShipHold::shipHoldCanAcceptNewDockLaunchRequests() const // 0x4AFC61
{
    mangled_assert("?shipHoldCanAcceptNewDockLaunchRequests@ShipHold@@QBE_NXZ");
    todo("implement");
}

bool ShipHold::shipHoldHasNoCurrentDockLaunchActivity() const // 0x4AFC87
{
    mangled_assert("?shipHoldHasNoCurrentDockLaunchActivity@ShipHold@@QBE_NXZ");
    todo("implement");
}

void ShipHold::changePlayerOwner(Player *) // 0x4ADA2D
{
    mangled_assert("?changePlayerOwner@ShipHold@@QAEXPAVPlayer@@@Z");
    todo("implement");
}

void ShipHold::setRallyPoint(vector3 const &) // 0x4AFB72
{
    mangled_assert("?setRallyPoint@ShipHold@@QAEXABVvector3@@@Z");
    todo("implement");
}

vector3 const &ShipHold::getRallyPoint() const // 0x4AE6BC
{
    mangled_assert("?getRallyPoint@ShipHold@@QBEABVvector3@@XZ");
    todo("implement");
}

vector3 const &ShipHold::getRallyPointHeading() const // 0x4AE6C3
{
    mangled_assert("?getRallyPointHeading@ShipHold@@QBEABVvector3@@XZ");
    todo("implement");
}

void ShipHold::setRallyObject(SobID const &) // 0x4AFB3B
{
    mangled_assert("?setRallyObject@ShipHold@@QAEXABVSobID@@@Z");
    todo("implement");
}

Sob const *ShipHold::getRallyObject() const // 0x4AE6B1
{
    mangled_assert("?getRallyObject@ShipHold@@QBEPBVSob@@XZ");
    todo("implement");
}

void ShipHold::displayRallyPoint() // 0x4ADD5D
{
    mangled_assert("?displayRallyPoint@ShipHold@@QAEXXZ");
    todo("implement");
}

void ShipHold::NotVisibleAnymore(Squadron *) // 0x4ACA78
{
    mangled_assert("?NotVisibleAnymore@ShipHold@@QAEXPAVSquadron@@@Z");
    todo("implement");
}

/* ---------- private code */

_static bool readyForLaunch(Squadron *s) // 0x4AF765
{
    mangled_assert("readyForLaunch");
    todo("implement");
}
#endif
