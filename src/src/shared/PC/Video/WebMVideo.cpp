#if 0
/* ---------- headers */

#include "decomp.h"
#include <xstring>
#include <WebMVideo.h>
#include <winnls.h>
#include <shellapi.h>
#include <video.h>
#include <datetimeapi.h>
#include <processtopologyapi.h>
#include <pch.h>
#include <winnt.h>
#include <pshpack2.h>
#include <crtdefs.h>
#include <kernelspecs.h>
#include <libloaderapi.h>
#include <basetsd.h>
#include <sysinfoapi.h>
#include <objidlbase.h>
#include <winreg.h>
#include <ncrypt.h>
#include <unknwnbase.h>
#include <winsock.h>
#include <oaidl.h>
#include <nb30.h>
#include <commdlg.h>
#include <timeapi.h>
#include <dpapi.h>
#include <propidl.h>
#include <unknwn.h>
#include <securityappcontainer.h>
#include <fibersapi.h>
#include <imm.h>
#include <xstddef>
#include <winver.h>
#include <winscard.h>
#include <verrsrc.h>
#include <wtypes.h>
#include <rpcndr.h>
#include <realtimeapiset.h>
#include <tvout.h>
#include <rpcnsip.h>
#include <debug\db.h>
#include <mciapi.h>
#include <stralign.h>
#include <winuser.h>
#include <consoleapi.h>
#include <namedpipeapi.h>
#include <ioapiset.h>
#include <winsvc.h>
#include <mkvreader.hpp>
#include <mkvparser.hpp>
#include <memoryapi.h>
#include <dlgs.h>
#include <winperf.h>
#include <wingdi.h>
#include <rpc.h>
#include <urlmon.h>
#include <pshpack4.h>
#include <joystickapi.h>
#include <rpcdce.h>
#include <winerror.h>
#include <bcrypt.h>
#include <ddeml.h>
#include <lzexpand.h>
#include <ksuuids.h>
#include <wincrypt.h>
#include <interlockedapi.h>
#include <timezoneapi.h>
#include <stringapiset.h>
#include <reason.h>
#include <securitybaseapi.h>
#include <rpcsal.h>
#include <oleauto.h>
#include <winioctl.h>
#include <servprov.h>
#include <debugapi.h>
#include <fileapi.h>
#include <vpx_decoder.h>
#include <cguid.h>
#include <vpx_codec.h>
#include <vpx_integer.h>
#include <cderr.h>
#include <stdint.h>
#include <dde.h>
#include <windows.h>
#include <threadpoollegacyapiset.h>
#include <rpcnterr.h>
#include <wtypesbase.h>
#include <winspool.h>
#include <winapifamily.h>
#include <rpcnsi.h>
#include <rpcasync.h>
#include <prsht.h>
#include <sdkddkver.h>
#include <excpt.h>
#include <poppack.h>
#include <vp8dx.h>
#include <vp8.h>
#include <vpx_codec_impl_top.h>
#include <mmiscapi2.h>
#include <vpx_codec_impl_bottom.h>
#include <profileapi.h>
#include <winefs.h>
#include <synchapi.h>
#include <inaddr.h>
#include <mmsystem.h>
#include <mmsyscom.h>
#include <utilapiset.h>
#include <heapapi.h>
#include <processthreadsapi.h>
#include <pshpack8.h>
#include <winnetwk.h>
#include <wnnc.h>
#include <oleidl.h>
#include <mcx.h>
#include <vpx_image.h>
#include <stdarg.h>
#include <bemapiset.h>
#include <rpcdcep.h>
#include <windef.h>
#include <playsoundapi.h>
#include <minwindef.h>
#include <specstrings.h>
#include <handleapi.h>
#include <specstrings_strict.h>
#include <specstrings_undef.h>
#include <driverspecs.h>
#include <sdv_driverspecs.h>
#include <threadpoolapiset.h>
#include <objidl.h>
#include <msxml.h>
#include <namespaceapi.h>
#include <cassert>
#include <ktmtypes.h>
#include <assert.h>
#include <uuids.h>
#include <winsmcrd.h>
#include <winbase.h>
#include <wincon.h>
#include <mmiscapi.h>
#include <apisetcconv.h>
#include <mmeapi.h>
#include <minwinbase.h>
#include <errhandlingapi.h>
#include <ime_cmodes.h>
#include <processenv.h>
#include <sstream>
#include <guiddef.h>
#include <jobapi.h>
#include <apiset.h>
#include <ole2.h>
#include <systemtopologyapi.h>
#include <pshpack1.h>
#include <objbase.h>
#include <wow64apiset.h>
#include <combaseapi.h>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */


