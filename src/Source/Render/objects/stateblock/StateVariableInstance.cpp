#if 0
/* ---------- headers */

#include "decomp.h"
#include <fileio\bytestream.h>
#include <fileio\fileioexports.h>
#include <Objects\StateBlock\stateblocktypes.h>
#include <assist\fixedstring.h>
#include <assist\stlexstring.h>
#include <xstring>
#include <Mathlib\matrix3.h>
#include <xmemory0>
#include <Objects\pch.h>
#include <memory\memorylib.h>
#include <crtdefs.h>
#include <boost\throw_exception.hpp>
#include <Mathlib\vector4.h>
#include <Mathlib\mathlibdll.h>
#include <boost\detail\shared_count.hpp>
#include <Mathlib\fastmath.h>
#include <profile\profile.h>
#include <boost\detail\lightweight_mutex.hpp>
#include <iostream>
#include <boost\detail\lwm_win32.hpp>
#include <new>
#include <xstddef>
#include <type_traits>
#include <xutility>
#include <xatomic0.h>
#include <utility>
#include <iosfwd>
#include <vector>
#include <xmemory>
#include <assist\typemagic.h>
#include <math.h>
#include <list>
#include <memory>
#include <stdint.h>
#include <map>
#include <xtree>
#include <functional>
#include <xfunctional>
#include <util\colour.h>
#include <memory\mmfixedpool.h>
#include <boost\static_assert.hpp>
#include <assert.h>
#include <algorithm>
#include <util\types.h>
#include <Objects\StateBlock\StateBlockManager.h>
#include <boost\shared_ptr.hpp>
#include <boost\config.hpp>
#include <boost\config\user.hpp>
#include <boost\config\select_compiler_config.hpp>
#include <boost\config\compiler\visualc.hpp>
#include <boost\config\select_stdlib_config.hpp>
#include <boost\config\stdlib\dinkumware.hpp>
#include <boost\config\select_platform_config.hpp>
#include <boost\config\platform\win32.hpp>
#include <Objects\StateBlock\StateVariableInstance.h>
#include <Objects\Objects.h>
#include <debug\db.h>
#include <util\dictionary.h>
#include <util\utilexports.h>
#include <boost\detail\workaround.hpp>
#include <tuple>
#include <assist\faststring.h>
#include <fileio\crc.h>
#include <boost\config\suffix.hpp>
#include <debug\ctassert.h>
#include <boost\assert.hpp>
#include <boost\checked_delete.hpp>
#include <wchar.h>
#include <Mathlib\matrix4.h>
#include <Mathlib\vector3.h>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

extern _inline bool setVariableInternal(StateVariableInstance::Var &var, bool bval);
extern _inline bool setVariableInternal(StateVariableInstance::Var &var, float fval);
extern _inline bool setVariableInternal(StateVariableInstance::Var &var, unsigned __int32 ival);
extern _inline bool setVariableInternal(StateVariableInstance::Var &var, Texture const *tval);
extern _inline bool setVariableInternal(StateVariableInstance::Var &var, vector4 const &vval);
extern _inline bool setVariableInternal(StateVariableInstance::Var &var, matrix4 const &mval);

/* ---------- globals */

/* ---------- private variables */

_static
{
    extern unsigned __int32 stateVarSize[7]; // 0x101120D0
    extern FixedSizeObjAllocator<StateVariableInstance,1000> s_StateVariableInstanceAllocator; // 0x101120EC
    extern std::_Ignore ignore; // 0x101A361C
    extern std::_Tuple_alloc_t _Tuple_alloc; // 0x101A361D
}

/* ---------- public code */

void *StateVariableInstance::operator new(unsigned __int32 size) // 0x100BD7B0
{
    mangled_assert("??2StateVariableInstance@@SGPAXI@Z");
    todo("implement");
}

void StateVariableInstance::operator delete(void *p, unsigned __int32 size) // 0x100BD7F0
{
    mangled_assert("??3StateVariableInstance@@SGXPAXI@Z");
    todo("implement");
}

