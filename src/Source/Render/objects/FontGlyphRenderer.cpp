#if 0
/* ---------- headers */

#include "decomp.h"
#include <driverspecs.h>
#include <xhash>
#include <xlocale>
#include <threadpoolapiset.h>
#include <sdv_driverspecs.h>
#include <stdexcept>
#include <xstring>
#include <msxml.h>
#include <objidl.h>
#include <xmemory0>
#include <Objects\pch.h>
#include <namespaceapi.h>
#include <limits>
#include <memory\memorylib.h>
#include <ktmtypes.h>
#include <ymath.h>
#include <malloc.h>
#include <crtdefs.h>
#include <winsmcrd.h>
#include <sal.h>
#include <concurrencysal.h>
#include <mmiscapi.h>
#include <wincon.h>
#include <winbase.h>
#include <vadefs.h>
#include <mmeapi.h>
#include <apisetcconv.h>
#include <minwinbase.h>
#include <ime_cmodes.h>
#include <errhandlingapi.h>
#include <Objects\FontGlyphRenderer.h>
#include <processenv.h>
#include <immintrin.h>
#include <wmmintrin.h>
#include <new>
#include <jobapi.h>
#include <guiddef.h>
#include <nmmintrin.h>
#include <exception>
#include <smmintrin.h>
#include <xstddef>
#include <cstddef>
#include <apiset.h>
#include <tmmintrin.h>
#include <type_traits>
#include <stddef.h>
#include <yvals.h>
#include <ole2.h>
#include <xlocinfo>
#include <pmmintrin.h>
#include <xkeycheck.h>
#include <objbase.h>
#include <pshpack1.h>
#include <systemtopologyapi.h>
#include <xlocinfo.h>
#include <emmintrin.h>
#include <use_ansi.h>
#include <combaseapi.h>
#include <wow64apiset.h>
#include <ctype.h>
#include <xmmintrin.h>
#include <mmintrin.h>
#include <shellapi.h>
#include <winnls.h>
#include <xutility>
#include <datetimeapi.h>
#include <xatomic0.h>
#include <utility>
#include <processtopologyapi.h>
#include <vector>
#include <iosfwd>
#include <xmemory>
#include <crtdbg.h>
#include <winnt.h>
#include <pshpack2.h>
#include <libloaderapi.h>
#include <kernelspecs.h>
#include <share.h>
#include <sysinfoapi.h>
#include <basetsd.h>
#include <objidlbase.h>
#include <ncrypt.h>
#include <winreg.h>
#include <compiler\compilerconfig.h>
#include <unknwnbase.h>
#include <cmath>
#include <oaidl.h>
#include <winsock.h>
#include <math.h>
#include <commdlg.h>
#include <nb30.h>
#include <xrefwrap>
#include <list>
#include <string.h>
#include <wtime.inl>
#include <timeapi.h>
#include <propidl.h>
#include <dpapi.h>
#include <unknwn.h>
#include <securityappcontainer.h>
#include <imm.h>
#include <fibersapi.h>
#include <winscard.h>
#include <winver.h>
#include <map>
#include <wtypes.h>
#include <verrsrc.h>
#include <xtree>
#include <xdebug>
#include <rpcndr.h>
#include <rpcnsip.h>
#include <tvout.h>
#include <realtimeapiset.h>
#include <stralign.h>
#include <mciapi.h>
#include <winuser.h>
#include <typeinfo>
#include <consoleapi.h>
#include <winsvc.h>
#include <ioapiset.h>
#include <namedpipeapi.h>
#include <xfacet>
#include <winperf.h>
#include <dlgs.h>
#include <memoryapi.h>
#include <memory.h>
#include <localizer\localizer.h>
#include <assist\typemagic.h>
#include <wingdi.h>
#include <urlmon.h>
#include <rpc.h>
#include <cassert>
#include <pshpack4.h>
#include <assert.h>
#include <joystickapi.h>
#include <cstdio>
#include <rpcdce.h>
#include <cfloat>
#include <stdio.h>
#include <winerror.h>
#include <float.h>
#include <bcrypt.h>
#include <algorithm>
#include <crtwrn.h>
#include <lzexpand.h>
#include <ddeml.h>
#include <util\types.h>
#include <wincrypt.h>
#include <xtr1common>
#include <reason.h>
#include <stringapiset.h>
#include <timezoneapi.h>
#include <interlockedapi.h>
#include <rpcsal.h>
#include <securitybaseapi.h>
#include <ammintrin.h>
#include <eh.h>
#include <oleauto.h>
#include <mm3dnow.h>
#include <servprov.h>
#include <winioctl.h>
#include <debugapi.h>
#include <fileapi.h>
#include <cguid.h>
#include <cderr.h>
#include <dde.h>
#include <winspool.h>
#include <wtypesbase.h>
#include <rpcnterr.h>
#include <threadpoollegacyapiset.h>
#include <windows.h>
#include <prsht.h>
#include <rpcasync.h>
#include <rpcnsi.h>
#include <winapifamily.h>
#include <sdkddkver.h>
#include <poppack.h>
#include <excpt.h>
#include <debug\db.h>
#include <mmiscapi2.h>
#include <winefs.h>
#include <profileapi.h>
#include <inaddr.h>
#include <synchapi.h>
#include <locale.h>
#include <mmsystem.h>
#include <mmsyscom.h>
#include <processthreadsapi.h>
#include <heapapi.h>
#include <utilapiset.h>
#include <system_error>
#include <stdlib.h>
#include <cerrno>
#include <limits.h>
#include <errno.h>
#include <cstring>
#include <winnetwk.h>
#include <pshpack8.h>
#include <intrin.h>
#include <cwchar>
#include <cstdlib>
#include <wnnc.h>
#include <setjmp.h>
#include <wchar.h>
#include <string>
#include <iterator>
#include <swprintf.inl>
#include <mcx.h>
#include <oleidl.h>
#include <istream>
#include <rpcdcep.h>
#include <bemapiset.h>
#include <stdarg.h>
#include <ostream>
#include <playsoundapi.h>
#include <windef.h>
#include <ios>
#include <minwindef.h>
#include <xlocnum>
#include <handleapi.h>
#include <specstrings.h>
#include <climits>
#include <xtgmath.h>
#include <specstrings_strict.h>
#include <streambuf>
#include <specstrings_undef.h>
#include <hash_map>
#include <xiosbase>

