#if 0
/* ---------- headers */

#include "decomp.h"
#include <winnls.h>
#include <bcrypt.h>
#include <datetimeapi.h>
#include <string.h>
#include <namedpipeapi.h>
#include <propidl.h>
#include <unknwnbase.h>
#include <ole2.h>
#include <mmiscapi.h>
#include <securityappcontainer.h>
#include <objbase.h>
#include <joystickapi.h>
#include <wincon.h>
#include <combaseapi.h>
#include <stdlib.h>
#include <limits.h>
#include <fileapi.h>
#include <jobapi.h>
#include <pshpack2.h>
#include <stralign.h>
#include <mciapi.h>
#include <ktmtypes.h>
#include <pshpack4.h>
#include <objidl.h>
#include <winver.h>
#include <winnetwk.h>
#include <verrsrc.h>
#include <realtimeapiset.h>
#include <processenv.h>
#include <winspool.h>
#include <wnnc.h>
#include <wow64apiset.h>
#include <utilapiset.h>
#include <winsvc.h>
#include <prsht.h>
#include <winuser.h>
#include <winnt.h>
#include <ZLib\Src\zutil.h>
#include <ZLib\Src\inffast.h>
#include <ZLib\Src\zlib.h>
#include <rpcdcep.h>
#include <ctype.h>
#include <ZLib\Src\zconf.h>
#include <ddeml.h>
#include <windows.h>
#include <sysinfoapi.h>
#include <winapifamily.h>
#include <ZLib\Src\inftrees.h>
#include <sdkddkver.h>
#include <threadpoolapiset.h>
#include <excpt.h>
#include <oleauto.h>
#include <crtdefs.h>
#include <sal.h>
#include <inaddr.h>
#include <dlgs.h>
#include <stringapiset.h>
#include <concurrencysal.h>
#include <vadefs.h>
#include <winsmcrd.h>
#include <wtypesbase.h>
#include <winefs.h>
#include <libloaderapi.h>
#include <tvout.h>
#include <interlockedapi.h>
#include <lzexpand.h>
#include <winbase.h>
#include <handleapi.h>
#include <apisetcconv.h>
#include <minwinbase.h>
#include <winperf.h>
#include <servprov.h>
#include <synchapi.h>
#include <mmiscapi2.h>
#include <poppack.h>
#include <cguid.h>
#include <winscard.h>
#include <oaidl.h>
#include <wtypes.h>
#include <rpcndr.h>
#include <rpcnsip.h>
#include <dpapi.h>
#include <ZLib\Src\infblock.h>
#include <cderr.h>
#include <dde.h>
#include <rpcnterr.h>
#include <kernelspecs.h>
#include <rpcasync.h>
#include <rpc.h>
#include <basetsd.h>
#include <rpcdce.h>
#include <namespaceapi.h>
#include <oleidl.h>
#include <errhandlingapi.h>
#include <winerror.h>
#include <playsoundapi.h>
#include <securitybaseapi.h>
#include <winreg.h>
#include <reason.h>
#include <consoleapi.h>
#include <wingdi.h>
#include <pshpack8.h>
#include <shellapi.h>
#include <mcx.h>
#include <winioctl.h>
#include <timezoneapi.h>
#include <wincrypt.h>
#include <ioapiset.h>
#include <objidlbase.h>
#include <memoryapi.h>
#include <rpcsal.h>
#include <urlmon.h>
#include <apiset.h>
#include <ZLib\Src\infcodes.h>
#include <nb30.h>
#include <processthreadsapi.h>
#include <profileapi.h>
#include <mmeapi.h>
#include <mmsystem.h>
#include <mmsyscom.h>
#include <unknwn.h>
#include <systemtopologyapi.h>
#include <commdlg.h>
#include <heapapi.h>
#include <bemapiset.h>
#include <ime_cmodes.h>
#include <threadpoollegacyapiset.h>
#include <ZLib\Src\infutil.h>
#include <processtopologyapi.h>
#include <timeapi.h>
#include <stdarg.h>
#include <windef.h>
#include <msxml.h>
#include <debugapi.h>
#include <minwindef.h>
#include <specstrings.h>
#include <fibersapi.h>
#include <specstrings_strict.h>
#include <guiddef.h>
#include <specstrings_undef.h>
#include <driverspecs.h>
#include <sdv_driverspecs.h>
#include <imm.h>
#include <winsock.h>
#include <stddef.h>
#include <ncrypt.h>
#include <rpcnsi.h>
#include <pshpack1.h>
#include <errno.h>

/* ---------- constants */

enum inflate_codes_mode
{
    START = 0,
    LEN,
    LENEXT,
    DIST,
    DISTEXT,
    COPY,
    LIT,
    WASH,
    END,
    BADCODE,
};

/* ---------- definitions */

struct inflate_codes_state
{
    inflate_codes_mode mode; // 0x0
    unsigned __int32 len; // 0x4
    <unnamed-tag> sub; // 0x8
    unsigned char lbits; // 0x10
    unsigned char dbits; // 0x11
    inflate_huft_s *ltree; // 0x14
    inflate_huft_s *dtree; // 0x18
};
static_assert(sizeof(inflate_codes_state) == 28, "Invalid inflate_codes_state size");

union <unnamed-tag>
{
    <unnamed-tag> code; // 0x0
    unsigned __int32 lit; // 0x0
    <unnamed-tag> copy; // 0x0
};
static_assert(sizeof(<unnamed-tag>) == 8, "Invalid <unnamed-tag> size");

struct <unnamed-tag>
{
    inflate_huft_s *tree; // 0x0
    unsigned __int32 need; // 0x4
};
static_assert(sizeof(<unnamed-tag>) == 8, "Invalid <unnamed-tag> size");

struct <unnamed-tag>
{
    unsigned __int32 get; // 0x0
    unsigned __int32 dist; // 0x4
};
static_assert(sizeof(<unnamed-tag>) == 8, "Invalid <unnamed-tag> size");

/* ---------- prototypes */

extern inflate_codes_state *inflate_codes_new(unsigned __int32 bl, unsigned __int32 bd, inflate_huft_s *tl, inflate_huft_s *td, z_stream_s *z);
extern __int32 inflate_codes(inflate_blocks_state *s, z_stream_s *z, __int32 r);
extern void inflate_codes_free(inflate_codes_state *c, z_stream_s *z);

/* ---------- globals */

/* ---------- private variables */

/* ---------- public code */

_extern inflate_codes_state *_sub_100049F8(unsigned __int32, unsigned __int32, inflate_huft_s *, inflate_huft_s *, z_stream_s *);
inflate_codes_state *inflate_codes_new(unsigned __int32 bl, unsigned __int32 bd, inflate_huft_s *tl, inflate_huft_s *td, z_stream_s *z) // 0x100049F8
{
    mangled_assert("_inflate_codes_new@20");
    todo("implement");
    inflate_codes_state * __result = _sub_100049F8(bl, bd, tl, td, z);
    return __result;
}

_extern __int32 _sub_10004397(inflate_blocks_state *, z_stream_s *, __int32);
__int32 inflate_codes(inflate_blocks_state *s, z_stream_s *z, __int32 r) // 0x10004397
{
    mangled_assert("_inflate_codes@12");
    todo("implement");
    __int32 __result = _sub_10004397(s, z, r);
    return __result;
}

_extern void _sub_100049E7(inflate_codes_state *, z_stream_s *);
void inflate_codes_free(inflate_codes_state *c, z_stream_s *z) // 0x100049E7
{
    mangled_assert("_inflate_codes_free@8");
    todo("implement");
    _sub_100049E7(c, z);
}

/* ---------- private code */
#endif
