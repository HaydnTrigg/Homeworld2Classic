#if 0
/* ---------- headers */

#include "decomp.h"
#include <set>
#include <assist\stlexsmallvector.h>
#include <Collision\Primitives\aabb.h>
#include <xstring>
#include <Collision\Primitives\obb.h>
#include <SimProxy.h>
#include <xmemory0>
#include <Mathlib\matrix4.h>
#include <playerresourcetype.h>
#include <pch.h>
#include <memory\memorylib.h>
#include <fileio\logfile.h>
#include <Modifiers\ModifierAbility.h>
#include <Sob\Resource\Resource.h>
#include <SoundManager\SoundEntityHandle.h>
#include <Sob\Resource\ResourceStatic.h>
#include <Mathlib\matrix3.h>
#include <new>
#include <Universe.h>
#include <resourceCommand.h>
#include <CPUPlayer\CpuResourceBlobs.h>
#include <exception>
#include <Waypoint.h>
#include <Ship\FormationTargetInfo.h>
#include <DockLaunch.h>
#include <xstddef>
#include <ShipQuery.h>
#include <SobUnmoveable.h>
#include <ITweak.h>
#include <DockQueue.h>
#include <type_traits>
#include <FamilyListMgr.h>
#include <SquadronQueue.h>
#include <FamilyList.h>
#include <Family.h>
#include <SelTarg.h>
#include <prim.h>
#include <BuildQueue.h>
#include <xutility>
#include <BuildData.h>
#include <utility>
#include <iosfwd>
#include <DependencyData.h>
#include <vector>
#include <fileio\bytestream.h>
#include <xmemory>
#include <fileio\fileioexports.h>
#include <platform\osdef.h>
#include <debug\ctassert.h>
#include <SquadronList.h>
#include <Collision\Primitives\capsule.h>
#include <Tactics.h>
#include <assist\stlexvector.h>
#include <Collision\Primitives\segment.h>
#include <CPUPlayer\CpuFleetCommand.h>
#include <Collision\BVH\profiling.h>
#include <HyperspaceManager.h>
#include <CPUPlayer\HW2CpuPlayer.h>
#include <math.h>
#include <CPUPlayer\cpuplayer.h>
#include <Render\objects\debugrender.h>
#include <Render\objects\core.h>
#include <list>
#include <ParadeCommand.h>
#include <Render\objects\objects.h>
#include <commandtype.h>
#include <Render\gl\types.h>
#include <OrderFeedback.h>
#include <Mathlib\matvec.h>
#include <assist\fixedstring.h>
#include <seInterface2\PatchID.h>
#include <Mathlib\vector3.h>
#include <memory\memoryfsalloc.h>
#include <seInterface2\PatchBase.h>
#include <Mathlib\vector4.h>
#include <Race.h>
#include <memory\memorysmall.h>
#include <seInterface2\SoundParams.h>
#include <MoveCommand.h>
#include <Ship\Formation.h>
#include <Render\gl\lotypes.h>
#include <abilities.h>
#include <Ship\FormationPattern.h>
#include <xtree>
#include <boost\scoped_ptr.hpp>
#include <Render\gl\r_types.h>
#include <BuildManager.h>
#include <Mathlib\vector2.h>
#include <App\Hw2Identify.h>
#include <util\types.h>
#include <MultiplierContainer.h>
#include <visibility.h>
#include <MultiplierTypes.h>
#include <Collision\BVH\bvh.h>
#include <orders.h>
#include <orders_base.h>
#include <dbdefines.h>
#include <boost\cstdint.hpp>
#include <UnitCaps\UnitCaps.h>
#include <savestream.h>
#include <Volume.h>
#include <VolumeStatic.h>
#include <CPUPlayer\CpuCommon.h>
#include <SobUnmoveableStatic.h>
#include <CPUPlayer\CpuTarget.h>
#include <gamemsg.h>
#include <Squadron.h>
#include <command.h>
#include <sobid.h>
#include <Mathlib\quat.h>
#include <Modifiers\ModifierUIInfo.h>
#include <GameEventSys.h>
#include <Modifiers\ModifierMultiplier.h>
#include <Modifiers\ModifierEffect.h>
#include <DynamicPoint.h>
#include <BuildJob.h>
#include <Render\gl\r_defines.h>
#include <Modifiers\ModifierTargetCache.h>
#include <Mathlib\mathlibdll.h>
#include <Render\gl\glext.h>
#include <Mathlib\fastmath.h>
#include <TeamColourRegistry.h>
#include <Modifiers\ModifierApplier.h>
#include <savegame.h>
#include <Player.h>
#include <task.h>
#include <ResearchManager.h>
#include <savegameimpl.h>
#include <stack>
#include <savegamedata.h>
#include <pathpoints.h>
#include <CPUPlayer\CpuBlobs.h>
#include <SobWithMeshStatic.h>
#include <debug\db.h>
#include <shipstatic.h>
#include <weaponstaticinfo.h>
#include <ship.h>
#include <fixedpoint.h>
#include <GunBinding.h>
#include <SobWithMesh.h>
#include <util\fixed.h>
#include <deque>
#include <SobRigidBody.h>
#include <SOBGroupManager.h>
#include <sob.h>
#include <SobRigidBodyStatic.h>
#include <sobstatic.h>
#include <Collision\Primitives\sphere.h>
#include <shipHold.h>
#include <boost\shared_ptr.hpp>
#include <util\colour.h>
#include <MeshAnimation.h>
#include <sobtypes.h>
#include <boost\throw_exception.hpp>
#include <ShieldTypes.h>
#include <selection.h>
#include <savegamedef.h>
#include <boost\detail\shared_count.hpp>
#include <boost\detail\lwm_win32.hpp>
#include <Subsystems\HardPointManager.h>
#include <Subsystems\HardPoint.h>
#include <GameObj.h>
#include <WeaponClassSpecificInfo.h>
#include <Collision\BVH\octree.h>
#include <Subsystems\HardPointStatic.h>
#include <CPUPlayer\CpuClassifier.h>
#include <config.h>
#include <Collision\BVH\span.h>
#include <Subsystems\SubSystemType.h>
#include <Collision\BVH\Internal\span_i.h>
#include <Collision\BVH\proxy.h>
#include <util\statmonitor.h>
#include <Collision\intersect.h>
#include <util\utilexports.h>
#include <Collision\primitivesfwd.h>
#include <platform\timer.h>
#include <platform\platformexports.h>
#include <CPUPlayer\CpuResourceManager.h>
#include <luaconfig\luabinding.h>
#include <wchar.h>
#include <string>
#include <luaconfig\luaconfig.h>
#include <lua.h>
#include <Parade.h>
#include <Mathlib\mathutil.h>
#include <queue>
#include <hash_map>
#include <algorithm>
#include <xhash>
#include <Interpolation.h>
#include <weaponinfo.h>

