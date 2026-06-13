#if 0
/* ---------- headers */

#include "decomp.h"
#include <xmemory0>
#include <Objects\pch.h>
#include <new>
#include <type_traits>
#include <xutility>
#include <vector>
#include <xmemory>
#include <math.h>
#include <util\types.h>
#include <util\colour.h>
#include <Objects\ImplicitSurface\ImplicitSurfaceSampler.h>
#include <Objects\ImplicitSurface\Molecule.h>
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

_extern _sub_100AF9F0(ImplicitSurfaceSampler *const);
ImplicitSurfaceSampler::ImplicitSurfaceSampler() // 0x100AF9F0
{
    mangled_assert("??0ImplicitSurfaceSampler@@QAE@XZ");
    todo("implement");
    _sub_100AF9F0(this);
}

_extern void _sub_100AFAB0(ImplicitSurfaceSampler *const, MoleculeList *);
void ImplicitSurfaceSampler::setMoleculeList(MoleculeList *) // 0x100AFAB0
{
    mangled_assert("?setMoleculeList@ImplicitSurfaceSampler@@QAEXPAVMoleculeList@@@Z");
    todo("implement");
    _sub_100AFAB0(this, arg);
}

_extern void _sub_100AFA00(ImplicitSurfaceSampler *const, vector3 const &, float &);
void ImplicitSurfaceSampler::getValues(vector3 const &, float &) // 0x100AFA00
{
    mangled_assert("?getValues@ImplicitSurfaceSampler@@QAEXABVvector3@@AAM@Z");
    todo("implement");
    _sub_100AFA00(this, arg, arg);
}

/* ---------- private code */
#endif
