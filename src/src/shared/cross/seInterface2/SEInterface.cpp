#if 0
/* ---------- headers */

#include "decomp.h"
#include <crtdefs.h>
#include <seInterface2\PatchID.h>
#include <seInterface2\PatchBase.h>
#include <seInterface2\SampleID.h>
#include <seInterface2\SoundParams.h>
#include <seInterface2\SampleBase.h>
#include <poppack.h>
#include <rpcdcep.h>
#include <vector>
#include <new>
#include <servprov.h>
#include <xmemory>
#include <xmemory0>
#include <objidl.h>
#include <xstddef>
#include <seInterface2\sePatchInfoList.h>
#include <pshpack8.h>
#include <type_traits>
#include <xstring>
#include <seInterface2\sedefinesshared.h>
#include <xutility>
#include <iosfwd>
#include <rpcndr.h>
#include <apisetcconv.h>
#include <rpcnsip.h>
#include <io.h>
#include <objidlbase.h>
#include <seInterface2\sedevice.h>
#include <oleidl.h>
#include <unknwnbase.h>
#include <guiddef.h>
#include <apiset.h>
#include <pshpack1.h>
#include <unknwn.h>
#include <wtypes.h>
#include <msxml.h>
#include <seInterface2\senull.h>
#include <rpcsal.h>
#include <dsound.h>
#include <objbase.h>
#include <rpc.h>
#include <rpcdce.h>
#include <combaseapi.h>
#include <oaidl.h>
#include "src\Src\Shared\PC\seInterface2\pch.h"
#include <seInterface2\SEInterface.h>
#include <mmreg.h>
#include <propidl.h>
#include <seInterface2\seinterfacefunc.h>
#include <seInterface2\sedefines.h>
#include <seInterface2\seinclude.h>
#include <seInterface2\Channel.h>
#include <wtypesbase.h>
#include <fileio\platform.h>
#include <fileio\fileioexports.h>
#include <cguid.h>
#include <rpcnterr.h>
#include <rpcnsi.h>
#include <rpcasync.h>
#include <urlmon.h>

/* ---------- constants */

/* ---------- definitions */

typedef seDeviceInfo const &(*seInspectDLL)(__int32 &, __int32 &);
typedef seDevice *(*seCreateDevice)();

/* ---------- prototypes */

/* ---------- globals */

extern seInterface *seInterface::s_instance; // 0x84CA94

/* ---------- private variables */

/* ---------- public code */

seInterface::seInterface() // 0x6BF654
{
    mangled_assert("??0seInterface@@IAE@XZ");
    todo("implement");
}

