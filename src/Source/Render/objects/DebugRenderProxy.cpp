#if 0
/* ---------- headers */

#include "decomp.h"
#include <hash_map>
#include <xhash>
#include <xstring>
#include <xmemory0>
#include <Objects\pch.h>
#include <gl\r_defines.h>
#include <gl\glext.h>
#include <Objects\FontSystem.h>
#include <new>
#include <Objects\BitmapFont.h>
#include <xstddef>
#include <type_traits>
#include <Mathlib\matrix4.h>
#include <xutility>
#include <utility>
#include <Mathlib\vector3.h>
#include <iosfwd>
#include <vector>
#include <xmemory>
#include <Mathlib\matrix3.h>
#include <math.h>
#include <list>
#include <map>
#include <xtree>
#include <algorithm>
#include <util\types.h>
#include <Objects\ClipRect.h>
#include <platform\osdef.h>
#include <Mathlib\mathutil.h>
#include <Mathlib\matvec.h>
#include <Mathlib\vector2.h>
#include <Objects\DebugRenderProxy.h>
#include <Objects\DebugRender.h>
#include <Objects\Core.h>
#include <Objects\Objects.h>
#include <gl\lotypes.h>
#include <gl\types.h>
#include <util\colour.h>
#include <Mathlib\vector4.h>
#include <Mathlib\mathlibdll.h>
#include <Mathlib\fastmath.h>
#include <gl\r_types.h>
#include <string>
#include <Objects\Texture.h>
#include <Objects\CompiledText.h>
#include <Objects\TextureRegistry.h>

/* ---------- constants */

/* ---------- definitions */

typedef std::map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,DebugRenderProxyImp::Frame,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,DebugRenderProxyImp::Frame> > > FrameMap;

/* ---------- prototypes */


_static bool CompareFont(DebugRender::Text2D const &a, DebugRender::Text2D const &b);
_static bool CompareFontW(DebugRender::WText2D const &a, DebugRender::WText2D const &b);
_static bool CompareTexture(DebugRender::Texture2D const &a, DebugRender::Texture2D const &b);
_static bool CompareLine(DebugRender::Line2D const &a, DebugRender::Line2D const &b);

/* ---------- globals */

extern FatVertex s_vertex[1280]; // 0x10112200

/* ---------- private variables */

_static
{
    extern std::_Nil _Nil_obj; // 0x10132A00
}

/* ---------- public code */

_inline std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,DebugRenderProxyImp::Frame>::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,DebugRenderProxyImp::Frame>(std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,DebugRenderProxyImp::Frame> const &) // 0x1003D020
{
    mangled_assert("??0?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UFrame@DebugRenderProxyImp@@@std@@QAE@ABU01@@Z");
    compiler_generated();
    todo("implement");
}

_inline DebugRenderProxyImp::DebugRenderProxyImp(DebugRenderProxyImp const &) // 0x1003DC90
{
    mangled_assert("??0DebugRenderProxyImp@@QAE@ABV0@@Z");
    compiler_generated();
    todo("implement");
}

DebugRenderProxyImp::DebugRenderProxyImp() // 0x1003DCF0
{
    mangled_assert("??0DebugRenderProxyImp@@QAE@XZ");
    todo("implement");
}

_inline DebugRenderProxyImp::Frame::Frame(DebugRenderProxyImp::Frame const &) // 0x1003DDA0
{
    mangled_assert("??0Frame@DebugRenderProxyImp@@QAE@ABU01@@Z");
    compiler_generated();
    todo("implement");
}

