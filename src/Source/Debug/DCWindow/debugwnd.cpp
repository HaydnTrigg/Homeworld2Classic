#if 0
/* ---------- headers */

#include "decomp.h"
#include <winscard.h>
#include <winver.h>
#include <wtypes.h>
#include <verrsrc.h>
#include <rpcndr.h>
#include <windows.h>
#include <ammintrin.h>
#include <xtr1common>
#include <rpcnsip.h>
#include <tvout.h>
#include <realtimeapiset.h>
#include <winapifamily.h>
#include <mm3dnow.h>
#include <mciapi.h>
#include <sdkddkver.h>
#include <winuser.h>
#include <excpt.h>
#include <oleauto.h>
#include <crtdefs.h>
#include <servprov.h>
#include <sal.h>
#include <consoleapi.h>
#include <concurrencysal.h>
#include <set>
#include <ioapiset.h>
#include <namedpipeapi.h>
#include <vadefs.h>
#include <xtree>
#include <cguid.h>
#include <winperf.h>
#include <dlgs.h>
#include <memoryapi.h>
#include <share.h>
#include <eh.h>
#include <DCWindow\interface.h>
#include <memory\memorylib.h>
#include <winnt.h>
#include <cfloat>
#include <malloc.h>
#include <pshpack4.h>
#include <ctype.h>
#include <float.h>
#include <wingdi.h>
#include <crtwrn.h>
#include <rpc.h>
#include <joystickapi.h>
#include <rpcdce.h>
#include <winerror.h>
#include <algorithm>
#include <bcrypt.h>
#include <xtgmath.h>
#include <lzexpand.h>
#include <ddeml.h>
#include <wincrypt.h>
#include <reason.h>
#include <stringapiset.h>
#include <timezoneapi.h>
#include <interlockedapi.h>
#include <xdebug>
#include <rpcsal.h>
#include <securitybaseapi.h>
#include <intrin.h>
#include <setjmp.h>
#include <winioctl.h>
#include <xfacet>
#include <mcx.h>
#include <oleidl.h>
#include <debugapi.h>
#include <fileapi.h>
#include <cderr.h>
#include <dde.h>
#include <platform\osdef.h>
#include <winspool.h>
#include <wtypesbase.h>
#include <rpcnterr.h>
#include <threadpoollegacyapiset.h>
#include <poppack.h>
#include <msxml.h>
#include <objidl.h>
#include <prsht.h>
#include <rpcasync.h>
#include <rpcnsi.h>
#include <assist\stlexstring.h>
#include <debug\db.h>
#include <mmiscapi2.h>
#include <winefs.h>
#include <profileapi.h>
#include <inaddr.h>
#include <synchapi.h>
#include <mmsystem.h>
#include <immintrin.h>
#include <ime_cmodes.h>
#include <mmsyscom.h>
#include <wmmintrin.h>
#include <windowsx.h>
#include <processthreadsapi.h>
#include <heapapi.h>
#include <utilapiset.h>
#include <nmmintrin.h>
#include <stdio.h>
#include <guiddef.h>
#include <smmintrin.h>
#include <wtime.inl>
#include <stdexcept>
#include <tmmintrin.h>
#include <type_traits>
#include <xstring>
#include <pmmintrin.h>
#include <emmintrin.h>
#include <climits>
#include <winnetwk.h>
#include <pshpack8.h>
#include <xmmintrin.h>
#include <cmath>
#include <wnnc.h>
#include <mmintrin.h>
#include <math.h>
#include <DCWindow\resource.h>
#include <xutility>
#include <DCWindow\debugwnd.h>
#include <memory.h>
#include <utility>
#include <cstdio>
#include <new>
#include <rpcdcep.h>
#include <bemapiset.h>
#include <vector>
#include <xatomic0.h>
#include <iosfwd>
#include <exception>
#include <playsoundapi.h>
#include <cstring>
#include <xmemory>
#include <xstddef>
#include <cstddef>
#include <time.inl>
#include <crtdbg.h>
#include <xmemory0>
#include <stddef.h>
#include <yvals.h>
#include <handleapi.h>
#include <cstdlib>
#include <xkeycheck.h>
#include <limits>
#include <use_ansi.h>
#include <kernelspecs.h>
#include <ymath.h>
#include <basetsd.h>
#include <threadpoolapiset.h>
#include <objidlbase.h>
#include <namespaceapi.h>
#include <ktmtypes.h>
#include <xrefwrap>
#include <unknwnbase.h>
#include <string.h>
#include <oaidl.h>
#include <winsmcrd.h>
#include <commdlg.h>
#include <xlocinfo>
#include <mmiscapi.h>
#include <wincon.h>
#include <winbase.h>
#include <xlocinfo.h>
#include <mmeapi.h>
#include <apisetcconv.h>
#include <locale.h>
#include <console.h>
#include <minwinbase.h>
#include <Filter.h>
#include <propidl.h>
#include <unknwn.h>
#include <system_error>
#include <cwchar>
#include <imm.h>
#include <errhandlingapi.h>
#include <cerrno>
#include <wchar.h>
#include <processenv.h>
#include <errno.h>
#include <jobapi.h>
#include <apiset.h>
#include <stralign.h>
#include <ole2.h>
#include <objbase.h>
#include <pshpack1.h>
#include <systemtopologyapi.h>
#include <combaseapi.h>
#include <wow64apiset.h>
#include <stdarg.h>
#include <winsvc.h>
#include <stdlib.h>
#include <shellapi.h>
#include <winnls.h>
#include <windef.h>
#include <limits.h>
#include <datetimeapi.h>
#include <minwindef.h>
#include <processtopologyapi.h>
#include <specstrings.h>
#include <specstrings_strict.h>
#include <pshpack2.h>
#include <specstrings_undef.h>
#include <string>
#include <libloaderapi.h>
#include <driverspecs.h>
#include <iterator>
#include <time.h>
#include <sysinfoapi.h>
#include <sdv_driverspecs.h>
#include <istream>
#include <ostream>
#include <urlmon.h>
#include <ncrypt.h>
#include <winreg.h>
#include <ios>
#include <swprintf.inl>
#include <xlocnum>
#include <util\types.h>
#include <streambuf>
#include <winsock.h>
#include <xiosbase>
#include <nb30.h>
#include <xlocale>
#include <typeinfo>
#include <timeapi.h>
#include <dpapi.h>
#include <securityappcontainer.h>
#include <fibersapi.h>

