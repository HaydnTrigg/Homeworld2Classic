#if 0
/* ---------- headers */

#include "decomp.h"
#include <Engine\Hash.h>
#include <windows.h>
#include <deque>
#include <fileio\md5.h>
#include <winapifamily.h>
#include <threadpoollegacyapiset.h>
#include <rpcnterr.h>
#include <wtypesbase.h>
#include <winspool.h>
#include <sdkddkver.h>
#include <rpcnsi.h>
#include <rpcasync.h>
#include <prsht.h>
#include <xstring>
#include <excpt.h>
#include <xmemory0>
#include <poppack.h>
#include <Scar\pch.h>
#include <memory\memorylib.h>
#include <Engine\gamestructimpl.h>
#include <Engine\Badge.h>
#include <crtdefs.h>
#include <Render\gl\r_defines.h>
#include <UserInterface\NewFrame.h>
#include <Render\gl\glext.h>
#include <mmiscapi2.h>
#include <UserInterface\InterfaceElement.h>
#include <profileapi.h>
#include <winefs.h>
#include <UserInterface\uitypes.h>
#include <platform\inputinterface.h>
#include <synchapi.h>
#include <inaddr.h>
#include <luaconfig\lualibman.h>
#include <luaconfig\luabinding.h>
#include <mmsystem.h>
#include <Scar\Scar.h>
#include <mmsyscom.h>
#include <Scar\ScarEventSys.h>
#include <utilapiset.h>
#include <heapapi.h>
#include <processthreadsapi.h>
#include <Mathlib\matrix4.h>
#include <new>
#include <pshpack8.h>
#include <winnetwk.h>
#include <xstddef>
#include <wnnc.h>
#include <type_traits>
#include <windef.h>
#include <oleidl.h>
#include <mcx.h>
#include <minwindef.h>
#include <bemapiset.h>
#include <rpcdcep.h>
#include <specstrings.h>
#include <playsoundapi.h>
#include <Mathlib\matrix3.h>
#include <specstrings_strict.h>
#include <boost\static_assert.hpp>
#include <specstrings_undef.h>
#include <handleapi.h>
#include <driverspecs.h>
#include <xutility>
#include <sdv_driverspecs.h>
#include <utility>
#include <iosfwd>
#include <boost\config.hpp>
#include <map>
#include <threadpoolapiset.h>
#include <xtree>
#include <xmemory>
#include <platform\timer.h>
#include <objidl.h>
#include <msxml.h>
#include <platform\platformexports.h>
#include <namespaceapi.h>
#include <ktmtypes.h>
#include <compiler\compilerconfig.h>
#include <winsmcrd.h>
#include <Scar\LuaCampaign.h>
#include <winbase.h>
#include <wincon.h>
#include <mmiscapi.h>
#include <Engine\GameObj.h>
#include <Render\objects\textureregistry.h>
#include <Scar\LuaRuleSystem.h>
#include <apisetcconv.h>
#include <mmeapi.h>
#include <Engine\config.h>
#include <boost\utility.hpp>
#include <minwinbase.h>
#include <Engine\task.h>
#include <fileio\fileioexports.h>
#include <boost\utility\addressof.hpp>
#include <stack>
#include <cstdarg>
#include <boost\utility\base_from_member.hpp>
#include <stdarg.h>
#include <errhandlingapi.h>
#include <ime_cmodes.h>
#include <boost\utility_fwd.hpp>
#include <processenv.h>
#include <UserInterface\NewUIScreenManager.h>
#include <boost\cstdint.hpp>
#include <guiddef.h>
#include <luaconfig\luaconfig.h>
#include <vector>
#include <lua\lua.h>
#include <jobapi.h>
#include <apiset.h>
#include <ole2.h>
#include <boost\detail\workaround.hpp>
#include <systemtopologyapi.h>
#include <pshpack1.h>
#include <objbase.h>
#include <wow64apiset.h>
#include <combaseapi.h>
#include <winnls.h>
#include <shellapi.h>
#include <datetimeapi.h>
#include <Mathlib\vector3.h>
#include <winnt.h>
#include <processtopologyapi.h>
#include <Mathlib\vector4.h>
#include <kernelspecs.h>
#include <basetsd.h>
#include <pshpack2.h>
#include <libloaderapi.h>
#include <util\colour.h>
#include <boost\next_prior.hpp>
#include <sysinfoapi.h>
#include <objidlbase.h>
#include <winreg.h>
#include <ncrypt.h>
#include <Engine\campaign.h>
#include <Engine\scripting.h>
#include <cassert>
#include <unknwnbase.h>
#include <Engine\scriptaccess.h>
#include <assert.h>
#include <boost\noncopyable.hpp>
#include <winsock.h>
#include <oaidl.h>
#include <Engine\scripttypedef.h>
#include <nb30.h>
#include <commdlg.h>
#include <Mathlib\vector2.h>
#include <util\types.h>
#include <timeapi.h>
#include <dpapi.h>
#include <propidl.h>
#include <unknwn.h>
#include <securityappcontainer.h>
#include <fibersapi.h>
#include <imm.h>
#include <winver.h>
#include <winscard.h>
#include <verrsrc.h>
#include <wtypes.h>
#include <rpcndr.h>
#include <realtimeapiset.h>
#include <tvout.h>
#include <rpcnsip.h>
#include <platform\osdef.h>
#include <mciapi.h>
#include <stralign.h>
#include <Engine\KeyBindings.h>
#include <winuser.h>
#include <Engine\prim.h>
#include <Mathlib\mathutil.h>
#include <Engine\savegamedef.h>
#include <consoleapi.h>
#include <boost\shared_ptr.hpp>
#include <namedpipeapi.h>
#include <ioapiset.h>
#include <winsvc.h>
#include <UserInterface\SharedGraphicFactory.h>
#include <assist\typemagic.h>
#include <boost\throw_exception.hpp>
#include <UserInterface\Graphic.h>
#include <memoryapi.h>
#include <dlgs.h>
#include <winperf.h>
#include <Render\objects\texture.h>
#include <Render\objects\objects.h>
#include <boost\detail\shared_count.hpp>
#include <Engine\subtitle.h>
#include <Render\objects\core.h>
#include <Engine\Menus\SubtitleScreen.h>
#include <Render\gl\types.h>
#include <boost\detail\lwm_win32.hpp>
#include <UserInterface\NewUIScreen.h>
#include <UserInterface\signals.h>
#include <Mathlib\matvec.h>
#include <wingdi.h>
#include <util\statmonitor.h>
#include <Engine\region.h>
#include <rpc.h>
#include <urlmon.h>
#include <util\utilexports.h>
#include <boost\scoped_ptr.hpp>
#include <platform\keydefines.h>
#include <Mathlib\mathlibdll.h>
#include <pshpack4.h>
#include <Mathlib\fastmath.h>
#include <joystickapi.h>
#include <rpcdce.h>
#include <winerror.h>
#include <Engine\gameSettings.h>
#include <Render\gl\lotypes.h>
#include <bcrypt.h>
#include <Engine\syncChecking.h>
#include <ddeml.h>
#include <lzexpand.h>
#include <UserInterface\StyleSheet.h>
#include <UserInterface\pch.h>
#include <wincrypt.h>
#include <interlockedapi.h>
#include <timezoneapi.h>
#include <stringapiset.h>
#include <reason.h>
#include <assist\stlexsmallvector.h>
#include <Render\gl\r_types.h>
#include <securitybaseapi.h>
#include <rpcsal.h>
#include <localizer\localizer.h>
#include <Render\objects\textureproxy.h>
#include <oleauto.h>
#include <winioctl.h>
#include <servprov.h>
#include <list>
#include <wchar.h>
#include <debugapi.h>
#include <fileapi.h>
#include <cguid.h>
#include <cderr.h>
#include <debug\db.h>
#include <dde.h>
#include <Engine\LevelDesc.h>

