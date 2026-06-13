#if 0
#ifndef __AUTOLOD_H__
#define __AUTOLOD_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class AutoLOD
{
public:
    static bool Startup();
    static bool Shutdown();
    static AutoLOD *Instance();
    AutoLOD();
    ~AutoLOD();
    void SetDesiredFPS(float);
    void SetEnabled(bool);
    bool IsEnabled() const;
    void SetAllowGoblins(bool);
    void EndFrame();
    float GetScaleFactor() const;
    float GetRenderTime() const;
    unsigned __int32 GetLOD(Sob const &, float, unsigned __int32 const);
    void GetRenderAlphas(Ship const &, float, float &, float &) const;
    void GetDebugString(char *, unsigned __int32);
private:
    void Adjust(float);
    float AverageFrame(float);
    class Data;
    AutoLOD::Data *m_pimpl; // 0x0
    static AutoLOD *s_instance;
};
static_assert(sizeof(AutoLOD) == 4, "Invalid AutoLOD size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __AUTOLOD_H__
#endif