/* ---------- constants */

enum `anonymous-namespace'::<unnamed-tag>
{
    InvalidBlob = -1,
};

/* ---------- definitions */

typedef `anonymous-namespace'::SortRefinerySMs ?A0xa4fcb230::SortRefinerySMs;

class `anonymous-namespace'::SortRefinerySMs
{
public:
    bool operator()(RefinerySM const *, RefinerySM const *);
};
static_assert(sizeof(`anonymous-namespace'::SortRefinerySMs) == 1, "Invalid `anonymous-namespace'::SortRefinerySMs size");

struct SortRefineries
{
    bool operator()(Squadron const *, Squadron const *) const;
};
static_assert(sizeof(SortRefineries) == 1, "Invalid SortRefineries size");

/* ---------- prototypes */

/* ---------- globals */

extern char const CpuResourceManager::m_saveToken[19]; // 0x79E290
extern SaveData const CpuResourceManager::m_saveData[9]; // 0x79E2A8

/* ---------- private variables */

_static
{
    extern float const kRefineryToBlobDistance; // 0x79E3C8
    extern float const kRefineryToBlobDistanceSq; // 0x838970
}

/* ---------- public code */

_extern bool _sub_53ED1F(CpuResourceManager *const, RefinerySM *);
bool CpuResourceManager::insertRefinery(RefinerySM *) // 0x53ED1F
{
    mangled_assert("?insertRefinery@CpuResourceManager@@AAE_NPAVRefinerySM@@@Z");
    todo("implement");
    bool __result = _sub_53ED1F(this, arg);
    return __result;
}

_extern _sub_53BAF4(CpuResourceManager *const, CpuCommon &);
CpuResourceManager::CpuResourceManager(CpuCommon &) // 0x53BAF4
{
    mangled_assert("??0CpuResourceManager@@QAE@AAVCpuCommon@@@Z");
    todo("implement");
    _sub_53BAF4(this, arg);
}

_extern void _sub_53BD14(CpuResourceManager *const);
CpuResourceManager::~CpuResourceManager() // 0x53BD14
{
    mangled_assert("??1CpuResourceManager@@UAE@XZ");
    todo("implement");
    _sub_53BD14(this);
}

_extern void _sub_53DBAE(CpuResourceManager *const);
void CpuResourceManager::PostInit() // 0x53DBAE
{
    mangled_assert("?PostInit@CpuResourceManager@@QAEXXZ");
    todo("implement");
    _sub_53DBAE(this);
}

_extern void _sub_53C188(CpuResourceManager *const, LuaConfig &);
void CpuResourceManager::BindToLua(LuaConfig &) // 0x53C188
{
    mangled_assert("?BindToLua@CpuResourceManager@@AAEXAAVLuaConfig@@@Z");
    todo("implement");
    _sub_53C188(this, arg);
}

_extern unsigned __int32 _sub_53D896(CpuResourceManager const *const);
unsigned __int32 CpuResourceManager::GetActiveCollectorSlots() const // 0x53D896
{
    mangled_assert("?GetActiveCollectorSlots@CpuResourceManager@@QBEIXZ");
    todo("implement");
    unsigned __int32 __result = _sub_53D896(this);
    return __result;
}

_extern unsigned __int32 _sub_53D892(CpuResourceManager const *const);
unsigned __int32 CpuResourceManager::GetActiveCollectorBlobs() const // 0x53D892
{
    mangled_assert("?GetActiveCollectorBlobs@CpuResourceManager@@QBEIXZ");
    todo("implement");
    unsigned __int32 __result = _sub_53D892(this);
    return __result;
}

