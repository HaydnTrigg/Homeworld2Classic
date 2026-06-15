#if 0
/* ---------- headers */

#include "decomp.h"
#include <SoundManager\SoundEntityHandle.h>
#include <assist\stlexsmallvector.h>
#include <xstring>
#include <xmemory0>
#include <Mathlib\matrix4.h>
#include <pch.h>
#include <ship.h>
#include <ShieldTypes.h>
#include <Mathlib\matrix3.h>
#include <HierarchyStatic.h>
#include <Decal\DecalRefMesh.h>
#include <Collision\Primitives\mesh.h>
#include <Collision\Primitives\triangle.h>
#include <TeamColourRegistry.h>
#include <savegame.h>
#include <task.h>
#include <new>
#include <Subsystems\HardPointManager.h>
#include <exception>
#include <Subsystems\HardPoint.h>
#include <xstddef>
#include <Subsystems\HardPointStatic.h>
#include <type_traits>
#include <Subsystems\SubSystemType.h>
#include <Collision\Primitives\obb.h>
#include <SobWithMeshStatic.h>
#include <Collision\BVH\octree.h>
#include <Collision\BVH\span.h>
#include <fileio\filestream.h>
#include <Collision\BVH\Internal\span_i.h>
#include <SobWithMesh.h>
#include <Collision\BVH\proxy.h>
#include <SobRigidBody.h>
#include <SimVis\EffectContainer.h>
#include <Collision\intersect.h>
#include <Render\FxGL\FXManager.h>
#include <xutility>
#include <Collision\primitivesfwd.h>
#include <SobRigidBodyStatic.h>
#include <Render\FxGL\VarMulti.h>
#include <utility>
#include <iosfwd>
#include <vector>
#include <fileio\bytestream.h>
#include <xmemory>
#include <fileio\fileioexports.h>
#include <debug\ctassert.h>
#include <stack>
#include <Mathlib\mathutil.h>
#include <Interpolation.h>
#include <abilities.h>
#include <Collision\Primitives\aabb.h>
#include <sobid.h>
#include <Mathlib\vector3.h>
#include <Mathlib\vector4.h>
#include <map>
#include <xtree>
#include <boost\scoped_ptr.hpp>
#include <MADState.h>
#include <HierarchyDynamic.h>
#include <luaconfig\luabinding.h>
#include <luaconfig\luaconfig.h>
#include <Mathlib\vector2.h>
#include <fileio\filepath.h>
#include <RenderAnim\RenderModel.h>
#include <RenderAnim\Marker.h>
#include <Animation.h>
#include <boost\cstdint.hpp>
#include <seInterface2\PatchID.h>
#include <SelTarg.h>
#include <seInterface2\PatchBase.h>
#include <prim.h>
#include <seInterface2\SoundParams.h>
#include <Mathlib\quat.h>
#include <Modifiers\ModifierTargetCache.h>
#include <Collision\Primitives\capsule.h>
#include <Collision\Primitives\segment.h>
#include <Collision\BVH\profiling.h>
#include <MeshAnimation.h>
#include <fixedpoint.h>
#include <util\fixed.h>
#include <savegamedata.h>
#include <savestream.h>
#include <debug\db.h>
#include <SimVis\SobVis.h>
#include <RenderAnim\EffectAnimation.h>
#include <boost\shared_ptr.hpp>
#include <MultiplierContainer.h>
#include <visibility.h>
#include <util\colour.h>
#include <sobtypes.h>
#include <MultiplierTypes.h>
#include <boost\throw_exception.hpp>
#include <Collision\BVH\bvh.h>
#include <savegamedef.h>
#include <scripting.h>
#include <boost\detail\shared_count.hpp>
#include <scriptaccess.h>
#include <bitset>
#include <scripttypedef.h>
#include <boost\detail\lwm_win32.hpp>
#include <lua.h>
#include <weaponinfo.h>
#include <sob.h>
#include <RenderAnim\MarkerAnimation.h>
#include <sobstatic.h>
#include <wchar.h>
#include <Collision\Primitives\sphere.h>
#include <playerresourcetype.h>

