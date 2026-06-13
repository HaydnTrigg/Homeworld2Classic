#if 0
/* ---------- headers */

#include "decomp.h"
#include <SoundManager\SoundEntityHandle.h>
#include <assist\stlexsmallvector.h>
#include <SensorsManager.h>
#include <xstring>
#include <Camera\OrbitParameters.h>
#include <xmemory0>
#include <boost\shared_array.hpp>
#include <Mathlib\matrix4.h>
#include <pch.h>
#include <SoundEventHandler.h>
#include <GameEventSys.h>
#include <platform\osdef.h>
#include <Mathlib\matrix3.h>
#include <boost\checked_delete.hpp>
#include <platform\timer.h>
#include <platform\platformexports.h>
#include <new>
#include <xstddef>
#include <App\AppObj.h>
#include <type_traits>
#include <platform\appinterface.h>
#include <renderer.h>
#include <seInterface2\PatchID.h>
#include <Render\gl\types.h>
#include <seInterface2\PatchBase.h>
#include <seInterface2\SampleID.h>
#include <Mathlib\matvec.h>
#include <abilities.h>
#include <seInterface2\SoundParams.h>
#include <seInterface2\SampleBase.h>
#include <xutility>
#include <utility>
#include <iosfwd>
#include <vector>
#include <Render\gl\lotypes.h>
#include <xmemory>
#include <sobid.h>
#include <Render\gl\r_types.h>
#include <Collision\BVH\octree.h>
#include <Collision\BVH\span.h>
#include <mainScreen.h>
#include <Collision\BVH\Internal\span_i.h>
#include <DynamicPoint.h>
#include <Collision\BVH\proxy.h>
#include <list>
#include <Collision\intersect.h>
#include <Collision\primitivesfwd.h>
#include <GameObj.h>
#include <Mathlib\vector3.h>
#include <task.h>
#include <Mathlib\vector4.h>
#include <stack>
#include <boost\smart_ptr.hpp>
#include <Interpolation.h>
#include <boost\scoped_ptr.hpp>
#include <seInterface2\sedefinesshared.h>
#include <Collision\Primitives\aabb.h>
#include <Mathlib\vector2.h>
#include <util\types.h>
#include <Render\gl\r_defines.h>
#include <boost\cstdint.hpp>
#include <Render\gl\glext.h>
#include <boost\scoped_array.hpp>
#include <MainUI.h>
#include <Selector.h>
#include <prim.h>
#include <Mathlib\quat.h>
#include <BattleScar\BattleScarOption.h>
#include <LightOption.h>
#include <KeyBindings.h>
#include <config.h>
#include <platform\keydefines.h>
#include <Graphics\AutoLODOption.h>
#include <Mathlib\mathlibdll.h>
#include <Mathlib\fastmath.h>
#include <Collision\Primitives\capsule.h>
#include <Collision\Primitives\segment.h>
#include <sob.h>
#include <Collision\BVH\profiling.h>
#include <sobstatic.h>
#include <debug\db.h>
#include <Collision\Primitives\sphere.h>
#include <boost\shared_ptr.hpp>
#include <util\colour.h>
#include <Render\objects\options.h>
#include <util\statmonitor.h>
#include <Render\objects\objects.h>
#include <util\utilexports.h>
#include <sobtypes.h>
#include <boost\throw_exception.hpp>
#include <selection.h>
#include <savegamedef.h>
#include <boost\detail\shared_count.hpp>
#include <OrderFeedback.h>
#include <bitset>
#include <SquadronList.h>
#include <boost\detail\lwm_win32.hpp>
#include <UserInterface\UISoundManager.h>
#include <hash_map>
#include <xhash>
#include <BattleChatter\ChatterEvent.h>
#include <MultiplierContainer.h>
#include <visibility.h>
#include <MetaSelTarg.h>
#include <MultiplierTypes.h>
#include <Collision\BVH\bvh.h>
#include <SoundManager\SoundManager.h>
#include <SelTarg.h>
#include <App\PlayerProfileGameOptions.h>
#include <seInterface2\SEInterface.h>
#include <luaconfig\luaconfig.h>
#include <seInterface2\seinterfacefunc.h>
#include <wchar.h>
#include <lua.h>
#include <seInterface2\SoundParamManager.h>
#include <assist\gbitset.h>
#include <Collision\Primitives\obb.h>

