#if 0
#ifndef __CULLFX_H__
#define __CULLFX_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class CullFX
{
public:
    enum Stat
    {
        STAT_Passed = 0,
        STAT_Rejected,
        STAT_NonExistant,
        STAT_Number,
    };
    class CullPred
    {
    public:
        virtual bool Test(FXManager::Type const *, vector3 const &, float const) const = 0;
        CullPred(CullFX::CullPred const &); /* compiler_generated() */
        _inline CullPred(); /* compiler_generated() */
        CullFX::CullPred &operator=(CullFX::CullPred const &); /* compiler_generated() */
    };
    static_assert(sizeof(CullPred) == 4, "Invalid CullPred size");
    static bool Startup();
    static bool Shutdown();
    static CullFX *Instance();
    void ResetStats();
    float GetStat(unsigned __int32);
    void RegisterCullPred(CullFX::CullPred *);
    bool Test(char const *, vector3 const &, float const);
protected:
    CullFX();
    ~CullFX();
    class Data;
private:
    CullFX::Data *m_pimpl; // 0x0
    static CullFX *s_instance;
};
static_assert(sizeof(CullFX) == 4, "Invalid CullFX size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __CULLFX_H__
#endif
