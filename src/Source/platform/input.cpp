#if 0
/* ---------- headers */

#include "decomp.h"
#include <xmemory0>
#include <Platform\pch.h>
#include <new>
#include <xstddef>
#include <util\types.h>
#include <type_traits>
#include <Platform\NamedInterface.h>
#include <Platform\SystemInput.h>
#include <Platform\sysinputinterface.h>
#include <xutility>
#include <vector>
#include <xmemory>
#include <math.h>
#include <Platform\input.h>
#include <Platform\inputinterface.h>
#include <Platform\platformexports.h>
#include <Platform\keydefines.h>
#include <Platform\WindowManage.h>
#include <Platform\windowinterface.h>
#include <Platform\osdef.h>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

extern Key *INPUT_Keys; // 0x10010C74
extern __int32 Key::ms_idCounter; // 0x10010C70
extern unsigned __int32 const INPUT_TotalNumKeys; // 0x1000BA30
extern InputImpl *InputImpl::s_instance; // 0x10010C78

/* ---------- private variables */

_static
{
    extern float const INPUT_CenterX; // 0x1000BA34
    extern float const INPUT_CenterY; // 0x1000BA38
    extern char const *k_InterfaceName; // 0x10010400
}

/* ---------- public code */

_extern InputInterface *_sub_100038FC();
InputInterface *InputInterface::i() // 0x100038FC
{
    mangled_assert("?i@InputInterface@@SGPAV1@XZ");
    todo("implement");
    InputInterface * __result = _sub_100038FC();
    return __result;
}

_extern bool _sub_10003C65();
bool InputImpl::startup() // 0x10003C65
{
    mangled_assert("?startup@InputImpl@@SG_NXZ");
    todo("implement");
    bool __result = _sub_10003C65();
    return __result;
}

_extern bool _sub_10003C2F();
bool InputImpl::shutdown() // 0x10003C2F
{
    mangled_assert("?shutdown@InputImpl@@SG_NXZ");
    todo("implement");
    bool __result = _sub_10003C2F();
    return __result;
}

_extern InputImpl *_sub_100038F6();
InputImpl *InputImpl::i() // 0x100038F6
{
    mangled_assert("?i@InputImpl@@SGPAV1@XZ");
    todo("implement");
    InputImpl * __result = _sub_100038F6();
    return __result;
}

_extern _sub_100030DC(InputImpl *const);
InputImpl::InputImpl() // 0x100030DC
{
    mangled_assert("??0InputImpl@@IAE@XZ");
    todo("implement");
    _sub_100030DC(this);
}

_extern _sub_10003106(InputInterface *const, InputInterface const &);
_inline InputInterface::InputInterface(InputInterface const &) // 0x10003106
{
    mangled_assert("??0InputInterface@@QAE@ABV0@@Z");
    compiler_generated();
    todo("implement");
    _sub_10003106(this, arg);
}