/* ---------- constants */

/* ---------- definitions */

struct PlayerProfileGameOptionsData
{
    ProfileAudioOptions m_audio; // 0x0
    ProfileVideoOptions m_video; // 0x20
    ProfileGameplayOptions m_gameplay; // 0x40
    ProfileControlsOptions m_controls; // 0x4C
    ProfileFXOptions m_fx; // 0x50
};
static_assert(sizeof(PlayerProfileGameOptionsData) == 112, "Invalid PlayerProfileGameOptionsData size");

/* ---------- prototypes */


_static void SaveKeyBindings(LuaConfig &lc);
_static void LoadKeyBindings(LuaConfig &lc);

/* ---------- globals */

/* ---------- private variables */

/* ---------- public code */

_extern _sub_502EEB(PlayerProfileGameOptions *const);
PlayerProfileGameOptions::PlayerProfileGameOptions() // 0x502EEB
{
    mangled_assert("??0PlayerProfileGameOptions@@QAE@XZ");
    todo("implement");
    _sub_502EEB(this);
}

_extern void _sub_502F05(PlayerProfileGameOptions *const);
PlayerProfileGameOptions::~PlayerProfileGameOptions() // 0x502F05
{
    mangled_assert("??1PlayerProfileGameOptions@@QAE@XZ");
    todo("implement");
    _sub_502F05(this);
}

_extern bool _sub_503186(PlayerProfileGameOptions *const, LuaConfig &);
bool PlayerProfileGameOptions::Load(LuaConfig &) // 0x503186
{
    mangled_assert("?Load@PlayerProfileGameOptions@@QAE_NAAVLuaConfig@@@Z");
    todo("implement");
    bool __result = _sub_503186(this, arg);
    return __result;
}

_extern bool _sub_50359A(PlayerProfileGameOptions *const, LuaConfig &);
bool PlayerProfileGameOptions::Save(LuaConfig &) // 0x50359A
{
    mangled_assert("?Save@PlayerProfileGameOptions@@QAE_NAAVLuaConfig@@@Z");
    todo("implement");
    bool __result = _sub_50359A(this, arg);
    return __result;
}

_extern bool _sub_502F4F(PlayerProfileGameOptions *const);
bool PlayerProfileGameOptions::Apply() // 0x502F4F
{
    mangled_assert("?Apply@PlayerProfileGameOptions@@QAE_NXZ");
    todo("implement");
    bool __result = _sub_502F4F(this);
    return __result;
}

_extern bool _sub_50310D(PlayerProfileGameOptions *const);
bool PlayerProfileGameOptions::ApplyScreenResolution() // 0x50310D
{
    mangled_assert("?ApplyScreenResolution@PlayerProfileGameOptions@@QAE_NXZ");
    todo("implement");
    bool __result = _sub_50310D(this);
    return __result;
}

_extern void _sub_503A94(PlayerProfileGameOptions *const, ProfileAudioOptions const &);
void PlayerProfileGameOptions::SetAudioOptions(ProfileAudioOptions const &) // 0x503A94
{
    mangled_assert("?SetAudioOptions@PlayerProfileGameOptions@@QAEXABUProfileAudioOptions@@@Z");
    todo("implement");
    _sub_503A94(this, arg);
}

_extern void _sub_503AD1(PlayerProfileGameOptions *const, ProfileVideoOptions const &);
void PlayerProfileGameOptions::SetVideoOptions(ProfileVideoOptions const &) // 0x503AD1
{
    mangled_assert("?SetVideoOptions@PlayerProfileGameOptions@@QAEXABUProfileVideoOptions@@@Z");
    todo("implement");
    _sub_503AD1(this, arg);
}

