#if 0
/* ---------- headers */

#include "decomp.h"
#include <assist\typemagic.h>
#include <Util\pch.h>
#include <memory\memorylib.h>
#include <Util\colour.h>
#include <debug\ctassert.h>
#include <new>
#include <xstddef>
#include <mathlib\vector4.h>
#include <mathlib\mathlibdll.h>
#include <mathlib\fastmath.h>
#include <algorithm>
#include <xmemory>
#include <xmemory0>
#include <type_traits>
#include <debug\db.h>
#include <xutility>
#include <utility>
#include <iosfwd>
#include <Util\statmonitor.h>
#include <vector>
#include <Util\utilexports.h>
#include <platform\timer.h>
#include <Util\types.h>
#include <xstring>
#include <platform\platformexports.h>
#include <math.h>
#include <fileio\filepath.h>
#include <fileio\fileioexports.h>
#include <fileio\bytestream.h>
#include <assist\fixedstring.h>
#include <assist\stlexstring.h>
#include <wchar.h>
#include <fileio\filestream.h>

/* ---------- constants */

/* ---------- definitions */

typedef unsigned __int32 udword;
typedef __int32 sdword;
typedef float real32;
typedef long long timerVal;
typedef vector4 colour;
typedef float value_type;
typedef unsigned __int32 size_type;
typedef __int32 difference_type;
typedef float *pointer;
typedef float const *const_pointer;
typedef float &reference;
typedef float const &const_reference;
typedef std::allocator<float> _Alloc;
typedef std::_Wrap_alloc<std::allocator<float> > other;
typedef std::_Wrap_alloc<std::allocator<float> > _Alty;
typedef std::_Vector_alloc<0,std::_Vec_base_types<float,std::allocator<float> > > _Myt;
typedef std::_Vector_iterator<std::_Vector_val<std::_Simple_types<float> > > iterator;
typedef std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<float> > > const_iterator;
typedef char _Elem;
typedef char *type;
typedef std::_Vector_iterator<std::_Vector_val<std::_Simple_types<StatMonitorChannel *> > > ChannelContI;
typedef std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<StatMonitorChannel *> > > ChannelContCI;
typedef std::vector<StatMonitorChannel *,std::allocator<StatMonitorChannel *> > ChannelCont;
typedef StatMonitorChannel **_Tptr;
typedef std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<StatMonitorChannel *> > > _Myiter;
typedef StatMonitorChannel *const *_Unchecked_type;
typedef std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<StatMonitorChannel *> > > _Mybase;
typedef char char_type;
typedef void *void_pointer;
typedef void const *const_void_pointer;
typedef std::integral_constant<bool,0> propagate_on_container_copy_assignment;
typedef std::integral_constant<bool,0> propagate_on_container_move_assignment;
typedef std::integral_constant<bool,0> propagate_on_container_swap;
typedef std::basic_string<char,std::char_traits<char>,std::allocator<char> > stl_string;
typedef std::vector<fstring<260>,std::allocator<fstring<260> > > FoundFiles;

/* ---------- prototypes */

/* ---------- globals */

extern StatMonitor *statMonitorRender; // 0x10007234

/* ---------- private variables */

_static
{
    extern unsigned __int32 const k_bufferLength; // 0x1000527C
    extern vector4 defColors[10]; // 0x10007070
    extern float statMonitorAutoRanges[28]; // 0x10007000
}

/* ---------- public code */

StatMonitorChannel::StatMonitorChannel(char const *) // 0x10002D66
{
    mangled_assert("??0StatMonitorChannel@@QAE@PBD@Z");
    todo("implement");
}

StatMonitorChannel::~StatMonitorChannel() // 0x10002E58
{
    mangled_assert("??1StatMonitorChannel@@QAE@XZ");
    todo("implement");
}

_inline StatMonitor &StatMonitor::operator=(StatMonitor const &) // 0x10002F62
{
    mangled_assert("??4StatMonitor@@QAEAAV0@ABV0@@Z");
    compiler_generated();
    todo("implement");
}

_inline StatMonitorChannel &StatMonitorChannel::operator=(StatMonitorChannel const &) // 0x10002FAD
{
    mangled_assert("??4StatMonitorChannel@@QAEAAV0@ABV0@@Z");
    compiler_generated();
    todo("implement");
}

_inline StatMonitor::StatMonitor(StatMonitor const &) // 0x10002C60
{
    mangled_assert("??0StatMonitor@@QAE@ABV0@@Z");
    compiler_generated();
    todo("implement");
}

