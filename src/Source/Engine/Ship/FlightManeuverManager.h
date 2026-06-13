#if 0
#ifndef __FLIGHTMANEUVERMANAGER_H__
#define __FLIGHTMANEUVERMANAGER_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class FlightManeuverManager
{
public:
    static FlightManeuverManager *instance();
    static bool release();
    unsigned __int32 getManeuverID(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &) const;
    FlightManeuver const *getManeuver(unsigned __int32) const;
    static bool startup();
    static bool shutdown();
    bool isValidID(unsigned __int32) const;
    void reloadManeuvers();
    FlightManeuverManager(FlightManeuverManager const &); /* compiler_generated() */
private:
    FlightManeuverManager();
    ~FlightManeuverManager();
    std::vector<FlightManeuver *,std::allocator<FlightManeuver *> > m_maneuvers; // 0x0
    std::map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,unsigned int,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,unsigned int> > > m_nameToIDMap; // 0xC
    static FlightManeuverManager *create();
    static FlightManeuverManager *s_instance;
    bool loadManeuver(LuaConfig &);
    void loadManeuvers();
    void resetManeuvers();
public:
    FlightManeuverManager &operator=(FlightManeuverManager const &); /* compiler_generated() */
};
static_assert(sizeof(FlightManeuverManager) == 20, "Invalid FlightManeuverManager size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __FLIGHTMANEUVERMANAGER_H__
#endif
