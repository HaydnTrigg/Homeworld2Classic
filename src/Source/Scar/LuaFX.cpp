#if 0
/* ---------- headers */

#include "decomp.h"
#include <deque>
#include <boost\utility\base_from_member.hpp>
#include <xstring>
#include <boost\utility_fwd.hpp>
#include <xmemory0>
#include <Scar\pch.h>
#include <Engine\SobUnmoveable.h>
#include <Engine\sob.h>
#include <Engine\sobstatic.h>
#include <Engine\OrderFeedback.h>
#include <luaconfig\luabinding.h>
#include <Mathlib\matrix4.h>
#include <Engine\weaponinfo.h>
#include <Engine\MultiplierContainer.h>
#include <new>
#include <exception>
#include <boost\next_prior.hpp>
#include <xstddef>
#include <type_traits>
#include <Engine\Modifiers\ModifierTargetCache.h>
#include <boost\noncopyable.hpp>
#include <Mathlib\matrix3.h>
#include <queue>
#include <xutility>
#include <Engine\TeamColourRegistry.h>
#include <Engine\savegame.h>
#include <Engine\task.h>
#include <iosfwd>
#include <boost\config.hpp>
#include <stack>
#include <xmemory>
#include <Engine\SobWithMeshStatic.h>
#include <Engine\Squadron.h>
#include <Engine\command.h>
#include <Engine\ship.h>
#include <Engine\SobWithMesh.h>
#include <Engine\SobRigidBody.h>
#include <Scar\LuaFX.h>
#include <Engine\SobRigidBodyStatic.h>
#include <Engine\SimVis\SobVis.h>
#include <math.h>
#include <Mathlib\luamathbinding.h>
#include <Scar\GameQuery.h>
#include <Engine\MeshAnimation.h>
#include <Engine\ShieldTypes.h>
#include <debug\ctassert.h>
#include <Engine\SOBGroup.h>
#include <Render\FxGL\FXManager.h>
#include <Render\FxGL\VarMulti.h>
#include <vector>
#include <Engine\Subsystems\HardPointManager.h>
#include <Engine\Subsystems\HardPoint.h>
#include <Engine\SquadronList.h>
#include <Engine\Subsystems\HardPointStatic.h>
#include <Engine\DynamicPoint.h>
#include <Engine\Subsystems\SubSystemType.h>
#include <boost\detail\workaround.hpp>
#include <Engine\Interpolation.h>
#include <Mathlib\quat.h>
#include <Engine\Parade.h>
#include <Mathlib\vector3.h>
#include <Mathlib\vector4.h>
#include <util\colour.h>
#include <Engine\sobid.h>
#include <Engine\playerresourcetype.h>
#include <Mathlib\vector2.h>
#include <Engine\sobtypes.h>
#include <SoundManager\SoundEntityHandle.h>
#include <Engine\Graphics\BackgroundFX.h>
#include <cstdarg>
#include <stdarg.h>
#include <Engine\Universe.h>
#include <Engine\savegamedef.h>
#include <boost\shared_ptr.hpp>
#include <Camera\OrbitParameters.h>
#include <boost\detail\shared_count.hpp>
#include <boost\detail\lwm_win32.hpp>
#include <Engine\Volume.h>
#include <boost\scoped_ptr.hpp>
#include <Engine\selection.h>
#include <Engine\VolumeStatic.h>
#include <Engine\SobUnmoveableStatic.h>
#include <Engine\CoordSysUtilities.h>
#include <Scar\Scar.h>
#include <Engine\fixedpoint.h>
#include <Scar\ScarEventSys.h>
#include <util\fixed.h>
#include <Engine\ParadeCommand.h>
#include <Engine\commandtype.h>
#include <assist\stlexsmallvector.h>
#include <Engine\CameraCommand.h>
#include <Engine\CameraHW.h>
#include <Camera\CameraOrbitTarget.h>
#include <Camera\Camera.h>
#include <Engine\abilities.h>
#include <Camera\Frustum.h>
#include <Camera\Plane3.h>
#include <list>
#include <Engine\SimVis\LodFX.h>
#include <Scar\LuaRuleSystem.h>
#include <boost\utility.hpp>
#include <boost\utility\addressof.hpp>

