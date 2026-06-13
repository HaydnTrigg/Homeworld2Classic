#if 0
/* ---------- headers */

#include "decomp.h"
#include <deque>
#include <xstring>
#include <xmemory0>
#include <Scar\pch.h>
#include <Engine\SobUnmoveable.h>
#include <Engine\sob.h>
#include <Engine\OrderFeedback.h>
#include <UserInterface\signals.h>
#include <Scar\Scar.h>
#include <Engine\sobstatic.h>
#include <Scar\ScarEventSys.h>
#include <bitset>
#include <luaconfig\luabinding.h>
#include <Mathlib\matrix4.h>
#include <Engine\weaponinfo.h>
#include <SoundManager\SoundManager.h>
#include <seInterface2\SEInterface.h>
#include <seInterface2\SoundParamManager.h>
#include <Engine\MultiplierContainer.h>
#include <seInterface2\seinterfacefunc.h>
#include <assist\gbitset.h>
#include <new>
#include <exception>
#include <Engine\Modifiers\ModifierTargetCache.h>
#include <xstddef>
#include <type_traits>
#include <Engine\TeamColourRegistry.h>
#include <Mathlib\matrix3.h>
#include <queue>
#include <Engine\savegame.h>
#include <algorithm>
#include <xutility>
#include <Engine\task.h>
#include <stack>
#include <boost\scoped_array.hpp>
#include <iosfwd>
#include <boost\config.hpp>
#include <Engine\SobWithMeshStatic.h>
#include <Engine\Squadron.h>
#include <Scar\LuaRuleSystem.h>
#include <xmemory>
#include <Engine\command.h>
#include <Engine\ship.h>
#include <platform\timer.h>
#include <Engine\SobWithMesh.h>
#include <platform\platformexports.h>
#include <Engine\SobRigidBody.h>
#include <Engine\SobRigidBodyStatic.h>
#include <Scar\LuaCamera.h>
#include <Engine\Volume.h>
#include <Engine\VolumeStatic.h>
#include <math.h>
#include <Scar\GameQuery.h>
#include <Engine\MeshAnimation.h>
#include <Engine\SobUnmoveableStatic.h>
#include <Engine\Menus\MenuSupport.h>
#include <Engine\ShieldTypes.h>
#include <UserInterface\uitypes.h>
#include <platform\inputinterface.h>
#include <platform\keydefines.h>
#include <Engine\SOBGroup.h>
#include <boost\cstdint.hpp>
#include <vector>
#include <Engine\Subsystems\HardPointManager.h>
#include <Engine\Subsystems\HardPoint.h>
#include <seInterface2\SampleID.h>
#include <Engine\Subsystems\HardPointStatic.h>
#include <Engine\DynamicPoint.h>
#include <seInterface2\SampleBase.h>
#include <Engine\Subsystems\SubSystemType.h>
#include <Engine\SquadronList.h>
#include <boost\detail\workaround.hpp>
#include <Mathlib\quat.h>
#include <Engine\Parade.h>
#include <Mathlib\vector3.h>
#include <Mathlib\vector4.h>
#include <Engine\SensorsManager.h>
#include <Render\gl\r_types.h>
#include <util\colour.h>
#include <Mathlib\matvec.h>
#include <Engine\sobid.h>
#include <Engine\playerresourcetype.h>
#include <boost\utility.hpp>
#include <boost\utility\addressof.hpp>
#include <Engine\MainUI.h>
#include <Engine\Selector.h>
#include <Render\gl\r_defines.h>
#include <Engine\MetaSelTarg.h>
#include <Render\gl\glext.h>
#include <boost\utility\base_from_member.hpp>
#include <Mathlib\vector2.h>
#include <boost\utility_fwd.hpp>
#include <Engine\sobtypes.h>
#include <Camera\OrbitParameters.h>
#include <util\types.h>
#include <SoundManager\SoundEntityHandle.h>
#include <seInterface2\sedefinesshared.h>
#include <Engine\SelTarg.h>
#include <seInterface2\PatchID.h>
#include <Engine\prim.h>
#include <seInterface2\SoundParams.h>
#include <Engine\Universe.h>
#include <Engine\savegamedef.h>
#include <boost\shared_ptr.hpp>
#include <boost\next_prior.hpp>
#include <boost\detail\shared_count.hpp>
#include <boost\noncopyable.hpp>
#include <boost\detail\lwm_win32.hpp>
#include <Camera\FocusPoint.h>
#include <Engine\CameraCommand.h>
#include <Engine\CameraHW.h>
#include <boost\smart_ptr.hpp>
#include <Camera\CameraOrbitTarget.h>
#include <boost\scoped_ptr.hpp>
#include <Mathlib\mathlibdll.h>
#include <Engine\selection.h>
#include <Camera\Camera.h>
#include <Mathlib\fastmath.h>
#include <Camera\Frustum.h>
#include <Engine\fixedpoint.h>
#include <Camera\Plane3.h>
#include <util\fixed.h>
#include <Engine\ParadeCommand.h>
#include <Engine\commandtype.h>
#include <assist\stlexsmallvector.h>
#include <Engine\abilities.h>
#include <list>
#include <boost\shared_array.hpp>
#include <cstdarg>
#include <stdarg.h>
#include <debug\db.h>
#include <Mathlib\mathutil.h>

