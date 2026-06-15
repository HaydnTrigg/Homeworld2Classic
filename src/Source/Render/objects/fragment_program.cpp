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
#include <platform\cmdline.h>
#include <xtree>
#include <xdebug>
#include <platform\platformexports.h>
#include <typeinfo>
#include <xfacet>
#include <memory.h>
#include <cassert>
#include <assert.h>
#include <cstdio>
#include <fileio\filepath.h>
#include <cfloat>
#include <stdio.h>
#include <fileio\fileioexports.h>
#include <float.h>
#include <fileio\bytestream.h>
#include <algorithm>
#include <crtwrn.h>
#include <debug\ctassert.h>
#include <util\types.h>
#include <xtr1common>
#include <platform\osdef.h>
#include <assist\fixedstring.h>
#include <assist\stlexstring.h>
#include <ammintrin.h>
#include <eh.h>
#include <mm3dnow.h>
#include <Objects\Light.h>
#include <Mathlib\matvec.h>
#include <Mathlib\vector2.h>
#include <Objects\fragment_program.h>
#include <gl\lotypes.h>
#include <Objects\Objects.h>
#include <gl\types.h>
#include <util\colour.h>
#include <debug\db.h>
#include <Mathlib\vector4.h>
#include <Objects\options.h>
#include <Mathlib\mathlibdll.h>
#include <Mathlib\fastmath.h>
#include <gl\r_types.h>
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
#include <assist\typemagic.h>
#include <setjmp.h>
#include <wchar.h>
#include <string>
#include <iterator>
#include <swprintf.inl>
#include <istream>
#include <ostream>
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

extern FragmentProgramManager *FragmentProgramManager::m_instance; // 0x10132A7C
extern std::map<enum eFragmentPrograms,FragmentProgram *,std::less<enum eFragmentPrograms>,std::allocator<std::pair<enum eFragmentPrograms const ,FragmentProgram *> > > FragmentProgramManager::m_programs; // 0x10132A84

/* ---------- private variables */

_static
{
    extern std::piecewise_construct_t piecewise_construct; // 0x10132A81
    extern std::allocator_arg_t allocator_arg; // 0x10132A80
}

/* ---------- public code */

_inline FragmentProgram::FragmentProgram(FragmentProgram const &) // 0x100508A0
{
    mangled_assert("??0FragmentProgram@@QAE@ABV0@@Z");
    compiler_generated();
    todo("implement");
}

bool FragmentProgramManager::release() // 0x10052B80
{
    mangled_assert("?release@FragmentProgramManager@@AAE_NXZ");
    todo("implement");
}

bool FragmentProgramManager::startup() // 0x10052CD0
{
    mangled_assert("?startup@FragmentProgramManager@@SG_NXZ");
    todo("implement");
}

bool FragmentProgramManager::shutdown() // 0x10052C80
{
    mangled_assert("?shutdown@FragmentProgramManager@@SG_NXZ");
    todo("implement");
}

FragmentProgramManager::FragmentProgramManager() // 0x100508F0
{
    mangled_assert("??0FragmentProgramManager@@AAE@XZ");
    todo("implement");
}

_inline Light::Light(Light const &) // 0x10050900
{
    mangled_assert("??0Light@@QAE@ABV0@@Z");
    compiler_generated();
    todo("implement");
}

