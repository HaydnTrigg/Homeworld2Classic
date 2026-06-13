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

_extern _sub_5558AD(NISScript *const, NIS *);
NISScript::NISScript(NIS *) // 0x5558AD
{
    mangled_assert("??0NISScript@@QAE@PAVNIS@@@Z");
    todo("implement");
    _sub_5558AD(this, arg);
}

_extern void _sub_555931(LuaBinding::ObjInternal0<void,LuaBinding::Functor0MemberNonConst<void,NISScript> > *const);
_inline LuaBinding::ObjInternal0<void,LuaBinding::Functor0MemberNonConst<void,NISScript> >::~ObjInternal0<void,LuaBinding::Functor0MemberNonConst<void,NISScript> >() // 0x555931
{
    mangled_assert("??1?$ObjInternal0@XV?$Functor0MemberNonConst@XVNISScript@@@LuaBinding@@@LuaBinding@@UAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_555931(this);
}

_extern void _sub_555937(LuaBinding::ObjInternal1<float,void,LuaBinding::Functor1MemberNonConst<float,void,NISScript> > *const);
_inline LuaBinding::ObjInternal1<float,void,LuaBinding::Functor1MemberNonConst<float,void,NISScript> >::~ObjInternal1<float,void,LuaBinding::Functor1MemberNonConst<float,void,NISScript> >() // 0x555937
{
    mangled_assert("??1?$ObjInternal1@MXV?$Functor1MemberNonConst@MXVNISScript@@@LuaBinding@@@LuaBinding@@UAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_555937(this);
}

_extern void _sub_55593D(LuaBinding::ObjInternal1<char const *,void,LuaBinding::Functor1MemberNonConst<char const *,void,NISScript> > *const);
_inline LuaBinding::ObjInternal1<char const *,void,LuaBinding::Functor1MemberNonConst<char const *,void,NISScript> >::~ObjInternal1<char const *,void,LuaBinding::Functor1MemberNonConst<char const *,void,NISScript> >() // 0x55593D
{
    mangled_assert("??1?$ObjInternal1@PBDXV?$Functor1MemberNonConst@PBDXVNISScript@@@LuaBinding@@@LuaBinding@@UAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_55593D(this);
}

_extern void _sub_555943(LuaBinding::ObjInternal1<bool,void,LuaBinding::Functor1MemberNonConst<bool,void,NISScript> > *const);
_inline LuaBinding::ObjInternal1<bool,void,LuaBinding::Functor1MemberNonConst<bool,void,NISScript> >::~ObjInternal1<bool,void,LuaBinding::Functor1MemberNonConst<bool,void,NISScript> >() // 0x555943
{
    mangled_assert("??1?$ObjInternal1@_NXV?$Functor1MemberNonConst@_NXVNISScript@@@LuaBinding@@@LuaBinding@@UAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_555943(this);
}

_extern void _sub_555949(LuaBinding::ObjInternal2<float,float,void,LuaBinding::Functor2MemberNonConst<float,float,void,NISScript> > *const);
_inline LuaBinding::ObjInternal2<float,float,void,LuaBinding::Functor2MemberNonConst<float,float,void,NISScript> >::~ObjInternal2<float,float,void,LuaBinding::Functor2MemberNonConst<float,float,void,NISScript> >() // 0x555949
{
    mangled_assert("??1?$ObjInternal2@MMXV?$Functor2MemberNonConst@MMXVNISScript@@@LuaBinding@@@LuaBinding@@UAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_555949(this);
}

_extern void _sub_55594F(LuaBinding::ObjInternal2<char const *,float,void,LuaBinding::Functor2MemberNonConst<char const *,float,void,NISScript> > *const);
_inline LuaBinding::ObjInternal2<char const *,float,void,LuaBinding::Functor2MemberNonConst<char const *,float,void,NISScript> >::~ObjInternal2<char const *,float,void,LuaBinding::Functor2MemberNonConst<char const *,float,void,NISScript> >() // 0x55594F
{
    mangled_assert("??1?$ObjInternal2@PBDMXV?$Functor2MemberNonConst@PBDMXVNISScript@@@LuaBinding@@@LuaBinding@@UAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_55594F(this);
}

_extern void _sub_555955(LuaBinding::ObjInternal3<char const *,float,float,void,LuaBinding::Functor3MemberNonConst<char const *,float,float,void,NISScript> > *const);
_inline LuaBinding::ObjInternal3<char const *,float,float,void,LuaBinding::Functor3MemberNonConst<char const *,float,float,void,NISScript> >::~ObjInternal3<char const *,float,float,void,LuaBinding::Functor3MemberNonConst<char const *,float,float,void,NISScript> >() // 0x555955
{
    mangled_assert("??1?$ObjInternal3@PBDMMXV?$Functor3MemberNonConst@PBDMMXVNISScript@@@LuaBinding@@@LuaBinding@@UAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_555955(this);
}

_extern void _sub_55595B(LuaBinding::ObjInternal4<char const *,float,float,float,void,LuaBinding::Functor4MemberNonConst<char const *,float,float,float,void,NISScript> > *const);
_inline LuaBinding::ObjInternal4<char const *,float,float,float,void,LuaBinding::Functor4MemberNonConst<char const *,float,float,float,void,NISScript> >::~ObjInternal4<char const *,float,float,float,void,LuaBinding::Functor4MemberNonConst<char const *,float,float,float,void,NISScript> >() // 0x55595B
{
    mangled_assert("??1?$ObjInternal4@PBDMMMXV?$Functor4MemberNonConst@PBDMMMXVNISScript@@@LuaBinding@@@LuaBinding@@UAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_55595B(this);
}

_extern void _sub_555961(LuaBinding::ObjInternal8<char const *,float,float,float,float,float,float,float,void,LuaBinding::Functor8Member<char const *,float,float,float,float,float,float,float,void,NISScript> > *const);
_inline LuaBinding::ObjInternal8<char const *,float,float,float,float,float,float,float,void,LuaBinding::Functor8Member<char const *,float,float,float,float,float,float,float,void,NISScript> >::~ObjInternal8<char const *,float,float,float,float,float,float,float,void,LuaBinding::Functor8Member<char const *,float,float,float,float,float,float,float,void,NISScript> >() // 0x555961
{
    mangled_assert("??1?$ObjInternal8@PBDMMMMMMMXV?$Functor8Member@PBDMMMMMMMXVNISScript@@@LuaBinding@@@LuaBinding@@UAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_555961(this);
}

_extern void _sub_555967(NISScript::Data *const);
_inline NISScript::Data::~Data() // 0x555967
{
    mangled_assert("??1Data@NISScript@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_555967(this);
}

_extern void _sub_55596F(NISScript *const);
NISScript::~NISScript() // 0x55596F
{
    mangled_assert("??1NISScript@@QAE@XZ");
    todo("implement");
    _sub_55596F(this);
}

_extern _sub_55589F(NISScript::Data *const);
_inline NISScript::Data::Data() // 0x55589F
{
    mangled_assert("??0Data@NISScript@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_55589F(this);
}

_extern void _sub_5565B3(NISScript *const);
void NISScript::luaSetup() // 0x5565B3
{
    mangled_assert("?luaSetup@NISScript@@QAEXXZ");
    todo("implement");
    _sub_5565B3(this);
}

_extern void _sub_5565A9(NISScript *const);
void NISScript::luaReset() // 0x5565A9
{
    mangled_assert("?luaReset@NISScript@@QAEXXZ");
    todo("implement");
    _sub_5565A9(this);
}

_extern void _sub_5579DD(NISScript *const);
void NISScript::start() // 0x5579DD
{
    mangled_assert("?start@NISScript@@QAEXXZ");
    todo("implement");
    _sub_5579DD(this);
}

_extern bool _sub_556559(NISScript *const);
bool NISScript::isWideScreenOut() // 0x556559
{
    mangled_assert("?isWideScreenOut@NISScript@@QAE_NXZ");
    todo("implement");
    bool __result = _sub_556559(this);
    return __result;
}

_extern void _sub_557728(NISScript *const, MotionFollower *, Sob *, char const *);
void NISScript::runCode(MotionFollower *, Sob *, char const *) // 0x557728
{
    mangled_assert("?runCode@NISScript@@QAEXPAVMotionFollower@@PAVSob@@PBD@Z");
    todo("implement");
    _sub_557728(this, arg, arg, arg);
}

_extern void _sub_557A71(NISScript *const, float);
void NISScript::wideScreenIn(float) // 0x557A71
{
    mangled_assert("?wideScreenIn@NISScript@@QAEXM@Z");
    todo("implement");
    _sub_557A71(this, arg);
}

_extern void _sub_557A8C(NISScript *const, float);
void NISScript::wideScreenOut(float) // 0x557A8C
{
    mangled_assert("?wideScreenOut@NISScript@@QAEXM@Z");
    todo("implement");
    _sub_557A8C(this, arg);
}

_extern void _sub_5576CE(NISScript *const, float);
void NISScript::nisOut(float) // 0x5576CE
{
    mangled_assert("?nisOut@NISScript@@QAEXM@Z");
    todo("implement");
    _sub_5576CE(this, arg);
}

_extern void _sub_5563F9(NISScript *const, float, float);
void NISScript::fadeTo(float, float) // 0x5563F9
{
    mangled_assert("?fadeTo@NISScript@@QAEXMM@Z");
    todo("implement");
    _sub_5563F9(this, arg, arg);
}

_extern void _sub_5563DE(NISScript *const, float);
void NISScript::fadeSet(float) // 0x5563DE
{
    mangled_assert("?fadeSet@NISScript@@QAEXM@Z");
    todo("implement");
    _sub_5563DE(this, arg);
}

_extern void _sub_55633D(NISScript *const, char const *, float, float, float, float, float, float, float);
void NISScript::displayCard(char const *, float, float, float, float, float, float, float) // 0x55633D
{
    mangled_assert("?displayCard@NISScript@@QAEXPBDMMMMMMM@Z");
    todo("implement");
    _sub_55633D(this, arg, arg, arg, arg, arg, arg, arg, arg);
}

_extern void _sub_5564F7(NISScript *const);
void NISScript::hide() // 0x5564F7
{
    mangled_assert("?hide@NISScript@@QAEXXZ");
    todo("implement");
    _sub_5564F7(this);
}

_extern void _sub_5578E9(NISScript *const);
void NISScript::show() // 0x5578E9
{
    mangled_assert("?show@NISScript@@QAEXXZ");
    todo("implement");
    _sub_5578E9(this);
}

_extern void _sub_556548(NISScript *const);
void NISScript::invincible() // 0x556548
{
    mangled_assert("?invincible@NISScript@@QAEXXZ");
    todo("implement");
    _sub_556548(this);
}

_extern void _sub_557A60(NISScript *const);
void NISScript::vincible() // 0x557A60
{
    mangled_assert("?vincible@NISScript@@QAEXXZ");
    todo("implement");
    _sub_557A60(this);
}

_extern void _sub_556276(NISScript *const, char const *);
void NISScript::cameraCut(char const *) // 0x556276
{
    mangled_assert("?cameraCut@NISScript@@QAEXPBD@Z");
    todo("implement");
    _sub_556276(this, arg);
}

_extern void _sub_556259(NISScript *const, char const *, float);
void NISScript::cameraBlendIn(char const *, float) // 0x556259
{
    mangled_assert("?cameraBlendIn@NISScript@@QAEXPBDM@Z");
    todo("implement");
    _sub_556259(this, arg, arg);
}

_extern void _sub_5562BA(NISScript *const, char const *, float, float, float);
void NISScript::cameraFadeIn(char const *, float, float, float) // 0x5562BA
{
    mangled_assert("?cameraFadeIn@NISScript@@QAEXPBDMMM@Z");
    todo("implement");
    _sub_5562BA(this, arg, arg, arg, arg);
}

_extern void _sub_5562F1(NISScript *const);
void NISScript::cameraLeave() // 0x5562F1
{
    mangled_assert("?cameraLeave@NISScript@@QAEXXZ");
    todo("implement");
    _sub_5562F1(this);
}

_extern void _sub_5574F1(NISScript *const, char const *);
void NISScript::musicStartAtEnd(char const *) // 0x5574F1
{
    mangled_assert("?musicStartAtEnd@NISScript@@QAEXPBD@Z");
    todo("implement");
    _sub_5574F1(this, arg);
}

_extern void _sub_55746B(NISScript *const, char const *);
void NISScript::musicStart(char const *) // 0x55746B
{
    mangled_assert("?musicStart@NISScript@@QAEXPBD@Z");
    todo("implement");
    _sub_55746B(this, arg);
}

_extern void _sub_55757B(NISScript *const, char const *, float);
void NISScript::musicStartFade(char const *, float) // 0x55757B
{
    mangled_assert("?musicStartFade@NISScript@@QAEXPBDM@Z");
    todo("implement");
    _sub_55757B(this, arg, arg);
}

_extern void _sub_557604(NISScript *const, float);
void NISScript::musicStop(float) // 0x557604
{
    mangled_assert("?musicStop@NISScript@@QAEXM@Z");
    todo("implement");
    _sub_557604(this, arg);
}

_extern void _sub_5562FB(NISScript *const, char const *);
void NISScript::death(char const *) // 0x5562FB
{
    mangled_assert("?death@NISScript@@QAEXPBD@Z");
    todo("implement");
    _sub_5562FB(this, arg);
}

_extern void _sub_556241(NISScript *const, char const *);
void NISScript::attack(char const *) // 0x556241
{
    mangled_assert("?attack@NISScript@@QAEXPBD@Z");
    todo("implement");
    _sub_556241(this, arg);
}

_extern void _sub_5564AB(NISScript *const);
void NISScript::haltAttack() // 0x5564AB
{
    mangled_assert("?haltAttack@NISScript@@QAEXXZ");
    todo("implement");
    _sub_5564AB(this);
}

_extern void _sub_556421(NISScript *const);
void NISScript::fire() // 0x556421
{
    mangled_assert("?fire@NISScript@@QAEXXZ");
    todo("implement");
    _sub_556421(this);
}

_extern void _sub_55652C(NISScript *const);
void NISScript::hyperspaceIn() // 0x55652C
{
    mangled_assert("?hyperspaceIn@NISScript@@QAEXXZ");
    todo("implement");
    _sub_55652C(this);
}

_extern void _sub_55653A(NISScript *const);
void NISScript::hyperspaceOut() // 0x55653A
{
    mangled_assert("?hyperspaceOut@NISScript@@QAEXXZ");
    todo("implement");
    _sub_55653A(this);
}

_extern void _sub_5577D9(NISScript *const);
void NISScript::setInHyperspace() // 0x5577D9
{
    mangled_assert("?setInHyperspace@NISScript@@QAEXXZ");
    todo("implement");
    _sub_5577D9(this);
}

_extern void _sub_55761F(NISScript *const, float);
void NISScript::musicVolume(float) // 0x55761F
{
    mangled_assert("?musicVolume@NISScript@@QAEXM@Z");
    todo("implement");
    _sub_55761F(this, arg);
}

_extern void _sub_5579AA(NISScript *const, float);
void NISScript::speechVolume(float) // 0x5579AA
{
    mangled_assert("?speechVolume@NISScript@@QAEXM@Z");
    todo("implement");
    _sub_5579AA(this, arg);
}

_extern void _sub_5579A0(NISScript *const, char const *);
void NISScript::speechSetDir(char const *) // 0x5579A0
{
    mangled_assert("?speechSetDir@NISScript@@QAEXPBD@Z");
    todo("implement");
    _sub_5579A0(this, arg);
}

_extern void _sub_55607D(NISScript *const, float);
void NISScript::SFXVolume(float) // 0x55607D
{
    mangled_assert("?SFXVolume@NISScript@@QAEXM@Z");
    todo("implement");
    _sub_55607D(this, arg);
}

_extern void _sub_5563DB(NISScript *const, float);
void NISScript::engineSoundVolume(float) // 0x5563DB
{
    mangled_assert("?engineSoundVolume@NISScript@@QAEXM@Z");
    todo("implement");
    _sub_5563DB(this, arg);
}

_extern void _sub_55623E(NISScript *const, float);
void NISScript::ambientSoundVolume(float) // 0x55623E
{
    mangled_assert("?ambientSoundVolume@NISScript@@QAEXM@Z");
    todo("implement");
    _sub_55623E(this, arg);
}

_extern void _sub_5578FA(NISScript *const, char const *);
void NISScript::soundEvent(char const *) // 0x5578FA
{
    mangled_assert("?soundEvent@NISScript@@QAEXPBD@Z");
    todo("implement");
    _sub_5578FA(this, arg);
}

_extern void _sub_557983(NISScript *const, char const *, float);
void NISScript::speechEvent(char const *, float) // 0x557983
{
    mangled_assert("?speechEvent@NISScript@@QAEXPBDM@Z");
    todo("implement");
    _sub_557983(this, arg, arg);
}

_extern void _sub_55647F(NISScript *const, char const *);
void NISScript::fleetSpeechEvent(char const *) // 0x55647F
{
    mangled_assert("?fleetSpeechEvent@NISScript@@QAEXPBD@Z");
    todo("implement");
    _sub_55647F(this, arg);
}

_extern void _sub_5564BD(NISScript *const, float);
void NISScript::health(float) // 0x5564BD
{
    mangled_assert("?health@NISScript@@QAEXM@Z");
    todo("implement");
    _sub_5564BD(this, arg);
}

_extern void _sub_556586(NISScript *const, bool);
void NISScript::lockLOD(bool) // 0x556586
{
    mangled_assert("?lockLOD@NISScript@@QAEX_N@Z");
    todo("implement");
    _sub_556586(this, arg);
}

_extern void _sub_557701(NISScript *const, char const *);
void NISScript::remainAtEnd(char const *) // 0x557701
{
    mangled_assert("?remainAtEnd@NISScript@@QAEXPBD@Z");
    todo("implement");
    _sub_557701(this, arg);
}

_extern void _sub_55655F(NISScript *const, char const *);
void NISScript::keepMovingAtEnd(char const *) // 0x55655F
{
    mangled_assert("?keepMovingAtEnd@NISScript@@QAEXPBD@Z");
    todo("implement");
    _sub_55655F(this, arg);
}

_extern void _sub_5573CC(NISScript *const, char const *);
void NISScript::meshAnimStart(char const *) // 0x5573CC
{
    mangled_assert("?meshAnimStart@NISScript@@QAEXPBD@Z");
    todo("implement");
    _sub_5573CC(this, arg);
}

_extern void _sub_55744C(NISScript *const, char const *);
void NISScript::meshAnimStop(char const *) // 0x55744C
{
    mangled_assert("?meshAnimStop@NISScript@@QAEXPBD@Z");
    todo("implement");
    _sub_55744C(this, arg);
}

_extern void _sub_5573AD(NISScript *const, char const *);
void NISScript::meshAnimPause(char const *) // 0x5573AD
{
    mangled_assert("?meshAnimPause@NISScript@@QAEXPBD@Z");
    todo("implement");
    _sub_5573AD(this, arg);
}

_extern void _sub_5577E7(NISScript *const, char const *);
void NISScript::setMADState(char const *) // 0x5577E7
{
    mangled_assert("?setMADState@NISScript@@QAEXPBD@Z");
    todo("implement");
    _sub_5577E7(this, arg);
}

_extern void _sub_557699(NISScript *const, char const *);
void NISScript::newNIS(char const *) // 0x557699
{
    mangled_assert("?newNIS@NISScript@@QAEXPBD@Z");
    todo("implement");
    _sub_557699(this, arg);
}

_extern void _sub_556490(NISScript *const);
void NISScript::focusAtEnd() // 0x556490
{
    mangled_assert("?focusAtEnd@NISScript@@QAEXXZ");
    todo("implement");
    _sub_556490(this);
}

_extern void _sub_556482(NISScript *const);
void NISScript::focus() // 0x556482
{
    mangled_assert("?focus@NISScript@@QAEXXZ");
    todo("implement");
    _sub_556482(this);
}

_extern void _sub_5576F1(NISScript *const, bool);
void NISScript::pauseUniverse(bool) // 0x5576F1
{
    mangled_assert("?pauseUniverse@NISScript@@QAEX_N@Z");
    todo("implement");
    _sub_5576F1(this, arg);
}

_extern void _sub_55651C(NISScript *const, bool);
void NISScript::hideUniverse(bool) // 0x55651C
{
    mangled_assert("?hideUniverse@NISScript@@QAEX_N@Z");
    todo("implement");
    _sub_55651C(this, arg);
}

_extern void _sub_557A36(NISScript *const);
void NISScript::trailZero() // 0x557A36
{
    mangled_assert("?trailZero@NISScript@@QAEXXZ");
    todo("implement");
    _sub_557A36(this);
}

_extern void _sub_557A24(NISScript *const);
void NISScript::trailMove() // 0x557A24
{
    mangled_assert("?trailMove@NISScript@@QAEXXZ");
    todo("implement");
    _sub_557A24(this);
}

_extern void _sub_5560BE(NISScript *const, char const *, float, float);
void NISScript::SMPTEOn(char const *, float, float) // 0x5560BE
{
    mangled_assert("?SMPTEOn@NISScript@@QAEXPBDMM@Z");
    todo("implement");
    _sub_5560BE(this, arg, arg, arg);
}

_extern void _sub_5560B0(NISScript *const);
void NISScript::SMPTEOff() // 0x5560B0
{
    mangled_assert("?SMPTEOff@NISScript@@QAEXXZ");
    todo("implement");
    _sub_5560B0(this);
}

_extern void _sub_55767E(NISScript *const, float);
void NISScript::navlightSpeed(float) // 0x55767E
{
    mangled_assert("?navlightSpeed@NISScript@@QAEXM@Z");
    todo("implement");
    _sub_55767E(this, arg);
}

_extern void _sub_557652(NISScript *const, float);
void NISScript::navlightPower(float) // 0x557652
{
    mangled_assert("?navlightPower@NISScript@@QAEXM@Z");
    todo("implement");
    _sub_557652(this, arg);
}

_extern void _sub_5579E4(NISScript *const, char const *);
void NISScript::startEffectEvent(char const *) // 0x5579E4
{
    mangled_assert("?startEffectEvent@NISScript@@QAEXPBD@Z");
    todo("implement");
    _sub_5579E4(this, arg);
}

_extern void _sub_557780(NISScript *const, float);
void NISScript::setEnginePower(float) // 0x557780
{
    mangled_assert("?setEnginePower@NISScript@@QAEXM@Z");
    todo("implement");
    _sub_557780(this, arg);
}

_extern void _sub_55776F(NISScript *const, float);
void NISScript::setBridgePower(float) // 0x55776F
{
    mangled_assert("?setBridgePower@NISScript@@QAEXM@Z");
    todo("implement");
    _sub_55776F(this, arg);
}

_extern void _sub_557A44(NISScript *const, float);
void NISScript::triggerEffect(float) // 0x557A44
{
    mangled_assert("?triggerEffect@NISScript@@QAEXM@Z");
    todo("implement");
    _sub_557A44(this, arg);
}

_extern void _sub_55632F(NISScript *const);
void NISScript::destroyEffect() // 0x55632F
{
    mangled_assert("?destroyEffect@NISScript@@QAEXXZ");
    todo("implement");
    _sub_55632F(this);
}

_extern void _sub_557822(NISScript *const, float);
void NISScript::setPlayer(float) // 0x557822
{
    mangled_assert("?setPlayer@NISScript@@QAEXM@Z");
    todo("implement");
    _sub_557822(this, arg);
}

_extern void _sub_5578AE(NISScript *const, float);
void NISScript::setResourceValue(float) // 0x5578AE
{
    mangled_assert("?setResourceValue@NISScript@@QAEXM@Z");
    todo("implement");
    _sub_5578AE(this, arg);
}

_extern void _sub_557754(NISScript *const, char const *);
void NISScript::runScar(char const *) // 0x557754
{
    mangled_assert("?runScar@NISScript@@QAEXPBD@Z");
    todo("implement");
    _sub_557754(this, arg);
}

_extern void _sub_557A16(NISScript *const);
void NISScript::stayFadedAtEnd() // 0x557A16
{
    mangled_assert("?stayFadedAtEnd@NISScript@@QAEXXZ");
    todo("implement");
    _sub_557A16(this);
}

/* ---------- private code */

_extern void _sub_5563D8(SobWithMesh *, AnimatorMad *, AnimatorMad::CallbackEvent);
_static void dummyAnimCallback(SobWithMesh *ship, AnimatorMad *animator, AnimatorMad::CallbackEvent event) // 0x5563D8
{
    mangled_assert("dummyAnimCallback");
    todo("implement");
    _sub_5563D8(ship, animator, event);
}
#endif
