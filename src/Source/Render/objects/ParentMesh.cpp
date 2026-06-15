#if 0
/* ---------- headers */

#include "decomp.h"
#include <hash_map>
#include <boost\detail\shared_count.hpp>
#include <memoryapi.h>
#include <xhash>
#include <boost\detail\lightweight_mutex.hpp>
#include <boost\detail\lwm_win32.hpp>
#include <xstring>
#include <consoleapi.h>
#include <assist\typemagic.h>
#include <xmemory0>
#include <Objects\pch.h>
#include <memory\memorylib.h>
#include <wingdi.h>
#include <crtdefs.h>
#include <pshpack4.h>
#include <gl\r_defines.h>
#include <gl\glext.h>
#include <winerror.h>
#include <ime_cmodes.h>
#include <Objects\VaryMesh.h>
#include <Objects\VertexArray.h>
#include <Objects\VertexArrayInternal.h>
#include <interlockedapi.h>
#include <timezoneapi.h>
#include <new>
#include <xstddef>
#include <type_traits>
#include <securitybaseapi.h>
#include <reason.h>
#include <winuser.h>
#include <Objects\StateBlock\CompoundStateBlockInstance.h>
#include <Mathlib\matrix4.h>
#include <xutility>
#include <xatomic0.h>
#include <utility>
#include <Mathlib\vector3.h>
#include <iosfwd>
#include <debugapi.h>
#include <vector>
#include <fileapi.h>
#include <xmemory>
#include <gl\r_macros.h>
#include <winnls.h>
#include <Mathlib\matrix3.h>
#include <platform\os.h>
#include <datetimeapi.h>
#include <math.h>
#include <memory>
#include <windows.h>
#include <threadpoollegacyapiset.h>
#include <stralign.h>
#include <stdint.h>
#include <winapifamily.h>
#include <sdkddkver.h>
#include <list>
#include <excpt.h>
#include <poppack.h>
#include <functional>
#include <imm.h>
#include <xfunctional>
#include <profileapi.h>
#include <synchapi.h>
#include <map>
#include <xtree>
#include <utilapiset.h>
#include <heapapi.h>
#include <processthreadsapi.h>
#include <Objects\Renderable.h>
#include <pshpack8.h>
#include <stdarg.h>
#include <bemapiset.h>
#include <tvout.h>
#include <windef.h>
#include <winnetwk.h>
#include <minwindef.h>
#include <wnnc.h>
#include <debug\ctassert.h>
#include <specstrings.h>
#include <handleapi.h>
#include <specstrings_strict.h>
#include <Objects\Light.h>
#include <specstrings_undef.h>
#include <assert.h>
#include <driverspecs.h>
#include <sdv_driverspecs.h>
#include <threadpoolapiset.h>
#include <namespaceapi.h>
#include <algorithm>
#include <ktmtypes.h>
#include <util\types.h>
#include <boost\shared_ptr.hpp>
#include <winbase.h>
#include <Objects\goblinmesh.h>
#include <boost\config.hpp>
#include <apisetcconv.h>
#include <pshpack1.h>
#include <boost\config\user.hpp>
#include <minwinbase.h>
#include <boost\config\select_compiler_config.hpp>
#include <boost\config\compiler\visualc.hpp>
#include <boost\config\select_stdlib_config.hpp>
#include <wincon.h>
#include <boost\config\stdlib\dinkumware.hpp>
#include <errhandlingapi.h>
#include <Objects\StateBlock\stateblocktypes.h>
#include <boost\config\select_platform_config.hpp>
#include <processenv.h>
#include <platform\osdef.h>
#include <boost\config\platform\win32.hpp>
#include <guiddef.h>
#include <jobapi.h>
#include <Objects\multimesh.h>
#include <Objects\Texture.h>
#include <apiset.h>
#include <Objects\basicmesh.h>
#include <Objects\TextureRegistry.h>
#include <debug\ctmessage.h>
#include <systemtopologyapi.h>
#include <Objects\memtracker.h>
#include <wow64apiset.h>
#include <fileio\bytestream.h>
#include <Objects\StateBlock\StateVariableInstance.h>
#include <fileio\fileioexports.h>
#include <util\dictionary.h>
#include <boost\detail\workaround.hpp>
#include <assist\fixedstring.h>
#include <Mathlib\matvec.h>
#include <util\utilexports.h>
#include <assist\stlexstring.h>
#include <Mathlib\vector2.h>
#include <processtopologyapi.h>
#include <tuple>
#include <winnt.h>
#include <pshpack2.h>
#include <Objects\ParentMesh.h>
#include <kernelspecs.h>
#include <libloaderapi.h>
#include <Objects\Mesh.h>
#include <Objects\StateBlock\stateBlock.h>
#include <basetsd.h>
#include <sysinfoapi.h>
#include <Objects\Core.h>
#include <bitset>
#include <debug\db.h>
#include <Objects\Objects.h>
#include <gl\lotypes.h>
#include <gl\types.h>
#include <util\colour.h>
#include <Mathlib\vector4.h>
#include <boost\config\suffix.hpp>
#include <Mathlib\mathlibdll.h>
#include <boost\assert.hpp>
#include <Mathlib\fastmath.h>
#include <boost\checked_delete.hpp>
#include <winreg.h>
#include <gl\r_types.h>
#include <securityappcontainer.h>
#include <fileio\iff.h>
#include <fibersapi.h>
#include <Objects\MeshIFF.h>
#include <Objects\Constructor.h>
#include <wchar.h>
#include <string>
#include <realtimeapiset.h>
#include <profile\profile.h>
#include <iostream>
#include <winver.h>
#include <verrsrc.h>
#include <boost\throw_exception.hpp>
#include <namedpipeapi.h>
#include <ioapiset.h>

