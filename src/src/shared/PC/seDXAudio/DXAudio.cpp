#if 0
/* ---------- headers */

#include "decomp.h"
#include <rpcndr.h>
#include <rpcnsip.h>
#include <mmsystem.h>
#include <mmsyscom.h>
#include <memory\memorylib.h>
#include "\HICKORY-PCSHIP\Homeworld2Classic\src\src\Shared\PC\seDXAudio\pch.h"
#include "\HICKORY-PCSHIP\Homeworld2Classic\src\src\Shared\PC\seDXAudio\DXAudio.h"
#include <objidlbase.h>
#include <seinterface2\sedevice.h>
#include <oleidl.h>
#include <seinterface2\sedefinesshared.h>
#include <unknwnbase.h>
#include <playsoundapi.h>
#include <unknwn.h>
#include <wtypes.h>
#include <msxml.h>
#include <mmiscapi.h>
#include <mmeapi.h>
#include <rpcsal.h>
#include <poppack.h>
#include "\HICKORY-PCSHIP\Homeworld2Classic\src\src\Shared\PC\seDXAudio\dxaudiotypes.h"
#include <dsound.h>
#include <objbase.h>
#include <rpc.h>
#include <seinterface2\soundparams.h>
#include <rpcdce.h>
#include <combaseapi.h>
#include <pshpack8.h>
#include <oaidl.h>
#include <assist\typemagic.h>
#include <propidl.h>
#include <Mathlib\vector3.h>
#include <util\types.h>
#include <timeapi.h>
#include <wtypesbase.h>
#include <cguid.h>
#include <apisetcconv.h>
#include <mciapi.h>
#include <rpcnterr.h>
#include <rpcnsi.h>
#include <rpcasync.h>
#include <guiddef.h>
#include <urlmon.h>
#include <apiset.h>
#include <pshpack1.h>
#include <Mathlib\vector4.h>
#include <Mathlib\mathlibdll.h>
#include <Mathlib\fastmath.h>
#include <joystickapi.h>
#include <memory\memorypool.h>
#include <math.h>
#include <rpcdcep.h>
#include <servprov.h>
#include <objidl.h>
#include <seinterface2\sedefines.h>
#include <seinterface2\seinterfacefunc.h>
#include <Mathlib\mathutil.h>
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

class `anonymous-namespace'::DXACallback
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
        `anonymous-namespace'::DXACallback::CBType type; // 0xC
    };
    static_assert(sizeof(CBParm) == 16, "Invalid CBParm size");