_static unsigned char ClampBYTE(__int32 n);
_static void ConvertVPXtoRGB(vpx_image *pVPXImg, unsigned char *pRGBBuf);

/* ---------- globals */

/* ---------- private variables */

_static
{
    extern char const szVP8CodecId[6]; // 0x7BF52C
}

/* ---------- public code */

_extern _sub_6FC204(WebMVideo *const);
WebMVideo::WebMVideo() // 0x6FC204
{
    mangled_assert("??0WebMVideo@@QAE@XZ");
    todo("implement");
    _sub_6FC204(this);
}

_extern unsigned long _sub_6FC667(WebMVideo *const, std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &, void *, unsigned __int32 const);
unsigned long WebMVideo::Open(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &, void *, unsigned __int32 const) // 0x6FC667
{
    mangled_assert("?Open@WebMVideo@@UAEKABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAXI@Z");
    todo("implement");
    unsigned long __result = _sub_6FC667(this, arg, arg, arg);
    return __result;
}

_extern unsigned long _sub_6FC785(WebMVideo *const, void *);
unsigned long WebMVideo::Play(void *) // 0x6FC785
{
    mangled_assert("?Play@WebMVideo@@UAEKPAX@Z");
    todo("implement");
    unsigned long __result = _sub_6FC785(this, arg);
    return __result;
}

_extern unsigned long _sub_6FC41B(WebMVideo *const, unsigned long const, unsigned long &);
unsigned long WebMVideo::GetFrame(unsigned long const, unsigned long &) // 0x6FC41B
{
    mangled_assert("?GetFrame@WebMVideo@@UAEKKAAK@Z");
    todo("implement");
    unsigned long __result = _sub_6FC41B(this, arg, arg);
    return __result;
}

_extern unsigned long _sub_6FC81D(WebMVideo *const);
unsigned long WebMVideo::Stop() // 0x6FC81D
{
    mangled_assert("?Stop@WebMVideo@@UAEKXZ");
    todo("implement");
    unsigned long __result = _sub_6FC81D(this);
    return __result;
}

_extern unsigned long _sub_6FC25B(WebMVideo *const);
unsigned long WebMVideo::Close() // 0x6FC25B
{
    mangled_assert("?Close@WebMVideo@@UAEKXZ");
    todo("implement");
    unsigned long __result = _sub_6FC25B(this);
    return __result;
}

_extern unsigned long _sub_6FC620(WebMVideo const *const, unsigned __int32 &, unsigned __int32 &);
unsigned long WebMVideo::GetFrameSize(unsigned __int32 &, unsigned __int32 &) const // 0x6FC620
{
    mangled_assert("?GetFrameSize@WebMVideo@@UBEKAAI0@Z");
    todo("implement");
    unsigned long __result = _sub_6FC620(this, arg, arg);
    return __result;
}

_extern unsigned long _sub_6FC3FF(WebMVideo const *const, double &);
unsigned long WebMVideo::GetFPS(double &) const // 0x6FC3FF
{
    mangled_assert("?GetFPS@WebMVideo@@UBEKAAN@Z");
    todo("implement");
    unsigned long __result = _sub_6FC3FF(this, arg);
    return __result;
}

_extern unsigned long _sub_6FC64E(WebMVideo const *const, unsigned __int32 &);
unsigned long WebMVideo::GetNumFrames(unsigned __int32 &) const // 0x6FC64E
{
    mangled_assert("?GetNumFrames@WebMVideo@@UBEKAAI@Z");
    todo("implement");
    unsigned long __result = _sub_6FC64E(this, arg);
    return __result;
}

/* ---------- private code */

_extern unsigned char _sub_6FC243(__int32);
_static unsigned char ClampBYTE(__int32 n) // 0x6FC243
{
    mangled_assert("ClampBYTE");
    todo("implement");
    unsigned char __result = _sub_6FC243(n);
    return __result;
}

_extern void _sub_6FC295(vpx_image *, unsigned char *);
_static void ConvertVPXtoRGB(vpx_image *pVPXImg, unsigned char *pRGBBuf) // 0x6FC295
{
    mangled_assert("ConvertVPXtoRGB");
    todo("implement");
    _sub_6FC295(pVPXImg, pRGBBuf);
}
#endif
