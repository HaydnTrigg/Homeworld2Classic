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

_inline FXManager::Dynamics::Dynamics() // 0x6E137D
{
    mangled_assert("??0Dynamics@FXManager@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

FXDynamicsNewton::FXDynamicsNewton() // 0x6E13CF
{
    mangled_assert("??0FXDynamicsNewton@@QAE@XZ");
    todo("implement");
}

FXDynamicsNewton::FXDynamicsNewton(FXDynamicsNewton const &) // 0x6E1386
{
    mangled_assert("??0FXDynamicsNewton@@AAE@ABV0@@Z");
    todo("implement");
}

FXDynamicsNewton::~FXDynamicsNewton() // 0x6E1416
{
    mangled_assert("??1FXDynamicsNewton@@UAE@XZ");
    todo("implement");
}

vector3 const &FXDynamicsNewton::GetGravity() // 0x6E14C3
{
    mangled_assert("?GetGravity@FXDynamicsNewton@@SGABVvector3@@XZ");
    todo("implement");
}

void FXDynamicsNewton::SetGravity(vector3 const &v) // 0x6E16CC
{
    mangled_assert("?SetGravity@FXDynamicsNewton@@SGXABVvector3@@@Z");
    todo("implement");
}

vector3 const &FXDynamicsNewton::GetWind() // 0x6E14D1
{
    mangled_assert("?GetWind@FXDynamicsNewton@@SGABVvector3@@XZ");
    todo("implement");
}

void FXDynamicsNewton::SetWind(vector3 const &v) // 0x6E171D
{
    mangled_assert("?SetWind@FXDynamicsNewton@@SGXABVvector3@@@Z");
    todo("implement");
}

void FXDynamicsNewton::SetCollisionSurf(FXCollisionSurf const *) // 0x6E16AC
{
    mangled_assert("?SetCollisionSurf@FXDynamicsNewton@@QAEXPBVFXCollisionSurf@@@Z");
    todo("implement");
}

float FXDynamicsNewton::GetModifierGravity() const // 0x6E14C9
{
    mangled_assert("?GetModifierGravity@FXDynamicsNewton@@QBEMXZ");
    todo("implement");
}

void FXDynamicsNewton::SetModifierGravity(float) // 0x6E16DF
{
    mangled_assert("?SetModifierGravity@FXDynamicsNewton@@QAEXM@Z");
    todo("implement");
}

float FXDynamicsNewton::GetModifierWind() const // 0x6E14CD
{
    mangled_assert("?GetModifierWind@FXDynamicsNewton@@QBEMXZ");
    todo("implement");
}

void FXDynamicsNewton::SetModifierWind(float) // 0x6E16FE
{
    mangled_assert("?SetModifierWind@FXDynamicsNewton@@QAEXM@Z");
    todo("implement");
}

float FXDynamicsNewton::GetDrag() const // 0x6E14BF
{
    mangled_assert("?GetDrag@FXDynamicsNewton@@QBEMXZ");
    todo("implement");
}

void FXDynamicsNewton::SetDrag(float) // 0x6E16B6
{
    mangled_assert("?SetDrag@FXDynamicsNewton@@QAEXM@Z");
    todo("implement");
}

float FXDynamicsNewton::GetBounceDrag() const // 0x6E14B7
{
    mangled_assert("?GetBounceDrag@FXDynamicsNewton@@QBEMXZ");
    todo("implement");
}

void FXDynamicsNewton::SetBounceDrag(float) // 0x6E167E
{
    mangled_assert("?SetBounceDrag@FXDynamicsNewton@@QAEXM@Z");
    todo("implement");
}

FXDynamicsNewton::CollisionResponse FXDynamicsNewton::GetCollision() const // 0x6E14BB
{
    mangled_assert("?GetCollision@FXDynamicsNewton@@QBE?AW4CollisionResponse@1@XZ");
    todo("implement");
}

void FXDynamicsNewton::SetCollision(FXDynamicsNewton::CollisionResponse) // 0x6E169D
{
    mangled_assert("?SetCollision@FXDynamicsNewton@@QAEXW4CollisionResponse@1@@Z");
    todo("implement");
}

FXManager::Dynamics *FXDynamicsNewton::Clone() const // 0x6E1449
{
    mangled_assert("?Clone@FXDynamicsNewton@@UBEPAVDynamics@FXManager@@XZ");
    todo("implement");
}

void FXDynamicsNewton::InitialPosition(vector3 const &) // 0x6E14E5
{
    mangled_assert("?InitialPosition@FXDynamicsNewton@@UAEXABVvector3@@@Z");
    todo("implement");
}

void FXDynamicsNewton::InitialVelocity(vector3 const &) // 0x6E14F6
{
    mangled_assert("?InitialVelocity@FXDynamicsNewton@@UAEXABVvector3@@@Z");
    todo("implement");
}

void FXDynamicsNewton::InitialDrag(float const) // 0x6E14D7
{
    mangled_assert("?InitialDrag@FXDynamicsNewton@@UAEXM@Z");
    todo("implement");
}

bool FXDynamicsNewton::MoveObject(FXManager::Object *, float) // 0x6E150C
{
    mangled_assert("?MoveObject@FXDynamicsNewton@@UAE_NPAVObject@FXManager@@M@Z");
    todo("implement");
}

bool FXDynamicsNewton::CheckCollision(vector3 &, vector3 &, vector3 const &, vector3 const &, vector3 const &, float) const // 0x6E1444
{
    mangled_assert("?CheckCollision@FXDynamicsNewton@@EBE_NAAVvector3@@0ABV2@11M@Z");
    todo("implement");
}

/* ---------- private code */
#endif