_extern _sub_10003111(InputInterface *const);
_inline InputInterface::InputInterface() // 0x10003111
{
    mangled_assert("??0InputInterface@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_10003111(this);
}

_extern void _sub_10003162(InputImpl *const);
InputImpl::~InputImpl() // 0x10003162
{
    mangled_assert("??1InputImpl@@MAE@XZ");
    todo("implement");
    _sub_10003162(this);
}

_extern InputInterface &_sub_10003191(InputInterface *const, InputInterface const &);
_inline InputInterface &InputInterface::operator=(InputInterface const &) // 0x10003191
{
    mangled_assert("??4InputInterface@@QAEAAV0@ABV0@@Z");
    compiler_generated();
    todo("implement");
    InputInterface & __result = _sub_10003191(this, arg);
    return __result;
}

_extern NamedInterface &_sub_10003196(NamedInterface *const, NamedInterface const &);
_inline NamedInterface &NamedInterface::operator=(NamedInterface const &) // 0x10003196
{
    mangled_assert("??4NamedInterface@@QAEAAV0@ABV0@@Z");
    compiler_generated();
    todo("implement");
    NamedInterface & __result = _sub_10003196(this, arg);
    return __result;
}

_extern WindowInterface &_sub_1000319B(WindowInterface *const, WindowInterface const &);
_inline WindowInterface &WindowInterface::operator=(WindowInterface const &) // 0x1000319B
{
    mangled_assert("??4WindowInterface@@QAEAAV0@ABV0@@Z");
    compiler_generated();
    todo("implement");
    WindowInterface & __result = _sub_1000319B(this, arg);
    return __result;
}

_extern void _sub_10003B9E(InputImpl *const, __int32, void (*)(__int32, KeyEvent, __int32), __int32);
void InputImpl::setKeyFunc(__int32, void (*)(__int32, KeyEvent, __int32), __int32) // 0x10003B9E
{
    mangled_assert("?setKeyFunc@InputImpl@@UAEXHP6GXHW4KeyEvent@@H@ZH@Z");
    todo("implement");
    _sub_10003B9E(this, arg, arg, arg);
}

_extern void _sub_10003A9A(InputImpl *const, __int32);
void InputImpl::removeKeyFunc(__int32) // 0x10003A9A
{
    mangled_assert("?removeKeyFunc@InputImpl@@UAEXH@Z");
    todo("implement");
    _sub_10003A9A(this, arg);
}

_extern void _sub_10003B7D(InputImpl *const, void (*)(__int32, KeyEvent, __int32), __int32);
void InputImpl::setGenericKeyFunc(void (*)(__int32, KeyEvent, __int32), __int32) // 0x10003B7D
{
    mangled_assert("?setGenericKeyFunc@InputImpl@@UAEXP6GXHW4KeyEvent@@H@ZH@Z");
    todo("implement");
    _sub_10003B7D(this, arg, arg);
}

_extern void _sub_10003A6A(InputImpl *const, void (*)(__int32, KeyEvent, __int32));
void InputImpl::removeGenericKeyFunc(void (*)(__int32, KeyEvent, __int32)) // 0x10003A6A
{
    mangled_assert("?removeGenericKeyFunc@InputImpl@@UAEXP6GXHW4KeyEvent@@H@Z@Z");
    todo("implement");
    _sub_10003A6A(this, arg);
}

_extern bool _sub_100039A3(InputImpl const *const, __int32);
bool InputImpl::keyIsDown(__int32) const // 0x100039A3
{
    mangled_assert("?keyIsDown@InputImpl@@UBE_NH@Z");
    todo("implement");
    bool __result = _sub_100039A3(this, arg);
    return __result;
}

_extern void _sub_10003981(InputImpl const *const, __int32, float &, float &);
void InputImpl::keyDownMousePos(__int32, float &, float &) const // 0x10003981
{
    mangled_assert("?keyDownMousePos@InputImpl@@UBEXHAAM0@Z");
    todo("implement");
    _sub_10003981(this, arg, arg, arg);
}

_extern void _sub_10003632(InputImpl *const, __int32);
void InputImpl::clearKeyHistory(__int32) // 0x10003632
{
    mangled_assert("?clearKeyHistory@InputImpl@@UAEXH@Z");
    todo("implement");
    _sub_10003632(this, arg);
}

_extern void _sub_1000364A(InputImpl *const);
void InputImpl::clearKeyHistory() // 0x1000364A
{
    mangled_assert("?clearKeyHistory@InputImpl@@UAEXXZ");
    todo("implement");
    _sub_1000364A(this);
}

_extern bool _sub_10003902(InputImpl *const);
bool InputImpl::initialize() // 0x10003902
{
    mangled_assert("?initialize@InputImpl@@UAE_NXZ");
    todo("implement");
    bool __result = _sub_10003902(this);
    return __result;
}

_extern bool _sub_100036A5(InputImpl *const);
bool InputImpl::denitialize() // 0x100036A5
{
    mangled_assert("?denitialize@InputImpl@@UAE_NXZ");
    todo("implement");
    bool __result = _sub_100036A5(this);
    return __result;
}

_extern void _sub_100037D2(InputImpl const *const, float &, float &);
void InputImpl::getCursorDelta(float &, float &) const // 0x100037D2
{
    mangled_assert("?getCursorDelta@InputImpl@@UBEXAAM0@Z");
    todo("implement");
    _sub_100037D2(this, arg, arg);
}

_extern void _sub_100038DD(InputImpl const *const, float &, float &);
void InputImpl::getCursorPosition(float &, float &) const // 0x100038DD
{
    mangled_assert("?getCursorPosition@InputImpl@@UBEXAAM0@Z");
    todo("implement");
    _sub_100038DD(this, arg, arg);
}

_extern void _sub_10003ADD(InputImpl *const, float, float);
void InputImpl::setCursorPosition(float, float) // 0x10003ADD
{
    mangled_assert("?setCursorPosition@InputImpl@@UAEXMM@Z");
    todo("implement");
    _sub_10003ADD(this, arg, arg);
}

_extern void _sub_10003AB2(InputImpl *const);
void InputImpl::resetCursor() // 0x10003AB2
{
    mangled_assert("?resetCursor@InputImpl@@UAEXXZ");
    todo("implement");
    _sub_10003AB2(this);
}

_extern void _sub_100039E5(InputImpl *const);
void InputImpl::pollMouse() // 0x100039E5
{
    mangled_assert("?pollMouse@InputImpl@@UAEXXZ");
    todo("implement");
    _sub_100039E5(this);
}

_extern void _sub_10003BBC(InputImpl *const, bool);
void InputImpl::setMouseLocked(bool) // 0x10003BBC
{
    mangled_assert("?setMouseLocked@InputImpl@@UAEX_N@Z");
    todo("implement");
    _sub_10003BBC(this, arg);
}

_extern bool _sub_10003978(InputImpl const *const);
bool InputImpl::isMouseLocked() const // 0x10003978
{
    mangled_assert("?isMouseLocked@InputImpl@@UBE_NXZ");
    todo("implement");
    bool __result = _sub_10003978(this);
    return __result;
}

_extern void _sub_100035C0(InputImpl *const, bool);
void InputImpl::acquireInput(bool) // 0x100035C0
{
    mangled_assert("?acquireInput@InputImpl@@UAEX_N@Z");
    todo("implement");
    _sub_100035C0(this, arg);
}

_extern bool _sub_10003AD0(InputImpl *const, bool);
bool InputImpl::setActive(bool) // 0x10003AD0
{
    mangled_assert("?setActive@InputImpl@@UAE_N_N@Z");
    todo("implement");
    bool __result = _sub_10003AD0(this, arg);
    return __result;
}

_extern bool _sub_100037CE(InputImpl const *const);
bool InputImpl::getActive() const // 0x100037CE
{
    mangled_assert("?getActive@InputImpl@@UBE_NXZ");
    todo("implement");
    bool __result = _sub_100037CE(this);
    return __result;
}

_extern void _sub_10003796(InputImpl *const, __int32, KeyEvent);
void InputImpl::fireGenericCallbacks(__int32, KeyEvent) // 0x10003796
{
    mangled_assert("?fireGenericCallbacks@InputImpl@@QAEXHW4KeyEvent@@@Z");
    todo("implement");
    _sub_10003796(this, arg, arg);
}

_extern bool _sub_10003373(InputImpl const *const, __int32, wchar_t *, unsigned __int32);
bool InputImpl::GetKeyLocalizedName(__int32, wchar_t *, unsigned __int32) const // 0x10003373
{
    mangled_assert("?GetKeyLocalizedName@InputImpl@@UBE_NHPA_WI@Z");
    todo("implement");
    bool __result = _sub_10003373(this, arg, arg, arg);
    return __result;
}

_extern _sub_1000311A(Key *const);
Key::Key() // 0x1000311A
{
    mangled_assert("??0Key@@QAE@XZ");
    todo("implement");
    _sub_1000311A(this);
}

_extern _sub_10003135(NamedInterface *const, NamedInterface const &);
_inline NamedInterface::NamedInterface(NamedInterface const &) // 0x10003135
{
    mangled_assert("??0NamedInterface@@QAE@ABV0@@Z");
    compiler_generated();
    todo("implement");
    _sub_10003135(this, arg);
}

_extern _sub_10003140(NamedInterface *const);
_inline NamedInterface::NamedInterface() // 0x10003140
{
    mangled_assert("??0NamedInterface@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_10003140(this);
}

_extern _sub_10003149(WindowInterface *const, WindowInterface const &);
_inline WindowInterface::WindowInterface(WindowInterface const &) // 0x10003149
{
    mangled_assert("??0WindowInterface@@QAE@ABV0@@Z");
    compiler_generated();
    todo("implement");
    _sub_10003149(this, arg);
}

_extern _sub_10003154(WindowInterface *const);
_inline WindowInterface::WindowInterface() // 0x10003154
{
    mangled_assert("??0WindowInterface@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_10003154(this);
}

_extern void _sub_10003B1D(Key *const, bool, bool);
void Key::setDown(bool, bool) // 0x10003B1D
{
    mangled_assert("?setDown@Key@@QAEX_N0@Z");
    todo("implement");
    _sub_10003B1D(this, arg, arg);
}

_extern void _sub_10003B6C(Key *const, void (*)(__int32, KeyEvent, __int32), __int32);
void Key::setFunc(void (*)(__int32, KeyEvent, __int32), __int32) // 0x10003B6C
{
    mangled_assert("?setFunc@Key@@QAEXP6GXHW4KeyEvent@@H@ZH@Z");
    todo("implement");
    _sub_10003B6C(this, arg, arg);
}

_extern void _sub_1000376C(Key *const, KeyEvent);
void Key::fireFuncs(KeyEvent) // 0x1000376C
{
    mangled_assert("?fireFuncs@Key@@QAEXW4KeyEvent@@@Z");
    todo("implement");
    _sub_1000376C(this, arg);
}

_extern void _sub_10003A61(Key *const);
void Key::removeFunc() // 0x10003A61
{
    mangled_assert("?removeFunc@Key@@QAEXXZ");
    todo("implement");
    _sub_10003A61(this);
}

_extern void _sub_100039D0(Key const *const, float &, float &);
void Key::mousePosOnKeyDown(float &, float &) const // 0x100039D0
{
    mangled_assert("?mousePosOnKeyDown@Key@@QBEXAAM0@Z");
    todo("implement");
    _sub_100039D0(this, arg, arg);
}

/* ---------- private code */
#endif
