#if 0
/* ---------- headers */

#include "decomp.h"
#include <smmintrin.h>
#include <interlockedapi.h>
#include <timezoneapi.h>
#include <stringapiset.h>
#include <reason.h>
#include <type_traits>
#include <tmmintrin.h>
#include <xlocinfo>
#include <pmmintrin.h>
#include <xlocinfo.h>
#include <Mathlib\mathutil.h>
#include <emmintrin.h>
#include <ctype.h>
#include <xmmintrin.h>
#include <securitybaseapi.h>
#include <rpcsal.h>
#include <Camera\pch.h>
#include <mmintrin.h>
#include <crtdefs.h>
#include <xutility>
#include <vector>
#include <utility>
#include <xatomic0.h>
#include <xmemory>
#include <iosfwd>
#include <oleauto.h>
#include <crtdbg.h>
#include <share.h>
#include <winioctl.h>
#include <servprov.h>
#include <Mathlib\vector3.h>
#include <debugapi.h>
#include <fileapi.h>
#include <cguid.h>
#include <cderr.h>
#include <dde.h>
#include <boost\scoped_ptr.hpp>
#include <xrefwrap>
#include <boost\assert.hpp>
#include <new>
#include <assert.h>
#include <wtime.inl>
#include <xstddef>
#include <boost\checked_delete.hpp>
#include <windows.h>
#include <threadpoollegacyapiset.h>
#include <rpcnterr.h>
#include <wtypesbase.h>
#include <winspool.h>
#include <winapifamily.h>
#include <rpcnsi.h>
#include <rpcasync.h>
#include <prsht.h>
#include <sdkddkver.h>
#include <Mathlib\mathlibdll.h>
#include <excpt.h>
#include <poppack.h>
#include <Mathlib\fastmath.h>
#include <xdebug>
#include <mmiscapi2.h>
#include <profileapi.h>
#include <winefs.h>
#include <synchapi.h>
#include <inaddr.h>
#include <mmsystem.h>
#include <typeinfo>
#include <mmsyscom.h>
#include <utilapiset.h>
#include <heapapi.h>
#include <processthreadsapi.h>
#include <xfacet>
#include <memory>
#include <util\types.h>
#include <stdint.h>
#include <pshpack8.h>
#include <winnetwk.h>
#include <debug\ctassert.h>
#include <wnnc.h>
#include <oleidl.h>
#include <mcx.h>
#include <stdarg.h>
#include <bemapiset.h>
#include <rpcdcep.h>
#include <windef.h>
#include <playsoundapi.h>
#include <minwindef.h>
#include <specstrings.h>
#include <handleapi.h>
#include <specstrings_strict.h>
#include <cfloat>
#include <specstrings_undef.h>
#include <float.h>
#include <driverspecs.h>
#include <crtwrn.h>
#include <sdv_driverspecs.h>
#include <threadpoolapiset.h>
#include <assist\typemagic.h>
#include <objidl.h>
#include <msxml.h>
#include <namespaceapi.h>
#include <cstdio>
#include <ktmtypes.h>
#include <stdio.h>
#include <winsmcrd.h>
#include <winbase.h>
#include <wincon.h>
#include <mmiscapi.h>
#include <apisetcconv.h>
#include <mmeapi.h>
#include <minwinbase.h>
#include <math.h>
#include <ammintrin.h>
#include <errhandlingapi.h>
#include <ime_cmodes.h>
#include <mm3dnow.h>
#include <processenv.h>
#include <guiddef.h>
#include <jobapi.h>
#include <apiset.h>
#include <ole2.h>
#include <systemtopologyapi.h>
#include <pshpack1.h>
#include <objbase.h>
#include <wow64apiset.h>
#include <combaseapi.h>
#include <winnls.h>
#include <shellapi.h>
#include <lua\lua.h>
#include <datetimeapi.h>
#include <processtopologyapi.h>
#include <winnt.h>
#include <pshpack2.h>
#include <kernelspecs.h>
#include <libloaderapi.h>
#include <basetsd.h>
#include <sysinfoapi.h>
#include <objidlbase.h>
#include <winreg.h>
#include <ncrypt.h>
#include <Engine\screenshot.h>
#include <unknwnbase.h>
#include <locale.h>
#include <winsock.h>
#include <oaidl.h>
#include <nb30.h>
#include <commdlg.h>
#include <system_error>
#include <cerrno>
#include <timeapi.h>
#include <errno.h>
#include <dpapi.h>
#include <propidl.h>
#include <unknwn.h>
#include <platform\cmdline.h>
#include <securityappcontainer.h>
#include <platform\platformexports.h>
#include <fibersapi.h>
#include <imm.h>
#include <cwchar>
#include <intrin.h>
#include <wchar.h>
#include <setjmp.h>
#include <winver.h>
#include <winscard.h>
#include <verrsrc.h>
#include <wtypes.h>
#include <rpcndr.h>
#include <realtimeapiset.h>
#include <tvout.h>
#include <rpcnsip.h>
#include <cstdlib>
#include <mciapi.h>
#include <stralign.h>
#include <luaconfig\luaconfig.h>
#include <streambuf>
#include <winuser.h>
#include <string>
#include <xiosbase>
#include <iterator>
#include <swprintf.inl>
#include <xlocale>
#include <istream>
#include <cstring>
#include <consoleapi.h>
#include <ostream>
#include <stdexcept>
#include <namedpipeapi.h>
#include <ioapiset.h>
#include <winsvc.h>
#include <ios>
#include <xstring>
#include <xlocnum>
#include <xmemory0>
#include <memoryapi.h>
#include <dlgs.h>
#include <winperf.h>
#include <climits>
#include <limits>
#include <cmath>
#include <ymath.h>
#include <xtgmath.h>
#include <wingdi.h>
#include <rpc.h>
#include <urlmon.h>
#include <Camera\OrbitParameters.h>
#include <pshpack4.h>
#include <joystickapi.h>
#include <rpcdce.h>
#include <winerror.h>
#include <Camera\CameraControl.h>
#include <bcrypt.h>
#include <Mathlib\vector2.h>
#include <ddeml.h>
#include <lzexpand.h>
#include <immintrin.h>
#include <wmmintrin.h>
#include <wincrypt.h>
#include <nmmintrin.h>

