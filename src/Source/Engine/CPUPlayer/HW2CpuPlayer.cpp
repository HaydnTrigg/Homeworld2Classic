#if 0
/* ---------- headers */

#include "decomp.h"
#include <Modifiers\ModifierTargetCache.h>
#include <assist\stlexsmallvector.h>
#include <CPUPlayer\CpuBuildManager.h>
#include <xstring>
#include <xmemory0>
#include <Mathlib\matrix4.h>
#include <SOBGroupManager.h>
#include <pch.h>
#include <seInterface2\PatchID.h>
#include <gameSettings.h>
#include <seInterface2\PatchBase.h>
#include <config.h>
#include <seInterface2\SoundParams.h>
#include <syncChecking.h>
#include <fixedpoint.h>
#include <util\fixed.h>
#include <CPUPlayer\CpuFleetCommand.h>
#include <CPUPlayer\CpuResourceBlobs.h>
#include <Mathlib\matrix3.h>
#include <CPUPlayer\CpuClassifier.h>
#include <Render\gl\r_defines.h>
#include <boost\checked_delete.hpp>
#include <Render\gl\glext.h>
#include <new>
#include <GameEventDefs.h>
#include <exception>
#include <xstddef>
#include <MultiplierContainer.h>
#include <visibility.h>
#include <Modifiers\ModifierAbility.h>
#include <type_traits>
#include <MultiplierTypes.h>
#include <Collision\BVH\bvh.h>
#include <platform\timer.h>
#include <BuildQueue.h>
#include <platform\platformexports.h>
#include <BuildData.h>
#include <xutility>
#include <CPUPlayer\CpuCommon.h>
#include <utility>
#include <CPUPlayer\CpuTarget.h>
#include <iosfwd>
#include <vector>
#include <Squadron.h>
#include <fileio\bytestream.h>
#include <SimProxy.h>
#include <fileio\ramstream.h>
#include <xmemory>
#include <command.h>
#include <fileio\fileioexports.h>
#include <sobid.h>
#include <LevelDesc.h>
#include <Hash.h>
#include <BuildJob.h>
#include <fileio\md5.h>
#include <Parade.h>
#include <hash_map>
#include <xhash>
#include <weaponinfo.h>
#include <gamestructimpl.h>
#include <Badge.h>
#include <list>
#include <assist\fixedstring.h>
#include <GameOptions.h>
#include <playerresourcetype.h>
#include <Mathlib\vector3.h>
#include <Mathlib\vector4.h>
#include <TeamColourRegistry.h>
#include <GameObj.h>
#include <savegame.h>
#include <map>
#include <task.h>
#include <xtree>
#include <stack>
#include <util\statmonitor.h>
#include <boost\scoped_ptr.hpp>
#include <Universe.h>
#include <util\utilexports.h>
#include <SobWithMeshStatic.h>
#include <SoundManager\SoundEntityHandle.h>
#include <Waypoint.h>
#include <ship.h>
#include <SobUnmoveable.h>
#include <SobWithMesh.h>
#include <SobRigidBody.h>
#include <sob.h>
#include <sobstatic.h>
#include <Mathlib\vector2.h>
#include <orders.h>
#include <Collision\Primitives\sphere.h>
#include <SobRigidBodyStatic.h>
#include <util\types.h>
#include <orders_base.h>
#include <boost\static_assert.hpp>
#include <MeshAnimation.h>
#include <boost\cstdint.hpp>
#include <ShieldTypes.h>
#include <Race.h>
#include <boost\config.hpp>
#include <gamemsg.h>
#include <CPUPlayer\CpuPlayerQuery.h>
#include <fileio\filepath.h>
#include <NIS\NISManager.h>
#include <Collision\BVH\octree.h>
#include <Collision\BVH\span.h>
#include <Subsystems\HardPointManager.h>
#include <GameEventSys.h>
#include <HyperspaceManager.h>
#include <Collision\BVH\Internal\span_i.h>
#include <Subsystems\HardPoint.h>
#include <Mathlib\quat.h>
#include <Collision\BVH\proxy.h>
#include <Subsystems\HardPointStatic.h>
#include <Collision\intersect.h>
#include <Subsystems\SubSystemType.h>
#include <BuildManager.h>
#include <Collision\primitivesfwd.h>
#include <alliance.h>
#include <ResearchData.h>
#include <DependencyData.h>
#include <CPUPlayer\CpuResourceManager.h>
#include <savestream.h>
#include <ParadeCommand.h>
#include <luaconfig\luabinding.h>
#include <Interpolation.h>
#include <commandtype.h>
#include <luaconfig\luaconfig.h>
#include <Mathlib\mathlibdll.h>
#include <OrderFeedback.h>
#include <lua.h>
#include <Modifiers\ModifierUIInfo.h>
#include <Mathlib\fastmath.h>
#include <SquadronList.h>
#include <Modifiers\ModifierMultiplier.h>
#include <Modifiers\ModifierEffect.h>
#include <Collision\Primitives\aabb.h>
#include <savegameimpl.h>
#include <Collision\Primitives\obb.h>
#include <CPUPlayer\CpuResearchManager.h>
#include <platform\osdef.h>
#include <savegamedata.h>
#include <fileio\logfile.h>
#include <CPUPlayer\CpuDemand.h>
#include <pathpoints.h>
#include <gameRandom.h>
#include <debug\db.h>
#include <abilities.h>
#include <random.h>
#include <BuildJobType.h>
#include <deque>
#include <Modifiers\ModifierApplier.h>
#include <dbdefines.h>
#include <Render\objects\debugrender.h>
#include <UnitCaps\UnitCaps.h>
#include <Render\objects\core.h>
#include <Render\objects\objects.h>
#include <boost\shared_ptr.hpp>
#include <util\colour.h>
#include <Subsystems\Subsystem.h>
#include <Render\gl\types.h>
#include <sobtypes.h>
#include <boost\throw_exception.hpp>
#include <Mathlib\matvec.h>
#include <selection.h>
#include <Subsystems\SubsystemStatic.h>
#include <savegamedef.h>
#include <weaponstaticinfo.h>
#include <boost\detail\shared_count.hpp>
#include <Player.h>
#include <GunBinding.h>
#include <Scar\LuaRuleSystem.h>
#include <CPUPlayer\CpuBlobs.h>
#include <ResearchManager.h>
#include <boost\detail\lwm_win32.hpp>
#include <ShipQuery.h>
#include <Render\gl\lotypes.h>
#include <Stats\StatLogging.h>
#include <SelTarg.h>
#include <prim.h>
#include <Render\gl\r_types.h>
#include <CPUPlayer\HW2CpuPlayer.h>
#include <CPUPlayer\cpuplayer.h>
#include <wchar.h>
#include <boost\utility.hpp>
#include <string>
#include <Stats\luastatlogging.h>
#include <WeaponClassSpecificInfo.h>
#include <App\Hw2Identify.h>
#include <queue>
#include <Collision\Primitives\capsule.h>
#include <Collision\Primitives\segment.h>
#include <LuaSimProxy.h>
#include <Collision\BVH\profiling.h>
#include <DynamicPoint.h>