/* ---------- constants */

/* ---------- definitions */

typedef std::vector<SubMesh *,std::allocator<SubMesh *> > MeshStructList;
typedef std::vector<Light *,std::allocator<Light *> > LightCont;
typedef std::map<int,GoblinGroup *,std::less<int>,std::allocator<std::pair<int const ,GoblinGroup *> > > MaterialMap;
typedef std::_Vector_iterator<std::_Vector_val<std::_Simple_types<SubMesh *> > > MeshStructListI;

/* ---------- prototypes */

extern __int32 handleVARY(IFF *iff, IFFChunk *chunk, void *user0, void *user1);
extern __int32 handleMULT(IFF *iff, IFFChunk *chunk, void *user0, void *user1);
extern __int32 handleBMSH(IFF *iff, IFFChunk *chunk, void *user0, void *user1);
extern __int32 handleGOBG(IFF *iff, IFFChunk *chunk, void *user0, void *user1);
extern __int32 handleVMOD(IFF *iff, IFFChunk *chunk, void *user0, void *user1);

_static __int32 loadMult1200(IFF *iff, IFFChunk *chunk, void *user0, void *user1);
_static __int32 loadMult1201(IFF *iff, IFFChunk *chunk, void *user0, void *user1);
_static __int32 loadMult1202(IFF *iff, IFFChunk *chunk, void *user0, void *user1);
_static __int32 loadMult1300(IFF *iff, IFFChunk *chunk, void *user0, void *user1);
_static __int32 loadMult(IFF *iff, IFFChunk *chunk, void *user0, void *user1);
_static __int32 handle_hvmd(IFF *iff, IFFChunk *chunk, void *user0, void *user1);

/* ---------- globals */

/* ---------- private variables */

_static
{
    extern std::_Tuple_alloc_t _Tuple_alloc; // 0x10132BA9
    extern matrix4 identityMatrix; // 0x10132BB0
    extern std::_Nil _Nil_obj; // 0x10132BAA
    extern std::_Ignore ignore; // 0x10132BA8
}

/* ---------- public code */

bool ParentMesh::areGoblinsVisible() // 0x10088360
{
    mangled_assert("?areGoblinsVisible@ParentMesh@@SG_NXZ");
    todo("implement");
}

ParentMesh *ParentMesh::create() // 0x10088960
{
    mangled_assert("?create@ParentMesh@@SGPAV1@XZ");
    todo("implement");
}

ParentMesh::ParentMesh() // 0x10087C30
{
    mangled_assert("??0ParentMesh@@QAE@XZ");
    todo("implement");
}

ParentMesh::~ParentMesh() // 0x10087D40
{
    mangled_assert("??1ParentMesh@@UAE@XZ");
    todo("implement");
}

void ParentMesh::clear() // 0x10088380
{
    mangled_assert("?clear@ParentMesh@@UAEXXZ");
    todo("implement");
}

