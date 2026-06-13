#if 0
/* ---------- headers */

#include "decomp.h"
#include <Objects\pch.h>
#include <math.h>
#include <util\types.h>
#include <Objects\ImplicitSurface\MarchingCube.h>
#include <Objects\Objects.h>
#include <Mathlib\vector3.h>
#include <Mathlib\vector4.h>
#include <Mathlib\mathlibdll.h>
#include <Mathlib\fastmath.h>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- private variables */

/* ---------- public code */

_extern _sub_100AFAC0(MarchingCube *const);
MarchingCube::MarchingCube() // 0x100AFAC0
{
    mangled_assert("??0MarchingCube@@QAE@XZ");
    todo("implement");
    _sub_100AFAC0(this);
}

_extern void _sub_100AFAD0(MarchingCube *const);
MarchingCube::~MarchingCube() // 0x100AFAD0
{
    mangled_assert("??1MarchingCube@@QAE@XZ");
    todo("implement");
    _sub_100AFAD0(this);
}

_extern void _sub_100AFBB0(MarchingCube *const, float, float, float, float, float, float);
void MarchingCube::setBoundingBox(float, float, float, float, float, float) // 0x100AFBB0
{
    mangled_assert("?setBoundingBox@MarchingCube@@QAEXMMMMMM@Z");
    todo("implement");
    _sub_100AFBB0(this, arg, arg, arg, arg, arg, arg);
}

_extern void _sub_100AFB40(MarchingCube *const, vector3 const &, vector3 const &);
void MarchingCube::setBoundingBox(vector3 const &, vector3 const &) // 0x100AFB40
{
    mangled_assert("?setBoundingBox@MarchingCube@@QAEXABVvector3@@0@Z");
    todo("implement");
    _sub_100AFB40(this, arg, arg);
}

_extern void _sub_100AFC30(MarchingCube *const, unsigned __int32, unsigned __int32, unsigned __int32);
void MarchingCube::setCubeletDensity(unsigned __int32, unsigned __int32, unsigned __int32) // 0x100AFC30
{
    mangled_assert("?setCubeletDensity@MarchingCube@@QAEXIII@Z");
    todo("implement");
    _sub_100AFC30(this, arg, arg, arg);
}

_extern void _sub_100AFD00(MarchingCube *const, unsigned __int32, unsigned __int32, unsigned __int32);
void MarchingCube::setCurrentCubelet(unsigned __int32, unsigned __int32, unsigned __int32) // 0x100AFD00
{
    mangled_assert("?setCurrentCubelet@MarchingCube@@QAEXIII@Z");
    todo("implement");
    _sub_100AFD00(this, arg, arg, arg);
}

_extern void _sub_100AFB20(MarchingCube *const, unsigned __int32 &, unsigned __int32 &, unsigned __int32 &);
void MarchingCube::getNumCubelets(unsigned __int32 &, unsigned __int32 &, unsigned __int32 &) // 0x100AFB20
{
    mangled_assert("?getNumCubelets@MarchingCube@@QAEXAAI00@Z");
    todo("implement");
    _sub_100AFB20(this, arg, arg, arg);
}

_extern vector3 const &_sub_100AFAE0(MarchingCube const *const, __int32);
vector3 const &MarchingCube::getCorner(__int32) const // 0x100AFAE0
{
    mangled_assert("?getCorner@MarchingCube@@QBEABVvector3@@H@Z");
    todo("implement");
    vector3 const & __result = _sub_100AFAE0(this, arg);
    return __result;
}

_extern void _sub_100AFAF0(MarchingCube const *const, unsigned __int32 &, unsigned __int32 &, unsigned __int32 &);
void MarchingCube::getLocation(unsigned __int32 &, unsigned __int32 &, unsigned __int32 &) const // 0x100AFAF0
{
    mangled_assert("?getLocation@MarchingCube@@QBEXAAI00@Z");
    todo("implement");
    _sub_100AFAF0(this, arg, arg, arg);
}

/* ---------- private code */
#endif
