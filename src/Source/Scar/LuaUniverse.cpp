#if 0
/* ---------- headers */

#include "decomp.h"
#include <deque>
#include <Engine\TeamColourRegistry.h>
#include <Engine\savegame.h>
#include <xstring>
#include <Engine\task.h>
#include <xmemory0>
#include <stack>
#include <Scar\pch.h>
#include <Engine\SobWithMeshStatic.h>
#include <Engine\SobUnmoveable.h>
#include <Engine\Squadron.h>
#include <Engine\sob.h>
#include <Engine\command.h>
#include <Engine\ship.h>
#include <Engine\sobstatic.h>
#include <Engine\SobWithMesh.h>
#include <bitset>
#include <Engine\SobRigidBody.h>
#include <Engine\SobRigidBodyStatic.h>
#include <Engine\Volume.h>
#include <luaconfig\luabinding.h>
#include <Engine\VolumeStatic.h>
#include <Engine\SobUnmoveableStatic.h>
#include <Scar\GameQuery.h>
#include <Engine\MeshAnimation.h>
#include <seInterface2\SampleID.h>
#include <Mathlib\matrix4.h>
#include <Engine\ShieldTypes.h>
#include <seInterface2\SampleBase.h>
#include <Camera\OrbitParameters.h>
#include <Engine\LevelDesc.h>
#include <Engine\MultiplierContainer.h>
#include <Engine\Hash.h>
#include <new>
#include <Engine\SOBGroup.h>
#include <Engine\MultiplierTypes.h>
#include <fileio\md5.h>
#include <exception>
#include <xstddef>
#include <type_traits>
#include <Engine\Subsystems\HardPointManager.h>
#include <Engine\Subsystems\HardPoint.h>
#include <Engine\gamestructimpl.h>
#include <Engine\Subsystems\HardPointStatic.h>
#include <Engine\DynamicPoint.h>
#include <Engine\Badge.h>
#include <Engine\Subsystems\SubSystemType.h>
#include <Mathlib\matrix3.h>
#include <queue>
#include <Engine\SensorsManager.h>
#include <xutility>
#include <Render\gl\r_types.h>
#include <Mathlib\matvec.h>
#include <boost\scoped_array.hpp>
#include <boost\config.hpp>
#include <iosfwd>
#include <Engine\Sob\Nebula\NebulaGroup.h>
#include <map>
#include <Engine\Sob\Nebula\NebulaGroupBase.h>
#include <Engine\Parade.h>
#include <Engine\Modifiers\ModifierUIInfo.h>
#include <xtree>
#include <Engine\Modifiers\ModifierMultiplier.h>
#include <xmemory>
#include <platform\timer.h>
#include <Engine\Modifiers\ModifierEffect.h>
#include <Engine\MainUI.h>
#include <Engine\Selector.h>
#include <Render\gl\r_defines.h>
#include <Engine\recorder.h>
#include <Engine\MetaSelTarg.h>
#include <Render\gl\glext.h>
#include <Engine\orders.h>
#include <Engine\orders_base.h>
#include <Scar\LuaUniverse.h>
#include <Engine\alliance.h>
#include <boost\utility.hpp>
#include <Engine\playerresourcetype.h>
#include <fileio\fileioexports.h>
#include <boost\utility\addressof.hpp>
#include <Engine\Modifiers\ModifierApplier.h>
#include <Engine\gamemsg.h>
#include <boost\utility\base_from_member.hpp>
#include <seInterface2\sedefinesshared.h>
#include <boost\static_assert.hpp>
#include <boost\utility_fwd.hpp>
#include <Engine\Subsystems\Subsystem.h>
#include <vector>
#include <Engine\Subsystems\SubsystemStatic.h>
#include <SoundManager\SoundEntityHandle.h>
#include <Engine\weaponstaticinfo.h>
#include <Engine\GunBinding.h>
#include <Engine\EventPointerManager.h>
#include <Engine\SquadronList.h>
#include <boost\detail\workaround.hpp>
#include <Engine\App\Hw2Identify.h>
#include <Mathlib\quat.h>
#include <Mathlib\vector3.h>
#include <Mathlib\vector4.h>
#include <boost\next_prior.hpp>
#include <util\colour.h>
#include <Engine\sobid.h>
#include <Engine\WeaponClassSpecificInfo.h>
#include <boost\noncopyable.hpp>
#include <Engine\gameRandom.h>
#include <Engine\random.h>
#include <Mathlib\vector2.h>
#include <util\types.h>
#include <Engine\sobtypes.h>
#include <Engine\Sphere.h>
#include <Engine\ParadeCommand.h>
#include <cstdarg>
#include <Engine\commandtype.h>
#include <stdarg.h>
#include <Engine\SelTarg.h>
#include <seInterface2\PatchID.h>
#include <Engine\prim.h>
#include <Engine\ReactiveFleet.h>
#include <seInterface2\SoundParams.h>
#include <Engine\Universe.h>
#include <Engine\savegamedef.h>
#include <Mathlib\luamathbinding.h>
#include <boost\shared_ptr.hpp>
#include <Engine\abilities.h>
#include <boost\detail\shared_count.hpp>
#include <Scar\Scar.h>
#include <Engine\Modifiers\ModifierAbility.h>
#include <Scar\ScarEventSys.h>
#include <boost\detail\lwm_win32.hpp>
#include <Engine\TimerMap.h>
#include <boost\smart_ptr.hpp>
#include <Mathlib\mathlibdll.h>
#include <boost\scoped_ptr.hpp>
#include <Engine\selection.h>
#include <Mathlib\fastmath.h>
#include <Engine\fixedpoint.h>
#include <util\fixed.h>
#include <Engine\Pieplate.h>
#include <assist\stlexsmallvector.h>
#include <SoundManager\SoundManager.h>
#include <Engine\OrderFeedback.h>
#include <seInterface2\SEInterface.h>
#include <seInterface2\SoundParamManager.h>
#include <Engine\Sob\Nebula\NebulaGroupManager.h>
#include <seInterface2\seinterfacefunc.h>
#include <assist\gbitset.h>
#include <Scar\LuaRuleSystem.h>
#include <Engine\weaponinfo.h>
#include <list>
#include <Engine\gameSettings.h>
#include <wchar.h>
#include <boost\shared_array.hpp>
#include <Engine\mainuidefines.h>
#include <string>
#include <Engine\config.h>
#include <Engine\syncChecking.h>
#include <Engine\FogOfWar.h>
#include <Engine\Modifiers\ModifierTargetCache.h>
#include <Engine\AxisAlignBox.h>

