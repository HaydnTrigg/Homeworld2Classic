#if 0
/* ---------- headers */

#include "decomp.h"
#include <systemtopologyapi.h>
#include <pshpack1.h>
#include <objbase.h>
#include <wow64apiset.h>
#include <combaseapi.h>
#include <winnls.h>
#include <shellapi.h>
#include <pch.h>
#include <datetimeapi.h>
#include <processtopologyapi.h>
#include <crtdefs.h>
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
#include <cpuid.h>
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
#include <threadpoollegacyapiset.h>
#include <rpcnterr.h>
#include <wtypesbase.h>
#include <winspool.h>
#include <windows.h>
#include <rpcnsi.h>
#include <rpcasync.h>
#include <prsht.h>
#include <winapifamily.h>
#include <sdkddkver.h>
#include <poppack.h>
#include <excpt.h>
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
#include <bemapiset.h>
#include <rpcdcep.h>
#include <windef.h>
#include <playsoundapi.h>
#include <minwindef.h>
#include <specstrings.h>
#include <handleapi.h>
#include <specstrings_strict.h>
#include <specstrings_undef.h>
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
#include <guiddef.h>
#include <jobapi.h>
#include <apiset.h>
#include <ole2.h>

/* ---------- constants */

/* ---------- definitions */

union _cpuid::__l2::<unnamed-type-Ident>
{
    char cBuf[13]; // 0x0
    struct
    {
        unsigned long dw0; // 0x0
        unsigned long dw1; // 0x4
        unsigned long dw2; // 0x8
    };
};
static_assert(sizeof(_cpuid::__l2::<unnamed-type-Ident>) == 16, "Invalid _cpuid::__l2::<unnamed-type-Ident> size");

