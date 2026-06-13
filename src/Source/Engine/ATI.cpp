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

_extern void _sub_5E0A95(matrix4 &, vector3 const &, vector3 const &, vector3 const &);
void atiSpriteXAxisMake(matrix4 &dest, vector3 const &position, vector3 const &face, vector3 const &scale) // 0x5E0A95
{
    mangled_assert("?atiSpriteXAxisMake@@YGXAAVmatrix4@@ABVvector3@@11@Z");
    todo("implement");
    _sub_5E0A95(dest, position, face, scale);
}

_extern void _sub_5E0BFE(matrix4 &, vector3 const &, vector3 const &, vector3 const &);
void atiSpriteYAxisMake(matrix4 &dest, vector3 const &position, vector3 const &face, vector3 const &scale) // 0x5E0BFE
{
    mangled_assert("?atiSpriteYAxisMake@@YGXAAVmatrix4@@ABVvector3@@11@Z");
    todo("implement");
    _sub_5E0BFE(dest, position, face, scale);
}

_extern void _sub_5E0D0E(matrix4 &, vector3 const &, vector3 const &, vector3 const &);
void atiSpriteZAxisMake(matrix4 &dest, vector3 const &position, vector3 const &face, vector3 const &scale) // 0x5E0D0E
{
    mangled_assert("?atiSpriteZAxisMake@@YGXAAVmatrix4@@ABVvector3@@11@Z");
    todo("implement");
    _sub_5E0D0E(dest, position, face, scale);
}

_extern void _sub_5E0914(matrix4 &, vector3 const &, vector3 const &, vector3 const &);
void atiSprite3AxisMake(matrix4 &dest, vector3 const &position, vector3 const &face, vector3 const &scale) // 0x5E0914
{
    mangled_assert("?atiSprite3AxisMake@@YGXAAVmatrix4@@ABVvector3@@11@Z");
    todo("implement");
    _sub_5E0914(dest, position, face, scale);
}

_extern void _sub_5E053B(bool);
void ATISetVisible(bool bVisible) // 0x5E053B
{
    mangled_assert("?ATISetVisible@@YGX_N@Z");
    todo("implement");
    _sub_5E053B(bVisible);
}

_extern bool _sub_5E1375(ATIPlacement2D *const, PrimRectangle *, PrimRectangle const *, vector2 const *, vector2 const *, unsigned __int32);
bool ATIPlacement2D::getPlacement(PrimRectangle *, PrimRectangle const *, vector2 const *, vector2 const *, unsigned __int32) // 0x5E1375
{
    mangled_assert("?getPlacement@ATIPlacement2D@@QAE_NPAUPrimRectangle@@PBU2@PBVvector2@@2I@Z");
    todo("implement");
    bool __result = _sub_5E1375(this, arg, arg, arg, arg, arg);
    return __result;
}

_extern void _sub_5E04EE(ATIPossibleVisFlag *);
void ATIPossibleVisFlagsAdd(ATIPossibleVisFlag *flags) // 0x5E04EE
{
    mangled_assert("?ATIPossibleVisFlagsAdd@@YGXPAUATIPossibleVisFlag@@@Z");
    todo("implement");
    _sub_5E04EE(flags);
}

_extern void _sub_5E0500(ATIPossibleVisFlag *);
void ATIPossibleVisFlagsRemove(ATIPossibleVisFlag *flags) // 0x5E0500
{
    mangled_assert("?ATIPossibleVisFlagsRemove@@YGXPAUATIPossibleVisFlag@@@Z");
    todo("implement");
    _sub_5E0500(flags);
}

_extern void _sub_5E18D9(ATIPlacement2D *const, LuaConfig &);
void ATIPlacement2D::parse(LuaConfig &) // 0x5E18D9
{
    mangled_assert("?parse@ATIPlacement2D@@QAEXAAVLuaConfig@@@Z");
    todo("implement");
    _sub_5E18D9(this, arg);
}

_extern bool _sub_5E16CE(ATIPlacement3D *const, matrix4 *, Camera const *, float, vector3 const *, vector3 const *, unsigned __int32);
bool ATIPlacement3D::getPlacement(matrix4 *, Camera const *, float, vector3 const *, vector3 const *, unsigned __int32) // 0x5E16CE
{
    mangled_assert("?getPlacement@ATIPlacement3D@@QAE_NPAVmatrix4@@PBVCamera@@MPBVvector3@@2I@Z");
    todo("implement");
    bool __result = _sub_5E16CE(this, arg, arg, arg, arg, arg, arg);
    return __result;
}

_extern void _sub_5E1A91(ATIPlacement3D *const, LuaConfig &);
void ATIPlacement3D::parse(LuaConfig &) // 0x5E1A91
{
    mangled_assert("?parse@ATIPlacement3D@@QAEXAAVLuaConfig@@@Z");
    todo("implement");
    _sub_5E1A91(this, arg);
}

_extern _sub_5DFF79(ATIItem *const, LuaConfig &, char const *);
ATIItem::ATIItem(LuaConfig &, char const *) // 0x5DFF79
{
    mangled_assert("??0ATIItem@@QAE@AAVLuaConfig@@PBD@Z");
    todo("implement");
    _sub_5DFF79(this, arg, arg);
}

