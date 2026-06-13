#if 0
/* ---------- headers */

#include "decomp.h"
#include <xstring>
#include <xmemory0>
#include <Platform\pch.h>
#include <memory\memorylib.h>
#include <debug\dcwindow\debugwnd.h>
#include <set>
#include <xtree>
#include <Platform\input.h>
#include <Platform\inputinterface.h>
#include <Platform\keydefines.h>
#include <new>
#include <xstddef>
#include <util\types.h>
#include <type_traits>
#include <xutility>
#include <utility>
#include <vector>
#include <xmemory>
#include <debug\debug.h>
#include <debug\filter.h>
#include <debug\db.h>
#include <assist\stlexstring.h>
#include <algorithm>
#include <Platform\zmouse.h>
#include <Platform\WindowManage.h>
#include <Platform\windowinterface.h>
#include <Platform\osdef.h>
#include <Platform\SystemInput.h>
#include <Platform\NamedInterface.h>
#include <Platform\sysinputinterface.h>
#include <Platform\platformexports.h>
#include <debug\console.h>

/* ---------- constants */

/* ---------- definitions */

typedef char const *FilterKey;
typedef void (*FilterCallback)(char const *);
typedef unsigned __int32 result_type;
typedef char char_type;
typedef std::_String_iterator<std::_String_val<std::_Simple_types<char> > > iterator;
typedef std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > historyContainer;
typedef std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<std::pair<int,void (__stdcall*)(unsigned int)> > > > const_iterator;
typedef std::pair<int,void (__stdcall*)(unsigned int)> *_Tptr;
typedef std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<std::pair<int,void (__stdcall*)(unsigned int)> > > > _Myiter;
typedef std::pair<int,void (__stdcall*)(unsigned int)> const *_Unchecked_type;
typedef std::_Vector_iterator<std::_Vector_val<std::_Simple_types<std::pair<int,void (__stdcall*)(unsigned int)> > > > SystemKeyPairsI;
typedef std::pair<int,void (__stdcall*)(unsigned int)> SystemKeyPair;

/* ---------- prototypes */

extern void KeyPressHandler(ButtonType bType, SysButtonState bState, unsigned __int32 bInfo);

/* ---------- globals */

extern SysInputImpl *SysInputImpl::s_instance; // 0x10010ED0

/* ---------- private variables */

_static
{
    extern char const *k_InterfaceName; // 0x100105F0
}

/* ---------- public code */

_extern SysInputInterface *_sub_1000847D();
SysInputInterface *SysInputInterface::i() // 0x1000847D
{
    mangled_assert("?i@SysInputInterface@@SGPAV1@XZ");
    todo("implement");
    SysInputInterface * __result = _sub_1000847D();
    return __result;
}

_extern bool _sub_10008535();
bool SysInputImpl::startup() // 0x10008535
{
    mangled_assert("?startup@SysInputImpl@@SG_NXZ");
    todo("implement");
    bool __result = _sub_10008535();
    return __result;
}

_extern bool _sub_100084FF();
bool SysInputImpl::shutdown() // 0x100084FF
{
    mangled_assert("?shutdown@SysInputImpl@@SG_NXZ");
    todo("implement");
    bool __result = _sub_100084FF();
    return __result;
}

_extern SysInputImpl *_sub_10008477();
SysInputImpl *SysInputImpl::i() // 0x10008477
{
    mangled_assert("?i@SysInputImpl@@SGPAV1@XZ");
    todo("implement");
    SysInputImpl * __result = _sub_10008477();
    return __result;
}

_extern _sub_10007C22(SysInputImpl *const);
SysInputImpl::SysInputImpl() // 0x10007C22
{
    mangled_assert("??0SysInputImpl@@IAE@XZ");
    todo("implement");
    _sub_10007C22(this);
}

