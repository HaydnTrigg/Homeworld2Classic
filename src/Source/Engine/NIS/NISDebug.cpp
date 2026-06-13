#if 0
/* ---------- headers */

#include "decomp.h"
#include <SoundManager\SoundManager.h>
#include <seInterface2\SEInterface.h>
#include <seInterface2\SoundParamManager.h>
#include <assist\stlexsmallvector.h>
#include <seInterface2\seinterfacefunc.h>
#include <assist\gbitset.h>
#include <Render\objects\core.h>
#include <xstring>
#include <xmemory0>
#include <Mathlib\matrix4.h>
#include <boost\shared_array.hpp>
#include <pch.h>
#include <malloc.h>
#include <SoundManager\SoundEntityHandle.h>
#include <Render\objects\cliprect.h>
#include <platform\osdef.h>
#include <Mathlib\matrix3.h>
#include <new>
#include <Render\objects\fontsystem.h>
#include <exception>
#include <xstddef>
#include <renderer.h>
#include <abilities.h>
#include <Render\objects\objects.h>
#include <type_traits>
#include <Render\gl\types.h>
#include <Render\objects\bitmapfont.h>
#include <Mathlib\matvec.h>
#include <SelTarg.h>
#include <prim.h>
#include <platform\timer.h>
#include <platform\platformexports.h>
#include <xutility>
#include <Render\gl\lotypes.h>
#include <utility>
#include <iosfwd>
#include <vector>
#include <xmemory>
#include <Collision\Primitives\capsule.h>
#include <debug\ctassert.h>
#include <Collision\Primitives\segment.h>
#include <seInterface2\SampleID.h>
#include <Collision\BVH\profiling.h>
#include <seInterface2\SampleBase.h>
#include <Render\gl\r_types.h>
#include <NIS\NISManager.h>
#include <math.h>
#include <list>
#include <sob.h>
#include <Mathlib\vector3.h>
#include <sobstatic.h>
#include <Collision\Primitives\sphere.h>
#include <Mathlib\vector4.h>
#include <map>
#include <xtree>
#include <boost\smart_ptr.hpp>
#include <boost\scoped_ptr.hpp>
#include <MultiplierContainer.h>
#include <visibility.h>
#include <MultiplierTypes.h>
#include <Mathlib\vector2.h>
#include <Collision\BVH\bvh.h>
#include <Render\objects\compiledtext.h>
#include <util\types.h>
#include <Render\gl\r_defines.h>
#include <seInterface2\sedefinesshared.h>
#include <Render\gl\glext.h>
#include <boost\cstdint.hpp>
#include <boost\scoped_array.hpp>
#include <Mathlib\quat.h>
#include <curve.h>
#include <Collision\Primitives\obb.h>
#include <NIS\NISMotion.h>
#include <sobid.h>
#include <Mathlib\mathlibdll.h>
#include <Mathlib\fastmath.h>
#include <debug\db.h>
#include <gameRenderDebug.h>
#include <task.h>
#include <stack>
#include <NIS\NIS.h>
#include <AnimCurve.h>
#include <hash_map>
#include <MainUI.h>
#include <xhash>
#include <Selector.h>
#include <MetaSelTarg.h>
#include <boost\shared_ptr.hpp>
#include <Render\FxGL\FXManager.h>
#include <util\colour.h>
#include <sobtypes.h>
#include <Render\FxGL\VarMulti.h>
#include <boost\throw_exception.hpp>
#include <selection.h>
#include <savegamedef.h>
#include <boost\detail\shared_count.hpp>
#include <bitset>
#include <boost\detail\lwm_win32.hpp>
#include <Collision\BVH\octree.h>
#include <Collision\BVH\span.h>
#include <Collision\BVH\Internal\span_i.h>
#include <Collision\BVH\proxy.h>
#include <Collision\intersect.h>
#include <Collision\primitivesfwd.h>
#include <NIS\NISDebug.h>
#include <Mathlib\mathutil.h>
#include <wchar.h>
#include <Camera\OrbitParameters.h>
#include <Interpolation.h>
#include <seInterface2\PatchID.h>
#include <seInterface2\PatchBase.h>
#include <seInterface2\SoundParams.h>
#include <Collision\Primitives\aabb.h>
#include <SensorsManager.h>

/* ---------- constants */

/* ---------- definitions */

class `anonymous-namespace'::SelectedFollowerPred
{
public:
    bool operator()(std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,MotionFollower *> const &) const;
};
static_assert(sizeof(`anonymous-namespace'::SelectedFollowerPred) == 1, "Invalid `anonymous-namespace'::SelectedFollowerPred size");