_extern void _sub_53DE81(CpuResourceManager *const, char const *);
void CpuResourceManager::SetResourceDockFamily(char const *) // 0x53DE81
{
    mangled_assert("?SetResourceDockFamily@CpuResourceManager@@QAEXPBD@Z");
    todo("implement");
    _sub_53DE81(this, arg);
}

_extern unsigned __int32 _sub_53D9DD(CpuResourceManager const *const);
unsigned __int32 CpuResourceManager::GetResourceDockFamily() const // 0x53D9DD
{
    mangled_assert("?GetResourceDockFamily@CpuResourceManager@@QBEIXZ");
    todo("implement");
    unsigned __int32 __result = _sub_53D9DD(this);
    return __result;
}

_extern float _sub_53D9E4(CpuResourceManager const *const);
float CpuResourceManager::GetResourcersPerPath() const // 0x53D9E4
{
    mangled_assert("?GetResourcersPerPath@CpuResourceManager@@QBEMXZ");
    todo("implement");
    float __result = _sub_53D9E4(this);
    return __result;
}

_extern void _sub_53CA71(CpuResourceManager *const);
void CpuResourceManager::CreateListOfResourceBlobs() // 0x53CA71
{
    mangled_assert("?CreateListOfResourceBlobs@CpuResourceManager@@AAEXXZ");
    todo("implement");
    _sub_53CA71(this);
}

_extern unsigned __int32 _sub_53D9D3(CpuResourceManager const *const);
unsigned __int32 CpuResourceManager::GetResourceBlobCount() const // 0x53D9D3
{
    mangled_assert("?GetResourceBlobCount@CpuResourceManager@@QBEIXZ");
    todo("implement");
    unsigned __int32 __result = _sub_53D9D3(this);
    return __result;
}

_extern ResourceBlob *_sub_53D9B6(CpuResourceManager *const, unsigned __int32);
ResourceBlob *CpuResourceManager::GetResourceBlobAt(unsigned __int32) // 0x53D9B6
{
    mangled_assert("?GetResourceBlobAt@CpuResourceManager@@QAEPAVResourceBlob@@I@Z");
    todo("implement");
    ResourceBlob * __result = _sub_53D9B6(this, arg);
    return __result;
}

_extern unsigned __int32 _sub_53D888(CpuResourceManager const *const);
unsigned __int32 CpuResourceManager::GetActiveBlobCount() const // 0x53D888
{
    mangled_assert("?GetActiveBlobCount@CpuResourceManager@@QBEIXZ");
    todo("implement");
    unsigned __int32 __result = _sub_53D888(this);
    return __result;
}

_extern unsigned __int32 _sub_53D86B(CpuResourceManager *const, unsigned __int32);
unsigned __int32 CpuResourceManager::GetActiveBlobAt(unsigned __int32) // 0x53D86B
{
    mangled_assert("?GetActiveBlobAt@CpuResourceManager@@QAEII@Z");
    todo("implement");
    unsigned __int32 __result = _sub_53D86B(this, arg);
    return __result;
}

_extern unsigned __int32 _sub_53D983(CpuResourceManager const *const);
unsigned __int32 CpuResourceManager::GetNumberOfIdleRefineries() const // 0x53D983
{
    mangled_assert("?GetNumberOfIdleRefineries@CpuResourceManager@@QBEIXZ");
    todo("implement");
    unsigned __int32 __result = _sub_53D983(this);
    return __result;
}

_extern unsigned __int32 _sub_53D941(CpuResourceManager const *const);
unsigned __int32 CpuResourceManager::GetNumCollecting() const // 0x53D941
{
    mangled_assert("?GetNumCollecting@CpuResourceManager@@QBEIXZ");
    todo("implement");
    unsigned __int32 __result = _sub_53D941(this);
    return __result;
}

_extern ResourceBlob *_sub_53D593(CpuResourceManager *const);
ResourceBlob *CpuResourceManager::FindNextOpenResourceBlob() // 0x53D593
{
    mangled_assert("?FindNextOpenResourceBlob@CpuResourceManager@@AAEPAVResourceBlob@@XZ");
    todo("implement");
    ResourceBlob * __result = _sub_53D593(this);
    return __result;
}

_extern void _sub_53DD1E(CpuResourceManager *const);
void CpuResourceManager::RemoveDeadRefineries() // 0x53DD1E
{
    mangled_assert("?RemoveDeadRefineries@CpuResourceManager@@AAEXXZ");
    todo("implement");
    _sub_53DD1E(this);
}

_extern void _sub_53DCE1(CpuResourceManager *const);
void CpuResourceManager::RemoveDeadCollectors() // 0x53DCE1
{
    mangled_assert("?RemoveDeadCollectors@CpuResourceManager@@AAEXXZ");
    todo("implement");
    _sub_53DCE1(this);
}

_extern void _sub_53DA34(CpuResourceManager *const);
void CpuResourceManager::HouseKeeping() // 0x53DA34
{
    mangled_assert("?HouseKeeping@CpuResourceManager@@QAEXXZ");
    todo("implement");
    _sub_53DA34(this);
}

