#if 0
/* ---------- headers */

#include "decomp.h"
#include <hash_map>
#include <xhash>
#include <xstring>
#include <xmemory0>
#include <Objects\pch.h>
#include <platform\osdef.h>
#include <Mathlib\matvec.h>
#include <Mathlib\vector2.h>
#include <new>
#include <xstddef>
#include <type_traits>
#include <Objects\Texture.h>
#include <Objects\Core.h>
#include <gl\lotypes.h>
#include <gl\types.h>
#include <util\colour.h>
#include <xutility>
#include <Mathlib\vector4.h>
#include <utility>
#include <Mathlib\mathlibdll.h>
#include <vector>
#include <iosfwd>
#include <Mathlib\fastmath.h>
#include <xmemory>
#include <gl\r_types.h>
#include <math.h>
#include <list>
#include <gl\r_defines.h>
#include <gl\glext.h>
#include <util\types.h>
#include <Mathlib\matrix4.h>
#include <Mathlib\vector3.h>
#include <Mathlib\matrix3.h>
#include <Objects\Constructor.h>
#include <Objects\Objects.h>
#include <Objects\Layer.h>
#include <Objects\TextureRegistry.h>
#include <string>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- private variables */

_static
{
    extern std::_Nil _Nil_obj; // 0x10132ADD
}

/* ---------- public code */

_extern Layer *_sub_100644C0();
Layer *Layer::create() // 0x100644C0
{
    mangled_assert("?create@Layer@@SGPAV1@XZ");
    todo("implement");
    Layer * __result = _sub_100644C0();
    return __result;
}

_extern _sub_100643B0(Layer *const);
Layer::Layer() // 0x100643B0
{
    mangled_assert("??0Layer@@QAE@XZ");
    todo("implement");
    _sub_100643B0(this);
}

_extern void _sub_100643D0(Layer *const);
Layer::~Layer() // 0x100643D0
{
    mangled_assert("??1Layer@@UAE@XZ");
    todo("implement");
    _sub_100643D0(this);
}

_extern void _sub_100644A0(Layer *const);
void Layer::clear() // 0x100644A0
{
    mangled_assert("?clear@Layer@@QAEXXZ");
    todo("implement");
    _sub_100644A0(this);
}

_extern void _sub_100644F0(Layer *const, Texture *, bool);
void Layer::setTexture(Texture *, bool) // 0x100644F0
{
    mangled_assert("?setTexture@Layer@@QAEXPAVTexture@@_N@Z");
    todo("implement");
    _sub_100644F0(this, arg, arg);
}

_extern Texture *_sub_100644D0(Layer const *const);
Texture *Layer::getTexture() const // 0x100644D0
{
    mangled_assert("?getTexture@Layer@@QBEPAVTexture@@XZ");
    todo("implement");
    Texture * __result = _sub_100644D0(this);
    return __result;
}

_extern void _sub_10064520(Layer *const, TextureMode);
void Layer::setUnitMode(TextureMode) // 0x10064520
{
    mangled_assert("?setUnitMode@Layer@@QAEXW4TextureMode@@@Z");
    todo("implement");
    _sub_10064520(this, arg);
}

_extern TextureMode _sub_100644E0(Layer const *const);
TextureMode Layer::getUnitMode() const // 0x100644E0
{
    mangled_assert("?getUnitMode@Layer@@QBE?AW4TextureMode@@XZ");
    todo("implement");
    TextureMode __result = _sub_100644E0(this);
    return __result;
}

/* ---------- private code */
#endif
