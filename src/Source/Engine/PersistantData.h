#if 0
#ifndef __PERSISTANTDATA_H__
#define __PERSISTANTDATA_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class PersistantData
{
public:
    bool Save(Universe *, __int32);
    bool Load(Universe *, __int32, unsigned __int32);
    bool PreLoad(__int32);
    void Reset();
    __int32 LastMission();
    bool LoadStartFleet(unsigned __int32, __int32, Universe *, char const *, unsigned __int32);
private:
    void Process(unsigned __int32, Universe *, LuaConfig &, unsigned __int32, char const *);
    void PreProcess(LuaConfig &);
};
static_assert(sizeof(PersistantData) == 1, "Invalid PersistantData size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __PERSISTANTDATA_H__
#endif