_extern void _sub_503ABE(PlayerProfileGameOptions *const, ProfileGameplayOptions const &);
void PlayerProfileGameOptions::SetGameplayOptions(ProfileGameplayOptions const &) // 0x503ABE
{
    mangled_assert("?SetGameplayOptions@PlayerProfileGameOptions@@QAEXABUProfileGameplayOptions@@@Z");
    todo("implement");
    _sub_503ABE(this, arg);
}

_extern void _sub_503AA6(PlayerProfileGameOptions *const, ProfileControlsOptions const &);
void PlayerProfileGameOptions::SetControlsOptions(ProfileControlsOptions const &) // 0x503AA6
{
    mangled_assert("?SetControlsOptions@PlayerProfileGameOptions@@QAEXABUProfileControlsOptions@@@Z");
    todo("implement");
    _sub_503AA6(this, arg);
}

_extern void _sub_503AA9(PlayerProfileGameOptions *const, ProfileFXOptions const &);
void PlayerProfileGameOptions::SetFXOptions(ProfileFXOptions const &) // 0x503AA9
{
    mangled_assert("?SetFXOptions@PlayerProfileGameOptions@@QAEXABUProfileFXOptions@@@Z");
    todo("implement");
    _sub_503AA9(this, arg);
}

_extern ProfileAudioOptions _sub_503128(PlayerProfileGameOptions const *const);
ProfileAudioOptions PlayerProfileGameOptions::GetAudioOptions() const // 0x503128
{
    mangled_assert("?GetAudioOptions@PlayerProfileGameOptions@@QBE?AUProfileAudioOptions@@XZ");
    todo("implement");
    ProfileAudioOptions __result = _sub_503128(this);
    return __result;
}

_extern ProfileVideoOptions _sub_50316F(PlayerProfileGameOptions const *const);
ProfileVideoOptions PlayerProfileGameOptions::GetVideoOptions() const // 0x50316F
{
    mangled_assert("?GetVideoOptions@PlayerProfileGameOptions@@QBE?AUProfileVideoOptions@@XZ");
    todo("implement");
    ProfileVideoOptions __result = _sub_50316F(this);
    return __result;
}

_extern ProfileGameplayOptions _sub_50315A(PlayerProfileGameOptions const *const);
ProfileGameplayOptions PlayerProfileGameOptions::GetGameplayOptions() const // 0x50315A
{
    mangled_assert("?GetGameplayOptions@PlayerProfileGameOptions@@QBE?AUProfileGameplayOptions@@XZ");
    todo("implement");
    ProfileGameplayOptions __result = _sub_50315A(this);
    return __result;
}

_extern ProfileControlsOptions _sub_50313C(PlayerProfileGameOptions const *const);
ProfileControlsOptions PlayerProfileGameOptions::GetControlsOptions() const // 0x50313C
{
    mangled_assert("?GetControlsOptions@PlayerProfileGameOptions@@QBE?AUProfileControlsOptions@@XZ");
    todo("implement");
    ProfileControlsOptions __result = _sub_50313C(this);
    return __result;
}

_extern ProfileFXOptions _sub_503143(PlayerProfileGameOptions const *const);
ProfileFXOptions PlayerProfileGameOptions::GetFXOptions() const // 0x503143
{
    mangled_assert("?GetFXOptions@PlayerProfileGameOptions@@QBE?AUProfileFXOptions@@XZ");
    todo("implement");
    ProfileFXOptions __result = _sub_503143(this);
    return __result;
}

/* ---------- private code */

_extern void _sub_503991(LuaConfig &);
_static void SaveKeyBindings(LuaConfig &lc) // 0x503991
{
    mangled_assert("SaveKeyBindings");
    todo("implement");
    _sub_503991(lc);
}

_extern void _sub_503524(LuaConfig &);
_static void LoadKeyBindings(LuaConfig &lc) // 0x503524
{
    mangled_assert("LoadKeyBindings");
    todo("implement");
    _sub_503524(lc);
}
#endif
