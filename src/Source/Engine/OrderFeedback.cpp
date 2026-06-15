#if 0
/* ---------- headers */

#include "decomp.h"
#include <set>
#include <assist\stlexsmallvector.h>
#include <xstring>
#include <Mathlib\matrix4.h>
#include <xmemory0>
#include <boost\shared_array.hpp>
#include <pch.h>
#include <Pieplate.h>
#include <fixedpoint.h>
#include <util\fixed.h>
#include <weaponinfo.h>
#include <Race.h>
#include <DotManager.h>
#include <Mathlib\matrix3.h>
#include <seInterface2\sedefinesshared.h>
#include <Modifiers\ModifierTargetCache.h>
#include <HyperspaceManager.h>
#include <new>
#include <groupinglogic.h>
#include <TeamColourRegistry.h>
#include <exception>
#include <xstddef>
#include <savegame.h>
#include <type_traits>
#include <task.h>
#include <BuildManager.h>
#include <stack>
#include <SobWithMeshStatic.h>
#include <Ship\Formation.h>
#include <luaconfig\luaconfig.h>
#include <sob.h>
#include <ship.h>
#include <Ship\FormationPattern.h>
#include <lua.h>
#include <sobstatic.h>
#include <SobWithMesh.h>
#include <xutility>
#include <Collision\Primitives\sphere.h>
#include <SobRigidBody.h>
#include <utility>
#include <iosfwd>
#include <vector>
#include <SobRigidBodyStatic.h>
#include <xmemory>
#include <MeshAnimation.h>
#include <ShieldTypes.h>
#include <Collision\BVH\octree.h>
#include <math.h>
#include <Collision\BVH\span.h>
#include <FormationCommands\FormationCommand.h>
#include <Collision\BVH\Internal\span_i.h>
#include <dbdefines.h>
#include <list>
#include <Collision\BVH\proxy.h>
#include <UnitCaps\UnitCaps.h>
#include <Collision\intersect.h>
#include <Subsystems\HardPointManager.h>
#include <AttackCommand.h>
#include <Collision\primitivesfwd.h>
#include <Subsystems\HardPoint.h>
#include <AttackStyle.h>
#include <Subsystems\HardPointStatic.h>
#include <platform\osdef.h>
#include <Subsystems\SubSystemType.h>
#include <Mathlib\vector3.h>
#include <Mathlib\vector4.h>
#include <weaponTargetInfo.h>
#include <Selector.h>
#include <MetaSelTarg.h>
#include <Parade.h>
#include <map>
#include <hash_map>
#include <xtree>
#include <xhash>
#include <Player.h>
#include <boost\smart_ptr.hpp>
#include <Camera\Camera.h>
#include <DynamicPoint.h>
#include <Interpolation.h>
#include <ResearchManager.h>
#include <boost\scoped_ptr.hpp>
#include <Camera\Frustum.h>
#include <sobid.h>
#include <Camera\Plane3.h>
#include <renderer.h>
#include <Render\gl\types.h>
#include <Collision\Primitives\aabb.h>
#include <Mathlib\matvec.h>
#include <Mathlib\vector2.h>
#include <Collision\Primitives\obb.h>
#include <shipHold.h>
#include <util\types.h>
#include <playerresourcetype.h>
#include <LayMinesCommand.h>
#include <Render\gl\lotypes.h>
#include <boost\cstdint.hpp>
#include <SoundManager\SoundEntityHandle.h>
#include <Render\gl\r_types.h>
#include <boost\scoped_array.hpp>
#include <Mathlib\quat.h>
#include <SOBGroupManager.h>
#include <MainUI.h>
#include <SensorsManager.h>
#include <SoundManager\SoundManager.h>
#include <seInterface2\SEInterface.h>
#include <seInterface2\SoundParamManager.h>
#include <assist\typemagic.h>
#include <seInterface2\seinterfacefunc.h>
#include <assist\gbitset.h>
#include <MoveCommand.h>
#include <SelTarg.h>
#include <prim.h>
#include <Mathlib\mathlibdll.h>
#include <Mathlib\fastmath.h>
#include <profile\profile.h>
#include <TacticalOverlay.h>
#include <iostream>
#include <waypointMoveCommand.h>
#include <Collision\Primitives\capsule.h>
#include <pathpoints.h>
#include <StrikeGroup.h>
#include <Collision\Primitives\segment.h>
#include <debug\db.h>
#include <Collision\BVH\profiling.h>
#include <platform\timer.h>
#include <platform\platformexports.h>
#include <deque>
#include <ParadeCommand.h>
#include <Render\gl\r_defines.h>
#include <commandtype.h>
#include <Render\gl\glext.h>
#include <Squadron.h>
#include <util\colour.h>
#include <boost\shared_ptr.hpp>
#include <command.h>
#include <sobtypes.h>
#include <boost\throw_exception.hpp>
#include <seInterface2\PatchID.h>
#include <selection.h>
#include <savegamedef.h>
#include <seInterface2\PatchBase.h>
#include <boost\detail\shared_count.hpp>
#include <seInterface2\SoundParams.h>
#include <bitset>
#include <boost\detail\lwm_win32.hpp>
#include <abilities.h>
#include <luaconfig\luautils.h>
#include <seInterface2\SampleID.h>
#include <seInterface2\SampleBase.h>
#include <Camera\OrbitParameters.h>
#include <MultiplierContainer.h>
#include <visibility.h>
#include <FormationCommands\FormationAttackCommand.h>
#include <MultiplierTypes.h>
#include <OrderFeedback.h>
#include <Collision\BVH\bvh.h>
#include <SquadronList.h>
#include <wchar.h>
#include <queue>
#include <Universe.h>
#include <Ship\FormationTargetInfo.h>
#include <Waypoint.h>
#include <SobUnmoveable.h>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

