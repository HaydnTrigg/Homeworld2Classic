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
#include <Render\FxGL\VarMulti.h>
#include <util\colour.h>
#include <new>
#include <exception>
#include <xstddef>
#include <type_traits>
#include <xutility>
#include <utility>
#include <iosfwd>
#include <algorithm>
#include <Mathlib\matrix4.h>
#include <xmemory>
#include <Render\FxGL\FXUtil.h>
#include <Mathlib\mathutil.h>
#include <math.h>
#include <Mathlib\vector3.h>
#include <Mathlib\matrix3.h>
#include <Mathlib\vector4.h>
#include <Render\FxGL\FXMemory.h>
#include <memory\memorypool.h>
#include <Render\FxGL\MathHelp.h>
#include <profile\profile.h>
#include <iostream>
#include <list>
#include <Render\FxGL\FXSpray.h>
#include <Render\FxGL\FXManager.h>
#include <debug\ctassert.h>
#include <vector>

/* ---------- constants */

/* ---------- definitions */

struct `anonymous-namespace'::PROPERTY
{
    char const *name; // 0x0
    char const *desc; // 0x4
};
static_assert(sizeof(`anonymous-namespace'::PROPERTY) == 8, "Invalid `anonymous-namespace'::PROPERTY size");

typedef `anonymous-namespace'::PROPERTY ?A0xd377a4ab::PROPERTY;

/* ---------- prototypes */


_static _inline float randf();
_static _inline vector3 GetInitialPosition(matrix4 const &transform, vector3 const &volume);
_static _inline vector3 GetInitialVelocity(vector3 const &dir, float theta, float v);

/* ---------- globals */

extern FXManager::Style FXSpray::STYLE; // 0x7BDD94

/* ---------- private variables */

/* ---------- public code */

_extern _sub_6E8EAC(FXSpray::Type *const, char const *);
FXSpray::Type::Type(char const *) // 0x6E8EAC
{
    mangled_assert("??0Type@FXSpray@@QAE@PBD@Z");
    todo("implement");
    _sub_6E8EAC(this, arg);
}

_extern void _sub_6E8F92(FXSpray::Type *const);
FXSpray::Type::~Type() // 0x6E8F92
{
    mangled_assert("??1Type@FXSpray@@UAE@XZ");
    todo("implement");
    _sub_6E8F92(this);
}

_extern void _sub_6E9B30(FXSpray::Type *const);
void FXSpray::Type::SetDefaults() // 0x6E9B30
{
    mangled_assert("?SetDefaults@Type@FXSpray@@AAEXXZ");
    todo("implement");
    _sub_6E9B30(this);
}

_extern void _sub_6E9DBE(FXSpray::Type *const);
void FXSpray::Type::SetProperties() // 0x6E9DBE
{
    mangled_assert("?SetProperties@Type@FXSpray@@AAEXXZ");
    todo("implement");
    _sub_6E9DBE(this);
}

_extern FXManager::Style _sub_6E9A6D(FXSpray::Type const *const);
FXManager::Style FXSpray::Type::GetStyle() const // 0x6E9A6D
{
    mangled_assert("?GetStyle@Type@FXSpray@@UBE?AW4Style@FXManager@@XZ");
    todo("implement");
    FXManager::Style __result = _sub_6E9A6D(this);
    return __result;
}

_extern bool _sub_6E9A8E(FXSpray::Type const *const);
bool FXSpray::Type::IsVisible() const // 0x6E9A8E
{
    mangled_assert("?IsVisible@Type@FXSpray@@UBE_NXZ");
    todo("implement");
    bool __result = _sub_6E9A8E(this);
    return __result;
}

_extern float _sub_6E9A5C(FXSpray::Type const *const);
float FXSpray::Type::GetMaximumDuration() const // 0x6E9A5C
{
    mangled_assert("?GetMaximumDuration@Type@FXSpray@@UBEMXZ");
    todo("implement");
    float __result = _sub_6E9A5C(this);
    return __result;
}

_extern void _sub_6E909A(FXSpray::Type const *const, void *, FXManager::Handle const &, FXManager::Handle const &, __int32 const);
void FXSpray::Type::CreateObject(void *, FXManager::Handle const &, FXManager::Handle const &, __int32 const) const // 0x6E909A
{
    mangled_assert("?CreateObject@Type@FXSpray@@UBEXPAXABUHandle@FXManager@@1H@Z");
    todo("implement");
    _sub_6E909A(this, arg, arg, arg, arg);
}

_extern bool _sub_6E9AF9(FXSpray::Type const *const, std::list<FXManager::Type::Property,std::allocator<FXManager::Type::Property> > &);
bool FXSpray::Type::PropertyList(std::list<FXManager::Type::Property,std::allocator<FXManager::Type::Property> > &) const // 0x6E9AF9
{
    mangled_assert("?PropertyList@Type@FXSpray@@UBE_NAAV?$list@UProperty@Type@FXManager@@V?$allocator@UProperty@Type@FXManager@@@std@@@std@@@Z");
    todo("implement");
    bool __result = _sub_6E9AF9(this, arg);
    return __result;
}

_extern bool _sub_6E9AD1(FXSpray::Type const *const, unsigned __int32 const, FXManager::Type::Property &);
bool FXSpray::Type::PropertyAt(unsigned __int32 const, FXManager::Type::Property &) const // 0x6E9AD1
{
    mangled_assert("?PropertyAt@Type@FXSpray@@UBE_NIAAUProperty@1FXManager@@@Z");
    todo("implement");
    bool __result = _sub_6E9AD1(this, arg, arg);
    return __result;
}

_extern bool _sub_6E9AE5(FXSpray::Type const *const, char const *, VarMulti &);
bool FXSpray::Type::PropertyGet(char const *, VarMulti &) const // 0x6E9AE5
{
    mangled_assert("?PropertyGet@Type@FXSpray@@UBE_NPBDAAVVarMulti@@@Z");
    todo("implement");
    bool __result = _sub_6E9AE5(this, arg, arg);
    return __result;
}

_extern bool _sub_6E9B09(FXSpray::Type *const, char const *, VarMulti const &);
bool FXSpray::Type::PropertySet(char const *, VarMulti const &) // 0x6E9B09
{
    mangled_assert("?PropertySet@Type@FXSpray@@UAE_NPBDABVVarMulti@@@Z");
    todo("implement");
    bool __result = _sub_6E9B09(this, arg, arg);
    return __result;
}

_extern void _sub_6E9A91(FXSpray::Type const *const, std::list<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > &);
void FXSpray::Type::LinkedFx(std::list<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > &) const // 0x6E9A91
{
    mangled_assert("?LinkedFx@Type@FXSpray@@UBEXAAV?$list@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@@Z");
    todo("implement");
    _sub_6E9A91(this, arg);
}

_extern void _sub_6E9AB5(FXSpray::Type *const);
void FXSpray::Type::Precache() // 0x6E9AB5
{
    mangled_assert("?Precache@Type@FXSpray@@UAEXXZ");
    todo("implement");
    _sub_6E9AB5(this);
}

_extern void _sub_6E90D5(FXSpray::Type *const);
void FXSpray::Type::Flush() // 0x6E90D5
{
    mangled_assert("?Flush@Type@FXSpray@@UAEXXZ");
    todo("implement");
    _sub_6E90D5(this);
}

_extern void _sub_6E9B2E(FXSpray::Type const *const);
void FXSpray::Type::RenderBegin() const // 0x6E9B2E
{
    mangled_assert("?RenderBegin@Type@FXSpray@@UBEXXZ");
    todo("implement");
    _sub_6E9B2E(this);
}

_extern void _sub_6E9B2F(FXSpray::Type const *const);
void FXSpray::Type::RenderEnd() const // 0x6E9B2F
{
    mangled_assert("?RenderEnd@Type@FXSpray@@UBEXXZ");
    todo("implement");
    _sub_6E9B2F(this);
}

_extern _sub_6E8E79(FXSpray::Obj *const, FXSpray::Type const *, FXManager::Handle const &, FXManager::Handle const &, __int32);
FXSpray::Obj::Obj(FXSpray::Type const *, FXManager::Handle const &, FXManager::Handle const &, __int32) // 0x6E8E79
{
    mangled_assert("??0Obj@FXSpray@@QAE@PBVType@1@ABUHandle@FXManager@@1H@Z");
    todo("implement");
    _sub_6E8E79(this, arg, arg, arg, arg);
}

_extern void _sub_6E8F87(FXSpray::Obj *const);
FXSpray::Obj::~Obj() // 0x6E8F87
{
    mangled_assert("??1Obj@FXSpray@@UAE@XZ");
    todo("implement");
    _sub_6E8F87(this);
}

_extern bool _sub_6EA3A0(FXSpray::Obj *const, float);
bool FXSpray::Obj::Update(float) // 0x6EA3A0
{
    mangled_assert("?Update@Obj@FXSpray@@UAE_NM@Z");
    todo("implement");
    bool __result = _sub_6EA3A0(this, arg);
    return __result;
}

_extern void _sub_6E90D2(FXSpray::Obj *const, float);
void FXSpray::Obj::Display(float) // 0x6E90D2
{
    mangled_assert("?Display@Obj@FXSpray@@UAEXM@Z");
    todo("implement");
    _sub_6E90D2(this, arg);
}

_extern void _sub_6E90D6(FXSpray::Obj *const, float, float, bool);
void FXSpray::Obj::GenerateParticles(float, float, bool) // 0x6E90D6
{
    mangled_assert("?GenerateParticles@Obj@FXSpray@@AAEXMM_N@Z");
    todo("implement");
    _sub_6E90D6(this, arg, arg, arg);
}

/* ---------- private code */

_extern float _sub_6EA50C();
_static _inline float randf() // 0x6EA50C
{
    mangled_assert("randf");
    todo("implement");
    float __result = _sub_6EA50C();
    return __result;
}

_extern vector3 _sub_6E96B5(matrix4 const &, vector3 const &);
_static _inline vector3 GetInitialPosition(matrix4 const &transform, vector3 const &volume) // 0x6E96B5
{
    mangled_assert("GetInitialPosition");
    todo("implement");
    vector3 __result = _sub_6E96B5(transform, volume);
    return __result;
}

_extern vector3 _sub_6E985D(vector3 const &, float, float);
_static _inline vector3 GetInitialVelocity(vector3 const &dir, float theta, float v) // 0x6E985D
{
    mangled_assert("GetInitialVelocity");
    todo("implement");
    vector3 __result = _sub_6E985D(dir, theta, v);
    return __result;
}
#endif
