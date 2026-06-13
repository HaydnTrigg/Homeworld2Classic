#if 0
/* ---------- headers */

#include "decomp.h"
#include <objidlbase.h>
#include <reason.h>
#include <consoleapi.h>
#include <wingdi.h>
#include <pshpack8.h>
#include <shellapi.h>
#include <winioctl.h>
#include <timezoneapi.h>
#include <wincrypt.h>
#include <ioapiset.h>
#include <urlmon.h>
#include <memoryapi.h>
#include <ZLib\Src\zutil.h>
#include <ZLib\Src\zlib.h>
#include <rpcsal.h>
#include <ZLib\Src\zconf.h>
#include <windows.h>
#include <apiset.h>
#include <winapifamily.h>
#include <sdkddkver.h>
#include <nb30.h>
#include <excpt.h>
#include <unknwn.h>
#include <processthreadsapi.h>
#include <profileapi.h>
#include <commdlg.h>
#include <stdio.h>
#include <crtdefs.h>
#include <sal.h>
#include <mmeapi.h>
#include <mmsystem.h>
#include <concurrencysal.h>
#include <ime_cmodes.h>
#include <mmsyscom.h>
#include <vadefs.h>
#include <systemtopologyapi.h>
#include <heapapi.h>
#include <bemapiset.h>
#include <threadpoollegacyapiset.h>
#include <msxml.h>
#include <processtopologyapi.h>
#include <timeapi.h>
#include <stdarg.h>
#include <windef.h>
#include <imm.h>
#include <debugapi.h>
#include <minwindef.h>
#include <specstrings.h>
#include <fibersapi.h>
#include <specstrings_strict.h>
#include <stddef.h>
#include <guiddef.h>
#include <specstrings_undef.h>
#include <driverspecs.h>
#include <sdv_driverspecs.h>
#include <errno.h>
#include <winsock.h>
#include <ncrypt.h>
#include <rpcnsi.h>
#include <pshpack1.h>
#include <propidl.h>
#include <unknwnbase.h>
#include <winnls.h>
#include <bcrypt.h>
#include <datetimeapi.h>
#include <string.h>
#include <namedpipeapi.h>
#include <ole2.h>
#include <mmiscapi.h>
#include <securityappcontainer.h>
#include <swprintf.inl>
#include <stralign.h>
#include <objbase.h>
#include <joystickapi.h>
#include <wincon.h>
#include <combaseapi.h>
#include <stdlib.h>
#include <objidl.h>
#include <limits.h>
#include <fileapi.h>
#include <jobapi.h>
#include <pshpack2.h>
#include <mciapi.h>
#include <winsvc.h>
#include <ktmtypes.h>
#include <pshpack4.h>
#include <winver.h>
#include <winnetwk.h>
#include <verrsrc.h>
#include <realtimeapiset.h>
#include <processenv.h>
#include <winspool.h>
#include <wnnc.h>
#include <wow64apiset.h>
#include <utilapiset.h>
#include <prsht.h>
#include <winuser.h>
#include <winnt.h>
#include <oleauto.h>
#include <rpcdcep.h>
#include <ctype.h>
#include <ddeml.h>
#include <sysinfoapi.h>
#include <threadpoolapiset.h>
#include <inaddr.h>
#include <dlgs.h>
#include <stringapiset.h>
#include <winsmcrd.h>
#include <wtypesbase.h>
#include <winefs.h>
#include <libloaderapi.h>
#include <tvout.h>
#include <interlockedapi.h>
#include <servprov.h>
#include <lzexpand.h>
#include <winbase.h>
#include <handleapi.h>
#include <apisetcconv.h>
#include <minwinbase.h>
#include <winperf.h>
#include <synchapi.h>
#include <cguid.h>
#include <mmiscapi2.h>
#include <poppack.h>
#include <oaidl.h>
#include <winscard.h>
#include <wtypes.h>
#include <rpcndr.h>
#include <rpcnsip.h>
#include <dpapi.h>
#include <cderr.h>
#include <oleidl.h>
#include <dde.h>
#include <rpcnterr.h>
#include <kernelspecs.h>
#include <rpcasync.h>
#include <rpc.h>
#include <basetsd.h>
#include <rpcdce.h>
#include <namespaceapi.h>
#include <errhandlingapi.h>
#include <winerror.h>
#include <playsoundapi.h>
#include <securitybaseapi.h>
#include <mcx.h>
#include <winreg.h>

