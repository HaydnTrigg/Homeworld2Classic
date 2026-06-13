#if 0
/* ---------- headers */

#include "decomp.h"
#include <hash_map>
#include <boost\shared_ptr.hpp>
#include <xhash>
#include <boost\config.hpp>
#include <boost\config\user.hpp>
#include <xstring>
#include <boost\config\select_compiler_config.hpp>
#include <xmemory0>
#include <Objects\pch.h>
#include <boost\config\compiler\visualc.hpp>
#include <boost\config\select_stdlib_config.hpp>
#include <boost\config\stdlib\dinkumware.hpp>
#include <crtdefs.h>
#include <Objects\StateBlock\stateblocktypes.h>
#include <boost\config\select_platform_config.hpp>
#include <gl\r_defines.h>
#include <boost\config\platform\win32.hpp>
#include <gl\glext.h>
#include <Objects\Texture.h>
#include <Objects\TextureRegistry.h>
#include <Objects\StateBlock\StateVariableInstance.h>
#include <util\dictionary.h>
#include <boost\detail\workaround.hpp>
#include <util\utilexports.h>
#include <new>
#include <xstddef>
#include <tuple>
#include <type_traits>
#include <Objects\StateBlock\stateBlock.h>
#include <Mathlib\matrix4.h>
#include <bitset>
#include <xutility>
#include <Mathlib\vector3.h>
#include <xatomic0.h>
#include <utility>
#include <boost\config\suffix.hpp>
#include <iosfwd>
#include <vector>
#include <boost\assert.hpp>
#include <xmemory>
#include <boost\checked_delete.hpp>
#include <Mathlib\matrix3.h>
#include <math.h>
#include <platform\pathstring.h>
#include <list>
#include <profile\profile.h>
#include <iostream>
#include <boost\throw_exception.hpp>
#include <map>
#include <xtree>
#include <boost\detail\shared_count.hpp>
#include <boost\detail\lightweight_mutex.hpp>
#include <boost\detail\lwm_win32.hpp>
#include <assert.h>
#include <util\types.h>
#include <platform\osdef.h>
#include <memory>
#include <stdint.h>
#include <Mathlib\matvec.h>
#include <Mathlib\vector2.h>
#include <functional>
#include <xfunctional>
#include <Objects\MeshLoader.h>
#include <Objects\Core.h>
#include <Objects\Objects.h>
#include <gl\lotypes.h>
#include <debug\db.h>
#include <gl\types.h>
#include <util\colour.h>
#include <Mathlib\vector4.h>
#include <Mathlib\mathlibdll.h>
#include <Mathlib\fastmath.h>
#include <Objects\ParentMesh.h>
#include <Objects\Mesh.h>
#include <gl\r_types.h>
#include <Objects\Renderable.h>
#include <debug\ctassert.h>
#include <string>

/* ---------- constants */

/* ---------- definitions */

typedef void (*ML_TextureCallback_p)(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &, Texture *);
typedef std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > PathVector;

/* ---------- prototypes */

/* ---------- globals */

/* ---------- private variables */

_static
{
    extern std::_Ignore ignore; // 0x10132B8C
    extern std::_Tuple_alloc_t _Tuple_alloc; // 0x10132B8D
    extern std::_Nil _Nil_obj; // 0x10132B8E
    extern void (*tCallbackProc)(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &, Texture *); // 0x10132B88
}

/* ---------- public code */

_extern void _sub_10086510(IFF *, Mesh **, std::basic_string<char,std::char_traits<char>,std::allocator<char> > *);
void MeshLoader::addIFFParseHandlers(IFF *iff, Mesh **ppMesh, std::basic_string<char,std::char_traits<char>,std::allocator<char> > *errMsg) // 0x10086510
{
    mangled_assert("?addIFFParseHandlers@MeshLoader@@SGXPAVIFF@@PAPAVMesh@@PAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z");
    todo("implement");
    _sub_10086510(iff, ppMesh, errMsg);
}

_extern void _sub_10086530(void (*)(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &, Texture *));
void MeshLoader::setTextureCallback(void (*proc)(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &, Texture *)) // 0x10086530
{
    mangled_assert("?setTextureCallback@MeshLoader@@SGXP6GXABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVTexture@@@Z@Z");
    todo("implement");
    _sub_10086530(proc);
}

_extern void _sub_10086520(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &, Texture *);
void MeshLoader::callTextureCallback(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &name, Texture *tex) // 0x10086520
{
    mangled_assert("?callTextureCallback@MeshLoader@@SGXABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVTexture@@@Z");
    todo("implement");
    _sub_10086520(name, tex);
}

/* ---------- private code */
#endif