_extern void _sub_53E0F3(CpuResourceManager *const);
void CpuResourceManager::Update() // 0x53E0F3
{
    mangled_assert("?Update@CpuResourceManager@@QAEXXZ");
    todo("implement");
    _sub_53E0F3(this);
}

_extern void _sub_53DCB8(CpuResourceManager *const);
void CpuResourceManager::RemoveAllDistantRefineries() // 0x53DCB8
{
    mangled_assert("?RemoveAllDistantRefineries@CpuResourceManager@@AAEXXZ");
    todo("implement");
    _sub_53DCB8(this);
}

_extern void _sub_53DECE(CpuResourceManager *const);
void CpuResourceManager::SortRefineriesBySpeed() // 0x53DECE
{
    mangled_assert("?SortRefineriesBySpeed@CpuResourceManager@@AAEXXZ");
    todo("implement");
    _sub_53DECE(this);
}

_extern void _sub_53E706(CpuResourceManager *const);
void CpuResourceManager::UpdateRefineries() // 0x53E706
{
    mangled_assert("?UpdateRefineries@CpuResourceManager@@AAEXXZ");
    todo("implement");
    _sub_53E706(this);
}

_extern Resource *_sub_53C77D(CpuResourceManager *const, Ship *, float &);
Resource *CpuResourceManager::ClosestResourceBeingCollected(Ship *, float &) // 0x53C77D
{
    mangled_assert("?ClosestResourceBeingCollected@CpuResourceManager@@AAEPAVResource@@PAVShip@@AAM@Z");
    todo("implement");
    Resource * __result = _sub_53C77D(this, arg, arg);
    return __result;
}

_extern void _sub_53EE08(CpuResourceManager *const, Squadron *);
void CpuResourceManager::newSquadron(Squadron *) // 0x53EE08
{
    mangled_assert("?newSquadron@CpuResourceManager@@QAEXPAVSquadron@@@Z");
    todo("implement");
    _sub_53EE08(this, arg);
}

_extern void _sub_53F0F4(CpuResourceManager *const, Squadron *);
void CpuResourceManager::removeSquadron(Squadron *) // 0x53F0F4
{
    mangled_assert("?removeSquadron@CpuResourceManager@@QAEXPAVSquadron@@@Z");
    todo("implement");
    _sub_53F0F4(this, arg);
}

_extern bool _sub_53DB80(CpuResourceManager const *const, unsigned __int32);
bool CpuResourceManager::IsSalvage(unsigned __int32) const // 0x53DB80
{
    mangled_assert("?IsSalvage@CpuResourceManager@@QBE_NI@Z");
    todo("implement");
    bool __result = _sub_53DB80(this, arg);
    return __result;
}

_extern unsigned __int32 _sub_53C86A(CpuResourceManager const *const, unsigned __int32);
unsigned __int32 CpuResourceManager::CollectorsAtBlob(unsigned __int32) const // 0x53C86A
{
    mangled_assert("?CollectorsAtBlob@CpuResourceManager@@QBEII@Z");
    todo("implement");
    unsigned __int32 __result = _sub_53C86A(this, arg);
    return __result;
}

_extern float _sub_53DBF6(CpuResourceManager *const, Squadron const &, unsigned __int32);
float CpuResourceManager::RefinerySqDistToBlob(Squadron const &, unsigned __int32) // 0x53DBF6
{
    mangled_assert("?RefinerySqDistToBlob@CpuResourceManager@@QAEMABVSquadron@@I@Z");
    todo("implement");
    float __result = _sub_53DBF6(this, arg, arg);
    return __result;
}

_extern unsigned __int32 _sub_53C830(CpuResourceManager const *const, unsigned __int32);
unsigned __int32 CpuResourceManager::CollectorCapacityOfRefineriesAtBlob(unsigned __int32) const // 0x53C830
{
    mangled_assert("?CollectorCapacityOfRefineriesAtBlob@CpuResourceManager@@QBEII@Z");
    todo("implement");
    unsigned __int32 __result = _sub_53C830(this, arg);
    return __result;
}

_extern unsigned __int32 _sub_53D4D0(CpuResourceManager *const, Resource *);
unsigned __int32 CpuResourceManager::FindBlobFromResource(Resource *) // 0x53D4D0
{
    mangled_assert("?FindBlobFromResource@CpuResourceManager@@AAEIPAVResource@@@Z");
    todo("implement");
    unsigned __int32 __result = _sub_53D4D0(this, arg);
    return __result;
}

_extern unsigned __int32 _sub_53D52F(CpuResourceManager *const, unsigned __int32);
unsigned __int32 CpuResourceManager::FindBlobFromResourceID(unsigned __int32) // 0x53D52F
{
    mangled_assert("?FindBlobFromResourceID@CpuResourceManager@@AAEII@Z");
    todo("implement");
    unsigned __int32 __result = _sub_53D52F(this, arg);
    return __result;
}

_extern void _sub_53C8F8(CpuResourceManager *const);
void CpuResourceManager::CreateActiveBlobList() // 0x53C8F8
{
    mangled_assert("?CreateActiveBlobList@CpuResourceManager@@QAEXXZ");
    todo("implement");
    _sub_53C8F8(this);
}

