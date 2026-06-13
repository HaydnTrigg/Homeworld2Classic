#if 0
/* ---------- headers */

#include "decomp.h"
#include <rpcsal.h>
#include <mmsystem.h>
#include <mmsyscom.h>
#include <memory\memorylib.h>
#include "\HICKORY-PCSHIP\Homeworld2Classic\src\src\Shared\PC\FDAudio\pch.h"
#include "\HICKORY-PCSHIP\Homeworld2Classic\src\src\Shared\PC\FDAudio\FDAudio.h"
#include <seinterface2\sedevice.h>
#include <seinterface2\sedefinesshared.h>
#include <dsound.h>
#include <objbase.h>
#include <rpc.h>
#include <playsoundapi.h>
#include <rpcdce.h>
#include <combaseapi.h>
#include <oaidl.h>
#include <mmiscapi.h>
#include <propidl.h>
#include <mmeapi.h>
#include <wtypesbase.h>
#include <cguid.h>
#include <poppack.h>
#include <seinterface2\soundparams.h>
#include <rpcnterr.h>
#include <rpcnsi.h>
#include <rpcasync.h>
#include <assist\typemagic.h>
#include <pshpack8.h>
#include <urlmon.h>
#include "\HICKORY-PCSHIP\Homeworld2Classic\src\src\Shared\PC\FDAudio\fdaudiodata.h"
#include "\HICKORY-PCSHIP\Homeworld2Classic\src\src\Shared\PC\FDAudio\fqcodec.h"
#include <Mathlib\vector3.h>
#include <util\types.h>
#include <timeapi.h>
#include <rpcdcep.h>
#include <apisetcconv.h>
#include <mciapi.h>
#include <servprov.h>
#include <objidl.h>
#include "\HICKORY-PCSHIP\Homeworld2Classic\src\src\Shared\PC\FDAudio\fqeffect.h"
#include <guiddef.h>
#include <memory\memorypool.h>
#include <apiset.h>
#include <pshpack1.h>
#include <Mathlib\vector4.h>
#include <Mathlib\mathlibdll.h>
#include <Mathlib\fastmath.h>
#include <joystickapi.h>
#include <math.h>
#include "\HICKORY-PCSHIP\Homeworld2Classic\src\src\Shared\PC\FDAudio\fquant.h"
#include <rpcndr.h>
#include <rpcnsip.h>
#include <Mathlib\mathutil.h>
#include <objidlbase.h>
#include <seinterface2\sedefines.h>
#include <oleidl.h>
#include <seinterface2\seinterfacefunc.h>
#include <unknwnbase.h>
#include <unknwn.h>
#include <wtypes.h>
#include <msxml.h>
#include <mmiscapi2.h>

/* ---------- constants */

/* ---------- definitions */

class `anonymous-namespace'::MTLock
{
private:
    _RTL_CRITICAL_SECTION &m_cs; // 0x0
public:
    MTLock(_RTL_CRITICAL_SECTION &);
    ~MTLock();
};
static_assert(sizeof(`anonymous-namespace'::MTLock) == 4, "Invalid `anonymous-namespace'::MTLock size");

class `anonymous-namespace'::FDACallback
{
public:
    enum CBType
    {
        CBT_Timer = 0,
        CBT_Eos_2D,
        CBT_Eos_3D,
        CBT_Eos_Stream,
    };
    struct CBParm
    {
        typedef void (*CBFunc)(unsigned long);
        void (*function)(unsigned long); // 0x0
        unsigned long parm; // 0x4
        unsigned long handle; // 0x8
        `anonymous-namespace'::FDACallback::CBType type; // 0xC
    };
    static_assert(sizeof(CBParm) == 16, "Invalid CBParm size");
