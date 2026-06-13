#if 0
/* ---------- headers */

#include "decomp.h"
#include <boost\detail\lightweight_mutex.hpp>
#include <xhash>
#include <xlocale>
#include <boost\detail\lwm_win32.hpp>
#include <stdexcept>
#include <xstring>
#include <xmemory0>
#include <Objects\pch.h>
#include <securityappcontainer.h>
#include <limits>
#include <memory\memorylib.h>
#include <fibersapi.h>
#include <ymath.h>
#include <malloc.h>
#include <crtdefs.h>
#include <sal.h>
#include <gl\r_defines.h>
#include <concurrencysal.h>
#include <gl\glext.h>
#include <vadefs.h>
#include <realtimeapiset.h>
#include <winver.h>
#include <verrsrc.h>
#include <Objects\Constructor.h>
#include <ioapiset.h>
#include <namedpipeapi.h>
#include <immintrin.h>
#include <wmmintrin.h>
#include <new>
#include <memoryapi.h>
#include <nmmintrin.h>
#include <exception>
#include <smmintrin.h>
#include <xstddef>
#include <cstddef>
#include <consoleapi.h>
#include <tmmintrin.h>
#include <type_traits>
#include <stddef.h>
#include <yvals.h>
#include <xlocinfo>
#include <pmmintrin.h>
#include <xkeycheck.h>
#include <xlocinfo.h>
#include <emmintrin.h>
#include <use_ansi.h>
#include <wingdi.h>
#include <ctype.h>
#include <xmmintrin.h>
#include <mmintrin.h>
#include <pshpack4.h>
#include <Mathlib\matrix4.h>
#include <assist\typemagic.h>
#include <xutility>
#include <Mathlib\vector3.h>
#include <xatomic0.h>
#include <utility>
#include <winerror.h>
#include <vector>
#include <iosfwd>
#include <xmemory>
#include <crtdbg.h>
#include <ime_cmodes.h>
#include <share.h>
#include <util\ftoi.h>
#include <timezoneapi.h>
#include <interlockedapi.h>
#include <Mathlib\matrix3.h>
#include <compiler\compilerconfig.h>
#include <memory>
#include <cmath>
#include <stdint.h>
#include <math.h>
#include <Objects\VertexArray.h>
#include <xrefwrap>
#include <securitybaseapi.h>
#include <Objects\VertexArrayInternal.h>
#include <list>
#include <string.h>
#include <reason.h>
#include <wtime.inl>
#include <Objects\basicmesh.h>
#include <functional>
#include <boost\scoped_array.hpp>
#include <debug\ctmessage.h>
#include <xfunctional>
#include <winuser.h>
#include <Objects\VaryMesh.h>
#include <debugapi.h>
#include <fileapi.h>
#include <map>
#include <xtree>
#include <xdebug>
#include <platform\os.h>
#include <typeinfo>
#include <winnls.h>
#include <windows.h>
#include <Objects\Renderable.h>
#include <datetimeapi.h>
#include <winapifamily.h>
#include <stralign.h>
#include <threadpoollegacyapiset.h>
#include <sdkddkver.h>
#include <Objects\Geometry.h>
#include <excpt.h>
#include <Objects\Material.h>
#include <xfacet>
#include <poppack.h>
#include <memory.h>
#include <imm.h>
#include <debug\ctassert.h>
#include <profileapi.h>
#include <cassert>
#include <assert.h>
#include <synchapi.h>
#include <cstdio>
#include <cfloat>
#include <stdio.h>
#include <float.h>
#include <processthreadsapi.h>
#include <heapapi.h>
#include <utilapiset.h>
#include <algorithm>
#include <crtwrn.h>
#include <fileio\iff.h>
#include <util\types.h>
#include <boost\shared_ptr.hpp>
#include <pshpack8.h>
#include <boost\config.hpp>
#include <xtr1common>
#include <boost\config\user.hpp>
#include <stdarg.h>
#include <boost\config\select_compiler_config.hpp>
#include <windef.h>
#include <boost\config\compiler\visualc.hpp>
#include <tvout.h>
#include <bemapiset.h>
#include <minwindef.h>
#include <boost\config\select_stdlib_config.hpp>
#include <winnetwk.h>
#include <specstrings.h>
#include <boost\config\stdlib\dinkumware.hpp>
#include <wnnc.h>
#include <specstrings_strict.h>
#include <boost\config\select_platform_config.hpp>
#include <Objects\StateBlock\stateblocktypes.h>
#include <handleapi.h>
#include <specstrings_undef.h>
#include <boost\config\platform\win32.hpp>
#include <platform\osdef.h>
#include <driverspecs.h>
#include <sdv_driverspecs.h>
#include <ammintrin.h>
#include <eh.h>
#include <mm3dnow.h>
#include <threadpoolapiset.h>
#include <Objects\Texture.h>
#include <Objects\TextureRegistry.h>
#include <namespaceapi.h>
#include <ktmtypes.h>
#include <Objects\StateBlock\StateVariableInstance.h>
#include <boost\detail\workaround.hpp>
#include <util\dictionary.h>
#include <util\utilexports.h>
#include <Mathlib\matvec.h>
#include <Mathlib\vector2.h>
#include <winbase.h>
#include <pshpack1.h>
#include <apisetcconv.h>
#include <tuple>
#include <minwinbase.h>
#include <Objects\multimesh.h>
#include <Objects\StateBlock\stateBlock.h>
#include <Objects\Objects.h>
#include <wincon.h>
#include <bitset>
#include <Objects\Mesh.h>
#include <errhandlingapi.h>
#include <gl\lotypes.h>
#include <Objects\Core.h>
#include <debug\db.h>
#include <processenv.h>
#include <gl\types.h>
#include <guiddef.h>
#include <util\colour.h>
#include <boost\config\suffix.hpp>
#include <Mathlib\vector4.h>
#include <jobapi.h>
#include <boost\assert.hpp>
#include <Mathlib\mathlibdll.h>
#include <boost\checked_delete.hpp>
#include <Mathlib\fastmath.h>
#include <apiset.h>
#include <gl\r_types.h>
#include <systemtopologyapi.h>
#include <locale.h>
#include <wow64apiset.h>
#include <system_error>
#include <stdlib.h>
#include <platform\timer.h>
#include <cerrno>
#include <limits.h>
#include <processtopologyapi.h>
#include <winnt.h>
#include <platform\platformexports.h>
#include <errno.h>
#include <kernelspecs.h>
#include <cstring>
#include <pshpack2.h>
#include <basetsd.h>
#include <Objects\memtracker.h>
#include <intrin.h>
#include <cwchar>
#include <cstdlib>
#include <libloaderapi.h>
#include <fileio\bytestream.h>
#include <setjmp.h>
#include <wchar.h>
#include <string>
#include <sysinfoapi.h>
#include <fileio\fileioexports.h>
#include <profile\profile.h>
#include <iterator>
#include <swprintf.inl>
#include <assist\fixedstring.h>
#include <iostream>
#include <istream>
#include <assist\stlexstring.h>
#include <ostream>
#include <ios>
#include <boost\throw_exception.hpp>
#include <xlocnum>
#include <climits>
#include <xtgmath.h>
#include <streambuf>
#include <winreg.h>
#include <boost\detail\shared_count.hpp>
#include <hash_map>
#include <xiosbase>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- private variables */

