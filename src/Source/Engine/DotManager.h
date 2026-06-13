#if 0
#ifndef __DOTMANAGER_H__
#define __DOTMANAGER_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class DotManager
{
public:
    static DotManager *i();
    static bool release();
    void batchPoint(vector4 const &, vector4 const &, float const, BlendFunc, BlendFunc);
    void flushPointBatch();
private:
    DotManager();
    ~DotManager();
    static DotManager *create();
    void startup();
    void shutdown();
    class Data;
    DotManager::Data *m_pimpl; // 0x0
    static DotManager *s_instance;
};
static_assert(sizeof(DotManager) == 4, "Invalid DotManager size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __DOTMANAGER_H__
#endif
