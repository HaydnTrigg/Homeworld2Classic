#if 0
/* ---------- headers */

#include "decomp.h"
#include <pshpack2.h>
#include <basetsd.h>
#include <boost\config.hpp>
#include <time.inl>
#include <libloaderapi.h>
#include <boost\config\user.hpp>
#include <sysinfoapi.h>
#include <boost\config\select_compiler_config.hpp>
#include <objidlbase.h>
#include <boost\config\compiler\visualc.hpp>
#include <pch.h>
#include <ncrypt.h>
#include <winreg.h>
#include <boost\config\select_stdlib_config.hpp>
#include <memory\memorylib.h>
#include <boost\config\stdlib\dinkumware.hpp>
#include <malloc.h>
#include <unknwnbase.h>
#include <boost\config\select_platform_config.hpp>
#include <crtdefs.h>
#include <oaidl.h>
#include <winsock.h>
#include <boost\config\platform\win32.hpp>
#include <sal.h>
#include <commdlg.h>
#include <nb30.h>
#include <concurrencysal.h>
#include <intrin.h>
#include <vadefs.h>
#include <setjmp.h>
#include <timeapi.h>
#include <propidl.h>
#include <dpapi.h>
#include <unknwn.h>
#include <debug\ctassert.h>
#include <securityappcontainer.h>
#include <imm.h>
#include <fibersapi.h>
#include "\HICKORY-PCSHIP\Homeworld2Classic\src\Source\FileIO\LogFile.h"
#include <winscard.h>
#include <winver.h>
#include "\HICKORY-PCSHIP\Homeworld2Classic\src\Source\FileIO\fileioexports.h"
#include <new>
#include <wtypes.h>
#include <verrsrc.h>
#include "\HICKORY-PCSHIP\Homeworld2Classic\src\Source\FileIO\ByteStream.h"
#include <exception>
#include <rpcndr.h>
#include <assist\fixedstring.h>
#include <set>
#include <xstddef>
#include <cstddef>
#include <rpcnsip.h>
#include <tvout.h>
#include <realtimeapiset.h>
#include <assist\stlexstring.h>
#include <stddef.h>
#include <yvals.h>
#include <stralign.h>
#include <mciapi.h>
#include <xkeycheck.h>
#include <winuser.h>
#include <boost\detail\workaround.hpp>
#include <use_ansi.h>
#include <debug\ctmessage.h>
#include <consoleapi.h>
#include <algorithm>
#include <winsvc.h>
#include <ioapiset.h>
#include <namedpipeapi.h>
#include <tuple>
#include <xmemory>
#include <boost\config\suffix.hpp>
#include <xmemory0>
#include <winperf.h>
#include <dlgs.h>
#include <memoryapi.h>
#include <cstdlib>
#include <limits>
#include <ymath.h>
#include <bitset>
#include <xlocinfo>
#include <string>
#include <xlocinfo.h>
#include <wingdi.h>
#include <ctype.h>
#include <urlmon.h>
#include <rpc.h>
#include <pshpack4.h>
#include <immintrin.h>
#include <ctime>
#include <compiler\compilerconfig.h>
#include <joystickapi.h>
#include <wmmintrin.h>
#include <time.h>
#include <cstdio>
#include <rpcdce.h>
#include <nmmintrin.h>
#include <stdio.h>
#include <winerror.h>
#include <smmintrin.h>
#include <bcrypt.h>
#include <tmmintrin.h>
#include <type_traits>
#include <string.h>
#include <queue>
#include <pmmintrin.h>
#include <debug\db.h>
#include <lzexpand.h>
#include <ddeml.h>
#include <deque>
#include <share.h>
#include <emmintrin.h>
#include <xmmintrin.h>
#include <wincrypt.h>
#include <mmintrin.h>
#include <reason.h>
#include <stringapiset.h>
#include <timezoneapi.h>
#include <interlockedapi.h>
#include <xutility>
#include <xtgmath.h>
#include <xatomic0.h>
#include <utility>
#include <iosfwd>
#include <crtdbg.h>
#include <rpcsal.h>
#include <securitybaseapi.h>
#include <assist\typemagic.h>
#include <oleauto.h>
#include <vector>
#include <servprov.h>
#include <winioctl.h>
#include <iterator>
#include <istream>
#include <debugapi.h>
#include <boost\shared_ptr.hpp>
#include <ostream>
#include <xrefwrap>
#include <fileapi.h>
#include <boost\throw_exception.hpp>
#include <ios>
#include <cguid.h>
#include <xlocnum>
#include <xdebug>
#include <memory.h>
#include <streambuf>
#include <cderr.h>
#include <boost\detail\shared_count.hpp>
#include <xiosbase>
#include <dde.h>
#include <boost\detail\lightweight_mutex.hpp>
#include <xlocale>
#include <boost\detail\lwm_win32.hpp>
#include <typeinfo>
#include <windows.h>
#include <boost\smart_ptr.hpp>
#include <winapifamily.h>
#include <boost\scoped_ptr.hpp>
#include <winspool.h>
#include <wtypesbase.h>
#include <rpcnterr.h>
#include <threadpoollegacyapiset.h>
#include <sdkddkver.h>
#include <boost\assert.hpp>
#include <prsht.h>
#include <rpcasync.h>
#include <rpcnsi.h>
#include <excpt.h>
#include <assert.h>
#include <boost\checked_delete.hpp>
#include <numeric>
#include <xfacet>
#include <hash_map>
#include <poppack.h>
#include <hash_set>
#include <xhash>
#include <list>
#include <stdexcept>
#include <xstring>
#include <mmiscapi2.h>
#include <winefs.h>
#include <profileapi.h>
#include <xtr1common>
#include <inaddr.h>
#include <synchapi.h>
#include <mmsystem.h>
#include <mmsyscom.h>
#include <processthreadsapi.h>
#include <heapapi.h>
#include <utilapiset.h>
#include <cstring>
#include <eh.h>
#include <winnetwk.h>
#include <pshpack8.h>
#include <memory>
#include <cmath>
#include <wnnc.h>
#include <stdint.h>
#include <math.h>
#include <stdarg.h>
#include <swprintf.inl>
#include <mcx.h>
#include <oleidl.h>
#include <windef.h>
#include <boost\shared_array.hpp>
#include <rpcdcep.h>
#include <bemapiset.h>
#include <minwindef.h>
#include <playsoundapi.h>
#include <specstrings.h>
#include <specstrings_strict.h>
#include <handleapi.h>
#include <specstrings_undef.h>
#include <driverspecs.h>
#include <sdv_driverspecs.h>
#include <climits>
#include <cwchar>
#include <threadpoolapiset.h>
#include <wchar.h>
#include <msxml.h>
#include <objidl.h>
#include <namespaceapi.h>
#include <functional>
#include <ktmtypes.h>
#include <xfunctional>
#include <winsmcrd.h>
#include <ammintrin.h>
#include <mmiscapi.h>
#include <wincon.h>
#include <winbase.h>
#include <mm3dnow.h>
#include <mmeapi.h>
#include <apisetcconv.h>
#include <minwinbase.h>
#include <ime_cmodes.h>
#include <errhandlingapi.h>
#include <cstdarg>
#include <processenv.h>
#include <guiddef.h>
#include "\HICKORY-PCSHIP\Homeworld2Classic\src\Source\FileIO\platform.h"
#include <stdlib.h>
#include <limits.h>
#include <jobapi.h>
#include <cfloat>
#include <stack>
#include <float.h>
#include <apiset.h>
#include <crtwrn.h>
#include <ole2.h>
#include <wtime.inl>
#include <objbase.h>
#include <pshpack1.h>
#include <systemtopologyapi.h>
#include <locale.h>
#include <combaseapi.h>
#include <wow64apiset.h>
#include <map>
#include <xtree>
#include <shellapi.h>
#include <winnls.h>
#include "\HICKORY-PCSHIP\Homeworld2Classic\src\Source\FileIO\FilePath.h"
#include <system_error>
#include <datetimeapi.h>
#include <cerrno>
#include <processtopologyapi.h>
#include <winnt.h>
#include <errno.h>
#include <kernelspecs.h>
#include <boost\scoped_array.hpp>

