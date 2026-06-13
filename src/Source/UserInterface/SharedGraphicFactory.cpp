#if 0
/* ---------- headers */

#include "decomp.h"
#include <luaconfig\luaconfig.h>
#include <xstring>
#include <xmemory0>
#include <boost\scoped_ptr.hpp>
#include <UserInterface\pch.h>
#include <boost\checked_delete.hpp>
#include <new>
#include <xstddef>
#include <type_traits>
#include <xutility>
#include <utility>
#include <platform\osdef.h>
#include <boost\throw_exception.hpp>
#include <Render\objects\textureproxy.h>
#include <boost\detail\shared_count.hpp>
#include <math.h>
#include <boost\detail\lwm_win32.hpp>
#include <Mathlib\matvec.h>
#include <list>
#include <Mathlib\vector2.h>
#include <UserInterface\SharedGraphicFactory.h>
#include <UserInterface\Graphic.h>
#include <Mathlib\mathutil.h>
#include <Render\objects\texture.h>
#include <Render\objects\objects.h>
#include <Render\objects\core.h>
#include <Render\gl\lotypes.h>
#include <Render\gl\types.h>
#include <util\colour.h>
#include <Mathlib\vector4.h>
#include <Mathlib\mathlibdll.h>
#include <Mathlib\fastmath.h>
#include <Render\gl\r_types.h>
#include <util\types.h>
#include <Render\gl\r_defines.h>
#include <Render\gl\glext.h>
#include <UserInterface\uitypes.h>
#include <platform\inputinterface.h>
#include <platform\platformexports.h>
#include <platform\keydefines.h>
#include <boost\cstdint.hpp>
#include <debug\db.h>
#include <Mathlib\matrix4.h>
#include <Mathlib\vector3.h>
#include <Mathlib\matrix3.h>
#include <boost\shared_ptr.hpp>
#include <Render\objects\textureregistry.h>
#include <hash_map>
#include <xhash>

/* ---------- constants */

/* ---------- definitions */

typedef std::list<boost::shared_ptr<UI::Graphic>,std::allocator<boost::shared_ptr<UI::Graphic> > > SharedObjList;

/* ---------- prototypes */

/* ---------- globals */

/* ---------- private variables */

_static
{
    extern UI::SharedGraphicFactory *s_instance; // 0x84B99C
}

/* ---------- public code */

