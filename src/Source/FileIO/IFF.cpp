#if 0
/* ---------- headers */

#include "decomp.h"
#include <boost\config.hpp>
#include <time.inl>
#include <boost\config\user.hpp>
#include <boost\config\select_compiler_config.hpp>
#include <boost\config\compiler\visualc.hpp>
#include <pch.h>
#include <boost\config\select_stdlib_config.hpp>
#include <memory\memorylib.h>
#include <assist\typemagic.h>
#include <boost\config\stdlib\dinkumware.hpp>
#include <malloc.h>
#include <boost\config\select_platform_config.hpp>
#include <crtdefs.h>
#include <boost\config\platform\win32.hpp>
#include <sal.h>
#include <concurrencysal.h>
#include <intrin.h>
#include <vadefs.h>
#include <setjmp.h>
#include <debug\ctassert.h>
#include "\HICKORY-PCSHIP\Homeworld2Classic\src\Source\FileIO\IFF.h"
#include "\HICKORY-PCSHIP\Homeworld2Classic\src\Source\FileIO\fileioexports.h"
#include <new>
#include <exception>
#include <set>
#include <xstddef>
#include <cstddef>
#include <stddef.h>
#include <yvals.h>
#include <xkeycheck.h>
#include <boost\detail\workaround.hpp>
#include <use_ansi.h>
#include <debug\ctmessage.h>
#include <algorithm>
#include <tuple>
#include <xmemory>
#include <boost\config\suffix.hpp>
#include <xmemory0>
#include <cstdlib>
#include <limits>
#include <ymath.h>
#include <bitset>
#include <xlocinfo>
#include <string>
#include <xlocinfo.h>
#include <ctype.h>
#include <immintrin.h>
#include <ctime>
#include <compiler\compilerconfig.h>
#include <wmmintrin.h>
#include <time.h>
#include <cstdio>
#include <nmmintrin.h>
#include <stdio.h>
#include <smmintrin.h>
#include <tmmintrin.h>
#include <type_traits>
#include <string.h>
#include <queue>
#include <pmmintrin.h>
#include <debug\db.h>
#include <deque>
#include <share.h>
#include <emmintrin.h>
#include <xmmintrin.h>
#include <mmintrin.h>
#include <xutility>
#include <xtgmath.h>
#include <xatomic0.h>
#include <utility>
#include <iosfwd>
#include <crtdbg.h>
#include <vector>
#include <iterator>
#include <istream>
#include <boost\shared_ptr.hpp>
#include <ostream>
#include <xrefwrap>
#include <boost\throw_exception.hpp>
#include <ios>
#include <xlocnum>
#include <xdebug>
#include <memory.h>
#include <streambuf>
#include <boost\detail\shared_count.hpp>
#include <xiosbase>
#include <boost\detail\lightweight_mutex.hpp>
#include <xlocale>
#include <boost\detail\lwm_win32.hpp>
#include <typeinfo>
#include <boost\smart_ptr.hpp>
#include <boost\scoped_ptr.hpp>
#include <boost\assert.hpp>
#include <assert.h>
#include <boost\checked_delete.hpp>
#include <numeric>
#include <xfacet>
#include <hash_map>
#include <hash_set>
#include <xhash>
#include <list>
#include <stdexcept>
#include <xstring>
#include <xtr1common>
#include <cstring>
#include <eh.h>
#include <memory>
#include <cmath>
#include <stdint.h>
#include <math.h>
#include <swprintf.inl>
#include <boost\shared_array.hpp>
#include <climits>
#include <cwchar>
#include "\HICKORY-PCSHIP\Homeworld2Classic\src\Source\FileIO\ByteStream.h"
#include <wchar.h>
#include <assist\fixedstring.h>
#include <assist\stlexstring.h>
#include <functional>
#include <xfunctional>
#include <ammintrin.h>
#include <mm3dnow.h>
#include <stdlib.h>
#include <limits.h>
#include <cfloat>
#include <stack>
#include <float.h>
#include <crtwrn.h>
#include <wtime.inl>
#include <locale.h>
#include <map>
#include <xtree>
#include <system_error>
#include <cerrno>
#include <errno.h>
#include <boost\scoped_array.hpp>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */


_static _inline unsigned long long _swap(unsigned long long s);

/* ---------- globals */

/* ---------- private variables */

_static
{
    extern std::_Ignore ignore; // 0x1001F869
    extern std::_Tuple_alloc_t _Tuple_alloc; // 0x1001F868
    extern std::piecewise_construct_t piecewise_construct; // 0x1001F86B
    extern std::allocator_arg_t allocator_arg; // 0x1001F86A
}

