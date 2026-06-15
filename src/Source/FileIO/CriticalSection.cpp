#if 0
/* ---------- headers */

#include "decomp.h"
#include <threadpoolapiset.h>
#include <sdv_driverspecs.h>
#include <boost\config.hpp>
#include <time.inl>
#include <boost\config\user.hpp>
#include <msxml.h>
#include <objidl.h>
#include <boost\config\select_compiler_config.hpp>
#include <namespaceapi.h>
#include <boost\config\compiler\visualc.hpp>
#include <pch.h>
#include <ktmtypes.h>
#include <boost\config\select_stdlib_config.hpp>
#include <memory\memorylib.h>
#include <boost\config\stdlib\dinkumware.hpp>
#include <malloc.h>
#include <winsmcrd.h>
#include <boost\config\select_platform_config.hpp>
#include <crtdefs.h>
#include <boost\config\platform\win32.hpp>
#include <sal.h>
#include <mmiscapi.h>
#include <wincon.h>
#include <winbase.h>
#include <concurrencysal.h>
#include <mmeapi.h>
#include <apisetcconv.h>
#include <intrin.h>
#include <vadefs.h>
#include <minwinbase.h>
#include <setjmp.h>
#include <debug\ctassert.h>
#include <ime_cmodes.h>
#include <errhandlingapi.h>
#include <processenv.h>
#include "src\Source\FileIO\platform.h"
#include <jobapi.h>
#include <guiddef.h>
#include "src\Source\FileIO\fileioexports.h"
#include <new>
#include <exception>
#include <apiset.h>
#include <set>
#include <xstddef>
#include <cstddef>
#include <ole2.h>
#include <stddef.h>
#include <yvals.h>
#include <objbase.h>
#include <pshpack1.h>
#include <systemtopologyapi.h>
#include <xkeycheck.h>
#include <combaseapi.h>
#include <wow64apiset.h>
#include <boost\detail\workaround.hpp>
#include <use_ansi.h>
#include <debug\ctmessage.h>
#include <shellapi.h>
#include <winnls.h>
#include <algorithm>
#include <datetimeapi.h>
#include <tuple>
#include <xmemory>
#include <processtopologyapi.h>
#include <boost\config\suffix.hpp>
#include <xmemory0>
#include <cstdlib>
#include <winnt.h>
#include <pshpack2.h>
#include <limits>
#include <libloaderapi.h>
#include <kernelspecs.h>
#include <ymath.h>
#include <sysinfoapi.h>
#include <basetsd.h>
#include <bitset>
#include <xlocinfo>
#include <objidlbase.h>
#include <string>
#include <xlocinfo.h>
#include <ncrypt.h>
#include <winreg.h>
#include <ctype.h>
#include <unknwnbase.h>
#include <immintrin.h>
#include <ctime>
#include <compiler\compilerconfig.h>
#include <oaidl.h>
#include <winsock.h>
#include <wmmintrin.h>
#include <time.h>
#include <cstdio>
#include <commdlg.h>
#include <nb30.h>
#include <nmmintrin.h>
#include <stdio.h>
#include <smmintrin.h>
#include <tmmintrin.h>
#include <type_traits>
#include <string.h>
#include <timeapi.h>
#include <queue>
#include <pmmintrin.h>
#include <debug\db.h>
#include <propidl.h>
#include <dpapi.h>
#include <deque>
#include <share.h>
#include <emmintrin.h>
#include <unknwn.h>
#include <xmmintrin.h>
#include <securityappcontainer.h>
#include <mmintrin.h>
#include <imm.h>
#include <fibersapi.h>
#include <xutility>
#include <xtgmath.h>
#include <xatomic0.h>
#include <utility>
#include <winscard.h>
#include <winver.h>
#include <iosfwd>
#include <wtypes.h>
#include <verrsrc.h>
#include <crtdbg.h>
#include <rpcndr.h>
#include <rpcnsip.h>
#include <tvout.h>
#include <realtimeapiset.h>
#include <stralign.h>
#include <mciapi.h>
#include <winuser.h>
#include <vector>
#include <consoleapi.h>
#include <iterator>
#include <winsvc.h>
#include <ioapiset.h>
#include <namedpipeapi.h>
#include <istream>
#include <boost\shared_ptr.hpp>
#include <ostream>
#include <xrefwrap>
#include <winperf.h>
#include <dlgs.h>
#include <memoryapi.h>
#include <boost\throw_exception.hpp>
#include <ios>
#include <xlocnum>
#include <xdebug>
#include <memory.h>
#include <streambuf>
#include <boost\detail\shared_count.hpp>
#include <xiosbase>
#include <boost\detail\lightweight_mutex.hpp>
#include <xlocale>
#include <wingdi.h>
#include <boost\detail\lwm_win32.hpp>
#include <typeinfo>
#include <urlmon.h>
#include <rpc.h>
#include <boost\smart_ptr.hpp>
#include <pshpack4.h>
#include <boost\scoped_ptr.hpp>
#include <joystickapi.h>
#include <boost\assert.hpp>
#include <rpcdce.h>
#include <assert.h>
#include <winerror.h>
#include <boost\checked_delete.hpp>
#include <numeric>
#include <xfacet>
#include <hash_map>
#include <bcrypt.h>
#include <hash_set>
#include <xhash>
#include <list>
#include <lzexpand.h>
#include <ddeml.h>
#include <stdexcept>
#include <xstring>
#include <wincrypt.h>
#include <reason.h>
#include <stringapiset.h>
#include <timezoneapi.h>
#include <interlockedapi.h>
#include <xtr1common>
#include <rpcsal.h>
#include <securitybaseapi.h>
#include <oleauto.h>
#include <cstring>
#include <eh.h>
#include <servprov.h>
#include <winioctl.h>
#include <memory>
#include <cmath>
#include <stdint.h>
#include <math.h>
#include <debugapi.h>
#include <swprintf.inl>
#include <fileapi.h>
#include <boost\shared_array.hpp>
#include <cguid.h>
#include <cderr.h>
#include <dde.h>
#include <climits>
#include <cwchar>
#include <winspool.h>
#include <wtypesbase.h>
#include <rpcnterr.h>
#include <threadpoollegacyapiset.h>
#include <windows.h>
#include <wchar.h>
#include <prsht.h>
#include <rpcasync.h>
#include <rpcnsi.h>
#include <winapifamily.h>
#include <sdkddkver.h>
#include <poppack.h>
#include <excpt.h>
#include <functional>
#include <xfunctional>
#include <ammintrin.h>
#include <mmiscapi2.h>
#include <mm3dnow.h>
#include <winefs.h>
#include <profileapi.h>
#include <inaddr.h>
#include <synchapi.h>
#include <mmsystem.h>
#include <mmsyscom.h>
#include <processthreadsapi.h>
#include <heapapi.h>
#include <utilapiset.h>
#include <stdlib.h>
#include <limits.h>
#include <cfloat>
#include <winnetwk.h>
#include <pshpack8.h>
#include <stack>
#include <float.h>
#include <wnnc.h>
#include <crtwrn.h>
#include <wtime.inl>
#include <mcx.h>
#include <oleidl.h>
#include <locale.h>
#include <rpcdcep.h>
#include <bemapiset.h>
#include <stdarg.h>
#include <playsoundapi.h>
#include <windef.h>
#include <map>
#include <minwindef.h>
#include <xtree>
#include <handleapi.h>
#include <specstrings.h>
#include <system_error>
#include <specstrings_strict.h>
#include <cerrno>
#include <specstrings_undef.h>
#include <errno.h>
#include <driverspecs.h>
#include <boost\scoped_array.hpp>

