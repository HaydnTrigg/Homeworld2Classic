#if 0
/* ---------- headers */

#include "decomp.h"
#include <winspool.h>
#include <wtypesbase.h>
#include <rpcnterr.h>
#include <threadpoollegacyapiset.h>
#include <prsht.h>
#include <rpcasync.h>
#include <rpcnsi.h>
#include <windows.h>
#include <winapifamily.h>
#include <poppack.h>
#include <sdkddkver.h>
#include <Debug\console.h>
#include <cstdlib>
#include <excpt.h>
#include <Debug\filter.h>
#include <yvals.h>
#include <xkeycheck.h>
#include <debug\db.h>
#include <crtdefs.h>
#include <sal.h>
#include <mmiscapi2.h>
#include <concurrencysal.h>
#include <winefs.h>
#include <profileapi.h>
#include <vadefs.h>
#include <inaddr.h>
#include <synchapi.h>
#include <stdlib.h>
#include <mmsystem.h>
#include <limits.h>
#include <mmsyscom.h>
#include <processthreadsapi.h>
#include <heapapi.h>
#include <utilapiset.h>
#include <winnetwk.h>
#include <pshpack8.h>
#include <wnnc.h>
#include <platform\namedinterface.h>
#include <wtime.inl>
#include <mcx.h>
#include <oleidl.h>
#include <rpcdcep.h>
#include <bemapiset.h>
#include <playsoundapi.h>
#include <windef.h>
#include <ammintrin.h>
#include <minwindef.h>
#include <mm3dnow.h>
#include <handleapi.h>
#include <specstrings.h>
#include <specstrings_strict.h>
#include <specstrings_undef.h>
#include <driverspecs.h>
#include <threadpoolapiset.h>
#include <sdv_driverspecs.h>
#include <eh.h>
#include <time.inl>
#include <msxml.h>
#include <objidl.h>
#include <namespaceapi.h>
#include <cstdarg>
#include <ktmtypes.h>
#include <stdarg.h>
#include <cstring>
#include <winsmcrd.h>
#include <new>
#include <string.h>
#include <swprintf.inl>
#include <mmiscapi.h>
#include <wincon.h>
#include <winbase.h>
#include <cfloat>
#include <mmeapi.h>
#include <apisetcconv.h>
#include <float.h>
#include <minwinbase.h>
#include <crtwrn.h>
#include <ime_cmodes.h>
#include <errhandlingapi.h>
#include <processenv.h>
#include <jobapi.h>
#include <guiddef.h>
#include <locale.h>
#include <apiset.h>
#include <ole2.h>
#include <objbase.h>
#include <pshpack1.h>
#include <systemtopologyapi.h>
#include <system_error>
#include <combaseapi.h>
#include <wow64apiset.h>
#include <cerrno>
#include <errno.h>
#include <shellapi.h>
#include <winnls.h>
#include <intrin.h>
#include <malloc.h>
#include <datetimeapi.h>
#include <setjmp.h>
#include <processtopologyapi.h>
#include <winnt.h>
#include <pshpack2.h>
#include <libloaderapi.h>
#include <kernelspecs.h>
#include <sysinfoapi.h>
#include <basetsd.h>
#include <objidlbase.h>
#include <ncrypt.h>
#include <winreg.h>
#include <unknwnbase.h>
#include <ctime>
#include <oaidl.h>
#include <winsock.h>
#include <time.h>
#include <commdlg.h>
#include <nb30.h>
#include <timeapi.h>
#include <util\types.h>
#include <propidl.h>
#include <dpapi.h>
#include <unknwn.h>
#include <xtgmath.h>
#include <securityappcontainer.h>
#include <xtr1common>
#include <imm.h>
#include <fibersapi.h>
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
#include <immintrin.h>
#include <wmmintrin.h>
#include <nmmintrin.h>
#include <use_ansi.h>
#include <consoleapi.h>
#include <smmintrin.h>
#include <cwchar>
#include <streambuf>
#include <platform\sysdialoginterface.h>
#include <winsvc.h>
#include <ioapiset.h>
#include <namedpipeapi.h>
#include <tmmintrin.h>
#include <type_traits>
#include <wchar.h>
#include <xiosbase>
#include <xlocale>
#include <xlocinfo>
#include <pmmintrin.h>
#include <Debug\Debug.h>
#include <winperf.h>
#include <dlgs.h>
#include <memoryapi.h>
#include <xlocinfo.h>
#include <emmintrin.h>
#include <stdexcept>
#include <ctype.h>
#include <xmmintrin.h>
#include <exception>
#include <mmintrin.h>
#include <xstddef>
#include <cstddef>
#include <xutility>
#include <stddef.h>
#include <wingdi.h>
#include <xatomic0.h>
#include <utility>
#include <urlmon.h>
#include <rpc.h>
#include <platform\cmdline.h>
#include <iosfwd>
#include <pshpack4.h>
#include <crtdbg.h>
#include <platform\sharedlibraryinterface.h>
#include <joystickapi.h>
#include <platform\osdef.h>
#include <rpcdce.h>
#include <share.h>
#include <xstring>
#include <winerror.h>
#include <xmemory0>
#include <bcrypt.h>
#include <limits>
#include <ymath.h>
#include <lzexpand.h>
#include <ddeml.h>
#include <wincrypt.h>
#include <xrefwrap>
#include <reason.h>
#include <stringapiset.h>
#include <timezoneapi.h>
#include <interlockedapi.h>
#include <string>
#include <iterator>
#include <istream>
#include <platform\platformexports.h>
#include <ostream>
#include <rpcsal.h>
#include <securitybaseapi.h>
#include <ios>
#include <xlocnum>
#include <climits>
#include <cstdio>
#include <cmath>
#include <stdio.h>
#include <math.h>
#include <oleauto.h>
#include <servprov.h>
#include <winioctl.h>
#include <xdebug>
#include <debugapi.h>
#include <fileapi.h>
#include <cguid.h>
#include <typeinfo>
#include <platform\keydefines.h>
#include <cderr.h>
#include <dde.h>
#include <xfacet>

