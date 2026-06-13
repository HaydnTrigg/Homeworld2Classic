#if 0
#ifndef __UNIVERSEINTERP_H__
#define __UNIVERSEINTERP_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class UniverseInterp :
    public Task
{
public:
    static bool Startup();
    static bool Shutdown();
    static UniverseInterp *Instance();
    UniverseInterp(UniverseInterp const &); /* compiler_generated() */
private:
    UniverseInterp();
    virtual ~UniverseInterp() override;
public:
    virtual __int32 taskFunction(float) override;
    void attachCamera(CameraOrbitTarget *);
    class Data;
private:
    boost::scoped_ptr<UniverseInterp::Data> m_pimpl; // 0x30
public:
    UniverseInterp &operator=(UniverseInterp const &); /* compiler_generated() */
};
static_assert(sizeof(UniverseInterp) == 52, "Invalid UniverseInterp size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __UNIVERSEINTERP_H__
#endif
