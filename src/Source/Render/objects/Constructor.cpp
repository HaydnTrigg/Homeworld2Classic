#if 0
/* ---------- headers */

#include "decomp.h"
#include <fileio\fileioexports.h>
#include <hash_map>
#include <assist\fixedstring.h>
#include <xhash>
#include <assist\stlexstring.h>
#include <xstring>
#include <xmemory0>
#include <Objects\pch.h>
#include <debug\ctassert.h>
#include <memory\memorylib.h>
#include <crtdefs.h>
#include <platform\osdef.h>
#include <Objects\Stripper.h>
#include <boost\shared_ptr.hpp>
#include <Mathlib\matvec.h>
#include <boost\config.hpp>
#include <Mathlib\vector2.h>
#include <boost\config\user.hpp>
#include <new>
#include <boost\scoped_array.hpp>
#include <boost\config\select_compiler_config.hpp>
#include <Objects\Layer.h>
#include <boost\config\compiler\visualc.hpp>
#include <xstddef>
#include <boost\config\select_stdlib_config.hpp>
#include <type_traits>
#include <Objects\goblinmesh.h>
#include <boost\config\stdlib\dinkumware.hpp>
#include <Objects\StateBlock\stateblocktypes.h>
#include <boost\config\select_platform_config.hpp>
#include <Objects\ImplicitSurface\ImplicitMesh.h>
#include <Objects\PrimSet.h>
#include <boost\config\platform\win32.hpp>
#include <Objects\Core.h>
#include <gl\lotypes.h>
#include <gl\types.h>
#include <util\colour.h>
#include <xutility>
#include <Mathlib\vector4.h>
#include <Objects\Texture.h>
#include <xatomic0.h>
#include <utility>
#include <Mathlib\mathlibdll.h>
#include <Objects\TextureRegistry.h>
#include <iosfwd>
#include <vector>
#include <Mathlib\fastmath.h>
#include <xmemory>
#include <Objects\ImplicitSurface\inthash.cpp>
#include <gl\r_types.h>
#include <Objects\StateBlock\StateVariableInstance.h>
#include <Objects\ParentMesh.h>
#include <util\dictionary.h>
#include <boost\detail\workaround.hpp>
#include <util\utilexports.h>
#include <assist\typemagic.h>
#include <tuple>
#include <math.h>
#include <Objects\StateBlock\stateBlock.h>
#include <Objects\CompiledText.h>
#include <list>
#include <bitset>
#include <boost\config\suffix.hpp>
#include <boost\assert.hpp>
#include <boost\checked_delete.hpp>
#include <Objects\VaryMesh.h>
#include <boost\shared_array.hpp>
#include <Objects\VertexArray.h>
#include <map>
#include <Objects\VertexArrayInternal.h>
#include <xtree>
#include <Objects\ImplicitSurface\SurfaceCrawler.h>
#include <Objects\SimpleMesh.h>
#include <Objects\TextureProxy.h>
#include <Objects\MeshLoader.h>
#include <gl\r_defines.h>
#include <Objects\FontSystem.h>
#include <gl\glext.h>
#include <profile\profile.h>
#include <Objects\BitmapFont.h>
#include <iostream>
#include <boost\throw_exception.hpp>
#include <assert.h>
#include <boost\detail\shared_count.hpp>
#include <boost\detail\lightweight_mutex.hpp>
#include <Objects\ShaderPass.h>
#include <boost\detail\lwm_win32.hpp>
#include <Objects\Parsable.h>
#include <Objects\ShaderParam.h>
#include <algorithm>
#include <util\types.h>
#include <Mathlib\matrix4.h>
#include <Mathlib\vector3.h>
#include <Objects\ImplicitSurface\ImplicitSurface.h>
#include <Objects\ImplicitSurface\Molecule.h>
#include <Mathlib\matrix3.h>
#include <Objects\ImplicitSurface\ImplicitSurfaceSampler.h>
#include <Objects\ImplicitSurface\MarchingCube.h>
#include <Objects\Objects.h>
#include <Objects\Constructor.h>
#include <debug\db.h>
#include <Objects\Material.h>
#include <Objects\ImplicitSurface\CubePolygonizer.h>
#include <Objects\ImplicitSurface\inthash.h>
#include <memory>
#include <stdint.h>
#include <Objects\MeshIFF.h>
#include <boost\smart_ptr.hpp>
#include <boost\scoped_ptr.hpp>
#include <functional>
#include <Objects\RawMesh.h>
#include <xfunctional>
#include <Table.h>
#include <Objects\ClipRect.h>
#include <gl\interface.h>
#include <wchar.h>
#include <string>
#include <Objects\multimesh.h>
#include <Objects\Geometry.h>
#include <Objects\basicmesh.h>
#include <Objects\Mesh.h>
#include <debug\ctmessage.h>
#include <Objects\Renderable.h>
#include <Objects\memtracker.h>
#include <fileio\bytestream.h>

/* ---------- constants */

/* ---------- definitions */

typedef long long LargeInt;

