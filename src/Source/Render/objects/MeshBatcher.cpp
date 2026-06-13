#if 0
/* ---------- headers */

#include "decomp.h"
#include <hash_map>
#include <xhash>
#include <boost\detail\shared_count.hpp>
#include <boost\detail\lightweight_mutex.hpp>
#include <xstring>
#include <boost\detail\lwm_win32.hpp>
#include <xmemory0>
#include <Objects\pch.h>
#include <memory\memorylib.h>
#include <crtdefs.h>
#include <gl\r_defines.h>
#include <gl\glext.h>
#include <new>
#include <xstddef>
#include <type_traits>
#include <xutility>
#include <Mathlib\matrix4.h>
#include <xatomic0.h>
#include <utility>
#include <iosfwd>
#include <memory\memorysmall.h>
#include <vector>
#include <Mathlib\vector3.h>
#include <assist\typemagic.h>
#include <xmemory>
#include <assist\nodepool.h>
#include <math.h>
#include <Mathlib\matrix3.h>
#include <memory>
#include <stdint.h>
#include <list>
#include <Objects\VertexArray.h>
#include <Objects\VertexArrayInternal.h>
#include <functional>
#include <debug\ctmessage.h>
#include <xfunctional>
#include <Objects\VaryMesh.h>
#include <map>
#include <xtree>
#include <Objects\StateBlock\StateBlockManager.h>
#include <Objects\Renderable.h>
#include <debug\ctassert.h>
#include <assert.h>
#include <algorithm>
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
#include <Objects\Texture.h>
#include <Objects\TextureRegistry.h>
#include <Objects\StateBlock\StateVariableInstance.h>
#include <util\dictionary.h>
#include <boost\detail\workaround.hpp>
#include <Mathlib\matvec.h>
#include <util\utilexports.h>
#include <Mathlib\vector2.h>
#include <tuple>
#include <Objects\MeshBatcher.h>
#include <Objects\Objects.h>
#include <Objects\basicmesh.h>
#include <Objects\StateBlock\stateBlock.h>
#include <debug\db.h>
#include <Objects\Mesh.h>
#include <bitset>
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
#include <Objects\memtracker.h>
#include <wchar.h>
#include <string>
#include <fileio\bytestream.h>
#include <fileio\fileioexports.h>
#include <profile\profile.h>
#include <assist\fixedstring.h>
#include <iostream>
#include <assist\stlexstring.h>
#include <boost\throw_exception.hpp>

/* ---------- constants */

