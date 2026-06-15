#if 0
#ifndef __SQUADRONQUEUE_H__
#define __SQUADRONQUEUE_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class SquadronQueue :
    private Saveable
{
public:
    SquadronQueue(SquadronQueue const &); /* compiler_generated() */
    SquadronQueue();
    virtual void addToQueue(Squadron *);
    virtual void removeFromQueue(Squadron *);
    bool atFrontOfQueue(Squadron *);
    bool isSquadInQueue(Squadron *);
    virtual bool save(SaveGameData *, SaveType) override;
    virtual bool restore(SaveGameData *) override;
    virtual _inline bool isDeterministic() override;
    virtual void postRestore() override;
    virtual _inline char const *saveToken() override;
    static char const m_saveToken[0];
    static SaveData const m_saveData[0];
protected:
    std::list<Squadron *,std::allocator<Squadron *> > m_queue; // 0x4
public:
    virtual _inline ~SquadronQueue() override; /* compiler_generated() */
    SquadronQueue &operator=(SquadronQueue const &); /* compiler_generated() */
};
static_assert(sizeof(SquadronQueue) == 12, "Invalid SquadronQueue size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_inline bool SquadronQueue::isDeterministic() // 0x6BB11C
{
    mangled_assert("?isDeterministic@SquadronQueue@@UAE_NXZ");
    todo("implement");
}

_inline char const *SquadronQueue::saveToken() // 0x6BB1C4
{
    mangled_assert("?saveToken@SquadronQueue@@UAEPBDXZ");
    todo("implement");
}

/* ---------- private code */

#endif // __SQUADRONQUEUE_H__
#endif
