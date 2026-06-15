#if 0
/* ---------- headers */

#include "decomp.h"
#include <hash_map>
#include <xhash>
#include <memory>
#include <stdint.h>
#include <xstring>
#include <xmemory0>
#include <Objects\pch.h>
#include <crtdefs.h>
#include <gl\r_defines.h>
#include <gl\glext.h>
#include <new>
#include <xstddef>
#include <type_traits>
#include <Mathlib\matrix4.h>
#include <xutility>
#include <Mathlib\vector3.h>
#include <xatomic0.h>
#include <utility>
#include <vector>
#include <iosfwd>
#include <xmemory>
#include <Mathlib\matrix3.h>
#include <math.h>
#include <list>
#include <boost\scoped_array.hpp>
#include <boost\config.hpp>
#include <boost\config\user.hpp>
#include <boost\config\select_compiler_config.hpp>
#include <boost\config\compiler\visualc.hpp>
#include <boost\config\select_stdlib_config.hpp>
#include <boost\config\stdlib\dinkumware.hpp>
#include <boost\config\select_platform_config.hpp>
#include <boost\config\platform\win32.hpp>
#include <engine\prim.h>
#include <Objects\Material.h>
#include <assert.h>
#include <boost\config\suffix.hpp>
#include <util\types.h>
#include <platform\osdef.h>
#include <Mathlib\mathutil.h>
#include <Mathlib\matvec.h>
#include <Mathlib\vector2.h>
#include <Objects\Texture.h>
#include <Objects\TextureRegistry.h>
#include <Objects\Objects.h>
#include <Objects\Draw.h>
#include <Objects\Core.h>
#include <gl\lotypes.h>
#include <gl\types.h>
#include <util\colour.h>
#include <Mathlib\vector4.h>
#include <Mathlib\mathlibdll.h>
#include <Mathlib\fastmath.h>
#include <gl\r_types.h>
#include <boost\scoped_ptr.hpp>
#include <boost\assert.hpp>
#include <boost\checked_delete.hpp>
#include <string>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

extern bool Draw_releaseInstance();

/* ---------- globals */

extern Draw *Draw::s_instance; // 0x10132A50

/* ---------- private variables */

_static
{
    extern Draw *g_instance; // 0x10132A4C
    extern std::_Nil _Nil_obj; // 0x10132A54
}

/* ---------- public code */

bool Draw_releaseInstance() // 0x10048650
{
    mangled_assert("?Draw_releaseInstance@@YG_NXZ");
    todo("implement");
}

Draw::Draw() // 0x10048390
{
    mangled_assert("??0Draw@@IAE@XZ");
    todo("implement");
}

_inline Draw::Draw(Draw const &) // 0x100483F0
{
    mangled_assert("??0Draw@@QAE@ABV0@@Z");
    compiler_generated();
    todo("implement");
}

Draw::~Draw() // 0x10048460
{
    mangled_assert("??1Draw@@MAE@XZ");
    todo("implement");
}

_inline Draw &Draw::operator=(Draw const &) // 0x100484C0
{
    mangled_assert("??4Draw@@QAEAAV0@ABV0@@Z");
    compiler_generated();
    todo("implement");
}

Draw *Draw::getInstance() // 0x10048A20
{
    mangled_assert("?getInstance@Draw@@SGPAV1@XZ");
    todo("implement");
}

bool Draw::release() // 0x10049910
{
    mangled_assert("?release@Draw@@UAE_NXZ");
    todo("implement");
}

bool Draw::begin2D(vector4 *) // 0x10048680
{
    mangled_assert("?begin2D@Draw@@QAE_NPAVvector4@@@Z");
    todo("implement");
}

bool Draw::end2D() // 0x10048960
{
    mangled_assert("?end2D@Draw@@QAE_NXZ");
    todo("implement");
}

void Draw::applyDefaultMaterial() // 0x10048670
{
    mangled_assert("?applyDefaultMaterial@Draw@@QAEXXZ");
    todo("implement");
}

void Draw::rectSetup(PrimRectangle const &, FatVertex *) // 0x100495B0
{
    mangled_assert("?rectSetup@Draw@@IAEXABUPrimRectangle@@PAUFatVertex@@@Z");
    todo("implement");
}

void Draw::rectSolid(PrimRectangle const &, vector4 const &) // 0x10049620
{
    mangled_assert("?rectSolid@Draw@@QAEXABUPrimRectangle@@ABVvector4@@@Z");
    todo("implement");
}

void Draw::rectAlpha(PrimRectangle const &, vector4 const &, bool) // 0x10049270
{
    mangled_assert("?rectAlpha@Draw@@QAEXABUPrimRectangle@@ABVvector4@@_N@Z");
    todo("implement");
}

void Draw::rectTexture(PrimRectangle const &, vector4 const &, Texture *, bool) // 0x10049750
{
    mangled_assert("?rectTexture@Draw@@QAEXABUPrimRectangle@@ABVvector4@@PAVTexture@@_N@Z");
    todo("implement");
}

void Draw::rectOutline(PrimRectangle const &, vector4 const &, float) // 0x10049440
{
    mangled_assert("?rectOutline@Draw@@QAEXABUPrimRectangle@@ABVvector4@@M@Z");
    todo("implement");
}

void Draw::lineSolid(float, float, float, float, vector4 const &, float) // 0x10048C90
{
    mangled_assert("?lineSolid@Draw@@QAEXMMMMABVvector4@@M@Z");
    todo("implement");
}

void Draw::lineAlpha(float, float, float, float, vector4 const &, float, bool) // 0x10048AE0
{
    mangled_assert("?lineAlpha@Draw@@QAEXMMMMABVvector4@@M_N@Z");
    todo("implement");
}

void Draw::pointSolid(float, float, vector4 const &, float) // 0x10048EB0
{
    mangled_assert("?pointSolid@Draw@@QAEXMMABVvector4@@M@Z");
    todo("implement");
}

void Draw::polygonSolid(vector2 *, __int32, vector4 const &) // 0x100491B0
{
    mangled_assert("?polygonSolid@Draw@@QAEXPAVvector2@@HABVvector4@@@Z");
    todo("implement");
}

void Draw::polygonAlpha(vector2 *, __int32, vector4 const &, bool) // 0x10048F40
{
    mangled_assert("?polygonAlpha@Draw@@QAEXPAVvector2@@HABVvector4@@_N@Z");
    todo("implement");
}

void Draw::polygonOutline(vector2 *, __int32, vector4 const &, float) // 0x100490A0
{
    mangled_assert("?polygonOutline@Draw@@QAEXPAVvector2@@HABVvector4@@M@Z");
    todo("implement");
}

void Draw::circleOutline(float, float, float, vector4 const &, __int32, float) // 0x100487A0
{
    mangled_assert("?circleOutline@Draw@@QAEXMMMABVvector4@@HM@Z");
    todo("implement");
}

void Draw::lineStrip(vector2 *, __int32, vector4 const &, float) // 0x10048DA0
{
    mangled_assert("?lineStrip@Draw@@QAEXPAVvector2@@HABVvector4@@M@Z");
    todo("implement");
}

/* ---------- private code */
#endif