_inline std::_Tree_buy<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,DebugRenderProxyImp::Frame>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,DebugRenderProxyImp::Frame> > >::~_Tree_buy<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,DebugRenderProxyImp::Frame>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,DebugRenderProxyImp::Frame> > >() // 0x1003E0C0
{
    mangled_assert("??1?$_Tree_buy@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UFrame@DebugRenderProxyImp@@@std@@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UFrame@DebugRenderProxyImp@@@std@@@2@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline std::_Tree_comp<0,std::_Tmap_traits<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,DebugRenderProxyImp::Frame,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,DebugRenderProxyImp::Frame> >,0> >::~_Tree_comp<0,std::_Tmap_traits<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,DebugRenderProxyImp::Frame,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,DebugRenderProxyImp::Frame> >,0> >() // 0x1003E0D0
{
    mangled_assert("??1?$_Tree_comp@$0A@V?$_Tmap_traits@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UFrame@DebugRenderProxyImp@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UFrame@DebugRenderProxyImp@@@std@@@2@$0A@@std@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline std::map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,DebugRenderProxyImp::Frame,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,DebugRenderProxyImp::Frame> > >::~map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,DebugRenderProxyImp::Frame,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,DebugRenderProxyImp::Frame> > >() // 0x1003E0E0
{
    mangled_assert("??1?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UFrame@DebugRenderProxyImp@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UFrame@DebugRenderProxyImp@@@std@@@2@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,DebugRenderProxyImp::Frame>::~pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,DebugRenderProxyImp::Frame>() // 0x1003E100
{
    mangled_assert("??1?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UFrame@DebugRenderProxyImp@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,DebugRenderProxyImp::Frame>::~pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,DebugRenderProxyImp::Frame>() // 0x1003E130
{
    mangled_assert("??1?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UFrame@DebugRenderProxyImp@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

DebugRenderProxyImp::~DebugRenderProxyImp() // 0x1003E3F0
{
    mangled_assert("??1DebugRenderProxyImp@@UAE@XZ");
    todo("implement");
}

_inline DebugRenderProxyImp::Frame::~Frame() // 0x1003E430
{
    mangled_assert("??1Frame@DebugRenderProxyImp@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline DebugRenderProxyImp &DebugRenderProxyImp::operator=(DebugRenderProxyImp const &) // 0x1003E770
{
    mangled_assert("??4DebugRenderProxyImp@@QAEAAV0@ABV0@@Z");
    compiler_generated();
    todo("implement");
}

void DebugRenderProxyImp::Display2DElements(DebugRenderProxyImp::Frame &) // 0x1003F650
{
    mangled_assert("?Display2DElements@DebugRenderProxyImp@@AAEXAAUFrame@1@@Z");
    todo("implement");
}

void DebugRenderProxyImp::Display() // 0x10040350
{
    mangled_assert("?Display@DebugRenderProxyImp@@UAEXXZ");
    todo("implement");
}

void DebugRenderProxyImp::List(std::vector<char const *,std::allocator<char const *> > &) // 0x10042800
{
    mangled_assert("?List@DebugRenderProxyImp@@UAEXAAV?$vector@PBDV?$allocator@PBD@std@@@std@@@Z");
    todo("implement");
}

void DebugRenderProxyImp::SetDisplay(char const *, bool) // 0x100429A0
{
    mangled_assert("?SetDisplay@DebugRenderProxyImp@@UAEXPBD_N@Z");
    todo("implement");
}

bool DebugRenderProxyImp::GetDisplay(char const *) // 0x10042720
{
    mangled_assert("?GetDisplay@DebugRenderProxyImp@@UAE_NPBD@Z");
    todo("implement");
}

void DebugRenderProxyImp::SetAutoClear(char const *, bool) // 0x100428F0
{
    mangled_assert("?SetAutoClear@DebugRenderProxyImp@@UAEXPBD_N@Z");
    todo("implement");
}

bool DebugRenderProxyImp::GetAutoClear(char const *) // 0x10042640
{
    mangled_assert("?GetAutoClear@DebugRenderProxyImp@@UAE_NPBD@Z");
    todo("implement");
}

void DebugRenderProxyImp::Clear(char const *) // 0x1003F370
{
    mangled_assert("?Clear@DebugRenderProxyImp@@UAEXPBD@Z");
    todo("implement");
}

void DebugRenderProxyImp::Draw(DebugRender::Point2D const &, char const *) // 0x10041BF0
{
    mangled_assert("?Draw@DebugRenderProxyImp@@UAEXABUPoint2D@DebugRender@@PBD@Z");
    todo("implement");
}

void DebugRenderProxyImp::Draw(DebugRender::Line2D const &, char const *) // 0x100417F0
{
    mangled_assert("?Draw@DebugRenderProxyImp@@UAEXABULine2D@DebugRender@@PBD@Z");
    todo("implement");
}

void DebugRenderProxyImp::Draw(DebugRender::Lines2DDupeVerts const &, char const *) // 0x10041970
{
    mangled_assert("?Draw@DebugRenderProxyImp@@UAEXABULines2DDupeVerts@DebugRender@@PBD@Z");
    todo("implement");
}

void DebugRenderProxyImp::Draw(DebugRender::Tri2D const &, char const *) // 0x100421E0
{
    mangled_assert("?Draw@DebugRenderProxyImp@@UAEXABUTri2D@DebugRender@@PBD@Z");
    todo("implement");
}

void DebugRenderProxyImp::Draw(DebugRender::Tris2DDupeVerts const &, char const *) // 0x10042360
{
    mangled_assert("?Draw@DebugRenderProxyImp@@UAEXABUTris2DDupeVerts@DebugRender@@PBD@Z");
    todo("implement");
}

void DebugRenderProxyImp::Draw(DebugRender::RectOutline const &, char const *) // 0x10041D70
{
    mangled_assert("?Draw@DebugRenderProxyImp@@UAEXABURectOutline@DebugRender@@PBD@Z");
    todo("implement");
}

void DebugRenderProxyImp::Draw(DebugRender::OvalOutline const &, char const *) // 0x10041A30
{
    mangled_assert("?Draw@DebugRenderProxyImp@@UAEXABUOvalOutline@DebugRender@@PBD@Z");
    todo("implement");
}

void DebugRenderProxyImp::Draw(DebugRender::Cylinder const &, char const *) // 0x10041590
{
    mangled_assert("?Draw@DebugRenderProxyImp@@UAEXABUCylinder@DebugRender@@PBD@Z");
    todo("implement");
}

void DebugRenderProxyImp::Draw(DebugRender::Point const &, char const *) // 0x10041CB0
{
    mangled_assert("?Draw@DebugRenderProxyImp@@UAEXABUPoint@DebugRender@@PBD@Z");
    todo("implement");
}

void DebugRenderProxyImp::Draw(DebugRender::Line const &, char const *) // 0x100418B0
{
    mangled_assert("?Draw@DebugRenderProxyImp@@UAEXABULine@DebugRender@@PBD@Z");
    todo("implement");
}

void DebugRenderProxyImp::Draw(DebugRender::Tri const &, char const *) // 0x100422A0
{
    mangled_assert("?Draw@DebugRenderProxyImp@@UAEXABUTri@DebugRender@@PBD@Z");
    todo("implement");
}

void DebugRenderProxyImp::Draw(DebugRender::Cube const &, char const *) // 0x10041280
{
    mangled_assert("?Draw@DebugRenderProxyImp@@UAEXABUCube@DebugRender@@PBD@Z");
    todo("implement");
}

void DebugRenderProxyImp::Draw(DebugRender::Sphere const &, char const *) // 0x10041EE0
{
    mangled_assert("?Draw@DebugRenderProxyImp@@UAEXABUSphere@DebugRender@@PBD@Z");
    todo("implement");
}

void DebugRenderProxyImp::Draw(DebugRender::Text2D const &, char const *) // 0x10041FA0
{
    mangled_assert("?Draw@DebugRenderProxyImp@@UAEXABUText2D@DebugRender@@PBD@Z");
    todo("implement");
}

void DebugRenderProxyImp::Draw(DebugRender::WText2D const &, char const *) // 0x10042470
{
    mangled_assert("?Draw@DebugRenderProxyImp@@UAEXABUWText2D@DebugRender@@PBD@Z");
    todo("implement");
}

void DebugRenderProxyImp::Draw(DebugRender::Texture2D const &, char const *) // 0x10042120
{
    mangled_assert("?Draw@DebugRenderProxyImp@@UAEXABUTexture2D@DebugRender@@PBD@Z");
    todo("implement");
}

void DebugRenderProxyImp::Draw(DebugRender::Text3D const &, char const *) // 0x10042060
{
    mangled_assert("?Draw@DebugRenderProxyImp@@UAEXABUText3D@DebugRender@@PBD@Z");
    todo("implement");
}

void DebugRenderProxyImp::Draw(DebugRender::WText3D const &, char const *) // 0x10042530
{
    mangled_assert("?Draw@DebugRenderProxyImp@@UAEXABUWText3D@DebugRender@@PBD@Z");
    todo("implement");
}

/* ---------- private code */

_static bool CompareFont(DebugRender::Text2D const &a, DebugRender::Text2D const &b) // 0x1003F550
{
    mangled_assert("CompareFont");
    todo("implement");
}

_static bool CompareFontW(DebugRender::WText2D const &a, DebugRender::WText2D const &b) // 0x1003F5B0
{
    mangled_assert("CompareFontW");
    todo("implement");
}

_static bool CompareTexture(DebugRender::Texture2D const &a, DebugRender::Texture2D const &b) // 0x1003F630
{
    mangled_assert("CompareTexture");
    todo("implement");
}

_static bool CompareLine(DebugRender::Line2D const &a, DebugRender::Line2D const &b) // 0x1003F610
{
    mangled_assert("CompareLine");
    todo("implement");
}
#endif
