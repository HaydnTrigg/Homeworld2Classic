#if 0
/* ---------- headers */

#include "decomp.h"
#include <specstrings_strict.h>
#include <specstrings_undef.h>
#include <driverspecs.h>
#include <sdv_driverspecs.h>
#include <threadpoolapiset.h>
#include <Objects\pch.h>
#include <objidl.h>
#include <msxml.h>
#include <namespaceapi.h>
#include <crtdefs.h>
#include <ktmtypes.h>
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
#include <Objects\Jpg\INTERFCE.h>
#include <guiddef.h>
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
#include <processtopologyapi.h>
#include <winnt.h>
#include <pshpack2.h>
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
#include <jpeg-6b\jpeglib.h>
#include <fibersapi.h>
#include <imm.h>
#include <jpeg-6b\jconfig.h>
#include <jpeg-6b\jmorecfg.h>
#include <winver.h>
#include <winscard.h>
#include <verrsrc.h>
#include <wtypes.h>
#include <rpcndr.h>
#include <realtimeapiset.h>
#include <tvout.h>
#include <rpcnsip.h>
#include <mciapi.h>
#include <stralign.h>
#include <winuser.h>
#include <consoleapi.h>
#include <namedpipeapi.h>
#include <ioapiset.h>
#include <winsvc.h>
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
#include <cguid.h>
#include <cderr.h>
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
#include <mmiscapi2.h>
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
#include <stdarg.h>
#include <bemapiset.h>
#include <rpcdcep.h>
#include <windef.h>
#include <playsoundapi.h>
#include <minwindef.h>
#include <specstrings.h>
#include <handleapi.h>

/* ---------- constants */

/* ---------- definitions */

struct my_error_mgr
{
    jpeg_error_mgr pub; // 0x0
    __int32 setjmp_buffer[16]; // 0x84
};
static_assert(sizeof(my_error_mgr) == 196, "Invalid my_error_mgr size");

/* ---------- prototypes */

extern void JpegInfo(_jpegdata *data);
extern void JpegWrite(_jpegdata *data);
extern void JpegRead(_jpegdata *data);

_static void my_error_exit(jpeg_common_struct *cinfo);

/* ---------- globals */

/* ---------- private variables */

/* ---------- public code */

void JpegInfo(_jpegdata *data) // 0x100C1F10
{
    mangled_assert("?JpegInfo@@YGXPAU_jpegdata@@@Z");
    todo("implement");
}

void JpegWrite(_jpegdata *data) // 0x100C2140
{
    mangled_assert("?JpegWrite@@YGXPAU_jpegdata@@@Z");
    todo("implement");
}

void JpegRead(_jpegdata *data) // 0x100C1FE0
{
    mangled_assert("?JpegRead@@YGXPAU_jpegdata@@@Z");
    todo("implement");
}

/* ---------- private code */

_static void my_error_exit(jpeg_common_struct *cinfo) // 0x100C22F0
{
    mangled_assert("my_error_exit");
    todo("implement");
}
#endif
