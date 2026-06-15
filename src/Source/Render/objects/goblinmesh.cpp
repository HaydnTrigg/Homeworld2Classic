#if 0
/* ---------- headers */

#include "decomp.h"
#include <boost\shared_ptr.hpp>
#include <hash_map>
#include <boost\config.hpp>
#include <xhash>
#include <boost\config\user.hpp>
#include <wingdi.h>
#include <boost\config\select_compiler_config.hpp>
#include <xstring>
#include <boost\config\compiler\visualc.hpp>
#include <xmemory0>
#include <pshpack4.h>
#include <Objects\pch.h>
#include <boost\config\select_stdlib_config.hpp>
#include <boost\config\stdlib\dinkumware.hpp>
#include <Objects\StateBlock\stateblocktypes.h>
#include <boost\config\select_platform_config.hpp>
#include <crtdefs.h>
#include <winerror.h>
#include <boost\config\platform\win32.hpp>
#include <platform\osdef.h>
#include <ime_cmodes.h>
#include <debug\ctmessage.h>
#include <Objects\Texture.h>
#include <fileio\iff.h>
#include <Objects\TextureRegistry.h>
#include <fileio\fileioexports.h>
#include <interlockedapi.h>
#include <timezoneapi.h>
#include <Objects\StateBlock\StateVariableInstance.h>
#include <util\dictionary.h>
#include <boost\detail\workaround.hpp>
#include <util\utilexports.h>
#include <securitybaseapi.h>
#include <Mathlib\matvec.h>
#include <new>
#include <reason.h>
#include <Mathlib\vector2.h>
#include <tuple>
#include <xstddef>
#include <type_traits>
#include <winuser.h>
#include <Objects\StateBlock\stateBlock.h>
#include <Objects\goblinmesh.h>
#include <bitset>
#include <Objects\Mesh.h>
#include <debugapi.h>
#include <Objects\Core.h>
#include <gl\lotypes.h>
#include <fileapi.h>
#include <gl\types.h>
#include <xutility>
#include <util\colour.h>
#include <boost\config\suffix.hpp>
#include <xatomic0.h>
#include <utility>
#include <Mathlib\vector4.h>
#include <boost\assert.hpp>
#include <iosfwd>
#include <vector>
#include <Mathlib\mathlibdll.h>
#include <boost\checked_delete.hpp>
#include <xmemory>
#include <Mathlib\fastmath.h>
#include <winnls.h>
#include <gl\r_types.h>
#include <platform\os.h>
#include <datetimeapi.h>
#include <windows.h>
#include <threadpoollegacyapiset.h>
#include <stralign.h>
#include <winapifamily.h>
#include <sdkddkver.h>
#include <excpt.h>
#include <poppack.h>
#include <math.h>
#include <imm.h>
#include <list>
#include <profile\profile.h>
#include <profileapi.h>
#include <iostream>
#include <synchapi.h>
#include <boost\throw_exception.hpp>
#include <utilapiset.h>
#include <heapapi.h>
#include <processthreadsapi.h>
#include <map>
#include <boost\detail\shared_count.hpp>
#include <xtree>
#include <boost\detail\lightweight_mutex.hpp>
#include <boost\detail\lwm_win32.hpp>
#include <pshpack8.h>
#include <stdarg.h>
#include <bemapiset.h>
#include <tvout.h>
#include <windef.h>
#include <winnetwk.h>
#include <minwindef.h>
#include <wnnc.h>
#include <gl\r_defines.h>
#include <specstrings.h>
#include <handleapi.h>
#include <gl\glext.h>
#include <specstrings_strict.h>
#include <specstrings_undef.h>
#include <driverspecs.h>
#include <sdv_driverspecs.h>
#include <threadpoolapiset.h>
#include <assert.h>
#include <namespaceapi.h>
#include <ktmtypes.h>
#include <algorithm>
#include <winbase.h>
#include <util\types.h>
#include <apisetcconv.h>
#include <pshpack1.h>
#include <minwinbase.h>
#include <wincon.h>
#include <Mathlib\matrix4.h>
#include <errhandlingapi.h>
#include <processenv.h>
#include <Mathlib\vector3.h>
#include <guiddef.h>
#include <jobapi.h>
#include <Objects\ParentMesh.h>
#include <apiset.h>
#include <Objects\VertexArray.h>
#include <systemtopologyapi.h>
#include <Objects\VertexArrayInternal.h>
#include <wow64apiset.h>
#include <Mathlib\matrix3.h>
#include <memory>
#include <stdint.h>
#include <processtopologyapi.h>
#include <functional>
#include <xfunctional>
#include <winnt.h>
#include <pshpack2.h>
#include <kernelspecs.h>
#include <libloaderapi.h>
#include <basetsd.h>
#include <sysinfoapi.h>
#include <Objects\Constructor.h>
#include <Objects\Objects.h>
#include <debug\db.h>
#include <winreg.h>
#include <Objects\Renderable.h>
#include <securityappcontainer.h>
#include <fibersapi.h>
#include <debug\ctassert.h>
#include <realtimeapiset.h>
#include <winver.h>
#include <verrsrc.h>
#include <string>
#include <namedpipeapi.h>
#include <ioapiset.h>
#include <memoryapi.h>
#include <consoleapi.h>