/* ---------- constants */

/* ---------- definitions */

struct <unnamed-type-keyCharMap>
{
    unsigned char key; // 0x0
    unsigned char character; // 0x1
};
static_assert(sizeof(<unnamed-type-keyCharMap>) == 2, "Invalid <unnamed-type-keyCharMap> size");

typedef unsigned long _Uint32t;
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
typedef _s__RTTIBaseClassArray __RTTIBaseClassArray;
typedef _GUID IID;
typedef _s__CatchableTypeArray _CatchableTypeArray;
typedef unsigned short PROPVAR_PAD3;
typedef tagFUNCDESC FUNCDESC;
typedef unsigned long HREFTYPE;
typedef tagCAUB CAUB;
typedef std::errc::errc generic_errno;
typedef long long streamoff;
typedef unsigned long _Atomic_counter_t;
typedef void *nullptr_t;
typedef bool _Bool;
typedef std::float_denorm_style float_denorm_style;
typedef std::integral_constant<bool,0> false_type;
typedef unsigned long _Atomic_integral_t;
typedef std::_Container_base0 _Container_base;
typedef long long streamsize;
typedef unsigned long _Uint4_t;
typedef std::basic_ostream<char,std::char_traits<char> > ostream;
typedef std::fpos<int> streampos;
typedef std::float_round_style float_round_style;
typedef std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > wstring;
typedef std::io_errc::io_errc _Io_errc;
typedef std::basic_string<char,std::char_traits<char>,std::allocator<char> > string;
typedef wchar_t OLECHAR;
typedef __int32 errno_t;
typedef tagEXCEPINFO EXCEPINFO;
typedef tagVARDESC VARDESC;
typedef wchar_t const *LPCOLESTR;
typedef char *LPSTR;
typedef long MEMBERID;
typedef long long fpos_t;
typedef double DOUBLE;
typedef tagCY CY;
typedef tagDEC DECIMAL;
typedef threadmbcinfostruct *pthreadmbcinfo;
typedef tagSYSKIND SYSKIND;
typedef tagCAUL CAUL;
typedef tagBSTRBLOB BSTRBLOB;
typedef unsigned __int32 rsize_t;
typedef long long _Longlong;
typedef _s__RTTIClassHierarchyDescriptor __RTTIClassHierarchyDescriptor;
typedef short VARIANT_BOOL;
typedef unsigned long LCID;
typedef _s__RTTIBaseClassDescriptor2 __RTTIBaseClassDescriptor;
typedef tagPROPVARIANT PROPVARIANT;
typedef tagCAPROPVARIANT CAPROPVARIANT;
typedef tagCADATE CADATE;
typedef void (*unexpected_function)();
typedef long long time_t;
typedef tagIDLDESC IDLDESC;
typedef _s__CatchableType _CatchableType;
typedef void (*ShutdownCallback)(unsigned __int32);
typedef void (*terminate_handler)();
typedef void (*InputCallback)(unsigned __int32, char *);
typedef tagSAFEARRAY *LPSAFEARRAY;
typedef tagTLIBATTR TLIBATTR;
typedef _LARGE_INTEGER LARGE_INTEGER;
typedef unsigned short VARTYPE;
typedef __int32 ptrdiff_t;
typedef tagCLIPDATA CLIPDATA;
typedef tagTYPEATTR TYPEATTR;
typedef long DISPID;
typedef unsigned short USHORT;
typedef tagCAL CAL;
typedef localeinfo_struct *_locale_t;
typedef __int32 sdword;
typedef _ULARGE_INTEGER ULARGE_INTEGER;
typedef unsigned short wint_t;
typedef tagCASCODE CASCODE;
typedef localerefcount locrefcount;
typedef void (*unexpected_handler)();
typedef unsigned char UCHAR;
typedef tagCAFILETIME CAFILETIME;
typedef void (*dbStringOutputCB)(char const **, unsigned __int32, unsigned long);
typedef tagDISPPARAMS DISPPARAMS;
typedef tagVARIANT *LPVARIANT;
typedef char *va_list;
typedef char const *FilterKey;
typedef tagINVOKEKIND INVOKEKIND;
typedef tagSTATSTG STATSTG;
typedef tagCAFLT CAFLT;
typedef unsigned short PROPVAR_PAD1;
typedef tagCALPSTR CALPSTR;
typedef tagSAFEARRAY SAFEARRAY;
typedef long long __time64_t;
typedef tagCAUI CAUI;
typedef float FLOAT;
typedef tagCALPWSTR CALPWSTR;
typedef unsigned long long _ULonglong;
typedef tagCACY CACY;
typedef double DATE;
typedef wchar_t *LPWSTR;
typedef tagVersionedStream *LPVERSIONEDSTREAM;
typedef void (*terminate_function)();
typedef tagCABSTRBLOB CABSTRBLOB;
typedef __int32 mbstate_t;
typedef tagCAH CAH;
typedef _FILETIME FILETIME;
typedef tagVARIANT VARIANT;
typedef long SCODE;
typedef wchar_t *BSTR;
typedef _iobuf FILE;
typedef __int32 INT;
typedef bool (*DebugConsoleCB)(char *);
typedef tagCACLIPDATA CACLIPDATA;
typedef tagCADBL CADBL;
typedef tagCAUH CAUH;
typedef tagCACLSID CACLSID;
typedef void (*_PMFN)(void *);
typedef tagCAC CAC;
typedef tagBLOB BLOB;
typedef tagCAI CAI;
typedef _GUID CLSID;
typedef unsigned short PROPVAR_PAD2;
typedef unsigned __int32 UINT;
typedef __int32 _Mbstatet;
typedef tagCABOOL CABOOL;
typedef unsigned char ubyte;
typedef threadlocaleinfostruct *pthreadlocinfo;
typedef tagCABSTR CABSTR;

