#if 0
#ifndef __BACKGROUNDFX_H__
#define __BACKGROUNDFX_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class BackgroundFX
{
public:
    static bool Startup();
    static bool Shutdown();
    static BackgroundFX *Instance();
    BackgroundFX(BackgroundFX const &); /* compiler_generated() */
    BackgroundFX();
    ~BackgroundFX();
    unsigned __int32 AddFX(char const *, vector3 const &, matrix3 const &, float);
    void StopFX(unsigned __int32);
    void DestroyFX(unsigned __int32);
    CameraCommandExtUpdate *GetUpdater();
    virtual void Update(Camera const &);
    class Data;
private:
    BackgroundFX::Data *m_pimpl; // 0x4
    static BackgroundFX *s_instance;
public:
    BackgroundFX &operator=(BackgroundFX const &); /* compiler_generated() */
};
static_assert(sizeof(BackgroundFX) == 8, "Invalid BackgroundFX size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __BACKGROUNDFX_H__
#endif