/* ---------- constants */

/* ---------- definitions */

typedef unsigned __int32 EffectHandle;
typedef std::vector<EffectContainer::Effect,std::allocator<EffectContainer::Effect> > EffectList;
typedef std::vector<EffectContainerVisUpdate *,std::allocator<EffectContainerVisUpdate *> > VisUpdateCont;
typedef __int32 ParentID;
typedef std::vector<int,std::allocator<int> > MarkerCont;
typedef std::vector<EffectAnimation const *,std::allocator<EffectAnimation const *> > ChildrenCont;
typedef __int32 EffectAnimationID;
typedef std::smallvector<enum MADSTATE,5,std::allocator<enum MADSTATE> > PairTable;

/* ---------- prototypes */

extern char const *madsGetStateString(MADSTATE iState);
extern MADSTATE madsGetStateFromString(char const *name);
extern void madsAnimFinished(SobWithMesh *ship, AnimatorMad *animator, AnimatorMad::CallbackEvent event);
extern void madsWeaponTrackFinished(SobWithMesh *ship, AnimatorWeaponTrack *animator, AnimatorWeaponTrack::CallbackEvent event);
extern void MadsLua_SetState(__int32 shipPtr, char const *stateName, bool bState);
extern bool MadsLua_GetState(__int32 shipPtr, char const *stateName);
extern AnimatorMad *madsStartAnimation(SobWithMesh *ship, char const *name, bool bParam);
extern void MadsLua_StartAnimation(__int32 shipPtr, char const *name);
extern void MadsLua_StartParamAnimation(__int32 shipPtr, char const *name, char const *parameter);
extern void madsStopAnimation(SobWithMesh *ship, char const *name);
extern void MadsLua_StopAnimation(__int32 shipPtr, char const *name);
extern void MadsLua_PauseAnimation(__int32 shipPtr, char const *name);
extern void madsPauseAnimation(SobWithMesh *ship, char const *name);
extern void MadsLua_UnpauseAnimation(__int32 shipPtr, char const *name);
extern void MadsLua_SetPauseTime(__int32 shipPtr, char const *name, float time);
extern float MadsLua_GetPauseTime(__int32 shipPtr, char const *name);
extern void MadsLua_SetTime(__int32 shipPtr, char const *name, float time);
extern float MadsLua_GetTime(__int32 shipPtr, char const *name);
extern float MadsLua_GetAnimLength(__int32 shipPtr, char const *name);
extern float MadsLua_IsAnimRunning(__int32 shipPtr, char const *name);
extern void MadsLua_SetJointVisible(__int32 shipPtr, char const *jointName, bool bVisible);
extern void MadsLua_SetLoopCount(__int32 shipPtr, char const *name, __int32 count);
extern __int32 MadsLua_GetLoopCount(__int32 shipPtr, char const *name);
extern void MadsLua_TrackGunJoint(__int32 shipPtr, char const *jointName, float azimuth, float declination);
extern void MadsLua_StartEffect(__int32 shipPtr, char const *eventName);
extern void MadsLua_EndEffect(__int32 shipPtr, char const *eventName);
extern bool madsParsePairTable(LuaConfig &lc, std::smallvector<enum MADSTATE,5,std::allocator<enum MADSTATE> > *table, char const *name);

_static float madsCallbackHorizontalRotation(SobWithMesh *sob, AnimatorParam *animator);
_static float madsCallbackVerticalRotation(SobWithMesh *sob, AnimatorParam *animator);

/* ---------- globals */

extern std::smallvector<enum MADSTATE,5,std::allocator<enum MADSTATE> > madsInclusives[27]; // 0x848F20
extern std::vector<LuaBinding::Obj,std::allocator<LuaBinding::Obj> > MadsSystem::s_exported; // 0x848B44
extern LuaConfig *MadsSystem::s_madsLuaState; // 0x848B40
extern char const MadState::m_saveToken[9]; // 0x7AD040
extern SaveData const MadState::m_saveData[3]; // 0x7AD050
extern char const *madsStateStrings[27]; // 0x83C2B0
extern MADSTATE madsCalledState; // 0x83C31C
extern std::smallvector<enum MADSTATE,5,std::allocator<enum MADSTATE> > madsExclusives[27]; // 0x848B50

