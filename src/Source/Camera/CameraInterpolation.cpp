#if 0
/* ---------- headers */

#include "decomp.h"
#include <cfloat>
#include <float.h>
#include <crtwrn.h>
#include <Camera\pch.h>
#include <crtdefs.h>
#include <cstdio>
#include <stdio.h>
#include <Mathlib\vector3.h>
#include <debug\ctassert.h>
#include <ammintrin.h>
#include <Mathlib\matrix3.h>
#include <mm3dnow.h>
#include <new>
#include <xstddef>
#include <Camera\CameraOrbitTarget.h>
#include <Camera\Camera.h>
#include <Camera\Frustum.h>
#include <assist\typemagic.h>
#include <Camera\Plane3.h>
#include <lua\lua.h>
#include <Mathlib\matrix4.h>
#include <locale.h>
#include <system_error>
#include <cerrno>
#include <errno.h>
#include <cwchar>
#include <intrin.h>
#include <wchar.h>
#include <setjmp.h>
#include <cstdlib>
#include <luaconfig\luaconfig.h>
#include <streambuf>
#include <string>
#include <xiosbase>
#include <iterator>
#include <swprintf.inl>
#include <xlocale>
#include <istream>
#include <cstring>
#include <ostream>
#include <stdexcept>
#include <ios>
#include <xstring>
#include <xlocnum>
#include <xmemory0>
#include <Mathlib\vector4.h>
#include <climits>
#include <limits>
#include <cmath>
#include <math.h>
#include <ymath.h>
#include <xtgmath.h>
#include <immintrin.h>
#include <wmmintrin.h>
#include <nmmintrin.h>
#include <smmintrin.h>
#include <type_traits>
#include <tmmintrin.h>
#include <xlocinfo>
#include <pmmintrin.h>
#include <xlocinfo.h>
#include <emmintrin.h>
#include <ctype.h>
#include <xmmintrin.h>
#include <mmintrin.h>
#include <xutility>
#include <vector>
#include <utility>
#include <xatomic0.h>
#include <xmemory>
#include <iosfwd>
#include <crtdbg.h>
#include <share.h>
#include <boost\scoped_ptr.hpp>
#include <xrefwrap>
#include <boost\assert.hpp>
#include <assert.h>
#include <wtime.inl>
#include <boost\checked_delete.hpp>
#include <xdebug>
#include <typeinfo>
#include <xfacet>
#include <memory>
#include <stdint.h>
#include <Camera\CameraInterpolation.h>
#include <Mathlib\mathutil.h>
#include <Camera\OrbitParameters.h>

/* ---------- constants */

/* ---------- definitions */

struct CameraInterpolation::loadTuning::__l5::TuningValues
{
    char const *name; // 0x0
    unsigned __int32 index; // 0x4
};
static_assert(sizeof(CameraInterpolation::loadTuning::__l5::TuningValues) == 8, "Invalid CameraInterpolation::loadTuning::__l5::TuningValues size");

/* ---------- prototypes */

extern void EvalCubic(float &y0, float &m0, float y1, float t);

_static void EvalCubicAngle(float &y0, float &m0, float y1, float t);
_static void CubicLogUnsigned(float &pos, float &speed, float targ, float threshold, float step, float logBase);

/* ---------- globals */

/* ---------- private variables */

_static
{
    extern float const k_CubicEvalTweak; // 0x7B35B8
    extern float const k_CubicEvalAngleTweak; // 0x7B35BC
    extern std::piecewise_construct_t piecewise_construct; // 0x84B932
    extern std::allocator_arg_t allocator_arg; // 0x84B933
}

/* ---------- public code */

_extern _sub_667BA2(CameraInterpolation *const);
CameraInterpolation::CameraInterpolation() // 0x667BA2
{
    mangled_assert("??0CameraInterpolation@@QAE@XZ");
    todo("implement");
    _sub_667BA2(this);
}

_extern void _sub_667EB9(CameraInterpolation *const);
void CameraInterpolation::initTuning() // 0x667EB9
{
    mangled_assert("?initTuning@CameraInterpolation@@AAEXXZ");
    todo("implement");
    _sub_667EB9(this);
}

_extern void _sub_667D75(float &, float &, float, float);
void EvalCubic(float &y0, float &m0, float y1, float t) // 0x667D75
{
    mangled_assert("?EvalCubic@@YGXAAM0MM@Z");
    todo("implement");
    _sub_667D75(y0, m0, y1, t);
}

_extern void _sub_667EDD(CameraInterpolation *const, CameraOrbitTarget &, OrbitParameters const &, float);
void CameraInterpolation::interpolate(CameraOrbitTarget &, OrbitParameters const &, float) // 0x667EDD
{
    mangled_assert("?interpolate@CameraInterpolation@@QAEXAAVCameraOrbitTarget@@ABVOrbitParameters@@M@Z");
    todo("implement");
    _sub_667EDD(this, arg, arg, arg);
}

_extern bool _sub_6683A7(CameraInterpolation *const, char const *);
bool CameraInterpolation::loadTuning(char const *) // 0x6683A7
{
    mangled_assert("?loadTuning@CameraInterpolation@@QAE_NPBD@Z");
    todo("implement");
    bool __result = _sub_6683A7(this, arg);
    return __result;
}

/* ---------- private code */

_extern void _sub_667DF4(float &, float &, float, float);
_static void EvalCubicAngle(float &y0, float &m0, float y1, float t) // 0x667DF4
{
    mangled_assert("EvalCubicAngle");
    todo("implement");
    _sub_667DF4(y0, m0, y1, t);
}

_extern void _sub_667BCD(float &, float &, float, float, float, float);
_static void CubicLogUnsigned(float &pos, float &speed, float targ, float threshold, float step, float logBase) // 0x667BCD
{
    mangled_assert("CubicLogUnsigned");
    todo("implement");
    _sub_667BCD(pos, speed, targ, threshold, step, logBase);
}
#endif
