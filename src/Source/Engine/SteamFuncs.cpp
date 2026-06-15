#if 0
/* ---------- headers */

#include "decomp.h"
#include <mmiscapi2.h>
#include <profileapi.h>
#include <winefs.h>
#include <isteammatchmaking.h>
#include <synchapi.h>
#include <inaddr.h>
#include <matchmakingtypes.h>
#include <isteamunifiedmessages.h>
#include <pch.h>
#include <mmsystem.h>
#include <mmsyscom.h>
#include <crtdefs.h>
#include <utilapiset.h>
#include <heapapi.h>
#include <processthreadsapi.h>
#include <isteamapps.h>
#include <pshpack8.h>
#include <winnetwk.h>
#include <wnnc.h>
#include <stdarg.h>
#include <windef.h>
#include <oleidl.h>
#include <mcx.h>
#include <minwindef.h>
#include <bemapiset.h>
#include <rpcdcep.h>
#include <specstrings.h>
#include <playsoundapi.h>
#include <specstrings_strict.h>
#include <specstrings_undef.h>
#include <handleapi.h>
#include <driverspecs.h>
#include <sdv_driverspecs.h>
#include <threadpoolapiset.h>
#include <objidl.h>
#include <msxml.h>
#include <namespaceapi.h>
#include <ktmtypes.h>
#include <winsmcrd.h>
#include <isteamscreenshots.h>
#include <winbase.h>
#include <wincon.h>
#include <mmiscapi.h>
#include <apisetcconv.h>
#include <mmeapi.h>
#include <minwinbase.h>
#include <isteamfriends.h>
#include <errhandlingapi.h>
#include <ime_cmodes.h>
#include <processenv.h>
#include <platform\cmdline.h>
#include <guiddef.h>
#include <platform\platformexports.h>
#include <jobapi.h>
#include <apiset.h>
#include <ole2.h>
#include <systemtopologyapi.h>
#include <pshpack1.h>
#include <objbase.h>
#include <wow64apiset.h>
#include <combaseapi.h>
#include <winnls.h>
#include <shellapi.h>
#include <datetimeapi.h>
#include <isteamcontroller.h>
#include <winnt.h>
#include <processtopologyapi.h>
#include <steamcontrollerpublic.h>
#include <kernelspecs.h>
#include <basetsd.h>
#include <pshpack2.h>
#include <libloaderapi.h>
#include <sysinfoapi.h>
#include <objidlbase.h>
#include <winreg.h>
#include <ncrypt.h>
#include <unknwnbase.h>
#include <winsock.h>
#include <oaidl.h>
#include <nb30.h>
#include <commdlg.h>
#include <isteammusicremote.h>
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
#include <SteamFuncs.h>
#include <rpcndr.h>
#include <steam_api.h>
#include <realtimeapiset.h>
#include <tvout.h>
#include <rpcnsip.h>
#include <isteamclient.h>
#include <mciapi.h>
#include <stralign.h>
#include <steamtypes.h>
#include <winuser.h>
#include <consoleapi.h>
#include <isteamuser.h>
#include <namedpipeapi.h>
#include <ioapiset.h>
#include <winsvc.h>
#include <memoryapi.h>
#include <dlgs.h>
#include <winperf.h>
#include <isteamhtmlsurface.h>
#include <wingdi.h>
#include <isteammusic.h>
#include <rpc.h>
#include <urlmon.h>
#include <pshpack4.h>
#include <joystickapi.h>
#include <rpcdce.h>
#include <isteamuserstats.h>
#include <isteamugc.h>
#include <winerror.h>
#include <isteamremotestorage.h>
#include <bcrypt.h>
#include <ddeml.h>
#include <lzexpand.h>
#include <wincrypt.h>
#include <isteamapplist.h>
#include <interlockedapi.h>
#include <timezoneapi.h>
#include <stringapiset.h>
#include <reason.h>
#include <isteamhttp.h>
#include <steamhttpenums.h>
#include <securitybaseapi.h>
#include <rpcsal.h>
#include <oleauto.h>
#include <winioctl.h>
#include <servprov.h>
#include <steamclientpublic.h>
#include <steamuniverse.h>
#include <isteamnetworking.h>
#include <debugapi.h>
#include <fileapi.h>
#include <cguid.h>
#include <cderr.h>
#include <dde.h>
#include <isteamutils.h>
#include <windows.h>
#include <winapifamily.h>
#include <sdkddkver.h>
#include <threadpoollegacyapiset.h>
#include <rpcnterr.h>
#include <wtypesbase.h>
#include <winspool.h>
#include <excpt.h>
#include <rpcnsi.h>
#include <rpcasync.h>
#include <prsht.h>
#include <poppack.h>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

