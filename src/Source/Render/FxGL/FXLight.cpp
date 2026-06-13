#if 0
/* ---------- headers */

#include "decomp.h"
#include <map>
#include <Render\FxGL\FXProperty.h>
#include <xtree>
#include <xstring>
#include <xmemory0>
#include <Render\FxGL\pch.h>
#include <memory\memorylib.h>
#include <Render\gl\r_types.h>
#include <Render\FxGL\VarMulti.h>
#include <Render\FxGL\MathHelp.h>
#include <util\colour.h>
#include <profile\profile.h>
#include <iostream>
#include <new>
#include <xstddef>
#include <type_traits>
#include <xutility>
#include <utility>
#include <iosfwd>
#include <algorithm>
#include <Mathlib\matrix4.h>
#include <xmemory>
#include <util\types.h>
#include <Render\gl\r_defines.h>
#include <Render\gl\glext.h>
#include <math.h>
#include <Render\FxGL\FXGL.h>
#include <Mathlib\vector3.h>
#include <Mathlib\matrix3.h>
#include <Render\objects\light.h>
#include <Mathlib\vector4.h>
#include <Render\objects\objects.h>
#include <Render\gl\types.h>
#include <Mathlib\mathlibdll.h>
#include <Mathlib\matvec.h>
#include <Mathlib\fastmath.h>
#include <Mathlib\vector2.h>
#include <Render\FxGL\FXUtil.h>
#include <Mathlib\mathutil.h>
#include <Render\FxGL\FXMemory.h>
#include <memory\memorypool.h>
#include <platform\osdef.h>
#include <list>
#include <Render\FxGL\FXLight.h>
#include <Render\FxGL\FXManager.h>
#include <debug\ctassert.h>
#include <Render\gl\lotypes.h>
#include <vector>

/* ---------- constants */

/* ---------- definitions */

struct `anonymous-namespace'::PROPERTY
{
    char const *name; // 0x0
    char const *desc; // 0x4
};
static_assert(sizeof(`anonymous-namespace'::PROPERTY) == 8, "Invalid `anonymous-namespace'::PROPERTY size");

/* ---------- prototypes */

/* ---------- globals */

extern FXManager::Style FXLight::STYLE; // 0x7BE8DC

/* ---------- private variables */

/* ---------- public code */

_extern _sub_6F0D9A(FXLight::Type *const, char const *);
FXLight::Type::Type(char const *) // 0x6F0D9A
{
    mangled_assert("??0Type@FXLight@@QAE@PBD@Z");
    todo("implement");
    _sub_6F0D9A(this, arg);
}

_extern void _sub_6F0E3D(FXLight::Type *const);
FXLight::Type::~Type() // 0x6F0E3D
{
    mangled_assert("??1Type@FXLight@@UAE@XZ");
    todo("implement");
    _sub_6F0E3D(this);
}

_extern void _sub_6F0FD6(FXLight::Type *const);
void FXLight::Type::SetDefaults() // 0x6F0FD6
{
    mangled_assert("?SetDefaults@Type@FXLight@@AAEXXZ");
    todo("implement");
    _sub_6F0FD6(this);
}

_extern void _sub_6F1109(FXLight::Type *const);
void FXLight::Type::SetProperties() // 0x6F1109
{
    mangled_assert("?SetProperties@Type@FXLight@@AAEXXZ");
    todo("implement");
    _sub_6F1109(this);
}

_extern FXManager::Style _sub_6F0F63(FXLight::Type const *const);
FXManager::Style FXLight::Type::GetStyle() const // 0x6F0F63
{
    mangled_assert("?GetStyle@Type@FXLight@@UBE?AW4Style@FXManager@@XZ");
    todo("implement");
    FXManager::Style __result = _sub_6F0F63(this);
    return __result;
}

_extern bool _sub_6F0F67(FXLight::Type const *const);
bool FXLight::Type::IsVisible() const // 0x6F0F67
{
    mangled_assert("?IsVisible@Type@FXLight@@UBE_NXZ");
    todo("implement");
    bool __result = _sub_6F0F67(this);
    return __result;
}

_extern float _sub_6F0F5F(FXLight::Type const *const);
float FXLight::Type::GetMaximumDuration() const // 0x6F0F5F
{
    mangled_assert("?GetMaximumDuration@Type@FXLight@@UBEMXZ");
    todo("implement");
    float __result = _sub_6F0F5F(this);
    return __result;
}

_extern void _sub_6F0F0E(FXLight::Type const *const, void *, FXManager::Handle const &, FXManager::Handle const &, __int32 const);
void FXLight::Type::CreateObject(void *, FXManager::Handle const &, FXManager::Handle const &, __int32 const) const // 0x6F0F0E
{
    mangled_assert("?CreateObject@Type@FXLight@@UBEXPAXABUHandle@FXManager@@1H@Z");
    todo("implement");
    _sub_6F0F0E(this, arg, arg, arg, arg);
}

_extern bool _sub_6F0F9F(FXLight::Type const *const, std::list<FXManager::Type::Property,std::allocator<FXManager::Type::Property> > &);
bool FXLight::Type::PropertyList(std::list<FXManager::Type::Property,std::allocator<FXManager::Type::Property> > &) const // 0x6F0F9F
{
    mangled_assert("?PropertyList@Type@FXLight@@UBE_NAAV?$list@UProperty@Type@FXManager@@V?$allocator@UProperty@Type@FXManager@@@std@@@std@@@Z");
    todo("implement");
    bool __result = _sub_6F0F9F(this, arg);
    return __result;
}

