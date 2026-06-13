#if 0
/* ---------- headers */

#include "decomp.h"
#include <Platform\pch.h>
#include <Platform\main.h>
#include <Platform\maininterface.h>
#include <Platform\SystemInput.h>
#include <Platform\sysinputinterface.h>
#include <util\types.h>
#include <Platform\popuperror.h>
#include <Platform\CmdLine.h>
#include <Platform\resource.h>
#include <Platform\inputinterface.h>
#include <Platform\keydefines.h>
#include <Platform\WindowManage.h>
#include <Platform\windowinterface.h>
#include <Platform\osdef.h>
#include <Platform\platformexports.h>
#include <Platform\NamedInterface.h>

/* ---------- constants */

/* ---------- definitions */

typedef unsigned __int32 osWindowHandle;
typedef unsigned __int32 osInstanceHandle;
typedef void (*KeyDownFunc)(unsigned __int32);
typedef void (*ActivateAppCallback)(unsigned __int32);
typedef void (*KeyCallbackFunc)(__int32, KeyEvent, __int32);
typedef unsigned __int32 size_type;
typedef __int32 difference_type;
typedef std::pair<int,void (__stdcall*)(unsigned int)> *pointer;
typedef std::pair<int,void (__stdcall*)(unsigned int)> const *const_pointer;
typedef std::pair<int,void (__stdcall*)(unsigned int)> &reference;
typedef std::pair<int,void (__stdcall*)(unsigned int)> const &const_reference;
typedef std::allocator<std::pair<int,void (__stdcall*)(unsigned int)> > _Alloc;
typedef std::_Wrap_alloc<std::allocator<std::pair<int,void (__stdcall*)(unsigned int)> > > other;
typedef std::_Wrap_alloc<std::allocator<std::pair<int,void (__stdcall*)(unsigned int)> > > _Alty;
typedef void *void_pointer;
typedef void const *const_void_pointer;
typedef std::pair<int,void (__stdcall*)(unsigned int)> const type;
typedef std::integral_constant<bool,0> propagate_on_container_copy_assignment;
typedef std::integral_constant<bool,0> propagate_on_container_move_assignment;
typedef std::integral_constant<bool,0> propagate_on_container_swap;
typedef std::allocator<std::pair<int,void (__stdcall*)(unsigned int)> > _Mybase;
typedef std::_Vector_alloc<0,std::_Vec_base_types<std::pair<int,void (__stdcall*)(unsigned int)>,std::allocator<std::pair<int,void (__stdcall*)(unsigned int)> > > > _Myt;
typedef std::vector<std::pair<int,void (__stdcall*)(unsigned int)>,std::allocator<std::pair<int,void (__stdcall*)(unsigned int)> > > SystemKeyPairs;

/* ---------- prototypes */

extern void unFullscreen();

_static void checkModeSwitch(unsigned __int32 result);
_static void CommandProcess(HWND__ *hWnd, unsigned __int32 wParam, long lParam);

/* ---------- globals */

extern WindowManageImpl *WindowManageImpl::s_instance; // 0x10010EE4

/* ---------- private variables */

_static
{
    extern char const *k_InterfaceName; // 0x10010650
    extern bool isCurrentlyFullscreen; // 0x10010EE8
}

/* ---------- public code */

_extern WindowInterface *_sub_100092C8();
WindowInterface *WindowInterface::i() // 0x100092C8
{
    mangled_assert("?i@WindowInterface@@SGPAV1@XZ");
    todo("implement");
    WindowInterface * __result = _sub_100092C8();
    return __result;
}

_extern bool _sub_100093E1();
bool WindowManageImpl::startup() // 0x100093E1
{
    mangled_assert("?startup@WindowManageImpl@@SG_NXZ");
    todo("implement");
    bool __result = _sub_100093E1();
    return __result;
}

_extern bool _sub_100093B4();
bool WindowManageImpl::shutdown() // 0x100093B4
{
    mangled_assert("?shutdown@WindowManageImpl@@SG_NXZ");
    todo("implement");
    bool __result = _sub_100093B4();
    return __result;
}

_extern WindowManageImpl *_sub_100092CE();
WindowManageImpl *WindowManageImpl::i() // 0x100092CE
{
    mangled_assert("?i@WindowManageImpl@@SGPAV1@XZ");
    todo("implement");
    WindowManageImpl * __result = _sub_100092CE();
    return __result;
}

_extern _sub_10008B25(WindowManageImpl *const);
WindowManageImpl::WindowManageImpl() // 0x10008B25
{
    mangled_assert("??0WindowManageImpl@@IAE@XZ");
    todo("implement");
    _sub_10008B25(this);
}

