#if 0
/* ---------- headers */

#include "decomp.h"
#include <Collision\BVH\profiling.h>
#include <DynamicPoint.h>
#include <assist\stlexsmallvector.h>
#include <Modifiers\ModifierTargetCache.h>
#include <xstring>
#include <xmemory0>
#include <Mathlib\matrix4.h>
#include <pch.h>
#include <seInterface2\PatchID.h>
#include <seInterface2\PatchBase.h>
#include <seInterface2\SoundParams.h>
#include <fixedpoint.h>
#include <dbdefines.h>
#include <util\fixed.h>
#include <UnitCaps\UnitCaps.h>
#include <Mathlib\matrix3.h>
#include <new>
#include <Player.h>
#include <exception>
#include <ResearchManager.h>
#include <xstddef>
#include <type_traits>
#include <MultiplierContainer.h>
#include <visibility.h>
#include <MultiplierTypes.h>
#include <Collision\BVH\bvh.h>
#include <xutility>
#include <utility>
#include <iosfwd>
#include <vector>
#include <CPUPlayer\CpuCommon.h>
#include <fileio\bytestream.h>
#include <xmemory>
#include <CPUPlayer\CpuTarget.h>
#include <fileio\fileioexports.h>
#include <Squadron.h>
#include <command.h>
#include <sobid.h>
#include <Parade.h>
#include <math.h>
#include <hash_map>
#include <xhash>
#include <list>
#include <weaponinfo.h>
#include <assist\fixedstring.h>
#include <SOBGroupManager.h>
#include <Mathlib\vector3.h>
#include <Mathlib\vector4.h>
#include <playerresourcetype.h>
#include <TeamColourRegistry.h>
#include <xtree>
#include <savegame.h>
#include <Sphere.h>
#include <task.h>
#include <boost\scoped_ptr.hpp>
#include <Scar\GameQuery.h>
#include <stack>
#include <SobWithMeshStatic.h>
#include <SoundManager\SoundEntityHandle.h>
#include <ship.h>
#include <luaconfig\lualibman.h>
#include <SobWithMesh.h>
#include <SobRigidBody.h>
#include <Mathlib\vector2.h>
#include <sob.h>
#include <util\types.h>
#include <sobstatic.h>
#include <Collision\Primitives\sphere.h>
#include <SobRigidBodyStatic.h>
#include <boost\cstdint.hpp>
#include <SOBGroup.h>
#include <MeshAnimation.h>
#include <platform\timer.h>
#include <ShieldTypes.h>
#include <platform\platformexports.h>
#include <Collision\BVH\octree.h>
#include <Mathlib\quat.h>
#include <Collision\BVH\span.h>
#include <Subsystems\HardPointManager.h>
#include <GameEventSys.h>
#include <Collision\BVH\Internal\span_i.h>
#include <Subsystems\HardPoint.h>
#include <Collision\BVH\proxy.h>
#include <Subsystems\HardPointStatic.h>
#include <Collision\intersect.h>
#include <Subsystems\SubSystemType.h>
#include <Collision\primitivesfwd.h>
#include <CPUPlayer\CpuResourceManager.h>
#include <CPUPlayer\CpuFleetCommand.h>
#include <ParadeCommand.h>
#include <luaconfig\luabinding.h>
#include <Interpolation.h>
#include <commandtype.h>
#include <luaconfig\luaconfig.h>
#include <OrderFeedback.h>
#include <lua.h>
#include <SquadronList.h>
#include <Collision\Primitives\aabb.h>
#include <pathpoints.h>
#include <Collision\Primitives\obb.h>
#include <Volume.h>
#include <debug\db.h>
#include <fileio\logfile.h>
#include <VolumeStatic.h>
#include <Universe.h>
#include <SobUnmoveableStatic.h>
#include <abilities.h>
#include <Waypoint.h>
#include <SobUnmoveable.h>
#include <deque>
#include <boost\shared_ptr.hpp>
#include <util\colour.h>
#include <sobtypes.h>
#include <boost\throw_exception.hpp>
#include <selection.h>
#include <savegamedef.h>
#include <AxisAlignBox.h>
#include <boost\detail\shared_count.hpp>
#include <Race.h>
#include <boost\detail\lwm_win32.hpp>
#include <ShipQuery.h>
#include <HyperspaceManager.h>
#include <SelTarg.h>
#include <BuildManager.h>
#include <prim.h>
#include <CPUPlayer\LuaCPU.h>
#include <wchar.h>
#include <CPUPlayer\HW2CpuPlayer.h>
#include <GameObj.h>
#include <CPUPlayer\cpuplayer.h>
#include <config.h>
#include <queue>
#include <util\statmonitor.h>
#include <Collision\Primitives\capsule.h>
#include <util\utilexports.h>
#include <Collision\Primitives\segment.h>