/* ---------- constants */

/* ---------- definitions */

class `anonymous-namespace'::LuaCameraLib :
    public LuaLibrary
{
public:
    LuaCameraLib(`anonymous-namespace'::LuaCameraLib const &); /* compiler_generated() */
    LuaCameraLib();
    virtual ~LuaCameraLib() override;
    virtual bool Register(LuaConfig &) override;
    virtual bool DeRegister(LuaConfig &) override;
    `anonymous-namespace'::LuaCameraLib &operator=(`anonymous-namespace'::LuaCameraLib const &); /* compiler_generated() */
};
static_assert(sizeof(`anonymous-namespace'::LuaCameraLib) == 16, "Invalid `anonymous-namespace'::LuaCameraLib size");

typedef `anonymous-namespace'::LuaCameraLib ?A0xffa891b8::LuaCameraLib;

/* ---------- prototypes */

extern void Camera_FocusSobGroupWithBuffer(char const *sobGroupName, float distance, float bufferDistance, float time);
extern void Camera_AltFocusWithVolume(char const *sobGroupName, bool closeZoom, char const *volumeName);
extern void Camera_AltFocus(char const *sobGroupName, bool closeZoom);
extern void Camera_FocusVolumeKeepingEyePosition(char const *volumeName);
extern void Camera_FocusSobGroup(char const *sobGroupName, bool closeZoom, float distance, float time);
extern void Camera_FocusVolumeWithBuffer(char const *volumeName, float distance, float bufferDistance, float time);
extern void Camera_FocusVolume(char const *volumeName, bool closeZoom, float distance, float time);
extern void Camera_ZoomClose(bool bClose);
extern void Camera_UseCameraPoint(char const *cameraPoint);
extern void Camera_FocusCameraPoint(char const *cameraPoint, float distance, float time);
extern void Camera_FocusCancel();
extern void Camera_FocusRestore();
extern void Camera_FocusSave();
extern void Camera_ResetRotated();
extern bool Camera_PlayerHasRotated(float degree);
extern void Camera_ResetPanned();
extern bool Camera_PlayerHasPanned(float distance);
extern bool Camera_UsePanning(bool panning);
extern void Camera_ResetFocused();
extern float Camera_GetLastZoomAmount();
extern bool Camera_PlayerHasFocused(char const *sobGroupName);
extern bool Camera_IsFocused(char const *sobGroupName);
extern void Camera_SetLetterboxState(bool state, float numSeconds);
extern float Camera_GetDistanceToSobGroup(char const *sobGroupName);
extern void Camera_SetLetterboxStateNoUI(bool state, float numSeconds);
extern void Camera_Interpolate(char const *fromCameraPoint, char const *toCameraPoint, float transitTime);
extern void Camera_AllowControl(bool enable);

/* ---------- globals */

extern char const *LUALIB_CAMERA; // 0x842F6C

/* ---------- private variables */

/* ---------- public code */

_extern void _sub_724765(char const *, float, float, float);
void Camera_FocusSobGroupWithBuffer(char const *sobGroupName, float distance, float bufferDistance, float time) // 0x724765
{
    mangled_assert("?Camera_FocusSobGroupWithBuffer@@YGXPBDMMM@Z");
    todo("implement");
    _sub_724765(sobGroupName, distance, bufferDistance, time);
}

_extern void _sub_7245B2(char const *, bool, char const *);
void Camera_AltFocusWithVolume(char const *sobGroupName, bool closeZoom, char const *volumeName) // 0x7245B2
{
    mangled_assert("?Camera_AltFocusWithVolume@@YGXPBD_N0@Z");
    todo("implement");
    _sub_7245B2(sobGroupName, closeZoom, volumeName);
}

_extern void _sub_7245A0(char const *, bool);
void Camera_AltFocus(char const *sobGroupName, bool closeZoom) // 0x7245A0
{
    mangled_assert("?Camera_AltFocus@@YGXPBD_N@Z");
    todo("implement");
    _sub_7245A0(sobGroupName, closeZoom);
}

_extern void _sub_7248E7(char const *);
void Camera_FocusVolumeKeepingEyePosition(char const *volumeName) // 0x7248E7
{
    mangled_assert("?Camera_FocusVolumeKeepingEyePosition@@YGXPBD@Z");
    todo("implement");
    _sub_7248E7(volumeName);
}

_extern void _sub_72473A(char const *, bool, float, float);
void Camera_FocusSobGroup(char const *sobGroupName, bool closeZoom, float distance, float time) // 0x72473A
{
    mangled_assert("?Camera_FocusSobGroup@@YGXPBD_NMM@Z");
    todo("implement");
    _sub_72473A(sobGroupName, closeZoom, distance, time);
}

_extern void _sub_724934(char const *, float, float, float);
void Camera_FocusVolumeWithBuffer(char const *volumeName, float distance, float bufferDistance, float time) // 0x724934
{
    mangled_assert("?Camera_FocusVolumeWithBuffer@@YGXPBDMMM@Z");
    todo("implement");
    _sub_724934(volumeName, distance, bufferDistance, time);
}

_extern void _sub_72489E(char const *, bool, float, float);
void Camera_FocusVolume(char const *volumeName, bool closeZoom, float distance, float time) // 0x72489E
{
    mangled_assert("?Camera_FocusVolume@@YGXPBD_NMM@Z");
    todo("implement");
    _sub_72489E(volumeName, closeZoom, distance, time);
}

_extern void _sub_724F49(bool);
void Camera_ZoomClose(bool bClose) // 0x724F49
{
    mangled_assert("?Camera_ZoomClose@@YGX_N@Z");
    todo("implement");
    _sub_724F49(bClose);
}

_extern void _sub_724EBB(char const *);
void Camera_UseCameraPoint(char const *cameraPoint) // 0x724EBB
{
    mangled_assert("?Camera_UseCameraPoint@@YGXPBD@Z");
    todo("implement");
    _sub_724EBB(cameraPoint);
}

_extern void _sub_7246C2(char const *, float, float);
void Camera_FocusCameraPoint(char const *cameraPoint, float distance, float time) // 0x7246C2
{
    mangled_assert("?Camera_FocusCameraPoint@@YGXPBDMM@Z");
    todo("implement");
    _sub_7246C2(cameraPoint, distance, time);
}

_extern void _sub_72470E();
void Camera_FocusCancel() // 0x72470E
{
    mangled_assert("?Camera_FocusCancel@@YGXXZ");
    todo("implement");
    _sub_72470E();
}

_extern void _sub_724724();
void Camera_FocusRestore() // 0x724724
{
    mangled_assert("?Camera_FocusRestore@@YGXXZ");
    todo("implement");
    _sub_724724();
}

_extern void _sub_72472F();
void Camera_FocusSave() // 0x72472F
{
    mangled_assert("?Camera_FocusSave@@YGXXZ");
    todo("implement");
    _sub_72472F();
}

_extern void _sub_724D84();
void Camera_ResetRotated() // 0x724D84
{
    mangled_assert("?Camera_ResetRotated@@YGXXZ");
    todo("implement");
    _sub_724D84();
}

_extern bool _sub_724D46(float);
bool Camera_PlayerHasRotated(float degree) // 0x724D46
{
    mangled_assert("?Camera_PlayerHasRotated@@YG_NM@Z");
    todo("implement");
    bool __result = _sub_724D46(degree);
    return __result;
}

_extern void _sub_724D77();
void Camera_ResetPanned() // 0x724D77
{
    mangled_assert("?Camera_ResetPanned@@YGXXZ");
    todo("implement");
    _sub_724D77();
}

_extern bool _sub_724D24(float);
bool Camera_PlayerHasPanned(float distance) // 0x724D24
{
    mangled_assert("?Camera_PlayerHasPanned@@YG_NM@Z");
    todo("implement");
    bool __result = _sub_724D24(distance);
    return __result;
}

_extern bool _sub_724F36(bool);
bool Camera_UsePanning(bool panning) // 0x724F36
{
    mangled_assert("?Camera_UsePanning@@YG_N_N@Z");
    todo("implement");
    bool __result = _sub_724F36(panning);
    return __result;
}

_extern void _sub_724D6C();
void Camera_ResetFocused() // 0x724D6C
{
    mangled_assert("?Camera_ResetFocused@@YGXXZ");
    todo("implement");
    _sub_724D6C();
}

_extern float _sub_724B47();
float Camera_GetLastZoomAmount() // 0x724B47
{
    mangled_assert("?Camera_GetLastZoomAmount@@YGMXZ");
    todo("implement");
    float __result = _sub_724B47();
    return __result;
}

_extern bool _sub_724CAB(char const *);
bool Camera_PlayerHasFocused(char const *sobGroupName) // 0x724CAB
{
    mangled_assert("?Camera_PlayerHasFocused@@YG_NPBD@Z");
    todo("implement");
    bool __result = _sub_724CAB(sobGroupName);
    return __result;
}

_extern bool _sub_724C34(char const *);
bool Camera_IsFocused(char const *sobGroupName) // 0x724C34
{
    mangled_assert("?Camera_IsFocused@@YG_NPBD@Z");
    todo("implement");
    bool __result = _sub_724C34(sobGroupName);
    return __result;
}

_extern void _sub_724D91(bool, float);
void Camera_SetLetterboxState(bool state, float numSeconds) // 0x724D91
{
    mangled_assert("?Camera_SetLetterboxState@@YGX_NM@Z");
    todo("implement");
    _sub_724D91(state, numSeconds);
}

_extern float _sub_724A85(char const *);
float Camera_GetDistanceToSobGroup(char const *sobGroupName) // 0x724A85
{
    mangled_assert("?Camera_GetDistanceToSobGroup@@YGMPBD@Z");
    todo("implement");
    float __result = _sub_724A85(sobGroupName);
    return __result;
}

_extern void _sub_724E21(bool, float);
void Camera_SetLetterboxStateNoUI(bool state, float numSeconds) // 0x724E21
{
    mangled_assert("?Camera_SetLetterboxStateNoUI@@YGX_NM@Z");
    todo("implement");
    _sub_724E21(state, numSeconds);
}

_extern void _sub_724B52(char const *, char const *, float);
void Camera_Interpolate(char const *fromCameraPoint, char const *toCameraPoint, float transitTime) // 0x724B52
{
    mangled_assert("?Camera_Interpolate@@YGXPBD0M@Z");
    todo("implement");
    _sub_724B52(fromCameraPoint, toCameraPoint, transitTime);
}

_extern void _sub_724595(bool);
void Camera_AllowControl(bool enable) // 0x724595
{
    mangled_assert("?Camera_AllowControl@@YGX_N@Z");
    todo("implement");
    _sub_724595(enable);
}

_extern void _sub_7243FD(LuaBinding::ObjInternal1<float,bool,LuaBinding::Functor1Free<float,bool> > *const);
_inline LuaBinding::ObjInternal1<float,bool,LuaBinding::Functor1Free<float,bool> >::~ObjInternal1<float,bool,LuaBinding::Functor1Free<float,bool> >() // 0x7243FD
{
    mangled_assert("??1?$ObjInternal1@M_NV?$Functor1Free@M_N@LuaBinding@@@LuaBinding@@UAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_7243FD(this);
}

_extern void _sub_724403(LuaBinding::ObjInternal3<char const *,bool,char const *,void,LuaBinding::Functor3Free<char const *,bool,char const *,void> > *const);
_inline LuaBinding::ObjInternal3<char const *,bool,char const *,void,LuaBinding::Functor3Free<char const *,bool,char const *,void> >::~ObjInternal3<char const *,bool,char const *,void,LuaBinding::Functor3Free<char const *,bool,char const *,void> >() // 0x724403
{
    mangled_assert("??1?$ObjInternal3@PBD_NPBDXV?$Functor3Free@PBD_NPBDX@LuaBinding@@@LuaBinding@@UAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_724403(this);
}

_extern void _sub_724409(LuaBinding::ObjInternal4<char const *,float,float,float,void,LuaBinding::Functor4Free<char const *,float,float,float,void> > *const);
_inline LuaBinding::ObjInternal4<char const *,float,float,float,void,LuaBinding::Functor4Free<char const *,float,float,float,void> >::~ObjInternal4<char const *,float,float,float,void,LuaBinding::Functor4Free<char const *,float,float,float,void> >() // 0x724409
{
    mangled_assert("??1?$ObjInternal4@PBDMMMXV?$Functor4Free@PBDMMMX@LuaBinding@@@LuaBinding@@UAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_724409(this);
}

_extern void _sub_72440F(LuaBinding::ObjInternal4<char const *,bool,float,float,void,LuaBinding::Functor4Free<char const *,bool,float,float,void> > *const);
_inline LuaBinding::ObjInternal4<char const *,bool,float,float,void,LuaBinding::Functor4Free<char const *,bool,float,float,void> >::~ObjInternal4<char const *,bool,float,float,void,LuaBinding::Functor4Free<char const *,bool,float,float,void> >() // 0x72440F
{
    mangled_assert("??1?$ObjInternal4@PBD_NMMXV?$Functor4Free@PBD_NMMX@LuaBinding@@@LuaBinding@@UAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_72440F(this);
}

/* ---------- private code */
#endif