/* ---------- constants */

/* ---------- definitions */

struct CameraControl::loadTuning::__l5::TuningValues
{
    char const *name; // 0x0
    unsigned __int32 index; // 0x4
};
static_assert(sizeof(CameraControl::loadTuning::__l5::TuningValues) == 8, "Invalid CameraControl::loadTuning::__l5::TuningValues size");

/* ---------- prototypes */

extern void Start360Screenshot();

/* ---------- globals */

extern bool g_bTakeScreenshot; // 0x84B939
extern float g_numOrbitScreenShots; // 0x83DB54
extern bool g_360Screenshot; // 0x84B938

/* ---------- private variables */

_static
{
    extern float const k_maxDeclination; // 0x7B36DC
    extern float const k_minDeclination; // 0x7B36E0
    extern __int32 s_nNumShotsTaken; // 0x84B93C
    extern long long s_lastScreenshotTime; // 0x84B940
    extern float s_flDegreesPerShot; // 0x84B948
    extern std::piecewise_construct_t piecewise_construct; // 0x84B93A
    extern std::allocator_arg_t allocator_arg; // 0x84B93B
}

/* ---------- public code */

CameraControl::CameraControl() // 0x668495
{
    mangled_assert("??0CameraControl@@QAE@XZ");
    todo("implement");
}

void CameraControl::initTuning() // 0x6687B8
{
    mangled_assert("?initTuning@CameraControl@@AAEXXZ");
    todo("implement");
}

void CameraControl::mouseMoved(float const, float const) // 0x6688C6
{
    mangled_assert("?mouseMoved@CameraControl@@QAEXMM@Z");
    todo("implement");
}

void CameraControl::setZoomFactor(float) // 0x6689FD
{
    mangled_assert("?setZoomFactor@CameraControl@@QAEXM@Z");
    todo("implement");
}

void CameraControl::zoom(bool) // 0x668A0B
{
    mangled_assert("?zoom@CameraControl@@QAEX_N@Z");
    todo("implement");
}

void CameraControl::mouseWheelZoom(OrbitParameters &, float const) // 0x6688DE
{
    mangled_assert("?mouseWheelZoom@CameraControl@@AAEXAAVOrbitParameters@@M@Z");
    todo("implement");
}

void Start360Screenshot() // 0x6684C2
{
    mangled_assert("?Start360Screenshot@@YGXXZ");
    todo("implement");
}

void CameraControl::execute(OrbitParameters &, float const, bool const, bool const, float &) // 0x668512
{
    mangled_assert("?execute@CameraControl@@QAEXAAVOrbitParameters@@M_N1AAM@Z");
    todo("implement");
}

bool CameraControl::loadTuning(char const *) // 0x6687DC
{
    mangled_assert("?loadTuning@CameraControl@@QAE_NPBD@Z");
    todo("implement");
}

/* ---------- private code */
#endif
