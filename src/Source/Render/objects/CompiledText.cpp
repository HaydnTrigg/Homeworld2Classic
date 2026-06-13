#if 0
/* ---------- headers */

#include "decomp.h"
#include <Objects\Core.h>
#include <xhash>
#include <xlocale>
#include <gl\types.h>
#include <stdexcept>
#include <gl\lotypes.h>
#include <xstring>
#include <xmemory0>
#include <Objects\pch.h>
#include <limits>
#include <memory\memorylib.h>
#include <ymath.h>
#include <malloc.h>
#include <crtdefs.h>
#include <Objects\TextureRegistry.h>
#include <sal.h>
#include <concurrencysal.h>
#include <vadefs.h>
#include <immintrin.h>
#include <wmmintrin.h>
#include <new>
#include <nmmintrin.h>
#include <exception>
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
#include <Mathlib\matrix4.h>
#include <xlocinfo.h>
#include <emmintrin.h>
#include <use_ansi.h>
#include <ctype.h>
#include <xmmintrin.h>
#include <Mathlib\vector3.h>
#include <mmintrin.h>
#include <xutility>
#include <xatomic0.h>
#include <utility>
#include <vector>
#include <iosfwd>
#include <xmemory>
#include <crtdbg.h>
#include <share.h>
#include <Mathlib\matrix3.h>
#include <platform\osdef.h>
#include <compiler\compilerconfig.h>
#include <cmath>
#include <math.h>
#include <xrefwrap>
#include <list>
#include <string.h>
#include <wtime.inl>
#include <map>
#include <xtree>
#include <xdebug>
#include <typeinfo>
#include <xfacet>
#include <memory.h>
#include <cassert>
#include <assert.h>
#include <cstdio>
#include <cfloat>
#include <stdio.h>
#include <float.h>
#include <algorithm>
#include <crtwrn.h>
#include <util\types.h>
#include <xtr1common>
#include <ammintrin.h>
#include <eh.h>
#include <mm3dnow.h>
#include <Mathlib\matvec.h>
#include <Mathlib\vector2.h>
#include <gl\r_defines.h>
#include <Objects\CompiledText.h>
#include <gl\glext.h>
#include <gl\r_types.h>
#include <util\colour.h>
#include <Mathlib\vector4.h>
#include <debug\db.h>
#include <Mathlib\mathlibdll.h>
#include <Mathlib\fastmath.h>
#include <locale.h>
#include <system_error>
#include <stdlib.h>
#include <cerrno>
#include <limits.h>
#include <errno.h>
#include <cstring>
#include <intrin.h>
#include <cwchar>
#include <cstdlib>
#include <setjmp.h>
#include <wchar.h>
#include <string>
#include <iterator>
#include <swprintf.inl>
#include <istream>
#include <ostream>
#include <ios>
#include <xlocnum>
#include <Objects\Typeface.h>
#include <climits>
#include <xtgmath.h>
#include <Objects\Texture.h>
#include <streambuf>
#include <Objects\Objects.h>
#include <hash_map>
#include <xiosbase>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- private variables */

_static
{
    extern std::piecewise_construct_t piecewise_construct; // 0x101121D5
    extern std::allocator_arg_t allocator_arg; // 0x101121D4
    extern std::_Nil _Nil_obj; // 0x101121D6
}

/* ---------- public code */

