#if 0
#ifndef __ANIMEVENT_H__
#define __ANIMEVENT_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class AnimEvent
{
private:
    AnimEvent(AnimEvent const &);
public:
    AnimEvent(AnimEventSink const *, AnimEventData const &);
    ~AnimEvent();
    char const *getName() const;
    char const *findParam(char const *) const;
    void invalidateParam(char const *);
    void resetParams();
private:
    AnimEventSink const *m_pSink; // 0x0
    AnimEventData const &m_event; // 0x4
    std::bitset<32> m_paramOn; // 0x8
    AnimEvent &operator=(AnimEvent const &);
};
static_assert(sizeof(AnimEvent) == 12, "Invalid AnimEvent size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __ANIMEVENT_H__
#endif
