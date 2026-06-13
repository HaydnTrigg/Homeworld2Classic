#if 0
/* ---------- headers */

#include "decomp.h"
#include <hash_map>
#include <xhash>
#include <boost\shared_ptr.hpp>
#include <boost\config.hpp>
#include <xstring>
#include <boost\config\user.hpp>
#include <xmemory0>
#include <Objects\pch.h>
#include <boost\config\select_compiler_config.hpp>
#include <boost\config\compiler\visualc.hpp>
#include <boost\config\select_stdlib_config.hpp>
#include <crtdefs.h>
#include <platform\osdef.h>
#include <boost\config\stdlib\dinkumware.hpp>
#include <Objects\StateBlock\stateblocktypes.h>
#include <boost\config\select_platform_config.hpp>
#include <boost\config\platform\win32.hpp>
#include <Objects\Texture.h>
#include <Objects\TextureRegistry.h>
#include <Mathlib\matvec.h>
#include <Objects\StateBlock\StateVariableInstance.h>
#include <Mathlib\vector2.h>
#include <util\dictionary.h>
#include <boost\detail\workaround.hpp>
#include <new>
#include <Objects\Geometry.h>
#include <util\utilexports.h>
#include <xstddef>
#include <type_traits>
#include <tuple>
#include <Objects\Material.h>
#include <Objects\Core.h>
#include <gl\lotypes.h>
#include <Objects\StateBlock\stateBlock.h>
#include <gl\types.h>
#include <bitset>
#include <util\colour.h>
#include <xutility>
#include <Mathlib\vector4.h>
#include <xatomic0.h>
#include <utility>
#include <Mathlib\mathlibdll.h>
#include <iosfwd>
#include <vector>
#include <Mathlib\fastmath.h>
#include <boost\config\suffix.hpp>
#include <xmemory>
#include <boost\assert.hpp>
#include <gl\r_types.h>
#include <boost\checked_delete.hpp>
#include <math.h>
#include <list>
#include <profile\profile.h>
#include <iostream>
#include <boost\throw_exception.hpp>
#include <map>
#include <xtree>
#include <boost\detail\shared_count.hpp>
#include <boost\detail\lightweight_mutex.hpp>
#include <boost\detail\lwm_win32.hpp>
#include <gl\r_defines.h>
#include <gl\glext.h>
#include <assert.h>
#include <util\types.h>
#include <Mathlib\matrix4.h>
#include <Mathlib\vector3.h>
#include <Objects\PrimSet.h>
#include <Mathlib\matrix3.h>
#include <gl\interface.h>
#include <memory>
#include <stdint.h>
#include <functional>
#include <xfunctional>
#include <Objects\VertexArray.h>
#include <Objects\VertexArrayInternal.h>
#include <Objects\Constructor.h>
#include <Objects\Stripper.h>
#include <Objects\Objects.h>
#include <Objects\RawMesh.h>
#include <Table.h>
#include <debug\db.h>
#include <Objects\Mesh.h>
#include <Objects\Renderable.h>
#include <debug\ctassert.h>
#include <string>

/* ---------- constants */

/* ---------- definitions */

typedef __int32 (*CompareFnc)(void const *, void const *);
typedef std::list<PrimSet *,std::allocator<PrimSet *> > List;
typedef FatVertex StripVert;
typedef std::vector<int,std::allocator<int> > VertIndexList;
typedef std::vector<FatVertex,std::allocator<FatVertex> > StripVertList;
typedef std::vector<StripPoly,std::allocator<StripPoly> > StripPolyList;
typedef std::vector<stripHashEntry,std::allocator<stripHashEntry> > HashEntryList;
typedef std::list<StripNode *,std::allocator<StripNode *> > StripNodeList;
typedef __int32 markType;
typedef std::vector<Material *,std::allocator<Material *> > MaterialList;

/* ---------- prototypes */

extern _inline void setMark(__int32 *markList, __int32 index, __int32 marker);
extern _inline __int32 getMark(__int32 *markList, __int32 index);

/* ---------- globals */

/* ---------- private variables */

_static
{
    extern std::_Ignore ignore; // 0x10132C35
    extern std::_Tuple_alloc_t _Tuple_alloc; // 0x10132C36
    extern std::_Nil _Nil_obj; // 0x10132C37
    extern __int32 markBase; // 0x1010DA50
    extern __int32 NextVert[3]; // 0x1010DA54
}

/* ---------- public code */

_extern Stripper *_sub_1009CFF0();
Stripper *Stripper::create() // 0x1009CFF0
{
    mangled_assert("?create@Stripper@@SGPAV1@XZ");
    todo("implement");
    Stripper * __result = _sub_1009CFF0();
    return __result;
}

