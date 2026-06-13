#if 0
/* ---------- headers */

#include "decomp.h"
#include <assist\stlexsmallvector.h>
#include <platform\timer.h>
#include <platform\platformexports.h>
#include <xstring>
#include <xmemory0>
#include <Mathlib\matrix4.h>
#include <pch.h>
#include <Render\objects\debugrender.h>
#include <Render\objects\core.h>
#include <Render\objects\objects.h>
#include <Render\gl\types.h>
#include <ShipQuery.h>
#include <Mathlib\matvec.h>
#include <Mathlib\matrix3.h>
#include <Render\gl\lotypes.h>
#include <new>
#include <exception>
#include <xstddef>
#include <SelTarg.h>
#include <type_traits>
#include <prim.h>
#include <Render\gl\r_types.h>
#include <CPUPlayer\CpuFleetCommand.h>
#include <xutility>
#include <Universe.h>
#include <utility>
#include <iosfwd>
#include <Collision\Primitives\capsule.h>
#include <DynamicPoint.h>
#include <Waypoint.h>
#include <vector>
#include <Collision\Primitives\segment.h>
#include <Modifiers\ModifierTargetCache.h>
#include <fileio\bytestream.h>
#include <SobUnmoveable.h>
#include <xmemory>
#include <Collision\BVH\profiling.h>
#include <fileio\fileioexports.h>
#include <seInterface2\PatchID.h>
#include <fixedpoint.h>
#include <Race.h>
#include <list>
#include <seInterface2\PatchBase.h>
#include <util\fixed.h>
#include <seInterface2\SoundParams.h>
#include <assist\fixedstring.h>
#include <Mathlib\vector3.h>
#include <Mathlib\vector4.h>
#include <HyperspaceManager.h>
#include <BuildManager.h>
#include <Render\gl\r_defines.h>
#include <xtree>
#include <Render\gl\glext.h>
#include <boost\scoped_ptr.hpp>
#include <MultiplierContainer.h>
#include <visibility.h>
#include <alliance.h>
#include <MultiplierTypes.h>
#include <Collision\BVH\bvh.h>
#include <Mathlib\vector2.h>
#include <util\types.h>
#include <CPUPlayer\CpuCommon.h>
#include <CPUPlayer\CpuTarget.h>
#include <Squadron.h>
#include <boost\cstdint.hpp>
#include <command.h>
#include <sobid.h>
#include <Parade.h>
#include <hash_map>
#include <xhash>
#include <weaponinfo.h>
#include <Mathlib\quat.h>
#include <dbdefines.h>
#include <UnitCaps\UnitCaps.h>
#include <playerresourcetype.h>
#include <TeamColourRegistry.h>
#include <Player.h>
#include <savegame.h>
#include <ResearchManager.h>
#include <task.h>
#include <stack>
#include <SoundManager\SoundEntityHandle.h>
#include <Mathlib\mathlibdll.h>
#include <SobWithMeshStatic.h>
#include <Mathlib\fastmath.h>
#include <ship.h>
#include <SobWithMesh.h>
#include <SobRigidBody.h>
#include <pathpoints.h>
#include <sob.h>
#include <SobRigidBodyStatic.h>
#include <sobstatic.h>
#include <debug\db.h>
#include <Collision\Primitives\sphere.h>
#include <MeshAnimation.h>
#include <ShieldTypes.h>
#include <deque>
#include <boost\shared_ptr.hpp>
#include <util\colour.h>
#include <CPUPlayer\CpuClassifier.h>
#include <sobtypes.h>
#include <boost\throw_exception.hpp>
#include <selection.h>
#include <Subsystems\HardPointManager.h>
#include <savegamedef.h>
#include <Subsystems\HardPoint.h>
#include <boost\detail\shared_count.hpp>
#include <Collision\BVH\octree.h>
#include <Subsystems\HardPointStatic.h>
#include <Collision\BVH\span.h>
#include <Subsystems\SubSystemType.h>
#include <boost\detail\lwm_win32.hpp>
#include <Collision\BVH\Internal\span_i.h>
#include <SOBGroupManager.h>
#include <Collision\BVH\proxy.h>
#include <Collision\intersect.h>
#include <Collision\primitivesfwd.h>
#include <ParadeCommand.h>
#include <commandtype.h>
#include <OrderFeedback.h>
#include <CPUPlayer\CpuPlayerQuery.h>
#include <SquadronList.h>
#include <luaconfig\luabinding.h>
#include <wchar.h>
#include <Interpolation.h>
#include <luaconfig\luaconfig.h>
#include <lua.h>
#include <fileio\logfile.h>
#include <queue>
#include <Collision\Primitives\aabb.h>
#include <Collision\Primitives\obb.h>
#include <abilities.h>
#include <platform\osdef.h>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- private variables */

