#if 0
/* ---------- headers */

#include "decomp.h"
#include <xhash>
#include <xlocale>
#include <stdexcept>
#include <xstring>
#include <xmemory0>
#include <Objects\pch.h>
#include <limits>
#include <memory\memorylib.h>
#include <ymath.h>
#include <malloc.h>
#include <gl\r_defines.h>
#include <crtdefs.h>
#include <gl\glext.h>
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
#include <xlocinfo.h>
#include <emmintrin.h>
#include <use_ansi.h>
#include <Mathlib\matrix4.h>
#include <ctype.h>
#include <xmmintrin.h>
#include <mmintrin.h>
#include <Mathlib\vector3.h>
#include <xutility>
#include <xatomic0.h>
#include <utility>
#include <vector>
#include <iosfwd>
#include <xmemory>
#include <crtdbg.h>
#include <share.h>
#include <Mathlib\matrix3.h>
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
#include <debug\ctmessage.h>
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
#include <fileio\filepath.h>
#include <util\types.h>
#include <fileio\fileioexports.h>
#include <fileio\bytestream.h>
#include <debug\ctassert.h>
#include <xtr1common>
#include <platform\osdef.h>
#include <ammintrin.h>
#include <eh.h>
#include <mm3dnow.h>
#include <assist\fixedstring.h>
#include <assist\stlexstring.h>
#include <Mathlib\matvec.h>
#include <Mathlib\vector2.h>
#include <Objects\Light.h>
#include <Objects\vertex_program.h>
#include <gl\lotypes.h>
#include <Objects\Objects.h>
#include <gl\types.h>
#include <util\colour.h>
#include <debug\db.h>
#include <Mathlib\vector4.h>
#include <Mathlib\mathlibdll.h>
#include <Mathlib\fastmath.h>
#include <gl\r_types.h>
#include <Objects\options.h>
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
#include <assist\typemagic.h>
#include <ios>
#include <xlocnum>
#include <climits>
#include <xtgmath.h>
#include <streambuf>
#include <hash_map>
#include <xiosbase>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

extern VertexProgramManager *VertexProgramManager::m_instance; // 0x101A2D48
extern std::map<enum VertexProgramManager::eVertexProgramsInternal,VertexProgram *,std::less<enum VertexProgramManager::eVertexProgramsInternal>,std::allocator<std::pair<enum VertexProgramManager::eVertexProgramsInternal const ,VertexProgram *> > > VertexProgramManager::m_programs; // 0x101A2D50

/* ---------- private variables */

_static
{
    extern std::piecewise_construct_t piecewise_construct; // 0x101A2D4D
    extern std::allocator_arg_t allocator_arg; // 0x101A2D4C
}

/* ---------- public code */

_extern _sub_100AB9E0(VertexProgram *const, VertexProgram const &);
_inline VertexProgram::VertexProgram(VertexProgram const &) // 0x100AB9E0
{
    mangled_assert("??0VertexProgram@@QAE@ABV0@@Z");
    compiler_generated();
    todo("implement");
    _sub_100AB9E0(this, arg);
}

_extern bool _sub_100ACD30(VertexProgramManager *const);
bool VertexProgramManager::release() // 0x100ACD30
{
    mangled_assert("?release@VertexProgramManager@@AAE_NXZ");
    todo("implement");
    bool __result = _sub_100ACD30(this);
    return __result;
}

_extern bool _sub_100ACE20();
bool VertexProgramManager::startup() // 0x100ACE20
{
    mangled_assert("?startup@VertexProgramManager@@SG_NXZ");
    todo("implement");
    bool __result = _sub_100ACE20();
    return __result;
}

_extern bool _sub_100ACDE0();
bool VertexProgramManager::shutdown() // 0x100ACDE0
{
    mangled_assert("?shutdown@VertexProgramManager@@SG_NXZ");
    todo("implement");
    bool __result = _sub_100ACDE0();
    return __result;
}

_extern _sub_100ABB50(VertexProgramManager *const);
VertexProgramManager::VertexProgramManager() // 0x100ABB50
{
    mangled_assert("??0VertexProgramManager@@AAE@XZ");
    todo("implement");
    _sub_100ABB50(this);
}