/* ---------- constants */

/* ---------- definitions */

class GoblinInfo
{
public:
    GoblinInfo(GoblinInfo const &); /* compiler_generated() */
    _inline GoblinInfo();
    struct Vertex
    {
        vector3 position; // 0x0
        vector3 normal; // 0xC
        vector2 uv; // 0x18
        _inline Vertex(); /* compiler_generated() */
    };
    static_assert(sizeof(Vertex) == 32, "Invalid Vertex size");
    struct Face
    {
        __int32 index[3]; // 0x0
    };
    static_assert(sizeof(Face) == 12, "Invalid Face size");
    std::vector<GoblinInfo::Vertex,std::allocator<GoblinInfo::Vertex> > m_vertices; // 0x0
    std::vector<GoblinInfo::Face,std::allocator<GoblinInfo::Face> > m_faces; // 0xC
    float m_radius; // 0x18
    __int32 m_material; // 0x1C
    _inline ~GoblinInfo(); /* compiler_generated() */
    GoblinInfo &operator=(GoblinInfo const &); /* compiler_generated() */
};
static_assert(sizeof(GoblinInfo) == 32, "Invalid GoblinInfo size");

class GoblinBase
{
public:
    __int32 m_id; // 0x0
    __int32 m_numVerts; // 0x4
    vector3 *m_verts; // 0x8
    vector3 *m_normals; // 0xC
    __int32 m_numFaces; // 0x10
    __int32 *m_faces; // 0x14
    float m_radius; // 0x18
    __int32 m_material; // 0x1C
    GoblinBase();
    ~GoblinBase();
};
static_assert(sizeof(GoblinBase) == 32, "Invalid GoblinBase size");

typedef std::vector<GoblinInfo *,std::allocator<GoblinInfo *> > GoblinInfoList;
typedef std::vector<GoblinBase *,std::allocator<GoblinBase *> > GoblinBaseList;
typedef std::vector<GoblinParent *,std::allocator<GoblinParent *> > GoblinParentList;
typedef std::map<int,MaterialInfo,std::less<int>,std::allocator<std::pair<int const ,MaterialInfo> > > MaterialInfoMap;

class GoblinParent
{
public:
    _inline ~GoblinParent();
    std::basic_string<char,std::char_traits<char>,std::allocator<char> > m_name; // 0x0
    std::vector<GoblinInfo *,std::allocator<GoblinInfo *> > m_children; // 0x18
    GoblinParent(GoblinParent const &); /* compiler_generated() */
    _inline GoblinParent(); /* compiler_generated() */
    GoblinParent &operator=(GoblinParent const &); /* compiler_generated() */
};
static_assert(sizeof(GoblinParent) == 36, "Invalid GoblinParent size");

class MaterialInfo
{
public:
    _inline MaterialInfo(MaterialInfo const &); /* compiler_generated() */
    _inline MaterialInfo();
    std::vector<GoblinInfo *,std::allocator<GoblinInfo *> > m_goblins; // 0x0
    __int32 m_numVertices; // 0xC
    __int32 m_numFaces; // 0x10
    _inline ~MaterialInfo(); /* compiler_generated() */
    _inline MaterialInfo &operator=(MaterialInfo const &); /* compiler_generated() */
};
static_assert(sizeof(MaterialInfo) == 20, "Invalid MaterialInfo size");

/* ---------- prototypes */

