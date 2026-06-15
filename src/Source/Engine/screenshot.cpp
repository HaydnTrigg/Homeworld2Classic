#if 0
/* ---------- headers */

#include "decomp.h"
#include <mmiscapi2.h>
#include <Render\objects\image.h>
#include <assist\stlexsmallvector.h>
#include <profileapi.h>
#include <winefs.h>
#include <Render\objects\objects.h>
#include <xstring>
#include <Render\objects\texture.h>
#include <Interpolation.h>
#include <synchapi.h>
#include <inaddr.h>
#include <Mathlib\matrix4.h>
#include <task.h>
#include <Render\objects\core.h>
#include <xmemory0>
#include <boost\shared_array.hpp>
#include <pch.h>
#include <mmsystem.h>
#include <stack>
#include <memory\memorylib.h>
#include <mmsyscom.h>
#include <crtdefs.h>
#include <utilapiset.h>
#include <heapapi.h>
#include <processthreadsapi.h>
#include <Collision\Primitives\aabb.h>
#include <Mathlib\mathutil.h>
#include <isteammusicremote.h>
#include <pshpack8.h>
#include <winnetwk.h>
#include <UserInterface\UICoord.h>
#include <wnnc.h>
#include <stdarg.h>
#include <Mathlib\matrix3.h>
#include <windef.h>
#include <oleidl.h>
#include <mcx.h>
#include <minwindef.h>
#include <bemapiset.h>
#include <rpcdcep.h>
#include <region.h>
#include <specstrings.h>
#include <playsoundapi.h>
#include <specstrings_strict.h>
#include <specstrings_undef.h>
#include <handleapi.h>
#include <new>
#include <SteamFuncs.h>
#include <driverspecs.h>
#include <platform\windowinterface.h>
#include <seInterface2\sedefinesshared.h>
#include <steam_api.h>
#include <exception>
#include <sdv_driverspecs.h>
#include <xstddef>
#include <isteamclient.h>
#include <type_traits>
#include <steamtypes.h>
#include <threadpoolapiset.h>
#include <objidl.h>
#include <msxml.h>
#include <seInterface2\PatchID.h>
#include <namespaceapi.h>
#include <seInterface2\PatchBase.h>
#include <fileio\filestream.h>
#include <isteamuser.h>
#include <ktmtypes.h>
#include <platform\osdef.h>
#include <seInterface2\SoundParams.h>
#include <xutility>
#include <winsmcrd.h>
#include <utility>
#include <CameraCommand.h>
#include <iosfwd>
#include <isteamhtmlsurface.h>
#include <vector>
#include <winbase.h>
#include <wincon.h>
#include <mmiscapi.h>
#include <CameraHW.h>
#include <fileio\bytestream.h>
#include <xmemory>
#include <apisetcconv.h>
#include <mmeapi.h>
#include <Camera\CameraOrbitTarget.h>
#include <fileio\fileioexports.h>
#include <minwinbase.h>
#include <Camera\OrbitParameters.h>
#include <isteammusic.h>
#include <errhandlingapi.h>
#include <ime_cmodes.h>
#include <compiler\compilerconfig.h>
#include <processenv.h>
#include <Render\gl\types.h>
#include <isteamuserstats.h>
#include <isteamugc.h>
#include <guiddef.h>
#include <Mathlib\matvec.h>
#include <isteamremotestorage.h>
#include <jobapi.h>
#include <Collision\Primitives\capsule.h>
#include <string.h>
#include <list>
#include <Collision\Primitives\segment.h>
#include <apiset.h>
#include <Collision\BVH\profiling.h>
#include <ole2.h>
#include <systemtopologyapi.h>
#include <pshpack1.h>
#include <objbase.h>
#include <Render\gl\lotypes.h>
#include <isteamapplist.h>
#include <wow64apiset.h>
#include <combaseapi.h>
#include <Mathlib\vector3.h>
#include <scripting.h>
#include <isteamhttp.h>
#include <Mathlib\vector4.h>
#include <scriptaccess.h>
#include <steamhttpenums.h>
#include <winnls.h>
#include <shellapi.h>
#include <scripttypedef.h>
#include <UserInterface\NewUIScreenManager.h>
#include <datetimeapi.h>
#include <UserInterface\uitypes.h>
#include <map>
#include <winnt.h>
#include <processtopologyapi.h>
#include <platform\inputinterface.h>
#include <xtree>
#include <kernelspecs.h>
#include <Render\gl\r_types.h>
#include <boost\smart_ptr.hpp>
#include <platform\keydefines.h>
#include <basetsd.h>
#include <pshpack2.h>
#include <boost\scoped_ptr.hpp>
#include <lua.h>
#include <libloaderapi.h>
#include <sysinfoapi.h>
#include <Camera\Camera.h>
#include <objidlbase.h>
#include <Camera\Frustum.h>
#include <sobid.h>
#include <steamclientpublic.h>
#include <winreg.h>
#include <ncrypt.h>
#include <Camera\Plane3.h>
#include <steamuniverse.h>
#include <isteamnetworking.h>
#include <unknwnbase.h>
#include <Mathlib\vector2.h>
#include <winsock.h>
#include <oaidl.h>
#include <util\types.h>
#include <nb30.h>
#include <commdlg.h>
#include <Render\objects\textureregistry.h>
#include <hash_map>
#include <fileio\filepath.h>
#include <xhash>
#include <timeapi.h>
#include <isteamutils.h>
#include <dpapi.h>
#include <propidl.h>
#include <boost\cstdint.hpp>
#include <unknwn.h>
#include <MultiplierContainer.h>
#include <visibility.h>
#include <securityappcontainer.h>
#include <MultiplierTypes.h>
#include <cassert>
#include <fibersapi.h>
#include <imm.h>
#include <Collision\BVH\bvh.h>
#include <assert.h>
#include <luaconfig\luaconfig.h>
#include <winver.h>
#include <winscard.h>
#include <boost\scoped_array.hpp>
#include <UserInterface\StyleSheet.h>
#include <verrsrc.h>
#include <wtypes.h>
#include <prim.h>
#include <UserInterface\pch.h>
#include <rpcndr.h>
#include <realtimeapiset.h>
#include <tvout.h>
#include <rpcnsip.h>
#include <Mathlib\quat.h>
#include <mciapi.h>
#include <stralign.h>
#include <winuser.h>
#include <sob.h>
#include <sobstatic.h>
#include <isteammatchmaking.h>
#include <Collision\Primitives\sphere.h>
#include <matchmakingtypes.h>
#include <isteamunifiedmessages.h>
#include <consoleapi.h>
#include <Render\gl\r_defines.h>
#include <UserInterface\SharedGraphicFactory.h>
#include <assist\typemagic.h>
#include <namedpipeapi.h>
#include <ioapiset.h>
#include <winsvc.h>
#include <Render\gl\glext.h>
#include <luaconfig\lualibman.h>
#include <UserInterface\Graphic.h>
#include <luaconfig\luabinding.h>
#include <Render\objects\textureproxy.h>
#include <isteamapps.h>
#include <memoryapi.h>
#include <dlgs.h>
#include <winperf.h>
#include <UserInterface\NewUIScreen.h>
#include <SensorsManager.h>
#include <UserInterface\NewFrame.h>
#include <SoundManager\SoundManager.h>
#include <UserInterface\InterfaceElement.h>
#include <Mathlib\mathlibdll.h>
#include <seInterface2\SEInterface.h>
#include <seInterface2\SoundParamManager.h>
#include <UserInterface\signals.h>
#include <Mathlib\fastmath.h>
#include <seInterface2\seinterfacefunc.h>
#include <assist\gbitset.h>
#include <wingdi.h>
#include <rpc.h>
#include <urlmon.h>
#include <pshpack4.h>
#include <joystickapi.h>
#include <rpcdce.h>
#include <winerror.h>
#include <SoundManager\SoundEntityHandle.h>
#include <bcrypt.h>
#include <debug\db.h>
#include <ddeml.h>
#include <lzexpand.h>
#include <platform\cmdline.h>
#include <screenshot.h>
#include <deque>
#include <wincrypt.h>
#include <MainUI.h>
#include <interlockedapi.h>
#include <timezoneapi.h>
#include <stringapiset.h>
#include <reason.h>
#include <Selector.h>
#include <MetaSelTarg.h>
#include <util\colour.h>
#include <boost\shared_ptr.hpp>
#include <SelTarg.h>
#include <sobtypes.h>
#include <Render\objects\draw.h>
#include <boost\throw_exception.hpp>
#include <securitybaseapi.h>
#include <rpcsal.h>
#include <selection.h>
#include <Render\objects\hw2ddraw.h>
#include <Render\objects\material.h>
#include <isteamscreenshots.h>
#include <savegamedef.h>
#include <boost\detail\shared_count.hpp>
#include <Interface.h>
#include <abilities.h>
#include <bitset>
#include <boost\detail\lwm_win32.hpp>
#include <isteamfriends.h>
#include <oleauto.h>
#include <Collision\Primitives\obb.h>
#include <winioctl.h>
#include <servprov.h>
#include <platform\timer.h>
#include <platform\sysutilinterface.h>
#include <debugapi.h>
#include <platform\platformexports.h>
#include <fileapi.h>
#include <cguid.h>
#include <renderer.h>
#include <cderr.h>
#include <dde.h>
#include <Collision\BVH\octree.h>
#include <Collision\BVH\span.h>
#include <seInterface2\SampleID.h>
#include <windows.h>
#include <Collision\BVH\Internal\span_i.h>
#include <seInterface2\SampleBase.h>
#include <winapifamily.h>
#include <wchar.h>
#include <Collision\BVH\proxy.h>
#include <sdkddkver.h>
#include <threadpoollegacyapiset.h>
#include <rpcnterr.h>
#include <wtypesbase.h>
#include <winspool.h>
#include <Collision\intersect.h>
#include <excpt.h>
#include <rpcnsi.h>
#include <rpcasync.h>
#include <prsht.h>
#include <Collision\primitivesfwd.h>
#include <KeyBindings.h>
#include <config.h>
#include <poppack.h>
#include <isteamcontroller.h>
#include <steamcontrollerpublic.h>

