#if 0
#ifndef __NAVLIGHTS_H__
#define __NAVLIGHTS_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class NavLightStatic
{
public:
    NavLightStatic(NavLightStatic const &); /* compiler_generated() */
    NavLightStatic();
    ~NavLightStatic();
    struct NavLight
    {
        std::basic_string<char,std::char_traits<char>,std::allocator<char> > m_lightName; // 0x0
        vector4 m_colour; // 0x18
        std::basic_string<char,std::char_traits<char>,std::allocator<char> > m_styleString; // 0x28
        NavLightStyle *m_pNavLightStyle; // 0x40
        bool showSprite; // 0x44
        bool highEndOnly; // 0x45
        unsigned __int32 m_section; // 0x48
        float m_phase; // 0x4C
        float m_frequency; // 0x50
        float m_size; // 0x54
        float m_distance; // 0x58
        _inline NavLight(NavLightStatic::NavLight const &); /* compiler_generated() */
        _inline NavLight(); /* compiler_generated() */
        _inline ~NavLight(); /* compiler_generated() */
        NavLightStatic::NavLight &operator=(NavLightStatic::NavLight const &); /* compiler_generated() */
    };
    static_assert(sizeof(NavLight) == 92, "Invalid NavLight size");
    typedef std::vector<NavLightStatic::NavLight,std::allocator<NavLightStatic::NavLight> > NavLightCont;
    std::vector<NavLightStatic::NavLight,std::allocator<NavLightStatic::NavLight> > m_navLights; // 0x0
    NavLightStatic &operator=(NavLightStatic const &); /* compiler_generated() */
};
static_assert(sizeof(NavLightStatic) == 12, "Invalid NavLightStatic size");

class NavLights
{
public:
    NavLights(NavLights const &); /* compiler_generated() */
    NavLights(SobWithMesh *);
    ~NavLights();
    void setPower(float const);
    float getPower() const;
    void update(float const, bool const);
    _inline SobWithMesh const *getSobWithMesh() const;
    float getLightStatus(NavLightStyle const *, float, float) const;
    unsigned __int32 getNumJoints() const;
    _inline JointAnimStack const *getJoint(unsigned __int32) const;
    static void EnablePointLight(bool bEnable);
    static bool IsPointLightEnabled();
    typedef std::vector<JointAnimStack const *,std::allocator<JointAnimStack const *> > JointCont;
private:
    SobWithMesh *m_pSWM; // 0x0
    std::vector<JointAnimStack const *,std::allocator<JointAnimStack const *> > m_joints; // 0x4
    std::vector<LightHandle,std::allocator<LightHandle> > lightHandles; // 0x10
    float m_powerStatus; // 0x1C
    float m_localTime; // 0x20
    bool m_bUpdateWhenVisible; // 0x24
public:
    NavLights &operator=(NavLights const &); /* compiler_generated() */
};
static_assert(sizeof(NavLights) == 40, "Invalid NavLights size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_inline SobWithMesh const *NavLights::getSobWithMesh() const // 0x60A596
{
    mangled_assert("?getSobWithMesh@NavLights@@QBEPBVSobWithMesh@@XZ");
    todo("implement");
}

_inline JointAnimStack const *NavLights::getJoint(unsigned __int32) const // 0x60A56E
{
    mangled_assert("?getJoint@NavLights@@QBEPBVJointAnimStack@@I@Z");
    todo("implement");
}

/* ---------- private code */

#endif // __NAVLIGHTS_H__
#endif
