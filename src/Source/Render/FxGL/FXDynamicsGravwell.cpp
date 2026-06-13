#if 0
/* ---------- headers */

#include "decomp.h"
#include <map>
#include <xtree>
#include <Render\FxGL\FXUtil.h>
#include <xstring>
#include <Mathlib\mathutil.h>
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
#include <Render\FxGL\FXMemory.h>
#include <utility>
#include <memory\memorypool.h>
#include <iosfwd>
#include <Mathlib\matrix4.h>
#include <math.h>
#include <Mathlib\vector3.h>
#include <Mathlib\vector4.h>
#include <Render\FxGL\MathHelp.h>
#include <profile\profile.h>
#include <iostream>
#include <list>
#include <Render\FxGL\FXDynamicsGravwell.h>
#include <Render\FxGL\FXManager.h>
#include <debug\ctassert.h>
#include <vector>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- private variables */

/* ---------- public code */

_extern _sub_6F4B6F(FXDynamicsGravwell *const);
FXDynamicsGravwell::FXDynamicsGravwell() // 0x6F4B6F
{
    mangled_assert("??0FXDynamicsGravwell@@QAE@XZ");
    todo("implement");
    _sub_6F4B6F(this);
}

_extern _sub_6F4B2C(FXDynamicsGravwell *const, FXDynamicsGravwell const &);
FXDynamicsGravwell::FXDynamicsGravwell(FXDynamicsGravwell const &) // 0x6F4B2C
{
    mangled_assert("??0FXDynamicsGravwell@@AAE@ABV0@@Z");
    todo("implement");
    _sub_6F4B2C(this, arg);
}

_extern void _sub_6F4B90(FXDynamicsGravwell *const);
FXDynamicsGravwell::~FXDynamicsGravwell() // 0x6F4B90
{
    mangled_assert("??1FXDynamicsGravwell@@UAE@XZ");
    todo("implement");
    _sub_6F4B90(this);
}

_extern FXManager::Dynamics *_sub_6F4BBE(FXDynamicsGravwell const *const);
FXManager::Dynamics *FXDynamicsGravwell::Clone() const // 0x6F4BBE
{
    mangled_assert("?Clone@FXDynamicsGravwell@@UBEPAVDynamics@FXManager@@XZ");
    todo("implement");
    FXManager::Dynamics * __result = _sub_6F4BBE(this);
    return __result;
}

_extern void _sub_6F4BE8(FXDynamicsGravwell *const, vector3 const &);
void FXDynamicsGravwell::InitialPosition(vector3 const &) // 0x6F4BE8
{
    mangled_assert("?InitialPosition@FXDynamicsGravwell@@UAEXABVvector3@@@Z");
    todo("implement");
    _sub_6F4BE8(this, arg);
}

_extern void _sub_6F4BF9(FXDynamicsGravwell *const, vector3 const &);
void FXDynamicsGravwell::InitialVelocity(vector3 const &) // 0x6F4BF9
{
    mangled_assert("?InitialVelocity@FXDynamicsGravwell@@UAEXABVvector3@@@Z");
    todo("implement");
    _sub_6F4BF9(this, arg);
}

_extern void _sub_6F4BDA(FXDynamicsGravwell *const, float const);
void FXDynamicsGravwell::InitialDrag(float const) // 0x6F4BDA
{
    mangled_assert("?InitialDrag@FXDynamicsGravwell@@UAEXM@Z");
    todo("implement");
    _sub_6F4BDA(this, arg);
}

_extern bool _sub_6F4C0A(FXDynamicsGravwell *const, FXManager::Object *, float);
bool FXDynamicsGravwell::MoveObject(FXManager::Object *, float) // 0x6F4C0A
{
    mangled_assert("?MoveObject@FXDynamicsGravwell@@UAE_NPAVObject@FXManager@@M@Z");
    todo("implement");
    bool __result = _sub_6F4C0A(this, arg, arg);
    return __result;
}

/* ---------- private code */
#endif
