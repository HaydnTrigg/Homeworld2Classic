#if 0
/* ---------- headers */

#include "decomp.h"
#include <xstring>
#include <Mathlib\matrix4.h>
#include <boost\shared_array.hpp>
#include <xmemory0>
#include <pch.h>
#include <malloc.h>
#include <Render\objects\compiledtext.h>
#include <Render\gl\r_defines.h>
#include <Render\gl\glext.h>
#include <Mathlib\matrix3.h>
#include <new>
#include <exception>
#include <xstddef>
#include <type_traits>
#include <luaconfig\luaconfig.h>
#include <lua.h>
#include <Render\objects\fontsystem.h>
#include <xutility>
#include <Render\objects\bitmapfont.h>
#include <utility>
#include <iosfwd>
#include <vector>
#include <fileio\bytestream.h>
#include <xmemory>
#include <fileio\fileioexports.h>
#include <fileio\filepath.h>
#include <Render\objects\textureproxy.h>
#include <Render\objects\textureregistry.h>
#include <hash_map>
#include <Mathlib\vector3.h>
#include <xhash>
#include <Mathlib\vector4.h>
#include <map>
#include <xtree>
#include <boost\smart_ptr.hpp>
#include <boost\scoped_ptr.hpp>
#include <Mathlib\vector2.h>
#include <util\types.h>
#include <boost\scoped_array.hpp>
#include <Mathlib\mathlibdll.h>
#include <Render\objects\cliprect.h>
#include <Mathlib\fastmath.h>
#include <platform\osdef.h>
#include <Render\objects\simplemesh.h>
#include <Render\objects\texture.h>
#include <Render\objects\objects.h>
#include <Render\objects\debugrender.h>
#include <Render\objects\core.h>
#include <Render\gl\types.h>
#include <Mathlib\matvec.h>
#include <util\colour.h>
#include <boost\shared_ptr.hpp>
#include <Render\gl\lotypes.h>
#include <renderer.h>
#include <Render\gl\r_types.h>
#include <UIGraphic.h>
#include <prim.h>
#include <algorithm>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

extern float UIGraphic::s_LODtolerance; // 0x83D6F0
extern char const *UIGraphic::s_DebugRenderFrame; // 0x83D6F4

/* ---------- private variables */

/* ---------- public code */