_extern unsigned __int32 _sub_53DBB3(CpuResourceManager const *const, unsigned __int32);
unsigned __int32 CpuResourceManager::RUsAtBlob(unsigned __int32) const // 0x53DBB3
{
    mangled_assert("?RUsAtBlob@CpuResourceManager@@QBEII@Z");
    todo("implement");
    unsigned __int32 __result = _sub_53DBB3(this, arg);
    return __result;
}

_extern float _sub_53CAC5(CpuResourceManager *const, float);
float CpuResourceManager::Debug_ActiveBlobs(float) // 0x53CAC5
{
    mangled_assert("?Debug_ActiveBlobs@CpuResourceManager@@AAEMM@Z");
    todo("implement");
    float __result = _sub_53CAC5(this, arg);
    return __result;
}

_extern float _sub_53CABD(CpuResourceManager *const, float);
float CpuResourceManager::DebugOverview(float) // 0x53CABD
{
    mangled_assert("?DebugOverview@CpuResourceManager@@QAEMM@Z");
    todo("implement");
    float __result = _sub_53CABD(this, arg);
    return __result;
}

_extern void _sub_53CAC2(CpuResourceManager *const, float);
void CpuResourceManager::DebugStats(float) // 0x53CAC2
{
    mangled_assert("?DebugStats@CpuResourceManager@@QAEXM@Z");
    todo("implement");
    _sub_53CAC2(this, arg);
}

_extern void _sub_53CABC(CpuResourceManager *const);
void CpuResourceManager::Debug() // 0x53CABC
{
    mangled_assert("?Debug@CpuResourceManager@@QAEXXZ");
    todo("implement");
    _sub_53CABC(this);
}

_extern _sub_53BAAF(CpuController *const, Squadron &, CpuCommon *);
CpuController::CpuController(Squadron &, CpuCommon *) // 0x53BAAF
{
    mangled_assert("??0CpuController@@QAE@AAVSquadron@@PAVCpuCommon@@@Z");
    todo("implement");
    _sub_53BAAF(this, arg, arg);
}

_extern _sub_53BACE(CpuController *const, CpuCommon *, SaveGameData *);
CpuController::CpuController(CpuCommon *, SaveGameData *) // 0x53BACE
{
    mangled_assert("??0CpuController@@QAE@PAVCpuCommon@@PAVSaveGameData@@@Z");
    todo("implement");
    _sub_53BACE(this, arg, arg);
}

_extern void _sub_53F23B(CpuController *const, SaveGameData *, SaveType);
void CpuController::save(SaveGameData *, SaveType) // 0x53F23B
{
    mangled_assert("?save@CpuController@@UAEXPAVSaveGameData@@W4SaveType@@@Z");
    todo("implement");
    _sub_53F23B(this, arg, arg);
}

_extern Squadron *_sub_53D9EC(CpuController const *const);
Squadron *CpuController::GetSquadronPtr() const // 0x53D9EC
{
    mangled_assert("?GetSquadronPtr@CpuController@@QBEPAVSquadron@@XZ");
    todo("implement");
    Squadron * __result = _sub_53D9EC(this);
    return __result;
}

_extern _sub_53BA6C(CollectorSM *const, CpuCommon *, SaveGameData *);
CollectorSM::CollectorSM(CpuCommon *, SaveGameData *) // 0x53BA6C
{
    mangled_assert("??0CollectorSM@@QAE@PAVCpuCommon@@PAVSaveGameData@@@Z");
    todo("implement");
    _sub_53BA6C(this, arg, arg);
}

_extern _sub_53BA32(CollectorSM *const, Squadron &, CpuCommon *);
CollectorSM::CollectorSM(Squadron &, CpuCommon *) // 0x53BA32
{
    mangled_assert("??0CollectorSM@@QAE@AAVSquadron@@PAVCpuCommon@@@Z");
    todo("implement");
    _sub_53BA32(this, arg, arg);
}

_extern void _sub_53F201(CollectorSM *const, SaveGameData *, SaveType);
void CollectorSM::save(SaveGameData *, SaveType) // 0x53F201
{
    mangled_assert("?save@CollectorSM@@UAEXPAVSaveGameData@@W4SaveType@@@Z");
    todo("implement");
    _sub_53F201(this, arg, arg);
}

_extern bool _sub_53DF1F(CollectorSM *const);
bool CollectorSM::Update() // 0x53DF1F
{
    mangled_assert("?Update@CollectorSM@@UAE_NXZ");
    todo("implement");
    bool __result = _sub_53DF1F(this);
    return __result;
}

_extern void _sub_53DDF9(CollectorSM *const);
void CollectorSM::SetIdle() // 0x53DDF9
{
    mangled_assert("?SetIdle@CollectorSM@@QAEXXZ");
    todo("implement");
    _sub_53DDF9(this);
}

_extern _sub_53BC91(RefinerySM *const, CpuCommon *, SaveGameData *);
RefinerySM::RefinerySM(CpuCommon *, SaveGameData *) // 0x53BC91
{
    mangled_assert("??0RefinerySM@@QAE@PAVCpuCommon@@PAVSaveGameData@@@Z");
    todo("implement");
    _sub_53BC91(this, arg, arg);
}

