#if 0
/* ---------- headers */

#include "decomp.h"
#include <xmemory0>
#include <Objects\pch.h>
#include <Objects\ImplicitSurface\MarchingCube.h>
#include <Objects\VertexArrayInternal.h>
#include <new>
#include <type_traits>
#include <xutility>
#include <Objects\ImplicitSurface\inthash.cpp>
#include <vector>
#include <xmemory>
#include <platform\osdef.h>
#include <math.h>
#include <Mathlib\matvec.h>
#include <Mathlib\vector2.h>
#include <Objects\ImplicitSurface\ImplicitMesh.h>
#include <gl\lotypes.h>
#include <gl\types.h>
#include <util\colour.h>
#include <Mathlib\vector4.h>
#include <Mathlib\mathlibdll.h>
#include <Mathlib\fastmath.h>
#include <Objects\ImplicitSurface\marchingcubetable.h>
#include <gl\r_types.h>
#include <Objects\VertexArray.h>
#include <Objects\Core.h>
#include <util\types.h>
#include <gl\r_defines.h>
#include <gl\glext.h>
#include <Objects\ImplicitSurface\CubePolygonizer.h>
#include <Objects\Objects.h>
#include <Objects\ImplicitSurface\inthash.h>
#include <Mathlib\matrix4.h>
#include <Mathlib\vector3.h>
#include <Objects\ImplicitSurface\ImplicitSurfaceSampler.h>
#include <Objects\ImplicitSurface\Molecule.h>
#include <Mathlib\matrix3.h>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

extern __int32 MCTableEdgesNeeded[256]; // 0x1010DB70
extern __int32 MCTableNewTriIndices[256][16]; // 0x1010DF70

/* ---------- private variables */

/* ---------- public code */

CubePolygonizer::CubePolygonizer() // 0x100AE0C0
{
    mangled_assert("??0CubePolygonizer@@QAE@XZ");
    todo("implement");
}

CubePolygonizer::~CubePolygonizer() // 0x100AE120
{
    mangled_assert("??1CubePolygonizer@@QAE@XZ");
    todo("implement");
}

void CubePolygonizer::setSampler(ImplicitSurfaceSampler *) // 0x100AE6F0
{
    mangled_assert("?setSampler@CubePolygonizer@@QAEXPAVImplicitSurfaceSampler@@@Z");
    todo("implement");
}

void CubePolygonizer::setImplicitMesh(ImplicitMesh *) // 0x100AE6E0
{
    mangled_assert("?setImplicitMesh@CubePolygonizer@@QAEXPAVImplicitMesh@@@Z");
    todo("implement");
}

void CubePolygonizer::beginTesselation() // 0x100AE130
{
    mangled_assert("?beginTesselation@CubePolygonizer@@QAEXXZ");
    todo("implement");
}

void CubePolygonizer::endTesselation() // 0x100AE170
{
    mangled_assert("?endTesselation@CubePolygonizer@@QAEXXZ");
    todo("implement");
}

CubePolygonizer::CubeletLocation CubePolygonizer::polygonize(MarchingCube const *, float, __int32 *, bool) // 0x100AE3E0
{
    mangled_assert("?polygonize@CubePolygonizer@@QAE?AW4CubeletLocation@1@PBVMarchingCube@@MPAH_N@Z");
    todo("implement");
}

void CubePolygonizer::evaluateCubelet(float *) // 0x100AE180
{
    mangled_assert("?evaluateCubelet@CubePolygonizer@@AAEXQAM@Z");
    todo("implement");
}

void CubePolygonizer::vertexInterpolate(__int32, __int32, float *, float, __int32 &) // 0x100AE700
{
    mangled_assert("?vertexInterpolate@CubePolygonizer@@AAEXHHQAMMAAH@Z");
    todo("implement");
}

/* ---------- private code */
#endif