/* ---------- constants */

/* ---------- definitions */

struct LogOptions
{
    DebugPane *pane; // 0x0
    char logPath[256]; // 0x4
    bool bLogging; // 0x104
    bool bSafeLogging; // 0x105
    bool bClearCutLogging; // 0x106
    bool bClearNow; // 0x107
    __int32 bufferHeight; // 0x108
};
static_assert(sizeof(LogOptions) == 268, "Invalid LogOptions size");

typedef tagPARAMDESCEX *LPPARAMDESCEX;
typedef tagCALLCONV CALLCONV;
typedef tagWNDCLASSA WNDCLASS;
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
typedef _GUID IID;
typedef tagSCROLLINFO SCROLLINFO;
typedef unsigned __int32 WPARAM;
typedef HRGN__ *HRGN;
typedef unsigned short PROPVAR_PAD3;
typedef tagFUNCDESC FUNCDESC;
typedef unsigned long HREFTYPE;
typedef tagCAUB CAUB;
typedef std::integral_constant<bool,1> true_type;
typedef tagCHOOSEFONTA CHOOSEFONTA;
typedef wchar_t OLECHAR;
typedef tagEXCEPINFO EXCEPINFO;
typedef tagVARDESC VARDESC;
typedef wchar_t const *LPCOLESTR;
typedef char *LPSTR;
typedef long MEMBERID;
typedef HICON__ *HICON;
typedef double DOUBLE;
typedef tagCY CY;
typedef tagDEC DECIMAL;
typedef tagSYSKIND SYSKIND;
typedef HBRUSH__ *HBRUSH;
typedef tagCAUL CAUL;
typedef tagBSTRBLOB BSTRBLOB;
typedef tagOFNA OPENFILENAMEA;
typedef tagSIZE *LPSIZE;
typedef short VARIANT_BOOL;
typedef unsigned long LCID;
typedef tagPROPVARIANT PROPVARIANT;
typedef tagRECT *LPRECT;
typedef long LRESULT;
typedef tagCAPROPVARIANT CAPROPVARIANT;
typedef tagCADATE CADATE;
typedef __int32 (*DLGPROC)(HWND__ *, unsigned __int32, unsigned __int32, long);
typedef tagCHOOSEFONTA CHOOSEFONT;
typedef tagIDLDESC IDLDESC;
typedef void *HGDIOBJ;
typedef tagOFNA OPENFILENAME;
typedef tagSAFEARRAY *LPSAFEARRAY;
typedef tagTLIBATTR TLIBATTR;
typedef _LARGE_INTEGER LARGE_INTEGER;
typedef unsigned short VARTYPE;
typedef tagCLIPDATA CLIPDATA;
typedef tagTYPEATTR TYPEATTR;
typedef long DISPID;
typedef unsigned short USHORT;
typedef tagCAL CAL;
typedef _ULARGE_INTEGER ULARGE_INTEGER;
typedef tagSIZE SIZE;
typedef long LPARAM;
typedef unsigned long DWORD_PTR;
typedef tagCASCODE CASCODE;
typedef unsigned long COLORREF;
typedef unsigned char UCHAR;
typedef tagCAFILETIME CAFILETIME;
typedef tagDISPPARAMS DISPPARAMS;
typedef __int32 INT_PTR;
typedef tagOFNA *LPOPENFILENAMEA;
typedef tagVARIANT *LPVARIANT;
typedef tagINVOKEKIND INVOKEKIND;
typedef tagSTATSTG STATSTG;
typedef HINSTANCE__ *HINSTANCE;
typedef tagWNDCLASSA WNDCLASSA;
typedef unsigned short ATOM;
typedef unsigned __int32 (*LPOFNHOOKPROC)(HWND__ *, unsigned __int32, unsigned __int32, long);
typedef tagCAFLT CAFLT;
typedef tagSCROLLINFO *LPSCROLLINFO;
typedef unsigned short PROPVAR_PAD1;
typedef tagCALPSTR CALPSTR;
typedef HMENU__ *HMENU;
typedef unsigned __int32 UINT_PTR;
typedef tagSAFEARRAY SAFEARRAY;
typedef tagCAUI CAUI;
typedef tagCHOOSEFONTA *LPCHOOSEFONTA;
typedef HICON__ *HCURSOR;
typedef tagSCROLLINFO const *LPCSCROLLINFO;
typedef float FLOAT;
typedef tagCALPWSTR CALPWSTR;
typedef tagCACY CACY;
typedef double DATE;
typedef wchar_t *LPWSTR;
typedef std::set<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::basicstring_less_insensitive<char>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > KeywordSet;
typedef tagVersionedStream *LPVERSIONEDSTREAM;
typedef tagCABSTRBLOB CABSTRBLOB;
typedef tagCAH CAH;
typedef _FILETIME FILETIME;
typedef tagVARIANT VARIANT;
typedef long SCODE;
typedef wchar_t *BSTR;
typedef __int32 INT;
typedef tagCACLIPDATA CACLIPDATA;
typedef tagCADBL CADBL;
typedef tagCAUH CAUH;
typedef tagCACLSID CACLSID;
typedef tagCAC CAC;
typedef tagBLOB BLOB;
typedef tagCAI CAI;
typedef tagLOGFONTA *LPLOGFONTA;
typedef _GUID CLSID;
typedef unsigned short PROPVAR_PAD2;
typedef unsigned __int32 (*LPCFHOOKPROC)(HWND__ *, unsigned __int32, unsigned __int32, long);
typedef tagLOGBRUSH LOGBRUSH;
typedef unsigned __int32 UINT;
typedef tagCABOOL CABOOL;
typedef long (*WNDPROC)(HWND__ *, unsigned __int32, unsigned __int32, long);
typedef tagCABSTR CABSTR;

