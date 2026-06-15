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
#include <memory\memorylib.h>
#include <crtdefs.h>
#include <fileio\iff.h>
#include <gl\r_defines.h>
#include <gl\glext.h>
#include <new>
#include <xstddef>
#include <type_traits>
#include <Mathlib\matrix4.h>
#include <xutility>
#include <Objects\StateBlock\StateBlockMeasure.h>
#include <xatomic0.h>
#include <stack>
#include <utility>
#include <Mathlib\vector3.h>
#include <iosfwd>
#include <assist\typemagic.h>
#include <deque>
#include <vector>
#include <xmemory>
#include <Objects\StateBlock\StateBlockManager.h>
#include <Mathlib\matrix3.h>
#include <math.h>
#include <memory>
#include <stdint.h>
#include <Objects\VertexArray.h>
#include <list>
#include <Objects\VertexArrayInternal.h>
#include <functional>
#include <debug\ctmessage.h>
#include <xfunctional>
#include <Objects\VaryMesh.h>
#include <map>
#include <xtree>
#include <Objects\Renderable.h>
#include <debug\ctassert.h>
#include <assert.h>
#include <algorithm>
#include <util\types.h>
#include <Objects\Constructor.h>
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
#include <Objects\Texture.h>
#include <Objects\TextureRegistry.h>
#include <Objects\StateBlock\StateVariableInstance.h>
#include <util\dictionary.h>
#include <boost\detail\workaround.hpp>
#include <Mathlib\matvec.h>
#include <util\utilexports.h>
#include <Mathlib\vector2.h>
#include <tuple>
#include <Objects\Geometry.h>
#include <Objects\Material.h>
#include <Objects\basicmesh.h>
#include <Objects\Objects.h>
#include <Objects\StateBlock\stateBlock.h>
#include <Objects\Mesh.h>
#include <bitset>
#include <debug\db.h>
#include <Objects\Core.h>
#include <gl\lotypes.h>
#include <gl\types.h>
#include <util\colour.h>
#include <Mathlib\vector4.h>
#include <boost\config\suffix.hpp>
#include <Mathlib\mathlibdll.h>
#include <boost\assert.hpp>
#include <Mathlib\fastmath.h>
#include <boost\checked_delete.hpp>
#include <gl\r_types.h>
#include <memory\memorypool.h>
#include <Objects\memtracker.h>
#include <fileio\bytestream.h>
#include <Objects\StateBlock\CompoundStateBlockInstance.h>
#include <wchar.h>
#include <string>
#include <fileio\fileioexports.h>
#include <profile\profile.h>
#include <assist\fixedstring.h>
#include <iostream>
#include <assist\stlexstring.h>
#include <boost\throw_exception.hpp>

/* ---------- constants */

/* ---------- definitions */

class `anonymous-namespace'::PassFilter :
    public CompoundStateBlock::ExecuteVarFilter
{
public:
    PassFilter(`anonymous-namespace'::PassFilter const &); /* compiler_generated() */
    PassFilter(StateCommandBlock *);
    virtual bool TestVariable(StateVariableInstance::Var const &) const override;
    virtual bool TestCommand(StateCommand const &) const override;
private:
    StateCommandBlock *m_pass; // 0x4