/* ---------- constants */

/* ---------- definitions */

typedef _RTL_CRITICAL_SECTION *PRTL_CRITICAL_SECTION;
typedef _RTL_CRITICAL_SECTION *LPCRITICAL_SECTION;
typedef _LIST_ENTRY LIST_ENTRY;
typedef _RTL_CRITICAL_SECTION RTL_CRITICAL_SECTION;
typedef _RTL_CRITICAL_SECTION_DEBUG *PRTL_CRITICAL_SECTION_DEBUG;
typedef _RTL_CRITICAL_SECTION CRITICAL_SECTION;

/* ---------- prototypes */

/* ---------- globals */

/* ---------- private variables */

_static
{
    extern std::_Ignore ignore; // 0x1001F512
    extern std::_Tuple_alloc_t _Tuple_alloc; // 0x1001F511
    extern std::piecewise_construct_t piecewise_construct; // 0x1001F514
    extern std::allocator_arg_t allocator_arg; // 0x1001F513
}

/* ---------- public code */

Plat::CriticalSection::CriticalSection() // 0x10009D4F
{
    mangled_assert("??0CriticalSection@Plat@@QAE@XZ");
    todo("implement");
}

Plat::CriticalSection::~CriticalSection() // 0x10009D6B
{
    mangled_assert("??1CriticalSection@Plat@@QAE@XZ");
    todo("implement");
}

void Plat::CriticalSection::Enter() // 0x10009D7E
{
    mangled_assert("?Enter@CriticalSection@Plat@@QAEXXZ");
    todo("implement");
}

void Plat::CriticalSection::Leave() // 0x10009D87
{
    mangled_assert("?Leave@CriticalSection@Plat@@QAEXXZ");
    todo("implement");
}

/* ---------- private code */
#endif
