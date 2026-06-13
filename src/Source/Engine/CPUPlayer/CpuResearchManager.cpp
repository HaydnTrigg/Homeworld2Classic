#if 0
/* ---------- headers */

#include "decomp.h"
#include <DependencyData.h>
#include <xstring>
#include <localizer\localizer.h>
#include <xmemory0>
#include <Mathlib\matrix4.h>
#include <pch.h>
#include <fixedpoint.h>
#include <util\fixed.h>
#include <platform\osdef.h>
#include <App\Hw2Identify.h>
#include <Mathlib\matrix3.h>
#include <Render\objects\debugrender.h>
#include <new>
#include <Render\objects\core.h>
#include <exception>
#include <Render\objects\objects.h>
#include <xstddef>
#include <Render\gl\types.h>
#include <type_traits>
#include <MultiplierContainer.h>
#include <visibility.h>
#include <Mathlib\matvec.h>
#include <MultiplierTypes.h>
#include <Collision\BVH\bvh.h>
#include <Race.h>
#include <Render\gl\lotypes.h>
#include <xutility>
#include <utility>
#include <iosfwd>
#include <vector>
#include <fileio\bytestream.h>
#include <xmemory>
#include <fileio\fileioexports.h>
#include <CPUPlayer\CpuDemand.h>
#include <Parade.h>
#include <Render\gl\r_types.h>
#include <gameRandom.h>
#include <hash_map>
#include <random.h>
#include <xhash>
#include <BuildManager.h>
#include <weaponinfo.h>
#include <list>
#include <orders.h>
#include <seInterface2\PatchID.h>
#include <orders_base.h>
#include <seInterface2\PatchBase.h>
#include <playerresourcetype.h>
#include <seInterface2\SoundParams.h>
#include <assist\fixedstring.h>
#include <Mathlib\vector3.h>
#include <TeamColourRegistry.h>
#include <Mathlib\vector4.h>
#include <savegame.h>
#include <task.h>
#include <gamemsg.h>
#include <map>
#include <stack>
#include <xtree>
#include <SoundManager\SoundEntityHandle.h>
#include <boost\scoped_ptr.hpp>
#include <SobWithMeshStatic.h>
#include <Mathlib\vector2.h>
#include <SobRigidBodyStatic.h>
#include <util\types.h>
#include <MeshAnimation.h>
#include <Render\gl\r_defines.h>
#include <ShieldTypes.h>
#include <Render\gl\glext.h>
#include <CPUPlayer\CpuCommon.h>
#include <boost\cstdint.hpp>
#include <CPUPlayer\CpuTarget.h>
#include <Squadron.h>
#include <Player.h>
#include <command.h>
#include <ResearchManager.h>
#include <sobid.h>
#include <Subsystems\HardPointManager.h>
#include <Subsystems\HardPoint.h>
#include <Collision\BVH\octree.h>
#include <Subsystems\HardPointStatic.h>
#include <SimProxy.h>
#include <Collision\BVH\span.h>
#include <Subsystems\SubSystemType.h>
#include <GameEventSys.h>
#include <Mathlib\quat.h>
#include <Collision\BVH\Internal\span_i.h>
#include <Collision\BVH\proxy.h>
#include <Collision\intersect.h>
#include <Collision\primitivesfwd.h>
#include <assist\typemagic.h>
#include <ParadeCommand.h>
#include <commandtype.h>
#include <OrderFeedback.h>
#include <SquadronList.h>
#include <Mathlib\mathlibdll.h>
#include <Interpolation.h>
#include <Mathlib\fastmath.h>
#include <fileio\logfile.h>
#include <GameObj.h>
#include <Collision\Primitives\aabb.h>
#include <config.h>
#include <ship.h>
#include <abilities.h>
#include <SobWithMesh.h>
#include <SobRigidBody.h>
#include <debug\db.h>
#include <util\statmonitor.h>
#include <sob.h>
#include <util\utilexports.h>
#include <sobstatic.h>
#include <platform\timer.h>
#include <Collision\Primitives\sphere.h>
#include <platform\platformexports.h>
#include <deque>
#include <boost\shared_ptr.hpp>
#include <util\colour.h>
#include <sobtypes.h>
#include <boost\throw_exception.hpp>
#include <selection.h>
#include <savegamedef.h>
#include <boost\detail\shared_count.hpp>
#include <ShipQuery.h>
#include <boost\detail\lwm_win32.hpp>
#include <SelTarg.h>
#include <prim.h>
#include <CPUPlayer\CpuResearchManager.h>
#include <luaconfig\luabinding.h>
#include <wchar.h>
#include <string>
#include <luaconfig\luaconfig.h>
#include <lua.h>
#include <queue>
#include <algorithm>
#include <Collision\Primitives\capsule.h>
#include <DynamicPoint.h>
#include <Collision\Primitives\segment.h>
#include <Modifiers\ModifierTargetCache.h>
#include <Collision\Primitives\obb.h>
#include <Collision\BVH\profiling.h>
#include <ResearchData.h>

