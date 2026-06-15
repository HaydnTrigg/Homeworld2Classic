#if 0
/* ---------- headers */

#include "decomp.h"
#include <xhash>
#include <xlocale>
#include <ioapiset.h>
#include <namedpipeapi.h>
#include <stdexcept>
#include <xstring>
#include <memoryapi.h>
#include <xmemory0>
#include <Objects\pch.h>
#include <gl\r_defines.h>
#include <limits>
#include <memory\memorylib.h>
#include <consoleapi.h>
#include <gl\glext.h>
#include <ymath.h>
#include <malloc.h>
#include <crtdefs.h>
#include <sal.h>
#include <wingdi.h>
#include <concurrencysal.h>
#include <vadefs.h>
#include <pshpack4.h>
#include <platform\cmdline.h>
#include <platform\platformexports.h>
#include <winerror.h>
#include <ime_cmodes.h>
#include <immintrin.h>
#include <wmmintrin.h>
#include <new>
#include <nmmintrin.h>
#include <exception>
#include <timezoneapi.h>
#include <interlockedapi.h>
#include <smmintrin.h>
#include <xstddef>
#include <cstddef>
#include <tmmintrin.h>
#include <type_traits>
#include <stddef.h>
#include <yvals.h>
#include <xlocinfo>
#include <pmmintrin.h>
#include <xkeycheck.h>
#include <xlocinfo.h>
#include <emmintrin.h>
#include <use_ansi.h>
#include <securitybaseapi.h>
#include <ctype.h>
#include <xmmintrin.h>
#include <reason.h>
#include <mmintrin.h>
#include <gl\types.h>
#include <xutility>
#include <winuser.h>
#include <util\colour.h>
#include <xatomic0.h>
#include <utility>
#include <vector>
#include <iosfwd>
#include <Mathlib\matvec.h>
#include <xmemory>
#include <crtdbg.h>
#include <Mathlib\vector2.h>
#include <gl\glexterns.inc>
#include <debugapi.h>
#include <share.h>
#include <fileapi.h>
#include <gl\r_pbuffer.h>
#include <compiler\compilerconfig.h>
#include <gl\pch.h>
#include <cmath>
#include <debug\ctmessage.h>
#include <math.h>
#include <gl\gls.h>
#include <winnls.h>
#include <xrefwrap>
#include <datetimeapi.h>
#include <platform\os.h>
#include <list>
#include <string.h>
#include <stralign.h>
#include <threadpoollegacyapiset.h>
#include <windows.h>
#include <wtime.inl>
#include <winapifamily.h>
#include <sdkddkver.h>
#include <poppack.h>
#include <excpt.h>
#include <Objects\options.h>
#include <imm.h>
#include <map>
#include <profileapi.h>
#include <xtree>
#include <xdebug>
#include <synchapi.h>
#include <typeinfo>
#include <processthreadsapi.h>
#include <heapapi.h>
#include <utilapiset.h>
#include <xfacet>
#include <pshpack8.h>
#include <memory.h>
#include <tvout.h>
#include <bemapiset.h>
#include <stdarg.h>
#include <winnetwk.h>
#include <windef.h>
#include <wnnc.h>
#include <minwindef.h>
#include <cassert>
#include <handleapi.h>
#include <specstrings.h>
#include <assert.h>
#include <specstrings_strict.h>
#include <cstdio>
#include <specstrings_undef.h>
#include <cfloat>
#include <stdio.h>
#include <driverspecs.h>
#include <float.h>
#include <threadpoolapiset.h>
#include <sdv_driverspecs.h>
#include <algorithm>
#include <crtwrn.h>
#include <util\types.h>
#include <namespaceapi.h>
#include <ktmtypes.h>
#include <xtr1common>
#include <winbase.h>
#include <platform\osdef.h>
#include <pshpack1.h>
#include <apisetcconv.h>
#include <minwinbase.h>
#include <wincon.h>
#include <errhandlingapi.h>
#include <ammintrin.h>
#include <eh.h>
#include <processenv.h>
#include <mm3dnow.h>
#include <Mathlib\vector3.h>
#include <jobapi.h>
#include <guiddef.h>
#include <apiset.h>
#include <systemtopologyapi.h>
#include <wow64apiset.h>
#include <Mathlib\matrix3.h>
#include <gl\lotypes.h>
#include <Mathlib\matrix4.h>
#include <processtopologyapi.h>
#include <Mathlib\vector4.h>
#include <Mathlib\mathlibdll.h>
#include <winnt.h>
#include <pshpack2.h>
#include <Mathlib\fastmath.h>
#include <debug\db.h>
#include <libloaderapi.h>
#include <kernelspecs.h>
#include <sysinfoapi.h>
#include <basetsd.h>
#include <gl\r_types.h>
#include <Objects\rendertexture.h>
#include <Objects\Objects.h>
#include <locale.h>
#include <winreg.h>
#include <system_error>
#include <stdlib.h>
#include <cerrno>
#include <limits.h>
#include <securityappcontainer.h>
#include <errno.h>
#include <fibersapi.h>
#include <cstring>
#include <gl\interface.h>
#include <intrin.h>
#include <cwchar>
#include <cstdlib>
#include <gl\hiddeninterface.h>
#include <setjmp.h>
#include <wchar.h>
#include <string>
#include <profile\profile.h>
#include <gl\r_funcs.h>
#include <iterator>
#include <swprintf.inl>
#include <iostream>
#include <istream>
#include <ostream>
#include <realtimeapiset.h>
#include <ios>
#include <xlocnum>
#include <winver.h>
#include <climits>
#include <xtgmath.h>
#include <verrsrc.h>
#include <streambuf>
#include <hash_map>
#include <xiosbase>

