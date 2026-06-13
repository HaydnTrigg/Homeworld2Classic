#if 0
/* ---------- headers */

#include "decomp.h"
#include <tuple>
#include <hash_map>
#include <boost\config\suffix.hpp>
#include <xhash>
#include <xstring>
#include <xmemory0>
#include <Objects\pch.h>
#include <memory\memorylib.h>
#include <crtdefs.h>
#include <gl\r_defines.h>
#include <gl\glext.h>
#include <Objects\Constructor.h>
#include <new>
#include <xstddef>
#include <type_traits>
#include <assist\typemagic.h>
#include <Mathlib\matrix4.h>
#include <xutility>
#include <Mathlib\vector3.h>
#include <xatomic0.h>
#include <utility>
#include <iosfwd>
#include <vector>
#include <boost\shared_ptr.hpp>
#include <xmemory>
#include <boost\throw_exception.hpp>
#include <boost\detail\shared_count.hpp>
#include <boost\detail\lightweight_mutex.hpp>
#include <Mathlib\matrix3.h>
#include <boost\detail\lwm_win32.hpp>
#include <math.h>
#include <boost\smart_ptr.hpp>
#include <boost\scoped_ptr.hpp>
#include <boost\assert.hpp>
#include <list>
#include <boost\checked_delete.hpp>
#include <Objects\TextureProxy.h>
#include <Objects\TextureRegistry.h>
#include <memory>
#include <stdint.h>
#include <Objects\VertexArray.h>
#include <boost\shared_array.hpp>
#include <Objects\VertexArrayInternal.h>
#include <fileio\iff.h>
#include <fileio\fileioexports.h>
#include <assert.h>
#include <algorithm>
#include <functional>
#include <util\types.h>
#include <xfunctional>
#include <fileio\filepath.h>
#include <platform\osdef.h>
#include <Mathlib\matvec.h>
#include <Mathlib\vector2.h>
#include <boost\scoped_array.hpp>
#include <Objects\SimpleMesh.h>
#include <boost\config.hpp>
#include <Objects\Objects.h>
#include <boost\config\user.hpp>
#include <fileio\filestream.h>
#include <Objects\Core.h>
#include <gl\lotypes.h>
#include <boost\config\select_compiler_config.hpp>
#include <fileio\bytestream.h>
#include <debug\db.h>
#include <gl\types.h>
#include <boost\config\compiler\visualc.hpp>
#include <debug\ctassert.h>
#include <util\colour.h>
#include <boost\config\select_stdlib_config.hpp>
#include <Mathlib\vector4.h>
#include <boost\config\stdlib\dinkumware.hpp>
#include <Mathlib\mathlibdll.h>
#include <boost\config\select_platform_config.hpp>
#include <Mathlib\fastmath.h>
#include <boost\config\platform\win32.hpp>
#include <gl\r_types.h>
#include <assist\fixedstring.h>
#include <assist\stlexstring.h>
#include <wchar.h>
#include <string>
#include <boost\detail\workaround.hpp>

/* ---------- constants */

/* ---------- definitions */

typedef std::vector<FatVertex,std::allocator<FatVertex> > FatVertices;

/* ---------- prototypes */

extern SimpleMesh *loadSimpleMesh(char const *aliaspath);

_static __int32 handleSIMP(IFF *iff, IFFChunk *chunk, void *user0, void *user1);
_static __int32 handleHVMD(IFF *iff, IFFChunk *chunk, void *user0, void *user1);

/* ---------- globals */

/* ---------- private variables */

_static
{
    extern std::_Nil _Nil_obj; // 0x10132C34
    extern std::_Ignore ignore; // 0x10132C32
    extern std::_Tuple_alloc_t _Tuple_alloc; // 0x10132C33
}

/* ---------- public code */

_extern _sub_10098150(SimpleMesh *const);
SimpleMesh::SimpleMesh() // 0x10098150
{
    mangled_assert("??0SimpleMesh@@QAE@XZ");
    todo("implement");
    _sub_10098150(this);
}

_extern void _sub_10098220(SimpleMesh *const);
SimpleMesh::~SimpleMesh() // 0x10098220
{
    mangled_assert("??1SimpleMesh@@UAE@XZ");
    todo("implement");
    _sub_10098220(this);
}

