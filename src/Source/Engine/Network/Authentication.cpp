#if 0
/* ---------- headers */

#include "decomp.h"
#include <mciapi.h>
#include <stralign.h>
#include <winuser.h>
#include <fileio\md5.h>
#include <consoleapi.h>
#include <pch.h>
#include <namedpipeapi.h>
#include <ioapiset.h>
#include <winsvc.h>
#include <crtdefs.h>
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
#include <xutility>
#include <fileio\fileioexports.h>
#include <oleauto.h>
#include <winioctl.h>
#include <servprov.h>
#include <debugapi.h>
#include <fileapi.h>
#include <cguid.h>
#include <cderr.h>
#include <dde.h>
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
#include <winbase.h>
#include <wincon.h>
#include <mmiscapi.h>
#include <apisetcconv.h>
#include <mmeapi.h>
#include <minwinbase.h>
#include <errhandlingapi.h>
#include <ime_cmodes.h>
#include <processenv.h>
#include <imagehlp.h>
#include <guiddef.h>
#include <wintrust.h>
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
#include <winnt.h>
#include <processtopologyapi.h>
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
#include <timeapi.h>
#include <dpapi.h>
#include <propidl.h>
#include <Network\Authentication.h>
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

/* ---------- constants */

/* ---------- definitions */

typedef std::num_put<char,std::ostreambuf_iterator<char,std::char_traits<char> > > _Nput;
typedef std::ostreambuf_iterator<char,std::char_traits<char> > _Iter;
typedef std::basic_string<char,std::char_traits<char>,std::allocator<char> > string_type;
typedef short mask;
typedef std::numpunct<char> _Mypunct;
typedef std::basic_streambuf<char,std::char_traits<char> > streambuf_type;
typedef std::basic_ostream<char,std::char_traits<char> > ostream_type;
typedef void *DIGEST_HANDLE;
typedef __int32 (*DIGEST_FUNCTION)(void *, unsigned char *, unsigned long);
typedef _tagADDRESS64 *LPADDRESS64;
typedef _tagADDRESS *LPADDRESS;
typedef _KDHELP64 *PKDHELP64;
typedef _KDHELP *PKDHELP;

/* ---------- prototypes */

/* ---------- globals */

/* ---------- private variables */

_static
{
    extern char const *l_modules[6]; // 0x83AA64
}

/* ---------- public code */

Authenticator::Authenticator() // 0x5B984C
{
    mangled_assert("??0Authenticator@@QAE@XZ");
    todo("implement");
}

void Authenticator::GetHash(unsigned char *) const // 0x5B98E4
{
    mangled_assert("?GetHash@Authenticator@@QBEXQAE@Z");
    todo("implement");
}

/* ---------- private code */
#endif