/* ---------- constants */

/* ---------- definitions */

typedef tagPARAMDESCEX *LPPARAMDESCEX;
typedef tagCALLCONV CALLCONV;
typedef tagBINDPTR BINDPTR;
typedef tagTYPEKIND TYPEKIND;
typedef tagFUNCKIND FUNCKIND;
typedef tagPARAMDESC PARAMDESC;
typedef tagELEMDESC ELEMDESC;
typedef wchar_t **SNB;
typedef tagVARIANT VARIANTARG;
typedef tagSAFEARRAYBOUND SAFEARRAYBOUND;
typedef tagDESCKIND DESCKIND;
typedef tagTYPEDESC TYPEDESC;
typedef tagVARKIND VARKIND;
typedef wchar_t *LPOLESTR;
typedef unsigned long ULONG;
typedef _GUID IID;
typedef long long LONGLONG;
typedef long LONG_PTR;
typedef unsigned short PROPVAR_PAD3;
typedef tagFUNCDESC FUNCDESC;
typedef tagAR_STATE AR_STATE;
typedef unsigned long SIZE_T;
typedef unsigned long HREFTYPE;
typedef tagCAUB CAUB;
typedef wchar_t OLECHAR;
typedef tagEXCEPINFO EXCEPINFO;
typedef unsigned long long ULONGLONG;
typedef tagVARDESC VARDESC;
typedef wchar_t const *LPCOLESTR;
typedef char *LPSTR;
typedef long MEMBERID;
typedef double DOUBLE;
typedef tagCY CY;
typedef tagDEC DECIMAL;
typedef tagSYSKIND SYSKIND;
typedef tagCAUL CAUL;
typedef tagBSTRBLOB BSTRBLOB;
typedef __int32 BOOL;
typedef short VARIANT_BOOL;
typedef unsigned long LCID;
typedef tagPROPVARIANT PROPVARIANT;
typedef tagCAPROPVARIANT CAPROPVARIANT;
typedef _SYSTEMTIME SYSTEMTIME;
typedef tagCADATE CADATE;
typedef short *PSHORT;
typedef char *PCHAR;
typedef tagIDLDESC IDLDESC;
typedef _TP_CALLBACK_INSTANCE *PTP_CALLBACK_INSTANCE;
typedef wchar_t const *PCUWSTR;
typedef tagSAFEARRAY *LPSAFEARRAY;
typedef tagTLIBATTR TLIBATTR;
typedef _LARGE_INTEGER LARGE_INTEGER;
typedef unsigned short VARTYPE;
typedef unsigned long TP_VERSION;
typedef tagCLIPDATA CLIPDATA;
typedef tagTYPEATTR TYPEATTR;
typedef long DISPID;
typedef unsigned short USHORT;
typedef void *PVOID;
typedef _TP_CALLBACK_ENVIRON_V3 TP_CALLBACK_ENVIRON_V3;
typedef _TP_CALLBACK_PRIORITY TP_CALLBACK_PRIORITY;
typedef tagCAL CAL;
typedef _ULARGE_INTEGER ULARGE_INTEGER;
typedef tagCASCODE CASCODE;
typedef unsigned char UCHAR;
typedef tagCAFILETIME CAFILETIME;
typedef tagDISPPARAMS DISPPARAMS;
typedef tagVARIANT *LPVARIANT;
typedef unsigned long DWORD;
typedef tagINVOKEKIND INVOKEKIND;
typedef tagSTATSTG STATSTG;
typedef unsigned short WORD;
typedef unsigned char BYTE;
typedef tagCAFLT CAFLT;
typedef unsigned short PROPVAR_PAD1;
typedef tagCALPSTR CALPSTR;
typedef _TP_POOL *PTP_POOL;
typedef unsigned long long DWORD64;
typedef wchar_t WCHAR;
typedef tagSAFEARRAY SAFEARRAY;
typedef tagCAUI CAUI;
typedef short SHORT;
typedef long LONG;
typedef long *PLONG;
typedef float FLOAT;
typedef tagCALPWSTR CALPWSTR;
typedef wchar_t *PUWSTR;
typedef tagCACY CACY;
typedef long long LONG64;
typedef double DATE;
typedef wchar_t *LPWSTR;
typedef tagVersionedStream *LPVERSIONEDSTREAM;
typedef long long *PLONG64;
typedef tagCABSTRBLOB CABSTRBLOB;
typedef tagCAH CAH;
typedef _FILETIME FILETIME;
typedef tagVARIANT VARIANT;
typedef long SCODE;
typedef wchar_t *BSTR;
typedef __int32 INT;
typedef void (*PTP_SIMPLE_CALLBACK)(_TP_CALLBACK_INSTANCE *, void *);
typedef tagCACLIPDATA CACLIPDATA;
typedef void (*PTP_CLEANUP_GROUP_CANCEL_CALLBACK)(void *, void *);
typedef tagCADBL CADBL;
typedef tagCAUH CAUH;
typedef _GUID GUID;
typedef _TP_CALLBACK_ENVIRON_V3 *PTP_CALLBACK_ENVIRON;
typedef _TP_CLEANUP_GROUP *PTP_CLEANUP_GROUP;
typedef tagCACLSID CACLSID;
typedef char CHAR;
typedef tagCAC CAC;
typedef unsigned long ULONG_PTR;
typedef tagBLOB BLOB;
typedef _SYSTEMTIME *LPSYSTEMTIME;
typedef tagCAI CAI;
typedef _GUID CLSID;
typedef unsigned short PROPVAR_PAD2;
typedef long HRESULT;
typedef unsigned __int32 UINT;
typedef tagCABOOL CABOOL;
typedef tagCABSTR CABSTR;