/* ---------- constants */

/* ---------- definitions */

struct FontGlyphRendererData
{
    struct Font
    {
        char name[64]; // 0x0
        unsigned __int32 size; // 0x40
        bool bold; // 0x44
        bool italic; // 0x45
        HFONT__ *hFont; // 0x48
        unsigned __int32 height; // 0x4C
    };
    static_assert(sizeof(Font) == 80, "Invalid Font size");
    typedef std::vector<FontGlyphRendererData::Font,std::allocator<FontGlyphRendererData::Font> > FontCont;
    HDC__ *m_hDC; // 0x0
    HBITMAP__ *m_hBitmap; // 0x4
    unsigned __int32 m_bitmapWidth; // 0x8
    unsigned __int32 m_bitmapHeight; // 0xC
    std::vector<FontGlyphRendererData::Font,std::allocator<FontGlyphRendererData::Font> > m_cFont; // 0x10
    FontGlyphRendererData(FontGlyphRendererData const &); /* compiler_generated() */
    _inline FontGlyphRendererData(); /* compiler_generated() */
    _inline ~FontGlyphRendererData(); /* compiler_generated() */
    FontGlyphRendererData &operator=(FontGlyphRendererData const &); /* compiler_generated() */
};
static_assert(sizeof(FontGlyphRendererData) == 28, "Invalid FontGlyphRendererData size");

struct FontGlyphRenderer::QueryCharSet::__l2::<unnamed-type-charSetMap>
{
    char const *name; // 0x0
    unsigned __int32 charSet; // 0x4
};
static_assert(sizeof(FontGlyphRenderer::QueryCharSet::__l2::<unnamed-type-charSetMap>) == 8, "Invalid FontGlyphRenderer::QueryCharSet::__l2::<unnamed-type-charSetMap> size");

typedef tagTEXTMETRICA TEXTMETRICA;
typedef char const *LPCSTR;
typedef wchar_t const *LPCWSTR;
typedef HFONT__ *HFONT;
typedef HBITMAP__ *HBITMAP;
typedef void *HGDIOBJ;
typedef unsigned long COLORREF;
typedef __int32 *LPINT;
typedef tagTEXTMETRICA *LPTEXTMETRICA;
typedef tagTEXTMETRICA TEXTMETRIC;

