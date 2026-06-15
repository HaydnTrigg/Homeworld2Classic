#if 0
#ifndef __ECG_H__
#define __ECG_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class ECGHeartbeat
{
public:
    ECGHeartbeat(ECGHeartbeat const &); /* compiler_generated() */
    ECGHeartbeat(char const *, __int32);
    ~ECGHeartbeat();
    _inline void setName(char const *);
    void setColor(vector4 const &);
    void setNSamples(__int32);
    void setCurrentTime(float);
    float logBeat(float);
private:
    std::basic_string<char,std::char_traits<char>,std::allocator<char> > m_name; // 0x0
    vector4 m_color; // 0x18
    float m_currentTime; // 0x28
    __int32 m_nSamples; // 0x2C
    __int32 m_iCurrentSample; // 0x30
    std::vector<float,std::allocator<float> > m_samples; // 0x34
public:
    ECGHeartbeat &operator=(ECGHeartbeat const &); /* compiler_generated() */
    void __dflt_ctor_closure(); /* compiler_generated() */
};
static_assert(sizeof(ECGHeartbeat) == 64, "Invalid ECGHeartbeat size");

class ElectroCardioGraph
{
public:
    ElectroCardioGraph(__int32);
    ~ElectroCardioGraph();
    void setResolution(float);
    void setScreenLayout(float, float, float);
    void reset();
    float logBeat(__int32, float);
    void specChannel(__int32, char const *, vector4 const &);
    void render();
private:
    float m_tResolution; // 0x0
    float m_currentTime; // 0x4
    float m_screenX; // 0x8
    float m_screenY; // 0xC
    float m_screenWidth; // 0x10
    __int32 m_nHeartbeats; // 0x14
    ECGHeartbeat *m_heartbeats; // 0x18
public:
    void __dflt_ctor_closure(); /* compiler_generated() */
};
static_assert(sizeof(ElectroCardioGraph) == 28, "Invalid ElectroCardioGraph size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_inline void ECGHeartbeat::setName(char const *) // 0x5ECCB1
{
    mangled_assert("?setName@ECGHeartbeat@@QAEXPBD@Z");
    todo("implement");
}

/* ---------- private code */

#endif // __ECG_H__
#endif
