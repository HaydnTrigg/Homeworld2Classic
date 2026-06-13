#if 0
/* ---------- headers */

#include "decomp.h"
#include <Mathlib\matvec.h>
#include <xstring>
#include <xmemory0>
#include <Scar\pch.h>
#include <Camera\OrbitParameters.h>
#include <Render\gl\r_defines.h>
#include <Engine\SobUnmoveable.h>
#include <Render\gl\glext.h>
#include <Engine\sob.h>
#include <Engine\sobstatic.h>
#include <bitset>
#include <luaconfig\luabinding.h>
#include <Mathlib\matrix4.h>
#include <seInterface2\sedefinesshared.h>
#include <new>
#include <xstddef>
#include <Engine\abilities.h>
#include <type_traits>
#include <Mathlib\matrix3.h>
#include <xutility>
#include <boost\scoped_array.hpp>
#include <boost\config.hpp>
#include <iosfwd>
#include <platform\timer.h>
#include <Scar\LuaSensor.h>
#include <Scar\GameQuery.h>
#include <Engine\Volume.h>
#include <Engine\VolumeStatic.h>
#include <Engine\SobUnmoveableStatic.h>
#include <Engine\Sphere.h>
#include <vector>
#include <boost\detail\workaround.hpp>
#include <Mathlib\vector3.h>
#include <Mathlib\vector4.h>
#include <util\colour.h>
#include <Mathlib\vector2.h>
#include <boost\utility.hpp>
#include <Engine\sobtypes.h>
#include <util\types.h>
#include <boost\utility\addressof.hpp>
#include <boost\utility\base_from_member.hpp>
#include <boost\utility_fwd.hpp>
#include <SoundManager\SoundManager.h>
#include <seInterface2\SEInterface.h>
#include <seInterface2\SoundParamManager.h>
#include <seInterface2\seinterfacefunc.h>
#include <assist\gbitset.h>
#include <Engine\SelTarg.h>
#include <seInterface2\PatchID.h>
#include <Engine\prim.h>
#include <seInterface2\SoundParams.h>
#include <boost\shared_ptr.hpp>
#include <SoundManager\SoundEntityHandle.h>
#include <boost\next_prior.hpp>
#include <boost\smart_ptr.hpp>
#include <Mathlib\mathlibdll.h>
#include <boost\scoped_ptr.hpp>
#include <Engine\MainUI.h>
#include <Engine\selection.h>
#include <Mathlib\fastmath.h>
#include <boost\noncopyable.hpp>
#include <Engine\Selector.h>
#include <Engine\MetaSelTarg.h>
#include <seInterface2\SampleID.h>
#include <seInterface2\SampleBase.h>
#include <boost\shared_array.hpp>
#include <Engine\SensorsManager.h>
#include <Render\gl\r_types.h>

/* ---------- constants */

/* ---------- definitions */

class `anonymous-namespace'::LuaSensorLib :
    public LuaLibrary
{
public:
    LuaSensorLib(`anonymous-namespace'::LuaSensorLib const &); /* compiler_generated() */
    LuaSensorLib();
    virtual ~LuaSensorLib() override;
    virtual bool Register(LuaConfig &) override;
    virtual bool DeRegister(LuaConfig &) override;
    `anonymous-namespace'::LuaSensorLib &operator=(`anonymous-namespace'::LuaSensorLib const &); /* compiler_generated() */
};
static_assert(sizeof(`anonymous-namespace'::LuaSensorLib) == 16, "Invalid `anonymous-namespace'::LuaSensorLib size");

typedef `anonymous-namespace'::LuaSensorLib ?A0x58a77c5b::LuaSensorLib;

/* ---------- prototypes */

extern void Sensors_Toggle(bool turnOn);
extern void Sensors_EnableToggle(bool en_toggle);
extern void Sensors_Switch(bool turnOn);
extern bool Sensors_ManagerIsUp();
extern void Sensors_SetCameraMinMax(float min, float max);
extern void Sensors_SetZoomOutDistance(float distance);
extern void Sensors_EnableCameraZoom(bool bEnable);
extern void Sensors_FlashWorldPlane(bool bFlash);

/* ---------- globals */

extern char const *LUALIB_SENSOR; // 0x842F10

/* ---------- private variables */

/* ---------- public code */

_extern void _sub_723F20(bool);
void Sensors_Toggle(bool turnOn) // 0x723F20
{
    mangled_assert("?Sensors_Toggle@@YGX_N@Z");
    todo("implement");
    _sub_723F20(turnOn);
}

_extern void _sub_723E9B(bool);
void Sensors_EnableToggle(bool en_toggle) // 0x723E9B
{
    mangled_assert("?Sensors_EnableToggle@@YGX_N@Z");
    todo("implement");
    _sub_723E9B(en_toggle);
}

_extern void _sub_723F03(bool);
void Sensors_Switch(bool turnOn) // 0x723F03
{
    mangled_assert("?Sensors_Switch@@YGX_N@Z");
    todo("implement");
    _sub_723F03(turnOn);
}

_extern bool _sub_723EB8();
bool Sensors_ManagerIsUp() // 0x723EB8
{
    mangled_assert("?Sensors_ManagerIsUp@@YG_NXZ");
    todo("implement");
    bool __result = _sub_723EB8();
    return __result;
}

_extern void _sub_723EC3(float, float);
void Sensors_SetCameraMinMax(float min, float max) // 0x723EC3
{
    mangled_assert("?Sensors_SetCameraMinMax@@YGXMM@Z");
    todo("implement");
    _sub_723EC3(min, max);
}

_extern void _sub_723EE8(float);
void Sensors_SetZoomOutDistance(float distance) // 0x723EE8
{
    mangled_assert("?Sensors_SetZoomOutDistance@@YGXM@Z");
    todo("implement");
    _sub_723EE8(distance);
}

_extern void _sub_723E8F(bool);
void Sensors_EnableCameraZoom(bool bEnable) // 0x723E8F
{
    mangled_assert("?Sensors_EnableCameraZoom@@YGX_N@Z");
    todo("implement");
    _sub_723E8F(bEnable);
}

_extern void _sub_723EAC(bool);
void Sensors_FlashWorldPlane(bool bFlash) // 0x723EAC
{
    mangled_assert("?Sensors_FlashWorldPlane@@YGX_N@Z");
    todo("implement");
    _sub_723EAC(bFlash);
}

/* ---------- private code */
#endif