extern _inline vector3 min3(vector3 &v1, vector3 &v2);
extern _inline vector3 max3(vector3 &v1, vector3 &v2);
extern GoblinBase *findGoblinBase(std::vector<GoblinBase *,std::allocator<GoblinBase *> > &list, __int32 id);
extern __int32 handleGOBD(IFF *iff, IFFChunk *chunk, void *user0, void *user1);
extern GoblinParent *findParent(std::vector<GoblinParent *,std::allocator<GoblinParent *> > &parents, std::basic_string<char,std::char_traits<char>,std::allocator<char> > &name);
extern GoblinParent *newParent(std::vector<GoblinParent *,std::allocator<GoblinParent *> > &parents, std::basic_string<char,std::char_traits<char>,std::allocator<char> > &name);
extern void freeParents(std::vector<GoblinParent *,std::allocator<GoblinParent *> > &parents);
extern __int32 handleGOBS_old(IFF *iff, IFFChunk *chunk, void *user0, void *user1);
extern __int32 handleGOBS_new(IFF *iff, IFFChunk *chunk, void *user0, void *user1);

_static void buildGoblinMeshes(ParentMesh *pm, std::vector<GoblinParent *,std::allocator<GoblinParent *> > const &goblinParents);

/* ---------- globals */

/* ---------- private variables */

_static
{
    extern std::_Ignore ignore; // 0x10132AA4
    extern std::_Tuple_alloc_t _Tuple_alloc; // 0x10132AA5
    extern std::_Nil _Nil_obj; // 0x10132AA6
    extern std::vector<GoblinBase *,std::allocator<GoblinBase *> > s_goblinBase; // 0x10132AA8
}

/* ---------- public code */

_inline GoblinInfo::GoblinInfo() // 0x100594B0
{
    mangled_assert("??0GoblinInfo@@QAE@XZ");
    todo("implement");
}

_inline GoblinParent::~GoblinParent() // 0x10059B80
{
    mangled_assert("??1GoblinParent@@QAE@XZ");
    todo("implement");
}