/* ---------- constants */

/* ---------- definitions */

typedef std::map<unsigned int,float,std::less<unsigned int>,std::allocator<std::pair<unsigned int const ,float> > > DemandMap;
typedef std::vector<CpuClassifier::Class,std::allocator<CpuClassifier::Class> > ClassList;
typedef std::vector<ResourceBlob *,std::allocator<ResourceBlob *> > GatherSiteList;
typedef std::vector<CpuBlob,std::allocator<CpuBlob> > CpuBlobList;
typedef std::vector<unsigned int,std::allocator<unsigned int> > IDList;

/* ---------- prototypes */

/* ---------- globals */

extern SaveData const HW2CpuPlayer::m_saveData[6]; // 0x79E6E8
extern char const HW2CpuPlayer::m_saveToken[13]; // 0x79E7A8

/* ---------- private variables */

/* ---------- public code */

_extern _sub_54159F(HW2CpuPlayer *const);
HW2CpuPlayer::HW2CpuPlayer() // 0x54159F
{
    mangled_assert("??0HW2CpuPlayer@@QAE@XZ");
    todo("implement");
    _sub_54159F(this);
}

_extern void _sub_54169D(LuaBinding::ObjInternal0<int,LuaBinding::Functor0MemberConst<int,HW2CpuPlayer> > *const);
_inline LuaBinding::ObjInternal0<int,LuaBinding::Functor0MemberConst<int,HW2CpuPlayer> >::~ObjInternal0<int,LuaBinding::Functor0MemberConst<int,HW2CpuPlayer> >() // 0x54169D
{
    mangled_assert("??1?$ObjInternal0@HV?$Functor0MemberConst@HVHW2CpuPlayer@@@LuaBinding@@@LuaBinding@@UAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_54169D(this);
}

_extern void _sub_5416A3(LuaBinding::ObjInternal0<unsigned int,LuaBinding::Functor0MemberConst<unsigned int,HW2CpuPlayer> > *const);
_inline LuaBinding::ObjInternal0<unsigned int,LuaBinding::Functor0MemberConst<unsigned int,HW2CpuPlayer> >::~ObjInternal0<unsigned int,LuaBinding::Functor0MemberConst<unsigned int,HW2CpuPlayer> >() // 0x5416A3
{
    mangled_assert("??1?$ObjInternal0@IV?$Functor0MemberConst@IVHW2CpuPlayer@@@LuaBinding@@@LuaBinding@@UAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_5416A3(this);
}

_extern void _sub_5416A9(LuaBinding::ObjInternal0<float,LuaBinding::Functor0MemberConst<float,HW2CpuPlayer> > *const);
_inline LuaBinding::ObjInternal0<float,LuaBinding::Functor0MemberConst<float,HW2CpuPlayer> >::~ObjInternal0<float,LuaBinding::Functor0MemberConst<float,HW2CpuPlayer> >() // 0x5416A9
{
    mangled_assert("??1?$ObjInternal0@MV?$Functor0MemberConst@MVHW2CpuPlayer@@@LuaBinding@@@LuaBinding@@UAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_5416A9(this);
}

_extern void _sub_5416AF(LuaBinding::ObjInternal0<void,LuaBinding::Functor0MemberNonConst<void,HW2CpuPlayer> > *const);
_inline LuaBinding::ObjInternal0<void,LuaBinding::Functor0MemberNonConst<void,HW2CpuPlayer> >::~ObjInternal0<void,LuaBinding::Functor0MemberNonConst<void,HW2CpuPlayer> >() // 0x5416AF
{
    mangled_assert("??1?$ObjInternal0@XV?$Functor0MemberNonConst@XVHW2CpuPlayer@@@LuaBinding@@@LuaBinding@@UAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_5416AF(this);
}

_extern void _sub_5416B5(LuaBinding::ObjInternal1<int,void,LuaBinding::Functor1MemberNonConst<int,void,HW2CpuPlayer> > *const);
_inline LuaBinding::ObjInternal1<int,void,LuaBinding::Functor1MemberNonConst<int,void,HW2CpuPlayer> >::~ObjInternal1<int,void,LuaBinding::Functor1MemberNonConst<int,void,HW2CpuPlayer> >() // 0x5416B5
{
    mangled_assert("??1?$ObjInternal1@HXV?$Functor1MemberNonConst@HXVHW2CpuPlayer@@@LuaBinding@@@LuaBinding@@UAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_5416B5(this);
}

_extern void _sub_5416BB(LuaBinding::ObjInternal1<unsigned int,unsigned int,LuaBinding::Functor1MemberNonConst<unsigned int,unsigned int,HW2CpuPlayer> > *const);
_inline LuaBinding::ObjInternal1<unsigned int,unsigned int,LuaBinding::Functor1MemberNonConst<unsigned int,unsigned int,HW2CpuPlayer> >::~ObjInternal1<unsigned int,unsigned int,LuaBinding::Functor1MemberNonConst<unsigned int,unsigned int,HW2CpuPlayer> >() // 0x5416BB
{
    mangled_assert("??1?$ObjInternal1@IIV?$Functor1MemberNonConst@IIVHW2CpuPlayer@@@LuaBinding@@@LuaBinding@@UAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_5416BB(this);
}

_extern void _sub_5416C1(LuaBinding::ObjInternal1<char const *,void,LuaBinding::Functor1MemberNonConst<char const *,void,CpuCommon> > *const);
_inline LuaBinding::ObjInternal1<char const *,void,LuaBinding::Functor1MemberNonConst<char const *,void,CpuCommon> >::~ObjInternal1<char const *,void,LuaBinding::Functor1MemberNonConst<char const *,void,CpuCommon> >() // 0x5416C1
{
    mangled_assert("??1?$ObjInternal1@PBDXV?$Functor1MemberNonConst@PBDXVCpuCommon@@@LuaBinding@@@LuaBinding@@UAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_5416C1(this);
}

_extern void _sub_5416C7(LuaBinding::ObjInternal2<float,float,float,LuaBinding::Functor2MemberNonConst<float,float,float,HW2CpuPlayer> > *const);
_inline LuaBinding::ObjInternal2<float,float,float,LuaBinding::Functor2MemberNonConst<float,float,float,HW2CpuPlayer> >::~ObjInternal2<float,float,float,LuaBinding::Functor2MemberNonConst<float,float,float,HW2CpuPlayer> >() // 0x5416C7
{
    mangled_assert("??1?$ObjInternal2@MMMV?$Functor2MemberNonConst@MMMVHW2CpuPlayer@@@LuaBinding@@@LuaBinding@@UAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_5416C7(this);
}

_extern void _sub_5416E8(CpuCommon *const);
_inline CpuCommon::~CpuCommon() // 0x5416E8
{
    mangled_assert("??1CpuCommon@@UAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_5416E8(this);
}

_extern void _sub_541720(HW2CpuPlayer::Data *const);
_inline HW2CpuPlayer::Data::~Data() // 0x541720
{
    mangled_assert("??1Data@HW2CpuPlayer@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_541720(this);
}

_extern _sub_541540(CpuCommon *const);
_inline CpuCommon::CpuCommon() // 0x541540
{
    mangled_assert("??0CpuCommon@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_541540(this);
}

_extern _sub_541573(CpuPlayer *const);
_inline CpuPlayer::CpuPlayer() // 0x541573
{
    mangled_assert("??0CpuPlayer@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_541573(this);
}

_extern _sub_54157C(HW2CpuPlayer::Data *const);
_inline HW2CpuPlayer::Data::Data() // 0x54157C
{
    mangled_assert("??0Data@HW2CpuPlayer@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_54157C(this);
}

_extern void _sub_54173C(HW2CpuPlayer *const);
HW2CpuPlayer::~HW2CpuPlayer() // 0x54173C
{
    mangled_assert("??1HW2CpuPlayer@@UAE@XZ");
    todo("implement");
    _sub_54173C(this);
}

_extern bool _sub_54211C(HW2CpuPlayer *const, __int32, char const *);
bool HW2CpuPlayer::Init(__int32, char const *) // 0x54211C
{
    mangled_assert("?Init@HW2CpuPlayer@@UAE_NHPBD@Z");
    todo("implement");
    bool __result = _sub_54211C(this, arg, arg);
    return __result;
}

_extern void _sub_542114(HW2CpuPlayer *const, Squadron *, bool);
void HW2CpuPlayer::HyperspaceSquadron(Squadron *, bool) // 0x542114
{
    mangled_assert("?HyperspaceSquadron@HW2CpuPlayer@@QAEXPAVSquadron@@_N@Z");
    todo("implement");
    _sub_542114(this, arg, arg);
}

_extern void _sub_541B1A(HW2CpuPlayer *const, Squadron *);
void HW2CpuPlayer::AddSquadron(Squadron *) // 0x541B1A
{
    mangled_assert("?AddSquadron@HW2CpuPlayer@@QAEXPAVSquadron@@@Z");
    todo("implement");
    _sub_541B1A(this, arg);
}

_extern void _sub_542BF3(HW2CpuPlayer *const, Squadron *);
void HW2CpuPlayer::RemoveSquadron(Squadron *) // 0x542BF3
{
    mangled_assert("?RemoveSquadron@HW2CpuPlayer@@QAEXPAVSquadron@@@Z");
    todo("implement");
    _sub_542BF3(this, arg);
}

_extern void _sub_5427AE(HW2CpuPlayer *const);
void HW2CpuPlayer::Init_Squadrons() // 0x5427AE
{
    mangled_assert("?Init_Squadrons@HW2CpuPlayer@@AAEXXZ");
    todo("implement");
    _sub_5427AE(this);
}

_extern bool _sub_542D60(HW2CpuPlayer *const);
bool HW2CpuPlayer::Shutdown() // 0x542D60
{
    mangled_assert("?Shutdown@HW2CpuPlayer@@UAE_NXZ");
    todo("implement");
    bool __result = _sub_542D60(this);
    return __result;
}

_extern void _sub_542100(HW2CpuPlayer *const, bool);
void HW2CpuPlayer::Enable(bool) // 0x542100
{
    mangled_assert("?Enable@HW2CpuPlayer@@UAEX_N@Z");
    todo("implement");
    _sub_542100(this, arg);
}

_extern bool _sub_542853(HW2CpuPlayer const *const);
bool HW2CpuPlayer::IsEnabled() const // 0x542853
{
    mangled_assert("?IsEnabled@HW2CpuPlayer@@UBE_NXZ");
    todo("implement");
    bool __result = _sub_542853(this);
    return __result;
}

_extern void _sub_542E58(HW2CpuPlayer *const, float);
void HW2CpuPlayer::Think(float) // 0x542E58
{
    mangled_assert("?Think@HW2CpuPlayer@@UAEXM@Z");
    todo("implement");
    _sub_542E58(this, arg);
}

_extern __int32 _sub_54210D(HW2CpuPlayer const *const);
__int32 HW2CpuPlayer::GetPlayerID() const // 0x54210D
{
    mangled_assert("?GetPlayerID@HW2CpuPlayer@@UBEHXZ");
    todo("implement");
    __int32 __result = _sub_54210D(this);
    return __result;
}

_extern void _sub_542400(HW2CpuPlayer *const);
void HW2CpuPlayer::Init_LuaLibs() // 0x542400
{
    mangled_assert("?Init_LuaLibs@HW2CpuPlayer@@AAEXXZ");
    todo("implement");
    _sub_542400(this);
}

_extern void _sub_5426FA(HW2CpuPlayer *const, char const *);
void HW2CpuPlayer::Init_LuaSystem(char const *) // 0x5426FA
{
    mangled_assert("?Init_LuaSystem@HW2CpuPlayer@@AAEXPBD@Z");
    todo("implement");
    _sub_5426FA(this, arg);
}

_extern void _sub_543021(HW2CpuPlayer *const, bool);
void HW2CpuPlayer::setDebug(bool) // 0x543021
{
    mangled_assert("?setDebug@HW2CpuPlayer@@QAEX_N@Z");
    todo("implement");
    _sub_543021(this, arg);
}

_extern void _sub_54305C(HW2CpuPlayer *const, __int32);
void HW2CpuPlayer::setDebugPlayer(__int32) // 0x54305C
{
    mangled_assert("?setDebugPlayer@HW2CpuPlayer@@QAEXH@Z");
    todo("implement");
    _sub_54305C(this, arg);
}

_extern void _sub_54303B(HW2CpuPlayer *const, __int32);
void HW2CpuPlayer::setDebugMode(__int32) // 0x54303B
{
    mangled_assert("?setDebugMode@HW2CpuPlayer@@QAEXH@Z");
    todo("implement");
    _sub_54303B(this, arg);
}

_extern __int32 _sub_542F56(HW2CpuPlayer const *const);
__int32 HW2CpuPlayer::getDebugFlag() const // 0x542F56
{
    mangled_assert("?getDebugFlag@HW2CpuPlayer@@QBEHXZ");
    todo("implement");
    __int32 __result = _sub_542F56(this);
    return __result;
}

_extern void _sub_54302E(HW2CpuPlayer *const, __int32);
void HW2CpuPlayer::setDebugFlag(__int32) // 0x54302E
{
    mangled_assert("?setDebugFlag@HW2CpuPlayer@@QAEXH@Z");
    todo("implement");
    _sub_54302E(this, arg);
}

_extern bool _sub_542F7F(HW2CpuPlayer const *const, __int32);
bool HW2CpuPlayer::isDebugFlagSet(__int32) const // 0x542F7F
{
    mangled_assert("?isDebugFlagSet@HW2CpuPlayer@@QBE_NH@Z");
    todo("implement");
    bool __result = _sub_542F7F(this, arg);
    return __result;
}

_extern LuaConfig *_sub_542F69(HW2CpuPlayer const *const);
LuaConfig *HW2CpuPlayer::getLuaConfig() const // 0x542F69
{
    mangled_assert("?getLuaConfig@HW2CpuPlayer@@QBEPAVLuaConfig@@XZ");
    todo("implement");
    LuaConfig * __result = _sub_542F69(this);
    return __result;
}

_extern SimProxy *_sub_542F77(HW2CpuPlayer *const);
SimProxy *HW2CpuPlayer::getSimProxy() // 0x542F77
{
    mangled_assert("?getSimProxy@HW2CpuPlayer@@QAEPAVSimProxy@@XZ");
    todo("implement");
    SimProxy * __result = _sub_542F77(this);
    return __result;
}

_extern CpuFleetCommand *_sub_542F61(HW2CpuPlayer *const);
CpuFleetCommand *HW2CpuPlayer::getFleetCommand() // 0x542F61
{
    mangled_assert("?getFleetCommand@HW2CpuPlayer@@QAEPAVCpuFleetCommand@@XZ");
    todo("implement");
    CpuFleetCommand * __result = _sub_542F61(this);
    return __result;
}

_extern __int32 _sub_542F6D(HW2CpuPlayer const *const);
__int32 HW2CpuPlayer::getRace() const // 0x542F6D
{
    mangled_assert("?getRace@HW2CpuPlayer@@QBEHXZ");
    todo("implement");
    __int32 __result = _sub_542F6D(this);
    return __result;
}

_extern unsigned __int32 _sub_542F65(HW2CpuPlayer const *const);
unsigned __int32 HW2CpuPlayer::getLevelOfDifficulty() const // 0x542F65
{
    mangled_assert("?getLevelOfDifficulty@HW2CpuPlayer@@QBEIXZ");
    todo("implement");
    unsigned __int32 __result = _sub_542F65(this);
    return __result;
}

_extern void _sub_543068(HW2CpuPlayer *const, __int32);
void HW2CpuPlayer::setLevelOfDifficulty(__int32) // 0x543068
{
    mangled_assert("?setLevelOfDifficulty@HW2CpuPlayer@@QAEXH@Z");
    todo("implement");
    _sub_543068(this, arg);
}

_extern float _sub_542F47(HW2CpuPlayer const *const);
float HW2CpuPlayer::gameTime() const // 0x542F47
{
    mangled_assert("?gameTime@HW2CpuPlayer@@QBEMXZ");
    todo("implement");
    float __result = _sub_542F47(this);
    return __result;
}

_extern float _sub_54296C(HW2CpuPlayer *const, float, float);
float HW2CpuPlayer::RandomRange(float, float) // 0x54296C
{
    mangled_assert("?RandomRange@HW2CpuPlayer@@QAEMMM@Z");
    todo("implement");
    float __result = _sub_54296C(this, arg, arg);
    return __result;
}

_extern unsigned __int32 _sub_542951(HW2CpuPlayer *const, unsigned __int32);
unsigned __int32 HW2CpuPlayer::Rand(unsigned __int32) // 0x542951
{
    mangled_assert("?Rand@HW2CpuPlayer@@QAEII@Z");
    todo("implement");
    unsigned __int32 __result = _sub_542951(this, arg);
    return __result;
}

_extern bool _sub_542C23(HW2CpuPlayer *const);
bool HW2CpuPlayer::RetireSubSystems() // 0x542C23
{
    mangled_assert("?RetireSubSystems@HW2CpuPlayer@@QAE_NXZ");
    todo("implement");
    bool __result = _sub_542C23(this);
    return __result;
}

_extern void _sub_542999(HW2CpuPlayer *const);
void HW2CpuPlayer::RemoveLeastNeededItem() // 0x542999
{
    mangled_assert("?RemoveLeastNeededItem@HW2CpuPlayer@@QAEXXZ");
    todo("implement");
    _sub_542999(this);
}

_extern void _sub_54285A(GameEventSys::Listener * const, GameEventSys::Event const &);
void HW2CpuPlayer::OnEvent(GameEventSys::Event const &) // 0x54285A
{
    mangled_assert("?OnEvent@HW2CpuPlayer@@UAEXABVEvent@GameEventSys@@@Z");
    // __shifted(HW2CpuPlayer, 4);
    todo("implement");
    _sub_54285A(this, arg);
}

_extern void _sub_541E0F(HW2CpuPlayer *const, float);
void HW2CpuPlayer::DebugOverview(float) // 0x541E0F
{
    mangled_assert("?DebugOverview@HW2CpuPlayer@@AAEXM@Z");
    todo("implement");
    _sub_541E0F(this, arg);
}

_extern void _sub_541B39(HW2CpuPlayer *const);
void HW2CpuPlayer::Debug() // 0x541B39
{
    mangled_assert("?Debug@HW2CpuPlayer@@AAEXXZ");
    todo("implement");
    _sub_541B39(this);
}

_extern bool _sub_542D4B(HW2CpuPlayer *const, SaveGameData *, SaveType);
bool HW2CpuPlayer::Save(SaveGameData *, SaveType) // 0x542D4B
{
    mangled_assert("?Save@HW2CpuPlayer@@UAE_NPAVSaveGameData@@W4SaveType@@@Z");
    todo("implement");
    bool __result = _sub_542D4B(this, arg, arg);
    return __result;
}

_extern bool _sub_542C12(HW2CpuPlayer *const, SaveGameData *);
bool HW2CpuPlayer::Restore(SaveGameData *) // 0x542C12
{
    mangled_assert("?Restore@HW2CpuPlayer@@UAE_NPAVSaveGameData@@@Z");
    todo("implement");
    bool __result = _sub_542C12(this, arg);
    return __result;
}

_extern void _sub_540D97(void *, SaveGameData *, SaveType);
void HW2CpuPlayer::saveLuaState(void *objectPtr, SaveGameData *saveGameData, SaveType savetype) // 0x540D97
{
    mangled_assert("?saveLuaState@HW2CpuPlayer@@CGXPAXPAVSaveGameData@@W4SaveType@@@Z");
    todo("implement");
    _sub_540D97(objectPtr, saveGameData, savetype);
}

_extern void _sub_540E57(void *, SaveGameData *);
void HW2CpuPlayer::restoreLuaState(void *objectPtr, SaveGameData *saveGameData) // 0x540E57
{
    mangled_assert("?restoreLuaState@HW2CpuPlayer@@CGXPAXPAVSaveGameData@@@Z");
    todo("implement");
    _sub_540E57(objectPtr, saveGameData);
}

_extern void _sub_542F9B(Saveable * const);
void HW2CpuPlayer::postRestore() // 0x542F9B
{
    mangled_assert("?postRestore@HW2CpuPlayer@@UAEXXZ");
    // __shifted(HW2CpuPlayer, 8);
    todo("implement");
    _sub_542F9B(this);
}

_extern bool _sub_542F9C(Saveable * const, SaveGameData *);
bool HW2CpuPlayer::restore(SaveGameData *) // 0x542F9C
{
    mangled_assert("?restore@HW2CpuPlayer@@UAE_NPAVSaveGameData@@@Z");
    // __shifted(HW2CpuPlayer, 8);
    todo("implement");
    bool __result = _sub_542F9C(this, arg);
    return __result;
}

_extern bool _sub_542FDD(Saveable * const, SaveGameData *, SaveType);
bool HW2CpuPlayer::save(SaveGameData *, SaveType) // 0x542FDD
{
    mangled_assert("?save@HW2CpuPlayer@@UAE_NPAVSaveGameData@@W4SaveType@@@Z");
    // __shifted(HW2CpuPlayer, 8);
    todo("implement");
    bool __result = _sub_542FDD(this, arg, arg);
    return __result;
}

/* ---------- private code */
#endif
