#if 0
/* ---------- headers */

#include "decomp.h"
#include <Render\gl\lotypes.h>
#include <MainUI.h>
#include <SensorsManager.h>
#include <xstring>
#include <SoundManager\SoundManager.h>
#include <Mathlib\matrix4.h>
#include <xmemory0>
#include <seInterface2\SEInterface.h>
#include <seInterface2\SoundParamManager.h>
#include <boost\shared_array.hpp>
#include <pch.h>
#include <seInterface2\seinterfacefunc.h>
#include <assist\gbitset.h>
#include <Render\gl\r_types.h>
#include <Render\objects\fontsystem.h>
#include <luaconfig\lualibman.h>
#include <Render\objects\objects.h>
#include <luaconfig\luabinding.h>
#include <Render\objects\bitmapfont.h>
#include <hash_map>
#include <SoundManager\SoundEntityHandle.h>
#include <xhash>
#include <SquadronList.h>
#include <Mathlib\matrix3.h>
#include <savegame.h>
#include <sob.h>
#include <gameRenderDebug.h>
#include <sobstatic.h>
#include <task.h>
#include <Collision\Primitives\obb.h>
#include <stack>
#include <Render\objects\compiledtext.h>
#include <new>
#include <xstddef>
#include <type_traits>
#include <abilities.h>
#include <xutility>
#include <utility>
#include <iosfwd>
#include <recorder.h>
#include <vector>
#include <config.h>
#include <xmemory>
#include <syncChecking.h>
#include <fileio\fileioexports.h>
#include <debug\ctassert.h>
#include <Render\gl\r_defines.h>
#include <Render\gl\glext.h>
#include <seInterface2\SampleID.h>
#include <sobid.h>
#include <seInterface2\SampleBase.h>
#include <MetaSelTarg.h>
#include <SelTarg.h>
#include <Collision\BVH\octree.h>
#include <Collision\BVH\span.h>
#include <Collision\BVH\Internal\span_i.h>
#include <Collision\BVH\proxy.h>
#include <Collision\intersect.h>
#include <Mathlib\vector3.h>
#include <Mathlib\vector4.h>
#include <map>
#include <xtree>
#include <boost\smart_ptr.hpp>
#include <luaconfig\luaconfig.h>
#include <boost\scoped_ptr.hpp>
#include <lua.h>
#include <Camera\OrbitParameters.h>
#include <Interpolation.h>
#include <Collision\primitivesfwd.h>
#include <orders.h>
#include <Mathlib\vector2.h>
#include <seInterface2\PatchID.h>
#include <orders_base.h>
#include <util\types.h>
#include <seInterface2\PatchBase.h>
#include <commandtype.h>
#include <seInterface2\SoundParams.h>
#include <Collision\Primitives\aabb.h>
#include <boost\cstdint.hpp>
#include <seInterface2\sedefinesshared.h>
#include <boost\config.hpp>
#include <Mathlib\luamathbinding.h>
#include <platform\timer.h>
#include <Collision\Primitives\sphere.h>
#include <platform\platformexports.h>
#include <gameRender.h>
#include <boost\scoped_array.hpp>
#include <Mathlib\quat.h>
#include <Render\FxGL\FXManager.h>
#include <Render\FxGL\VarMulti.h>
#include <SimVis\FogOfWarVis.h>
#include <gamemsg.h>
#include <Mathlib\mathlibdll.h>
#include <Mathlib\fastmath.h>
#include <Render\objects\core.h>
#include <Collision\BVH\profiling.h>
#include <gameSettings.h>
#include <debug\db.h>
#include <LevelDesc.h>
#include <Hash.h>
#include <Render\objects\cliprect.h>
#include <Collision\Primitives\capsule.h>
#include <fileio\md5.h>
#include <Collision\Primitives\segment.h>
#include <gamestructimpl.h>
#include <Badge.h>
#include <util\colour.h>
#include <boost\shared_ptr.hpp>
#include <sobtypes.h>
#include <boost\throw_exception.hpp>
#include <selection.h>
#include <savegamedef.h>
#include <platform\windowinterface.h>
#include <BattleScar\BattleScarManager.h>
#include <boost\detail\shared_count.hpp>
#include <bitset>
#include <Decal\DecalManager.h>
#include <Decal\VertexPool.h>
#include <boost\detail\lwm_win32.hpp>
#include <platform\osdef.h>
#include <Collision\BVH\bvh.h>
#include <LuaRender.h>
#include <wchar.h>
#include <renderer.h>
#include <MultiplierContainer.h>
#include <visibility.h>
#include <boost\static_assert.hpp>
#include <Render\gl\types.h>
#include <Selector.h>
#include <MultiplierTypes.h>
#include <Mathlib\matvec.h>
#include <prim.h>

