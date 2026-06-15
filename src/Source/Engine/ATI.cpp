#if 0
/* ---------- headers */

#include "decomp.h"
#include <xstring>
#include <Mathlib\matrix4.h>
#include <xmemory0>
#include <pch.h>
#include <Camera\Camera.h>
#include <Camera\Frustum.h>
#include <Camera\Plane3.h>
#include <Render\gl\r_defines.h>
#include <Render\gl\glext.h>
#include <Mathlib\matrix3.h>
#include <new>
#include <exception>
#include <xstddef>
#include <type_traits>
#include <xutility>
#include <utility>
#include <iosfwd>
#include <vector>
#include <xmemory>
#include <luaconfig\luaconfig.h>
#include <lua.h>
#include <UIGraphic.h>
#include <math.h>
#include <list>
#include <Mathlib\vector3.h>
#include <Mathlib\vector4.h>
#include <map>
#include <xtree>
#include <boost\scoped_ptr.hpp>
#include <profile\profile.h>
#include <iostream>
#include <Mathlib\vector2.h>
#include <util\types.h>
#include <Mathlib\mathlibdll.h>
#include <Mathlib\fastmath.h>
#include <platform\osdef.h>
#include <Render\objects\debugrender.h>
#include <Render\objects\core.h>
#include <Render\objects\objects.h>
#include <Render\gl\types.h>
#include <Mathlib\matvec.h>
#include <util\colour.h>
#include <renderer.h>
#include <Render\gl\lotypes.h>
#include <platform\windowinterface.h>
#include <platform\platformexports.h>
#include <Render\gl\r_types.h>
#include <ATI.h>
#include <prim.h>
#include <Cursor.h>
#include <Render\objects\texture.h>
#include <Render\objects\textureregistry.h>
#include <hash_map>
#include <xhash>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

extern void atiSpriteXAxisMake(matrix4 &dest, vector3 const &position, vector3 const &face, vector3 const &scale);
extern void atiSpriteYAxisMake(matrix4 &dest, vector3 const &position, vector3 const &face, vector3 const &scale);
extern void atiSpriteZAxisMake(matrix4 &dest, vector3 const &position, vector3 const &face, vector3 const &scale);
extern void atiSprite3AxisMake(matrix4 &dest, vector3 const &position, vector3 const &face, vector3 const &scale);
extern void ATISetVisible(bool bVisible);
extern void ATIPossibleVisFlagsAdd(ATIPossibleVisFlag *flags);
extern void ATIPossibleVisFlagsRemove(ATIPossibleVisFlag *flags);

_static bool checkVisibilityMasks(unsigned __int32 visibility, unsigned __int32 const *visibilityMasks, unsigned __int32 const *invisibilityMasks, unsigned __int32 nMasks);
_static bool ATIPlacementVisibilityParse(LuaConfig &lc, char const *table, unsigned __int32 &parseTo);

/* ---------- globals */

extern bool ATIGlobalVisibility; // 0x83BAA8

/* ---------- private variables */

_static
{
    extern std::vector<ATIPossibleVisFlag *,std::allocator<ATIPossibleVisFlag *> > ATIPossibleVisFlags; // 0x8486D0
}

/* ---------- public code */

void atiSpriteXAxisMake(matrix4 &dest, vector3 const &position, vector3 const &face, vector3 const &scale) // 0x5E0A95
{
    mangled_assert("?atiSpriteXAxisMake@@YGXAAVmatrix4@@ABVvector3@@11@Z");
    todo("implement");
}

void atiSpriteYAxisMake(matrix4 &dest, vector3 const &position, vector3 const &face, vector3 const &scale) // 0x5E0BFE
{
    mangled_assert("?atiSpriteYAxisMake@@YGXAAVmatrix4@@ABVvector3@@11@Z");
    todo("implement");
}

void atiSpriteZAxisMake(matrix4 &dest, vector3 const &position, vector3 const &face, vector3 const &scale) // 0x5E0D0E
{
    mangled_assert("?atiSpriteZAxisMake@@YGXAAVmatrix4@@ABVvector3@@11@Z");
    todo("implement");
}

void atiSprite3AxisMake(matrix4 &dest, vector3 const &position, vector3 const &face, vector3 const &scale) // 0x5E0914
{
    mangled_assert("?atiSprite3AxisMake@@YGXAAVmatrix4@@ABVvector3@@11@Z");
    todo("implement");
}

void ATISetVisible(bool bVisible) // 0x5E053B
{
    mangled_assert("?ATISetVisible@@YGX_N@Z");
    todo("implement");
}

bool ATIPlacement2D::getPlacement(PrimRectangle *, PrimRectangle const *, vector2 const *, vector2 const *, unsigned __int32) // 0x5E1375
{
    mangled_assert("?getPlacement@ATIPlacement2D@@QAE_NPAUPrimRectangle@@PBU2@PBVvector2@@2I@Z");
    todo("implement");
}