extern bool orderFeedbackSetPersistantRender(bool tf);
extern OrderFeedbackValue const &orderFeedbackValueGet(CommandType commandType);

/* ---------- globals */

extern OrderFeedbackManager *OrderFeedbackManager::m_pInstance; // 0x849980
extern bool g_bOrderFeedbackPersistantRender; // 0x849984

/* ---------- private variables */

_static
{
    extern std::_Nil _Nil_obj; // 0x849985
    extern float twkOrderFeedbackFullTime; // 0x83C74C
    extern float twkOrderFeedbackFadeTime; // 0x83C750
    extern float twkOrderFeedbackPingLifetime; // 0x83C754
    extern float twkOrderFeedbackPingScale; // 0x83C758
    extern OrderFeedbackValue feedbackValues[22]; // 0x849988
}

/* ---------- public code */

OrderFeedbackInfo::OrderFeedbackInfo() // 0x611053
{
    mangled_assert("??0OrderFeedbackInfo@@QAE@XZ");
    todo("implement");
}

OrderFeedbackInfo::OrderFeedbackInfo(Command const *) // 0x610FFF
{
    mangled_assert("??0OrderFeedbackInfo@@QAE@PBVCommand@@@Z");
    todo("implement");
}

OrderFeedbackInfo::OrderFeedbackInfo(unsigned __int32, Squadron const *, vector3 const &) // 0x610FB9
{
    mangled_assert("??0OrderFeedbackInfo@@QAE@IPBVSquadron@@ABVvector3@@@Z");
    todo("implement");
}

OrderFeedbackInfo::OrderFeedbackInfo(unsigned __int32, Squadron const *, SobID const &) // 0x610F6D
{
    mangled_assert("??0OrderFeedbackInfo@@QAE@IPBVSquadron@@ABVSobID@@@Z");
    todo("implement");
}

bool OrderFeedbackManager::Initialize() // 0x61146D
{
    mangled_assert("?Initialize@OrderFeedbackManager@@SG_NXZ");
    todo("implement");
}

bool OrderFeedbackManager::Finalize() // 0x61143D
{
    mangled_assert("?Finalize@OrderFeedbackManager@@SG_NXZ");
    todo("implement");
}

OrderFeedbackManager *OrderFeedbackManager::i() // 0x612683
{
    mangled_assert("?i@OrderFeedbackManager@@SGPAV1@XZ");
    todo("implement");
}

OrderFeedbackManager::OrderFeedbackManager() // 0x611069
{
    mangled_assert("??0OrderFeedbackManager@@AAE@XZ");
    todo("implement");
}

