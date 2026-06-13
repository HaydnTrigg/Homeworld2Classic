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

_extern _sub_611053(OrderFeedbackInfo *const);
OrderFeedbackInfo::OrderFeedbackInfo() // 0x611053
{
    mangled_assert("??0OrderFeedbackInfo@@QAE@XZ");
    todo("implement");
    _sub_611053(this);
}

_extern _sub_610FFF(OrderFeedbackInfo *const, Command const *);
OrderFeedbackInfo::OrderFeedbackInfo(Command const *) // 0x610FFF
{
    mangled_assert("??0OrderFeedbackInfo@@QAE@PBVCommand@@@Z");
    todo("implement");
    _sub_610FFF(this, arg);
}

_extern _sub_610FB9(OrderFeedbackInfo *const, unsigned __int32, Squadron const *, vector3 const &);
OrderFeedbackInfo::OrderFeedbackInfo(unsigned __int32, Squadron const *, vector3 const &) // 0x610FB9
{
    mangled_assert("??0OrderFeedbackInfo@@QAE@IPBVSquadron@@ABVvector3@@@Z");
    todo("implement");
    _sub_610FB9(this, arg, arg, arg);
}

_extern _sub_610F6D(OrderFeedbackInfo *const, unsigned __int32, Squadron const *, SobID const &);
OrderFeedbackInfo::OrderFeedbackInfo(unsigned __int32, Squadron const *, SobID const &) // 0x610F6D
{
    mangled_assert("??0OrderFeedbackInfo@@QAE@IPBVSquadron@@ABVSobID@@@Z");
    todo("implement");
    _sub_610F6D(this, arg, arg, arg);
}

_extern bool _sub_61146D();
bool OrderFeedbackManager::Initialize() // 0x61146D
{
    mangled_assert("?Initialize@OrderFeedbackManager@@SG_NXZ");
    todo("implement");
    bool __result = _sub_61146D();
    return __result;
}

_extern bool _sub_61143D();
bool OrderFeedbackManager::Finalize() // 0x61143D
{
    mangled_assert("?Finalize@OrderFeedbackManager@@SG_NXZ");
    todo("implement");
    bool __result = _sub_61143D();
    return __result;
}

_extern OrderFeedbackManager *_sub_612683();
OrderFeedbackManager *OrderFeedbackManager::i() // 0x612683
{
    mangled_assert("?i@OrderFeedbackManager@@SGPAV1@XZ");
    todo("implement");
    OrderFeedbackManager * __result = _sub_612683();
    return __result;
}

_extern _sub_611069(OrderFeedbackManager *const);
OrderFeedbackManager::OrderFeedbackManager() // 0x611069
{
    mangled_assert("??0OrderFeedbackManager@@AAE@XZ");
    todo("implement");
    _sub_611069(this);
}