/* ---------- prototypes */

/* ---------- globals */

extern char const *FontGlyphRenderer::CHARSET_DEFAULT; // 0x1010D42C
extern FontGlyphRenderer *FontGlyphRenderer::s_instance; // 0x10132A58

/* ---------- private variables */

_static
{
    extern std::piecewise_construct_t piecewise_construct; // 0x10132A5D
    extern std::allocator_arg_t allocator_arg; // 0x10132A5C
}

/* ---------- public code */

_extern FontGlyphRenderer *_sub_1004A650();
FontGlyphRenderer *FontGlyphRenderer::i() // 0x1004A650
{
    mangled_assert("?i@FontGlyphRenderer@@SGPAV1@XZ");
    todo("implement");
    FontGlyphRenderer * __result = _sub_1004A650();
    return __result;
}

_extern _sub_10049CB0(FontGlyphRenderer *const);
FontGlyphRenderer::FontGlyphRenderer() // 0x10049CB0
{
    mangled_assert("??0FontGlyphRenderer@@QAE@XZ");
    todo("implement");
    _sub_10049CB0(this);
}

_extern _sub_10049D20(FontGlyphRendererData *const);
_inline FontGlyphRendererData::FontGlyphRendererData() // 0x10049D20
{
    mangled_assert("??0FontGlyphRendererData@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_10049D20(this);
}

_extern void _sub_10049D70(FontGlyphRenderer *const);
FontGlyphRenderer::~FontGlyphRenderer() // 0x10049D70
{
    mangled_assert("??1FontGlyphRenderer@@QAE@XZ");
    todo("implement");
    _sub_10049D70(this);
}

_extern void _sub_10049DF0(FontGlyphRendererData *const);
_inline FontGlyphRendererData::~FontGlyphRendererData() // 0x10049DF0
{
    mangled_assert("??1FontGlyphRendererData@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_10049DF0(this);
}

_extern __int32 _sub_1004A090(FontGlyphRenderer *const, char const *, unsigned __int32, bool, bool, unsigned __int32, unsigned __int32 &, unsigned __int32 &);
__int32 FontGlyphRenderer::NewFont(char const *, unsigned __int32, bool, bool, unsigned __int32, unsigned __int32 &, unsigned __int32 &) // 0x1004A090
{
    mangled_assert("?NewFont@FontGlyphRenderer@@QAEHPBDI_N1IAAI2@Z");
    todo("implement");
    __int32 __result = _sub_1004A090(this, arg, arg, arg, arg, arg, arg, arg);
    return __result;
}

_extern void _sub_1004A040(FontGlyphRenderer *const, __int32);
void FontGlyphRenderer::DeleteFont(__int32) // 0x1004A040
{
    mangled_assert("?DeleteFont@FontGlyphRenderer@@QAEXH@Z");
    todo("implement");
    _sub_1004A040(this, arg);
}

_extern bool _sub_1004A200(FontGlyphRenderer *const, __int32, wchar_t, unsigned __int32 &, unsigned __int32 &);
bool FontGlyphRenderer::QueryGlyphSize(__int32, wchar_t, unsigned __int32 &, unsigned __int32 &) // 0x1004A200
{
    mangled_assert("?QueryGlyphSize@FontGlyphRenderer@@QAE_NH_WAAI1@Z");
    todo("implement");
    bool __result = _sub_1004A200(this, arg, arg, arg, arg);
    return __result;
}

_extern bool _sub_10049EE0(FontGlyphRenderer *const, __int32, wchar_t, unsigned char *);
bool FontGlyphRenderer::BuildGlyphImage(__int32, wchar_t, unsigned char *) // 0x10049EE0
{
    mangled_assert("?BuildGlyphImage@FontGlyphRenderer@@QAE_NH_WPAE@Z");
    todo("implement");
    bool __result = _sub_10049EE0(this, arg, arg, arg);
    return __result;
}

_extern unsigned __int32 _sub_1004A1A0(FontGlyphRenderer *const, char const *);
unsigned __int32 FontGlyphRenderer::QueryCharSet(char const *) // 0x1004A1A0
{
    mangled_assert("?QueryCharSet@FontGlyphRenderer@@QAEIPBD@Z");
    todo("implement");
    unsigned __int32 __result = _sub_1004A1A0(this, arg);
    return __result;
}

/* ---------- private code */
#endif