_extern void _sub_53BCEC(LuaBinding::ObjInternal0<unsigned int,LuaBinding::Functor0MemberConst<unsigned int,CpuResourceManager> > *const);
_inline LuaBinding::ObjInternal0<unsigned int,LuaBinding::Functor0MemberConst<unsigned int,CpuResourceManager> >::~ObjInternal0<unsigned int,LuaBinding::Functor0MemberConst<unsigned int,CpuResourceManager> >() // 0x53BCEC
{
    mangled_assert("??1?$ObjInternal0@IV?$Functor0MemberConst@IVCpuResourceManager@@@LuaBinding@@@LuaBinding@@UAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_53BCEC(this);
}

_extern void _sub_53BCF2(LuaBinding::ObjInternal1<unsigned int,unsigned int,LuaBinding::Functor1MemberConst<unsigned int,unsigned int,CpuResourceManager> > *const);
_inline LuaBinding::ObjInternal1<unsigned int,unsigned int,LuaBinding::Functor1MemberConst<unsigned int,unsigned int,CpuResourceManager> >::~ObjInternal1<unsigned int,unsigned int,LuaBinding::Functor1MemberConst<unsigned int,unsigned int,CpuResourceManager> >() // 0x53BCF2
{
    mangled_assert("??1?$ObjInternal1@IIV?$Functor1MemberConst@IIVCpuResourceManager@@@LuaBinding@@@LuaBinding@@UAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_53BCF2(this);
}

_extern void _sub_53BCF8(LuaBinding::ObjInternal1<unsigned int,unsigned int,LuaBinding::Functor1MemberNonConst<unsigned int,unsigned int,CpuResourceManager> > *const);
_inline LuaBinding::ObjInternal1<unsigned int,unsigned int,LuaBinding::Functor1MemberNonConst<unsigned int,unsigned int,CpuResourceManager> >::~ObjInternal1<unsigned int,unsigned int,LuaBinding::Functor1MemberNonConst<unsigned int,unsigned int,CpuResourceManager> >() // 0x53BCF8
{
    mangled_assert("??1?$ObjInternal1@IIV?$Functor1MemberNonConst@IIVCpuResourceManager@@@LuaBinding@@@LuaBinding@@UAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_53BCF8(this);
}

_extern void _sub_53BCFE(LuaBinding::ObjInternal1<unsigned int,bool,LuaBinding::Functor1MemberConst<unsigned int,bool,CpuResourceManager> > *const);
_inline LuaBinding::ObjInternal1<unsigned int,bool,LuaBinding::Functor1MemberConst<unsigned int,bool,CpuResourceManager> >::~ObjInternal1<unsigned int,bool,LuaBinding::Functor1MemberConst<unsigned int,bool,CpuResourceManager> >() // 0x53BCFE
{
    mangled_assert("??1?$ObjInternal1@I_NV?$Functor1MemberConst@I_NVCpuResourceManager@@@LuaBinding@@@LuaBinding@@UAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_53BCFE(this);
}

_extern void _sub_53BD04(LuaBinding::ObjInternal1<char const *,void,LuaBinding::Functor1MemberNonConst<char const *,void,CpuResourceManager> > *const);
_inline LuaBinding::ObjInternal1<char const *,void,LuaBinding::Functor1MemberNonConst<char const *,void,CpuResourceManager> >::~ObjInternal1<char const *,void,LuaBinding::Functor1MemberNonConst<char const *,void,CpuResourceManager> >() // 0x53BD04
{
    mangled_assert("??1?$ObjInternal1@PBDXV?$Functor1MemberNonConst@PBDXVCpuResourceManager@@@LuaBinding@@@LuaBinding@@UAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_53BD04(this);
}

_extern _sub_53BB7B(RefinerySM *const, Squadron &, CpuCommon *, bool);
RefinerySM::RefinerySM(Squadron &, CpuCommon *, bool) // 0x53BB7B
{
    mangled_assert("??0RefinerySM@@QAE@AAVSquadron@@PAVCpuCommon@@_N@Z");
    todo("implement");
    _sub_53BB7B(this, arg, arg, arg);
}

_extern void _sub_53F282(RefinerySM *const, SaveGameData *, SaveType);
void RefinerySM::save(SaveGameData *, SaveType) // 0x53F282
{
    mangled_assert("?save@RefinerySM@@UAEXPAVSaveGameData@@W4SaveType@@@Z");
    todo("implement");
    _sub_53F282(this, arg, arg);
}

_extern bool _sub_53DB6F(RefinerySM const *const);
bool RefinerySM::IsIdle() const // 0x53DB6F
{
    mangled_assert("?IsIdle@RefinerySM@@QBE_NXZ");
    todo("implement");
    bool __result = _sub_53DB6F(this);
    return __result;
}

_extern bool _sub_53DA52(RefinerySM *const);
bool RefinerySM::InDanger() // 0x53DA52
{
    mangled_assert("?InDanger@RefinerySM@@AAE_NXZ");
    todo("implement");
    bool __result = _sub_53DA52(this);
    return __result;
}

_extern bool _sub_53DEE6(RefinerySM *const);
bool RefinerySM::SquadIdle() // 0x53DEE6
{
    mangled_assert("?SquadIdle@RefinerySM@@AAE_NXZ");
    todo("implement");
    bool __result = _sub_53DEE6(this);
    return __result;
}

_extern bool _sub_53C718(RefinerySM *const, vector3 const &);
bool RefinerySM::CanHyperspace(vector3 const &) // 0x53C718
{
    mangled_assert("?CanHyperspace@RefinerySM@@AAE_NABVvector3@@@Z");
    todo("implement");
    bool __result = _sub_53C718(this, arg);
    return __result;
}

_extern bool _sub_53E135(RefinerySM *const);
bool RefinerySM::Update() // 0x53E135
{
    mangled_assert("?Update@RefinerySM@@UAE_NXZ");
    todo("implement");
    bool __result = _sub_53E135(this);
    return __result;
}

_extern void _sub_53DE78(RefinerySM *const);
void RefinerySM::SetIdle() // 0x53DE78
{
    mangled_assert("?SetIdle@RefinerySM@@QAEXXZ");
    todo("implement");
    _sub_53DE78(this);
}

_extern bool _sub_53DB21(RefinerySM const *const);
bool RefinerySM::IsFarFromBlob() const // 0x53DB21
{
    mangled_assert("?IsFarFromBlob@RefinerySM@@QBE_NXZ");
    todo("implement");
    bool __result = _sub_53DB21(this);
    return __result;
}

_extern void _sub_53DD5B(RefinerySM *const, ResourceBlob *);
void RefinerySM::SendRefineryToBlob(ResourceBlob *) // 0x53DD5B
{
    mangled_assert("?SendRefineryToBlob@RefinerySM@@AAEXPAVResourceBlob@@@Z");
    todo("implement");
    _sub_53DD5B(this, arg);
}

_extern unsigned __int32 _sub_53CC60(CpuResourceManager *const, unsigned __int32, Squadron const &);
unsigned __int32 CpuResourceManager::FindBestBlobForRefinery(unsigned __int32, Squadron const &) // 0x53CC60
{
    mangled_assert("?FindBestBlobForRefinery@CpuResourceManager@@QAEIIABVSquadron@@@Z");
    todo("implement");
    unsigned __int32 __result = _sub_53CC60(this, arg, arg);
    return __result;
}

_extern bool _sub_53BF1D(SortRefineries const *const, Squadron const *, Squadron const *);
_inline bool SortRefineries::operator()(Squadron const *, Squadron const *) const // 0x53BF1D
{
    mangled_assert("??RSortRefineries@@QBE_NPBVSquadron@@0@Z");
    todo("implement");
    bool __result = _sub_53BF1D(this, arg, arg);
    return __result;
}

_extern void _sub_53CE49(RefinerySM *const, vector3 const &, ResourceBlob *, vector3 &);
void RefinerySM::FindBestDropOffPosition(vector3 const &, ResourceBlob *, vector3 &) // 0x53CE49
{
    mangled_assert("?FindBestDropOffPosition@RefinerySM@@QAEXABVvector3@@PAVResourceBlob@@AAV2@@Z");
    todo("implement");
    _sub_53CE49(this, arg, arg, arg);
}

_extern bool _sub_53D6AA(CpuResourceManager *const, ResourceBlob *, ResourceBlob *, vector3 const &);
bool CpuResourceManager::FirstResBlobCloserThanSecond(ResourceBlob *, ResourceBlob *, vector3 const &) // 0x53D6AA
{
    mangled_assert("?FirstResBlobCloserThanSecond@CpuResourceManager@@AAE_NPAVResourceBlob@@0ABVvector3@@@Z");
    todo("implement");
    bool __result = _sub_53D6AA(this, arg, arg, arg);
    return __result;
}

_extern bool _sub_53D7A7(CpuResourceManager *const, ResourceBlob *, ResourceBlob *, vector3 const &);
bool CpuResourceManager::FirstResBlobSaferThanSecond(ResourceBlob *, ResourceBlob *, vector3 const &) // 0x53D7A7
{
    mangled_assert("?FirstResBlobSaferThanSecond@CpuResourceManager@@AAE_NPAVResourceBlob@@0ABVvector3@@@Z");
    todo("implement");
    bool __result = _sub_53D7A7(this, arg, arg, arg);
    return __result;
}

_extern bool _sub_53D66A(CpuResourceManager *const, ResourceBlob *, ResourceBlob *, vector3 const &);
bool CpuResourceManager::FirstResBlobBetterThanSecond(ResourceBlob *, ResourceBlob *, vector3 const &) // 0x53D66A
{
    mangled_assert("?FirstResBlobBetterThanSecond@CpuResourceManager@@AAE_NPAVResourceBlob@@0ABVvector3@@@Z");
    todo("implement");
    bool __result = _sub_53D66A(this, arg, arg, arg);
    return __result;
}

_extern unsigned __int32 _sub_53CDC4(CpuResourceManager *const, vector3 const &);
unsigned __int32 CpuResourceManager::FindBestBlobToResourceFrom(vector3 const &) // 0x53CDC4
{
    mangled_assert("?FindBestBlobToResourceFrom@CpuResourceManager@@QAEIABVvector3@@@Z");
    todo("implement");
    unsigned __int32 __result = _sub_53CDC4(this, arg);
    return __result;
}

_extern Squadron *_sub_53D3AF(CpuResourceManager *const, unsigned __int32);
Squadron *CpuResourceManager::FindBestPlaceToBuildRefinery(unsigned __int32) // 0x53D3AF
{
    mangled_assert("?FindBestPlaceToBuildRefinery@CpuResourceManager@@QAEPAVSquadron@@I@Z");
    todo("implement");
    Squadron * __result = _sub_53D3AF(this, arg);
    return __result;
}

_extern Squadron *_sub_53D28E(CpuResourceManager *const, unsigned __int32);
Squadron *CpuResourceManager::FindBestPlaceToBuildCollector(unsigned __int32) // 0x53D28E
{
    mangled_assert("?FindBestPlaceToBuildCollector@CpuResourceManager@@QAEPAVSquadron@@I@Z");
    todo("implement");
    Squadron * __result = _sub_53D28E(this, arg);
    return __result;
}

_extern void _sub_53E6E8(CpuResourceManager *const);
void CpuResourceManager::UpdateBlobs() // 0x53E6E8
{
    mangled_assert("?UpdateBlobs@CpuResourceManager@@AAEXXZ");
    todo("implement");
    _sub_53E6E8(this);
}

_extern void _sub_53C481(CpuResourceManager *const);
void CpuResourceManager::CalculateBlobThreatLevels() // 0x53C481
{
    mangled_assert("?CalculateBlobThreatLevels@CpuResourceManager@@AAEXXZ");
    todo("implement");
    _sub_53C481(this);
}

_extern float _sub_53D89A(CpuResourceManager *const, CpuBlob const *, ResourceBlob *);
float CpuResourceManager::GetModifierForBlob(CpuBlob const *, ResourceBlob *) // 0x53D89A
{
    mangled_assert("?GetModifierForBlob@CpuResourceManager@@AAEMPBVCpuBlob@@PAVResourceBlob@@@Z");
    todo("implement");
    float __result = _sub_53D89A(this, arg, arg);
    return __result;
}

_extern void _sub_53C40C(CpuResourceManager *const);
void CpuResourceManager::CalculateBlobFreeSpaces() // 0x53C40C
{
    mangled_assert("?CalculateBlobFreeSpaces@CpuResourceManager@@AAEXXZ");
    todo("implement");
    _sub_53C40C(this);
}

_extern void _sub_53E66A(CpuResourceManager *const);
void CpuResourceManager::UpdateBlobDefenses() // 0x53E66A
{
    mangled_assert("?UpdateBlobDefenses@CpuResourceManager@@AAEXXZ");
    todo("implement");
    _sub_53E66A(this);
}

_extern void _sub_53E57C(CpuResourceManager *const);
void CpuResourceManager::UpdateBlobAttacks() // 0x53E57C
{
    mangled_assert("?UpdateBlobAttacks@CpuResourceManager@@AAEXXZ");
    todo("implement");
    _sub_53E57C(this);
}

_extern void _sub_53EFFD(CpuResourceManager *const, vector3 const &, float const);
void CpuResourceManager::removeBlobsInSphere(vector3 const &, float const) // 0x53EFFD
{
    mangled_assert("?removeBlobsInSphere@CpuResourceManager@@QAEXABVvector3@@M@Z");
    todo("implement");
    _sub_53EFFD(this, arg, arg);
}

_extern void _sub_53EF06(CpuResourceManager *const);
void CpuResourceManager::postRestore() // 0x53EF06
{
    mangled_assert("?postRestore@CpuResourceManager@@UAEXXZ");
    todo("implement");
    _sub_53EF06(this);
}

_extern void _sub_53A1B9(void *, SaveGameData *, SaveType);
void CpuResourceManager::saveStateMachines(void *objectPtr, SaveGameData *saveGameData, SaveType savetype) // 0x53A1B9
{
    mangled_assert("?saveStateMachines@CpuResourceManager@@SGXPAXPAVSaveGameData@@W4SaveType@@@Z");
    todo("implement");
    _sub_53A1B9(objectPtr, saveGameData, savetype);
}

_extern void _sub_53A259(void *, SaveGameData *);
void CpuResourceManager::loadStateMachines(void *objectPtr, SaveGameData *saveGameData) // 0x53A259
{
    mangled_assert("?loadStateMachines@CpuResourceManager@@SGXPAXPAVSaveGameData@@@Z");
    todo("implement");
    _sub_53A259(objectPtr, saveGameData);
}

_extern bool _sub_53F1C3(CpuResourceManager *const, SaveGameData *);
bool CpuResourceManager::restore(SaveGameData *) // 0x53F1C3
{
    mangled_assert("?restore@CpuResourceManager@@UAE_NPAVSaveGameData@@@Z");
    todo("implement");
    bool __result = _sub_53F1C3(this, arg);
    return __result;
}

_extern bool _sub_53F24D(CpuResourceManager *const, SaveGameData *, SaveType);
bool CpuResourceManager::save(SaveGameData *, SaveType) // 0x53F24D
{
    mangled_assert("?save@CpuResourceManager@@UAE_NPAVSaveGameData@@W4SaveType@@@Z");
    todo("implement");
    bool __result = _sub_53F24D(this, arg, arg);
    return __result;
}

/* ---------- private code */
#endif