StateVariableInstance::StateVariableInstance() // 0x100BD6A0
{
    mangled_assert("??0StateVariableInstance@@QAE@XZ");
    todo("implement");
}

StateVariableInstance::StateVariableInstance(StateVariableInstance const &) // 0x100BD610
{
    mangled_assert("??0StateVariableInstance@@QAE@ABV0@@Z");
    todo("implement");
}

__int32 StateVariableInstance::addVariable(char const *, StateVarType) // 0x100BD9F0
{
    mangled_assert("?addVariable@StateVariableInstance@@QAEHPBDW4StateVarType@@@Z");
    todo("implement");
}

__int32 StateVariableInstance::findVariable(unsigned long) // 0x100BDA80
{
    mangled_assert("?findVariable@StateVariableInstance@@QAEHK@Z");
    todo("implement");
}

__int32 StateVariableInstance::findVariable(char const *) // 0x100BDAB0
{
    mangled_assert("?findVariable@StateVariableInstance@@QAEHPBD@Z");
    todo("implement");
}

bool StateVariableInstance::setVariableData(unsigned __int32, void *) // 0x100BE210
{
    mangled_assert("?setVariableData@StateVariableInstance@@QAE_NIPAX@Z");
    todo("implement");
}

bool StateVariableInstance::setVariable(char const *, void *) // 0x100BE0D0
{
    mangled_assert("?setVariable@StateVariableInstance@@QAE_NPBDPAX@Z");
    todo("implement");
}

bool StateVariableInstance::setVariable(unsigned long, void *) // 0x100BDE30
{
    mangled_assert("?setVariable@StateVariableInstance@@QAE_NKPAX@Z");
    todo("implement");
}

_inline bool setVariableInternal(StateVariableInstance::Var &var, bool bval) // 0x100BE330
{
    mangled_assert("?setVariableInternal@@YG_NAAUVar@StateVariableInstance@@_N@Z");
    todo("implement");
}

bool StateVariableInstance::setVariable(char const *, bool) // 0x100BE1B0
{
    mangled_assert("?setVariable@StateVariableInstance@@QAE_NPBD_N@Z");
    todo("implement");
}

bool StateVariableInstance::setVariable(unsigned long, bool) // 0x100BDEF0
{
    mangled_assert("?setVariable@StateVariableInstance@@QAE_NK_N@Z");
    todo("implement");
}

_inline bool setVariableInternal(StateVariableInstance::Var &var, float fval) // 0x100BE2F0
{
    mangled_assert("?setVariableInternal@@YG_NAAUVar@StateVariableInstance@@M@Z");
    todo("implement");
}

bool StateVariableInstance::setVariable(char const *, float) // 0x100BE070
{
    mangled_assert("?setVariable@StateVariableInstance@@QAE_NPBDM@Z");
    todo("implement");
}

bool StateVariableInstance::setVariable(unsigned long, float) // 0x100BDDE0
{
    mangled_assert("?setVariable@StateVariableInstance@@QAE_NKM@Z");
    todo("implement");
}

_inline bool setVariableInternal(StateVariableInstance::Var &var, unsigned __int32 ival) // 0x100BE2D0
{
    mangled_assert("?setVariableInternal@@YG_NAAUVar@StateVariableInstance@@I@Z");
    todo("implement");
}

bool StateVariableInstance::setVariable(char const *, unsigned __int32) // 0x100BE010
{
    mangled_assert("?setVariable@StateVariableInstance@@QAE_NPBDI@Z");
    todo("implement");
}

bool StateVariableInstance::setVariable(unsigned long, unsigned __int32) // 0x100BDD90
{
    mangled_assert("?setVariable@StateVariableInstance@@QAE_NKI@Z");
    todo("implement");
}