/* ---------- prototypes */

extern void dbwAllPanesFree();
extern bool dbwShowMouse(bool state);
extern DebugPane *dbwPaneFind(HWND__ *hWnd);
extern long dbwWindowProc(HWND__ *hWnd, unsigned __int32 message, unsigned __int32 wParam, long lParam);
extern bool dbwFindString(char *fileName, char *section, char *keyStringIn, char *defaultString, char *returnString, __int32 length);
extern __int32 dbgDataNybble(char c);
extern bool dbwFindBinary(char *fileName, char *section, char *keyStringIn, unsigned char *buffer, unsigned __int32 length);
extern char *dbwNumberToName(__int32 index);
extern bool dbwStartup(unsigned __int32 hInstance, unsigned __int32 hWndParent);
extern void dbwValidatePane();
extern void dbwWriteOptions();
extern void dbwShutdown();
extern void dbwPanesClear();
extern void dbwLineFeed();
extern __int32 dbwPrint(char const *key, char const *string);
extern __int32 dbwLogOptionsDialogProc(HWND__ *hDialog, unsigned __int32 uMsg, unsigned __int32 wParam, long lParam);
extern __int32 dbwFilterDialogProc(HWND__ *hDialog, unsigned __int32 uMsg, unsigned __int32 wParam, long lParam);
extern bool dbwConsoleActivate(unsigned __int32 key);
extern __int32 stringLengthReverse(char const *string);
extern void dbwKeywordAdd(char const *luaFuncName);
extern void dbwKeywordRmv(char const *luaFuncName);

