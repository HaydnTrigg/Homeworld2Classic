#if 0
/* ---------- headers */

#include "decomp.h"
#include <xstring>
#include <xmemory0>
#include <pch.h>
#include <new>
#include <xstddef>
#include <type_traits>
#include <xutility>
#include <iosfwd>
#include <vector>
#include <xmemory>
#include <Ship\FlightManeuver.h>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- private variables */

/* ---------- public code */

_extern _sub_49BCF9(FlightManeuver *const, char const *);
FlightManeuver::FlightManeuver(char const *) // 0x49BCF9
{
    mangled_assert("??0FlightManeuver@@QAE@PBD@Z");
    todo("implement");
    _sub_49BCF9(this, arg);
}

_extern unsigned __int32 _sub_49BEF3(FlightManeuver const *const);
unsigned __int32 FlightManeuver::getNumberOfPoints() const // 0x49BEF3
{
    mangled_assert("?getNumberOfPoints@FlightManeuver@@QBEIXZ");
    todo("implement");
    unsigned __int32 __result = _sub_49BEF3(this);
    return __result;
}

_extern FlightManeuver::FlightPoint const &_sub_49BEE6(FlightManeuver const *const, unsigned __int32);
FlightManeuver::FlightPoint const &FlightManeuver::getFlightPoint(unsigned __int32) const // 0x49BEE6
{
    mangled_assert("?getFlightPoint@FlightManeuver@@QBEABUFlightPoint@1@I@Z");
    todo("implement");
    FlightManeuver::FlightPoint const & __result = _sub_49BEE6(this, arg);
    return __result;
}

_extern void _sub_49BE87(FlightManeuver *const, FlightManeuver::FlightPoint const &);
void FlightManeuver::addFlightPoint(FlightManeuver::FlightPoint const &) // 0x49BE87
{
    mangled_assert("?addFlightPoint@FlightManeuver@@QAEXABUFlightPoint@1@@Z");
    todo("implement");
    _sub_49BE87(this, arg);
}

_extern bool _sub_49BEFD(FlightManeuver const *const, unsigned __int32);
bool FlightManeuver::isValidIndex(unsigned __int32) const // 0x49BEFD
{
    mangled_assert("?isValidIndex@FlightManeuver@@QBE_NI@Z");
    todo("implement");
    bool __result = _sub_49BEFD(this, arg);
    return __result;
}

/* ---------- private code */
#endif