_inline bool setVariableInternal(StateVariableInstance::Var &var, Texture const *tval) // 0x100BE310
{
    mangled_assert("?setVariableInternal@@YG_NAAUVar@StateVariableInstance@@PBVTexture@@@Z");
    todo("implement");
}

bool StateVariableInstance::setVariable(char const *, Texture const *) // 0x100BE150
{
    mangled_assert("?setVariable@StateVariableInstance@@QAE_NPBDPBVTexture@@@Z");
    todo("implement");
}

bool StateVariableInstance::setVariable(unsigned long, Texture const *) // 0x100BDEA0
{
    mangled_assert("?setVariable@StateVariableInstance@@QAE_NKPBVTexture@@@Z");
    todo("implement");
}

_inline bool setVariableInternal(StateVariableInstance::Var &var, vector4 const &vval) // 0x100BE290
{
    mangled_assert("?setVariableInternal@@YG_NAAUVar@StateVariableInstance@@ABVvector4@@@Z");
    todo("implement");
}

bool StateVariableInstance::setVariable(char const *, vector4 const &) // 0x100BDFA0
{
    mangled_assert("?setVariable@StateVariableInstance@@QAE_NPBDABVvector4@@@Z");
    todo("implement");
}

bool StateVariableInstance::setVariable(unsigned long, vector4 const &) // 0x100BDD30
{
    mangled_assert("?setVariable@StateVariableInstance@@QAE_NKABVvector4@@@Z");
    todo("implement");
}

_inline bool setVariableInternal(StateVariableInstance::Var &var, matrix4 const &mval) // 0x100BE260
{
    mangled_assert("?setVariableInternal@@YG_NAAUVar@StateVariableInstance@@ABVmatrix4@@@Z");
    todo("implement");
}

bool StateVariableInstance::setVariable(char const *, matrix4 const &) // 0x100BDF40
{
    mangled_assert("?setVariable@StateVariableInstance@@QAE_NPBDABVmatrix4@@@Z");
    todo("implement");
}

bool StateVariableInstance::setVariable(unsigned long, matrix4 const &) // 0x100BDCE0
{
    mangled_assert("?setVariable@StateVariableInstance@@QAE_NKABVmatrix4@@@Z");
    todo("implement");
}

void StateVariableInstance::updateTextureCRC() // 0x100BE350
{
    mangled_assert("?updateTextureCRC@StateVariableInstance@@AAEXXZ");
    todo("implement");
}

bool StateVariableInstance::getVariable(unsigned long, bool &) // 0x100BDC90
{
    mangled_assert("?getVariable@StateVariableInstance@@QAE_NKAA_N@Z");
    todo("implement");
}

bool StateVariableInstance::getVariable(unsigned long, float &) // 0x100BDB40
{
    mangled_assert("?getVariable@StateVariableInstance@@QAE_NKAAM@Z");
    todo("implement");
}

bool StateVariableInstance::getVariable(unsigned long, unsigned __int32 &) // 0x100BDAF0
{
    mangled_assert("?getVariable@StateVariableInstance@@QAE_NKAAI@Z");
    todo("implement");
}

bool StateVariableInstance::getVariable(unsigned long, Texture const *&) // 0x100BDB90
{
    mangled_assert("?getVariable@StateVariableInstance@@QAE_NKAAPBVTexture@@@Z");
    todo("implement");
}

bool StateVariableInstance::getVariable(unsigned long, vector4 &) // 0x100BDC30
{
    mangled_assert("?getVariable@StateVariableInstance@@QAE_NKAAVvector4@@@Z");
    todo("implement");
}

bool StateVariableInstance::getVariable(unsigned long, matrix4 &) // 0x100BDBE0
{
    mangled_assert("?getVariable@StateVariableInstance@@QAE_NKAAVmatrix4@@@Z");
    todo("implement");
}

void StateVariableInstance::clear() // 0x100BDA70
{
    mangled_assert("?clear@StateVariableInstance@@QAEXXZ");
    todo("implement");
}

/* ---------- private code */
#endif