_extern _sub_10007C54(SysInputInterface *const);
_inline SysInputInterface::SysInputInterface() // 0x10007C54
{
    mangled_assert("??0SysInputInterface@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_10007C54(this);
}

_extern void _sub_10007C62(SysInputImpl *const);
SysInputImpl::~SysInputImpl() // 0x10007C62
{
    mangled_assert("??1SysInputImpl@@MAE@XZ");
    todo("implement");
    _sub_10007C62(this);
}

_extern __int32 _sub_10007DAE(SysInputImpl *const, float);
__int32 SysInputImpl::DenormX(float) // 0x10007DAE
{
    mangled_assert("?DenormX@SysInputImpl@@UAEHM@Z");
    todo("implement");
    __int32 __result = _sub_10007DAE(this, arg);
    return __result;
}

_extern __int32 _sub_10007DF3(SysInputImpl *const, float);
__int32 SysInputImpl::DenormY(float) // 0x10007DF3
{
    mangled_assert("?DenormY@SysInputImpl@@UAEHM@Z");
    todo("implement");
    __int32 __result = _sub_10007DF3(this, arg);
    return __result;
}

_extern float _sub_100080AC(SysInputImpl *const, __int32);
float SysInputImpl::NormX(__int32) // 0x100080AC
{
    mangled_assert("?NormX@SysInputImpl@@UAEMH@Z");
    todo("implement");
    float __result = _sub_100080AC(this, arg);
    return __result;
}

_extern float _sub_100080F8(SysInputImpl *const, __int32);
float SysInputImpl::NormY(__int32) // 0x100080F8
{
    mangled_assert("?NormY@SysInputImpl@@UAEMH@Z");
    todo("implement");
    float __result = _sub_100080F8(this, arg);
    return __result;
}

_extern float _sub_1000807E(SysInputImpl *const, __int32);
float SysInputImpl::NormDeltaY(__int32) // 0x1000807E
{
    mangled_assert("?NormDeltaY@SysInputImpl@@UAEMH@Z");
    todo("implement");
    float __result = _sub_1000807E(this, arg);
    return __result;
}

_extern void _sub_10008284(SysInputImpl *const, void (*)(unsigned __int32));
void SysInputImpl::SetKeyDownCB(void (*)(unsigned __int32)) // 0x10008284
{
    mangled_assert("?SetKeyDownCB@SysInputImpl@@UAEXP6GXI@Z@Z");
    todo("implement");
    _sub_10008284(this, arg);
}

_extern void (*_sub_10007EB6(SysInputImpl *const))(unsigned __int32);
void (*SysInputImpl::GetKeyDownCB())(unsigned __int32) // 0x10007EB6
{
    mangled_assert("?GetKeyDownCB@SysInputImpl@@UAEP6GXI@ZXZ");
    todo("implement");
    void (*)(unsigned __int32) __result = _sub_10007EB6(this);
    return __result;
}

_extern void _sub_1000828E(SysInputImpl *const, __int32, void (*)(unsigned __int32));
void SysInputImpl::SetSystemKeyCB(__int32, void (*)(unsigned __int32)) // 0x1000828E
{
    mangled_assert("?SetSystemKeyCB@SysInputImpl@@UAEXHP6GXI@Z@Z");
    todo("implement");
    _sub_1000828E(this, arg, arg);
}

_extern void _sub_10007ED3(ButtonType, SysButtonState, unsigned __int32);
void KeyPressHandler(ButtonType bType, SysButtonState bState, unsigned __int32 bInfo) // 0x10007ED3
{
    mangled_assert("?KeyPressHandler@@YGXW4ButtonType@@W4SysButtonState@@I@Z");
    todo("implement");
    _sub_10007ED3(bType, bState, bInfo);
}

_extern bool _sub_10007EBA(SysInputImpl *const);
bool SysInputImpl::Initialize() // 0x10007EBA
{
    mangled_assert("?Initialize@SysInputImpl@@UAE_NXZ");
    todo("implement");
    bool __result = _sub_10007EBA(this);
    return __result;
}

_extern void _sub_10007E4D(SysInputImpl *const, float &, float &);
void SysInputImpl::GetCursorPos(float &, float &) // 0x10007E4D
{
    mangled_assert("?GetCursorPos@SysInputImpl@@UAEXAAM0@Z");
    todo("implement");
    _sub_10007E4D(this, arg, arg);
}

_extern void _sub_1000824D(SysInputImpl *const, float, float);
void SysInputImpl::SetCursorPos(float, float) // 0x1000824D
{
    mangled_assert("?SetCursorPos@SysInputImpl@@UAEXMM@Z");
    todo("implement");
    _sub_1000824D(this, arg, arg);
}

_extern void _sub_10008160(SysInputImpl *const, float, float, float, float);
void SysInputImpl::SetCursorClip(float, float, float, float) // 0x10008160
{
    mangled_assert("?SetCursorClip@SysInputImpl@@UAEXMMMM@Z");
    todo("implement");
    _sub_10008160(this, arg, arg, arg, arg);
}

_extern void _sub_10007CED(SysInputImpl *const, bool);
void SysInputImpl::ActivateClip(bool) // 0x10007CED
{
    mangled_assert("?ActivateClip@SysInputImpl@@UAEX_N@Z");
    todo("implement");
    _sub_10007CED(this, arg);
}

_extern void _sub_100082AF(SysInputImpl *const, bool);
void SysInputImpl::WindowClip(bool) // 0x100082AF
{
    mangled_assert("?WindowClip@SysInputImpl@@UAEX_N@Z");
    todo("implement");
    _sub_100082AF(this, arg);
}

_extern bool _sub_10008483(SysInputImpl const *const);
bool SysInputImpl::isWindowClipping() const // 0x10008483
{
    mangled_assert("?isWindowClipping@SysInputImpl@@QBE_NXZ");
    todo("implement");
    bool __result = _sub_10008483(this);
    return __result;
}

_extern unsigned __int32 _sub_10008078(SysInputImpl *const, char const *);
unsigned __int32 SysInputImpl::LoadACursor(char const *) // 0x10008078
{
    mangled_assert("?LoadACursor@SysInputImpl@@UAEIPBD@Z");
    todo("implement");
    unsigned __int32 __result = _sub_10008078(this, arg);
    return __result;
}

_extern void _sub_1000815A(SysInputImpl *const, unsigned __int32);
void SysInputImpl::SetCursor(unsigned __int32) // 0x1000815A
{
    mangled_assert("?SetCursor@SysInputImpl@@UAEXI@Z");
    todo("implement");
    _sub_1000815A(this, arg);
}

_extern float _sub_10007E82(SysInputImpl *const);
float SysInputImpl::GetDragThreshold() // 0x10007E82
{
    mangled_assert("?GetDragThreshold@SysInputImpl@@UAEMXZ");
    todo("implement");
    float __result = _sub_10007E82(this);
    return __result;
}

_extern std::vector<std::pair<int,void (__stdcall*)(unsigned int)>,std::allocator<std::pair<int,void (__stdcall*)(unsigned int)> > > &_sub_10008473(SysInputImpl *const);
std::vector<std::pair<int,void (__stdcall*)(unsigned int)>,std::allocator<std::pair<int,void (__stdcall*)(unsigned int)> > > &SysInputImpl::getSystemKeyCallbacks() // 0x10008473
{
    mangled_assert("?getSystemKeyCallbacks@SysInputImpl@@QAEAAV?$vector@U?$pair@HP6GXI@Z@std@@V?$allocator@U?$pair@HP6GXI@Z@std@@@2@@std@@XZ");
    todo("implement");
    std::vector<std::pair<int,void (__stdcall*)(unsigned int)>,std::allocator<std::pair<int,void (__stdcall*)(unsigned int)> > > & __result = _sub_10008473(this);
    return __result;
}

_extern long _sub_1000856C(SysInputImpl *const, HWND__ *, unsigned __int32, unsigned __int32, long, bool &);
long SysInputImpl::winProc(HWND__ *, unsigned __int32, unsigned __int32, long, bool &) // 0x1000856C
{
    mangled_assert("?winProc@SysInputImpl@@QAEJPAUHWND__@@IIJAA_N@Z");
    todo("implement");
    long __result = _sub_1000856C(this, arg, arg, arg, arg, arg);
    return __result;
}

/* ---------- private code */
#endif
