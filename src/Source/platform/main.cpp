#if 0
/* ---------- headers */

#include "decomp.h"
#include <xmemory0>
#include <Platform\pch.h>
#include <Platform\platform.h>
#include <util\types.h>
#include <Platform\winmain.h>
#include <Platform\appinterface.h>
#include <xutility>
#include <vector>
#include <Platform\WindowManage.h>
#include <Platform\windowinterface.h>
#include <Platform\exceptionhandler.h>
#include <string.h>
#include <Platform\CmdLine.h>
#include <util\stringutil.h>
#include <debug\debug.h>
#include <debug\filter.h>
#include <Platform\NamedInterface.h>
#include <Platform\main.h>
#include <Platform\maininterface.h>
#include <Platform\platformexports.h>
#include <Platform\osdef.h>
#include <Platform\sysinputinterface.h>

/* ---------- constants */

/* ---------- definitions */

struct Plat::`anonymous-namespace'::CrashCallback
{
    void (*callback)(); // 0x0
    float priority; // 0x4
    bool operator<(Plat::`anonymous-namespace'::CrashCallback const &) const;
};
static_assert(sizeof(Plat::`anonymous-namespace'::CrashCallback) == 8, "Invalid Plat::`anonymous-namespace'::CrashCallback size");

/* ---------- prototypes */

extern void activateAppCallbackNULL(unsigned __int32 windowHandle);
extern __int32 HandledWinMain(HINSTANCE__ *hInstance, HINSTANCE__ *hPrevInstance, char *commandLine, __int32 nCmdShow, AppInterface *appInterface);
extern void Plat::App::EnableExceptionHandling();
extern __int32 Plat::App::PlatWinMain(void *hInstance, void *hPrevInstance, char *lpCmdLine, __int32 nCmdShow, AppInterface *appInterface);

_static long Plat::recordExceptionInfo(_EXCEPTION_POINTERS *pep);

/* ---------- globals */

extern MainImpl *MainImpl::s_instance; // 0x10010C7C

/* ---------- private variables */

_static
{
    extern bool s_bNoTrap; // 0x10010C80
    extern char const *k_InterfaceName; // 0x1001047C
}

/* ---------- public code */

_extern void _sub_10003EF6(unsigned __int32);
void activateAppCallbackNULL(unsigned __int32 windowHandle) // 0x10003EF6
{
    mangled_assert("?activateAppCallbackNULL@@YGXI@Z");
    todo("implement");
    _sub_10003EF6(windowHandle);
}

_extern MainInterface *_sub_10003F2B();
MainInterface *MainInterface::i() // 0x10003F2B
{
    mangled_assert("?i@MainInterface@@SGPAV1@XZ");
    todo("implement");
    MainInterface * __result = _sub_10003F2B();
    return __result;
}

_extern bool _sub_100040D5();
bool MainImpl::startup() // 0x100040D5
{
    mangled_assert("?startup@MainImpl@@SG_NXZ");
    todo("implement");
    bool __result = _sub_100040D5();
    return __result;
}

_extern bool _sub_1000409F();
bool MainImpl::shutdown() // 0x1000409F
{
    mangled_assert("?shutdown@MainImpl@@SG_NXZ");
    todo("implement");
    bool __result = _sub_1000409F();
    return __result;
}

_extern MainImpl *_sub_10003F25();
MainImpl *MainImpl::i() // 0x10003F25
{
    mangled_assert("?i@MainImpl@@SGPAV1@XZ");
    todo("implement");
    MainImpl * __result = _sub_10003F25();
    return __result;
}

_extern _sub_10003D16(MainImpl *const);
MainImpl::MainImpl() // 0x10003D16
{
    mangled_assert("??0MainImpl@@IAE@XZ");
    todo("implement");
    _sub_10003D16(this);
}

_extern _sub_10003D2E(MainInterface *const, MainInterface const &);
_inline MainInterface::MainInterface(MainInterface const &) // 0x10003D2E
{
    mangled_assert("??0MainInterface@@QAE@ABV0@@Z");
    compiler_generated();
    todo("implement");
    _sub_10003D2E(this, arg);
}

_extern _sub_10003D39(MainInterface *const);
_inline MainInterface::MainInterface() // 0x10003D39
{
    mangled_assert("??0MainInterface@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_10003D39(this);
}

_extern void _sub_10003D47(MainImpl *const);
MainImpl::~MainImpl() // 0x10003D47
{
    mangled_assert("??1MainImpl@@MAE@XZ");
    todo("implement");
    _sub_10003D47(this);
}

_extern MainInterface &_sub_10003D55(MainInterface *const, MainInterface const &);
_inline MainInterface &MainInterface::operator=(MainInterface const &) // 0x10003D55
{
    mangled_assert("??4MainInterface@@QAEAAV0@ABV0@@Z");
    compiler_generated();
    todo("implement");
    MainInterface & __result = _sub_10003D55(this, arg);
    return __result;
}

_extern void _sub_10004007(MainImpl *const, void (*)(unsigned __int32));
void MainImpl::setActivateCallback(void (*)(unsigned __int32)) // 0x10004007
{
    mangled_assert("?setActivateCallback@MainImpl@@UAEXP6GXI@Z@Z");
    todo("implement");
    _sub_10004007(this, arg);
}

_extern void (*_sub_10003F13(MainImpl *const))(unsigned __int32);
void (*MainImpl::getActivateCallback())(unsigned __int32) // 0x10003F13
{
    mangled_assert("?getActivateCallback@MainImpl@@QAEP6GXI@ZXZ");
    todo("implement");
    void (*)(unsigned __int32) __result = _sub_10003F13(this);
    return __result;
}

_extern void _sub_10004011(MainImpl *const, void (*)(unsigned __int32));
void MainImpl::setDeactivateCallback(void (*)(unsigned __int32)) // 0x10004011
{
    mangled_assert("?setDeactivateCallback@MainImpl@@UAEXP6GXI@Z@Z");
    todo("implement");
    _sub_10004011(this, arg);
}

_extern void (*_sub_10003F17(MainImpl *const))(unsigned __int32);
void (*MainImpl::getDeactivateCallback())(unsigned __int32) // 0x10003F17
{
    mangled_assert("?getDeactivateCallback@MainImpl@@QAEP6GXI@ZXZ");
    todo("implement");
    void (*)(unsigned __int32) __result = _sub_10003F17(this);
    return __result;
}

_extern void _sub_1000401B(MainImpl *const, unsigned __int32 const);
void MainImpl::setInstanceHandle(unsigned __int32 const) // 0x1000401B
{
    mangled_assert("?setInstanceHandle@MainImpl@@QAEXI@Z");
    todo("implement");
    _sub_1000401B(this, arg);
}

_extern unsigned __int32 _sub_10003F1B(MainImpl const *const);
unsigned __int32 MainImpl::getInstanceHandle() const // 0x10003F1B
{
    mangled_assert("?getInstanceHandle@MainImpl@@UBEIXZ");
    todo("implement");
    unsigned __int32 __result = _sub_10003F1B(this);
    return __result;
}

_extern unsigned __int32 _sub_10003F1F(MainImpl const *const);
unsigned __int32 MainImpl::getProcessID() const // 0x10003F1F
{
    mangled_assert("?getProcessID@MainImpl@@UBEIXZ");
    todo("implement");
    unsigned __int32 __result = _sub_10003F1F(this);
    return __result;
}

_extern bool _sub_10004025(MainImpl const *const, char const *, char const *, char const *, char *, unsigned __int32);
bool MainImpl::shellExecute(char const *, char const *, char const *, char *, unsigned __int32) const // 0x10004025
{
    mangled_assert("?shellExecute@MainImpl@@UBE_NPBD00PADI@Z");
    todo("implement");
    bool __result = _sub_10004025(this, arg, arg, arg, arg, arg);
    return __result;
}

_extern bool _sub_10003F31(MainImpl *const);
bool MainImpl::processMessages() // 0x10003F31
{
    mangled_assert("?processMessages@MainImpl@@UAE_NXZ");
    todo("implement");
    bool __result = _sub_10003F31(this);
    return __result;
}

_extern __int32 _sub_10003E00(HINSTANCE__ *, HINSTANCE__ *, char *, __int32, AppInterface *);
__int32 HandledWinMain(HINSTANCE__ *hInstance, HINSTANCE__ *hPrevInstance, char *commandLine, __int32 nCmdShow, AppInterface *appInterface) // 0x10003E00
{
    mangled_assert("?HandledWinMain@@YGHPAUHINSTANCE__@@0PADHPAVAppInterface@@@Z");
    todo("implement");
    __int32 __result = _sub_10003E00(hInstance, hPrevInstance, commandLine, nCmdShow, appInterface);
    return __result;
}

_extern void _sub_10003DEA();
void Plat::App::EnableExceptionHandling() // 0x10003DEA
{
    mangled_assert("?EnableExceptionHandling@App@Plat@@YGXXZ");
    todo("implement");
    _sub_10003DEA();
}

_extern __int32 _sub_10003E32(void *, void *, char *, __int32, AppInterface *);
__int32 Plat::App::PlatWinMain(void *hInstance, void *hPrevInstance, char *lpCmdLine, __int32 nCmdShow, AppInterface *appInterface) // 0x10003E32
{
    mangled_assert("?PlatWinMain@App@Plat@@YGHPAX0PADHPAVAppInterface@@@Z");
    todo("implement");
    __int32 __result = _sub_10003E32(hInstance, hPrevInstance, lpCmdLine, nCmdShow, appInterface);
    return __result;
}

/* ---------- private code */

_extern long _sub_10003F77(_EXCEPTION_POINTERS *);
_static long Plat::recordExceptionInfo(_EXCEPTION_POINTERS *pep) // 0x10003F77
{
    mangled_assert("Plat::recordExceptionInfo");
    todo("implement");
    long __result = _sub_10003F77(pep);
    return __result;
}
#endif
