#if 0
/* ---------- headers */

#include "decomp.h"
#include <xstring>
#include <fileio\iff.h>
#include <Mathlib\matrix4.h>
#include <xmemory0>
#include <pch.h>
#include <Mathlib\matrix3.h>
#include <boost\checked_delete.hpp>
#include <new>
#include <Decal\decalrefmeshtypes.h>
#include <exception>
#include <xstddef>
#include <type_traits>
#include <Decal\DecalRefMeshRegistry.h>
#include <Collision\Primitives\sphere.h>
#include <Render\objects\fontsystem.h>
#include <Render\objects\objects.h>
#include <xutility>
#include <Render\objects\bitmapfont.h>
#include <utility>
#include <hash_map>
#include <iosfwd>
#include <vector>
#include <xhash>
#include <xmemory>
#include <fileio\fileioexports.h>
#include <gameRenderDebug.h>
#include <Render\objects\compiledtext.h>
#include <task.h>
#include <stack>
#include <Render\objects\constructor.h>
#include <list>
#include <Mathlib\vector3.h>
#include <Mathlib\vector4.h>
#include <map>
#include <xtree>
#include <boost\scoped_ptr.hpp>
#include <Collision\intersect.h>
#include <Collision\primitivesfwd.h>
#include <Mathlib\vector2.h>
#include <util\types.h>
#include <platform\osdef.h>
#include <renderer.h>
#include <Render\gl\types.h>
#include <Mathlib\matvec.h>
#include <Mathlib\mathlibdll.h>
#include <Mathlib\fastmath.h>
#include <profile\profile.h>
#include <platform\timer.h>
#include <iostream>
#include <platform\platformexports.h>
#include <Render\gl\lotypes.h>
#include <debug\db.h>
#include <Render\gl\r_types.h>
#include <util\colour.h>
#include <Render\objects\core.h>
#include <Collision\Primitives\triangle.h>
#include <Render\objects\cliprect.h>
#include <Decal\DecalRefMesh.h>
#include <Decal\AABBGrid.h>
#include <Collision\Primitives\aabb.h>
#include <Render\gl\r_defines.h>
#include <Render\gl\glext.h>

/* ---------- constants */

/* ---------- definitions */

typedef AABBGrid<unsigned short,std::allocator<unsigned short> > TriGrid;
typedef std::vector<unsigned short,std::allocator<unsigned short> > CellData;

/* ---------- prototypes */


_static float ptToPlaneDistSq(vector3 const &pt, vector3 const &v0, vector3 const &e1, vector3 const &e2);

/* ---------- globals */

extern std::vector<bool,std::allocator<bool> > AABBGrid<unsigned short,std::allocator<unsigned short> >::s_bVisited; // 0x846D98

/* ---------- private variables */

/* ---------- public code */

