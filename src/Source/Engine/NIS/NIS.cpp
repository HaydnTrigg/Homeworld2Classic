#if 0
/* ---------- headers */

#include "decomp.h"
#include <CoordSysUtilities.h>
#include <assist\stlexsmallvector.h>
#include <seInterface2\PatchID.h>
#include <xstring>
#include <seInterface2\PatchBase.h>
#include <Collision\Primitives\aabb.h>
#include <xmemory0>
#include <Mathlib\matrix4.h>
#include <seInterface2\SoundParams.h>
#include <boost\shared_array.hpp>
#include <pch.h>
#include <SobUnmoveable.h>
#include <Race.h>
#include <GameObj.h>
#include <memory\memorylib.h>
#include <Ship\Formation.h>
#include <util\statmonitor.h>
#include <Ship\FormationPattern.h>
#include <util\utilexports.h>
#include <SOBGroupManager.h>
#include <abilities.h>
#include <Tactics.h>
#include <NURBSCurve.h>
#include <assist\array2d.h>
#include <Mathlib\matrix3.h>
#include <BuildManager.h>
#include <Camera\OrbitParameters.h>
#include <NIS\NISMotion.h>
#include <EngineTrailSystem.h>
#include <new>
#include <sobid.h>
#include <exception>
#include <xstddef>
#include <type_traits>
#include <OrderFeedback.h>
#include <orders.h>
#include <HyperSpaceCommand.h>
#include <orders_base.h>
#include <HyperSpaceBaseCommand.h>
#include <commandtype.h>
#include <command.h>
#include <xutility>
#include <SelTarg.h>
#include <utility>
#include <iosfwd>
#include <prim.h>
#include <vector>
#include <curve.h>
#include <xmemory>
#include <fileio\fileioexports.h>
#include <debug\ctassert.h>
#include <Scar\GameQuery.h>
#include <Collision\Primitives\capsule.h>
#include <dbdefines.h>
#include <Collision\Primitives\segment.h>
#include <UnitCaps\UnitCaps.h>
#include <Render\FxGL\FXManager.h>
#include <Collision\BVH\profiling.h>
#include <Render\FxGL\VarMulti.h>
#include <CameraCommand.h>
#include <CameraHW.h>
#include <list>
#include <Camera\CameraOrbitTarget.h>
#include <Camera\Camera.h>
#include <Camera\Frustum.h>
#include <SoundManager\SoundManager.h>
#include <Camera\Plane3.h>
#include <Player.h>
#include <seInterface2\SEInterface.h>
#include <seInterface2\SoundParamManager.h>
#include <Modifiers\ModifierTargetCache.h>
#include <ResearchManager.h>
#include <seInterface2\seinterfacefunc.h>
#include <assist\gbitset.h>
#include <Mathlib\vector3.h>
#include <NIS\NISManager.h>
#include <LevelDesc.h>
#include <Mathlib\vector4.h>
#include <SMPTE.h>
#include <Hash.h>
#include <fileio\md5.h>
#include <map>
#include <xtree>
#include <NIS\NISSpeech.h>
#include <boost\smart_ptr.hpp>
#include <sob.h>
#include <boost\scoped_ptr.hpp>
#include <gamestructimpl.h>
#include <sobstatic.h>
#include <Badge.h>
#include <Collision\Primitives\sphere.h>
#include <fixedpoint.h>
#include <DeSpawnCommand.h>
#include <NIS\NISScript.h>
#include <util\fixed.h>
#include <Squadron.h>
#include <ParadeCommand.h>
#include <NIS\NIS.h>
#include <Mathlib\vector2.h>
#include <Parade.h>
#include <hash_map>
#include <util\types.h>
#include <xhash>
#include <MultiplierContainer.h>
#include <visibility.h>
#include <MultiplierTypes.h>
#include <Collision\BVH\bvh.h>
#include <boost\cstdint.hpp>
#include <boost\config.hpp>
#include <Mathlib\mathutil.h>
#include <boost\scoped_array.hpp>
#include <Mathlib\quat.h>
#include <boost\static_assert.hpp>
#include <AnimCurve.h>
#include <seInterface2\SampleID.h>
#include <HyperspaceManager.h>
#include <seInterface2\SampleBase.h>
#include <SquadronList.h>
#include <Collision\Primitives\obb.h>
#include <weaponinfo.h>
#include <Mathlib\mathlibdll.h>
#include <Interface.h>
#include <Mathlib\fastmath.h>
#include <SensorsManager.h>
#include <NIS\NISTransition.h>
#include <pathpoints.h>
#include <platform\timer.h>
#include <Render\gl\r_types.h>
#include <playerresourcetype.h>
#include <platform\platformexports.h>
#include <Mathlib\matvec.h>
#include <debug\db.h>
#include <Ship\FormationTargetInfo.h>
#include <TeamColourRegistry.h>
#include <scripting.h>
#include <savegame.h>
#include <scriptaccess.h>
#include <deque>
#include <task.h>
#include <scripttypedef.h>
#include <MainUI.h>
#include <stack>
#include <Selector.h>
#include <Render\gl\r_defines.h>
#include <MetaSelTarg.h>
#include <Render\gl\glext.h>
#include <SobWithMeshStatic.h>
#include <SoundManager\SoundEntityHandle.h>
#include <boost\shared_ptr.hpp>
#include <util\colour.h>
#include <lua.h>
#include <sobtypes.h>
#include <NIS\NISLoad.h>
#include <boost\throw_exception.hpp>
#include <ship.h>
#include <SobWithMesh.h>
#include <selection.h>
#include <savegamedef.h>
#include <SobRigidBody.h>
#include <Volume.h>
#include <boost\detail\shared_count.hpp>
#include <DynamicPoint.h>
#include <VolumeStatic.h>
#include <bitset>
#include <SobRigidBodyStatic.h>
#include <SobUnmoveableStatic.h>
#include <boost\detail\lwm_win32.hpp>
#include <seInterface2\sedefinesshared.h>
#include <SOBGroup.h>
#include <MeshAnimation.h>
#include <ShieldTypes.h>
#include <Collision\BVH\octree.h>
#include <gamemsg.h>
#include <Collision\BVH\span.h>
#include <Collision\BVH\Internal\span_i.h>
#include <Collision\BVH\proxy.h>
#include <Collision\intersect.h>
#include <Collision\primitivesfwd.h>
#include <Subsystems\HardPointManager.h>
#include <gameSettings.h>
#include <Subsystems\HardPoint.h>
#include <config.h>
#include <wchar.h>
#include <Subsystems\HardPointStatic.h>
#include <string>
#include <syncChecking.h>
#include <Subsystems\SubSystemType.h>
#include <Universe.h>
#include <queue>
#include <Waypoint.h>
#include <algorithm>
#include <Interpolation.h>

