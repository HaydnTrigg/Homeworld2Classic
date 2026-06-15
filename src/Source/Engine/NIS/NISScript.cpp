#if 0
/* ---------- headers */

#include "decomp.h"
#include <seInterface2\SampleID.h>
#include <Modifiers\ModifierAbility.h>
#include <seInterface2\SampleBase.h>
#include <assist\stlexsmallvector.h>
#include <NIS\NIS.h>
#include <xstring>
#include <hash_map>
#include <xmemory0>
#include <Mathlib\matrix4.h>
#include <xhash>
#include <boost\shared_array.hpp>
#include <shipstatic.h>
#include <pch.h>
#include <seInterface2\PatchID.h>
#include <weaponfiretypes.h>
#include <commandtype.h>
#include <Mathlib\mathutil.h>
#include <seInterface2\PatchBase.h>
#include <seInterface2\SoundParams.h>
#include <weaponinfo.h>
#include <SensorsManager.h>
#include <Render\gl\r_types.h>
#include <Mathlib\matrix3.h>
#include <luaconfig\luabinding.h>
#include <Mathlib\matvec.h>
#include <Collision\BVH\octree.h>
#include <Collision\Collision.h>
#include <luaconfig\luaconfig.h>
#include <Collision\BVH\span.h>
#include <dbdefines.h>
#include <Collision\BVH\Internal\span_i.h>
#include <UnitCaps\UnitCaps.h>
#include <Collision\BVH\proxy.h>
#include <new>
#include <Collision\intersect.h>
#include <config.h>
#include <Collision\primitivesfwd.h>
#include <exception>
#include <Render\gl\r_defines.h>
#include <xstddef>
#include <Render\gl\glext.h>
#include <type_traits>
#include <weaponTargetInfo.h>
#include <Tactics.h>
#include <xutility>
#include <NIS\NISMotion.h>
#include <Interpolation.h>
#include <utility>
#include <sobid.h>
#include <iosfwd>
#include <seInterface2\sedefinesshared.h>
#include <vector>
#include <xmemory>
#include <debug\ctassert.h>
#include <Collision\Primitives\aabb.h>
#include <ShieldTypes.h>
#include <abilities.h>
#include <SobZeroMassBody.h>
#include <stack>
#include <TeamColourRegistry.h>
#include <Universe.h>
#include <sobzeromassbodystatic.h>
#include <savegame.h>
#include <Waypoint.h>
#include <task.h>
#include <Subsystems\HardPointManager.h>
#include <SobUnmoveable.h>
#include <Subsystems\HardPoint.h>
#include <list>
#include <MADState.h>
#include <Subsystems\HardPointStatic.h>
#include <NavLights.h>
#include <MeshAnimation.h>
#include <Subsystems\SubSystemType.h>
#include <Render\objects\light.h>
#include <Render\objects\objects.h>
#include <Race.h>
#include <Render\gl\types.h>
#include <Render\gl\lotypes.h>
#include <Mathlib\vector3.h>
#include <Mathlib\vector4.h>
#include <cstdarg>
#include <Render\FxGL\FXManager.h>
#include <stdarg.h>
#include <map>
#include <Render\FxGL\VarMulti.h>
#include <xtree>
#include <boost\smart_ptr.hpp>
#include <boost\scoped_ptr.hpp>
#include <EngineTrailSystem.h>
#include <BuildManager.h>
#include <SobWithMeshStatic.h>
#include <SobRigidBodyStatic.h>
#include <weapon.h>
#include <sobstatic.h>
#include <WeaponFire\WeaponFire.h>
#include <HyperspaceManager.h>
#include <Scar\GameUtility.h>
#include <Collision\Primitives\sphere.h>
#include <sob.h>
#include <SquadronList.h>
#include <Mathlib\vector2.h>
#include <SelTarg.h>
#include <Sob\Resource\Resource.h>
#include <prim.h>
#include <util\types.h>
#include <Sob\Resource\ResourceStatic.h>
#include <ship.h>
#include <Modifiers\ModifierTargetCache.h>
#include <Scar\Scar.h>
#include <SobWithMesh.h>
#include <Scar\ScarEventSys.h>
#include <SobRigidBody.h>
#include <boost\cstdint.hpp>
#include <Modifiers\ModifierUIInfo.h>
#include <Modifiers\ModifierMultiplier.h>
#include <Collision\Primitives\capsule.h>
#include <Modifiers\ModifierEffect.h>
#include <Collision\Primitives\segment.h>
#include <Collision\BVH\profiling.h>
#include <boost\scoped_array.hpp>
#include <Mathlib\quat.h>
#include <Modifiers\ModifierApplier.h>
#include <platform\osdef.h>
#include <weaponstaticinfo.h>
#include <Player.h>
#include <Mathlib\mathlibdll.h>
#include <GunBinding.h>
#include <ResearchManager.h>
#include <SMPTE.h>
#include <Mathlib\fastmath.h>
#include <Camera\OrbitParameters.h>
#include <Scar\LuaRuleSystem.h>
#include <Collision\Primitives\obb.h>
#include <pathpoints.h>
#include <MultiplierContainer.h>
#include <visibility.h>
#include <debug\db.h>
#include <MultiplierTypes.h>
#include <Collision\BVH\bvh.h>
#include <SoundManager\SoundManager.h>
#include <seInterface2\SEInterface.h>
#include <seInterface2\SoundParamManager.h>
#include <seInterface2\seinterfacefunc.h>
#include <assist\gbitset.h>
#include <NavLightManager.h>
#include <WeaponClassSpecificInfo.h>
#include <boost\shared_ptr.hpp>
#include <util\colour.h>
#include <sobtypes.h>
#include <boost\throw_exception.hpp>
#include <SoundManager\SoundEntityHandle.h>
#include <selection.h>
#include <savegamedef.h>
#include <boost\detail\shared_count.hpp>
#include <fixedpoint.h>
#include <bitset>
#include <util\fixed.h>
#include <scripting.h>
#include <boost\detail\lwm_win32.hpp>
#include <playerresourcetype.h>
#include <scriptaccess.h>
#include <scripttypedef.h>
#include <SimVis\SobVis.h>
#include <MainUI.h>
#include <lua.h>
#include <Selector.h>
#include <MetaSelTarg.h>
#include <SOBGroupManager.h>
#include <NIS\NISScript.h>
#include <NIS\NISManager.h>
#include <wchar.h>
#include <platform\timer.h>
#include <boost\utility.hpp>
#include <platform\platformexports.h>
#include <MovieRecorder.h>
#include <WeaponStatic.h>

