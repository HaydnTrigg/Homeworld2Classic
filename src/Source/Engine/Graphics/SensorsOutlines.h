#if 0
#ifndef __SENSORSOUTLINES_H__
#define __SENSORSOUTLINES_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class SensorsOutlines
{
public:
    enum ArcType
    {
        AT_Nebula = 0,
        AT_DustCloud,
        AT_Number,
    };
    SensorsOutlines();
    ~SensorsOutlines();
    void SetDirty(unsigned __int32);
    void Render(rndTable &, Universe const &);
private:
    void RegisterObservers();
    void RemoveObservers();
    void Update(unsigned __int32, Selection const &);
    class Data;
    SensorsOutlines::Data *m_pimpl; // 0x0
    class Observer;
};
static_assert(sizeof(SensorsOutlines) == 4, "Invalid SensorsOutlines size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __SENSORSOUTLINES_H__
#endif