/* ---------- constants */

/* ---------- definitions */

class `anonymous-namespace'::LuaCampaignLib :
    public LuaLibrary
{
public:
    LuaCampaignLib(`anonymous-namespace'::LuaCampaignLib const &); /* compiler_generated() */
    LuaCampaignLib();
    virtual ~LuaCampaignLib() override;
    virtual bool Register(LuaConfig &) override;
    virtual bool DeRegister(LuaConfig &) override;
    `anonymous-namespace'::LuaCampaignLib &operator=(`anonymous-namespace'::LuaCampaignLib const &); /* compiler_generated() */
};
static_assert(sizeof(`anonymous-namespace'::LuaCampaignLib) == 16, "Invalid `anonymous-namespace'::LuaCampaignLib size");

typedef `anonymous-namespace'::LuaCampaignLib ?A0x89b2b6cf::LuaCampaignLib;

/* ---------- prototypes */

extern void Campaign_QuickSaveNb(unsigned __int32 id, char const *description);

/* ---------- globals */

extern char const *LUALIB_CAMPAIGN; // 0x841C9C

/* ---------- private variables */

_static
{
    extern char const *s_GameSavedMsg; // 0x841C94
    extern char const *s_AutoSaveId; // 0x841C98
    extern float subtitleTwkScrollDwellStart; // 0x841CA0
    extern float subtitleTwkScrollDwellEnd; // 0x841CA4
    extern float subtitleTwkScrollShortest; // 0x841CA8
    extern float subtitleTwkTitleShortest; // 0x841CAC
}

/* ---------- public code */

void Campaign_QuickSaveNb(unsigned __int32 id, char const *description) // 0x70FBFB
{
    mangled_assert("?Campaign_QuickSaveNb@@YGXIPBD@Z");
    todo("implement");
}

_inline LuaBinding::ObjInternal0<void,LuaBinding::Functor0MemberNonConst<void,GameObj> >::~ObjInternal0<void,LuaBinding::Functor0MemberNonConst<void,GameObj> >() // 0x70FB36
{
    mangled_assert("??1?$ObjInternal0@XV?$Functor0MemberNonConst@XVGameObj@@@LuaBinding@@@LuaBinding@@UAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline LuaBinding::ObjInternal1<bool,void,LuaBinding::Functor1MemberNonConst<bool,void,GameObj> >::~ObjInternal1<bool,void,LuaBinding::Functor1MemberNonConst<bool,void,GameObj> >() // 0x70FB3C
{
    mangled_assert("??1?$ObjInternal1@_NXV?$Functor1MemberNonConst@_NXVGameObj@@@LuaBinding@@@LuaBinding@@UAE@XZ");
    compiler_generated();
    todo("implement");
}

/* ---------- private code */
#endif