/* ---------- constants */

/* ---------- definitions */

typedef stdext::hash_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,MotionPath *,stdext::hash_compare<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,MotionPath *> > > MotionPathList;
typedef stdext::hash_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,MotionLeader *,stdext::hash_compare<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,MotionLeader *> > > MotionLeaderList;
typedef stdext::hash_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,MotionFollower *,stdext::hash_compare<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,MotionFollower *> > > MotionFollowerList;
typedef stdext::hash_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,MotionCamera *,stdext::hash_compare<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,MotionCamera *> > > MotionCameraList;
typedef stdext::hash_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,Curve3D *,stdext::hash_compare<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,Curve3D *> > > Curve3DList;

/* ---------- prototypes */


_static void dummyAnimCallback(SobWithMesh *ship, AnimatorMad *animator, AnimatorMad::CallbackEvent event);

/* ---------- globals */

/* ---------- private variables */

_static
{
    extern char const *k_NISMusicRoot; // 0x839634
    extern char const *k_NISMusicAtEndRoot; // 0x839638
    extern char const *k_SoundEventRoot; // 0x83963C
    extern float const NISUpdateRate; // 0x79F524
    extern float const NISUpdatePeriod; // 0x839640
}

/* ---------- public code */

NISScript::NISScript(NIS *) // 0x5558AD
{
    mangled_assert("??0NISScript@@QAE@PAVNIS@@@Z");
    todo("implement");
}

