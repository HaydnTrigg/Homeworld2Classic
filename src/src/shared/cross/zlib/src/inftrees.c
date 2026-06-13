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
#include <processtopologyapi.h>
#include <timeapi.h>
#include <stdarg.h>
#include <windef.h>
#include <msxml.h>
#include <debugapi.h>
#include <minwindef.h>
#include <specstrings.h>
#include <ZLib\Src\inffixed.h>
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

/* ---------- definitions */

struct internal_state
{
    __int32 dummy; // 0x0
};
static_assert(sizeof(internal_state) == 4, "Invalid internal_state size");

/* ---------- prototypes */

extern __int32 inflate_trees_bits(unsigned __int32 *c, unsigned __int32 *bb, inflate_huft_s **tb, inflate_huft_s *hp, z_stream_s *z);
extern __int32 inflate_trees_dynamic(unsigned __int32 nl, unsigned __int32 nd, unsigned __int32 *c, unsigned __int32 *bl, unsigned __int32 *bd, inflate_huft_s **tl, inflate_huft_s **td, inflate_huft_s *hp, z_stream_s *z);
extern __int32 inflate_trees_fixed(unsigned __int32 *bl, unsigned __int32 *bd, inflate_huft_s **tl, inflate_huft_s **td, z_stream_s *z);

_static __int32 huft_build(unsigned __int32 *b, unsigned __int32 n, unsigned __int32 s, unsigned __int32 const *d, unsigned __int32 const *e, inflate_huft_s **t, unsigned __int32 *m, inflate_huft_s *hp, unsigned __int32 *hn, unsigned __int32 *v);

/* ---------- globals */

extern char const inflate_copyright[47]; // 0x10009AC8

/* ---------- private variables */

_static
{
    extern unsigned __int32 const cplens[31]; // 0x10009AF8
    extern unsigned __int32 const cplext[31]; // 0x10009B78
    extern unsigned __int32 const cpdist[30]; // 0x10009BF8
    extern unsigned __int32 const cpdext[30]; // 0x10009C70
    extern unsigned __int32 fixed_bl; // 0x1000C0C0
    extern unsigned __int32 fixed_bd; // 0x1000C0C4
    extern inflate_huft_s fixed_tl[512]; // 0x1000C0C8
    extern inflate_huft_s fixed_td[32]; // 0x1000D0C8
}

/* ---------- public code */

_extern __int32 _sub_100057C0(unsigned __int32 *, unsigned __int32 *, inflate_huft_s **, inflate_huft_s *, z_stream_s *);
__int32 inflate_trees_bits(unsigned __int32 *c, unsigned __int32 *bb, inflate_huft_s **tb, inflate_huft_s *hp, z_stream_s *z) // 0x100057C0
{
    mangled_assert("_inflate_trees_bits@20");
    todo("implement");
    __int32 __result = _sub_100057C0(c, bb, tb, hp, z);
    return __result;
}

_extern __int32 _sub_1000583C(unsigned __int32, unsigned __int32, unsigned __int32 *, unsigned __int32 *, unsigned __int32 *, inflate_huft_s **, inflate_huft_s **, inflate_huft_s *, z_stream_s *);
__int32 inflate_trees_dynamic(unsigned __int32 nl, unsigned __int32 nd, unsigned __int32 *c, unsigned __int32 *bl, unsigned __int32 *bd, inflate_huft_s **tl, inflate_huft_s **td, inflate_huft_s *hp, z_stream_s *z) // 0x1000583C
{
    mangled_assert("_inflate_trees_dynamic@36");
    todo("implement");
    __int32 __result = _sub_1000583C(nl, nd, c, bl, bd, tl, td, hp, z);
    return __result;
}

_extern __int32 _sub_10005950(unsigned __int32 *, unsigned __int32 *, inflate_huft_s **, inflate_huft_s **, z_stream_s *);
__int32 inflate_trees_fixed(unsigned __int32 *bl, unsigned __int32 *bd, inflate_huft_s **tl, inflate_huft_s **td, z_stream_s *z) // 0x10005950
{
    mangled_assert("_inflate_trees_fixed@20");
    todo("implement");
    __int32 __result = _sub_10005950(bl, bd, tl, td, z);
    return __result;
}

/* ---------- private code */

_extern __int32 _sub_10005364(unsigned __int32 *, unsigned __int32, unsigned __int32, unsigned __int32 const *, unsigned __int32 const *, inflate_huft_s **, unsigned __int32 *, inflate_huft_s *, unsigned __int32 *, unsigned __int32 *);
_static __int32 huft_build(unsigned __int32 *b, unsigned __int32 n, unsigned __int32 s, unsigned __int32 const *d, unsigned __int32 const *e, inflate_huft_s **t, unsigned __int32 *m, inflate_huft_s *hp, unsigned __int32 *hn, unsigned __int32 *v) // 0x10005364
{
    mangled_assert("huft_build");
    todo("implement");
    __int32 __result = _sub_10005364(b, n, s, d, e, t, m, hp, hn, v);
    return __result;
}
#endif