/* ---------- constants */

/* ---------- definitions */

class `anonymous-namespace'::DELETESECOND
{
};
static_assert(sizeof(`anonymous-namespace'::DELETESECOND) == 1, "Invalid `anonymous-namespace'::DELETESECOND size");

typedef `anonymous-namespace'::DELETESECOND ?A0x9b4e573f::DELETESECOND;

/* ---------- prototypes */


_static bool handleKeepMovingAtEnd(MotionFollower *pFollower);
_static void handleRemainAtEnd_Ship(MotionFollower *pFollower);
_static void skipEffect(MotionFollower &mf);
_static void skipHyperspace(MotionFollower &mf);
_static bool checkCurveForCheat(AnimCurve *pCurve, float currentTime, float &offset);
_static bool hideUniverseFilter(Sob *pSob);

/* ---------- globals */

/* ---------- private variables */

_static
{
    extern char const *NIS_SCRIPT_EXTENSION; // 0x8394D0
    extern char const *NIS_BINARY_EXTENSION; // 0x8394D4
    extern float const NISUpdateRate; // 0x79F120
    extern float const NISUpdatePeriod; // 0x8394D8
}

/* ---------- public code */

NISEvent::NISEvent(float, __int32, char const *) // 0x547C81
{
    mangled_assert("??0NISEvent@@QAE@MHPBD@Z");
    todo("implement");
}

_inline std::_List_buy<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,Curve3D *>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,Curve3D *> > >::~_List_buy<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,Curve3D *>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,Curve3D *> > >() // 0x547D60
{
    mangled_assert("??1?$_List_buy@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVCurve3D@@@std@@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVCurve3D@@@std@@@2@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline std::_List_buy<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,MotionCamera *>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,MotionCamera *> > >::~_List_buy<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,MotionCamera *>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,MotionCamera *> > >() // 0x547D69
{
    mangled_assert("??1?$_List_buy@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVMotionCamera@@@std@@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVMotionCamera@@@std@@@2@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline std::_List_buy<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,MotionFollower *>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,MotionFollower *> > >::~_List_buy<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,MotionFollower *>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,MotionFollower *> > >() // 0x547D72
{
    mangled_assert("??1?$_List_buy@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVMotionFollower@@@std@@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVMotionFollower@@@std@@@2@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline std::_List_buy<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,MotionLeader *>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,MotionLeader *> > >::~_List_buy<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,MotionLeader *>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,MotionLeader *> > >() // 0x547D7B
{
    mangled_assert("??1?$_List_buy@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVMotionLeader@@@std@@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVMotionLeader@@@std@@@2@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline std::_List_buy<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,MotionPath *>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,MotionPath *> > >::~_List_buy<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,MotionPath *>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,MotionPath *> > >() // 0x547D84
{
    mangled_assert("??1?$_List_buy@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVMotionPath@@@std@@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVMotionPath@@@std@@@2@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline stdext::hash_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,Curve3D *,stdext::hash_compare<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,Curve3D *> > >::~hash_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,Curve3D *,stdext::hash_compare<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,Curve3D *> > >() // 0x547D8D
{
    mangled_assert("??1?$hash_map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVCurve3D@@V?$hash_compare@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@stdext@@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVCurve3D@@@std@@@2@@stdext@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline stdext::hash_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,MotionCamera *,stdext::hash_compare<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,MotionCamera *> > >::~hash_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,MotionCamera *,stdext::hash_compare<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,MotionCamera *> > >() // 0x547D92
{
    mangled_assert("??1?$hash_map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVMotionCamera@@V?$hash_compare@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@stdext@@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVMotionCamera@@@std@@@2@@stdext@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline stdext::hash_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,MotionFollower *,stdext::hash_compare<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,MotionFollower *> > >::~hash_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,MotionFollower *,stdext::hash_compare<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,MotionFollower *> > >() // 0x547D97
{
    mangled_assert("??1?$hash_map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVMotionFollower@@V?$hash_compare@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@stdext@@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVMotionFollower@@@std@@@2@@stdext@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

NISEvent::~NISEvent() // 0x547F3C
{
    mangled_assert("??1NISEvent@@QAE@XZ");
    todo("implement");
}

_inline stdext::hash_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,MotionLeader *,stdext::hash_compare<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,MotionLeader *> > >::~hash_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,MotionLeader *,stdext::hash_compare<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,MotionLeader *> > >() // 0x547D9C
{
    mangled_assert("??1?$hash_map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVMotionLeader@@V?$hash_compare@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@stdext@@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVMotionLeader@@@std@@@2@@stdext@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline stdext::hash_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,MotionPath *,stdext::hash_compare<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,MotionPath *> > >::~hash_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,MotionPath *,stdext::hash_compare<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,MotionPath *> > >() // 0x547DA1
{
    mangled_assert("??1?$hash_map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVMotionPath@@V?$hash_compare@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@stdext@@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVMotionPath@@@std@@@2@@stdext@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,Curve3D *>::~pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,Curve3D *>() // 0x547E00
{
    mangled_assert("??1?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVCurve3D@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,MotionCamera *>::~pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,MotionCamera *>() // 0x547E05
{
    mangled_assert("??1?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVMotionCamera@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,MotionFollower *>::~pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,MotionFollower *>() // 0x547E0A
{
    mangled_assert("??1?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVMotionFollower@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,MotionLeader *>::~pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,MotionLeader *>() // 0x547E0F
{
    mangled_assert("??1?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVMotionLeader@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,MotionPath *>::~pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,MotionPath *>() // 0x547E14
{
    mangled_assert("??1?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVMotionPath@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,Curve3D *>::~pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,Curve3D *>() // 0x547E19
{
    mangled_assert("??1?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVCurve3D@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,MotionCamera *>::~pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,MotionCamera *>() // 0x547E1E
{
    mangled_assert("??1?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVMotionCamera@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

bool NISEvent::dispatch(NISScript *) const // 0x54B0D8
{
    mangled_assert("?dispatch@NISEvent@@QBE_NPAVNISScript@@@Z");
    todo("implement");
}

_inline std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,MotionFollower *>::~pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,MotionFollower *>() // 0x547E23
{
    mangled_assert("??1?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVMotionFollower@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,MotionLeader *>::~pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,MotionLeader *>() // 0x547E28
{
    mangled_assert("??1?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVMotionLeader@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,MotionPath *>::~pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,MotionPath *>() // 0x547E2D
{
    mangled_assert("??1?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVMotionPath@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

NIS::NIS() // 0x547B2B
{
    mangled_assert("??0NIS@@QAE@XZ");
    todo("implement");
}

NIS::~NIS() // 0x547E50
{
    mangled_assert("??1NIS@@QAE@XZ");
    todo("implement");
}

void NIS::deleteEvents() // 0x54AFF4
{
    mangled_assert("?deleteEvents@NIS@@AAEXXZ");
    todo("implement");
}

void NIS::deleteMotion() // 0x54B018
{
    mangled_assert("?deleteMotion@NIS@@AAEXXZ");
    todo("implement");
}

bool NIS::load(char const *) // 0x54BE28
{
    mangled_assert("?load@NIS@@QAE_NPBD@Z");
    todo("implement");
}

bool NIS::findSobId(char const *, unsigned __int32, __int32 &) // 0x54B4E1
{
    mangled_assert("?findSobId@NIS@@AAE_NPBDIAAH@Z");
    todo("implement");
}

bool NIS::loadScript(char const *) // 0x54BEAF
{
    mangled_assert("?loadScript@NIS@@AAE_NPBD@Z");
    todo("implement");
}

void NIS::doPreLoad() // 0x54B119
{
    mangled_assert("?doPreLoad@NIS@@AAEXXZ");
    todo("implement");
}

void NIS::doPostLoad() // 0x54B118
{
    mangled_assert("?doPostLoad@NIS@@AAEXXZ");
    todo("implement");
}

bool NIS::loadMotion(char const *) // 0x54BEA2
{
    mangled_assert("?loadMotion@NIS@@AAE_NPBD@Z");
    todo("implement");
}

bool NIS::start(vector3 const &, matrix3 const &, float) // 0x54CB1E
{
    mangled_assert("?start@NIS@@QAE_NABVvector3@@ABVmatrix3@@M@Z");
    todo("implement");
}

void NIS::handleRemainAtEnd(MotionFollower *) // 0x54BACD
{
    mangled_assert("?handleRemainAtEnd@NIS@@AAEXPAVMotionFollower@@@Z");
    todo("implement");
}

bool NIS::stop() // 0x54CC0A
{
    mangled_assert("?stop@NIS@@QAE_NXZ");
    todo("implement");
}

void NIS::skipInProgress() // 0x54CAA8
{
    mangled_assert("?skipInProgress@NIS@@AAEXXZ");
    todo("implement");
}

bool NIS::skip() // 0x54C9A9
{
    mangled_assert("?skip@NIS@@QAE_NXZ");
    todo("implement");
}

bool NIS::pause(bool) // 0x54C3EA
{
    mangled_assert("?pause@NIS@@QAE_N_N@Z");
    todo("implement");
}

void NIS::seek(float) // 0x54C706
{
    mangled_assert("?seek@NIS@@QAEXM@Z");
    todo("implement");
}

void NIS::seekForward(float) // 0x54C780
{
    mangled_assert("?seekForward@NIS@@QAEXM@Z");
    todo("implement");
}

MotionCamera *NIS::getCurrentMotionCamera() // 0x54B875
{
    mangled_assert("?getCurrentMotionCamera@NIS@@QAEPAVMotionCamera@@XZ");
    todo("implement");
}

bool NIS::getCurrentCameraParameters(float &, matrix4 &) // 0x54B657
{
    mangled_assert("?getCurrentCameraParameters@NIS@@QAE_NAAMAAVmatrix4@@@Z");
    todo("implement");
}

bool NIS::getWidescreenAtEnd() // 0x54B98C
{
    mangled_assert("?getWidescreenAtEnd@NIS@@QAE_NXZ");
    todo("implement");
}

bool NIS::getStayFadedAtEnd() // 0x54B982
{
    mangled_assert("?getStayFadedAtEnd@NIS@@QAE_NXZ");
    todo("implement");
}

MotionLeader *NIS::getMotionLeader(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &) // 0x54B905
{
    mangled_assert("?getMotionLeader@NIS@@QAEPAVMotionLeader@@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z");
    todo("implement");
}

MotionFollower *NIS::getMotionFollower(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &) // 0x54B8DA
{
    mangled_assert("?getMotionFollower@NIS@@QAEPAVMotionFollower@@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z");
    todo("implement");
}

MotionCamera *NIS::getMotionCamera(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &) // 0x54B8AF
{
    mangled_assert("?getMotionCamera@NIS@@QAEPAVMotionCamera@@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z");
    todo("implement");
}

MotionPath *NIS::getMotionPath(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &) // 0x54B930
{
    mangled_assert("?getMotionPath@NIS@@QAEPAVMotionPath@@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z");
    todo("implement");
}

void NIS::goToEnd() // 0x54B993
{
    mangled_assert("?goToEnd@NIS@@QAEXXZ");
    todo("implement");
}

void NIS::update(float) // 0x54CE02
{
    mangled_assert("?update@NIS@@QAEXM@Z");
    todo("implement");
}

void NIS::setAtEnd() // 0x54C799
{
    mangled_assert("?setAtEnd@NIS@@QAEXXZ");
    todo("implement");
}

bool NIS::renderTimeUpdate(float) // 0x54C4DF
{
    mangled_assert("?renderTimeUpdate@NIS@@QAE_NM@Z");
    todo("implement");
}

void NIS::addEvent(float, __int32, std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &) // 0x54A6E7
{
    mangled_assert("?addEvent@NIS@@QAEXMHABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z");
    todo("implement");
}

void NIS::addMotionPath(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &, MotionPath *) // 0x54A7D6
{
    mangled_assert("?addMotionPath@NIS@@QAEXABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVMotionPath@@@Z");
    todo("implement");
}

void NIS::addMotionLeader(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &, MotionLeader *) // 0x54A7BE
{
    mangled_assert("?addMotionLeader@NIS@@QAEXABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVMotionLeader@@@Z");
    todo("implement");
}

void NIS::addMotionFollower(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &, MotionFollower *) // 0x54A7A6
{
    mangled_assert("?addMotionFollower@NIS@@QAEXABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVMotionFollower@@@Z");
    todo("implement");
}

void NIS::addMotionCamera(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &, MotionCamera *) // 0x54A78E
{
    mangled_assert("?addMotionCamera@NIS@@QAEXABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVMotionCamera@@@Z");
    todo("implement");
}

void NIS::addCurve3D(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &, Curve3D *) // 0x54A6AC
{
    mangled_assert("?addCurve3D@NIS@@QAEXABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVCurve3D@@@Z");
    todo("implement");
}

Curve3D *NIS::getCurve3D(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &) // 0x54B879
{
    mangled_assert("?getCurve3D@NIS@@QAEPAVCurve3D@@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z");
    todo("implement");
}

void NIS::runEvents(float) // 0x54C65C
{
    mangled_assert("?runEvents@NIS@@AAEXM@Z");
    todo("implement");
}

void NIS::runMotion(float) // 0x54C69B
{
    mangled_assert("?runMotion@NIS@@AAEXM@Z");
    todo("implement");
}

void NIS::render2D() // 0x54C4C5
{
    mangled_assert("?render2D@NIS@@QAEXXZ");
    todo("implement");
}

void NIS::renderTimeUpdateCameras(float, float) // 0x54C5AC
{
    mangled_assert("?renderTimeUpdateCameras@NIS@@AAEXMM@Z");
    todo("implement");
}

void NIS::setFramesPerSecond(float) // 0x54C896
{
    mangled_assert("?setFramesPerSecond@NIS@@QAEXM@Z");
    todo("implement");
}

void NIS::setStartEnd(__int32, __int32) // 0x54C91A
{
    mangled_assert("?setStartEnd@NIS@@QAEXHH@Z");
    todo("implement");
}

float NIS::getFramesPerSecond() // 0x54B8A4
{
    mangled_assert("?getFramesPerSecond@NIS@@QAEMXZ");
    todo("implement");
}

MotionCamera *NIS::setCurrentCamera(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &) // 0x54C869
{
    mangled_assert("?setCurrentCamera@NIS@@QAEPAVMotionCamera@@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z");
    todo("implement");
}

void NIS::setCameraBlendIn(char const *, float) // 0x54C7AA
{
    mangled_assert("?setCameraBlendIn@NIS@@QAEXPBDM@Z");
    todo("implement");
}

void NIS::setCameraFadeIn(char const *, float, float, float) // 0x54C7F8
{
    mangled_assert("?setCameraFadeIn@NIS@@QAEXPBDMMM@Z");
    todo("implement");
}

void NIS::setSMPTE(SMPTE *) // 0x54C8F5
{
    mangled_assert("?setSMPTE@NIS@@QAEXPAVSMPTE@@@Z");
    todo("implement");
}

void NIS::removeSMPTE() // 0x54C4A5
{
    mangled_assert("?removeSMPTE@NIS@@QAEXXZ");
    todo("implement");
}

void NIS::wideScreenOut(float) // 0x54CE59
{
    mangled_assert("?wideScreenOut@NIS@@QAEXM@Z");
    todo("implement");
}

void NIS::nisOut(float) // 0x54C3B3
{
    mangled_assert("?nisOut@NIS@@QAEXM@Z");
    todo("implement");
}

void NIS::attack(Sob *, char const *) // 0x54A981
{
    mangled_assert("?attack@NIS@@QAEXPAVSob@@PBD@Z");
    todo("implement");
}

void NIS::haltAttack(Sob *) // 0x54B9AC
{
    mangled_assert("?haltAttack@NIS@@QAEXPAVSob@@@Z");
    todo("implement");
}

void NIS::hyperspaceIn(Sob *) // 0x54BC8A
{
    mangled_assert("?hyperspaceIn@NIS@@QAEXPAVSob@@@Z");
    todo("implement");
}

void NIS::hyperspaceOut(Sob *) // 0x54BD3B
{
    mangled_assert("?hyperspaceOut@NIS@@QAEXPAVSob@@@Z");
    todo("implement");
}

void NIS::setInHyperspace(Sob *) // 0x54C8A4
{
    mangled_assert("?setInHyperspace@NIS@@QAEXPAVSob@@@Z");
    todo("implement");
}

void NIS::trailMove(MotionFollower *) // 0x54CC73
{
    mangled_assert("?trailMove@NIS@@QAEXPAVMotionFollower@@@Z");
    todo("implement");
}

void NIS::focus() // 0x54B521
{
    mangled_assert("?focus@NIS@@QAEXXZ");
    todo("implement");
}

void NIS::hideUniverse(bool) // 0x54BC38
{
    mangled_assert("?hideUniverse@NIS@@QAEX_N@Z");
    todo("implement");
}

void NIS::pauseUniverse(bool) // 0x54C3F6
{
    mangled_assert("?pauseUniverse@NIS@@QAEX_N@Z");
    todo("implement");
}

void NIS::playSpeech(char const *, float) // 0x54C401
{
    mangled_assert("?playSpeech@NIS@@QAEXPBDM@Z");
    todo("implement");
}

void NIS::speechSetDirectory(char const *) // 0x54CB13
{
    mangled_assert("?speechSetDirectory@NIS@@QAEXPBD@Z");
    todo("implement");
}

void NIS::triggerEffect(MotionFollower *, float) // 0x54CD2E
{
    mangled_assert("?triggerEffect@NIS@@QAEXPAVMotionFollower@@M@Z");
    todo("implement");
}

void NIS::stayFadedAtEnd() // 0x54CC02
{
    mangled_assert("?stayFadedAtEnd@NIS@@QAEXXZ");
    todo("implement");
}

void NIS::setEndFocus(Selection const &) // 0x54C880
{
    mangled_assert("?setEndFocus@NIS@@QAEXABVSelection@@@Z");
    todo("implement");
}

void NIS::setEndFocus(vector3 const &) // 0x54C88B
{
    mangled_assert("?setEndFocus@NIS@@QAEXABVvector3@@@Z");
    todo("implement");
}

void NIS::setCameraLeave() // 0x54C85E
{
    mangled_assert("?setCameraLeave@NIS@@QAEXXZ");
    todo("implement");
}

void NIS::executeOutTransition() // 0x54B46E
{
    mangled_assert("?executeOutTransition@NIS@@QAEXXZ");
    todo("implement");
}

/* ---------- private code */

_static bool handleKeepMovingAtEnd(MotionFollower *pFollower) // 0x54BA2B
{
    mangled_assert("handleKeepMovingAtEnd");
    todo("implement");
}

_static void handleRemainAtEnd_Ship(MotionFollower *pFollower) // 0x54BB0D
{
    mangled_assert("handleRemainAtEnd_Ship");
    todo("implement");
}

_static void skipEffect(MotionFollower &mf) // 0x54CA53
{
    mangled_assert("skipEffect");
    todo("implement");
}

_static void skipHyperspace(MotionFollower &mf) // 0x54CA5F
{
    mangled_assert("skipHyperspace");
    todo("implement");
}

_static bool checkCurveForCheat(AnimCurve *pCurve, float currentTime, float &offset) // 0x54ABB5
{
    mangled_assert("checkCurveForCheat");
    todo("implement");
}

_static bool hideUniverseFilter(Sob *pSob) // 0x54BC53
{
    mangled_assert("hideUniverseFilter");
    todo("implement");
}
#endif
