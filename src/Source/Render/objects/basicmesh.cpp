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

_extern _sub_1000CCE0(BasicMesh *const);
BasicMesh::BasicMesh() // 0x1000CCE0
{
    mangled_assert("??0BasicMesh@@QAE@XZ");
    todo("implement");
    _sub_1000CCE0(this);
}

_extern _sub_1000A560(std::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<StateBlockMeasure::Frame> > > *const, std::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<StateBlockMeasure::Frame> > > const &);
_inline std::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<StateBlockMeasure::Frame> > >::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<StateBlockMeasure::Frame> > >(std::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<StateBlockMeasure::Frame> > > const &) // 0x1000A560
{
    mangled_assert("??0?$_Deque_const_iterator@V?$_Deque_val@U?$_Deque_simple_types@VFrame@StateBlockMeasure@@@std@@@std@@@std@@QAE@ABV01@@Z");
    compiler_generated();
    todo("implement");
    _sub_1000A560(this, arg);
}

_extern _sub_1000CD70(memtracker::BasicMeshMemory *const, memtracker::BasicMeshMemory const &);
_inline memtracker::BasicMeshMemory::BasicMeshMemory(memtracker::BasicMeshMemory const &) // 0x1000CD70
{
    mangled_assert("??0BasicMeshMemory@memtracker@@QAE@ABV01@@Z");
    compiler_generated();
    todo("implement");
    _sub_1000CD70(this, arg);
}

_extern _sub_1000A610(std::_Deque_iterator<std::_Deque_val<std::_Deque_simple_types<StateBlockMeasure::Frame> > > *const, std::_Deque_iterator<std::_Deque_val<std::_Deque_simple_types<StateBlockMeasure::Frame> > > const &);
_inline std::_Deque_iterator<std::_Deque_val<std::_Deque_simple_types<StateBlockMeasure::Frame> > >::_Deque_iterator<std::_Deque_val<std::_Deque_simple_types<StateBlockMeasure::Frame> > >(std::_Deque_iterator<std::_Deque_val<std::_Deque_simple_types<StateBlockMeasure::Frame> > > const &) // 0x1000A610
{
    mangled_assert("??0?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@VFrame@StateBlockMeasure@@@std@@@std@@@std@@QAE@ABV01@@Z");
    compiler_generated();
    todo("implement");
    _sub_1000A610(this, arg);
}

_extern _sub_1000CD90(Collapse *const, Collapse const &);
_inline Collapse::Collapse(Collapse const &) // 0x1000CD90
{
    mangled_assert("??0Collapse@@QAE@ABV0@@Z");
    compiler_generated();
    todo("implement");
    _sub_1000CD90(this, arg);
}

_extern _sub_1000BD50(std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,TexregElement> *const, std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,TexregElement> const &);
_inline std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,TexregElement>::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,TexregElement>(std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,TexregElement> const &) // 0x1000BD50
{
    mangled_assert("??0?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@VTexregElement@@@std@@QAE@ABU01@@Z");
    compiler_generated();
    todo("implement");
    _sub_1000BD50(this, arg);
}

_extern _sub_1000CDB0(CompoundStateBlock *const, CompoundStateBlock const &);
_inline CompoundStateBlock::CompoundStateBlock(CompoundStateBlock const &) // 0x1000CDB0
{
    mangled_assert("??0CompoundStateBlock@@QAE@ABV0@@Z");
    compiler_generated();
    todo("implement");
    _sub_1000CDB0(this, arg);
}

_extern _sub_1000BD90(boost::shared_ptr<StateCommandBlock> *const, boost::shared_ptr<StateCommandBlock> const &);
_inline boost::shared_ptr<StateCommandBlock>::shared_ptr<StateCommandBlock>(boost::shared_ptr<StateCommandBlock> const &) // 0x1000BD90
{
    mangled_assert("??0?$shared_ptr@VStateCommandBlock@@@boost@@QAE@ABV01@@Z");
    compiler_generated();
    todo("implement");
    _sub_1000BD90(this, arg);
}

_extern _sub_1000CE60(Core *const, Core const &);
_inline Core::Core(Core const &) // 0x1000CE60
{
    mangled_assert("??0Core@@QAE@ABV0@@Z");
    compiler_generated();
    todo("implement");
    _sub_1000CE60(this, arg);
}

_extern _sub_1000CC50(BasicMesh *const, BasicMesh const &);
_inline BasicMesh::BasicMesh(BasicMesh const &) // 0x1000CC50
{
    mangled_assert("??0BasicMesh@@QAE@ABV0@@Z");
    compiler_generated();
    todo("implement");
    _sub_1000CC50(this, arg);
}

