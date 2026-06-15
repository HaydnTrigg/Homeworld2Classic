#if 0
/* ---------- headers */

#include "decomp.h"
#include <Decal\DecalRefMesh.h>
#include <xstring>
#include <Mathlib\matrix4.h>
#include <xmemory0>
#include <pch.h>
#include <Render\gl\r_defines.h>
#include <Render\gl\glext.h>
#include <Mathlib\matrix3.h>
#include <boost\checked_delete.hpp>
#include <new>
#include <xstddef>
#include <type_traits>
#include <xutility>
#include <iosfwd>
#include <vector>
#include <xmemory>
#include <Render\FxGL\FXManager.h>
#include <debug\ctassert.h>
#include <Render\FxGL\VarMulti.h>
#include <Render\tristrip.h>
#include <Mathlib\vector3.h>
#include <Mathlib\vector4.h>
#include <boost\scoped_ptr.hpp>
#include <Mathlib\vector2.h>
#include <util\types.h>
#include <boost\cstdint.hpp>
#include <HierarchyStatic.h>
#include <Collision\Primitives\obb.h>
#include <platform\osdef.h>
#include <Mathlib\mathlibdll.h>
#include <Mathlib\fastmath.h>
#include <BTG.h>
#include <Render\objects\core.h>
#include <Render\objects\objects.h>
#include <gameRender.h>
#include <Render\gl\types.h>
#include <Mathlib\matvec.h>
#include <GameEventDefs.h>
#include <debug\db.h>
#include <Stars.h>
#include <Render\gl\lotypes.h>
#include <util\colour.h>
#include <boost\shared_ptr.hpp>
#include <selection.h>
#include <Render\gl\r_types.h>
#include <boost\detail\shared_count.hpp>
#include <boost\detail\lwm_win32.hpp>
#include <BgLightAnim.h>
#include <GameEventSys.h>
#include <string>
#include <Collision\Primitives\mesh.h>
#include <Collision\Primitives\triangle.h>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- private variables */

_static
{
    extern BgLightAnim *s_instance; // 0x848724
}

/* ---------- public code */

_inline BgLightAnim::Data::Data() // 0x5E488F
{
    mangled_assert("??0Data@BgLightAnim@@QAE@XZ");
    todo("implement");
}

_inline boost::shared_ptr<BgLightAnim::Data>::~shared_ptr<BgLightAnim::Data>() // 0x5E48A5
{
    mangled_assert("??1?$shared_ptr@VData@BgLightAnim@@@boost@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline boost::detail::sp_counted_base_impl<BgLightAnim::Data *,boost::checked_deleter<BgLightAnim::Data> >::~sp_counted_base_impl<BgLightAnim::Data *,boost::checked_deleter<BgLightAnim::Data> >() // 0x5E48B1
{
    mangled_assert("??1?$sp_counted_base_impl@PAVData@BgLightAnim@@U?$checked_deleter@VData@BgLightAnim@@@boost@@@detail@boost@@UAE@XZ");
    compiler_generated();
    todo("implement");
}

bool BgLightAnim::Startup() // 0x5E4ACE
{
    mangled_assert("?Startup@BgLightAnim@@SG_NXZ");
    todo("implement");
}

bool BgLightAnim::Shutdown() // 0x5E4AAA
{
    mangled_assert("?Shutdown@BgLightAnim@@SG_NXZ");
    todo("implement");
}

BgLightAnim *BgLightAnim::Instance() // 0x5E4946
{
    mangled_assert("?Instance@BgLightAnim@@SGPAV1@XZ");
    todo("implement");
}

BgLightAnim::BgLightAnim() // 0x5E481E
{
    mangled_assert("??0BgLightAnim@@AAE@XZ");
    todo("implement");
}

BgLightAnim::~BgLightAnim() // 0x5E48B8
{
    mangled_assert("??1BgLightAnim@@AAE@XZ");
    todo("implement");
}

void BgLightAnim::Play(char const *) // 0x5E4A2C
{
    mangled_assert("?Play@BgLightAnim@@QAEXPBD@Z");
    todo("implement");
}

bool BgLightAnim::IsPlaying() const // 0x5E494C
{
    mangled_assert("?IsPlaying@BgLightAnim@@QBE_NXZ");
    todo("implement");
}

void BgLightAnim::Update(float) // 0x5E4B07
{
    mangled_assert("?Update@BgLightAnim@@QAEXM@Z");
    todo("implement");
}

void BgLightAnim::OnEvent(GameEventSys::Event const &) // 0x5E4966
{
    mangled_assert("?OnEvent@BgLightAnim@@UAEXABVEvent@GameEventSys@@@Z");
    todo("implement");
}

/* ---------- private code */
#endif
