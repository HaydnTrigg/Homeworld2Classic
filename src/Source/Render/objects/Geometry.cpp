#if 0
/* ---------- headers */

#include "decomp.h"
#include <hash_map>
#include <xhash>
#include <xstring>
#include <xmemory0>
#include <Objects\pch.h>
#include <crtdefs.h>
#include <platform\osdef.h>
#include <Mathlib\matvec.h>
#include <Mathlib\vector2.h>
#include <new>
#include <Objects\Material.h>
#include <memory>
#include <xstddef>
#include <stdint.h>
#include <type_traits>
#include <Objects\PrimSet.h>
#include <Objects\Core.h>
#include <gl\lotypes.h>
#include <functional>
#include <gl\types.h>
#include <xfunctional>
#include <util\colour.h>
#include <xutility>
#include <Mathlib\vector4.h>
#include <xatomic0.h>
#include <utility>
#include <Mathlib\mathlibdll.h>
#include <iosfwd>
#include <vector>
#include <Mathlib\fastmath.h>
#include <xmemory>
#include <gl\r_types.h>
#include <math.h>
#include <Objects\Geometry.h>
#include <Objects\Mesh.h>
#include <Objects\Renderable.h>
#include <list>
#include <debug\ctassert.h>
#include <map>
#include <xtree>
#include <boost\shared_ptr.hpp>
#include <gl\r_defines.h>
#include <boost\config.hpp>
#include <gl\glext.h>
#include <boost\config\user.hpp>
#include <boost\config\select_compiler_config.hpp>
#include <boost\config\compiler\visualc.hpp>
#include <boost\config\select_stdlib_config.hpp>
#include <boost\config\stdlib\dinkumware.hpp>
#include <Objects\StateBlock\stateblocktypes.h>
#include <boost\config\select_platform_config.hpp>
#include <boost\config\platform\win32.hpp>
#include <assert.h>
#include <Objects\Texture.h>
#include <algorithm>
#include <Objects\TextureRegistry.h>
#include <util\types.h>
#include <Objects\StateBlock\StateVariableInstance.h>
#include <util\dictionary.h>
#include <boost\detail\workaround.hpp>
#include <util\utilexports.h>
#include <Mathlib\matrix4.h>
#include <Mathlib\vector3.h>
#include <tuple>
#include <Objects\StateBlock\stateBlock.h>
#include <bitset>
#include <Mathlib\matrix3.h>
#include <boost\config\suffix.hpp>
#include <boost\assert.hpp>
#include <boost\checked_delete.hpp>
#include <Objects\Constructor.h>
#include <Objects\Objects.h>
#include <debug\db.h>
#include <profile\profile.h>
#include <iostream>
#include <boost\throw_exception.hpp>
#include <boost\detail\shared_count.hpp>
#include <boost\detail\lightweight_mutex.hpp>
#include <boost\detail\lwm_win32.hpp>
#include <string>
#include <Objects\VertexArray.h>
#include <Objects\VertexArrayInternal.h>
#include <Objects\Layer.h>

/* ---------- constants */

/* ---------- definitions */

struct less_texture0<RepStruct> :
    public std::binary_function<RepStruct,RepStruct,bool>
{
    bool operator()(RepStruct const &, RepStruct const &) const;
};
static_assert(sizeof(less_texture0<RepStruct>) == 1, "Invalid less_texture0<RepStruct> size");

struct less_material<RepStruct> :
    public std::binary_function<RepStruct,RepStruct,bool>
{
    bool operator()(RepStruct const &, RepStruct const &) const;
};
static_assert(sizeof(less_material<RepStruct>) == 1, "Invalid less_material<RepStruct> size");

typedef std::_Vector_iterator<std::_Vector_val<std::_Simple_types<RepStruct> > > RepI;
typedef RepStruct *_Pty;

/* ---------- prototypes */

/* ---------- globals */

extern bool Geometry::m_suspend; // 0x10132A8C
extern std::vector<Modifier *,std::allocator<Modifier *> > Geometry_mods; // 0x10132A90

/* ---------- private variables */

_static
{
    extern std::_Nil _Nil_obj; // 0x10132A8F
    extern __int32 nVertices; // 0x10132A9C
    extern __int32 nPolygons; // 0x10132AA0
    extern std::_Ignore ignore; // 0x10132A8D
    extern std::_Tuple_alloc_t _Tuple_alloc; // 0x10132A8E
}

/* ---------- public code */

Geometry::Geometry() // 0x10054F40
{
    mangled_assert("??0Geometry@@QAE@XZ");
    todo("implement");
}