/* ---------- private variables */

/* ---------- public code */

char const *madsGetStateString(MADSTATE iState) // 0x606E66
{
    mangled_assert("?madsGetStateString@@YGPBDW4MADSTATE@@@Z");
    todo("implement");
}

MADSTATE madsGetStateFromString(char const *name) // 0x606E38
{
    mangled_assert("?madsGetStateFromString@@YG?AW4MADSTATE@@PBD@Z");
    todo("implement");
}

void madsAnimFinished(SobWithMesh *ship, AnimatorMad *animator, AnimatorMad::CallbackEvent event) // 0x606D59
{
    mangled_assert("?madsAnimFinished@@YGXPAVSobWithMesh@@PAVAnimatorMad@@W4CallbackEvent@2@@Z");
    todo("implement");
}

void madsWeaponTrackFinished(SobWithMesh *ship, AnimatorWeaponTrack *animator, AnimatorWeaponTrack::CallbackEvent event) // 0x6070B5
{
    mangled_assert("?madsWeaponTrackFinished@@YGXPAVSobWithMesh@@PAVAnimatorWeaponTrack@@W4CallbackEvent@2@@Z");
    todo("implement");
}

MadState::MadState() // 0x605732
{
    mangled_assert("??0MadState@@QAE@XZ");
    todo("implement");
}

MadState::~MadState() // 0x6059F8
{
    mangled_assert("??1MadState@@QAE@XZ");
    todo("implement");
}

void MadState::setOwner(SobWithMesh *) // 0x6072D0
{
    mangled_assert("?setOwner@MadState@@QAEXPAVSobWithMesh@@@Z");
    todo("implement");
}

bool MadState::triggerSetEffectEvent(MADSTATE) // 0x6074B2
{
    mangled_assert("?triggerSetEffectEvent@MadState@@QAE_NW4MADSTATE@@@Z");
    todo("implement");
}

bool MadState::triggerPauseEffectEvent(MADSTATE) // 0x607436
{
    mangled_assert("?triggerPauseEffectEvent@MadState@@QAE_NW4MADSTATE@@@Z");
    todo("implement");
}

bool MadState::triggerEndEffectEvent(MADSTATE) // 0x6073BA
{
    mangled_assert("?triggerEndEffectEvent@MadState@@QAE_NW4MADSTATE@@@Z");
    todo("implement");
}

bool MadState::setState(MADSTATE) // 0x6072EB
{
    mangled_assert("?setState@MadState@@QAE_NW4MADSTATE@@@Z");
    todo("implement");
}

bool MadState::setStateClean(MADSTATE, bool) // 0x607359
{
    mangled_assert("?setStateClean@MadState@@QAE_NW4MADSTATE@@_N@Z");
    todo("implement");
}

bool MadState::callLuaSetFunction(MADSTATE) // 0x606B0F
{
    mangled_assert("?callLuaSetFunction@MadState@@QAE_NW4MADSTATE@@@Z");
    todo("implement");
}

bool MadState::callLuaPauseFunction(MADSTATE) // 0x606AD8
{
    mangled_assert("?callLuaPauseFunction@MadState@@QAE_NW4MADSTATE@@@Z");
    todo("implement");
}

bool MadState::callLuaEndFunction(MADSTATE) // 0x606A9B
{
    mangled_assert("?callLuaEndFunction@MadState@@QAE_NW4MADSTATE@@@Z");
    todo("implement");
}

bool MadState::getState(MADSTATE) // 0x606CD9
{
    mangled_assert("?getState@MadState@@QAE_NW4MADSTATE@@@Z");
    todo("implement");
}

void MadState::addAnimatorReference(AnimatorMad *) // 0x606A47
{
    mangled_assert("?addAnimatorReference@MadState@@QAEXPAVAnimatorMad@@@Z");
    todo("implement");
}

