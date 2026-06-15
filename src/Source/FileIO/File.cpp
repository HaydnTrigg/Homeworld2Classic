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
#include <direct.h>
#include <processenv.h>
#include "\HICKORY-PCSHIP\Homeworld2Classic\src\Source\FileIO\platform.h"
#include <jobapi.h>
#include <guiddef.h>
#include "\HICKORY-PCSHIP\Homeworld2Classic\src\Source\FileIO\fileioexports.h"
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

typedef HINSTANCE__ *HINSTANCE;
typedef void *LPVOID;
typedef char const *LPCSTR;
typedef unsigned long *LPDWORD;
typedef _SECURITY_ATTRIBUTES *LPSECURITY_ATTRIBUTES;
typedef HINSTANCE__ *HMODULE;
typedef void *HANDLE;
typedef void const *LPCVOID;
typedef _OVERLAPPED *LPOVERLAPPED;

/* ---------- prototypes */

extern bool Plat::File::Setup(char const *workingdir);
extern void Plat::File::Shutdown();
extern char const *Plat::File::GetPathExe();
extern char const *Plat::File::GetPathDrivers();
extern char const *Plat::File::GetPathCWD();
extern std::basic_string<char,std::char_traits<char>,std::allocator<char> > Plat::File::ConvertToFilename(char const *s);
extern unsigned long Plat::File::GetFileAttr(char const *fname);
extern unsigned long Plat::File::FileOpen(char const *fname, Plat::File::FileOpenMode mode);
extern void Plat::File::FileClose(unsigned long h);
extern unsigned long Plat::File::FileGetPos(unsigned long h);
extern bool Plat::File::FileSetPos(unsigned long h, unsigned long pos);
extern unsigned long Plat::File::FileGetLen(unsigned long h);
extern unsigned long Plat::File::FileWrite(unsigned long h, void const *data, unsigned long len);
extern unsigned long Plat::File::FileRead(unsigned long h, void *data, unsigned long len);
extern void Plat::File::FileFlush(unsigned long h);

/* ---------- globals */

extern char s_dirDrivers[260]; // 0x1001F520

/* ---------- private variables */

_static
{
    extern std::_Ignore ignore; // 0x1001F625
    extern std::_Tuple_alloc_t _Tuple_alloc; // 0x1001F624
    extern std::piecewise_construct_t piecewise_construct; // 0x1001F627
    extern char s_dirCWD[260]; // 0x1001F628
    extern char s_dirExe[260]; // 0x1001F730
    extern std::allocator_arg_t allocator_arg; // 0x1001F626
}

/* ---------- public code */

bool Plat::File::Setup(char const *workingdir) // 0x1000A325
{
    mangled_assert("?Setup@File@Plat@@YG_NPBD@Z");
    todo("implement");
}

void Plat::File::Shutdown() // 0x1000A407
{
    mangled_assert("?Shutdown@File@Plat@@YGXXZ");
    todo("implement");
}

char const *Plat::File::GetPathExe() // 0x1000A31F
{
    mangled_assert("?GetPathExe@File@Plat@@YGPBDXZ");
    todo("implement");
}

char const *Plat::File::GetPathDrivers() // 0x1000A319
{
    mangled_assert("?GetPathDrivers@File@Plat@@YGPBDXZ");
    todo("implement");
}

char const *Plat::File::GetPathCWD() // 0x1000A313
{
    mangled_assert("?GetPathCWD@File@Plat@@YGPBDXZ");
    todo("implement");
}

std::basic_string<char,std::char_traits<char>,std::allocator<char> > Plat::File::ConvertToFilename(char const *s) // 0x1000A0F5
{
    mangled_assert("?ConvertToFilename@File@Plat@@YG?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PBD@Z");
    todo("implement");
}

unsigned long Plat::File::GetFileAttr(char const *fname) // 0x1000A2E0
{
    mangled_assert("?GetFileAttr@File@Plat@@YGKPBD@Z");
    todo("implement");
}

unsigned long Plat::File::FileOpen(char const *fname, Plat::File::FileOpenMode mode) // 0x1000A1C7
{
    mangled_assert("?FileOpen@File@Plat@@YGKPBDW4FileOpenMode@12@@Z");
    todo("implement");
}

void Plat::File::FileClose(unsigned long h) // 0x1000A15F
{
    mangled_assert("?FileClose@File@Plat@@YGXK@Z");
    todo("implement");
}

unsigned long Plat::File::FileGetPos(unsigned long h) // 0x1000A1A1
{
    mangled_assert("?FileGetPos@File@Plat@@YGKK@Z");
    todo("implement");
}

bool Plat::File::FileSetPos(unsigned long h, unsigned long pos) // 0x1000A27C
{
    mangled_assert("?FileSetPos@File@Plat@@YG_NKK@Z");
    todo("implement");
}

unsigned long Plat::File::FileGetLen(unsigned long h) // 0x1000A17F
{
    mangled_assert("?FileGetLen@File@Plat@@YGKK@Z");
    todo("implement");
}

unsigned long Plat::File::FileWrite(unsigned long h, void const *data, unsigned long len) // 0x1000A2A2
{
    mangled_assert("?FileWrite@File@Plat@@YGKKPBXK@Z");
    todo("implement");
}

unsigned long Plat::File::FileRead(unsigned long h, void *data, unsigned long len) // 0x1000A23E
{
    mangled_assert("?FileRead@File@Plat@@YGKKPAXK@Z");
    todo("implement");
}

void Plat::File::FileFlush(unsigned long h) // 0x1000A16F
{
    mangled_assert("?FileFlush@File@Plat@@YGXK@Z");
    todo("implement");
}

/* ---------- private code */
#endif
