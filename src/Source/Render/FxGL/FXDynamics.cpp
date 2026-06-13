#if 0
/* ---------- headers */

#include "decomp.h"
#include <map>
#include <boost\scoped_ptr.hpp>
#include <xtree>
#include <xstring>
#include <xmemory0>
#include <Render\FxGL\pch.h>
#include <memory\memorylib.h>
#include <Render\FxGL\VarMulti.h>
#include <util\colour.h>
#include <Render\FxGL\FXUtil.h>
#include <Mathlib\mathutil.h>
#include <new>
#include <exception>
#include <xstddef>
#include <type_traits>
#include <xutility>
#include <utility>
#include <iosfwd>
#include <Mathlib\matrix4.h>
#include <Mathlib\vector3.h>
#include <Mathlib\matrix3.h>
#include <Mathlib\vector4.h>
#include <boost\checked_delete.hpp>
#include <Render\FxGL\FXCollisionSurf.h>
#include <Render\FxGL\MathHelp.h>
#include <profile\profile.h>
#include <iostream>
#include <list>
#include <Render\FxGL\FXMemory.h>
#include <memory\memorypool.h>
#include <Render\FxGL\FXDynamics.h>
#include <Render\FxGL\FXManager.h>
#include <debug\ctassert.h>
#include <vector>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

extern vector3 FXDynamicsNewton::s_gravity; // 0x84129C
extern vector3 FXDynamicsNewton::s_wind; // 0x84CBE0
extern boost::scoped_ptr<FXCollisionSurf> FXDynamicsNewton::s_defaultColSurf; // 0x84CBDC

/* ---------- private variables */

/* ---------- public code */