/* ---------- constants */

/* ---------- definitions */

class `anonymous-namespace'::LuaCPULib :
    public LuaLibrary
{
public:
    LuaCPULib(`anonymous-namespace'::LuaCPULib const &); /* compiler_generated() */
    LuaCPULib();
    virtual ~LuaCPULib() override;
    virtual bool Register(LuaConfig &) override;
    virtual bool DeRegister(LuaConfig &) override;
    `anonymous-namespace'::LuaCPULib &operator=(`anonymous-namespace'::LuaCPULib const &); /* compiler_generated() */
};
static_assert(sizeof(`anonymous-namespace'::LuaCPULib) == 16, "Invalid `anonymous-namespace'::LuaCPULib size");

typedef std::vector<CpuSquadGroup *,std::allocator<CpuSquadGroup *> > SquadGroupList;
typedef std::vector<CollectorSM *,std::allocator<CollectorSM *> > CollectorSMList;
typedef std::vector<RefinerySM *,std::allocator<RefinerySM *> > RefinerySMList;
typedef std::vector<ResourceBlob *,std::allocator<ResourceBlob *> > ResourceBlobList;
typedef `anonymous-namespace'::LuaCPULib ?A0x911c18e7::LuaCPULib;

/* ---------- prototypes */


_static bool CPU_Exist(__int32 playerIndex);
_static void CPU_EnableAll(bool enable);
_static void CPU_Enable(__int32 playerIndex, bool enable);
_static void CPU_DoString(__int32 playerIndex, char const *string);
_static void CPU_DoFile(__int32 playerIndex, char const *filename);
_static void CPU_SetDebug(__int32 playerIndex, bool printToConsole);
_static void CPU_SetDebugPlayer(__int32 playerIndex, __int32 playerToCheck);
_static void CPU_SetDebugMode(__int32 playerIndex, __int32 mode);
_static float CPU_GetVar(__int32 playerid, char const *varname);
_static char const *CPU_GetVarString(__int32 playerid, char const *varname);
_static __int32 CPU_GetDebugFlag(__int32 playerid);
_static void CPU_SetDebugFlag(__int32 playerid, __int32 flag);
_static bool CPU_IsDebugFlagSet(__int32 playerid, __int32 flag);
_static Volume *Volume_Find(char const *name);
_static __int32 CPU_AddDefendTarget(__int32 playerid, char const *objName, __int32 priority);
_static __int32 CPU_AddDefendSobGroup(__int32 playerid, char const *sobGroupName, __int32 priority);
_static void CPU_RemoveDefendTarget(__int32 playerid, __int32 defendTargetId);
_static void CPU_AddSobGroup(__int32 playerid, char const *sobGroupName);
_static void CPU_RemoveSobGroup(__int32 playerid, char const *sobGroupName);
_static void CPU_SetAttackTargetPriority(__int32 playerid, __int32 targettype, __int32 priority);
_static void CPU_SetDefendTargetPriority(__int32 playerid, __int32 targettype, __int32 priority);
_static void CPU_SetDefendTargetCapturePriority(__int32 playerid, __int32 defendTargetId);
_static void CPU_SetDefendTargetRadius(__int32 playerid, __int32 defendTargetId, float newRadius);
_static void CPU_RemoveResourceBlob(__int32 playerid, char const *volumeName);

/* ---------- globals */

extern char const *LUALIB_CPU; // 0x83901C

/* ---------- private variables */

/* ---------- public code */

_extern void _sub_5435A5(LuaBinding::ObjInternal1<int,int,LuaBinding::Functor1Free<int,int> > *const);
_inline LuaBinding::ObjInternal1<int,int,LuaBinding::Functor1Free<int,int> >::~ObjInternal1<int,int,LuaBinding::Functor1Free<int,int> >() // 0x5435A5
{
    mangled_assert("??1?$ObjInternal1@HHV?$Functor1Free@HH@LuaBinding@@@LuaBinding@@UAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_5435A5(this);
}

_extern void _sub_5435AB(LuaBinding::ObjInternal1<int,bool,LuaBinding::Functor1Free<int,bool> > *const);
_inline LuaBinding::ObjInternal1<int,bool,LuaBinding::Functor1Free<int,bool> >::~ObjInternal1<int,bool,LuaBinding::Functor1Free<int,bool> >() // 0x5435AB
{
    mangled_assert("??1?$ObjInternal1@H_NV?$Functor1Free@H_N@LuaBinding@@@LuaBinding@@UAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_5435AB(this);
}

_extern void _sub_5435B1(LuaBinding::ObjInternal2<int,int,bool,LuaBinding::Functor2Free<int,int,bool> > *const);
_inline LuaBinding::ObjInternal2<int,int,bool,LuaBinding::Functor2Free<int,int,bool> >::~ObjInternal2<int,int,bool,LuaBinding::Functor2Free<int,int,bool> >() // 0x5435B1
{
    mangled_assert("??1?$ObjInternal2@HH_NV?$Functor2Free@HH_N@LuaBinding@@@LuaBinding@@UAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_5435B1(this);
}

_extern void _sub_5435B7(LuaBinding::ObjInternal2<int,char const *,float,LuaBinding::Functor2Free<int,char const *,float> > *const);
_inline LuaBinding::ObjInternal2<int,char const *,float,LuaBinding::Functor2Free<int,char const *,float> >::~ObjInternal2<int,char const *,float,LuaBinding::Functor2Free<int,char const *,float> >() // 0x5435B7
{
    mangled_assert("??1?$ObjInternal2@HPBDMV?$Functor2Free@HPBDM@LuaBinding@@@LuaBinding@@UAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_5435B7(this);
}

_extern void _sub_5435BD(LuaBinding::ObjInternal2<int,char const *,char const *,LuaBinding::Functor2Free<int,char const *,char const *> > *const);
_inline LuaBinding::ObjInternal2<int,char const *,char const *,LuaBinding::Functor2Free<int,char const *,char const *> >::~ObjInternal2<int,char const *,char const *,LuaBinding::Functor2Free<int,char const *,char const *> >() // 0x5435BD
{
    mangled_assert("??1?$ObjInternal2@HPBDPBDV?$Functor2Free@HPBDPBD@LuaBinding@@@LuaBinding@@UAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_5435BD(this);
}

_extern void _sub_5435C3(LuaBinding::ObjInternal2<int,char const *,void,LuaBinding::Functor2Free<int,char const *,void> > *const);
_inline LuaBinding::ObjInternal2<int,char const *,void,LuaBinding::Functor2Free<int,char const *,void> >::~ObjInternal2<int,char const *,void,LuaBinding::Functor2Free<int,char const *,void> >() // 0x5435C3
{
    mangled_assert("??1?$ObjInternal2@HPBDXV?$Functor2Free@HPBDX@LuaBinding@@@LuaBinding@@UAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_5435C3(this);
}

_extern void _sub_5435C9(LuaBinding::ObjInternal3<int,int,float,void,LuaBinding::Functor3Free<int,int,float,void> > *const);
_inline LuaBinding::ObjInternal3<int,int,float,void,LuaBinding::Functor3Free<int,int,float,void> >::~ObjInternal3<int,int,float,void,LuaBinding::Functor3Free<int,int,float,void> >() // 0x5435C9
{
    mangled_assert("??1?$ObjInternal3@HHMXV?$Functor3Free@HHMX@LuaBinding@@@LuaBinding@@UAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_5435C9(this);
}

_extern void _sub_5435CF(LuaBinding::ObjInternal3<int,char const *,int,int,LuaBinding::Functor3Free<int,char const *,int,int> > *const);
_inline LuaBinding::ObjInternal3<int,char const *,int,int,LuaBinding::Functor3Free<int,char const *,int,int> >::~ObjInternal3<int,char const *,int,int,LuaBinding::Functor3Free<int,char const *,int,int> >() // 0x5435CF
{
    mangled_assert("??1?$ObjInternal3@HPBDHHV?$Functor3Free@HPBDHH@LuaBinding@@@LuaBinding@@UAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_5435CF(this);
}

/* ---------- private code */

_extern bool _sub_543A0A(__int32);
_static bool CPU_Exist(__int32 playerIndex) // 0x543A0A
{
    mangled_assert("CPU_Exist");
    todo("implement");
    bool __result = _sub_543A0A(playerIndex);
    return __result;
}

_extern void _sub_5439C8(bool);
_static void CPU_EnableAll(bool enable) // 0x5439C8
{
    mangled_assert("CPU_EnableAll");
    todo("implement");
    _sub_5439C8(enable);
}

_extern void _sub_5439A6(__int32, bool);
_static void CPU_Enable(__int32 playerIndex, bool enable) // 0x5439A6
{
    mangled_assert("CPU_Enable");
    todo("implement");
    _sub_5439A6(playerIndex, enable);
}

_extern void _sub_54397A(__int32, char const *);
_static void CPU_DoString(__int32 playerIndex, char const *string) // 0x54397A
{
    mangled_assert("CPU_DoString");
    todo("implement");
    _sub_54397A(playerIndex, string);
}

_extern void _sub_543950(__int32, char const *);
_static void CPU_DoFile(__int32 playerIndex, char const *filename) // 0x543950
{
    mangled_assert("CPU_DoFile");
    todo("implement");
    _sub_543950(playerIndex, filename);
}

_extern void _sub_543D18(__int32, bool);
_static void CPU_SetDebug(__int32 playerIndex, bool printToConsole) // 0x543D18
{
    mangled_assert("CPU_SetDebug");
    todo("implement");
    _sub_543D18(playerIndex, printToConsole);
}

_extern void _sub_543D85(__int32, __int32);
_static void CPU_SetDebugPlayer(__int32 playerIndex, __int32 playerToCheck) // 0x543D85
{
    mangled_assert("CPU_SetDebugPlayer");
    todo("implement");
    _sub_543D85(playerIndex, playerToCheck);
}

_extern void _sub_543D5C(__int32, __int32);
_static void CPU_SetDebugMode(__int32 playerIndex, __int32 mode) // 0x543D5C
{
    mangled_assert("CPU_SetDebugMode");
    todo("implement");
    _sub_543D5C(playerIndex, mode);
}

_extern float _sub_543A41(__int32, char const *);
_static float CPU_GetVar(__int32 playerid, char const *varname) // 0x543A41
{
    mangled_assert("CPU_GetVar");
    todo("implement");
    float __result = _sub_543A41(playerid, varname);
    return __result;
}

_extern char const *_sub_543AB1(__int32, char const *);
_static char const *CPU_GetVarString(__int32 playerid, char const *varname) // 0x543AB1
{
    mangled_assert("CPU_GetVarString");
    todo("implement");
    char const * __result = _sub_543AB1(playerid, varname);
    return __result;
}

_extern __int32 _sub_543A23(__int32);
_static __int32 CPU_GetDebugFlag(__int32 playerid) // 0x543A23
{
    mangled_assert("CPU_GetDebugFlag");
    todo("implement");
    __int32 __result = _sub_543A23(playerid);
    return __result;
}

_extern void _sub_543D3A(__int32, __int32);
_static void CPU_SetDebugFlag(__int32 playerid, __int32 flag) // 0x543D3A
{
    mangled_assert("CPU_SetDebugFlag");
    todo("implement");
    _sub_543D3A(playerid, flag);
}

_extern bool _sub_543B61(__int32, __int32);
_static bool CPU_IsDebugFlagSet(__int32 playerid, __int32 flag) // 0x543B61
{
    mangled_assert("CPU_IsDebugFlagSet");
    todo("implement");
    bool __result = _sub_543B61(playerid, flag);
    return __result;
}

_extern Volume *_sub_544762(char const *);
_static Volume *Volume_Find(char const *name) // 0x544762
{
    mangled_assert("Volume_Find");
    todo("implement");
    Volume * __result = _sub_544762(name);
    return __result;
}

_extern __int32 _sub_54388B(__int32, char const *, __int32);
_static __int32 CPU_AddDefendTarget(__int32 playerid, char const *objName, __int32 priority) // 0x54388B
{
    mangled_assert("CPU_AddDefendTarget");
    todo("implement");
    __int32 __result = _sub_54388B(playerid, objName, priority);
    return __result;
}

_extern __int32 _sub_54381A(__int32, char const *, __int32);
_static __int32 CPU_AddDefendSobGroup(__int32 playerid, char const *sobGroupName, __int32 priority) // 0x54381A
{
    mangled_assert("CPU_AddDefendSobGroup");
    todo("implement");
    __int32 __result = _sub_54381A(playerid, sobGroupName, priority);
    return __result;
}

_extern void _sub_543B87(__int32, __int32);
_static void CPU_RemoveDefendTarget(__int32 playerid, __int32 defendTargetId) // 0x543B87
{
    mangled_assert("CPU_RemoveDefendTarget");
    todo("implement");
    _sub_543B87(playerid, defendTargetId);
}

_extern void _sub_5438D3(__int32, char const *);
_static void CPU_AddSobGroup(__int32 playerid, char const *sobGroupName) // 0x5438D3
{
    mangled_assert("CPU_AddSobGroup");
    todo("implement");
    _sub_5438D3(playerid, sobGroupName);
}

_extern void _sub_543C6E(__int32, char const *);
_static void CPU_RemoveSobGroup(__int32 playerid, char const *sobGroupName) // 0x543C6E
{
    mangled_assert("CPU_RemoveSobGroup");
    todo("implement");
    _sub_543C6E(playerid, sobGroupName);
}

_extern void _sub_543CEB(__int32, __int32, __int32);
_static void CPU_SetAttackTargetPriority(__int32 playerid, __int32 targettype, __int32 priority) // 0x543CEB
{
    mangled_assert("CPU_SetAttackTargetPriority");
    todo("implement");
    _sub_543CEB(playerid, targettype, priority);
}

_extern void _sub_543DD0(__int32, __int32, __int32);
_static void CPU_SetDefendTargetPriority(__int32 playerid, __int32 targettype, __int32 priority) // 0x543DD0
{
    mangled_assert("CPU_SetDefendTargetPriority");
    todo("implement");
    _sub_543DD0(playerid, targettype, priority);
}

_extern void _sub_543DA7(__int32, __int32);
_static void CPU_SetDefendTargetCapturePriority(__int32 playerid, __int32 defendTargetId) // 0x543DA7
{
    mangled_assert("CPU_SetDefendTargetCapturePriority");
    todo("implement");
    _sub_543DA7(playerid, defendTargetId);
}

_extern void _sub_543DFD(__int32, __int32, float);
_static void CPU_SetDefendTargetRadius(__int32 playerid, __int32 defendTargetId, float newRadius) // 0x543DFD
{
    mangled_assert("CPU_SetDefendTargetRadius");
    todo("implement");
    _sub_543DFD(playerid, defendTargetId, newRadius);
}

_extern void _sub_543BB0(__int32, char const *);
_static void CPU_RemoveResourceBlob(__int32 playerid, char const *volumeName) // 0x543BB0
{
    mangled_assert("CPU_RemoveResourceBlob");
    todo("implement");
    _sub_543BB0(playerid, volumeName);
}
#endif
