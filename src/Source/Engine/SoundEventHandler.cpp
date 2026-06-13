#if 0
/* ---------- headers */

#include "decomp.h"
#include <set>
#include <assist\stlexsmallvector.h>
#include <xstring>
#include <BuildManager.h>
#include <WeaponClassSpecificInfo.h>
#include <SensorsManager.h>
#include <xmemory0>
#include <Mathlib\matrix4.h>
#include <Render\gl\r_types.h>
#include <boost\shared_array.hpp>
#include <pch.h>
#include <Mathlib\matvec.h>
#include <memory\memorylib.h>
#include <playerresourcetype.h>
#include <gameSettings.h>
#include <UserInterface\UISoundManager.h>
#include <UserInterface\NewUIScreenManager.h>
#include <crtdefs.h>
#include <syncChecking.h>
#include <UserInterface\uitypes.h>
#include <platform\inputinterface.h>
#include <MainUI.h>
#include <platform\keydefines.h>
#include <Selector.h>
#include <Render\gl\r_defines.h>
#include <Collision\BVH\octree.h>
#include <MetaSelTarg.h>
#include <Render\gl\glext.h>
#include <Collision\BVH\span.h>
#include <luaconfig\luaconfig.h>
#include <Mathlib\matrix3.h>
#include <Collision\BVH\Internal\span_i.h>
#include <Race.h>
#include <lua.h>
#include <Collision\BVH\proxy.h>
#include <Collision\intersect.h>
#include <luaconfig\luabinding.h>
#include <Collision\primitivesfwd.h>
#include <new>
#include <exception>
#include <gameRandom.h>
#include <xstddef>
#include <seInterface2\sedefinesshared.h>
#include <type_traits>
#include <Interpolation.h>
#include <OrderFeedback.h>
#include <xutility>
#include <utility>
#include <iosfwd>
#include <Collision\Primitives\aabb.h>
#include <vector>
#include <Player.h>
#include <Modifiers\ModifierAbility.h>
#include <fileio\bytestream.h>
#include <HyperSpaceBaseCommand.h>
#include <xmemory>
#include <ResearchManager.h>
#include <fileio\fileioexports.h>
#include <sobid.h>
#include <Render\objects\textureregistry.h>
#include <SoundManager\SoundEntityHandle.h>
#include <compiler\compilerconfig.h>
#include <UserInterface\SharedGraphicFactory.h>
#include <math.h>
#include <UserInterface\Graphic.h>
#include <Menus\EventsScreen.h>
#include <Render\objects\texture.h>
#include <list>
#include <UserInterface\NewUIScreen.h>
#include <Render\objects\objects.h>
#include <seInterface2\PatchID.h>
#include <UserInterface\NewFrame.h>
#include <Render\objects\core.h>
#include <seInterface2\PatchBase.h>
#include <UserInterface\InterfaceElement.h>
#include <Render\gl\types.h>
#include <seInterface2\SoundParams.h>
#include <UserInterface\signals.h>
#include <Render\gl\lotypes.h>
#include <Mathlib\vector3.h>
#include <Mathlib\vector4.h>
#include <map>
#include <xtree>
#include <boost\smart_ptr.hpp>
#include <boost\scoped_ptr.hpp>
#include <SelTarg.h>
#include <prim.h>
#include <profile\profile.h>
#include <Mathlib\vector2.h>
#include <FamilyListMgr.h>
#include <iostream>
#include <util\types.h>
#include <FamilyList.h>
#include <fixedpoint.h>
#include <Family.h>
#include <util\fixed.h>
#include <Collision\Primitives\capsule.h>
#include <LevelDesc.h>
#include <Collision\Primitives\segment.h>
#include <boost\cstdint.hpp>
#include <Hash.h>
#include <Collision\BVH\profiling.h>
#include <DynamicPoint.h>
#include <fileio\md5.h>
#include <boost\config.hpp>
#include <dbdefines.h>
#include <App\Hw2Identify.h>
#include <cassert>
#include <UnitCaps\UnitCaps.h>
#include <assert.h>
#include <boost\scoped_array.hpp>
#include <random.h>
#include <gamestructimpl.h>
#include <Parade.h>
#include <Badge.h>
#include <SOBGroupManager.h>
#include <Mathlib\quat.h>
#include <hash_map>
#include <xhash>
#include <Missile.h>
#include <ResearchData.h>
#include <MissileStatic.h>
#include <AttackCommand.h>
#include <platform\osdef.h>
#include <assist\typemagic.h>
#include <StrikeGroup.h>
#include <AttackStyle.h>
#include <KeyBindings.h>
#include <config.h>
#include <weaponTargetInfo.h>
#include <abilities.h>
#include <ITweak.h>
#include <Mathlib\mathlibdll.h>
#include <SoundManager\SoundManager.h>
#include <Tactics.h>
#include <Mathlib\fastmath.h>
#include <seInterface2\SEInterface.h>
#include <seInterface2\SoundParamManager.h>
#include <seInterface2\seinterfacefunc.h>
#include <assist\gbitset.h>
#include <MultiplierContainer.h>
#include <visibility.h>
#include <MultiplierTypes.h>
#include <Collision\BVH\bvh.h>
#include <Universe.h>
#include <pathpoints.h>
#include <Waypoint.h>
#include <Mathlib\mathutil.h>
#include <boost\static_assert.hpp>
#include <GameEventDefs.h>
#include <SobUnmoveable.h>
#include <debug\db.h>
#include <MeshAnimation.h>
#include <sob.h>
#include <ShieldTypes.h>
#include <sobstatic.h>
#include <BuildData.h>
#include <CameraCommand.h>
#include <Collision\Primitives\sphere.h>
#include <Modifiers\ModifierUIInfo.h>
#include <DependencyData.h>
#include <CameraHW.h>
#include <deque>
#include <BattleChatter\ChatterEvent.h>
#include <Modifiers\ModifierMultiplier.h>
#include <Camera\CameraOrbitTarget.h>
#include <SobWithMeshStatic.h>
#include <Modifiers\ModifierEffect.h>
#include <Camera\Camera.h>
#include <Camera\Frustum.h>
#include <UserInterface\StyleSheet.h>
#include <ship.h>
#include <Camera\Plane3.h>
#include <UserInterface\pch.h>
#include <boost\shared_ptr.hpp>
#include <util\colour.h>
#include <SobWithMesh.h>
#include <Subsystems\HardPointManager.h>
#include <sobtypes.h>
#include <boost\throw_exception.hpp>
#include <SobRigidBody.h>
#include <Subsystems\HardPoint.h>
#include <region.h>
#include <selection.h>
#include <Subsystems\HardPointStatic.h>
#include <savegamedef.h>
#include <SobRigidBodyStatic.h>
#include <Subsystems\SubSystemType.h>
#include <boost\detail\shared_count.hpp>
#include <bitset>
#include <boost\detail\lwm_win32.hpp>
#include <Modifiers\ModifierApplier.h>
#include <fileio\filepath.h>
#include <HyperspaceManager.h>
#include <SquadronList.h>
#include <Render\objects\textureproxy.h>
#include <Subsystems\Subsystem.h>
#include <Subsystems\SubsystemStatic.h>
#include <weaponinfo.h>
#include <weaponstaticinfo.h>
#include <GunBinding.h>
#include <SoundEventHandler.h>
#include <Modifiers\ModifierTargetCache.h>
#include <seInterface2\SampleID.h>
#include <GameEventSys.h>
#include <wchar.h>
#include <TeamColourRegistry.h>
#include <ParadeCommand.h>
#include <seInterface2\SampleBase.h>
#include <string>
#include <savegame.h>
#include <commandtype.h>
#include <Camera\OrbitParameters.h>
#include <platform\timer.h>
#include <task.h>
#include <platform\platformexports.h>
#include <stack>
#include <Squadron.h>
#include <queue>
#include <command.h>
#include <Collision\Primitives\obb.h>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

