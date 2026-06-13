#if 0
/* ---------- headers */

#include "decomp.h"
#include <rpcsal.h>
#include <mmsystem.h>
#include <mmsyscom.h>
#include "\HICKORY-PCSHIP\Homeworld2Classic\src\src\Shared\PC\FDAudio\pch.h"
#include "\HICKORY-PCSHIP\Homeworld2Classic\src\src\Shared\PC\FDAudio\FDAudio.h"
#include <seinterface2\sedevice.h>
#include <crtdefs.h>
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
#include <process.h>
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
#include <apiset.h>
#include <pshpack1.h>
#include <Mathlib\vector4.h>
#include <Mathlib\mathlibdll.h>
#include <Mathlib\fastmath.h>
#include <joystickapi.h>
#include <Mathlib\mathutil.h>
#include <math.h>
#include "\HICKORY-PCSHIP\Homeworld2Classic\src\src\Shared\PC\FDAudio\fquant.h"
#include <rpcndr.h>
#include <rpcnsip.h>
#include <objidlbase.h>
#include <seinterface2\sedefines.h>
#include <oleidl.h>
#include <seinterface2\seinterfacefunc.h>
#include <unknwnbase.h>
#include <Mathlib\matrix3.h>
#include <unknwn.h>
#include <wtypes.h>
#include <msxml.h>
#include <mmiscapi2.h>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */


_static matrix3 getCameraOrient(vector3 const &cameraUp, vector3 const &cameraLookat);

/* ---------- globals */

/* ---------- private variables */

/* ---------- public code */

_extern long _sub_10002667(FDAudioDevice *const, HWND__ *, tWAVEFORMATEX *);
long FDAudioDevice::internalStartDSound(HWND__ *, tWAVEFORMATEX *) // 0x10002667
{
    mangled_assert("?internalStartDSound@FDAudioDevice@@AAEJPAUHWND__@@PAUtWAVEFORMATEX@@@Z");
    todo("implement");
    long __result = _sub_10002667(this, arg, arg);
    return __result;
}

_extern void _sub_10002722(FDAudioDevice *const);
void FDAudioDevice::internalStopDSound() // 0x10002722
{
    mangled_assert("?internalStopDSound@FDAudioDevice@@AAEXXZ");
    todo("implement");
    _sub_10002722(this);
}

_extern long _sub_10002381(FDAudioDevice *const, tWAVEFORMATEX *);
long FDAudioDevice::internalMixerInit(tWAVEFORMATEX *) // 0x10002381
{
    mangled_assert("?internalMixerInit@FDAudioDevice@@AAEJPAUtWAVEFORMATEX@@@Z");
    todo("implement");
    long __result = _sub_10002381(this, arg);
    return __result;
}

_extern long _sub_10001BC5(FDAudioDevice *const, tWAVEFORMATEX *);
long FDAudioDevice::internalCreateDSoundBuffer(tWAVEFORMATEX *) // 0x10001BC5
{
    mangled_assert("?internalCreateDSoundBuffer@FDAudioDevice@@AAEJPAUtWAVEFORMATEX@@@Z");
    todo("implement");
    long __result = _sub_10001BC5(this, arg);
    return __result;
}

_extern long _sub_1000230A(FDAudioDevice *const, tWAVEFORMATEX *);
long FDAudioDevice::internalInitMixBuffer(tWAVEFORMATEX *) // 0x1000230A
{
    mangled_assert("?internalInitMixBuffer@FDAudioDevice@@AAEJPAUtWAVEFORMATEX@@@Z");
    todo("implement");
    long __result = _sub_1000230A(this, arg);
    return __result;
}

_extern unsigned __int32 _sub_1000244A(void *);
unsigned __int32 FDAudioDevice::internalMixerThread(void *dummy) // 0x1000244A
{
    mangled_assert("?internalMixerThread@FDAudioDevice@@CGIPAX@Z");
    todo("implement");
    unsigned __int32 __result = _sub_1000244A(dummy);
    return __result;
}

_extern __int32 _sub_10001C23(FDAudioDevice *const, void *, unsigned __int32, void *, unsigned __int32);
__int32 FDAudioDevice::internalDoMix(void *, unsigned __int32, void *, unsigned __int32) // 0x10001C23
{
    mangled_assert("?internalDoMix@FDAudioDevice@@AAEHPAXI0I@Z");
    todo("implement");
    __int32 __result = _sub_10001C23(this, arg, arg, arg, arg);
    return __result;
}

_extern long _sub_10001BA9(FDAudioDevice *const, Channel *);
long FDAudioDevice::internalChannelOver(Channel *) // 0x10001BA9
{
    mangled_assert("?internalChannelOver@FDAudioDevice@@AAEJPAVChannel@@@Z");
    todo("implement");
    long __result = _sub_10001BA9(this, arg);
    return __result;
}

_extern float _sub_100021B4(FDAudioDevice *const, vector3);
float FDAudioDevice::internalGetPanAngle(vector3) // 0x100021B4
{
    mangled_assert("?internalGetPanAngle@FDAudioDevice@@AAEMVvector3@@@Z");
    todo("implement");
    float __result = _sub_100021B4(this, arg);
    return __result;
}

_extern void _sub_100019AB(FDAudioDevice *const, Channel *, float *, float *, float *, unsigned long *);
void FDAudioDevice::internalCalcVolume(Channel *, float *, float *, float *, unsigned long *) // 0x100019AB
{
    mangled_assert("?internalCalcVolume@FDAudioDevice@@AAEXPAVChannel@@PAM11PAK@Z");
    todo("implement");
    _sub_100019AB(this, arg, arg, arg, arg, arg);
}

_extern unsigned __int32 _sub_10002739(void *);
unsigned __int32 FDAudioDevice::internalStreamerThread(void *dummy) // 0x10002739
{
    mangled_assert("?internalStreamerThread@FDAudioDevice@@CGIPAX@Z");
    todo("implement");
    unsigned __int32 __result = _sub_10002739(dummy);
    return __result;
}

_extern long _sub_100017B0(FDAudioDevice *const, Channel *);
long FDAudioDevice::internalCalcShipCardiod(Channel *) // 0x100017B0
{
    mangled_assert("?internalCalcShipCardiod@FDAudioDevice@@AAEJPAVChannel@@@Z");
    todo("implement");
    long __result = _sub_100017B0(this, arg);
    return __result;
}

_extern float _sub_100018AA(FDAudioDevice *const, Channel *);
float FDAudioDevice::internalCalcVelocityFactor(Channel *) // 0x100018AA
{
    mangled_assert("?internalCalcVelocityFactor@FDAudioDevice@@AAEMPAVChannel@@@Z");
    todo("implement");
    float __result = _sub_100018AA(this, arg);
    return __result;
}

/* ---------- private code */

_extern matrix3 _sub_1000150D(vector3 const &, vector3 const &);
_static matrix3 getCameraOrient(vector3 const &cameraUp, vector3 const &cameraLookat) // 0x1000150D
{
    mangled_assert("getCameraOrient");
    todo("implement");
    matrix3 __result = _sub_1000150D(cameraUp, cameraLookat);
    return __result;
}
#endif