/* ---------- constants */

/* ---------- definitions */

class `anonymous-namespace'::LuaRenderLib :
    public LuaLibrary
{
public:
    LuaRenderLib(`anonymous-namespace'::LuaRenderLib const &); /* compiler_generated() */
    LuaRenderLib();
    virtual ~LuaRenderLib() override;
    virtual bool Register(LuaConfig &) override;
    virtual bool DeRegister(LuaConfig &) override;
    `anonymous-namespace'::LuaRenderLib &operator=(`anonymous-namespace'::LuaRenderLib const &); /* compiler_generated() */
};
static_assert(sizeof(`anonymous-namespace'::LuaRenderLib) == 16, "Invalid `anonymous-namespace'::LuaRenderLib size");

typedef `anonymous-namespace'::LuaRenderLib ?A0xfa36e576::LuaRenderLib;

/* ---------- prototypes */

extern void setForceLOD(bool _force);
extern void setForcedLODLevel(long level);
extern void RenderEffects(bool on);
extern void RenderShips(bool on);
extern void FOWVis(bool on);
extern bool GetFOWVis();
extern void ShowBackground(bool on);
extern void ShowBattleScar(bool on);
extern void ShowAIPaths(unsigned __int32 on);
extern void ShowLevelVolumes(bool on);
extern void ShowShipDebug(bool on);
extern void ShowPathTolerance(bool on);
extern void ShowUnitCaps(bool on);
extern void ShowResourceDebug(bool on);
extern void ShowWeaponDebug(bool on);
extern void ShowInfo(bool onOff);
extern void Wireframe(bool on);
extern void ShowEngines(unsigned __int32 on);
extern void ReloadBattleScarTextures();
extern float PixelWidth();
extern float PixelHeight();
extern void EnableATIDisplay(bool bVisible);

/* ---------- globals */

extern char const *LUALIB_RENDER; // 0x83B3B4

/* ---------- private variables */

/* ---------- public code */

_extern void _sub_5CAD86(bool);
void setForceLOD(bool _force) // 0x5CAD86
{
    mangled_assert("?setForceLOD@@YGX_N@Z");
    todo("implement");
    _sub_5CAD86(_force);
}

_extern void _sub_5CAD92(long);
void setForcedLODLevel(long level) // 0x5CAD92
{
    mangled_assert("?setForcedLODLevel@@YGXJ@Z");
    todo("implement");
    _sub_5CAD92(level);
}

_extern void _sub_5CAC6B(bool);
void RenderEffects(bool on) // 0x5CAC6B
{
    mangled_assert("?RenderEffects@@YGX_N@Z");
    todo("implement");
    _sub_5CAC6B(on);
}

_extern void _sub_5CAC77(bool);
void RenderShips(bool on) // 0x5CAC77
{
    mangled_assert("?RenderShips@@YGX_N@Z");
    todo("implement");
    _sub_5CAC77(on);
}

_extern void _sub_5CA6E8(bool);
void FOWVis(bool on) // 0x5CA6E8
{
    mangled_assert("?FOWVis@@YGX_N@Z");
    todo("implement");
    _sub_5CA6E8(on);
}

_extern bool _sub_5CA712();
bool GetFOWVis() // 0x5CA712
{
    mangled_assert("?GetFOWVis@@YG_NXZ");
    todo("implement");
    bool __result = _sub_5CA712();
    return __result;
}

_extern void _sub_5CAC9B(bool);
void ShowBackground(bool on) // 0x5CAC9B
{
    mangled_assert("?ShowBackground@@YGX_N@Z");
    todo("implement");
    _sub_5CAC9B(on);
}

_extern void _sub_5CACA0(bool);
void ShowBattleScar(bool on) // 0x5CACA0
{
    mangled_assert("?ShowBattleScar@@YGX_N@Z");
    todo("implement");
    _sub_5CACA0(on);
}

_extern void _sub_5CAC83(unsigned __int32);
void ShowAIPaths(unsigned __int32 on) // 0x5CAC83
{
    mangled_assert("?ShowAIPaths@@YGXI@Z");
    todo("implement");
    _sub_5CAC83(on);
}

_extern void _sub_5CACDE(bool);
void ShowLevelVolumes(bool on) // 0x5CACDE
{
    mangled_assert("?ShowLevelVolumes@@YGX_N@Z");
    todo("implement");
    _sub_5CACDE(on);
}

_extern void _sub_5CAD26(bool);
void ShowShipDebug(bool on) // 0x5CAD26
{
    mangled_assert("?ShowShipDebug@@YGX_N@Z");
    todo("implement");
    _sub_5CAD26(on);
}

_extern void _sub_5CACF6(bool);
void ShowPathTolerance(bool on) // 0x5CACF6
{
    mangled_assert("?ShowPathTolerance@@YGX_N@Z");
    todo("implement");
    _sub_5CACF6(on);
}

_extern void _sub_5CAD3E(bool);
void ShowUnitCaps(bool on) // 0x5CAD3E
{
    mangled_assert("?ShowUnitCaps@@YGX_N@Z");
    todo("implement");
    _sub_5CAD3E(on);
}

_extern void _sub_5CAD0E(bool);
void ShowResourceDebug(bool on) // 0x5CAD0E
{
    mangled_assert("?ShowResourceDebug@@YGX_N@Z");
    todo("implement");
    _sub_5CAD0E(on);
}

_extern void _sub_5CAD56(bool);
void ShowWeaponDebug(bool on) // 0x5CAD56
{
    mangled_assert("?ShowWeaponDebug@@YGX_N@Z");
    todo("implement");
    _sub_5CAD56(on);
}

_extern void _sub_5CACBF(bool);
void ShowInfo(bool onOff) // 0x5CACBF
{
    mangled_assert("?ShowInfo@@YGX_N@Z");
    todo("implement");
    _sub_5CACBF(onOff);
}

_extern void _sub_5CAD6E(bool);
void Wireframe(bool on) // 0x5CAD6E
{
    mangled_assert("?Wireframe@@YGX_N@Z");
    todo("implement");
    _sub_5CAD6E(on);
}

_extern void _sub_5CACB3(unsigned __int32);
void ShowEngines(unsigned __int32 on) // 0x5CACB3
{
    mangled_assert("?ShowEngines@@YGXI@Z");
    todo("implement");
    _sub_5CACB3(on);
}

_extern void _sub_5CAC4D();
void ReloadBattleScarTextures() // 0x5CAC4D
{
    mangled_assert("?ReloadBattleScarTextures@@YGXXZ");
    todo("implement");
    _sub_5CAC4D();
}

_extern float _sub_5CA757();
float PixelWidth() // 0x5CA757
{
    mangled_assert("?PixelWidth@@YGMXZ");
    todo("implement");
    float __result = _sub_5CA757();
    return __result;
}

_extern float _sub_5CA729();
float PixelHeight() // 0x5CA729
{
    mangled_assert("?PixelHeight@@YGMXZ");
    todo("implement");
    float __result = _sub_5CA729();
    return __result;
}

_extern void _sub_5CA6D5(bool);
void EnableATIDisplay(bool bVisible) // 0x5CA6D5
{
    mangled_assert("?EnableATIDisplay@@YGX_N@Z");
    todo("implement");
    _sub_5CA6D5(bVisible);
}

_extern void _sub_5CA573(LuaBinding::ObjInternal0<float,LuaBinding::Functor0Free<float> > *const);
_inline LuaBinding::ObjInternal0<float,LuaBinding::Functor0Free<float> >::~ObjInternal0<float,LuaBinding::Functor0Free<float> >() // 0x5CA573
{
    mangled_assert("??1?$ObjInternal0@MV?$Functor0Free@M@LuaBinding@@@LuaBinding@@UAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_5CA573(this);
}

_extern void _sub_5CA579(LuaBinding::ObjInternal1<long,void,LuaBinding::Functor1Free<long,void> > *const);
_inline LuaBinding::ObjInternal1<long,void,LuaBinding::Functor1Free<long,void> >::~ObjInternal1<long,void,LuaBinding::Functor1Free<long,void> >() // 0x5CA579
{
    mangled_assert("??1?$ObjInternal1@JXV?$Functor1Free@JX@LuaBinding@@@LuaBinding@@UAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_5CA579(this);
}

/* ---------- private code */
#endif