/* ---------- prototypes */

/* ---------- globals */

/* ---------- private variables */

_static
{
    extern std::_Ignore ignore; // 0x1001F86D
    extern std::_Tuple_alloc_t _Tuple_alloc; // 0x1001F86C
    extern std::piecewise_construct_t piecewise_construct; // 0x1001F86F
    extern std::allocator_arg_t allocator_arg; // 0x1001F86E
}

/* ---------- public code */

_extern _sub_10012966(LogFile *const);
LogFile::LogFile() // 0x10012966
{
    mangled_assert("??0LogFile@@QAE@XZ");
    todo("implement");
    _sub_10012966(this);
}

_extern void _sub_1001296C(LogFile *const);
LogFile::~LogFile() // 0x1001296C
{
    mangled_assert("??1LogFile@@QAE@XZ");
    todo("implement");
    _sub_1001296C(this);
}

_extern LogFile &_sub_100129A6(LogFile *const, LogFile const &);
_inline LogFile &LogFile::operator=(LogFile const &) // 0x100129A6
{
    mangled_assert("??4LogFile@@QAEAAV0@ABV0@@Z");
    compiler_generated();
    todo("implement");
    LogFile & __result = _sub_100129A6(this, arg);
    return __result;
}

_extern bool _sub_100129E2(LogFile *const, char const *, char const *);
bool LogFile::Create(char const *, char const *) // 0x100129E2
{
    mangled_assert("?Create@LogFile@@QAE_NPBD0@Z");
    todo("implement");
    bool __result = _sub_100129E2(this, arg, arg);
    return __result;
}