/* ---------- constants */

/* ---------- definitions */

struct internal_state
{
    __int32 dummy; // 0x0
};
static_assert(sizeof(internal_state) == 4, "Invalid internal_state size");

typedef void *voidp;
typedef void *gzFile;

struct gz_stream
{
    z_stream_s stream; // 0x0
    __int32 z_err; // 0x38
    __int32 z_eof; // 0x3C
    _iobuf *file; // 0x40
    unsigned char *inbuf; // 0x44
    unsigned char *outbuf; // 0x48
    unsigned long crc; // 0x4C
    char *msg; // 0x50
    char *path; // 0x54
    __int32 transparent; // 0x58
    char mode; // 0x5C
    long startpos; // 0x60
};
static_assert(sizeof(gz_stream) == 100, "Invalid gz_stream size");

/* ---------- prototypes */

extern void *gzopen(char const *path, char const *mode);
extern void *gzdopen(__int32 fd, char const *mode);
extern __int32 gzsetparams(void *file, __int32 level, __int32 strategy);
extern __int32 gzread(void *file, void *buf, unsigned __int32 len);
extern __int32 gzgetc(void *file);
extern char *gzgets(void *file, char *buf, __int32 len);
extern __int32 gzwrite(void *file, void *const buf, unsigned __int32 len);
extern __int32 gzprintf(void *file, char const *format, ...);
extern __int32 gzputc(void *file, __int32 c);
extern __int32 gzputs(void *file, char const *s);
extern __int32 gzflush(void *file, __int32 flush);
extern long gzseek(void *file, long offset, __int32 whence);
extern __int32 gzrewind(void *file);
extern long gztell(void *file);
extern __int32 gzeof(void *file);
extern __int32 gzclose(void *file);
extern char const *gzerror(void *file, __int32 *errnum);

_static void *gz_open(char const *path, char const *mode, __int32 fd);
_static __int32 get_byte(gz_stream *s);
_static void check_header(gz_stream *s);
_static __int32 destroy(gz_stream *s);
_static __int32 do_flush(void *file, __int32 flush);
_static void putLong(_iobuf *file, unsigned long x);
_static unsigned long getLong(gz_stream *s);

/* ---------- globals */

/* ---------- private variables */

_static
{
    extern __int32 gz_magic[2]; // 0x1000C0B8
}

/* ---------- public code */

_extern void *_sub_100034B0(char const *, char const *);
void *gzopen(char const *path, char const *mode) // 0x100034B0
{
    mangled_assert("_gzopen@8");
    todo("implement");
    void * __result = _sub_100034B0(path, mode);
    return __result;
}

_extern void *_sub_1000331C(__int32, char const *);
void *gzdopen(__int32 fd, char const *mode) // 0x1000331C
{
    mangled_assert("_gzdopen@8");
    todo("implement");
    void * __result = _sub_1000331C(fd, mode);
    return __result;
}

_extern __int32 _sub_1000389C(void *, __int32, __int32);
__int32 gzsetparams(void *file, __int32 level, __int32 strategy) // 0x1000389C
{
    mangled_assert("_gzsetparams@12");
    todo("implement");
    __int32 __result = _sub_1000389C(file, level, strategy);
    return __result;
}

_extern __int32 _sub_10003551(void *, void *, unsigned __int32);
__int32 gzread(void *file, void *buf, unsigned __int32 len) // 0x10003551
{
    mangled_assert("_gzread@12");
    todo("implement");
    __int32 __result = _sub_10003551(file, buf, len);
    return __result;
}

_extern __int32 _sub_10003441(void *);
__int32 gzgetc(void *file) // 0x10003441
{
    mangled_assert("_gzgetc@4");
    todo("implement");
    __int32 __result = _sub_10003441(file);
    return __result;
}

_extern char *_sub_10003466(void *, char *, __int32);
char *gzgets(void *file, char *buf, __int32 len) // 0x10003466
{
    mangled_assert("_gzgets@12");
    todo("implement");
    char * __result = _sub_10003466(file, buf, len);
    return __result;
}

_extern __int32 _sub_10003900(void *, void *const, unsigned __int32);
__int32 gzwrite(void *file, void *const buf, unsigned __int32 len) // 0x10003900
{
    mangled_assert("_gzwrite@12");
    todo("implement");
    __int32 __result = _sub_10003900(file, buf, len);
    return __result;
}

