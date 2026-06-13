#if 0
/* ---------- headers */

#include "decomp.h"
#include <Mathlib\mathutil.h>
#include <Render\FxGL\FXProperty.h>
#include <xstring>
#include <Render\gl\lotypes.h>
#include <xmemory0>
#include <Render\FxGL\pch.h>
#include <memory\memorylib.h>
#include <Render\gl\r_types.h>
#include <Render\FxGL\MathHelp.h>
#include <Render\FxGL\VarMulti.h>
#include <util\colour.h>
#include <Render\objects\texture.h>
#include <Render\objects\objects.h>
#include <Render\objects\core.h>
#include <new>
#include <assist\typemagic.h>
#include <xstddef>
#include <type_traits>
#include <Render\FxGL\FXMemory.h>
#include <memory\memorypool.h>
#include <xutility>
#include <utility>
#include <iosfwd>
#include <algorithm>
#include <Mathlib\matrix4.h>
#include <xmemory>
#include <util\types.h>
#include <Render\gl\r_defines.h>
#include <math.h>
#include <Render\gl\glext.h>
#include <Mathlib\vector3.h>
#include <Render\objects\textureanim.h>
#include <Mathlib\matrix3.h>
#include <Mathlib\vector4.h>
#include <Mathlib\mathlibdll.h>
#include <Mathlib\fastmath.h>
#include <Render\FxGL\FXGL.h>
#include <Render\objects\textureregistry.h>
#include <Render\objects\lensflare.h>
#include <fileio\filepath.h>
#include <fileio\fileioexports.h>
#include <platform\osdef.h>
#include <fileio\bytestream.h>
#include <assist\fixedstring.h>
#include <assist\stlexstring.h>
#include <debug\db.h>
#include <list>
#include <wchar.h>
#include <Render\FxGL\FXShader.h>
#include <assist\faststring.h>
#include <Mathlib\vector2.h>
#include <Render\FxGL\FXLensFlare.h>
#include <Render\FxGL\FXManager.h>
#include <Render\gl\types.h>
#include <debug\ctassert.h>
#include <Mathlib\matvec.h>
#include <Render\FxGL\FXUtil.h>
#include <vector>

/* ---------- constants */

/* ---------- definitions */

struct `anonymous-namespace'::PROPERTY
{
    char const *name; // 0x0
    char const *desc; // 0x4
};
static_assert(sizeof(`anonymous-namespace'::PROPERTY) == 8, "Invalid `anonymous-namespace'::PROPERTY size");