/* ---------- public code */

_extern _sub_535ECC(CpuPlayerQuery *const, CpuCommon &);
CpuPlayerQuery::CpuPlayerQuery(CpuCommon &) // 0x535ECC
{
    mangled_assert("??0CpuPlayerQuery@@QAE@AAVCpuCommon@@@Z");
    todo("implement");
    _sub_535ECC(this, arg);
}

_extern void _sub_535F06(LuaBinding::ObjInternal0<int,LuaBinding::Functor0MemberNonConst<int,CpuPlayerQuery> > *const);
_inline LuaBinding::ObjInternal0<int,LuaBinding::Functor0MemberNonConst<int,CpuPlayerQuery> >::~ObjInternal0<int,LuaBinding::Functor0MemberNonConst<int,CpuPlayerQuery> >() // 0x535F06
{
    mangled_assert("??1?$ObjInternal0@HV?$Functor0MemberNonConst@HVCpuPlayerQuery@@@LuaBinding@@@LuaBinding@@UAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_535F06(this);
}

_extern void _sub_535F0C(LuaBinding::ObjInternal1<int,int,LuaBinding::Functor1MemberNonConst<int,int,CpuPlayerQuery> > *const);
_inline LuaBinding::ObjInternal1<int,int,LuaBinding::Functor1MemberNonConst<int,int,CpuPlayerQuery> >::~ObjInternal1<int,int,LuaBinding::Functor1MemberNonConst<int,int,CpuPlayerQuery> >() // 0x535F0C
{
    mangled_assert("??1?$ObjInternal1@HHV?$Functor1MemberNonConst@HHVCpuPlayerQuery@@@LuaBinding@@@LuaBinding@@UAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_535F0C(this);
}

_extern void _sub_535F12(LuaBinding::ObjInternal1<unsigned int,bool,LuaBinding::Functor1MemberNonConst<unsigned int,bool,CpuPlayerQuery> > *const);
_inline LuaBinding::ObjInternal1<unsigned int,bool,LuaBinding::Functor1MemberNonConst<unsigned int,bool,CpuPlayerQuery> >::~ObjInternal1<unsigned int,bool,LuaBinding::Functor1MemberNonConst<unsigned int,bool,CpuPlayerQuery> >() // 0x535F12
{
    mangled_assert("??1?$ObjInternal1@I_NV?$Functor1MemberNonConst@I_NVCpuPlayerQuery@@@LuaBinding@@@LuaBinding@@UAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_535F12(this);
}

_extern void _sub_535F18(LuaBinding::ObjInternal2<int,int,int,LuaBinding::Functor2MemberNonConst<int,int,int,CpuPlayerQuery> > *const);
_inline LuaBinding::ObjInternal2<int,int,int,LuaBinding::Functor2MemberNonConst<int,int,int,CpuPlayerQuery> >::~ObjInternal2<int,int,int,LuaBinding::Functor2MemberNonConst<int,int,int,CpuPlayerQuery> >() // 0x535F18
{
    mangled_assert("??1?$ObjInternal2@HHHV?$Functor2MemberNonConst@HHHVCpuPlayerQuery@@@LuaBinding@@@LuaBinding@@UAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_535F18(this);
}

_extern void _sub_535F1E(LuaBinding::ObjInternal3<int,int,int,int,LuaBinding::Functor3MemberNonConst<int,int,int,int,CpuPlayerQuery> > *const);
_inline LuaBinding::ObjInternal3<int,int,int,int,LuaBinding::Functor3MemberNonConst<int,int,int,int,CpuPlayerQuery> >::~ObjInternal3<int,int,int,int,LuaBinding::Functor3MemberNonConst<int,int,int,int,CpuPlayerQuery> >() // 0x535F1E
{
    mangled_assert("??1?$ObjInternal3@HHHHV?$Functor3MemberNonConst@HHHHVCpuPlayerQuery@@@LuaBinding@@@LuaBinding@@UAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_535F1E(this);
}

_extern void _sub_535F24(CpuPlayerQuery *const);
CpuPlayerQuery::~CpuPlayerQuery() // 0x535F24
{
    mangled_assert("??1CpuPlayerQuery@@QAE@XZ");
    todo("implement");
    _sub_535F24(this);
}

_extern void _sub_53609A(CpuPlayerQuery *const);
void CpuPlayerQuery::BindToLua() // 0x53609A
{
    mangled_assert("?BindToLua@CpuPlayerQuery@@AAEXXZ");
    todo("implement");
    _sub_53609A(this);
}

_extern void _sub_536624(CpuPlayerQuery *const);
void CpuPlayerQuery::Debug() // 0x536624
{
    mangled_assert("?Debug@CpuPlayerQuery@@QAEXXZ");
    todo("implement");
    _sub_536624(this);
}

_extern unsigned __int32 _sub_5364C0(CpuPlayerQuery *const, __int32, Player const **);
unsigned __int32 CpuPlayerQuery::CalcPlayerList(__int32, Player const **) // 0x5364C0
{
    mangled_assert("?CalcPlayerList@CpuPlayerQuery@@AAEIHPAPBVPlayer@@@Z");
    todo("implement");
    unsigned __int32 __result = _sub_5364C0(this, arg, arg);
    return __result;
}

_extern unsigned __int32 _sub_53657F(CpuPlayerQuery *const, __int32, __int32 *);
unsigned __int32 CpuPlayerQuery::CalcPlayerListIndicies(__int32, __int32 *) // 0x53657F
{
    mangled_assert("?CalcPlayerListIndicies@CpuPlayerQuery@@AAEIHPAH@Z");
    todo("implement");
    unsigned __int32 __result = _sub_53657F(this, arg, arg);
    return __result;
}

_extern __int32 _sub_536FCC(CpuPlayerQuery *const);
__int32 CpuPlayerQuery::PlayersTotal() // 0x536FCC
{
    mangled_assert("?PlayersTotal@CpuPlayerQuery@@QAEHXZ");
    todo("implement");
    __int32 __result = _sub_536FCC(this);
    return __result;
}

_extern __int32 _sub_5368E2(CpuPlayerQuery *const, __int32);
__int32 CpuPlayerQuery::PlayersAlive(__int32) // 0x5368E2
{
    mangled_assert("?PlayersAlive@CpuPlayerQuery@@QAEHH@Z");
    todo("implement");
    __int32 __result = _sub_5368E2(this, arg);
    return __result;
}

_extern __int32 _sub_536F34(CpuPlayerQuery *const, __int32, __int32);
__int32 CpuPlayerQuery::PlayersPopulation(__int32, __int32) // 0x536F34
{
    mangled_assert("?PlayersPopulation@CpuPlayerQuery@@QAEHHH@Z");
    todo("implement");
    __int32 __result = _sub_536F34(this, arg, arg);
    return __result;
}

_extern __int32 _sub_536917(CpuPlayerQuery *const, __int32, __int32);
__int32 CpuPlayerQuery::PlayersMilitaryPopulation(__int32, __int32) // 0x536917
{
    mangled_assert("?PlayersMilitaryPopulation@CpuPlayerQuery@@QAEHHH@Z");
    todo("implement");
    __int32 __result = _sub_536917(this, arg, arg);
    return __result;
}

_extern __int32 _sub_536FE2(CpuPlayerQuery *const, __int32, __int32, __int32);
__int32 CpuPlayerQuery::PlayersUnitTypeCount(__int32, __int32, __int32) // 0x536FE2
{
    mangled_assert("?PlayersUnitTypeCount@CpuPlayerQuery@@QAEHHHH@Z");
    todo("implement");
    __int32 __result = _sub_536FE2(this, arg, arg, arg);
    return __result;
}

_extern __int32 _sub_536E8A(CpuPlayerQuery *const, __int32, __int32);
__int32 CpuPlayerQuery::PlayersMilitary_Total(__int32, __int32) // 0x536E8A
{
    mangled_assert("?PlayersMilitary_Total@CpuPlayerQuery@@QAEHHH@Z");
    todo("implement");
    __int32 __result = _sub_536E8A(this, arg, arg);
    return __result;
}

_extern __int32 _sub_536D83(CpuPlayerQuery *const, __int32, __int32);
__int32 CpuPlayerQuery::PlayersMilitary_Threat(__int32, __int32) // 0x536D83
{
    mangled_assert("?PlayersMilitary_Threat@CpuPlayerQuery@@QAEHHH@Z");
    todo("implement");
    __int32 __result = _sub_536D83(this, arg, arg);
    return __result;
}

_extern __int32 _sub_536C56(CpuPlayerQuery *const, __int32, __int32);
__int32 CpuPlayerQuery::PlayersMilitary_Fighter(__int32, __int32) // 0x536C56
{
    mangled_assert("?PlayersMilitary_Fighter@CpuPlayerQuery@@QAEHHH@Z");
    todo("implement");
    __int32 __result = _sub_536C56(this, arg, arg);
    return __result;
}

_extern __int32 _sub_536BBD(CpuPlayerQuery *const, __int32, __int32);
__int32 CpuPlayerQuery::PlayersMilitary_Corvette(__int32, __int32) // 0x536BBD
{
    mangled_assert("?PlayersMilitary_Corvette@CpuPlayerQuery@@QAEHHH@Z");
    todo("implement");
    __int32 __result = _sub_536BBD(this, arg, arg);
    return __result;
}

_extern __int32 _sub_536CEA(CpuPlayerQuery *const, __int32, __int32);
__int32 CpuPlayerQuery::PlayersMilitary_Frigate(__int32, __int32) // 0x536CEA
{
    mangled_assert("?PlayersMilitary_Frigate@CpuPlayerQuery@@QAEHHH@Z");
    todo("implement");
    __int32 __result = _sub_536CEA(this, arg, arg);
    return __result;
}

_extern __int32 _sub_536A8B(CpuPlayerQuery *const, __int32, __int32);
__int32 CpuPlayerQuery::PlayersMilitary_AntiFighter(__int32, __int32) // 0x536A8B
{
    mangled_assert("?PlayersMilitary_AntiFighter@CpuPlayerQuery@@QAEHHH@Z");
    todo("implement");
    __int32 __result = _sub_536A8B(this, arg, arg);
    return __result;
}

_extern __int32 _sub_5369F2(CpuPlayerQuery *const, __int32, __int32);
__int32 CpuPlayerQuery::PlayersMilitary_AntiCorvette(__int32, __int32) // 0x5369F2
{
    mangled_assert("?PlayersMilitary_AntiCorvette@CpuPlayerQuery@@QAEHHH@Z");
    todo("implement");
    __int32 __result = _sub_5369F2(this, arg, arg);
    return __result;
}

_extern __int32 _sub_536B24(CpuPlayerQuery *const, __int32, __int32);
__int32 CpuPlayerQuery::PlayersMilitary_AntiFrigate(__int32, __int32) // 0x536B24
{
    mangled_assert("?PlayersMilitary_AntiFrigate@CpuPlayerQuery@@QAEHHH@Z");
    todo("implement");
    __int32 __result = _sub_536B24(this, arg, arg);
    return __result;
}

_extern bool _sub_53688B(CpuPlayerQuery *const, unsigned __int32);
bool CpuPlayerQuery::Player_IsEnemy(unsigned __int32) // 0x53688B
{
    mangled_assert("?Player_IsEnemy@CpuPlayerQuery@@QAE_NI@Z");
    todo("implement");
    bool __result = _sub_53688B(this, arg);
    return __result;
}

_extern __int32 _sub_5368D9(CpuPlayerQuery *const);
__int32 CpuPlayerQuery::Player_Self() // 0x5368D9
{
    mangled_assert("?Player_Self@CpuPlayerQuery@@QAEHXZ");
    todo("implement");
    __int32 __result = _sub_5368D9(this);
    return __result;
}

/* ---------- private code */
#endif
