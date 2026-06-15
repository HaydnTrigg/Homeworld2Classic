#if 0
/* ---------- headers */

#include "decomp.h"
#include <ddeml.h>
#include <lzexpand.h>
#include <atlbase.h>
#include <atldef.h>
#include <atlcomcli.h>
#include <atlrc.h>
#include <olectl.h>
#include <new.h>
#include <interlockedapi.h>
#include <timezoneapi.h>
#include <stringapiset.h>
#include <reason.h>
#include <ocidl.h>
#include <securitybaseapi.h>
#include <crtdefs.h>
#include <oleidl.h>
#include <mcx.h>
#include <debugapi.h>
#include <fileapi.h>
#include <locale.h>
#include <cderr.h>
#include <dde.h>
#include <objidl.h>
#include <msxml.h>
#include <system_error>
#include <winsock2.h>
#include <new>
#include <cerrno>
#include <winapifamily.h>
#include <xstddef>
#include <errno.h>
#include <windows.h>
#include <sdkddkver.h>
#include <threadpoollegacyapiset.h>
#include <rpcnterr.h>
#include <winsmcrd.h>
#include <dplay8.h>
#include <excpt.h>
#include <poppack.h>
#include <rpcnsi.h>
#include <rpcasync.h>
#include <dpaddr.h>
#include <cwchar>
#include <intrin.h>
#include <wchar.h>
#include <setjmp.h>
#include <mmiscapi2.h>
#include <ime_cmodes.h>
#include <cstdlib>
#include <profileapi.h>
#include <streambuf>
#include <xiosbase>
#include <synchapi.h>
#include <swprintf.inl>
#include <xlocale>
#include <mmsystem.h>
#include <cstring>
#include <mmsyscom.h>
#include <process.h>
#include <stdexcept>
#include <utilapiset.h>
#include <heapapi.h>
#include <processthreadsapi.h>
#include <ws2def.h>
#include <xstring>
#include <ole2.h>
#include <inaddr.h>
#include <xmemory0>
#include <objbase.h>
#include <atlbase.inl>
#include <limits>
#include <combaseapi.h>
#include <ymath.h>
#include <xtgmath.h>
#include <pshpack8.h>
#include <winnetwk.h>
#include <qos.h>
#include <wnnc.h>
#include <stdarg.h>
#include <windef.h>
#include <minwindef.h>
#include <bemapiset.h>
#include <rpcdcep.h>
#include <specstrings.h>
#include <playsoundapi.h>
#include <specstrings_strict.h>
#include <specstrings_undef.h>
#include <handleapi.h>
#include <driverspecs.h>
#include <objidlbase.h>
#include <sdv_driverspecs.h>
#include <ncrypt.h>
#include <immintrin.h>
#include <threadpoolapiset.h>
#include <unknwnbase.h>
#include <wmmintrin.h>
#include <oaidl.h>
#include <nmmintrin.h>
#include <commdlg.h>
#include <smmintrin.h>
#include <namespaceapi.h>
#include <type_traits>
#include <tmmintrin.h>
#include <xlocinfo>
#include <ktmtypes.h>
#include <pmmintrin.h>
#include <xlocinfo.h>
#include <emmintrin.h>
#include <ctype.h>
#include <dpapi.h>
#include <propidl.h>
#include <xmmintrin.h>
#include <unknwn.h>
#include <mmintrin.h>
#include <winbase.h>
#include <wincon.h>
#include <mmiscapi.h>
#include <apisetcconv.h>
#include <mmeapi.h>
#include <imm.h>
#include <xutility>
#include <vector>
#include <minwinbase.h>
#include <utility>
#include <xatomic0.h>
#include <xmemory>
#include <atlcore.h>
#include <iosfwd>
#include <winscard.h>
#include <tchar.h>
#include <crtdbg.h>
#include <share.h>
#include <wtypes.h>
#include <mbstring.h>
#include <errhandlingapi.h>
#include <rpcndr.h>
#include <processenv.h>
#include <rpcnsip.h>
#include <guiddef.h>
#include <stralign.h>
#include <jobapi.h>
#include <apiset.h>
#include "\HICKORY-PCSHIP\Homeworld2Classic\src\Source\NetworkDP8\pch.h"
#include "\HICKORY-PCSHIP\Homeworld2Classic\src\Source\NetworkDP8\source\sessioninfo.h"
#include "\HICKORY-PCSHIP\Homeworld2Classic\src\Source\NetworkDP8\source\address.h"
#include <winsvc.h>
#include <string>
#include <xrefwrap>
#include <boost\cstdint.hpp>
#include <systemtopologyapi.h>
#include <pshpack1.h>
#include <atltransactionmanager.h>
#include <iterator>
#include <boost\config.hpp>
#include <wow64apiset.h>
#include <ktmw32.h>
#include <istream>
#include <wtime.inl>
#include <boost\config\user.hpp>
#include <atliface.h>
#include <ostream>
#include <boost\config\select_compiler_config.hpp>
#include <ios>
#include <boost\config\compiler\visualc.hpp>
#include <winnls.h>
#include <shellapi.h>
#include <shlwapi.h>
#include <xlocnum>
#include <boost\config\select_stdlib_config.hpp>
#include <datetimeapi.h>
#include <shtypes.h>
#include <climits>
#include <boost\config\stdlib\dinkumware.hpp>
#include <winnt.h>
#include <processtopologyapi.h>
#include <cmath>
#include <boost\config\select_platform_config.hpp>
#include <kernelspecs.h>
#include <urlmon.h>
#include <math.h>
#include <boost\config\platform\win32.hpp>
#include <basetsd.h>
#include <pshpack2.h>
#include <xdebug>
#include <libloaderapi.h>
#include <sysinfoapi.h>
#include <atlchecked.h>
#include <winreg.h>
#include <bcrypt.h>
#include <atlexcept.h>
#include <atltrace.h>
#include <oleacc.h>
#include <atlconv.h>
#include <typeinfo>
#include <winsock.h>
#include <atlalloc.h>
#include <nb30.h>
#include <wincrypt.h>
#include <xfacet>
#include <timeapi.h>
#include <securityappcontainer.h>
#include <rpcsal.h>
#include <fibersapi.h>
#include <winver.h>
#include <verrsrc.h>
#include <oleauto.h>
#include <winioctl.h>
#include <servprov.h>
#include <boost\config\suffix.hpp>
#include <realtimeapiset.h>
#include <tvout.h>
#include <cfloat>
#include <mciapi.h>
#include <comcat.h>
#include <float.h>
#include <winuser.h>
#include <crtwrn.h>
#include <cguid.h>
#include <atlsimpcoll.h>
#include <consoleapi.h>
#include <namedpipeapi.h>
#include <ioapiset.h>
#include <cstdio>
#include <stdio.h>
#include <memoryapi.h>
#include <dlgs.h>
#include <winperf.h>
#include <statreg.h>
#include <wtypesbase.h>
#include <winspool.h>
#include <atlwinverapi.h>
#include <prsht.h>
#include <pshpack4.h>
#include <wingdi.h>
#include <rpc.h>
#include <joystickapi.h>
#include <ammintrin.h>
#include <rpcdce.h>
#include <mm3dnow.h>
#include <winerror.h>
#include <winefs.h>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- private variables */

_static
{
    extern std::piecewise_construct_t piecewise_construct; // 0x84CB96
    extern std::allocator_arg_t allocator_arg; // 0x84CB97
}

/* ---------- public code */

Net::SessionInfo::SessionInfo(_DPNMSG_ENUM_HOSTS_RESPONSE const &) // 0x6D7849
{
    mangled_assert("??0SessionInfo@Net@@QAE@ABU_DPNMSG_ENUM_HOSTS_RESPONSE@@@Z");
    todo("implement");
}

/* ---------- private code */
#endif