/* ---------- constants */

enum `anonymous-namespace'::<unnamed-tag>
{
    InvalidResearch = -1,
};

/* ---------- definitions */

class ResearchFilter
{
public:
    _inline ResearchFilter(SimProxy *);
    _inline bool Check(unsigned __int32);
    SimProxy *simProxy; // 0x0
};
static_assert(sizeof(ResearchFilter) == 4, "Invalid ResearchFilter size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- private variables */

/* ---------- public code */

_extern _sub_5377BB(CpuResearchManager *const, CpuCommon &);
CpuResearchManager::CpuResearchManager(CpuCommon &) // 0x5377BB
{
    mangled_assert("??0CpuResearchManager@@QAE@AAVCpuCommon@@@Z");
    todo("implement");
    _sub_5377BB(this, arg);
}

_extern void _sub_5378A1(CpuResearchManager *const);
CpuResearchManager::~CpuResearchManager() // 0x5378A1
{
    mangled_assert("??1CpuResearchManager@@QAE@XZ");
    todo("implement");
    _sub_5378A1(this);
}

_extern void _sub_5378BF(ResearchOrder *const);
_inline ResearchOrder::~ResearchOrder() // 0x5378BF
{
    mangled_assert("??1ResearchOrder@@UAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_5378BF(this);
}

_extern void _sub_5378C6(ResearchOrderBase *const);
_inline ResearchOrderBase::~ResearchOrderBase() // 0x5378C6
{
    mangled_assert("??1ResearchOrderBase@@UAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_5378C6(this);
}

_extern void _sub_537AF8(CpuResearchManager *const, LuaConfig &);
void CpuResearchManager::BindToLua(LuaConfig &lc) // 0x537AF8
{
    mangled_assert("?BindToLua@CpuResearchManager@@AAEXAAVLuaConfig@@@Z");
    todo("implement");
    _sub_537AF8(this, lc);
}

_extern unsigned __int32 _sub_538827(CpuResearchManager *const);
unsigned __int32 CpuResearchManager::NumResearchSubSystems() // 0x538827
{
    mangled_assert("?NumResearchSubSystems@CpuResearchManager@@QAEIXZ");
    todo("implement");
    unsigned __int32 __result = _sub_538827(this);
    return __result;
}

_extern bool _sub_53882E(CpuResearchManager *const, unsigned __int32);
bool CpuResearchManager::Research(unsigned __int32) // 0x53882E
{
    mangled_assert("?Research@CpuResearchManager@@QAE_NI@Z");
    todo("implement");
    bool __result = _sub_53882E(this, arg);
    return __result;
}

_extern bool _sub_537F37(CpuResearchManager *const, unsigned __int32);
bool CpuResearchManager::CancelResearch(unsigned __int32) // 0x537F37
{
    mangled_assert("?CancelResearch@CpuResearchManager@@QAE_NI@Z");
    todo("implement");
    bool __result = _sub_537F37(this, arg);
    return __result;
}

_extern unsigned __int32 _sub_5387C7(CpuResearchManager *const, char const *);
unsigned __int32 CpuResearchManager::GetResearchId(char const *) // 0x5387C7
{
    mangled_assert("?GetResearchId@CpuResearchManager@@QAEIPBD@Z");
    todo("implement");
    unsigned __int32 __result = _sub_5387C7(this, arg);
    return __result;
}

_extern char const *_sub_538808(CpuResearchManager *const, unsigned __int32);
char const *CpuResearchManager::GetResearchName(unsigned __int32) // 0x538808
{
    mangled_assert("?GetResearchName@CpuResearchManager@@QAEPBDI@Z");
    todo("implement");
    char const * __result = _sub_538808(this, arg);
    return __result;
}

_extern unsigned __int32 _sub_538778(CpuResearchManager const *const);
unsigned __int32 CpuResearchManager::GetResearchCount() const // 0x538778
{
    mangled_assert("?GetResearchCount@CpuResearchManager@@QBEIXZ");
    todo("implement");
    unsigned __int32 __result = _sub_538778(this);
    return __result;
}

_extern void _sub_5388E8(CpuResearchManager *const);
void CpuResearchManager::ResearchDemandClear() // 0x5388E8
{
    mangled_assert("?ResearchDemandClear@CpuResearchManager@@QAEXXZ");
    todo("implement");
    _sub_5388E8(this);
}

_extern void _sub_5388F8(CpuResearchManager *const, unsigned __int32, float);
void CpuResearchManager::ResearchDemandSet(unsigned __int32, float) // 0x5388F8
{
    mangled_assert("?ResearchDemandSet@CpuResearchManager@@QAEXIM@Z");
    todo("implement");
    _sub_5388F8(this, arg, arg);
}

_extern void _sub_5388C0(CpuResearchManager *const, unsigned __int32, float);
void CpuResearchManager::ResearchDemandAdd(unsigned __int32, float) // 0x5388C0
{
    mangled_assert("?ResearchDemandAdd@CpuResearchManager@@QAEXIM@Z");
    todo("implement");
    _sub_5388C0(this, arg, arg);
}

_extern float _sub_5388F0(CpuResearchManager *const, unsigned __int32);
float CpuResearchManager::ResearchDemandGet(unsigned __int32) // 0x5388F0
{
    mangled_assert("?ResearchDemandGet@CpuResearchManager@@QAEMI@Z");
    todo("implement");
    float __result = _sub_5388F0(this, arg);
    return __result;
}

_extern _sub_53781A(ResearchFilter *const, SimProxy *);
_inline ResearchFilter::ResearchFilter(SimProxy *) // 0x53781A
{
    mangled_assert("??0ResearchFilter@@QAE@PAVSimProxy@@@Z");
    todo("implement");
    _sub_53781A(this, arg);
}

_extern void _sub_53786A(LuaBinding::ObjInternal0<unsigned int,LuaBinding::Functor0MemberConst<unsigned int,CpuResearchManager> > *const);
_inline LuaBinding::ObjInternal0<unsigned int,LuaBinding::Functor0MemberConst<unsigned int,CpuResearchManager> >::~ObjInternal0<unsigned int,LuaBinding::Functor0MemberConst<unsigned int,CpuResearchManager> >() // 0x53786A
{
    mangled_assert("??1?$ObjInternal0@IV?$Functor0MemberConst@IVCpuResearchManager@@@LuaBinding@@@LuaBinding@@UAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_53786A(this);
}

_extern void _sub_537870(LuaBinding::ObjInternal0<unsigned int,LuaBinding::Functor0MemberNonConst<unsigned int,CpuResearchManager> > *const);
_inline LuaBinding::ObjInternal0<unsigned int,LuaBinding::Functor0MemberNonConst<unsigned int,CpuResearchManager> >::~ObjInternal0<unsigned int,LuaBinding::Functor0MemberNonConst<unsigned int,CpuResearchManager> >() // 0x537870
{
    mangled_assert("??1?$ObjInternal0@IV?$Functor0MemberNonConst@IVCpuResearchManager@@@LuaBinding@@@LuaBinding@@UAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_537870(this);
}

_extern void _sub_537876(LuaBinding::ObjInternal0<double,LuaBinding::Functor0MemberNonConst<double,CpuResearchManager> > *const);
_inline LuaBinding::ObjInternal0<double,LuaBinding::Functor0MemberNonConst<double,CpuResearchManager> >::~ObjInternal0<double,LuaBinding::Functor0MemberNonConst<double,CpuResearchManager> >() // 0x537876
{
    mangled_assert("??1?$ObjInternal0@NV?$Functor0MemberNonConst@NVCpuResearchManager@@@LuaBinding@@@LuaBinding@@UAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_537876(this);
}

_extern bool _sub_537F9A(ResearchFilter *const, unsigned __int32);
_inline bool ResearchFilter::Check(unsigned __int32) // 0x537F9A
{
    mangled_assert("?Check@ResearchFilter@@QAE_NI@Z");
    todo("implement");
    bool __result = _sub_537F9A(this, arg);
    return __result;
}

_extern void _sub_53787C(LuaBinding::ObjInternal0<void,LuaBinding::Functor0MemberNonConst<void,CpuResearchManager> > *const);
_inline LuaBinding::ObjInternal0<void,LuaBinding::Functor0MemberNonConst<void,CpuResearchManager> >::~ObjInternal0<void,LuaBinding::Functor0MemberNonConst<void,CpuResearchManager> >() // 0x53787C
{
    mangled_assert("??1?$ObjInternal0@XV?$Functor0MemberNonConst@XVCpuResearchManager@@@LuaBinding@@@LuaBinding@@UAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_53787C(this);
}

_extern void _sub_537882(LuaBinding::ObjInternal1<unsigned int,float,LuaBinding::Functor1MemberNonConst<unsigned int,float,CpuResearchManager> > *const);
_inline LuaBinding::ObjInternal1<unsigned int,float,LuaBinding::Functor1MemberNonConst<unsigned int,float,CpuResearchManager> >::~ObjInternal1<unsigned int,float,LuaBinding::Functor1MemberNonConst<unsigned int,float,CpuResearchManager> >() // 0x537882
{
    mangled_assert("??1?$ObjInternal1@IMV?$Functor1MemberNonConst@IMVCpuResearchManager@@@LuaBinding@@@LuaBinding@@UAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_537882(this);
}

_extern void _sub_537888(LuaBinding::ObjInternal1<unsigned int,char const *,LuaBinding::Functor1MemberNonConst<unsigned int,char const *,CpuResearchManager> > *const);
_inline LuaBinding::ObjInternal1<unsigned int,char const *,LuaBinding::Functor1MemberNonConst<unsigned int,char const *,CpuResearchManager> >::~ObjInternal1<unsigned int,char const *,LuaBinding::Functor1MemberNonConst<unsigned int,char const *,CpuResearchManager> >() // 0x537888
{
    mangled_assert("??1?$ObjInternal1@IPBDV?$Functor1MemberNonConst@IPBDVCpuResearchManager@@@LuaBinding@@@LuaBinding@@UAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_537888(this);
}

_extern void _sub_53788E(LuaBinding::ObjInternal1<unsigned int,bool,LuaBinding::Functor1MemberNonConst<unsigned int,bool,CpuResearchManager> > *const);
_inline LuaBinding::ObjInternal1<unsigned int,bool,LuaBinding::Functor1MemberNonConst<unsigned int,bool,CpuResearchManager> >::~ObjInternal1<unsigned int,bool,LuaBinding::Functor1MemberNonConst<unsigned int,bool,CpuResearchManager> >() // 0x53788E
{
    mangled_assert("??1?$ObjInternal1@I_NV?$Functor1MemberNonConst@I_NVCpuResearchManager@@@LuaBinding@@@LuaBinding@@UAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_53788E(this);
}

_extern void _sub_537894(LuaBinding::ObjInternal2<unsigned int,float,void,LuaBinding::Functor2MemberNonConst<unsigned int,float,void,CpuResearchManager> > *const);
_inline LuaBinding::ObjInternal2<unsigned int,float,void,LuaBinding::Functor2MemberNonConst<unsigned int,float,void,CpuResearchManager> >::~ObjInternal2<unsigned int,float,void,LuaBinding::Functor2MemberNonConst<unsigned int,float,void,CpuResearchManager> >() // 0x537894
{
    mangled_assert("??1?$ObjInternal2@IMXV?$Functor2MemberNonConst@IMXVCpuResearchManager@@@LuaBinding@@@LuaBinding@@UAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_537894(this);
}

_extern void _sub_53789A(CancelResearchOrder *const);
_inline CancelResearchOrder::~CancelResearchOrder() // 0x53789A
{
    mangled_assert("??1CancelResearchOrder@@UAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_53789A(this);
}

_extern double _sub_538727(CpuResearchManager *const);
double CpuResearchManager::FindHighDemandResearch() // 0x538727
{
    mangled_assert("?FindHighDemandResearch@CpuResearchManager@@QAENXZ");
    todo("implement");
    double __result = _sub_538727(this);
    return __result;
}

_extern float _sub_537FA1(CpuResearchManager *const, float);
float CpuResearchManager::DebugOverview(float) // 0x537FA1
{
    mangled_assert("?DebugOverview@CpuResearchManager@@QAEMM@Z");
    todo("implement");
    float __result = _sub_537FA1(this, arg);
    return __result;
}

_extern void _sub_53828F(CpuResearchManager *const, float, float);
void CpuResearchManager::DebugStats_Demand(float, float) // 0x53828F
{
    mangled_assert("?DebugStats_Demand@CpuResearchManager@@QAEXMM@Z");
    todo("implement");
    _sub_53828F(this, arg, arg);
}

_extern float _sub_538376(CpuResearchManager *const, float, float);
float CpuResearchManager::DebugStats_Done(float, float) // 0x538376
{
    mangled_assert("?DebugStats_Done@CpuResearchManager@@QAEMMM@Z");
    todo("implement");
    float __result = _sub_538376(this, arg, arg);
    return __result;
}

_extern void _sub_5380D6(CpuResearchManager *const, float);
void CpuResearchManager::DebugStats(float) // 0x5380D6
{
    mangled_assert("?DebugStats@CpuResearchManager@@QAEXM@Z");
    todo("implement");
    _sub_5380D6(this, arg);
}

/* ---------- private code */
#endif
