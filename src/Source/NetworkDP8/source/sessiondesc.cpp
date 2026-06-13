#if 0
/* ---------- headers */

#include "decomp.h"
#include <winbase.h>
#include <unknwn.h>
#include <apisetcconv.h>
#include <minwinbase.h>
#include <commdlg.h>
#include <errhandlingapi.h>
#include <processenv.h>
#include <pshpack1.h>
#include <guiddef.h>
#include <crtdefs.h>
#include <jobapi.h>
#include <shellapi.h>
#include <imm.h>
#include <winnls.h>
#include <apiset.h>
#include <datetimeapi.h>
#include <systemtopologyapi.h>
#include <wow64apiset.h>
#include <stralign.h>
#include <ncrypt.h>
#include <locale.h>
#include <winreg.h>
#include <processtopologyapi.h>
#include <winsock.h>
#include <system_error>
#include <winnt.h>
#include <winsvc.h>
#include <urlmon.h>
#include <new>
#include <cerrno>
#include <kernelspecs.h>
#include <pshpack2.h>
#include <libloaderapi.h>
#include <nb30.h>
#include <xstddef>
#include <errno.h>
#include <basetsd.h>
#include <sysinfoapi.h>
#include <timeapi.h>
#include <dpapi.h>
#include <cwchar>
#include <intrin.h>
#include <wchar.h>
#include <setjmp.h>
#include <winscard.h>
#include <winver.h>
#include <wtypes.h>
#include <cstdlib>
#include <verrsrc.h>
#include <rpcndr.h>
#include <streambuf>
#include <rpcnsip.h>
#include <xiosbase>
#include <securityappcontainer.h>
#include <tvout.h>
#include <swprintf.inl>
#include <xlocale>
#include <fibersapi.h>
#include <mciapi.h>
#include <cstring>
#include <winuser.h>
#include <stdexcept>
#include <xstring>
#include <xmemory0>
#include <consoleapi.h>
#include <limits>
#include <oleauto.h>
#include <ymath.h>
#include <realtimeapiset.h>
#include <winperf.h>
#include <servprov.h>
#include <xtgmath.h>
#include <dlgs.h>
#include <cguid.h>
#include <namedpipeapi.h>
#include <ioapiset.h>
#include <wingdi.h>
#include <memoryapi.h>
#include <joystickapi.h>
#include <rpcdce.h>
#include <bcrypt.h>
#include <immintrin.h>
#include <wmmintrin.h>
#include <nmmintrin.h>
#include <pshpack4.h>
#include <ddeml.h>
#include <lzexpand.h>
#include <smmintrin.h>
#include <wincrypt.h>
#include <type_traits>
#include <tmmintrin.h>
#include <xlocinfo>
#include <pmmintrin.h>
#include <xlocinfo.h>
#include <emmintrin.h>
#include <ctype.h>
#include <timezoneapi.h>
#include <stringapiset.h>
#include <reason.h>
#include <xmmintrin.h>
#include <mmintrin.h>
#include <rpcsal.h>
#include <xutility>
#include <vector>
#include <utility>
#include <xatomic0.h>
#include <xmemory>
#include <iosfwd>
#include <crtdbg.h>
#include <share.h>
#include <interlockedapi.h>
#include <winioctl.h>
#include <securitybaseapi.h>
#include "\HICKORY-PCSHIP\Homeworld2Classic\src\Source\NetworkDP8\pch.h"
#include "\HICKORY-PCSHIP\Homeworld2Classic\src\Source\NetworkDP8\source\sessiondesc.h"
#include <dplay8.h>
#include <oleidl.h>
#include <string>
#include <xrefwrap>
#include <ole2.h>
#include <cderr.h>
#include <iterator>
#include <winapifamily.h>
#include <dde.h>
#include <istream>
#include <wtime.inl>
#include <pshpack8.h>
#include <ostream>
#include <winerror.h>
#include <debugapi.h>
#include <ios>
#include <specstrings.h>
#include <fileapi.h>
#include <rpcnterr.h>
#include <wtypesbase.h>
#include <winspool.h>
#include <xlocnum>
#include <specstrings_strict.h>
#include <rpcnsi.h>
#include <rpcasync.h>
#include <prsht.h>
#include <climits>
#include <specstrings_undef.h>
#include <cmath>
#include <driverspecs.h>
#include <mcx.h>
#include <math.h>
#include <sdv_driverspecs.h>
#include <xdebug>
#include <objidl.h>
#include <msxml.h>
#include <threadpoollegacyapiset.h>
#include <mmiscapi2.h>
#include <winefs.h>
#include <poppack.h>
#include <typeinfo>
#include <inaddr.h>
#include <objbase.h>
#include <rpc.h>
#include <mmsystem.h>
#include <xfacet>
#include <windows.h>
#include <mmsyscom.h>
#include <sdkddkver.h>
#include <excpt.h>
#include <profileapi.h>
#include <synchapi.h>
#include <winnetwk.h>
#include <wnnc.h>
#include <utilapiset.h>
#include <heapapi.h>
#include <processthreadsapi.h>
#include <rpcdcep.h>
#include <playsoundapi.h>
#include <ime_cmodes.h>
#include <cfloat>
#include <combaseapi.h>
#include <float.h>
#include <crtwrn.h>
#include <bemapiset.h>
#include <cstdio>
#include <stdio.h>
#include <handleapi.h>
#include <stdarg.h>
#include <winsmcrd.h>
#include <objidlbase.h>
#include <windef.h>
#include <minwindef.h>
#include <threadpoolapiset.h>
#include <wincon.h>
#include <mmiscapi.h>
#include <unknwnbase.h>
#include <mmeapi.h>
#include <oaidl.h>
#include <namespaceapi.h>
#include <dpaddr.h>
#include <ammintrin.h>
#include <ktmtypes.h>
#include <mm3dnow.h>
#include <propidl.h>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- private variables */

_static
{
    extern std::piecewise_construct_t piecewise_construct; // 0x84CB64
    extern std::allocator_arg_t allocator_arg; // 0x84CB65
}

/* ---------- public code */

_extern _sub_6D50F2(Net::SessionDescription *const);
Net::SessionDescription::SessionDescription() // 0x6D50F2
{
    mangled_assert("??0SessionDescription@Net@@QAE@XZ");
    todo("implement");
    _sub_6D50F2(this);
}

_extern _sub_6D5062(Net::SessionDescription *const, _DPN_APPLICATION_DESC const &);
Net::SessionDescription::SessionDescription(_DPN_APPLICATION_DESC const &) // 0x6D5062
{
    mangled_assert("??0SessionDescription@Net@@QAE@ABU_DPN_APPLICATION_DESC@@@Z");
    todo("implement");
    _sub_6D5062(this, arg);
}

_extern void _sub_6D514B(Net::SessionDescription const *const, _DPN_APPLICATION_DESC &);
void Net::SessionDescription::Build(_DPN_APPLICATION_DESC &) const // 0x6D514B
{
    mangled_assert("?Build@SessionDescription@Net@@QBEXAAU_DPN_APPLICATION_DESC@@@Z");
    todo("implement");
    _sub_6D514B(this, arg);
}

/* ---------- private code */
#endif
