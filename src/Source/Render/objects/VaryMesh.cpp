#if 0
/* ---------- headers */

#include "decomp.h"
#include <ktmtypes.h>
#include <hash_map>
#include <xhash>
#include <xstring>
#include <winbase.h>
#include <xmemory0>
#include <Objects\Material.h>
#include <Objects\pch.h>
#include <apisetcconv.h>
#include <pshpack1.h>
#include <Mathlib\matrix3.h>
#include <minwinbase.h>
#include <memory>
#include <crtdefs.h>
#include <stdint.h>
#include <util\ftoi.h>
#include <wincon.h>
#include <errhandlingapi.h>
#include <processenv.h>
#include <functional>
#include <xfunctional>
#include <guiddef.h>
#include <jobapi.h>
#include <apiset.h>
#include <boost\scoped_array.hpp>
#include <systemtopologyapi.h>
#include <wow64apiset.h>
#include <new>
#include <xstddef>
#include <type_traits>
#include <processtopologyapi.h>
#include <Objects\Mesh.h>
#include <platform\timer.h>
#include <Objects\Renderable.h>
#include <platform\platformexports.h>
#include <winnt.h>
#include <pshpack2.h>
#include <kernelspecs.h>
#include <libloaderapi.h>
#include <basetsd.h>
#include <sysinfoapi.h>
#include <xutility>
#include <xatomic0.h>
#include <utility>
#include <iosfwd>
#include <vector>
#include <xmemory>
#include <debug\ctassert.h>
#include <winreg.h>
#include <math.h>
#include <securityappcontainer.h>
#include <fibersapi.h>
#include <list>
#include <boost\shared_ptr.hpp>
#include <boost\config.hpp>
#include <boost\config\user.hpp>
#include <realtimeapiset.h>
#include <boost\config\select_compiler_config.hpp>
#include <boost\config\compiler\visualc.hpp>
#include <winver.h>
#include <boost\config\select_stdlib_config.hpp>
#include <verrsrc.h>
#include <boost\config\stdlib\dinkumware.hpp>
#include <map>
#include <Objects\StateBlock\stateblocktypes.h>
#include <boost\config\select_platform_config.hpp>
#include <xtree>
#include <platform\osdef.h>
#include <boost\config\platform\win32.hpp>
#include <namedpipeapi.h>
#include <ioapiset.h>
#include <memoryapi.h>
#include <Objects\Texture.h>
#include <consoleapi.h>
#include <Objects\TextureRegistry.h>
#include <wingdi.h>
#include <Objects\StateBlock\StateVariableInstance.h>
#include <Objects\VaryMesh.h>
#include <util\dictionary.h>
#include <boost\detail\workaround.hpp>
#include <Objects\VertexArray.h>
#include <pshpack4.h>
#include <Mathlib\matvec.h>
#include <util\utilexports.h>
#include <Objects\VertexArrayInternal.h>
#include <Mathlib\vector2.h>
#include <winerror.h>
#include <tuple>
#include <ime_cmodes.h>
#include <Objects\StateBlock\stateBlock.h>
#include <assert.h>
#include <Objects\Geometry.h>
#include <bitset>
#include <Objects\Core.h>
#include <gl\lotypes.h>
#include <gl\types.h>
#include <interlockedapi.h>
#include <timezoneapi.h>
#include <util\colour.h>
#include <Mathlib\vector4.h>
#include <boost\config\suffix.hpp>
#include <util\types.h>
#include <Mathlib\mathlibdll.h>
#include <boost\assert.hpp>
#include <Mathlib\fastmath.h>
#include <boost\checked_delete.hpp>
#include <securitybaseapi.h>
#include <reason.h>
#include <gl\r_types.h>
#include <winuser.h>
#include <debugapi.h>
#include <fileapi.h>
#include <profile\profile.h>
#include <iostream>
#include <winnls.h>
#include <platform\os.h>
#include <datetimeapi.h>
#include <boost\throw_exception.hpp>
#include <windows.h>
#include <threadpoollegacyapiset.h>
#include <stralign.h>
#include <winapifamily.h>
#include <sdkddkver.h>
#include <boost\detail\shared_count.hpp>
#include <excpt.h>
#include <poppack.h>
#include <boost\detail\lightweight_mutex.hpp>
#include <boost\detail\lwm_win32.hpp>
#include <imm.h>
#include <Objects\Constructor.h>
#include <Objects\Objects.h>
#include <profileapi.h>
#include <debug\db.h>
#include <synchapi.h>
#include <gl\r_defines.h>
#include <gl\glext.h>
#include <utilapiset.h>
#include <heapapi.h>
#include <processthreadsapi.h>
#include <pshpack8.h>
#include <stdarg.h>
#include <bemapiset.h>
#include <tvout.h>
#include <windef.h>
#include <winnetwk.h>
#include <minwindef.h>
#include <wnnc.h>
#include <specstrings.h>
#include <handleapi.h>
#include <string>
#include <specstrings_strict.h>
#include <specstrings_undef.h>
#include <driverspecs.h>
#include <Mathlib\matrix4.h>
#include <sdv_driverspecs.h>
#include <threadpoolapiset.h>
#include <Mathlib\vector3.h>
#include <namespaceapi.h>