_static
{
    extern std::piecewise_construct_t piecewise_construct; // 0x10132B9A
    extern std::allocator_arg_t allocator_arg; // 0x10132B99
    extern std::_Nil _Nil_obj; // 0x10132B9B
    extern std::_Ignore ignore; // 0x10132B98
    extern std::_Tuple_alloc_t _Tuple_alloc; // 0x10132B97
}

/* ---------- public code */

_extern MultiMesh *_sub_10087340();
MultiMesh *MultiMesh::create() // 0x10087340
{
    mangled_assert("?create@MultiMesh@@SGPAV1@XZ");
    todo("implement");
    MultiMesh * __result = _sub_10087340();
    return __result;
}

_extern _sub_10087040(MultiMesh *const);
MultiMesh::MultiMesh() // 0x10087040
{
    mangled_assert("??0MultiMesh@@QAE@XZ");
    todo("implement");
    _sub_10087040(this);
}

_extern void _sub_100870A0(MultiMesh *const);
MultiMesh::~MultiMesh() // 0x100870A0
{
    mangled_assert("??1MultiMesh@@UAE@XZ");
    todo("implement");
    _sub_100870A0(this);
}

_extern void _sub_10087630(MultiMesh *const, MeshInstance const *, Mesh::LockType, unsigned __int32 const, float const, vector4 const &);
void MultiMesh::render(MeshInstance const *, Mesh::LockType, unsigned __int32 const, float const, vector4 const &) // 0x10087630
{
    mangled_assert("?render@MultiMesh@@UAEXPBVMeshInstance@@W4LockType@Mesh@@IMABVvector4@@@Z");
    todo("implement");
    _sub_10087630(this, arg, arg, arg, arg, arg);
}