_extern _sub_5E0021(ATIPlacement3D *const);
_inline ATIPlacement3D::ATIPlacement3D() // 0x5E0021
{
    mangled_assert("??0ATIPlacement3D@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_5E0021(this);
}

_extern void _sub_5E0227(ATIItem *const);
ATIItem::~ATIItem() // 0x5E0227
{
    mangled_assert("??1ATIItem@@QAE@XZ");
    todo("implement");
    _sub_5E0227(this);
}

_extern unsigned __int32 _sub_5E1BBD(LuaConfig &);
unsigned __int32 ATIItem::parsePlacementFlags(LuaConfig &lc) // 0x5E1BBD
{
    mangled_assert("?parsePlacementFlags@ATIItem@@SGIAAVLuaConfig@@@Z");
    todo("implement");
    unsigned __int32 __result = _sub_5E1BBD(lc);
    return __result;
}

_extern _sub_5DFD9D(ATIItem2D *const, LuaConfig &, char const *);
ATIItem2D::ATIItem2D(LuaConfig &, char const *) // 0x5DFD9D
{
    mangled_assert("??0ATIItem2D@@QAE@AAVLuaConfig@@PBD@Z");
    todo("implement");
    _sub_5DFD9D(this, arg, arg);
}

_extern void _sub_5E01BB(ATIItem2D *const);
ATIItem2D::~ATIItem2D() // 0x5E01BB
{
    mangled_assert("??1ATIItem2D@@QAE@XZ");
    todo("implement");
    _sub_5E01BB(this);
}

_extern _sub_5DFEB7(ATIItem3D *const, LuaConfig &, char const *);
ATIItem3D::ATIItem3D(LuaConfig &, char const *) // 0x5DFEB7
{
    mangled_assert("??0ATIItem3D@@QAE@AAVLuaConfig@@PBD@Z");
    todo("implement");
    _sub_5DFEB7(this, arg, arg);
}

_extern void _sub_5E01F1(ATIItem3D *const);
ATIItem3D::~ATIItem3D() // 0x5E01F1
{
    mangled_assert("??1ATIItem3D@@QAE@XZ");
    todo("implement");
    _sub_5E01F1(this);
}

_extern _sub_5E0024(ATITemplate *const, LuaConfig &, char const *);
ATITemplate::ATITemplate(LuaConfig &, char const *) // 0x5E0024
{
    mangled_assert("??0ATITemplate@@QAE@AAVLuaConfig@@PBD@Z");
    todo("implement");
    _sub_5E0024(this, arg, arg);
}

_extern void _sub_5E022C(ATITemplate *const);
ATITemplate::~ATITemplate() // 0x5E022C
{
    mangled_assert("??1ATITemplate@@QAE@XZ");
    todo("implement");
    _sub_5E022C(this);
}

_extern ATIItem2D *_sub_5E12DD(ATITemplate const *const, char const *);
ATIItem2D *ATITemplate::findItem2D(char const *) const // 0x5E12DD
{
    mangled_assert("?findItem2D@ATITemplate@@QBEPAVATIItem2D@@PBD@Z");
    todo("implement");
    ATIItem2D * __result = _sub_5E12DD(this, arg);
    return __result;
}

_extern ATIItem3D *_sub_5E1327(ATITemplate const *const, char const *);
ATIItem3D *ATITemplate::findItem3D(char const *) const // 0x5E1327
{
    mangled_assert("?findItem3D@ATITemplate@@QBEPAVATIItem3D@@PBD@Z");
    todo("implement");
    ATIItem3D * __result = _sub_5E1327(this, arg);
    return __result;
}

_extern void _sub_5E0F57(ATITemplate *const, PrimRectangle const *, ATIParameter *, __int32, unsigned __int32, float);
void ATITemplate::display2D(PrimRectangle const *, ATIParameter *, __int32, unsigned __int32, float) // 0x5E0F57
{
    mangled_assert("?display2D@ATITemplate@@QAEXPBUPrimRectangle@@PAUATIParameter@@HIM@Z");
    todo("implement");
    _sub_5E0F57(this, arg, arg, arg, arg, arg);
}

_extern void _sub_5E10ED(ATITemplate *const, Camera const *, vector3 const *, vector3 const *, float, ATIParameter *, __int32, unsigned __int32, float);
void ATITemplate::display3D(Camera const *, vector3 const *, vector3 const *, float, ATIParameter *, __int32, unsigned __int32, float) // 0x5E10ED
{
    mangled_assert("?display3D@ATITemplate@@QAEXPBVCamera@@PBVvector3@@1MPAUATIParameter@@HIM@Z");
    todo("implement");
    _sub_5E10ED(this, arg, arg, arg, arg, arg, arg, arg, arg);
}

/* ---------- private code */

_extern bool _sub_5E0E97(unsigned __int32, unsigned __int32 const *, unsigned __int32 const *, unsigned __int32);
_static bool checkVisibilityMasks(unsigned __int32 visibility, unsigned __int32 const *visibilityMasks, unsigned __int32 const *invisibilityMasks, unsigned __int32 nMasks) // 0x5E0E97
{
    mangled_assert("checkVisibilityMasks");
    todo("implement");
    bool __result = _sub_5E0E97(visibility, visibilityMasks, invisibilityMasks, nMasks);
    return __result;
}

_extern bool _sub_5E037F(LuaConfig &, char const *, unsigned __int32 &);
_static bool ATIPlacementVisibilityParse(LuaConfig &lc, char const *table, unsigned __int32 &parseTo) // 0x5E037F
{
    mangled_assert("ATIPlacementVisibilityParse");
    todo("implement");
    bool __result = _sub_5E037F(lc, table, parseTo);
    return __result;
}
#endif