public:
    `anonymous-namespace'::PassFilter &operator=(`anonymous-namespace'::PassFilter const &); /* compiler_generated() */
};
static_assert(sizeof(`anonymous-namespace'::PassFilter) == 8, "Invalid `anonymous-namespace'::PassFilter size");

typedef `anonymous-namespace'::PassFilter ?A0xa03ed5c8::PassFilter;

/* ---------- prototypes */

/* ---------- globals */

/* ---------- private variables */

_static
{
    extern std::_Tuple_alloc_t _Tuple_alloc; // 0x101121B9
    extern std::_Nil _Nil_obj; // 0x101121BA
    extern MemoryPoolObj s_pool; // 0x101121BC
    extern float const minAlpha; // 0x100E3460
    extern std::_Ignore ignore; // 0x101121B8
}

/* ---------- public code */

BasicMesh::BasicMesh() // 0x1000CCE0
{
    mangled_assert("??0BasicMesh@@QAE@XZ");
    todo("implement");
}

_inline std::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<StateBlockMeasure::Frame> > >::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<StateBlockMeasure::Frame> > >(std::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<StateBlockMeasure::Frame> > > const &) // 0x1000A560
{
    mangled_assert("??0?$_Deque_const_iterator@V?$_Deque_val@U?$_Deque_simple_types@VFrame@StateBlockMeasure@@@std@@@std@@@std@@QAE@ABV01@@Z");
    compiler_generated();
    todo("implement");
}

_inline memtracker::BasicMeshMemory::BasicMeshMemory(memtracker::BasicMeshMemory const &) // 0x1000CD70
{
    mangled_assert("??0BasicMeshMemory@memtracker@@QAE@ABV01@@Z");
    compiler_generated();
    todo("implement");
}

_inline std::_Deque_iterator<std::_Deque_val<std::_Deque_simple_types<StateBlockMeasure::Frame> > >::_Deque_iterator<std::_Deque_val<std::_Deque_simple_types<StateBlockMeasure::Frame> > >(std::_Deque_iterator<std::_Deque_val<std::_Deque_simple_types<StateBlockMeasure::Frame> > > const &) // 0x1000A610
{
    mangled_assert("??0?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@VFrame@StateBlockMeasure@@@std@@@std@@@std@@QAE@ABV01@@Z");
    compiler_generated();
    todo("implement");
}

_inline Collapse::Collapse(Collapse const &) // 0x1000CD90
{
    mangled_assert("??0Collapse@@QAE@ABV0@@Z");
    compiler_generated();
    todo("implement");
}

_inline std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,TexregElement>::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,TexregElement>(std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,TexregElement> const &) // 0x1000BD50
{
    mangled_assert("??0?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@VTexregElement@@@std@@QAE@ABU01@@Z");
    compiler_generated();
    todo("implement");
}

_inline CompoundStateBlock::CompoundStateBlock(CompoundStateBlock const &) // 0x1000CDB0
{
    mangled_assert("??0CompoundStateBlock@@QAE@ABV0@@Z");
    compiler_generated();
    todo("implement");
}

_inline boost::shared_ptr<StateCommandBlock>::shared_ptr<StateCommandBlock>(boost::shared_ptr<StateCommandBlock> const &) // 0x1000BD90
{
    mangled_assert("??0?$shared_ptr@VStateCommandBlock@@@boost@@QAE@ABV01@@Z");
    compiler_generated();
    todo("implement");
}

_inline Core::Core(Core const &) // 0x1000CE60
{
    mangled_assert("??0Core@@QAE@ABV0@@Z");
    compiler_generated();
    todo("implement");
}

_inline BasicMesh::BasicMesh(BasicMesh const &) // 0x1000CC50
{
    mangled_assert("??0BasicMesh@@QAE@ABV0@@Z");
    compiler_generated();
    todo("implement");
}

_inline CompoundStateBlock::ExecuteVarFilter::ExecuteVarFilter() // 0x1000CE70
{
    mangled_assert("??0ExecuteVarFilter@CompoundStateBlock@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline FatVertex::FatVertex() // 0x1000CE80
{
    mangled_assert("??0FatVertex@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline StateBlockMeasure::Frame::Frame(StateBlockMeasure::Frame const &) // 0x1000CE90
{
    mangled_assert("??0Frame@StateBlockMeasure@@QAE@ABV01@@Z");
    compiler_generated();
    todo("implement");
}

_inline memtracker::GameMemoryUsage::GameMemoryUsage(memtracker::GameMemoryUsage const &) // 0x1000CF30
{
    mangled_assert("??0GameMemoryUsage@memtracker@@QAE@ABV01@@Z");
    compiler_generated();
    todo("implement");
}

_inline Mesh::Mesh(Mesh const &) // 0x1000CF60
{
    mangled_assert("??0Mesh@@QAE@ABV0@@Z");
    compiler_generated();
    todo("implement");
}

_inline Mesh::Mesh() // 0x1000CF80
{
    mangled_assert("??0Mesh@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline MeshInstance::MeshInstance(MeshInstance const &) // 0x1000CFA0
{
    mangled_assert("??0MeshInstance@@QAE@ABV0@@Z");
    compiler_generated();
    todo("implement");
}

_inline memtracker::MeshMemory::MeshMemory(memtracker::MeshMemory const &) // 0x1000D030
{
    mangled_assert("??0MeshMemory@memtracker@@QAE@ABV01@@Z");
    compiler_generated();
    todo("implement");
}

BasicMesh::~BasicMesh() // 0x1000E170
{
    mangled_assert("??1BasicMesh@@UAE@XZ");
    todo("implement");
}

_inline Modifier::Modifier(Modifier const &) // 0x1000D120
{
    mangled_assert("??0Modifier@@QAE@ABV0@@Z");
    compiler_generated();
    todo("implement");
}

_inline Collapse::~Collapse() // 0x1000E240
{
    mangled_assert("??1Collapse@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline Modifier::Modifier() // 0x1000D130
{
    mangled_assert("??0Modifier@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline StateBlockMeasure::Frame::~Frame() // 0x1000E270
{
    mangled_assert("??1Frame@StateBlockMeasure@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline memtracker::MultiMeshMemory::MultiMeshMemory(memtracker::MultiMeshMemory const &) // 0x1000D150
{
    mangled_assert("??0MultiMeshMemory@memtracker@@QAE@ABV01@@Z");
    compiler_generated();
    todo("implement");
}

_inline Modifier::~Modifier() // 0x1000E380
{
    mangled_assert("??1Modifier@@UAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline StateBlockMeasure::RenderFrame::RenderFrame(StateBlockMeasure::RenderFrame const &) // 0x1000D1B0
{
    mangled_assert("??0RenderFrame@StateBlockMeasure@@QAE@ABV01@@Z");
    compiler_generated();
    todo("implement");
}

_inline Renderable::Renderable(Renderable const &) // 0x1000D1E0
{
    mangled_assert("??0Renderable@@QAE@ABV0@@Z");
    compiler_generated();
    todo("implement");
}

unsigned __int32 BasicMesh::getNumTriGroups() const // 0x100193D0
{
    mangled_assert("?getNumTriGroups@BasicMesh@@QBEIXZ");
    todo("implement");
}

_inline Renderable::Renderable() // 0x1000D1F0
{
    mangled_assert("??0Renderable@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline StateBlockMeasure::StateBlockMeasure(StateBlockMeasure const &) // 0x1000D200
{
    mangled_assert("??0StateBlockMeasure@@QAE@ABV0@@Z");
    compiler_generated();
    todo("implement");
}

_inline StateCommandBlock::StateCommandBlock(StateCommandBlock const &) // 0x1000D220
{
    mangled_assert("??0StateCommandBlock@@QAE@ABV0@@Z");
    compiler_generated();
    todo("implement");
}

_inline SubMesh::SubMesh(SubMesh const &) // 0x1000D2B0
{
    mangled_assert("??0SubMesh@@QAE@ABV0@@Z");
    compiler_generated();
    todo("implement");
}

_inline memtracker::TextureMemory::TextureMemory(memtracker::TextureMemory const &) // 0x1000D3B0
{
    mangled_assert("??0TextureMemory@memtracker@@QAE@ABV01@@Z");
    compiler_generated();
    todo("implement");
}

BasicMesh::TriGroup const &BasicMesh::getTriGroup(unsigned __int32) const // 0x100194B0
{
    mangled_assert("?getTriGroup@BasicMesh@@QBEABVTriGroup@1@I@Z");
    todo("implement");
}

_inline TextureRegistry::TextureRegistry(TextureRegistry const &) // 0x1000D400
{
    mangled_assert("??0TextureRegistry@@QAE@ABV0@@Z");
    compiler_generated();
    todo("implement");
}

BasicMesh *BasicMesh::create() // 0x10017E20
{
    mangled_assert("?create@BasicMesh@@SGPAV1@XZ");
    todo("implement");
}

void BasicMesh::createDisplayLists() // 0x10017F40
{
    mangled_assert("?createDisplayLists@BasicMesh@@UAEXXZ");
    todo("implement");
}

void BasicMesh::TriGroup::createDisplayList() // 0x10017E30
{
    mangled_assert("?createDisplayList@TriGroup@BasicMesh@@QAEXXZ");
    todo("implement");
}

void BasicMesh::TriGroup::render(CompoundStateBlock &, std::bitset<32> const &, float const, vector4 const &, StateVariableInstance const *) // 0x1001AD00
{
    mangled_assert("?render@TriGroup@BasicMesh@@QAEXAAVCompoundStateBlock@@ABV?$bitset@$0CA@@std@@MABVvector4@@PBVStateVariableInstance@@@Z");
    todo("implement");
}

void BasicMesh::TriGroup::apply() // 0x10016920
{
    mangled_assert("?apply@TriGroup@BasicMesh@@QAEXXZ");
    todo("implement");
}

void BasicMesh::TriGroup::unapply() // 0x1001BE60
{
    mangled_assert("?unapply@TriGroup@BasicMesh@@QAEXXZ");
    todo("implement");
}

void BasicMesh::TriGroup::doRenderSimple() // 0x100183C0
{
    mangled_assert("?doRenderSimple@TriGroup@BasicMesh@@QAEXXZ");
    todo("implement");
}

void BasicMesh::TriGroup::renderSimple() // 0x1001B2A0
{
    mangled_assert("?renderSimple@TriGroup@BasicMesh@@QAEXXZ");
    todo("implement");
}

BasicMesh::TriGroup::PrimitiveGroup::~PrimitiveGroup() // 0x1000E390
{
    mangled_assert("??1PrimitiveGroup@TriGroup@BasicMesh@@QAE@XZ");
    todo("implement");
}

_inline StateBlockMeasure::RenderFrame::~RenderFrame() // 0x1000E3C0
{
    mangled_assert("??1RenderFrame@StateBlockMeasure@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline StateBlockMeasure::~StateBlockMeasure() // 0x1000E3F0
{
    mangled_assert("??1StateBlockMeasure@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline memtracker::TextureMemory::~TextureMemory() // 0x1000E490
{
    mangled_assert("??1TextureMemory@memtracker@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

void *BasicMesh::TriGroup::PrimitiveGroup::operator new(unsigned __int32 n) // 0x1000E5C0
{
    mangled_assert("??2PrimitiveGroup@TriGroup@BasicMesh@@SGPAXI@Z");
    todo("implement");
}

void *BasicMesh::TriGroup::PrimitiveGroup::operator new[](unsigned __int32 n) // 0x10012470
{
    mangled_assert("??_UPrimitiveGroup@TriGroup@BasicMesh@@SGPAXI@Z");
    todo("implement");
}

void BasicMesh::TriGroup::PrimitiveGroup::operator delete(void *p) // 0x1000E5F0
{
    mangled_assert("??3PrimitiveGroup@TriGroup@BasicMesh@@SGXPAX@Z");
    todo("implement");
}

_inline boost::shared_ptr<StateCommandBlock> &boost::shared_ptr<StateCommandBlock>::operator=(boost::shared_ptr<StateCommandBlock> const &) // 0x1000E8D0
{
    mangled_assert("??4?$shared_ptr@VStateCommandBlock@@@boost@@QAEAAV01@ABV01@@Z");
    compiler_generated();
    todo("implement");
}

_inline BasicMesh &BasicMesh::operator=(BasicMesh const &) // 0x10010600
{
    mangled_assert("??4BasicMesh@@QAEAAV0@ABV0@@Z");
    compiler_generated();
    todo("implement");
}

_inline memtracker::BasicMeshMemory &memtracker::BasicMeshMemory::operator=(memtracker::BasicMeshMemory const &) // 0x10010680
{
    mangled_assert("??4BasicMeshMemory@memtracker@@QAEAAV01@ABV01@@Z");
    compiler_generated();
    todo("implement");
}

_inline Collapse &Collapse::operator=(Collapse const &) // 0x100106A0
{
    mangled_assert("??4Collapse@@QAEAAV0@ABV0@@Z");
    compiler_generated();
    todo("implement");
}

_inline CompoundStateBlock &CompoundStateBlock::operator=(CompoundStateBlock const &) // 0x100106C0
{
    mangled_assert("??4CompoundStateBlock@@QAEAAV0@ABV0@@Z");
    compiler_generated();
    todo("implement");
}

_inline CompoundStateBlockInstance &CompoundStateBlockInstance::operator=(CompoundStateBlockInstance const &) // 0x10010730
{
    mangled_assert("??4CompoundStateBlockInstance@@QAEAAV0@ABV0@@Z");
    compiler_generated();
    todo("implement");
}

void BasicMesh::TriGroup::PrimitiveGroup::operator delete[](void *p) // 0x10012490
{
    mangled_assert("??_VPrimitiveGroup@TriGroup@BasicMesh@@SGXPAX@Z");
    todo("implement");
}

_inline Constructor &Constructor::operator=(Constructor const &) // 0x10010750
{
    mangled_assert("??4Constructor@@QAEAAV0@ABV0@@Z");
    compiler_generated();
    todo("implement");
}

_inline Core &Core::operator=(Core const &) // 0x10010760
{
    mangled_assert("??4Core@@QAEAAV0@ABV0@@Z");
    compiler_generated();
    todo("implement");
}

_inline StateBlockMeasure::Frame &StateBlockMeasure::Frame::operator=(StateBlockMeasure::Frame const &) // 0x10010770
{
    mangled_assert("??4Frame@StateBlockMeasure@@QAEAAV01@ABV01@@Z");
    compiler_generated();
    todo("implement");
}

_inline memtracker::GameMemoryUsage &memtracker::GameMemoryUsage::operator=(memtracker::GameMemoryUsage const &) // 0x100107F0
{
    mangled_assert("??4GameMemoryUsage@memtracker@@QAEAAV01@ABV01@@Z");
    compiler_generated();
    todo("implement");
}

_inline Mesh &Mesh::operator=(Mesh const &) // 0x10010820
{
    mangled_assert("??4Mesh@@QAEAAV0@ABV0@@Z");
    compiler_generated();
    todo("implement");
}

_inline MeshInstance &MeshInstance::operator=(MeshInstance const &) // 0x10010830
{
    mangled_assert("??4MeshInstance@@QAEAAV0@ABV0@@Z");
    compiler_generated();
    todo("implement");
}

_inline memtracker::MeshMemory &memtracker::MeshMemory::operator=(memtracker::MeshMemory const &) // 0x100108A0
{
    mangled_assert("??4MeshMemory@memtracker@@QAEAAV01@ABV01@@Z");
    compiler_generated();
    todo("implement");
}

void BasicMesh::TriGroup::PrimitiveGroup::allocIndices(unsigned __int32) // 0x10015AD0
{
    mangled_assert("?allocIndices@PrimitiveGroup@TriGroup@BasicMesh@@QAEXI@Z");
    todo("implement");
}

_inline MeshObject &MeshObject::operator=(MeshObject const &) // 0x100108F0
{
    mangled_assert("??4MeshObject@@QAEAAU0@ABU0@@Z");
    compiler_generated();
    todo("implement");
}

_inline Modifier &Modifier::operator=(Modifier const &) // 0x10010910
{
    mangled_assert("??4Modifier@@QAEAAV0@ABV0@@Z");
    compiler_generated();
    todo("implement");
}

_inline memtracker::MultiMeshMemory &memtracker::MultiMeshMemory::operator=(memtracker::MultiMeshMemory const &) // 0x10010920
{
    mangled_assert("??4MultiMeshMemory@memtracker@@QAEAAV01@ABV01@@Z");
    compiler_generated();
    todo("implement");
}

_inline StateBlockMeasure::RenderFrame &StateBlockMeasure::RenderFrame::operator=(StateBlockMeasure::RenderFrame const &) // 0x10010940
{
    mangled_assert("??4RenderFrame@StateBlockMeasure@@QAEAAV01@ABV01@@Z");
    compiler_generated();
    todo("implement");
}

_inline Renderable &Renderable::operator=(Renderable const &) // 0x10010980
{
    mangled_assert("??4Renderable@@QAEAAV0@ABV0@@Z");
    compiler_generated();
    todo("implement");
}

_inline StateBlockManager &StateBlockManager::operator=(StateBlockManager const &) // 0x10010990
{
    mangled_assert("??4StateBlockManager@@QAEAAV0@ABV0@@Z");
    compiler_generated();
    todo("implement");
}

_inline StateBlockMeasure &StateBlockMeasure::operator=(StateBlockMeasure const &) // 0x100109A0
{
    mangled_assert("??4StateBlockMeasure@@QAEAAV0@ABV0@@Z");
    compiler_generated();
    todo("implement");
}

_inline StateCommandBlock &StateCommandBlock::operator=(StateCommandBlock const &) // 0x100109C0
{
    mangled_assert("??4StateCommandBlock@@QAEAAV0@ABV0@@Z");
    compiler_generated();
    todo("implement");
}

_inline StateVariableInstance &StateVariableInstance::operator=(StateVariableInstance const &) // 0x10010A10
{
    mangled_assert("??4StateVariableInstance@@QAEAAV0@ABV0@@Z");
    compiler_generated();
    todo("implement");
}

_inline SubMesh &SubMesh::operator=(SubMesh const &) // 0x10010A30
{
    mangled_assert("??4SubMesh@@QAEAAV0@ABV0@@Z");
    compiler_generated();
    todo("implement");
}

_inline memtracker::TextureMemory &memtracker::TextureMemory::operator=(memtracker::TextureMemory const &) // 0x10010A70
{
    mangled_assert("??4TextureMemory@memtracker@@QAEAAV01@ABV01@@Z");
    compiler_generated();
    todo("implement");
}

_inline TextureRegistry &TextureRegistry::operator=(TextureRegistry const &) // 0x10010AB0
{
    mangled_assert("??4TextureRegistry@@QAEAAV0@ABV0@@Z");
    compiler_generated();
    todo("implement");
}

void BasicMesh::TriGroup::PrimitiveGroup::freeIndices() // 0x100190C0
{
    mangled_assert("?freeIndices@PrimitiveGroup@TriGroup@BasicMesh@@QAEXXZ");
    todo("implement");
}

_inline memtracker::TrigroupMemory &memtracker::TrigroupMemory::operator=(memtracker::TrigroupMemory const &) // 0x10010AF0
{
    mangled_assert("??4TrigroupMemory@memtracker@@QAEAAV01@ABV01@@Z");
    compiler_generated();
    todo("implement");
}

_inline MeshInstance::VariableCache &MeshInstance::VariableCache::operator=(MeshInstance::VariableCache const &) // 0x10010B30
{
    mangled_assert("??4VariableCache@MeshInstance@@QAEAAU01@ABU01@@Z");
    compiler_generated();
    todo("implement");
}

_inline VaryMesh &VaryMesh::operator=(VaryMesh const &) // 0x10010B50
{
    mangled_assert("??4VaryMesh@@QAEAAV0@ABV0@@Z");
    compiler_generated();
    todo("implement");
}

void BasicMesh::render(MeshInstance const *, Mesh::LockType, unsigned __int32 const, float const, vector4 const &) // 0x1001AC10
{
    mangled_assert("?render@BasicMesh@@UAEXPBVMeshInstance@@W4LockType@Mesh@@IMABVvector4@@@Z");
    todo("implement");
}

void BasicMesh::renderSimple() // 0x1001B220
{
    mangled_assert("?renderSimple@BasicMesh@@QAEXXZ");
    todo("implement");
}

void BasicMesh::render(CompoundStateBlockInstance const *, float const, vector4 const &) // 0x1001AB50
{
    mangled_assert("?render@BasicMesh@@QAEXPBVCompoundStateBlockInstance@@MABVvector4@@@Z");
    todo("implement");
}

void BasicMesh::computeBoundingSphere() // 0x10017500
{
    mangled_assert("?computeBoundingSphere@BasicMesh@@AAEXXZ");
    todo("implement");
}

void BasicMesh::getBoundingSphere(float *, vector3 *) const // 0x10019160
{
    mangled_assert("?getBoundingSphere@BasicMesh@@UBEXPAMPAVvector3@@@Z");
    todo("implement");
}

void BasicMesh::TriGroup::createVertexArray(unsigned __int32) // 0x10017F80
{
    mangled_assert("?createVertexArray@TriGroup@BasicMesh@@QAEXI@Z");
    todo("implement");
}

void BasicMesh::optimize() // 0x1001A870
{
    mangled_assert("?optimize@BasicMesh@@UAEXXZ");
    todo("implement");
}

void BasicMesh::setNumGroups(unsigned __int32 const) // 0x1001BAB0
{
    mangled_assert("?setNumGroups@BasicMesh@@QAEXI@Z");
    todo("implement");
}

void BasicMesh::setMaterial(unsigned __int32 const, unsigned __int32 const) // 0x1001BA40
{
    mangled_assert("?setMaterial@BasicMesh@@QAEXII@Z");
    todo("implement");
}

void BasicMesh::setVertexCompMask(unsigned __int32) // 0x1001BB50
{
    mangled_assert("?setVertexCompMask@BasicMesh@@QAEXI@Z");
    todo("implement");
}

bool BasicMesh::load_vers1202(IFFChunk *) // 0x10019D40
{
    mangled_assert("?load_vers1202@BasicMesh@@QAE_NPAVIFFChunk@@@Z");
    todo("implement");
}

__int32 BasicMesh::load(IFF *, IFFChunk *, void *, void *) // 0x10019C50
{
    mangled_assert("?load@BasicMesh@@QAEHPAVIFF@@PAVIFFChunk@@PAX2@Z");
    todo("implement");
}

__int32 BasicMesh::load1400(IFF *, IFFChunk *, void *, void *) // 0x10019740
{
    mangled_assert("?load1400@BasicMesh@@AAEHPAVIFF@@PAVIFFChunk@@PAX2@Z");
    todo("implement");
}

FatVertex *BasicMesh::allocateFatVerts(unsigned __int32 const, unsigned __int32 const) // 0x100168C0
{
    mangled_assert("?allocateFatVerts@BasicMesh@@QAEPAUFatVertex@@II@Z");
    todo("implement");
}

BasicMesh::TriGroup::TriGroup() // 0x1000D4A0
{
    mangled_assert("??0TriGroup@BasicMesh@@QAE@XZ");
    todo("implement");
}

_inline memtracker::TrigroupMemory::TrigroupMemory(memtracker::TrigroupMemory const &) // 0x1000D4E0
{
    mangled_assert("??0TrigroupMemory@memtracker@@QAE@ABV01@@Z");
    compiler_generated();
    todo("implement");
}

_inline MeshInstance::VariableCache::VariableCache(MeshInstance::VariableCache const &) // 0x1000D550
{
    mangled_assert("??0VariableCache@MeshInstance@@QAE@ABU01@@Z");
    compiler_generated();
    todo("implement");
}

_inline VaryMesh::VaryMesh(VaryMesh const &) // 0x1000D570
{
    mangled_assert("??0VaryMesh@@QAE@ABV0@@Z");
    compiler_generated();
    todo("implement");
}

_inline boost::bad_weak_ptr::bad_weak_ptr(boost::bad_weak_ptr const &) // 0x1000D7E0
{
    mangled_assert("??0bad_weak_ptr@boost@@QAE@ABV01@@Z");
    compiler_generated();
    todo("implement");
}

BasicMesh::TriGroup::~TriGroup() // 0x1000E4C0
{
    mangled_assert("??1TriGroup@BasicMesh@@QAE@XZ");
    todo("implement");
}

_inline boost::bad_weak_ptr::bad_weak_ptr() // 0x1000D800
{
    mangled_assert("??0bad_weak_ptr@boost@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline MeshInstance::VariableCache::~VariableCache() // 0x1000E530
{
    mangled_assert("??1VariableCache@MeshInstance@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline std::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<StateBlockMeasure::Frame> > >::~_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<StateBlockMeasure::Frame> > >() // 0x1000D990
{
    mangled_assert("??1?$_Deque_const_iterator@V?$_Deque_val@U?$_Deque_simple_types@VFrame@StateBlockMeasure@@@std@@@std@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline boost::bad_weak_ptr::~bad_weak_ptr() // 0x1000E580
{
    mangled_assert("??1bad_weak_ptr@boost@@UAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline std::_Deque_iterator<std::_Deque_val<std::_Deque_simple_types<StateBlockMeasure::Frame> > >::~_Deque_iterator<std::_Deque_val<std::_Deque_simple_types<StateBlockMeasure::Frame> > >() // 0x1000D9A0
{
    mangled_assert("??1?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@VFrame@StateBlockMeasure@@@std@@@std@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline std::_Deque_val<std::_Deque_simple_types<StateBlockMeasure::Frame> >::~_Deque_val<std::_Deque_simple_types<StateBlockMeasure::Frame> >() // 0x1000D9B0
{
    mangled_assert("??1?$_Deque_val@U?$_Deque_simple_types@VFrame@StateBlockMeasure@@@std@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline std::_List_buy<std::pair<int const ,VaryMesh::CommandStruct>,std::allocator<std::pair<int const ,VaryMesh::CommandStruct> > >::~_List_buy<std::pair<int const ,VaryMesh::CommandStruct>,std::allocator<std::pair<int const ,VaryMesh::CommandStruct> > >() // 0x1000DAA0
{
    mangled_assert("??1?$_List_buy@U?$pair@$$CBHUCommandStruct@VaryMesh@@@std@@V?$allocator@U?$pair@$$CBHUCommandStruct@VaryMesh@@@std@@@2@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline std::_List_buy<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,TexregElement>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,TexregElement> > >::~_List_buy<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,TexregElement>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,TexregElement> > >() // 0x1000DAB0
{
    mangled_assert("??1?$_List_buy@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@VTexregElement@@@std@@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@VTexregElement@@@std@@@2@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline std::_Tree_buy<std::pair<long const ,unsigned int>,std::allocator<std::pair<long const ,unsigned int> > >::~_Tree_buy<std::pair<long const ,unsigned int>,std::allocator<std::pair<long const ,unsigned int> > >() // 0x1000DAF0
{
    mangled_assert("??1?$_Tree_buy@U?$pair@$$CBJI@std@@V?$allocator@U?$pair@$$CBJI@std@@@2@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline std::_Tree_comp<0,std::_Tmap_traits<long,unsigned int,std::less<long>,std::allocator<std::pair<long const ,unsigned int> >,0> >::~_Tree_comp<0,std::_Tmap_traits<long,unsigned int,std::less<long>,std::allocator<std::pair<long const ,unsigned int> >,0> >() // 0x1000DB00
{
    mangled_assert("??1?$_Tree_comp@$0A@V?$_Tmap_traits@JIU?$less@J@std@@V?$allocator@U?$pair@$$CBJI@std@@@2@$0A@@std@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline stdext::hash_map<int,VaryMesh::CommandStruct,stdext::hash_compare<int,std::less<int> >,std::allocator<std::pair<int const ,VaryMesh::CommandStruct> > >::~hash_map<int,VaryMesh::CommandStruct,stdext::hash_compare<int,std::less<int> >,std::allocator<std::pair<int const ,VaryMesh::CommandStruct> > >() // 0x1000DB70
{
    mangled_assert("??1?$hash_map@HUCommandStruct@VaryMesh@@V?$hash_compare@HU?$less@H@std@@@stdext@@V?$allocator@U?$pair@$$CBHUCommandStruct@VaryMesh@@@std@@@std@@@stdext@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline stdext::hash_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,TexregElement,stdext::hash_compare<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,TexregElement> > >::~hash_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,TexregElement,stdext::hash_compare<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,TexregElement> > >() // 0x1000DB80
{
    mangled_assert("??1?$hash_map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@VTexregElement@@V?$hash_compare@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@stdext@@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@VTexregElement@@@std@@@2@@stdext@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline std::map<long,unsigned int,std::less<long>,std::allocator<std::pair<long const ,unsigned int> > >::~map<long,unsigned int,std::less<long>,std::allocator<std::pair<long const ,unsigned int> > >() // 0x1000DC30
{
    mangled_assert("??1?$map@JIU?$less@J@std@@V?$allocator@U?$pair@$$CBJI@std@@@2@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,TexregElement>::~pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,TexregElement>() // 0x1000DC50
{
    mangled_assert("??1?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@VTexregElement@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline boost::shared_ptr<StateCommandBlock>::~shared_ptr<StateCommandBlock>() // 0x1000DC80
{
    mangled_assert("??1?$shared_ptr@VStateCommandBlock@@@boost@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline std::stack<StateBlockMeasure::Frame,std::deque<StateBlockMeasure::Frame,std::allocator<StateBlockMeasure::Frame> > >::~stack<StateBlockMeasure::Frame,std::deque<StateBlockMeasure::Frame,std::allocator<StateBlockMeasure::Frame> > >() // 0x1000DC90
{
    mangled_assert("??1?$stack@VFrame@StateBlockMeasure@@V?$deque@VFrame@StateBlockMeasure@@V?$allocator@VFrame@StateBlockMeasure@@@std@@@std@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

std::vector<CompoundStateBlockInstance *,std::allocator<CompoundStateBlockInstance *> > const &BasicMesh::getShaderList(StateBlock_Type) const // 0x10019450
{
    mangled_assert("?getShaderList@BasicMesh@@UBEABV?$vector@PAVCompoundStateBlockInstance@@V?$allocator@PAVCompoundStateBlockInstance@@@std@@@std@@W4StateBlock_Type@@@Z");
    todo("implement");
}

/* ---------- private code */
#endif