_extern __int32 _sub_100034C2(void *, char const *, ...);
__int32 gzprintf(void *file, char const *format, ...) // 0x100034C2
{
    mangled_assert("_gzprintf");
    todo("implement");
    __int32 __result = _sub_100034C2(file, format, buf);
    return __result;
}

_extern __int32 _sub_1000350C(void *, __int32);
__int32 gzputc(void *file, __int32 c) // 0x1000350C
{
    mangled_assert("_gzputc@8");
    todo("implement");
    __int32 __result = _sub_1000350C(file, c);
    return __result;
}

_extern __int32 _sub_10003536(void *, char const *);
__int32 gzputs(void *file, char const *s) // 0x10003536
{
    mangled_assert("_gzputs@8");
    todo("implement");
    __int32 __result = _sub_10003536(file, s);
    return __result;
}

_extern __int32 _sub_10003415(void *, __int32);
__int32 gzflush(void *file, __int32 flush) // 0x10003415
{
    mangled_assert("_gzflush@8");
    todo("implement");
    __int32 __result = _sub_10003415(file, flush);
    return __result;
}

_extern long _sub_1000376F(void *, long, __int32);
long gzseek(void *file, long offset, __int32 whence) // 0x1000376F
{
    mangled_assert("_gzseek@12");
    todo("implement");
    long __result = _sub_1000376F(file, offset, whence);
    return __result;
}

_extern __int32 _sub_10003711(void *);
__int32 gzrewind(void *file) // 0x10003711
{
    mangled_assert("_gzrewind@4");
    todo("implement");
    __int32 __result = _sub_10003711(file);
    return __result;
}

_extern long _sub_100038F0(void *);
long gztell(void *file) // 0x100038F0
{
    mangled_assert("_gztell@4");
    todo("implement");
    long __result = _sub_100038F0(file);
    return __result;
}

_extern __int32 _sub_10003354(void *);
__int32 gzeof(void *file) // 0x10003354
{
    mangled_assert("_gzeof@4");
    todo("implement");
    __int32 __result = _sub_10003354(file);
    return __result;
}

_extern __int32 _sub_100032DC(void *);
__int32 gzclose(void *file) // 0x100032DC
{
    mangled_assert("_gzclose@4");
    todo("implement");
    __int32 __result = _sub_100032DC(file);
    return __result;
}

_extern char const *_sub_1000336C(void *, __int32 *);
char const *gzerror(void *file, __int32 *errnum) // 0x1000336C
{
    mangled_assert("_gzerror@8");
    todo("implement");
    char const * __result = _sub_1000336C(file, errnum);
    return __result;
}

/* ---------- private code */

_extern void *_sub_100030DE(char const *, char const *, __int32);
_static void *gz_open(char const *path, char const *mode, __int32 fd) // 0x100030DE
{
    mangled_assert("gz_open");
    todo("implement");
    void * __result = _sub_100030DE(path, mode, fd);
    return __result;
}

_extern __int32 _sub_10003072(gz_stream *);
_static __int32 get_byte(gz_stream *s) // 0x10003072
{
    mangled_assert("get_byte");
    todo("implement");
    __int32 __result = _sub_10003072(s);
    return __result;
}

_extern void _sub_10002E00(gz_stream *);
_static void check_header(gz_stream *s) // 0x10002E00
{
    mangled_assert("check_header");
    todo("implement");
    _sub_10002E00(s);
}

_extern __int32 _sub_10002EEC(gz_stream *);
_static __int32 destroy(gz_stream *s) // 0x10002EEC
{
    mangled_assert("destroy");
    todo("implement");
    __int32 __result = _sub_10002EEC(s);
    return __result;
}

_extern __int32 _sub_10002F8D(void *, __int32);
_static __int32 do_flush(void *file, __int32 flush) // 0x10002F8D
{
    mangled_assert("do_flush");
    todo("implement");
    __int32 __result = _sub_10002F8D(file, flush);
    return __result;
}

_extern void _sub_10003985(_iobuf *, unsigned long);
_static void putLong(_iobuf *file, unsigned long x) // 0x10003985
{
    mangled_assert("putLong");
    todo("implement");
    _sub_10003985(file, x);
}

_extern unsigned long _sub_10003032(gz_stream *);
_static unsigned long getLong(gz_stream *s) // 0x10003032
{
    mangled_assert("getLong");
    todo("implement");
    unsigned long __result = _sub_10003032(s);
    return __result;
}
#endif
