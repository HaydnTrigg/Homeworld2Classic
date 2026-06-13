#if 0
/* ---------- headers */

#include "decomp.h"
#include <xhash>
#include <xlocale>
#include <boost\shared_ptr.hpp>
#include <stdexcept>
#include <boost\config.hpp>
#include <xstring>
#include <boost\config\user.hpp>
#include <xmemory0>
#include <Objects\pch.h>
#include <boost\config\select_compiler_config.hpp>
#include <Mathlib\matvec.h>
#include <limits>
#include <memory\memorylib.h>
#include <boost\config\compiler\visualc.hpp>
#include <Mathlib\vector2.h>
#include <ymath.h>
#include <malloc.h>
#include <boost\config\select_stdlib_config.hpp>
#include <crtdefs.h>
#include <boost\config\stdlib\dinkumware.hpp>
#include <sal.h>
#include <Objects\StateBlock\CompoundStateBlockInstance.h>
#include <boost\config\select_platform_config.hpp>
#include <concurrencysal.h>
#include <boost\config\platform\win32.hpp>
#include <vadefs.h>
#include <Objects\Mesh.h>
#include <Objects\Core.h>
#include <gl\lotypes.h>
#include <Objects\Objects.h>
#include <gl\types.h>
#include <util\colour.h>
#include <Mathlib\vector4.h>
#include <Mathlib\mathlibdll.h>
#include <Mathlib\fastmath.h>
#include <immintrin.h>
#include <boost\detail\workaround.hpp>
#include <wmmintrin.h>
#include <new>
#include <nmmintrin.h>
#include <exception>
#include <Objects\StateBlock\stateblocktypes.h>
#include <assist\typemagic.h>
#include <smmintrin.h>
#include <xstddef>
#include <cstddef>
#include <platform\osdef.h>
#include <tmmintrin.h>
#include <type_traits>
#include <stddef.h>
#include <yvals.h>
#include <Objects\goblinmesh.h>
#include <tuple>
#include <xlocinfo>
#include <pmmintrin.h>
#include <xkeycheck.h>
#include <xlocinfo.h>
#include <emmintrin.h>
#include <use_ansi.h>
#include <ctype.h>
#include <xmmintrin.h>
#include <Objects\Texture.h>
#include <mmintrin.h>
#include <Objects\TextureRegistry.h>
#include <xutility>
#include <xatomic0.h>
#include <utility>
#include <Objects\StateBlock\StateVariableInstance.h>
#include <vector>
#include <iosfwd>
#include <boost\config\suffix.hpp>
#include <util\dictionary.h>
#include <xmemory>
#include <crtdbg.h>
#include <boost\assert.hpp>
#include <util\utilexports.h>
#include <boost\checked_delete.hpp>
#include <share.h>
#include <Objects\memtracker.h>
#include <compiler\compilerconfig.h>
#include <Objects\StateBlock\stateBlock.h>
#include <gl\r_defines.h>
#include <cmath>
#include <bitset>
#include <gl\glext.h>
#include <math.h>
#include <xrefwrap>
#include <list>
#include <string.h>
#include <wtime.inl>
#include <gl\r_types.h>
#include <boost\throw_exception.hpp>
#include <map>
#include <xtree>
#include <xdebug>
#include <boost\detail\shared_count.hpp>
#include <boost\detail\lightweight_mutex.hpp>
#include <boost\detail\lwm_win32.hpp>
#include <typeinfo>
#include <profile\profile.h>
#include <Objects\ParentMesh.h>
#include <iostream>
#include <xfacet>
#include <memory.h>
#include <Mathlib\matrix4.h>
#include <Mathlib\vector3.h>
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
#include <Mathlib\matrix3.h>
#include <xtr1common>
#include <Objects\multimesh.h>
#include <Objects\VertexArray.h>
#include <Objects\VertexArrayInternal.h>
#include <ammintrin.h>
#include <eh.h>
#include <Objects\basicmesh.h>
#include <mm3dnow.h>
#include <debug\ctmessage.h>
#include <Objects\VaryMesh.h>
#include <memory>
#include <stdint.h>
#include <functional>
#include <xfunctional>
#include <fileio\filestream.h>
#include <fileio\fileioexports.h>
#include <fileio\bytestream.h>
#include <debug\ctassert.h>
#include <debug\db.h>
#include <locale.h>
#include <assist\fixedstring.h>
#include <system_error>
#include <stdlib.h>
#include <assist\stlexstring.h>
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
#include <Objects\Renderable.h>
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

