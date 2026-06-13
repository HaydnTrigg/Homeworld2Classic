#if 0
#ifndef __SIMVIS_H__
#define __SIMVIS_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class SimVis
{
public:
    static bool startup();
    static bool shutdown();
    static SimVis *i();
    void addHandler(SimVisHandler *);
    void removeHandler(SimVisHandler *);
    void update(Universe const &, Player const *, Camera const &, float const, float const);
    void draw(Universe const &, Player const *, Camera const &, float const);
private:
    SimVis();
    ~SimVis();
protected:
    void updateHandlers(SimVisDisplayData &);
private:
    static SimVis *s_instance;
    class Data;
    SimVis::Data *m_pimpl; // 0x0
};
static_assert(sizeof(SimVis) == 4, "Invalid SimVis size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __SIMVIS_H__
#endif