_extern _sub_6E137D(FXManager::Dynamics *const);
_inline FXManager::Dynamics::Dynamics() // 0x6E137D
{
    mangled_assert("??0Dynamics@FXManager@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_6E137D(this);
}

_extern _sub_6E13CF(FXDynamicsNewton *const);
FXDynamicsNewton::FXDynamicsNewton() // 0x6E13CF
{
    mangled_assert("??0FXDynamicsNewton@@QAE@XZ");
    todo("implement");
    _sub_6E13CF(this);
}

_extern _sub_6E1386(FXDynamicsNewton *const, FXDynamicsNewton const &);
FXDynamicsNewton::FXDynamicsNewton(FXDynamicsNewton const &) // 0x6E1386
{
    mangled_assert("??0FXDynamicsNewton@@AAE@ABV0@@Z");
    todo("implement");
    _sub_6E1386(this, arg);
}

_extern void _sub_6E1416(FXDynamicsNewton *const);
FXDynamicsNewton::~FXDynamicsNewton() // 0x6E1416
{
    mangled_assert("??1FXDynamicsNewton@@UAE@XZ");
    todo("implement");
    _sub_6E1416(this);
}

_extern vector3 const &_sub_6E14C3();
vector3 const &FXDynamicsNewton::GetGravity() // 0x6E14C3
{
    mangled_assert("?GetGravity@FXDynamicsNewton@@SGABVvector3@@XZ");
    todo("implement");
    vector3 const & __result = _sub_6E14C3();
    return __result;
}

_extern void _sub_6E16CC(vector3 const &);
void FXDynamicsNewton::SetGravity(vector3 const &v) // 0x6E16CC
{
    mangled_assert("?SetGravity@FXDynamicsNewton@@SGXABVvector3@@@Z");
    todo("implement");
    _sub_6E16CC(v);
}

_extern vector3 const &_sub_6E14D1();
vector3 const &FXDynamicsNewton::GetWind() // 0x6E14D1
{
    mangled_assert("?GetWind@FXDynamicsNewton@@SGABVvector3@@XZ");
    todo("implement");
    vector3 const & __result = _sub_6E14D1();
    return __result;
}

_extern void _sub_6E171D(vector3 const &);
void FXDynamicsNewton::SetWind(vector3 const &v) // 0x6E171D
{
    mangled_assert("?SetWind@FXDynamicsNewton@@SGXABVvector3@@@Z");
    todo("implement");
    _sub_6E171D(v);
}

_extern void _sub_6E16AC(FXDynamicsNewton *const, FXCollisionSurf const *);
void FXDynamicsNewton::SetCollisionSurf(FXCollisionSurf const *) // 0x6E16AC
{
    mangled_assert("?SetCollisionSurf@FXDynamicsNewton@@QAEXPBVFXCollisionSurf@@@Z");
    todo("implement");
    _sub_6E16AC(this, arg);
}

_extern float _sub_6E14C9(FXDynamicsNewton const *const);
float FXDynamicsNewton::GetModifierGravity() const // 0x6E14C9
{
    mangled_assert("?GetModifierGravity@FXDynamicsNewton@@QBEMXZ");
    todo("implement");
    float __result = _sub_6E14C9(this);
    return __result;
}

_extern void _sub_6E16DF(FXDynamicsNewton *const, float);
void FXDynamicsNewton::SetModifierGravity(float) // 0x6E16DF
{
    mangled_assert("?SetModifierGravity@FXDynamicsNewton@@QAEXM@Z");
    todo("implement");
    _sub_6E16DF(this, arg);
}

_extern float _sub_6E14CD(FXDynamicsNewton const *const);
float FXDynamicsNewton::GetModifierWind() const // 0x6E14CD
{
    mangled_assert("?GetModifierWind@FXDynamicsNewton@@QBEMXZ");
    todo("implement");
    float __result = _sub_6E14CD(this);
    return __result;
}

_extern void _sub_6E16FE(FXDynamicsNewton *const, float);
void FXDynamicsNewton::SetModifierWind(float) // 0x6E16FE
{
    mangled_assert("?SetModifierWind@FXDynamicsNewton@@QAEXM@Z");
    todo("implement");
    _sub_6E16FE(this, arg);
}

_extern float _sub_6E14BF(FXDynamicsNewton const *const);
float FXDynamicsNewton::GetDrag() const // 0x6E14BF
{
    mangled_assert("?GetDrag@FXDynamicsNewton@@QBEMXZ");
    todo("implement");
    float __result = _sub_6E14BF(this);
    return __result;
}

_extern void _sub_6E16B6(FXDynamicsNewton *const, float);
void FXDynamicsNewton::SetDrag(float) // 0x6E16B6
{
    mangled_assert("?SetDrag@FXDynamicsNewton@@QAEXM@Z");
    todo("implement");
    _sub_6E16B6(this, arg);
}

_extern float _sub_6E14B7(FXDynamicsNewton const *const);
float FXDynamicsNewton::GetBounceDrag() const // 0x6E14B7
{
    mangled_assert("?GetBounceDrag@FXDynamicsNewton@@QBEMXZ");
    todo("implement");
    float __result = _sub_6E14B7(this);
    return __result;
}

_extern void _sub_6E167E(FXDynamicsNewton *const, float);
void FXDynamicsNewton::SetBounceDrag(float) // 0x6E167E
{
    mangled_assert("?SetBounceDrag@FXDynamicsNewton@@QAEXM@Z");
    todo("implement");
    _sub_6E167E(this, arg);
}

_extern FXDynamicsNewton::CollisionResponse _sub_6E14BB(FXDynamicsNewton const *const);
FXDynamicsNewton::CollisionResponse FXDynamicsNewton::GetCollision() const // 0x6E14BB
{
    mangled_assert("?GetCollision@FXDynamicsNewton@@QBE?AW4CollisionResponse@1@XZ");
    todo("implement");
    FXDynamicsNewton::CollisionResponse __result = _sub_6E14BB(this);
    return __result;
}

_extern void _sub_6E169D(FXDynamicsNewton *const, FXDynamicsNewton::CollisionResponse);
void FXDynamicsNewton::SetCollision(FXDynamicsNewton::CollisionResponse) // 0x6E169D
{
    mangled_assert("?SetCollision@FXDynamicsNewton@@QAEXW4CollisionResponse@1@@Z");
    todo("implement");
    _sub_6E169D(this, arg);
}

_extern FXManager::Dynamics *_sub_6E1449(FXDynamicsNewton const *const);
FXManager::Dynamics *FXDynamicsNewton::Clone() const // 0x6E1449
{
    mangled_assert("?Clone@FXDynamicsNewton@@UBEPAVDynamics@FXManager@@XZ");
    todo("implement");
    FXManager::Dynamics * __result = _sub_6E1449(this);
    return __result;
}

_extern void _sub_6E14E5(FXDynamicsNewton *const, vector3 const &);
void FXDynamicsNewton::InitialPosition(vector3 const &) // 0x6E14E5
{
    mangled_assert("?InitialPosition@FXDynamicsNewton@@UAEXABVvector3@@@Z");
    todo("implement");
    _sub_6E14E5(this, arg);
}

_extern void _sub_6E14F6(FXDynamicsNewton *const, vector3 const &);
void FXDynamicsNewton::InitialVelocity(vector3 const &) // 0x6E14F6
{
    mangled_assert("?InitialVelocity@FXDynamicsNewton@@UAEXABVvector3@@@Z");
    todo("implement");
    _sub_6E14F6(this, arg);
}

_extern void _sub_6E14D7(FXDynamicsNewton *const, float const);
void FXDynamicsNewton::InitialDrag(float const) // 0x6E14D7
{
    mangled_assert("?InitialDrag@FXDynamicsNewton@@UAEXM@Z");
    todo("implement");
    _sub_6E14D7(this, arg);
}

_extern bool _sub_6E150C(FXDynamicsNewton *const, FXManager::Object *, float);
bool FXDynamicsNewton::MoveObject(FXManager::Object *, float) // 0x6E150C
{
    mangled_assert("?MoveObject@FXDynamicsNewton@@UAE_NPAVObject@FXManager@@M@Z");
    todo("implement");
    bool __result = _sub_6E150C(this, arg, arg);
    return __result;
}

_extern bool _sub_6E1444(FXDynamicsNewton const *const, vector3 &, vector3 &, vector3 const &, vector3 const &, vector3 const &, float);
bool FXDynamicsNewton::CheckCollision(vector3 &, vector3 &, vector3 const &, vector3 const &, vector3 const &, float) const // 0x6E1444
{
    mangled_assert("?CheckCollision@FXDynamicsNewton@@EBE_NAAVvector3@@0ABV2@11M@Z");
    todo("implement");
    bool __result = _sub_6E1444(this, arg, arg, arg, arg, arg, arg);
    return __result;
}

/* ---------- private code */
#endif