void ParentMesh::setDirty() // 0x1008A340
{
    mangled_assert("?setDirty@ParentMesh@@UAEXXZ");
    todo("implement");
}

void ParentMesh::renderSubMesh(matrix4 const &, MeshInstance const *, unsigned __int32 const, float const, vector4 const &, __int32) // 0x1008A290
{
    mangled_assert("?renderSubMesh@ParentMesh@@UAEXABVmatrix4@@PBVMeshInstance@@IMABVvector4@@H@Z");
    todo("implement");
}

void ParentMesh::renderGoblinMesh(matrix4 const &, MeshInstance const *, unsigned __int32 const, float const, vector4 const &, __int32) // 0x1008A250
{
    mangled_assert("?renderGoblinMesh@ParentMesh@@UAEXABVmatrix4@@PBVMeshInstance@@IMABVvector4@@H@Z");
    todo("implement");
}

void ParentMesh::render(matrix4 const &, MeshInstance const *, unsigned __int32 const, float const, vector4 const &, __int32) const // 0x1008A220
{
    mangled_assert("?render@ParentMesh@@UBEXABVmatrix4@@PBVMeshInstance@@IMABVvector4@@H@Z");
    // __shifted(ParentMesh, 4);
    todo("implement");
}

void ParentMesh::addTexture(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &, Texture *) // 0x10088340
{
    mangled_assert("?addTexture@ParentMesh@@UAEXABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVTexture@@@Z");
    todo("implement");
}

__int32 ParentMesh::findTexture(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &) // 0x10088980
{
    mangled_assert("?findTexture@ParentMesh@@UAEHABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z");
    todo("implement");
}

Texture *ParentMesh::findTexture(__int32) const // 0x10088A30
{
    mangled_assert("?findTexture@ParentMesh@@UBEPAVTexture@@H@Z");
    todo("implement");
}

void ParentMesh::addSubMesh(SubMesh *) // 0x10088330
{
    mangled_assert("?addSubMesh@ParentMesh@@UAEXPAVSubMesh@@@Z");
    todo("implement");
}

__int32 ParentMesh::numSubMesh() const // 0x1008A1B0
{
    mangled_assert("?numSubMesh@ParentMesh@@UBEHXZ");
    todo("implement");
}

SubMesh const *ParentMesh::getSubMesh(__int32) const // 0x10088B90
{
    mangled_assert("?getSubMesh@ParentMesh@@UBEPBVSubMesh@@H@Z");
    todo("implement");
}

SubMesh const *ParentMesh::getSubMesh(__int32, unsigned __int32 const) const // 0x10088B50
{
    mangled_assert("?getSubMesh@ParentMesh@@QBEPBVSubMesh@@HI@Z");
    todo("implement");
}

SubMesh *ParentMesh::getSubMesh(__int32, unsigned __int32 const) // 0x10088B10
{
    mangled_assert("?getSubMesh@ParentMesh@@QAEPAVSubMesh@@HI@Z");
    todo("implement");
}

__int32 handleVARY(IFF *iff, IFFChunk *chunk, void *user0, void *user1) // 0x10088E20
{
    mangled_assert("?handleVARY@@YGHPAVIFF@@PAVIFFChunk@@PAX2@Z");
    todo("implement");
}

__int32 handleMULT(IFF *iff, IFFChunk *chunk, void *user0, void *user1) // 0x10088C60
{
    mangled_assert("?handleMULT@@YGHPAVIFF@@PAVIFFChunk@@PAX2@Z");
    todo("implement");
}

__int32 handleBMSH(IFF *iff, IFFChunk *chunk, void *user0, void *user1) // 0x10088BC0
{
    mangled_assert("?handleBMSH@@YGHPAVIFF@@PAVIFFChunk@@PAX2@Z");
    todo("implement");
}

__int32 handleGOBG(IFF *iff, IFFChunk *chunk, void *user0, void *user1) // 0x10088BF0
{
    mangled_assert("?handleGOBG@@YGHPAVIFF@@PAVIFFChunk@@PAX2@Z");
    todo("implement");
}

__int32 handleVMOD(IFF *iff, IFFChunk *chunk, void *user0, void *user1) // 0x100891F0
{
    mangled_assert("?handleVMOD@@YGHPAVIFF@@PAVIFFChunk@@PAX2@Z");
    todo("implement");
}