extern _inline unsigned __int32 chtRandom();
extern void SetFrequencyModifier(float val);
extern void SetFrequencyMin(float val);
extern void SetFrequencyMax(float val);
extern void playSpeechLinked(char const *speechName, __int32 ce);
extern void playSpeech(char const *speechName);
extern long internalPlaySpeechActor(char const *speechName, char const *actorName, __int32 numActors, float frequency, long linkHandle);
extern void playSpeechActorLinked(char const *speechName, char const *actorName, __int32 numActors, float frequency, __int32 ce);
extern void playSpeechActor(char const *speechName, char const *actorName, __int32 numActors, float frequency);
extern void playSpeechFreq(char const *speechName, float freq);
extern char const *getFamily(char const *shipName);
extern char const *getFamilyWithID(unsigned __int32 id);

_static void showEvent(char const *speechName, bool useloc, vector3 const &loc);

/* ---------- globals */

extern SoundEventHandler *SoundEventHandler::s_instance; // 0x84AF74
extern unsigned __int32 SoundEventHandler::m_chtGlobalFrequencyModifier; // 0x83D4D4
extern float SoundEventHandler::m_chtGlobalFrequencyMin; // 0x83D4D8
extern float SoundEventHandler::m_chtGlobalFrequencyMax; // 0x83D4DC

