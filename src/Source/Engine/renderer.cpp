#if 0
/* ---------- headers */

#include "decomp.h"
#include <MultiplierContainer.h>
#include <visibility.h>
#include <MultiplierTypes.h>
#include <Collision\BVH\bvh.h>
#include <xstring>
#include <Mathlib\matrix4.h>
#include <xmemory0>
#include <boost\shared_array.hpp>
#include <Render\objects\vertex_program.h>
#include <pch.h>
#include <seInterface2\SampleID.h>
#include <seInterface2\SampleBase.h>
#include <Render\objects\vertexarray.h>
#include <platform\keydefines.h>
#include <Interface.h>
#include <Render\objects\vertexarrayinternal.h>
#include <Render\objects\options.h>
#include <MetaSelTarg.h>
#include <SelTarg.h>
#include <Mathlib\matrix3.h>
#include <Render\objects\memtracker.h>
#include <HyperspaceManager.h>
#include <SensorsManager.h>
#include <SquadronList.h>
#include <Render\gl\r_types.h>
#include <new>
#include <Mathlib\matvec.h>
#include <Collision\Primitives\obb.h>
#include <exception>
#include <xstddef>
#include <type_traits>
#include <platform\cmdline.h>
#include <Render\gl\r_defines.h>
#include <Render\gl\glext.h>
#include <Render\objects\shadowsettings.h>
#include <xutility>
#include <utility>
#include <iosfwd>
#include <vector>
#include <Render\objects\core.h>
#include <fileio\bytestream.h>
#include <xmemory>
#include <Render\objects\objects.h>
#include <debug\ctassert.h>
#include <platform\windowinterface.h>
#include <seInterface2\sedefinesshared.h>
#include <renderer.h>
#include <Render\gl\types.h>
#include <Render\gl\lotypes.h>
#include <abilities.h>
#include <list>
#include <Render\objects\stateblock\stateblockmanager.h>
#include <sobid.h>
#include <util\dictionary.h>
#include <util\utilexports.h>
#include <Mathlib\vector3.h>
#include <Mathlib\vector4.h>
#include <Render\objects\meshbatcher.h>
#include <Render\objects\basicmesh.h>
#include <Collision\BVH\octree.h>
#include <Render\objects\mesh.h>
#include <map>
#include <Collision\BVH\span.h>
#include <Render\objects\renderable.h>
#include <xtree>
#include <Collision\BVH\Internal\span_i.h>
#include <boost\smart_ptr.hpp>
#include <Collision\BVH\proxy.h>
#include <boost\scoped_ptr.hpp>
#include <Collision\intersect.h>
#include <Render\objects\fragment_program.h>
#include <Collision\primitivesfwd.h>
#include <platform\namedinterface.h>
#include <Mathlib\vector2.h>
#include <util\types.h>
#include <seInterface2\PatchID.h>
#include <Interpolation.h>
#include <seInterface2\PatchBase.h>
#include <boost\cstdint.hpp>
#include <seInterface2\SoundParams.h>
#include <Collision\Primitives\aabb.h>
#include <boost\scoped_array.hpp>
#include <platform\osdef.h>
#include <Mathlib\quat.h>
#include <Render\objects\stateblock\stateblock.h>
#include <Render\objects\stateblock\stateblocktypes.h>
#include <region.h>
#include <task.h>
#include <stack>
#include <Mathlib\mathlibdll.h>
#include <Render\objects\misctextures.h>
#include <Mathlib\fastmath.h>
#include <Render\objects\stateblock\statevariableinstance.h>
#include <profile\profile.h>
#include <Render\objects\draw.h>
#include <iostream>
#include <Render\objects\material.h>
#include <Camera\OrbitParameters.h>
#include <CameraTuning.h>
#include <debug\db.h>
#include <MainUI.h>
#include <Selector.h>
#include <prim.h>
#include <SoundManager\SoundManager.h>
#include <seInterface2\SEInterface.h>
#include <seInterface2\SoundParamManager.h>
#include <boost\shared_ptr.hpp>
#include <util\colour.h>
#include <seInterface2\seinterfacefunc.h>
#include <assist\gbitset.h>
#include <sobtypes.h>
#include <boost\throw_exception.hpp>
#include <Collision\Primitives\capsule.h>
#include <selection.h>
#include <Collision\Primitives\segment.h>
#include <Render\FxGL\FXGL.h>
#include <Render\objects\rendertexture.h>
#include <savegamedef.h>
#include <Collision\BVH\profiling.h>
#include <boost\detail\shared_count.hpp>
#include <bitset>
#include <boost\detail\lwm_win32.hpp>
#include <SoundManager\SoundEntityHandle.h>
#include <sob.h>
#include <sobstatic.h>
#include <Collision\Primitives\sphere.h>
#include <Camera\Camera.h>
#include <Camera\Frustum.h>
#include <wchar.h>
#include <Camera\Plane3.h>
#include <Cursor.h>
#include <platform\sharedlibraryinterface.h>
#include <Render\objects\texture.h>
#include <Render\objects\textureregistry.h>
#include <platform\timer.h>
#include <hash_map>
#include <Render\objects\textureproxy.h>
#include <platform\platformexports.h>
#include <xhash>
#include <Render\objects\varymesh.h>