/* ---------- constants */

/* ---------- definitions */

class LuaFXHandles
{
public:
    static bool Startup();
    static bool Shutdown();
    static LuaFXHandles *Instance();
    LuaFXHandles(LuaFXHandles const &); /* compiler_generated() */
    _inline LuaFXHandles();
    _inline ~LuaFXHandles();
    unsigned __int32 MapHandle(FXManager::Handle);
    FXManager::Handle GetHandle(unsigned __int32);
private:
    static LuaFXHandles *s_instance;
    typedef std::vector<FXManager::Handle,std::allocator<FXManager::Handle> > HandleCont;
    std::vector<FXManager::Handle,std::allocator<FXManager::Handle> > m_handles; // 0x0
    unsigned __int32 m_index; // 0xC
public:
    LuaFXHandles &operator=(LuaFXHandles const &); /* compiler_generated() */
};
static_assert(sizeof(LuaFXHandles) == 16, "Invalid LuaFXHandles size");

typedef std::vector<FXManager::Handle,std::allocator<FXManager::Handle> > HandleCont;
typedef `anonymous-namespace'::LuaFXLib ?A0xb04578fb::LuaFXLib;

class `anonymous-namespace'::LuaFXLib :
    public LuaLibrary
{
public:
    LuaFXLib(`anonymous-namespace'::LuaFXLib const &); /* compiler_generated() */
    LuaFXLib();
    virtual ~LuaFXLib() override;
    virtual bool Register(LuaConfig &) override;
    virtual bool DeRegister(LuaConfig &) override;
    `anonymous-namespace'::LuaFXLib &operator=(`anonymous-namespace'::LuaFXLib const &); /* compiler_generated() */
};
static_assert(sizeof(`anonymous-namespace'::LuaFXLib) == 16, "Invalid `anonymous-namespace'::LuaFXLib size");

/* ---------- prototypes */

extern bool LuaFXStartup();
extern bool LuaFXShutdown();
extern unsigned __int32 FX_PlayEffect(char const *effectName, char const *volumeName, float scale);
extern unsigned __int32 FX_PlayEffectBetweenPoints(char const *effectName, char const *volumeName1, char const *volumeName2, float scale);
extern void FX_StopEffect(unsigned __int32 index);
extern unsigned __int32 FX_PlayEffectOnBackground(char const *effectName, vector3 direction, float scale);
extern unsigned __int32 FX_PlayEffectOnBackgroundVolume(char const *effectName, char const *volumeName, float scale);
extern void FX_StopEffectOnBackground(unsigned __int32 handle);
extern void FX_DestroyEffectOnBackground(unsigned __int32 handle);
extern void FX_StartEvent(char const *sobGroupName, char const *eventName);
extern void FX_StopEvent(char const *sobGroupName, char const *eventName);
extern void FX_Flush();
extern void FX_FlushLod();
extern void FX_Lights(__int32 maxPriority);

_static void StartStopEvent(SOBGroup &sobGroup, char const *eventName, bool bStart);

/* ---------- globals */

extern char const *LUALIB_FX; // 0x8430F0
extern LuaFXHandles *LuaFXHandles::s_instance; // 0x8612F4

/* ---------- private variables */

/* ---------- public code */

_extern _sub_7258CC(LuaFXHandles *const);
_inline LuaFXHandles::LuaFXHandles() // 0x7258CC
{
    mangled_assert("??0LuaFXHandles@@QAE@XZ");
    todo("implement");
    _sub_7258CC(this);
}

_extern void _sub_72591A(LuaBinding::ObjInternal3<char const *,char const *,float,unsigned int,LuaBinding::Functor3Free<char const *,char const *,float,unsigned int> > *const);
_inline LuaBinding::ObjInternal3<char const *,char const *,float,unsigned int,LuaBinding::Functor3Free<char const *,char const *,float,unsigned int> >::~ObjInternal3<char const *,char const *,float,unsigned int,LuaBinding::Functor3Free<char const *,char const *,float,unsigned int> >() // 0x72591A
{
    mangled_assert("??1?$ObjInternal3@PBDPBDMIV?$Functor3Free@PBDPBDMI@LuaBinding@@@LuaBinding@@UAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_72591A(this);
}

_extern void _sub_72592C(LuaFXHandles *const);
_inline LuaFXHandles::~LuaFXHandles() // 0x72592C
{
    mangled_assert("??1LuaFXHandles@@QAE@XZ");
    todo("implement");
    _sub_72592C(this);
}

_extern void _sub_725920(LuaBinding::ObjInternal3<char const *,vector3,float,unsigned int,LuaBinding::Functor3Free<char const *,vector3,float,unsigned int> > *const);
_inline LuaBinding::ObjInternal3<char const *,vector3,float,unsigned int,LuaBinding::Functor3Free<char const *,vector3,float,unsigned int> >::~ObjInternal3<char const *,vector3,float,unsigned int,LuaBinding::Functor3Free<char const *,vector3,float,unsigned int> >() // 0x725920
{
    mangled_assert("??1?$ObjInternal3@PBDVvector3@@MIV?$Functor3Free@PBDVvector3@@MI@LuaBinding@@@LuaBinding@@UAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_725920(this);
}

_extern void _sub_725926(LuaBinding::ObjInternal4<char const *,char const *,char const *,float,unsigned int,LuaBinding::Functor4Free<char const *,char const *,char const *,float,unsigned int> > *const);
_inline LuaBinding::ObjInternal4<char const *,char const *,char const *,float,unsigned int,LuaBinding::Functor4Free<char const *,char const *,char const *,float,unsigned int> >::~ObjInternal4<char const *,char const *,char const *,float,unsigned int,LuaBinding::Functor4Free<char const *,char const *,char const *,float,unsigned int> >() // 0x725926
{
    mangled_assert("??1?$ObjInternal4@PBDPBDPBDMIV?$Functor4Free@PBDPBDPBDMI@LuaBinding@@@LuaBinding@@UAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_725926(this);
}

_extern bool _sub_726242();
bool LuaFXStartup() // 0x726242
{
    mangled_assert("?LuaFXStartup@@YG_NXZ");
    todo("implement");
    bool __result = _sub_726242();
    return __result;
}

_extern bool _sub_72623D();
bool LuaFXShutdown() // 0x72623D
{
    mangled_assert("?LuaFXShutdown@@YG_NXZ");
    todo("implement");
    bool __result = _sub_72623D();
    return __result;
}

_extern bool _sub_7265AF();
bool LuaFXHandles::Startup() // 0x7265AF
{
    mangled_assert("?Startup@LuaFXHandles@@SG_NXZ");
    todo("implement");
    bool __result = _sub_7265AF();
    return __result;
}

_extern bool _sub_726514();
bool LuaFXHandles::Shutdown() // 0x726514
{
    mangled_assert("?Shutdown@LuaFXHandles@@SG_NXZ");
    todo("implement");
    bool __result = _sub_726514();
    return __result;
}

_extern LuaFXHandles *_sub_726237();
LuaFXHandles *LuaFXHandles::Instance() // 0x726237
{
    mangled_assert("?Instance@LuaFXHandles@@SGPAV1@XZ");
    todo("implement");
    LuaFXHandles * __result = _sub_726237();
    return __result;
}

_extern unsigned __int32 _sub_726247(LuaFXHandles *const, FXManager::Handle);
unsigned __int32 LuaFXHandles::MapHandle(FXManager::Handle) // 0x726247
{
    mangled_assert("?MapHandle@LuaFXHandles@@QAEIUHandle@FXManager@@@Z");
    todo("implement");
    unsigned __int32 __result = _sub_726247(this, arg);
    return __result;
}

_extern FXManager::Handle _sub_7261E7(LuaFXHandles *const, unsigned __int32);
FXManager::Handle LuaFXHandles::GetHandle(unsigned __int32) // 0x7261E7
{
    mangled_assert("?GetHandle@LuaFXHandles@@QAE?AUHandle@FXManager@@I@Z");
    todo("implement");
    FXManager::Handle __result = _sub_7261E7(this, arg);
    return __result;
}

_extern unsigned __int32 _sub_725CA9(char const *, char const *, float);
unsigned __int32 FX_PlayEffect(char const *effectName, char const *volumeName, float scale) // 0x725CA9
{
    mangled_assert("?FX_PlayEffect@@YGIPBD0M@Z");
    todo("implement");
    unsigned __int32 __result = _sub_725CA9(effectName, volumeName, scale);
    return __result;
}

_extern unsigned __int32 _sub_725DF9(char const *, char const *, char const *, float);
unsigned __int32 FX_PlayEffectBetweenPoints(char const *effectName, char const *volumeName1, char const *volumeName2, float scale) // 0x725DF9
{
    mangled_assert("?FX_PlayEffectBetweenPoints@@YGIPBD00M@Z");
    todo("implement");
    unsigned __int32 __result = _sub_725DF9(effectName, volumeName1, volumeName2, scale);
    return __result;
}

_extern void _sub_726159(unsigned __int32);
void FX_StopEffect(unsigned __int32 index) // 0x726159
{
    mangled_assert("?FX_StopEffect@@YGXI@Z");
    todo("implement");
    _sub_726159(index);
}

_extern unsigned __int32 _sub_72605A(char const *, vector3, float);
unsigned __int32 FX_PlayEffectOnBackground(char const *effectName, vector3 direction, float scale) // 0x72605A
{
    mangled_assert("?FX_PlayEffectOnBackground@@YGIPBDVvector3@@M@Z");
    todo("implement");
    unsigned __int32 __result = _sub_72605A(effectName, direction, scale);
    return __result;
}

_extern unsigned __int32 _sub_726083(char const *, char const *, float);
unsigned __int32 FX_PlayEffectOnBackgroundVolume(char const *effectName, char const *volumeName, float scale) // 0x726083
{
    mangled_assert("?FX_PlayEffectOnBackgroundVolume@@YGIPBD0M@Z");
    todo("implement");
    unsigned __int32 __result = _sub_726083(effectName, volumeName, scale);
    return __result;
}

_extern void _sub_726184(unsigned __int32);
void FX_StopEffectOnBackground(unsigned __int32 handle) // 0x726184
{
    mangled_assert("?FX_StopEffectOnBackground@@YGXI@Z");
    todo("implement");
    _sub_726184(handle);
}

_extern void _sub_725C5F(unsigned __int32);
void FX_DestroyEffectOnBackground(unsigned __int32 handle) // 0x725C5F
{
    mangled_assert("?FX_DestroyEffectOnBackground@@YGXI@Z");
    todo("implement");
    _sub_725C5F(handle);
}

_extern void _sub_726109(char const *, char const *);
void FX_StartEvent(char const *sobGroupName, char const *eventName) // 0x726109
{
    mangled_assert("?FX_StartEvent@@YGXPBD0@Z");
    todo("implement");
    _sub_726109(sobGroupName, eventName);
}

_extern void _sub_726197(char const *, char const *);
void FX_StopEvent(char const *sobGroupName, char const *eventName) // 0x726197
{
    mangled_assert("?FX_StopEvent@@YGXPBD0@Z");
    todo("implement");
    _sub_726197(sobGroupName, eventName);
}

_extern void _sub_725C72();
void FX_Flush() // 0x725C72
{
    mangled_assert("?FX_Flush@@YGXXZ");
    todo("implement");
    _sub_725C72();
}

_extern void _sub_725C8A();
void FX_FlushLod() // 0x725C8A
{
    mangled_assert("?FX_FlushLod@@YGXXZ");
    todo("implement");
    _sub_725C8A();
}

_extern void _sub_725C96(__int32);
void FX_Lights(__int32 maxPriority) // 0x725C96
{
    mangled_assert("?FX_Lights@@YGXH@Z");
    todo("implement");
    _sub_725C96(maxPriority);
}

/* ---------- private code */

_extern void _sub_726538(SOBGroup &, char const *, bool);
_static void StartStopEvent(SOBGroup &sobGroup, char const *eventName, bool bStart) // 0x726538
{
    mangled_assert("StartStopEvent");
    todo("implement");
    _sub_726538(sobGroup, eventName, bStart);
}
#endif
