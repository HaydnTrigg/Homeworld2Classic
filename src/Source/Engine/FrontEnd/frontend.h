#if 0
#ifndef __FRONTEND_H__
#define __FRONTEND_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class FrontEnd
{
public:
    enum FEStartupCode
    {
        FE_OSStartup = 0,
        FE_GameOverStartup,
        FE_Load,
        FE_Restart,
    };
    enum FEShutdownCode
    {
        FE_OSShutdown = 0,
        FE_GameStartShutdown,
    };
    virtual _inline ~FrontEnd();
    virtual void StartFrontEnd(FrontEnd::FEStartupCode) = 0;
    virtual void ShutdownFrontEnd() = 0;
    FrontEnd(FrontEnd const &); /* compiler_generated() */
    _inline FrontEnd(); /* compiler_generated() */
    FrontEnd &operator=(FrontEnd const &); /* compiler_generated() */
};
static_assert(sizeof(FrontEnd) == 4, "Invalid FrontEnd size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_inline FrontEnd::~FrontEnd() // 0x46B5F0
{
    mangled_assert("??1FrontEnd@@UAE@XZ");
    todo("implement");
}

/* ---------- private code */

#endif // __FRONTEND_H__
#endif
