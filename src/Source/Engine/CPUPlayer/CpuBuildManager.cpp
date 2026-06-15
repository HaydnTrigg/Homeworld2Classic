#if 0
/* ---------- headers */

#include "decomp.h"
#include <assist\stlexsmallvector.h>
#include <xstring>
#include <Collision\Primitives\aabb.h>
#include <xmemory0>
#include <ship.h>
#include <Mathlib\matrix4.h>
#include <pch.h>
#include <SobWithMesh.h>
#include <playerresourcetype.h>
#include <ShipQuery.h>
#include <SobRigidBody.h>
#include <sob.h>
#include <sobstatic.h>
#include <Collision\Primitives\sphere.h>
#include <SOBGroupManager.h>
#include <SoundManager\SoundEntityHandle.h>
#include <Mathlib\matrix3.h>
#include <BuildJobType.h>
#include <xfunctional>
#include <new>
#include <exception>
#include <Modifiers\ModifierUIInfo.h>
#include <xstddef>
#include <Modifiers\ModifierMultiplier.h>
#include <type_traits>
#include <Modifiers\ModifierEffect.h>
#include <BuildData.h>
#include <CPUPlayer\CpuResourceManager.h>
#include <DependencyData.h>
#include <SquadronList.h>
#include <SelTarg.h>
#include <xutility>
#include <prim.h>
#include <utility>
#include <iosfwd>
#include <vector>
#include <fileio\bytestream.h>
#include <Modifiers\ModifierApplier.h>
#include <xmemory>
#include <fileio\fileioexports.h>
#include <CPUPlayer\CpuDemand.h>
#include <Subsystems\Subsystem.h>
#include <gameRandom.h>
#include <random.h>
#include <Collision\Primitives\capsule.h>
#include <Subsystems\SubsystemStatic.h>
#include <platform\osdef.h>
#include <Collision\Primitives\segment.h>
#include <BuildQueue.h>
#include <weaponstaticinfo.h>
#include <Collision\Primitives\obb.h>
#include <Collision\BVH\profiling.h>
#include <GunBinding.h>
#include <list>
#include <ParadeCommand.h>
#include <commandtype.h>
#include <App\Hw2Identify.h>
#include <OrderFeedback.h>
#include <assist\fixedstring.h>
#include <Render\objects\debugrender.h>
#include <Render\objects\core.h>
#include <Mathlib\vector3.h>
#include <Render\objects\objects.h>
#include <Mathlib\vector4.h>
#include <Render\gl\types.h>
#include <Mathlib\matvec.h>
#include <map>
#include <Race.h>
#include <xtree>
#include <abilities.h>
#include <boost\scoped_ptr.hpp>
#include <CPUPlayer\CpuClassifier.h>
#include <WeaponClassSpecificInfo.h>
#include <Render\gl\lotypes.h>
#include <Mathlib\vector2.h>
#include <util\types.h>
#include <BuildManager.h>
#include <Universe.h>
#include <MultiplierContainer.h>
#include <visibility.h>
#include <Waypoint.h>
#include <Render\gl\r_types.h>
#include <MultiplierTypes.h>
#include <Collision\BVH\bvh.h>
#include <SobUnmoveable.h>
#include <boost\cstdint.hpp>
#include <orders.h>
#include <orders_base.h>
#include <Mathlib\quat.h>
#include <gamemsg.h>
#include <BuildJob.h>
#include <HyperspaceManager.h>
#include <Modifiers\ModifierAbility.h>
#include <seInterface2\PatchID.h>
#include <seInterface2\PatchBase.h>
#include <seInterface2\SoundParams.h>
#include <DynamicPoint.h>
#include <Mathlib\mathlibdll.h>
#include <Modifiers\ModifierTargetCache.h>
#include <Mathlib\fastmath.h>
#include <TeamColourRegistry.h>
#include <savegame.h>
#include <Render\gl\r_defines.h>
#include <task.h>
#include <Render\gl\glext.h>
#include <stack>
#include <Player.h>
#include <pathpoints.h>
#include <ResearchManager.h>
#include <debug\db.h>
#include <SobWithMeshStatic.h>
#include <fixedpoint.h>
#include <deque>
#include <util\fixed.h>
#include <SobRigidBodyStatic.h>
#include <boost\shared_ptr.hpp>
#include <util\colour.h>
#include <sobtypes.h>
#include <boost\throw_exception.hpp>
#include <MeshAnimation.h>
#include <selection.h>
#include <ShieldTypes.h>
#include <savegamedef.h>
#include <SimProxy.h>
#include <boost\detail\shared_count.hpp>
#include <GameEventSys.h>
#include <CPUPlayer\CpuCommon.h>
#include <dbdefines.h>
#include <CPUPlayer\CpuTarget.h>
#include <boost\detail\lwm_win32.hpp>
#include <UnitCaps\UnitCaps.h>
#include <Squadron.h>
#include <command.h>
#include <sobid.h>
#include <Subsystems\HardPointManager.h>
#include <FamilyListMgr.h>
#include <Subsystems\HardPoint.h>
#include <FamilyList.h>
#include <Collision\BVH\octree.h>
#include <Subsystems\HardPointStatic.h>
#include <Family.h>
#include <Collision\BVH\span.h>
#include <Subsystems\SubSystemType.h>
#include <GameObj.h>
#include <Collision\BVH\Internal\span_i.h>
#include <config.h>
#include <Collision\BVH\proxy.h>
#include <fileio\logfile.h>
#include <Collision\intersect.h>
#include <Collision\primitivesfwd.h>
#include <util\statmonitor.h>
#include <CPUPlayer\CpuBuildManager.h>
#include <util\utilexports.h>
#include <luaconfig\luabinding.h>
#include <wchar.h>
#include <platform\timer.h>
#include <string>
#include <luaconfig\luaconfig.h>
#include <platform\platformexports.h>
#include <lua.h>
#include <queue>
#include <Parade.h>
#include <algorithm>
#include <hash_map>
#include <xhash>
#include <Interpolation.h>
#include <weaponinfo.h>