/* ---------- constants */

/* ---------- definitions */

typedef std::vector<Fixup,std::allocator<Fixup> > FixupList;
typedef std::vector<Collapse,std::allocator<Collapse> > CollapseList;
typedef std::vector<VaryMesh::Wedge,std::allocator<VaryMesh::Wedge> > WedgeList;
typedef std::vector<VaryMesh::Face,std::allocator<VaryMesh::Face> > FaceList;
typedef stdext::hash_map<int,VaryMesh::CommandStruct,stdext::hash_compare<int,std::less<int> >,std::allocator<std::pair<int const ,VaryMesh::CommandStruct> > > CommandCache;
typedef std::vector<int,std::allocator<int> > IntVec;
typedef std::vector<int *,std::allocator<int *> > MatLUT;
typedef std::_Vector_iterator<std::_Vector_val<std::_Simple_types<VaryMesh::Wedge> > > WedgeListI;
typedef std::_Vector_iterator<std::_Vector_val<std::_Simple_types<VaryMesh::Face> > > FaceListI;
typedef std::_List_iterator<std::_List_val<std::_List_simple_types<std::pair<int const ,VaryMesh::CommandStruct> > > > CommandCacheI;
typedef std::_Vector_iterator<std::_Vector_val<std::_Simple_types<int *> > > MatLUTI;

/* ---------- prototypes */

extern void _tri(__int32 nMat, __int32 nFace, __int32 *clist, __int32 **matLUT, __int32 *matSort, __int32 *ibase, __int32 *_minwedge, __int32 *_maxwedge);

/* ---------- globals */

/* ---------- private variables */

_static
{
    extern std::_Ignore ignore; // 0x10132D24
    extern std::_Tuple_alloc_t _Tuple_alloc; // 0x10132D25
    extern std::_Nil _Nil_obj; // 0x10132D26
    extern std::vector<vector2,std::allocator<vector2> > _celUV; // 0x10132D28
    extern float const default_LevelsOfDetail; // 0x100E5AA0
    extern float const default_InvLevelsOfDetail; // 0x100E5AA4
    extern float const minLevelsOfDetail; // 0x100E5AA8
    extern float const maxLevelsOfDetail; // 0x100E5AAC
    extern __int32 _next[3]; // 0x1010DAEC
    extern __int32 *stripverts; // 0x10132D34
    extern __int32 *striptris; // 0x10132D38
    extern __int32 _stripverts[3][16384]; // 0x10132D40
    extern __int32 _striptris[3][16384]; // 0x10162D40
    extern __int32 stripcount; // 0x10132D3C
    extern __int32 *bestverts; // 0x10192D40
    extern __int32 *besttris; // 0x10192D44
    extern __int32 _flags[16384]; // 0x10192D48
    extern unsigned __int32 _time; // 0x10132D20
}

/* ---------- public code */