/* ---------- constants */

/* ---------- definitions */

class `anonymous-namespace'::LuaUniverseLib :
    public LuaLibrary
{
public:
    LuaUniverseLib(`anonymous-namespace'::LuaUniverseLib const &); /* compiler_generated() */
    LuaUniverseLib();
    virtual ~LuaUniverseLib() override;
    virtual bool Register(LuaConfig &) override;
    virtual bool DeRegister(LuaConfig &) override;
    `anonymous-namespace'::LuaUniverseLib &operator=(`anonymous-namespace'::LuaUniverseLib const &); /* compiler_generated() */
};
static_assert(sizeof(`anonymous-namespace'::LuaUniverseLib) == 16, "Invalid `anonymous-namespace'::LuaUniverseLib size");

typedef `anonymous-namespace'::LuaUniverseLib ?A0xd7686713::LuaUniverseLib;

/* ---------- prototypes */

extern float Universe_GameTime();
extern __int32 Universe_CurrentPlayer();
extern __int32 Universe_PlayerCount();
extern bool AreAllied(__int32 player0, __int32 player1);
extern void SetAlliance(__int32 player0, __int32 player1);
extern void BreakAlliance(__int32 player0, __int32 player1);
extern unsigned __int32 Wait_Start(float time);
extern bool Wait_End(unsigned __int32 id);
extern void Universe_Pause(bool pause, float numSeconds);
extern void Universe_SlowDown(float factor, float numSeconds);
extern void Universe_SetAvoidance(bool active);
extern void Universe_EnableSkip(bool canSkip);
extern void Universe_NebulaDelete(char const *nebulaName, float fadeTime);
extern unsigned __int32 EventPointer_AddSobGroup(char const *sobGroupName, unsigned __int32 colour, float radius);
extern unsigned __int32 EventPointer_AddVolume(char const *volumeName, unsigned __int32 colour, float radius);
extern unsigned __int32 EventPointer_AddSubSystemFromSobGroup(char const *subsystemName, char const *sobGroupName, unsigned __int32 colour, float radius);
extern void EventPointer_Remove(unsigned __int32 id);
extern float RandomRange(float min, float max);
extern unsigned __int32 RandomIntMax(unsigned __int32 max);
extern void FOW_ForceUpdate();
extern double GetSubSystemId(char const *subsystemName);
extern double GetShipId(char const *shipName);
extern double GetResearchId(char const *researchName);
extern void Universe_AllowPlayerOrders(bool enable);
extern void Universe_AllowClicks(bool enable);
extern void Universe_Fade(float percentage, float time);
extern void Universe_EnableCmd(bool enable, unsigned __int32 cmd);
extern void Universe_AllowSelect(bool enable);
extern bool Universe_IsPiePlateActive();
extern bool Universe_MoveRestrictToVolume(bool enable, char const *volumeName);
extern float Universe_GetCurrentMoveHeight();
extern float GetReactiveFleetSizeInRU();
extern float GetReactiveFleetExtraRU();
extern float GetActualPlayerFleetSizeInRU();
extern float GetActualPlayerFleetExtraRU();
extern float GetMultiplierForExtraShips();
extern float GetMultiplierForExtraRU();
extern void Preload_Ship(char const *name);
extern void SetStartFleetSuffix(char const *string);
extern void Volume_AddSphere(char const *name, vector3 location, float radius);
extern void Volume_AddCube(char const *name, vector3 loc, float size);
extern bool Volume_Delete(char const *name);
extern vector3 Universe_GetWorldBounds();
extern vector3 Universe_ClipToWorldBounds(vector3 in);

/* ---------- globals */

extern char const *LUALIB_UNIVERSE; // 0x8422C8

/* ---------- private variables */

/* ---------- public code */

_extern float _sub_716244();
float Universe_GameTime() // 0x716244
{
    mangled_assert("?Universe_GameTime@@YGMXZ");
    todo("implement");
    float __result = _sub_716244();
    return __result;
}

_extern __int32 _sub_71619C();
__int32 Universe_CurrentPlayer() // 0x71619C
{
    mangled_assert("?Universe_CurrentPlayer@@YGHXZ");
    todo("implement");
    __int32 __result = _sub_71619C();
    return __result;
}

_extern __int32 _sub_7163D2();
__int32 Universe_PlayerCount() // 0x7163D2
{
    mangled_assert("?Universe_PlayerCount@@YGHXZ");
    todo("implement");
    __int32 __result = _sub_7163D2();
    return __result;
}

_extern bool _sub_7146BD(__int32, __int32);
bool AreAllied(__int32 player0, __int32 player1) // 0x7146BD
{
    mangled_assert("?AreAllied@@YG_NHH@Z");
    todo("implement");
    bool __result = _sub_7146BD(player0, player1);
    return __result;
}

_extern void _sub_715FD9(__int32, __int32);
void SetAlliance(__int32 player0, __int32 player1) // 0x715FD9
{
    mangled_assert("?SetAlliance@@YGXHH@Z");
    todo("implement");
    _sub_715FD9(player0, player1);
}

_extern void _sub_71471A(__int32, __int32);
void BreakAlliance(__int32 player0, __int32 player1) // 0x71471A
{
    mangled_assert("?BreakAlliance@@YGXHH@Z");
    todo("implement");
    _sub_71471A(player0, player1);
}

_extern unsigned __int32 _sub_7165BD(float);
unsigned __int32 Wait_Start(float time) // 0x7165BD
{
    mangled_assert("?Wait_Start@@YGIM@Z");
    todo("implement");
    unsigned __int32 __result = _sub_7165BD(time);
    return __result;
}

_extern bool _sub_7165AA(unsigned __int32);
bool Wait_End(unsigned __int32 id) // 0x7165AA
{
    mangled_assert("?Wait_End@@YG_NI@Z");
    todo("implement");
    bool __result = _sub_7165AA(id);
    return __result;
}

_extern void _sub_716391(bool, float);
void Universe_Pause(bool pause, float numSeconds) // 0x716391
{
    mangled_assert("?Universe_Pause@@YGX_NM@Z");
    todo("implement");
    _sub_716391(pause, numSeconds);
}

_extern void _sub_7163FE(float, float);
void Universe_SlowDown(float factor, float numSeconds) // 0x7163FE
{
    mangled_assert("?Universe_SlowDown@@YGXMM@Z");
    todo("implement");
    _sub_7163FE(factor, numSeconds);
}

_extern void _sub_7163E8(bool);
void Universe_SetAvoidance(bool active) // 0x7163E8
{
    mangled_assert("?Universe_SetAvoidance@@YGX_N@Z");
    todo("implement");
    _sub_7163E8(active);
}

_extern void _sub_7161F1(bool);
void Universe_EnableSkip(bool canSkip) // 0x7161F1
{
    mangled_assert("?Universe_EnableSkip@@YGX_N@Z");
    todo("implement");
    _sub_7161F1(canSkip);
}

_extern void _sub_71633F(char const *, float);
void Universe_NebulaDelete(char const *nebulaName, float fadeTime) // 0x71633F
{
    mangled_assert("?Universe_NebulaDelete@@YGXPBDM@Z");
    todo("implement");
    _sub_71633F(nebulaName, fadeTime);
}

_extern unsigned __int32 _sub_714B79(char const *, unsigned __int32, float);
unsigned __int32 EventPointer_AddSobGroup(char const *sobGroupName, unsigned __int32 colour, float radius) // 0x714B79
{
    mangled_assert("?EventPointer_AddSobGroup@@YGIPBDIM@Z");
    todo("implement");
    unsigned __int32 __result = _sub_714B79(sobGroupName, colour, radius);
    return __result;
}

_extern unsigned __int32 _sub_714F90(char const *, unsigned __int32, float);
unsigned __int32 EventPointer_AddVolume(char const *volumeName, unsigned __int32 colour, float radius) // 0x714F90
{
    mangled_assert("?EventPointer_AddVolume@@YGIPBDIM@Z");
    todo("implement");
    unsigned __int32 __result = _sub_714F90(volumeName, colour, radius);
    return __result;
}

_extern unsigned __int32 _sub_714D0D(char const *, char const *, unsigned __int32, float);
unsigned __int32 EventPointer_AddSubSystemFromSobGroup(char const *subsystemName, char const *sobGroupName, unsigned __int32 colour, float radius) // 0x714D0D
{
    mangled_assert("?EventPointer_AddSubSystemFromSobGroup@@YGIPBD0IM@Z");
    todo("implement");
    unsigned __int32 __result = _sub_714D0D(subsystemName, sobGroupName, colour, radius);
    return __result;
}

_extern void _sub_7150C1(unsigned __int32);
void EventPointer_Remove(unsigned __int32 id) // 0x7150C1
{
    mangled_assert("?EventPointer_Remove@@YGXI@Z");
    todo("implement");
    _sub_7150C1(id);
}

_extern float _sub_7152C4(float, float);
float RandomRange(float min, float max) // 0x7152C4
{
    mangled_assert("?RandomRange@@YGMMM@Z");
    todo("implement");
    float __result = _sub_7152C4(min, max);
    return __result;
}

_extern unsigned __int32 _sub_7152A9(unsigned __int32);
unsigned __int32 RandomIntMax(unsigned __int32 max) // 0x7152A9
{
    mangled_assert("?RandomIntMax@@YGII@Z");
    todo("implement");
    unsigned __int32 __result = _sub_7152A9(max);
    return __result;
}

_extern void _sub_7150D2();
void FOW_ForceUpdate() // 0x7150D2
{
    mangled_assert("?FOW_ForceUpdate@@YGXXZ");
    todo("implement");
    _sub_7150D2();
}

_extern double _sub_7151EE(char const *);
double GetSubSystemId(char const *subsystemName) // 0x7151EE
{
    mangled_assert("?GetSubSystemId@@YGNPBD@Z");
    todo("implement");
    double __result = _sub_7151EE(subsystemName);
    return __result;
}

_extern double _sub_715182(char const *);
double GetShipId(char const *shipName) // 0x715182
{
    mangled_assert("?GetShipId@@YGNPBD@Z");
    todo("implement");
    double __result = _sub_715182(shipName);
    return __result;
}

_extern double _sub_715116(char const *);
double GetResearchId(char const *researchName) // 0x715116
{
    mangled_assert("?GetResearchId@@YGNPBD@Z");
    todo("implement");
    double __result = _sub_715116(researchName);
    return __result;
}

_extern void _sub_7160B6(bool);
void Universe_AllowPlayerOrders(bool enable) // 0x7160B6
{
    mangled_assert("?Universe_AllowPlayerOrders@@YGX_N@Z");
    todo("implement");
    _sub_7160B6(enable);
}

_extern void _sub_716068(bool);
void Universe_AllowClicks(bool enable) // 0x716068
{
    mangled_assert("?Universe_AllowClicks@@YGX_N@Z");
    todo("implement");
    _sub_716068(enable);
}

_extern void _sub_71621C(float, float);
void Universe_Fade(float percentage, float time) // 0x71621C
{
    mangled_assert("?Universe_Fade@@YGXMM@Z");
    todo("implement");
    _sub_71621C(percentage, time);
}

_extern void _sub_7161A8(bool, unsigned __int32);
void Universe_EnableCmd(bool enable, unsigned __int32 cmd) // 0x7161A8
{
    mangled_assert("?Universe_EnableCmd@@YGX_NI@Z");
    todo("implement");
    _sub_7161A8(enable, cmd);
}

_extern void _sub_716111(bool);
void Universe_AllowSelect(bool enable) // 0x716111
{
    mangled_assert("?Universe_AllowSelect@@YGX_N@Z");
    todo("implement");
    _sub_716111(enable);
}

_extern bool _sub_7162A8();
bool Universe_IsPiePlateActive() // 0x7162A8
{
    mangled_assert("?Universe_IsPiePlateActive@@YG_NXZ");
    todo("implement");
    bool __result = _sub_7162A8();
    return __result;
}

_extern bool _sub_7162BB(bool, char const *);
bool Universe_MoveRestrictToVolume(bool enable, char const *volumeName) // 0x7162BB
{
    mangled_assert("?Universe_MoveRestrictToVolume@@YG_N_NPBD@Z");
    todo("implement");
    bool __result = _sub_7162BB(enable, volumeName);
    return __result;
}

_extern float _sub_71624F();
float Universe_GetCurrentMoveHeight() // 0x71624F
{
    mangled_assert("?Universe_GetCurrentMoveHeight@@YGMXZ");
    todo("implement");
    float __result = _sub_71624F();
    return __result;
}

_extern float _sub_71510D();
float GetReactiveFleetSizeInRU() // 0x71510D
{
    mangled_assert("?GetReactiveFleetSizeInRU@@YGMXZ");
    todo("implement");
    float __result = _sub_71510D();
    return __result;
}

_extern float _sub_715104();
float GetReactiveFleetExtraRU() // 0x715104
{
    mangled_assert("?GetReactiveFleetExtraRU@@YGMXZ");
    todo("implement");
    float __result = _sub_715104();
    return __result;
}

_extern float _sub_7150EA();
float GetActualPlayerFleetSizeInRU() // 0x7150EA
{
    mangled_assert("?GetActualPlayerFleetSizeInRU@@YGMXZ");
    todo("implement");
    float __result = _sub_7150EA();
    return __result;
}

_extern float _sub_7150E1();
float GetActualPlayerFleetExtraRU() // 0x7150E1
{
    mangled_assert("?GetActualPlayerFleetExtraRU@@YGMXZ");
    todo("implement");
    float __result = _sub_7150E1();
    return __result;
}

_extern float _sub_7150FC();
float GetMultiplierForExtraShips() // 0x7150FC
{
    mangled_assert("?GetMultiplierForExtraShips@@YGMXZ");
    todo("implement");
    float __result = _sub_7150FC();
    return __result;
}

_extern float _sub_7150F3();
float GetMultiplierForExtraRU() // 0x7150F3
{
    mangled_assert("?GetMultiplierForExtraRU@@YGMXZ");
    todo("implement");
    float __result = _sub_7150F3();
    return __result;
}

_extern void _sub_71525A(char const *);
void Preload_Ship(char const *name) // 0x71525A
{
    mangled_assert("?Preload_Ship@@YGXPBD@Z");
    todo("implement");
    _sub_71525A(name);
}

_extern void _sub_716055(char const *);
void SetStartFleetSuffix(char const *string) // 0x716055
{
    mangled_assert("?SetStartFleetSuffix@@YGXPBD@Z");
    todo("implement");
    _sub_716055(string);
}

_extern void _sub_7164EF(char const *, vector3, float);
void Volume_AddSphere(char const *name, vector3 location, float radius) // 0x7164EF
{
    mangled_assert("?Volume_AddSphere@@YGXPBDVvector3@@M@Z");
    todo("implement");
    _sub_7164EF(name, location, radius);
}

_extern void _sub_716436(char const *, vector3, float);
void Volume_AddCube(char const *name, vector3 loc, float size) // 0x716436
{
    mangled_assert("?Volume_AddCube@@YGXPBDVvector3@@M@Z");
    todo("implement");
    _sub_716436(name, loc, size);
}

_extern bool _sub_71654A(char const *);
bool Volume_Delete(char const *name) // 0x71654A
{
    mangled_assert("?Volume_Delete@@YG_NPBD@Z");
    todo("implement");
    bool __result = _sub_71654A(name);
    return __result;
}

_extern vector3 _sub_71628C();
vector3 Universe_GetWorldBounds() // 0x71628C
{
    mangled_assert("?Universe_GetWorldBounds@@YG?AVvector3@@XZ");
    todo("implement");
    vector3 __result = _sub_71628C();
    return __result;
}

_extern vector3 _sub_716178(vector3);
vector3 Universe_ClipToWorldBounds(vector3 in) // 0x716178
{
    mangled_assert("?Universe_ClipToWorldBounds@@YG?AVvector3@@V1@@Z");
    todo("implement");
    vector3 __result = _sub_716178(in);
    return __result;
}

_extern void _sub_714389(LuaBinding::ObjInternal0<vector3,LuaBinding::Functor0Free<vector3> > *const);
_inline LuaBinding::ObjInternal0<vector3,LuaBinding::Functor0Free<vector3> >::~ObjInternal0<vector3,LuaBinding::Functor0Free<vector3> >() // 0x714389
{
    mangled_assert("??1?$ObjInternal0@Vvector3@@V?$Functor0Free@Vvector3@@@LuaBinding@@@LuaBinding@@UAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_714389(this);
}

_extern void _sub_71438F(LuaBinding::ObjInternal1<float,unsigned int,LuaBinding::Functor1Free<float,unsigned int> > *const);
_inline LuaBinding::ObjInternal1<float,unsigned int,LuaBinding::Functor1Free<float,unsigned int> >::~ObjInternal1<float,unsigned int,LuaBinding::Functor1Free<float,unsigned int> >() // 0x71438F
{
    mangled_assert("??1?$ObjInternal1@MIV?$Functor1Free@MI@LuaBinding@@@LuaBinding@@UAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_71438F(this);
}

_extern void _sub_714395(LuaBinding::ObjInternal1<char const *,double,LuaBinding::Functor1Free<char const *,double> > *const);
_inline LuaBinding::ObjInternal1<char const *,double,LuaBinding::Functor1Free<char const *,double> >::~ObjInternal1<char const *,double,LuaBinding::Functor1Free<char const *,double> >() // 0x714395
{
    mangled_assert("??1?$ObjInternal1@PBDNV?$Functor1Free@PBDN@LuaBinding@@@LuaBinding@@UAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_714395(this);
}

_extern void _sub_71439B(LuaBinding::ObjInternal1<vector3,vector3,LuaBinding::Functor1Free<vector3,vector3> > *const);
_inline LuaBinding::ObjInternal1<vector3,vector3,LuaBinding::Functor1Free<vector3,vector3> >::~ObjInternal1<vector3,vector3,LuaBinding::Functor1Free<vector3,vector3> >() // 0x71439B
{
    mangled_assert("??1?$ObjInternal1@Vvector3@@V1@V?$Functor1Free@Vvector3@@V1@@LuaBinding@@@LuaBinding@@UAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_71439B(this);
}

_extern void _sub_7143A1(LuaBinding::ObjInternal2<float,float,float,LuaBinding::Functor2Free<float,float,float> > *const);
_inline LuaBinding::ObjInternal2<float,float,float,LuaBinding::Functor2Free<float,float,float> >::~ObjInternal2<float,float,float,LuaBinding::Functor2Free<float,float,float> >() // 0x7143A1
{
    mangled_assert("??1?$ObjInternal2@MMMV?$Functor2Free@MMM@LuaBinding@@@LuaBinding@@UAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_7143A1(this);
}

_extern void _sub_7143A7(LuaBinding::ObjInternal2<bool,unsigned int,void,LuaBinding::Functor2Free<bool,unsigned int,void> > *const);
_inline LuaBinding::ObjInternal2<bool,unsigned int,void,LuaBinding::Functor2Free<bool,unsigned int,void> >::~ObjInternal2<bool,unsigned int,void,LuaBinding::Functor2Free<bool,unsigned int,void> >() // 0x7143A7
{
    mangled_assert("??1?$ObjInternal2@_NIXV?$Functor2Free@_NIX@LuaBinding@@@LuaBinding@@UAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_7143A7(this);
}

_extern void _sub_7143AD(LuaBinding::ObjInternal2<bool,float,void,LuaBinding::Functor2Free<bool,float,void> > *const);
_inline LuaBinding::ObjInternal2<bool,float,void,LuaBinding::Functor2Free<bool,float,void> >::~ObjInternal2<bool,float,void,LuaBinding::Functor2Free<bool,float,void> >() // 0x7143AD
{
    mangled_assert("??1?$ObjInternal2@_NMXV?$Functor2Free@_NMX@LuaBinding@@@LuaBinding@@UAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_7143AD(this);
}

_extern void _sub_7143B3(LuaBinding::ObjInternal2<bool,char const *,bool,LuaBinding::Functor2Free<bool,char const *,bool> > *const);
_inline LuaBinding::ObjInternal2<bool,char const *,bool,LuaBinding::Functor2Free<bool,char const *,bool> >::~ObjInternal2<bool,char const *,bool,LuaBinding::Functor2Free<bool,char const *,bool> >() // 0x7143B3
{
    mangled_assert("??1?$ObjInternal2@_NPBD_NV?$Functor2Free@_NPBD_N@LuaBinding@@@LuaBinding@@UAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_7143B3(this);
}

_extern void _sub_7143B9(LuaBinding::ObjInternal3<char const *,unsigned int,float,unsigned int,LuaBinding::Functor3Free<char const *,unsigned int,float,unsigned int> > *const);
_inline LuaBinding::ObjInternal3<char const *,unsigned int,float,unsigned int,LuaBinding::Functor3Free<char const *,unsigned int,float,unsigned int> >::~ObjInternal3<char const *,unsigned int,float,unsigned int,LuaBinding::Functor3Free<char const *,unsigned int,float,unsigned int> >() // 0x7143B9
{
    mangled_assert("??1?$ObjInternal3@PBDIMIV?$Functor3Free@PBDIMI@LuaBinding@@@LuaBinding@@UAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_7143B9(this);
}

_extern void _sub_7143BF(LuaBinding::ObjInternal4<char const *,char const *,unsigned int,float,unsigned int,LuaBinding::Functor4Free<char const *,char const *,unsigned int,float,unsigned int> > *const);
_inline LuaBinding::ObjInternal4<char const *,char const *,unsigned int,float,unsigned int,LuaBinding::Functor4Free<char const *,char const *,unsigned int,float,unsigned int> >::~ObjInternal4<char const *,char const *,unsigned int,float,unsigned int,LuaBinding::Functor4Free<char const *,char const *,unsigned int,float,unsigned int> >() // 0x7143BF
{
    mangled_assert("??1?$ObjInternal4@PBDPBDIMIV?$Functor4Free@PBDPBDIMI@LuaBinding@@@LuaBinding@@UAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_7143BF(this);
}

/* ---------- private code */
#endif