/* ---------- constants */

/* ---------- definitions */

struct BuildSquadronScore
{
    BuildSquadronScore();
    Squadron *m_pBestSquadron; // 0x0
    float m_bestScore; // 0x4
};
static_assert(sizeof(BuildSquadronScore) == 8, "Invalid BuildSquadronScore size");

struct BuildCollectorScore :
    public BuildSquadronScore
{
    BuildCollectorScore();
    float operator()(Squadron *);
};
static_assert(sizeof(BuildCollectorScore) == 8, "Invalid BuildCollectorScore size");

class BuildFilter
{
public:
    _inline BuildFilter(CpuBuildManager *);
    _inline bool Check(unsigned __int32);
    CpuBuildManager *buildMgr; // 0x0
};
static_assert(sizeof(BuildFilter) == 4, "Invalid BuildFilter size");

class BuildSSFilter
{
public:
    _inline BuildSSFilter(CpuBuildManager *);
    _inline bool Check(unsigned __int32);
    CpuBuildManager *buildMgr; // 0x0
};
static_assert(sizeof(BuildSSFilter) == 4, "Invalid BuildSSFilter size");

/* ---------- prototypes */


_static bool IsBuilderSquadronValid(Squadron *pSquadron, unsigned __int32 unitId);
_static bool IsBuilderSquadronValid_SubSystem(Squadron *pSquadron, unsigned __int32 genericSubSystemTypeId);
_static void Debug_AppendSubSysNames(char *buf, Squadron *pSquadron);

/* ---------- globals */

/* ---------- private variables */

/* ---------- public code */

CpuBuildManager::CpuBuildManager(CpuCommon &) // 0x528EC9
{
    mangled_assert("??0CpuBuildManager@@QAE@AAVCpuCommon@@@Z");
    todo("implement");
}