_extern _sub_1000CE70(CompoundStateBlock::ExecuteVarFilter *const);
_inline CompoundStateBlock::ExecuteVarFilter::ExecuteVarFilter() // 0x1000CE70
{
    mangled_assert("??0ExecuteVarFilter@CompoundStateBlock@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_1000CE70(this);
}

_extern _sub_1000CE80(FatVertex *const);
_inline FatVertex::FatVertex() // 0x1000CE80
{
    mangled_assert("??0FatVertex@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_1000CE80(this);
}

_extern _sub_1000CE90(StateBlockMeasure::Frame *const, StateBlockMeasure::Frame const &);
_inline StateBlockMeasure::Frame::Frame(StateBlockMeasure::Frame const &) // 0x1000CE90
{
    mangled_assert("??0Frame@StateBlockMeasure@@QAE@ABV01@@Z");
    compiler_generated();
    todo("implement");
    _sub_1000CE90(this, arg);
}

_extern _sub_1000CF30(memtracker::GameMemoryUsage *const, memtracker::GameMemoryUsage const &);
_inline memtracker::GameMemoryUsage::GameMemoryUsage(memtracker::GameMemoryUsage const &) // 0x1000CF30
{
    mangled_assert("??0GameMemoryUsage@memtracker@@QAE@ABV01@@Z");
    compiler_generated();
    todo("implement");
    _sub_1000CF30(this, arg);
}

_extern _sub_1000CF60(Mesh *const, Mesh const &);
_inline Mesh::Mesh(Mesh const &) // 0x1000CF60
{
    mangled_assert("??0Mesh@@QAE@ABV0@@Z");
    compiler_generated();
    todo("implement");
    _sub_1000CF60(this, arg);
}

_extern _sub_1000CF80(Mesh *const);
_inline Mesh::Mesh() // 0x1000CF80
{
    mangled_assert("??0Mesh@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_1000CF80(this);
}

_extern _sub_1000CFA0(MeshInstance *const, MeshInstance const &);
_inline MeshInstance::MeshInstance(MeshInstance const &) // 0x1000CFA0
{
    mangled_assert("??0MeshInstance@@QAE@ABV0@@Z");
    compiler_generated();
    todo("implement");
    _sub_1000CFA0(this, arg);
}

_extern _sub_1000D030(memtracker::MeshMemory *const, memtracker::MeshMemory const &);
_inline memtracker::MeshMemory::MeshMemory(memtracker::MeshMemory const &) // 0x1000D030
{
    mangled_assert("??0MeshMemory@memtracker@@QAE@ABV01@@Z");
    compiler_generated();
    todo("implement");
    _sub_1000D030(this, arg);
}

_extern void _sub_1000E170(BasicMesh *const);
BasicMesh::~BasicMesh() // 0x1000E170
{
    mangled_assert("??1BasicMesh@@UAE@XZ");
    todo("implement");
    _sub_1000E170(this);
}

_extern _sub_1000D120(Modifier *const, Modifier const &);
_inline Modifier::Modifier(Modifier const &) // 0x1000D120
{
    mangled_assert("??0Modifier@@QAE@ABV0@@Z");
    compiler_generated();
    todo("implement");
    _sub_1000D120(this, arg);
}

_extern void _sub_1000E240(Collapse *const);
_inline Collapse::~Collapse() // 0x1000E240
{
    mangled_assert("??1Collapse@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_1000E240(this);
}

_extern _sub_1000D130(Modifier *const);
_inline Modifier::Modifier() // 0x1000D130
{
    mangled_assert("??0Modifier@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_1000D130(this);
}

_extern void _sub_1000E270(StateBlockMeasure::Frame *const);
_inline StateBlockMeasure::Frame::~Frame() // 0x1000E270
{
    mangled_assert("??1Frame@StateBlockMeasure@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_1000E270(this);
}

_extern _sub_1000D150(memtracker::MultiMeshMemory *const, memtracker::MultiMeshMemory const &);
_inline memtracker::MultiMeshMemory::MultiMeshMemory(memtracker::MultiMeshMemory const &) // 0x1000D150
{
    mangled_assert("??0MultiMeshMemory@memtracker@@QAE@ABV01@@Z");
    compiler_generated();
    todo("implement");
    _sub_1000D150(this, arg);
}

_extern void _sub_1000E380(Modifier *const);
_inline Modifier::~Modifier() // 0x1000E380
{
    mangled_assert("??1Modifier@@UAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_1000E380(this);
}

_extern _sub_1000D1B0(StateBlockMeasure::RenderFrame *const, StateBlockMeasure::RenderFrame const &);
_inline StateBlockMeasure::RenderFrame::RenderFrame(StateBlockMeasure::RenderFrame const &) // 0x1000D1B0
{
    mangled_assert("??0RenderFrame@StateBlockMeasure@@QAE@ABV01@@Z");
    compiler_generated();
    todo("implement");
    _sub_1000D1B0(this, arg);
}

_extern _sub_1000D1E0(Renderable *const, Renderable const &);
_inline Renderable::Renderable(Renderable const &) // 0x1000D1E0
{
    mangled_assert("??0Renderable@@QAE@ABV0@@Z");
    compiler_generated();
    todo("implement");
    _sub_1000D1E0(this, arg);
}

_extern unsigned __int32 _sub_100193D0(BasicMesh const *const);
unsigned __int32 BasicMesh::getNumTriGroups() const // 0x100193D0
{
    mangled_assert("?getNumTriGroups@BasicMesh@@QBEIXZ");
    todo("implement");
    unsigned __int32 __result = _sub_100193D0(this);
    return __result;
}

_extern _sub_1000D1F0(Renderable *const);
_inline Renderable::Renderable() // 0x1000D1F0
{
    mangled_assert("??0Renderable@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_1000D1F0(this);
}

_extern _sub_1000D200(StateBlockMeasure *const, StateBlockMeasure const &);
_inline StateBlockMeasure::StateBlockMeasure(StateBlockMeasure const &) // 0x1000D200
{
    mangled_assert("??0StateBlockMeasure@@QAE@ABV0@@Z");
    compiler_generated();
    todo("implement");
    _sub_1000D200(this, arg);
}

_extern _sub_1000D220(StateCommandBlock *const, StateCommandBlock const &);
_inline StateCommandBlock::StateCommandBlock(StateCommandBlock const &) // 0x1000D220
{
    mangled_assert("??0StateCommandBlock@@QAE@ABV0@@Z");
    compiler_generated();
    todo("implement");
    _sub_1000D220(this, arg);
}

_extern _sub_1000D2B0(SubMesh *const, SubMesh const &);
_inline SubMesh::SubMesh(SubMesh const &) // 0x1000D2B0
{
    mangled_assert("??0SubMesh@@QAE@ABV0@@Z");
    compiler_generated();
    todo("implement");
    _sub_1000D2B0(this, arg);
}

_extern _sub_1000D3B0(memtracker::TextureMemory *const, memtracker::TextureMemory const &);
_inline memtracker::TextureMemory::TextureMemory(memtracker::TextureMemory const &) // 0x1000D3B0
{
    mangled_assert("??0TextureMemory@memtracker@@QAE@ABV01@@Z");
    compiler_generated();
    todo("implement");
    _sub_1000D3B0(this, arg);
}

_extern BasicMesh::TriGroup const &_sub_100194B0(BasicMesh const *const, unsigned __int32);
BasicMesh::TriGroup const &BasicMesh::getTriGroup(unsigned __int32) const // 0x100194B0
{
    mangled_assert("?getTriGroup@BasicMesh@@QBEABVTriGroup@1@I@Z");
    todo("implement");
    BasicMesh::TriGroup const & __result = _sub_100194B0(this, arg);
    return __result;
}

_extern _sub_1000D400(TextureRegistry *const, TextureRegistry const &);
_inline TextureRegistry::TextureRegistry(TextureRegistry const &) // 0x1000D400
{
    mangled_assert("??0TextureRegistry@@QAE@ABV0@@Z");
    compiler_generated();
    todo("implement");
    _sub_1000D400(this, arg);
}

_extern BasicMesh *_sub_10017E20();
BasicMesh *BasicMesh::create() // 0x10017E20
{
    mangled_assert("?create@BasicMesh@@SGPAV1@XZ");
    todo("implement");
    BasicMesh * __result = _sub_10017E20();
    return __result;
}

_extern void _sub_10017F40(BasicMesh *const);
void BasicMesh::createDisplayLists() // 0x10017F40
{
    mangled_assert("?createDisplayLists@BasicMesh@@UAEXXZ");
    todo("implement");
    _sub_10017F40(this);
}

_extern void _sub_10017E30(BasicMesh::TriGroup *const);
void BasicMesh::TriGroup::createDisplayList() // 0x10017E30
{
    mangled_assert("?createDisplayList@TriGroup@BasicMesh@@QAEXXZ");
    todo("implement");
    _sub_10017E30(this);
}

_extern void _sub_1001AD00(BasicMesh::TriGroup *const, CompoundStateBlock &, std::bitset<32> const &, float const, vector4 const &, StateVariableInstance const *);
void BasicMesh::TriGroup::render(CompoundStateBlock &, std::bitset<32> const &, float const, vector4 const &, StateVariableInstance const *) // 0x1001AD00
{
    mangled_assert("?render@TriGroup@BasicMesh@@QAEXAAVCompoundStateBlock@@ABV?$bitset@$0CA@@std@@MABVvector4@@PBVStateVariableInstance@@@Z");
    todo("implement");
    _sub_1001AD00(this, arg, arg, arg, arg, arg);
}

_extern void _sub_10016920(BasicMesh::TriGroup *const);
void BasicMesh::TriGroup::apply() // 0x10016920
{
    mangled_assert("?apply@TriGroup@BasicMesh@@QAEXXZ");
    todo("implement");
    _sub_10016920(this);
}

_extern void _sub_1001BE60(BasicMesh::TriGroup *const);
void BasicMesh::TriGroup::unapply() // 0x1001BE60
{
    mangled_assert("?unapply@TriGroup@BasicMesh@@QAEXXZ");
    todo("implement");
    _sub_1001BE60(this);
}

_extern void _sub_100183C0(BasicMesh::TriGroup *const);
void BasicMesh::TriGroup::doRenderSimple() // 0x100183C0
{
    mangled_assert("?doRenderSimple@TriGroup@BasicMesh@@QAEXXZ");
    todo("implement");
    _sub_100183C0(this);
}

_extern void _sub_1001B2A0(BasicMesh::TriGroup *const);
void BasicMesh::TriGroup::renderSimple() // 0x1001B2A0
{
    mangled_assert("?renderSimple@TriGroup@BasicMesh@@QAEXXZ");
    todo("implement");
    _sub_1001B2A0(this);
}

_extern void _sub_1000E390(BasicMesh::TriGroup::PrimitiveGroup *const);
BasicMesh::TriGroup::PrimitiveGroup::~PrimitiveGroup() // 0x1000E390
{
    mangled_assert("??1PrimitiveGroup@TriGroup@BasicMesh@@QAE@XZ");
    todo("implement");
    _sub_1000E390(this);
}

_extern void _sub_1000E3C0(StateBlockMeasure::RenderFrame *const);
_inline StateBlockMeasure::RenderFrame::~RenderFrame() // 0x1000E3C0
{
    mangled_assert("??1RenderFrame@StateBlockMeasure@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_1000E3C0(this);
}

_extern void _sub_1000E3F0(StateBlockMeasure *const);
_inline StateBlockMeasure::~StateBlockMeasure() // 0x1000E3F0
{
    mangled_assert("??1StateBlockMeasure@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_1000E3F0(this);
}

_extern void _sub_1000E490(memtracker::TextureMemory *const);
_inline memtracker::TextureMemory::~TextureMemory() // 0x1000E490
{
    mangled_assert("??1TextureMemory@memtracker@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_1000E490(this);
}

_extern void *_sub_1000E5C0(unsigned __int32);
void *BasicMesh::TriGroup::PrimitiveGroup::operator new(unsigned __int32 n) // 0x1000E5C0
{
    mangled_assert("??2PrimitiveGroup@TriGroup@BasicMesh@@SGPAXI@Z");
    todo("implement");
    void * __result = _sub_1000E5C0(n);
    return __result;
}

_extern void *_sub_10012470(unsigned __int32);
void *BasicMesh::TriGroup::PrimitiveGroup::operator new[](unsigned __int32 n) // 0x10012470
{
    mangled_assert("??_UPrimitiveGroup@TriGroup@BasicMesh@@SGPAXI@Z");
    todo("implement");
    void * __result = _sub_10012470(n);
    return __result;
}

_extern void _sub_1000E5F0(void *);
void BasicMesh::TriGroup::PrimitiveGroup::operator delete(void *p) // 0x1000E5F0
{
    mangled_assert("??3PrimitiveGroup@TriGroup@BasicMesh@@SGXPAX@Z");
    todo("implement");
    _sub_1000E5F0(p);
}

_extern boost::shared_ptr<StateCommandBlock> &_sub_1000E8D0(boost::shared_ptr<StateCommandBlock> *const, boost::shared_ptr<StateCommandBlock> const &);
_inline boost::shared_ptr<StateCommandBlock> &boost::shared_ptr<StateCommandBlock>::operator=(boost::shared_ptr<StateCommandBlock> const &) // 0x1000E8D0
{
    mangled_assert("??4?$shared_ptr@VStateCommandBlock@@@boost@@QAEAAV01@ABV01@@Z");
    compiler_generated();
    todo("implement");
    boost::shared_ptr<StateCommandBlock> & __result = _sub_1000E8D0(this, arg);
    return __result;
}

_extern BasicMesh &_sub_10010600(BasicMesh *const, BasicMesh const &);
_inline BasicMesh &BasicMesh::operator=(BasicMesh const &) // 0x10010600
{
    mangled_assert("??4BasicMesh@@QAEAAV0@ABV0@@Z");
    compiler_generated();
    todo("implement");
    BasicMesh & __result = _sub_10010600(this, arg);
    return __result;
}

_extern memtracker::BasicMeshMemory &_sub_10010680(memtracker::BasicMeshMemory *const, memtracker::BasicMeshMemory const &);
_inline memtracker::BasicMeshMemory &memtracker::BasicMeshMemory::operator=(memtracker::BasicMeshMemory const &) // 0x10010680
{
    mangled_assert("??4BasicMeshMemory@memtracker@@QAEAAV01@ABV01@@Z");
    compiler_generated();
    todo("implement");
    memtracker::BasicMeshMemory & __result = _sub_10010680(this, arg);
    return __result;
}

_extern Collapse &_sub_100106A0(Collapse *const, Collapse const &);
_inline Collapse &Collapse::operator=(Collapse const &) // 0x100106A0
{
    mangled_assert("??4Collapse@@QAEAAV0@ABV0@@Z");
    compiler_generated();
    todo("implement");
    Collapse & __result = _sub_100106A0(this, arg);
    return __result;
}

_extern CompoundStateBlock &_sub_100106C0(CompoundStateBlock *const, CompoundStateBlock const &);
_inline CompoundStateBlock &CompoundStateBlock::operator=(CompoundStateBlock const &) // 0x100106C0
{
    mangled_assert("??4CompoundStateBlock@@QAEAAV0@ABV0@@Z");
    compiler_generated();
    todo("implement");
    CompoundStateBlock & __result = _sub_100106C0(this, arg);
    return __result;
}

_extern CompoundStateBlockInstance &_sub_10010730(CompoundStateBlockInstance *const, CompoundStateBlockInstance const &);
_inline CompoundStateBlockInstance &CompoundStateBlockInstance::operator=(CompoundStateBlockInstance const &) // 0x10010730
{
    mangled_assert("??4CompoundStateBlockInstance@@QAEAAV0@ABV0@@Z");
    compiler_generated();
    todo("implement");
    CompoundStateBlockInstance & __result = _sub_10010730(this, arg);
    return __result;
}

_extern void _sub_10012490(void *);
void BasicMesh::TriGroup::PrimitiveGroup::operator delete[](void *p) // 0x10012490
{
    mangled_assert("??_VPrimitiveGroup@TriGroup@BasicMesh@@SGXPAX@Z");
    todo("implement");
    _sub_10012490(p);
}

_extern Constructor &_sub_10010750(Constructor *const, Constructor const &);
_inline Constructor &Constructor::operator=(Constructor const &) // 0x10010750
{
    mangled_assert("??4Constructor@@QAEAAV0@ABV0@@Z");
    compiler_generated();
    todo("implement");
    Constructor & __result = _sub_10010750(this, arg);
    return __result;
}

_extern Core &_sub_10010760(Core *const, Core const &);
_inline Core &Core::operator=(Core const &) // 0x10010760
{
    mangled_assert("??4Core@@QAEAAV0@ABV0@@Z");
    compiler_generated();
    todo("implement");
    Core & __result = _sub_10010760(this, arg);
    return __result;
}

_extern StateBlockMeasure::Frame &_sub_10010770(StateBlockMeasure::Frame *const, StateBlockMeasure::Frame const &);
_inline StateBlockMeasure::Frame &StateBlockMeasure::Frame::operator=(StateBlockMeasure::Frame const &) // 0x10010770
{
    mangled_assert("??4Frame@StateBlockMeasure@@QAEAAV01@ABV01@@Z");
    compiler_generated();
    todo("implement");
    StateBlockMeasure::Frame & __result = _sub_10010770(this, arg);
    return __result;
}

_extern memtracker::GameMemoryUsage &_sub_100107F0(memtracker::GameMemoryUsage *const, memtracker::GameMemoryUsage const &);
_inline memtracker::GameMemoryUsage &memtracker::GameMemoryUsage::operator=(memtracker::GameMemoryUsage const &) // 0x100107F0
{
    mangled_assert("??4GameMemoryUsage@memtracker@@QAEAAV01@ABV01@@Z");
    compiler_generated();
    todo("implement");
    memtracker::GameMemoryUsage & __result = _sub_100107F0(this, arg);
    return __result;
}

_extern Mesh &_sub_10010820(Mesh *const, Mesh const &);
_inline Mesh &Mesh::operator=(Mesh const &) // 0x10010820
{
    mangled_assert("??4Mesh@@QAEAAV0@ABV0@@Z");
    compiler_generated();
    todo("implement");
    Mesh & __result = _sub_10010820(this, arg);
    return __result;
}

_extern MeshInstance &_sub_10010830(MeshInstance *const, MeshInstance const &);
_inline MeshInstance &MeshInstance::operator=(MeshInstance const &) // 0x10010830
{
    mangled_assert("??4MeshInstance@@QAEAAV0@ABV0@@Z");
    compiler_generated();
    todo("implement");
    MeshInstance & __result = _sub_10010830(this, arg);
    return __result;
}

_extern memtracker::MeshMemory &_sub_100108A0(memtracker::MeshMemory *const, memtracker::MeshMemory const &);
_inline memtracker::MeshMemory &memtracker::MeshMemory::operator=(memtracker::MeshMemory const &) // 0x100108A0
{
    mangled_assert("??4MeshMemory@memtracker@@QAEAAV01@ABV01@@Z");
    compiler_generated();
    todo("implement");
    memtracker::MeshMemory & __result = _sub_100108A0(this, arg);
    return __result;
}

_extern void _sub_10015AD0(BasicMesh::TriGroup::PrimitiveGroup *const, unsigned __int32);
void BasicMesh::TriGroup::PrimitiveGroup::allocIndices(unsigned __int32) // 0x10015AD0
{
    mangled_assert("?allocIndices@PrimitiveGroup@TriGroup@BasicMesh@@QAEXI@Z");
    todo("implement");
    _sub_10015AD0(this, arg);
}

_extern MeshObject &_sub_100108F0(MeshObject *const, MeshObject const &);
_inline MeshObject &MeshObject::operator=(MeshObject const &) // 0x100108F0
{
    mangled_assert("??4MeshObject@@QAEAAU0@ABU0@@Z");
    compiler_generated();
    todo("implement");
    MeshObject & __result = _sub_100108F0(this, arg);
    return __result;
}

_extern Modifier &_sub_10010910(Modifier *const, Modifier const &);
_inline Modifier &Modifier::operator=(Modifier const &) // 0x10010910
{
    mangled_assert("??4Modifier@@QAEAAV0@ABV0@@Z");
    compiler_generated();
    todo("implement");
    Modifier & __result = _sub_10010910(this, arg);
    return __result;
}

_extern memtracker::MultiMeshMemory &_sub_10010920(memtracker::MultiMeshMemory *const, memtracker::MultiMeshMemory const &);
_inline memtracker::MultiMeshMemory &memtracker::MultiMeshMemory::operator=(memtracker::MultiMeshMemory const &) // 0x10010920
{
    mangled_assert("??4MultiMeshMemory@memtracker@@QAEAAV01@ABV01@@Z");
    compiler_generated();
    todo("implement");
    memtracker::MultiMeshMemory & __result = _sub_10010920(this, arg);
    return __result;
}

_extern StateBlockMeasure::RenderFrame &_sub_10010940(StateBlockMeasure::RenderFrame *const, StateBlockMeasure::RenderFrame const &);
_inline StateBlockMeasure::RenderFrame &StateBlockMeasure::RenderFrame::operator=(StateBlockMeasure::RenderFrame const &) // 0x10010940
{
    mangled_assert("??4RenderFrame@StateBlockMeasure@@QAEAAV01@ABV01@@Z");
    compiler_generated();
    todo("implement");
    StateBlockMeasure::RenderFrame & __result = _sub_10010940(this, arg);
    return __result;
}

_extern Renderable &_sub_10010980(Renderable *const, Renderable const &);
_inline Renderable &Renderable::operator=(Renderable const &) // 0x10010980
{
    mangled_assert("??4Renderable@@QAEAAV0@ABV0@@Z");
    compiler_generated();
    todo("implement");
    Renderable & __result = _sub_10010980(this, arg);
    return __result;
}

_extern StateBlockManager &_sub_10010990(StateBlockManager *const, StateBlockManager const &);
_inline StateBlockManager &StateBlockManager::operator=(StateBlockManager const &) // 0x10010990
{
    mangled_assert("??4StateBlockManager@@QAEAAV0@ABV0@@Z");
    compiler_generated();
    todo("implement");
    StateBlockManager & __result = _sub_10010990(this, arg);
    return __result;
}

_extern StateBlockMeasure &_sub_100109A0(StateBlockMeasure *const, StateBlockMeasure const &);
_inline StateBlockMeasure &StateBlockMeasure::operator=(StateBlockMeasure const &) // 0x100109A0
{
    mangled_assert("??4StateBlockMeasure@@QAEAAV0@ABV0@@Z");
    compiler_generated();
    todo("implement");
    StateBlockMeasure & __result = _sub_100109A0(this, arg);
    return __result;
}

_extern StateCommandBlock &_sub_100109C0(StateCommandBlock *const, StateCommandBlock const &);
_inline StateCommandBlock &StateCommandBlock::operator=(StateCommandBlock const &) // 0x100109C0
{
    mangled_assert("??4StateCommandBlock@@QAEAAV0@ABV0@@Z");
    compiler_generated();
    todo("implement");
    StateCommandBlock & __result = _sub_100109C0(this, arg);
    return __result;
}

_extern StateVariableInstance &_sub_10010A10(StateVariableInstance *const, StateVariableInstance const &);
_inline StateVariableInstance &StateVariableInstance::operator=(StateVariableInstance const &) // 0x10010A10
{
    mangled_assert("??4StateVariableInstance@@QAEAAV0@ABV0@@Z");
    compiler_generated();
    todo("implement");
    StateVariableInstance & __result = _sub_10010A10(this, arg);
    return __result;
}

_extern SubMesh &_sub_10010A30(SubMesh *const, SubMesh const &);
_inline SubMesh &SubMesh::operator=(SubMesh const &) // 0x10010A30
{
    mangled_assert("??4SubMesh@@QAEAAV0@ABV0@@Z");
    compiler_generated();
    todo("implement");
    SubMesh & __result = _sub_10010A30(this, arg);
    return __result;
}

_extern memtracker::TextureMemory &_sub_10010A70(memtracker::TextureMemory *const, memtracker::TextureMemory const &);
_inline memtracker::TextureMemory &memtracker::TextureMemory::operator=(memtracker::TextureMemory const &) // 0x10010A70
{
    mangled_assert("??4TextureMemory@memtracker@@QAEAAV01@ABV01@@Z");
    compiler_generated();
    todo("implement");
    memtracker::TextureMemory & __result = _sub_10010A70(this, arg);
    return __result;
}

_extern TextureRegistry &_sub_10010AB0(TextureRegistry *const, TextureRegistry const &);
_inline TextureRegistry &TextureRegistry::operator=(TextureRegistry const &) // 0x10010AB0
{
    mangled_assert("??4TextureRegistry@@QAEAAV0@ABV0@@Z");
    compiler_generated();
    todo("implement");
    TextureRegistry & __result = _sub_10010AB0(this, arg);
    return __result;
}

_extern void _sub_100190C0(BasicMesh::TriGroup::PrimitiveGroup *const);
void BasicMesh::TriGroup::PrimitiveGroup::freeIndices() // 0x100190C0
{
    mangled_assert("?freeIndices@PrimitiveGroup@TriGroup@BasicMesh@@QAEXXZ");
    todo("implement");
    _sub_100190C0(this);
}

_extern memtracker::TrigroupMemory &_sub_10010AF0(memtracker::TrigroupMemory *const, memtracker::TrigroupMemory const &);
_inline memtracker::TrigroupMemory &memtracker::TrigroupMemory::operator=(memtracker::TrigroupMemory const &) // 0x10010AF0
{
    mangled_assert("??4TrigroupMemory@memtracker@@QAEAAV01@ABV01@@Z");
    compiler_generated();
    todo("implement");
    memtracker::TrigroupMemory & __result = _sub_10010AF0(this, arg);
    return __result;
}

_extern MeshInstance::VariableCache &_sub_10010B30(MeshInstance::VariableCache *const, MeshInstance::VariableCache const &);
_inline MeshInstance::VariableCache &MeshInstance::VariableCache::operator=(MeshInstance::VariableCache const &) // 0x10010B30
{
    mangled_assert("??4VariableCache@MeshInstance@@QAEAAU01@ABU01@@Z");
    compiler_generated();
    todo("implement");
    MeshInstance::VariableCache & __result = _sub_10010B30(this, arg);
    return __result;
}

_extern VaryMesh &_sub_10010B50(VaryMesh *const, VaryMesh const &);
_inline VaryMesh &VaryMesh::operator=(VaryMesh const &) // 0x10010B50
{
    mangled_assert("??4VaryMesh@@QAEAAV0@ABV0@@Z");
    compiler_generated();
    todo("implement");
    VaryMesh & __result = _sub_10010B50(this, arg);
    return __result;
}

_extern void _sub_1001AC10(BasicMesh *const, MeshInstance const *, Mesh::LockType, unsigned __int32 const, float const, vector4 const &);
void BasicMesh::render(MeshInstance const *, Mesh::LockType, unsigned __int32 const, float const, vector4 const &) // 0x1001AC10
{
    mangled_assert("?render@BasicMesh@@UAEXPBVMeshInstance@@W4LockType@Mesh@@IMABVvector4@@@Z");
    todo("implement");
    _sub_1001AC10(this, arg, arg, arg, arg, arg);
}

_extern void _sub_1001B220(BasicMesh *const);
void BasicMesh::renderSimple() // 0x1001B220
{
    mangled_assert("?renderSimple@BasicMesh@@QAEXXZ");
    todo("implement");
    _sub_1001B220(this);
}

_extern void _sub_1001AB50(BasicMesh *const, CompoundStateBlockInstance const *, float const, vector4 const &);
void BasicMesh::render(CompoundStateBlockInstance const *, float const, vector4 const &) // 0x1001AB50
{
    mangled_assert("?render@BasicMesh@@QAEXPBVCompoundStateBlockInstance@@MABVvector4@@@Z");
    todo("implement");
    _sub_1001AB50(this, arg, arg, arg);
}

_extern void _sub_10017500(BasicMesh *const);
void BasicMesh::computeBoundingSphere() // 0x10017500
{
    mangled_assert("?computeBoundingSphere@BasicMesh@@AAEXXZ");
    todo("implement");
    _sub_10017500(this);
}

_extern void _sub_10019160(BasicMesh const *const, float *, vector3 *);
void BasicMesh::getBoundingSphere(float *, vector3 *) const // 0x10019160
{
    mangled_assert("?getBoundingSphere@BasicMesh@@UBEXPAMPAVvector3@@@Z");
    todo("implement");
    _sub_10019160(this, arg, arg);
}

_extern void _sub_10017F80(BasicMesh::TriGroup *const, unsigned __int32);
void BasicMesh::TriGroup::createVertexArray(unsigned __int32) // 0x10017F80
{
    mangled_assert("?createVertexArray@TriGroup@BasicMesh@@QAEXI@Z");
    todo("implement");
    _sub_10017F80(this, arg);
}

_extern void _sub_1001A870(BasicMesh *const);
void BasicMesh::optimize() // 0x1001A870
{
    mangled_assert("?optimize@BasicMesh@@UAEXXZ");
    todo("implement");
    _sub_1001A870(this);
}

_extern void _sub_1001BAB0(BasicMesh *const, unsigned __int32 const);
void BasicMesh::setNumGroups(unsigned __int32 const) // 0x1001BAB0
{
    mangled_assert("?setNumGroups@BasicMesh@@QAEXI@Z");
    todo("implement");
    _sub_1001BAB0(this, arg);
}

_extern void _sub_1001BA40(BasicMesh *const, unsigned __int32 const, unsigned __int32 const);
void BasicMesh::setMaterial(unsigned __int32 const, unsigned __int32 const) // 0x1001BA40
{
    mangled_assert("?setMaterial@BasicMesh@@QAEXII@Z");
    todo("implement");
    _sub_1001BA40(this, arg, arg);
}

_extern void _sub_1001BB50(BasicMesh *const, unsigned __int32);
void BasicMesh::setVertexCompMask(unsigned __int32) // 0x1001BB50
{
    mangled_assert("?setVertexCompMask@BasicMesh@@QAEXI@Z");
    todo("implement");
    _sub_1001BB50(this, arg);
}

_extern bool _sub_10019D40(BasicMesh *const, IFFChunk *);
bool BasicMesh::load_vers1202(IFFChunk *) // 0x10019D40
{
    mangled_assert("?load_vers1202@BasicMesh@@QAE_NPAVIFFChunk@@@Z");
    todo("implement");
    bool __result = _sub_10019D40(this, arg);
    return __result;
}

_extern __int32 _sub_10019C50(BasicMesh *const, IFF *, IFFChunk *, void *, void *);
__int32 BasicMesh::load(IFF *, IFFChunk *, void *, void *) // 0x10019C50
{
    mangled_assert("?load@BasicMesh@@QAEHPAVIFF@@PAVIFFChunk@@PAX2@Z");
    todo("implement");
    __int32 __result = _sub_10019C50(this, arg, arg, arg, arg);
    return __result;
}

_extern __int32 _sub_10019740(BasicMesh *const, IFF *, IFFChunk *, void *, void *);
__int32 BasicMesh::load1400(IFF *, IFFChunk *, void *, void *) // 0x10019740
{
    mangled_assert("?load1400@BasicMesh@@AAEHPAVIFF@@PAVIFFChunk@@PAX2@Z");
    todo("implement");
    __int32 __result = _sub_10019740(this, arg, arg, arg, arg);
    return __result;
}

_extern FatVertex *_sub_100168C0(BasicMesh *const, unsigned __int32 const, unsigned __int32 const);
FatVertex *BasicMesh::allocateFatVerts(unsigned __int32 const, unsigned __int32 const) // 0x100168C0
{
    mangled_assert("?allocateFatVerts@BasicMesh@@QAEPAUFatVertex@@II@Z");
    todo("implement");
    FatVertex * __result = _sub_100168C0(this, arg, arg);
    return __result;
}

_extern _sub_1000D4A0(BasicMesh::TriGroup *const);
BasicMesh::TriGroup::TriGroup() // 0x1000D4A0
{
    mangled_assert("??0TriGroup@BasicMesh@@QAE@XZ");
    todo("implement");
    _sub_1000D4A0(this);
}

_extern _sub_1000D4E0(memtracker::TrigroupMemory *const, memtracker::TrigroupMemory const &);
_inline memtracker::TrigroupMemory::TrigroupMemory(memtracker::TrigroupMemory const &) // 0x1000D4E0
{
    mangled_assert("??0TrigroupMemory@memtracker@@QAE@ABV01@@Z");
    compiler_generated();
    todo("implement");
    _sub_1000D4E0(this, arg);
}

_extern _sub_1000D550(MeshInstance::VariableCache *const, MeshInstance::VariableCache const &);
_inline MeshInstance::VariableCache::VariableCache(MeshInstance::VariableCache const &) // 0x1000D550
{
    mangled_assert("??0VariableCache@MeshInstance@@QAE@ABU01@@Z");
    compiler_generated();
    todo("implement");
    _sub_1000D550(this, arg);
}

_extern _sub_1000D570(VaryMesh *const, VaryMesh const &);
_inline VaryMesh::VaryMesh(VaryMesh const &) // 0x1000D570
{
    mangled_assert("??0VaryMesh@@QAE@ABV0@@Z");
    compiler_generated();
    todo("implement");
    _sub_1000D570(this, arg);
}

_extern _sub_1000D7E0(boost::bad_weak_ptr *const, boost::bad_weak_ptr const &);
_inline boost::bad_weak_ptr::bad_weak_ptr(boost::bad_weak_ptr const &) // 0x1000D7E0
{
    mangled_assert("??0bad_weak_ptr@boost@@QAE@ABV01@@Z");
    compiler_generated();
    todo("implement");
    _sub_1000D7E0(this, arg);
}

_extern void _sub_1000E4C0(BasicMesh::TriGroup *const);
BasicMesh::TriGroup::~TriGroup() // 0x1000E4C0
{
    mangled_assert("??1TriGroup@BasicMesh@@QAE@XZ");
    todo("implement");
    _sub_1000E4C0(this);
}

_extern _sub_1000D800(boost::bad_weak_ptr *const);
_inline boost::bad_weak_ptr::bad_weak_ptr() // 0x1000D800
{
    mangled_assert("??0bad_weak_ptr@boost@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_1000D800(this);
}

_extern void _sub_1000E530(MeshInstance::VariableCache *const);
_inline MeshInstance::VariableCache::~VariableCache() // 0x1000E530
{
    mangled_assert("??1VariableCache@MeshInstance@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_1000E530(this);
}

_extern void _sub_1000D990(std::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<StateBlockMeasure::Frame> > > *const);
_inline std::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<StateBlockMeasure::Frame> > >::~_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<StateBlockMeasure::Frame> > >() // 0x1000D990
{
    mangled_assert("??1?$_Deque_const_iterator@V?$_Deque_val@U?$_Deque_simple_types@VFrame@StateBlockMeasure@@@std@@@std@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_1000D990(this);
}

_extern void _sub_1000E580(boost::bad_weak_ptr *const);
_inline boost::bad_weak_ptr::~bad_weak_ptr() // 0x1000E580
{
    mangled_assert("??1bad_weak_ptr@boost@@UAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_1000E580(this);
}

_extern void _sub_1000D9A0(std::_Deque_iterator<std::_Deque_val<std::_Deque_simple_types<StateBlockMeasure::Frame> > > *const);
_inline std::_Deque_iterator<std::_Deque_val<std::_Deque_simple_types<StateBlockMeasure::Frame> > >::~_Deque_iterator<std::_Deque_val<std::_Deque_simple_types<StateBlockMeasure::Frame> > >() // 0x1000D9A0
{
    mangled_assert("??1?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@VFrame@StateBlockMeasure@@@std@@@std@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_1000D9A0(this);
}

_extern void _sub_1000D9B0(std::_Deque_val<std::_Deque_simple_types<StateBlockMeasure::Frame> > *const);
_inline std::_Deque_val<std::_Deque_simple_types<StateBlockMeasure::Frame> >::~_Deque_val<std::_Deque_simple_types<StateBlockMeasure::Frame> >() // 0x1000D9B0
{
    mangled_assert("??1?$_Deque_val@U?$_Deque_simple_types@VFrame@StateBlockMeasure@@@std@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_1000D9B0(this);
}

_extern void _sub_1000DAA0(std::_List_buy<std::pair<int const ,VaryMesh::CommandStruct>,std::allocator<std::pair<int const ,VaryMesh::CommandStruct> > > *const);
_inline std::_List_buy<std::pair<int const ,VaryMesh::CommandStruct>,std::allocator<std::pair<int const ,VaryMesh::CommandStruct> > >::~_List_buy<std::pair<int const ,VaryMesh::CommandStruct>,std::allocator<std::pair<int const ,VaryMesh::CommandStruct> > >() // 0x1000DAA0
{
    mangled_assert("??1?$_List_buy@U?$pair@$$CBHUCommandStruct@VaryMesh@@@std@@V?$allocator@U?$pair@$$CBHUCommandStruct@VaryMesh@@@std@@@2@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_1000DAA0(this);
}

_extern void _sub_1000DAB0(std::_List_buy<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,TexregElement>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,TexregElement> > > *const);
_inline std::_List_buy<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,TexregElement>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,TexregElement> > >::~_List_buy<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,TexregElement>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,TexregElement> > >() // 0x1000DAB0
{
    mangled_assert("??1?$_List_buy@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@VTexregElement@@@std@@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@VTexregElement@@@std@@@2@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_1000DAB0(this);
}

_extern void _sub_1000DAF0(std::_Tree_buy<std::pair<long const ,unsigned int>,std::allocator<std::pair<long const ,unsigned int> > > *const);
_inline std::_Tree_buy<std::pair<long const ,unsigned int>,std::allocator<std::pair<long const ,unsigned int> > >::~_Tree_buy<std::pair<long const ,unsigned int>,std::allocator<std::pair<long const ,unsigned int> > >() // 0x1000DAF0
{
    mangled_assert("??1?$_Tree_buy@U?$pair@$$CBJI@std@@V?$allocator@U?$pair@$$CBJI@std@@@2@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_1000DAF0(this);
}

_extern void _sub_1000DB00(std::_Tree_comp<0,std::_Tmap_traits<long,unsigned int,std::less<long>,std::allocator<std::pair<long const ,unsigned int> >,0> > *const);
_inline std::_Tree_comp<0,std::_Tmap_traits<long,unsigned int,std::less<long>,std::allocator<std::pair<long const ,unsigned int> >,0> >::~_Tree_comp<0,std::_Tmap_traits<long,unsigned int,std::less<long>,std::allocator<std::pair<long const ,unsigned int> >,0> >() // 0x1000DB00
{
    mangled_assert("??1?$_Tree_comp@$0A@V?$_Tmap_traits@JIU?$less@J@std@@V?$allocator@U?$pair@$$CBJI@std@@@2@$0A@@std@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_1000DB00(this);
}

_extern void _sub_1000DB70(stdext::hash_map<int,VaryMesh::CommandStruct,stdext::hash_compare<int,std::less<int> >,std::allocator<std::pair<int const ,VaryMesh::CommandStruct> > > *const);
_inline stdext::hash_map<int,VaryMesh::CommandStruct,stdext::hash_compare<int,std::less<int> >,std::allocator<std::pair<int const ,VaryMesh::CommandStruct> > >::~hash_map<int,VaryMesh::CommandStruct,stdext::hash_compare<int,std::less<int> >,std::allocator<std::pair<int const ,VaryMesh::CommandStruct> > >() // 0x1000DB70
{
    mangled_assert("??1?$hash_map@HUCommandStruct@VaryMesh@@V?$hash_compare@HU?$less@H@std@@@stdext@@V?$allocator@U?$pair@$$CBHUCommandStruct@VaryMesh@@@std@@@std@@@stdext@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_1000DB70(this);
}

_extern void _sub_1000DB80(stdext::hash_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,TexregElement,stdext::hash_compare<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,TexregElement> > > *const);
_inline stdext::hash_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,TexregElement,stdext::hash_compare<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,TexregElement> > >::~hash_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,TexregElement,stdext::hash_compare<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,TexregElement> > >() // 0x1000DB80
{
    mangled_assert("??1?$hash_map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@VTexregElement@@V?$hash_compare@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@stdext@@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@VTexregElement@@@std@@@2@@stdext@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_1000DB80(this);
}

_extern void _sub_1000DC30(std::map<long,unsigned int,std::less<long>,std::allocator<std::pair<long const ,unsigned int> > > *const);
_inline std::map<long,unsigned int,std::less<long>,std::allocator<std::pair<long const ,unsigned int> > >::~map<long,unsigned int,std::less<long>,std::allocator<std::pair<long const ,unsigned int> > >() // 0x1000DC30
{
    mangled_assert("??1?$map@JIU?$less@J@std@@V?$allocator@U?$pair@$$CBJI@std@@@2@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_1000DC30(this);
}

_extern void _sub_1000DC50(std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,TexregElement> *const);
_inline std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,TexregElement>::~pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,TexregElement>() // 0x1000DC50
{
    mangled_assert("??1?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@VTexregElement@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_1000DC50(this);
}

_extern void _sub_1000DC80(boost::shared_ptr<StateCommandBlock> *const);
_inline boost::shared_ptr<StateCommandBlock>::~shared_ptr<StateCommandBlock>() // 0x1000DC80
{
    mangled_assert("??1?$shared_ptr@VStateCommandBlock@@@boost@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_1000DC80(this);
}

_extern void _sub_1000DC90(std::stack<StateBlockMeasure::Frame,std::deque<StateBlockMeasure::Frame,std::allocator<StateBlockMeasure::Frame> > > *const);
_inline std::stack<StateBlockMeasure::Frame,std::deque<StateBlockMeasure::Frame,std::allocator<StateBlockMeasure::Frame> > >::~stack<StateBlockMeasure::Frame,std::deque<StateBlockMeasure::Frame,std::allocator<StateBlockMeasure::Frame> > >() // 0x1000DC90
{
    mangled_assert("??1?$stack@VFrame@StateBlockMeasure@@V?$deque@VFrame@StateBlockMeasure@@V?$allocator@VFrame@StateBlockMeasure@@@std@@@std@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_1000DC90(this);
}

_extern std::vector<CompoundStateBlockInstance *,std::allocator<CompoundStateBlockInstance *> > const &_sub_10019450(BasicMesh const *const, StateBlock_Type);
std::vector<CompoundStateBlockInstance *,std::allocator<CompoundStateBlockInstance *> > const &BasicMesh::getShaderList(StateBlock_Type) const // 0x10019450
{
    mangled_assert("?getShaderList@BasicMesh@@UBEABV?$vector@PAVCompoundStateBlockInstance@@V?$allocator@PAVCompoundStateBlockInstance@@@std@@@std@@W4StateBlock_Type@@@Z");
    todo("implement");
    std::vector<CompoundStateBlockInstance *,std::allocator<CompoundStateBlockInstance *> > const & __result = _sub_10019450(this, arg);
    return __result;
}

/* ---------- private code */
#endif