/* ---------- prototypes */

extern void dbgInputCallback(unsigned __int32 ID, char *string);
extern void dbgCharInputCallback(unsigned __int32 ID, char *string);
extern void dbgShutdownCallback(unsigned __int32 ID);
extern bool dbgAddConsole(char const *consoleName);
extern void consoleWriteArray(char const **strArray, unsigned __int32 strCount, unsigned long id);
extern void consoleWriteFile(char const **strArray, unsigned __int32 strCount, unsigned long id);
extern void dbgSetupNamedInterface(NamedInterface *face);
extern unsigned __int32 dbgKeyCharMap(unsigned __int32 key);
extern void dbgConsoleKeypress(unsigned __int32 key);
extern void dbgConsoleEnable(char const *consoleName);
extern void dbgConsoleInputSet(bool (*callback)(char *));
extern void dbgEnableInt3(bool bEnable);
extern void dbgKeywordAdd(char const *luaFuncName);
extern void dbgKeywordRmv(char const *luaFuncName);

/* ---------- globals */

extern char dbgFatalErrorString[2048]; // 0x10004100
extern __int32 dbgInt3Enabled; // 0x10004000
extern __int32 dbgNumberInterfaces; // 0x10004900
extern bool dbgConsoleActivated; // 0x10004904
extern ConFunctionTable dbgConsoleInterface[8]; // 0x10004908
extern void *dbgConsoleHandle[8]; // 0x10004A48
extern NamedInterface *dbgNamedInterfaceInterface; // 0x10004A68
extern SysDialogInterface *dbgSystemDialogInterface; // 0x10004A6C
extern SharedLibraryInterface *dbgSharedLibraryInterface; // 0x10004A70
extern char const *dbgDefaultConsole; // 0x10004A74
extern bool (*dbgConsoleInputCB)(char *); // 0x10004A78
extern char const *g_dbFilename; // 0x10004A7C
extern std::locale::id std::num_put<wchar_t,std::back_insert_iterator<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > > >::id; // 0x10004A88
extern std::locale::id std::num_put<char,std::back_insert_iterator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > >::id; // 0x10004A84
extern std::_Generic_error_category std::_Error_objects<int>::_Generic_object; // 0x10004018
extern std::_Iostream_error_category std::_Error_objects<int>::_Iostream_object; // 0x1000401C
extern std::_System_error_category std::_Error_objects<int>::_System_object; // 0x10004020