_inline LuaBinding::ObjInternal0<unsigned int,LuaBinding::Functor0MemberConst<unsigned int,CpuBuildManager> >::~ObjInternal0<unsigned int,LuaBinding::Functor0MemberConst<unsigned int,CpuBuildManager> >() // 0x52900B
{
    mangled_assert("??1?$ObjInternal0@IV?$Functor0MemberConst@IVCpuBuildManager@@@LuaBinding@@@LuaBinding@@UAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline LuaBinding::ObjInternal0<float,LuaBinding::Functor0MemberNonConst<float,CpuBuildManager> >::~ObjInternal0<float,LuaBinding::Functor0MemberNonConst<float,CpuBuildManager> >() // 0x529011
{
    mangled_assert("??1?$ObjInternal0@MV?$Functor0MemberNonConst@MVCpuBuildManager@@@LuaBinding@@@LuaBinding@@UAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline LuaBinding::ObjInternal0<double,LuaBinding::Functor0MemberNonConst<double,CpuBuildManager> >::~ObjInternal0<double,LuaBinding::Functor0MemberNonConst<double,CpuBuildManager> >() // 0x529017
{
    mangled_assert("??1?$ObjInternal0@NV?$Functor0MemberNonConst@NVCpuBuildManager@@@LuaBinding@@@LuaBinding@@UAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline LuaBinding::ObjInternal0<void,LuaBinding::Functor0MemberNonConst<void,CpuBuildManager> >::~ObjInternal0<void,LuaBinding::Functor0MemberNonConst<void,CpuBuildManager> >() // 0x52901D
{
    mangled_assert("??1?$ObjInternal0@XV?$Functor0MemberNonConst@XVCpuBuildManager@@@LuaBinding@@@LuaBinding@@UAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline LuaBinding::ObjInternal0<bool,LuaBinding::Functor0MemberConst<bool,CpuBuildManager> >::~ObjInternal0<bool,LuaBinding::Functor0MemberConst<bool,CpuBuildManager> >() // 0x529023
{
    mangled_assert("??1?$ObjInternal0@_NV?$Functor0MemberConst@_NVCpuBuildManager@@@LuaBinding@@@LuaBinding@@UAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline LuaBinding::ObjInternal1<int,int,LuaBinding::Functor1MemberConst<int,int,CpuBuildManager> >::~ObjInternal1<int,int,LuaBinding::Functor1MemberConst<int,int,CpuBuildManager> >() // 0x529029
{
    mangled_assert("??1?$ObjInternal1@HHV?$Functor1MemberConst@HHVCpuBuildManager@@@LuaBinding@@@LuaBinding@@UAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline LuaBinding::ObjInternal1<unsigned int,unsigned int,LuaBinding::Functor1MemberConst<unsigned int,unsigned int,CpuBuildManager> >::~ObjInternal1<unsigned int,unsigned int,LuaBinding::Functor1MemberConst<unsigned int,unsigned int,CpuBuildManager> >() // 0x52902F
{
    mangled_assert("??1?$ObjInternal1@IIV?$Functor1MemberConst@IIVCpuBuildManager@@@LuaBinding@@@LuaBinding@@UAE@XZ");
    compiler_generated();
    todo("implement");
}

CpuBuildManager::~CpuBuildManager() // 0x5290AB
{
    mangled_assert("??1CpuBuildManager@@QAE@XZ");
    todo("implement");
}

_inline LuaBinding::ObjInternal1<unsigned int,float,LuaBinding::Functor1MemberNonConst<unsigned int,float,CpuBuildManager> >::~ObjInternal1<unsigned int,float,LuaBinding::Functor1MemberNonConst<unsigned int,float,CpuBuildManager> >() // 0x529035
{
    mangled_assert("??1?$ObjInternal1@IMV?$Functor1MemberNonConst@IMVCpuBuildManager@@@LuaBinding@@@LuaBinding@@UAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline DemandSys::~DemandSys() // 0x5290D1
{
    mangled_assert("??1DemandSys@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline LuaBinding::ObjInternal1<unsigned int,bool,LuaBinding::Functor1MemberNonConst<unsigned int,bool,CpuBuildManager> >::~ObjInternal1<unsigned int,bool,LuaBinding::Functor1MemberNonConst<unsigned int,bool,CpuBuildManager> >() // 0x52903B
{
    mangled_assert("??1?$ObjInternal1@I_NV?$Functor1MemberNonConst@I_NVCpuBuildManager@@@LuaBinding@@@LuaBinding@@UAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline SobOrderBase::~SobOrderBase() // 0x5290E0
{
    mangled_assert("??1SobOrderBase@@UAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline LuaBinding::ObjInternal1<char const *,int,LuaBinding::Functor1MemberConst<char const *,int,CpuBuildManager> >::~ObjInternal1<char const *,int,LuaBinding::Functor1MemberConst<char const *,int,CpuBuildManager> >() // 0x529041
{
    mangled_assert("??1?$ObjInternal1@PBDHV?$Functor1MemberConst@PBDHVCpuBuildManager@@@LuaBinding@@@LuaBinding@@UAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline LuaBinding::ObjInternal2<unsigned int,unsigned int,void,LuaBinding::Functor2MemberNonConst<unsigned int,unsigned int,void,CpuBuildManager> >::~ObjInternal2<unsigned int,unsigned int,void,LuaBinding::Functor2MemberNonConst<unsigned int,unsigned int,void,CpuBuildManager> >() // 0x529047
{
    mangled_assert("??1?$ObjInternal2@IIXV?$Functor2MemberNonConst@IIXVCpuBuildManager@@@LuaBinding@@@LuaBinding@@UAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline LuaBinding::ObjInternal2<unsigned int,unsigned int,bool,LuaBinding::Functor2MemberConst<unsigned int,unsigned int,bool,CpuBuildManager> >::~ObjInternal2<unsigned int,unsigned int,bool,LuaBinding::Functor2MemberConst<unsigned int,unsigned int,bool,CpuBuildManager> >() // 0x52904D
{
    mangled_assert("??1?$ObjInternal2@II_NV?$Functor2MemberConst@II_NVCpuBuildManager@@@LuaBinding@@@LuaBinding@@UAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline LuaBinding::ObjInternal2<unsigned int,unsigned int,bool,LuaBinding::Functor2MemberNonConst<unsigned int,unsigned int,bool,CpuBuildManager> >::~ObjInternal2<unsigned int,unsigned int,bool,LuaBinding::Functor2MemberNonConst<unsigned int,unsigned int,bool,CpuBuildManager> >() // 0x529053
{
    mangled_assert("??1?$ObjInternal2@II_NV?$Functor2MemberNonConst@II_NVCpuBuildManager@@@LuaBinding@@@LuaBinding@@UAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline LuaBinding::ObjInternal2<unsigned int,float,void,LuaBinding::Functor2MemberNonConst<unsigned int,float,void,CpuBuildManager> >::~ObjInternal2<unsigned int,float,void,LuaBinding::Functor2MemberNonConst<unsigned int,float,void,CpuBuildManager> >() // 0x529059
{
    mangled_assert("??1?$ObjInternal2@IMXV?$Functor2MemberNonConst@IMXVCpuBuildManager@@@LuaBinding@@@LuaBinding@@UAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline BuildOrder::~BuildOrder() // 0x529064
{
    mangled_assert("??1BuildOrder@@UAE@XZ");
    compiler_generated();
    todo("implement");
}

void CpuBuildManager::BindToLua(LuaConfig &lc) // 0x5295C1
{
    mangled_assert("?BindToLua@CpuBuildManager@@AAEXAAVLuaConfig@@@Z");
    todo("implement");
}

Squadron *CpuBuildManager::FindBestSquadronForBuild(unsigned __int32) // 0x52B723
{
    mangled_assert("?FindBestSquadronForBuild@CpuBuildManager@@AAEPAVSquadron@@I@Z");
    todo("implement");
}

Squadron *CpuBuildManager::FindBestSquadronForBuildingSubSystem(unsigned __int32) // 0x52B774
{
    mangled_assert("?FindBestSquadronForBuildingSubSystem@CpuBuildManager@@AAEPAVSquadron@@I@Z");
    todo("implement");
}

bool CpuBuildManager::CanBuildEver(unsigned __int32) // 0x52A96B
{
    mangled_assert("?CanBuildEver@CpuBuildManager@@QAE_NI@Z");
    todo("implement");
}

bool CpuBuildManager::CanBuildSubSystemEver(unsigned __int32) // 0x52A9BE
{
    mangled_assert("?CanBuildSubSystemEver@CpuBuildManager@@QAE_NI@Z");
    todo("implement");
}

Squadron *CpuBuildManager::FindAnySquadronForBuild(unsigned __int32) // 0x52B6D7
{
    mangled_assert("?FindAnySquadronForBuild@CpuBuildManager@@AAEPAVSquadron@@I@Z");
    todo("implement");
}

Squadron *CpuBuildManager::FindAnySquadronForBuildingSubSystem(unsigned __int32) // 0x52B6FD
{
    mangled_assert("?FindAnySquadronForBuildingSubSystem@CpuBuildManager@@AAEPAVSquadron@@I@Z");
    todo("implement");
}

void CpuBuildManager::RemoveStalledBuildItems() // 0x52BB11
{
    mangled_assert("?RemoveStalledBuildItems@CpuBuildManager@@QAEXXZ");
    todo("implement");
}

bool CpuBuildManager::Build(unsigned __int32) // 0x52A4A2
{
    mangled_assert("?Build@CpuBuildManager@@QAE_NI@Z");
    todo("implement");
}

bool CpuBuildManager::BuildSubSystem(unsigned __int32) // 0x52A6C9
{
    mangled_assert("?BuildSubSystem@CpuBuildManager@@QAE_NI@Z");
    todo("implement");
}

bool CpuBuildManager::CancelBuild(unsigned __int32) // 0x52A9ED
{
    mangled_assert("?CancelBuild@CpuBuildManager@@QAE_NI@Z");
    todo("implement");
}

bool CpuBuildManager::CanBuild(unsigned __int32) // 0x52A921
{
    mangled_assert("?CanBuild@CpuBuildManager@@QAE_NI@Z");
    todo("implement");
}

bool CpuBuildManager::CanBuildSubSystem(unsigned __int32) // 0x52A99A
{
    mangled_assert("?CanBuildSubSystem@CpuBuildManager@@QAE_NI@Z");
    todo("implement");
}

unsigned __int32 CpuBuildManager::BuildShipCount() const // 0x52A667
{
    mangled_assert("?BuildShipCount@CpuBuildManager@@QBEIXZ");
    todo("implement");
}

unsigned __int32 CpuBuildManager::BuildShipAt(unsigned __int32) const // 0x52A5AB
{
    mangled_assert("?BuildShipAt@CpuBuildManager@@QBEII@Z");
    todo("implement");
}

unsigned __int32 CpuBuildManager::BuildShipType(unsigned __int32) const // 0x52A6AD
{
    mangled_assert("?BuildShipType@CpuBuildManager@@QBEII@Z");
    todo("implement");
}

bool CpuBuildManager::BuildShipCanBuild(unsigned __int32, unsigned __int32) const // 0x52A5CF
{
    mangled_assert("?BuildShipCanBuild@CpuBuildManager@@QBE_NII@Z");
    todo("implement");
}

bool CpuBuildManager::BuildShipHasSubSystem(unsigned __int32, unsigned __int32) const // 0x52A673
{
    mangled_assert("?BuildShipHasSubSystem@CpuBuildManager@@QBE_NII@Z");
    todo("implement");
}

bool CpuBuildManager::BuildSubSystemOnShip(unsigned __int32, unsigned __int32) // 0x52A7F0
{
    mangled_assert("?BuildSubSystemOnShip@CpuBuildManager@@QAE_NII@Z");
    todo("implement");
}

bool CpuBuildManager::IsBuildShipAvailable() const // 0x52B8C9
{
    mangled_assert("?IsBuildShipAvailable@CpuBuildManager@@QBE_NXZ");
    todo("implement");
}

unsigned __int32 CpuBuildManager::NumShipsBuilding() const // 0x52BA26
{
    mangled_assert("?NumShipsBuilding@CpuBuildManager@@QBEIXZ");
    todo("implement");
}

unsigned __int32 CpuBuildManager::NumShipsBuildingByType(unsigned __int32) const // 0x52BA6C
{
    mangled_assert("?NumShipsBuildingByType@CpuBuildManager@@ABEII@Z");
    todo("implement");
}

unsigned __int32 CpuBuildManager::NumShipsBuildingShips() const // 0x52BABD
{
    mangled_assert("?NumShipsBuildingShips@CpuBuildManager@@QBEIXZ");
    todo("implement");
}

unsigned __int32 CpuBuildManager::NumShipsBuildingSubSystems() const // 0x52BAC5
{
    mangled_assert("?NumShipsBuildingSubSystems@CpuBuildManager@@QBEIXZ");
    todo("implement");
}

bool CpuBuildManager::SubSystemActive(unsigned __int32) // 0x52BE7F
{
    mangled_assert("?SubSystemActive@CpuBuildManager@@QAE_NI@Z");
    todo("implement");
}

_inline BuildFilter::BuildFilter(CpuBuildManager *) // 0x528E63
{
    mangled_assert("??0BuildFilter@@QAE@PAVCpuBuildManager@@@Z");
    todo("implement");
}

_inline bool BuildFilter::Check(unsigned __int32) // 0x52AB12
{
    mangled_assert("?Check@BuildFilter@@QAE_NI@Z");
    todo("implement");
}

_inline BuildSSFilter::BuildSSFilter(CpuBuildManager *) // 0x528EBE
{
    mangled_assert("??0BuildSSFilter@@QAE@PAVCpuBuildManager@@@Z");
    todo("implement");
}

_inline bool BuildSSFilter::Check(unsigned __int32) // 0x52AB19
{
    mangled_assert("?Check@BuildSSFilter@@QAE_NI@Z");
    todo("implement");
}

void CpuBuildManager::ShipDemandSetByClass(unsigned __int32, float) // 0x52BE29
{
    mangled_assert("?ShipDemandSetByClass@CpuBuildManager@@QAEXIM@Z");
    todo("implement");
}

void CpuBuildManager::ShipDemandAddByClass(unsigned __int32, float) // 0x52BD3A
{
    mangled_assert("?ShipDemandAddByClass@CpuBuildManager@@QAEXIM@Z");
    todo("implement");
}

float CpuBuildManager::ShipDemandMaxByClass(unsigned __int32) // 0x52BD98
{
    mangled_assert("?ShipDemandMaxByClass@CpuBuildManager@@QAEMI@Z");
    todo("implement");
}

float CpuBuildManager::HighestPriorityShip() // 0x52B8C1
{
    mangled_assert("?HighestPriorityShip@CpuBuildManager@@QAEMXZ");
    todo("implement");
}

float CpuBuildManager::HighestPrioritySubSystem() // 0x52B8C5
{
    mangled_assert("?HighestPrioritySubSystem@CpuBuildManager@@QAEMXZ");
    todo("implement");
}

_inline void LuaBinding::ParmTraits<double>::Push(double const t, lua_State *ls) // 0x52BACD
{
    mangled_assert("?Push@?$ParmTraits@N@LuaBinding@@SGXNPAUlua_State@@@Z");
    todo("implement");
}

double CpuBuildManager::FindHighDemandShip() // 0x52B779
{
    mangled_assert("?FindHighDemandShip@CpuBuildManager@@QAENXZ");
    todo("implement");
}

double CpuBuildManager::FindHighDemandSubSystem() // 0x52B7D7
{
    mangled_assert("?FindHighDemandSubSystem@CpuBuildManager@@QAENXZ");
    todo("implement");
}

__int32 CpuBuildManager::GetUnitCapFamilyId(char const *) const // 0x52B839
{
    mangled_assert("?GetUnitCapFamilyId@CpuBuildManager@@QBEHPBD@Z");
    todo("implement");
}

__int32 CpuBuildManager::GetUnitCapMaxForFamily(__int32) const // 0x52B895
{
    mangled_assert("?GetUnitCapMaxForFamily@CpuBuildManager@@QBEHH@Z");
    todo("implement");
}

__int32 CpuBuildManager::GetUnitCapForFamily(__int32) const // 0x52B88A
{
    mangled_assert("?GetUnitCapForFamily@CpuBuildManager@@QBEHH@Z");
    todo("implement");
}

unsigned __int32 CpuBuildManager::CarrierCount() const // 0x52AA42
{
    mangled_assert("?CarrierCount@CpuBuildManager@@QBEIXZ");
    todo("implement");
}

unsigned __int32 CpuBuildManager::CarrierAt(unsigned __int32) const // 0x52A9F2
{
    mangled_assert("?CarrierAt@CpuBuildManager@@QBEII@Z");
    todo("implement");
}

unsigned __int32 CpuBuildManager::CarrierProductionSubSystem(unsigned __int32) const // 0x52AA80
{
    mangled_assert("?CarrierProductionSubSystem@CpuBuildManager@@QBEII@Z");
    todo("implement");
}

void CpuBuildManager::RetireSubSystem(unsigned __int32, unsigned __int32) // 0x52BC58
{
    mangled_assert("?RetireSubSystem@CpuBuildManager@@QAEXII@Z");
    todo("implement");
}

void CpuBuildManager::DebugStats_DemandSubSys(float, float) // 0x52AF5F
{
    mangled_assert("?DebugStats_DemandSubSys@CpuBuildManager@@QAEXMM@Z");
    todo("implement");
}

float CpuBuildManager::DebugOverview(float) // 0x52AB20
{
    mangled_assert("?DebugOverview@CpuBuildManager@@QAEMM@Z");
    todo("implement");
}

void CpuBuildManager::DebugStats(float) // 0x52AC88
{
    mangled_assert("?DebugStats@CpuBuildManager@@QAEXM@Z");
    todo("implement");
}

/* ---------- private code */

_static bool IsBuilderSquadronValid(Squadron *pSquadron, unsigned __int32 unitId) // 0x52B90C
{
    mangled_assert("IsBuilderSquadronValid");
    todo("implement");
}

_static bool IsBuilderSquadronValid_SubSystem(Squadron *pSquadron, unsigned __int32 genericSubSystemTypeId) // 0x52B97F
{
    mangled_assert("IsBuilderSquadronValid_SubSystem");
    todo("implement");
}

_static void Debug_AppendSubSysNames(char *buf, Squadron *pSquadron) // 0x52B1A4
{
    mangled_assert("Debug_AppendSubSysNames");
    todo("implement");
}
#endif
