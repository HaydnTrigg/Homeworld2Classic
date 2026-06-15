#if 0
/* ---------- headers */

#include "decomp.h"
#include <rpcndr.h>
#include <rpcnsip.h>
#include <mmsystem.h>
#include <mmsyscom.h>
#include "\HICKORY-PCSHIP\Homeworld2Classic\src\src\Shared\PC\seDXAudio\pch.h"
#include "\HICKORY-PCSHIP\Homeworld2Classic\src\src\Shared\PC\seDXAudio\DXAudio.h"
#include <objidlbase.h>
#include <seinterface2\sedevice.h>
#include <oleidl.h>
#include <crtdefs.h>
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
#include <process.h>
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
#include <math.h>
#include <rpcdcep.h>
#include <Mathlib\mathutil.h>
#include <servprov.h>
#include <objidl.h>
#include <seinterface2\sedefines.h>
#include <seinterface2\seinterfacefunc.h>
#include <Mathlib\matrix3.h>
#include <mmiscapi2.h>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */


_static void HELP_FillOutputs(float *pAL, float *pAR, short *pOut, unsigned __int32 outSize, short *pNext, unsigned __int32 nextSize);
_static matrix3 getCameraOrient(vector3 const &cameraUp, vector3 const &cameraLookat);

/* ---------- globals */

/* ---------- private variables */

/* ---------- public code */

long DXAudioDevice::internalStartDSound(HWND__ *, tWAVEFORMATEX *) // 0x10001EBD
{
    mangled_assert("?internalStartDSound@DXAudioDevice@@AAEJPAUHWND__@@PAUtWAVEFORMATEX@@@Z");
    todo("implement");
}

void DXAudioDevice::internalStopDSound() // 0x10001F78
{
    mangled_assert("?internalStopDSound@DXAudioDevice@@AAEXXZ");
    todo("implement");
}

long DXAudioDevice::internalMixerInit(tWAVEFORMATEX *) // 0x10001C09
{
    mangled_assert("?internalMixerInit@DXAudioDevice@@AAEJPAUtWAVEFORMATEX@@@Z");
    todo("implement");
}

long DXAudioDevice::internalCreateDSoundBuffer(tWAVEFORMATEX *) // 0x10001693
{
    mangled_assert("?internalCreateDSoundBuffer@DXAudioDevice@@AAEJPAUtWAVEFORMATEX@@@Z");
    todo("implement");
}

long DXAudioDevice::internalInitMixBuffer(tWAVEFORMATEX *) // 0x10001B92
{
    mangled_assert("?internalInitMixBuffer@DXAudioDevice@@AAEJPAUtWAVEFORMATEX@@@Z");
    todo("implement");
}

unsigned __int32 DXAudioDevice::internalMixerThread(void *dummy) // 0x10001C7A
{
    mangled_assert("?internalMixerThread@DXAudioDevice@@CGIPAX@Z");
    todo("implement");
}

__int32 DXAudioDevice::internalDoMix(void *, unsigned __int32, void *, unsigned __int32) // 0x100016F1
{
    mangled_assert("?internalDoMix@DXAudioDevice@@AAEHPAXI0I@Z");
    todo("implement");
}

long DXAudioDevice::internalChannelOver(Channel *) // 0x10001677
{
    mangled_assert("?internalChannelOver@DXAudioDevice@@AAEJPAVChannel@@@Z");
    todo("implement");
}

float DXAudioDevice::internalGetPanAngle(vector3) // 0x10001A3C
{
    mangled_assert("?internalGetPanAngle@DXAudioDevice@@AAEMVvector3@@@Z");
    todo("implement");
}

void DXAudioDevice::internalCalcVolume(Channel *, float *, float *, float *, unsigned long *) // 0x10001479
{
    mangled_assert("?internalCalcVolume@DXAudioDevice@@AAEXPAVChannel@@PAM11PAK@Z");
    todo("implement");
}

unsigned __int32 DXAudioDevice::internalStreamerThread(void *dummy) // 0x10001F8F
{
    mangled_assert("?internalStreamerThread@DXAudioDevice@@CGIPAX@Z");
    todo("implement");
}

/* ---------- private code */

_static void HELP_FillOutputs(float *pAL, float *pAR, short *pOut, unsigned __int32 outSize, short *pNext, unsigned __int32 nextSize) // 0x10001067
{
    mangled_assert("HELP_FillOutputs");
    todo("implement");
}

_static matrix3 getCameraOrient(vector3 const &cameraUp, vector3 const &cameraLookat) // 0x100011D6
{
    mangled_assert("getCameraOrient");
    todo("implement");
}
#endif