_extern _sub_680ABA(UI::SharedGraphicFactory::Data *const);
_inline UI::SharedGraphicFactory::Data::Data() // 0x680ABA
{
    mangled_assert("??0Data@SharedGraphicFactory@UI@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_680ABA(this);
}

_extern void _sub_680E9B();
void UI::SharedGraphicFactory::Startup() // 0x680E9B
{
    mangled_assert("?Startup@SharedGraphicFactory@UI@@SGXXZ");
    todo("implement");
    _sub_680E9B();
}

_extern void _sub_680E79();
void UI::SharedGraphicFactory::Shutdown() // 0x680E79
{
    mangled_assert("?Shutdown@SharedGraphicFactory@UI@@SGXXZ");
    todo("implement");
    _sub_680E79();
}

_extern UI::SharedGraphicFactory *_sub_680E65();
UI::SharedGraphicFactory *UI::SharedGraphicFactory::Instance() // 0x680E65
{
    mangled_assert("?Instance@SharedGraphicFactory@UI@@SGPAV12@XZ");
    todo("implement");
    UI::SharedGraphicFactory * __result = _sub_680E65();
    return __result;
}

_extern _sub_680AD1(UI::SharedGraphicFactory *const);
UI::SharedGraphicFactory::SharedGraphicFactory() // 0x680AD1
{
    mangled_assert("??0SharedGraphicFactory@UI@@AAE@XZ");
    todo("implement");
    _sub_680AD1(this);
}

_extern void _sub_680B25(std::_List_buy<boost::shared_ptr<UI::Graphic>,std::allocator<boost::shared_ptr<UI::Graphic> > > *const);
_inline std::_List_buy<boost::shared_ptr<UI::Graphic>,std::allocator<boost::shared_ptr<UI::Graphic> > >::~_List_buy<boost::shared_ptr<UI::Graphic>,std::allocator<boost::shared_ptr<UI::Graphic> > >() // 0x680B25
{
    mangled_assert("??1?$_List_buy@V?$shared_ptr@VGraphic@UI@@@boost@@V?$allocator@V?$shared_ptr@VGraphic@UI@@@boost@@@std@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_680B25(this);
}

_extern void _sub_680B4E(UI::SharedGraphicFactory::Data *const);
_inline UI::SharedGraphicFactory::Data::~Data() // 0x680B4E
{
    mangled_assert("??1Data@SharedGraphicFactory@UI@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_680B4E(this);
}

_extern void _sub_680B60(UI::SharedGraphicFactory *const);
UI::SharedGraphicFactory::~SharedGraphicFactory() // 0x680B60
{
    mangled_assert("??1SharedGraphicFactory@UI@@AAE@XZ");
    todo("implement");
    _sub_680B60(this);
}

_extern boost::shared_ptr<UI::Graphic> _sub_680DF5(UI::SharedGraphicFactory *const);
boost::shared_ptr<UI::Graphic> UI::SharedGraphicFactory::Create() // 0x680DF5
{
    mangled_assert("?Create@SharedGraphicFactory@UI@@QAE?AV?$shared_ptr@VGraphic@UI@@@boost@@XZ");
    todo("implement");
    boost::shared_ptr<UI::Graphic> __result = _sub_680DF5(this);
    return __result;
}

_extern boost::shared_ptr<UI::Graphic> _sub_680C21(UI::SharedGraphicFactory *const, LuaConfig &);
boost::shared_ptr<UI::Graphic> UI::SharedGraphicFactory::Create(LuaConfig &) // 0x680C21
{
    mangled_assert("?Create@SharedGraphicFactory@UI@@QAE?AV?$shared_ptr@VGraphic@UI@@@boost@@AAVLuaConfig@@@Z");
    todo("implement");
    boost::shared_ptr<UI::Graphic> __result = _sub_680C21(this, arg);
    return __result;
}

_extern boost::shared_ptr<UI::Graphic> _sub_680D85(UI::SharedGraphicFactory *const, char const *);
boost::shared_ptr<UI::Graphic> UI::SharedGraphicFactory::Create(char const *) // 0x680D85
{
    mangled_assert("?Create@SharedGraphicFactory@UI@@QAE?AV?$shared_ptr@VGraphic@UI@@@boost@@PBD@Z");
    todo("implement");
    boost::shared_ptr<UI::Graphic> __result = _sub_680D85(this, arg);
    return __result;
}

_extern boost::shared_ptr<UI::Graphic> _sub_680D12(UI::SharedGraphicFactory *const, Texture *, char const *);
boost::shared_ptr<UI::Graphic> UI::SharedGraphicFactory::Create(Texture *, char const *) // 0x680D12
{
    mangled_assert("?Create@SharedGraphicFactory@UI@@QAE?AV?$shared_ptr@VGraphic@UI@@@boost@@PAVTexture@@PBD@Z");
    todo("implement");
    boost::shared_ptr<UI::Graphic> __result = _sub_680D12(this, arg, arg);
    return __result;
}

_extern boost::shared_ptr<UI::Graphic> _sub_680C91(UI::SharedGraphicFactory *const, boost::shared_ptr<UI::Graphic> const &);
boost::shared_ptr<UI::Graphic> UI::SharedGraphicFactory::Create(boost::shared_ptr<UI::Graphic> const &) // 0x680C91
{
    mangled_assert("?Create@SharedGraphicFactory@UI@@QAE?AV?$shared_ptr@VGraphic@UI@@@boost@@ABV34@@Z");
    todo("implement");
    boost::shared_ptr<UI::Graphic> __result = _sub_680C91(this, arg);
    return __result;
}

_extern std::list<boost::shared_ptr<UI::Graphic>,std::allocator<boost::shared_ptr<UI::Graphic> > > const &_sub_680E62(UI::SharedGraphicFactory const *const);
std::list<boost::shared_ptr<UI::Graphic>,std::allocator<boost::shared_ptr<UI::Graphic> > > const &UI::SharedGraphicFactory::GetAll() const // 0x680E62
{
    mangled_assert("?GetAll@SharedGraphicFactory@UI@@QBEABV?$list@V?$shared_ptr@VGraphic@UI@@@boost@@V?$allocator@V?$shared_ptr@VGraphic@UI@@@boost@@@std@@@std@@XZ");
    todo("implement");
    std::list<boost::shared_ptr<UI::Graphic>,std::allocator<boost::shared_ptr<UI::Graphic> > > const & __result = _sub_680E62(this);
    return __result;
}

_extern void _sub_680EDB(UI::SharedGraphicFactory *const, unsigned __int32);
void UI::SharedGraphicFactory::UpdateAll(unsigned __int32) // 0x680EDB
{
    mangled_assert("?UpdateAll@SharedGraphicFactory@UI@@QAEXI@Z");
    todo("implement");
    _sub_680EDB(this, arg);
}

/* ---------- private code */
#endif