typedef unsigned long ULONG;
typedef unsigned short USHORT;
typedef unsigned char UCHAR;
typedef unsigned long DWORD;
typedef __int32 BOOL;
typedef unsigned char BYTE;
typedef unsigned short WORD;
typedef float FLOAT;
typedef void *LPVOID;
typedef __int32 INT;
typedef unsigned __int32 UINT;
typedef long LONG_PTR;
typedef unsigned long ULONG_PTR;
typedef unsigned long SIZE_T;
typedef long long LONG64;
typedef long long *PLONG64;
typedef unsigned long long DWORD64;
typedef void *PVOID;
typedef char CHAR;
typedef short SHORT;
typedef long LONG;
typedef wchar_t WCHAR;
typedef wchar_t *LPWSTR;
typedef wchar_t *PWSTR;
typedef wchar_t *PUWSTR;
typedef wchar_t const *PCUWSTR;
typedef char *PCHAR;
typedef char *LPSTR;
typedef short *PSHORT;
typedef long *PLONG;
typedef long HRESULT;
typedef unsigned long LCID;
typedef long long LONGLONG;
typedef unsigned long long ULONGLONG;
typedef _LARGE_INTEGER LARGE_INTEGER;
typedef _ULARGE_INTEGER ULARGE_INTEGER;
typedef unsigned char BOOLEAN;
typedef _GUID GUID;
typedef _GUID IID;
typedef _GUID CLSID;
typedef _SYSTEM_POWER_STATE SYSTEM_POWER_STATE;
typedef unsigned long TP_VERSION;
typedef _TP_CALLBACK_INSTANCE *PTP_CALLBACK_INSTANCE;
typedef void (*PTP_SIMPLE_CALLBACK)(_TP_CALLBACK_INSTANCE *, void *);
typedef _TP_POOL *PTP_POOL;
typedef _TP_CALLBACK_PRIORITY TP_CALLBACK_PRIORITY;
typedef _TP_CLEANUP_GROUP *PTP_CLEANUP_GROUP;
typedef void (*PTP_CLEANUP_GROUP_CANCEL_CALLBACK)(void *, void *);
typedef _TP_CALLBACK_ENVIRON_V3 TP_CALLBACK_ENVIRON_V3;
typedef _TP_CALLBACK_ENVIRON_V3 *PTP_CALLBACK_ENVIRON;
typedef _FILETIME FILETIME;
typedef tagAR_STATE AR_STATE;
typedef wchar_t OLECHAR;
typedef wchar_t *LPOLESTR;
typedef wchar_t const *LPCOLESTR;
typedef double DOUBLE;
typedef long SCODE;
typedef tagBLOB BLOB;
typedef double DATE;
typedef tagCY CY;
typedef tagDEC DECIMAL;
typedef wchar_t *BSTR;
typedef short VARIANT_BOOL;
typedef tagBSTRBLOB BSTRBLOB;
typedef tagCLIPDATA CLIPDATA;
typedef unsigned short VARTYPE;
typedef tagSTATSTG STATSTG;
typedef tagPROPVARIANT PROPVARIANT;
typedef wchar_t **SNB;
typedef tagSAFEARRAYBOUND SAFEARRAYBOUND;
typedef tagSAFEARRAY SAFEARRAY;
typedef tagSAFEARRAY *LPSAFEARRAY;
typedef tagVARIANT VARIANT;
typedef tagVARIANT *LPVARIANT;
typedef tagVARIANT VARIANTARG;
typedef long DISPID;
typedef long MEMBERID;
typedef unsigned long HREFTYPE;
typedef tagTYPEKIND TYPEKIND;
typedef tagTYPEDESC TYPEDESC;
typedef tagPARAMDESCEX *LPPARAMDESCEX;
typedef tagPARAMDESC PARAMDESC;
typedef tagIDLDESC IDLDESC;
typedef tagELEMDESC ELEMDESC;
typedef tagTYPEATTR TYPEATTR;
typedef tagDISPPARAMS DISPPARAMS;
typedef tagEXCEPINFO EXCEPINFO;
typedef tagCALLCONV CALLCONV;
typedef tagFUNCKIND FUNCKIND;
typedef tagINVOKEKIND INVOKEKIND;
typedef tagFUNCDESC FUNCDESC;
typedef tagVARKIND VARKIND;
typedef tagVARDESC VARDESC;
typedef tagDESCKIND DESCKIND;
typedef tagBINDPTR BINDPTR;
typedef tagSYSKIND SYSKIND;
typedef tagTLIBATTR TLIBATTR;
typedef tagVersionedStream *LPVERSIONEDSTREAM;
typedef tagCAC CAC;
typedef tagCAUB CAUB;
typedef tagCAI CAI;
typedef tagCAUI CAUI;
typedef tagCAL CAL;
typedef tagCAUL CAUL;
typedef tagCAFLT CAFLT;
typedef tagCADBL CADBL;
typedef tagCACY CACY;
typedef tagCADATE CADATE;
typedef tagCABSTR CABSTR;
typedef tagCABSTRBLOB CABSTRBLOB;
typedef tagCABOOL CABOOL;
typedef tagCASCODE CASCODE;
typedef tagCAPROPVARIANT CAPROPVARIANT;
typedef tagCAH CAH;
typedef tagCAUH CAUH;
typedef tagCALPSTR CALPSTR;
typedef tagCALPWSTR CALPWSTR;
typedef tagCAFILETIME CAFILETIME;
typedef tagCACLIPDATA CACLIPDATA;
typedef tagCACLSID CACLSID;
typedef unsigned short PROPVAR_PAD1;
typedef unsigned short PROPVAR_PAD2;
typedef unsigned short PROPVAR_PAD3;

/* ---------- prototypes */

extern __int32 IsCPUID();
extern __int32 _os_support(__int32 feature);
extern void map_mname(__int32 family, __int32 model, char const *v_name, char *m_name);
extern __int32 _cpuid(_processor_info *pinfo);

/* ---------- globals */

/* ---------- private variables */

/* ---------- public code */

_extern __int32 _sub_10001000();
__int32 IsCPUID() // 0x10001000
{
    mangled_assert("?IsCPUID@@YGHXZ");
    todo("implement");
    __int32 __result = _sub_10001000();
    return __result;
}

_extern __int32 _sub_1000115B(__int32);
__int32 _os_support(__int32 feature) // 0x1000115B
{
    mangled_assert("?_os_support@@YGHH@Z");
    todo("implement");
    __int32 __result = _sub_1000115B(feature);
    return __result;
}

_extern void _sub_100011BB(__int32, __int32, char const *, char *);
void map_mname(__int32 family, __int32 model, char const *v_name, char *m_name) // 0x100011BB
{
    mangled_assert("?map_mname@@YGXHHPBDPAD@Z");
    todo("implement");
    _sub_100011BB(family, model, v_name, m_name);
}

_extern __int32 _sub_10001030(_processor_info *);
__int32 _cpuid(_processor_info *pinfo) // 0x10001030
{
    mangled_assert("?_cpuid@@YGHPAU_processor_info@@@Z");
    todo("implement");
    __int32 __result = _sub_10001030(pinfo);
    return __result;
}

/* ---------- private code */
#endif