typedef `anonymous-namespace'::PROPERTY ?A0x9b92f253::PROPERTY;

/* ---------- prototypes */

/* ---------- globals */

extern FXManager::Style FXLensFlare::STYLE; // 0x7BEBC8

/* ---------- private variables */

/* ---------- public code */

_extern _sub_6F3BC4(FXLensFlare::Type *const, char const *);
FXLensFlare::Type::Type(char const *) // 0x6F3BC4
{
    mangled_assert("??0Type@FXLensFlare@@QAE@PBD@Z");
    todo("implement");
    _sub_6F3BC4(this, arg);
}

_extern void _sub_6F3C6B(FXLensFlare::Type *const);
FXLensFlare::Type::~Type() // 0x6F3C6B
{
    mangled_assert("??1Type@FXLensFlare@@UAE@XZ");
    todo("implement");
    _sub_6F3C6B(this);
}

_extern FXManager::Style _sub_6F3DC0(FXLensFlare::Type const *const);
FXManager::Style FXLensFlare::Type::GetStyle() const // 0x6F3DC0
{
    mangled_assert("?GetStyle@Type@FXLensFlare@@UBE?AW4Style@FXManager@@XZ");
    todo("implement");
    FXManager::Style __result = _sub_6F3DC0(this);
    return __result;
}

_extern float _sub_6F3DBC(FXLensFlare::Type const *const);
float FXLensFlare::Type::GetMaximumDuration() const // 0x6F3DBC
{
    mangled_assert("?GetMaximumDuration@Type@FXLensFlare@@UBEMXZ");
    todo("implement");
    float __result = _sub_6F3DBC(this);
    return __result;
}

_extern void _sub_6F3D60(FXLensFlare::Type const *const, void *, FXManager::Handle const &, FXManager::Handle const &, __int32 const);
void FXLensFlare::Type::CreateObject(void *, FXManager::Handle const &, FXManager::Handle const &, __int32 const) const // 0x6F3D60
{
    mangled_assert("?CreateObject@Type@FXLensFlare@@UBEXPAXABUHandle@FXManager@@1H@Z");
    todo("implement");
    _sub_6F3D60(this, arg, arg, arg, arg);
}

_extern void _sub_6F3E2E(FXLensFlare::Type const *const);
void FXLensFlare::Type::RenderBegin() const // 0x6F3E2E
{
    mangled_assert("?RenderBegin@Type@FXLensFlare@@UBEXXZ");
    todo("implement");
    _sub_6F3E2E(this);
}

_extern void _sub_6F3E2F(FXLensFlare::Type const *const);
void FXLensFlare::Type::RenderEnd() const // 0x6F3E2F
{
    mangled_assert("?RenderEnd@Type@FXLensFlare@@UBEXXZ");
    todo("implement");
    _sub_6F3E2F(this);
}

_extern void _sub_6F3DC4(FXLensFlare::Type const *const, std::list<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > &);
void FXLensFlare::Type::LinkedFx(std::list<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > &) const // 0x6F3DC4
{
    mangled_assert("?LinkedFx@Type@FXLensFlare@@UBEXAAV?$list@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@@Z");
    todo("implement");
    _sub_6F3DC4(this, arg);
}

_extern bool _sub_6F3DF9(FXLensFlare::Type const *const, std::list<FXManager::Type::Property,std::allocator<FXManager::Type::Property> > &);
bool FXLensFlare::Type::PropertyList(std::list<FXManager::Type::Property,std::allocator<FXManager::Type::Property> > &) const // 0x6F3DF9
{
    mangled_assert("?PropertyList@Type@FXLensFlare@@UBE_NAAV?$list@UProperty@Type@FXManager@@V?$allocator@UProperty@Type@FXManager@@@std@@@std@@@Z");
    todo("implement");
    bool __result = _sub_6F3DF9(this, arg);
    return __result;
}

_extern bool _sub_6F3DD1(FXLensFlare::Type const *const, unsigned __int32 const, FXManager::Type::Property &);
bool FXLensFlare::Type::PropertyAt(unsigned __int32 const, FXManager::Type::Property &) const // 0x6F3DD1
{
    mangled_assert("?PropertyAt@Type@FXLensFlare@@UBE_NIAAUProperty@1FXManager@@@Z");
    todo("implement");
    bool __result = _sub_6F3DD1(this, arg, arg);
    return __result;
}

_extern bool _sub_6F3DE5(FXLensFlare::Type const *const, char const *, VarMulti &);
bool FXLensFlare::Type::PropertyGet(char const *, VarMulti &) const // 0x6F3DE5
{
    mangled_assert("?PropertyGet@Type@FXLensFlare@@UBE_NPBDAAVVarMulti@@@Z");
    todo("implement");
    bool __result = _sub_6F3DE5(this, arg, arg);
    return __result;
}

_extern bool _sub_6F3E09(FXLensFlare::Type *const, char const *, VarMulti const &);
bool FXLensFlare::Type::PropertySet(char const *, VarMulti const &) // 0x6F3E09
{
    mangled_assert("?PropertySet@Type@FXLensFlare@@UAE_NPBDABVVarMulti@@@Z");
    todo("implement");
    bool __result = _sub_6F3E09(this, arg, arg);
    return __result;
}

_extern void _sub_6F3E30(FXLensFlare::Type *const);
void FXLensFlare::Type::SetDefaults() // 0x6F3E30
{
    mangled_assert("?SetDefaults@Type@FXLensFlare@@AAEXXZ");
    todo("implement");
    _sub_6F3E30(this);
}

_extern void _sub_6F3F05(FXLensFlare::Type *const);
void FXLensFlare::Type::SetProperties() // 0x6F3F05
{
    mangled_assert("?SetProperties@Type@FXLensFlare@@AAEXXZ");
    todo("implement");
    _sub_6F3F05(this);
}

_extern void _sub_6F3DD0(FXLensFlare::Type *const);
void FXLensFlare::Type::Precache() // 0x6F3DD0
{
    mangled_assert("?Precache@Type@FXLensFlare@@UAEXXZ");
    todo("implement");
    _sub_6F3DD0(this);
}

_extern void _sub_6F3DBB(FXLensFlare::Type *const);
void FXLensFlare::Type::Flush() // 0x6F3DBB
{
    mangled_assert("?Flush@Type@FXLensFlare@@UAEXXZ");
    todo("implement");
    _sub_6F3DBB(this);
}

_extern _sub_6F3B51(FXLensFlare::Obj *const, FXLensFlare::Type const *, FXManager::Handle const &, FXManager::Handle const &, unsigned __int32);
FXLensFlare::Obj::Obj(FXLensFlare::Type const *, FXManager::Handle const &, FXManager::Handle const &, unsigned __int32) // 0x6F3B51
{
    mangled_assert("??0Obj@FXLensFlare@@QAE@PBVType@1@ABUHandle@FXManager@@1I@Z");
    todo("implement");
    _sub_6F3B51(this, arg, arg, arg, arg);
}

_extern void _sub_6F3C33(FXLensFlare::Obj *const);
FXLensFlare::Obj::~Obj() // 0x6F3C33
{
    mangled_assert("??1Obj@FXLensFlare@@UAE@XZ");
    todo("implement");
    _sub_6F3C33(this);
}

_extern void _sub_6F405D(FXLensFlare::Obj *const, matrix4 const &);
void FXLensFlare::Obj::SetTransform(matrix4 const &) // 0x6F405D
{
    mangled_assert("?SetTransform@Obj@FXLensFlare@@UAEXABVmatrix4@@@Z");
    todo("implement");
    _sub_6F405D(this, arg);
}

_extern void _sub_6F4238(FXLensFlare::Obj *const);
void FXLensFlare::Obj::UpdateRadius() // 0x6F4238
{
    mangled_assert("?UpdateRadius@Obj@FXLensFlare@@AAEXXZ");
    todo("implement");
    _sub_6F4238(this);
}

_extern void _sub_6F40CD(FXLensFlare::Obj *const, bool);
void FXLensFlare::Obj::SetVisible(bool) // 0x6F40CD
{
    mangled_assert("?SetVisible@Obj@FXLensFlare@@UAEX_N@Z");
    todo("implement");
    _sub_6F40CD(this, arg);
}

_extern bool _sub_6F40F5(FXLensFlare::Obj *const, float);
bool FXLensFlare::Obj::Update(float) // 0x6F40F5
{
    mangled_assert("?Update@Obj@FXLensFlare@@UAE_NM@Z");
    todo("implement");
    bool __result = _sub_6F40F5(this, arg);
    return __result;
}

_extern void _sub_6F3DB8(FXLensFlare::Obj *const, float);
void FXLensFlare::Obj::Display(float) // 0x6F3DB8
{
    mangled_assert("?Display@Obj@FXLensFlare@@UAEXM@Z");
    todo("implement");
    _sub_6F3DB8(this, arg);
}

_extern void _sub_6F3CF8(FXLensFlare::Obj *const);
void FXLensFlare::Obj::CreateFlare() // 0x6F3CF8
{
    mangled_assert("?CreateFlare@Obj@FXLensFlare@@AAEXXZ");
    todo("implement");
    _sub_6F3CF8(this);
}

_extern void _sub_6F3D98(FXLensFlare::Obj *const);
void FXLensFlare::Obj::DestroyFlare() // 0x6F3D98
{
    mangled_assert("?DestroyFlare@Obj@FXLensFlare@@AAEXXZ");
    todo("implement");
    _sub_6F3D98(this);
}

_extern void _sub_6F41D1(FXLensFlare::Obj *const, vector3 const &, vector4 const &, float);
void FXLensFlare::Obj::UpdateFlare(vector3 const &, vector4 const &, float) // 0x6F41D1
{
    mangled_assert("?UpdateFlare@Obj@FXLensFlare@@AAEXABVvector3@@ABVvector4@@M@Z");
    todo("implement");
    _sub_6F41D1(this, arg, arg, arg);
}

/* ---------- private code */
#endif
