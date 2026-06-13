#if 0
/* ---------- headers */

#include "decomp.h"
#include <time.inl>
#include <pch.h>
#include <winnetwk.h>
#include <pshpack8.h>
#include <memory\memorylib.h>
#include <wnnc.h>
#include <malloc.h>
#include <crtdefs.h>
#include <mcx.h>
#include <oleidl.h>
#include <sal.h>
#include <rpcdcep.h>
#include <bemapiset.h>
#include <concurrencysal.h>
#include <playsoundapi.h>
#include <windef.h>
#include <vadefs.h>
#include <minwindef.h>
#include <handleapi.h>
#include <specstrings.h>
#include <specstrings_strict.h>
#include <specstrings_undef.h>
#include <intrin.h>
#include <driverspecs.h>
#include <setjmp.h>
#include <debug\ctmessage.h>
#include <threadpoolapiset.h>
#include <sdv_driverspecs.h>
#include <debug\ctassert.h>
#include <msxml.h>
#include <objidl.h>
#include <namespaceapi.h>
#include <hash_map>
#include <new>
#include <ktmtypes.h>
#include <xhash>
#include <exception>
#include <list>
#include <xstddef>
#include <cstddef>
#include <winsmcrd.h>
#include <stddef.h>
#include <yvals.h>
#include <xkeycheck.h>
#include <mmiscapi.h>
#include <wincon.h>
#include <winbase.h>
#include <use_ansi.h>
#include <mmeapi.h>
#include <apisetcconv.h>
#include <minwinbase.h>
#include <xlocinfo>
#include <stack>
#include <xlocinfo.h>
#include <ctype.h>
#include <debug\dbdefines.h>
#include <stl.h>
#include <ime_cmodes.h>
#include <errhandlingapi.h>
#include <algorithm>
#include <processenv.h>
#include <vector>
#include <xmemory>
#include <map>
#include <xmemory0>
#include <xtree>
#include <cstdlib>
#include <jobapi.h>
#include <guiddef.h>
#include <limits>
#include <ymath.h>
#include <apiset.h>
#include <share.h>
#include <ole2.h>
#include <compilerconfig.h>
#include <objbase.h>
#include <pshpack1.h>
#include <systemtopologyapi.h>
#include <ctime>
#include <cstdio>
#include <combaseapi.h>
#include <wow64apiset.h>
#include <time.h>
#include <stdio.h>
#include <immintrin.h>
#include <string.h>
#include <shellapi.h>
#include <winnls.h>
#include <wmmintrin.h>
#include <datetimeapi.h>
#include <nmmintrin.h>
#include <debug\db.h>
#include <processtopologyapi.h>
#include <smmintrin.h>
#include <tmmintrin.h>
#include <type_traits>
#include <winnt.h>
#include <pshpack2.h>
#include <hash_set>
#include <pmmintrin.h>
#include <libloaderapi.h>
#include <kernelspecs.h>
#include <emmintrin.h>
#include <sysinfoapi.h>
#include <basetsd.h>
#include <xmmintrin.h>
#include <xtgmath.h>
#include <objidlbase.h>
#include <mmintrin.h>
#include <ncrypt.h>
#include <winreg.h>
#include <xutility>
#include <utility>
#include <unknwnbase.h>
#include <xatomic0.h>
#include <iosfwd>
#include <oaidl.h>
#include <winsock.h>
#include <cstring>
#include <commdlg.h>
#include <nb30.h>
#include <xdebug>
#include <crtdbg.h>
#include <timeapi.h>
#include <propidl.h>
#include <dpapi.h>
#include <set>
#include <typeinfo>
#include <unknwn.h>
#include <securityappcontainer.h>
#include <imm.h>
#include <fibersapi.h>
#include <memory.h>
#include <xfacet>
#include <xrefwrap>
#include <winscard.h>
#include <winver.h>
#include <wtypes.h>
#include <verrsrc.h>
#include <rpcndr.h>
#include <rpcnsip.h>
#include <tvout.h>
#include <realtimeapiset.h>
#include <stralign.h>
#include <mciapi.h>
#include <winuser.h>
#include <ZLib\Compression.h>
#include <ZLib\zlibexports.h>
#include <consoleapi.h>
#include <winsvc.h>
#include <ioapiset.h>
#include <namedpipeapi.h>
#include <bitset>
#include <winperf.h>
#include <dlgs.h>
#include <memoryapi.h>
#include <string>
#include <iterator>
#include <istream>
#include <xtr1common>
#include <ostream>
#include <queue>
#include <ios>
#include <wingdi.h>
#include <deque>
#include <xlocnum>
#include <urlmon.h>
#include <rpc.h>
#include <streambuf>
#include <pshpack4.h>
#include <xiosbase>
#include <joystickapi.h>
#include <xlocale>
#include <rpcdce.h>
#include <stdexcept>
#include <winerror.h>
#include <xstring>
#include <bcrypt.h>
#include <cstdarg>
#include <eh.h>
#include <stdarg.h>
#include <lzexpand.h>
#include <ddeml.h>
#include <cmath>
#include <math.h>
#include <swprintf.inl>
#include <wincrypt.h>
#include <reason.h>
#include <stringapiset.h>
#include <timezoneapi.h>
#include <interlockedapi.h>
#include <rpcsal.h>
#include <securitybaseapi.h>
#include <climits>
#include <cwchar>
#include <oleauto.h>
#include <wchar.h>
#include <servprov.h>
#include <winioctl.h>
#include <ZLib\CompressionMem.h>
#include <debugapi.h>
#include <fileapi.h>
#include <cguid.h>
#include <numeric>
#include <cderr.h>
#include <dde.h>
#include <ammintrin.h>
#include <mm3dnow.h>
#include <ZLib\Src\zlib.h>
#include <winspool.h>
#include <wtypesbase.h>
#include <rpcnterr.h>
#include <threadpoollegacyapiset.h>
#include <ZLib\Src\zconf.h>
#include <locale.h>
#include <prsht.h>
#include <rpcasync.h>
#include <rpcnsi.h>
#include <windows.h>
#include <stdlib.h>
#include <winapifamily.h>
#include <limits.h>
#include <poppack.h>
#include <sdkddkver.h>
#include <excpt.h>
#include <system_error>
#include <cfloat>
#include <cerrno>
#include <float.h>
#include <errno.h>
#include <crtwrn.h>
#include <wtime.inl>
#include <mmiscapi2.h>
#include <winefs.h>
#include <profileapi.h>
#include <inaddr.h>
#include <synchapi.h>
#include <mmsystem.h>
#include <mmsyscom.h>
#include <processthreadsapi.h>
#include <heapapi.h>
#include <utilapiset.h>

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
typedef unsigned char Byte;
typedef tagSYSKIND SYSKIND;
typedef tagCAUL CAUL;
typedef tagBSTRBLOB BSTRBLOB;
typedef __int32 BOOL;
typedef unsigned char Bytef;
typedef z_stream_s *z_streamp;
typedef short VARIANT_BOOL;
typedef unsigned long LCID;
typedef tagPROPVARIANT PROPVARIANT;
typedef tagCAPROPVARIANT CAPROPVARIANT;
typedef z_stream_s z_stream;
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
typedef void *voidpf;
typedef unsigned short USHORT;
typedef void *PVOID;
typedef _TP_CALLBACK_ENVIRON_V3 TP_CALLBACK_ENVIRON_V3;
typedef _TP_CALLBACK_PRIORITY TP_CALLBACK_PRIORITY;
typedef tagCAL CAL;
typedef _ULARGE_INTEGER ULARGE_INTEGER;
typedef tagCASCODE CASCODE;
typedef void (*free_func)(void *, void *);
typedef void *(*alloc_func)(void *, unsigned __int32, unsigned __int32);
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
typedef unsigned __int32 uInt;
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
typedef unsigned long uLong;
typedef _TP_CALLBACK_ENVIRON_V3 *PTP_CALLBACK_ENVIRON;
typedef _TP_CLEANUP_GROUP *PTP_CLEANUP_GROUP;
typedef tagCACLSID CACLSID;
typedef char CHAR;
typedef tagCAC CAC;
typedef unsigned long ULONG_PTR;
typedef tagBLOB BLOB;
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
    extern std::piecewise_construct_t piecewise_construct; // 0x1000D2AF
    extern std::allocator_arg_t allocator_arg; // 0x1000D2AE
}