_inline MaterialInfo::~MaterialInfo() // 0x10059C70
{
    mangled_assert("??1MaterialInfo@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline MaterialInfo &MaterialInfo::operator=(MaterialInfo const &) // 0x10059DE0
{
    mangled_assert("??4MaterialInfo@@QAEAAV0@ABV0@@Z");
    compiler_generated();
    todo("implement");
}

_inline MaterialInfo::MaterialInfo() // 0x100595E0
{
    mangled_assert("??0MaterialInfo@@QAE@XZ");
    todo("implement");
}

_inline GoblinInfo::Vertex::Vertex() // 0x10059610
{
    mangled_assert("??0Vertex@GoblinInfo@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline std::_Tree_buy<std::pair<int const ,GoblinGroup *>,std::allocator<std::pair<int const ,GoblinGroup *> > >::~_Tree_buy<std::pair<int const ,GoblinGroup *>,std::allocator<std::pair<int const ,GoblinGroup *> > >() // 0x10059690
{
    mangled_assert("??1?$_Tree_buy@U?$pair@$$CBHPAVGoblinGroup@@@std@@V?$allocator@U?$pair@$$CBHPAVGoblinGroup@@@std@@@2@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline std::_Tree_buy<std::pair<int const ,MaterialInfo>,std::allocator<std::pair<int const ,MaterialInfo> > >::~_Tree_buy<std::pair<int const ,MaterialInfo>,std::allocator<std::pair<int const ,MaterialInfo> > >() // 0x100596A0
{
    mangled_assert("??1?$_Tree_buy@U?$pair@$$CBHVMaterialInfo@@@std@@V?$allocator@U?$pair@$$CBHVMaterialInfo@@@std@@@2@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline std::_Tree_comp<0,std::_Tmap_traits<int,GoblinGroup *,std::less<int>,std::allocator<std::pair<int const ,GoblinGroup *> >,0> >::~_Tree_comp<0,std::_Tmap_traits<int,GoblinGroup *,std::less<int>,std::allocator<std::pair<int const ,GoblinGroup *> >,0> >() // 0x100596B0
{
    mangled_assert("??1?$_Tree_comp@$0A@V?$_Tmap_traits@HPAVGoblinGroup@@U?$less@H@std@@V?$allocator@U?$pair@$$CBHPAVGoblinGroup@@@std@@@3@$0A@@std@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline std::_Tree_comp<0,std::_Tmap_traits<int,MaterialInfo,std::less<int>,std::allocator<std::pair<int const ,MaterialInfo> >,0> >::~_Tree_comp<0,std::_Tmap_traits<int,MaterialInfo,std::less<int>,std::allocator<std::pair<int const ,MaterialInfo> >,0> >() // 0x100596C0
{
    mangled_assert("??1?$_Tree_comp@$0A@V?$_Tmap_traits@HVMaterialInfo@@U?$less@H@std@@V?$allocator@U?$pair@$$CBHVMaterialInfo@@@std@@@3@$0A@@std@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline std::map<int,GoblinGroup *,std::less<int>,std::allocator<std::pair<int const ,GoblinGroup *> > >::~map<int,GoblinGroup *,std::less<int>,std::allocator<std::pair<int const ,GoblinGroup *> > >() // 0x100596D0
{
    mangled_assert("??1?$map@HPAVGoblinGroup@@U?$less@H@std@@V?$allocator@U?$pair@$$CBHPAVGoblinGroup@@@std@@@3@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline std::map<int,MaterialInfo,std::less<int>,std::allocator<std::pair<int const ,MaterialInfo> > >::~map<int,MaterialInfo,std::less<int>,std::allocator<std::pair<int const ,MaterialInfo> > >() // 0x100596F0
{
    mangled_assert("??1?$map@HVMaterialInfo@@U?$less@H@std@@V?$allocator@U?$pair@$$CBHVMaterialInfo@@@std@@@3@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline std::pair<int const ,MaterialInfo>::~pair<int const ,MaterialInfo>() // 0x10059710
{
    mangled_assert("??1?$pair@$$CBHVMaterialInfo@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline std::pair<int,MaterialInfo>::~pair<int,MaterialInfo>() // 0x10059750
{
    mangled_assert("??1?$pair@HVMaterialInfo@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline vector3 min3(vector3 &v1, vector3 &v2) // 0x1005E160
{
    mangled_assert("?min3@@YG?AVvector3@@AAV1@0@Z");
    todo("implement");
}

_inline vector3 max3(vector3 &v1, vector3 &v2) // 0x1005DF00
{
    mangled_assert("?max3@@YG?AVvector3@@AAV1@0@Z");
    todo("implement");
}

GoblinBase::GoblinBase() // 0x10059440
{
    mangled_assert("??0GoblinBase@@QAE@XZ");
    todo("implement");
}

GoblinBase::~GoblinBase() // 0x100598B0
{
    mangled_assert("??1GoblinBase@@QAE@XZ");
    todo("implement");
}

_inline GoblinInfo::~GoblinInfo() // 0x10059990
{
    mangled_assert("??1GoblinInfo@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

GoblinBase *findGoblinBase(std::vector<GoblinBase *,std::allocator<GoblinBase *> > &list, __int32 id) // 0x1005DBA0
{
    mangled_assert("?findGoblinBase@@YGPAVGoblinBase@@AAV?$vector@PAVGoblinBase@@V?$allocator@PAVGoblinBase@@@std@@@std@@H@Z");
    todo("implement");
}

__int32 handleGOBD(IFF *iff, IFFChunk *chunk, void *user0, void *user1) // 0x1005DD50
{
    mangled_assert("?handleGOBD@@YGHPAVIFF@@PAVIFFChunk@@PAX2@Z");
    todo("implement");
}

GoblinParent *findParent(std::vector<GoblinParent *,std::allocator<GoblinParent *> > &parents, std::basic_string<char,std::char_traits<char>,std::allocator<char> > &name) // 0x1005DC30
{
    mangled_assert("?findParent@@YGPAVGoblinParent@@AAV?$vector@PAVGoblinParent@@V?$allocator@PAVGoblinParent@@@std@@@std@@AAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@3@@Z");
    todo("implement");
}

GoblinParent *newParent(std::vector<GoblinParent *,std::allocator<GoblinParent *> > &parents, std::basic_string<char,std::char_traits<char>,std::allocator<char> > &name) // 0x1005E220
{
    mangled_assert("?newParent@@YGPAVGoblinParent@@AAV?$vector@PAVGoblinParent@@V?$allocator@PAVGoblinParent@@@std@@@std@@AAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@3@@Z");
    todo("implement");
}

void freeParents(std::vector<GoblinParent *,std::allocator<GoblinParent *> > &parents) // 0x1005DCC0
{
    mangled_assert("?freeParents@@YGXAAV?$vector@PAVGoblinParent@@V?$allocator@PAVGoblinParent@@@std@@@std@@@Z");
    todo("implement");
}

__int32 handleGOBS_old(IFF *iff, IFFChunk *chunk, void *user0, void *user1) // 0x1005DE30
{
    mangled_assert("?handleGOBS_old@@YGHPAVIFF@@PAVIFFChunk@@PAX2@Z");
    todo("implement");
}

__int32 handleGOBS_new(IFF *iff, IFFChunk *chunk, void *user0, void *user1) // 0x1005DDC0
{
    mangled_assert("?handleGOBS_new@@YGHPAVIFF@@PAVIFFChunk@@PAX2@Z");
    todo("implement");
}

GoblinMesh::GoblinMesh() // 0x100594F0
{
    mangled_assert("??0GoblinMesh@@QAE@XZ");
    todo("implement");
}

_inline GoblinParent::GoblinParent() // 0x10059580
{
    mangled_assert("??0GoblinParent@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline MaterialInfo::MaterialInfo(MaterialInfo const &) // 0x100595B0
{
    mangled_assert("??0MaterialInfo@@QAE@ABV0@@Z");
    compiler_generated();
    todo("implement");
}

GoblinMesh::~GoblinMesh() // 0x10059A00
{
    mangled_assert("??1GoblinMesh@@UAE@XZ");
    todo("implement");
}

GoblinMesh *GoblinMesh::create() // 0x1005D2D0
{
    mangled_assert("?create@GoblinMesh@@SGPAV1@XZ");
    todo("implement");
}

void GoblinMesh::setBoundingSphere(vector3 const &, float) // 0x1005F330
{
    mangled_assert("?setBoundingSphere@GoblinMesh@@QAEXABVvector3@@M@Z");
    todo("implement");
}

void GoblinMesh::getBoundingSphere(float *, vector3 *) const // 0x1005DD10
{
    mangled_assert("?getBoundingSphere@GoblinMesh@@UBEXPAMPAVvector3@@@Z");
    todo("implement");
}

void GoblinMesh::setShaderList(std::vector<CompoundStateBlockInstance *,std::allocator<CompoundStateBlockInstance *> > *) // 0x1005F380
{
    mangled_assert("?setShaderList@GoblinMesh@@UAEXPAV?$vector@PAVCompoundStateBlockInstance@@V?$allocator@PAVCompoundStateBlockInstance@@@std@@@std@@@Z");
    todo("implement");
}

std::vector<CompoundStateBlockInstance *,std::allocator<CompoundStateBlockInstance *> > const &GoblinMesh::getShaderList() const // 0x1005DD40
{
    mangled_assert("?getShaderList@GoblinMesh@@UBEABV?$vector@PAVCompoundStateBlockInstance@@V?$allocator@PAVCompoundStateBlockInstance@@@std@@@std@@XZ");
    todo("implement");
}

void GoblinMesh::adjustDetail(float, Mesh::LockType) // 0x1005BE20
{
    mangled_assert("?adjustDetail@GoblinMesh@@UAEXMW4LockType@Mesh@@@Z");
    todo("implement");
}

void GoblinMesh::optimize() // 0x1005E290
{
    mangled_assert("?optimize@GoblinMesh@@UAEXXZ");
    todo("implement");
}

void GoblinMesh::createDisplayLists() // 0x1005D300
{
    mangled_assert("?createDisplayLists@GoblinMesh@@UAEXXZ");
    todo("implement");
}

GoblinGroup *GoblinMesh::findMaterial(__int32) // 0x1005DBE0
{
    mangled_assert("?findMaterial@GoblinMesh@@QAEPAVGoblinGroup@@H@Z");
    todo("implement");
}

GoblinGroup *GoblinMesh::newMaterial(__int32) // 0x1005E1C0
{
    mangled_assert("?newMaterial@GoblinMesh@@QAEPAVGoblinGroup@@H@Z");
    todo("implement");
}

void GoblinMesh::render(matrix4 const &, MeshInstance const *, Mesh::LockType, unsigned __int32 const, float const, float const) // 0x1005E600
{
    mangled_assert("?render@GoblinMesh@@UAEXABVmatrix4@@PBVMeshInstance@@W4LockType@Mesh@@IMM@Z");
    todo("implement");
}

/* ---------- private code */

_static void buildGoblinMeshes(ParentMesh *pm, std::vector<GoblinParent *,std::allocator<GoblinParent *> > const &goblinParents) // 0x1005C240
{
    mangled_assert("buildGoblinMeshes");
    todo("implement");
}
#endif