_inline Light::Light() // 0x100509B0
{
    mangled_assert("??0Light@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline LightManager::LightManager(LightManager const &) // 0x100509E0
{
    mangled_assert("??0LightManager@@QAE@ABV0@@Z");
    compiler_generated();
    todo("implement");
}

_inline std::_Tree_buy<std::pair<enum eFragmentPrograms const ,FragmentProgram *>,std::allocator<std::pair<enum eFragmentPrograms const ,FragmentProgram *> > >::~_Tree_buy<std::pair<enum eFragmentPrograms const ,FragmentProgram *>,std::allocator<std::pair<enum eFragmentPrograms const ,FragmentProgram *> > >() // 0x10050A60
{
    mangled_assert("??1?$_Tree_buy@U?$pair@$$CBW4eFragmentPrograms@@PAVFragmentProgram@@@std@@V?$allocator@U?$pair@$$CBW4eFragmentPrograms@@PAVFragmentProgram@@@std@@@2@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

FragmentProgramManager::~FragmentProgramManager() // 0x10050B00
{
    mangled_assert("??1FragmentProgramManager@@AAE@XZ");
    todo("implement");
}

_inline std::_Tree_comp<0,std::_Tmap_traits<enum eFragmentPrograms,FragmentProgram *,std::less<enum eFragmentPrograms>,std::allocator<std::pair<enum eFragmentPrograms const ,FragmentProgram *> >,0> >::~_Tree_comp<0,std::_Tmap_traits<enum eFragmentPrograms,FragmentProgram *,std::less<enum eFragmentPrograms>,std::allocator<std::pair<enum eFragmentPrograms const ,FragmentProgram *> >,0> >() // 0x10050A70
{
    mangled_assert("??1?$_Tree_comp@$0A@V?$_Tmap_traits@W4eFragmentPrograms@@PAVFragmentProgram@@U?$less@W4eFragmentPrograms@@@std@@V?$allocator@U?$pair@$$CBW4eFragmentPrograms@@PAVFragmentProgram@@@std@@@4@$0A@@std@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline Light::~Light() // 0x10050C00
{
    mangled_assert("??1Light@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline std::map<enum eFragmentPrograms,FragmentProgram *,std::less<enum eFragmentPrograms>,std::allocator<std::pair<enum eFragmentPrograms const ,FragmentProgram *> > >::~map<enum eFragmentPrograms,FragmentProgram *,std::less<enum eFragmentPrograms>,std::allocator<std::pair<enum eFragmentPrograms const ,FragmentProgram *> > >() // 0x10050A80
{
    mangled_assert("??1?$map@W4eFragmentPrograms@@PAVFragmentProgram@@U?$less@W4eFragmentPrograms@@@std@@V?$allocator@U?$pair@$$CBW4eFragmentPrograms@@PAVFragmentProgram@@@std@@@4@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline FragmentProgram &FragmentProgram::operator=(FragmentProgram const &) // 0x10050D20
{
    mangled_assert("??4FragmentProgram@@QAEAAV0@ABV0@@Z");
    compiler_generated();
    todo("implement");
}

_inline FragmentProgram::~FragmentProgram() // 0x10050AD0
{
    mangled_assert("??1FragmentProgram@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline FragmentProgramManager &FragmentProgramManager::operator=(FragmentProgramManager const &) // 0x10050D50
{
    mangled_assert("??4FragmentProgramManager@@QAEAAV0@ABV0@@Z");
    compiler_generated();
    todo("implement");
}

_inline Light &Light::operator=(Light const &) // 0x10050D60
{
    mangled_assert("??4Light@@QAEAAV0@ABV0@@Z");
    compiler_generated();
    todo("implement");
}

_inline LightHandle &LightHandle::operator=(LightHandle const &) // 0x10050E00
{
    mangled_assert("??4LightHandle@@QAEAAV0@ABV0@@Z");
    compiler_generated();
    todo("implement");
}

_inline LightManager &LightManager::operator=(LightManager const &) // 0x10050E10
{
    mangled_assert("??4LightManager@@QAEAAV0@ABV0@@Z");
    compiler_generated();
    todo("implement");
}

_inline gfxOptionsManager &gfxOptionsManager::operator=(gfxOptionsManager const &) // 0x10050E70
{
    mangled_assert("??4gfxOptionsManager@@QAEAAV0@ABV0@@Z");
    compiler_generated();
    todo("implement");
}

bool FragmentProgramManager::initializeAllFragmentPrograms() // 0x10051DB0
{
    mangled_assert("?initializeAllFragmentPrograms@FragmentProgramManager@@AAE_NXZ");
    todo("implement");
}

void FragmentProgramManager::initialize(rndTable *) // 0x10051D90
{
    mangled_assert("?initialize@FragmentProgramManager@@QAEXPAUrndTable@@@Z");
    todo("implement");
}

void FragmentProgramManager::setFragmentProgram(eFragmentPrograms newProgram) // 0x10052BE0
{
    mangled_assert("?setFragmentProgram@FragmentProgramManager@@SGXW4eFragmentPrograms@@@Z");
    todo("implement");
}

bool FragmentProgram::Initialize(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &, bool) // 0x10051250
{
    mangled_assert("?Initialize@FragmentProgram@@QAE_NABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_N@Z");
    todo("implement");
}

bool FragmentProgram::loadProgram(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &, std::basic_string<char,std::char_traits<char>,std::allocator<char> > &) // 0x100529A0
{
    mangled_assert("?loadProgram@FragmentProgram@@AAE_NABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AAV23@@Z");
    todo("implement");
}

bool FragmentProgram::createProgram(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &, bool) // 0x10051890
{
    mangled_assert("?createProgram@FragmentProgram@@AAE_NABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_N@Z");
    todo("implement");
}

void FragmentProgram::bind() // 0x100517E0
{
    mangled_assert("?bind@FragmentProgram@@QAEXXZ");
    todo("implement");
}

/* ---------- private code */
#endif