_extern SimpleMesh *_sub_10098490();
SimpleMesh *SimpleMesh::create() // 0x10098490
{
    mangled_assert("?create@SimpleMesh@@SGPAV1@XZ");
    todo("implement");
    SimpleMesh * __result = _sub_10098490();
    return __result;
}

_extern bool _sub_10098900(SimpleMesh *const, char const *);
bool SimpleMesh::loadTexture(char const *) // 0x10098900
{
    mangled_assert("?loadTexture@SimpleMesh@@QAE_NPBD@Z");
    todo("implement");
    bool __result = _sub_10098900(this, arg);
    return __result;
}

_extern Texture *_sub_10098580(SimpleMesh *const, float);
Texture *SimpleMesh::getTexture(float) // 0x10098580
{
    mangled_assert("?getTexture@SimpleMesh@@QAEPAVTexture@@M@Z");
    todo("implement");
    Texture * __result = _sub_10098580(this, arg);
    return __result;
}

_extern bool _sub_10098600(SimpleMesh *const, IFFChunk *);
bool SimpleMesh::import(IFFChunk *) // 0x10098600
{
    mangled_assert("?import@SimpleMesh@@QAE_NPAVIFFChunk@@@Z");
    todo("implement");
    bool __result = _sub_10098600(this, arg);
    return __result;
}

_extern void _sub_10098920(SimpleMesh *const);
void SimpleMesh::optimize() // 0x10098920
{
    mangled_assert("?optimize@SimpleMesh@@QAEXXZ");
    todo("implement");
    _sub_10098920(this);
}

_extern unsigned __int32 _sub_10098540(SimpleMesh const *const);
unsigned __int32 SimpleMesh::getNumFatVertices() const // 0x10098540
{
    mangled_assert("?getNumFatVertices@SimpleMesh@@QBEIXZ");
    todo("implement");
    unsigned __int32 __result = _sub_10098540(this);
    return __result;
}

_extern FatVertex const *_sub_10098520(SimpleMesh const *const);
FatVertex const *SimpleMesh::getFatVertices() const // 0x10098520
{
    mangled_assert("?getFatVertices@SimpleMesh@@QBEPBUFatVertex@@XZ");
    todo("implement");
    FatVertex const * __result = _sub_10098520(this);
    return __result;
}

_extern unsigned __int32 _sub_10098570(SimpleMesh const *const);
unsigned __int32 SimpleMesh::getNumIndices() const // 0x10098570
{
    mangled_assert("?getNumIndices@SimpleMesh@@QBEIXZ");
    todo("implement");
    unsigned __int32 __result = _sub_10098570(this);
    return __result;
}

_extern __int32 const *_sub_10098530(SimpleMesh const *const);
__int32 const *SimpleMesh::getIndices() const // 0x10098530
{
    mangled_assert("?getIndices@SimpleMesh@@QBEPBHXZ");
    todo("implement");
    __int32 const * __result = _sub_10098530(this);
    return __result;
}

_extern SimpleMesh *_sub_10098800(char const *);
SimpleMesh *loadSimpleMesh(char const *aliaspath) // 0x10098800
{
    mangled_assert("?loadSimpleMesh@@YGPAVSimpleMesh@@PBD@Z");
    todo("implement");
    SimpleMesh * __result = _sub_10098800(aliaspath);
    return __result;
}

_extern void _sub_100989B0(SimpleMesh *const, float);
void SimpleMesh::render(float) // 0x100989B0
{
    mangled_assert("?render@SimpleMesh@@QAEXM@Z");
    todo("implement");
    _sub_100989B0(this, arg);
}

/* ---------- private code */

_extern __int32 _sub_100985E0(IFF *, IFFChunk *, void *, void *);
_static __int32 handleSIMP(IFF *iff, IFFChunk *chunk, void *user0, void *user1) // 0x100985E0
{
    mangled_assert("handleSIMP");
    todo("implement");
    __int32 __result = _sub_100985E0(iff, chunk, user0, user1);
    return __result;
}

_extern __int32 _sub_100985B0(IFF *, IFFChunk *, void *, void *);
_static __int32 handleHVMD(IFF *iff, IFFChunk *chunk, void *user0, void *user1) // 0x100985B0
{
    mangled_assert("handleHVMD");
    todo("implement");
    __int32 __result = _sub_100985B0(iff, chunk, user0, user1);
    return __result;
}
#endif