extern bool SteamFuncs::bNoSteam; // 0x843AAC
extern bool SteamFuncs::GSteamworksInitialized; // 0x843AAD
extern bool SteamFuncs::GSteamworksStatsReceived; // 0x843AAE
extern ISteamUser *SteamFuncs::pSteamUser; // 0x843AB0
extern ISteamUtils *SteamFuncs::pSteamUtils; // 0x843AB4
extern ISteamUserStats *SteamFuncs::pSteamUserStats; // 0x843AB8
extern ISteamScreenshots *SteamFuncs::pSteamScreenshots; // 0x843ABC
extern ISteamApps *SteamFuncs::pSteamApps; // 0x843AC0

/* ---------- private variables */

/* ---------- public code */

bool SteamFuncs::Startup() // 0x4674BC
{
    mangled_assert("?Startup@SteamFuncs@@SG_NXZ");
    todo("implement");
}

bool SteamFuncs::Shutdown() // 0x4674A1
{
    mangled_assert("?Shutdown@SteamFuncs@@SG_NXZ");
    todo("implement");
}

bool SteamFuncs::IsNoSteamEnabled() // 0x4673BA
{
    mangled_assert("?IsNoSteamEnabled@SteamFuncs@@SG_NXZ");
    todo("implement");
}

bool SteamFuncs::IsSteamworksInitialized() // 0x4673C0
{
    mangled_assert("?IsSteamworksInitialized@SteamFuncs@@SG_NXZ");
    todo("implement");
}

bool SteamFuncs::AreSteamworksStatsRecieved() // 0x467290
{
    mangled_assert("?AreSteamworksStatsRecieved@SteamFuncs@@SG_NXZ");
    todo("implement");
}

void SteamFuncs::SetOverlayNotificationPosition(ENotificationPosition eNotificationPosition) // 0x46741F
{
    mangled_assert("?SetOverlayNotificationPosition@SteamFuncs@@SGXW4ENotificationPosition@@@Z");
    todo("implement");
}

char const *SteamFuncs::GetSteamUILanguage() // 0x467372
{
    mangled_assert("?GetSteamUILanguage@SteamFuncs@@SGPBDXZ");
    todo("implement");
}

char const *SteamFuncs::GetCurrentGameLanguage() // 0x467302
{
    mangled_assert("?GetCurrentGameLanguage@SteamFuncs@@SGPBDXZ");
    todo("implement");
}

bool SteamFuncs::BIsSubscribed() // 0x467296
{
    mangled_assert("?BIsSubscribed@SteamFuncs@@SG_NXZ");
    todo("implement");
}

bool SteamFuncs::BOwnsHW1HDDLC() // 0x4672B6
{
    mangled_assert("?BOwnsHW1HDDLC@SteamFuncs@@SG_NXZ");
    todo("implement");
}

bool SteamFuncs::BOwnsHW2HDDLC() // 0x4672DC
{
    mangled_assert("?BOwnsHW2HDDLC@SteamFuncs@@SG_NXZ");
    todo("implement");
}

bool SteamFuncs::SetAchievement(char const *pchName) // 0x4673D3
{
    mangled_assert("?SetAchievement@SteamFuncs@@SG_NPBD@Z");
    todo("implement");
}

bool SteamFuncs::GetStat(char const *pchName, __int32 *pData) // 0x467326
{
    mangled_assert("?GetStat@SteamFuncs@@SG_NPBDPAH@Z");
    todo("implement");
}

bool SteamFuncs::GetStat(char const *pchName, float *pData) // 0x46734C
{
    mangled_assert("?GetStat@SteamFuncs@@SG_NPBDPAM@Z");
    todo("implement");
}

bool SteamFuncs::SetStat(char const *pchName, __int32 nData) // 0x467443
{
    mangled_assert("?SetStat@SteamFuncs@@SG_NPBDH@Z");
    todo("implement");
}

bool SteamFuncs::SetStat(char const *pchName, float fData) // 0x467469
{
    mangled_assert("?SetStat@SteamFuncs@@SG_NPBDM@Z");
    todo("implement");
}

unsigned __int32 SteamFuncs::WriteScreenshot(void *pubRGB, unsigned __int32 cubRGB, __int32 nWidth, __int32 nHeight) // 0x467542
{
    mangled_assert("?WriteScreenshot@SteamFuncs@@SGIPAXIHH@Z");
    todo("implement");
}

bool SteamFuncs::SetLocation(unsigned __int32 hScreenshot, char const *pchLocation) // 0x4673F9
{
    mangled_assert("?SetLocation@SteamFuncs@@SG_NIPBD@Z");
    todo("implement");
}

void SteamFuncs::HookScreenshots(bool bHook) // 0x467396
{
    mangled_assert("?HookScreenshots@SteamFuncs@@SGX_N@Z");
    todo("implement");
}

/* ---------- private code */
#endif
