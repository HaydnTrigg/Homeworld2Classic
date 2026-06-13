#if 0
#ifndef __FLIGHTMANEUVER_H__
#define __FLIGHTMANEUVER_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class FlightManeuver
{
public:
    FlightManeuver(FlightManeuver const &); /* compiler_generated() */
    FlightManeuver(char const *);
    char const *getName() const;
    struct FlightPoint
    {
        vector3 m_forward; // 0x0
        vector3 m_up; // 0xC
        float m_delay; // 0x18
        float m_wishForwardBackwardSpeed; // 0x1C
        float m_wishLeftRightSpeed; // 0x20
        float m_wishUpDownSpeed; // 0x24
        float m_wishRotationXSpeed; // 0x28
        float m_wishRotationYSpeed; // 0x2C
        float m_wishRotationZSpeed; // 0x30
        bool m_ignoreOrientation; // 0x34
        float m_accelMultiplier; // 0x38
        float m_rotationAccelMultiplier; // 0x3C
        _inline FlightPoint(); /* compiler_generated() */
    };
    static_assert(sizeof(FlightPoint) == 64, "Invalid FlightPoint size");
    unsigned __int32 getNumberOfPoints() const;
    FlightManeuver::FlightPoint const &getFlightPoint(unsigned __int32) const;
    void addFlightPoint(FlightManeuver::FlightPoint const &);
    bool isValidIndex(unsigned __int32) const;
protected:
    std::basic_string<char,std::char_traits<char>,std::allocator<char> > m_name; // 0x0
    std::vector<FlightManeuver::FlightPoint,std::allocator<FlightManeuver::FlightPoint> > m_points; // 0x18
public:
    _inline ~FlightManeuver(); /* compiler_generated() */
    FlightManeuver &operator=(FlightManeuver const &); /* compiler_generated() */
};
static_assert(sizeof(FlightManeuver) == 36, "Invalid FlightManeuver size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __FLIGHTMANEUVER_H__
#endif
