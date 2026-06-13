#if 0
/* ---------- headers */

#include "decomp.h"
#include <Render\gl\lotypes.h>
#include <xstring>
#include <Render\gl\interface.h>
#include <Mathlib\matrix4.h>
#include <xmemory0>
#include <pch.h>
#include <fileio\filestream.h>
#include <Render\gl\r_types.h>
#include <Render\objects\parentmesh.h>
#include <Mathlib\matrix3.h>
#include <boost\checked_delete.hpp>
#include <Graphics\DirectMeshRender.h>
#include <Graphics\meshrenderproxy.h>
#include <Render\objects\stateblock\stateblock.h>
#include <Render\objects\texture.h>
#include <Render\objects\stateblock\compoundstateblockinstance.h>
#include <platform\timer.h>
#include <new>
#include <Render\objects\textureregistry.h>
#include <exception>
#include <xstddef>
#include <hash_map>
#include <xhash>
#include <type_traits>
#include <Collision\Primitives\mesh.h>
#include <Collision\Primitives\triangle.h>
#include <xutility>
#include <utility>
#include <Decal\DecalRefMesh.h>
#include <iosfwd>
#include <vector>
#include <fileio\bytestream.h>
#include <xmemory>
#include <fileio\fileioexports.h>
#include <Render\objects\stateblock\stateblocktypes.h>
#include <debug\ctassert.h>
#include <Render\gl\r_defines.h>
#include <Render\gl\glext.h>
#include <math.h>
#include <list>
#include <Render\objects\stateblock\statevariableinstance.h>
#include <task.h>
#include <fileio\filepath.h>
#include <util\dictionary.h>
#include <stack>
#include <util\utilexports.h>
#include <Render\objects\misctextures.h>
#include <Mathlib\vector3.h>
#include <Mathlib\vector4.h>
#include <fileio\iff.h>
#include <map>
#include <platform\cmdline.h>
#include <xtree>
#include <platform\platformexports.h>
#include <Mathlib\mathutil.h>
#include <boost\scoped_ptr.hpp>
#include <Render\objects\lensflare.h>
#include <Mathlib\vector2.h>
#include <util\types.h>
#include <boost\cstdint.hpp>
#include <Render\tristrip.h>
#include <profile\profile.h>
#include <iostream>
#include <Camera\OrbitParameters.h>
#include <platform\windowinterface.h>
#include <Render\objects\meshloader.h>
#include <Render\objects\stateblock\stateblockmanager.h>
#include <Mathlib\mathlibdll.h>
#include <Interface.h>
#include <luaconfig\luaconfig.h>
#include <Mathlib\fastmath.h>
#include <lua.h>
#include <debug\db.h>
#include <CameraCommand.h>
#include <sobid.h>
#include <CameraHW.h>
#include <Camera\CameraOrbitTarget.h>
#include <Camera\Camera.h>
#include <Camera\Frustum.h>
#include <Camera\Plane3.h>
#include <util\colour.h>
#include <boost\shared_ptr.hpp>
#include <sobtypes.h>
#include <boost\throw_exception.hpp>
#include <bitset>
#include <boost\detail\shared_count.hpp>
#include <HierarchyStatic.h>
#include <Render\objects\multimesh.h>
#include <boost\detail\lwm_win32.hpp>
#include <Collision\Primitives\obb.h>
#include <Render\objects\basicmesh.h>
#include <Render\objects\memtracker.h>
#include <Render\objects\varymesh.h>
#include <platform\osdef.h>
#include <BTG.h>
#include <Render\objects\mesh.h>
#include <Render\objects\core.h>
#include <Render\objects\renderable.h>
#include <string>
#include <Render\objects\objects.h>
#include <Render\gl\types.h>
#include <Mathlib\matvec.h>
#include <Render\objects\rawmesh.h>
#include <Render\gl\r_macros.h>
#include <Render\Table.h>
#include <Render\objects\vertexarray.h>
#include <Stars.h>
#include <Render\objects\vertexarrayinternal.h>

/* ---------- constants */

/* ---------- definitions */

