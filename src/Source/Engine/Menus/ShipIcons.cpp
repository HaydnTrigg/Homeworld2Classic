#if 0
/* ---------- headers */

#include "decomp.h"
#include <seInterface2\PatchBase.h>
#include <seInterface2\SoundParams.h>
#include <xstring>
#include <Mathlib\matrix4.h>
#include <xmemory0>
#include <pch.h>
#include <Mathlib\matrix3.h>
#include <new>
#include <xstddef>
#include <type_traits>
#include <Render\objects\textureregistry.h>
#include <xutility>
#include <utility>
#include <iosfwd>
#include <list>
#include <luaconfig\luaconfig.h>
#include <Mathlib\vector3.h>
#include <lua.h>
#include <Mathlib\vector4.h>
#include <map>
#include <sobstatic.h>
#include <xtree>
#include <Collision\Primitives\sphere.h>
#include <boost\scoped_ptr.hpp>
#include <Mathlib\vector2.h>
#include <util\types.h>
#include <stack>
#include <boost\cstdint.hpp>
#include <Mathlib\mathutil.h>
#include <platform\osdef.h>
#include <UserInterface\SharedGraphicFactory.h>
#include <UserInterface\Graphic.h>
#include <Render\objects\texture.h>
#include <Render\objects\objects.h>
#include <Render\objects\core.h>
#include <Render\gl\types.h>
#include <Mathlib\matvec.h>
#include <Collision\Primitives\obb.h>
#include <Mathlib\mathlibdll.h>
#include <Mathlib\fastmath.h>
#include <Render\gl\lotypes.h>
#include <debug\db.h>
#include <Render\gl\r_types.h>
#include <util\colour.h>
#include <boost\shared_ptr.hpp>
#include <profile\profile.h>
#include <boost\throw_exception.hpp>
#include <iostream>
#include <boost\detail\shared_count.hpp>
#include <App\Hw2Identify.h>
#include <UserInterface\uitypes.h>
#include <boost\detail\lwm_win32.hpp>
#include <platform\inputinterface.h>
#include <platform\platformexports.h>
#include <platform\keydefines.h>
#include <Menus\ShipIcons.h>
#include <hash_map>
#include <wchar.h>
#include <xhash>
#include <Render\gl\r_defines.h>
#include <Render\gl\glext.h>
#include <Render\objects\textureproxy.h>
#include <seInterface2\PatchID.h>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

extern UI::ShipIcons *UI::ShipIcons::ms_shipIcons; // 0x846D24

/* ---------- private variables */

/* ---------- public code */

_inline UI::ShipIcons::ShipIconInfo::ShipIconInfo(UI::ShipIcons::ShipIconInfo const &) // 0x5A8044
{
    mangled_assert("??0ShipIconInfo@ShipIcons@UI@@QAE@ABU012@@Z");
    compiler_generated();
    todo("implement");
}