_extern _sub_5C22EA(DecalRefMesh::Data *const);
_inline DecalRefMesh::Data::Data() // 0x5C22EA
{
    mangled_assert("??0Data@DecalRefMesh@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_5C22EA(this);
}

_extern _sub_5C2354(DecalRefMesh *const);
DecalRefMesh::DecalRefMesh() // 0x5C2354
{
    mangled_assert("??0DecalRefMesh@@QAE@XZ");
    todo("implement");
    _sub_5C2354(this);
}

_extern void _sub_5C23B1(DecalRefMesh::Data *const);
_inline DecalRefMesh::Data::~Data() // 0x5C23B1
{
    mangled_assert("??1Data@DecalRefMesh@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_5C23B1(this);
}

_extern void _sub_5C2431(DecalRefMesh *const);
DecalRefMesh::~DecalRefMesh() // 0x5C2431
{
    mangled_assert("??1DecalRefMesh@@QAE@XZ");
    todo("implement");
    _sub_5C2431(this);
}

_extern DecalRefMesh *_sub_5C2514();
DecalRefMesh *DecalRefMesh::create() // 0x5C2514
{
    mangled_assert("?create@DecalRefMesh@@SGPAV1@XZ");
    todo("implement");
    DecalRefMesh * __result = _sub_5C2514();
    return __result;
}

_extern char const *_sub_5C2739(DecalRefMesh const *const);
char const *DecalRefMesh::getModelName() const // 0x5C2739
{
    mangled_assert("?getModelName@DecalRefMesh@@QBEPBDXZ");
    todo("implement");
    char const * __result = _sub_5C2739(this);
    return __result;
}

_extern char const *_sub_5C2744(DecalRefMesh const *const);
char const *DecalRefMesh::getName() const // 0x5C2744
{
    mangled_assert("?getName@DecalRefMesh@@QBEPBDXZ");
    todo("implement");
    char const * __result = _sub_5C2744(this);
    return __result;
}

_extern char const *_sub_5C2762(DecalRefMesh const *const);
char const *DecalRefMesh::getParentName() const // 0x5C2762
{
    mangled_assert("?getParentName@DecalRefMesh@@QBEPBDXZ");
    todo("implement");
    char const * __result = _sub_5C2762(this);
    return __result;
}

_extern long _sub_5C25E4(DecalRefMesh const *const);
long DecalRefMesh::getCRC() const // 0x5C25E4
{
    mangled_assert("?getCRC@DecalRefMesh@@QBEJXZ");
    todo("implement");
    long __result = _sub_5C25E4(this);
    return __result;
}

_extern __int32 _sub_5C2D3E(DecalRefMesh const *const, vector3 const &, float const, std::vector<unsigned short,std::allocator<unsigned short> > &);
__int32 DecalRefMesh::intersect(vector3 const &, float const, std::vector<unsigned short,std::allocator<unsigned short> > &) const // 0x5C2D3E
{
    mangled_assert("?intersect@DecalRefMesh@@QBEHABVvector3@@MAAV?$vector@GV?$allocator@G@std@@@std@@@Z");
    todo("implement");
    __int32 __result = _sub_5C2D3E(this, arg, arg, arg);
    return __result;
}

_extern std::vector<vector3,std::allocator<vector3> > const &_sub_5C2778(DecalRefMesh const *const);
std::vector<vector3,std::allocator<vector3> > const &DecalRefMesh::getVertices() const // 0x5C2778
{
    mangled_assert("?getVertices@DecalRefMesh@@QBEABV?$vector@Vvector3@@V?$allocator@Vvector3@@@std@@@std@@XZ");
    todo("implement");
    std::vector<vector3,std::allocator<vector3> > const & __result = _sub_5C2778(this);
    return __result;
}

_extern std::vector<unsigned short,std::allocator<unsigned short> > const &_sub_5C2770(DecalRefMesh const *const);
std::vector<unsigned short,std::allocator<unsigned short> > const &DecalRefMesh::getVertIndices() const // 0x5C2770
{
    mangled_assert("?getVertIndices@DecalRefMesh@@QBEABV?$vector@GV?$allocator@G@std@@@std@@XZ");
    todo("implement");
    std::vector<unsigned short,std::allocator<unsigned short> > const & __result = _sub_5C2770(this);
    return __result;
}

_extern std::vector<vector3,std::allocator<vector3> > const &_sub_5C275A(DecalRefMesh const *const);
std::vector<vector3,std::allocator<vector3> > const &DecalRefMesh::getNormals() const // 0x5C275A
{
    mangled_assert("?getNormals@DecalRefMesh@@QBEABV?$vector@Vvector3@@V?$allocator@Vvector3@@@std@@@std@@XZ");
    todo("implement");
    std::vector<vector3,std::allocator<vector3> > const & __result = _sub_5C275A(this);
    return __result;
}

_extern std::vector<unsigned short,std::allocator<unsigned short> > const &_sub_5C2752(DecalRefMesh const *const);
std::vector<unsigned short,std::allocator<unsigned short> > const &DecalRefMesh::getNormIndices() const // 0x5C2752
{
    mangled_assert("?getNormIndices@DecalRefMesh@@QBEABV?$vector@GV?$allocator@G@std@@@std@@XZ");
    todo("implement");
    std::vector<unsigned short,std::allocator<unsigned short> > const & __result = _sub_5C2752(this);
    return __result;
}

_extern __int32 _sub_5C2E97(DecalRefMesh *const, IFF *, IFFChunk *, void *, void *);
__int32 DecalRefMesh::load(IFF *, IFFChunk *, void *, void *) // 0x5C2E97
{
    mangled_assert("?load@DecalRefMesh@@QAEHPAVIFF@@PAVIFFChunk@@PAX2@Z");
    todo("implement");
    __int32 __result = _sub_5C2E97(this, arg, arg, arg, arg);
    return __result;
}

_extern __int32 _sub_5C27E4(IFF *, IFFChunk *, void *, void *);
__int32 DecalRefMesh::handleDESC(IFF *iff, IFFChunk *chunk, void *user0, void *user1) // 0x5C27E4
{
    mangled_assert("?handleDESC@DecalRefMesh@@CGHPAVIFF@@PAVIFFChunk@@PAX2@Z");
    todo("implement");
    __int32 __result = _sub_5C27E4(iff, chunk, user0, user1);
    return __result;
}

_extern __int32 _sub_5C277E(IFF *, IFFChunk *, void *, void *);
__int32 DecalRefMesh::handleBBOX(IFF *iff, IFFChunk *chunk, void *user0, void *user1) // 0x5C277E
{
    mangled_assert("?handleBBOX@DecalRefMesh@@CGHPAVIFF@@PAVIFFChunk@@PAX2@Z");
    todo("implement");
    __int32 __result = _sub_5C277E(iff, chunk, user0, user1);
    return __result;
}

_extern __int32 _sub_5C27B1(IFF *, IFFChunk *, void *, void *);
__int32 DecalRefMesh::handleBSPH(IFF *iff, IFFChunk *chunk, void *user0, void *user1) // 0x5C27B1
{
    mangled_assert("?handleBSPH@DecalRefMesh@@CGHPAVIFF@@PAVIFFChunk@@PAX2@Z");
    todo("implement");
    __int32 __result = _sub_5C27B1(iff, chunk, user0, user1);
    return __result;
}

_extern __int32 _sub_5C29C4(IFF *, IFFChunk *, void *, void *);
__int32 DecalRefMesh::handleTRIS(IFF *iff, IFFChunk *chunk, void *user0, void *user1) // 0x5C29C4
{
    mangled_assert("?handleTRIS@DecalRefMesh@@CGHPAVIFF@@PAVIFFChunk@@PAX2@Z");
    todo("implement");
    __int32 __result = _sub_5C29C4(iff, chunk, user0, user1);
    return __result;
}

_extern __int32 _sub_5C2A76(IFF *, IFFChunk *, void *, void *);
__int32 DecalRefMesh::handleVNRM(IFF *iff, IFFChunk *chunk, void *user0, void *user1) // 0x5C2A76
{
    mangled_assert("?handleVNRM@DecalRefMesh@@CGHPAVIFF@@PAVIFFChunk@@PAX2@Z");
    todo("implement");
    __int32 __result = _sub_5C2A76(iff, chunk, user0, user1);
    return __result;
}

_extern __int32 _sub_5C282F(IFF *, IFFChunk *, void *, void *);
__int32 DecalRefMesh::handleSSUB(IFF *iff, IFFChunk *chunk, void *user0, void *user1) // 0x5C282F
{
    mangled_assert("?handleSSUB@DecalRefMesh@@CGHPAVIFF@@PAVIFFChunk@@PAX2@Z");
    todo("implement");
    __int32 __result = _sub_5C282F(iff, chunk, user0, user1);
    return __result;
}

_extern void _sub_5C30EF(DecalRefMesh const *const, vector3 const &, float const, std::vector<unsigned short,std::allocator<unsigned short> > &);
void DecalRefMesh::pruneOutsideTris(vector3 const &, float const, std::vector<unsigned short,std::allocator<unsigned short> > &) const // 0x5C30EF
{
    mangled_assert("?pruneOutsideTris@DecalRefMesh@@ABEXABVvector3@@MAAV?$vector@GV?$allocator@G@std@@@std@@@Z");
    todo("implement");
    _sub_5C30EF(this, arg, arg, arg);
}

/* ---------- private code */

_extern float _sub_5C331A(vector3 const &, vector3 const &, vector3 const &, vector3 const &);
_static float ptToPlaneDistSq(vector3 const &pt, vector3 const &v0, vector3 const &e1, vector3 const &e2) // 0x5C331A
{
    mangled_assert("ptToPlaneDistSq");
    todo("implement");
    float __result = _sub_5C331A(pt, v0, e1, e2);
    return __result;
}
#endif