/* ---------- constants */

/* ---------- definitions */

typedef std::_List_iterator<std::_List_val<std::_List_simple_types<WaypointPath *> > > WaypointPathListIterator;
typedef std::list<CameraCommandExtUpdate *,std::allocator<CameraCommandExtUpdate *> > ExtUpdateCont;
typedef stdext::hash_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,TacticalIcon *,stdext::hash_compare<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,TacticalIcon *> > > NameToTacticalIconMap;

/* ---------- prototypes */

extern bool gameRendererStartup();
extern bool gameRendererShutdown();
extern void gameRendererSetError(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &str);
extern void gameRendererCommandLineSetup();
extern bool gameRendererLoad(unsigned __int32 libraryType);
extern bool gameRendererClose();
extern bool gameRendererOpenWindow(unsigned __int32 const &instance, char const *windowTitle, char const *instanceTitle);
extern bool gameRendererShowWindow(bool show);
extern bool gameRendererCloseWindow();
extern bool gameRendererAttachToWindow();
extern bool gameRendererDetachFromWindow();
extern float gameRendererSetVerticalFOV(float vertFOV);
extern void gameRendererViewportChanged();
extern void startRenderFrame();
extern void endRenderFrame();
extern void gameRendererStart3D(Camera const *pCamera);
extern void gameRendererEnd3D();
extern void gameRendererSetWidth(unsigned __int32 width);
extern void gameRendererSetHeight(unsigned __int32 height);
extern unsigned __int32 gameRendererGetWidth();
extern unsigned __int32 gameRendererGetHeight();
extern float gameRendererGetPixelWidth();
extern float gameRendererGetPixelHeight();
extern void gameRendererResetUpdateResolutionCBList();
extern void gameRendererUnregisterUpdateResolutionCB(bool (*func)(unsigned __int32, unsigned __int32, unsigned __int32));
extern void gameRendererRegisterUpdateResolutionCB(bool (*func)(unsigned __int32, unsigned __int32, unsigned __int32));
extern void gameRendererUnregisterEndFrameCB(void (*func)());
extern void gameRendererRegisterEndFrameCB(void (*func)());
extern void gameRendererInformAllUpdateResolutionCB();

/* ---------- globals */

extern rndTable gl; // 0x84AA48
extern ViewportState *g_pViewportState; // 0x84AA44
extern void *rHandle; // 0x84AA38
extern unsigned __int32 gameRendererWindow; // 0x84AA3C
extern unsigned __int32 gameRendererInstance; // 0x84AA40

/* ---------- private variables */

_static
{
    extern ViewportState viewportState; // 0x84AE10
    extern unsigned __int32 g_windowWidth; // 0x83CB98
    extern unsigned __int32 g_windowHeight; // 0x83CB9C
    extern unsigned __int32 g_windowDepth; // 0x83CBA0
    extern bool g_fullscreen; // 0x83CBA4
    extern std::list<bool (__stdcall*)(unsigned int,unsigned int,unsigned int),std::allocator<bool (__stdcall*)(unsigned int,unsigned int,unsigned int)> > g_updateResolutionCBList; // 0x84AEA0
    extern std::list<void (__stdcall*)(void),std::allocator<void (__stdcall*)(void)> > g_endFrameCBList; // 0x84AEA8
}

/* ---------- public code */