_extern _sub_100A6E60(Collapse *const);
_inline Collapse::Collapse() // 0x100A6E60
{
    mangled_assert("??0Collapse@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_100A6E60(this);
}

_extern VaryMesh *_sub_100A8560();
VaryMesh *VaryMesh::create() // 0x100A8560
{
    mangled_assert("?create@VaryMesh@@SGPAV1@XZ");
    todo("implement");
    VaryMesh * __result = _sub_100A8560();
    return __result;
}

_extern _sub_100A6E80(VaryMesh *const);
VaryMesh::VaryMesh() // 0x100A6E80
{
    mangled_assert("??0VaryMesh@@QAE@XZ");
    todo("implement");
    _sub_100A6E80(this);
}

_extern _sub_100A6FD0(VaryMesh::Wedge *const);
_inline VaryMesh::Wedge::Wedge() // 0x100A6FD0
{
    mangled_assert("??0Wedge@VaryMesh@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_100A6FD0(this);
}

_extern void _sub_100A7020(VaryMesh *const);
VaryMesh::~VaryMesh() // 0x100A7020
{
    mangled_assert("??1VaryMesh@@UAE@XZ");
    todo("implement");
    _sub_100A7020(this);
}

_extern __int32 _sub_100A8920(VaryMesh const *const);
__int32 VaryMesh::getCacheSize() const // 0x100A8920
{
    mangled_assert("?getCacheSize@VaryMesh@@QBEHXZ");
    todo("implement");
    __int32 __result = _sub_100A8920(this);
    return __result;
}

_extern void _sub_100AA620(VaryMesh *const, float);
void VaryMesh::setLevelsOfDetail(float) // 0x100AA620
{
    mangled_assert("?setLevelsOfDetail@VaryMesh@@QAEXM@Z");
    todo("implement");
    _sub_100AA620(this, arg);
}

_extern void _sub_100AA670(VaryMesh *const, __int32);
void VaryMesh::setNumCachedLists(__int32) // 0x100AA670
{
    mangled_assert("?setNumCachedLists@VaryMesh@@QAEXH@Z");
    todo("implement");
    _sub_100AA670(this, arg);
}

_extern void _sub_100A81C0(VaryMesh *const, __int32, __int32, __int32);
void VaryMesh::alloc(__int32, __int32, __int32) // 0x100A81C0
{
    mangled_assert("?alloc@VaryMesh@@QAEXHHH@Z");
    todo("implement");
    _sub_100A81C0(this, arg, arg, arg);
}

_extern VaryMesh::Wedge *_sub_100A8970(VaryMesh *const, __int32);
VaryMesh::Wedge *VaryMesh::getWedge(__int32) // 0x100A8970
{
    mangled_assert("?getWedge@VaryMesh@@QAEPAUWedge@1@H@Z");
    todo("implement");
    VaryMesh::Wedge * __result = _sub_100A8970(this, arg);
    return __result;
}

_extern VaryMesh::Face *_sub_100A8950(VaryMesh *const, __int32);
VaryMesh::Face *VaryMesh::getFace(__int32) // 0x100A8950
{
    mangled_assert("?getFace@VaryMesh@@QAEPAUFace@1@H@Z");
    todo("implement");
    VaryMesh::Face * __result = _sub_100A8950(this, arg);
    return __result;
}

_extern Collapse *_sub_100A8940(VaryMesh *const, __int32);
Collapse *VaryMesh::getCollapse(__int32) // 0x100A8940
{
    mangled_assert("?getCollapse@VaryMesh@@QAEPAVCollapse@@H@Z");
    todo("implement");
    Collapse * __result = _sub_100A8940(this, arg);
    return __result;
}

_extern void _sub_100A9C50(VaryMesh *const, __int32);
void VaryMesh::removeDetail(__int32) // 0x100A9C50
{
    mangled_assert("?removeDetail@VaryMesh@@AAEXH@Z");
    todo("implement");
    _sub_100A9C50(this, arg);
}

_extern void _sub_100A7E00(VaryMesh *const, __int32);
void VaryMesh::addDetail(__int32) // 0x100A7E00
{
    mangled_assert("?addDetail@VaryMesh@@AAEXH@Z");
    todo("implement");
    _sub_100A7E00(this, arg);
}

_extern void _sub_100A82E0(VaryMesh *const, float *, vector3 *);
void VaryMesh::computeBoundingSphere(float *, vector3 *) // 0x100A82E0
{
    mangled_assert("?computeBoundingSphere@VaryMesh@@AAEXPAMPAVvector3@@@Z");
    todo("implement");
    _sub_100A82E0(this, arg, arg);
}

_extern void _sub_100A88E0(VaryMesh const *const, float *, vector3 *);
void VaryMesh::getBoundingSphere(float *, vector3 *) const // 0x100A88E0
{
    mangled_assert("?getBoundingSphere@VaryMesh@@UBEXPAMPAVvector3@@@Z");
    todo("implement");
    _sub_100A88E0(this, arg, arg);
}

_extern void _sub_100A8570(VaryMesh *const);
void VaryMesh::createDisplayLists() // 0x100A8570
{
    mangled_assert("?createDisplayLists@VaryMesh@@UAEXXZ");
    todo("implement");
    _sub_100A8570(this);
}

_extern void _sub_100A95A0(VaryMesh *const);
void VaryMesh::optimize() // 0x100A95A0
{
    mangled_assert("?optimize@VaryMesh@@UAEXXZ");
    todo("implement");
    _sub_100A95A0(this);
}

_extern void _sub_100A8880(VaryMesh *const);
void VaryMesh::flushCache() // 0x100A8880
{
    mangled_assert("?flushCache@VaryMesh@@AAEXXZ");
    todo("implement");
    _sub_100A8880(this);
}

_extern void _sub_100A8290(VaryMesh *const);
void VaryMesh::clearMatLUT() // 0x100A8290
{
    mangled_assert("?clearMatLUT@VaryMesh@@AAEXXZ");
    todo("implement");
    _sub_100A8290(this);
}

_extern void _sub_100A7CD0(__int32, __int32, __int32 *, __int32 **, __int32 *, __int32 *, __int32 *, __int32 *);
void _tri(__int32 nMat, __int32 nFace, __int32 *clist, __int32 **matLUT, __int32 *matSort, __int32 *ibase, __int32 *_minwedge, __int32 *_maxwedge) // 0x100A7CD0
{
    mangled_assert("?_tri@@YGXHHPAHPAPAH0000@Z");
    todo("implement");
    _sub_100A7CD0(nMat, nFace, clist, matLUT, matSort, ibase, _minwedge, _maxwedge);
}

_extern __int32 *_sub_100AAF50(VaryMesh *const);
__int32 *VaryMesh::tri() // 0x100AAF50
{
    mangled_assert("?tri@VaryMesh@@AAEPAHXZ");
    todo("implement");
    __int32 * __result = _sub_100AAF50(this);
    return __result;
}

_extern __int32 _sub_100AAE00(VaryMesh *const, __int32, __int32);
__int32 VaryMesh::stripLength(__int32, __int32) // 0x100AAE00
{
    mangled_assert("?stripLength@VaryMesh@@AAEHHH@Z");
    todo("implement");
    __int32 __result = _sub_100AAE00(this, arg, arg);
    return __result;
}

_extern __int32 *_sub_100AA6D0(VaryMesh *const);
__int32 *VaryMesh::strip() // 0x100AA6D0
{
    mangled_assert("?strip@VaryMesh@@AAEPAHXZ");
    todo("implement");
    __int32 * __result = _sub_100AA6D0(this);
    return __result;
}

_extern __int32 *_sub_100A8A40(VaryMesh *const, __int32 *);
__int32 *VaryMesh::noStrip(__int32 *) // 0x100A8A40
{
    mangled_assert("?noStrip@VaryMesh@@AAEPAHPAH@Z");
    todo("implement");
    __int32 * __result = _sub_100A8A40(this, arg);
    return __result;
}

_extern void _sub_100A7ED0(VaryMesh *const, float, Mesh::LockType);
void VaryMesh::adjustDetail(float, Mesh::LockType) // 0x100A7ED0
{
    mangled_assert("?adjustDetail@VaryMesh@@UAEXMW4LockType@Mesh@@@Z");
    todo("implement");
    _sub_100A7ED0(this, arg, arg);
}

_extern void _sub_100A9D20(VaryMesh *const, MeshInstance const *, Mesh::LockType, unsigned __int32 const, float const, float const);
void VaryMesh::render(MeshInstance const *, Mesh::LockType, unsigned __int32 const, float const, float const) // 0x100A9D20
{
    mangled_assert("?render@VaryMesh@@UAEXPBVMeshInstance@@W4LockType@Mesh@@IMM@Z");
    todo("implement");
    _sub_100A9D20(this, arg, arg, arg, arg, arg);
}

_extern void _sub_100AA2F0(VaryMesh *const);
void VaryMesh::renderCelShaded() // 0x100AA2F0
{
    mangled_assert("?renderCelShaded@VaryMesh@@AAEXXZ");
    todo("implement");
    _sub_100AA2F0(this);
}

_extern std::vector<CompoundStateBlockInstance *,std::allocator<CompoundStateBlockInstance *> > const &_sub_100A8960(VaryMesh const *const, StateBlock_Type);
std::vector<CompoundStateBlockInstance *,std::allocator<CompoundStateBlockInstance *> > const &VaryMesh::getShaderList(StateBlock_Type) const // 0x100A8960
{
    mangled_assert("?getShaderList@VaryMesh@@UBEABV?$vector@PAVCompoundStateBlockInstance@@V?$allocator@PAVCompoundStateBlockInstance@@@std@@@std@@W4StateBlock_Type@@@Z");
    todo("implement");
    std::vector<CompoundStateBlockInstance *,std::allocator<CompoundStateBlockInstance *> > const & __result = _sub_100A8960(this, arg);
    return __result;
}

/* ---------- private code */
#endif