/* ---------- private variables */

_static
{
    extern std::list<LuaBinding::Obj,std::allocator<LuaBinding::Obj> > s_BoundFuncs; // 0x84AF78
    extern std::_Nil _Nil_obj; // 0x84AF80
}

/* ---------- public code */

_extern unsigned __int32 _sub_63D715();
_inline unsigned __int32 chtRandom() // 0x63D715
{
    mangled_assert("?chtRandom@@YGIXZ");
    todo("implement");
    unsigned __int32 __result = _sub_63D715();
    return __result;
}

_extern bool _sub_63F4CE();
bool SoundEventHandler::initialise() // 0x63F4CE
{
    mangled_assert("?initialise@SoundEventHandler@@SG_NXZ");
    todo("implement");
    bool __result = _sub_63F4CE();
    return __result;
}

_extern SoundEventHandler *_sub_63F4C8();
SoundEventHandler *SoundEventHandler::i() // 0x63F4C8
{
    mangled_assert("?i@SoundEventHandler@@SGPAV1@XZ");
    todo("implement");
    SoundEventHandler * __result = _sub_63F4C8();
    return __result;
}

_extern bool _sub_640762();
bool SoundEventHandler::shutDown() // 0x640762
{
    mangled_assert("?shutDown@SoundEventHandler@@SG_NXZ");
    todo("implement");
    bool __result = _sub_640762();
    return __result;
}

_extern void _sub_63CAA4(SoundEventHandler *const);
SoundEventHandler::~SoundEventHandler() // 0x63CAA4
{
    mangled_assert("??1SoundEventHandler@@AAE@XZ");
    todo("implement");
    _sub_63CAA4(this);
}

_extern void _sub_64071E(SoundEventHandler *const, unsigned __int32);
void SoundEventHandler::setGlobalFrequencyModifier(unsigned __int32) // 0x64071E
{
    mangled_assert("?setGlobalFrequencyModifier@SoundEventHandler@@QAEXI@Z");
    todo("implement");
    _sub_64071E(this, arg);
}

_extern void _sub_64070D(SoundEventHandler *const, float);
void SoundEventHandler::setGlobalFrequencyMin(float) // 0x64070D
{
    mangled_assert("?setGlobalFrequencyMin@SoundEventHandler@@QAEXM@Z");
    todo("implement");
    _sub_64070D(this, arg);
}

_extern void _sub_6406FC(SoundEventHandler *const, float);
void SoundEventHandler::setGlobalFrequencyMax(float) // 0x6406FC
{
    mangled_assert("?setGlobalFrequencyMax@SoundEventHandler@@QAEXM@Z");
    todo("implement");
    _sub_6406FC(this, arg);
}