_extern _sub_648CF3(UIGraphic::LOD *const);
_inline UIGraphic::LOD::LOD() // 0x648CF3
{
    mangled_assert("??0LOD@UIGraphic@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_648CF3(this);
}

_extern _sub_648DA9(UIGraphic *const);
UIGraphic::UIGraphic() // 0x648DA9
{
    mangled_assert("??0UIGraphic@@QAE@XZ");
    todo("implement");
    _sub_648DA9(this);
}

_extern bool _sub_64968A(UIGraphic::LOD const &, UIGraphic::LOD const &);
bool UIGraphic::LODGreater(UIGraphic::LOD const &a, UIGraphic::LOD const &b) // 0x64968A
{
    mangled_assert("?LODGreater@UIGraphic@@SG_NABULOD@1@0@Z");
    todo("implement");
    bool __result = _sub_64968A(a, b);
    return __result;
}

_extern void _sub_64A8FE(char const *);
void UIGraphic::setDebugRenderFrame(char const *frame) // 0x64A8FE
{
    mangled_assert("?setDebugRenderFrame@UIGraphic@@SGXPBD@Z");
    todo("implement");
    _sub_64A8FE(frame);
}

_extern void _sub_649809(UIGraphic *const, void *, float);
void UIGraphic::addLOD(void *, float) // 0x649809
{
    mangled_assert("?addLOD@UIGraphic@@QAEXPAXM@Z");
    todo("implement");
    _sub_649809(this, arg, arg);
}

_extern void _sub_649AA5(UIGraphic *const, LuaConfig &);
void UIGraphic::parseLODSimpleMeshes(LuaConfig &) // 0x649AA5
{
    mangled_assert("?parseLODSimpleMeshes@UIGraphic@@QAEXAAVLuaConfig@@@Z");
    todo("implement");
    _sub_649AA5(this, arg);
}

_extern void _sub_64992F(UIGraphic *const, LuaConfig &);
void UIGraphic::parseLODFonts(LuaConfig &) // 0x64992F
{
    mangled_assert("?parseLODFonts@UIGraphic@@QAEXAAVLuaConfig@@@Z");
    todo("implement");
    _sub_64992F(this, arg);
}

_extern void _sub_649C1F(UIGraphic *const, LuaConfig &);
void UIGraphic::parseLODTextures(LuaConfig &) // 0x649C1F
{
    mangled_assert("?parseLODTextures@UIGraphic@@QAEXAAVLuaConfig@@@Z");
    todo("implement");
    _sub_649C1F(this, arg);
}

_extern void _sub_64A90A(UIGraphic *const, float);
void UIGraphic::setLOD(float) // 0x64A90A
{
    mangled_assert("?setLOD@UIGraphic@@QAEXM@Z");
    todo("implement");
    _sub_64A90A(this, arg);
}

_extern _sub_648D70(UIGraphic3D *const);
UIGraphic3D::UIGraphic3D() // 0x648D70
{
    mangled_assert("??0UIGraphic3D@@QAE@XZ");
    todo("implement");
    _sub_648D70(this);
}

_extern void _sub_64A0EA(UIGraphic3D *const, LuaConfig &);
void UIGraphic3D::parseRenderFlags(LuaConfig &) // 0x64A0EA
{
    mangled_assert("?parseRenderFlags@UIGraphic3D@@QAEXAAVLuaConfig@@@Z");
    todo("implement");
    _sub_64A0EA(this, arg);
}

_extern _sub_649083(UIGraphicMesh *const, LuaConfig &, bool);
UIGraphicMesh::UIGraphicMesh(LuaConfig &, bool) // 0x649083
{
    mangled_assert("??0UIGraphicMesh@@QAE@AAVLuaConfig@@_N@Z");
    todo("implement");
    _sub_649083(this, arg, arg);
}

_extern void _sub_6493F7(UIGraphicMesh *const);
UIGraphicMesh::~UIGraphicMesh() // 0x6493F7
{
    mangled_assert("??1UIGraphicMesh@@UAE@XZ");
    todo("implement");
    _sub_6493F7(this);
}

_extern void _sub_64A650(UIGraphicMesh *const, float, float);
void UIGraphicMesh::render(float, float) // 0x64A650
{
    mangled_assert("?render@UIGraphicMesh@@UAEXMM@Z");
    todo("implement");
    _sub_64A650(this, arg, arg);
}

_extern _sub_648D34(UIGraphic2D *const);
UIGraphic2D::UIGraphic2D() // 0x648D34
{
    mangled_assert("??0UIGraphic2D@@QAE@XZ");
    todo("implement");
    _sub_648D34(this);
}

_extern void _sub_649DE0(UIGraphic2D *const, LuaConfig &);
void UIGraphic2D::parseRenderFlags(LuaConfig &) // 0x649DE0
{
    mangled_assert("?parseRenderFlags@UIGraphic2D@@QAEXAAVLuaConfig@@@Z");
    todo("implement");
    _sub_649DE0(this, arg);
}

_extern _sub_648DC0(UIGraphicMesh2D *const, LuaConfig &);
UIGraphicMesh2D::UIGraphicMesh2D(LuaConfig &) // 0x648DC0
{
    mangled_assert("??0UIGraphicMesh2D@@QAE@AAVLuaConfig@@@Z");
    todo("implement");
    _sub_648DC0(this, arg);
}

_extern void _sub_649383(UIGraphicMesh2D *const);
UIGraphicMesh2D::~UIGraphicMesh2D() // 0x649383
{
    mangled_assert("??1UIGraphicMesh2D@@UAE@XZ");
    todo("implement");
    _sub_649383(this);
}

_extern void _sub_6498BD(UIGraphicMesh2D const *const, vector2 &);
void UIGraphicMesh2D::getScale(vector2 &) const // 0x6498BD
{
    mangled_assert("?getScale@UIGraphicMesh2D@@UBEXAAVvector2@@@Z");
    todo("implement");
    _sub_6498BD(this, arg);
}

_extern void _sub_64A1DE(UIGraphicMesh2D *const, PrimRectangle const *, float, float);
void UIGraphicMesh2D::render(PrimRectangle const *, float, float) // 0x64A1DE
{
    mangled_assert("?render@UIGraphicMesh2D@@UAEXPBUPrimRectangle@@MM@Z");
    todo("implement");
    _sub_64A1DE(this, arg, arg, arg);
}

_extern _sub_6491F2(UIGraphicText2D *const, LuaConfig &);
UIGraphicText2D::UIGraphicText2D(LuaConfig &) // 0x6491F2
{
    mangled_assert("??0UIGraphicText2D@@QAE@AAVLuaConfig@@@Z");
    todo("implement");
    _sub_6491F2(this, arg);
}

_extern void _sub_64946B(UIGraphicText2D *const);
UIGraphicText2D::~UIGraphicText2D() // 0x64946B
{
    mangled_assert("??1UIGraphicText2D@@UAE@XZ");
    todo("implement");
    _sub_64946B(this);
}

_extern void _sub_6498CB(UIGraphicText2D const *const, vector2 &);
void UIGraphicText2D::getScale(vector2 &) const // 0x6498CB
{
    mangled_assert("?getScale@UIGraphicText2D@@UBEXAAVvector2@@@Z");
    todo("implement");
    _sub_6498CB(this, arg);
}

_extern void _sub_64A709(UIGraphicText2D *const, PrimRectangle const *, float, float);
void UIGraphicText2D::render(PrimRectangle const *, float, float) // 0x64A709
{
    mangled_assert("?render@UIGraphicText2D@@UAEXPBUPrimRectangle@@MM@Z");
    todo("implement");
    _sub_64A709(this, arg, arg, arg);
}

_extern _sub_649280(UIGraphicTexture2D *const, LuaConfig &);
UIGraphicTexture2D::UIGraphicTexture2D(LuaConfig &) // 0x649280
{
    mangled_assert("??0UIGraphicTexture2D@@QAE@AAVLuaConfig@@@Z");
    todo("implement");
    _sub_649280(this, arg);
}

_extern void _sub_649359(UIGraphic2D *const);
_inline UIGraphic2D::~UIGraphic2D() // 0x649359
{
    mangled_assert("??1UIGraphic2D@@UAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_649359(this);
}

_extern void _sub_649367(UIGraphic3D *const);
_inline UIGraphic3D::~UIGraphic3D() // 0x649367
{
    mangled_assert("??1UIGraphic3D@@UAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_649367(this);
}

_extern void _sub_6494CE(UIGraphicTexture2D *const);
UIGraphicTexture2D::~UIGraphicTexture2D() // 0x6494CE
{
    mangled_assert("??1UIGraphicTexture2D@@UAE@XZ");
    todo("implement");
    _sub_6494CE(this);
}

_extern void _sub_6498D9(UIGraphicTexture2D const *const, vector2 &);
void UIGraphicTexture2D::getScale(vector2 &) const // 0x6498D9
{
    mangled_assert("?getScale@UIGraphicTexture2D@@UBEXAAVvector2@@@Z");
    todo("implement");
    _sub_6498D9(this, arg);
}

_extern void _sub_64A7FA(UIGraphicTexture2D *const, PrimRectangle const *, float, float);
void UIGraphicTexture2D::render(PrimRectangle const *, float, float) // 0x64A7FA
{
    mangled_assert("?render@UIGraphicTexture2D@@UAEXPBUPrimRectangle@@MM@Z");
    todo("implement");
    _sub_64A7FA(this, arg, arg, arg);
}

/* ---------- private code */
#endif