_static bool KeywordIsPartialMatch(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &input, std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &keyword);
_static std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > > KeywordNext(std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > > const &first, std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > > const &end, std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > > const &current, std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &input);

/* ---------- globals */

extern __int32 dbwEnabled; // 0x10009140
extern DebugPane *dbwPane[4]; // 0x10009144
extern AutoCompleteSys s_autoCompleteSys; // 0x10009188
extern HWND__ *dbwParentWindow; // 0x10009154
extern tagWNDCLASSA dbwWindowClass; // 0x10009158
extern HINSTANCE__ *dbwInstance; // 0x10009180
extern char dbwFilePickerFilters[88]; // 0x10009000
extern std::locale::id std::num_put<wchar_t,std::back_insert_iterator<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > > >::id; // 0x100091A0
extern std::_Generic_error_category std::_Error_objects<int>::_Generic_object; // 0x10009058
extern std::_Iostream_error_category std::_Error_objects<int>::_Iostream_object; // 0x1000905C
extern std::_System_error_category std::_Error_objects<int>::_System_object; // 0x10009060
extern std::locale::id std::num_put<char,std::back_insert_iterator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > >::id; // 0x1000919C

/* ---------- private variables */

_static
{
    extern std::piecewise_construct_t piecewise_construct; // 0x10009185
    extern std::allocator_arg_t allocator_arg; // 0x10009184
    extern std::_Nil _Nil_obj; // 0x10009186
}

/* ---------- public code */

void dbwAllPanesFree() // 0x100034FF
{
    mangled_assert("?dbwAllPanesFree@@YGXXZ");
    todo("implement");
}

bool dbwShowMouse(bool state) // 0x10003B55
{
    mangled_assert("?dbwShowMouse@@YG_N_N@Z");
    todo("implement");
}

DebugPane *dbwPaneFind(HWND__ *hWnd) // 0x10003AD2
{
    mangled_assert("?dbwPaneFind@@YGPAVDebugPane@@PAUHWND__@@@Z");
    todo("implement");
}

long dbwWindowProc(HWND__ *hWnd, unsigned __int32 message, unsigned __int32 wParam, long lParam) // 0x10003DBD
{
    mangled_assert("?dbwWindowProc@@YGJPAUHWND__@@IIJ@Z");
    todo("implement");
}

bool dbwFindString(char *fileName, char *section, char *keyStringIn, char *defaultString, char *returnString, __int32 length) // 0x100036E4
{
    mangled_assert("?dbwFindString@@YG_NPAD0000H@Z");
    todo("implement");
}

__int32 dbgDataNybble(char c) // 0x100034CB
{
    mangled_assert("?dbgDataNybble@@YGHD@Z");
    todo("implement");
}

bool dbwFindBinary(char *fileName, char *section, char *keyStringIn, unsigned char *buffer, unsigned __int32 length) // 0x100035BB
{
    mangled_assert("?dbwFindBinary@@YG_NPAD00PAEI@Z");
    todo("implement");
}

