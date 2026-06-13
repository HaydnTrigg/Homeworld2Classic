#if 0
/* ---------- headers */

#include "decomp.h"
#include <hash_map>
#include <xhash>
#include <xstring>
#include <xmemory0>
#include <Objects\pch.h>
#include <crtdefs.h>
#include <memory>
#include <stdint.h>
#include <new>
#include <functional>
#include <xfunctional>
#include <xstddef>
#include <type_traits>
#include <Objects\Geometry.h>
#include <Mathlib\matrix4.h>
#include <Objects\Mesh.h>
#include <Objects\Material.h>
#include <Objects\Renderable.h>
#include <Mathlib\vector3.h>
#include <Objects\CompiledText.h>
#include <xutility>
#include <xatomic0.h>
#include <utility>
#include <iosfwd>
#include <vector>
#include <xmemory>
#include <Mathlib\matrix3.h>
#include <math.h>
#include <debug\ctassert.h>
#include <list>
#include <Objects\FontSystem.h>
#include <Objects\Texture.h>
#include <Objects\BitmapFont.h>
#include <Objects\Core.h>
#include <gl\types.h>
#include <map>
#include <gl\lotypes.h>
#include <Objects\hw2ddraw.h>
#include <xtree>
#include <boost\shared_ptr.hpp>
#include <boost\config.hpp>
#include <boost\config\user.hpp>
#include <boost\config\select_compiler_config.hpp>
#include <boost\config\compiler\visualc.hpp>
#include <Objects\TextureRegistry.h>
#include <boost\config\select_stdlib_config.hpp>
#include <boost\config\stdlib\dinkumware.hpp>
#include <Objects\StateBlock\stateblocktypes.h>
#include <boost\config\select_platform_config.hpp>
#include <boost\config\platform\win32.hpp>
#include <Objects\StateBlock\StateVariableInstance.h>
#include <assert.h>
#include <util\dictionary.h>
#include <boost\detail\workaround.hpp>
#include <util\utilexports.h>
#include <Objects\StateBlock\stateBlock.h>
#include <bitset>
#include <tuple>
#include <util\types.h>
#include <boost\config\suffix.hpp>
#include <boost\assert.hpp>
#include <boost\checked_delete.hpp>
#include <platform\osdef.h>
#include <Mathlib\matvec.h>
#include <Mathlib\vector2.h>
#include <profile\profile.h>
#include <iostream>
#include <Objects\Objects.h>
#include <boost\throw_exception.hpp>
#include <Objects\Image.h>
#include <gl\r_defines.h>
#include <gl\r_types.h>
#include <gl\glext.h>
#include <debug\db.h>
#include <util\colour.h>
#include <boost\detail\shared_count.hpp>
#include <Mathlib\vector4.h>
#include <boost\detail\lightweight_mutex.hpp>
#include <Mathlib\mathlibdll.h>
#include <boost\detail\lwm_win32.hpp>
#include <Mathlib\fastmath.h>
#include <Objects\ClipRect.h>
#include <string>

/* ---------- constants */

/* ---------- definitions */

typedef long long timerVal;

/* ---------- prototypes */

/* ---------- globals */

extern rndTable *Core::m_gl; // 0x101121E4
extern __int32 Core::m_numTextureUnits; // 0x101121F4
extern TextureFilter Core::m_minFilter; // 0x101121E8
extern TextureFilter Core::m_magFilter; // 0x101121EC
extern unsigned __int32 Core::m_anisotropy; // 0x101121F0

/* ---------- private variables */

_static
{
    extern std::_Nil _Nil_obj; // 0x101121FA
    extern std::_Ignore ignore; // 0x101121F8
    extern std::_Tuple_alloc_t _Tuple_alloc; // 0x101121F9
}

/* ---------- public code */

_extern _sub_100329D0(Core *const);
Core::Core() // 0x100329D0
{
    mangled_assert("??0Core@@QAE@XZ");
    todo("implement");
    _sub_100329D0(this);
}

_extern void _sub_100329E0(Core *const);
Core::~Core() // 0x100329E0
{
    mangled_assert("??1Core@@UAE@XZ");
    todo("implement");
    _sub_100329E0(this);
}