private:
    _RTL_CRITICAL_SECTION m_cbMultiThread; // 0x0
    `anonymous-namespace'::FDACallback::CBParm m_cbArray[46]; // 0x18
    FDACallback();
public:
    ~FDACallback();
    static `anonymous-namespace'::FDACallback Instance;
    void RmvCB(unsigned long, `anonymous-namespace'::FDACallback::CBType);
    void AddCB(unsigned long, void (*)(unsigned long), unsigned long, `anonymous-namespace'::FDACallback::CBType);
private:
    static void DoCB(unsigned long, `anonymous-namespace'::FDACallback::CBType);
public:
    static void DoCBMMTimer(unsigned __int32, unsigned __int32, unsigned long, unsigned long, unsigned long);
    static void DoCBTimer(unsigned long);
    static void DoCBEos2D(unsigned long);
    static void DoCBEos3D(unsigned long);
    static void DoCBEosStream(unsigned long);
};
static_assert(sizeof(`anonymous-namespace'::FDACallback) == 760, "Invalid `anonymous-namespace'::FDACallback size");

typedef unsigned __int32 MMRESULT;
typedef void TIMECALLBACK(unsigned __int32, unsigned __int32, unsigned long, unsigned long, unsigned long);
typedef void (*LPTIMECALLBACK)(unsigned __int32, unsigned __int32, unsigned long, unsigned long, unsigned long);
typedef tWAVEFORMATEX WAVEFORMATEX;
typedef tWAVEFORMATEX *LPWAVEFORMATEX;
typedef tWAVEFORMATEX const *LPCWAVEFORMATEX;
typedef __int32 sdword;
typedef float real32;
typedef wchar_t OLECHAR;
typedef wchar_t *LPOLESTR;
typedef wchar_t const *LPCOLESTR;
typedef double DOUBLE;
typedef long SCODE;
typedef tagBLOB BLOB;
typedef IUnknown *LPUNKNOWN;
typedef tagSTATSTG STATSTG;
typedef tagPROPVARIANT PROPVARIANT;
typedef double DATE;
typedef tagCY CY;
typedef tagDEC DECIMAL;
typedef wchar_t *BSTR;
typedef short VARIANT_BOOL;
typedef tagBSTRBLOB BSTRBLOB;
typedef tagCLIPDATA CLIPDATA;
typedef unsigned short VARTYPE;
typedef wchar_t **SNB;
typedef tagSAFEARRAYBOUND SAFEARRAYBOUND;
typedef tagSAFEARRAY SAFEARRAY;
typedef tagSAFEARRAY *LPSAFEARRAY;
typedef tagVARIANT VARIANT;
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
typedef IDirectSound *LPDIRECTSOUND;
typedef IDirectSoundBuffer *LPDIRECTSOUNDBUFFER;
typedef IDirectSound8 *LPDIRECTSOUND8;
typedef _DSCAPS *LPDSCAPS;
typedef _DSBCAPS *LPDSBCAPS;
typedef _DSBUFFERDESC DSBUFFERDESC;
typedef _DSBUFFERDESC const *LPCDSBUFFERDESC;
typedef unsigned long FHandle;
typedef `anonymous-namespace'::MTLock ?A0xf0376532::MTLock;
typedef `anonymous-namespace'::FDACallback ?A0xf0376532::FDACallback;
typedef `anonymous-namespace'::FDACallback::CBParm ?A0xf0376532::FDACallback::CBParm;
typedef void (*CBFunc)(unsigned long);
typedef `anonymous-namespace'::FDACallback::CBType ?A0xf0376532::FDACallback::CBType;

/* ---------- prototypes */

extern Channel *GetChannel(long handle);

/* ---------- globals */

extern MixerData s_mixerData; // 0x1000A418
extern seInterfaceFunc *s_functions; // 0x1000DC54

/* ---------- private variables */

_static
{
    extern MemoryPoolObj s_allocsPool; // 0x1000DF50
}

/* ---------- public code */

_extern Channel *_sub_10003790(long);
Channel *GetChannel(long handle) // 0x10003790
{
    mangled_assert("?GetChannel@@YGPAVChannel@@J@Z");
    todo("implement");
    Channel * __result = _sub_10003790(handle);
    return __result;
}

_extern _sub_10002B38(FDAudioDevice *const);
FDAudioDevice::FDAudioDevice() // 0x10002B38
{
    mangled_assert("??0FDAudioDevice@@QAE@XZ");
    todo("implement");
    _sub_10002B38(this);
}

_extern void _sub_10003A75(FDAudioDevice *const);
void FDAudioDevice::Release() // 0x10003A75
{
    mangled_assert("?Release@FDAudioDevice@@UAEXXZ");
    todo("implement");
    _sub_10003A75(this);
}

_extern long _sub_100038C6(FDAudioDevice *const, long, char const *, long, long, long, long, long);
long FDAudioDevice::Open(long, char const *, long, long, long, long, long) // 0x100038C6
{
    mangled_assert("?Open@FDAudioDevice@@UAEJJPBDJJJJJ@Z");
    todo("implement");
    long __result = _sub_100038C6(this, arg, arg, arg, arg, arg, arg, arg);
    return __result;
}

_extern void _sub_10003705(FDAudioDevice *const);
void FDAudioDevice::Close() // 0x10003705
{
    mangled_assert("?Close@FDAudioDevice@@UAEXXZ");
    todo("implement");
    _sub_10003705(this);
}

_extern bool _sub_10003706(FDAudioDevice *const, seModeInfo *);
bool FDAudioDevice::DeviceMode(seModeInfo *) // 0x10003706
{
    mangled_assert("?DeviceMode@FDAudioDevice@@UAE_NPAUseModeInfo@@@Z");
    todo("implement");
    bool __result = _sub_10003706(this, arg);
    return __result;
}

_extern bool _sub_10003A42(FDAudioDevice *const, char const *);
bool FDAudioDevice::ProviderQuery(char const *) // 0x10003A42
{
    mangled_assert("?ProviderQuery@FDAudioDevice@@UAE_NPBD@Z");
    todo("implement");
    bool __result = _sub_10003A42(this, arg);
    return __result;
}

_extern long _sub_100038E7(FDAudioDevice *const, char const *, long);
long FDAudioDevice::ProviderCreate(char const *, long) // 0x100038E7
{
    mangled_assert("?ProviderCreate@FDAudioDevice@@UAEJPBDJ@Z");
    todo("implement");
    long __result = _sub_100038E7(this, arg, arg);
    return __result;
}

_extern void _sub_100039D1(FDAudioDevice *const, long);
void FDAudioDevice::ProviderRelease(long) // 0x100039D1
{
    mangled_assert("?ProviderRelease@FDAudioDevice@@UAEXJ@Z");
    todo("implement");
    _sub_100039D1(this, arg);
}

_extern long _sub_1000377E(FDAudioDevice *const, char const *);
long FDAudioDevice::FilterCreate(char const *) // 0x1000377E
{
    mangled_assert("?FilterCreate@FDAudioDevice@@UAEJPBD@Z");
    todo("implement");
    long __result = _sub_1000377E(this, arg);
    return __result;
}

_extern long _sub_100037AF(FDAudioDevice *const, long, long);
long FDAudioDevice::ListenerCreate(long, long) // 0x100037AF
{
    mangled_assert("?ListenerCreate@FDAudioDevice@@UAEJJJ@Z");
    todo("implement");
    long __result = _sub_100037AF(this, arg, arg);
    return __result;
}

_extern bool _sub_10003BD5(FDAudioDevice *const);
bool FDAudioDevice::SetMode() // 0x10003BD5
{
    mangled_assert("?SetMode@FDAudioDevice@@UAE_NXZ");
    todo("implement");
    bool __result = _sub_10003BD5(this);
    return __result;
}

_extern long _sub_10003BE1(FDAudioDevice *const, void (*)(unsigned long), unsigned long, unsigned long);
long FDAudioDevice::TimerAddFreq(void (*)(unsigned long), unsigned long, unsigned long) // 0x10003BE1
{
    mangled_assert("?TimerAddFreq@FDAudioDevice@@UAEJP6GXK@ZKK@Z");
    todo("implement");
    long __result = _sub_10003BE1(this, arg, arg, arg);
    return __result;
}

_extern long _sub_10003C2C(FDAudioDevice *const, void (*)(unsigned long), float, unsigned long);
long FDAudioDevice::TimerAddPeriod(void (*)(unsigned long), float, unsigned long) // 0x10003C2C
{
    mangled_assert("?TimerAddPeriod@FDAudioDevice@@UAEJP6GXK@ZMK@Z");
    todo("implement");
    long __result = _sub_10003C2C(this, arg, arg, arg);
    return __result;
}

_extern bool _sub_10003C9D(FDAudioDevice *const, long);
bool FDAudioDevice::TimerStart(long) // 0x10003C9D
{
    mangled_assert("?TimerStart@FDAudioDevice@@UAE_NJ@Z");
    todo("implement");
    bool __result = _sub_10003C9D(this, arg);
    return __result;
}

_extern bool _sub_10003C7E(FDAudioDevice *const, long);
bool FDAudioDevice::TimerRemove(long) // 0x10003C7E
{
    mangled_assert("?TimerRemove@FDAudioDevice@@UAE_NJ@Z");
    todo("implement");
    bool __result = _sub_10003C7E(this, arg);
    return __result;
}

_extern long _sub_10002D37(FDAudioDevice *const, long *, long, long);
long FDAudioDevice::ChannelCreate(long *, long, long) // 0x10002D37
{
    mangled_assert("?ChannelCreate@FDAudioDevice@@UAEJPAJJJ@Z");
    todo("implement");
    long __result = _sub_10002D37(this, arg, arg, arg);
    return __result;
}

_extern long _sub_10002F14(FDAudioDevice *const, long *, long);
long FDAudioDevice::ChannelRelease(long *, long) // 0x10002F14
{
    mangled_assert("?ChannelRelease@FDAudioDevice@@UAEJPAJJ@Z");
    todo("implement");
    long __result = _sub_10002F14(this, arg, arg);
    return __result;
}

_extern long _sub_10002F95(FDAudioDevice *const, long *, long);
long FDAudioDevice::ChannelReset(long *, long) // 0x10002F95
{
    mangled_assert("?ChannelReset@FDAudioDevice@@UAEJPAJJ@Z");
    todo("implement");
    long __result = _sub_10002F95(this, arg, arg);
    return __result;
}

_extern long _sub_1000307A(FDAudioDevice *const, long *, long, void *, long, char const *, __int32, __int32, long, long, long);
long FDAudioDevice::ChannelSetData(long *, long, void *, long, char const *, __int32, __int32, long, long, long) // 0x1000307A
{
    mangled_assert("?ChannelSetData@FDAudioDevice@@UAEJPAJJPAXJPBDHHJJJ@Z");
    todo("implement");
    long __result = _sub_1000307A(this, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg);
    return __result;
}

_extern long _sub_10003616(FDAudioDevice *const, long *, long, float);
long FDAudioDevice::ChannelSetVolume(long *, long, float) // 0x10003616
{
    mangled_assert("?ChannelSetVolume@FDAudioDevice@@UAEJPAJJM@Z");
    todo("implement");
    long __result = _sub_10003616(this, arg, arg, arg);
    return __result;
}

_extern long _sub_100036CE(FDAudioDevice *const, long *, long);
long FDAudioDevice::ChannelStop(long *, long) // 0x100036CE
{
    mangled_assert("?ChannelStop@FDAudioDevice@@UAEJPAJJ@Z");
    todo("implement");
    long __result = _sub_100036CE(this, arg, arg);
    return __result;
}

_extern long _sub_10003648(FDAudioDevice *const, long *, long, long);
long FDAudioDevice::ChannelStart(long *, long, long) // 0x10003648
{
    mangled_assert("?ChannelStart@FDAudioDevice@@UAEJPAJJJ@Z");
    todo("implement");
    long __result = _sub_10003648(this, arg, arg, arg);
    return __result;
}

_extern long _sub_10003335(FDAudioDevice *const, long *, long, long, long, long);
long FDAudioDevice::ChannelSetLoop(long *, long, long, long, long) // 0x10003335
{
    mangled_assert("?ChannelSetLoop@FDAudioDevice@@UAEJPAJJJJJ@Z");
    todo("implement");
    long __result = _sub_10003335(this, arg, arg, arg, arg, arg);
    return __result;
}

_extern long _sub_10003577(FDAudioDevice *const, long *, long, long);
long FDAudioDevice::ChannelSetSamplePosition(long *, long, long) // 0x10003577
{
    mangled_assert("?ChannelSetSamplePosition@FDAudioDevice@@UAEJPAJJJ@Z");
    todo("implement");
    long __result = _sub_10003577(this, arg, arg, arg);
    return __result;
}

_extern long _sub_100034CD(FDAudioDevice *const, long *, long, float, float, float, float);
long FDAudioDevice::ChannelSetPosition(long *, long, float, float, float, float) // 0x100034CD
{
    mangled_assert("?ChannelSetPosition@FDAudioDevice@@UAEJPAJJMMMM@Z");
    todo("implement");
    long __result = _sub_100034CD(this, arg, arg, arg, arg, arg, arg);
    return __result;
}

_extern long _sub_100035D3(FDAudioDevice *const, long *, long, float, float, float);
long FDAudioDevice::ChannelSetVelocity(long *, long, float, float, float) // 0x100035D3
{
    mangled_assert("?ChannelSetVelocity@FDAudioDevice@@UAEJPAJJMMM@Z");
    todo("implement");
    long __result = _sub_100035D3(this, arg, arg, arg, arg, arg);
    return __result;
}

_extern long _sub_1000316D(FDAudioDevice *const, long *, long, float, float);
long FDAudioDevice::ChannelSetDistances(long *, long, float, float) // 0x1000316D
{
    mangled_assert("?ChannelSetDistances@FDAudioDevice@@UAEJPAJJMM@Z");
    todo("implement");
    long __result = _sub_1000316D(this, arg, arg, arg, arg);
    return __result;
}

_extern long _sub_1000306A(FDAudioDevice *const, long *, long, float, float, float);
long FDAudioDevice::ChannelSetCone(long *, long, float, float, float) // 0x1000306A
{
    mangled_assert("?ChannelSetCone@FDAudioDevice@@UAEJPAJJMMM@Z");
    todo("implement");
    long __result = _sub_1000306A(this, arg, arg, arg, arg, arg);
    return __result;
}

_extern long _sub_1000353D(FDAudioDevice *const, long *, long, long);
long FDAudioDevice::ChannelSetRate(long *, long, long) // 0x1000353D
{
    mangled_assert("?ChannelSetRate@FDAudioDevice@@UAEJPAJJJ@Z");
    todo("implement");
    long __result = _sub_1000353D(this, arg, arg, arg);
    return __result;
}

_extern long _sub_10002D31(FDAudioDevice *const, long *, long, long, void (*)(unsigned long));
long FDAudioDevice::ChannelAddEOSCallback(long *, long, long, void (*)(unsigned long)) // 0x10002D31
{
    mangled_assert("?ChannelAddEOSCallback@FDAudioDevice@@UAEJPAJJJP6GXK@Z@Z");
    todo("implement");
    long __result = _sub_10002D31(this, arg, arg, arg, arg);
    return __result;
}

_extern void _sub_10003815(FDAudioDevice *const, long, float, float, float);
void FDAudioDevice::ListenerSetPosition(long, float, float, float) // 0x10003815
{
    mangled_assert("?ListenerSetPosition@FDAudioDevice@@UAEXJMMM@Z");
    todo("implement");
    _sub_10003815(this, arg, arg, arg, arg);
}

_extern void _sub_1000383C(FDAudioDevice *const, long, float, float, float);
void FDAudioDevice::ListenerSetVelocity(long, float, float, float) // 0x1000383C
{
    mangled_assert("?ListenerSetVelocity@FDAudioDevice@@UAEXJMMM@Z");
    todo("implement");
    _sub_1000383C(this, arg, arg, arg, arg);
}

_extern void _sub_100037D2(FDAudioDevice *const, long, float, float, float, float, float, float);
void FDAudioDevice::ListenerSetOrientation(long, float, float, float, float, float, float) // 0x100037D2
{
    mangled_assert("?ListenerSetOrientation@FDAudioDevice@@UAEXJMMMMMM@Z");
    todo("implement");
    _sub_100037D2(this, arg, arg, arg, arg, arg, arg, arg);
}

_extern void _sub_100037B4(FDAudioDevice *const, long, float *, float *, float *);
void FDAudioDevice::ListenerGetPosition(long, float *, float *, float *) // 0x100037B4
{
    mangled_assert("?ListenerGetPosition@FDAudioDevice@@UAEXJPAM00@Z");
    todo("implement");
    _sub_100037B4(this, arg, arg, arg, arg);
}

_extern long _sub_100033C6(FDAudioDevice *const, long *, long, float, float, float, float, float, float);
long FDAudioDevice::ChannelSetOrientation(long *, long, float, float, float, float, float, float) // 0x100033C6
{
    mangled_assert("?ChannelSetOrientation@FDAudioDevice@@UAEJPAJJMMMMMM@Z");
    todo("implement");
    long __result = _sub_100033C6(this, arg, arg, arg, arg, arg, arg, arg, arg);
    return __result;
}

_extern long _sub_100032FF(FDAudioDevice *const, long *, long, SoundParams::EnvelopePoint const *, long);
long FDAudioDevice::ChannelSetEnvelope(long *, long, SoundParams::EnvelopePoint const *, long) // 0x100032FF
{
    mangled_assert("?ChannelSetEnvelope@FDAudioDevice@@UAEJPAJJPBVEnvelopePoint@SoundParams@@J@Z");
    todo("implement");
    long __result = _sub_100032FF(this, arg, arg, arg, arg);
    return __result;
}

_extern long _sub_100031BC(FDAudioDevice *const, long *, long, SoundParams::EffectContainer const &);
long FDAudioDevice::ChannelSetEffects(long *, long, SoundParams::EffectContainer const &) // 0x100031BC
{
    mangled_assert("?ChannelSetEffects@FDAudioDevice@@UAEJPAJJABVEffectContainer@SoundParams@@@Z");
    todo("implement");
    long __result = _sub_100031BC(this, arg, arg, arg);
    return __result;
}

_extern long _sub_1000300F(FDAudioDevice *const, long *, long, float, long, long);
long FDAudioDevice::ChannelSetCardiod(long *, long, float, long, long) // 0x1000300F
{
    mangled_assert("?ChannelSetCardiod@FDAudioDevice@@UAEJPAJJMJJ@Z");
    todo("implement");
    long __result = _sub_1000300F(this, arg, arg, arg, arg, arg);
    return __result;
}

_extern long _sub_1000317D(FDAudioDevice *const, long *, long, float);
long FDAudioDevice::ChannelSetDopplerFactor(long *, long, float) // 0x1000317D
{
    mangled_assert("?ChannelSetDopplerFactor@FDAudioDevice@@UAEJPAJJM@Z");
    todo("implement");
    long __result = _sub_1000317D(this, arg, arg, arg);
    return __result;
}

_extern long _sub_1000369C(FDAudioDevice *const, long *, long);
long FDAudioDevice::ChannelStatus(long *, long) // 0x1000369C
{
    mangled_assert("?ChannelStatus@FDAudioDevice@@UAEJPAJJ@Z");
    todo("implement");
    long __result = _sub_1000369C(this, arg, arg);
    return __result;
}

_extern long _sub_10002EE0(FDAudioDevice *const, long *, long);
long FDAudioDevice::ChannelPause(long *, long) // 0x10002EE0
{
    mangled_assert("?ChannelPause@FDAudioDevice@@UAEJPAJJ@Z");
    todo("implement");
    long __result = _sub_10002EE0(this, arg, arg);
    return __result;
}

_extern long _sub_10002FDB(FDAudioDevice *const, long *, long);
long FDAudioDevice::ChannelResume(long *, long) // 0x10002FDB
{
    mangled_assert("?ChannelResume@FDAudioDevice@@UAEJPAJJ@Z");
    todo("implement");
    long __result = _sub_10002FDB(this, arg, arg);
    return __result;
}

_extern long _sub_100034BD(FDAudioDevice *const, long *, long, float);
long FDAudioDevice::ChannelSetObstruction(long *, long, float) // 0x100034BD
{
    mangled_assert("?ChannelSetReverb@FDAudioDevice@@UAEJPAJJM@Z");
    todo("implement");
    long __result = _sub_100034BD(this, arg, arg, arg);
    return __result;
}

_extern float _sub_10002ECA(FDAudioDevice *const, long *, long);
float FDAudioDevice::ChannelGetObstruction(long *, long) // 0x10002ECA
{
    mangled_assert("?ChannelGetObstruction@FDAudioDevice@@UAEMPAJJ@Z");
    todo("implement");
    float __result = _sub_10002ECA(this, arg, arg);
    return __result;
}

_extern void _sub_10003CA2(FDAudioDevice *const, float);
void FDAudioDevice::Update(float) // 0x10003CA2
{
    mangled_assert("?Update@FDAudioDevice@@UAEXM@Z");
    todo("implement");
    _sub_10003CA2(this, arg);
}

_extern long _sub_10003BD8(FDAudioDevice *const, void *, void *);
long FDAudioDevice::GetPreference(void *, void *) // 0x10003BD8
{
    mangled_assert("?GetPreference@FDAudioDevice@@UAEJPAX0@Z");
    todo("implement");
    long __result = _sub_10003BD8(this, arg, arg);
    return __result;
}

_extern void *_sub_10003BD0(FDAudioDevice *const, char const *, __int32, __int32);
void *FDAudioDevice::PlayRawWAVE(char const *, __int32, __int32) // 0x10003BD0
{
    mangled_assert("?SetEnvironmentType@FDAudioDevice@@UAEJJJJ@Z");
    todo("implement");
    void * __result = _sub_10003BD0(this, arg, arg, arg);
    return __result;
}

_extern void _sub_10003BDE(FDAudioDevice *const, long);
void FDAudioDevice::ListenerRelease(long) // 0x10003BDE
{
    mangled_assert("?ListenerRelease@FDAudioDevice@@UAEXJ@Z");
    todo("implement");
    _sub_10003BDE(this, arg);
}

_extern void _sub_10003839(FDAudioDevice *const, long, float);
void FDAudioDevice::ListenerSetDistanceFactor(long, float) // 0x10003839
{
    mangled_assert("?ListenerSetDistanceFactor@FDAudioDevice@@UAEXJM@Z");
    todo("implement");
    _sub_10003839(this, arg, arg);
}

_extern long _sub_10002E81(FDAudioDevice *const, long *, long);
long FDAudioDevice::ChannelGetMSPosition(long *, long) // 0x10002E81
{
    mangled_assert("?ChannelGetMSPosition@FDAudioDevice@@UAEJPAJJ@Z");
    todo("implement");
    long __result = _sub_10002E81(this, arg, arg);
    return __result;
}

_extern long _sub_10002E16(FDAudioDevice *const, long *, long);
long FDAudioDevice::ChannelGetBytePosition(long *, long) // 0x10002E16
{
    mangled_assert("?ChannelGetBytePosition@FDAudioDevice@@UAEJPAJJ@Z");
    todo("implement");
    long __result = _sub_10002E16(this, arg, arg);
    return __result;
}

_extern long _sub_10002E34(FDAudioDevice *const, long *, long);
long FDAudioDevice::ChannelGetMSLength(long *, long) // 0x10002E34
{
    mangled_assert("?ChannelGetMSLength@FDAudioDevice@@UAEJPAJJ@Z");
    todo("implement");
    long __result = _sub_10002E34(this, arg, arg);
    return __result;
}

_extern void _sub_10003784(FDAudioDevice *const, seInterfaceFunc *);
void FDAudioDevice::FuncSetup(seInterfaceFunc *) // 0x10003784
{
    mangled_assert("?FuncSetup@FDAudioDevice@@UAEXPAVseInterfaceFunc@@@Z");
    todo("implement");
    _sub_10003784(this, arg);
}

_extern long _sub_10003A87(FDAudioDevice *const, void *, long, void *, long);
long FDAudioDevice::ResamplePCM(void *, long, void *, long) // 0x10003A87
{
    mangled_assert("?ResamplePCM@FDAudioDevice@@UAEJPAXJ0J@Z");
    todo("implement");
    long __result = _sub_10003A87(this, arg, arg, arg, arg);
    return __result;
}

_extern long _sub_10003B35(FDAudioDevice *const, long, long, void *);
long FDAudioDevice::ResampledPCMSize(long, long, void *) // 0x10003B35
{
    mangled_assert("?ResampledPCMSize@FDAudioDevice@@UAEJJJPAX@Z");
    todo("implement");
    long __result = _sub_10003B35(this, arg, arg, arg);
    return __result;
}

/* ---------- private code */
#endif