_extern _sub_624CBC(ViewportState *const);
_inline ViewportState::ViewportState() // 0x624CBC
{
    mangled_assert("??0ViewportState@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_624CBC(this);
}

_extern void _sub_624CD1(std::_List_buy<void (__stdcall*)(void),std::allocator<void (__stdcall*)(void)> > *const);
_inline std::_List_buy<void (__stdcall*)(void),std::allocator<void (__stdcall*)(void)> >::~_List_buy<void (__stdcall*)(void),std::allocator<void (__stdcall*)(void)> >() // 0x624CD1
{
    mangled_assert("??1?$_List_buy@P6GXXZV?$allocator@P6GXXZ@std@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_624CD1(this);
}

_extern void _sub_624CDA(std::_List_buy<bool (__stdcall*)(unsigned int,unsigned int,unsigned int),std::allocator<bool (__stdcall*)(unsigned int,unsigned int,unsigned int)> > *const);
_inline std::_List_buy<bool (__stdcall*)(unsigned int,unsigned int,unsigned int),std::allocator<bool (__stdcall*)(unsigned int,unsigned int,unsigned int)> >::~_List_buy<bool (__stdcall*)(unsigned int,unsigned int,unsigned int),std::allocator<bool (__stdcall*)(unsigned int,unsigned int,unsigned int)> >() // 0x624CDA
{
    mangled_assert("??1?$_List_buy@P6G_NIII@ZV?$allocator@P6G_NIII@Z@std@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_624CDA(this);
}

_extern bool _sub_625572();
bool gameRendererStartup() // 0x625572
{
    mangled_assert("?gameRendererStartup@@YG_NXZ");
    todo("implement");
    bool __result = _sub_625572();
    return __result;
}

_extern bool _sub_6254CD();
bool gameRendererShutdown() // 0x6254CD
{
    mangled_assert("?gameRendererShutdown@@YG_NXZ");
    todo("implement");
    bool __result = _sub_6254CD();
    return __result;
}

_extern void _sub_625431(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &);
void gameRendererSetError(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &str) // 0x625431
{
    mangled_assert("?gameRendererSetError@@YGXABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z");
    todo("implement");
    _sub_625431(str);
}

_extern void _sub_62515A();
void gameRendererCommandLineSetup() // 0x62515A
{
    mangled_assert("?gameRendererCommandLineSetup@@YGXXZ");
    todo("implement");
    _sub_62515A();
}

_extern bool _sub_62531B(unsigned __int32);
bool gameRendererLoad(unsigned __int32 libraryType) // 0x62531B
{
    mangled_assert("?gameRendererLoad@@YG_NI@Z");
    todo("implement");
    bool __result = _sub_62531B(libraryType);
    return __result;
}

_extern bool _sub_62510E();
bool gameRendererClose() // 0x62510E
{
    mangled_assert("?gameRendererClose@@YG_NXZ");
    todo("implement");
    bool __result = _sub_62510E();
    return __result;
}

_extern bool _sub_6253A7(unsigned __int32 const &, char const *, char const *);
bool gameRendererOpenWindow(unsigned __int32 const &instance, char const *windowTitle, char const *instanceTitle) // 0x6253A7
{
    mangled_assert("?gameRendererOpenWindow@@YG_NABIPBD1@Z");
    todo("implement");
    bool __result = _sub_6253A7(instance, windowTitle, instanceTitle);
    return __result;
}

_extern bool _sub_6254B4(bool);
bool gameRendererShowWindow(bool show) // 0x6254B4
{
    mangled_assert("?gameRendererShowWindow@@YG_N_N@Z");
    todo("implement");
    bool __result = _sub_6254B4(show);
    return __result;
}

_extern bool _sub_625142();
bool gameRendererCloseWindow() // 0x625142
{
    mangled_assert("?gameRendererCloseWindow@@YG_NXZ");
    todo("implement");
    bool __result = _sub_625142();
    return __result;
}

_extern bool _sub_6250EF();
bool gameRendererAttachToWindow() // 0x6250EF
{
    mangled_assert("?gameRendererAttachToWindow@@YG_NXZ");
    todo("implement");
    bool __result = _sub_6250EF();
    return __result;
}

_extern bool _sub_62523B();
bool gameRendererDetachFromWindow() // 0x62523B
{
    mangled_assert("?gameRendererDetachFromWindow@@YG_NXZ");
    todo("implement");
    bool __result = _sub_62523B();
    return __result;
}

_extern float _sub_625455(float);
float gameRendererSetVerticalFOV(float vertFOV) // 0x625455
{
    mangled_assert("?gameRendererSetVerticalFOV@@YGMM@Z");
    todo("implement");
    float __result = _sub_625455(vertFOV);
    return __result;
}

_extern void _sub_625709();
void gameRendererViewportChanged() // 0x625709
{
    mangled_assert("?gameRendererViewportChanged@@YGXXZ");
    todo("implement");
    _sub_625709();
}

_extern void _sub_6257D7();
void startRenderFrame() // 0x6257D7
{
    mangled_assert("?startRenderFrame@@YGXXZ");
    todo("implement");
    _sub_6257D7();
}

_extern void _sub_625046();
void endRenderFrame() // 0x625046
{
    mangled_assert("?endRenderFrame@@YGXXZ");
    todo("implement");
    _sub_625046();
}

_extern void _sub_625529(Camera const *);
void gameRendererStart3D(Camera const *pCamera) // 0x625529
{
    mangled_assert("?gameRendererStart3D@@YGXPBVCamera@@@Z");
    todo("implement");
    _sub_625529(pCamera);
}

_extern void _sub_62524D();
void gameRendererEnd3D() // 0x62524D
{
    mangled_assert("?gameRendererEnd3D@@YGXXZ");
    todo("implement");
    _sub_62524D();
}

_extern void _sub_625493(unsigned __int32);
void gameRendererSetWidth(unsigned __int32 width) // 0x625493
{
    mangled_assert("?gameRendererSetWidth@@YGXI@Z");
    todo("implement");
    _sub_625493(width);
}

_extern void _sub_625434(unsigned __int32);
void gameRendererSetHeight(unsigned __int32 height) // 0x625434
{
    mangled_assert("?gameRendererSetHeight@@YGXI@Z");
    todo("implement");
    _sub_625434(height);
}

_extern unsigned __int32 _sub_6252E8();
unsigned __int32 gameRendererGetWidth() // 0x6252E8
{
    mangled_assert("?gameRendererGetWidth@@YGIXZ");
    todo("implement");
    unsigned __int32 __result = _sub_6252E8();
    return __result;
}

_extern unsigned __int32 _sub_625274();
unsigned __int32 gameRendererGetHeight() // 0x625274
{
    mangled_assert("?gameRendererGetHeight@@YGIXZ");
    todo("implement");
    unsigned __int32 __result = _sub_625274();
    return __result;
}

_extern float _sub_6252B1();
float gameRendererGetPixelWidth() // 0x6252B1
{
    mangled_assert("?gameRendererGetPixelWidth@@YGMXZ");
    todo("implement");
    float __result = _sub_6252B1();
    return __result;
}

_extern float _sub_62527A();
float gameRendererGetPixelHeight() // 0x62527A
{
    mangled_assert("?gameRendererGetPixelHeight@@YGMXZ");
    todo("implement");
    float __result = _sub_62527A();
    return __result;
}

_extern void _sub_625427();
void gameRendererResetUpdateResolutionCBList() // 0x625427
{
    mangled_assert("?gameRendererResetUpdateResolutionCBList@@YGXXZ");
    todo("implement");
    _sub_625427();
}

_extern void _sub_6256D7(bool (*)(unsigned __int32, unsigned __int32, unsigned __int32));
void gameRendererUnregisterUpdateResolutionCB(bool (*func)(unsigned __int32, unsigned __int32, unsigned __int32)) // 0x6256D7
{
    mangled_assert("?gameRendererUnregisterUpdateResolutionCB@@YGXP6G_NIII@Z@Z");
    todo("implement");
    _sub_6256D7(func);
}

_extern void _sub_62540F(bool (*)(unsigned __int32, unsigned __int32, unsigned __int32));
void gameRendererRegisterUpdateResolutionCB(bool (*func)(unsigned __int32, unsigned __int32, unsigned __int32)) // 0x62540F
{
    mangled_assert("?gameRendererRegisterUpdateResolutionCB@@YGXP6G_NIII@Z@Z");
    todo("implement");
    _sub_62540F(func);
}

_extern void _sub_6256A5(void (*)());
void gameRendererUnregisterEndFrameCB(void (*func)()) // 0x6256A5
{
    mangled_assert("?gameRendererUnregisterEndFrameCB@@YGXP6GXXZ@Z");
    todo("implement");
    _sub_6256A5(func);
}

_extern void _sub_6253EE(void (*)());
void gameRendererRegisterEndFrameCB(void (*func)()) // 0x6253EE
{
    mangled_assert("?gameRendererRegisterEndFrameCB@@YGXP6GXXZ@Z");
    todo("implement");
    _sub_6253EE(func);
}

_extern void _sub_6252EE();
void gameRendererInformAllUpdateResolutionCB() // 0x6252EE
{
    mangled_assert("?gameRendererInformAllUpdateResolutionCB@@YGXXZ");
    todo("implement");
    _sub_6252EE();
}

/* ---------- private code */
#endif