extern bool textureFormatSort(memtracker::TextureMemory const &a, memtracker::TextureMemory const &b);

_static void writeTextureLog(char const *name, char const *label, unsigned __int32 memory, unsigned __int32 count);

/* ---------- globals */

extern memtracker::GameMemoryUsage *memtracker::GameMemoryUsage::s_instance; // 0x10132B4C
extern char const *memtracker::dumpMemoryStatisticsCMDLine; // 0x1010D7E8
extern std::map<unsigned int,std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::less<unsigned int>,std::allocator<std::pair<unsigned int const ,std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > > textureFormatMap; // 0x10132B54

/* ---------- private variables */

_static
{
    extern std::piecewise_construct_t piecewise_construct; // 0x10132B53
    extern std::allocator_arg_t allocator_arg; // 0x10132B52
    extern std::_Nil _Nil_obj; // 0x10132B5C
    extern std::_Ignore ignore; // 0x10132B51
    extern std::_Tuple_alloc_t _Tuple_alloc; // 0x10132B50
}

/* ---------- public code */

_extern _sub_100742E0(memtracker::BasicMeshMemory *const);
_inline memtracker::BasicMeshMemory::BasicMeshMemory() // 0x100742E0
{
    mangled_assert("??0BasicMeshMemory@memtracker@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_100742E0(this);
}

_extern _sub_10074320(memtracker::MeshMemory *const, Mesh const *, char const *);
memtracker::MeshMemory::MeshMemory(Mesh const *, char const *) // 0x10074320
{
    mangled_assert("??0MeshMemory@memtracker@@QAE@PBVMesh@@PBD@Z");
    todo("implement");
    _sub_10074320(this, arg, arg);
}

_extern _sub_10074400(memtracker::MultiMeshMemory *const);
_inline memtracker::MultiMeshMemory::MultiMeshMemory() // 0x10074400
{
    mangled_assert("??0MultiMeshMemory@memtracker@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_10074400(this);
}

_extern void _sub_10074610(memtracker::MeshMemory *const);
memtracker::MeshMemory::~MeshMemory() // 0x10074610
{
    mangled_assert("??1MeshMemory@memtracker@@QAE@XZ");
    todo("implement");
    _sub_10074610(this);
}

_extern void _sub_10074720(memtracker::MultiMeshMemory *const);
memtracker::MultiMeshMemory::~MultiMeshMemory() // 0x10074720
{
    mangled_assert("??1MultiMeshMemory@memtracker@@QAE@XZ");
    todo("implement");
    _sub_10074720(this);
}

_extern void _sub_10074560(memtracker::BasicMeshMemory *const);
memtracker::BasicMeshMemory::~BasicMeshMemory() // 0x10074560
{
    mangled_assert("??1BasicMeshMemory@memtracker@@QAE@XZ");
    todo("implement");
    _sub_10074560(this);
}

_extern void _sub_10074780(memtracker::TrigroupMemory *const);
memtracker::TrigroupMemory::~TrigroupMemory() // 0x10074780
{
    mangled_assert("??1TrigroupMemory@memtracker@@QAE@XZ");
    todo("implement");
    _sub_10074780(this);
}

_extern bool _sub_10078690(memtracker::TextureMemory const &, memtracker::TextureMemory const &);
bool textureFormatSort(memtracker::TextureMemory const &a, memtracker::TextureMemory const &b) // 0x10078690
{
    mangled_assert("?textureFormatSort@@YG_NABVTextureMemory@memtracker@@0@Z");
    todo("implement");
    bool __result = _sub_10078690(a, b);
    return __result;
}

_extern _sub_10074420(memtracker::TextureMemory *const, unsigned __int32 const, unsigned __int32 const, unsigned __int32 const, TextureFormat const);
memtracker::TextureMemory::TextureMemory(unsigned __int32 const, unsigned __int32 const, unsigned __int32 const, TextureFormat const) // 0x10074420
{
    mangled_assert("??0TextureMemory@memtracker@@QAE@IIIW4TextureFormat@@@Z");
    todo("implement");
    _sub_10074420(this, arg, arg, arg, arg);
}

_extern _sub_10074460(memtracker::TrigroupMemory *const);
_inline memtracker::TrigroupMemory::TrigroupMemory() // 0x10074460
{
    mangled_assert("??0TrigroupMemory@memtracker@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_10074460(this);
}

_extern void _sub_100744C0(std::_Tree_buy<std::pair<unsigned int const ,std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<unsigned int const ,std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > > *const);
_inline std::_Tree_buy<std::pair<unsigned int const ,std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<unsigned int const ,std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > >::~_Tree_buy<std::pair<unsigned int const ,std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<unsigned int const ,std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > >() // 0x100744C0
{
    mangled_assert("??1?$_Tree_buy@U?$pair@$$CBIV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@std@@V?$allocator@U?$pair@$$CBIV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@std@@@2@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_100744C0(this);
}

_extern void _sub_100744D0(std::_Tree_comp<0,std::_Tmap_traits<unsigned int,std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::less<unsigned int>,std::allocator<std::pair<unsigned int const ,std::basic_string<char,std::char_traits<char>,std::allocator<char> > > >,0> > *const);
_inline std::_Tree_comp<0,std::_Tmap_traits<unsigned int,std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::less<unsigned int>,std::allocator<std::pair<unsigned int const ,std::basic_string<char,std::char_traits<char>,std::allocator<char> > > >,0> >::~_Tree_comp<0,std::_Tmap_traits<unsigned int,std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::less<unsigned int>,std::allocator<std::pair<unsigned int const ,std::basic_string<char,std::char_traits<char>,std::allocator<char> > > >,0> >() // 0x100744D0
{
    mangled_assert("??1?$_Tree_comp@$0A@V?$_Tmap_traits@IV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@U?$less@I@2@V?$allocator@U?$pair@$$CBIV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@std@@@2@$0A@@std@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_100744D0(this);
}

_extern void _sub_100744E0(std::map<unsigned int,std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::less<unsigned int>,std::allocator<std::pair<unsigned int const ,std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > > *const);
_inline std::map<unsigned int,std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::less<unsigned int>,std::allocator<std::pair<unsigned int const ,std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > >::~map<unsigned int,std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::less<unsigned int>,std::allocator<std::pair<unsigned int const ,std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > >() // 0x100744E0
{
    mangled_assert("??1?$map@IV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@U?$less@I@2@V?$allocator@U?$pair@$$CBIV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@std@@@2@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_100744E0(this);
}

_extern bool _sub_10074EF0();
bool memtracker::GameMemoryUsage::Startup() // 0x10074EF0
{
    mangled_assert("?Startup@GameMemoryUsage@memtracker@@SG_NXZ");
    todo("implement");
    bool __result = _sub_10074EF0();
    return __result;
}

_extern void _sub_10074500(std::pair<unsigned int const ,std::basic_string<char,std::char_traits<char>,std::allocator<char> > > *const);
_inline std::pair<unsigned int const ,std::basic_string<char,std::char_traits<char>,std::allocator<char> > >::~pair<unsigned int const ,std::basic_string<char,std::char_traits<char>,std::allocator<char> > >() // 0x10074500
{
    mangled_assert("??1?$pair@$$CBIV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_10074500(this);
}

_extern void _sub_10074530(std::pair<unsigned int,std::basic_string<char,std::char_traits<char>,std::allocator<char> > > *const);
_inline std::pair<unsigned int,std::basic_string<char,std::char_traits<char>,std::allocator<char> > >::~pair<unsigned int,std::basic_string<char,std::char_traits<char>,std::allocator<char> > >() // 0x10074530
{
    mangled_assert("??1?$pair@IV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_10074530(this);
}

_extern bool _sub_10074EC0();
bool memtracker::GameMemoryUsage::Shutdown() // 0x10074EC0
{
    mangled_assert("?Shutdown@GameMemoryUsage@memtracker@@SG_NXZ");
    todo("implement");
    bool __result = _sub_10074EC0();
    return __result;
}

_extern bool _sub_10074E50();
bool memtracker::GameMemoryUsage::Release() // 0x10074E50
{
    mangled_assert("?Release@GameMemoryUsage@memtracker@@SG_NXZ");
    todo("implement");
    bool __result = _sub_10074E50();
    return __result;
}

_extern void _sub_10077CD0(memtracker::MeshMemory *const, Mesh const *);
void memtracker::MeshMemory::fillTextures(Mesh const *) // 0x10077CD0
{
    mangled_assert("?fillTextures@MeshMemory@memtracker@@AAEXPBVMesh@@@Z");
    todo("implement");
    _sub_10077CD0(this, arg);
}

_extern unsigned __int32 _sub_10074E10(memtracker::MeshMemory const *const);
unsigned __int32 memtracker::MeshMemory::GetTotalTextureMemory() const // 0x10074E10
{
    mangled_assert("?GetTotalTextureMemory@MeshMemory@memtracker@@QBEIXZ");
    todo("implement");
    unsigned __int32 __result = _sub_10074E10(this);
    return __result;
}

_extern void _sub_10078ED0(memtracker::MeshMemory *const, ByteStreamProxy &);
void memtracker::MeshMemory::writeTextureInfo(ByteStreamProxy &) // 0x10078ED0
{
    mangled_assert("?writeTextureInfo@MeshMemory@memtracker@@AAEXAAVByteStreamProxy@@@Z");
    todo("implement");
    _sub_10078ED0(this, arg);
}

_extern void _sub_10078790(memtracker::MeshMemory *const, ByteStreamProxy &);
void memtracker::MeshMemory::writeMeshInfo(ByteStreamProxy &) // 0x10078790
{
    mangled_assert("?writeMeshInfo@MeshMemory@memtracker@@AAEXAAVByteStreamProxy@@@Z");
    todo("implement");
    _sub_10078790(this, arg);
}

_extern void _sub_10079110(memtracker::MeshMemory *const, ByteStreamProxy &);
void memtracker::MeshMemory::writeTextureNames(ByteStreamProxy &) // 0x10079110
{
    mangled_assert("?writeTextureNames@MeshMemory@memtracker@@AAEXAAVByteStreamProxy@@@Z");
    todo("implement");
    _sub_10079110(this, arg);
}

_extern void _sub_100786B0(memtracker::MeshMemory *const);
void memtracker::MeshMemory::writeLog() // 0x100786B0
{
    mangled_assert("?writeLog@MeshMemory@memtracker@@QAEXXZ");
    todo("implement");
    _sub_100786B0(this);
}

_extern void _sub_10076E30(memtracker::MeshMemory *const, Mesh const *);
void memtracker::MeshMemory::fillMeshes(Mesh const *) // 0x10076E30
{
    mangled_assert("?fillMeshes@MeshMemory@memtracker@@QAEXPBVMesh@@@Z");
    todo("implement");
    _sub_10076E30(this, arg);
}

_extern _sub_10074300(memtracker::GameMemoryUsage *const);
memtracker::GameMemoryUsage::GameMemoryUsage() // 0x10074300
{
    mangled_assert("??0GameMemoryUsage@memtracker@@QAE@XZ");
    todo("implement");
    _sub_10074300(this);
}

_extern void _sub_100745C0(memtracker::GameMemoryUsage *const);
memtracker::GameMemoryUsage::~GameMemoryUsage() // 0x100745C0
{
    mangled_assert("??1GameMemoryUsage@memtracker@@QAE@XZ");
    todo("implement");
    _sub_100745C0(this);
}

_extern void _sub_10074DB0(memtracker::GameMemoryUsage *const, Mesh const *, char const *);
void memtracker::GameMemoryUsage::DumpMemoryUsage(Mesh const *, char const *) // 0x10074DB0
{
    mangled_assert("?DumpMemoryUsage@GameMemoryUsage@memtracker@@QAEXPBVMesh@@PBD@Z");
    todo("implement");
    _sub_10074DB0(this, arg, arg);
}

_extern memtracker::GameMemoryUsage *_sub_10077EE0();
memtracker::GameMemoryUsage *memtracker::GameMemoryUsage::i() // 0x10077EE0
{
    mangled_assert("?i@GameMemoryUsage@memtracker@@SGPAV12@XZ");
    todo("implement");
    memtracker::GameMemoryUsage * __result = _sub_10077EE0();
    return __result;
}

_extern void _sub_100766C0(memtracker::TextureRegistryMemory *const);
void memtracker::TextureRegistryMemory::computeMemoryUsed() // 0x100766C0
{
    mangled_assert("?computeMemoryUsed@TextureRegistryMemory@memtracker@@QAEXXZ");
    todo("implement");
    _sub_100766C0(this);
}

_extern void _sub_10075100(memtracker::GameMemoryUsage *const);
void memtracker::GameMemoryUsage::WriteStats() // 0x10075100
{
    mangled_assert("?WriteStats@GameMemoryUsage@memtracker@@QAEXXZ");
    todo("implement");
    _sub_10075100(this);
}

/* ---------- private code */

_extern void _sub_10079010(char const *, char const *, unsigned __int32, unsigned __int32);
_static void writeTextureLog(char const *name, char const *label, unsigned __int32 memory, unsigned __int32 count) // 0x10079010
{
    mangled_assert("writeTextureLog");
    todo("implement");
    _sub_10079010(name, label, memory, count);
}
#endif