bool MadState::removeAnimatorReference(AnimatorMad *) // 0x6071B4
{
    mangled_assert("?removeAnimatorReference@MadState@@QAE_NPAVAnimatorMad@@@Z");
    todo("implement");
}

AnimatorMad *MadState::findAnimatorReferenceByName(char const *) // 0x606C43
{
    mangled_assert("?findAnimatorReferenceByName@MadState@@QAEPAVAnimatorMad@@PBD@Z");
    todo("implement");
}

void MadState::saveAnimators(void *objectPtr, SaveGameData *saveGameData, SaveType savetype) // 0x604E0B
{
    mangled_assert("?saveAnimators@MadState@@SGXPAXPAVSaveGameData@@W4SaveType@@@Z");
    todo("implement");
}

void MadState::restoreAnimators(void *objectPtr, SaveGameData *saveGameData) // 0x604E64
{
    mangled_assert("?restoreAnimators@MadState@@SGXPAXPAVSaveGameData@@@Z");
    todo("implement");
}

MadState::MadState(SaveGameData *) // 0x60571F
{
    mangled_assert("??0MadState@@QAE@PAVSaveGameData@@@Z");
    todo("implement");
}

void MadState::postRestore() // 0x6070FD
{
    mangled_assert("?postRestore@MadState@@QAEXXZ");
    todo("implement");
}

bool MadState::restore(SaveGameData *) // 0x607243
{
    mangled_assert("?restore@MadState@@QAE_NPAVSaveGameData@@@Z");
    todo("implement");
}

bool MadState::save(SaveGameData *, SaveType) // 0x60726E
{
    mangled_assert("?save@MadState@@QAE_NPAVSaveGameData@@W4SaveType@@@Z");
    todo("implement");
}

MadStateStatic::MadStateStatic(char const *, char const *, RenderModel const *) // 0x60575A
{
    mangled_assert("??0MadStateStatic@@QAE@PBD0PBVRenderModel@@@Z");
    todo("implement");
}