enum `anonymous-namespace'::MeshType
{
    MeshType_Start = 0, // 0x0000
    MeshType_Regular = 0, // 0x0000
    MeshType_Goblin = 1, // 0x0001
    MeshType_End = 2, // 0x0002
};

/* ---------- definitions */

typedef std::vector<MeshBatcher::MeshBucket *,std::allocator<MeshBatcher::MeshBucket *> > MeshBucketCont;
typedef stdext::hash_map<unsigned long,MeshBatcher::TextureBucket *,stdext::hash_compare<unsigned long,std::less<unsigned long> >,std::allocator<std::pair<unsigned long const ,MeshBatcher::TextureBucket *> > > TextureHash;
typedef stdext::hash_map<unsigned long,MeshBatcher::ShaderBucket *,stdext::hash_compare<unsigned long,std::less<unsigned long> >,std::allocator<std::pair<unsigned long const ,MeshBatcher::ShaderBucket *> > > ShaderHash;
typedef `anonymous-namespace'::AllowTexturesFilter ?A0x9f8b4491::AllowTexturesFilter;
typedef `anonymous-namespace'::NotTexturesFilter ?A0x9f8b4491::NotTexturesFilter;
typedef `anonymous-namespace'::NotTextureCmdFilter ?A0x9f8b4491::NotTextureCmdFilter;
typedef `anonymous-namespace'::MeshType ?A0x9f8b4491::MeshType;

class `anonymous-namespace'::AllowTexturesFilter :
    public CompoundStateBlock::ExecuteVarFilter
{
public:
    AllowTexturesFilter(`anonymous-namespace'::AllowTexturesFilter const &); /* compiler_generated() */
    AllowTexturesFilter(StateCommandBlock *);
    virtual bool TestVariable(StateVariableInstance::Var const &) const override;
    virtual bool TestCommand(StateCommand const &) const override;
private:
    StateCommandBlock *m_pass; // 0x4
public:
    `anonymous-namespace'::AllowTexturesFilter &operator=(`anonymous-namespace'::AllowTexturesFilter const &); /* compiler_generated() */
};
static_assert(sizeof(`anonymous-namespace'::AllowTexturesFilter) == 8, "Invalid `anonymous-namespace'::AllowTexturesFilter size");

class `anonymous-namespace'::NotTexturesFilter :
    public CompoundStateBlock::ExecuteVarFilter
{
public:
    NotTexturesFilter(`anonymous-namespace'::NotTexturesFilter const &); /* compiler_generated() */
    NotTexturesFilter(StateCommandBlock *);
    virtual bool TestVariable(StateVariableInstance::Var const &) const override;
    virtual bool TestCommand(StateCommand const &) const override;
private:
    StateCommandBlock *m_pass; // 0x4
public:
    `anonymous-namespace'::NotTexturesFilter &operator=(`anonymous-namespace'::NotTexturesFilter const &); /* compiler_generated() */
};
static_assert(sizeof(`anonymous-namespace'::NotTexturesFilter) == 8, "Invalid `anonymous-namespace'::NotTexturesFilter size");

class `anonymous-namespace'::NotTextureCmdFilter :
    public StateCommandBlock::ExecuteFilter
{
public:
    NotTextureCmdFilter(`anonymous-namespace'::NotTextureCmdFilter const &); /* compiler_generated() */
    NotTextureCmdFilter();
    virtual bool TestCommand(StateCommand const &) const override;
    `anonymous-namespace'::NotTextureCmdFilter &operator=(`anonymous-namespace'::NotTextureCmdFilter const &); /* compiler_generated() */
};
static_assert(sizeof(`anonymous-namespace'::NotTextureCmdFilter) == 4, "Invalid `anonymous-namespace'::NotTextureCmdFilter size");

/* ---------- prototypes */


_static void setAlpha(rndTable *gl, float meshAlpha, bool const lightingPass);
_static void PreDumpState(unsigned __int32 &index, char *filename);
_static void PostDumpState(char *filename);

/* ---------- globals */

extern MeshBatcher *MeshBatcher::s_instance; // 0x10132B60

/* ---------- private variables */

_static
{
    extern std::_Tuple_alloc_t _Tuple_alloc; // 0x10132B65
    extern std::_Nil _Nil_obj; // 0x10132B66
    extern std::_Ignore ignore; // 0x10132B64
}

/* ---------- public code */

_extern void _sub_1007E1B0(MeshBatcher::TextureBucket *const);
_inline void MeshBatcher::TextureBucket::Reset() // 0x1007E1B0
{
    mangled_assert("?Reset@TextureBucket@MeshBatcher@@QAEXXZ");
    todo("implement");
    _sub_1007E1B0(this);
}

_extern void _sub_1007E170(MeshBatcher::ShaderBucket *const);
_inline void MeshBatcher::ShaderBucket::Reset() // 0x1007E170
{
    mangled_assert("?Reset@ShaderBucket@MeshBatcher@@QAEXXZ");
    todo("implement");
    _sub_1007E170(this);
}

_extern bool _sub_1007E2D0();
bool MeshBatcher::Startup() // 0x1007E2D0
{
    mangled_assert("?Startup@MeshBatcher@@SG_NXZ");
    todo("implement");
    bool __result = _sub_1007E2D0();
    return __result;
}

_extern _sub_1007C800(MeshBatcher::Data *const);
_inline MeshBatcher::Data::Data() // 0x1007C800
{
    mangled_assert("??0Data@MeshBatcher@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_1007C800(this);
}

_extern _sub_1007C820(StateCommandBlock::ExecuteFilter *const);
_inline StateCommandBlock::ExecuteFilter::ExecuteFilter() // 0x1007C820
{
    mangled_assert("??0ExecuteFilter@StateCommandBlock@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_1007C820(this);
}

_extern bool _sub_1007E1D0();
bool MeshBatcher::Shutdown() // 0x1007E1D0
{
    mangled_assert("?Shutdown@MeshBatcher@@SG_NXZ");
    todo("implement");
    bool __result = _sub_1007E1D0();
    return __result;
}

_extern MeshBatcher *_sub_1007DAD0();
MeshBatcher *MeshBatcher::Instance() // 0x1007DAD0
{
    mangled_assert("?Instance@MeshBatcher@@SGPAV1@XZ");
    todo("implement");
    MeshBatcher * __result = _sub_1007DAD0();
    return __result;
}

_extern _sub_1007C830(MeshBatcher *const);
MeshBatcher::MeshBatcher() // 0x1007C830
{
    mangled_assert("??0MeshBatcher@@IAE@XZ");
    todo("implement");
    _sub_1007C830(this);
}

_extern _sub_1007C9B0(MeshBatcher::MeshBucket *const);
_inline MeshBatcher::MeshBucket::MeshBucket() // 0x1007C9B0
{
    mangled_assert("??0MeshBucket@MeshBatcher@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_1007C9B0(this);
}

_extern _sub_1007C9F0(MeshBatcher::ShaderBucket *const);
_inline MeshBatcher::ShaderBucket::ShaderBucket() // 0x1007C9F0
{
    mangled_assert("??0ShaderBucket@MeshBatcher@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_1007C9F0(this);
}

_extern _sub_1007CA10(MeshBatcher::TextureBucket *const);
_inline MeshBatcher::TextureBucket::TextureBucket() // 0x1007CA10
{
    mangled_assert("??0TextureBucket@MeshBatcher@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_1007CA10(this);
}

_extern void _sub_1007CD20(std::_List_buy<std::pair<unsigned long const ,MeshBatcher::ShaderBucket *>,std::allocator<std::pair<unsigned long const ,MeshBatcher::ShaderBucket *> > > *const);
_inline std::_List_buy<std::pair<unsigned long const ,MeshBatcher::ShaderBucket *>,std::allocator<std::pair<unsigned long const ,MeshBatcher::ShaderBucket *> > >::~_List_buy<std::pair<unsigned long const ,MeshBatcher::ShaderBucket *>,std::allocator<std::pair<unsigned long const ,MeshBatcher::ShaderBucket *> > >() // 0x1007CD20
{
    mangled_assert("??1?$_List_buy@U?$pair@$$CBKPAVShaderBucket@MeshBatcher@@@std@@V?$allocator@U?$pair@$$CBKPAVShaderBucket@MeshBatcher@@@std@@@2@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_1007CD20(this);
}

_extern void _sub_1007CD30(std::_List_buy<std::pair<unsigned long const ,MeshBatcher::TextureBucket *>,std::allocator<std::pair<unsigned long const ,MeshBatcher::TextureBucket *> > > *const);
_inline std::_List_buy<std::pair<unsigned long const ,MeshBatcher::TextureBucket *>,std::allocator<std::pair<unsigned long const ,MeshBatcher::TextureBucket *> > >::~_List_buy<std::pair<unsigned long const ,MeshBatcher::TextureBucket *>,std::allocator<std::pair<unsigned long const ,MeshBatcher::TextureBucket *> > >() // 0x1007CD30
{
    mangled_assert("??1?$_List_buy@U?$pair@$$CBKPAVTextureBucket@MeshBatcher@@@std@@V?$allocator@U?$pair@$$CBKPAVTextureBucket@MeshBatcher@@@std@@@2@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_1007CD30(this);
}

_extern void _sub_1007CD40(stdext::hash_map<unsigned long,MeshBatcher::ShaderBucket *,stdext::hash_compare<unsigned long,std::less<unsigned long> >,std::allocator<std::pair<unsigned long const ,MeshBatcher::ShaderBucket *> > > *const);
_inline stdext::hash_map<unsigned long,MeshBatcher::ShaderBucket *,stdext::hash_compare<unsigned long,std::less<unsigned long> >,std::allocator<std::pair<unsigned long const ,MeshBatcher::ShaderBucket *> > >::~hash_map<unsigned long,MeshBatcher::ShaderBucket *,stdext::hash_compare<unsigned long,std::less<unsigned long> >,std::allocator<std::pair<unsigned long const ,MeshBatcher::ShaderBucket *> > >() // 0x1007CD40
{
    mangled_assert("??1?$hash_map@KPAVShaderBucket@MeshBatcher@@V?$hash_compare@KU?$less@K@std@@@stdext@@V?$allocator@U?$pair@$$CBKPAVShaderBucket@MeshBatcher@@@std@@@std@@@stdext@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_1007CD40(this);
}

_extern void _sub_1007CD50(stdext::hash_map<unsigned long,MeshBatcher::TextureBucket *,stdext::hash_compare<unsigned long,std::less<unsigned long> >,std::allocator<std::pair<unsigned long const ,MeshBatcher::TextureBucket *> > > *const);
_inline stdext::hash_map<unsigned long,MeshBatcher::TextureBucket *,stdext::hash_compare<unsigned long,std::less<unsigned long> >,std::allocator<std::pair<unsigned long const ,MeshBatcher::TextureBucket *> > >::~hash_map<unsigned long,MeshBatcher::TextureBucket *,stdext::hash_compare<unsigned long,std::less<unsigned long> >,std::allocator<std::pair<unsigned long const ,MeshBatcher::TextureBucket *> > >() // 0x1007CD50
{
    mangled_assert("??1?$hash_map@KPAVTextureBucket@MeshBatcher@@V?$hash_compare@KU?$less@K@std@@@stdext@@V?$allocator@U?$pair@$$CBKPAVTextureBucket@MeshBatcher@@@std@@@std@@@stdext@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_1007CD50(this);
}

_extern void _sub_1007CE70(MeshBatcher::Data *const);
_inline MeshBatcher::Data::~Data() // 0x1007CE70
{
    mangled_assert("??1Data@MeshBatcher@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_1007CE70(this);
}

_extern void _sub_1007CE80(MeshBatcher *const);
MeshBatcher::~MeshBatcher() // 0x1007CE80
{
    mangled_assert("??1MeshBatcher@@IAE@XZ");
    todo("implement");
    _sub_1007CE80(this);
}

_extern void _sub_1007CF10(MeshBatcher::ShaderBucket *const);
_inline MeshBatcher::ShaderBucket::~ShaderBucket() // 0x1007CF10
{
    mangled_assert("??1ShaderBucket@MeshBatcher@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_1007CF10(this);
}

_extern void _sub_1007CF20(MeshBatcher::TextureBucket *const);
_inline MeshBatcher::TextureBucket::~TextureBucket() // 0x1007CF20
{
    mangled_assert("??1TextureBucket@MeshBatcher@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_1007CF20(this);
}

_extern MeshBatcher &_sub_1007CF90(MeshBatcher *const, MeshBatcher const &);
_inline MeshBatcher &MeshBatcher::operator=(MeshBatcher const &) // 0x1007CF90
{
    mangled_assert("??4MeshBatcher@@QAEAAV0@ABV0@@Z");
    compiler_generated();
    todo("implement");
    MeshBatcher & __result = _sub_1007CF90(this, arg);
    return __result;
}

_extern void _sub_1007D6E0(MeshBatcher *const, rndTable *);
void MeshBatcher::AttachGL(rndTable *) // 0x1007D6E0
{
    mangled_assert("?AttachGL@MeshBatcher@@QAEXPAUrndTable@@@Z");
    todo("implement");
    _sub_1007D6E0(this, arg);
}

_extern MeshBatcher::Stats const &_sub_1007DAC0(MeshBatcher const *const);
MeshBatcher::Stats const &MeshBatcher::GetStats() const // 0x1007DAC0
{
    mangled_assert("?GetStats@MeshBatcher@@QBEABUStats@1@XZ");
    todo("implement");
    MeshBatcher::Stats const & __result = _sub_1007DAC0(this);
    return __result;
}

_extern MeshBatcher::ShaderBucket *_sub_1007D7C0(MeshBatcher *const, CompoundStateBlock const *);
MeshBatcher::ShaderBucket *MeshBatcher::FindShaderBucket(CompoundStateBlock const *) // 0x1007D7C0
{
    mangled_assert("?FindShaderBucket@MeshBatcher@@AAEPAVShaderBucket@1@PBVCompoundStateBlock@@@Z");
    todo("implement");
    MeshBatcher::ShaderBucket * __result = _sub_1007D7C0(this, arg);
    return __result;
}

_extern MeshBatcher::TextureBucket *_sub_1007D850(MeshBatcher *const, MeshBatcher::ShaderBucket *, unsigned long);
MeshBatcher::TextureBucket *MeshBatcher::FindTextureBucket(MeshBatcher::ShaderBucket *, unsigned long) // 0x1007D850
{
    mangled_assert("?FindTextureBucket@MeshBatcher@@AAEPAVTextureBucket@1@PAVShaderBucket@1@K@Z");
    todo("implement");
    MeshBatcher::TextureBucket * __result = _sub_1007D850(this, arg, arg);
    return __result;
}

_extern void _sub_1007D6F0(MeshBatcher *const, MeshBatcher::MeshBucket *, CompoundStateBlock *, unsigned long, bool);
void MeshBatcher::BucketMesh(MeshBatcher::MeshBucket *, CompoundStateBlock *, unsigned long, bool) // 0x1007D6F0
{
    mangled_assert("?BucketMesh@MeshBatcher@@AAEXPAVMeshBucket@1@PAVCompoundStateBlock@@K_N@Z");
    todo("implement");
    _sub_1007D6F0(this, arg, arg, arg, arg);
}

_extern void _sub_1007D730(MeshBatcher *const);
void MeshBatcher::ClearStats() // 0x1007D730
{
    mangled_assert("?ClearStats@MeshBatcher@@QAEXXZ");
    todo("implement");
    _sub_1007D730(this);
}

_extern void _sub_1007E200(MeshBatcher *const);
void MeshBatcher::StartBatch() // 0x1007E200
{
    mangled_assert("?StartBatch@MeshBatcher@@QAEXXZ");
    todo("implement");
    _sub_1007E200(this);
}

_extern void _sub_1007E340(MeshBatcher *const, BasicMesh *, MeshInstance const *, matrix4 const &, float, bool);
void MeshBatcher::SubmitMesh(BasicMesh *, MeshInstance const *, matrix4 const &, float, bool) // 0x1007E340
{
    mangled_assert("?SubmitMesh@MeshBatcher@@QAEXPAVBasicMesh@@PBVMeshInstance@@ABVmatrix4@@M_N@Z");
    todo("implement");
    _sub_1007E340(this, arg, arg, arg, arg, arg);
}

_extern void _sub_1007DE60(MeshBatcher *const, MeshBatcher::TextureBucket *, CompoundStateBlock *, StateCommandBlock *, __int32, __int32);
void MeshBatcher::RenderTextureBucket(MeshBatcher::TextureBucket *, CompoundStateBlock *, StateCommandBlock *, __int32, __int32) // 0x1007DE60
{
    mangled_assert("?RenderTextureBucket@MeshBatcher@@AAEXPAVTextureBucket@1@PAVCompoundStateBlock@@PAVStateCommandBlock@@HH@Z");
    todo("implement");
    _sub_1007DE60(this, arg, arg, arg, arg, arg);
}

_extern void _sub_1007DBB0(MeshBatcher *const, MeshBatcher::ShaderBucket *);
void MeshBatcher::RenderShaderBucket(MeshBatcher::ShaderBucket *) // 0x1007DBB0
{
    mangled_assert("?RenderShaderBucket@MeshBatcher@@AAEXPAVShaderBucket@1@@Z");
    todo("implement");
    _sub_1007DBB0(this, arg);
}

_extern void _sub_1007DB60(MeshBatcher *const, Camera const &);
void MeshBatcher::Render(Camera const &) // 0x1007DB60
{
    mangled_assert("?Render@MeshBatcher@@QAEXABVCamera@@@Z");
    todo("implement");
    _sub_1007DB60(this, arg);
}

_extern void _sub_1007D770(MeshBatcher *const, char const *);
void MeshBatcher::DumpState(char const *) // 0x1007D770
{
    mangled_assert("?DumpState@MeshBatcher@@AAEXPBD@Z");
    todo("implement");
    _sub_1007D770(this, arg);
}

/* ---------- private code */

_extern void _sub_100806F0(rndTable *, float, bool const);
_static void setAlpha(rndTable *gl, float meshAlpha, bool const lightingPass) // 0x100806F0
{
    mangled_assert("setAlpha");
    todo("implement");
    _sub_100806F0(gl, meshAlpha, lightingPass);
}

_extern void _sub_1007DAF0(unsigned __int32 &, char *);
_static void PreDumpState(unsigned __int32 &index, char *filename) // 0x1007DAF0
{
    mangled_assert("PreDumpState");
    todo("implement");
    _sub_1007DAF0(index, filename);
}

_extern void _sub_1007DAE0(char *);
_static void PostDumpState(char *filename) // 0x1007DAE0
{
    mangled_assert("PostDumpState");
    todo("implement");
    _sub_1007DAE0(filename);
}
#endif