void ATIPossibleVisFlagsAdd(ATIPossibleVisFlag *flags) // 0x5E04EE
{
    mangled_assert("?ATIPossibleVisFlagsAdd@@YGXPAUATIPossibleVisFlag@@@Z");
    todo("implement");
}

void ATIPossibleVisFlagsRemove(ATIPossibleVisFlag *flags) // 0x5E0500
{
    mangled_assert("?ATIPossibleVisFlagsRemove@@YGXPAUATIPossibleVisFlag@@@Z");
    todo("implement");
}

void ATIPlacement2D::parse(LuaConfig &) // 0x5E18D9
{
    mangled_assert("?parse@ATIPlacement2D@@QAEXAAVLuaConfig@@@Z");
    todo("implement");
}

bool ATIPlacement3D::getPlacement(matrix4 *, Camera const *, float, vector3 const *, vector3 const *, unsigned __int32) // 0x5E16CE
{
    mangled_assert("?getPlacement@ATIPlacement3D@@QAE_NPAVmatrix4@@PBVCamera@@MPBVvector3@@2I@Z");
    todo("implement");
}

void ATIPlacement3D::parse(LuaConfig &) // 0x5E1A91
{
    mangled_assert("?parse@ATIPlacement3D@@QAEXAAVLuaConfig@@@Z");
    todo("implement");
}

ATIItem::ATIItem(LuaConfig &, char const *) // 0x5DFF79
{
    mangled_assert("??0ATIItem@@QAE@AAVLuaConfig@@PBD@Z");
    todo("implement");
}

_inline ATIPlacement3D::ATIPlacement3D() // 0x5E0021
{
    mangled_assert("??0ATIPlacement3D@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

ATIItem::~ATIItem() // 0x5E0227
{
    mangled_assert("??1ATIItem@@QAE@XZ");
    todo("implement");
}

unsigned __int32 ATIItem::parsePlacementFlags(LuaConfig &lc) // 0x5E1BBD
{
    mangled_assert("?parsePlacementFlags@ATIItem@@SGIAAVLuaConfig@@@Z");
    todo("implement");
}

ATIItem2D::ATIItem2D(LuaConfig &, char const *) // 0x5DFD9D
{
    mangled_assert("??0ATIItem2D@@QAE@AAVLuaConfig@@PBD@Z");
    todo("implement");
}

ATIItem2D::~ATIItem2D() // 0x5E01BB
{
    mangled_assert("??1ATIItem2D@@QAE@XZ");
    todo("implement");
}

ATIItem3D::ATIItem3D(LuaConfig &, char const *) // 0x5DFEB7
{
    mangled_assert("??0ATIItem3D@@QAE@AAVLuaConfig@@PBD@Z");
    todo("implement");
}

ATIItem3D::~ATIItem3D() // 0x5E01F1
{
    mangled_assert("??1ATIItem3D@@QAE@XZ");
    todo("implement");
}

ATITemplate::ATITemplate(LuaConfig &, char const *) // 0x5E0024
{
    mangled_assert("??0ATITemplate@@QAE@AAVLuaConfig@@PBD@Z");
    todo("implement");
}

ATITemplate::~ATITemplate() // 0x5E022C
{
    mangled_assert("??1ATITemplate@@QAE@XZ");
    todo("implement");
}

ATIItem2D *ATITemplate::findItem2D(char const *) const // 0x5E12DD
{
    mangled_assert("?findItem2D@ATITemplate@@QBEPAVATIItem2D@@PBD@Z");
    todo("implement");
}

ATIItem3D *ATITemplate::findItem3D(char const *) const // 0x5E1327
{
    mangled_assert("?findItem3D@ATITemplate@@QBEPAVATIItem3D@@PBD@Z");
    todo("implement");
}

void ATITemplate::display2D(PrimRectangle const *, ATIParameter *, __int32, unsigned __int32, float) // 0x5E0F57
{
    mangled_assert("?display2D@ATITemplate@@QAEXPBUPrimRectangle@@PAUATIParameter@@HIM@Z");
    todo("implement");
}

void ATITemplate::display3D(Camera const *, vector3 const *, vector3 const *, float, ATIParameter *, __int32, unsigned __int32, float) // 0x5E10ED
{
    mangled_assert("?display3D@ATITemplate@@QAEXPBVCamera@@PBVvector3@@1MPAUATIParameter@@HIM@Z");
    todo("implement");
}

/* ---------- private code */

_static bool checkVisibilityMasks(unsigned __int32 visibility, unsigned __int32 const *visibilityMasks, unsigned __int32 const *invisibilityMasks, unsigned __int32 nMasks) // 0x5E0E97
{
    mangled_assert("checkVisibilityMasks");
    todo("implement");
}

_static bool ATIPlacementVisibilityParse(LuaConfig &lc, char const *table, unsigned __int32 &parseTo) // 0x5E037F
{
    mangled_assert("ATIPlacementVisibilityParse");
    todo("implement");
}
#endif
