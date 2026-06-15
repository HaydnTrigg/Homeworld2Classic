#if 0
#ifndef __ENGINETRAILFRAMELIST_H__
#define __ENGINETRAILFRAMELIST_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class EngineTrailFrameList
{
public:
    EngineTrailFrameList();
    ~EngineTrailFrameList();
    EngineTrailFrame *newHead();
    void clear();
    void addHeadBlock(EngineTrailFrameBlock *);
    void addTailBlock(EngineTrailFrameBlock *);
    _inline unsigned __int32 getSize() const;
    EngineTrailFrame const *getHead() const;
    EngineTrailFrame *getHead();
    EngineTrailFrameBlock const *getHeadBlock() const;
    EngineTrailFrameBlock *getHeadBlock();
    EngineTrailFrameBlock *getTailBlock();
    void popTail();
    EngineTrailFrame *iteratorBegin();
    EngineTrailFrame *iteratorNext();
    EngineTrailFrame *riteratorBegin();
    EngineTrailFrame *riteratorNext();
    EngineTrailFrame *riteratorNextStep(unsigned __int32);
    static __int32 getTotalNumber();
private:
    EngineTrailFrameBlock *chopHeadBlock();
    EngineTrailFrameBlock *chopTailBlock();
    struct Iterator
    {
        EngineTrailFrameBlock *m_currentBlock; // 0x0
        __int32 m_currentIndex; // 0x4
    };
    static_assert(sizeof(Iterator) == 8, "Invalid Iterator size");
    static __int32 s_totalNumber;
    __int32 m_number; // 0x0
    EngineTrailFrameBlock *m_pHead; // 0x4
    EngineTrailFrameBlock *m_pTail; // 0x8
    EngineTrailFrameList::Iterator m_forwardIter; // 0xC
    EngineTrailFrameList::Iterator m_reverseIter; // 0x14
};
static_assert(sizeof(EngineTrailFrameList) == 28, "Invalid EngineTrailFrameList size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_inline unsigned __int32 EngineTrailFrameList::getSize() const // 0x4460C9
{
    mangled_assert("?getSize@EngineTrailFrameList@@QBEIXZ");
    todo("implement");
}

/* ---------- private code */

#endif // __ENGINETRAILFRAMELIST_H__
#endif