private:
    _RTL_CRITICAL_SECTION m_cbMultiThread; // 0x0
    `anonymous-namespace'::DXACallback::CBParm m_cbArray[46]; // 0x18
    DXACallback();
public:
    ~DXACallback();
    static `anonymous-namespace'::DXACallback Instance;
    void RmvCB(unsigned long, `anonymous-namespace'::DXACallback::CBType);
    void AddCB(unsigned long, void (*)(unsigned long), unsigned long, `anonymous-namespace'::DXACallback::CBType);
private:
    static void DoCB(unsigned long, `anonymous-namespace'::DXACallback::CBType);
public:
    static void DoCBMMTimer(unsigned __int32, unsigned __int32, unsigned long, unsigned long, unsigned long);
    static void DoCBTimer(unsigned long);
    static void DoCBEos2D(unsigned long);
    static void DoCBEos3D(unsigned long);
    static void DoCBEosStream(unsigned long);
};
static_assert(sizeof(`anonymous-namespace'::DXACallback) == 760, "Invalid `anonymous-namespace'::DXACallback size");

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
typedef `anonymous-namespace'::MTLock ?A0xf8872129::MTLock;
typedef `anonymous-namespace'::DXACallback ?A0xf8872129::DXACallback;
typedef `anonymous-namespace'::DXACallback::CBParm ?A0xf8872129::DXACallback::CBParm;
typedef void (*CBFunc)(unsigned long);
typedef `anonymous-namespace'::DXACallback::CBType ?A0xf8872129::DXACallback::CBType;

/* ---------- prototypes */

extern Channel *GetChannel(long handle);

/* ---------- globals */

extern MixerData s_mixerData; // 0x10006388
extern seInterfaceFunc *s_functions; // 0x10006FBC

/* ---------- private variables */

_static
{
    extern MemoryPoolObj s_allocsPool; // 0x100072B8
}

/* ---------- public code */

_extern Channel *_sub_10002CA5(long);
Channel *GetChannel(long handle) // 0x10002CA5
{
    mangled_assert("?GetChannel@@YGPAVChannel@@J@Z");
    todo("implement");
    Channel * __result = _sub_10002CA5(handle);
    return __result;
}

_extern _sub_100022D8(DXAudioDevice *const);
DXAudioDevice::DXAudioDevice() // 0x100022D8
{
    mangled_assert("??0DXAudioDevice@@QAE@XZ");
    todo("implement");
    _sub_100022D8(this);
}

_extern void _sub_10002F7D(DXAudioDevice *const);
void DXAudioDevice::Release() // 0x10002F7D
{
    mangled_assert("?Release@DXAudioDevice@@UAEXXZ");
    todo("implement");
    _sub_10002F7D(this);
}

_extern long _sub_10002DE1(DXAudioDevice *const, long, char const *, long, long, long, long, long);
long DXAudioDevice::Open(long, char const *, long, long, long, long, long) // 0x10002DE1
{
    mangled_assert("?Open@DXAudioDevice@@UAEJJPBDJJJJJ@Z");
    todo("implement");
    long __result = _sub_10002DE1(this, arg, arg, arg, arg, arg, arg, arg);
    return __result;
}

_extern void _sub_10002C1D(DXAudioDevice *const);
void DXAudioDevice::Close() // 0x10002C1D
{
    mangled_assert("?Close@DXAudioDevice@@UAEXXZ");
    todo("implement");
    _sub_10002C1D(this);
}

_extern bool _sub_10002C1E(DXAudioDevice *const, seModeInfo *);
bool DXAudioDevice::DeviceMode(seModeInfo *) // 0x10002C1E
{
    mangled_assert("?DeviceMode@DXAudioDevice@@UAE_NPAUseModeInfo@@@Z");
    todo("implement");
    bool __result = _sub_10002C1E(this, arg);
    return __result;
}

_extern bool _sub_10002F4A(DXAudioDevice *const, char const *);
bool DXAudioDevice::ProviderQuery(char const *) // 0x10002F4A
{
    mangled_assert("?ProviderQuery@DXAudioDevice@@UAE_NPBD@Z");
    todo("implement");
    bool __result = _sub_10002F4A(this, arg);
    return __result;
}

_extern long _sub_10002DEF(DXAudioDevice *const, char const *, long);
long DXAudioDevice::ProviderCreate(char const *, long) // 0x10002DEF
{
    mangled_assert("?ProviderCreate@DXAudioDevice@@UAEJPBDJ@Z");
    todo("implement");
    long __result = _sub_10002DEF(this, arg, arg);
    return __result;
}

_extern void _sub_10002ED9(DXAudioDevice *const, long);
void DXAudioDevice::ProviderRelease(long) // 0x10002ED9
{
    mangled_assert("?ProviderRelease@DXAudioDevice@@UAEXJ@Z");
    todo("implement");
    _sub_10002ED9(this, arg);
}

_extern long _sub_10002C93(DXAudioDevice *const, char const *);
long DXAudioDevice::FilterCreate(char const *) // 0x10002C93
{
    mangled_assert("?FilterCreate@DXAudioDevice@@UAEJPBD@Z");
    todo("implement");
    long __result = _sub_10002C93(this, arg);
    return __result;
}

_extern long _sub_10002CCA(DXAudioDevice *const, long, long);
long DXAudioDevice::ListenerCreate(long, long) // 0x10002CCA
{
    mangled_assert("?ListenerCreate@DXAudioDevice@@UAEJJJ@Z");
    todo("implement");
    long __result = _sub_10002CCA(this, arg, arg);
    return __result;
}

_extern bool _sub_100030DD(DXAudioDevice *const);
bool DXAudioDevice::SetMode() // 0x100030DD
{
    mangled_assert("?SetMode@DXAudioDevice@@UAE_NXZ");
    todo("implement");
    bool __result = _sub_100030DD(this);
    return __result;
}

_extern long _sub_100030E3(DXAudioDevice *const, void (*)(unsigned long), unsigned long, unsigned long);
long DXAudioDevice::TimerAddFreq(void (*)(unsigned long), unsigned long, unsigned long) // 0x100030E3
{
    mangled_assert("?TimerAddFreq@DXAudioDevice@@UAEJP6GXK@ZKK@Z");
    todo("implement");
    long __result = _sub_100030E3(this, arg, arg, arg);
    return __result;
}

_extern long _sub_1000312E(DXAudioDevice *const, void (*)(unsigned long), float, unsigned long);
long DXAudioDevice::TimerAddPeriod(void (*)(unsigned long), float, unsigned long) // 0x1000312E
{
    mangled_assert("?TimerAddPeriod@DXAudioDevice@@UAEJP6GXK@ZMK@Z");
    todo("implement");
    long __result = _sub_1000312E(this, arg, arg, arg);
    return __result;
}

_extern bool _sub_1000319F(DXAudioDevice *const, long);
bool DXAudioDevice::TimerStart(long) // 0x1000319F
{
    mangled_assert("?TimerStart@DXAudioDevice@@UAE_NJ@Z");
    todo("implement");
    bool __result = _sub_1000319F(this, arg);
    return __result;
}

_extern bool _sub_10003180(DXAudioDevice *const, long);
bool DXAudioDevice::TimerRemove(long) // 0x10003180
{
    mangled_assert("?TimerRemove@DXAudioDevice@@UAE_NJ@Z");
    todo("implement");
    bool __result = _sub_10003180(this, arg);
    return __result;
}

_extern long _sub_10002475(DXAudioDevice *const, long *, long, long);
long DXAudioDevice::ChannelCreate(long *, long, long) // 0x10002475
{
    mangled_assert("?ChannelCreate@DXAudioDevice@@UAEJPAJJJ@Z");
    todo("implement");
    long __result = _sub_10002475(this, arg, arg, arg);
    return __result;
}

_extern long _sub_10002622(DXAudioDevice *const, long *, long);
long DXAudioDevice::ChannelRelease(long *, long) // 0x10002622
{
    mangled_assert("?ChannelRelease@DXAudioDevice@@UAEJPAJJ@Z");
    todo("implement");
    long __result = _sub_10002622(this, arg, arg);
    return __result;
}

_extern long _sub_100026A1(DXAudioDevice *const, long *, long);
long DXAudioDevice::ChannelReset(long *, long) // 0x100026A1
{
    mangled_assert("?ChannelReset@DXAudioDevice@@UAEJPAJJ@Z");
    todo("implement");
    long __result = _sub_100026A1(this, arg, arg);
    return __result;
}

_extern long _sub_10002759(DXAudioDevice *const, long *, long, void *, long, char const *, __int32, __int32, long, long, long);
long DXAudioDevice::ChannelSetData(long *, long, void *, long, char const *, __int32, __int32, long, long, long) // 0x10002759
{
    mangled_assert("?ChannelSetData@DXAudioDevice@@UAEJPAJJPAXJPBDHHJJJ@Z");
    todo("implement");
    long __result = _sub_10002759(this, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg);
    return __result;
}

_extern long _sub_10002B4F(DXAudioDevice *const, long *, long, float);
long DXAudioDevice::ChannelSetVolume(long *, long, float) // 0x10002B4F
{
    mangled_assert("?ChannelSetVolume@DXAudioDevice@@UAEJPAJJM@Z");
    todo("implement");
    long __result = _sub_10002B4F(this, arg, arg, arg);
    return __result;
}

_extern long _sub_10002BE6(DXAudioDevice *const, long *, long);
long DXAudioDevice::ChannelStop(long *, long) // 0x10002BE6
{
    mangled_assert("?ChannelStop@DXAudioDevice@@UAEJPAJJ@Z");
    todo("implement");
    long __result = _sub_10002BE6(this, arg, arg);
    return __result;
}

_extern long _sub_10002B7A(DXAudioDevice *const, long *, long, long);
long DXAudioDevice::ChannelStart(long *, long, long) // 0x10002B7A
{
    mangled_assert("?ChannelStart@DXAudioDevice@@UAEJPAJJJ@Z");
    todo("implement");
    long __result = _sub_10002B7A(this, arg, arg, arg);
    return __result;
}

_extern long _sub_1000289E(DXAudioDevice *const, long *, long, long, long, long);
long DXAudioDevice::ChannelSetLoop(long *, long, long, long, long) // 0x1000289E
{
    mangled_assert("?ChannelSetLoop@DXAudioDevice@@UAEJPAJJJJJ@Z");
    todo("implement");
    long __result = _sub_1000289E(this, arg, arg, arg, arg, arg);
    return __result;
}

_extern long _sub_10002AC1(DXAudioDevice *const, long *, long, long);
long DXAudioDevice::ChannelSetSamplePosition(long *, long, long) // 0x10002AC1
{
    mangled_assert("?ChannelSetSamplePosition@DXAudioDevice@@UAEJPAJJJ@Z");
    todo("implement");
    long __result = _sub_10002AC1(this, arg, arg, arg);
    return __result;
}

_extern long _sub_10002A09(DXAudioDevice *const, long *, long, float, float, float, float);
long DXAudioDevice::ChannelSetPosition(long *, long, float, float, float, float) // 0x10002A09
{
    mangled_assert("?ChannelSetPosition@DXAudioDevice@@UAEJPAJJMMMM@Z");
    todo("implement");
    long __result = _sub_10002A09(this, arg, arg, arg, arg, arg, arg);
    return __result;
}

_extern long _sub_10002B0A(DXAudioDevice *const, long *, long, float, float, float);
long DXAudioDevice::ChannelSetVelocity(long *, long, float, float, float) // 0x10002B0A
{
    mangled_assert("?ChannelSetVelocity@DXAudioDevice@@UAEJPAJJMMM@Z");
    todo("implement");
    long __result = _sub_10002B0A(this, arg, arg, arg, arg, arg);
    return __result;
}

_extern long _sub_100027F4(DXAudioDevice *const, long *, long, float, float);
long DXAudioDevice::ChannelSetDistances(long *, long, float, float) // 0x100027F4
{
    mangled_assert("?ChannelSetDistances@DXAudioDevice@@UAEJPAJJMM@Z");
    todo("implement");
    long __result = _sub_100027F4(this, arg, arg, arg, arg);
    return __result;
}

_extern long _sub_10002749(DXAudioDevice *const, long *, long, float, float, float);
long DXAudioDevice::ChannelSetCone(long *, long, float, float, float) // 0x10002749
{
    mangled_assert("?ChannelSetCone@DXAudioDevice@@UAEJPAJJMMM@Z");
    todo("implement");
    long __result = _sub_10002749(this, arg, arg, arg, arg, arg);
    return __result;
}

_extern long _sub_10002A78(DXAudioDevice *const, long *, long, long);
long DXAudioDevice::ChannelSetRate(long *, long, long) // 0x10002A78
{
    mangled_assert("?ChannelSetRate@DXAudioDevice@@UAEJPAJJJ@Z");
    todo("implement");
    long __result = _sub_10002A78(this, arg, arg, arg);
    return __result;
}

_extern long _sub_1000246F(DXAudioDevice *const, long *, long, long, void (*)(unsigned long));
long DXAudioDevice::ChannelAddEOSCallback(long *, long, long, void (*)(unsigned long)) // 0x1000246F
{
    mangled_assert("?ChannelAddEOSCallback@DXAudioDevice@@UAEJPAJJJP6GXK@Z@Z");
    todo("implement");
    long __result = _sub_1000246F(this, arg, arg, arg, arg);
    return __result;
}

_extern void _sub_10002D30(DXAudioDevice *const, long, float, float, float);
void DXAudioDevice::ListenerSetPosition(long, float, float, float) // 0x10002D30
{
    mangled_assert("?ListenerSetPosition@DXAudioDevice@@UAEXJMMM@Z");
    todo("implement");
    _sub_10002D30(this, arg, arg, arg, arg);
}

_extern void _sub_10002D57(DXAudioDevice *const, long, float, float, float);
void DXAudioDevice::ListenerSetVelocity(long, float, float, float) // 0x10002D57
{
    mangled_assert("?ListenerSetVelocity@DXAudioDevice@@UAEXJMMM@Z");
    todo("implement");
    _sub_10002D57(this, arg, arg, arg, arg);
}

_extern void _sub_10002CED(DXAudioDevice *const, long, float, float, float, float, float, float);
void DXAudioDevice::ListenerSetOrientation(long, float, float, float, float, float, float) // 0x10002CED
{
    mangled_assert("?ListenerSetOrientation@DXAudioDevice@@UAEXJMMMMMM@Z");
    todo("implement");
    _sub_10002CED(this, arg, arg, arg, arg, arg, arg, arg);
}

_extern void _sub_10002CCF(DXAudioDevice *const, long, float *, float *, float *);
void DXAudioDevice::ListenerGetPosition(long, float *, float *, float *) // 0x10002CCF
{
    mangled_assert("?ListenerGetPosition@DXAudioDevice@@UAEXJPAM00@Z");
    todo("implement");
    _sub_10002CCF(this, arg, arg, arg, arg);
}

_extern long _sub_10002913(DXAudioDevice *const, long *, long, float, float, float, float, float, float);
long DXAudioDevice::ChannelSetOrientation(long *, long, float, float, float, float, float, float) // 0x10002913
{
    mangled_assert("?ChannelSetOrientation@DXAudioDevice@@UAEJPAJJMMMMMM@Z");
    todo("implement");
    long __result = _sub_10002913(this, arg, arg, arg, arg, arg, arg, arg, arg);
    return __result;
}

_extern long _sub_10002869(DXAudioDevice *const, long *, long, SoundParams::EnvelopePoint const *, long);
long DXAudioDevice::ChannelSetEnvelope(long *, long, SoundParams::EnvelopePoint const *, long) // 0x10002869
{
    mangled_assert("?ChannelSetEnvelope@DXAudioDevice@@UAEJPAJJPBVEnvelopePoint@SoundParams@@J@Z");
    todo("implement");
    long __result = _sub_10002869(this, arg, arg, arg, arg);
    return __result;
}

_extern long _sub_10002842(DXAudioDevice *const, long *, long, SoundParams::EffectContainer const &);
long DXAudioDevice::ChannelSetEffects(long *, long, SoundParams::EffectContainer const &) // 0x10002842
{
    mangled_assert("?ChannelSetEffects@DXAudioDevice@@UAEJPAJJABVEffectContainer@SoundParams@@@Z");
    todo("implement");
    long __result = _sub_10002842(this, arg, arg, arg);
    return __result;
}

_extern long _sub_10002714(DXAudioDevice *const, long *, long, float, long, long);
long DXAudioDevice::ChannelSetCardiod(long *, long, float, long, long) // 0x10002714
{
    mangled_assert("?ChannelSetCardiod@DXAudioDevice@@UAEJPAJJMJJ@Z");
    todo("implement");
    long __result = _sub_10002714(this, arg, arg, arg, arg, arg);
    return __result;
}

_extern long _sub_10002804(DXAudioDevice *const, long *, long, float);
long DXAudioDevice::ChannelSetDopplerFactor(long *, long, float) // 0x10002804
{
    mangled_assert("?ChannelSetDopplerFactor@DXAudioDevice@@UAEJPAJJM@Z");
    todo("implement");
    long __result = _sub_10002804(this, arg, arg, arg);
    return __result;
}

_extern long _sub_10002BBB(DXAudioDevice *const, long *, long);
long DXAudioDevice::ChannelStatus(long *, long) // 0x10002BBB
{
    mangled_assert("?ChannelStatus@DXAudioDevice@@UAEJPAJJ@Z");
    todo("implement");
    long __result = _sub_10002BBB(this, arg, arg);
    return __result;
}

_extern long _sub_100025F5(DXAudioDevice *const, long *, long);
long DXAudioDevice::ChannelPause(long *, long) // 0x100025F5
{
    mangled_assert("?ChannelPause@DXAudioDevice@@UAEJPAJJ@Z");
    todo("implement");
    long __result = _sub_100025F5(this, arg, arg);
    return __result;
}

_extern long _sub_100026E7(DXAudioDevice *const, long *, long);
long DXAudioDevice::ChannelResume(long *, long) // 0x100026E7
{
    mangled_assert("?ChannelResume@DXAudioDevice@@UAEJPAJJ@Z");
    todo("implement");
    long __result = _sub_100026E7(this, arg, arg);
    return __result;
}

_extern long _sub_10002AB1(DXAudioDevice *const, long *, long, float);
long DXAudioDevice::ChannelSetObstruction(long *, long, float) // 0x10002AB1
{
    mangled_assert("?ChannelSetReverb@DXAudioDevice@@UAEJPAJJM@Z");
    todo("implement");
    long __result = _sub_10002AB1(this, arg, arg, arg);
    return __result;
}

_extern float _sub_100025DF(DXAudioDevice *const, long *, long);
float DXAudioDevice::ChannelGetObstruction(long *, long) // 0x100025DF
{
    mangled_assert("?ChannelGetObstruction@DXAudioDevice@@UAEMPAJJ@Z");
    todo("implement");
    float __result = _sub_100025DF(this, arg, arg);
    return __result;
}

_extern void _sub_100031A4(DXAudioDevice *const, float);
void DXAudioDevice::Update(float) // 0x100031A4
{
    mangled_assert("?Update@DXAudioDevice@@UAEXM@Z");
    todo("implement");
    _sub_100031A4(this, arg);
}

_extern long _sub_10002CC4(DXAudioDevice *const, void *, void *);
long DXAudioDevice::GetPreference(void *, void *) // 0x10002CC4
{
    mangled_assert("?GetPreference@DXAudioDevice@@UAEJPAX0@Z");
    todo("implement");
    long __result = _sub_10002CC4(this, arg, arg);
    return __result;
}

_extern void *_sub_100030D8(DXAudioDevice *const, char const *, __int32, __int32);
void *DXAudioDevice::PlayRawWAVE(char const *, __int32, __int32) // 0x100030D8
{
    mangled_assert("?SetEnvironmentType@DXAudioDevice@@UAEJJJJ@Z");
    todo("implement");
    void * __result = _sub_100030D8(this, arg, arg, arg);
    return __result;
}

_extern void _sub_100030E0(DXAudioDevice *const, long);
void DXAudioDevice::ListenerRelease(long) // 0x100030E0
{
    mangled_assert("?ListenerRelease@DXAudioDevice@@UAEXJ@Z");
    todo("implement");
    _sub_100030E0(this, arg);
}

_extern void _sub_10002D54(DXAudioDevice *const, long, float);
void DXAudioDevice::ListenerSetDistanceFactor(long, float) // 0x10002D54
{
    mangled_assert("?ListenerSetDistanceFactor@DXAudioDevice@@UAEXJM@Z");
    todo("implement");
    _sub_10002D54(this, arg, arg);
}

_extern long _sub_100025AB(DXAudioDevice *const, long *, long);
long DXAudioDevice::ChannelGetMSPosition(long *, long) // 0x100025AB
{
    mangled_assert("?ChannelGetMSPosition@DXAudioDevice@@UAEJPAJJ@Z");
    todo("implement");
    long __result = _sub_100025AB(this, arg, arg);
    return __result;
}

_extern long _sub_10002553(DXAudioDevice *const, long *, long);
long DXAudioDevice::ChannelGetBytePosition(long *, long) // 0x10002553
{
    mangled_assert("?ChannelGetBytePosition@DXAudioDevice@@UAEJPAJJ@Z");
    todo("implement");
    long __result = _sub_10002553(this, arg, arg);
    return __result;
}

_extern long _sub_10002578(DXAudioDevice *const, long *, long);
long DXAudioDevice::ChannelGetMSLength(long *, long) // 0x10002578
{
    mangled_assert("?ChannelGetMSLength@DXAudioDevice@@UAEJPAJJ@Z");
    todo("implement");
    long __result = _sub_10002578(this, arg, arg);
    return __result;
}

_extern void _sub_10002C99(DXAudioDevice *const, seInterfaceFunc *);
void DXAudioDevice::FuncSetup(seInterfaceFunc *) // 0x10002C99
{
    mangled_assert("?FuncSetup@DXAudioDevice@@UAEXPAVseInterfaceFunc@@@Z");
    todo("implement");
    _sub_10002C99(this, arg);
}

_extern long _sub_10002F8F(DXAudioDevice *const, void *, long, void *, long);
long DXAudioDevice::ResamplePCM(void *, long, void *, long) // 0x10002F8F
{
    mangled_assert("?ResamplePCM@DXAudioDevice@@UAEJPAXJ0J@Z");
    todo("implement");
    long __result = _sub_10002F8F(this, arg, arg, arg, arg);
    return __result;
}

_extern long _sub_1000303D(DXAudioDevice *const, long, long, void *);
long DXAudioDevice::ResampledPCMSize(long, long, void *) // 0x1000303D
{
    mangled_assert("?ResampledPCMSize@DXAudioDevice@@UAEJJJPAX@Z");
    todo("implement");
    long __result = _sub_1000303D(this, arg, arg, arg);
    return __result;
}

/* ---------- private code */
#endif