struct BGRegion
{
    boost::shared_ptr<BasicMesh> m_mesh; // 0x0
    vector3 m_coneDir; // 0x8
    float m_minCos; // 0x14
    _inline BGRegion(BGRegion const &); /* compiler_generated() */
    _inline BGRegion(); /* compiler_generated() */
    _inline ~BGRegion(); /* compiler_generated() */
    BGRegion &operator=(BGRegion const &); /* compiler_generated() */
};
static_assert(sizeof(BGRegion) == 24, "Invalid BGRegion size");

struct StarRegion
{
    boost::shared_ptr<StarList> m_stars; // 0x0
    vector3 m_coneDir; // 0x8
    float m_minCos; // 0x14
    _inline StarRegion(StarRegion const &); /* compiler_generated() */
    _inline StarRegion(); /* compiler_generated() */
    _inline ~StarRegion(); /* compiler_generated() */
    StarRegion &operator=(StarRegion const &); /* compiler_generated() */
};
static_assert(sizeof(StarRegion) == 24, "Invalid StarRegion size");

typedef __int32 (*CompareFnc)(void const *, void const *);
typedef void (*ML_TextureCallback_p)(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &, Texture *);
typedef std::vector<BGRegion,std::allocator<BGRegion> > BGRegionList;
typedef std::vector<StarRegion,std::allocator<StarRegion> > StarRegionList;
typedef boost::detail::lightweight_mutex mutex_type;

/* ---------- prototypes */


_static __int32 HandleVERS(IFF *iff, IFFChunk *chunk, void *user0, void *user1);
_static __int32 HandleDTRM(IFF *iff, IFFChunk *chunk, void *pBackground, void *user1);

/* ---------- globals */

/* ---------- private variables */

_static
{
    extern float const clipNear; // 0x7A894C
    extern float const clipFar; // 0x7A8950
    extern float const defaultFOV; // 0x7A8954
}

/* ---------- public code */

_extern _sub_5E56D0(boost::shared_ptr<BasicMesh> *const, boost::shared_ptr<BasicMesh> const &);
_inline boost::shared_ptr<BasicMesh>::shared_ptr<BasicMesh>(boost::shared_ptr<BasicMesh> const &) // 0x5E56D0
{
    mangled_assert("??0?$shared_ptr@VBasicMesh@@@boost@@QAE@ABV01@@Z");
    compiler_generated();
    todo("implement");
    _sub_5E56D0(this, arg);
}

_extern _sub_5E56FA(boost::shared_ptr<StarList> *const, boost::shared_ptr<StarList> const &);
_inline boost::shared_ptr<StarList>::shared_ptr<StarList>(boost::shared_ptr<StarList> const &) // 0x5E56FA
{
    mangled_assert("??0?$shared_ptr@VStarList@@@boost@@QAE@ABV01@@Z");
    compiler_generated();
    todo("implement");
    _sub_5E56FA(this, arg);
}

_extern _sub_5E5789(BGRegion *const, BGRegion const &);
_inline BGRegion::BGRegion(BGRegion const &) // 0x5E5789
{
    mangled_assert("??0BGRegion@@QAE@ABU0@@Z");
    compiler_generated();
    todo("implement");
    _sub_5E5789(this, arg);
}

