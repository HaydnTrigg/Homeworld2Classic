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

WindowInterface *WindowInterface::i() // 0x100092C8
{
    mangled_assert("?i@WindowInterface@@SGPAV1@XZ");
    todo("implement");
}

bool WindowManageImpl::startup() // 0x100093E1
{
    mangled_assert("?startup@WindowManageImpl@@SG_NXZ");
    todo("implement");
}

bool WindowManageImpl::shutdown() // 0x100093B4
{
    mangled_assert("?shutdown@WindowManageImpl@@SG_NXZ");
    todo("implement");
}

WindowManageImpl *WindowManageImpl::i() // 0x100092CE
{
    mangled_assert("?i@WindowManageImpl@@SGPAV1@XZ");
    todo("implement");
}

WindowManageImpl::WindowManageImpl() // 0x10008B25
{
    mangled_assert("??0WindowManageImpl@@IAE@XZ");
    todo("implement");
}

WindowManageImpl::~WindowManageImpl() // 0x10008B4E
{
    mangled_assert("??1WindowManageImpl@@MAE@XZ");
    todo("implement");
}

__int32 WindowManageImpl::getOSWindowHandle() const // 0x1000907D
{
    mangled_assert("?getOSWindowHandle@WindowManageImpl@@UBEHXZ");
    todo("implement");
}

bool WindowManageImpl::getFullscreen() const // 0x10009074
{
    mangled_assert("?getFullscreen@WindowManageImpl@@UBE_NXZ");
    todo("implement");
}

void WindowManageImpl::getWindowPos(__int32 &, __int32 &) const // 0x100090BD
{
    mangled_assert("?getWindowPos@WindowManageImpl@@UBEXAAH0@Z");
    todo("implement");
}

__int32 WindowManageImpl::getWindowWidth() const // 0x100090D2
{
    mangled_assert("?getWindowWidth@WindowManageImpl@@UBEHXZ");
    todo("implement");
}

__int32 WindowManageImpl::getWindowHeight() const // 0x100090B9
{
    mangled_assert("?getWindowHeight@WindowManageImpl@@UBEHXZ");
    todo("implement");
}

__int32 WindowManageImpl::getWindowDepth() const // 0x100090B5
{
    mangled_assert("?getWindowDepth@WindowManageImpl@@UBEHXZ");
    todo("implement");
}

float WindowManageImpl::getWindowAspect() const // 0x10009086
{
    mangled_assert("?getWindowAspect@WindowManageImpl@@UBEMXZ");
    todo("implement");
}

__int32 WindowManageImpl::getWidth() const // 0x10009081
{
    mangled_assert("?getWidth@WindowManageImpl@@UBEHXZ");
    todo("implement");
}

__int32 WindowManageImpl::getHeight() const // 0x10009078
{
    mangled_assert("?getHeight@WindowManageImpl@@UBEHXZ");
    todo("implement");
}

__int32 WindowManageImpl::getDepth() const // 0x1000906F
{
    mangled_assert("?getDepth@WindowManageImpl@@UBEHXZ");
    todo("implement");
}

float WindowManageImpl::getAspect() const // 0x1000906A
{
    mangled_assert("?getAspect@WindowManageImpl@@UBEMXZ");
    todo("implement");
}

bool WindowManageImpl::registerInstance(unsigned __int32 const &, char const *) // 0x100092D4
{
    mangled_assert("?registerInstance@WindowManageImpl@@UAE_NABIPBD@Z");
    todo("implement");
}

bool WindowManageImpl::unregisterInstance(unsigned __int32 &, char const *) // 0x10009439
{
    mangled_assert("?unregisterInstance@WindowManageImpl@@UAE_NAAIPBD@Z");
    todo("implement");
}

void unFullscreen() // 0x10009418
{
    mangled_assert("?unFullscreen@@YGXXZ");
    todo("implement");
}

void WindowManageImpl::goFullscreen(__int32, __int32, __int32) // 0x100090D6
{
    mangled_assert("?goFullscreen@WindowManageImpl@@AAEXHHH@Z");
    todo("implement");
}

bool WindowManageImpl::createWindow(unsigned __int32 &, unsigned __int32 const &, char const *, char const *, __int32, __int32, __int32, bool) // 0x10008E44
{
    mangled_assert("?createWindow@WindowManageImpl@@UAE_NAAIABIPBD2HHH_N@Z");
    todo("implement");
}

void WindowManageImpl::restoreWindow(unsigned __int32 const &, long) // 0x10009337
{
    mangled_assert("?restoreWindow@WindowManageImpl@@UAEXABIJ@Z");
    todo("implement");
}

bool WindowManageImpl::attachWindow(unsigned __int32 const &, long *) // 0x10008D8B
{
    mangled_assert("?attachWindow@WindowManageImpl@@UAE_NABIPAJ@Z");
    todo("implement");
}

bool WindowManageImpl::deleteWindow(unsigned __int32 const &, unsigned __int32 const &) // 0x10009040
{
    mangled_assert("?deleteWindow@WindowManageImpl@@UAE_NABI0@Z");
    todo("implement");
}

bool WindowManageImpl::showWindow(unsigned __int32 const &, bool) // 0x1000938C
{
    mangled_assert("?showWindow@WindowManageImpl@@UAE_NABI_N@Z");
    todo("implement");
}

bool WindowManageImpl::showMouse(bool) // 0x1000934C
{
    mangled_assert("?showMouse@WindowManageImpl@@UAE_N_N@Z");
    todo("implement");
}

long WindowManageImpl::WindowProc(HWND__ *hWnd, unsigned __int32 message, unsigned __int32 wParam, long lParam) // 0x10008B96
{
    mangled_assert("?WindowProc@WindowManageImpl@@CGJPAUHWND__@@IIJ@Z");
    todo("implement");
}

/* ---------- private code */

_static void checkModeSwitch(unsigned __int32 result) // 0x10008DCF
{
    mangled_assert("checkModeSwitch");
    todo("implement");
}

_static void CommandProcess(HWND__ *hWnd, unsigned __int32 wParam, long lParam) // 0x10008B72
{
    mangled_assert("CommandProcess");
    todo("implement");
}
#endif
