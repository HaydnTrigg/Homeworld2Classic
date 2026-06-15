#if 0
/* ---------- headers */

#include "decomp.h"
#include <xstring>
#include <platform\osdef.h>
#include <xmemory0>
#include <Objects\pch.h>
#include <util\statmonitor.h>
#include <util\utilexports.h>
#include <platform\timer.h>
#include <platform\platformexports.h>
#include <Objects\Core.h>
#include <gl\types.h>
#include <Mathlib\matvec.h>
#include <Mathlib\vector2.h>
#include <new>
#include <xstddef>
#include <gl\lotypes.h>
#include <type_traits>
#include <gl\r_types.h>
#include <xutility>
#include <utility>
#include <iosfwd>
#include <vector>
#include <xmemory>
#include <math.h>
#include <map>
#include <xtree>
#include <Objects\ClipRect.h>
#include <gl\r_defines.h>
#include <gl\glext.h>
#include <util\colour.h>
#include <Mathlib\matrix4.h>
#include <util\types.h>
#include <Mathlib\vector4.h>
#include <Mathlib\vector3.h>
#include <Mathlib\mathlibdll.h>
#include <Mathlib\fastmath.h>
#include <Mathlib\matrix3.h>
#include <Objects\StatMonitorRender.h>
#include <Objects\Objects.h>
#include <Objects\CompiledText.h>
#include <Objects\FontSystem.h>
#include <Objects\BitmapFont.h>

/* ---------- constants */

/* ---------- definitions */

typedef std::_Vector_iterator<std::_Vector_val<std::_Simple_types<StatMonitorChannel *> > > ChannelContI;
typedef std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<StatMonitorChannel *> > > ChannelContCI;
typedef std::vector<StatMonitorChannel *,std::allocator<StatMonitorChannel *> > ChannelCont;
typedef stdext::hash_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,Typeface *,stdext::hash_compare<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,Typeface *> > > TypefaceList;
typedef unsigned __int32 LabelHandle;
typedef std::map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,BitmapFont *,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,BitmapFont *> > > BitmapFontList;

/* ---------- prototypes */


_static void setSpaces(char *spacebuf, unsigned __int32 spaces);

/* ---------- globals */

/* ---------- private variables */

_static
{
    extern __int32 bufferLength; // 0x1010DA4C
}

/* ---------- public code */

StatMonitorRender::StatMonitorRender(rndTable &) // 0x10098BA0
{
    mangled_assert("??0StatMonitorRender@@QAE@AAUrndTable@@@Z");
    todo("implement");
}

void StatMonitorRender::display(float const, float const, StatMonitor const &) // 0x10098C20
{
    mangled_assert("?display@StatMonitorRender@@QAEXMMABVStatMonitor@@@Z");
    todo("implement");
}

void StatMonitorRender::displayChannelTimes(StatMonitor const &, unsigned __int32) // 0x10098EA0
{
    mangled_assert("?displayChannelTimes@StatMonitorRender@@AAEXABVStatMonitor@@I@Z");
    todo("implement");
}

void StatMonitorRender::displayGraphs(StatMonitor const &, float, float) // 0x10099010
{
    mangled_assert("?displayGraphs@StatMonitorRender@@AAEXABVStatMonitor@@MM@Z");
    todo("implement");
}

void StatMonitorRender::renderChildrenChannels(StatMonitor const &, unsigned __int32, unsigned __int32, float, float, unsigned __int32 *, StatMonitorChannel const *, FontSystem *) // 0x10099260
{
    mangled_assert("?renderChildrenChannels@StatMonitorRender@@AAEXABVStatMonitor@@IIMMPAIPBVStatMonitorChannel@@PAVFontSystem@@@Z");
    todo("implement");
}

/* ---------- private code */

_static void setSpaces(char *spacebuf, unsigned __int32 spaces) // 0x10099410
{
    mangled_assert("setSpaces");
    todo("implement");
}
#endif
