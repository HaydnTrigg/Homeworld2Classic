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

SysInputInterface *SysInputInterface::i() // 0x1000847D
{
    mangled_assert("?i@SysInputInterface@@SGPAV1@XZ");
    todo("implement");
}

bool SysInputImpl::startup() // 0x10008535
{
    mangled_assert("?startup@SysInputImpl@@SG_NXZ");
    todo("implement");
}

bool SysInputImpl::shutdown() // 0x100084FF
{
    mangled_assert("?shutdown@SysInputImpl@@SG_NXZ");
    todo("implement");
}

SysInputImpl *SysInputImpl::i() // 0x10008477
{
    mangled_assert("?i@SysInputImpl@@SGPAV1@XZ");
    todo("implement");
}

SysInputImpl::SysInputImpl() // 0x10007C22
{
    mangled_assert("??0SysInputImpl@@IAE@XZ");
    todo("implement");
}

_inline SysInputInterface::SysInputInterface() // 0x10007C54
{
    mangled_assert("??0SysInputInterface@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

SysInputImpl::~SysInputImpl() // 0x10007C62
{
    mangled_assert("??1SysInputImpl@@MAE@XZ");
    todo("implement");
}

__int32 SysInputImpl::DenormX(float) // 0x10007DAE
{
    mangled_assert("?DenormX@SysInputImpl@@UAEHM@Z");
    todo("implement");
}

__int32 SysInputImpl::DenormY(float) // 0x10007DF3
{
    mangled_assert("?DenormY@SysInputImpl@@UAEHM@Z");
    todo("implement");
}

float SysInputImpl::NormX(__int32) // 0x100080AC
{
    mangled_assert("?NormX@SysInputImpl@@UAEMH@Z");
    todo("implement");
}

float SysInputImpl::NormY(__int32) // 0x100080F8
{
    mangled_assert("?NormY@SysInputImpl@@UAEMH@Z");
    todo("implement");
}

float SysInputImpl::NormDeltaY(__int32) // 0x1000807E
{
    mangled_assert("?NormDeltaY@SysInputImpl@@UAEMH@Z");
    todo("implement");
}

void SysInputImpl::SetKeyDownCB(void (*)(unsigned __int32)) // 0x10008284
{
    mangled_assert("?SetKeyDownCB@SysInputImpl@@UAEXP6GXI@Z@Z");
    todo("implement");
}

void (*SysInputImpl::GetKeyDownCB())(unsigned __int32) // 0x10007EB6
{
    mangled_assert("?GetKeyDownCB@SysInputImpl@@UAEP6GXI@ZXZ");
    todo("implement");
}

void SysInputImpl::SetSystemKeyCB(__int32, void (*)(unsigned __int32)) // 0x1000828E
{
    mangled_assert("?SetSystemKeyCB@SysInputImpl@@UAEXHP6GXI@Z@Z");
    todo("implement");
}

void KeyPressHandler(ButtonType bType, SysButtonState bState, unsigned __int32 bInfo) // 0x10007ED3
{
    mangled_assert("?KeyPressHandler@@YGXW4ButtonType@@W4SysButtonState@@I@Z");
    todo("implement");
}

bool SysInputImpl::Initialize() // 0x10007EBA
{
    mangled_assert("?Initialize@SysInputImpl@@UAE_NXZ");
    todo("implement");
}

void SysInputImpl::GetCursorPos(float &, float &) // 0x10007E4D
{
    mangled_assert("?GetCursorPos@SysInputImpl@@UAEXAAM0@Z");
    todo("implement");
}

void SysInputImpl::SetCursorPos(float, float) // 0x1000824D
{
    mangled_assert("?SetCursorPos@SysInputImpl@@UAEXMM@Z");
    todo("implement");
}

void SysInputImpl::SetCursorClip(float, float, float, float) // 0x10008160
{
    mangled_assert("?SetCursorClip@SysInputImpl@@UAEXMMMM@Z");
    todo("implement");
}

void SysInputImpl::ActivateClip(bool) // 0x10007CED
{
    mangled_assert("?ActivateClip@SysInputImpl@@UAEX_N@Z");
    todo("implement");
}

void SysInputImpl::WindowClip(bool) // 0x100082AF
{
    mangled_assert("?WindowClip@SysInputImpl@@UAEX_N@Z");
    todo("implement");
}

bool SysInputImpl::isWindowClipping() const // 0x10008483
{
    mangled_assert("?isWindowClipping@SysInputImpl@@QBE_NXZ");
    todo("implement");
}

unsigned __int32 SysInputImpl::LoadACursor(char const *) // 0x10008078
{
    mangled_assert("?LoadACursor@SysInputImpl@@UAEIPBD@Z");
    todo("implement");
}

void SysInputImpl::SetCursor(unsigned __int32) // 0x1000815A
{
    mangled_assert("?SetCursor@SysInputImpl@@UAEXI@Z");
    todo("implement");
}

float SysInputImpl::GetDragThreshold() // 0x10007E82
{
    mangled_assert("?GetDragThreshold@SysInputImpl@@UAEMXZ");
    todo("implement");
}

std::vector<std::pair<int,void (__stdcall*)(unsigned int)>,std::allocator<std::pair<int,void (__stdcall*)(unsigned int)> > > &SysInputImpl::getSystemKeyCallbacks() // 0x10008473
{
    mangled_assert("?getSystemKeyCallbacks@SysInputImpl@@QAEAAV?$vector@U?$pair@HP6GXI@Z@std@@V?$allocator@U?$pair@HP6GXI@Z@std@@@2@@std@@XZ");
    todo("implement");
}

long SysInputImpl::winProc(HWND__ *, unsigned __int32, unsigned __int32, long, bool &) // 0x1000856C
{
    mangled_assert("?winProc@SysInputImpl@@QAEJPAUHWND__@@IIJAA_N@Z");
    todo("implement");
}

/* ---------- private code */
#endif