_inline LuaBinding::ObjInternal2<int,char const *,int,LuaBinding::Functor2Free<int,char const *,int> >::~ObjInternal2<int,char const *,int,LuaBinding::Functor2Free<int,char const *,int> >() // 0x6059A6
{
    mangled_assert("??1?$ObjInternal2@HPBDHV?$Functor2Free@HPBDH@LuaBinding@@@LuaBinding@@UAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline LuaBinding::ObjInternal2<int,char const *,bool,LuaBinding::Functor2Free<int,char const *,bool> >::~ObjInternal2<int,char const *,bool,LuaBinding::Functor2Free<int,char const *,bool> >() // 0x6059AC
{
    mangled_assert("??1?$ObjInternal2@HPBD_NV?$Functor2Free@HPBD_N@LuaBinding@@@LuaBinding@@UAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline LuaBinding::ObjInternal3<int,char const *,int,void,LuaBinding::Functor3Free<int,char const *,int,void> >::~ObjInternal3<int,char const *,int,void,LuaBinding::Functor3Free<int,char const *,int,void> >() // 0x6059B2
{
    mangled_assert("??1?$ObjInternal3@HPBDHXV?$Functor3Free@HPBDHX@LuaBinding@@@LuaBinding@@UAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline LuaBinding::ObjInternal3<int,char const *,float,void,LuaBinding::Functor3Free<int,char const *,float,void> >::~ObjInternal3<int,char const *,float,void,LuaBinding::Functor3Free<int,char const *,float,void> >() // 0x6059B8
{
    mangled_assert("??1?$ObjInternal3@HPBDMXV?$Functor3Free@HPBDMX@LuaBinding@@@LuaBinding@@UAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline LuaBinding::ObjInternal3<int,char const *,char const *,void,LuaBinding::Functor3Free<int,char const *,char const *,void> >::~ObjInternal3<int,char const *,char const *,void,LuaBinding::Functor3Free<int,char const *,char const *,void> >() // 0x6059BE
{
    mangled_assert("??1?$ObjInternal3@HPBDPBDXV?$Functor3Free@HPBDPBDX@LuaBinding@@@LuaBinding@@UAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline LuaBinding::ObjInternal3<int,char const *,bool,void,LuaBinding::Functor3Free<int,char const *,bool,void> >::~ObjInternal3<int,char const *,bool,void,LuaBinding::Functor3Free<int,char const *,bool,void> >() // 0x6059C4
{
    mangled_assert("??1?$ObjInternal3@HPBD_NXV?$Functor3Free@HPBD_NX@LuaBinding@@@LuaBinding@@UAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline LuaBinding::ObjInternal4<int,char const *,float,float,void,LuaBinding::Functor4Free<int,char const *,float,float,void> >::~ObjInternal4<int,char const *,float,float,void,LuaBinding::Functor4Free<int,char const *,float,float,void> >() // 0x6059CA
{
    mangled_assert("??1?$ObjInternal4@HPBDMMXV?$Functor4Free@HPBDMMX@LuaBinding@@@LuaBinding@@UAE@XZ");
    compiler_generated();
    todo("implement");
}

MadStateStatic::~MadStateStatic() // 0x605A5D
{
    mangled_assert("??1MadStateStatic@@QAE@XZ");
    todo("implement");
}

char const *MadStateStatic::getLuaFunctionName(MADSTATE, char const *) // 0x606C95
{
    mangled_assert("?getLuaFunctionName@MadStateStatic@@QAEPBDW4MADSTATE@@PBD@Z");
    todo("implement");
}

void MadsLua_SetState(__int32 shipPtr, char const *stateName, bool bState) // 0x606660
{
    mangled_assert("?MadsLua_SetState@@YGXHPBD_N@Z");
    todo("implement");
}

bool MadsLua_GetState(__int32 shipPtr, char const *stateName) // 0x606515
{
    mangled_assert("?MadsLua_GetState@@YG_NHPBD@Z");
    todo("implement");
}

AnimatorMad *madsStartAnimation(SobWithMesh *ship, char const *name, bool bParam) // 0x606FAA
{
    mangled_assert("?madsStartAnimation@@YGPAVAnimatorMad@@PAVSobWithMesh@@PBD_N@Z");
    todo("implement");
}

void MadsLua_StartAnimation(__int32 shipPtr, char const *name) // 0x6066CF
{
    mangled_assert("?MadsLua_StartAnimation@@YGXHPBD@Z");
    todo("implement");
}

void MadsLua_StartParamAnimation(__int32 shipPtr, char const *name, char const *parameter) // 0x60671F
{
    mangled_assert("?MadsLua_StartParamAnimation@@YGXHPBD0@Z");
    todo("implement");
}

void madsStopAnimation(SobWithMesh *ship, char const *name) // 0x607074
{
    mangled_assert("?madsStopAnimation@@YGXPAVSobWithMesh@@PBD@Z");
    todo("implement");
}

void MadsLua_StopAnimation(__int32 shipPtr, char const *name) // 0x606794
{
    mangled_assert("?MadsLua_StopAnimation@@YGXHPBD@Z");
    todo("implement");
}

void MadsLua_PauseAnimation(__int32 shipPtr, char const *name) // 0x6065A3
{
    mangled_assert("?MadsLua_PauseAnimation@@YGXHPBD@Z");
    todo("implement");
}

void madsPauseAnimation(SobWithMesh *ship, char const *name) // 0x606F7A
{
    mangled_assert("?madsPauseAnimation@@YGXPAVSobWithMesh@@PBD@Z");
    todo("implement");
}

void MadsLua_UnpauseAnimation(__int32 shipPtr, char const *name) // 0x60683D
{
    mangled_assert("?MadsLua_UnpauseAnimation@@YGXHPBD@Z");
    todo("implement");
}

void MadsLua_SetPauseTime(__int32 shipPtr, char const *name, float time) // 0x606608
{
    mangled_assert("?MadsLua_SetPauseTime@@YGXHPBDM@Z");
    todo("implement");
}

float MadsLua_GetPauseTime(__int32 shipPtr, char const *name) // 0x6064E4
{
    mangled_assert("?MadsLua_GetPauseTime@@YGMHPBD@Z");
    todo("implement");
}

void MadsLua_SetTime(__int32 shipPtr, char const *name, float time) // 0x60667E
{
    mangled_assert("?MadsLua_SetTime@@YGXHPBDM@Z");
    todo("implement");
}

float MadsLua_GetTime(__int32 shipPtr, char const *name) // 0x606531
{
    mangled_assert("?MadsLua_GetTime@@YGMHPBD@Z");
    todo("implement");
}

float MadsLua_GetAnimLength(__int32 shipPtr, char const *name) // 0x60648B
{
    mangled_assert("?MadsLua_GetAnimLength@@YGMHPBD@Z");
    todo("implement");
}

float MadsLua_IsAnimRunning(__int32 shipPtr, char const *name) // 0x606566
{
    mangled_assert("?MadsLua_IsAnimRunning@@YGMHPBD@Z");
    todo("implement");
}

void MadsLua_SetJointVisible(__int32 shipPtr, char const *jointName, bool bVisible) // 0x6065A8
{
    mangled_assert("?MadsLua_SetJointVisible@@YGXHPBD_N@Z");
    todo("implement");
}

void MadsLua_SetLoopCount(__int32 shipPtr, char const *name, __int32 count) // 0x6065E3
{
    mangled_assert("?MadsLua_SetLoopCount@@YGXHPBDH@Z");
    todo("implement");
}

__int32 MadsLua_GetLoopCount(__int32 shipPtr, char const *name) // 0x6064C0
{
    mangled_assert("?MadsLua_GetLoopCount@@YGHHPBD@Z");
    todo("implement");
}

void MadsLua_TrackGunJoint(__int32 shipPtr, char const *jointName, float azimuth, float declination) // 0x606799
{
    mangled_assert("?MadsLua_TrackGunJoint@@YGXHPBDMM@Z");
    todo("implement");
}

void MadsLua_StartEffect(__int32 shipPtr, char const *eventName) // 0x6066F6
{
    mangled_assert("?MadsLua_StartEffect@@YGXHPBD@Z");
    todo("implement");
}

void MadsLua_EndEffect(__int32 shipPtr, char const *eventName) // 0x606478
{
    mangled_assert("?MadsLua_EndEffect@@YGXHPBD@Z");
    todo("implement");
}

bool MadsSystem::Startup() // 0x606898
{
    mangled_assert("?Startup@MadsSystem@@SG_NXZ");
    todo("implement");
}

bool MadsSystem::Shutdown() // 0x606869
{
    mangled_assert("?Shutdown@MadsSystem@@SG_NXZ");
    todo("implement");
}

bool madsParsePairTable(LuaConfig &lc, std::smallvector<enum MADSTATE,5,std::allocator<enum MADSTATE> > *table, char const *name) // 0x606E74
{
    mangled_assert("?madsParsePairTable@@YG_NAAVLuaConfig@@PAV?$smallvector@W4MADSTATE@@$04V?$allocator@W4MADSTATE@@@std@@@std@@PBD@Z");
    todo("implement");
}

void MadsSystem::BindToLua(LuaConfig &lc) // 0x605CC5
{
    mangled_assert("?BindToLua@MadsSystem@@SGXAAVLuaConfig@@@Z");
    todo("implement");
}

void MadsSystem::UnBindFromLua(LuaConfig &lc) // 0x6068E1
{
    mangled_assert("?UnBindFromLua@MadsSystem@@SGXAAVLuaConfig@@@Z");
    todo("implement");
}

/* ---------- private code */

_static float madsCallbackHorizontalRotation(SobWithMesh *sob, AnimatorParam *animator) // 0x606DAE
{
    mangled_assert("madsCallbackHorizontalRotation");
    todo("implement");
}

_static float madsCallbackVerticalRotation(SobWithMesh *sob, AnimatorParam *animator) // 0x606DF3
{
    mangled_assert("madsCallbackVerticalRotation");
    todo("implement");
}
#endif