_extern bool _sub_10032A30(Core *const);
bool Core::release() // 0x10032A30
{
    mangled_assert("?release@Core@@UAE_NXZ");
    todo("implement");
    bool __result = _sub_10032A30(this);
    return __result;
}

_extern void _sub_10032A90(rndTable *);
void Core::setTable(rndTable *_gl) // 0x10032A90
{
    mangled_assert("?setTable@Core@@SGXPAUrndTable@@@Z");
    todo("implement");
    _sub_10032A90(_gl);
}

_extern rndTable *_sub_10032A20(Core const *const);
rndTable *Core::getTable() const // 0x10032A20
{
    mangled_assert("?getTable@Core@@QBEPAUrndTable@@XZ");
    todo("implement");
    rndTable * __result = _sub_10032A20(this);
    return __result;
}

_extern bool _sub_10032AF0();
bool Core::startTextureRegistry() // 0x10032AF0
{
    mangled_assert("?startTextureRegistry@Core@@SG_NXZ");
    todo("implement");
    bool __result = _sub_10032AF0();
    return __result;
}

_extern bool _sub_10032AE0();
bool Core::shutdownTextureRegistry() // 0x10032AE0
{
    mangled_assert("?shutdownTextureRegistry@Core@@SG_NXZ");
    todo("implement");
    bool __result = _sub_10032AE0();
    return __result;
}

_extern void _sub_10032A40(unsigned __int32);
void Core::setDefaultAnisotropy(unsigned __int32 level) // 0x10032A40
{
    mangled_assert("?setDefaultAnisotropy@Core@@SGXI@Z");
    todo("implement");
    _sub_10032A40(level);
}

_extern void _sub_10032A70(TextureFilter, TextureFilter);
void Core::setDefaultTextureFilter(TextureFilter min, TextureFilter mag) // 0x10032A70
{
    mangled_assert("?setDefaultTextureFilter@Core@@SGXW4TextureFilter@@0@Z");
    todo("implement");
    _sub_10032A70(min, mag);
}

_extern void _sub_10032A60(TextureFilter);
void Core::setDefaultMinFilter(TextureFilter min) // 0x10032A60
{
    mangled_assert("?setDefaultMinFilter@Core@@SGXW4TextureFilter@@@Z");
    todo("implement");
    _sub_10032A60(min);
}

_extern void _sub_10032A50(TextureFilter);
void Core::setDefaultMagFilter(TextureFilter mag) // 0x10032A50
{
    mangled_assert("?setDefaultMagFilter@Core@@SGXW4TextureFilter@@@Z");
    todo("implement");
    _sub_10032A50(mag);
}

_extern TextureFilter _sub_10032A10();
TextureFilter Core::getMinFilter() // 0x10032A10
{
    mangled_assert("?getMinFilter@Core@@SG?AW4TextureFilter@@XZ");
    todo("implement");
    TextureFilter __result = _sub_10032A10();
    return __result;
}

_extern TextureFilter _sub_10032A00();
TextureFilter Core::getMagFilter() // 0x10032A00
{
    mangled_assert("?getMagFilter@Core@@SG?AW4TextureFilter@@XZ");
    todo("implement");
    TextureFilter __result = _sub_10032A00();
    return __result;
}

_extern unsigned __int32 _sub_100329F0();
unsigned __int32 Core::getAnisotropy() // 0x100329F0
{
    mangled_assert("?getAnisotropy@Core@@SGIXZ");
    todo("implement");
    unsigned __int32 __result = _sub_100329F0();
    return __result;
}

_extern void _sub_10032B00();
void Core::startup() // 0x10032B00
{
    mangled_assert("?startup@Core@@SGXXZ");
    todo("implement");
    _sub_10032B00();
}

_extern void _sub_10032AB0();
void Core::shutdown() // 0x10032AB0
{
    mangled_assert("?shutdown@Core@@SGXXZ");
    todo("implement");
    _sub_10032AB0();
}

/* ---------- private code */
#endif