_extern ChatterEvent *_sub_63F31F(SoundEventHandler *const, chatterevent);
ChatterEvent *SoundEventHandler::getChatterEventPtr(chatterevent) // 0x63F31F
{
    mangled_assert("?getChatterEventPtr@SoundEventHandler@@QAEPAVChatterEvent@@W4chatterevent@@@Z");
    todo("implement");
    ChatterEvent * __result = _sub_63F31F(this, arg);
    return __result;
}

_extern void _sub_63D0D1(float);
void SetFrequencyModifier(float val) // 0x63D0D1
{
    mangled_assert("?SetFrequencyModifier@@YGXM@Z");
    todo("implement");
    _sub_63D0D1(val);
}

_extern void _sub_63D0C0(float);
void SetFrequencyMin(float val) // 0x63D0C0
{
    mangled_assert("?SetFrequencyMin@@YGXM@Z");
    todo("implement");
    _sub_63D0C0(val);
}

_extern void _sub_63D0AF(float);
void SetFrequencyMax(float val) // 0x63D0AF
{
    mangled_assert("?SetFrequencyMax@@YGXM@Z");
    todo("implement");
    _sub_63D0AF(val);
}

_extern void _sub_6402DB(char const *, __int32);
void playSpeechLinked(char const *speechName, __int32 ce) // 0x6402DB
{
    mangled_assert("?playSpeechLinked@@YGXPBDH@Z");
    todo("implement");
    _sub_6402DB(speechName, ce);
}

_extern void _sub_6401C4(char const *);
void playSpeech(char const *speechName) // 0x6401C4
{
    mangled_assert("?playSpeech@@YGXPBD@Z");
    todo("implement");
    _sub_6401C4(speechName);
}

_extern long _sub_63F507(char const *, char const *, __int32, float, long);
long internalPlaySpeechActor(char const *speechName, char const *actorName, __int32 numActors, float frequency, long linkHandle) // 0x63F507
{
    mangled_assert("?internalPlaySpeechActor@@YGJPBD0HMJ@Z");
    todo("implement");
    long __result = _sub_63F507(speechName, actorName, numActors, frequency, linkHandle);
    return __result;
}

_extern void _sub_6401F4(char const *, char const *, __int32, float, __int32);
void playSpeechActorLinked(char const *speechName, char const *actorName, __int32 numActors, float frequency, __int32 ce) // 0x6401F4
{
    mangled_assert("?playSpeechActorLinked@@YGXPBD0HMH@Z");
    todo("implement");
    _sub_6401F4(speechName, actorName, numActors, frequency, ce);
}

_extern void _sub_6401D2(char const *, char const *, __int32, float);
void playSpeechActor(char const *speechName, char const *actorName, __int32 numActors, float frequency) // 0x6401D2
{
    mangled_assert("?playSpeechActor@@YGXPBD0HM@Z");
    todo("implement");
    _sub_6401D2(speechName, actorName, numActors, frequency);
}

_extern void _sub_640295(char const *, float);
void playSpeechFreq(char const *speechName, float freq) // 0x640295
{
    mangled_assert("?playSpeechFreq@@YGXPBDM@Z");
    todo("implement");
    _sub_640295(speechName, freq);
}

_extern char const *_sub_63F335(char const *);
char const *getFamily(char const *shipName) // 0x63F335
{
    mangled_assert("?getFamily@@YGPBDPBD@Z");
    todo("implement");
    char const * __result = _sub_63F335(shipName);
    return __result;
}

_extern char const *_sub_63F3D2(unsigned __int32);
char const *getFamilyWithID(unsigned __int32 id) // 0x63F3D2
{
    mangled_assert("?getFamilyWithID@@YGPBDI@Z");
    todo("implement");
    char const * __result = _sub_63F3D2(id);
    return __result;
}

_extern _sub_63BF43(SoundEventHandler *const);
SoundEventHandler::SoundEventHandler() // 0x63BF43
{
    mangled_assert("??0SoundEventHandler@@AAE@XZ");
    todo("implement");
    _sub_63BF43(this);
}

