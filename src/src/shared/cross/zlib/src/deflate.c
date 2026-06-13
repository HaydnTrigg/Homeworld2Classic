#if 0
/* ---------- headers */

#include "decomp.h"
#include <errno.h>
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
#include <ZLib\Src\deflate.h>
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

/* ---------- constants */

enum block_state
{
    need_more = 0,
    block_done,
    finish_started,
    finish_done,
};

/* ---------- definitions */

struct config_s
{
    unsigned short good_length; // 0x0
    unsigned short max_lazy; // 0x2
    unsigned short nice_length; // 0x4
    unsigned short max_chain; // 0x6
    block_state (*func)(internal_state *, __int32); // 0x8
};
static_assert(sizeof(config_s) == 12, "Invalid config_s size");

struct static_tree_desc_s
{
    __int32 dummy; // 0x0
};
static_assert(sizeof(static_tree_desc_s) == 4, "Invalid static_tree_desc_s size");

typedef config_s config;
typedef block_state (*compress_func)(internal_state *, __int32);

/* ---------- prototypes */

extern __int32 deflateInit_(z_stream_s *strm, __int32 level, char const *version, __int32 stream_size);
extern __int32 deflateInit2_(z_stream_s *strm, __int32 level, __int32 method, __int32 windowBits, __int32 memLevel, __int32 strategy, char const *version, __int32 stream_size);
extern __int32 deflateSetDictionary(z_stream_s *strm, unsigned char const *dictionary, unsigned __int32 dictLength);
extern __int32 deflateReset(z_stream_s *strm);
extern __int32 deflateParams(z_stream_s *strm, __int32 level, __int32 strategy);
extern __int32 deflate(z_stream_s *strm, __int32 flush);
extern __int32 deflateEnd(z_stream_s *strm);
extern __int32 deflateCopy(z_stream_s *dest, z_stream_s *source);

_static void putShortMSB(internal_state *s, unsigned __int32 b);
_static void flush_pending(z_stream_s *strm);
_static __int32 read_buf(z_stream_s *strm, unsigned char *buf, unsigned __int32 size);
_static void lm_init(internal_state *s);
_static unsigned __int32 longest_match(internal_state *s, unsigned __int32 cur_match);
_static void fill_window(internal_state *s);
_static block_state deflate_stored(internal_state *s, __int32 flush);
_static block_state deflate_fast(internal_state *s, __int32 flush);
_static block_state deflate_slow(internal_state *s, __int32 flush);

/* ---------- globals */

extern char const deflate_copyright[53]; // 0x10009888

/* ---------- private variables */

_static
{
    extern config_s const configuration_table[10]; // 0x100098C0
}

/* ---------- public code */

_extern __int32 _sub_100027D5(z_stream_s *, __int32, char const *, __int32);
__int32 deflateInit_(z_stream_s *strm, __int32 level, char const *version, __int32 stream_size) // 0x100027D5
{
    mangled_assert("_deflateInit_@16");
    todo("implement");
    __int32 __result = _sub_100027D5(strm, level, version, stream_size);
    return __result;
}

_extern __int32 _sub_10002619(z_stream_s *, __int32, __int32, __int32, __int32, __int32, char const *, __int32);
__int32 deflateInit2_(z_stream_s *strm, __int32 level, __int32 method, __int32 windowBits, __int32 memLevel, __int32 strategy, char const *version, __int32 stream_size) // 0x10002619
{
    mangled_assert("_deflateInit2_@32");
    todo("implement");
    __int32 __result = _sub_10002619(strm, level, method, windowBits, memLevel, strategy, version, stream_size);
    return __result;
}

_extern __int32 _sub_1000290E(z_stream_s *, unsigned char const *, unsigned __int32);
__int32 deflateSetDictionary(z_stream_s *strm, unsigned char const *dictionary, unsigned __int32 dictLength) // 0x1000290E
{
    mangled_assert("_deflateSetDictionary@12");
    todo("implement");
    __int32 __result = _sub_1000290E(strm, dictionary, dictLength);
    return __result;
}