_inline seInterface::seInterfacePrivate::seInterfacePrivate() // 0x6BF7C4
{
    mangled_assert("??0seInterfacePrivate@seInterface@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

seInterface::~seInterface() // 0x6BF83C
{
    mangled_assert("??1seInterface@@MAE@XZ");
    todo("implement");
}

_inline seInterface::seInterfacePrivate::~seInterfacePrivate() // 0x6BF8A1
{
    mangled_assert("??1seInterfacePrivate@seInterface@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

bool seInterface::IsInitialized() // 0x6C0142
{
    mangled_assert("?IsInitialized@seInterface@@SG_NXZ");
    todo("implement");
}

bool seInterface::GetDeviceMode(seModeInfo *) // 0x6BFDDB
{
    mangled_assert("?GetDeviceMode@seInterface@@QAE_NPAUseModeInfo@@@Z");
    todo("implement");
}

__int32 seInterface::SpeakerMode() // 0x6C0381
{
    mangled_assert("?SpeakerMode@seInterface@@QAEHXZ");
    todo("implement");
}

long seInterface::Initialize(char const *driverPath, long hAppWnd, seDestModeInfo *modeinfo, seInterfaceFunc *pfuncs, char const *driverName) // 0x6BFE08
{
    mangled_assert("?Initialize@seInterface@@SGJPBDJPAUseDestModeInfo@@PAVseInterfaceFunc@@0@Z");
    todo("implement");
}

long seInterface::CreateDestination(long, char const *, long, long, seDestModeInfo *, bool) // 0x6BFA09
{
    mangled_assert("?CreateDestination@seInterface@@QAEJJPBDJJPAUseDestModeInfo@@_N@Z");
    todo("implement");
}

long seInterface::DestinationStop(long, float) // 0x6BFBE7
{
    mangled_assert("?DestinationStop@seInterface@@QAEJJM@Z");
    todo("implement");
}

long seInterface::internalDestinationStop(seInterface::Destination *, float) // 0x6C0A28
{
    mangled_assert("?internalDestinationStop@seInterface@@AAEJPAVDestination@1@M@Z");
    todo("implement");
}

long seInterface::DestroyDestination(long) // 0x6BFCCC
{
    mangled_assert("?DestroyDestination@seInterface@@QAEJJ@Z");
    todo("implement");
}

void seInterface::internalDestinationDestroy(seInterface::Destination *) // 0x6C09C4
{
    mangled_assert("?internalDestinationDestroy@seInterface@@AAEXPAVDestination@1@@Z");
    todo("implement");
}

long seInterface::DestinationChansInUse(long) // 0x6BFBD0
{
    mangled_assert("?DestinationChansInUse@seInterface@@QAEJJ@Z");
    todo("implement");
}

seDevice *seInterface::FindProvider(char const *) // 0x6BFCD2
{
    mangled_assert("?FindProvider@seInterface@@AAEPAVseDevice@@PBD@Z");
    todo("implement");
}

bool seInterface::DestinationSupported(char const *) // 0x6BFC41
{
    mangled_assert("?DestinationSupported@seInterface@@QAE_NPBD@Z");
    todo("implement");
}

std::vector<seDeviceInfo *,std::allocator<seDeviceInfo *> > const &seInterface::InspectDevices(char const *, char const *) // 0x6BFF77
{
    mangled_assert("?InspectDevices@seInterface@@AAEABV?$vector@PAUseDeviceInfo@@V?$allocator@PAUseDeviceInfo@@@std@@@std@@PBD0@Z");
    todo("implement");
}

void seInterface::Shutdown() // 0x6C02A9
{
    mangled_assert("?Shutdown@seInterface@@QAEXXZ");
    todo("implement");
}

void seInterface::ListenerSetPosition(long, float, float, float) // 0x6C01A7
{
    mangled_assert("?ListenerSetPosition@seInterface@@QAEXJMMM@Z");
    todo("implement");
}

void seInterface::ListenerSetVelocity(long, float, float, float) // 0x6C01E8
{
    mangled_assert("?ListenerSetVelocity@seInterface@@QAEXJMMM@Z");
    todo("implement");
}

void seInterface::ListenerSetOrientation(long, float, float, float, float, float, float) // 0x6C0145
{
    mangled_assert("?ListenerSetOrientation@seInterface@@QAEXJMMMMMM@Z");
    todo("implement");
}

void seInterface::fadeTimerCallback(unsigned long info) // 0x6C0973
{
    mangled_assert("?fadeTimerCallback@seInterface@@SGXK@Z");
    todo("implement");
}

void seInterface::Update(float) // 0x6C03AB
{
    mangled_assert("?Update@seInterface@@QAEXM@Z");
    todo("implement");
}

void *seInterface::PlayRawWAVE(char const *, __int32, __int32) // 0x6C0229
{
    mangled_assert("?PlayRawWAVE@seInterface@@QAEPAXPBDHH@Z");
    todo("implement");
}

void seInterface::StopRawWAVE(void *) // 0x6C0385
{
    mangled_assert("?StopRawWAVE@seInterface@@QAEXPAX@Z");
    todo("implement");
}

long seInterface::SetEnvironmentType(long) // 0x6C0251
{
    mangled_assert("?SetEnvironmentType@seInterface@@QAEJJ@Z");
    todo("implement");
}

long seInterface::SetEnvironmentType(long, long) // 0x6C0283
{
    mangled_assert("?SetEnvironmentType@seInterface@@QAEJJJ@Z");
    todo("implement");
}

seInterface::Destination *seInterface::GetDestination(long) // 0x6BFDB3
{
    mangled_assert("?GetDestination@seInterface@@IAEPAVDestination@1@J@Z");
    todo("implement");
}

/* ---------- private code */
#endif
