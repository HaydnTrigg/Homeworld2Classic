#if 0
/* ---------- headers */

#include "decomp.h"
#include <mmsystem.h>
#include <mmsyscom.h>
#include "src\src\Shared\PC\seDXAudio\pch.h"
#include "src\src\Shared\PC\seDXAudio\DXAudio.h"
#include <seinterface2\sedevice.h>
#include <seinterface2\sedefinesshared.h>
#include <playsoundapi.h>
#include <mmiscapi.h>
#include <mmeapi.h>
#include <poppack.h>
#include <seinterface2\soundparams.h>
#include <Mathlib\vector3.h>
#include <util\types.h>
#include <timeapi.h>
#include <apisetcconv.h>
#include <mciapi.h>
#include <apiset.h>
#include <pshpack1.h>
#include <Mathlib\vector4.h>
#include <Mathlib\mathlibdll.h>
#include <Mathlib\fastmath.h>
#include <joystickapi.h>
#include <math.h>
#include <seinterface2\sedefines.h>
#include <seinterface2\seinterfacefunc.h>
#include <mmiscapi2.h>

/* ---------- constants */

/* ---------- definitions */

typedef unsigned char byte;
typedef _DSCAPS DSCAPS;

/* ---------- prototypes */

extern seDeviceInfo &InspectDLL(__int32 &version, __int32 &revision);
extern seDevice *CreateDevice();

/* ---------- globals */

extern DXAudioDevice *s_device; // 0x10006140

/* ---------- private variables */

_static
{
    extern seDeviceInfo s_DeviceInfo; // 0x10006148
}

/* ---------- public code */

seDeviceInfo &InspectDLL(__int32 &version, __int32 &revision) // 0x1000101D
{
    mangled_assert("_InspectDLL");
    todo("implement");
}

seDevice *CreateDevice() // 0x10001000
{
    mangled_assert("_CreateDevice");
    todo("implement");
}

/* ---------- private code */
#endif