_extern void _sub_63CA22(LuaBinding::ObjInternal4<char const *,char const *,int,float,void,LuaBinding::Functor4Free<char const *,char const *,int,float,void> > *const);
_inline LuaBinding::ObjInternal4<char const *,char const *,int,float,void,LuaBinding::Functor4Free<char const *,char const *,int,float,void> >::~ObjInternal4<char const *,char const *,int,float,void,LuaBinding::Functor4Free<char const *,char const *,int,float,void> >() // 0x63CA22
{
    mangled_assert("??1?$ObjInternal4@PBDPBDHMXV?$Functor4Free@PBDPBDHMX@LuaBinding@@@LuaBinding@@UAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_63CA22(this);
}

_extern void _sub_63CA28(LuaBinding::ObjInternal5<char const *,char const *,int,float,int,void,LuaBinding::Functor5Free<char const *,char const *,int,float,int,void> > *const);
_inline LuaBinding::ObjInternal5<char const *,char const *,int,float,int,void,LuaBinding::Functor5Free<char const *,char const *,int,float,int,void> >::~ObjInternal5<char const *,char const *,int,float,int,void,LuaBinding::Functor5Free<char const *,char const *,int,float,int,void> >() // 0x63CA28
{
    mangled_assert("??1?$ObjInternal5@PBDPBDHMHXV?$Functor5Free@PBDPBDHMHX@LuaBinding@@@LuaBinding@@UAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_63CA28(this);
}

_extern void _sub_63CA37(std::_List_buy<LuaBinding::Obj,std::allocator<LuaBinding::Obj> > *const);
_inline std::_List_buy<LuaBinding::Obj,std::allocator<LuaBinding::Obj> >::~_List_buy<LuaBinding::Obj,std::allocator<LuaBinding::Obj> >() // 0x63CA37
{
    mangled_assert("??1?$_List_buy@VObj@LuaBinding@@V?$allocator@VObj@LuaBinding@@@std@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_63CA37(this);
}

_extern void _sub_63CA67(std::_Tree_buy<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,int>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,int> > > *const);
_inline std::_Tree_buy<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,int>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,int> > >::~_Tree_buy<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,int>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,int> > >() // 0x63CA67
{
    mangled_assert("??1?$_Tree_buy@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@std@@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@std@@@2@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_63CA67(this);
}

_extern void _sub_63CA70(std::_Tree_comp<0,std::_Tmap_traits<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,int,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,int> >,0> > *const);
_inline std::_Tree_comp<0,std::_Tmap_traits<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,int,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,int> >,0> >::~_Tree_comp<0,std::_Tmap_traits<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,int,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,int> >,0> >() // 0x63CA70
{
    mangled_assert("??1?$_Tree_comp@$0A@V?$_Tmap_traits@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@std@@@2@$0A@@std@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_63CA70(this);
}

_extern void _sub_63CA8B(std::map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,int,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,int> > > *const);
_inline std::map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,int,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,int> > >::~map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,int,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,int> > >() // 0x63CA8B
{
    mangled_assert("??1?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@std@@@2@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_63CA8B(this);
}

_extern void _sub_63CA90(std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,int> *const);
_inline std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,int>::~pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,int>() // 0x63CA90
{
    mangled_assert("??1?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_63CA90(this);
}

_extern void _sub_63CA95(std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,int> *const);
_inline std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,int>::~pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,int>() // 0x63CA95
{
    mangled_assert("??1?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_63CA95(this);
}

_extern void _sub_63F61C(SoundEventHandler *const);
void SoundEventHandler::loadChatter() // 0x63F61C
{
    mangled_assert("?loadChatter@SoundEventHandler@@AAEXXZ");
    todo("implement");
    _sub_63F61C(this);
}

_extern void _sub_63D038(SoundEventHandler *const, GameEventSys::Event const &);
void SoundEventHandler::OnEvent(GameEventSys::Event const &) // 0x63D038
{
    mangled_assert("?OnEvent@SoundEventHandler@@EAEXABVEvent@GameEventSys@@@Z");
    todo("implement");
    _sub_63D038(this, arg);
}

_extern long _sub_64041D(SoundEventHandler *const, chatterevent);
long SoundEventHandler::queueEvent(chatterevent) // 0x64041D
{
    mangled_assert("?queueEvent@SoundEventHandler@@AAEJW4chatterevent@@@Z");
    todo("implement");
    long __result = _sub_64041D(this, arg);
    return __result;
}

_extern bool _sub_63FD4F(SoundEventHandler *const, chatterevent, vector3 const &);
bool SoundEventHandler::passFilter(chatterevent, vector3 const &) // 0x63FD4F
{
    mangled_assert("?passFilter@SoundEventHandler@@AAE_NW4chatterevent@@ABVvector3@@@Z");
    todo("implement");
    bool __result = _sub_63FD4F(this, arg, arg);
    return __result;
}

_extern bool _sub_63FDDC(SoundEventHandler *const, ChatterEvent *, vector3 const &);
bool SoundEventHandler::passFilterDistance(ChatterEvent *, vector3 const &) // 0x63FDDC
{
    mangled_assert("?passFilterDistance@SoundEventHandler@@AAE_NPAVChatterEvent@@ABVvector3@@@Z");
    todo("implement");
    bool __result = _sub_63FDDC(this, arg, arg);
    return __result;
}

_extern bool _sub_63FEE7(SoundEventHandler *const, ChatterEvent *, vector3 const &);
bool SoundEventHandler::passFilterRepeatProximity(ChatterEvent *, vector3 const &) // 0x63FEE7
{
    mangled_assert("?passFilterRepeatProximity@SoundEventHandler@@AAE_NPAVChatterEvent@@ABVvector3@@@Z");
    todo("implement");
    bool __result = _sub_63FEE7(this, arg, arg);
    return __result;
}

_extern bool _sub_640105(SoundEventHandler *const, ChatterEvent *);
bool SoundEventHandler::passFilterWavelength(ChatterEvent *) // 0x640105
{
    mangled_assert("?passFilterWavelength@SoundEventHandler@@AAE_NPAVChatterEvent@@@Z");
    todo("implement");
    bool __result = _sub_640105(this, arg);
    return __result;
}

_extern chatterevent _sub_63F441(SoundEventHandler *const, chatterevent, char const *, char const *, float const *, float const *);
chatterevent SoundEventHandler::helpLoad(chatterevent, char const *, char const *, float const *, float const *) // 0x63F441
{
    mangled_assert("?helpLoad@SoundEventHandler@@AAE?AW4chatterevent@@W42@PBD1PBM2@Z");
    todo("implement");
    chatterevent __result = _sub_63F441(this, arg, arg, arg, arg, arg);
    return __result;
}

_extern __int32 _sub_63DB4B(SoundEventHandler *const, GameEventSys::Event const &, vector3 &);
__int32 SoundEventHandler::getChatterEvent(GameEventSys::Event const &, vector3 &) // 0x63DB4B
{
    mangled_assert("?getChatterEvent@SoundEventHandler@@AAEHABVEvent@GameEventSys@@AAVvector3@@@Z");
    todo("implement");
    __int32 __result = _sub_63DB4B(this, arg, arg);
    return __result;
}

_extern __int32 _sub_63F407(SoundEventHandler *const, Selection const &);
__int32 SoundEventHandler::getGroupNumber(Selection const &) // 0x63F407
{
    mangled_assert("?getGroupNumber@SoundEventHandler@@AAEHABVSelection@@@Z");
    todo("implement");
    __int32 __result = _sub_63F407(this, arg);
    return __result;
}

/* ---------- private code */

_extern void _sub_64072A(char const *, bool, vector3 const &);
_static void showEvent(char const *speechName, bool useloc, vector3 const &loc) // 0x64072A
{
    mangled_assert("showEvent");
    todo("implement");
    _sub_64072A(speechName, useloc, loc);
}
#endif
