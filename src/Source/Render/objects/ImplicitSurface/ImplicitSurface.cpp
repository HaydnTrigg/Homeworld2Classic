#if 0
/* ---------- headers */

#include "decomp.h"
#include <xmemory0>
#include <Objects\pch.h>
#include <new>
#include <type_traits>
#include <platform\osdef.h>
#include <xutility>
#include <vector>
#include <xmemory>
#include <math.h>
#include <Objects\ImplicitSurface\ImplicitMesh.h>
#include <Objects\ImplicitSurface\inthash.cpp>
#include <gl\types.h>
#include <Mathlib\matvec.h>
#include <gl\lotypes.h>
#include <Mathlib\vector2.h>
#include <gl\r_types.h>
#include <Objects\VertexArray.h>
#include <Objects\Core.h>
#include <Objects\ImplicitSurface\SurfaceCrawler.h>
#include <Objects\Constructor.h>
#include <util\types.h>
#include <gl\r_defines.h>
#include <gl\glext.h>
#include <Mathlib\matrix4.h>
#include <Objects\ImplicitSurface\ImplicitSurfaceSampler.h>
#include <util\colour.h>
#include <Objects\ImplicitSurface\ImplicitSurface.h>
#include <Objects\Objects.h>
#include <Objects\ImplicitSurface\Molecule.h>
#include <Mathlib\vector3.h>
#include <Mathlib\matrix3.h>
#include <Mathlib\vector4.h>
#include <Mathlib\mathlibdll.h>
#include <Mathlib\fastmath.h>
#include <Objects\ImplicitSurface\CubePolygonizer.h>
#include <Objects\ImplicitSurface\inthash.h>
#include <platform\timer.h>
#include <Objects\ImplicitSurface\MarchingCube.h>
#include <platform\platformexports.h>
#include <Objects\VertexArrayInternal.h>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- private variables */

/* ---------- public code */

_extern _sub_100AF3E0(ImplicitSurface *const);
ImplicitSurface::ImplicitSurface() // 0x100AF3E0
{
    mangled_assert("??0ImplicitSurface@@QAE@XZ");
    todo("implement");
    _sub_100AF3E0(this);
}

_extern void _sub_100AF500(ImplicitSurface *const);
ImplicitSurface::~ImplicitSurface() // 0x100AF500
{
    mangled_assert("??1ImplicitSurface@@UAE@XZ");
    todo("implement");
    _sub_100AF500(this);
}

_extern ImplicitSurface *_sub_100AF6F0();
ImplicitSurface *ImplicitSurface::create() // 0x100AF6F0
{
    mangled_assert("?create@ImplicitSurface@@SGPAV1@XZ");
    todo("implement");
    ImplicitSurface * __result = _sub_100AF6F0();
    return __result;
}

_extern void _sub_100AF8B0(ImplicitSurface *const, vector3 *, __int32, float);
void ImplicitSurface::setPoints(vector3 *, __int32, float) // 0x100AF8B0
{
    mangled_assert("?setPoints@ImplicitSurface@@QAEXPAVvector3@@HM@Z");
    todo("implement");
    _sub_100AF8B0(this, arg, arg, arg);
}

_extern void _sub_100AF5C0(ImplicitSurface *const, vector3 const &, float);
void ImplicitSurface::addPoint(vector3 const &, float) // 0x100AF5C0
{
    mangled_assert("?addPoint@ImplicitSurface@@QAEXABVvector3@@M@Z");
    todo("implement");
    _sub_100AF5C0(this, arg, arg);
}

_extern void _sub_100AF640(ImplicitSurface *const, float, float, float, float);
void ImplicitSurface::addPoint(float, float, float, float) // 0x100AF640
{
    mangled_assert("?addPoint@ImplicitSurface@@QAEXMMMM@Z");
    todo("implement");
    _sub_100AF640(this, arg, arg, arg, arg);
}

_extern void _sub_100AF890(ImplicitSurface *const, float);
void ImplicitSurface::setIsovalue(float) // 0x100AF890
{
    mangled_assert("?setIsovalue@ImplicitSurface@@QAEXM@Z");
    todo("implement");
    _sub_100AF890(this, arg);
}

_extern MoleculeList &_sub_100AF860(ImplicitSurface *const);
MoleculeList &ImplicitSurface::getMoleculeList() // 0x100AF860
{
    mangled_assert("?getMoleculeList@ImplicitSurface@@QAEAAVMoleculeList@@XZ");
    todo("implement");
    MoleculeList & __result = _sub_100AF860(this);
    return __result;
}

_extern ImplicitMesh const &_sub_100AF850(ImplicitSurface const *const);
ImplicitMesh const &ImplicitSurface::getImplicitMesh() const // 0x100AF850
{
    mangled_assert("?getImplicitMesh@ImplicitSurface@@QBEABVImplicitMesh@@XZ");
    todo("implement");
    ImplicitMesh const & __result = _sub_100AF850(this);
    return __result;
}

_extern void _sub_100AF700(ImplicitSurface *const, vector3 &, vector3 &);
void ImplicitSurface::findMinMax(vector3 &, vector3 &) // 0x100AF700
{
    mangled_assert("?findMinMax@ImplicitSurface@@AAEXAAVvector3@@0@Z");
    todo("implement");
    _sub_100AF700(this, arg, arg);
}

_extern void _sub_100AF940(ImplicitSurface *const, float);
void ImplicitSurface::tesselate(float) // 0x100AF940
{
    mangled_assert("?tesselate@ImplicitSurface@@QAEXM@Z");
    todo("implement");
    _sub_100AF940(this, arg);
}

_extern void _sub_100AF6E0(ImplicitSurface *const);
void ImplicitSurface::clearMolecules() // 0x100AF6E0
{
    mangled_assert("?clearMolecules@ImplicitSurface@@AAEXXZ");
    todo("implement");
    _sub_100AF6E0(this);
}

_extern void _sub_100AF870(ImplicitSurface *const);
void ImplicitSurface::render() // 0x100AF870
{
    mangled_assert("?render@ImplicitSurface@@QAEXXZ");
    todo("implement");
    _sub_100AF870(this);
}

/* ---------- private code */
#endif