/* ---------- private variables */

_static
{
    extern <unnamed-type-keyCharMap> keyCharMap[10]; // 0x10004004
    extern std::piecewise_construct_t piecewise_construct; // 0x10004A81
    extern std::allocator_arg_t allocator_arg; // 0x10004A80
}

/* ---------- public code */

void dbgInputCallback(unsigned __int32 ID, char *string) // 0x100018FC
{
    mangled_assert("?dbgInputCallback@@YGXIPAD@Z");
    todo("implement");
}

void dbgCharInputCallback(unsigned __int32 ID, char *string) // 0x10001841
{
    mangled_assert("?dbgCharInputCallback@@YGXIPAD@Z");
    todo("implement");
}

void dbgShutdownCallback(unsigned __int32 ID) // 0x10001988
{
    mangled_assert("?dbgShutdownCallback@@YGXI@Z");
    todo("implement");
}

bool dbgAddConsole(char const *consoleName) // 0x10001788
{
    mangled_assert("?dbgAddConsole@@YG_NPBD@Z");
    todo("implement");
}

void consoleWriteArray(char const **strArray, unsigned __int32 strCount, unsigned long id) // 0x1000156A
{
    mangled_assert("?consoleWriteArray@@YGXQAPBDIK@Z");
    todo("implement");
}

void consoleWriteFile(char const **strArray, unsigned __int32 strCount, unsigned long id) // 0x10001657
{
    mangled_assert("?consoleWriteFile@@YGXQAPBDIK@Z");
    todo("implement");
}

void dbgSetupNamedInterface(NamedInterface *face) // 0x10001959
{
    mangled_assert("?dbgSetupNamedInterface@@YGXPAVNamedInterface@@@Z");
    todo("implement");
}

unsigned __int32 dbgKeyCharMap(unsigned __int32 key) // 0x1000190E
{
    mangled_assert("?dbgKeyCharMap@@YGII@Z");
    todo("implement");
}

void dbgConsoleKeypress(unsigned __int32 key) // 0x10001862
{
    mangled_assert("?dbgConsoleKeypress@@YGXI@Z");
    todo("implement");
}

void dbgConsoleEnable(char const *consoleName) // 0x10001844
{
    mangled_assert("?dbgConsoleEnable@@YGXPBD@Z");
    todo("implement");
}

void dbgConsoleInputSet(bool (*callback)(char *)) // 0x10001856
{
    mangled_assert("?dbgConsoleInputSet@@YGXP6G_NPAD@Z@Z");
    todo("implement");
}

void dbgEnableInt3(bool bEnable) // 0x100018EF
{
    mangled_assert("?dbgEnableInt3@@YGX_N@Z");
    todo("implement");
}

void dbgKeywordAdd(char const *luaFuncName) // 0x1000193D
{
    mangled_assert("?dbgKeywordAdd@@YGXPBD@Z");
    todo("implement");
}

void dbgKeywordRmv(char const *luaFuncName) // 0x1000194B
{
    mangled_assert("?dbgKeywordRmv@@YGXPBD@Z");
    todo("implement");
}

_inline std::_Generic_error_category::~_Generic_error_category() // 0x10001119
{
    mangled_assert("??1_Generic_error_category@std@@UAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline std::_Iostream_error_category::~_Iostream_error_category() // 0x10001120
{
    mangled_assert("??1_Iostream_error_category@std@@UAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline std::_System_error_category::~_System_error_category() // 0x10001127
{
    mangled_assert("??1_System_error_category@std@@UAE@XZ");
    compiler_generated();
    todo("implement");
}

/* ---------- private code */
#endif