StatMonitor::StatMonitor(char *, float, float, float, float) // 0x10002CAB
{
    mangled_assert("??0StatMonitor@@QAE@PADMMMM@Z");
    todo("implement");
}

_inline StatMonitorChannel::StatMonitorChannel(StatMonitorChannel const &) // 0x10002CF3
{
    mangled_assert("??0StatMonitorChannel@@QAE@ABV0@@Z");
    compiler_generated();
    todo("implement");
}

StatMonitor::~StatMonitor() // 0x10002E04
{
    mangled_assert("??1StatMonitor@@QAE@XZ");
    todo("implement");
}

void StatMonitor::disableAllChannels() // 0x1000315C
{
    mangled_assert("?disableAllChannels@StatMonitor@@QAEXXZ");
    todo("implement");
}

void StatMonitor::setChannelName(unsigned __int32, char const *) // 0x100034DC
{
    mangled_assert("?setChannelName@StatMonitor@@QAEXIPBD@Z");
    todo("implement");
}

void StatMonitor::setChannelColor(unsigned __int32, vector4 const &) // 0x1000346F
{
    mangled_assert("?setChannelColor@StatMonitor@@QAEXIABVvector4@@@Z");
    todo("implement");
}

void StatMonitor::setChannelActive(unsigned __int32, bool) // 0x10003448
{
    mangled_assert("?setChannelActive@StatMonitor@@QAEXI_N@Z");
    todo("implement");
}

void StatMonitor::setChannelMin(unsigned __int32, float) // 0x100034B9
{
    mangled_assert("?setChannelMin@StatMonitor@@QAEXIM@Z");
    todo("implement");
}

void StatMonitor::setChannelMax(unsigned __int32, float) // 0x10003496
{
    mangled_assert("?setChannelMax@StatMonitor@@QAEXIM@Z");
    todo("implement");
}

void StatMonitor::startFileLog(char const *) // 0x100035EB
{
    mangled_assert("?startFileLog@StatMonitor@@QAEXPBD@Z");
    todo("implement");
}

void StatMonitor::stopFileLog() // 0x10003756
{
    mangled_assert("?stopFileLog@StatMonitor@@QAEXXZ");
    todo("implement");
}

void StatMonitor::logValue(unsigned __int32, float) // 0x1000323C
{
    mangled_assert("?logValue@StatMonitor@@QAEXIM@Z");
    todo("implement");
}

void StatMonitor::logValue(StatMonitorChannel *, float) // 0x10003266
{
    mangled_assert("?logValue@StatMonitor@@QAEXPAVStatMonitorChannel@@M@Z");
    todo("implement");
}

void StatMonitor::display() // 0x10003175
{
    mangled_assert("?display@StatMonitor@@QAEXXZ");
    todo("implement");
}

void StatMonitor::nextFrame() // 0x1000327D
{
    mangled_assert("?nextFrame@StatMonitor@@QAEXXZ");
    todo("implement");
}

StatMonitorChannel *StatMonitor::getChannelFromName(char const *) const // 0x100031C4
{
    mangled_assert("?getChannelFromName@StatMonitor@@ABEPAVStatMonitorChannel@@PBD@Z");
    todo("implement");
}

void StatMonitor::clearThisFrameTimes() // 0x10003134
{
    mangled_assert("?clearThisFrameTimes@StatMonitor@@QAEXXZ");
    todo("implement");
}

void StatMonitor::setAutoRanging(bool) // 0x1000343E
{
    mangled_assert("?setAutoRanging@StatMonitor@@QAEX_N@Z");
    todo("implement");
}

void StatMonitor::startChannelTimer(char const *, float, float, bool, char const *) // 0x10003516
{
    mangled_assert("?startChannelTimer@StatMonitor@@QAEXPBDMM_N0@Z");
    todo("implement");
}

void StatMonitor::stopChannelTimer(char const *) // 0x1000373D
{
    mangled_assert("?stopChannelTimer@StatMonitor@@QAEXPBD@Z");
    todo("implement");
}

void StatMonitor::reportChannelTimer(char const *) // 0x10003384
{
    mangled_assert("?reportChannelTimer@StatMonitor@@QAEXPBD@Z");
    todo("implement");
}

float StatMonitor::getChannelTime(char const *) // 0x1000320B
{
    mangled_assert("?getChannelTime@StatMonitor@@QAEMPBD@Z");
    todo("implement");
}

/* ---------- private code */
#endif
