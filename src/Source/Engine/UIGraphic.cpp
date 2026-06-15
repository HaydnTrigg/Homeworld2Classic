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

_inline UIGraphic::LOD::LOD() // 0x648CF3
{
    mangled_assert("??0LOD@UIGraphic@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

UIGraphic::UIGraphic() // 0x648DA9
{
    mangled_assert("??0UIGraphic@@QAE@XZ");
    todo("implement");
}

bool UIGraphic::LODGreater(UIGraphic::LOD const &a, UIGraphic::LOD const &b) // 0x64968A
{
    mangled_assert("?LODGreater@UIGraphic@@SG_NABULOD@1@0@Z");
    todo("implement");
}

void UIGraphic::setDebugRenderFrame(char const *frame) // 0x64A8FE
{
    mangled_assert("?setDebugRenderFrame@UIGraphic@@SGXPBD@Z");
    todo("implement");
}

void UIGraphic::addLOD(void *, float) // 0x649809
{
    mangled_assert("?addLOD@UIGraphic@@QAEXPAXM@Z");
    todo("implement");
}

void UIGraphic::parseLODSimpleMeshes(LuaConfig &) // 0x649AA5
{
    mangled_assert("?parseLODSimpleMeshes@UIGraphic@@QAEXAAVLuaConfig@@@Z");
    todo("implement");
}

void UIGraphic::parseLODFonts(LuaConfig &) // 0x64992F
{
    mangled_assert("?parseLODFonts@UIGraphic@@QAEXAAVLuaConfig@@@Z");
    todo("implement");
}

void UIGraphic::parseLODTextures(LuaConfig &) // 0x649C1F
{
    mangled_assert("?parseLODTextures@UIGraphic@@QAEXAAVLuaConfig@@@Z");
    todo("implement");
}

void UIGraphic::setLOD(float) // 0x64A90A
{
    mangled_assert("?setLOD@UIGraphic@@QAEXM@Z");
    todo("implement");
}

UIGraphic3D::UIGraphic3D() // 0x648D70
{
    mangled_assert("??0UIGraphic3D@@QAE@XZ");
    todo("implement");
}

void UIGraphic3D::parseRenderFlags(LuaConfig &) // 0x64A0EA
{
    mangled_assert("?parseRenderFlags@UIGraphic3D@@QAEXAAVLuaConfig@@@Z");
    todo("implement");
}

UIGraphicMesh::UIGraphicMesh(LuaConfig &, bool) // 0x649083
{
    mangled_assert("??0UIGraphicMesh@@QAE@AAVLuaConfig@@_N@Z");
    todo("implement");
}

UIGraphicMesh::~UIGraphicMesh() // 0x6493F7
{
    mangled_assert("??1UIGraphicMesh@@UAE@XZ");
    todo("implement");
}

void UIGraphicMesh::render(float, float) // 0x64A650
{
    mangled_assert("?render@UIGraphicMesh@@UAEXMM@Z");
    todo("implement");
}

UIGraphic2D::UIGraphic2D() // 0x648D34
{
    mangled_assert("??0UIGraphic2D@@QAE@XZ");
    todo("implement");
}

void UIGraphic2D::parseRenderFlags(LuaConfig &) // 0x649DE0
{
    mangled_assert("?parseRenderFlags@UIGraphic2D@@QAEXAAVLuaConfig@@@Z");
    todo("implement");
}

UIGraphicMesh2D::UIGraphicMesh2D(LuaConfig &) // 0x648DC0
{
    mangled_assert("??0UIGraphicMesh2D@@QAE@AAVLuaConfig@@@Z");
    todo("implement");
}

UIGraphicMesh2D::~UIGraphicMesh2D() // 0x649383
{
    mangled_assert("??1UIGraphicMesh2D@@UAE@XZ");
    todo("implement");
}

void UIGraphicMesh2D::getScale(vector2 &) const // 0x6498BD
{
    mangled_assert("?getScale@UIGraphicMesh2D@@UBEXAAVvector2@@@Z");
    todo("implement");
}

void UIGraphicMesh2D::render(PrimRectangle const *, float, float) // 0x64A1DE
{
    mangled_assert("?render@UIGraphicMesh2D@@UAEXPBUPrimRectangle@@MM@Z");
    todo("implement");
}

UIGraphicText2D::UIGraphicText2D(LuaConfig &) // 0x6491F2
{
    mangled_assert("??0UIGraphicText2D@@QAE@AAVLuaConfig@@@Z");
    todo("implement");
}

UIGraphicText2D::~UIGraphicText2D() // 0x64946B
{
    mangled_assert("??1UIGraphicText2D@@UAE@XZ");
    todo("implement");
}

void UIGraphicText2D::getScale(vector2 &) const // 0x6498CB
{
    mangled_assert("?getScale@UIGraphicText2D@@UBEXAAVvector2@@@Z");
    todo("implement");
}

void UIGraphicText2D::render(PrimRectangle const *, float, float) // 0x64A709
{
    mangled_assert("?render@UIGraphicText2D@@UAEXPBUPrimRectangle@@MM@Z");
    todo("implement");
}

UIGraphicTexture2D::UIGraphicTexture2D(LuaConfig &) // 0x649280
{
    mangled_assert("??0UIGraphicTexture2D@@QAE@AAVLuaConfig@@@Z");
    todo("implement");
}

_inline UIGraphic2D::~UIGraphic2D() // 0x649359
{
    mangled_assert("??1UIGraphic2D@@UAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline UIGraphic3D::~UIGraphic3D() // 0x649367
{
    mangled_assert("??1UIGraphic3D@@UAE@XZ");
    compiler_generated();
    todo("implement");
}

UIGraphicTexture2D::~UIGraphicTexture2D() // 0x6494CE
{
    mangled_assert("??1UIGraphicTexture2D@@UAE@XZ");
    todo("implement");
}

void UIGraphicTexture2D::getScale(vector2 &) const // 0x6498D9
{
    mangled_assert("?getScale@UIGraphicTexture2D@@UBEXAAVvector2@@@Z");
    todo("implement");
}

void UIGraphicTexture2D::render(PrimRectangle const *, float, float) // 0x64A7FA
{
    mangled_assert("?render@UIGraphicTexture2D@@UAEXPBUPrimRectangle@@MM@Z");
    todo("implement");
}

/* ---------- private code */
#endif
