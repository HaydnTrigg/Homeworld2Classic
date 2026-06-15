#if 0
/* ---------- headers */

#include "decomp.h"
#include <map>
#include <bitset>
#include <Mathlib\mathutil.h>
#include <Render\objects\textureanim.h>
#include <xtree>
#include <Render\objects\stateblock\statevariableinstance.h>
#include <xstring>
#include <util\dictionary.h>
#include <util\utilexports.h>
#include <xmemory0>
#include <Render\FxGL\pch.h>
#include <memory\memorylib.h>
#include <Render\FxGL\VarMulti.h>
#include <util\colour.h>
#include <Render\objects\stateblock\stateblock.h>
#include <Render\objects\texture.h>
#include <Render\objects\textureregistry.h>
#include <new>
#include <exception>
#include <xstddef>
#include <type_traits>
#include <xutility>
#include <utility>
#include <profile\profile.h>
#include <iosfwd>
#include <fileio\filepath.h>
#include <algorithm>
#include <Mathlib\matrix4.h>
#include <platform\osdef.h>
#include <iostream>
#include <fileio\fileioexports.h>
#include <xmemory>
#include <util\types.h>
#include <fileio\bytestream.h>
#include <assist\fixedstring.h>
#include <assist\stlexstring.h>
#include <math.h>
#include <Render\objects\parentmesh.h>
#include <Render\objects\mesh.h>
#include <fileio\iff.h>
#include <Render\objects\core.h>
#include <Render\objects\objects.h>
#include <Mathlib\vector3.h>
#include <Render\gl\types.h>
#include <Mathlib\matvec.h>
#include <Render\gl\lotypes.h>
#include <Mathlib\matrix3.h>
#include <Render\gl\r_types.h>
#include <Mathlib\vector4.h>
#include <Mathlib\mathlibdll.h>
#include <Mathlib\fastmath.h>
#include <Render\FxGL\FXMeshList.h>
#include <assist\typemagic.h>
#include <boost\shared_ptr.hpp>
#include <Render\FxGL\FXShader.h>
#include <Mathlib\vector2.h>
#include <Render\gl\r_defines.h>
#include <Render\gl\glext.h>
#include <Render\objects\meshloader.h>
#include <debug\db.h>
#include <Render\objects\renderable.h>
#include <list>
#include <wchar.h>
#include <Render\objects\stateblock\stateblocktypes.h>
#include <Render\FxGL\FXUtil.h>
#include <Render\FxGL\FXManager.h>
#include <debug\ctassert.h>
#include <vector>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

extern float DistanceToLineSegmentSqr(vector3 const &eye, vector3 const &start, vector3 const &end);
extern bool FXLoadGeometry(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &name, Mesh *&mesh);
extern bool FXLoadGeometryList(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &name, FXMeshList *&meshlist);
extern bool FXLoadTexture(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &name, FXManager::Type::BlendType const blend, bool const tile, Texture *&texture, FXShader *&shader);
extern bool FXLoadTextureAnim(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &name, FXManager::Type::BlendType const blend, bool const tile, TextureAnim *&textureAnim, FXShader *&shader);

_static void SetShaderBlend(FXShader &shader, FXManager::Type::BlendType const blend);

/* ---------- globals */

/* ---------- private variables */

/* ---------- public code */

float DistanceToLineSegmentSqr(vector3 const &eye, vector3 const &start, vector3 const &end) // 0x6F8E8F
{
    mangled_assert("?DistanceToLineSegmentSqr@@YGMABVvector3@@00@Z");
    todo("implement");
}

bool FXLoadGeometry(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &name, Mesh *&mesh) // 0x6F8FE4
{
    mangled_assert("?FXLoadGeometry@@YG_NABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AAPAVMesh@@@Z");
    todo("implement");
}

bool FXLoadGeometryList(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &name, FXMeshList *&meshlist) // 0x6F9085
{
    mangled_assert("?FXLoadGeometryList@@YG_NABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AAPAVFXMeshList@@@Z");
    todo("implement");
}

bool FXLoadTexture(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &name, FXManager::Type::BlendType const blend, bool const tile, Texture *&texture, FXShader *&shader) // 0x6F90B1
{
    mangled_assert("?FXLoadTexture@@YG_NABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4BlendType@Type@FXManager@@_NAAPAVTexture@@AAPAVFXShader@@@Z");
    todo("implement");
}

bool FXLoadTextureAnim(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &name, FXManager::Type::BlendType const blend, bool const tile, TextureAnim *&textureAnim, FXShader *&shader) // 0x6F9172
{
    mangled_assert("?FXLoadTextureAnim@@YG_NABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4BlendType@Type@FXManager@@_NAAPAVTextureAnim@@AAPAVFXShader@@@Z");
    todo("implement");
}

/* ---------- private code */

_static void SetShaderBlend(FXShader &shader, FXManager::Type::BlendType const blend) // 0x6F921E
{
    mangled_assert("SetShaderBlend");
    todo("implement");
}
#endif
