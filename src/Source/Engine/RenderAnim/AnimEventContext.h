#if 0
#ifndef __ANIMEVENTCONTEXT_H__
#define __ANIMEVENTCONTEXT_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class AnimEventContext
{
public:
    enum ModeChange
    {
        MC_Show = 0,
        MC_Hide,
        MC_Stop,
    };
    typedef Callback::Obj1wRet<bool,enum AnimEventContext::ModeChange> CBFunc;
    void Bind(Callback::Obj1wRet<bool,enum AnimEventContext::ModeChange> const &);
    void Clear();
    void Post(AnimEventContext::ModeChange);
    bool IsEmpty() const;
    typedef std::vector<Callback::Obj1wRet<bool,enum AnimEventContext::ModeChange>,std::allocator<Callback::Obj1wRet<bool,enum AnimEventContext::ModeChange> > > CallbackCont;
private:
    std::vector<Callback::Obj1wRet<bool,enum AnimEventContext::ModeChange>,std::allocator<Callback::Obj1wRet<bool,enum AnimEventContext::ModeChange> > > m_cCallback; // 0x0
public:
    _inline AnimEventContext(AnimEventContext const &); /* compiler_generated() */
    _inline AnimEventContext(); /* compiler_generated() */
    _inline ~AnimEventContext(); /* compiler_generated() */
    AnimEventContext &operator=(AnimEventContext const &); /* compiler_generated() */
};
static_assert(sizeof(AnimEventContext) == 12, "Invalid AnimEventContext size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __ANIMEVENTCONTEXT_H__
#endif
