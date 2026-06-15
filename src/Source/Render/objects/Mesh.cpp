#if 0
/* ---------- headers */

#include "decomp.h"
#include <boost\detail\shared_count.hpp>
#include <hash_map>
#include <boost\detail\lightweight_mutex.hpp>
#include <xhash>
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
#include <Objects\StateBlock\CompoundStateBlockInstance.h>
#include <Mathlib\matrix4.h>
#include <xutility>
#include <Mathlib\vector3.h>
#include <xatomic0.h>
#include <utility>
#include <iosfwd>
#include <vector>
#include <xmemory>
#include <Mathlib\matrix3.h>
#include <memory>
#include <math.h>
#include <stdint.h>
#include <Objects\Constructor.h>
#include <list>
#include <functional>
#include <xfunctional>
#include <map>
#include <xtree>
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
#include <Objects\StateBlock\stateblocktypes.h>
#include <boost\config\select_platform_config.hpp>
#include <platform\osdef.h>
#include <boost\config\platform\win32.hpp>
#include <Objects\StateBlock\StateBlockManager.h>
#include <Objects\Texture.h>
#include <Objects\TextureRegistry.h>
#include <Objects\StateBlock\StateVariableInstance.h>
#include <util\dictionary.h>
#include <boost\detail\workaround.hpp>
#include <Mathlib\matvec.h>
#include <util\utilexports.h>
#include <Mathlib\vector2.h>
#include <tuple>
#include <Objects\Mesh.h>
#include <Objects\StateBlock\stateBlock.h>
#include <Objects\Core.h>
#include <bitset>
#include <Objects\Objects.h>
#include <gl\lotypes.h>
#include <debug\db.h>
#include <gl\types.h>
#include <util\colour.h>
#include <Mathlib\vector4.h>
#include <boost\config\suffix.hpp>
#include <Mathlib\mathlibdll.h>
#include <boost\assert.hpp>
#include <Mathlib\fastmath.h>
#include <boost\checked_delete.hpp>
#include <gl\r_types.h>
#include <string>
#include <profile\profile.h>
#include <iostream>
#include <boost\throw_exception.hpp>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

extern MeshObject *new_MeshObject();
extern bool delete_MeshObject(MeshObject *o);

/* ---------- globals */

extern Mesh::LockType Mesh::m_lockMode; // 0x1010D808

/* ---------- private variables */

_static
{
    extern std::_Tuple_alloc_t _Tuple_alloc; // 0x10132B5E
    extern std::_Nil _Nil_obj; // 0x10132B5F
    extern std::_Ignore ignore; // 0x10132B5D
}

/* ---------- public code */

MeshObject *new_MeshObject() // 0x1007A0C0
{
    mangled_assert("?new_MeshObject@@YGPAUMeshObject@@XZ");
    todo("implement");
}

bool delete_MeshObject(MeshObject *o) // 0x10079DC0
{
    mangled_assert("?delete_MeshObject@@YG_NPAUMeshObject@@@Z");
    todo("implement");
}

MeshInstance::MeshInstance() // 0x10079460
{
    mangled_assert("??0MeshInstance@@QAE@XZ");
    todo("implement");
}

_inline MeshInstance::VariableCache::VariableCache() // 0x10079500
{
    mangled_assert("??0VariableCache@MeshInstance@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

MeshInstance::~MeshInstance() // 0x10079540
{
    mangled_assert("??1MeshInstance@@UAE@XZ");
    todo("implement");
}

void Mesh::setLocking(Mesh::LockType locking) // 0x1007A260
{
    mangled_assert("?setLocking@Mesh@@SGXW4LockType@1@@Z");
    todo("implement");
}

Mesh::LockType Mesh::getLocking() // 0x10079E40
{
    mangled_assert("?getLocking@Mesh@@SG?AW4LockType@1@XZ");
    todo("implement");
}

MeshInstance *MeshInstance::create() // 0x10079DB0
{
    mangled_assert("?create@MeshInstance@@SGPAV1@XZ");
    todo("implement");
}

void MeshInstance::attachMesh(Mesh const *) // 0x10079B20
{
    mangled_assert("?attachMesh@MeshInstance@@QAEXPBVMesh@@@Z");
    todo("implement");
}

void MeshInstance::render(matrix4 const &, unsigned __int32 const, float const, vector4 const &) const // 0x1007A200
{
    mangled_assert("?render@MeshInstance@@QBEXABVmatrix4@@IMABVvector4@@@Z");
    todo("implement");
}

CompoundStateBlock const *MeshInstance::getBlock(unsigned __int32 const) const // 0x10079E00
{
    mangled_assert("?getBlock@MeshInstance@@QBEPBVCompoundStateBlock@@I@Z");
    todo("implement");
}

std::bitset<32> const MeshInstance::getBlockMask(unsigned __int32 const) const // 0x10079E20
{
    mangled_assert("?getBlockMask@MeshInstance@@QBE?BV?$bitset@$0CA@@std@@I@Z");
    todo("implement");
}

bool MeshInstance::isBlockActive(unsigned __int32 const, unsigned __int32) const // 0x1007A070
{
    mangled_assert("?isBlockActive@MeshInstance@@QBE_NII@Z");
    todo("implement");
}

StateVariableInstance *MeshInstance::getVariable(unsigned __int32 const) const // 0x10079E50
{
    mangled_assert("?getVariable@MeshInstance@@QBEPAVStateVariableInstance@@I@Z");
    todo("implement");
}

bool MeshInstance::activateBlock(unsigned __int32 const, char const *, bool) // 0x100799F0
{
    mangled_assert("?activateBlock@MeshInstance@@QAE_NIPBD_N@Z");
    todo("implement");
}

bool MeshInstance::initCacheVariable(unsigned __int32, unsigned long const &) // 0x10079E70
{
    mangled_assert("?initCacheVariable@MeshInstance@@QAE_NIABK@Z");
    todo("implement");
}

void MeshInstance::updateCacheVariable(unsigned __int32, void *) // 0x1007A270
{
    mangled_assert("?updateCacheVariable@MeshInstance@@QAEXIPAX@Z");
    todo("implement");
}

/* ---------- private code */
#endif