_inline UI::ShipIcons::ShipIconInfo::ShipIconInfo() // 0x5A80A9
{
    mangled_assert("??0ShipIconInfo@ShipIcons@UI@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

UI::ShipIcons *UI::ShipIcons::i() // 0x5A8B3D
{
    mangled_assert("?i@ShipIcons@UI@@SGPAV12@XZ");
    todo("implement");
}

bool UI::ShipIcons::Create() // 0x5A8325
{
    mangled_assert("?Create@ShipIcons@UI@@SG_NXZ");
    todo("implement");
}

bool UI::ShipIcons::Destroy() // 0x5A8367
{
    mangled_assert("?Destroy@ShipIcons@UI@@SG_NXZ");
    todo("implement");
}

UI::ShipIcons::ShipIcons() // 0x5A80C6
{
    mangled_assert("??0ShipIcons@UI@@AAE@XZ");
    todo("implement");
}

_inline std::_List_buy<UI::ShipIcons::ShipIconInfo,std::allocator<UI::ShipIcons::ShipIconInfo> >::~_List_buy<UI::ShipIcons::ShipIconInfo,std::allocator<UI::ShipIcons::ShipIconInfo> >() // 0x5A81FE
{
    mangled_assert("??1?$_List_buy@UShipIconInfo@ShipIcons@UI@@V?$allocator@UShipIconInfo@ShipIcons@UI@@@std@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline UI::ShipIcons::ShipIconInfo::~ShipIconInfo() // 0x5A8219
{
    mangled_assert("??1ShipIconInfo@ShipIcons@UI@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

bool UI::ShipIcons::LoadFile(char const *, char const *) // 0x5A880A
{
    mangled_assert("?LoadFile@ShipIcons@UI@@AAE_NPBD0@Z");
    todo("implement");
}

bool UI::ShipIcons::Load(LuaConfig &, char const *, UI::ShipIcons::ShipIconInfo &) // 0x5A86CA
{
    mangled_assert("?Load@ShipIcons@UI@@AAE_NAAVLuaConfig@@PBDAAUShipIconInfo@12@@Z");
    todo("implement");
}

UI::ShipIcons::~ShipIcons() // 0x5A8261
{
    mangled_assert("??1ShipIcons@UI@@AAE@XZ");
    todo("implement");
}

boost::shared_ptr<UI::Graphic> UI::ShipIcons::GetShipIcon(unsigned __int32) // 0x5A83F5
{
    mangled_assert("?GetShipIcon@ShipIcons@UI@@QAE?AV?$shared_ptr@VGraphic@UI@@@boost@@I@Z");
    todo("implement");
}

boost::shared_ptr<UI::Graphic> UI::ShipIcons::GetShipIconByName(char const *) // 0x5A843D
{
    mangled_assert("?GetShipIconByName@ShipIcons@UI@@QAE?AV?$shared_ptr@VGraphic@UI@@@boost@@PBD@Z");
    todo("implement");
}

boost::shared_ptr<UI::Graphic> UI::ShipIcons::GetShipSmallIcon(unsigned __int32) // 0x5A863A
{
    mangled_assert("?GetShipSmallIcon@ShipIcons@UI@@QAE?AV?$shared_ptr@VGraphic@UI@@@boost@@I@Z");
    todo("implement");
}

boost::shared_ptr<UI::Graphic> UI::ShipIcons::GetShipSmallIconByName(char const *) // 0x5A8682
{
    mangled_assert("?GetShipSmallIconByName@ShipIcons@UI@@QAE?AV?$shared_ptr@VGraphic@UI@@@boost@@PBD@Z");
    todo("implement");
}

UI::ShipIcons::ShipIconInfo *UI::ShipIcons::GetShipIconInfo(unsigned __int32) // 0x5A8485
{
    mangled_assert("?GetShipIconInfo@ShipIcons@UI@@AAEPAUShipIconInfo@12@I@Z");
    todo("implement");
}

UI::ShipIcons::ShipIconInfo *UI::ShipIcons::GetShipIconInfoByName(char const *) // 0x5A8600
{
    mangled_assert("?GetShipIconInfoByName@ShipIcons@UI@@AAEPAUShipIconInfo@12@PBD@Z");
    todo("implement");
}

boost::shared_ptr<UI::Graphic> UI::ShipIcons::GetDefaultShipIcon() // 0x5A838B
{
    mangled_assert("?GetDefaultShipIcon@ShipIcons@UI@@QAE?AV?$shared_ptr@VGraphic@UI@@@boost@@XZ");
    todo("implement");
}

boost::shared_ptr<UI::Graphic> UI::ShipIcons::GetDefaultShipSmallIcon() // 0x5A83C0
{
    mangled_assert("?GetDefaultShipSmallIcon@ShipIcons@UI@@QAE?AV?$shared_ptr@VGraphic@UI@@@boost@@XZ");
    todo("implement");
}

/* ---------- private code */
#endif