_extern _sub_5E57BF(BGRegion *const);
_inline BGRegion::BGRegion() // 0x5E57BF
{
    mangled_assert("??0BGRegion@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_5E57BF(this);
}

_extern Background *_sub_5E6ADC();
Background *Background::create() // 0x5E6ADC
{
    mangled_assert("?create@Background@@SGPAV1@XZ");
    todo("implement");
    Background * __result = _sub_5E6ADC();
    return __result;
}

_extern bool _sub_5E73B0(Background *const);
bool Background::release() // 0x5E73B0
{
    mangled_assert("?release@Background@@UAE_NXZ");
    todo("implement");
    bool __result = _sub_5E73B0(this);
    return __result;
}

_extern _sub_5E583A(Background::Data *const);
Background::Data::Data() // 0x5E583A
{
    mangled_assert("??0Data@Background@@QAE@XZ");
    todo("implement");
    _sub_5E583A(this);
}

_extern _sub_5E5879(StarList::Star *const);
_inline StarList::Star::Star() // 0x5E5879
{
    mangled_assert("??0Star@StarList@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_5E5879(this);
}

_extern _sub_5E587C(StarRegion *const, StarRegion const &);
_inline StarRegion::StarRegion(StarRegion const &) // 0x5E587C
{
    mangled_assert("??0StarRegion@@QAE@ABU0@@Z");
    compiler_generated();
    todo("implement");
    _sub_5E587C(this, arg);
}

_extern _sub_5E58B2(StarRegion *const);
_inline StarRegion::StarRegion() // 0x5E58B2
{
    mangled_assert("??0StarRegion@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_5E58B2(this);
}

_extern void _sub_5E58C4(boost::shared_ptr<BasicMesh> *const);
_inline boost::shared_ptr<BasicMesh>::~shared_ptr<BasicMesh>() // 0x5E58C4
{
    mangled_assert("??1?$shared_ptr@VBasicMesh@@@boost@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_5E58C4(this);
}

_extern void _sub_5E58D0(boost::shared_ptr<StarList> *const);
_inline boost::shared_ptr<StarList>::~shared_ptr<StarList>() // 0x5E58D0
{
    mangled_assert("??1?$shared_ptr@VStarList@@@boost@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_5E58D0(this);
}

_extern void _sub_5E58DC(boost::detail::sp_counted_base_impl<BasicMesh *,boost::checked_deleter<BasicMesh> > *const);
_inline boost::detail::sp_counted_base_impl<BasicMesh *,boost::checked_deleter<BasicMesh> >::~sp_counted_base_impl<BasicMesh *,boost::checked_deleter<BasicMesh> >() // 0x5E58DC
{
    mangled_assert("??1?$sp_counted_base_impl@PAVBasicMesh@@U?$checked_deleter@VBasicMesh@@@boost@@@detail@boost@@UAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_5E58DC(this);
}

_extern void _sub_5E58E3(boost::detail::sp_counted_base_impl<StarList *,boost::checked_deleter<StarList> > *const);
_inline boost::detail::sp_counted_base_impl<StarList *,boost::checked_deleter<StarList> >::~sp_counted_base_impl<StarList *,boost::checked_deleter<StarList> >() // 0x5E58E3
{
    mangled_assert("??1?$sp_counted_base_impl@PAVStarList@@U?$checked_deleter@VStarList@@@boost@@@detail@boost@@UAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_5E58E3(this);
}

_extern void _sub_5E58F9(BGRegion *const);
_inline BGRegion::~BGRegion() // 0x5E58F9
{
    mangled_assert("??1BGRegion@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_5E58F9(this);
}

_extern _sub_5E57C9(Background *const);
Background::Background() // 0x5E57C9
{
    mangled_assert("??0Background@@QAE@XZ");
    todo("implement");
    _sub_5E57C9(this);
}

_extern void _sub_5E772D(Background *const);
void Background::reset() // 0x5E772D
{
    mangled_assert("?reset@Background@@AAEXXZ");
    todo("implement");
    _sub_5E772D(this);
}

_extern void _sub_5E5905(Background *const);
Background::~Background() // 0x5E5905
{
    mangled_assert("??1Background@@UAE@XZ");
    todo("implement");
    _sub_5E5905(this);
}

_extern void _sub_5E5949(Background::Data *const);
_inline Background::Data::~Data() // 0x5E5949
{
    mangled_assert("??1Data@Background@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_5E5949(this);
}

_extern void _sub_5E5970(StarRegion *const);
_inline StarRegion::~StarRegion() // 0x5E5970
{
    mangled_assert("??1StarRegion@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_5E5970(this);
}

_extern void _sub_5E7974(Background *const, float);
void Background::setTheta(float) // 0x5E7974
{
    mangled_assert("?setTheta@Background@@QAEXM@Z");
    todo("implement");
    _sub_5E7974(this, arg);
}

_extern void _sub_5E795C(Background *const, float);
void Background::setPhi(float) // 0x5E795C
{
    mangled_assert("?setPhi@Background@@QAEXM@Z");
    todo("implement");
    _sub_5E795C(this, arg);
}

_extern float _sub_5E6CA9(Background const *const);
float Background::getColourMultiplier() const // 0x5E6CA9
{
    mangled_assert("?getColourMultiplier@Background@@QBEMXZ");
    todo("implement");
    float __result = _sub_5E6CA9(this);
    return __result;
}

_extern float _sub_5E6CB0(Background const *const);
float Background::getFOV() const // 0x5E6CB0
{
    mangled_assert("?getFOV@Background@@QBEMXZ");
    todo("implement");
    float __result = _sub_5E6CB0(this);
    return __result;
}

_extern float _sub_5E6CD8(Background const *const);
float Background::getTheta() const // 0x5E6CD8
{
    mangled_assert("?getTheta@Background@@QBEMXZ");
    todo("implement");
    float __result = _sub_5E6CD8(this);
    return __result;
}

_extern float _sub_5E6CBE(Background const *const);
float Background::getPhi() const // 0x5E6CBE
{
    mangled_assert("?getPhi@Background@@QBEMXZ");
    todo("implement");
    float __result = _sub_5E6CBE(this);
    return __result;
}

_extern MeshInstance *_sub_5E6CB7(Background *const);
MeshInstance *Background::getMeshInstance() // 0x5E6CB7
{
    mangled_assert("?getMeshInstance@Background@@QAEPAVMeshInstance@@XZ");
    todo("implement");
    MeshInstance * __result = _sub_5E6CB7(this);
    return __result;
}

_extern bool _sub_5E6D36(Background *const, char const *);
bool Background::load(char const *) // 0x5E6D36
{
    mangled_assert("?load@Background@@QAE_NPBD@Z");
    todo("implement");
    bool __result = _sub_5E6D36(this, arg);
    return __result;
}

_extern void _sub_5E7850(Background *const, float);
void Background::setColourMultiplier(float) // 0x5E7850
{
    mangled_assert("?setColourMultiplier@Background@@QAEXM@Z");
    todo("implement");
    _sub_5E7850(this, arg);
}

_extern void _sub_5E7861(Background *const, bool);
void Background::setCoordSys(bool) // 0x5E7861
{
    mangled_assert("?setCoordSys@Background@@AAEX_N@Z");
    todo("implement");
    _sub_5E7861(this, arg);
}

_extern void _sub_5E6B0E(Background *const, vector3 const &, vector3 const &, vector3 const &);
void Background::cull(vector3 const &, vector3 const &, vector3 const &) // 0x5E6B0E
{
    mangled_assert("?cull@Background@@QAEXABVvector3@@00@Z");
    todo("implement");
    _sub_5E6B0E(this, arg, arg, arg);
}

_extern void _sub_5E73BD(Background *const, vector3 const &, vector3 const &, vector3 const &, bool);
void Background::render(vector3 const &, vector3 const &, vector3 const &, bool) // 0x5E73BD
{
    mangled_assert("?render@Background@@QAEXABVvector3@@00_N@Z");
    todo("implement");
    _sub_5E73BD(this, arg, arg, arg, arg);
}

_extern void _sub_5E7947(Background *const, vector4 const &);
void Background::setLightColour(vector4 const &) // 0x5E7947
{
    mangled_assert("?setLightColour@Background@@QAEXABVvector4@@@Z");
    todo("implement");
    _sub_5E7947(this, arg);
}

_extern void _sub_5E6E49(Background *const, char const *, char const *);
void Background::loadHODFile(char const *, char const *) // 0x5E6E49
{
    mangled_assert("?loadHODFile@Background@@QAEXPBD0@Z");
    todo("implement");
    _sub_5E6E49(this, arg, arg);
}

_extern void _sub_5E7020(Background *const, char const *);
void Background::loadLUAFile(char const *) // 0x5E7020
{
    mangled_assert("?loadLUAFile@Background@@AAEXPBD@Z");
    todo("implement");
    _sub_5E7020(this, arg);
}

_extern __int32 _sub_5E615E(IFF *, IFFChunk *, void *, void *);
__int32 Background::HandleHIER(IFF *iff, IFFChunk *chunk, void *user0, void *user1) // 0x5E615E
{
    mangled_assert("?HandleHIER@Background@@SGHPAVIFF@@PAVIFFChunk@@PAX2@Z");
    todo("implement");
    __int32 __result = _sub_5E615E(iff, chunk, user0, user1);
    return __result;
}

_extern __int32 _sub_5E618E(IFF *, IFFChunk *, void *, void *);
__int32 Background::HandleSTRF(IFF *iff, IFFChunk *chunk, void *user0, void *user1) // 0x5E618E
{
    mangled_assert("?HandleSTRF@Background@@SGHPAVIFF@@PAVIFFChunk@@PAX2@Z");
    todo("implement");
    __int32 __result = _sub_5E618E(iff, chunk, user0, user1);
    return __result;
}

_extern __int32 _sub_5E5F4A(IFF *, IFFChunk *, void *, void *);
__int32 Background::HandleBMSH(IFF *iff, IFFChunk *chunk, void *user0, void *user1) // 0x5E5F4A
{
    mangled_assert("?HandleBMSH@Background@@SGHPAVIFF@@PAVIFFChunk@@PAX2@Z");
    todo("implement");
    __int32 __result = _sub_5E5F4A(iff, chunk, user0, user1);
    return __result;
}

_extern __int32 _sub_5E5EC3(IFF *, IFFChunk *, void *, void *);
__int32 Background::HandleBMBV(IFF *iff, IFFChunk *chunk, void *user0, void *user1) // 0x5E5EC3
{
    mangled_assert("?HandleBMBV@Background@@SGHPAVIFF@@PAVIFFChunk@@PAX2@Z");
    todo("implement");
    __int32 __result = _sub_5E5EC3(iff, chunk, user0, user1);
    return __result;
}

_extern __int32 _sub_5E5AFF(IFF *, IFFChunk *, void *, void *);
__int32 Background::HandleBGLT(IFF *iff, IFFChunk *chunk, void *user0, void *user1) // 0x5E5AFF
{
    mangled_assert("?HandleBGLT@Background@@SGHPAVIFF@@PAVIFFChunk@@PAX2@Z");
    todo("implement");
    __int32 __result = _sub_5E5AFF(iff, chunk, user0, user1);
    return __result;
}

_extern __int32 _sub_5E5B38(IFF *, IFFChunk *, void *, void *);
__int32 Background::HandleBGMS(IFF *iff, IFFChunk *chunk, void *pBackground, void *user1) // 0x5E5B38
{
    mangled_assert("?HandleBGMS@Background@@SGHPAVIFF@@PAVIFFChunk@@PAX2@Z");
    todo("implement");
    __int32 __result = _sub_5E5B38(iff, chunk, pBackground, user1);
    return __result;
}

_extern __int32 _sub_5E5B66(IFF *, IFFChunk *, void *, void *);
__int32 Background::HandleBGSG(IFF *iff, IFFChunk *chunk, void *user0, void *user1) // 0x5E5B66
{
    mangled_assert("?HandleBGSG@Background@@SGHPAVIFF@@PAVIFFChunk@@PAX2@Z");
    todo("implement");
    __int32 __result = _sub_5E5B66(iff, chunk, user0, user1);
    return __result;
}

/* ---------- private code */

_extern __int32 _sub_5E64CE(IFF *, IFFChunk *, void *, void *);
_static __int32 HandleVERS(IFF *iff, IFFChunk *chunk, void *user0, void *user1) // 0x5E64CE
{
    mangled_assert("HandleVERS");
    todo("implement");
    __int32 __result = _sub_5E64CE(iff, chunk, user0, user1);
    return __result;
}

_extern __int32 _sub_5E6113(IFF *, IFFChunk *, void *, void *);
_static __int32 HandleDTRM(IFF *iff, IFFChunk *chunk, void *pBackground, void *user1) // 0x5E6113
{
    mangled_assert("HandleDTRM");
    todo("implement");
    __int32 __result = _sub_5E6113(iff, chunk, pBackground, user1);
    return __result;
}
#endif