class `anonymous-namespace'::SelectedNullPred :
    public NISDebug::SelectedNodePred
{
public:
    virtual bool Test(MotionNode const *) const override;
    SelectedNullPred(`anonymous-namespace'::SelectedNullPred const &); /* compiler_generated() */
    SelectedNullPred(); /* compiler_generated() */
    `anonymous-namespace'::SelectedNullPred &operator=(`anonymous-namespace'::SelectedNullPred const &); /* compiler_generated() */
};
static_assert(sizeof(`anonymous-namespace'::SelectedNullPred) == 4, "Invalid `anonymous-namespace'::SelectedNullPred size");

class `anonymous-namespace'::SelectedLeaderPred :
    public NISDebug::SelectedNodePred
{
public:
    SelectedLeaderPred(`anonymous-namespace'::SelectedLeaderPred const &); /* compiler_generated() */
    SelectedLeaderPred(MotionFollower const *);
    virtual bool Test(MotionNode const *) const override;
private:
    MotionFollower const *m_pSelectedFollower; // 0x4
public:
    `anonymous-namespace'::SelectedLeaderPred &operator=(`anonymous-namespace'::SelectedLeaderPred const &); /* compiler_generated() */
};
static_assert(sizeof(`anonymous-namespace'::SelectedLeaderPred) == 8, "Invalid `anonymous-namespace'::SelectedLeaderPred size");

typedef `anonymous-namespace'::SelectedFollowerPred ?A0x8e3818ba::SelectedFollowerPred;
typedef `anonymous-namespace'::SelectedNullPred ?A0x8e3818ba::SelectedNullPred;
typedef `anonymous-namespace'::SelectedLeaderPred ?A0x8e3818ba::SelectedLeaderPred;

/* ---------- prototypes */


_static void drawCamera(vector4 const &col);

/* ---------- globals */

extern std::bitset<5> NISDebug::m_visualize2D; // 0x84497C
extern std::bitset<3> NISDebug::m_visualize3D; // 0x844980

/* ---------- private variables */

_static
{
    extern float const NISUpdateRate; // 0x79F130
    extern float const NISUpdatePeriod; // 0x839500
}

/* ---------- public code */

_extern _sub_54CF4F(NISDebug::SelectedMotionPathPred *const, MotionFollower const *);
NISDebug::SelectedMotionPathPred::SelectedMotionPathPred(MotionFollower const *) // 0x54CF4F
{
    mangled_assert("??0SelectedMotionPathPred@NISDebug@@QAE@PBVMotionFollower@@@Z");
    todo("implement");
    _sub_54CF4F(this, arg);
}

_extern _sub_54CF61(NISDebug::SelectedNodePred *const);
_inline NISDebug::SelectedNodePred::SelectedNodePred() // 0x54CF61
{
    mangled_assert("??0SelectedNodePred@NISDebug@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_54CF61(this);
}

_extern bool _sub_54CFA0(NISDebug::SelectedMotionPathPred const *const, MotionPath const *);
bool NISDebug::SelectedMotionPathPred::Test(MotionPath const *) const // 0x54CFA0
{
    mangled_assert("?Test@SelectedMotionPathPred@NISDebug@@UBE_NPBVMotionPath@@@Z");
    todo("implement");
    bool __result = _sub_54CFA0(this, arg);
    return __result;
}

_extern void _sub_54D270(unsigned __int32, bool);
void NISDebug::enable2D(unsigned __int32 bit, bool bOn) // 0x54D270
{
    mangled_assert("?enable2D@NISDebug@@SGXI_N@Z");
    todo("implement");
    _sub_54D270(bit, bOn);
}

_extern void _sub_54D287(unsigned __int32, bool);
void NISDebug::enable3D(unsigned __int32 bit, bool bOn) // 0x54D287
{
    mangled_assert("?enable3D@NISDebug@@SGXI_N@Z");
    todo("implement");
    _sub_54D287(bit, bOn);
}

_extern void _sub_54D27A(bool);
void NISDebug::enable2DAll(bool bOn) // 0x54D27A
{
    mangled_assert("?enable2DAll@NISDebug@@SGX_N@Z");
    todo("implement");
    _sub_54D27A(bOn);
}

_extern void _sub_54D291(bool);
void NISDebug::enable3DAll(bool bOn) // 0x54D291
{
    mangled_assert("?enable3DAll@NISDebug@@SGX_N@Z");
    todo("implement");
    _sub_54D291(bOn);
}

_extern void _sub_54E335(NIS const *, NISDebug::SelectedMotionPathPred const *);
void NISDebug::visualizePaths3D(NIS const *pNIS, NISDebug::SelectedMotionPathPred const *pred) // 0x54E335
{
    mangled_assert("?visualizePaths3D@NISDebug@@CGXPBVNIS@@PBVSelectedMotionPathPred@1@@Z");
    todo("implement");
    _sub_54E335(pNIS, pred);
}

_extern void _sub_54DB6D(NIS const *, NISDebug::SelectedNodePred const *);
void NISDebug::visualizeLeaders3D(NIS const *pNIS, NISDebug::SelectedNodePred const *pred) // 0x54DB6D
{
    mangled_assert("?visualizeLeaders3D@NISDebug@@CGXPBVNIS@@PBVSelectedNodePred@1@@Z");
    todo("implement");
    _sub_54DB6D(pNIS, pred);
}

_extern void _sub_54D8A8(NIS const *);
void NISDebug::visualizeCameras3D(NIS const *pNIS) // 0x54D8A8
{
    mangled_assert("?visualizeCameras3D@NISDebug@@CGXPBVNIS@@@Z");
    todo("implement");
    _sub_54D8A8(pNIS);
}

_extern void _sub_54D71B(NIS const *);
void NISDebug::visualize3D(NIS const *pNIS) // 0x54D71B
{
    mangled_assert("?visualize3D@NISDebug@@SGXPBVNIS@@@Z");
    todo("implement");
    _sub_54D71B(pNIS);
}

_extern void _sub_54DC45(NIS const *, MotionNode *, float, float, float, float);
void NISDebug::visualizeMotionNode2D(NIS const *pNIS, MotionNode *pNode, float x, float y, float width, float height) // 0x54DC45
{
    mangled_assert("?visualizeMotionNode2D@NISDebug@@CGXPBVNIS@@PAVMotionNode@@MMMM@Z");
    todo("implement");
    _sub_54DC45(pNIS, pNode, x, y, width, height);
}

_extern MotionFollower const *_sub_54D2F6(NIS const *);
MotionFollower const *NISDebug::findSelectedFollower(NIS const *pNIS) // 0x54D2F6
{
    mangled_assert("?findSelectedFollower@NISDebug@@CGPBVMotionFollower@@PBVNIS@@@Z");
    todo("implement");
    MotionFollower const * __result = _sub_54D2F6(pNIS);
    return __result;
}

_extern void _sub_54DAA2(NIS const *);
void NISDebug::visualizeFollowers2D(NIS const *pNIS) // 0x54DAA2
{
    mangled_assert("?visualizeFollowers2D@NISDebug@@CGXPBVNIS@@@Z");
    todo("implement");
    _sub_54DAA2(pNIS);
}

_extern void _sub_54DB03(NIS const *, NISDebug::SelectedNodePred const *);
void NISDebug::visualizeLeaders2D(NIS const *pNIS, NISDebug::SelectedNodePred const *pred) // 0x54DB03
{
    mangled_assert("?visualizeLeaders2D@NISDebug@@CGXPBVNIS@@PBVSelectedNodePred@1@@Z");
    todo("implement");
    _sub_54DB03(pNIS, pred);
}

_extern void _sub_54D850(NIS const *);
void NISDebug::visualizeCameras2D(NIS const *pNIS) // 0x54D850
{
    mangled_assert("?visualizeCameras2D@NISDebug@@CGXPBVNIS@@@Z");
    todo("implement");
    _sub_54D850(pNIS);
}

_extern void _sub_54DFD2(NIS const *, NISDebug::SelectedMotionPathPred const *);
void NISDebug::visualizePaths2D(NIS const *pNIS, NISDebug::SelectedMotionPathPred const *pred) // 0x54DFD2
{
    mangled_assert("?visualizePaths2D@NISDebug@@CGXPBVNIS@@PBVSelectedMotionPathPred@1@@Z");
    todo("implement");
    _sub_54DFD2(pNIS, pred);
}

_extern void _sub_54D588(NIS const *);
void NISDebug::visualize2D(NIS const *pNIS) // 0x54D588
{
    mangled_assert("?visualize2D@NISDebug@@SGXPBVNIS@@@Z");
    todo("implement");
    _sub_54D588(pNIS);
}

_extern void _sub_54D3B5();
void NISDebug::play() // 0x54D3B5
{
    mangled_assert("?play@NISDebug@@SGXXZ");
    todo("implement");
    _sub_54D3B5();
}

_extern void _sub_54D403();
void NISDebug::playRelative() // 0x54D403
{
    mangled_assert("?playRelative@NISDebug@@SGXXZ");
    todo("implement");
    _sub_54D403();
}

_extern void _sub_54D46F();
void NISDebug::rewind() // 0x54D46F
{
    mangled_assert("?rewind@NISDebug@@SGXXZ");
    todo("implement");
    _sub_54D46F();
}

_extern void _sub_54D484();
void NISDebug::rewindLots() // 0x54D484
{
    mangled_assert("?rewindLots@NISDebug@@SGXXZ");
    todo("implement");
    _sub_54D484();
}

_extern void _sub_54D06C();
void NISDebug::cameraRelease() // 0x54D06C
{
    mangled_assert("?cameraRelease@NISDebug@@SGXXZ");
    todo("implement");
    _sub_54D06C();
}

_extern void _sub_54D3A9();
void NISDebug::pauseToggle() // 0x54D3A9
{
    mangled_assert("?pauseToggle@NISDebug@@SGXXZ");
    todo("implement");
    _sub_54D3A9();
}

_extern void _sub_54D521();
void NISDebug::showInfo() // 0x54D521
{
    mangled_assert("?showInfo@NISDebug@@SGXXZ");
    todo("implement");
    _sub_54D521();
}

_extern void _sub_54D368(unsigned __int32);
void NISDebug::keyPress(unsigned __int32 key) // 0x54D368
{
    mangled_assert("?keyPress@NISDebug@@SGXI@Z");
    todo("implement");
    _sub_54D368(key);
}

/* ---------- private code */

_extern void _sub_54D08E(vector4 const &);
_static void drawCamera(vector4 const &col) // 0x54D08E
{
    mangled_assert("drawCamera");
    todo("implement");
    _sub_54D08E(col);
}
#endif