bool ParentMesh::convertObject() // 0x100887B0
{
    mangled_assert("?convertObject@ParentMesh@@QAE_NXZ");
    todo("implement");
}

bool ParentMesh::convertShaders() // 0x100888A0
{
    mangled_assert("?convertShaders@ParentMesh@@AAE_NXZ");
    todo("implement");
}

__int32 ParentMesh::import(IFF *, IFFChunk *) // 0x10089380
{
    mangled_assert("?import@ParentMesh@@UAEHPAVIFF@@PAVIFFChunk@@@Z");
    todo("implement");
}

void ParentMesh::computeBoundingSphere(float *, vector3 *) const // 0x100883F0
{
    mangled_assert("?computeBoundingSphere@ParentMesh@@ABEXPAMPAVvector3@@@Z");
    todo("implement");
}

void ParentMesh::getBoundingSphere(float *, vector3 *) const // 0x10088A60
{
    mangled_assert("?getBoundingSphere@ParentMesh@@UBEXPAMPAVvector3@@@Z");
    todo("implement");
}

void ParentMesh::addIFFParseHandlers(IFF *iff, Mesh **ppMesh, std::basic_string<char,std::char_traits<char>,std::allocator<char> > *errMsg) // 0x100882D0
{
    mangled_assert("?addIFFParseHandlers@ParentMesh@@SGXPAVIFF@@PAPAVMesh@@PAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z");
    todo("implement");
}

__int32 ParentMesh::getNumPolys() const // 0x10088AB0
{
    mangled_assert("?getNumPolys@ParentMesh@@UBEHXZ");
    todo("implement");
}

void ParentMesh::setMinLOD(float) // 0x1008A350
{
    mangled_assert("?setMinLOD@ParentMesh@@UAEXM@Z");
    todo("implement");
}

void ParentMesh::setDetailLevel(float) // 0x1008A300
{
    mangled_assert("?setDetailLevel@ParentMesh@@UAEXM@Z");
    todo("implement");
}

unsigned __int32 ParentMesh::addShader(StateBlock_Type, CompoundStateBlockInstance *) // 0x10088300
{
    mangled_assert("?addShader@ParentMesh@@UAEIW4StateBlock_Type@@PAVCompoundStateBlockInstance@@@Z");
    todo("implement");
}

std::vector<CompoundStateBlockInstance *,std::allocator<CompoundStateBlockInstance *> > const &ParentMesh::getShaderList(StateBlock_Type) const // 0x10088AF0
{
    mangled_assert("?getShaderList@ParentMesh@@UBEABV?$vector@PAVCompoundStateBlockInstance@@V?$allocator@PAVCompoundStateBlockInstance@@@std@@@std@@W4StateBlock_Type@@@Z");
    todo("implement");
}

std::vector<CompoundStateBlockInstance *,std::allocator<CompoundStateBlockInstance *> > const &ParentMesh::getShaders(StateBlock_Type) const // 0x10088B00
{
    mangled_assert("?getShaders@ParentMesh@@UBEABV?$vector@PAVCompoundStateBlockInstance@@V?$allocator@PAVCompoundStateBlockInstance@@@std@@@std@@W4StateBlock_Type@@@Z");
    todo("implement");
}

/* ---------- private code */

_static __int32 loadMult1200(IFF *iff, IFFChunk *chunk, void *user0, void *user1) // 0x10089500
{
    mangled_assert("loadMult1200");
    todo("implement");
}

_static __int32 loadMult1201(IFF *iff, IFFChunk *chunk, void *user0, void *user1) // 0x10089800
{
    mangled_assert("loadMult1201");
    todo("implement");
}

_static __int32 loadMult1202(IFF *iff, IFFChunk *chunk, void *user0, void *user1) // 0x10089BB0
{
    mangled_assert("loadMult1202");
    todo("implement");
}

_static __int32 loadMult1300(IFF *iff, IFFChunk *chunk, void *user0, void *user1) // 0x10089C50
{
    mangled_assert("loadMult1300");
    todo("implement");
}

_static __int32 loadMult(IFF *iff, IFFChunk *chunk, void *user0, void *user1) // 0x1008A170
{
    mangled_assert("loadMult");
    todo("implement");
}

_static __int32 handle_hvmd(IFF *iff, IFFChunk *chunk, void *user0, void *user1) // 0x10089220
{
    mangled_assert("handle_hvmd");
    todo("implement");
}
#endif
