#if 0
/* ---------- headers */

#include "decomp.h"
#include <xmemory0>
#include <Objects\pch.h>
#include <new>
#include <type_traits>
#include <xutility>
#include <Objects\ImplicitSurface\inthash.cpp>
#include <vector>
#include <xmemory>
#include <math.h>
#include <Objects\ImplicitSurface\CubePolygonizer.h>
#include <util\types.h>
#include <Objects\ImplicitSurface\SurfaceCrawler.h>
#include <Objects\Objects.h>
#include <Objects\ImplicitSurface\inthash.h>
#include <util\colour.h>
#include <Objects\ImplicitSurface\Molecule.h>
#include <Mathlib\vector3.h>
#include <Mathlib\vector4.h>
#include <Mathlib\mathlibdll.h>
#include <Mathlib\fastmath.h>
#include <Objects\ImplicitSurface\MarchingCube.h>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- private variables */

/* ---------- public code */

_extern _sub_100B04A0(CubeHash *const);
CubeHash::CubeHash() // 0x100B04A0
{
    mangled_assert("??0CubeHash@@QAE@XZ");
    todo("implement");
    _sub_100B04A0(this);
}

_extern void _sub_100B04D0(CubeHash *const);
CubeHash::~CubeHash() // 0x100B04D0
{
    mangled_assert("??1CubeHash@@QAE@XZ");
    todo("implement");
    _sub_100B04D0(this);
}

_extern void _sub_100B0510(CubeHash *const);
void CubeHash::clear() // 0x100B0510
{
    mangled_assert("?clear@CubeHash@@QAEXXZ");
    todo("implement");
    _sub_100B0510(this);
}

_extern void _sub_100B07B0(CubeHash *const, unsigned __int32, unsigned __int32, unsigned __int32);
void CubeHash::insert(unsigned __int32, unsigned __int32, unsigned __int32) // 0x100B07B0
{
    mangled_assert("?insert@CubeHash@@QAEXIII@Z");
    todo("implement");
    _sub_100B07B0(this, arg, arg, arg);
}

_extern bool _sub_100B0710(CubeHash *const, unsigned __int32, unsigned __int32, unsigned __int32);
bool CubeHash::find(unsigned __int32, unsigned __int32, unsigned __int32) // 0x100B0710
{
    mangled_assert("?find@CubeHash@@QAE_NIII@Z");
    todo("implement");
    bool __result = _sub_100B0710(this, arg, arg, arg);
    return __result;
}

_extern _sub_100B04B0(SurfaceCrawler *const);
SurfaceCrawler::SurfaceCrawler() // 0x100B04B0
{
    mangled_assert("??0SurfaceCrawler@@QAE@XZ");
    todo("implement");
    _sub_100B04B0(this);
}

_extern void _sub_100B04F0(SurfaceCrawler *const);
SurfaceCrawler::~SurfaceCrawler() // 0x100B04F0
{
    mangled_assert("??1SurfaceCrawler@@QAE@XZ");
    todo("implement");
    _sub_100B04F0(this);
}

_extern void _sub_100B09D0(SurfaceCrawler *const, MarchingCube *);
void SurfaceCrawler::setMarchingCube(MarchingCube *) // 0x100B09D0
{
    mangled_assert("?setMarchingCube@SurfaceCrawler@@QAEXPAVMarchingCube@@@Z");
    todo("implement");
    _sub_100B09D0(this, arg);
}

_extern void _sub_100B09C0(SurfaceCrawler *const, CubePolygonizer *);
void SurfaceCrawler::setCubePolygonizer(CubePolygonizer *) // 0x100B09C0
{
    mangled_assert("?setCubePolygonizer@SurfaceCrawler@@QAEXPAVCubePolygonizer@@@Z");
    todo("implement");
    _sub_100B09C0(this, arg);
}

_extern void _sub_100B09E0(SurfaceCrawler *const, MoleculeList &, float, float);
void SurfaceCrawler::tesselate(MoleculeList &, float, float) // 0x100B09E0
{
    mangled_assert("?tesselate@SurfaceCrawler@@QAEXAAVMoleculeList@@MM@Z");
    todo("implement");
    _sub_100B09E0(this, arg, arg, arg);
}

_extern void _sub_100B0520(SurfaceCrawler *const, MoleculeList &, unsigned __int32, float, vector3 const &, float);
void SurfaceCrawler::crawl(MoleculeList &, unsigned __int32, float, vector3 const &, float) // 0x100B0520
{
    mangled_assert("?crawl@SurfaceCrawler@@AAEXAAVMoleculeList@@IMABVvector3@@M@Z");
    todo("implement");
    _sub_100B0520(this, arg, arg, arg, arg, arg);
}

_extern void _sub_100B0840(SurfaceCrawler *const, unsigned __int32 *);
void SurfaceCrawler::recursiveCrawl(unsigned __int32 *) // 0x100B0840
{
    mangled_assert("?recursiveCrawl@SurfaceCrawler@@AAEXQAI@Z");
    todo("implement");
    _sub_100B0840(this, arg);
}

/* ---------- private code */
#endif
