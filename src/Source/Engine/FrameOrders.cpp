#if 0
/* ---------- headers */

#include "decomp.h"
#include <xlocale>
#include <Engine\DynamicPoint.h>
#include <stdexcept>
#include <xstring>
#include <xmemory0>
#include <fileio\bytestream.h>
#include <fileio\fileioexports.h>
#include <Engine\fixedpoint.h>
#include <memory\memorylib.h>
#include <Engine\SOBGroupManager.h>
#include <assist\fixedstring.h>
#include <xfunctional>
#include <new>
#include <xstddef>
#include <type_traits>
#include <Engine\syncChecking.h>
#include <xlocinfo>
#include <Engine\config.h>
#include <Engine\sob.h>
#include <xutility>
#include <xatomic0.h>
#include <utility>
#include <iosfwd>
#include <vector>
#include <xmemory>
#include <platform\timer.h>
#include <platform\platformexports.h>
#include <xhash>
#include <boost\noncopyable.hpp>
#include <list>
#include <fileio\logfile.h>
#include <xtree>
#include <Engine\orders_base.h>
#include <Engine\Universe.h>
#include <util\types.h>
#include <xfacet>
#include <Engine\Waypoint.h>
#include <Engine\SobUnmoveable.h>
#include <Engine\pathpoints.h>
#include <Collision\BVH\octree.h>
#include <Collision\BVH\span.h>
#include <Engine\sobtypes.h>
#include <Engine\selection.h>
#include <Engine\savegamedef.h>
#include <Engine\HyperspaceManager.h>
#include <Engine\commandtype.h>
#include <sstream>
#include <Engine\pch.h>
#include <Engine\FrameOrders.h>
#include <Engine\SquadronList.h>
#include <algorithm>
#include <assist\stlexsmallvector.h>
#include <Engine\dbdefines.h>
#include <boost\detail\shared_count.hpp>
#include <Engine\UnitCaps\UnitCaps.h>
#include <boost\detail\lwm_win32.hpp>
#include <Engine\orders.h>
#include <Engine\gamemsg.h>
#include <system_error>
#include <wchar.h>
#include <istream>
#include <ostream>
#include <ios>
#include <Engine\sobid.h>
#include <streambuf>
#include <xiosbase>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- private variables */

/* ---------- public code */

FrameOrders::FrameOrders(unsigned __int32) // 0x69D4DE
{
    mangled_assert("??0FrameOrders@@QAE@I@Z");
    todo("implement");
}

FrameOrders::FrameOrders(unsigned short, std::vector<Order *,std::allocator<Order *> > &) // 0x69D49D
{
    mangled_assert("??0FrameOrders@@AAE@GAAV?$vector@PAVOrder@@V?$allocator@PAVOrder@@@std@@@std@@@Z");
    todo("implement");
}

std::auto_ptr<FrameOrders> FrameOrders::Extract(std::basic_istream<char,std::char_traits<char> > &in) // 0x69D7FC
{
    mangled_assert("?Extract@FrameOrders@@SG?AV?$auto_ptr@VFrameOrders@@@std@@AAV?$basic_istream@DU?$char_traits@D@std@@@3@@Z");
    todo("implement");
}

FrameOrders::~FrameOrders() // 0x69D506
{
    mangled_assert("??1FrameOrders@@QAE@XZ");
    todo("implement");
}

void FrameOrders::AddOrder(std::auto_ptr<Order>) // 0x69D5CE
{
    mangled_assert("?AddOrder@FrameOrders@@QAEXV?$auto_ptr@VOrder@@@std@@@Z");
    todo("implement");
}

void FrameOrders::Execute() const // 0x69D5FD
{
    mangled_assert("?Execute@FrameOrders@@QBEXXZ");
    todo("implement");
}

void FrameOrders::Serialize(std::basic_ostream<char,std::char_traits<char> > &) const // 0x69D8EE
{
    mangled_assert("?Serialize@FrameOrders@@QBEXAAV?$basic_ostream@DU?$char_traits@D@std@@@std@@@Z");
    todo("implement");
}

void FrameOrders::swap(FrameOrders &) // 0x69DBEA
{
    mangled_assert("?swap@FrameOrders@@QAEXAAV1@@Z");
    todo("implement");
}

/* ---------- private code */
#endif