_extern void _sub_10087350(MultiMesh *const);
void MultiMesh::createDisplayLists() // 0x10087350
{
    mangled_assert("?createDisplayLists@MultiMesh@@UAEXXZ");
    todo("implement");
    _sub_10087350(this);
}

_extern unsigned __int32 _sub_10087740(MultiMesh *const, unsigned __int32 const);
unsigned __int32 MultiMesh::setWorkingLOD(unsigned __int32 const) // 0x10087740
{
    mangled_assert("?setWorkingLOD@MultiMesh@@QAEII@Z");
    todo("implement");
    unsigned __int32 __result = _sub_10087740(this, arg);
    return __result;
}

_extern void _sub_10087380(MultiMesh *const, unsigned __int32 const);
void MultiMesh::createLOD(unsigned __int32 const) // 0x10087380
{
    mangled_assert("?createLOD@MultiMesh@@QAEXI@Z");
    todo("implement");
    _sub_10087380(this, arg);
}

_extern void _sub_10087600(MultiMesh *const);
void MultiMesh::optimize() // 0x10087600
{
    mangled_assert("?optimize@MultiMesh@@UAEXXZ");
    todo("implement");
    _sub_10087600(this);
}

_extern void _sub_10087700(MultiMesh *const, StateBlock_Type, std::vector<CompoundStateBlockInstance *,std::allocator<CompoundStateBlockInstance *> > *);
void MultiMesh::setShaderList(StateBlock_Type, std::vector<CompoundStateBlockInstance *,std::allocator<CompoundStateBlockInstance *> > *) // 0x10087700
{
    mangled_assert("?setShaderList@MultiMesh@@UAEXW4StateBlock_Type@@PAV?$vector@PAVCompoundStateBlockInstance@@V?$allocator@PAVCompoundStateBlockInstance@@@std@@@std@@@Z");
    todo("implement");
    _sub_10087700(this, arg, arg);
}

_extern __int32 _sub_10087510(MultiMesh *const, IFF *, IFFChunk *, void *, void *);
__int32 MultiMesh::load(IFF *, IFFChunk *, void *, void *) // 0x10087510
{
    mangled_assert("?load@MultiMesh@@QAEHPAVIFF@@PAVIFFChunk@@PAX2@Z");
    todo("implement");
    __int32 __result = _sub_10087510(this, arg, arg, arg, arg);
    return __result;
}

_extern __int32 _sub_10087430(IFF *, IFFChunk *, void *, void *);
__int32 MultiMesh::handleBMSH(IFF *iff, IFFChunk *chunk, void *user0, void *user1) // 0x10087430
{
    mangled_assert("?handleBMSH@MultiMesh@@CGHPAVIFF@@PAVIFFChunk@@PAX2@Z");
    todo("implement");
    __int32 __result = _sub_10087430(iff, chunk, user0, user1);
    return __result;
}

_extern __int32 _sub_10087470(MultiMesh *const, IFF *, IFFChunk *, void *, void *);
__int32 MultiMesh::load1400(IFF *, IFFChunk *, void *, void *) // 0x10087470
{
    mangled_assert("?load1400@MultiMesh@@AAEHPAVIFF@@PAVIFFChunk@@PAX2@Z");
    todo("implement");
    __int32 __result = _sub_10087470(this, arg, arg, arg, arg);
    return __result;
}

/* ---------- private code */
#endif