_extern _sub_1009A960(StripNode *const);
_inline StripNode::StripNode() // 0x1009A960
{
    mangled_assert("??0StripNode@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_1009A960(this);
}

_extern bool _sub_1009D750(Stripper *const);
bool Stripper::release() // 0x1009D750
{
    mangled_assert("?release@Stripper@@UAE_NXZ");
    todo("implement");
    bool __result = _sub_1009D750(this);
    return __result;
}

_extern void _sub_1009D8A0(__int32 *, __int32, __int32);
_inline void setMark(__int32 *markList, __int32 index, __int32 marker) // 0x1009D8A0
{
    mangled_assert("?setMark@@YGXPAHHH@Z");
    todo("implement");
    _sub_1009D8A0(markList, index, marker);
}

_extern __int32 _sub_1009D140(__int32 *, __int32);
_inline __int32 getMark(__int32 *markList, __int32 index) // 0x1009D140
{
    mangled_assert("?getMark@@YGHPAHH@Z");
    todo("implement");
    __int32 __result = _sub_1009D140(markList, index);
    return __result;
}

_extern void _sub_1009B050(StripNode *const, __int32);
void StripNode::AddVert(__int32) // 0x1009B050
{
    mangled_assert("?AddVert@StripNode@@QAEXH@Z");
    todo("implement");
    _sub_1009B050(this, arg);
}

_extern _sub_1009A980(Stripper *const);
Stripper::Stripper() // 0x1009A980
{
    mangled_assert("??0Stripper@@QAE@XZ");
    todo("implement");
    _sub_1009A980(this);
}

_extern void _sub_1009AA70(std::_List_buy<StripNode *,std::allocator<StripNode *> > *const);
_inline std::_List_buy<StripNode *,std::allocator<StripNode *> >::~_List_buy<StripNode *,std::allocator<StripNode *> >() // 0x1009AA70
{
    mangled_assert("??1?$_List_buy@PAVStripNode@@V?$allocator@PAVStripNode@@@std@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_1009AA70(this);
}

_extern void _sub_1009AB70(StripNode *const);
_inline StripNode::~StripNode() // 0x1009AB70
{
    mangled_assert("??1StripNode@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_1009AB70(this);
}

_extern void _sub_1009ABB0(Stripper *const);
Stripper::~Stripper() // 0x1009ABB0
{
    mangled_assert("??1Stripper@@QAE@XZ");
    todo("implement");
    _sub_1009ABB0(this);
}

_extern __int32 _sub_1009BE60(Stripper *const, __int32, __int32, __int32, __int32 *);
__int32 Stripper::FindAdjoiningPoly(__int32, __int32, __int32, __int32 *) // 0x1009BE60
{
    mangled_assert("?FindAdjoiningPoly@Stripper@@QAEHHHHPAH@Z");
    todo("implement");
    __int32 __result = _sub_1009BE60(this, arg, arg, arg, arg);
    return __result;
}

_extern void _sub_1009BA90(Stripper *const, StripNode *, __int32, __int32, __int32);
void Stripper::BuildStrip(StripNode *, __int32, __int32, __int32) // 0x1009BA90
{
    mangled_assert("?BuildStrip@Stripper@@QAEXPAVStripNode@@HHH@Z");
    todo("implement");
    _sub_1009BA90(this, arg, arg, arg, arg);
}

_extern void _sub_1009BD50(Stripper *const, __int32);
void Stripper::ClearMarks(__int32) // 0x1009BD50
{
    mangled_assert("?ClearMarks@Stripper@@QAEXH@Z");
    todo("implement");
    _sub_1009BD50(this, arg);
}

_extern __int32 _sub_1009B060(Stripper *const, FatVertex &);
__int32 Stripper::AddVertex(FatVertex &) // 0x1009B060
{
    mangled_assert("?AddVertex@Stripper@@QAEHAAUFatVertex@@@Z");
    todo("implement");
    __int32 __result = _sub_1009B060(this, arg);
    return __result;
}

_extern void _sub_1009B260(Stripper *const, MeshObject const *);
void Stripper::BuildLists(MeshObject const *) // 0x1009B260
{
    mangled_assert("?BuildLists@Stripper@@QAEXPBUMeshObject@@@Z");
    todo("implement");
    _sub_1009B260(this, arg);
}

_extern void _sub_1009B680(Stripper *const, RawMesh const *);
void Stripper::BuildLists(RawMesh const *) // 0x1009B680
{
    mangled_assert("?BuildLists@Stripper@@QAEXPBVRawMesh@@@Z");
    todo("implement");
    _sub_1009B680(this, arg);
}

_extern void _sub_1009BFA0(Stripper *const, __int32);
void Stripper::GenerateStrips(__int32) // 0x1009BFA0
{
    mangled_assert("?GenerateStrips@Stripper@@QAEXH@Z");
    todo("implement");
    _sub_1009BFA0(this, arg);
}

_extern Geometry *_sub_1009D260(Stripper *const, std::vector<Material *,std::allocator<Material *> > &);
Geometry *Stripper::produceGeometry(std::vector<Material *,std::allocator<Material *> > &) // 0x1009D260
{
    mangled_assert("?produceGeometry@Stripper@@QAEPAVGeometry@@AAV?$vector@PAVMaterial@@V?$allocator@PAVMaterial@@@std@@@std@@@Z");
    todo("implement");
    Geometry * __result = _sub_1009D260(this, arg);
    return __result;
}

/* ---------- private code */
#endif