_extern bool _sub_10012B17(LogFile *const, char const *);
bool LogFile::CreateWithName(char const *) // 0x10012B17
{
    mangled_assert("?CreateWithName@LogFile@@QAE_NPBD@Z");
    todo("implement");
    bool __result = _sub_10012B17(this, arg);
    return __result;
}

_extern void _sub_100129CE(LogFile *const);
void LogFile::Close() // 0x100129CE
{
    mangled_assert("?Close@LogFile@@QAEXXZ");
    todo("implement");
    _sub_100129CE(this);
}

_extern _sub_1001293F(LogFile *const, LogFile const &);
_inline LogFile::LogFile(LogFile const &) // 0x1001293F
{
    mangled_assert("??0LogFile@@QAE@ABV0@@Z");
    compiler_generated();
    todo("implement");
    _sub_1001293F(this, arg);
}

_extern void _sub_10012CE5(LogFile *const, char const *);
void LogFile::puts(char const *) // 0x10012CE5
{
    mangled_assert("?puts@LogFile@@QAEXPBD@Z");
    todo("implement");
    _sub_10012CE5(this, arg);
}

_extern void _sub_10012CBE(LogFile *const, char const *, ...);
void LogFile::printf(char const *format, ...) // 0x10012CBE
{
    mangled_assert("?printf@LogFile@@QAAXPBDZZ");
    todo("implement");
    _sub_10012CBE(this, format, arg);
}

_extern void _sub_10012C9E(LogFile *const, char const *);
void LogFile::WriteString(char const *) // 0x10012C9E
{
    mangled_assert("?WriteString@LogFile@@AAEXPBD@Z");
    todo("implement");
    _sub_10012C9E(this, arg);
}

_extern bool _sub_10012BAF(LogFile const *const);
bool LogFile::IsOpened() const // 0x10012BAF
{
    mangled_assert("?IsOpened@LogFile@@QBE_NXZ");
    todo("implement");
    bool __result = _sub_10012BAF(this);
    return __result;
}

_extern void _sub_10012BE9(char *, char const *, char const *);
void LogFile::MakeFilename(char *fname, char const *name, char const *ext) // 0x10012BE9
{
    mangled_assert("?MakeFilename@LogFile@@SGXPADPBD1@Z");
    todo("implement");
    _sub_10012BE9(fname, name, ext);
}

_extern void _sub_10012BB7(char *);
void LogFile::MakeFilename(char *s) // 0x10012BB7
{
    mangled_assert("?MakeFilename@LogFile@@SGXPAD@Z");
    todo("implement");
    _sub_10012BB7(s);
}

/* ---------- private code */
#endif