_extern void _sub_10008B4E(WindowManageImpl *const);
WindowManageImpl::~WindowManageImpl() // 0x10008B4E
{
    mangled_assert("??1WindowManageImpl@@MAE@XZ");
    todo("implement");
    _sub_10008B4E(this);
}

_extern __int32 _sub_1000907D(WindowManageImpl const *const);
__int32 WindowManageImpl::getOSWindowHandle() const // 0x1000907D
{
    mangled_assert("?getOSWindowHandle@WindowManageImpl@@UBEHXZ");
    todo("implement");
    __int32 __result = _sub_1000907D(this);
    return __result;
}

_extern bool _sub_10009074(WindowManageImpl const *const);
bool WindowManageImpl::getFullscreen() const // 0x10009074
{
    mangled_assert("?getFullscreen@WindowManageImpl@@UBE_NXZ");
    todo("implement");
    bool __result = _sub_10009074(this);
    return __result;
}

_extern void _sub_100090BD(WindowManageImpl const *const, __int32 &, __int32 &);
void WindowManageImpl::getWindowPos(__int32 &, __int32 &) const // 0x100090BD
{
    mangled_assert("?getWindowPos@WindowManageImpl@@UBEXAAH0@Z");
    todo("implement");
    _sub_100090BD(this, arg, arg);
}

_extern __int32 _sub_100090D2(WindowManageImpl const *const);
__int32 WindowManageImpl::getWindowWidth() const // 0x100090D2
{
    mangled_assert("?getWindowWidth@WindowManageImpl@@UBEHXZ");
    todo("implement");
    __int32 __result = _sub_100090D2(this);
    return __result;
}

_extern __int32 _sub_100090B9(WindowManageImpl const *const);
__int32 WindowManageImpl::getWindowHeight() const // 0x100090B9
{
    mangled_assert("?getWindowHeight@WindowManageImpl@@UBEHXZ");
    todo("implement");
    __int32 __result = _sub_100090B9(this);
    return __result;
}

_extern __int32 _sub_100090B5(WindowManageImpl const *const);
__int32 WindowManageImpl::getWindowDepth() const // 0x100090B5
{
    mangled_assert("?getWindowDepth@WindowManageImpl@@UBEHXZ");
    todo("implement");
    __int32 __result = _sub_100090B5(this);
    return __result;
}

_extern float _sub_10009086(WindowManageImpl const *const);
float WindowManageImpl::getWindowAspect() const // 0x10009086
{
    mangled_assert("?getWindowAspect@WindowManageImpl@@UBEMXZ");
    todo("implement");
    float __result = _sub_10009086(this);
    return __result;
}

_extern __int32 _sub_10009081(WindowManageImpl const *const);
__int32 WindowManageImpl::getWidth() const // 0x10009081
{
    mangled_assert("?getWidth@WindowManageImpl@@UBEHXZ");
    todo("implement");
    __int32 __result = _sub_10009081(this);
    return __result;
}

_extern __int32 _sub_10009078(WindowManageImpl const *const);
__int32 WindowManageImpl::getHeight() const // 0x10009078
{
    mangled_assert("?getHeight@WindowManageImpl@@UBEHXZ");
    todo("implement");
    __int32 __result = _sub_10009078(this);
    return __result;
}

_extern __int32 _sub_1000906F(WindowManageImpl const *const);
__int32 WindowManageImpl::getDepth() const // 0x1000906F
{
    mangled_assert("?getDepth@WindowManageImpl@@UBEHXZ");
    todo("implement");
    __int32 __result = _sub_1000906F(this);
    return __result;
}

_extern float _sub_1000906A(WindowManageImpl const *const);
float WindowManageImpl::getAspect() const // 0x1000906A
{
    mangled_assert("?getAspect@WindowManageImpl@@UBEMXZ");
    todo("implement");
    float __result = _sub_1000906A(this);
    return __result;
}

_extern bool _sub_100092D4(WindowManageImpl *const, unsigned __int32 const &, char const *);
bool WindowManageImpl::registerInstance(unsigned __int32 const &, char const *) // 0x100092D4
{
    mangled_assert("?registerInstance@WindowManageImpl@@UAE_NABIPBD@Z");
    todo("implement");
    bool __result = _sub_100092D4(this, arg, arg);
    return __result;
}