/* ---------- constants */

/* ---------- definitions */

struct `anonymous-namespace'::ScreenEntry
{
    char const *name; // 0x0
    bool visible; // 0x4
};
static_assert(sizeof(`anonymous-namespace'::ScreenEntry) == 8, "Invalid `anonymous-namespace'::ScreenEntry size");

struct `anonymous-namespace'::TGAFileHeader
{
    unsigned char idLength; // 0x0
    unsigned char colourMapType; // 0x1
    unsigned char imageType; // 0x2
    unsigned short colourMapStartIndex; // 0x4
    unsigned short colourMapNumEntries; // 0x6
    unsigned char colourMapBitsPerEntry; // 0x8
    short imageOffsetX; // 0xA
    short imageOffsetY; // 0xC
    unsigned short imageWidth; // 0xE
    unsigned short imageHeight; // 0x10
    unsigned char pixelDepth; // 0x12
    unsigned char imageDescriptor; // 0x13
};
static_assert(sizeof(`anonymous-namespace'::TGAFileHeader) == 20, "Invalid `anonymous-namespace'::TGAFileHeader size");

/* ---------- prototypes */

extern bool ScreenShot::ssSteamOnly(bool bSteamOnly);
extern bool ScreenShot::Initialize();
extern void ScreenShot::setMenusVisible(bool visible);
extern void ScreenShot::Capture();
extern void ScreenShot::BindToLua(LuaLibrary &lib, LuaConfig &lc);