_extern void _sub_100ABB90(std::_Tree_buy<std::pair<enum VertexProgramManager::eVertexProgramsInternal const ,VertexProgram *>,std::allocator<std::pair<enum VertexProgramManager::eVertexProgramsInternal const ,VertexProgram *> > > *const);
_inline std::_Tree_buy<std::pair<enum VertexProgramManager::eVertexProgramsInternal const ,VertexProgram *>,std::allocator<std::pair<enum VertexProgramManager::eVertexProgramsInternal const ,VertexProgram *> > >::~_Tree_buy<std::pair<enum VertexProgramManager::eVertexProgramsInternal const ,VertexProgram *>,std::allocator<std::pair<enum VertexProgramManager::eVertexProgramsInternal const ,VertexProgram *> > >() // 0x100ABB90
{
    mangled_assert("??1?$_Tree_buy@U?$pair@$$CBW4eVertexProgramsInternal@VertexProgramManager@@PAVVertexProgram@@@std@@V?$allocator@U?$pair@$$CBW4eVertexProgramsInternal@VertexProgramManager@@PAVVertexProgram@@@std@@@2@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_100ABB90(this);
}

_extern void _sub_100ABBA0(std::_Tree_comp<0,std::_Tmap_traits<enum VertexProgramManager::eVertexProgramsInternal,VertexProgram *,std::less<enum VertexProgramManager::eVertexProgramsInternal>,std::allocator<std::pair<enum VertexProgramManager::eVertexProgramsInternal const ,VertexProgram *> >,0> > *const);
_inline std::_Tree_comp<0,std::_Tmap_traits<enum VertexProgramManager::eVertexProgramsInternal,VertexProgram *,std::less<enum VertexProgramManager::eVertexProgramsInternal>,std::allocator<std::pair<enum VertexProgramManager::eVertexProgramsInternal const ,VertexProgram *> >,0> >::~_Tree_comp<0,std::_Tmap_traits<enum VertexProgramManager::eVertexProgramsInternal,VertexProgram *,std::less<enum VertexProgramManager::eVertexProgramsInternal>,std::allocator<std::pair<enum VertexProgramManager::eVertexProgramsInternal const ,VertexProgram *> >,0> >() // 0x100ABBA0
{
    mangled_assert("??1?$_Tree_comp@$0A@V?$_Tmap_traits@W4eVertexProgramsInternal@VertexProgramManager@@PAVVertexProgram@@U?$less@W4eVertexProgramsInternal@VertexProgramManager@@@std@@V?$allocator@U?$pair@$$CBW4eVertexProgramsInternal@VertexProgramManager@@PAVVertexProgram@@@std@@@5@$0A@@std@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_100ABBA0(this);
}

_extern void _sub_100ABBB0(std::map<enum VertexProgramManager::eVertexProgramsInternal,VertexProgram *,std::less<enum VertexProgramManager::eVertexProgramsInternal>,std::allocator<std::pair<enum VertexProgramManager::eVertexProgramsInternal const ,VertexProgram *> > > *const);
_inline std::map<enum VertexProgramManager::eVertexProgramsInternal,VertexProgram *,std::less<enum VertexProgramManager::eVertexProgramsInternal>,std::allocator<std::pair<enum VertexProgramManager::eVertexProgramsInternal const ,VertexProgram *> > >::~map<enum VertexProgramManager::eVertexProgramsInternal,VertexProgram *,std::less<enum VertexProgramManager::eVertexProgramsInternal>,std::allocator<std::pair<enum VertexProgramManager::eVertexProgramsInternal const ,VertexProgram *> > >() // 0x100ABBB0
{
    mangled_assert("??1?$map@W4eVertexProgramsInternal@VertexProgramManager@@PAVVertexProgram@@U?$less@W4eVertexProgramsInternal@VertexProgramManager@@@std@@V?$allocator@U?$pair@$$CBW4eVertexProgramsInternal@VertexProgramManager@@PAVVertexProgram@@@std@@@5@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_100ABBB0(this);
}

_extern void _sub_100ABBD0(VertexProgram *const);
_inline VertexProgram::~VertexProgram() // 0x100ABBD0
{
    mangled_assert("??1VertexProgram@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_100ABBD0(this);
}

_extern void _sub_100ABC00(VertexProgramManager *const);
VertexProgramManager::~VertexProgramManager() // 0x100ABC00
{
    mangled_assert("??1VertexProgramManager@@AAE@XZ");
    todo("implement");
    _sub_100ABC00(this);
}

_extern VertexProgram &_sub_100ABD00(VertexProgram *const, VertexProgram const &);
_inline VertexProgram &VertexProgram::operator=(VertexProgram const &) // 0x100ABD00
{
    mangled_assert("??4VertexProgram@@QAEAAV0@ABV0@@Z");
    compiler_generated();
    todo("implement");
    VertexProgram & __result = _sub_100ABD00(this, arg);
    return __result;
}

_extern VertexProgramManager &_sub_100ABD30(VertexProgramManager *const, VertexProgramManager const &);
_inline VertexProgramManager &VertexProgramManager::operator=(VertexProgramManager const &) // 0x100ABD30
{
    mangled_assert("??4VertexProgramManager@@QAEAAV0@ABV0@@Z");
    compiler_generated();
    todo("implement");
    VertexProgramManager & __result = _sub_100ABD30(this, arg);
    return __result;
}

_extern bool _sub_100AC800(VertexProgramManager *const);
bool VertexProgramManager::initializeAllVertexPrograms() // 0x100AC800
{
    mangled_assert("?initializeAllVertexPrograms@VertexProgramManager@@AAE_NXZ");
    todo("implement");
    bool __result = _sub_100AC800(this);
    return __result;
}

_extern void _sub_100AC7F0(VertexProgramManager *const, rndTable *);
void VertexProgramManager::initialize(rndTable *) // 0x100AC7F0
{
    mangled_assert("?initialize@VertexProgramManager@@QAEXPAUrndTable@@@Z");
    todo("implement");
    _sub_100AC7F0(this, arg);
}

_extern void _sub_100ACD70(eVertexPrograms);
void VertexProgramManager::setVertexProgram(eVertexPrograms newProgram) // 0x100ACD70
{
    mangled_assert("?setVertexProgram@VertexProgramManager@@SGXW4eVertexPrograms@@@Z");
    todo("implement");
    _sub_100ACD70(newProgram);
}

_extern _sub_100ABA20(VertexProgram *const, VertexProgramManager::eVertexProgramsInternal const, std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &);
VertexProgram::VertexProgram(VertexProgramManager::eVertexProgramsInternal const, std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &) // 0x100ABA20
{
    mangled_assert("??0VertexProgram@@QAE@W4eVertexProgramsInternal@VertexProgramManager@@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z");
    todo("implement");
    _sub_100ABA20(this, arg, arg);
}

_extern bool _sub_100ACBA0(VertexProgram *const, std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &, std::basic_string<char,std::char_traits<char>,std::allocator<char> > &);
bool VertexProgram::loadProgram(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &, std::basic_string<char,std::char_traits<char>,std::allocator<char> > &) // 0x100ACBA0
{
    mangled_assert("?loadProgram@VertexProgram@@AAE_NABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AAV23@@Z");
    todo("implement");
    bool __result = _sub_100ACBA0(this, arg, arg);
    return __result;
}

_extern bool _sub_100AC440(VertexProgram *const, std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &);
bool VertexProgram::createProgram(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &) // 0x100AC440
{
    mangled_assert("?createProgram@VertexProgram@@AAE_NABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z");
    todo("implement");
    bool __result = _sub_100AC440(this, arg);
    return __result;
}

_extern void _sub_100AC3D0(VertexProgram *const);
void VertexProgram::bind() // 0x100AC3D0
{
    mangled_assert("?bind@VertexProgram@@QAEXXZ");
    todo("implement");
    _sub_100AC3D0(this);
}

_extern void _sub_100ACD60(VertexProgram *const, unsigned __int32);
void VertexProgram::setVertexAttributes(unsigned __int32) // 0x100ACD60
{
    mangled_assert("?setVertexAttributes@VertexProgram@@QAEXI@Z");
    todo("implement");
    _sub_100ACD60(this, arg);
}

/* ---------- private code */
#endif