_extern _sub_611329(OrderFeedbackValue *const);
_inline OrderFeedbackValue::OrderFeedbackValue() // 0x611329
{
    mangled_assert("??0OrderFeedbackValue@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_611329(this);
}

_extern void _sub_611335(std::_List_buy<std::pair<SquadronList,float>,std::allocator<std::pair<SquadronList,float> > > *const);
_inline std::_List_buy<std::pair<SquadronList,float>,std::allocator<std::pair<SquadronList,float> > >::~_List_buy<std::pair<SquadronList,float>,std::allocator<std::pair<SquadronList,float> > >() // 0x611335
{
    mangled_assert("??1?$_List_buy@U?$pair@VSquadronList@@M@std@@V?$allocator@U?$pair@VSquadronList@@M@std@@@2@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_611335(this);
}

_extern void _sub_611350(std::pair<SquadronList,float> *const);
_inline std::pair<SquadronList,float>::~pair<SquadronList,float>() // 0x611350
{
    mangled_assert("??1?$pair@VSquadronList@@M@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_611350(this);
}

_extern void _sub_611355(OrderFeedbackManager *const);
OrderFeedbackManager::~OrderFeedbackManager() // 0x611355
{
    mangled_assert("??1OrderFeedbackManager@@AAE@XZ");
    todo("implement");
    _sub_611355(this);
}

_extern void _sub_612C8A(OrderFeedbackManager *const, unsigned __int32);
void OrderFeedbackManager::setFadeValue(unsigned __int32) // 0x612C8A
{
    mangled_assert("?setFadeValue@OrderFeedbackManager@@QAEXI@Z");
    todo("implement");
    _sub_612C8A(this, arg);
}

_extern unsigned __int32 _sub_612670(OrderFeedbackManager const *const);
unsigned __int32 OrderFeedbackManager::getMinFadeValue() const // 0x612670
{
    mangled_assert("?getMinFadeValue@OrderFeedbackManager@@QBEIXZ");
    todo("implement");
    unsigned __int32 __result = _sub_612670(this);
    return __result;
}

_extern unsigned __int32 _sub_61266C(OrderFeedbackManager const *const);
unsigned __int32 OrderFeedbackManager::getMaxFadeValue() const // 0x61266C
{
    mangled_assert("?getMaxFadeValue@OrderFeedbackManager@@QBEIXZ");
    todo("implement");
    unsigned __int32 __result = _sub_61266C(this);
    return __result;
}

_extern void _sub_612689(OrderFeedbackManager *const, vector3 const *, vector3 &, vector3 &, vector3 &);
void OrderFeedbackManager::makeOrientationVectors(vector3 const *, vector3 &, vector3 &, vector3 &) // 0x612689
{
    mangled_assert("?makeOrientationVectors@OrderFeedbackManager@@AAEXPBVvector3@@AAV2@11@Z");
    todo("implement");
    _sub_612689(this, arg, arg, arg, arg);
}

_extern void _sub_61274E(OrderFeedbackManager *const, Selection const &);
void OrderFeedbackManager::registerRecentlyOrderedShips(Selection const &) // 0x61274E
{
    mangled_assert("?registerRecentlyOrderedShips@OrderFeedbackManager@@QAEXABVSelection@@@Z");
    todo("implement");
    _sub_61274E(this, arg);
}

_extern float _sub_612622(OrderFeedbackManager const *const);
float OrderFeedbackManager::getFeedbackFadeTime() const // 0x612622
{
    mangled_assert("?getFeedbackFadeTime@OrderFeedbackManager@@ABEMXZ");
    todo("implement");
    float __result = _sub_612622(this);
    return __result;
}

_extern float _sub_612629(OrderFeedbackManager const *const);
float OrderFeedbackManager::getFeedbackFullTime() const // 0x612629
{
    mangled_assert("?getFeedbackFullTime@OrderFeedbackManager@@ABEMXZ");
    todo("implement");
    float __result = _sub_612629(this);
    return __result;
}

_extern void _sub_61282B(OrderFeedbackManager *const, Camera const *, float);
void OrderFeedbackManager::render(Camera const *, float) // 0x61282B
{
    mangled_assert("?render@OrderFeedbackManager@@QAEXPBVCamera@@M@Z");
    todo("implement");
    _sub_61282B(this, arg, arg);
}

_extern void _sub_611A62(OrderFeedbackManager *const, ShipHold const *);
void OrderFeedbackManager::displayRallyPoint(ShipHold const *) // 0x611A62
{
    mangled_assert("?displayRallyPoint@OrderFeedbackManager@@AAEXPBVShipHold@@@Z");
    todo("implement");
    _sub_611A62(this, arg);
}

_extern void _sub_6115FF(OrderFeedbackManager *const, Camera const *, OrderFeedbackInfo const &, float, float, float);
void OrderFeedbackManager::displayCommand(Camera const *, OrderFeedbackInfo const &, float, float, float) // 0x6115FF
{
    mangled_assert("?displayCommand@OrderFeedbackManager@@AAEXPBVCamera@@ABUOrderFeedbackInfo@@MMM@Z");
    todo("implement");
    _sub_6115FF(this, arg, arg, arg, arg, arg);
}

_extern void _sub_611A65(OrderFeedbackManager *const, Squadron const *, vector3 const &, vector3 const &, matrix3 const &, Camera const *, float, float, float, OrderFeedbackInfo const &, bool);
void OrderFeedbackManager::drawFeedback(Squadron const *, vector3 const &, vector3 const &, matrix3 const &, Camera const *, float, float, float, OrderFeedbackInfo const &, bool) // 0x611A65
{
    mangled_assert("?drawFeedback@OrderFeedbackManager@@AAEXPBVSquadron@@ABVvector3@@1ABVmatrix3@@PBVCamera@@MMMABUOrderFeedbackInfo@@_N@Z");
    todo("implement");
    _sub_611A65(this, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg);
}

_extern bool _sub_612718(bool);
bool orderFeedbackSetPersistantRender(bool tf) // 0x612718
{
    mangled_assert("?orderFeedbackSetPersistantRender@@YG_N_N@Z");
    todo("implement");
    bool __result = _sub_612718(tf);
    return __result;
}

_extern OrderFeedbackValue const &_sub_61272A(CommandType);
OrderFeedbackValue const &orderFeedbackValueGet(CommandType commandType) // 0x61272A
{
    mangled_assert("?orderFeedbackValueGet@@YGABUOrderFeedbackValue@@W4CommandType@@@Z");
    todo("implement");
    OrderFeedbackValue const & __result = _sub_61272A(commandType);
    return __result;
}

/* ---------- private code */
#endif