/* ---------- public code */

_extern _sub_100073C6(CompressionStream *const, CompressionStream::Mode);
CompressionStream::CompressionStream(CompressionStream::Mode) // 0x100073C6
{
    mangled_assert("??0CompressionStream@@QAE@W4Mode@0@@Z");
    todo("implement");
    _sub_100073C6(this, arg);
}

_extern void _sub_10007438(CompressionStream *const);
CompressionStream::~CompressionStream() // 0x10007438
{
    mangled_assert("??1CompressionStream@@QAE@XZ");
    todo("implement");
    _sub_10007438(this);
}

_extern void _sub_10007531(CompressionStream *const, void const *, unsigned __int32, bool);
void CompressionStream::SetCompressInput(void const *, unsigned __int32, bool) // 0x10007531
{
    mangled_assert("?SetCompressInput@CompressionStream@@QAEXPBXI_N@Z");
    todo("implement");
    _sub_10007531(this, arg, arg, arg);
}

_extern unsigned long _sub_10007463(CompressionStream *const, void *, unsigned long);
unsigned long CompressionStream::ReadCompressed(void *, unsigned long) // 0x10007463
{
    mangled_assert("?ReadCompressed@CompressionStream@@QAEKPAXK@Z");
    todo("implement");
    unsigned long __result = _sub_10007463(this, arg, arg);
    return __result;
}

_extern void _sub_10007555(CompressionStream *const, void const *, unsigned __int32);
void CompressionStream::SetExpandInput(void const *, unsigned __int32) // 0x10007555
{
    mangled_assert("?SetExpandInput@CompressionStream@@QAEXPBXI@Z");
    todo("implement");
    _sub_10007555(this, arg, arg);
}

_extern unsigned long _sub_100074CF(CompressionStream *const, void *, unsigned long);
unsigned long CompressionStream::ReadExpanded(void *, unsigned long) // 0x100074CF
{
    mangled_assert("?ReadExpanded@CompressionStream@@QAEKPAXK@Z");
    todo("implement");
    unsigned long __result = _sub_100074CF(this, arg, arg);
    return __result;
}

/* ---------- private code */
#endif