/* ---------- constants */

/* ---------- definitions */

typedef HPBUFFERARB__ *HPBUFFERARB;
typedef HDC__ *HDC;
typedef HGLRC__ *HGLRC;

/* ---------- prototypes */

/* ---------- globals */

extern RenderTextureManager *RenderTextureManager::m_instance; // 0x10132BF8

/* ---------- private variables */

_static
{
    extern std::piecewise_construct_t piecewise_construct; // 0x10132BFD
    extern std::allocator_arg_t allocator_arg; // 0x10132BFC
}

/* ---------- public code */

bool RenderTexture::Initialize(vector2 const &, PBufferTexture, unsigned __int32 const, unsigned __int32 const) // 0x1008ECD0
{
    mangled_assert("?Initialize@RenderTexture@@QAE_NABVvector2@@W4PBufferTexture@@II@Z");
    todo("implement");
}

RenderTexture::RenderTexture(rndTable *) // 0x1008E790
{
    mangled_assert("??0RenderTexture@@QAE@PAUrndTable@@@Z");
    todo("implement");
}

_inline RenderTextureManager::RenderTextureManager(RenderTextureManager const &) // 0x1008E7B0
{
    mangled_assert("??0RenderTextureManager@@QAE@ABV0@@Z");
    compiler_generated();
    todo("implement");
}

RenderTexture::~RenderTexture() // 0x1008E850
{
    mangled_assert("??1RenderTexture@@QAE@XZ");
    todo("implement");
}

bool RenderTexture::GetSize(vector2 &) const // 0x1008EC90
{
    mangled_assert("?GetSize@RenderTexture@@QBE_NAAVvector2@@@Z");
    todo("implement");
}

void RenderTexture::ShowBufferDebug(PBufferTexture const, float const, float const, float const, float const) // 0x1008EDB0
{
    mangled_assert("?ShowBufferDebug@RenderTexture@@QAEXW4PBufferTexture@@MMMM@Z");
    todo("implement");
}

bool RenderTexture::Apply() // 0x1008EB60
{
    mangled_assert("?Apply@RenderTexture@@QAE_NXZ");
    todo("implement");
}

bool RenderTexture::Unapply() // 0x1008F370
{
    mangled_assert("?Unapply@RenderTexture@@QAE_NXZ");
    todo("implement");
}

void RenderTexture::Bind(PBufferTexture) // 0x1008EB90
{
    mangled_assert("?Bind@RenderTexture@@QAEXW4PBufferTexture@@@Z");
    todo("implement");
}

void RenderTexture::Unbind(PBufferTexture) // 0x1008F390
{
    mangled_assert("?Unbind@RenderTexture@@QAEXW4PBufferTexture@@@Z");
    todo("implement");
}

void RenderTexture::StartShadow(matrix4 const &, float const, float const, float const, float const, __int32 const) // 0x1008F140
{
    mangled_assert("?StartShadow@RenderTexture@@QAEXABVmatrix4@@MMMMH@Z");
    todo("implement");
}

void RenderTexture::EndShadow() // 0x1008EBB0
{
    mangled_assert("?EndShadow@RenderTexture@@QAEXXZ");
    todo("implement");
}

bool RenderTexture::InitializeState(bool const, bool const) // 0x1008ED60
{
    mangled_assert("?InitializeState@RenderTexture@@QAE_N_N0@Z");
    todo("implement");
}

RenderTextureManager::RenderTextureManager() // 0x1008E7E0
{
    mangled_assert("??0RenderTextureManager@@QAE@XZ");
    todo("implement");
}

_inline glState::glState() // 0x1008E810
{
    mangled_assert("??0glState@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

RenderTextureManager::~RenderTextureManager() // 0x1008E890
{
    mangled_assert("??1RenderTextureManager@@QAE@XZ");
    todo("implement");
}

_inline RenderTexture &RenderTexture::operator=(RenderTexture const &) // 0x1008EA50
{
    mangled_assert("??4RenderTexture@@QAEAAV0@ABV0@@Z");
    compiler_generated();
    todo("implement");
}

_inline RenderTextureManager &RenderTextureManager::operator=(RenderTextureManager const &) // 0x1008EA70
{
    mangled_assert("??4RenderTextureManager@@QAEAAV0@ABV0@@Z");
    compiler_generated();
    todo("implement");
}

bool RenderTextureManager::startup() // 0x1008FBF0
{
    mangled_assert("?startup@RenderTextureManager@@SG_NXZ");
    todo("implement");
}

void RenderTextureManager::initialize(rndTable *) // 0x1008F750
{
    mangled_assert("?initialize@RenderTextureManager@@QAEXPAUrndTable@@@Z");
    todo("implement");
}

bool RenderTextureManager::shutdown() // 0x1008FBB0
{
    mangled_assert("?shutdown@RenderTextureManager@@SG_NXZ");
    todo("implement");
}

/* ---------- private code */
#endif
