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

InputInterface *InputInterface::i() // 0x100038FC
{
    mangled_assert("?i@InputInterface@@SGPAV1@XZ");
    todo("implement");
}

bool InputImpl::startup() // 0x10003C65
{
    mangled_assert("?startup@InputImpl@@SG_NXZ");
    todo("implement");
}

bool InputImpl::shutdown() // 0x10003C2F
{
    mangled_assert("?shutdown@InputImpl@@SG_NXZ");
    todo("implement");
}

InputImpl *InputImpl::i() // 0x100038F6
{
    mangled_assert("?i@InputImpl@@SGPAV1@XZ");
    todo("implement");
}

InputImpl::InputImpl() // 0x100030DC
{
    mangled_assert("??0InputImpl@@IAE@XZ");
    todo("implement");
}

_inline InputInterface::InputInterface(InputInterface const &) // 0x10003106
{
    mangled_assert("??0InputInterface@@QAE@ABV0@@Z");
    compiler_generated();
    todo("implement");
}

_inline InputInterface::InputInterface() // 0x10003111
{
    mangled_assert("??0InputInterface@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

InputImpl::~InputImpl() // 0x10003162
{
    mangled_assert("??1InputImpl@@MAE@XZ");
    todo("implement");
}

_inline InputInterface &InputInterface::operator=(InputInterface const &) // 0x10003191
{
    mangled_assert("??4InputInterface@@QAEAAV0@ABV0@@Z");
    compiler_generated();
    todo("implement");
}

_inline NamedInterface &NamedInterface::operator=(NamedInterface const &) // 0x10003196
{
    mangled_assert("??4NamedInterface@@QAEAAV0@ABV0@@Z");
    compiler_generated();
    todo("implement");
}

_inline WindowInterface &WindowInterface::operator=(WindowInterface const &) // 0x1000319B
{
    mangled_assert("??4WindowInterface@@QAEAAV0@ABV0@@Z");
    compiler_generated();
    todo("implement");
}

void InputImpl::setKeyFunc(__int32, void (*)(__int32, KeyEvent, __int32), __int32) // 0x10003B9E
{
    mangled_assert("?setKeyFunc@InputImpl@@UAEXHP6GXHW4KeyEvent@@H@ZH@Z");
    todo("implement");
}

void InputImpl::removeKeyFunc(__int32) // 0x10003A9A
{
    mangled_assert("?removeKeyFunc@InputImpl@@UAEXH@Z");
    todo("implement");
}

void InputImpl::setGenericKeyFunc(void (*)(__int32, KeyEvent, __int32), __int32) // 0x10003B7D
{
    mangled_assert("?setGenericKeyFunc@InputImpl@@UAEXP6GXHW4KeyEvent@@H@ZH@Z");
    todo("implement");
}

void InputImpl::removeGenericKeyFunc(void (*)(__int32, KeyEvent, __int32)) // 0x10003A6A
{
    mangled_assert("?removeGenericKeyFunc@InputImpl@@UAEXP6GXHW4KeyEvent@@H@Z@Z");
    todo("implement");
}

bool InputImpl::keyIsDown(__int32) const // 0x100039A3
{
    mangled_assert("?keyIsDown@InputImpl@@UBE_NH@Z");
    todo("implement");
}

void InputImpl::keyDownMousePos(__int32, float &, float &) const // 0x10003981
{
    mangled_assert("?keyDownMousePos@InputImpl@@UBEXHAAM0@Z");
    todo("implement");
}

void InputImpl::clearKeyHistory(__int32) // 0x10003632
{
    mangled_assert("?clearKeyHistory@InputImpl@@UAEXH@Z");
    todo("implement");
}

void InputImpl::clearKeyHistory() // 0x1000364A
{
    mangled_assert("?clearKeyHistory@InputImpl@@UAEXXZ");
    todo("implement");
}

bool InputImpl::initialize() // 0x10003902
{
    mangled_assert("?initialize@InputImpl@@UAE_NXZ");
    todo("implement");
}

bool InputImpl::denitialize() // 0x100036A5
{
    mangled_assert("?denitialize@InputImpl@@UAE_NXZ");
    todo("implement");
}

void InputImpl::getCursorDelta(float &, float &) const // 0x100037D2
{
    mangled_assert("?getCursorDelta@InputImpl@@UBEXAAM0@Z");
    todo("implement");
}

void InputImpl::getCursorPosition(float &, float &) const // 0x100038DD
{
    mangled_assert("?getCursorPosition@InputImpl@@UBEXAAM0@Z");
    todo("implement");
}

void InputImpl::setCursorPosition(float, float) // 0x10003ADD
{
    mangled_assert("?setCursorPosition@InputImpl@@UAEXMM@Z");
    todo("implement");
}

void InputImpl::resetCursor() // 0x10003AB2
{
    mangled_assert("?resetCursor@InputImpl@@UAEXXZ");
    todo("implement");
}

void InputImpl::pollMouse() // 0x100039E5
{
    mangled_assert("?pollMouse@InputImpl@@UAEXXZ");
    todo("implement");
}

void InputImpl::setMouseLocked(bool) // 0x10003BBC
{
    mangled_assert("?setMouseLocked@InputImpl@@UAEX_N@Z");
    todo("implement");
}

bool InputImpl::isMouseLocked() const // 0x10003978
{
    mangled_assert("?isMouseLocked@InputImpl@@UBE_NXZ");
    todo("implement");
}

void InputImpl::acquireInput(bool) // 0x100035C0
{
    mangled_assert("?acquireInput@InputImpl@@UAEX_N@Z");
    todo("implement");
}

bool InputImpl::setActive(bool) // 0x10003AD0
{
    mangled_assert("?setActive@InputImpl@@UAE_N_N@Z");
    todo("implement");
}

bool InputImpl::getActive() const // 0x100037CE
{
    mangled_assert("?getActive@InputImpl@@UBE_NXZ");
    todo("implement");
}

void InputImpl::fireGenericCallbacks(__int32, KeyEvent) // 0x10003796
{
    mangled_assert("?fireGenericCallbacks@InputImpl@@QAEXHW4KeyEvent@@@Z");
    todo("implement");
}

bool InputImpl::GetKeyLocalizedName(__int32, wchar_t *, unsigned __int32) const // 0x10003373
{
    mangled_assert("?GetKeyLocalizedName@InputImpl@@UBE_NHPA_WI@Z");
    todo("implement");
}

Key::Key() // 0x1000311A
{
    mangled_assert("??0Key@@QAE@XZ");
    todo("implement");
}

_inline NamedInterface::NamedInterface(NamedInterface const &) // 0x10003135
{
    mangled_assert("??0NamedInterface@@QAE@ABV0@@Z");
    compiler_generated();
    todo("implement");
}

_inline NamedInterface::NamedInterface() // 0x10003140
{
    mangled_assert("??0NamedInterface@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline WindowInterface::WindowInterface(WindowInterface const &) // 0x10003149
{
    mangled_assert("??0WindowInterface@@QAE@ABV0@@Z");
    compiler_generated();
    todo("implement");
}

_inline WindowInterface::WindowInterface() // 0x10003154
{
    mangled_assert("??0WindowInterface@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

void Key::setDown(bool, bool) // 0x10003B1D
{
    mangled_assert("?setDown@Key@@QAEX_N0@Z");
    todo("implement");
}

void Key::setFunc(void (*)(__int32, KeyEvent, __int32), __int32) // 0x10003B6C
{
    mangled_assert("?setFunc@Key@@QAEXP6GXHW4KeyEvent@@H@ZH@Z");
    todo("implement");
}

void Key::fireFuncs(KeyEvent) // 0x1000376C
{
    mangled_assert("?fireFuncs@Key@@QAEXW4KeyEvent@@@Z");
    todo("implement");
}

void Key::removeFunc() // 0x10003A61
{
    mangled_assert("?removeFunc@Key@@QAEXXZ");
    todo("implement");
}

void Key::mousePosOnKeyDown(float &, float &) const // 0x100039D0
{
    mangled_assert("?mousePosOnKeyDown@Key@@QBEXAAM0@Z");
    todo("implement");
}

/* ---------- private code */
#endif