/* ---------- prototypes */

extern bool Constructor_releaseInstance();

/* ---------- globals */

extern Constructor *Constructor::_instance; // 0x101121DC

/* ---------- private variables */

_static
{
    extern std::_Nil _Nil_obj; // 0x101121E2
    extern std::_Ignore ignore; // 0x101121E0
    extern std::_Tuple_alloc_t _Tuple_alloc; // 0x101121E1
    extern Constructor *g_instance; // 0x101121D8
}

/* ---------- public code */

bool Constructor_releaseInstance() // 0x10030840
{
    mangled_assert("?Constructor_releaseInstance@@YG_NXZ");
    todo("implement");
}

_inline CombinerState::CombinerState(CombinerState const &) // 0x1002E110
{
    mangled_assert("??0CombinerState@@QAE@ABU0@@Z");
    compiler_generated();
    todo("implement");
}

Constructor::Constructor() // 0x1002E1A0
{
    mangled_assert("??0Constructor@@IAE@XZ");
    todo("implement");
}

_inline ImplicitMesh::ImplicitMesh(ImplicitMesh const &) // 0x1002E1B0
{
    mangled_assert("??0ImplicitMesh@@QAE@ABV0@@Z");
    compiler_generated();
    todo("implement");
}

_inline ImplicitSurface::ImplicitSurface(ImplicitSurface const &) // 0x1002E230
{
    mangled_assert("??0ImplicitSurface@@QAE@ABV0@@Z");
    compiler_generated();
    todo("implement");
}

_inline MeshLoader::MeshLoader(MeshLoader const &) // 0x1002E340
{
    mangled_assert("??0MeshLoader@@QAE@ABV0@@Z");
    compiler_generated();
    todo("implement");
}