/* ---------- globals */

/* ---------- private variables */

_static
{
    extern char const *k_BaseAlias; // 0x83CF78
    extern char const *k_BaseName; // 0x83CF7C
    extern char const *k_BaseNameWild; // 0x83CF80
    extern bool g_useCompression; // 0x83CF84
    extern __int32 g_superSample; // 0x83CF88
    extern __int32 g_posterRes; // 0x83CF8C
    extern bool s_bColour; // 0x83CF85
    extern bool s_bBlackAndWhite; // 0x84AEC8
    extern bool s_bRenderUI; // 0x83CF86
    extern bool s_bRenderLogo; // 0x83CF87
    extern bool s_bNoSteam; // 0x84AEC9
    extern bool s_bSteamOnly; // 0x84AECA
}

/* ---------- public code */

_inline LuaBinding::ObjInternal1<bool,bool,LuaBinding::Functor1Free<bool,bool> >::~ObjInternal1<bool,bool,LuaBinding::Functor1Free<bool,bool> >() // 0x62CD26
{
    mangled_assert("??1?$ObjInternal1@_N_NV?$Functor1Free@_N_N@LuaBinding@@@LuaBinding@@UAE@XZ");
    compiler_generated();
    todo("implement");
}

bool ScreenShot::ssSteamOnly(bool bSteamOnly) // 0x62E040
{
    mangled_assert("?ssSteamOnly@ScreenShot@@YG_N_N@Z");
    todo("implement");
}

bool ScreenShot::Initialize() // 0x62D132
{
    mangled_assert("?Initialize@ScreenShot@@YG_NXZ");
    todo("implement");
}

void ScreenShot::setMenusVisible(bool visible) // 0x62DEFE
{
    mangled_assert("?setMenusVisible@ScreenShot@@YGX_N@Z");
    todo("implement");
}

void ScreenShot::Capture() // 0x62CFEE
{
    mangled_assert("?Capture@ScreenShot@@YGXXZ");
    todo("implement");
}

void ScreenShot::BindToLua(LuaLibrary &lib, LuaConfig &lc) // 0x62CD8B
{
    mangled_assert("?BindToLua@ScreenShot@@YGXAAVLuaLibrary@@AAVLuaConfig@@@Z");
    todo("implement");
}

/* ---------- private code */
#endif