Geometry::~Geometry() // 0x10054FF0
{
    mangled_assert("??1Geometry@@UAE@XZ");
    todo("implement");
}

Geometry *Geometry::create() // 0x100558B0
{
    mangled_assert("?create@Geometry@@SGPAV1@XZ");
    todo("implement");
}

PrimSetList *Geometry::getPrimSetList(Material *) // 0x10055970
{
    mangled_assert("?getPrimSetList@Geometry@@QAEPAVPrimSetList@@PAVMaterial@@@Z");
    todo("implement");
}

void Geometry::setPrimSetList(Material *, PrimSetList *) // 0x10055D30
{
    mangled_assert("?setPrimSetList@Geometry@@QAEXPAVMaterial@@PAVPrimSetList@@@Z");
    todo("implement");
}

std::_Vector_iterator<std::_Vector_val<std::_Simple_types<RepStruct> > > Geometry::find(Material *) // 0x10055930
{
    mangled_assert("?find@Geometry@@AAE?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@URepStruct@@@std@@@std@@@std@@PAVMaterial@@@Z");
    todo("implement");
}

void Geometry::addPrimSet(Material *, PrimSet *) // 0x100556C0
{
    mangled_assert("?addPrimSet@Geometry@@QAEXPAVMaterial@@PAVPrimSet@@@Z");
    todo("implement");
}

void Geometry::clear() // 0x100557E0
{
    mangled_assert("?clear@Geometry@@QAEXXZ");
    todo("implement");
}

void Geometry::setDirty() // 0x10055D00
{
    mangled_assert("?setDirty@Geometry@@QAEXXZ");
    todo("implement");
}

void Geometry::renderLockOnce() // 0x10055C00
{
    mangled_assert("?renderLockOnce@Geometry@@AAEXXZ");
    todo("implement");
}

void Geometry::renderDisplayList(Mesh::LockType) // 0x10055B40
{
    mangled_assert("?renderDisplayList@Geometry@@AAEXW4LockType@Mesh@@@Z");
    todo("implement");
}

_inline bool less_texture0<RepStruct>::operator()(RepStruct const &, RepStruct const &) const // 0x10055280
{
    mangled_assert("??R?$less_texture0@URepStruct@@@@QBE_NABURepStruct@@0@Z");
    todo("implement");
}

_inline bool less_material<RepStruct>::operator()(RepStruct const &, RepStruct const &) const // 0x10055260
{
    mangled_assert("??R?$less_material@URepStruct@@@@QBE_NABURepStruct@@0@Z");
    todo("implement");
}

void Geometry::sort() // 0x10055E20
{
    mangled_assert("?sort@Geometry@@QAEXXZ");
    todo("implement");
}

void Geometry::render(Mesh::LockType) // 0x10055B00
{
    mangled_assert("?render@Geometry@@QAEXW4LockType@Mesh@@@Z");
    todo("implement");
}

bool Geometry::addModifier(Modifier *mod) // 0x100556B0
{
    mangled_assert("?addModifier@Geometry@@SG_NPAVModifier@@@Z");
    todo("implement");
}

bool Geometry::remModifier(Modifier *mod) // 0x10055AF0
{
    mangled_assert("?remModifier@Geometry@@SG_NPAVModifier@@@Z");
    todo("implement");
}

bool Geometry::clearModifiers() // 0x10055870
{
    mangled_assert("?clearModifiers@Geometry@@SG_NXZ");
    todo("implement");
}

bool Geometry::processModifiers(VertexArray *va, unsigned __int32 *mask, bool begin) // 0x10055A20
{
    mangled_assert("?processModifiers@Geometry@@SG_NPAVVertexArray@@PAI_N@Z");
    todo("implement");
}

bool Geometry::suspendModifiers(bool state) // 0x10055E60
{
    mangled_assert("?suspendModifiers@Geometry@@SG_N_N@Z");
    todo("implement");
}

__int32 Geometry::getNumModifiers() // 0x10055960
{
    mangled_assert("?getNumModifiers@Geometry@@SGHXZ");
    todo("implement");
}

void Geometry::setStats(__int32 _nVertices, __int32 _nPolygons) // 0x10055DE0
{
    mangled_assert("?setStats@Geometry@@SGXHH@Z");
    todo("implement");
}

void Geometry::getStats(__int32 *_nVertices, __int32 *_nPolygons) // 0x100559A0
{
    mangled_assert("?getStats@Geometry@@SGXPAH0@Z");
    todo("implement");
}

/* ---------- private code */
#endif