char *dbwNumberToName(__int32 index) // 0x10003AB0
{
    mangled_assert("?dbwNumberToName@@YGPADH@Z");
    todo("implement");
}

bool dbwStartup(unsigned __int32 hInstance, unsigned __int32 hWndParent) // 0x10003BB3
{
    mangled_assert("?dbwStartup@@YG_NII@Z");
    todo("implement");
}

void dbwValidatePane() // 0x10003D3F
{
    mangled_assert("?dbwValidatePane@@YGXXZ");
    todo("implement");
}

void dbwWriteOptions() // 0x10004001
{
    mangled_assert("?dbwWriteOptions@@YGXXZ");
    todo("implement");
}

void dbwShutdown() // 0x10003B98
{
    mangled_assert("?dbwShutdown@@YGXXZ");
    todo("implement");
}

void dbwPanesClear() // 0x10003AFD
{
    mangled_assert("?dbwPanesClear@@YGXXZ");
    todo("implement");
}

void dbwLineFeed() // 0x10003826
{
    mangled_assert("?dbwLineFeed@@YGXXZ");
    todo("implement");
}

__int32 dbwPrint(char const *key, char const *string) // 0x10003B1B
{
    mangled_assert("?dbwPrint@@YGHPBD0@Z");
    todo("implement");
}

__int32 dbwLogOptionsDialogProc(HWND__ *hDialog, unsigned __int32 uMsg, unsigned __int32 wParam, long lParam) // 0x10003844
{
    mangled_assert("?dbwLogOptionsDialogProc@@YGHPAUHWND__@@IIJ@Z");
    todo("implement");
}

__int32 dbwFilterDialogProc(HWND__ *hDialog, unsigned __int32 uMsg, unsigned __int32 wParam, long lParam) // 0x10003556
{
    mangled_assert("?dbwFilterDialogProc@@YGHPAUHWND__@@IIJ@Z");
    todo("implement");
}

bool dbwConsoleActivate(unsigned __int32 key) // 0x10003528
{
    mangled_assert("?dbwConsoleActivate@@YG_NI@Z");
    todo("implement");
}

DebugPane::DebugPane(__int32, DebugPane *) // 0x10001829
{
    mangled_assert("??0DebugPane@@QAE@HPAV0@@Z");
    todo("implement");
}

