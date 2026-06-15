#if 0
/* ---------- headers */

#include "decomp.h"
#include <hash_map>
#include <boost\detail\shared_count.hpp>
#include <xhash>
#include <boost\detail\lightweight_mutex.hpp>
#include <boost\detail\lwm_win32.hpp>
#include <xstring>
#include <xmemory0>
#include <Objects\pch.h>
#include <crtdefs.h>
#include <gl\r_defines.h>
#include <gl\glext.h>
#include <new>
#include <xstddef>
#include <type_traits>
#include <Mathlib\matrix4.h>
#include <xutility>
#include <Mathlib\vector3.h>
#include <xatomic0.h>
#include <utility>
#include <iosfwd>
#include <vector>
#include <xmemory>
#include <Mathlib\matrix3.h>
#include <math.h>
#include <memory>
#include <stdint.h>
#include <Objects\Material.h>
#include <list>
#include <functional>
#include <xfunctional>
#include <map>
#include <xtree>
#include <Objects\Mesh.h>
#include <Objects\Renderable.h>
#include <debug\ctassert.h>
#include <assert.h>
#include <util\types.h>
#include <boost\shared_ptr.hpp>
#include <boost\config.hpp>
#include <boost\config\user.hpp>
#include <boost\config\select_compiler_config.hpp>
#include <boost\config\compiler\visualc.hpp>
#include <boost\config\select_stdlib_config.hpp>
#include <boost\config\stdlib\dinkumware.hpp>
#include <platform\osdef.h>
#include <Objects\StateBlock\stateblocktypes.h>
#include <boost\config\select_platform_config.hpp>
#include <boost\config\platform\win32.hpp>
#include <Objects\Texture.h>
#include <Objects\TextureRegistry.h>
#include <Objects\StateBlock\StateVariableInstance.h>
#include <Mathlib\matvec.h>
#include <util\dictionary.h>
#include <boost\detail\workaround.hpp>
#include <Mathlib\vector2.h>
#include <util\utilexports.h>
#include <tuple>
#include <Objects\Geometry.h>
#include <Objects\Objects.h>
#include <Objects\StateBlock\stateBlock.h>
#include <Objects\ImplicitSurface\ImplicitMesh.h>
#include <Objects\Core.h>
#include <gl\lotypes.h>
#include <bitset>
#include <debug\db.h>
#include <Objects\VertexArray.h>
#include <gl\types.h>
#include <Objects\VertexArrayInternal.h>
#include <util\colour.h>
#include <Mathlib\vector4.h>
#include <Mathlib\mathlibdll.h>
#include <boost\config\suffix.hpp>
#include <Mathlib\fastmath.h>
#include <boost\assert.hpp>
#include <boost\checked_delete.hpp>
#include <gl\r_types.h>
#include <string>
#include <profile\profile.h>
#include <iostream>
#include <boost\throw_exception.hpp>

/* ---------- constants */

/* ---------- definitions */

typedef std::vector<CompoundStateBlockInstance *,std::allocator<CompoundStateBlockInstance *> > CompoundStateBlockInstanceCont;
typedef std::vector<MeshInstance::VariableCacheIndex,std::allocator<MeshInstance::VariableCacheIndex> > VariableCacheIndexCont;
typedef std::vector<Layer *,std::allocator<Layer *> > LayerList;
typedef std::vector<RepStruct,std::allocator<RepStruct> > Rep;

/* ---------- prototypes */

/* ---------- globals */

/* ---------- private variables */

_static
{
    extern std::_Tuple_alloc_t _Tuple_alloc; // 0x101A3561
    extern std::_Nil _Nil_obj; // 0x101A3562
    extern std::_Ignore ignore; // 0x101A3560
}

/* ---------- public code */

ImplicitMesh::ImplicitMesh() // 0x100AE970
{
    mangled_assert("??0ImplicitMesh@@QAE@XZ");
    todo("implement");
}

ImplicitMesh::~ImplicitMesh() // 0x100AEA20
{
    mangled_assert("??1ImplicitMesh@@QAE@XZ");
    todo("implement");
}

void ImplicitMesh::render(rndTable *) const // 0x100AF2F0
{
    mangled_assert("?render@ImplicitMesh@@QBEXPAUrndTable@@@Z");
    todo("implement");
}

void ImplicitMesh::clear() // 0x100AEE30
{
    mangled_assert("?clear@ImplicitMesh@@QAEXXZ");
    todo("implement");
}

void ImplicitMesh::reserve(__int32) // 0x100AF360
{
    mangled_assert("?reserve@ImplicitMesh@@QAEXH@Z");
    todo("implement");
}

void ImplicitMesh::beginCreate() // 0x100AEE20
{
    mangled_assert("?beginCreate@ImplicitMesh@@QAEXXZ");
    todo("implement");
}

void ImplicitMesh::endCreate() // 0x100AEE60
{
    mangled_assert("?endCreate@ImplicitMesh@@QAEXXZ");
    todo("implement");
}

unsigned __int32 ImplicitMesh::addVertex(vector3 const &) // 0x100AED70
{
    mangled_assert("?addVertex@ImplicitMesh@@QAEIABVvector3@@@Z");
    todo("implement");
}

unsigned __int32 ImplicitMesh::addVertex(float, float, float) // 0x100AEDC0
{
    mangled_assert("?addVertex@ImplicitMesh@@QAEIMMM@Z");
    todo("implement");
}

unsigned __int32 ImplicitMesh::addNormal(vector3 const &) // 0x100AECC0
{
    mangled_assert("?addNormal@ImplicitMesh@@QAEIABVvector3@@@Z");
    todo("implement");
}

unsigned __int32 ImplicitMesh::addNormal(float, float, float) // 0x100AECF0
{
    mangled_assert("?addNormal@ImplicitMesh@@QAEIMMM@Z");
    todo("implement");
}

void ImplicitMesh::addTriangle(unsigned __int32, unsigned __int32, unsigned __int32) // 0x100AED20
{
    mangled_assert("?addTriangle@ImplicitMesh@@QAEXIII@Z");
    todo("implement");
}

void ImplicitMesh::generateNormals() // 0x100AEEB0
{
    mangled_assert("?generateNormals@ImplicitMesh@@QAEXXZ");
    todo("implement");
}

/* ---------- private code */
#endif
