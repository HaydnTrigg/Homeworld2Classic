#if 0
/* ---------- headers */

#include "decomp.h"
#include <Objects\pch.h>
#include <gl\r_defines.h>
#include <gl\glext.h>
#include <Mathlib\matrix4.h>
#include <Mathlib\vector3.h>
#include <Mathlib\matrix3.h>
#include <math.h>
#include <util\types.h>
#include <platform\osdef.h>
#include <Mathlib\matvec.h>
#include <Mathlib\vector2.h>
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

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

extern DebugRenderProxy *DebugRender::s_pProxy; // 0x101121FC

/* ---------- private variables */

/* ---------- public code */

_extern _sub_10033C60(DebugRenderProxy *const, DebugRenderProxy const &);
_inline DebugRenderProxy::DebugRenderProxy(DebugRenderProxy const &) // 0x10033C60
{
    mangled_assert("??0DebugRenderProxy@@QAE@ABV0@@Z");
    compiler_generated();
    todo("implement");
    _sub_10033C60(this, arg);
}

_extern _sub_10033C70(DebugRenderProxy *const);
_inline DebugRenderProxy::DebugRenderProxy() // 0x10033C70
{
    mangled_assert("??0DebugRenderProxy@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_10033C70(this);
}

_extern void _sub_10034130(DebugRenderProxy *);
void DebugRender::Register(DebugRenderProxy *pProxy) // 0x10034130
{
    mangled_assert("?Register@DebugRender@@SGXPAVDebugRenderProxy@@@Z");
    todo("implement");
    _sub_10034130(pProxy);
}

_extern void _sub_10034180(DebugRenderProxy *);
void DebugRender::Unregister(DebugRenderProxy *pProxy) // 0x10034180
{
    mangled_assert("?Unregister@DebugRender@@SGXPAVDebugRenderProxy@@@Z");
    todo("implement");
    _sub_10034180(pProxy);
}

_extern void _sub_10033E80();
void DebugRender::Display() // 0x10033E80
{
    mangled_assert("?Display@DebugRender@@SGXXZ");
    todo("implement");
    _sub_10033E80();
}

_extern void _sub_10034110(std::vector<char const *,std::allocator<char const *> > &);
void DebugRender::List(std::vector<char const *,std::allocator<char const *> > &l) // 0x10034110
{
    mangled_assert("?List@DebugRender@@SGXAAV?$vector@PBDV?$allocator@PBD@std@@@std@@@Z");
    todo("implement");
    _sub_10034110(l);
}

_extern void _sub_10034160(char const *, bool);
void DebugRender::SetDisplay(char const *frame, bool bDisplay) // 0x10034160
{
    mangled_assert("?SetDisplay@DebugRender@@SGXPBD_N@Z");
    todo("implement");
    _sub_10034160(frame, bDisplay);
}

_extern bool _sub_100340F0(char const *);
bool DebugRender::GetDisplay(char const *frame) // 0x100340F0
{
    mangled_assert("?GetDisplay@DebugRender@@SG_NPBD@Z");
    todo("implement");
    bool __result = _sub_100340F0(frame);
    return __result;
}

_extern void _sub_10034140(char const *, bool);
void DebugRender::SetAutoClear(char const *frame, bool bClear) // 0x10034140
{
    mangled_assert("?SetAutoClear@DebugRender@@SGXPBD_N@Z");
    todo("implement");
    _sub_10034140(frame, bClear);
}

_extern bool _sub_100340D0(char const *);
bool DebugRender::GetAutoClear(char const *frame) // 0x100340D0
{
    mangled_assert("?GetAutoClear@DebugRender@@SG_NPBD@Z");
    todo("implement");
    bool __result = _sub_100340D0(frame);
    return __result;
}

_extern void _sub_10033E60(char const *);
void DebugRender::Clear(char const *frame) // 0x10033E60
{
    mangled_assert("?Clear@DebugRender@@SGXPBD@Z");
    todo("implement");
    _sub_10033E60(frame);
}

_extern void _sub_10033F50(DebugRender::Point2D const &, char const *);
void DebugRender::Draw(DebugRender::Point2D const &p, char const *frame) // 0x10033F50
{
    mangled_assert("?Draw@DebugRender@@SGXABUPoint2D@1@PBD@Z");
    todo("implement");
    _sub_10033F50(p, frame);
}

_extern void _sub_10033ED0(DebugRender::Line2D const &, char const *);
void DebugRender::Draw(DebugRender::Line2D const &l, char const *frame) // 0x10033ED0
{
    mangled_assert("?Draw@DebugRender@@SGXABULine2D@1@PBD@Z");
    todo("implement");
    _sub_10033ED0(l, frame);
}

_extern void _sub_10033F10(DebugRender::Lines2DDupeVerts const &, char const *);
void DebugRender::Draw(DebugRender::Lines2DDupeVerts const &l, char const *frame) // 0x10033F10
{
    mangled_assert("?Draw@DebugRender@@SGXABULines2DDupeVerts@1@PBD@Z");
    todo("implement");
    _sub_10033F10(l, frame);
}

_extern void _sub_10034030(DebugRender::Tri2D const &, char const *);
void DebugRender::Draw(DebugRender::Tri2D const &t, char const *frame) // 0x10034030
{
    mangled_assert("?Draw@DebugRender@@SGXABUTri2D@1@PBD@Z");
    todo("implement");
    _sub_10034030(t, frame);
}

_extern void _sub_10034070(DebugRender::Tris2DDupeVerts const &, char const *);
void DebugRender::Draw(DebugRender::Tris2DDupeVerts const &t, char const *frame) // 0x10034070
{
    mangled_assert("?Draw@DebugRender@@SGXABUTris2DDupeVerts@1@PBD@Z");
    todo("implement");
    _sub_10034070(t, frame);
}

_extern void _sub_10033F90(DebugRender::RectOutline const &, char const *);
void DebugRender::Draw(DebugRender::RectOutline const &c, char const *frame) // 0x10033F90
{
    mangled_assert("?Draw@DebugRender@@SGXABURectOutline@1@PBD@Z");
    todo("implement");
    _sub_10033F90(c, frame);
}

_extern void _sub_10033F30(DebugRender::OvalOutline const &, char const *);
void DebugRender::Draw(DebugRender::OvalOutline const &s, char const *frame) // 0x10033F30
{
    mangled_assert("?Draw@DebugRender@@SGXABUOvalOutline@1@PBD@Z");
    todo("implement");
    _sub_10033F30(s, frame);
}

_extern void _sub_10033F70(DebugRender::Point const &, char const *);
void DebugRender::Draw(DebugRender::Point const &p, char const *frame) // 0x10033F70
{
    mangled_assert("?Draw@DebugRender@@SGXABUPoint@1@PBD@Z");
    todo("implement");
    _sub_10033F70(p, frame);
}

_extern void _sub_10033EF0(DebugRender::Line const &, char const *);
void DebugRender::Draw(DebugRender::Line const &l, char const *frame) // 0x10033EF0
{
    mangled_assert("?Draw@DebugRender@@SGXABULine@1@PBD@Z");
    todo("implement");
    _sub_10033EF0(l, frame);
}

_extern void _sub_10034050(DebugRender::Tri const &, char const *);
void DebugRender::Draw(DebugRender::Tri const &t, char const *frame) // 0x10034050
{
    mangled_assert("?Draw@DebugRender@@SGXABUTri@1@PBD@Z");
    todo("implement");
    _sub_10034050(t, frame);
}

_extern void _sub_10033E90(DebugRender::Cube const &, char const *);
void DebugRender::Draw(DebugRender::Cube const &c, char const *frame) // 0x10033E90
{
    mangled_assert("?Draw@DebugRender@@SGXABUCube@1@PBD@Z");
    todo("implement");
    _sub_10033E90(c, frame);
}

_extern void _sub_10033FB0(DebugRender::Sphere const &, char const *);
void DebugRender::Draw(DebugRender::Sphere const &s, char const *frame) // 0x10033FB0
{
    mangled_assert("?Draw@DebugRender@@SGXABUSphere@1@PBD@Z");
    todo("implement");
    _sub_10033FB0(s, frame);
}

_extern void _sub_10033EB0(DebugRender::Cylinder const &, char const *);
void DebugRender::Draw(DebugRender::Cylinder const &c, char const *frame) // 0x10033EB0
{
    mangled_assert("?Draw@DebugRender@@SGXABUCylinder@1@PBD@Z");
    todo("implement");
    _sub_10033EB0(c, frame);
}

_extern void _sub_10033FF0(DebugRender::Text3D const &, char const *);
void DebugRender::Draw(DebugRender::Text3D const &t, char const *frame) // 0x10033FF0
{
    mangled_assert("?Draw@DebugRender@@SGXABUText3D@1@PBD@Z");
    todo("implement");
    _sub_10033FF0(t, frame);
}

_extern void _sub_100340B0(DebugRender::WText3D const &, char const *);
void DebugRender::Draw(DebugRender::WText3D const &t, char const *frame) // 0x100340B0
{
    mangled_assert("?Draw@DebugRender@@SGXABUWText3D@1@PBD@Z");
    todo("implement");
    _sub_100340B0(t, frame);
}

_extern void _sub_10033FD0(DebugRender::Text2D const &, char const *);
void DebugRender::Draw(DebugRender::Text2D const &t, char const *frame) // 0x10033FD0
{
    mangled_assert("?Draw@DebugRender@@SGXABUText2D@1@PBD@Z");
    todo("implement");
    _sub_10033FD0(t, frame);
}

_extern void _sub_10034090(DebugRender::WText2D const &, char const *);
void DebugRender::Draw(DebugRender::WText2D const &t, char const *frame) // 0x10034090
{
    mangled_assert("?Draw@DebugRender@@SGXABUWText2D@1@PBD@Z");
    todo("implement");
    _sub_10034090(t, frame);
}

_extern void _sub_10034010(DebugRender::Texture2D const &, char const *);
void DebugRender::Draw(DebugRender::Texture2D const &t, char const *frame) // 0x10034010
{
    mangled_assert("?Draw@DebugRender@@SGXABUTexture2D@1@PBD@Z");
    todo("implement");
    _sub_10034010(t, frame);
}

_extern void _sub_10033D40(DebugRenderProxy *const);
DebugRenderProxy::~DebugRenderProxy() // 0x10033D40
{
    mangled_assert("??1DebugRenderProxy@@UAE@XZ");
    todo("implement");
    _sub_10033D40(this);
}

_extern _sub_10033C90(DebugRender::Lines2DDupeVerts *const, __int32, FatVertex const *);
DebugRender::Lines2DDupeVerts::Lines2DDupeVerts(__int32, FatVertex const *) // 0x10033C90
{
    mangled_assert("??0Lines2DDupeVerts@DebugRender@@QAE@HPBUFatVertex@@@Z");
    todo("implement");
    _sub_10033C90(this, arg, arg);
}

_extern void _sub_10033D50(DebugRender::Lines2DDupeVerts *const);
DebugRender::Lines2DDupeVerts::~Lines2DDupeVerts() // 0x10033D50
{
    mangled_assert("??1Lines2DDupeVerts@DebugRender@@QAE@XZ");
    todo("implement");
    _sub_10033D50(this);
}

_extern _sub_10033CE0(DebugRender::Tris2DDupeVerts *const, __int32, FatVertex const *, __int32, __int32 const *);
DebugRender::Tris2DDupeVerts::Tris2DDupeVerts(__int32, FatVertex const *, __int32, __int32 const *) // 0x10033CE0
{
    mangled_assert("??0Tris2DDupeVerts@DebugRender@@QAE@HPBUFatVertex@@HPBH@Z");
    todo("implement");
    _sub_10033CE0(this, arg, arg, arg, arg);
}

_extern void _sub_10033D60(DebugRender::Tris2DDupeVerts *const);
DebugRender::Tris2DDupeVerts::~Tris2DDupeVerts() // 0x10033D60
{
    mangled_assert("??1Tris2DDupeVerts@DebugRender@@QAE@XZ");
    todo("implement");
    _sub_10033D60(this);
}

_extern DebugRender &_sub_10033D70(DebugRender *const, DebugRender const &);
_inline DebugRender &DebugRender::operator=(DebugRender const &) // 0x10033D70
{
    mangled_assert("??4DebugRender@@QAEAAV0@ABV0@@Z");
    compiler_generated();
    todo("implement");
    DebugRender & __result = _sub_10033D70(this, arg);
    return __result;
}

_extern DebugRenderProxy &_sub_10033D80(DebugRenderProxy *const, DebugRenderProxy const &);
_inline DebugRenderProxy &DebugRenderProxy::operator=(DebugRenderProxy const &) // 0x10033D80
{
    mangled_assert("??4DebugRenderProxy@@QAEAAV0@ABV0@@Z");
    compiler_generated();
    todo("implement");
    DebugRenderProxy & __result = _sub_10033D80(this, arg);
    return __result;
}

_extern DebugRender::Lines2DDupeVerts &_sub_10033D90(DebugRender::Lines2DDupeVerts *const, DebugRender::Lines2DDupeVerts const &);
_inline DebugRender::Lines2DDupeVerts &DebugRender::Lines2DDupeVerts::operator=(DebugRender::Lines2DDupeVerts const &) // 0x10033D90
{
    mangled_assert("??4Lines2DDupeVerts@DebugRender@@QAEAAU01@ABU01@@Z");
    compiler_generated();
    todo("implement");
    DebugRender::Lines2DDupeVerts & __result = _sub_10033D90(this, arg);
    return __result;
}

_extern DebugRender::Tris2DDupeVerts &_sub_10033DB0(DebugRender::Tris2DDupeVerts *const, DebugRender::Tris2DDupeVerts const &);
_inline DebugRender::Tris2DDupeVerts &DebugRender::Tris2DDupeVerts::operator=(DebugRender::Tris2DDupeVerts const &) // 0x10033DB0
{
    mangled_assert("??4Tris2DDupeVerts@DebugRender@@QAEAAU01@ABU01@@Z");
    compiler_generated();
    todo("implement");
    DebugRender::Tris2DDupeVerts & __result = _sub_10033DB0(this, arg);
    return __result;
}

/* ---------- private code */
#endif