_inline MeshLoader::MeshLoader() // 0x1002E350
{
    mangled_assert("??0MeshLoader@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline MoleculeList::MoleculeList(MoleculeList const &) // 0x1002E370
{
    mangled_assert("??0MoleculeList@@QAE@ABV0@@Z");
    compiler_generated();
    todo("implement");
}

_inline MultiMesh::MultiMesh(MultiMesh const &) // 0x1002E390
{
    mangled_assert("??0MultiMesh@@QAE@ABV0@@Z");
    compiler_generated();
    todo("implement");
}

_inline RawMesh::RawMesh(RawMesh const &) // 0x1002E400
{
    mangled_assert("??0RawMesh@@QAE@ABV0@@Z");
    compiler_generated();
    todo("implement");
}

_inline RawMesh::RawMesh() // 0x1002E5F0
{
    mangled_assert("??0RawMesh@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline ShaderParam::ShaderParam(ShaderParam const &) // 0x1002E710
{
    mangled_assert("??0ShaderParam@@QAE@ABV0@@Z");
    compiler_generated();
    todo("implement");
}

_inline ShaderPass::ShaderPass(ShaderPass const &) // 0x1002E750
{
    mangled_assert("??0ShaderPass@@QAE@ABV0@@Z");
    compiler_generated();
    todo("implement");
}

_inline CombinerState::~CombinerState() // 0x1002ECE0
{
    mangled_assert("??1CombinerState@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline MeshLoader::~MeshLoader() // 0x1002EDD0
{
    mangled_assert("??1MeshLoader@@UAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline RawMesh::~RawMesh() // 0x1002EDF0
{
    mangled_assert("??1RawMesh@@UAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline CombinerState &CombinerState::operator=(CombinerState const &) // 0x1002FB40
{
    mangled_assert("??4CombinerState@@QAEAAU0@ABU0@@Z");
    compiler_generated();
    todo("implement");
}

Constructor *Constructor::getInstance() // 0x10032320
{
    mangled_assert("?getInstance@Constructor@@SGPAV1@XZ");
    todo("implement");
}

_inline CubePolygonizer &CubePolygonizer::operator=(CubePolygonizer const &) // 0x1002FB90
{
    mangled_assert("??4CubePolygonizer@@QAEAAV0@ABV0@@Z");
    compiler_generated();
    todo("implement");
}

_inline ImplicitMesh &ImplicitMesh::operator=(ImplicitMesh const &) // 0x1002FBB0
{
    mangled_assert("??4ImplicitMesh@@QAEAAV0@ABV0@@Z");
    compiler_generated();
    todo("implement");
}

_inline ImplicitSurface &ImplicitSurface::operator=(ImplicitSurface const &) // 0x1002FC00
{
    mangled_assert("??4ImplicitSurface@@QAEAAV0@ABV0@@Z");
    compiler_generated();
    todo("implement");
}

_inline MarchingCube &MarchingCube::operator=(MarchingCube const &) // 0x1002FCD0
{
    mangled_assert("??4MarchingCube@@QAEAAV0@ABV0@@Z");
    compiler_generated();
    todo("implement");
}

_inline MeshLoader &MeshLoader::operator=(MeshLoader const &) // 0x1002FCF0
{
    mangled_assert("??4MeshLoader@@QAEAAV0@ABV0@@Z");
    compiler_generated();
    todo("implement");
}

_inline MoleculeList &MoleculeList::operator=(MoleculeList const &) // 0x1002FD00
{
    mangled_assert("??4MoleculeList@@QAEAAV0@ABV0@@Z");
    compiler_generated();
    todo("implement");
}

_inline MultiMesh &MultiMesh::operator=(MultiMesh const &) // 0x1002FD20
{
    mangled_assert("??4MultiMesh@@QAEAAV0@ABV0@@Z");
    compiler_generated();
    todo("implement");
}

_inline Parsable &Parsable::operator=(Parsable const &) // 0x1002FD70
{
    mangled_assert("??4Parsable@@QAEAAV0@ABV0@@Z");
    compiler_generated();
    todo("implement");
}

_inline RawMesh &RawMesh::operator=(RawMesh const &) // 0x1002FD80
{
    mangled_assert("??4RawMesh@@QAEAAV0@ABV0@@Z");
    compiler_generated();
    todo("implement");
}

_inline ShaderParam &ShaderParam::operator=(ShaderParam const &) // 0x1002FF00
{
    mangled_assert("??4ShaderParam@@QAEAAV0@ABV0@@Z");
    compiler_generated();
    todo("implement");
}

Geometry *Constructor::createGeometry() // 0x10031B10
{
    mangled_assert("?createGeometry@Constructor@@QAEPAVGeometry@@XZ");
    todo("implement");
}

_inline ShaderPass &ShaderPass::operator=(ShaderPass const &) // 0x1002FF50
{
    mangled_assert("??4ShaderPass@@QAEAAV0@ABV0@@Z");
    compiler_generated();
    todo("implement");
}

Layer *Constructor::createLayer() // 0x10031BD0
{
    mangled_assert("?createLayer@Constructor@@QAEPAVLayer@@XZ");
    todo("implement");
}

Material *Constructor::createMaterial() // 0x10031C30
{
    mangled_assert("?createMaterial@Constructor@@QAEPAVMaterial@@XZ");
    todo("implement");
}

ParentMesh *Constructor::createParentMesh() // 0x10031D50
{
    mangled_assert("?createParentMesh@Constructor@@QAEPAVParentMesh@@XZ");
    todo("implement");
}

PrimSet *Constructor::createPrimSet() // 0x10031DB0
{
    mangled_assert("?createPrimSet@Constructor@@QAEPAVPrimSet@@XZ");
    todo("implement");
}

PrimSetList *Constructor::createPrimSetList() // 0x10031E10
{
    mangled_assert("?createPrimSetList@Constructor@@QAEPAVPrimSetList@@XZ");
    todo("implement");
}

RawMesh *Constructor::createRawMesh() // 0x10031E70
{
    mangled_assert("?createRawMesh@Constructor@@QAEPAVRawMesh@@XZ");
    todo("implement");
}

Stripper *Constructor::createStripper() // 0x10031F90
{
    mangled_assert("?createStripper@Constructor@@QAEPAVStripper@@XZ");
    todo("implement");
}

VaryMesh *Constructor::createVaryMesh() // 0x10031FF0
{
    mangled_assert("?createVaryMesh@Constructor@@QAEPAVVaryMesh@@XZ");
    todo("implement");
}

MultiMesh *Constructor::createMultiMesh() // 0x10031CF0
{
    mangled_assert("?createMultiMesh@Constructor@@QAEPAVMultiMesh@@XZ");
    todo("implement");
}

VertexArray *Constructor::createVertexArray() // 0x10032050
{
    mangled_assert("?createVertexArray@Constructor@@QAEPAVVertexArray@@XZ");
    todo("implement");
}

FontSystem *Constructor::createFontSystem() // 0x10031AB0
{
    mangled_assert("?createFontSystem@Constructor@@QAEPAVFontSystem@@XZ");
    todo("implement");
}

ImplicitSurface *Constructor::createImplicitSurface() // 0x10031B70
{
    mangled_assert("?createImplicitSurface@Constructor@@QAEPAVImplicitSurface@@XZ");
    todo("implement");
}

SimpleMesh *Constructor::createSimpleMesh() // 0x10031F30
{
    mangled_assert("?createSimpleMesh@Constructor@@QAEPAVSimpleMesh@@XZ");
    todo("implement");
}

BasicMesh *Constructor::createBasicMesh() // 0x10031A50
{
    mangled_assert("?createBasicMesh@Constructor@@QAEPAVBasicMesh@@XZ");
    todo("implement");
}

ShaderPass *Constructor::createShaderPass() // 0x10031ED0
{
    mangled_assert("?createShaderPass@Constructor@@QAEPAVShaderPass@@XZ");
    todo("implement");
}

MeshInstance *Constructor::createMeshInstance() // 0x10031C90
{
    mangled_assert("?createMeshInstance@Constructor@@QAEPAVMeshInstance@@XZ");
    todo("implement");
}

/* ---------- private code */
#endif