_extern void _sub_1002AA90(std::pair<int,std::map<vector4,std::vector<FatVertex,std::allocator<FatVertex> >,CompiledText::ColourLess,std::allocator<std::pair<vector4 const ,std::vector<FatVertex,std::allocator<FatVertex> > > > > > *const);
_inline std::pair<int,std::map<vector4,std::vector<FatVertex,std::allocator<FatVertex> >,CompiledText::ColourLess,std::allocator<std::pair<vector4 const ,std::vector<FatVertex,std::allocator<FatVertex> > > > > >::~pair<int,std::map<vector4,std::vector<FatVertex,std::allocator<FatVertex> >,CompiledText::ColourLess,std::allocator<std::pair<vector4 const ,std::vector<FatVertex,std::allocator<FatVertex> > > > > >() // 0x1002AA90
{
    mangled_assert("??1?$pair@HV?$map@Vvector4@@V?$vector@UFatVertex@@V?$allocator@UFatVertex@@@std@@@std@@UColourLess@CompiledText@@V?$allocator@U?$pair@$$CBVvector4@@V?$vector@UFatVertex@@V?$allocator@UFatVertex@@@std@@@std@@@std@@@3@@std@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_1002AA90(this);
}

_extern void _sub_1002AAC0(std::pair<Typeface *,std::map<int,std::map<vector4,std::vector<FatVertex,std::allocator<FatVertex> >,CompiledText::ColourLess,std::allocator<std::pair<vector4 const ,std::vector<FatVertex,std::allocator<FatVertex> > > > >,std::less<int>,std::allocator<std::pair<int const ,std::map<vector4,std::vector<FatVertex,std::allocator<FatVertex> >,CompiledText::ColourLess,std::allocator<std::pair<vector4 const ,std::vector<FatVertex,std::allocator<FatVertex> > > > > > > > > *const);
_inline std::pair<Typeface *,std::map<int,std::map<vector4,std::vector<FatVertex,std::allocator<FatVertex> >,CompiledText::ColourLess,std::allocator<std::pair<vector4 const ,std::vector<FatVertex,std::allocator<FatVertex> > > > >,std::less<int>,std::allocator<std::pair<int const ,std::map<vector4,std::vector<FatVertex,std::allocator<FatVertex> >,CompiledText::ColourLess,std::allocator<std::pair<vector4 const ,std::vector<FatVertex,std::allocator<FatVertex> > > > > > > > >::~pair<Typeface *,std::map<int,std::map<vector4,std::vector<FatVertex,std::allocator<FatVertex> >,CompiledText::ColourLess,std::allocator<std::pair<vector4 const ,std::vector<FatVertex,std::allocator<FatVertex> > > > >,std::less<int>,std::allocator<std::pair<int const ,std::map<vector4,std::vector<FatVertex,std::allocator<FatVertex> >,CompiledText::ColourLess,std::allocator<std::pair<vector4 const ,std::vector<FatVertex,std::allocator<FatVertex> > > > > > > > >() // 0x1002AAC0
{
    mangled_assert("??1?$pair@PAVTypeface@@V?$map@HV?$map@Vvector4@@V?$vector@UFatVertex@@V?$allocator@UFatVertex@@@std@@@std@@UColourLess@CompiledText@@V?$allocator@U?$pair@$$CBVvector4@@V?$vector@UFatVertex@@V?$allocator@UFatVertex@@@std@@@std@@@std@@@3@@std@@U?$less@H@2@V?$allocator@U?$pair@$$CBHV?$map@Vvector4@@V?$vector@UFatVertex@@V?$allocator@UFatVertex@@@std@@@std@@UColourLess@CompiledText@@V?$allocator@U?$pair@$$CBVvector4@@V?$vector@UFatVertex@@V?$allocator@UFatVertex@@@std@@@std@@@std@@@3@@std@@@std@@@2@@std@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_1002AAC0(this);
}

_extern void _sub_1002AAF0(std::pair<vector4,std::vector<FatVertex,std::allocator<FatVertex> > > *const);
_inline std::pair<vector4,std::vector<FatVertex,std::allocator<FatVertex> > >::~pair<vector4,std::vector<FatVertex,std::allocator<FatVertex> > >() // 0x1002AAF0
{
    mangled_assert("??1?$pair@Vvector4@@V?$vector@UFatVertex@@V?$allocator@UFatVertex@@@std@@@std@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_1002AAF0(this);
}

_extern void _sub_1002B5E0(CompiledText *const);
void CompiledText::clear() // 0x1002B5E0
{
    mangled_assert("?clear@CompiledText@@QAEXXZ");
    todo("implement");
    _sub_1002B5E0(this);
}

_extern std::vector<FatVertex,std::allocator<FatVertex> > &_sub_1002B720(CompiledText *const, Typeface *, __int32, vector4 const &);
std::vector<FatVertex,std::allocator<FatVertex> > &CompiledText::getVertices(Typeface *, __int32, vector4 const &) // 0x1002B720
{
    mangled_assert("?getVertices@CompiledText@@QAEAAV?$vector@UFatVertex@@V?$allocator@UFatVertex@@@std@@@std@@PAVTypeface@@HABVvector4@@@Z");
    todo("implement");
    std::vector<FatVertex,std::allocator<FatVertex> > & __result = _sub_1002B720(this, arg, arg, arg);
    return __result;
}

_extern void _sub_1002B960(CompiledText *const, rndTable *);
void CompiledText::print(rndTable *) // 0x1002B960
{
    mangled_assert("?print@CompiledText@@QAEXPAUrndTable@@@Z");
    todo("implement");
    _sub_1002B960(this, arg);
}

/* ---------- private code */
#endif