/* ---------- public code */

_extern _sub_10010884(IFF::ChunkList *const, IFF::ChunkList const &);
_inline IFF::ChunkList::ChunkList(IFF::ChunkList const &) // 0x10010884
{
    mangled_assert("??0ChunkList@IFF@@QAE@ABV01@@Z");
    compiler_generated();
    todo("implement");
    _sub_10010884(this, arg);
}

_extern _sub_10010A00(IFFChunk *const, IFF *);
IFFChunk::IFFChunk(IFF *) // 0x10010A00
{
    mangled_assert("??0IFFChunk@@QAE@PAVIFF@@@Z");
    todo("implement");
    _sub_10010A00(this, arg);
}

_extern _sub_10010A30(IFFChunk *const, IFF *, IFFType, unsigned __int32);
IFFChunk::IFFChunk(IFF *, IFFType, unsigned __int32) // 0x10010A30
{
    mangled_assert("??0IFFChunk@@QAE@PAVIFF@@W4IFFType@@I@Z");
    todo("implement");
    _sub_10010A30(this, arg, arg, arg);
}

_extern void _sub_10010A7A(std::_List_buy<IFF::HandlerList *,std::allocator<IFF::HandlerList *> > *const);
_inline std::_List_buy<IFF::HandlerList *,std::allocator<IFF::HandlerList *> >::~_List_buy<IFF::HandlerList *,std::allocator<IFF::HandlerList *> >() // 0x10010A7A
{
    mangled_assert("??1?$_List_buy@PAVHandlerList@IFF@@V?$allocator@PAVHandlerList@IFF@@@std@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_10010A7A(this);
}

_extern void _sub_10010A83(std::_List_buy<IFFChunk *,std::allocator<IFFChunk *> > *const);
_inline std::_List_buy<IFFChunk *,std::allocator<IFFChunk *> >::~_List_buy<IFFChunk *,std::allocator<IFFChunk *> >() // 0x10010A83
{
    mangled_assert("??1?$_List_buy@PAVIFFChunk@@V?$allocator@PAVIFFChunk@@@std@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_10010A83(this);
}

_extern void _sub_10010BDC(IFFChunk *const);
IFFChunk::~IFFChunk() // 0x10010BDC
{
    mangled_assert("??1IFFChunk@@UAE@XZ");
    todo("implement");
    _sub_10010BDC(this);
}

_extern IFF::ChunkList &_sub_10010CC3(IFF::ChunkList *const, IFF::ChunkList const &);
_inline IFF::ChunkList &IFF::ChunkList::operator=(IFF::ChunkList const &) // 0x10010CC3
{
    mangled_assert("??4ChunkList@IFF@@QAEAAV01@ABV01@@Z");
    compiler_generated();
    todo("implement");
    IFF::ChunkList & __result = _sub_10010CC3(this, arg);
    return __result;
}

_extern IFF &_sub_10010CE4(IFF *const, IFF const &);
_inline IFF &IFF::operator=(IFF const &) // 0x10010CE4
{
    mangled_assert("??4IFF@@QAEAAV0@ABV0@@Z");
    compiler_generated();
    todo("implement");
    IFF & __result = _sub_10010CE4(this, arg);
    return __result;
}

_extern IFFChunk &_sub_10010D3D(IFFChunk *const, IFFChunk const &);
_inline IFFChunk &IFFChunk::operator=(IFFChunk const &) // 0x10010D3D
{
    mangled_assert("??4IFFChunk@@QAEAAV0@ABV0@@Z");
    compiler_generated();
    todo("implement");
    IFFChunk & __result = _sub_10010D3D(this, arg);
    return __result;
}

_extern bool _sub_10011658(IFFChunk *const, void *, unsigned __int32, unsigned __int32);
bool IFFChunk::_write(void *, unsigned __int32, unsigned __int32) // 0x10011658
{
    mangled_assert("?_write@IFFChunk@@EAE_NPAXII@Z");
    todo("implement");
    bool __result = _sub_10011658(this, arg, arg, arg);
    return __result;
}

_extern bool _sub_100115E9(IFFChunk *const, void *, unsigned __int32, unsigned __int32);
bool IFFChunk::_read(void *, unsigned __int32, unsigned __int32) // 0x100115E9
{
    mangled_assert("?_read@IFFChunk@@EAE_NPAXII@Z");
    todo("implement");
    bool __result = _sub_100115E9(this, arg, arg, arg);
    return __result;
}

_extern bool _sub_10012903(IFFChunk *const, bool);
bool IFFChunk::write(bool) // 0x10012903
{
    mangled_assert("?write@IFFChunk@@UAE_N_N@Z");
    todo("implement");
    bool __result = _sub_10012903(this, arg);
    return __result;
}

_extern bool _sub_1001232A(IFFChunk *const, bool &);
bool IFFChunk::read(bool &) // 0x1001232A
{
    mangled_assert("?read@IFFChunk@@UAE_NAA_N@Z");
    todo("implement");
    bool __result = _sub_1001232A(this, arg);
    return __result;
}

_extern bool _sub_100128A0(IFFChunk *const, std::string);
bool IFFChunk::write(std::string) // 0x100128A0
{
    mangled_assert("?write@IFFChunk@@UAE_NV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z");
    todo("implement");
    bool __result = _sub_100128A0(this, arg);
    return __result;
}

_extern bool _sub_100122BD(IFFChunk *const, std::basic_string<char,std::char_traits<char>,std::allocator<char> > &);
bool IFFChunk::read(std::basic_string<char,std::char_traits<char>,std::allocator<char> > &) // 0x100122BD
{
    mangled_assert("?read@IFFChunk@@UAE_NAAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z");
    todo("implement");
    bool __result = _sub_100122BD(this, arg);
    return __result;
}

_extern bool _sub_10012406(IFFChunk *const, char **);
bool IFFChunk::read(char **) // 0x10012406
{
    mangled_assert("?read@IFFChunk@@UAE_NPAPAD@Z");
    todo("implement");
    bool __result = _sub_10012406(this, arg);
    return __result;
}

_extern bool _sub_10012351(IFFChunk *const, __int32, char *);
bool IFFChunk::read(__int32, char *) // 0x10012351
{
    mangled_assert("?read@IFFChunk@@UAE_NHPAD@Z");
    todo("implement");
    bool __result = _sub_10012351(this, arg, arg);
    return __result;
}

_extern bool _sub_1001287A(IFFChunk *const, void *, unsigned __int32, unsigned __int32);
bool IFFChunk::write(void *, unsigned __int32, unsigned __int32) // 0x1001287A
{
    mangled_assert("?write@IFFChunk@@AAE_NPAXII@Z");
    todo("implement");
    bool __result = _sub_1001287A(this, arg, arg, arg);
    return __result;
}

_extern bool _sub_1001228D(IFFChunk *const, void *, unsigned __int32, unsigned __int32);
bool IFFChunk::read(void *, unsigned __int32, unsigned __int32) // 0x1001228D
{
    mangled_assert("?read@IFFChunk@@AAE_NPAXII@Z");
    todo("implement");
    bool __result = _sub_1001228D(this, arg, arg, arg);
    return __result;
}

_extern _sub_100108A3(IFF::ChunkList *const);
IFF::ChunkList::ChunkList() // 0x100108A3
{
    mangled_assert("??0ChunkList@IFF@@QAE@XZ");
    todo("implement");
    _sub_100108A3(this);
}

_extern void _sub_10010ABA(IFF::ChunkList *const);
IFF::ChunkList::~ChunkList() // 0x10010ABA
{
    mangled_assert("??1ChunkList@IFF@@UAE@XZ");
    todo("implement");
    _sub_10010ABA(this);
}

_extern _sub_100108C7(IFF::HandlerList *const, IFF *);
IFF::HandlerList::HandlerList(IFF *) // 0x100108C7
{
    mangled_assert("??0HandlerList@IFF@@QAE@PAV1@@Z");
    todo("implement");
    _sub_100108C7(this, arg);
}

_extern _sub_100108DD(IFF *const, IFF const &);
_inline IFF::IFF(IFF const &) // 0x100108DD
{
    mangled_assert("??0IFF@@QAE@ABV0@@Z");
    compiler_generated();
    todo("implement");
    _sub_100108DD(this, arg);
}

_extern void _sub_10010B0F(IFF::HandlerList *const);
IFF::HandlerList::~HandlerList() // 0x10010B0F
{
    mangled_assert("??1HandlerList@IFF@@QAE@XZ");
    todo("implement");
    _sub_10010B0F(this);
}

_extern void _sub_100116C2(IFF::HandlerList *const, unsigned __int32, IFFType, __int32 (*)(IFF *, IFFChunk *, void *, void *), void *, void *, __int32);
void IFF::HandlerList::addHandler(unsigned __int32, IFFType, __int32 (*)(IFF *, IFFChunk *, void *, void *), void *, void *, __int32) // 0x100116C2
{
    mangled_assert("?addHandler@HandlerList@IFF@@QAEXIW4IFFType@@P6GHPAV2@PAVIFFChunk@@PAX3@Z33H@Z");
    todo("implement");
    _sub_100116C2(this, arg, arg, arg, arg, arg, arg);
}

_extern IFF::HandlerNode *_sub_10011C10(IFF::HandlerList *const, IFFType, unsigned __int32);
IFF::HandlerNode *IFF::HandlerList::findHandler(IFFType, unsigned __int32) // 0x10011C10
{
    mangled_assert("?findHandler@HandlerList@IFF@@QAEPAUHandlerNode@2@W4IFFType@@I@Z");
    todo("implement");
    IFF::HandlerNode * __result = _sub_10011C10(this, arg, arg);
    return __result;
}

_extern void _sub_10011806(IFF::HandlerList *const);
void IFF::HandlerList::assertChunkCounts() // 0x10011806
{
    mangled_assert("?assertChunkCounts@HandlerList@IFF@@QAEXXZ");
    todo("implement");
    _sub_10011806(this);
}

_extern _sub_10010950(IFF *const);
IFF::IFF() // 0x10010950
{
    mangled_assert("??0IFF@@QAE@XZ");
    todo("implement");
    _sub_10010950(this);
}

_extern _sub_100109AF(IFFChunk *const, IFFChunk const &);
_inline IFFChunk::IFFChunk(IFFChunk const &) // 0x100109AF
{
    mangled_assert("??0IFFChunk@@QAE@ABV0@@Z");
    compiler_generated();
    todo("implement");
    _sub_100109AF(this, arg);
}

_extern void _sub_10010B39(IFF *const);
IFF::~IFF() // 0x10010B39
{
    mangled_assert("??1IFF@@UAE@XZ");
    todo("implement");
    _sub_10010B39(this);
}

_extern char const *_sub_10011C81(IFF const *const);
char const *IFF::getName() const // 0x10011C81
{
    mangled_assert("?getName@IFF@@QBEPBDXZ");
    todo("implement");
    char const * __result = _sub_10011C81(this);
    return __result;
}

_extern bool _sub_1001188E(IFF *const, ByteStream *);
bool IFF::attach(ByteStream *) // 0x1001188E
{
    mangled_assert("?attach@IFF@@UAE_NPAVByteStream@@@Z");
    todo("implement");
    bool __result = _sub_1001188E(this, arg);
    return __result;
}

_extern IFF::ChunkList *_sub_10011CB9(IFF *const);
IFF::ChunkList *IFF::load() // 0x10011CB9
{
    mangled_assert("?load@IFF@@UAEPAVChunkList@1@XZ");
    todo("implement");
    IFF::ChunkList * __result = _sub_10011CB9(this);
    return __result;
}

_extern bool _sub_10012568(IFF *const, IFF::ChunkList *);
bool IFF::save(IFF::ChunkList *) // 0x10012568
{
    mangled_assert("?save@IFF@@UAE_NPAVChunkList@1@@Z");
    todo("implement");
    bool __result = _sub_10012568(this, arg);
    return __result;
}

_extern __int32 _sub_10011E66(IFF *const);
__int32 IFF::parse() // 0x10011E66
{
    mangled_assert("?parse@IFF@@UAEHXZ");
    todo("implement");
    __int32 __result = _sub_10011E66(this);
    return __result;
}

_extern void _sub_1001173B(IFF *const, unsigned __int32, IFFType, __int32 (*)(IFF *, IFFChunk *, void *, void *), void *, void *, __int32);
void IFF::addHandler(unsigned __int32, IFFType, __int32 (*)(IFF *, IFFChunk *, void *, void *), void *, void *, __int32) // 0x1001173B
{
    mangled_assert("?addHandler@IFF@@UAEXIW4IFFType@@P6GHPAV1@PAVIFFChunk@@PAX3@Z33H@Z");
    todo("implement");
    _sub_1001173B(this, arg, arg, arg, arg, arg, arg);
}

_extern void _sub_1001171E(IFF *const, unsigned __int32, __int32 (*)(IFF *, IFFChunk *, void *, void *), void *, void *, __int32);
void IFF::addHandler(unsigned __int32, __int32 (*)(IFF *, IFFChunk *, void *, void *), void *, void *, __int32) // 0x1001171E
{
    mangled_assert("?addHandler@IFF@@QAEXIP6GHPAV1@PAVIFFChunk@@PAX2@Z22H@Z");
    todo("implement");
    _sub_1001171E(this, arg, arg, arg, arg, arg);
}

_extern void _sub_100126BE(IFF *const, __int32 (*)(IFF *, IFFChunk *, void *, void *), void *, void *);
void IFF::setDefaultHandler(__int32 (*)(IFF *, IFFChunk *, void *, void *), void *, void *) // 0x100126BE
{
    mangled_assert("?setDefaultHandler@IFF@@UAEXP6GHPAV1@PAVIFFChunk@@PAX2@Z22@Z");
    todo("implement");
    _sub_100126BE(this, arg, arg, arg);
}

_extern IFFChunk *_sub_1001211D(IFF *const, IFFType, unsigned __int32, unsigned long);
IFFChunk *IFF::push(IFFType, unsigned __int32, unsigned long) // 0x1001211D
{
    mangled_assert("?push@IFF@@UAEPAVIFFChunk@@W4IFFType@@IK@Z");
    todo("implement");
    IFFChunk * __result = _sub_1001211D(this, arg, arg, arg);
    return __result;
}

_extern bool _sub_100120A7(IFF *const);
bool IFF::pop() // 0x100120A7
{
    mangled_assert("?pop@IFF@@UAE_NXZ");
    todo("implement");
    bool __result = _sub_100120A7(this);
    return __result;
}

_extern unsigned __int32 _sub_10011C8D(IFF *const);
unsigned __int32 IFF::getPosition() // 0x10011C8D
{
    mangled_assert("?getPosition@IFF@@UAEIXZ");
    todo("implement");
    unsigned __int32 __result = _sub_10011C8D(this);
    return __result;
}

_extern unsigned __int32 _sub_1001190F(IFF *const);
unsigned __int32 IFF::chunkRemain() // 0x1001190F
{
    mangled_assert("?chunkRemain@IFF@@UAEIXZ");
    todo("implement");
    unsigned __int32 __result = _sub_1001190F(this);
    return __result;
}

_extern unsigned long _sub_10011CA9(IFF const *const);
unsigned long IFF::getVersion() const // 0x10011CA9
{
    mangled_assert("?getVersion@IFF@@QBEKXZ");
    todo("implement");
    unsigned long __result = _sub_10011CA9(this);
    return __result;
}

_extern void _sub_1001272C(IFF *const, unsigned __int32);
void IFF::skip(unsigned __int32) // 0x1001272C
{
    mangled_assert("?skip@IFF@@UAEXI@Z");
    todo("implement");
    _sub_1001272C(this, arg);
}

_extern void _sub_1001277C(IFF *const, void *, unsigned __int32, unsigned __int32);
void IFF::swap(void *, unsigned __int32, unsigned __int32) // 0x1001277C
{
    mangled_assert("?swap@IFF@@EAEXPAXII@Z");
    todo("implement");
    _sub_1001277C(this, arg, arg, arg);
}

_extern bool _sub_10012814(IFF *const, void *, unsigned __int32, unsigned __int32, bool);
bool IFF::write(void *, unsigned __int32, unsigned __int32, bool) // 0x10012814
{
    mangled_assert("?write@IFF@@EAE_NPAXII_N@Z");
    todo("implement");
    bool __result = _sub_10012814(this, arg, arg, arg, arg);
    return __result;
}

_extern bool _sub_1001224D(IFF *const, void *, unsigned __int32, unsigned __int32, bool);
bool IFF::read(void *, unsigned __int32, unsigned __int32, bool) // 0x1001224D
{
    mangled_assert("?read@IFF@@EAE_NPAXII_N@Z");
    todo("implement");
    bool __result = _sub_1001224D(this, arg, arg, arg, arg);
    return __result;
}

_extern void _sub_10011518(IFF *const, IFFType, unsigned __int32, unsigned long);
void IFF::_push(IFFType, unsigned __int32, unsigned long) // 0x10011518
{
    mangled_assert("?_push@IFF@@EAEXW4IFFType@@IK@Z");
    todo("implement");
    _sub_10011518(this, arg, arg, arg);
}

_extern void _sub_10011495(IFF *const);
void IFF::_pop() // 0x10011495
{
    mangled_assert("?_pop@IFF@@EAEXXZ");
    todo("implement");
    _sub_10011495(this);
}

/* ---------- private code */

_extern unsigned long long _sub_10011619(unsigned long long);
_static _inline unsigned long long _swap(unsigned long long s) // 0x10011619
{
    mangled_assert("_swap");
    todo("implement");
    unsigned long long __result = _sub_10011619(s);
    return __result;
}
#endif