_extern bool _sub_6F0F77(FXLight::Type const *const, unsigned __int32 const, FXManager::Type::Property &);
bool FXLight::Type::PropertyAt(unsigned __int32 const, FXManager::Type::Property &) const // 0x6F0F77
{
    mangled_assert("?PropertyAt@Type@FXLight@@UBE_NIAAUProperty@1FXManager@@@Z");
    todo("implement");
    bool __result = _sub_6F0F77(this, arg, arg);
    return __result;
}

_extern bool _sub_6F0F8B(FXLight::Type const *const, char const *, VarMulti &);
bool FXLight::Type::PropertyGet(char const *, VarMulti &) const // 0x6F0F8B
{
    mangled_assert("?PropertyGet@Type@FXLight@@UBE_NPBDAAVVarMulti@@@Z");
    todo("implement");
    bool __result = _sub_6F0F8B(this, arg, arg);
    return __result;
}

_extern bool _sub_6F0FAF(FXLight::Type *const, char const *, VarMulti const &);
bool FXLight::Type::PropertySet(char const *, VarMulti const &) // 0x6F0FAF
{
    mangled_assert("?PropertySet@Type@FXLight@@UAE_NPBDABVVarMulti@@@Z");
    todo("implement");
    bool __result = _sub_6F0FAF(this, arg, arg);
    return __result;
}

_extern void _sub_6F0F6A(FXLight::Type const *const, std::list<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > &);
void FXLight::Type::LinkedFx(std::list<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > &) const // 0x6F0F6A
{
    mangled_assert("?LinkedFx@Type@FXLight@@UBEXAAV?$list@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@@Z");
    todo("implement");
    _sub_6F0F6A(this, arg);
}

_extern void _sub_6F0F76(FXLight::Type *const);
void FXLight::Type::Precache() // 0x6F0F76
{
    mangled_assert("?Precache@Type@FXLight@@UAEXXZ");
    todo("implement");
    _sub_6F0F76(this);
}

_extern void _sub_6F0F5E(FXLight::Type *const);
void FXLight::Type::Flush() // 0x6F0F5E
{
    mangled_assert("?Flush@Type@FXLight@@UAEXXZ");
    todo("implement");
    _sub_6F0F5E(this);
}

_extern void _sub_6F0FD4(FXLight::Type const *const);
void FXLight::Type::RenderBegin() const // 0x6F0FD4
{
    mangled_assert("?RenderBegin@Type@FXLight@@UBEXXZ");
    todo("implement");
    _sub_6F0FD4(this);
}

_extern void _sub_6F0FD5(FXLight::Type const *const);
void FXLight::Type::RenderEnd() const // 0x6F0FD5
{
    mangled_assert("?RenderEnd@Type@FXLight@@UBEXXZ");
    todo("implement");
    _sub_6F0FD5(this);
}

_extern _sub_6F0C9F(FXLight::Obj *const, FXLight::Type const *, FXManager::Handle const &, FXManager::Handle const &, __int32);
FXLight::Obj::Obj(FXLight::Type const *, FXManager::Handle const &, FXManager::Handle const &, __int32) // 0x6F0C9F
{
    mangled_assert("??0Obj@FXLight@@QAE@PBVType@1@ABUHandle@FXManager@@1H@Z");
    todo("implement");
    _sub_6F0C9F(this, arg, arg, arg, arg);
}

_extern void _sub_6F0E05(FXLight::Obj *const);
FXLight::Obj::~Obj() // 0x6F0E05
{
    mangled_assert("??1Obj@FXLight@@UAE@XZ");
    todo("implement");
    _sub_6F0E05(this);
}

_extern void _sub_6F14FA(FXLight::Obj *const);
void FXLight::Obj::UpdateRadius() // 0x6F14FA
{
    mangled_assert("?UpdateRadius@Obj@FXLight@@AAEXXZ");
    todo("implement");
    _sub_6F14FA(this);
}

_extern bool _sub_6F129C(FXLight::Obj *const, float);
bool FXLight::Obj::Update(float) // 0x6F129C
{
    mangled_assert("?Update@Obj@FXLight@@UAE_NM@Z");
    todo("implement");
    bool __result = _sub_6F129C(this, arg);
    return __result;
}

_extern void _sub_6F0F5B(FXLight::Obj *const, float);
void FXLight::Obj::Display(float) // 0x6F0F5B
{
    mangled_assert("?Display@Obj@FXLight@@UAEXM@Z");
    todo("implement");
    _sub_6F0F5B(this, arg);
}

_extern void _sub_6F0ECA(FXLight::Obj *const);
void FXLight::Obj::CreateLight() // 0x6F0ECA
{
    mangled_assert("?CreateLight@Obj@FXLight@@AAEXXZ");
    todo("implement");
    _sub_6F0ECA(this);
}

_extern void _sub_6F0F46(FXLight::Obj *const);
void FXLight::Obj::DestroyLight() // 0x6F0F46
{
    mangled_assert("?DestroyLight@Obj@FXLight@@AAEXXZ");
    todo("implement");
    _sub_6F0F46(this);
}

_extern void _sub_6F14AF(FXLight::Obj *const, vector3 const &, vector4 const &, float);
void FXLight::Obj::UpdateLight(vector3 const &, vector4 const &, float) // 0x6F14AF
{
    mangled_assert("?UpdateLight@Obj@FXLight@@AAEXABVvector3@@ABVvector4@@M@Z");
    todo("implement");
    _sub_6F14AF(this, arg, arg, arg);
}

/* ---------- private code */
#endif