_inline std::_Tree_buy<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > >::~_Tree_buy<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > >() // 0x10001E28
{
    mangled_assert("??1?$_Tree_buy@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline std::_Tree_comp<0,std::_Tset_traits<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::basicstring_less_insensitive<char>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,0> >::~_Tree_comp<0,std::_Tset_traits<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::basicstring_less_insensitive<char>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,0> >() // 0x10001E31
{
    mangled_assert("??1?$_Tree_comp@$0A@V?$_Tset_traits@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$basicstring_less_insensitive@D@2@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@$0A@@std@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline std::set<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::basicstring_less_insensitive<char>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > >::~set<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::basicstring_less_insensitive<char>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > >() // 0x10001E5B
{
    mangled_assert("??1?$set@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$basicstring_less_insensitive@D@2@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline AutoCompleteSys::~AutoCompleteSys() // 0x10001E65
{
    mangled_assert("??1AutoCompleteSys@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

DebugPane::~DebugPane() // 0x10001E6A
{
    mangled_assert("??1DebugPane@@QAE@XZ");
    todo("implement");
}

_inline std::_Generic_error_category::~_Generic_error_category() // 0x10001EDE
{
    mangled_assert("??1_Generic_error_category@std@@UAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline std::_Iostream_error_category::~_Iostream_error_category() // 0x10001EE5
{
    mangled_assert("??1_Iostream_error_category@std@@UAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline std::_System_error_category::~_System_error_category() // 0x10001EEC
{
    mangled_assert("??1_System_error_category@std@@UAE@XZ");
    compiler_generated();
    todo("implement");
}

bool DebugPane::bufferAlloc() // 0x10002DFD
{
    mangled_assert("?bufferAlloc@DebugPane@@QAE_NXZ");
    todo("implement");
}

bool DebugPane::fontChoose(bool) // 0x100046F6
{
    mangled_assert("?fontChoose@DebugPane@@QAE_N_N@Z");
    todo("implement");
}

__int32 DebugPane::print(char const *, char const *) // 0x10005184
{
    mangled_assert("?print@DebugPane@@QAEHPBD0@Z");
    todo("implement");
}

void DebugPane::keyPrintIfPending(char const *) // 0x10004964
{
    mangled_assert("?keyPrintIfPending@DebugPane@@AAEXPBD@Z");
    todo("implement");
}

void DebugPane::charsPrint(char const *, __int32, __int32) // 0x10002E41
{
    mangled_assert("?charsPrint@DebugPane@@AAEXPBDHH@Z");
    todo("implement");
}

void DebugPane::repaint(HDC__ *) // 0x1000537B
{
    mangled_assert("?repaint@DebugPane@@QAEXPAUHDC__@@@Z");
    todo("implement");
}

void DebugPane::clear() // 0x10002F3B
{
    mangled_assert("?clear@DebugPane@@QAEXXZ");
    todo("implement");
}

__int32 DebugPane::lineFeed() // 0x10004B43
{
    mangled_assert("?lineFeed@DebugPane@@QAEHXZ");
    todo("implement");
}

void DebugPane::textEntryInit(char const *, bool) // 0x100056F0
{
    mangled_assert("?textEntryInit@DebugPane@@QAEXPBD_N@Z");
    todo("implement");
}

void DebugPane::inputCallback(char *) // 0x100047AD
{
    mangled_assert("?inputCallback@DebugPane@@QAEXPAD@Z");
    todo("implement");
}

void DebugPane::commandProcess(unsigned __int32, unsigned __int32, unsigned __int32) // 0x10002FA3
{
    mangled_assert("?commandProcess@DebugPane@@QAEXIII@Z");
    todo("implement");
}

void DebugPane::editFocus(unsigned __int32) // 0x100040F0
{
    mangled_assert("?editFocus@DebugPane@@QAEXI@Z");
    todo("implement");
}

void DebugPane::editFocusKill(char *) // 0x1000412A
{
    mangled_assert("?editFocusKill@DebugPane@@QAEXPAD@Z");
    todo("implement");
}

void DebugPane::configurationWrite(_iobuf *, __int32) // 0x1000332F
{
    mangled_assert("?configurationWrite@DebugPane@@QAEXPAU_iobuf@@H@Z");
    todo("implement");
}

void DebugPane::scrollRangeSet() // 0x10005592
{
    mangled_assert("?scrollRangeSet@DebugPane@@QAEXXZ");
    todo("implement");
}

void DebugPane::viewScroll(__int32, bool) // 0x100057BA
{
    mangled_assert("?viewScroll@DebugPane@@QAEXH_N@Z");
    todo("implement");
}

void DebugPane::scrollTrack() // 0x100055D9
{
    mangled_assert("?scrollTrack@DebugPane@@QAEXXZ");
    todo("implement");
}

void DebugPane::scrollIntoView() // 0x10005555
{
    mangled_assert("?scrollIntoView@DebugPane@@QAEXXZ");
    todo("implement");
}

bool DebugPane::limitSize(tagRECT *, __int32) // 0x100049ED
{
    mangled_assert("?limitSize@DebugPane@@QAE_NPAUtagRECT@@H@Z");
    todo("implement");
}

bool DebugPane::newSize(__int32, __int32) // 0x100050C6
{
    mangled_assert("?newSize@DebugPane@@QAE_NHH@Z");
    todo("implement");
}

bool DebugPane::resizeBuffer(__int32, __int32, __int32) // 0x10005469
{
    mangled_assert("?resizeBuffer@DebugPane@@QAE_NHHH@Z");
    todo("implement");
}

bool DebugPane::windowSizeToFont(bool) // 0x10005819
{
    mangled_assert("?windowSizeToFont@DebugPane@@QAE_N_N@Z");
    todo("implement");
}

bool DebugPane::editWindowSizeToFont(bool) // 0x100041C8
{
    mangled_assert("?editWindowSizeToFont@DebugPane@@QAE_N_N@Z");
    todo("implement");
}

void DebugPane::editWindowMoveToResizedFont() // 0x10004181
{
    mangled_assert("?editWindowMoveToResizedFont@DebugPane@@QAEXXZ");
    todo("implement");
}

void DebugPane::filterDialog() // 0x1000469C
{
    mangled_assert("?filterDialog@DebugPane@@QAEXXZ");
    todo("implement");
}

void DebugPane::resetTitle() // 0x10005436
{
    mangled_assert("?resetTitle@DebugPane@@QAEXXZ");
    todo("implement");
}

void DebugPane::logOptionsDialog() // 0x10004D48
{
    mangled_assert("?logOptionsDialog@DebugPane@@QAEXXZ");
    todo("implement");
}

void DebugPane::logDialogInit(HWND__ *) // 0x10004CA8
{
    mangled_assert("?logDialogInit@DebugPane@@QAEXPAUHWND__@@@Z");
    todo("implement");
}

void DebugPane::logStop() // 0x10004F33
{
    mangled_assert("?logStop@DebugPane@@QAEXXZ");
    todo("implement");
}

bool DebugPane::logStart(char *, bool, bool) // 0x10004E3B
{
    mangled_assert("?logStart@DebugPane@@QAE_NPAD_N1@Z");
    todo("implement");
}

void DebugPane::logString(char const *) // 0x10004F58
{
    mangled_assert("?logString@DebugPane@@QAEXPBD@Z");
    todo("implement");
}

__int32 stringLengthReverse(char const *string) // 0x100056D2
{
    mangled_assert("?stringLengthReverse@@YGHPBD@Z");
    todo("implement");
}

void DebugPane::stringAddToHistory(char const *) // 0x1000565B
{
    mangled_assert("?stringAddToHistory@DebugPane@@QAEXPBD@Z");
    todo("implement");
}

char const *DebugPane::queryHistory() // 0x10005314
{
    mangled_assert("?queryHistory@DebugPane@@QAEPBDXZ");
    todo("implement");
}

bool DebugPane::historyAlloc() // 0x10004787
{
    mangled_assert("?historyAlloc@DebugPane@@QAE_NXZ");
    todo("implement");
}

AutoCompleteSys::AutoCompleteSys() // 0x10001809
{
    mangled_assert("??0AutoCompleteSys@@QAE@XZ");
    todo("implement");
}

void AutoCompleteSys::Complete(DebugPane *, std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &) // 0x100021EF
{
    mangled_assert("?Complete@AutoCompleteSys@@QAEXPAVDebugPane@@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z");
    todo("implement");
}

void AutoCompleteSys::KeywordAdd(char const *) // 0x10002356
{
    mangled_assert("?KeywordAdd@AutoCompleteSys@@QAEXPBD@Z");
    todo("implement");
}

void AutoCompleteSys::KeywordRmv(char const *) // 0x1000240D
{
    mangled_assert("?KeywordRmv@AutoCompleteSys@@QAEXPBD@Z");
    todo("implement");
}

void AutoCompleteSys::Reset() // 0x10002452
{
    mangled_assert("?Reset@AutoCompleteSys@@QAEXXZ");
    todo("implement");
}

bool AutoCompleteSys::Detect(char const *) // 0x1000232F
{
    mangled_assert("?Detect@AutoCompleteSys@@QAE_NPBD@Z");
    todo("implement");
}

void dbwKeywordAdd(char const *luaFuncName) // 0x1000380A
{
    mangled_assert("?dbwKeywordAdd@@YGXPBD@Z");
    todo("implement");
}

void dbwKeywordRmv(char const *luaFuncName) // 0x10003818
{
    mangled_assert("?dbwKeywordRmv@@YGXPBD@Z");
    todo("implement");
}

/* ---------- private code */

_static bool KeywordIsPartialMatch(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &input, std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &keyword) // 0x1000239F
{
    mangled_assert("KeywordIsPartialMatch");
    todo("implement");
}

_static std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > > KeywordNext(std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > > const &first, std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > > const &end, std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > > const &current, std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &input) // 0x100023D1
{
    mangled_assert("KeywordNext");
    todo("implement");
}
#endif