_inline LuaBinding::ObjInternal0<void,LuaBinding::Functor0MemberNonConst<void,NISScript> >::~ObjInternal0<void,LuaBinding::Functor0MemberNonConst<void,NISScript> >() // 0x555931
{
    mangled_assert("??1?$ObjInternal0@XV?$Functor0MemberNonConst@XVNISScript@@@LuaBinding@@@LuaBinding@@UAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline LuaBinding::ObjInternal1<float,void,LuaBinding::Functor1MemberNonConst<float,void,NISScript> >::~ObjInternal1<float,void,LuaBinding::Functor1MemberNonConst<float,void,NISScript> >() // 0x555937
{
    mangled_assert("??1?$ObjInternal1@MXV?$Functor1MemberNonConst@MXVNISScript@@@LuaBinding@@@LuaBinding@@UAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline LuaBinding::ObjInternal1<char const *,void,LuaBinding::Functor1MemberNonConst<char const *,void,NISScript> >::~ObjInternal1<char const *,void,LuaBinding::Functor1MemberNonConst<char const *,void,NISScript> >() // 0x55593D
{
    mangled_assert("??1?$ObjInternal1@PBDXV?$Functor1MemberNonConst@PBDXVNISScript@@@LuaBinding@@@LuaBinding@@UAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline LuaBinding::ObjInternal1<bool,void,LuaBinding::Functor1MemberNonConst<bool,void,NISScript> >::~ObjInternal1<bool,void,LuaBinding::Functor1MemberNonConst<bool,void,NISScript> >() // 0x555943
{
    mangled_assert("??1?$ObjInternal1@_NXV?$Functor1MemberNonConst@_NXVNISScript@@@LuaBinding@@@LuaBinding@@UAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline LuaBinding::ObjInternal2<float,float,void,LuaBinding::Functor2MemberNonConst<float,float,void,NISScript> >::~ObjInternal2<float,float,void,LuaBinding::Functor2MemberNonConst<float,float,void,NISScript> >() // 0x555949
{
    mangled_assert("??1?$ObjInternal2@MMXV?$Functor2MemberNonConst@MMXVNISScript@@@LuaBinding@@@LuaBinding@@UAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline LuaBinding::ObjInternal2<char const *,float,void,LuaBinding::Functor2MemberNonConst<char const *,float,void,NISScript> >::~ObjInternal2<char const *,float,void,LuaBinding::Functor2MemberNonConst<char const *,float,void,NISScript> >() // 0x55594F
{
    mangled_assert("??1?$ObjInternal2@PBDMXV?$Functor2MemberNonConst@PBDMXVNISScript@@@LuaBinding@@@LuaBinding@@UAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline LuaBinding::ObjInternal3<char const *,float,float,void,LuaBinding::Functor3MemberNonConst<char const *,float,float,void,NISScript> >::~ObjInternal3<char const *,float,float,void,LuaBinding::Functor3MemberNonConst<char const *,float,float,void,NISScript> >() // 0x555955
{
    mangled_assert("??1?$ObjInternal3@PBDMMXV?$Functor3MemberNonConst@PBDMMXVNISScript@@@LuaBinding@@@LuaBinding@@UAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline LuaBinding::ObjInternal4<char const *,float,float,float,void,LuaBinding::Functor4MemberNonConst<char const *,float,float,float,void,NISScript> >::~ObjInternal4<char const *,float,float,float,void,LuaBinding::Functor4MemberNonConst<char const *,float,float,float,void,NISScript> >() // 0x55595B
{
    mangled_assert("??1?$ObjInternal4@PBDMMMXV?$Functor4MemberNonConst@PBDMMMXVNISScript@@@LuaBinding@@@LuaBinding@@UAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline LuaBinding::ObjInternal8<char const *,float,float,float,float,float,float,float,void,LuaBinding::Functor8Member<char const *,float,float,float,float,float,float,float,void,NISScript> >::~ObjInternal8<char const *,float,float,float,float,float,float,float,void,LuaBinding::Functor8Member<char const *,float,float,float,float,float,float,float,void,NISScript> >() // 0x555961
{
    mangled_assert("??1?$ObjInternal8@PBDMMMMMMMXV?$Functor8Member@PBDMMMMMMMXVNISScript@@@LuaBinding@@@LuaBinding@@UAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline NISScript::Data::~Data() // 0x555967
{
    mangled_assert("??1Data@NISScript@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

NISScript::~NISScript() // 0x55596F
{
    mangled_assert("??1NISScript@@QAE@XZ");
    todo("implement");
}

_inline NISScript::Data::Data() // 0x55589F
{
    mangled_assert("??0Data@NISScript@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

void NISScript::luaSetup() // 0x5565B3
{
    mangled_assert("?luaSetup@NISScript@@QAEXXZ");
    todo("implement");
}

void NISScript::luaReset() // 0x5565A9
{
    mangled_assert("?luaReset@NISScript@@QAEXXZ");
    todo("implement");
}

void NISScript::start() // 0x5579DD
{
    mangled_assert("?start@NISScript@@QAEXXZ");
    todo("implement");
}

bool NISScript::isWideScreenOut() // 0x556559
{
    mangled_assert("?isWideScreenOut@NISScript@@QAE_NXZ");
    todo("implement");
}

void NISScript::runCode(MotionFollower *, Sob *, char const *) // 0x557728
{
    mangled_assert("?runCode@NISScript@@QAEXPAVMotionFollower@@PAVSob@@PBD@Z");
    todo("implement");
}

void NISScript::wideScreenIn(float) // 0x557A71
{
    mangled_assert("?wideScreenIn@NISScript@@QAEXM@Z");
    todo("implement");
}

void NISScript::wideScreenOut(float) // 0x557A8C
{
    mangled_assert("?wideScreenOut@NISScript@@QAEXM@Z");
    todo("implement");
}

void NISScript::nisOut(float) // 0x5576CE
{
    mangled_assert("?nisOut@NISScript@@QAEXM@Z");
    todo("implement");
}

void NISScript::fadeTo(float, float) // 0x5563F9
{
    mangled_assert("?fadeTo@NISScript@@QAEXMM@Z");
    todo("implement");
}

void NISScript::fadeSet(float) // 0x5563DE
{
    mangled_assert("?fadeSet@NISScript@@QAEXM@Z");
    todo("implement");
}

void NISScript::displayCard(char const *, float, float, float, float, float, float, float) // 0x55633D
{
    mangled_assert("?displayCard@NISScript@@QAEXPBDMMMMMMM@Z");
    todo("implement");
}

void NISScript::hide() // 0x5564F7
{
    mangled_assert("?hide@NISScript@@QAEXXZ");
    todo("implement");
}

void NISScript::show() // 0x5578E9
{
    mangled_assert("?show@NISScript@@QAEXXZ");
    todo("implement");
}

void NISScript::invincible() // 0x556548
{
    mangled_assert("?invincible@NISScript@@QAEXXZ");
    todo("implement");
}

void NISScript::vincible() // 0x557A60
{
    mangled_assert("?vincible@NISScript@@QAEXXZ");
    todo("implement");
}

void NISScript::cameraCut(char const *) // 0x556276
{
    mangled_assert("?cameraCut@NISScript@@QAEXPBD@Z");
    todo("implement");
}

void NISScript::cameraBlendIn(char const *, float) // 0x556259
{
    mangled_assert("?cameraBlendIn@NISScript@@QAEXPBDM@Z");
    todo("implement");
}

void NISScript::cameraFadeIn(char const *, float, float, float) // 0x5562BA
{
    mangled_assert("?cameraFadeIn@NISScript@@QAEXPBDMMM@Z");
    todo("implement");
}

void NISScript::cameraLeave() // 0x5562F1
{
    mangled_assert("?cameraLeave@NISScript@@QAEXXZ");
    todo("implement");
}

void NISScript::musicStartAtEnd(char const *) // 0x5574F1
{
    mangled_assert("?musicStartAtEnd@NISScript@@QAEXPBD@Z");
    todo("implement");
}

void NISScript::musicStart(char const *) // 0x55746B
{
    mangled_assert("?musicStart@NISScript@@QAEXPBD@Z");
    todo("implement");
}

void NISScript::musicStartFade(char const *, float) // 0x55757B
{
    mangled_assert("?musicStartFade@NISScript@@QAEXPBDM@Z");
    todo("implement");
}

void NISScript::musicStop(float) // 0x557604
{
    mangled_assert("?musicStop@NISScript@@QAEXM@Z");
    todo("implement");
}

void NISScript::death(char const *) // 0x5562FB
{
    mangled_assert("?death@NISScript@@QAEXPBD@Z");
    todo("implement");
}

void NISScript::attack(char const *) // 0x556241
{
    mangled_assert("?attack@NISScript@@QAEXPBD@Z");
    todo("implement");
}

void NISScript::haltAttack() // 0x5564AB
{
    mangled_assert("?haltAttack@NISScript@@QAEXXZ");
    todo("implement");
}

void NISScript::fire() // 0x556421
{
    mangled_assert("?fire@NISScript@@QAEXXZ");
    todo("implement");
}

void NISScript::hyperspaceIn() // 0x55652C
{
    mangled_assert("?hyperspaceIn@NISScript@@QAEXXZ");
    todo("implement");
}

void NISScript::hyperspaceOut() // 0x55653A
{
    mangled_assert("?hyperspaceOut@NISScript@@QAEXXZ");
    todo("implement");
}

void NISScript::setInHyperspace() // 0x5577D9
{
    mangled_assert("?setInHyperspace@NISScript@@QAEXXZ");
    todo("implement");
}

void NISScript::musicVolume(float) // 0x55761F
{
    mangled_assert("?musicVolume@NISScript@@QAEXM@Z");
    todo("implement");
}

void NISScript::speechVolume(float) // 0x5579AA
{
    mangled_assert("?speechVolume@NISScript@@QAEXM@Z");
    todo("implement");
}

void NISScript::speechSetDir(char const *) // 0x5579A0
{
    mangled_assert("?speechSetDir@NISScript@@QAEXPBD@Z");
    todo("implement");
}

void NISScript::SFXVolume(float) // 0x55607D
{
    mangled_assert("?SFXVolume@NISScript@@QAEXM@Z");
    todo("implement");
}

void NISScript::engineSoundVolume(float) // 0x5563DB
{
    mangled_assert("?engineSoundVolume@NISScript@@QAEXM@Z");
    todo("implement");
}

void NISScript::ambientSoundVolume(float) // 0x55623E
{
    mangled_assert("?ambientSoundVolume@NISScript@@QAEXM@Z");
    todo("implement");
}

void NISScript::soundEvent(char const *) // 0x5578FA
{
    mangled_assert("?soundEvent@NISScript@@QAEXPBD@Z");
    todo("implement");
}

void NISScript::speechEvent(char const *, float) // 0x557983
{
    mangled_assert("?speechEvent@NISScript@@QAEXPBDM@Z");
    todo("implement");
}

void NISScript::fleetSpeechEvent(char const *) // 0x55647F
{
    mangled_assert("?fleetSpeechEvent@NISScript@@QAEXPBD@Z");
    todo("implement");
}

void NISScript::health(float) // 0x5564BD
{
    mangled_assert("?health@NISScript@@QAEXM@Z");
    todo("implement");
}

void NISScript::lockLOD(bool) // 0x556586
{
    mangled_assert("?lockLOD@NISScript@@QAEX_N@Z");
    todo("implement");
}

void NISScript::remainAtEnd(char const *) // 0x557701
{
    mangled_assert("?remainAtEnd@NISScript@@QAEXPBD@Z");
    todo("implement");
}

void NISScript::keepMovingAtEnd(char const *) // 0x55655F
{
    mangled_assert("?keepMovingAtEnd@NISScript@@QAEXPBD@Z");
    todo("implement");
}

void NISScript::meshAnimStart(char const *) // 0x5573CC
{
    mangled_assert("?meshAnimStart@NISScript@@QAEXPBD@Z");
    todo("implement");
}

void NISScript::meshAnimStop(char const *) // 0x55744C
{
    mangled_assert("?meshAnimStop@NISScript@@QAEXPBD@Z");
    todo("implement");
}

void NISScript::meshAnimPause(char const *) // 0x5573AD
{
    mangled_assert("?meshAnimPause@NISScript@@QAEXPBD@Z");
    todo("implement");
}

void NISScript::setMADState(char const *) // 0x5577E7
{
    mangled_assert("?setMADState@NISScript@@QAEXPBD@Z");
    todo("implement");
}

void NISScript::newNIS(char const *) // 0x557699
{
    mangled_assert("?newNIS@NISScript@@QAEXPBD@Z");
    todo("implement");
}

void NISScript::focusAtEnd() // 0x556490
{
    mangled_assert("?focusAtEnd@NISScript@@QAEXXZ");
    todo("implement");
}

void NISScript::focus() // 0x556482
{
    mangled_assert("?focus@NISScript@@QAEXXZ");
    todo("implement");
}

void NISScript::pauseUniverse(bool) // 0x5576F1
{
    mangled_assert("?pauseUniverse@NISScript@@QAEX_N@Z");
    todo("implement");
}

void NISScript::hideUniverse(bool) // 0x55651C
{
    mangled_assert("?hideUniverse@NISScript@@QAEX_N@Z");
    todo("implement");
}

void NISScript::trailZero() // 0x557A36
{
    mangled_assert("?trailZero@NISScript@@QAEXXZ");
    todo("implement");
}

void NISScript::trailMove() // 0x557A24
{
    mangled_assert("?trailMove@NISScript@@QAEXXZ");
    todo("implement");
}

void NISScript::SMPTEOn(char const *, float, float) // 0x5560BE
{
    mangled_assert("?SMPTEOn@NISScript@@QAEXPBDMM@Z");
    todo("implement");
}

void NISScript::SMPTEOff() // 0x5560B0
{
    mangled_assert("?SMPTEOff@NISScript@@QAEXXZ");
    todo("implement");
}

void NISScript::navlightSpeed(float) // 0x55767E
{
    mangled_assert("?navlightSpeed@NISScript@@QAEXM@Z");
    todo("implement");
}

void NISScript::navlightPower(float) // 0x557652
{
    mangled_assert("?navlightPower@NISScript@@QAEXM@Z");
    todo("implement");
}

void NISScript::startEffectEvent(char const *) // 0x5579E4
{
    mangled_assert("?startEffectEvent@NISScript@@QAEXPBD@Z");
    todo("implement");
}

void NISScript::setEnginePower(float) // 0x557780
{
    mangled_assert("?setEnginePower@NISScript@@QAEXM@Z");
    todo("implement");
}

void NISScript::setBridgePower(float) // 0x55776F
{
    mangled_assert("?setBridgePower@NISScript@@QAEXM@Z");
    todo("implement");
}

void NISScript::triggerEffect(float) // 0x557A44
{
    mangled_assert("?triggerEffect@NISScript@@QAEXM@Z");
    todo("implement");
}

void NISScript::destroyEffect() // 0x55632F
{
    mangled_assert("?destroyEffect@NISScript@@QAEXXZ");
    todo("implement");
}

void NISScript::setPlayer(float) // 0x557822
{
    mangled_assert("?setPlayer@NISScript@@QAEXM@Z");
    todo("implement");
}

void NISScript::setResourceValue(float) // 0x5578AE
{
    mangled_assert("?setResourceValue@NISScript@@QAEXM@Z");
    todo("implement");
}

void NISScript::runScar(char const *) // 0x557754
{
    mangled_assert("?runScar@NISScript@@QAEXPBD@Z");
    todo("implement");
}

void NISScript::stayFadedAtEnd() // 0x557A16
{
    mangled_assert("?stayFadedAtEnd@NISScript@@QAEXXZ");
    todo("implement");
}

/* ---------- private code */

_static void dummyAnimCallback(SobWithMesh *ship, AnimatorMad *animator, AnimatorMad::CallbackEvent event) // 0x5563D8
{
    mangled_assert("dummyAnimCallback");
    todo("implement");
}
#endif