_extern __int32 _sub_1000289F(z_stream_s *);
__int32 deflateReset(z_stream_s *strm) // 0x1000289F
{
    mangled_assert("_deflateReset@4");
    todo("implement");
    __int32 __result = _sub_1000289F(strm);
    return __result;
}

_extern __int32 _sub_100027F5(z_stream_s *, __int32, __int32);
__int32 deflateParams(z_stream_s *strm, __int32 level, __int32 strategy) // 0x100027F5
{
    mangled_assert("_deflateParams@12");
    todo("implement");
    __int32 __result = _sub_100027F5(strm, level, strategy);
    return __result;
}

_extern __int32 _sub_100021EE(z_stream_s *, __int32);
__int32 deflate(z_stream_s *strm, __int32 flush) // 0x100021EE
{
    mangled_assert("_deflate@8");
    todo("implement");
    __int32 __result = _sub_100021EE(strm, flush);
    return __result;
}

_extern __int32 _sub_1000258C(z_stream_s *);
__int32 deflateEnd(z_stream_s *strm) // 0x1000258C
{
    mangled_assert("_deflateEnd@4");
    todo("implement");
    __int32 __result = _sub_1000258C(strm);
    return __result;
}

_extern __int32 _sub_10002424(z_stream_s *, z_stream_s *);
__int32 deflateCopy(z_stream_s *dest, z_stream_s *source) // 0x10002424
{
    mangled_assert("_deflateCopy@8");
    todo("implement");
    __int32 __result = _sub_10002424(dest, source);
    return __result;
}

/* ---------- private code */

_extern void _sub_10002D81(internal_state *, unsigned __int32);
_static void putShortMSB(internal_state *s, unsigned __int32 b) // 0x10002D81
{
    mangled_assert("putShortMSB");
    todo("implement");
    _sub_10002D81(s, b);
}

_extern void _sub_10002B4A(z_stream_s *);
_static void flush_pending(z_stream_s *strm) // 0x10002B4A
{
    mangled_assert("flush_pending");
    todo("implement");
    _sub_10002B4A(strm);
}

_extern __int32 _sub_10002DAD(z_stream_s *, unsigned char *, unsigned __int32);
_static __int32 read_buf(z_stream_s *strm, unsigned char *buf, unsigned __int32 size) // 0x10002DAD
{
    mangled_assert("read_buf");
    todo("implement");
    __int32 __result = _sub_10002DAD(strm, buf, size);
    return __result;
}

_extern void _sub_10002B99(internal_state *);
_static void lm_init(internal_state *s) // 0x10002B99
{
    mangled_assert("lm_init");
    todo("implement");
    _sub_10002B99(s);
}

_extern unsigned __int32 _sub_10002C1E(internal_state *, unsigned __int32);
_static unsigned __int32 longest_match(internal_state *s, unsigned __int32 cur_match) // 0x10002C1E
{
    mangled_assert("longest_match");
    todo("implement");
    unsigned __int32 __result = _sub_10002C1E(s, cur_match);
    return __result;
}

_extern void _sub_100029EC(internal_state *);
_static void fill_window(internal_state *s) // 0x100029EC
{
    mangled_assert("fill_window");
    todo("implement");
    _sub_100029EC(s);
}

_extern block_state _sub_10001A76(internal_state *, __int32);
_static block_state deflate_stored(internal_state *s, __int32 flush) // 0x10001A76
{
    mangled_assert("deflate_stored");
    todo("implement");
    block_state __result = _sub_10001A76(s, flush);
    return __result;
}

_extern block_state _sub_10001B9B(internal_state *, __int32);
_static block_state deflate_fast(internal_state *s, __int32 flush) // 0x10001B9B
{
    mangled_assert("deflate_fast");
    todo("implement");
    block_state __result = _sub_10001B9B(s, flush);
    return __result;
}

_extern block_state _sub_10001E53(internal_state *, __int32);
_static block_state deflate_slow(internal_state *s, __int32 flush) // 0x10001E53
{
    mangled_assert("deflate_slow");
    todo("implement");
    block_state __result = _sub_10001E53(s, flush);
    return __result;
}
#endif