_inline OrderFeedbackValue::OrderFeedbackValue() // 0x611329
{
    mangled_assert("??0OrderFeedbackValue@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline std::_List_buy<std::pair<SquadronList,float>,std::allocator<std::pair<SquadronList,float> > >::~_List_buy<std::pair<SquadronList,float>,std::allocator<std::pair<SquadronList,float> > >() // 0x611335
{
    mangled_assert("??1?$_List_buy@U?$pair@VSquadronList@@M@std@@V?$allocator@U?$pair@VSquadronList@@M@std@@@2@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline std::pair<SquadronList,float>::~pair<SquadronList,float>() // 0x611350
{
    mangled_assert("??1?$pair@VSquadronList@@M@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

OrderFeedbackManager::~OrderFeedbackManager() // 0x611355
{
    mangled_assert("??1OrderFeedbackManager@@AAE@XZ");
    todo("implement");
}

void OrderFeedbackManager::setFadeValue(unsigned __int32) // 0x612C8A
{
    mangled_assert("?setFadeValue@OrderFeedbackManager@@QAEXI@Z");
    todo("implement");
}

unsigned __int32 OrderFeedbackManager::getMinFadeValue() const // 0x612670
{
    mangled_assert("?getMinFadeValue@OrderFeedbackManager@@QBEIXZ");
    todo("implement");
}

unsigned __int32 OrderFeedbackManager::getMaxFadeValue() const // 0x61266C
{
    mangled_assert("?getMaxFadeValue@OrderFeedbackManager@@QBEIXZ");
    todo("implement");
}

void OrderFeedbackManager::makeOrientationVectors(vector3 const *, vector3 &, vector3 &, vector3 &) // 0x612689
{
    mangled_assert("?makeOrientationVectors@OrderFeedbackManager@@AAEXPBVvector3@@AAV2@11@Z");
    todo("implement");
}

void OrderFeedbackManager::registerRecentlyOrderedShips(Selection const &) // 0x61274E
{
    mangled_assert("?registerRecentlyOrderedShips@OrderFeedbackManager@@QAEXABVSelection@@@Z");
    todo("implement");
}

float OrderFeedbackManager::getFeedbackFadeTime() const // 0x612622
{
    mangled_assert("?getFeedbackFadeTime@OrderFeedbackManager@@ABEMXZ");
    todo("implement");
}

float OrderFeedbackManager::getFeedbackFullTime() const // 0x612629
{
    mangled_assert("?getFeedbackFullTime@OrderFeedbackManager@@ABEMXZ");
    todo("implement");
}

void OrderFeedbackManager::render(Camera const *, float) // 0x61282B
{
    mangled_assert("?render@OrderFeedbackManager@@QAEXPBVCamera@@M@Z");
    todo("implement");
}

void OrderFeedbackManager::displayRallyPoint(ShipHold const *) // 0x611A62
{
    mangled_assert("?displayRallyPoint@OrderFeedbackManager@@AAEXPBVShipHold@@@Z");
    todo("implement");
}

void OrderFeedbackManager::displayCommand(Camera const *, OrderFeedbackInfo const &, float, float, float) // 0x6115FF
{
    mangled_assert("?displayCommand@OrderFeedbackManager@@AAEXPBVCamera@@ABUOrderFeedbackInfo@@MMM@Z");
    todo("implement");
}

void OrderFeedbackManager::drawFeedback(Squadron const *, vector3 const &, vector3 const &, matrix3 const &, Camera const *, float, float, float, OrderFeedbackInfo const &, bool) // 0x611A65
{
    mangled_assert("?drawFeedback@OrderFeedbackManager@@AAEXPBVSquadron@@ABVvector3@@1ABVmatrix3@@PBVCamera@@MMMABUOrderFeedbackInfo@@_N@Z");
    todo("implement");
}

bool orderFeedbackSetPersistantRender(bool tf) // 0x612718
{
    mangled_assert("?orderFeedbackSetPersistantRender@@YG_N_N@Z");
    todo("implement");
}

OrderFeedbackValue const &orderFeedbackValueGet(CommandType commandType) // 0x61272A
{
    mangled_assert("?orderFeedbackValueGet@@YGABUOrderFeedbackValue@@W4CommandType@@@Z");
    todo("implement");
}

/* ---------- private code */
#endif