_extern bool _sub_10009439(WindowManageImpl *const, unsigned __int32 &, char const *);
bool WindowManageImpl::unregisterInstance(unsigned __int32 &, char const *) // 0x10009439
{
    mangled_assert("?unregisterInstance@WindowManageImpl@@UAE_NAAIPBD@Z");
    todo("implement");
    bool __result = _sub_10009439(this, arg, arg);
    return __result;
}

_extern void _sub_10009418();
void unFullscreen() // 0x10009418
{
    mangled_assert("?unFullscreen@@YGXXZ");
    todo("implement");
    _sub_10009418();
}

_extern void _sub_100090D6(WindowManageImpl *const, __int32, __int32, __int32);
void WindowManageImpl::goFullscreen(__int32, __int32, __int32) // 0x100090D6
{
    mangled_assert("?goFullscreen@WindowManageImpl@@AAEXHHH@Z");
    todo("implement");
    _sub_100090D6(this, arg, arg, arg);
}

_extern bool _sub_10008E44(WindowManageImpl *const, unsigned __int32 &, unsigned __int32 const &, char const *, char const *, __int32, __int32, __int32, bool);
bool WindowManageImpl::createWindow(unsigned __int32 &, unsigned __int32 const &, char const *, char const *, __int32, __int32, __int32, bool) // 0x10008E44
{
    mangled_assert("?createWindow@WindowManageImpl@@UAE_NAAIABIPBD2HHH_N@Z");
    todo("implement");
    bool __result = _sub_10008E44(this, arg, arg, arg, arg, arg, arg, arg, arg);
    return __result;
}

_extern void _sub_10009337(WindowManageImpl *const, unsigned __int32 const &, long);
void WindowManageImpl::restoreWindow(unsigned __int32 const &, long) // 0x10009337
{
    mangled_assert("?restoreWindow@WindowManageImpl@@UAEXABIJ@Z");
    todo("implement");
    _sub_10009337(this, arg, arg);
}

_extern bool _sub_10008D8B(WindowManageImpl *const, unsigned __int32 const &, long *);
bool WindowManageImpl::attachWindow(unsigned __int32 const &, long *) // 0x10008D8B
{
    mangled_assert("?attachWindow@WindowManageImpl@@UAE_NABIPAJ@Z");
    todo("implement");
    bool __result = _sub_10008D8B(this, arg, arg);
    return __result;
}

_extern bool _sub_10009040(WindowManageImpl *const, unsigned __int32 const &, unsigned __int32 const &);
bool WindowManageImpl::deleteWindow(unsigned __int32 const &, unsigned __int32 const &) // 0x10009040
{
    mangled_assert("?deleteWindow@WindowManageImpl@@UAE_NABI0@Z");
    todo("implement");
    bool __result = _sub_10009040(this, arg, arg);
    return __result;
}

_extern bool _sub_1000938C(WindowManageImpl *const, unsigned __int32 const &, bool);
bool WindowManageImpl::showWindow(unsigned __int32 const &, bool) // 0x1000938C
{
    mangled_assert("?showWindow@WindowManageImpl@@UAE_NABI_N@Z");
    todo("implement");
    bool __result = _sub_1000938C(this, arg, arg);
    return __result;
}

_extern bool _sub_1000934C(WindowManageImpl *const, bool);
bool WindowManageImpl::showMouse(bool) // 0x1000934C
{
    mangled_assert("?showMouse@WindowManageImpl@@UAE_N_N@Z");
    todo("implement");
    bool __result = _sub_1000934C(this, arg);
    return __result;
}

_extern long _sub_10008B96(HWND__ *, unsigned __int32, unsigned __int32, long);
long WindowManageImpl::WindowProc(HWND__ *hWnd, unsigned __int32 message, unsigned __int32 wParam, long lParam) // 0x10008B96
{
    mangled_assert("?WindowProc@WindowManageImpl@@CGJPAUHWND__@@IIJ@Z");
    todo("implement");
    long __result = _sub_10008B96(hWnd, message, wParam, lParam);
    return __result;
}

/* ---------- private code */

_extern void _sub_10008DCF(unsigned __int32);
_static void checkModeSwitch(unsigned __int32 result) // 0x10008DCF
{
    mangled_assert("checkModeSwitch");
    todo("implement");
    _sub_10008DCF(result);
}

_extern void _sub_10008B72(HWND__ *, unsigned __int32, long);
_static void CommandProcess(HWND__ *hWnd, unsigned __int32 wParam, long lParam) // 0x10008B72
{
    mangled_assert("CommandProcess");
    todo("implement");
    _sub_10008B72(hWnd, wParam, lParam);
}
#endif
